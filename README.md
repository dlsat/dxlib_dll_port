# DxLibDLLCPP

## 概要
* DXライブラリ(DxLib)とは - http://dxlib.o.oo7.jp/index.html
* 通常のDxLibのプロジェクトを、ソースの変更なしにC/C++からDxLibのDLL(本来はC#向けのもの)を呼び出すためのライブラリです。

### ダウンロード
* リリースページからダウンロードできます。 - https://github.com/dlsat/dxlib_dll_cpp/releases

### 現在のバージョン
* DxLib 3.16b
* DxLibDLLCPP 0.1

### 現在使えない関数
現在下記の関数を除いて通常のDxLibと同じように記述することでDLLを利用することができます。
* DrawRotaFormatStringToHandleToZBuffer
* DrawRotaFormatStringToZBuffer
* DrawRotaStringToHandleToZBuffer
* DrawRotaStringToZBuffer
* FileRead_scanf
* PlayBeep
* SetBeepFrequency
* StopBeep
* printfDx
* snprintfDx
* sprintfDx
* sscanfDx

## 使い方
* `main`フォルダを通常のDxLibでの`プロジェクトに追加すべきファイル_VC用`フォルダの代わりに使用してください。
* このライブラリを使用する場合は本来のDxLibの`プロジェクトに追加すべきファイル_VC用`は使用しないでください。
* そのあと、`main`フォルダにある`DxLib_exc.cpp`ファイルをコンパイル、リンクするようにプロジェクトに追加してください。

## は？C/C++ならこれいらなくね？
* これを使うとDxLibのサンプルプロジェクトのexeファイルが70KBほどになります！
* なので過去のexeファイルを全部保存しなきゃいけないときに使えますよ多分！
* ほら、バージョン管理とか
* あとアップデートパッチ公開するときにサイズ節約できるかも

