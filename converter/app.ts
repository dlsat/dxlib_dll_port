import fs = require('fs');
import path = require('path');
var parser = require('./parser'); // not ts
import rules = require('./replacerules');

interface FuncDef {
    name: string;
    returnType: string;
    attributes: string[];
    params: ParameterDef[];
    isOverloaded?: boolean;
}
interface ParameterDef {
    name?: string;
    type: string;
    defaultValue?: string;
}
class Main {
    getFiles(srcpath:string) {
        return fs.readdirSync(srcpath).filter(function (file) {
            return !fs.statSync(path.join(srcpath, file)).isDirectory();
        });
    }
    getDirectories(srcpath:string) {
        return fs.readdirSync(srcpath).filter(function (file) {
            return fs.statSync(path.join(srcpath, file)).isDirectory();
        });
    }

    libFuncList: { [key: string]: FuncDef[] } = {};
    dllFuncList: { [key: string]: FuncDef[] } = {};
    preheader = "";
    header = "";

    run() {
        this.parseDxLibHeader();
        this.parseDxDLLHeader();

        let m = this;
        let replace = new rules.ReplaceRules(m.libFuncList, m.dllFuncList);
        let out = replace.output();
        let headerfile = `
#pragma once

#include <windows.h>
#ifdef _WIN64
#pragma comment(lib, "dxlib_x64.lib")
#else
#pragma comment(lib, "dxlib.lib")
#endif

` + m.preheader + m.header + `
` + out[0];
        let excfile = `
#include "DxLib.h"
`+out[1];
fs.writeFileSync("./out/DxLib.h", headerfile, "utf8");
fs.writeFileSync("./out/DxLib_exc.cpp", excfile, "utf8");

    }
    parseDxDLLHeader() {
        let dxdllheader = "DxLibDotNet/Source/DxDLL.h";
        let dxdllunpacker = /\s*\#\s*include\s+"DxLib\.h"\s+extern\s*\"C\"\s*\{([\s\S]*)\}\s*/mg;
        console.log(dxdllheader);
        let rawbuf = "" + fs.readFileSync(dxdllheader, "utf8");
        let buf = rawbuf;
        let match = dxdllunpacker.exec(buf);
        let lines = match[1];
        let count = 0;
        for (let v of lines.split("\n").map(e => e.trim()).filter(e => e != "")) {
            let val = <FuncDef>parser.parse(v);
            if (!this.dllFuncList[val.name]) {
                this.dllFuncList[val.name] = [];
            }
            var la = this.dllFuncList[val.name];
            la.push(val);
            count += 1;
        }
        console.log("    dll functions: "+count);
        this.header += rawbuf.replace(/\#\s*include\s*"DxLib.h"/, "");
    }
    parseDxLibHeader() {
        let lhdir = "DxLibHeader";
        for (let n of this.getFiles(lhdir)) {
            let file = lhdir + "/" + n;
            let rawbuf = "" + fs.readFileSync(file, "utf8");
            let match: RegExpExecArray;

            if (match = (/\n\#define\s+DXLIB_VERSION\s+[\s\S]*?\n/m).exec(rawbuf)) {
                this.preheader += match[0] + "\n";
            }
            if (match = (/\n\#define\s+DXLIB_VERSION_STR\s+[\s\S]*?\n/m).exec(rawbuf)) {
                this.preheader += match[0] + "\n";
            }

            let buf = rawbuf;
            //buf = buf.replace(/\n/mg, " ");
            buf = buf.replace(/\/\/[\s\S]*?[\r\n]/mg, "");
            buf = buf.replace(/\/\*[\s\S]*?\*\//g, "");
            buf = buf.replace(/[\r\n][\r\n]+/g, "\n");
            buf = buf.replace(/[\r\n]/mg, "");
            buf = buf.replace(/\s+/mg, " ");
            let re = /extern\s+((const\s*)*.*?)\s+(.*?)\s*\(\s*(.*?)\s*\)\s*\;/g;
            console.log(file);
            //console.log(re[0]);
            let count = 0;
            while (match = re.exec(buf)) {
                let val = <FuncDef>parser.parse(match[0].trim());
                if (!this.libFuncList[val.name]) {
                    this.libFuncList[val.name] = [];
                }
                var la = this.libFuncList[val.name];
                la.push(val);
                count += 1;
            }

            let splitter = /\n\/\/(.+?)\-\-\-\-\-\-\-\-\-\-\-*/mg;
            let splitted = rawbuf.split(splitter);
            let splitcount = 0;
            //console.log(splitted.length);
            let labeledSections = {};
            match = null;
            let preindex = 0;
            let prename = "noname";
            while (match = splitter.exec(rawbuf)) 
            {
                labeledSections[prename] = rawbuf.slice(preindex, match.index);
                let sectionName = match[1].trim();
                prename = sectionName;
                preindex = match.index + match[0].length;
                //labeledSections[sectionName] = splitted[splitcount];
                splitcount += 1;
                //console.log("["+sectionName+" "+splitcount);
            }
            this.header += `///// ${file}\n`;
            let writeSection = (label: string) => {
                let s = labeledSections[label];
                if (s && s != "") {
                    this.header += "///// " + file + ": [" + label + "] Start\n";
                    this.header += s;
                    this.header += "///// " + file + ": [" + label + "] End\n";
                }
            };
            //writeSection("インクルード");
            writeSection("マクロ定義");
            writeSection("構造体定義");
            writeSection("定義");
            writeSection("データ型定義");
            //writeSection("テーブル");
            //writeSection("内部大域変数宣言");
            writeSection("ネームスペース DxLib を使用する");
            this.header += `///// ${file} End\n`;


            console.log("    lib functions: "+count);
        }
        //console.log(JSON.stringify(this.libFuncList, undefined,2));
    }
}



let m = new Main();
m.run();


