
const assert = require('assert');

function indexOfF<T>(arr: T[], pred: (v: T) => boolean): number {
    for (let i = 0; i < arr.length; i++) {
        if (pred(arr[i]))
            return i;
    }
    return -1;
}
function clone<T>(a: T) {
    return <T>JSON.parse(JSON.stringify(a));
}

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

export class ReplaceRules {
    simplemap = <{[key:string]:string}>{
        /*
        "dx_CreateGraphFromGraphImage": "CreateGraphFromGraphImage",
        "dx_CreateGraphFromGraphImage2": "CreateGraphFromGraphImage",
        "dx_ReCreateGraphFromGraphImage": "ReCreateGraphFromGraphImage",
        "dx_ReCreateGraphFromGraphImage2": "ReCreateGraphFromGraphImage",
        "dx_CreateDivGraphFromGraphImage": "CreateDivGraphFromGraphImage",
        "dx_CreateDivGraphFromGraphImage2": "CreateDivGraphFromGraphImage",
        "dx_ReCreateDivGraphFromGraphImage": "ReCreateDivGraphFromGraphImage",
        "dx_ReCreateDivGraphFromGraphImage2": "ReCreateDivGraphFromGraphImage",
        "dx_GetTexColorData": "GetTexColorData",
        "dx_GetTexColorData2": "GetTexColorData",
        "dx_GetTexColorData3": "GetTexColorData",
        "dx_DrawChipMap": "DrawChipMap",
        "dx_DrawChipMap2": "DrawChipMap",
        "dx_DrawPolygon3D": "DrawPolygon3D",
        "dx_DrawPolygon3D2": "DrawPolygon3D",
        "dx_BltBaseImage": "BltBaseImage",
        "dx_BltBaseImage2": "BltBaseImage",
        "dx_LoadGraphToResource": "LoadGraphToResource",
        "dx_LoadGraphToResource2": "LoadGraphToResource",
        "dx_LoadDivGraphToResource": "LoadDivGraphToResource",
        "dx_LoadDivGraphToResource2": "LoadDivGraphToResource",
        */
    };
    specialmap = {
        "CreateGraphFromGraphImage": ["overload", ["dx_CreateGraphFromGraphImage", "dx_CreateGraphFromGraphImage_2"]],
        "ReCreateGraphFromGraphImage": ["overload", ["dx_ReCreateGraphFromGraphImage", "dx_ReCreateGraphFromGraphImage_2"]],
        "CreateDivGraphFromGraphImage": ["overload", ["dx_CreateDivGraphFromGraphImage", "dx_CreateDivGraphFromGraphImage_2"]],
        "ReCreateDivGraphFromGraphImage": ["overload", ["dx_ReCreateDivGraphFromGraphImage", "dx_ReCreateDivGraphFromGraphImage_2"]],
        "GetTexColorData": ["overload", ["dx_GetTexColorData", "dx_GetTexColorData_2", "dx_GetTexColorData_3"]],
        "DrawChipMap": ["overload", ["dx_CreateGraphFromGraphImage", "dx_CreateGraphFromGraphImage_2"]],
        "DrawPolygon3D": ["overload", ["dx_CreateGraphFromGraphImage", "dx_CreateGraphFromGraphImage_2"]],
        "BltBaseImage": ["overload", ["dx_CreateGraphFromGraphImage", "dx_CreateGraphFromGraphImage_2"]],
        "LoadGraphToResource": ["overload", ["dx_CreateGraphFromGraphImage", "dx_CreateGraphFromGraphImage_2"]],
        "LoadDivGraphToResource": ["overload", ["dx_CreateGraphFromGraphImage", "dx_CreateGraphFromGraphImage_2"]],
        "AppLogAdd": ["format", "dx_ErrorLogAdd"],
        "ErrorLogFmtAdd": ["format", "dx_ErrorLogAdd"],
        "DrawExtendFormatString": ["format", "dx_DrawExtendString"],
        "DrawExtendFormatStringF": ["format", "dx_DrawExtendStringF"],
        "DrawExtendFormatStringFToHandle": ["format", "dx_DrawExtendStringFToHandle"],
        "DrawExtendFormatStringToHandle": ["format", "dx_DrawExtendStringToHandle"],
        "DrawExtendFormatStringToHandleToZBuffer": ["format", "dx_DrawExtendStringToHandleToZBuffer"],
        "DrawExtendFormatStringToZBuffer": ["format", "dx_DrawExtendStringToZBuffer"],
        "DrawExtendFormatVString": ["format", "dx_DrawExtendVString"],
        "DrawExtendFormatVStringF": ["format", "dx_DrawExtendVStringF"],
        "DrawExtendFormatVStringFToHandle": ["format", "dx_DrawExtendVStringFToHandle"],
        "DrawExtendFormatVStringToHandle": ["format", "dx_DrawExtendVStringToHandle"],
        "DrawExtendFormatVStringToHandleToZBuffer": ["format", "dx_DrawExtendVStringToHandleToZBuffer"],
        "DrawExtendFormatVStringToZBuffer": ["format", "dx_DrawExtendVStringToZBuffer"],
        "DrawFormatString": ["format", "dx_DrawString"],
        "DrawFormatStringF": ["format", "dx_DrawStringF"],
        "DrawFormatStringFToHandle": ["format", "dx_DrawStringFToHandle"],
        "DrawFormatStringToHandle": ["format", "dx_DrawStringToHandle"],
        "DrawFormatStringToHandleToZBuffer": ["format", "dx_DrawStringToHandleToZBuffer"],
        "DrawFormatStringToZBuffer": ["format", "dx_DrawStringToZBuffer"],
        "DrawFormatVString": ["format", "dx_DrawVString"],
        "DrawFormatVStringF": ["format", "dx_DrawVStringF"],
        "DrawFormatVStringFToHandle": ["format", "dx_DrawVStringFToHandle"],
        "DrawFormatVStringToHandle": ["format", "dx_DrawVStringToHandle"],
        "DrawFormatVStringToHandleToZBuffer": ["format", "dx_DrawVStringToHandleToZBuffer"],
        "DrawFormatVStringToZBuffer": ["format", "dx_DrawVStringToZBuffer"],
        "DrawFormatStringMask": ["format", "dx_DrawStringMask"],
        "DrawFormatStringMaskToHandle": ["format", "dx_DrawStringMaskToHandle"],
        "DrawRotaFormatString": ["format", "dx_DrawRotaString"],
        "DrawRotaFormatStringF": ["format", "dx_DrawRotaStringF"],
        "DrawRotaFormatStringFToHandle": ["format", "dx_DrawRotaStringFToHandle"],
        "DrawRotaFormatStringToHandle": ["format", "dx_DrawRotaStringToHandle"],
        //"DrawRotaFormatStringToHandleToZBuffer": ["format", "dx_DrawRotaStringToHandleToZBuffer"],
        //"DrawRotaFormatStringToZBuffer": ["format", "dx_DrawRotaStringToZBuffer"],
        "GetDrawExtendFormatStringWidth": ["format", "dx_GetDrawExtendStringWidth"],
        "GetDrawExtendFormatStringSize": ["format", "dx_GetDrawExtendStringSize"],
        "GetDrawExtendFormatStringWidthToHandle": ["format", "dx_GetDrawExtendStringWidthToHandle"],
        "GetDrawExtendFormatStringSizeToHandle": ["format", "dx_GetDrawExtendStringSizeToHandle"],
        "GetDrawFormatStringWidth": ["format", "dx_GetDrawStringWidth"],
        "GetDrawFormatStringSize": ["format", "dx_GetDrawStringSize"],
        "GetDrawFormatStringWidthToHandle": ["format", "dx_GetDrawStringWidthToHandle"],
        "GetDrawFormatStringSizeToHandle": ["format", "dx_GetDrawStringSizeToHandle"],
        "GraphBlend": ["graphblend", "dx_GraphBlendS"],
        "GraphBlendBlt": ["graphblend", "dx_GraphBlendBltS"],
        "GraphBlendRectBlt": ["graphblend", "dx_GraphBlendRectBltS"],
        "SetBlendGraphParam": ["graphblend", "dx_SetBlendGraphParamS"],
        "GraphFilter": ["graphfilter", "dx_GraphFilterS"],
        "GraphFilterBlt": ["graphfilter", "dx_GraphFilterBltS"],
        "GraphFilterRectBlt": ["graphfilter", "dx_GraphFilterRectBltS"],
    };


