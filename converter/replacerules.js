"use strict";
var assert = require('assert');
function indexOfF(arr, pred) {
    for (var i = 0; i < arr.length; i++) {
        if (pred(arr[i]))
            return i;
    }
    return -1;
}
function clone(a) {
    return JSON.parse(JSON.stringify(a));
}
var ReplaceRules = (function () {
    function ReplaceRules(libFuncList, dllFuncList) {
        var _this = this;
        this.simplemap = {};
        this.specialmap = {
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
        this.specialFuncs = {
            "format": function (srcname, value) {
                var dstname = value;
                var srcdata = _this.libFuncList[srcname];
                var dstdata = _this.dllFuncList[dstname];
                assert(srcdata.length == 1);
                if (!dstdata || dstdata.length != 1) {
                    throw "[" + dstname + "] dstdata.length = " + (dstdata || []).length;
                }
                var sf = srcdata[0];
                var df = dstdata[0];
                var funid = "dxexc_" + srcname;
                var dfFormatStringIdx = indexOfF(df.params, function (e) { return (/^\s*(const)?\s*t?char\s*\*\s*$/i).exec(e.type) != null; });
                var sfFormatStringIdx = indexOfF(sf.params, function (e) { return (/^\s*(const)?\s*t?char\s*\*\s*$/i).exec(e.type) != null; });
                var dfparams = clone(df.params);
                var sfparams = clone(sf.params);
                dfparams[dfFormatStringIdx].name = "dxexc_StringBuf";
                sfparams[sfFormatStringIdx].name = "dxexc_String";
                // skip unknowned default valued parameters
                var _loop_1 = function(i) {
                    var dp = dfparams[i];
                    if (dp.defaultValue && indexOfF(sfparams, function (e) { return e.name == dp.name; }) != 0) {
                        dfparams.pop();
                    }
                };
                for (var i = dfparams.length - 1; i >= 0; i--) {
                    _loop_1(i);
                }
                var addline = "";
                // special int StrLen
                if (indexOfF(dfparams, function (e) { return e.type == "int" && e.name == "StrLen"; })) {
                    addline += "int StrLen = strlenDx(dxexc_StringBuf);\n";
                }
                var paramDef = sfparams.map(function (e) { return e.type + " " + e.name; }).join(", ");
                var sfparamList = sfparams.map(function (e) { return e.name; }).join(", ");
                var dfparamList = dfparams.map(function (e) { return e.name; }).join(", ");
                var def = sf.returnType + " " + funid + "(" + paramDef + ", ...)";
                var impl = "\n" + def + " {\n    va_list VaList ;\n    TCHAR dxexc_StringBuf[ 2048 ] ;\n        \n    va_start( VaList, dxexc_String ) ;\n    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;\n    va_end( VaList ) ;\n    " + addline + "\n    return " + dstname + "(" + dfparamList + ");\n}\n";
                //console.log(impl);
                var retdef = "extern " + def + ";" + ("\n#define " + srcname + " " + funid + "\n");
                return [srcname, retdef, impl];
            },
            "graphblend": function (srcname, value) {
                var dstname = value;
                var srcdata = _this.libFuncList[srcname];
                var dstdata = _this.dllFuncList[dstname];
                assert(srcdata.length == 1);
                if (!dstdata || dstdata.length != 1) {
                    throw "[" + dstname + "] dstdata.length = " + (dstdata || []).length;
                }
                var sf = srcdata[0];
                var df = dstdata[0];
                var funid = "dxexc_" + srcname;
                var dfFormatStringIdx = indexOfF(df.params, function (e) { return (/^\s*BlendType\s*$/i).exec(e.name) != null; });
                var sfFormatStringIdx = indexOfF(sf.params, function (e) { return (/^\s*BlendType\s*$/i).exec(e.name) != null; });
                var dfparams = clone(df.params);
                var sfparams = clone(sf.params);
                dfparams[dfFormatStringIdx].name = "dxexc_BlendType";
                sfparams[sfFormatStringIdx].name = "dxexc_BlendType";
                var paramDef = sfparams.map(function (e) { return e.type + " " + e.name; }).join(", ");
                var sfparamList = sfparams.map(function (e) { return e.name; }).join(", ");
                var dfparamList = dfparams.map(function (e) { return e.name; }).join(", ");
                var def = sf.returnType + " " + funid + "(" + paramDef + ", ...)";
                var impl = "\n" + def + " {\n    va_list VaList ;\n    int Param0=0, Param1=0, Param2=0, Param3=0, Param4=0, Param5=0;\n    va_start( VaList, dxexc_BlendType ) ;\n    switch (dxexc_BlendType) {\n    case DX_GRAPH_BLEND_RGBA_SELECT_MIX:\n        Param0 = va_arg(VaList, int);\n        Param1 = va_arg(VaList, int);\n        Param2 = va_arg(VaList, int);\n        Param3 = va_arg(VaList, int);\n        break;\n    default:\n        break;\n    }\n    va_end( VaList ) ;\n    \n    return " + dstname + "(" + dfparamList + ");\n}\n";
                //console.log(impl);
                var retdef = "extern " + def + ";" + ("\n#define " + srcname + " " + funid + "\n");
                return [srcname, retdef, impl];
            },
            "graphfilter": function (srcname, value) {
                var dstname = value;
                var srcdata = _this.libFuncList[srcname];
                var dstdata = _this.dllFuncList[dstname];
                assert(srcdata.length == 1);
                if (!dstdata || dstdata.length != 1) {
                    throw "[" + dstname + "] dstdata.length = " + (dstdata || []).length;
                }
                var sf = srcdata[0];
                var df = dstdata[0];
                var funid = "dxexc_" + srcname;
                var dfFormatStringIdx = indexOfF(df.params, function (e) { return (/^\s*FilterType\s*$/i).exec(e.name) != null; });
                var sfFormatStringIdx = indexOfF(sf.params, function (e) { return (/^\s*FilterType\s*$/i).exec(e.name) != null; });
                var dfparams = clone(df.params);
                var sfparams = clone(sf.params);
                dfparams[dfFormatStringIdx].name = "dxexc_FilterType";
                sfparams[sfFormatStringIdx].name = "dxexc_FilterType";
                var paramDef = sfparams.map(function (e) { return e.type + " " + e.name; }).join(", ");
                var sfparamList = sfparams.map(function (e) { return e.name; }).join(", ");
                var dfparamList = dfparams.map(function (e) { return e.name; }).join(", ");
                var def = sf.returnType + " " + funid + "(" + paramDef + ", ...)";
                var impl = "\n" + def + " {\n    va_list VaList ;\n    int Param0=0, Param1=0, Param2=0, Param3=0, Param4=0, Param5=0;\n    va_start( VaList, dxexc_FilterType ) ;\n    switch (dxexc_FilterType) {\n    case DX_GRAPH_FILTER_DOWN_SCALE:\n    case DX_GRAPH_FILTER_Y2UV1_TO_RGB:\n        Param0 = va_arg(VaList, int);\n        break;\n    case DX_GRAPH_FILTER_MONO:\n    case DX_GRAPH_FILTER_GAUSS:\n    case DX_GRAPH_FILTER_BRIGHT_SCALE:\n    case DX_GRAPH_FILTER_GRADIENT_MAP:\n        Param0 = va_arg(VaList, int);\n        Param1 = va_arg(VaList, int);\n        break;\n    case DX_GRAPH_FILTER_HSB:\n        Param0 = va_arg(VaList, int);\n        Param1 = va_arg(VaList, int);\n        Param2 = va_arg(VaList, int);\n        break;\n    case DX_GRAPH_FILTER_BRIGHT_CLIP:\n    case DX_GRAPH_FILTER_LEVEL:\n    case DX_GRAPH_FILTER_TWO_COLOR:\n        Param0 = va_arg(VaList, int);\n        Param1 = va_arg(VaList, int);\n        Param2 = va_arg(VaList, int);\n        Param3 = va_arg(VaList, int);\n        Param4 = va_arg(VaList, int);\n        break;\n    case DX_GRAPH_FILTER_INVERT:\n    case DX_GRAPH_FILTER_PREMUL_ALPHA:\n    case DX_GRAPH_FILTER_INTERP_ALPHA:\n    case DX_GRAPH_FILTER_YUV_TO_RGB:\n    default:\n        break;\n    }\n    va_end( VaList ) ;\n    \n    return " + dstname + "(" + dfparamList + ");\n}\n";
                //console.log(impl);
                var retdef = "extern " + def + ";" + ("\n#define " + srcname + " " + funid + "\n");
                return [srcname, retdef, impl];
            },
            "overload": function (srcname, value) {
                var dstnamelist = value;
                var srcdata = _this.libFuncList[srcname][0];
                var dstdatalist = dstnamelist.map(function (e) { return _this.dllFuncList[e]; });
                var def = "";
                var impl = "";
                for (var i in dstdatalist) {
                    //console.log(i);
                    var dstdata = dstdatalist[i][0];
                    var dstparamsdef = dstdata.params.map(function (e) { return e.type + " " + e.name; }).join(", ");
                    var dstparamslist = dstdata.params.map(function (e) { return e.name; }).join(", ");
                    def += "extern " + dstdata.returnType + " dxexc_" + srcdata.name + "(" + dstparamsdef + "); // overload\n";
                    impl += "\n" + dstdata.returnType + " dxexc_" + srcdata.name + "(" + dstparamsdef + ") { // overload\n    return " + dstdata.name + "(" + dstparamslist + ");\n}\n";
                }
                def += "#define " + srcname + " dxexc_" + srcname + "\n";
                //console.log(value);
                //let retdef = "extern " + def + ";" + `\n#define ${srcname} ${funid}\n`;
                return [srcname, def, impl];
            },
        };
        this.libFuncList = {};
        this.dllFuncList = {};
        this.libFuncList = libFuncList;
        this.dllFuncList = dllFuncList;
    }
    ReplaceRules.prototype.output = function () {
        var okcount = 0;
        var specialreplacecount = 0;
        var ngcount = 0;
        var dllonlycount = 0;
        var dllonlylist = [];
        var nglist = [];
        var dlltolibreplacer = {};
        var implementList = {};
        for (var _i = 0, _a = Object.keys(this.dllFuncList).sort(); _i < _a.length; _i++) {
            var key = _a[_i];
            if (this.libFuncList[this.simplemap[key]] ||
                this.libFuncList[key.substr(3)]) {
                var f_1 = this.libFuncList[this.simplemap[key]] || this.libFuncList[key.substr(3)];
                var implname = key.substr(3);
                var lst = implementList[implname] = implementList[implname] || [];
                if (f_1.length == 1) {
                    lst.push({
                        declaration: "#define " + implname + " " + key + "\n",
                        implement: "",
                    });
                }
                else {
                }
            }
            else {
                var implname = key.substr(3);
                var lst = implementList[implname] = implementList[implname] || [];
            }
        }
        for (var _b = 0, _c = Object.keys(this.libFuncList).sort(); _b < _c.length; _b++) {
            var key = _c[_b];
            if (this.specialmap[key]) {
                var spec = this.specialmap[key];
                var speckind = spec[0];
                var f = this.specialFuncs[speckind];
                var res = f(key, spec[1]);
                var implname = res[0];
                var lst = implementList[implname] = implementList[implname] || [];
                lst.push({
                    declaration: res[1],
                    implement: res[2],
                });
            }
        }
        //console.log(JSON.stringify(implementList, undefined, 2));
        for (var _d = 0, _e = Object.keys(this.dllFuncList).sort(); _d < _e.length; _d++) {
            var key = _e[_d];
            if (this.libFuncList[key.substr(3)]) {
                dlltolibreplacer[key] = key.substr(3);
            }
            else {
                dllonlylist.push(key);
                dllonlycount += 1;
            }
        }
        for (var _f = 0, _g = Object.keys(this.libFuncList).sort(); _f < _g.length; _f++) {
            var key = _g[_f];
            if (dlltolibreplacer["dx_" + key]) {
                okcount += 1;
            }
            else if (this.specialmap[key]) {
                var spec = this.specialmap[key];
                var speckind = spec[0];
                var f = this.specialFuncs[speckind];
                var res = f(key, spec[1]);
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
        for (var _h = 0, _j = nglist.sort(); _h < _j.length; _h++) {
            var k = _j[_h];
            console.log("NG: " + k);
        }
        for (var _k = 0, _l = dllonlylist.sort(); _k < _l.length; _k++) {
            var k = _l[_k];
        }
        var num = 0;
        for (var _m = 0, _o = Object.keys(this.libFuncList).sort(); _m < _o.length; _m++) {
            var k = _o[_m];
            var v = this.libFuncList[k];
            num += 1;
            if (v.length > 1) {
            }
        }
        var libCnt = Object.keys(this.libFuncList).length;
        console.log("replace result: " + (okcount / libCnt * 100).toFixed(1) + "%");
        return [
            Object.keys(implementList).map(function (e) { return implementList[e].map(function (e) { return e.declaration; }).join(""); }).join(""),
            Object.keys(implementList).map(function (e) { return implementList[e].map(function (e) { return e.implement; }).join(""); }).join("")
        ];
    };
    return ReplaceRules;
}());
exports.ReplaceRules = ReplaceRules;
;
//# sourceMappingURL=replacerules.js.map