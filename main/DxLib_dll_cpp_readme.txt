DxLibのC#DLLをC/C++で使うライブラリ Version DXLIB3.16b@1 2016/03/23

ファイルの説明

DxLib.h
  元のDxLib.hなどのヘッダーファイルをDLLを使うために必要な分だけ添削して一つにまとめてあります。
  このライブラリを使う場合は元のDxLibのヘッダーファイル一式は必要ありません。

DxLib_exc.cpp
  これはC#用DLLを元と同じようにC/C++で使うために必要な埋め合わせ用関数の実装ファイルです。
  自分のプロジェクトに追加してコンパイル、リンクしてください。
  excとはexcluded(C#DLLで除外された機能)の意味です。

DxLib.lib
  通常の32bit版C#DLLを使うためのインポートライブラリです。
DxLib.dll
  通常の32bit版C#DLLです。これは公式サイトで配布されているものと同じファイルです。

DxLib_x64.lib
  64bit版C#DLLを使うためのインポートライブラリです。
DxLib_x64.dll
  64bit版C#DLLです。これは公式サイトで配布されているものと同じファイルです。

info.txt
  変換結果の情報が書いてあります。
  いくつかの関数は埋め合わせすることも難しく、未実装となっています。
  内容の意味は下記の通りです。
    Replace - 変換作業の結果
      Rename - 名前を変えるだけ(#define)で対応できたものの数
      Special - 特別な変換関数を通すことで対応できたものの数
      NG - 無理だった関数の数
      DLLOnly - もとのDxLibにはなかったが、C#DLL版のみに存在する関数の数
  この後に無理だった関数の名前が並び、最後に変換率が表示されます。現在100%ではありません。



現在未実装の関数と理由のようなもの
* DrawRotaFormatStringToZBuffer
* DrawRotaStringToZBuffer
DrawRotaStringToZBuffer がC#DLLで公開されていない。

* DrawRotaFormatStringToHandleToZBuffer
* DrawRotaStringToHandleToZBuffer
DrawRotaStringToHandleToZBuffer がC#DLLで公開されていない。

* FileRead_scanf
* sscanfDx
ほぼ無理。あくまでC#用なのでscanf系は絶望的だと思う

* PlayBeep
* SetBeepFrequency
* StopBeep
理由： C#DLLで公開されていない。

* printfDx
理由：フォーマットを伴わずに同じ働きをする関数がDxLibには存在しない。

* snprintfDx
* sprintfDx
理由：まだやってない。