    specialFuncs: {[key:string]: (s:string, a:any) => [string,string,string]} = {
        "format": (srcname, value) => {
            let dstname = value;
            let srcdata = this.libFuncList[srcname];
            let dstdata = this.dllFuncList[dstname];
            assert(srcdata.length == 1);
            if (!dstdata || dstdata.length != 1) {
                throw "["+dstname+"] dstdata.length = " + (dstdata||[]).length;
            }
            let sf = srcdata[0];
            let df = dstdata[0];
            let funid = `dxexc_${srcname}`;
            let dfFormatStringIdx = indexOfF(df.params, e => (/^\s*(const)?\s*t?char\s*\*\s*$/i).exec(e.type) != null);
            let sfFormatStringIdx = indexOfF(sf.params, e => (/^\s*(const)?\s*t?char\s*\*\s*$/i).exec(e.type) != null);
            let dfparams = clone(df.params);
            let sfparams = clone(sf.params);
            
            dfparams[dfFormatStringIdx].name = "dxexc_StringBuf";
            sfparams[sfFormatStringIdx].name = "dxexc_String";

            // skip unknowned default valued parameters
            for (let i = dfparams.length - 1; i >= 0; i--) {
                let dp = dfparams[i];
                if (dp.defaultValue && indexOfF(sfparams, e => e.name == dp.name) != 0) {
                    dfparams.pop();
                }
            }
            let addline = "";
            // special int StrLen
            if (indexOfF(dfparams, e => e.type == "int" && e.name == "StrLen")) {
                addline += "int StrLen = strlenDx(dxexc_StringBuf);\n";
            }


            let paramDef = sfparams.map(e => e.type + " " + e.name).join(", ");
            let sfparamList = sfparams.map(e => e.name).join(", ");
            let dfparamList = dfparams.map(e => e.name).join(", ");

            let def = `${sf.returnType} ${funid}(${paramDef}, ...)`;
            let impl = `
${def} {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    ${addline}
    return ${dstname}(${dfparamList});
}
`;
            //console.log(impl);
            let retdef = "extern " + def + ";" + `\n#define ${srcname} ${funid}\n`;
            return [srcname, retdef, impl];
        },
        "graphblend": (srcname, value) => {
            let dstname = value;
            let srcdata = this.libFuncList[srcname];
            let dstdata = this.dllFuncList[dstname];
            assert(srcdata.length == 1);
            if (!dstdata || dstdata.length != 1) {
                throw "[" + dstname + "] dstdata.length = " + (dstdata || []).length;
            }
            let sf = srcdata[0];
            let df = dstdata[0];
            let funid = `dxexc_${srcname}`;
            let dfFormatStringIdx = indexOfF(df.params, e => (/^\s*BlendType\s*$/i).exec(e.name) != null);
            let sfFormatStringIdx = indexOfF(sf.params, e => (/^\s*BlendType\s*$/i).exec(e.name) != null);
            let dfparams = clone(df.params);
            let sfparams = clone(sf.params);
            dfparams[dfFormatStringIdx].name = "dxexc_BlendType";
            sfparams[sfFormatStringIdx].name = "dxexc_BlendType";
            let paramDef = sfparams.map(e => e.type + " " + e.name).join(", ");
            let sfparamList = sfparams.map(e => e.name).join(", ");
            let dfparamList = dfparams.map(e => e.name).join(", ");
            let def = `${sf.returnType} ${funid}(${paramDef}, ...)`;
            let impl = `
${def} {
    va_list VaList ;
    int Param0=0, Param1=0, Param2=0, Param3=0, Param4=0, Param5=0;
    va_start( VaList, dxexc_BlendType ) ;
    switch (dxexc_BlendType) {
    case DX_GRAPH_BLEND_RGBA_SELECT_MIX:
        Param0 = va_arg(VaList, int);
        Param1 = va_arg(VaList, int);
        Param2 = va_arg(VaList, int);
        Param3 = va_arg(VaList, int);
        break;
    default:
        break;
    }
    va_end( VaList ) ;
    
    return ${dstname}(${dfparamList});
}
`;

            //console.log(impl);
            let retdef = "extern " + def + ";" + `\n#define ${srcname} ${funid}\n`;
            return [srcname, retdef, impl];
        },
        "graphfilter": (srcname, value) => {
            let dstname = value;
            let srcdata = this.libFuncList[srcname];
            let dstdata = this.dllFuncList[dstname];
            assert(srcdata.length == 1);
            if (!dstdata || dstdata.length != 1) {
                throw "[" + dstname + "] dstdata.length = " + (dstdata || []).length;
            }
            let sf = srcdata[0];
            let df = dstdata[0];
            let funid = `dxexc_${srcname}`;
            let dfFormatStringIdx = indexOfF(df.params, e => (/^\s*FilterType\s*$/i).exec(e.name) != null);
            let sfFormatStringIdx = indexOfF(sf.params, e => (/^\s*FilterType\s*$/i).exec(e.name) != null);
            let dfparams = clone(df.params);
            let sfparams = clone(sf.params);
            dfparams[dfFormatStringIdx].name = "dxexc_FilterType";
            sfparams[sfFormatStringIdx].name = "dxexc_FilterType";
            let paramDef = sfparams.map(e => e.type + " " + e.name).join(", ");
            let sfparamList = sfparams.map(e => e.name).join(", ");
            let dfparamList = dfparams.map(e => e.name).join(", ");
            let def = `${sf.returnType} ${funid}(${paramDef}, ...)`;
            let impl = `
${def} {
    va_list VaList ;
    int Param0=0, Param1=0, Param2=0, Param3=0, Param4=0, Param5=0;
    va_start( VaList, dxexc_FilterType ) ;
    switch (dxexc_FilterType) {
    case DX_GRAPH_FILTER_DOWN_SCALE:
    case DX_GRAPH_FILTER_Y2UV1_TO_RGB:
        Param0 = va_arg(VaList, int);
        break;
    case DX_GRAPH_FILTER_MONO:
    case DX_GRAPH_FILTER_GAUSS:
    case DX_GRAPH_FILTER_BRIGHT_SCALE:
    case DX_GRAPH_FILTER_GRADIENT_MAP:
        Param0 = va_arg(VaList, int);
        Param1 = va_arg(VaList, int);
        break;
    case DX_GRAPH_FILTER_HSB:
        Param0 = va_arg(VaList, int);
        Param1 = va_arg(VaList, int);
        Param2 = va_arg(VaList, int);
        break;
    case DX_GRAPH_FILTER_BRIGHT_CLIP:
    case DX_GRAPH_FILTER_LEVEL:
    case DX_GRAPH_FILTER_TWO_COLOR:
        Param0 = va_arg(VaList, int);
        Param1 = va_arg(VaList, int);
        Param2 = va_arg(VaList, int);
        Param3 = va_arg(VaList, int);
        Param4 = va_arg(VaList, int);
        break;
    case DX_GRAPH_FILTER_INVERT:
    case DX_GRAPH_FILTER_PREMUL_ALPHA:
    case DX_GRAPH_FILTER_INTERP_ALPHA:
    case DX_GRAPH_FILTER_YUV_TO_RGB:
    default:
        break;
    }
    va_end( VaList ) ;
    
    return ${dstname}(${dfparamList});
}
`;

            //console.log(impl);
            let retdef = "extern " + def + ";" + `\n#define ${srcname} ${funid}\n`;
            return [srcname, retdef, impl];
        },
        "overload": (srcname, value) => {
            let dstnamelist = <string[]>value;
            let srcdata = this.libFuncList[srcname][0];
            let dstdatalist = dstnamelist.map(e => this.dllFuncList[e]);
            let def = "";
            let impl = "";
            for (let i in dstdatalist) {
                //console.log(i);
                let dstdata = dstdatalist[i][0];
                let dstparamsdef = dstdata.params.map(e => e.type + " " + e.name).join(", ");
                let dstparamslist = dstdata.params.map(e => e.name).join(", ");
                def += `extern ${dstdata.returnType} dxexc_${srcdata.name}(${dstparamsdef}); // overload\n`;
                impl += `
${dstdata.returnType} dxexc_${srcdata.name}(${dstparamsdef}) { // overload
    return ${dstdata.name}(${dstparamslist});
}
`;
            }
            def += `#define ${srcname} dxexc_${srcname}\n`;
            //console.log(value);
            //let retdef = "extern " + def + ";" + `\n#define ${srcname} ${funid}\n`;
            return [srcname, def, impl];
        },
    };
    
