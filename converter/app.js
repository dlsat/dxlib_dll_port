"use strict";
var fs = require('fs');
var path = require('path');
var parser = require('./parser'); // not ts
var rules = require('./replacerules');
var Main = (function () {
    function Main() {
        this.libFuncList = {};
        this.dllFuncList = {};
        this.preheader = "";
        this.header = "";
    }
    Main.prototype.getFiles = function (srcpath) {
        return fs.readdirSync(srcpath).filter(function (file) {
            return !fs.statSync(path.join(srcpath, file)).isDirectory();
        });
    };
    Main.prototype.getDirectories = function (srcpath) {
        return fs.readdirSync(srcpath).filter(function (file) {
            return fs.statSync(path.join(srcpath, file)).isDirectory();
        });
    };
    Main.prototype.run = function () {
        this.parseDxLibHeader();
        this.parseDxDLLHeader();
        var m = this;
        var replace = new rules.ReplaceRules(m.libFuncList, m.dllFuncList);
        var out = replace.output();
        var headerfile = "\n#pragma once\n\n#include <windows.h>\n#ifdef _WIN64\n#pragma comment(lib, \"dxlib_x64.lib\")\n#else\n#pragma comment(lib, \"dxlib.lib\")\n#endif\n\n" + m.preheader + m.header + "\n" + out[0];
        var excfile = "\n#include \"DxLib.h\"\n" + out[1];
        fs.writeFileSync("./out/DxLib.h", headerfile, "utf8");
        fs.writeFileSync("./out/DxLib_exc.cpp", excfile, "utf8");
    };
    Main.prototype.parseDxDLLHeader = function () {
        var dxdllheader = "DxLibDotNet/Source/DxDLL.h";
        var dxdllunpacker = /\s*\#\s*include\s+"DxLib\.h"\s+extern\s*\"C\"\s*\{([\s\S]*)\}\s*/mg;
        console.log(dxdllheader);
        var rawbuf = "" + fs.readFileSync(dxdllheader, "utf8");
        var buf = rawbuf;
        var match = dxdllunpacker.exec(buf);
        var lines = match[1];
        var count = 0;
        for (var _i = 0, _a = lines.split("\n").map(function (e) { return e.trim(); }).filter(function (e) { return e != ""; }); _i < _a.length; _i++) {
            var v = _a[_i];
            var val = parser.parse(v);
            if (!this.dllFuncList[val.name]) {
                this.dllFuncList[val.name] = [];
            }
            var la = this.dllFuncList[val.name];
            la.push(val);
            count += 1;
        }
        console.log("    dll functions: " + count);
        this.header += rawbuf.replace(/\#\s*include\s*"DxLib.h"/, "");
    };
    Main.prototype.parseDxLibHeader = function () {
        var _this = this;
        var lhdir = "DxLibHeader";
        var _loop_1 = function(n) {
            var file = lhdir + "/" + n;
            var rawbuf = "" + fs.readFileSync(file, "utf8");
            var match = void 0;
            if (match = (/\n\#define\s+DXLIB_VERSION\s+[\s\S]*?\n/m).exec(rawbuf)) {
                this_1.preheader += match[0] + "\n";
            }
            if (match = (/\n\#define\s+DXLIB_VERSION_STR\s+[\s\S]*?\n/m).exec(rawbuf)) {
                this_1.preheader += match[0] + "\n";
            }
            var buf = rawbuf;
            //buf = buf.replace(/\n/mg, " ");
            buf = buf.replace(/\/\/[\s\S]*?[\r\n]/mg, "");
            buf = buf.replace(/\/\*[\s\S]*?\*\//g, "");
            buf = buf.replace(/[\r\n][\r\n]+/g, "\n");
            buf = buf.replace(/[\r\n]/mg, "");
            buf = buf.replace(/\s+/mg, " ");
            var re = /extern\s+((const\s*)*.*?)\s+(.*?)\s*\(\s*(.*?)\s*\)\s*\;/g;
            console.log(file);
            //console.log(re[0]);
            var count = 0;
            while (match = re.exec(buf)) {
                var val = parser.parse(match[0].trim());
                if (!this_1.libFuncList[val.name]) {
                    this_1.libFuncList[val.name] = [];
                }
                la = this_1.libFuncList[val.name];
                la.push(val);
                count += 1;
            }
            var splitter = /\n\/\/(.+?)\-\-\-\-\-\-\-\-\-\-\-*/mg;
            var splitted = rawbuf.split(splitter);
            var splitcount = 0;
            //console.log(splitted.length);
            var labeledSections = {};
            match = null;
            var preindex = 0;
            var prename = "noname";
            while (match = splitter.exec(rawbuf)) {
                labeledSections[prename] = rawbuf.slice(preindex, match.index);
                var sectionName = match[1].trim();
                prename = sectionName;
                preindex = match.index + match[0].length;
                //labeledSections[sectionName] = splitted[splitcount];
                splitcount += 1;
            }
            this_1.header += "///// " + file + "\n";
            var writeSection = function (label) {
                var s = labeledSections[label];
                if (s && s != "") {
                    _this.header += "///// " + file + ": [" + label + "] Start\n";
                    _this.header += s;
                    _this.header += "///// " + file + ": [" + label + "] End\n";
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
            this_1.header += "///// " + file + " End\n";
            console.log("    lib functions: " + count);
        };
        var this_1 = this;
        var la;
        for (var _i = 0, _a = this.getFiles(lhdir); _i < _a.length; _i++) {
            var n = _a[_i];
            _loop_1(n);
        }
        //console.log(JSON.stringify(this.libFuncList, undefined,2));
    };
    return Main;
}());
var m = new Main();
m.run();
//# sourceMappingURL=app.js.map