
start
 = _ f:function _ { return f; }

function
 = fas:functionAttr* _ t:type fas2:functionAttr* _ n:identifier _ fps:functionParamsGroup _ ";" {
	return {
		attributes: [].concat.apply([], fas.concat(fas2)),
		returnType: t,
		name: n,
		params: fps,
		multipleArgs: fps.multipleArgs
	};
 }

functionAttr
 = a:"extern" _ { return a; }
 / a:"__stdcall" _ { return a; }

functionParamsGroup
 = "(" _ ")" { return []; }
 / "(" _ "void" _ ")" { return []; }
 / "(" _ f:functionParams _ "," _ "..." _ ")" { f.multipleArgs = true; return f; }
 / "(" _ f:functionParams _ ")" { return f; }

functionParams
 = p:param _ "," _ fps:functionParams { return [p].concat(fps); }
 / p:param { return [p]; }

param
 = rt:type "(" _ "*" _ name:identifier? _ ")" _ fps:functionParamsGroup {
	return {
		name:name,
		type:{
			kind:"function",
			returnType:rt,
			parameters:fps
		}
	};
 }
 / t:type _ id:identifier _ "=" _ v:value { return {type:t, name:id, defaultValue:v}; }
 / t:type _ id:identifier { return {type:t, name:id}; }
 / t:type { return {type:t}; }

type
 = pts:(prefixType _)* _ id:identifier _ sts:(suffixType _)* {
	return [].concat.apply([], pts).join("") +
		id +
		[].concat.apply([], sts).join("");
 }

prefixType
 = "unsigned" { return "unsigned"; }
 / "const" { return "const"; }
suffixType
 = "*" { return "*"; }
 

value
 = identifier
 / number

number
 = "0x" a:([0-9]/[a-f]/[A-F])+ s:("U"/"L"/"u")* { return "0x"+a.join("")+s.join(""); }
 / sign:("-"/"+"/"") a:[0-9]* "." b:[0-9]+ suf:("L"/"f"/"F")* { return sign+a.join("")+"."+b.join("")+suf.join(""); }
 / sign:("-"/"+"/"") a:[0-9]+ suf:("U"/"L"/"u")* { return sign+a.join("")+suf.join(""); }
 

identifier
 = h:[a-zA-Z_] t:([a-zA-Z0-9_])* {
	return h+t.join("");
 }

_ "space"
 = w:[ \t\r\n]* { return w.join(""); }