    libFuncList: { [key: string]: FuncDef[] } = {};
    dllFuncList: { [key: string]: FuncDef[] } = {};

    constructor(libFuncList, dllFuncList) {
        this.libFuncList = libFuncList;
        this.dllFuncList = dllFuncList;
    }

    output(): [string, string] {
        let okcount = 0;
        let specialreplacecount = 0;
        let ngcount = 0;
        let dllonlycount = 0;
        let dllonlylist: string[] = [];
        let nglist: string[] = [];
        let dlltolibreplacer: { [key: string]: string } = {};

        let implementList: { [key: string]: { declaration: string, implement:string }[] } = {};


        for (let key of Object.keys(this.dllFuncList).sort()) {
            if (this.libFuncList[this.simplemap[key]] ||
                this.libFuncList[key.substr(3)]) {
                let f = this.libFuncList[this.simplemap[key]] || this.libFuncList[key.substr(3)];
                let implname = key.substr(3);
                let lst = implementList[implname] = implementList[implname] || [];
                if (f.length == 1) {
                    lst.push({
                        declaration: `#define ${implname} ${key}\n`,
                        implement: "",
                    });
                }
                else {
                    /*lst.push({
                        declaration: `#define ${implname} ${key} // overload \n`,
                        implement: "// overload\n",
                    });
                    console.log("overload dll: "+implname);
                    */
                }
            }
            else {
                let implname = key.substr(3);
                let lst = implementList[implname] = implementList[implname] || [];
                /*
                lst.push({
                    declaration: `#define ${implname} ${key} // dll only\n`,
                    implement: "",
                });
                */
            }
        }
        for (let key of Object.keys(this.libFuncList).sort()) {
            if (this.specialmap[key]) {
                let spec = this.specialmap[key];
                let speckind = spec[0];
                var f = this.specialFuncs[speckind];
                let res = f(key, spec[1]);
                let implname = res[0];
                let lst = implementList[implname] = implementList[implname] || [];
                lst.push({
                    declaration: res[1],
                    implement: res[2],
                });
            }
        }

        
        //console.log(JSON.stringify(implementList, undefined, 2));

        for (let key of Object.keys(this.dllFuncList).sort()) {
            if (this.libFuncList[key.substr(3)]) {
                dlltolibreplacer[key] = key.substr(3);
            }
            else {
                dllonlylist.push(key);
                dllonlycount += 1;
            }
        }
        for (let key of Object.keys(this.libFuncList).sort()) {
            if (dlltolibreplacer["dx_" + key]) {
                okcount += 1;
            }
            else if (this.specialmap[key]) {
                let spec = this.specialmap[key];
                let speckind = spec[0];
                var f = this.specialFuncs[speckind];
                let res = f(key, spec[1]);
                //console.log(res);
                specialreplacecount += 1;
            }
            else {
                ngcount += 1;
                nglist.push(key);
            }
        }
        console.log("Statistics");
        console.log("  LIB functions: " + Object.keys(this.libFuncList).length);
        console.log("  DLL functions: " + Object.keys(this.dllFuncList).length);
        console.log("  Replace");
        console.log("    Rename: " + okcount);
        console.log("    Special: " + specialreplacecount);
        console.log("    NG: " + ngcount);
        console.log("    DLLOnly: " + dllonlycount);
        for (let k of nglist.sort()) {
            console.log("NG: " + k);
        }
        for (let k of dllonlylist.sort()) {
            //console.log("dll: " + k);
        }
        let num = 0;
        for (let k of Object.keys(this.libFuncList).sort()) {
            let v = this.libFuncList[k];
            num += 1;
            if (v.length > 1) {
                //console.log("overload: " + v[0].name + "; " + v.length);
            }
            //console.log(v[0].name + "\t@" + num);
        }
        let libCnt = Object.keys(this.libFuncList).length;
        console.log("replace result: " + (okcount / libCnt * 100).toFixed(1) + "%");






        return [
            Object.keys(implementList).map(e => implementList[e].map(e => e.declaration).join("")).join(""),
            Object.keys(implementList).map(e => implementList[e].map(e => e.implement).join("")).join("")
        ];

    }
};



