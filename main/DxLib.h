
#pragma once

#include <windows.h>
#ifdef _WIN64
#pragma comment(lib, "dxlib_x64.lib")
#else
#pragma comment(lib, "dxlib.lib")
#endif


#define DXLIB_VERSION 0x316b


#define DXLIB_VERSION_STR L"3.16b"

///// DxLibHeader/DxCompileConfig.h
///// DxLibHeader/DxCompileConfig.h End
///// DxLibHeader/DxDataType.h
///// DxLibHeader/DxDataType.h: [マクロ定義] Start


#define SETRECT( Dest, Left, Top, Right, Bottom )	\
	( Dest ).left   = Left ;\
	( Dest ).top    = Top ;\
	( Dest ).right  = Right ;\
	( Dest ).bottom = Bottom ;
///// DxLibHeader/DxDataType.h: [マクロ定義] End
///// DxLibHeader/DxDataType.h: [構造体定義] Start


// ＲＧＢＡ色構造体
struct RGBCOLOR
{
	unsigned char			Blue, Green, Red, Alpha ;
} ;
///// DxLibHeader/DxDataType.h: [構造体定義] End
///// DxLibHeader/DxDataType.h End
///// DxLibHeader/DxDataTypeWin.h
///// DxLibHeader/DxDataTypeWin.h: [マクロ定義] Start


// 環境依存キーワードなど
#ifndef FASTCALL
#define FASTCALL	__fastcall
#endif

// ＤｉｒｅｃｔＩｎｐｕｔのバージョン設定
#define DIRECTINPUT_VERSION 0x700

#ifndef DWORD_PTR
#ifdef _WIN64
#define DWORD_PTR	ULONGLONG
#else
#define DWORD_PTR	DWORD
#endif
#endif

#ifndef LONG_PTR
#ifdef _WIN64
#define LONG_PTR	__int64
#else
#define LONG_PTR	int
#endif
#endif

#define DX_READSOUNDFUNCTION_ACM					(1 << ( DX_READSOUNDFUNCTION_DEFAULT_NUM + 0 ))		// ACM を使用した読み込み処理
#define DX_READSOUNDFUNCTION_MP3					(1 << ( DX_READSOUNDFUNCTION_DEFAULT_NUM + 1 ))		// ACM を使用した MP3 の読み込み処理
#define DX_READSOUNDFUNCTION_DSMP3					(1 << ( DX_READSOUNDFUNCTION_DEFAULT_NUM + 2 ))		// DirectShow を使用した MP3 の読み込み処理

// Direct3D9 用テクスチャフォーマット
#define DX_TEXTUREFORMAT_DIRECT3D9_R8G8B8				(1)
#define DX_TEXTUREFORMAT_DIRECT3D9_A8R8G8B8				(2)
#define DX_TEXTUREFORMAT_DIRECT3D9_X8R8G8B8				(3)
#define DX_TEXTUREFORMAT_DIRECT3D9_R5G6B5				(4)
#define DX_TEXTUREFORMAT_DIRECT3D9_X1R5G5B5				(5)
#define DX_TEXTUREFORMAT_DIRECT3D9_A1R5G5B5				(6)
#define DX_TEXTUREFORMAT_DIRECT3D9_A4R4G4B4				(7)
#define DX_TEXTUREFORMAT_DIRECT3D9_R3G3B2				(8)
#define DX_TEXTUREFORMAT_DIRECT3D9_A8R3G3B2				(9)
#define DX_TEXTUREFORMAT_DIRECT3D9_X4R4G4B4				(10)
#define DX_TEXTUREFORMAT_DIRECT3D9_A2B10G10R10			(11)
#define DX_TEXTUREFORMAT_DIRECT3D9_G16R16				(12)
#define DX_TEXTUREFORMAT_DIRECT3D9_A8B8G8R8				(13)
#define DX_TEXTUREFORMAT_DIRECT3D9_X8B8G8R8				(14)
#define DX_TEXTUREFORMAT_DIRECT3D9_A2R10G10B10			(15)
#define DX_TEXTUREFORMAT_DIRECT3D9_A16B16G16R16			(16)
#define DX_TEXTUREFORMAT_DIRECT3D9_R16F					(17)
#define DX_TEXTUREFORMAT_DIRECT3D9_G16R16F				(18)
#define DX_TEXTUREFORMAT_DIRECT3D9_A16B16G16R16F		(19)
#define DX_TEXTUREFORMAT_DIRECT3D9_R32F					(20)
#define DX_TEXTUREFORMAT_DIRECT3D9_G32R32F				(21)
#define DX_TEXTUREFORMAT_DIRECT3D9_A32B32G32R32F		(22)
///// DxLibHeader/DxDataTypeWin.h: [マクロ定義] End
///// DxLibHeader/DxDataTypeWin.h: [構造体定義] Start

///// DxLibHeader/DxDataTypeWin.h: [構造体定義] End
///// DxLibHeader/DxDataTypeWin.h End
///// DxLibHeader/DxFunctionWin.h
///// DxLibHeader/DxFunctionWin.h End
///// DxLibHeader/DxLib.h
///// DxLibHeader/DxLib.h: [定義] Start


// π
#define DX_PI										(3.1415926535897932384626433832795 )
#define DX_PI_F										(3.1415926535897932384626433832795f)
#define DX_TWO_PI									(3.1415926535897932384626433832795  * 2.0 )
#define DX_TWO_PI_F									(3.1415926535897932384626433832795f * 2.0f)

#define DX_CHAR										char

#define DX_DEFINE_START

#define MAX_IMAGE_NUM								(32768)				// 同時に持てるグラフィックハンドルの最大数( ハンドルエラーチェックのマスクに使用しているので 65536 以下の 2 のべき乗にして下さい )
#define MAX_2DSURFACE_NUM							(32768)				// ２Ｄサーフェスデータの最大数( ハンドルエラーチェックのマスクに使用しているので 65536 以下の 2 のべき乗にして下さい )
#define MAX_3DSURFACE_NUM							(65536)				// ３Ｄサーフェスデータの最大数( ハンドルエラーチェックのマスクに使用しているので 65536 以下の 2 のべき乗にして下さい )
#define MAX_IMAGE_DIVNUM							(64)				// 画像分割の最大数
#define MAX_SURFACE_NUM								(65536)				// サーフェスデータの最大数
#define MAX_SHADOWMAP_NUM							(8192)				// シャドウマップデータの最大数
#define MAX_SOFTIMAGE_NUM							(8192)				// 同時に持てるソフトイメージハンドルの最大数( ハンドルエラーチェックのマスクに使用しているので 65536 以下の 2 のべき乗にして下さい )

#define MAX_SOUND_NUM								(32768)				// 同時に持てるサウンドハンドルの最大数
#define MAX_SOFTSOUND_NUM							(8192)				// 同時に持てるソフトウエアサウンドハンドルの最大数
#define MAX_MUSIC_NUM								(256)				// 同時に持てるミュージックハンドルの最大数
#define MAX_MOVIE_NUM								(100)				// 同時に持てるムービーハンドルの最大数
#define MAX_MASK_NUM								(512)				// 同時に持てるマスクハンドルの最大数
#define MAX_FONT_NUM								(40)				// 同時に持てるフォントハンドルの最大数
#define MAX_INPUT_NUM								(256)				// 同時に持てる文字列入力ハンドルの最大数
#define MAX_SOCKET_NUM								(8192)				// 同時に持てる通信ハンドルの最大数
#define MAX_LIGHT_NUM								(4096)				// 同時に持てるライトハンドルの最大数
#define MAX_SHADER_NUM								(4096)				// 同時に持てるシェーダーハンドルの最大数
#define MAX_CONSTANT_BUFFER_NUM						(8192)				// 同時に持てる定数バッファハンドルの最大数
#define MAX_MODEL_BASE_NUM							(32768)				// 同時に持てる３Ｄモデル基本データハンドルの最大数
#define MAX_MODEL_NUM								(32768)				// 同時に持てる３Ｄモデルデータハンドルの最大数
#define MAX_VERTEX_BUFFER_NUM						(16384)				// 同時に持てる頂点バッファハンドルの最大数
#define MAX_INDEX_BUFFER_NUM						(16384)				// 同時に持てるインデックスバッファの最大数
#define MAX_FILE_NUM								(32768)				// 同時に持てるファイルハンドルの最大数

#define MAX_JOYPAD_NUM								(16)				// ジョイパッドの最大数
#define MAX_EVENTPROCESS_NUM						(5)					// 一度に処理するイベントの最大数

#define DEFAULT_SCREEN_SIZE_X						(640)				// デフォルトの画面の幅
#define DEFAULT_SCREEN_SIZE_Y						(480)				// デフォルトの画面の高さ
#define DEFAULT_COLOR_BITDEPTH						(16)				// デフォルトの色ビット深度
#define DEFAULT_ZBUFFER_BITDEPTH					(16)				// デフォルトのＺバッファビット深度

#define DEFAULT_FOV									(60.0F * 3.1415926535897932384626433832795F / 180.0F)	// デフォルトの視野角
#define DEFAULT_TAN_FOV_HALF						(0.57735026918962576450914878050196F) // tan( FOV * 0.5 )
#define DEFAULT_NEAR								(0.0F)				// NEARクリップ面
#define DEFAULT_FAR									(20000.0F)			// FARクリップ面

#define DX_DEFAULT_FONT_HANDLE						(-2)				// デフォルトフォントを示す値

#define DEFAULT_FONT_SIZE							(16)				// フォントのデフォルトのサイズ
#define DEFAULT_FONT_THINCK							(6)					// フォントのデフォルトの太さ
#define DEFAULT_FONT_TYPE							( DX_FONTTYPE_NORMAL )	// フォントのデフォルトの形態
#define DEFAULT_FONT_EDGESIZE						(1)					// フォントのデフォルトの太さ

#define MAX_USERIMAGEREAD_FUNCNUM					(10)				// ユーザーが登録できるグラフィックロード関数の最大数

// ＷＩＮＤＯＷＳのバージョンマクロ
#define DX_WINDOWSVERSION_31						(0x000)
#define DX_WINDOWSVERSION_95						(0x001)
#define DX_WINDOWSVERSION_98						(0x002)
#define DX_WINDOWSVERSION_ME						(0x003)
#define DX_WINDOWSVERSION_NT31						(0x104)
#define DX_WINDOWSVERSION_NT40						(0x105)
#define DX_WINDOWSVERSION_2000						(0x106)
#define DX_WINDOWSVERSION_XP						(0x107)
#define DX_WINDOWSVERSION_VISTA						(0x108)
#define DX_WINDOWSVERSION_7							(0x109)
#define DX_WINDOWSVERSION_8							(0x10A)
#define DX_WINDOWSVERSION_8_1						(0x10B)
#define DX_WINDOWSVERSION_10						(0x10C)
#define DX_WINDOWSVERSION_NT_TYPE					(0x100)

// DirectXのバージョン
#define DX_DIRECTXVERSION_NON						(0)
#define DX_DIRECTXVERSION_1							(0x10000)
#define DX_DIRECTXVERSION_2							(0x20000)
#define DX_DIRECTXVERSION_3							(0x30000)
#define DX_DIRECTXVERSION_4							(0x40000)
#define DX_DIRECTXVERSION_5							(0x50000)
#define DX_DIRECTXVERSION_6							(0x60000)
#define DX_DIRECTXVERSION_6_1						(0x60100)
#define DX_DIRECTXVERSION_7							(0x70000)
#define DX_DIRECTXVERSION_8							(0x80000)
#define DX_DIRECTXVERSION_8_1						(0x80100)

// Direct3Dのバージョン
#define DX_DIRECT3D_NONE							(0)
#define DX_DIRECT3D_9								(1)
#define DX_DIRECT3D_9EX								(2)
#define DX_DIRECT3D_11								(3)

// Direct3D11 の Feature Level
#define DX_DIRECT3D_11_FEATURE_LEVEL_9_1			(0x9100)
#define DX_DIRECT3D_11_FEATURE_LEVEL_9_2			(0x9200)
#define DX_DIRECT3D_11_FEATURE_LEVEL_9_3			(0x9300)
#define DX_DIRECT3D_11_FEATURE_LEVEL_10_0			(0xa000)
#define DX_DIRECT3D_11_FEATURE_LEVEL_10_1			(0xa100)
#define DX_DIRECT3D_11_FEATURE_LEVEL_11_0			(0xb000)
#define DX_DIRECT3D_11_FEATURE_LEVEL_11_1			(0xb100)

// 文字セット
#define DX_CHARSET_DEFAULT							(0)				// デフォルト文字セット
#define DX_CHARSET_SHFTJIS							(1)				// シフトJIS
#define DX_CHARSET_HANGEUL							(2)				// ハングル文字セット
#define DX_CHARSET_BIG5								(3)				// 繁体文字セット
#define DX_CHARSET_GB2312							(4)				// 簡体文字セット
#define DX_CHARSET_WINDOWS_1252						(5)				// 欧文(ラテン文字の文字コード)
#define DX_CHARSET_ISO_IEC_8859_15					(6)				// 欧文(ラテン文字の文字コード)
#define DX_CHARSET_NUM								(7)				// 文字セットの数

// 文字コード形式
#define DX_CHARCODEFORMAT_SHIFTJIS					(932)			// シフトJISコード
#define DX_CHARCODEFORMAT_GB2312					(936)			// 簡体字文字コード
#define DX_CHARCODEFORMAT_UHC						(949)			// ハングル文字コード
#define DX_CHARCODEFORMAT_BIG5						(950)			// 繁体文字コード
#define DX_CHARCODEFORMAT_UTF16LE					(1200)			// UTF-16 リトルエンディアン
#define DX_CHARCODEFORMAT_UTF16BE					(1201)			// UTF-16 ビッグエンディアン
#define DX_CHARCODEFORMAT_WINDOWS_1252				(1252)			// 欧文(ラテン文字の文字コード)
#define DX_CHARCODEFORMAT_ISO_IEC_8859_15			(32764)			// 欧文(ラテン文字の文字コード)
#define DX_CHARCODEFORMAT_UTF8						(65001)			// UTF-8
#define DX_CHARCODEFORMAT_ASCII						(32765)			// アスキー文字コード
#define DX_CHARCODEFORMAT_UTF32LE					(32766)			// UTF-32 リトルエンディアン
#define DX_CHARCODEFORMAT_UTF32BE					(32767)			// UTF-32 ビッグエンディアン

// ＭＩＤＩの演奏モード定義
#define DX_MIDIMODE_MCI								(0)				// ＭＣＩによる演奏
#define DX_MIDIMODE_DM								(1)				// ＤｉｒｅｃｔＭｕｓｉｃによる演奏
#define DX_MIDIMODE_DIRECT_MUSIC_REVERB				(1)				// ＤｉｒｅｃｔＭｕｓｉｃ(リバーブあり)による演奏
#define DX_MIDIMODE_DIRECT_MUSIC_NORMAL				(2)				// ＤｉｒｅｃｔＭｕｓｉｃ(リバーブなし)による演奏
#define DX_MIDIMODE_NUM								(3)				// ＭＩＤＩの演奏モードの数

// 描画モード定義
#define DX_DRAWMODE_NEAREST							(0)				// ネアレストネイバー法で描画
#define DX_DRAWMODE_BILINEAR						(1)				// バイリニア法で描画する
#define DX_DRAWMODE_ANISOTROPIC						(2)				// 異方性フィルタリング法で描画する
#define DX_DRAWMODE_OTHER							(3)				// それ以外
#define DX_DRAWMODE_NUM								(4)				// 描画モードの数

// フォントのタイプ
#define DX_FONTTYPE_NORMAL							(0x00)				// ノーマルフォント
#define DX_FONTTYPE_EDGE							(0x01)				// エッジつきフォント
#define DX_FONTTYPE_ANTIALIASING					(0x02)				// アンチエイリアスフォント( 標準機能アンチエイリアス )
#define DX_FONTTYPE_ANTIALIASING_4X4				(0x12)				// アンチエイリアスフォント( 4x4サンプリング )
#define DX_FONTTYPE_ANTIALIASING_8X8				(0x22)				// アンチエイリアスフォント( 8x8サンプリング )
#define DX_FONTTYPE_ANTIALIASING_EDGE				(0x03)				// アンチエイリアス＆エッジ付きフォント( 標準機能アンチエイリアス )
#define DX_FONTTYPE_ANTIALIASING_EDGE_4X4			(0x13)				// アンチエイリアス＆エッジ付きフォント( 4x4サンプリング )
#define DX_FONTTYPE_ANTIALIASING_EDGE_8X8			(0x23)				// アンチエイリアス＆エッジ付きフォント( 8x8サンプリング )

// フォント画像の階調ビット数
#define DX_FONTIMAGE_BIT_1							(0)
#define DX_FONTIMAGE_BIT_4							(1)
#define DX_FONTIMAGE_BIT_8							(2)

// 描画ブレンドモード定義
#define DX_BLENDMODE_NOBLEND						(0)				// ノーブレンド
#define DX_BLENDMODE_ALPHA							(1)				// αブレンド
#define DX_BLENDMODE_ADD							(2)				// 加算ブレンド
#define DX_BLENDMODE_SUB							(3)				// 減算ブレンド
#define DX_BLENDMODE_MUL							(4)				// 乗算ブレンド
   // (内部処理用)
#define DX_BLENDMODE_SUB2							(5)				// 内部処理用減算ブレンド２
//#define DX_BLENDMODE_BLINEALPHA					(7)				// 境界線ぼかし
#define DX_BLENDMODE_XOR							(6)				// XORブレンド( ソフトウエアレンダリングモードでのみ有効 )
#define DX_BLENDMODE_DESTCOLOR						(8)				// カラーは更新されない
#define DX_BLENDMODE_INVDESTCOLOR					(9)				// 描画先の色の反転値を掛ける
#define DX_BLENDMODE_INVSRC							(10)			// 描画元の色を反転する
#define DX_BLENDMODE_MULA							(11)			// アルファチャンネル考慮付き乗算ブレンド
#define DX_BLENDMODE_ALPHA_X4						(12)			// αブレンドの描画元の輝度を最大４倍にできるモード
#define DX_BLENDMODE_ADD_X4							(13)			// 加算ブレンドの描画元の輝度を最大４倍にできるモード
#define DX_BLENDMODE_SRCCOLOR						(14)			// 描画元のカラーでそのまま描画される
#define DX_BLENDMODE_HALF_ADD						(15)			// 半加算ブレンド
#define DX_BLENDMODE_SUB1							(16)			// 内部処理用減算ブレンド１
#define DX_BLENDMODE_PMA_ALPHA						(17)			// 乗算済みαブレンドモードのαブレンド
#define DX_BLENDMODE_PMA_ADD						(18)			// 乗算済みαブレンドモードの加算ブレンド
#define DX_BLENDMODE_PMA_SUB						(19)			// 乗算済みαブレンドモードの減算ブレンド
#define DX_BLENDMODE_PMA_INVSRC						(20)			// 乗算済みαブレンドモードの描画元の色を反転する
#define DX_BLENDMODE_PMA_ALPHA_X4					(21)			// 乗算済みαブレンドモードのαブレンドの描画元の輝度を最大４倍にできるモード
#define DX_BLENDMODE_PMA_ADD_X4						(22)			// 乗算済みαブレンドモードの加算ブレンドの描画元の輝度を最大４倍にできるモード
#define DX_BLENDMODE_NUM							(23)			// ブレンドモードの数

// DrawGraphF 等の浮動小数点値で座標を指定する関数における座標タイプ
#define DX_DRAWFLOATCOORDTYPE_DIRECT3D9				(0)				// Direct3D9タイプ( -0.5f の補正を行わないとテクスチャのピクセルが綺麗にマップされないタイプ )
#define DX_DRAWFLOATCOORDTYPE_DIRECT3D10			(1)				// Direct3D10タイプ( -0.5f の補正を行わななくてもテクスチャのピクセルが綺麗にマップされるタイプ )

// 画像合成タイプ
#define DX_BLENDGRAPHTYPE_NORMAL					(0)				// 通常合成
#define DX_BLENDGRAPHTYPE_WIPE						(1)				// ワイプ処理
#define DX_BLENDGRAPHTYPE_ALPHA						(2)				// ブレンド画像のα値と元画像のα値を掛け合わせる

// グラフィックフィルタータイプ
#define DX_GRAPH_FILTER_MONO						(0)				// モノトーンフィルタ
#define DX_GRAPH_FILTER_GAUSS						(1)				// ガウスフィルタ
#define DX_GRAPH_FILTER_DOWN_SCALE					(2)				// 縮小フィルタ
#define DX_GRAPH_FILTER_BRIGHT_CLIP					(3)				// 明るさクリップフィルタ
#define DX_GRAPH_FILTER_BRIGHT_SCALE				(4)				// 指定の明るさ領域を拡大するフィルタ
#define DX_GRAPH_FILTER_HSB							(5)				// 色相・彩度・明度フィルタ
#define DX_GRAPH_FILTER_INVERT						(6)				// 階調の反転フィルタ
#define DX_GRAPH_FILTER_LEVEL						(7)				// レベル補正フィルタ
#define DX_GRAPH_FILTER_TWO_COLOR					(8)				// ２階調化フィルタ
#define DX_GRAPH_FILTER_GRADIENT_MAP				(9)				// グラデーションマップフィルタ
#define DX_GRAPH_FILTER_PREMUL_ALPHA				(10)			// 通常のアルファチャンネル付き画像を乗算済みアルファ画像に変換するフィルタ
#define DX_GRAPH_FILTER_INTERP_ALPHA				(11)			// 乗算済みα画像を通常のアルファチャンネル付き画像に変換するフィルタ
#define DX_GRAPH_FILTER_YUV_TO_RGB					(12)			// YUVカラーをRGBカラーに変換するフィルタ
#define DX_GRAPH_FILTER_Y2UV1_TO_RGB				(13)			// YUVカラーをRGBカラーに変換するフィルタ( UV成分が Y成分の半分・又は４分の１( 横・縦片方若しくは両方 )の解像度しかない場合用 )
#define DX_GRAPH_FILTER_NUM							(14)

// グラフィックブレンドタイプ
#define DX_GRAPH_BLEND_NORMAL						(0)				// 通常
#define DX_GRAPH_BLEND_RGBA_SELECT_MIX				(1)				// RGBAの要素を選択して合成
#define DX_GRAPH_BLEND_MULTIPLE						(2)				// 乗算
#define DX_GRAPH_BLEND_DIFFERENCE					(3)				// 減算
#define DX_GRAPH_BLEND_ADD							(4)				// 加算
#define DX_GRAPH_BLEND_SCREEN						(5)				// スクリーン
#define DX_GRAPH_BLEND_OVERLAY						(6)				// オーバーレイ
#define DX_GRAPH_BLEND_DODGE						(7)				// 覆い焼き
#define DX_GRAPH_BLEND_BURN							(8)				// 焼き込み
#define DX_GRAPH_BLEND_DARKEN						(9)				// 比較(暗)
#define DX_GRAPH_BLEND_LIGHTEN						(10)			// 比較(明)
#define DX_GRAPH_BLEND_SOFTLIGHT					(11)			// ソフトライト
#define DX_GRAPH_BLEND_HARDLIGHT					(12)			// ハードライト
#define DX_GRAPH_BLEND_EXCLUSION					(13)			// 除外
#define DX_GRAPH_BLEND_NORMAL_ALPHACH				(14)			// αチャンネル付き画像の通常合成
#define DX_GRAPH_BLEND_ADD_ALPHACH					(15)			// αチャンネル付き画像の加算合成
#define DX_GRAPH_BLEND_MULTIPLE_A_ONLY				(16)			// アルファチャンネルのみの乗算
#define DX_GRAPH_BLEND_PMA_MULTIPLE_A_ONLY			(17)			// アルファチャンネルのみの乗算( 乗算済みα画像用 )
#define DX_GRAPH_BLEND_NUM							(18)

// DX_GRAPH_BLEND_RGBA_SELECT_MIX 用の色選択用定義
#define DX_RGBA_SELECT_SRC_R						(0)				// 元画像の赤成分
#define DX_RGBA_SELECT_SRC_G						(1)				// 元画像の緑成分
#define DX_RGBA_SELECT_SRC_B						(2)				// 元画像の青成分
#define DX_RGBA_SELECT_SRC_A						(3)				// 元画像のα成分
#define DX_RGBA_SELECT_BLEND_R						(4)				// ブレンド画像の赤成分
#define DX_RGBA_SELECT_BLEND_G						(5)				// ブレンド画像の緑成分
#define DX_RGBA_SELECT_BLEND_B						(6)				// ブレンド画像の青成分
#define DX_RGBA_SELECT_BLEND_A						(7)				// ブレンド画像のα成分

// フィルモード
#define DX_FILL_WIREFRAME							(2)				// ワイヤーフレーム
#define DX_FILL_SOLID								(3)				// ポリゴン

// ポリゴンカリングモード
#define DX_CULLING_NONE								(0)				// カリングなし
#define DX_CULLING_LEFT								(1)				// 背面を左回りでカリング
#define DX_CULLING_RIGHT							(2)				// 背面を右回りでカリング
#define DX_CULLING_NUM								(3)				// カリングモードの数

// クリッピング方向
#define DX_CAMERACLIP_LEFT							(0x01)			// 画面左方向にクリップ
#define DX_CAMERACLIP_RIGHT							(0x02)			// 画面右方向にクリップ
#define DX_CAMERACLIP_BOTTOM						(0x04)			// 画面下方向にクリップ
#define DX_CAMERACLIP_TOP							(0x08)			// 画面上方向にクリップ
#define DX_CAMERACLIP_BACK							(0x10)			// 画面後方向にクリップ
#define DX_CAMERACLIP_FRONT							(0x20)			// 画面前方向にクリップ

// MV1モデルの頂点タイプ
#define DX_MV1_VERTEX_TYPE_1FRAME					(0)				// １フレームの影響を受ける頂点
#define DX_MV1_VERTEX_TYPE_4FRAME					(1)				// １～４フレームの影響を受ける頂点
#define DX_MV1_VERTEX_TYPE_8FRAME					(2)				// ５～８フレームの影響を受ける頂点
#define DX_MV1_VERTEX_TYPE_FREE_FRAME				(3)				// ９フレーム以上の影響を受ける頂点
#define DX_MV1_VERTEX_TYPE_NMAP_1FRAME				(4)				// 法線マップ用の情報が含まれる１フレームの影響を受ける頂点
#define DX_MV1_VERTEX_TYPE_NMAP_4FRAME				(5)				// 法線マップ用の情報が含まれる１～４フレームの影響を受ける頂点
#define DX_MV1_VERTEX_TYPE_NMAP_8FRAME				(6)				// 法線マップ用の情報が含まれる５～８フレームの影響を受ける頂点
#define DX_MV1_VERTEX_TYPE_NMAP_FREE_FRAME			(7)				// 法線マップ用の情報が含まれる９フレーム以上の影響を受ける頂点
#define DX_MV1_VERTEX_TYPE_NUM						(8)				// 頂点タイプの数

// メッシュの種類
#define DX_MV1_MESHCATEGORY_NORMAL					(0)				// 普通のメッシュ
#define DX_MV1_MESHCATEGORY_OUTLINE					(1)				// 輪郭線描画用メッシュ
#define DX_MV1_MESHCATEGORY_OUTLINE_ORIG_SHADER		(2)				// 輪郭線描画用メッシュ( オリジナルシェーダーでの描画用 )
#define DX_MV1_MESHCATEGORY_NUM						(3)				// メッシュの種類の数

// MV1ファイルの保存タイプ
#define MV1_SAVETYPE_MESH							(0x0001)		// メッシュ情報のみ保存
#define MV1_SAVETYPE_ANIM							(0x0002)		// アニメーション情報のみ保存
#define MV1_SAVETYPE_NORMAL							( MV1_SAVETYPE_MESH | MV1_SAVETYPE_ANIM )	// 通常保存

// アニメーションキーデータタイプ
#define MV1_ANIMKEY_DATATYPE_ROTATE					(0)				// 回転
#define MV1_ANIMKEY_DATATYPE_ROTATE_X				(1)				// 回転Ｘ
#define MV1_ANIMKEY_DATATYPE_ROTATE_Y				(2)				// 回転Ｙ
#define MV1_ANIMKEY_DATATYPE_ROTATE_Z				(3)				// 回転Ｚ
#define MV1_ANIMKEY_DATATYPE_SCALE					(5)				// 拡大
#define MV1_ANIMKEY_DATATYPE_SCALE_X				(6)				// スケールＸ
#define MV1_ANIMKEY_DATATYPE_SCALE_Y				(7)				// スケールＹ
#define MV1_ANIMKEY_DATATYPE_SCALE_Z				(8)				// スケールＺ
#define MV1_ANIMKEY_DATATYPE_TRANSLATE				(10)			// 平行移動
#define MV1_ANIMKEY_DATATYPE_TRANSLATE_X			(11)			// 平行移動Ｘ
#define MV1_ANIMKEY_DATATYPE_TRANSLATE_Y			(12)			// 平行移動Ｙ
#define MV1_ANIMKEY_DATATYPE_TRANSLATE_Z			(13)			// 平行移動Ｚ
#define MV1_ANIMKEY_DATATYPE_MATRIX4X4C				(15)			// ４×４行列の４列目( 0,0,0,1 )固定版
#define MV1_ANIMKEY_DATATYPE_MATRIX3X3				(17)			// ３×３行列
#define MV1_ANIMKEY_DATATYPE_SHAPE					(18)			// シェイプ
#define MV1_ANIMKEY_DATATYPE_OTHRE					(20)			// その他

// タイムタイプ
#define MV1_ANIMKEY_TIME_TYPE_ONE					(0)				// 時間情報は全体で一つ
#define MV1_ANIMKEY_TIME_TYPE_KEY					(1)				// 時間情報は各キーに一つ

// アニメーションキータイプ
#define MV1_ANIMKEY_TYPE_QUATERNION_X				(0)				// クォータニオン( Xファイルタイプ )
#define MV1_ANIMKEY_TYPE_VECTOR						(1)				// ベクター
#define MV1_ANIMKEY_TYPE_MATRIX4X4C					(2)				// ４×４行列の４列目( 0,0,0,1 )固定版
#define MV1_ANIMKEY_TYPE_MATRIX3X3					(3)				// ３×３行列
#define MV1_ANIMKEY_TYPE_FLAT						(4)				// フラット
#define MV1_ANIMKEY_TYPE_LINEAR						(5)				// 線形補間
#define MV1_ANIMKEY_TYPE_BLEND						(6)				// 混合
#define MV1_ANIMKEY_TYPE_QUATERNION_VMD				(7)				// クォータニオン( VMDタイプ )

// 描画先画面指定用定義
#define DX_SCREEN_FRONT								(0xfffffffc)
#define DX_SCREEN_BACK								(0xfffffffe) 
#define DX_SCREEN_WORK 								(0xfffffffd)
#define DX_SCREEN_TEMPFRONT							(0xfffffffb)

#define DX_NONE_GRAPH								(0xfffffffb)	// グラフィックなしハンドル

// グラフィック減色時の画像劣化緩和処理モード
#define DX_SHAVEDMODE_NONE							(0)				// 画像劣化緩和処理を行わない
#define DX_SHAVEDMODE_DITHER						(1)				// ディザリング
#define DX_SHAVEDMODE_DIFFUS						(2)				// 誤差拡散

// 画像の保存タイプ
#define DX_IMAGESAVETYPE_BMP						(0)				// bitmap
#define DX_IMAGESAVETYPE_JPEG						(1)				// jpeg
#define DX_IMAGESAVETYPE_PNG						(2)				// Png
#define DX_IMAGESAVETYPE_DDS						(3)				// Direct Draw Surface

// サウンド再生形態指定用定義
#define DX_PLAYTYPE_LOOPBIT							(0x0002)		// ループ再生ビット
#define DX_PLAYTYPE_BACKBIT							(0x0001)		// バックグラウンド再生ビット

#define DX_PLAYTYPE_NORMAL							(0)												// ノーマル再生
#define DX_PLAYTYPE_BACK				  			( DX_PLAYTYPE_BACKBIT )							// バックグラウンド再生
#define DX_PLAYTYPE_LOOP							( DX_PLAYTYPE_LOOPBIT | DX_PLAYTYPE_BACKBIT )	// ループ再生

// 動画再生タイプ定義
#define DX_MOVIEPLAYTYPE_BCANCEL					(0)				// ボタンキャンセルあり
#define DX_MOVIEPLAYTYPE_NORMAL						(1)				// ボタンキャンセルなし

// サウンドのタイプ
#define DX_SOUNDTYPE_NORMAL							(0)				// ノーマルサウンド形式
#define DX_SOUNDTYPE_STREAMSTYLE					(1)				// ストリーム風サウンド形式

// サウンドデータタイプのマクロ
#define DX_SOUNDDATATYPE_MEMNOPRESS					(0)				// 圧縮された全データは再生が始まる前にサウンドメモリにすべて解凍され、格納される
#define DX_SOUNDDATATYPE_MEMNOPRESS_PLUS			(1)				// 圧縮された全データはシステムメモリに格納され、再生しながら逐次解凍され、最終的にすべてサウンドメモリに格納される(その後システムメモリに存在する圧縮データは破棄される)
#define DX_SOUNDDATATYPE_MEMPRESS					(2)				// 圧縮された全データはシステムメモリに格納され、再生する部分だけ逐次解凍しながらサウンドメモリに格納する(鳴らし終わると解凍したデータは破棄されるので何度も解凍処理が行われる)
#define DX_SOUNDDATATYPE_FILE						(3)				// 圧縮されたデータの再生する部分だけファイルから逐次読み込み解凍され、サウンドメモリに格納される(鳴らし終わると解凍したデータは破棄されるので何度も解凍処理が行われる)

// 読み込み処理のタイプ
#define DX_READSOUNDFUNCTION_PCM					(1 << 0)		// PCM の読み込み処理
#define DX_READSOUNDFUNCTION_OGG					(1 << 1)		// Ogg Vorbis の読み込み処理
#define DX_READSOUNDFUNCTION_OPUS					(1 << 2)		// Opus の読み込み処理
#define DX_READSOUNDFUNCTION_DEFAULT_NUM			(3)				// 環境非依存の読み込み処理タイプの数

// ３Ｄサウンドリバーブエフェクトのプリセット
#define DX_REVERB_PRESET_DEFAULT					(0)				// デフォルト
#define DX_REVERB_PRESET_GENERIC					(1)				// 一般的な空間
#define DX_REVERB_PRESET_PADDEDCELL					(2)				// 精神病患者室(？)
#define DX_REVERB_PRESET_ROOM						(3)				// 部屋
#define DX_REVERB_PRESET_BATHROOM					(4)				// バスルーム
#define DX_REVERB_PRESET_LIVINGROOM					(5)				// リビングルーム
#define DX_REVERB_PRESET_STONEROOM					(6)				// 石の部屋
#define DX_REVERB_PRESET_AUDITORIUM					(7)				// 講堂
#define DX_REVERB_PRESET_CONCERTHALL				(8)				// コンサートホール
#define DX_REVERB_PRESET_CAVE						(9)				// 洞穴
#define DX_REVERB_PRESET_ARENA						(10)			// 舞台
#define DX_REVERB_PRESET_HANGAR						(11)			// 格納庫
#define DX_REVERB_PRESET_CARPETEDHALLWAY			(12)			// カーペットが敷かれた玄関
#define DX_REVERB_PRESET_HALLWAY					(13)			// 玄関
#define DX_REVERB_PRESET_STONECORRIDOR				(14)			// 石の廊下
#define DX_REVERB_PRESET_ALLEY						(15)			// 裏通り
#define DX_REVERB_PRESET_FOREST						(16)			// 森
#define DX_REVERB_PRESET_CITY						(17)			// 都市
#define DX_REVERB_PRESET_MOUNTAINS					(18)			// 山
#define DX_REVERB_PRESET_QUARRY						(19)			// 採石場
#define DX_REVERB_PRESET_PLAIN						(20)			// 平原
#define DX_REVERB_PRESET_PARKINGLOT					(21)			// 駐車場
#define DX_REVERB_PRESET_SEWERPIPE					(22)			// 下水管
#define DX_REVERB_PRESET_UNDERWATER					(23)			// 水面下
#define DX_REVERB_PRESET_SMALLROOM					(24)			// 小部屋
#define DX_REVERB_PRESET_MEDIUMROOM					(25)			// 中部屋
#define DX_REVERB_PRESET_LARGEROOM					(26)			// 大部屋
#define DX_REVERB_PRESET_MEDIUMHALL					(27)			// 中ホール
#define DX_REVERB_PRESET_LARGEHALL					(28)			// 大ホール
#define DX_REVERB_PRESET_PLATE						(29)			// 板

#define DX_REVERB_PRESET_NUM						(30)			// プリセットの数

// マスク透過色モード
#define DX_MASKTRANS_WHITE							(0)				// マスク画像の白い部分を透過色とする
#define DX_MASKTRANS_BLACK							(1)				// マスク画像の黒い部分を透過色とする
#define DX_MASKTRANS_NONE							(2) 			// 透過色なし

// マスク画像チャンネル
#define DX_MASKGRAPH_CH_A							(0)				// アルファ
#define DX_MASKGRAPH_CH_R							(1)				// 赤
#define DX_MASKGRAPH_CH_G							(2)				// 緑
#define DX_MASKGRAPH_CH_B							(3)				// 青

// Ｚバッファ書き込みモード
#define DX_ZWRITE_MASK								(0)				// 書き込めないようにマスクする
#define DX_ZWRITE_CLEAR								(1)				// 書き込めるようにマスクをクリアする

// 比較モード
#define DX_CMP_NEVER								(1)				// FALSE
#define DX_CMP_LESS									(2)				// Src <  Dest		DrawAlpha <  TestParam
#define DX_CMP_EQUAL								(3)				// Src == Dest		DrawAlpha == TestParam
#define DX_CMP_LESSEQUAL							(4)				// Src <= Dest		DrawAlpha <= TestParam
#define DX_CMP_GREATER								(5)				// Src >  Dest		DrawAlpha >  TestParam
#define DX_CMP_NOTEQUAL								(6)				// Src != Dest		DrawAlpha != TestParam
#define DX_CMP_GREATEREQUAL							(7)				// Src >= Dest		DrawAlpha >= TestParam
#define DX_CMP_ALWAYS								(8)				// TRUE
#define DX_ZCMP_DEFAULT								( DX_CMP_LESSEQUAL )
#define DX_ZCMP_REVERSE								( DX_CMP_GREATEREQUAL )

// シェーディングモード
#define DX_SHADEMODE_FLAT							(1)				// D_D3DSHADE_FLAT
#define DX_SHADEMODE_GOURAUD						(2)				// D_D3DSHADE_GOURAUD

// フォグモード
#define DX_FOGMODE_NONE								(0)				// D_D3DFOG_NONE
#define DX_FOGMODE_EXP								(1)				// D_D3DFOG_EXP
#define DX_FOGMODE_EXP2								(2)				// D_D3DFOG_EXP2
#define DX_FOGMODE_LINEAR							(3)				// D_D3DFOG_LINEAR

// マテリアルタイプ
#define DX_MATERIAL_TYPE_NORMAL						(0)				// 標準マテリアル
#define DX_MATERIAL_TYPE_TOON						(1)				// トゥーンレンダリング用マテリアル
#define DX_MATERIAL_TYPE_TOON_2						(2)				// トゥーンレンダリング用マテリアル_タイプ２( MMD互換 )

// マテリアルブレンドタイプ
#define DX_MATERIAL_BLENDTYPE_TRANSLUCENT			(0)				// アルファ合成
#define DX_MATERIAL_BLENDTYPE_ADDITIVE				(1)				// 加算
#define DX_MATERIAL_BLENDTYPE_MODULATE				(2)				// 乗算
#define DX_MATERIAL_BLENDTYPE_NONE					(3)				// 無効

// テクスチャアドレスタイプ
#define DX_TEXADDRESS_WRAP							(1)				// D_D3DTADDRESS_WRAP
#define DX_TEXADDRESS_MIRROR						(2)				// D_D3DTADDRESS_MIRROR
#define DX_TEXADDRESS_CLAMP							(3)				// D_D3DTADDRESS_CLAMP
#define DX_TEXADDRESS_BORDER						(4)				// D_D3DTADDRESS_BORDER
#define DX_TEXADDRESS_NUM							(5)				// テクスチャアドレスタイプの数

// シェーダータイプ
#define DX_SHADERTYPE_VERTEX						(0)				// 頂点シェーダー
#define DX_SHADERTYPE_PIXEL							(1)				// ピクセルシェーダー
#define DX_SHADERTYPE_GEOMETRY						(2)				// ジオメトリシェーダー
#define DX_SHADERTYPE_COMPUTE						(3)				// コンピュートシェーダー
#define DX_SHADERTYPE_DOMAIN						(4)				// ドメインシェーダー
#define DX_SHADERTYPE_HULL							(5)				// ハルシェーダー

// 頂点データタイプ
#define DX_VERTEX_TYPE_NORMAL_3D					(0)				// VERTEX3D構造体形式
#define DX_VERTEX_TYPE_SHADER_3D					(1)				// VERTEX3DSHADER構造体形式
#define DX_VERTEX_TYPE_NUM							(2)

// インデックスデータタイプ
#define DX_INDEX_TYPE_16BIT							(0)				// 16bitインデックス
#define DX_INDEX_TYPE_32BIT							(1)				// 32bitインデックス

// モデルファイル読み込み時の物理演算モード
#define DX_LOADMODEL_PHYSICS_DISABLE				(1)				// 物理演算を使用しない
#define DX_LOADMODEL_PHYSICS_LOADCALC				(0)				// 読み込み時に計算
#define DX_LOADMODEL_PHYSICS_REALTIME				(2)				// 実行時計算

// モデルの半透明要素がある箇所に関する描画モード
#define DX_SEMITRANSDRAWMODE_ALWAYS					(0)				// 半透明かどうか関係なく描画する
#define DX_SEMITRANSDRAWMODE_SEMITRANS_ONLY			(1)				// 半透明のもののみ描画する
#define DX_SEMITRANSDRAWMODE_NOT_SEMITRANS_ONLY		(2)				// 半透明ではないもののみ描画する

// キューブマップの面番号
#define DX_CUBEMAP_FACE_POSITIVE_X					(0)
#define DX_CUBEMAP_FACE_NEGATIVE_X					(1)
#define DX_CUBEMAP_FACE_POSITIVE_Y					(2)
#define DX_CUBEMAP_FACE_NEGATIVE_Y					(3)
#define DX_CUBEMAP_FACE_POSITIVE_Z					(4)
#define DX_CUBEMAP_FACE_NEGATIVE_Z					(5)

// ポリゴン描画タイプ
#define DX_PRIMTYPE_POINTLIST						(1)				// D_D3DPT_POINTLIST
#define DX_PRIMTYPE_LINELIST						(2)				// D_D3DPT_LINELIST
#define DX_PRIMTYPE_LINESTRIP						(3)				// D_D3DPT_LINESTRIP
#define DX_PRIMTYPE_TRIANGLELIST					(4)				// D_D3DPT_TRIANGLELIST
#define DX_PRIMTYPE_TRIANGLESTRIP					(5)				// D_D3DPT_TRIANGLESTRIP
#define DX_PRIMTYPE_TRIANGLEFAN						(6)				// D_D3DPT_TRIANGLEFAN

// ライトタイプ
#define DX_LIGHTTYPE_D3DLIGHT_POINT					(1)				// D_D3DLIGHT_POINT
#define DX_LIGHTTYPE_D3DLIGHT_SPOT					(2)				// D_D3DLIGHT_SPOT
#define DX_LIGHTTYPE_D3DLIGHT_DIRECTIONAL			(3)				// D_D3DLIGHT_DIRECTIONAL
#define DX_LIGHTTYPE_POINT							(1)				// D_D3DLIGHT_POINT
#define DX_LIGHTTYPE_SPOT							(2)				// D_D3DLIGHT_SPOT
#define DX_LIGHTTYPE_DIRECTIONAL					(3)				// D_D3DLIGHT_DIRECTIONAL

// グラフィックイメージフォーマットの定義
#define DX_GRAPHICSIMAGE_FORMAT_3D_PAL4						(0)		// １６色パレットカラー標準
#define DX_GRAPHICSIMAGE_FORMAT_3D_PAL8						(1)		// ２５６色パレットカラー標準
#define DX_GRAPHICSIMAGE_FORMAT_3D_ALPHA_PAL4				(2)		// αチャンネルつき１６色パレットカラー標準
#define DX_GRAPHICSIMAGE_FORMAT_3D_ALPHA_PAL8				(3)		// αチャンネルつき２５６色パレットカラー標準
#define DX_GRAPHICSIMAGE_FORMAT_3D_ALPHATEST_PAL4			(4)		// αテストつき１６色パレットカラー標準
#define DX_GRAPHICSIMAGE_FORMAT_3D_ALPHATEST_PAL8			(5)		// αテストつき２５６色パレットカラー標準
#define DX_GRAPHICSIMAGE_FORMAT_3D_RGB16					(6)		// １６ビットカラー標準
#define DX_GRAPHICSIMAGE_FORMAT_3D_RGB32					(7)		// ３２ビットカラー標準
#define DX_GRAPHICSIMAGE_FORMAT_3D_ALPHA_RGB16				(8)		// αチャンネル付き１６ビットカラー
#define DX_GRAPHICSIMAGE_FORMAT_3D_ALPHA_RGB32				(9)		// αチャンネル付き３２ビットカラー
#define DX_GRAPHICSIMAGE_FORMAT_3D_ALPHATEST_RGB16			(10)	// αテスト付き１６ビットカラー
#define DX_GRAPHICSIMAGE_FORMAT_3D_ALPHATEST_RGB32			(11)	// αテスト付き３２ビットカラー
#define DX_GRAPHICSIMAGE_FORMAT_3D_DXT1						(12)	// ＤＸＴ１
#define DX_GRAPHICSIMAGE_FORMAT_3D_DXT2						(13)	// ＤＸＴ２
#define DX_GRAPHICSIMAGE_FORMAT_3D_DXT3						(14)	// ＤＸＴ３
#define DX_GRAPHICSIMAGE_FORMAT_3D_DXT4						(15)	// ＤＸＴ４
#define DX_GRAPHICSIMAGE_FORMAT_3D_DXT5 					(16)	// ＤＸＴ５
#define DX_GRAPHICSIMAGE_FORMAT_3D_PLATFORM0				(17)	// プラットフォーム依存フォーマット０
#define DX_GRAPHICSIMAGE_FORMAT_3D_PLATFORM1				(18)	// プラットフォーム依存フォーマット１
#define DX_GRAPHICSIMAGE_FORMAT_3D_PLATFORM2				(19)	// プラットフォーム依存フォーマット２
#define DX_GRAPHICSIMAGE_FORMAT_3D_PLATFORM3				(20)	// プラットフォーム依存フォーマット３
#define DX_GRAPHICSIMAGE_FORMAT_3D_YUV	 					(21)	// ＹＵＶフォーマット
#define DX_GRAPHICSIMAGE_FORMAT_3D_ABGR_I16					(22)	// ARGB整数16ビット型カラー
#define DX_GRAPHICSIMAGE_FORMAT_3D_ABGR_F16					(23)	// ARGB浮動小数点16ビット型カラー
#define DX_GRAPHICSIMAGE_FORMAT_3D_ABGR_F32					(24)	// ARGB浮動小数点32ビット型カラー
#define DX_GRAPHICSIMAGE_FORMAT_3D_ONE_I8					(25)	// １チャンネル整数8ビット型カラー
#define DX_GRAPHICSIMAGE_FORMAT_3D_ONE_I16					(26)	// １チャンネル整数16ビット型カラー
#define DX_GRAPHICSIMAGE_FORMAT_3D_ONE_F16					(27)	// １チャンネル浮動少数16ビット型カラー
#define DX_GRAPHICSIMAGE_FORMAT_3D_ONE_F32					(28)	// １チャンネル浮動少数32ビット型カラー
#define DX_GRAPHICSIMAGE_FORMAT_3D_TWO_I8					(29)	// ２チャンネル整数8ビット型カラー
#define DX_GRAPHICSIMAGE_FORMAT_3D_TWO_I16					(30)	// ２チャンネル整数16ビット型カラー
#define DX_GRAPHICSIMAGE_FORMAT_3D_TWO_F16					(31)	// ２チャンネル浮動少数16ビット型カラー
#define DX_GRAPHICSIMAGE_FORMAT_3D_TWO_F32					(32)	// ２チャンネル浮動少数32ビット型カラー
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_RGB16			(33)	// 描画可能１６ビットカラー
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_RGB32			(34)	// 描画可能３２ビットカラー
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_ALPHA_RGB32	(35)	// 描画可能α付き３２ビットカラー
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_ABGR_I16		(36)	// 描画可能ARGB整数16ビット型カラー
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_ABGR_F16		(37)	// 描画可能ARGB浮動小数点16ビット型カラー
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_ABGR_F32		(38)	// 描画可能ARGB浮動小数点32ビット型カラー
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_ONE_I8			(39)	// 描画可能１チャンネル整数8ビット型カラー
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_ONE_I16		(40)	// 描画可能１チャンネル整数16ビット型カラー
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_ONE_F16		(41)	// 描画可能１チャンネル浮動少数16ビット型カラー
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_ONE_F32		(42)	// 描画可能１チャンネル浮動少数32ビット型カラー
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_TWO_I8			(43)	// 描画可能２チャンネル整数8ビット型カラー
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_TWO_I16		(44)	// 描画可能２チャンネル整数16ビット型カラー
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_TWO_F16		(45)	// 描画可能２チャンネル浮動少数16ビット型カラー
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_TWO_F32		(46)	// 描画可能２チャンネル浮動少数32ビット型カラー
#define DX_GRAPHICSIMAGE_FORMAT_3D_NUM						(47)
#define DX_GRAPHICSIMAGE_FORMAT_2D							(48)	// 標準( DirectDrawSurface の場合はこれのみ )
#define DX_GRAPHICSIMAGE_FORMAT_R5G6B5						(49)	// R5G6B5( MEMIMG 用 )
#define DX_GRAPHICSIMAGE_FORMAT_X8A8R5G6B5					(50)	// X8A8R5G6B5( MEMIMG 用 )
#define DX_GRAPHICSIMAGE_FORMAT_X8R8G8B8					(51)	// X8R8G8B8( MEMIMG 用 )
#define DX_GRAPHICSIMAGE_FORMAT_A8R8G8B8					(52)	// A8R8G8B8( MEMIMG 用 )

#define DX_GRAPHICSIMAGE_FORMAT_NUM							(53)	// グラフィックフォーマットの種類の数

// 基本イメージのピクセルフォーマット
#define DX_BASEIMAGE_FORMAT_NORMAL					(0)			// 普通の画像
#define DX_BASEIMAGE_FORMAT_DXT1					(1)			// ＤＸＴ１
#define DX_BASEIMAGE_FORMAT_DXT2					(2)			// ＤＸＴ２
#define DX_BASEIMAGE_FORMAT_DXT3					(3)			// ＤＸＴ３
#define DX_BASEIMAGE_FORMAT_DXT4					(4)			// ＤＸＴ４
#define DX_BASEIMAGE_FORMAT_DXT5					(5)			// ＤＸＴ５
#define DX_BASEIMAGE_FORMAT_PLATFORM0				(6)			// プラットフォーム依存フォーマット０
#define DX_BASEIMAGE_FORMAT_PLATFORM1				(7)			// プラットフォーム依存フォーマット１
#define DX_BASEIMAGE_FORMAT_PLATFORM2				(8)			// プラットフォーム依存フォーマット２
#define DX_BASEIMAGE_FORMAT_PLATFORM3				(9)			// プラットフォーム依存フォーマット３
#define DX_BASEIMAGE_FORMAT_YUV						(10)		// ＹＵＶ

// ウインドウの奥行き位置設定タイプ
#define DX_WIN_ZTYPE_NORMAL							(0)			// 通常設定
#define DX_WIN_ZTYPE_BOTTOM							(1)			// 全てのウインドウの一番奥に配置する
#define DX_WIN_ZTYPE_TOP							(2)			// 全てのウインドウの一番手前に配置する
#define DX_WIN_ZTYPE_TOPMOST						(3)			// 全てのウインドウの一番手前に配置する( ウインドウがアクティブではないときも最前面に表示される )

// ツールバーのボタンの状態
#define TOOLBUTTON_STATE_ENABLE						(0)			// 入力可能な状態
#define TOOLBUTTON_STATE_PRESSED					(1)			// 押されている状態
#define TOOLBUTTON_STATE_DISABLE					(2)			// 入力不可能な状態
#define TOOLBUTTON_STATE_PRESSED_DISABLE			(3)			// 押されている状態で、入力不可能な状態
#define TOOLBUTTON_STATE_NUM						(4)			// ツールバーのボタンの状態の数

// ツールバーのボタンのタイプ
#define TOOLBUTTON_TYPE_NORMAL						(0)			// 普通のボタン
#define TOOLBUTTON_TYPE_CHECK						(1)			// 押すごとにＯＮ／ＯＦＦが切り替わるボタン
#define TOOLBUTTON_TYPE_GROUP						(2)			// 別の TOOLBUTTON_TYPE_GROUP タイプのボタンが押されるとＯＦＦになるタイプのボタン(グループの区切りは隙間で)
#define TOOLBUTTON_TYPE_SEP							(3)			// 隙間(ボタンではありません)
#define TOOLBUTTON_TYPE_NUM							(4)			// ツールバーのボタンのタイプの数

// 親メニューのＩＤ
#define MENUITEM_IDTOP								(0xabababab)

// メニューに追加する際のタイプ
#define MENUITEM_ADD_CHILD							(0)				// 指定の項目の子として追加する
#define MENUITEM_ADD_INSERT							(1)				// 指定の項目と指定の項目より一つ上の項目の間に追加する

// メニューの横に付くマークタイプ
#define MENUITEM_MARK_NONE							(0)				// 何も付け無い
#define MENUITEM_MARK_CHECK							(1)				// チェックマーク
#define MENUITEM_MARK_RADIO							(2)				// ラジオボタン

// 文字変換タイプ定義
#define DX_NUMMODE_10								(0)				// １０進数
#define DX_NUMMODE_16								(1)				// １６進数
#define DX_STRMODE_NOT0								(2)				// 空きを０で埋めない
#define DX_STRMODE_USE0								(3)				// 空きを０で埋める

// CheckHitKeyAll で調べる入力タイプ
#define DX_CHECKINPUT_KEY							(0x0001)		// キー入力を調べる
#define DX_CHECKINPUT_PAD							(0x0002)		// パッド入力を調べる
#define DX_CHECKINPUT_MOUSE							(0x0004)		// マウスボタン入力を調べる
#define DX_CHECKINPUT_ALL							(DX_CHECKINPUT_KEY | DX_CHECKINPUT_PAD | DX_CHECKINPUT_MOUSE)	// すべての入力を調べる

// パッド入力取得パラメータ
#define DX_INPUT_KEY_PAD1							(0x1001)		// キー入力とパッド１入力
#define DX_INPUT_PAD1								(0x0001)		// パッド１入力
#define DX_INPUT_PAD2								(0x0002)		// パッド２入力
#define DX_INPUT_PAD3								(0x0003)		// パッド３入力
#define DX_INPUT_PAD4								(0x0004)		// パッド４入力
#define DX_INPUT_PAD5								(0x0005)		// パッド５入力
#define DX_INPUT_PAD6								(0x0006)		// パッド６入力
#define DX_INPUT_PAD7								(0x0007)		// パッド７入力
#define DX_INPUT_PAD8								(0x0008)		// パッド８入力
#define DX_INPUT_PAD9								(0x0009)		// パッド９入力
#define DX_INPUT_PAD10								(0x000a)		// パッド１０入力
#define DX_INPUT_PAD11								(0x000b)		// パッド１１入力
#define DX_INPUT_PAD12								(0x000c)		// パッド１２入力
#define DX_INPUT_PAD13								(0x000d)		// パッド１３入力
#define DX_INPUT_PAD14								(0x000e)		// パッド１４入力
#define DX_INPUT_PAD15								(0x000f)		// パッド１５入力
#define DX_INPUT_PAD16								(0x0010)		// パッド１６入力
#define DX_INPUT_KEY								(0x1000)		// キー入力

// ムービーのサーフェスモード
#define DX_MOVIESURFACE_NORMAL						(0)
#define DX_MOVIESURFACE_OVERLAY						(1)
#define DX_MOVIESURFACE_FULLCOLOR					(2)

// タッチの同時接触検出対応最大数
#define TOUCHINPUTPOINT_MAX							(16)

// パッド入力定義
#define PAD_INPUT_DOWN								(0x00000001)	// ↓チェックマスク
#define PAD_INPUT_LEFT								(0x00000002)	// ←チェックマスク
#define PAD_INPUT_RIGHT								(0x00000004)	// →チェックマスク
#define PAD_INPUT_UP								(0x00000008)	// ↑チェックマスク
#define PAD_INPUT_A									(0x00000010)	// Ａボタンチェックマスク
#define PAD_INPUT_B									(0x00000020)	// Ｂボタンチェックマスク
#define PAD_INPUT_C									(0x00000040)	// Ｃボタンチェックマスク
#define PAD_INPUT_X									(0x00000080)	// Ｘボタンチェックマスク
#define PAD_INPUT_Y									(0x00000100)	// Ｙボタンチェックマスク
#define PAD_INPUT_Z									(0x00000200)	// Ｚボタンチェックマスク
#define PAD_INPUT_L									(0x00000400)	// Ｌボタンチェックマスク
#define PAD_INPUT_R									(0x00000800)	// Ｒボタンチェックマスク
#define PAD_INPUT_START								(0x00001000)	// ＳＴＡＲＴボタンチェックマスク
#define PAD_INPUT_M									(0x00002000)	// Ｍボタンチェックマスク
#define PAD_INPUT_D									(0x00004000)
#define PAD_INPUT_F									(0x00008000)
#define PAD_INPUT_G									(0x00010000)
#define PAD_INPUT_H									(0x00020000)
#define PAD_INPUT_I									(0x00040000)
#define PAD_INPUT_J									(0x00080000)
#define PAD_INPUT_K									(0x00100000)
#define PAD_INPUT_LL								(0x00200000)
#define PAD_INPUT_N									(0x00400000)
#define PAD_INPUT_O									(0x00800000)
#define PAD_INPUT_P									(0x01000000)
#define PAD_INPUT_RR								(0x02000000)
#define PAD_INPUT_S									(0x04000000)
#define PAD_INPUT_T									(0x08000000)
#define PAD_INPUT_U									(0x10000000)
#define PAD_INPUT_V									(0x20000000)
#define PAD_INPUT_W									(0x40000000)
#define PAD_INPUT_XX								(0x80000000)

#define PAD_INPUT_1									(0x00000010)
#define PAD_INPUT_2									(0x00000020)
#define PAD_INPUT_3									(0x00000040)
#define PAD_INPUT_4									(0x00000080)
#define PAD_INPUT_5									(0x00000100)
#define PAD_INPUT_6									(0x00000200)
#define PAD_INPUT_7									(0x00000400)
#define PAD_INPUT_8									(0x00000800)
#define PAD_INPUT_9									(0x00001000)
#define PAD_INPUT_10								(0x00002000)
#define PAD_INPUT_11								(0x00004000)
#define PAD_INPUT_12								(0x00008000)
#define PAD_INPUT_13								(0x00010000)
#define PAD_INPUT_14								(0x00020000)
#define PAD_INPUT_15								(0x00040000)
#define PAD_INPUT_16								(0x00080000)
#define PAD_INPUT_17								(0x00100000)
#define PAD_INPUT_18								(0x00200000)
#define PAD_INPUT_19								(0x00400000)
#define PAD_INPUT_20								(0x00800000)
#define PAD_INPUT_21								(0x01000000)
#define PAD_INPUT_22								(0x02000000)
#define PAD_INPUT_23								(0x04000000)
#define PAD_INPUT_24								(0x08000000)
#define PAD_INPUT_25								(0x10000000)
#define PAD_INPUT_26								(0x20000000)
#define PAD_INPUT_27								(0x40000000)
#define PAD_INPUT_28								(0x80000000)

// XInputボタン入力定義
#define XINPUT_BUTTON_DPAD_UP						(0)					// デジタル方向ボタン上
#define XINPUT_BUTTON_DPAD_DOWN						(1)					// デジタル方向ボタン下
#define XINPUT_BUTTON_DPAD_LEFT						(2)					// デジタル方向ボタン左
#define XINPUT_BUTTON_DPAD_RIGHT					(3)					// デジタル方向ボタン右
#define XINPUT_BUTTON_START							(4)					// STARTボタン
#define XINPUT_BUTTON_BACK							(5)					// BACKボタン
#define XINPUT_BUTTON_LEFT_THUMB					(6)					// 左スティック押し込み
#define XINPUT_BUTTON_RIGHT_THUMB					(7)					// 右スティック押し込み
#define XINPUT_BUTTON_LEFT_SHOULDER					(8)					// LBボタン
#define XINPUT_BUTTON_RIGHT_SHOULDER				(9)					// RBボタン
#define XINPUT_BUTTON_A								(12)				// Aボタン
#define XINPUT_BUTTON_B								(13)				// Bボタン
#define XINPUT_BUTTON_X								(14)				// Xボタン
#define XINPUT_BUTTON_Y								(15)				// Yボタン

// マウス入力定義
#define MOUSE_INPUT_LEFT							(0x0001)			// マウス左ボタン
#define MOUSE_INPUT_RIGHT							(0x0002)			// マウス右ボタン
#define MOUSE_INPUT_MIDDLE							(0x0004)			// マウス中央ボタン
#define MOUSE_INPUT_1								(0x0001)			// マウス１ボタン
#define MOUSE_INPUT_2								(0x0002)			// マウス２ボタン
#define MOUSE_INPUT_3								(0x0004)			// マウス３ボタン
#define MOUSE_INPUT_4								(0x0008)			// マウス４ボタン
#define MOUSE_INPUT_5								(0x0010)			// マウス５ボタン
#define MOUSE_INPUT_6								(0x0020)			// マウス６ボタン
#define MOUSE_INPUT_7								(0x0040)			// マウス７ボタン
#define MOUSE_INPUT_8								(0x0080)			// マウス８ボタン

// キー定義
#define KEY_INPUT_BACK								(0x0E)				// BackSpaceキー	D_DIK_BACK
#define KEY_INPUT_TAB								(0x0F)				// Tabキー			D_DIK_TAB
#define KEY_INPUT_RETURN							(0x1C)				// Enterキー		D_DIK_RETURN

#define KEY_INPUT_LSHIFT							(0x2A)				// 左Shiftキー		D_DIK_LSHIFT
#define KEY_INPUT_RSHIFT							(0x36)				// 右Shiftキー		D_DIK_RSHIFT
#define KEY_INPUT_LCONTROL							(0x1D)				// 左Ctrlキー		D_DIK_LCONTROL
#define KEY_INPUT_RCONTROL							(0x9D)				// 右Ctrlキー		D_DIK_RCONTROL
#define KEY_INPUT_ESCAPE							(0x01)				// Escキー			D_DIK_ESCAPE
#define KEY_INPUT_SPACE								(0x39)				// スペースキー		D_DIK_SPACE
#define KEY_INPUT_PGUP								(0xC9)				// PageUpキー		D_DIK_PGUP
#define KEY_INPUT_PGDN								(0xD1)				// PageDownキー		D_DIK_PGDN
#define KEY_INPUT_END								(0xCF)				// Endキー			D_DIK_END
#define KEY_INPUT_HOME								(0xC7)				// Homeキー			D_DIK_HOME
#define KEY_INPUT_LEFT								(0xCB)				// 左キー			D_DIK_LEFT
#define KEY_INPUT_UP								(0xC8)				// 上キー			D_DIK_UP
#define KEY_INPUT_RIGHT								(0xCD)				// 右キー			D_DIK_RIGHT
#define KEY_INPUT_DOWN								(0xD0)				// 下キー			D_DIK_DOWN
#define KEY_INPUT_INSERT							(0xD2)				// Insertキー		D_DIK_INSERT
#define KEY_INPUT_DELETE							(0xD3)				// Deleteキー		D_DIK_DELETE

#define KEY_INPUT_MINUS								(0x0C)				// －キー			D_DIK_MINUS
#define KEY_INPUT_YEN								(0x7D)				// ￥キー			D_DIK_YEN
#define KEY_INPUT_PREVTRACK							(0x90)				// ＾キー			D_DIK_PREVTRACK
#define KEY_INPUT_PERIOD							(0x34)				// ．キー			D_DIK_PERIOD
#define KEY_INPUT_SLASH								(0x35)				// ／キー			D_DIK_SLASH
#define KEY_INPUT_LALT								(0x38)				// 左Altキー		D_DIK_LALT
#define KEY_INPUT_RALT								(0xB8)				// 右Altキー		D_DIK_RALT
#define KEY_INPUT_SCROLL							(0x46)				// ScrollLockキー	D_DIK_SCROLL
#define KEY_INPUT_SEMICOLON							(0x27)				// ；キー			D_DIK_SEMICOLON
#define KEY_INPUT_COLON								(0x92)				// ：キー			D_DIK_COLON
#define KEY_INPUT_LBRACKET							(0x1A)				// ［キー			D_DIK_LBRACKET
#define KEY_INPUT_RBRACKET							(0x1B)				// ］キー			D_DIK_RBRACKET
#define KEY_INPUT_AT								(0x91)				// ＠キー			D_DIK_AT
#define KEY_INPUT_BACKSLASH							(0x2B)				// ＼キー			D_DIK_BACKSLASH
#define KEY_INPUT_COMMA								(0x33)				// ，キー			D_DIK_COMMA
#define KEY_INPUT_KANJI								(0x94)				// 漢字キー			D_DIK_KANJI
#define KEY_INPUT_CONVERT							(0x79)				// 変換キー			D_DIK_CONVERT
#define KEY_INPUT_NOCONVERT							(0x7B)				// 無変換キー		D_DIK_NOCONVERT
#define KEY_INPUT_KANA								(0x70)				// カナキー			D_DIK_KANA
#define KEY_INPUT_APPS								(0xDD)				// アプリケーションメニューキー		D_DIK_APPS
#define KEY_INPUT_CAPSLOCK							(0x3A)				// CaspLockキー		D_DIK_CAPSLOCK
#define KEY_INPUT_SYSRQ								(0xB7)				// PrintScreenキー	D_DIK_SYSRQ
#define KEY_INPUT_PAUSE								(0xC5)				// PauseBreakキー	D_DIK_PAUSE
#define KEY_INPUT_LWIN								(0xDB)				// 左Winキー		D_DIK_LWIN
#define KEY_INPUT_RWIN								(0xDC)				// 右Winキー		D_DIK_RWIN

#define KEY_INPUT_NUMLOCK							(0x45)				// テンキーNumLockキー		D_DIK_NUMLOCK
#define KEY_INPUT_NUMPAD0							(0x52)				// テンキー０				D_DIK_NUMPAD0
#define KEY_INPUT_NUMPAD1							(0x4F)				// テンキー１				D_DIK_NUMPAD1
#define KEY_INPUT_NUMPAD2							(0x50)				// テンキー２				D_DIK_NUMPAD2
#define KEY_INPUT_NUMPAD3							(0x51)				// テンキー３				D_DIK_NUMPAD3
#define KEY_INPUT_NUMPAD4							(0x4B)				// テンキー４				D_DIK_NUMPAD4
#define KEY_INPUT_NUMPAD5							(0x4C)				// テンキー５				D_DIK_NUMPAD5
#define KEY_INPUT_NUMPAD6							(0x4D)				// テンキー６				D_DIK_NUMPAD6
#define KEY_INPUT_NUMPAD7							(0x47)				// テンキー７				D_DIK_NUMPAD7
#define KEY_INPUT_NUMPAD8							(0x48)				// テンキー８				D_DIK_NUMPAD8
#define KEY_INPUT_NUMPAD9							(0x49)				// テンキー９				D_DIK_NUMPAD9
#define KEY_INPUT_MULTIPLY							(0x37)				// テンキー＊キー			D_DIK_MULTIPLY
#define KEY_INPUT_ADD								(0x4E)				// テンキー＋キー			D_DIK_ADD
#define KEY_INPUT_SUBTRACT							(0x4A)				// テンキー－キー			D_DIK_SUBTRACT
#define KEY_INPUT_DECIMAL							(0x53)				// テンキー．キー			D_DIK_DECIMAL
#define KEY_INPUT_DIVIDE							(0xB5)				// テンキー／キー			D_DIK_DIVIDE
#define KEY_INPUT_NUMPADENTER						(0x9C)				// テンキーのエンターキー	D_DIK_NUMPADENTER

#define KEY_INPUT_F1								(0x3B)				// Ｆ１キー			D_DIK_F1
#define KEY_INPUT_F2								(0x3C)				// Ｆ２キー			D_DIK_F2
#define KEY_INPUT_F3								(0x3D)				// Ｆ３キー			D_DIK_F3
#define KEY_INPUT_F4								(0x3E)				// Ｆ４キー			D_DIK_F4
#define KEY_INPUT_F5								(0x3F)				// Ｆ５キー			D_DIK_F5
#define KEY_INPUT_F6								(0x40)				// Ｆ６キー			D_DIK_F6
#define KEY_INPUT_F7								(0x41)				// Ｆ７キー			D_DIK_F7
#define KEY_INPUT_F8								(0x42)				// Ｆ８キー			D_DIK_F8
#define KEY_INPUT_F9								(0x43)				// Ｆ９キー			D_DIK_F9
#define KEY_INPUT_F10								(0x44)				// Ｆ１０キー		D_DIK_F10
#define KEY_INPUT_F11								(0x57)				// Ｆ１１キー		D_DIK_F11
#define KEY_INPUT_F12								(0x58)				// Ｆ１２キー		D_DIK_F12

#define KEY_INPUT_A									(0x1E)				// Ａキー			D_DIK_A
#define KEY_INPUT_B									(0x30)				// Ｂキー			D_DIK_B
#define KEY_INPUT_C									(0x2E)				// Ｃキー			D_DIK_C
#define KEY_INPUT_D									(0x20)				// Ｄキー			D_DIK_D
#define KEY_INPUT_E									(0x12)				// Ｅキー			D_DIK_E
#define KEY_INPUT_F									(0x21)				// Ｆキー			D_DIK_F
#define KEY_INPUT_G									(0x22)				// Ｇキー			D_DIK_G
#define KEY_INPUT_H									(0x23)				// Ｈキー			D_DIK_H
#define KEY_INPUT_I									(0x17)				// Ｉキー			D_DIK_I
#define KEY_INPUT_J									(0x24)				// Ｊキー			D_DIK_J
#define KEY_INPUT_K									(0x25)				// Ｋキー			D_DIK_K
#define KEY_INPUT_L									(0x26)				// Ｌキー			D_DIK_L
#define KEY_INPUT_M									(0x32)				// Ｍキー			D_DIK_M
#define KEY_INPUT_N									(0x31)				// Ｎキー			D_DIK_N
#define KEY_INPUT_O									(0x18)				// Ｏキー			D_DIK_O
#define KEY_INPUT_P									(0x19)				// Ｐキー			D_DIK_P
#define KEY_INPUT_Q									(0x10)				// Ｑキー			D_DIK_Q
#define KEY_INPUT_R									(0x13)				// Ｒキー			D_DIK_R
#define KEY_INPUT_S									(0x1F)				// Ｓキー			D_DIK_S
#define KEY_INPUT_T									(0x14)				// Ｔキー			D_DIK_T
#define KEY_INPUT_U									(0x16)				// Ｕキー			D_DIK_U
#define KEY_INPUT_V									(0x2F)				// Ｖキー			D_DIK_V
#define KEY_INPUT_W									(0x11)				// Ｗキー			D_DIK_W
#define KEY_INPUT_X									(0x2D)				// Ｘキー			D_DIK_X
#define KEY_INPUT_Y									(0x15)				// Ｙキー			D_DIK_Y
#define KEY_INPUT_Z									(0x2C)				// Ｚキー			D_DIK_Z

#define KEY_INPUT_0 								(0x0B)				// ０キー			D_DIK_0
#define KEY_INPUT_1									(0x02)				// １キー			D_DIK_1
#define KEY_INPUT_2									(0x03)				// ２キー			D_DIK_2
#define KEY_INPUT_3									(0x04)				// ３キー			D_DIK_3
#define KEY_INPUT_4									(0x05)				// ４キー			D_DIK_4
#define KEY_INPUT_5									(0x06)				// ５キー			D_DIK_5
#define KEY_INPUT_6									(0x07)				// ６キー			D_DIK_6
#define KEY_INPUT_7									(0x08)				// ７キー			D_DIK_7
#define KEY_INPUT_8									(0x09)				// ８キー			D_DIK_8
#define KEY_INPUT_9									(0x0A)				// ９キー			D_DIK_9

// アスキーコントロールキーコード
#define CTRL_CODE_BS								(0x08)				// バックスペース
#define CTRL_CODE_TAB								(0x09)				// タブ
#define CTRL_CODE_CR								(0x0d)				// 改行
#define CTRL_CODE_DEL								(0x10)				// ＤＥＬキー

#define CTRL_CODE_COPY								(0x03)				// コピー
#define CTRL_CODE_PASTE								(0x16)				// ペースト
#define CTRL_CODE_CUT								(0x18)				// カット
#define CTRL_CODE_ALL								(0x01)				// 全て選択

#define CTRL_CODE_LEFT								(0x1d)				// ←キー
#define CTRL_CODE_RIGHT								(0x1c)				// →キー
#define CTRL_CODE_UP								(0x1e)				// ↑キー
#define CTRL_CODE_DOWN								(0x1f)				// ↓キー

#define CTRL_CODE_HOME								(0x1a)				// ＨＯＭＥボタン
#define CTRL_CODE_END								(0x19)				// ＥＮＤボタン
#define CTRL_CODE_PAGE_UP							(0x17)				// ＰＡＧＥ ＵＰ
#define CTRL_CODE_PAGE_DOWN							(0x15)				// ＰＡＧＥ ＤＯＷＮ

#define CTRL_CODE_ESC								(0x1b)				// ＥＳＣキー
#define CTRL_CODE_CMP								(0x20)				// 制御コード敷居値

// SetKeyInputStringColor2 に渡す色変更対象を指定するための識別子
#define DX_KEYINPSTRCOLOR_NORMAL_STR					(0)				// 入力文字列の色
#define DX_KEYINPSTRCOLOR_NORMAL_STR_EDGE				(1)				// 入力文字列の縁の色
#define DX_KEYINPSTRCOLOR_NORMAL_CURSOR					(2)				// ＩＭＥ非使用時のカーソルの色
#define DX_KEYINPSTRCOLOR_SELECT_STR					(3)				// 入力文字列の選択部分( SHIFTキーを押しながら左右キーで選択 )の色
#define DX_KEYINPSTRCOLOR_SELECT_STR_EDGE				(4)				// 入力文字列の選択部分( SHIFTキーを押しながら左右キーで選択 )の縁の色
#define DX_KEYINPSTRCOLOR_SELECT_STR_BACK				(5)				// 入力文字列の選択部分( SHIFTキーを押しながら左右キーで選択 )の周りの色
#define DX_KEYINPSTRCOLOR_IME_STR						(6)				// ＩＭＥ使用時の入力文字列の色
#define DX_KEYINPSTRCOLOR_IME_STR_EDGE					(7)				// ＩＭＥ使用時の入力文字列の縁の色
#define DX_KEYINPSTRCOLOR_IME_STR_BACK					(8)				// ＩＭＥ使用時の入力文字列の周りの色
#define DX_KEYINPSTRCOLOR_IME_CURSOR					(9)				// ＩＭＥ使用時のカーソルの色
#define DX_KEYINPSTRCOLOR_IME_LINE						(10)			// ＩＭＥ使用時の変換文字列の下線の色
#define DX_KEYINPSTRCOLOR_IME_SELECT_STR				(11)			// ＩＭＥ使用時の選択対象の変換候補文字列の色
#define DX_KEYINPSTRCOLOR_IME_SELECT_STR_EDGE			(12)			// ＩＭＥ使用時の選択対象の変換候補文字列の縁の色
#define DX_KEYINPSTRCOLOR_IME_SELECT_STR_BACK			(13)			// ＩＭＥ使用時の選択対象の変換候補文字列の周りの色
#define DX_KEYINPSTRCOLOR_IME_CONV_WIN_STR				(14)			// ＩＭＥ使用時の変換候補ウインドウ内の文字列の色
#define DX_KEYINPSTRCOLOR_IME_CONV_WIN_STR_EDGE			(15)			// ＩＭＥ使用時の変換候補ウインドウ内の文字列の縁の色
#define DX_KEYINPSTRCOLOR_IME_CONV_WIN_SELECT_STR		(16)			// ＩＭＥ使用時の変換候補ウインドウ内で選択している文字列の色
#define DX_KEYINPSTRCOLOR_IME_CONV_WIN_SELECT_STR_EDGE	(17)			// ＩＭＥ使用時の変換候補ウインドウ内で選択している文字列の縁の色
#define DX_KEYINPSTRCOLOR_IME_CONV_WIN_SELECT_STR_BACK	(18)			// ＩＭＥ使用時の変換候補ウインドウ内で選択している文字列の周りの色
#define DX_KEYINPSTRCOLOR_IME_CONV_WIN_EDGE				(19)			// ＩＭＥ使用時の変換候補ウインドウの縁の色
#define DX_KEYINPSTRCOLOR_IME_CONV_WIN_BACK				(20)			// ＩＭＥ使用時の変換候補ウインドウの下地の色
#define DX_KEYINPSTRCOLOR_IME_MODE_STR					(21)			// ＩＭＥ使用時の入力モード文字列の色(『全角ひらがな』等)
#define DX_KEYINPSTRCOLOR_IME_MODE_STR_EDGE				(22)			// ＩＭＥ使用時の入力モード文字列の縁の色
#define DX_KEYINPSTRCOLOR_NUM							(23)

// 文字列入力処理の入力文字数が限界に達している状態で、文字列の末端部分で入力が行われた場合の処理モード
#define DX_KEYINPSTR_ENDCHARAMODE_OVERWRITE				(0)				// 文字数が限界に達している状態で文字列の末端で文字が入力された場合は、最後の文字を上書き( デフォルト )
#define DX_KEYINPSTR_ENDCHARAMODE_NOTCHANGE				(1)				// 文字数が限界に達している状態で文字列の末端で文字が入力された場合は、何も変化しない

// フルスクリーン解像度モード定義
#define DX_FSRESOLUTIONMODE_DESKTOP					(0)					// モニターの画面モードをデスクトップ画面と同じにしてＤＸライブラリ画面を拡大して表示するモード
#define DX_FSRESOLUTIONMODE_NATIVE					(1)					// モニターの解像度をＤＸライブラリ画面の解像度に合わせるモード
#define DX_FSRESOLUTIONMODE_MAXIMUM					(2)					// モニターの解像度を最大にしてＤＸライブラリ画面を拡大して表示するモード

// フルスクリーン拡大モード定義
#define DX_FSSCALINGMODE_BILINEAR					(0)					// バイリニアモード( ピクセルが滲んでピクセルとピクセルの区切りがはっきりしない )
#define DX_FSSCALINGMODE_NEAREST					(1)					// 最近点モード( ピクセルが四角くくっきり表示される )

// SetGraphMode 戻り値定義
#define DX_CHANGESCREEN_OK							(0)					// 画面変更は成功した
#define DX_CHANGESCREEN_RETURN						(-1)				// 画面の変更は失敗し、元の画面モードに戻された
#define DX_CHANGESCREEN_DEFAULT						(-2)				// 画面の変更は失敗しデフォルトの画面モードに変更された
#define DX_CHANGESCREEN_REFRESHNORMAL				(-3)				// 画面の変更は成功したが、リフレッシュレートの変更は失敗した

// ストリームデータ読み込み処理コード簡略化関連
#define STTELL( st )								((st)->ReadShred.Tell( (st)->DataPoint ))
#define STSEEK( st, pos, type )						((st)->ReadShred.Seek( (st)->DataPoint, (pos), (type) ))
#define STREAD( buf, length, num, st )				((st)->ReadShred.Read( (buf), (length), (num), (st)->DataPoint ))
#define STWRITE( buf, length, num, st )				((st)->ReadShred.Write( (buf), (length), (num), (st)->DataPoint ))
#define STEOF( st )									((st)->ReadShred.Eof( (st)->DataPoint ))
#define STCLOSE( st )								((st)->ReadShred.Close( (st)->DataPoint ))

// ストリームデータ制御のシークタイプ定義
#define STREAM_SEEKTYPE_SET							(SEEK_SET)
#define STREAM_SEEKTYPE_END							(SEEK_END)
#define STREAM_SEEKTYPE_CUR							(SEEK_CUR)

// グラフィックロード時のイメージタイプ
#define LOADIMAGE_TYPE_FILE							(0)				// イメージはファイルである
#define LOADIMAGE_TYPE_MEM							(1)				// イメージはメモリである
#define LOADIMAGE_TYPE_NONE							(-1)			// イメージは無い



#ifndef DX_NON_NETWORK

// HTTP エラー
#define HTTP_ERR_SERVER								(0)				// サーバーエラー
#define HTTP_ERR_NOTFOUND							(1)				// ファイルが見つからなかった
#define HTTP_ERR_MEMORY								(2)				// メモリ確保の失敗
#define HTTP_ERR_LOST								(3)				// 途中で切断された
#define HTTP_ERR_NONE								(-1)			// エラーは報告されていない

// HTTP 処理の結果
#define HTTP_RES_COMPLETE							(0)				// 処理完了
#define HTTP_RES_STOP								(1)				// 処理中止
#define HTTP_RES_ERROR								(2)				// エラー終了
#define HTTP_RES_NOW								(-1)			// 現在進行中

#endif // DX_NON_NETWORK

#define DX_DEFINE_END
///// DxLibHeader/DxLib.h: [定義] End
///// DxLibHeader/DxLib.h: [データ型定義] Start


// WAVEFORMATEX の定義
#ifndef _WAVEFORMATEX_
#define _WAVEFORMATEX_

struct tWAVEFORMATEX
{
	WORD					wFormatTag ;			// フォーマット( WAVE_FORMAT_PCM( 値は 1 ) 等 )
	WORD					nChannels ;				// チャンネル数
	DWORD					nSamplesPerSec ;		// １秒辺りのサンプル数
	DWORD					nAvgBytesPerSec ;		// １秒辺りのバイト数( PCMの場合 nSamplesPerSec * nBlockAlign )
	WORD					nBlockAlign ;			// 全チャンネルの１サンプルを合わせたバイト数( wBitsPerSample / 8 * nChannels )
	WORD					wBitsPerSample ;		// １サンプル辺りのビット数
	WORD					cbSize ;				// 拡張情報のバイト数( 拡張情報が無い場合は 0 )
} ;

typedef tWAVEFORMATEX	WAVEFORMATEX, *PWAVEFORMATEX, NEAR *NPWAVEFORMATEX, FAR *LPWAVEFORMATEX ;

#endif // _WAVEFORMATEX_

// WAVEFORMAT の定義
#ifndef WAVE_FORMAT_PCM

struct waveformat_tag
{
	WORD					wFormatTag ;			// フォーマット( WAVE_FORMAT_PCM( 値は 1 ) 等 )
	WORD					nChannels ;				// チャンネル数
	DWORD					nSamplesPerSec ;		// １秒辺りのサンプル数
	DWORD					nAvgBytesPerSec ;		// １秒辺りのバイト数( PCMの場合 nSamplesPerSec * nBlockAlign )
	WORD					nBlockAlign ;			// 全チャンネルの１サンプルを合わせたバイト数( wBitsPerSample / 8 * nChannels )
} ;

typedef waveformat_tag	WAVEFORMAT, *PWAVEFORMAT, NEAR *NPWAVEFORMAT, FAR *LPWAVEFORMAT ;

#define WAVE_FORMAT_PCM		1

#endif // WAVE_FORMAT_PCM

#ifndef DX_NON_NAMESPACE

namespace DxLib
{

#endif // DX_NON_NAMESPACE

#define DX_STRUCT_START

// ＩＭＥ入力文字列の描画に必要な情報の内の文節情報
typedef struct tagIMEINPUTCLAUSEDATA
{
	int						Position ;				// 何バイト目から
	int						Length ;				// 何バイトか
} IMEINPUTCLAUSEDATA, *LPIMEINPUTCLAUSEDATA ;

// ＩＭＥ入力文字列の描画に必要な情報
typedef struct tagIMEINPUTDATA
{
	const TCHAR *				InputString ;			// 入力中の文字列

	int							CursorPosition ;		// カーソルの入力文字列中の位置(バイト単位)

	const IMEINPUTCLAUSEDATA *	ClauseData ;			// 文節情報
	int							ClauseNum ;				// 文節情報の数
	int							SelectClause ;			// 選択中の分節( -1 の場合はどの文節にも属していない( 末尾にカーソルがある ) )

	int							CandidateNum ;			// 変換候補の数( 0の場合は変換中ではない )
	const TCHAR **				CandidateList ;			// 変換候補文字列リスト( 例：ｎ番目の候補を描画する場合  DrawString( 0, 0, data.CandidateList[ n ], GetColor(255,255,255) ); )
	int							SelectCandidate ;		// 選択中の変換候補

	int							ConvertFlag ;			// 文字変換中かどうか( TRUE:変換中  FALSE:変換中ではない( 文字単位でカーソルが移動できる状態 ) )
} IMEINPUTDATA, *LPIMEINPUTDATA ;

// 画面モード情報データ型
typedef struct tagDISPLAYMODEDATA
{
	int						Width ;				// 水平解像度
	int						Height ;			// 垂直解像度
	int						ColorBitDepth ;		// 色ビット深度
	int						RefreshRate ;		// リフレッシュレート( -1 の場合は規定値 )
} DISPLAYMODEDATA, *LPDISPLAYMODEDATA ;

// タイムデータ型
typedef struct tagDATEDATA
{
	int						Year ;							// 年
	int						Mon ;							// 月
	int						Day ;							// 日
	int						Hour ;							// 時間
	int						Min ;							// 分
	int						Sec ;							// 秒
} DATEDATA, *LPDATEDATA ;

// ファイル情報構造体
typedef struct tagFILEINFO
{
	TCHAR					Name[ 260 ] ;		// オブジェクト名
	int						DirFlag ;			// ディレクトリかどうか( TRUE:ディレクトリ  FALSE:ファイル )
	LONGLONG				Size ;				// サイズ
	DATEDATA				CreationTime ;		// 作成日時
	DATEDATA				LastWriteTime ;		// 最終更新日時
} FILEINFO, *LPFILEINFO ;

// ファイル情報構造体（ wchar_t 版 ）
typedef struct tagFILEINFOW
{
	wchar_t					Name[ 260 ] ;		// オブジェクト名
	int						DirFlag ;			// ディレクトリかどうか( TRUE:ディレクトリ  FALSE:ファイル )
	LONGLONG				Size ;				// サイズ
	DATEDATA				CreationTime ;		// 作成日時
	DATEDATA				LastWriteTime ;		// 最終更新日時
} FILEINFOW, *LPFILEINFOW ;

// 行列構造体
typedef struct tagMATRIX
{
	float					m[4][4] ;
} MATRIX, *LPMATRIX ;

typedef struct tagMATRIX_D
{
	double					m[4][4] ;
} MATRIX_D, *LPMATRIX_D ;

// ベクトルデータ型
typedef struct tagVECTOR
{
	float					x, y, z ;
} VECTOR, *LPVECTOR, FLOAT3, *LPFLOAT3 ;

typedef struct tagVECTOR_D
{
	double					x, y, z ;
} VECTOR_D, *LPVECTOR_D, DOUBLE3, *LPDOUBLE3 ;

// FLOAT2個データ型
typedef struct tagFLOAT2
{
	float					u, v ;
} FLOAT2 ;

// float 型のカラー値
typedef struct tagCOLOR_F
{
	float					r, g, b, a ;
} COLOR_F, *LPCOLOR_F ;

// unsigned char 型のカラー値
typedef struct tagCOLOR_U8
{
	BYTE					b, g, r, a ;
} COLOR_U8 ;

// FLOAT4個データ型
typedef struct tagFLOAT4
{
	float					x, y, z, w ;
} FLOAT4, *LPFLOAT4 ;

// DOUBLE4個データ型
typedef struct tagDOUBLE4
{
	double					x, y, z, w ;
} DOUBLE4, *LPDOUBLE4 ;

// INT4個データ型
typedef struct tagINT4
{
	int						x, y, z, w ;
} INT4 ;

#ifndef DX_NOTUSE_DRAWFUNCTION

// ２Ｄ描画に使用する頂点データ型(DrawPrimitive2D用)
typedef struct tagVERTEX2D
{
	VECTOR					pos ;
	float					rhw ;
	COLOR_U8				dif ;
	float					u, v ;
} VERTEX2D, *LPVERTEX2D ; 

// ２Ｄ描画に使用する頂点データ型(DrawPrimitive2DToShader用)
typedef struct tagVERTEX2DSHADER
{
	VECTOR					pos ;
	float					rhw ;
	COLOR_U8				dif ;
	COLOR_U8				spc ;
	float					u, v ;
	float					su, sv ;
} VERTEX2DSHADER, *LPVERTEX2DSHADER ; 

// ２Ｄ描画に使用する頂点データ型(公開用)
typedef struct tagVERTEX
{
	float					x, y ;
	float					u, v ;
	unsigned char			b, g, r, a ;
} VERTEX ;

// ３Ｄ描画に使用する頂点データ型( 旧バージョンのもの )
typedef struct tagVERTEX_3D
{
	VECTOR					pos ;
	unsigned char			b, g, r, a ;
	float					u, v ;
} VERTEX_3D, *LPVERTEX_3D ;

// ３Ｄ描画に使用する頂点データ型
typedef struct tagVERTEX3D
{
	VECTOR					pos ;						// 座標
	VECTOR					norm ;						// 法線
	COLOR_U8				dif ;						// ディフューズカラー
	COLOR_U8				spc ;						// スペキュラカラー
	float					u, v ;						// テクスチャ座標
	float					su, sv ;					// 補助テクスチャ座標
} VERTEX3D, *LPVERTEX3D ;

// ３Ｄ描画に使用する頂点データ型( DrawPrimitive3DToShader用 )
// 注意…メンバ変数に追加があるかもしれませんので、宣言時の初期化( VERTEX3DSHADER Vertex = { 0.0f, 0.0f, ... というようなもの )はしない方が良いです
typedef struct tagVERTEX3DSHADER
{
	VECTOR					pos ;						// 座標
	FLOAT4					spos ;						// 補助座標
	VECTOR					norm ;						// 法線
	VECTOR					tan ;						// 接線
	VECTOR					binorm ;					// 従法線
	COLOR_U8				dif ;						// ディフューズカラー
	COLOR_U8				spc ;						// スペキュラカラー
	float					u, v ;						// テクスチャ座標
	float					su, sv ;					// 補助テクスチャ座標
} VERTEX3DSHADER, *LPVERTEX3DSHADER ;

// ライトパラメータ
typedef struct tagLIGHTPARAM
{
	int						LightType ;					// ライトのタイプ( DX_LIGHTTYPE_D3DLIGHT_POINT 等 )
	COLOR_F					Diffuse ;					// ディフューズカラー
	COLOR_F					Specular ;					// スペキュラカラー
	COLOR_F					Ambient ;					// アンビエント色
	VECTOR					Position ;					// 位置
	VECTOR					Direction ;					// 方向
	float					Range ;						// 有効距離
	float					Falloff ;					// フォールオフ 1.0f にしておくのが好ましい
	float					Attenuation0 ;				// 距離による減衰係数０
	float					Attenuation1 ;				// 距離による減衰係数１
	float					Attenuation2 ;				// 距離による減衰係数２
	float					Theta ;						// スポットライトの内部コーンの照明角度( ラジアン )
	float					Phi ;						// スポットライトの外部コーンの照明角度
} LIGHTPARAM ;

// マテリアルパラメータ
typedef struct tagMATERIALPARAM
{
	COLOR_F					Diffuse ;					// ディフューズカラー
	COLOR_F					Ambient ;					// アンビエントカラー
	COLOR_F					Specular ;					// スペキュラカラー
	COLOR_F					Emissive ;					// エミッシブカラー
	float					Power ;						// スペキュラハイライトの鮮明度
} MATERIALPARAM ;

#endif // DX_NOTUSE_DRAWFUNCTION

// ラインヒットチェック結果格納用構造体
typedef struct tagHITRESULT_LINE
{
	int						HitFlag ;					// 当たったかどうか( 1:当たった  0:当たらなかった )
	VECTOR					Position ;					// 当たった座標
} HITRESULT_LINE ;

// ラインヒットチェック結果格納用構造体
typedef struct tagHITRESULT_LINE_D
{
	int						HitFlag ;					// 当たったかどうか( 1:当たった  0:当たらなかった )
	VECTOR_D				Position ;					// 当たった座標
} HITRESULT_LINE_D ;

// 関数 Segment_Segment_Analyse の結果を受け取る為の構造体
typedef struct tagSEGMENT_SEGMENT_RESULT
{
	float					SegA_SegB_MinDist_Square ;	// 線分Ａと線分Ｂが最も接近する座標間の距離の二乗

	float					SegA_MinDist_Pos1_Pos2_t ;	// 線分Ａと線分Ｂに最も接近する座標の線分Ａの t ( 0.0f ～ 1.0f 、最近点座標 = ( SegAPos2 - SegAPos1 ) * t + SegAPos1 )
	float					SegB_MinDist_Pos1_Pos2_t ;	// 線分Ｂが線分Ａに最も接近する座標の線分Ｂの t ( 0.0f ～ 1.0f 、最近点座標 = ( SegBPos2 - SegBPos1 ) * t + SegBPos1 )

	VECTOR					SegA_MinDist_Pos ;			// 線分Ａが線分Ｂに最も接近する線分Ａ上の座標
	VECTOR					SegB_MinDist_Pos ;			// 線分Ｂが線分Ａに最も接近する線分Ｂ上の座標
} SEGMENT_SEGMENT_RESULT ;

// 関数 Segment_Segment_Analyse の結果を受け取る為の構造体
typedef struct tagSEGMENT_SEGMENT_RESULT_D
{
	double					SegA_SegB_MinDist_Square ;	// 線分Ａと線分Ｂが最も接近する座標間の距離の二乗

	double					SegA_MinDist_Pos1_Pos2_t ;	// 線分Ａと線分Ｂに最も接近する座標の線分Ａの t ( 0.0 ～ 1.0 、最近点座標 = ( SegAPos2 - SegAPos1 ) * t + SegAPos1 )
	double					SegB_MinDist_Pos1_Pos2_t ;	// 線分Ｂが線分Ａに最も接近する座標の線分Ｂの t ( 0.0 ～ 1.0 、最近点座標 = ( SegBPos2 - SegBPos1 ) * t + SegBPos1 )

	VECTOR_D				SegA_MinDist_Pos ;			// 線分Ａが線分Ｂに最も接近する線分Ａ上の座標
	VECTOR_D				SegB_MinDist_Pos ;			// 線分Ｂが線分Ａに最も接近する線分Ｂ上の座標
} SEGMENT_SEGMENT_RESULT_D ;

// 関数 Segment_Point_Analyse の結果を受け取る為の構造体
typedef struct tagSEGMENT_POINT_RESULT
{
	float					Seg_Point_MinDist_Square ;	// 線分と点が最も接近する座標間の距離の二乗
	float					Seg_MinDist_Pos1_Pos2_t ;	// 線分が点に最も接近する座標の線分の t ( 0.0f ～ 1.0f 、最近点座標 = ( SegPos2 - SegPos1 ) * t + SegPos1 )
	VECTOR					Seg_MinDist_Pos ;			// 線分が点に最も接近する線分上の座標
} SEGMENT_POINT_RESULT ;

// 関数 Segment_Point_Analyse の結果を受け取る為の構造体
typedef struct tagSEGMENT_POINT_RESULT_D
{
	double					Seg_Point_MinDist_Square ;	// 線分と点が最も接近する座標間の距離の二乗
	double					Seg_MinDist_Pos1_Pos2_t ;	// 線分が点に最も接近する座標の線分の t ( 0.0 ～ 1.0 、最近点座標 = ( SegPos2 - SegPos1 ) * t + SegPos1 )
	VECTOR_D				Seg_MinDist_Pos ;			// 線分が点に最も接近する線分上の座標
} SEGMENT_POINT_RESULT_D ;

// 関数 Segment_Triangle_Analyse の結果を受け取る為の構造体
typedef struct tagSEGMENT_TRIANGLE_RESULT
{
	float					Seg_Tri_MinDist_Square ;	// 線分と三角形が最も接近する座標間の距離の二乗

	float					Seg_MinDist_Pos1_Pos2_t ;	// 線分が三角形に最も接近する座標の線分の t ( 0.0f ～ 1.0f 、最近点座標 = ( SegPos2 - SegPos1 ) * t + SegPos1 )
	VECTOR					Seg_MinDist_Pos ;			// 線分が三角形に最も接近する線分上の座標

	float					Tri_MinDist_Pos1_w ;		// 三角形が線分に最も接近する座標の三角形座標１の重み( 最近点座標 = TriPos1 * TriPos1_w + TriPos2 * TriPos2_w + TriPos3 * TriPos3_w )
	float					Tri_MinDist_Pos2_w ;		// 三角形が線分に最も接近する座標の三角形座標２の重み
	float					Tri_MinDist_Pos3_w ;		// 三角形が線分に最も接近する座標の三角形座標３の重み
	VECTOR					Tri_MinDist_Pos ;			// 三角形が線分に最も接近する三角形上の座標
} SEGMENT_TRIANGLE_RESULT ;

// 関数 Segment_Triangle_Analyse の結果を受け取る為の構造体
typedef struct tagSEGMENT_TRIANGLE_RESULT_D
{
	double					Seg_Tri_MinDist_Square ;	// 線分と三角形が最も接近する座標間の距離の二乗

	double					Seg_MinDist_Pos1_Pos2_t ;	// 線分が三角形に最も接近する座標の線分の t ( 0.0 ～ 1.0 、最近点座標 = ( SegPos2 - SegPos1 ) * t + SegPos1 )
	VECTOR_D				Seg_MinDist_Pos ;			// 線分が三角形に最も接近する線分上の座標

	double					Tri_MinDist_Pos1_w ;		// 三角形が線分に最も接近する座標の三角形座標１の重み( 最近点座標 = TriPos1 * TriPos1_w + TriPos2 * TriPos2_w + TriPos3 * TriPos3_w )
	double					Tri_MinDist_Pos2_w ;		// 三角形が線分に最も接近する座標の三角形座標２の重み
	double					Tri_MinDist_Pos3_w ;		// 三角形が線分に最も接近する座標の三角形座標３の重み
	VECTOR_D				Tri_MinDist_Pos ;			// 三角形が線分に最も接近する三角形上の座標
} SEGMENT_TRIANGLE_RESULT_D ;

// 関数 Triangle_Point_Analyse の結果を受け取る為の構造体
typedef struct tagTRIANGLE_POINT_RESULT
{
	float					Tri_Pnt_MinDist_Square ;	// 三角形と点が最も接近する座標間の距離の二乗

	float					Tri_MinDist_Pos1_w ;		// 三角形が点に最も接近する座標の三角形座標１の重み( 最近点座標 = TriPos1 * TriPos1_w + TriPos2 * TriPos2_w + TriPos3 * TriPos3_w )
	float					Tri_MinDist_Pos2_w ;		// 三角形が点に最も接近する座標の三角形座標２の重み
	float					Tri_MinDist_Pos3_w ;		// 三角形が点に最も接近する座標の三角形座標３の重み
	VECTOR					Tri_MinDist_Pos ;			// 三角形が点に最も接近する三角形上の座標
} TRIANGLE_POINT_RESULT ;

// 関数 Triangle_Point_Analyse の結果を受け取る為の構造体
typedef struct tagTRIANGLE_POINT_RESULT_D
{
	double					Tri_Pnt_MinDist_Square ;	// 三角形と点が最も接近する座標間の距離の二乗

	double					Tri_MinDist_Pos1_w ;		// 三角形が点に最も接近する座標の三角形座標１の重み( 最近点座標 = TriPos1 * TriPos1_w + TriPos2 * TriPos2_w + TriPos3 * TriPos3_w )
	double					Tri_MinDist_Pos2_w ;		// 三角形が点に最も接近する座標の三角形座標２の重み
	double					Tri_MinDist_Pos3_w ;		// 三角形が点に最も接近する座標の三角形座標３の重み
	VECTOR_D				Tri_MinDist_Pos ;			// 三角形が点に最も接近する三角形上の座標
} TRIANGLE_POINT_RESULT_D ;

// 関数 Plane_Point_Analyse の結果を受け取る為の構造体
typedef struct tagPLANE_POINT_RESULT
{
	int						Pnt_Plane_Normal_Side ;		// 点が平面の法線の側にあるかどうか( 1:法線の側にある  0:法線と反対側にある )
	float					Plane_Pnt_MinDist_Square ;	// 平面と点の距離
	VECTOR					Plane_MinDist_Pos ;			// 平面上の点との最近点座標
} PLANE_POINT_RESULT ;

// 関数 Plane_Point_Analyse の結果を受け取る為の構造体
typedef struct tagPLANE_POINT_RESULT_D
{
	int						Pnt_Plane_Normal_Side ;		// 点が平面の法線の側にあるかどうか( 1:法線の側にある  0:法線と反対側にある )
	double					Plane_Pnt_MinDist_Square ;	// 平面と点の距離
	VECTOR_D				Plane_MinDist_Pos ;			// 平面上の点との最近点座標
} PLANE_POINT_RESULT_D ;

#ifndef DX_NOTUSE_DRAWFUNCTION

// コリジョン結果代入用ポリゴン
typedef struct tagMV1_COLL_RESULT_POLY
{
	int						HitFlag ;							// ( MV1CollCheck_Line でのみ有効 )ヒットフラグ( 1:ヒットした  0:ヒットしなかった )
	VECTOR					HitPosition ;						// ( MV1CollCheck_Line でのみ有効 )ヒット座標

	int						FrameIndex ;						// 当たったポリゴンが含まれるフレームの番号
	int						PolygonIndex ;						// 当たったポリゴンの番号
	int						MaterialIndex ;						// 当たったポリゴンが使用しているマテリアルの番号
	VECTOR					Position[ 3 ] ;						// 当たったポリゴンを形成する三点の座標
	VECTOR					Normal ;							// 当たったポリゴンの法線
} MV1_COLL_RESULT_POLY ;

// コリジョン結果代入用ポリゴン配列
typedef struct tagMV1_COLL_RESULT_POLY_DIM
{
	int						HitNum ;							// ヒットしたポリゴンの数
	MV1_COLL_RESULT_POLY *	Dim ;								// ヒットしたポリゴンの配列( HitNum個分存在する )
} MV1_COLL_RESULT_POLY_DIM ;

// 参照用頂点構造体
typedef struct tagMV1_REF_VERTEX
{
	VECTOR					Position ;							// 位置
	VECTOR					Normal ;							// 法線
	FLOAT2					TexCoord[ 2 ] ;						// テクスチャ座標
	COLOR_U8				DiffuseColor ;						// ディフューズカラー
	COLOR_U8				SpecularColor ;						// スペキュラカラー
} MV1_REF_VERTEX ;

// 参照用ポリゴン構造体
typedef struct tagMV1_REF_POLYGON
{
	unsigned short			FrameIndex ;						// このポリゴンが属しているフレーム
	unsigned short			MaterialIndex ;						// 使用しているマテリアル
	int						VIndexTarget ;						// VIndex が指すインデックスの参照先( 1:フレーム  0:モデル全体 )
	int						VIndex[ 3 ] ;						// ３角形ポリゴンを成す参照頂点のインデックス
	VECTOR					MinPosition ;						// ポリゴンを成す頂点座標の最小値
	VECTOR					MaxPosition ;						// ポリゴンを成す頂点座標の最大値
} MV1_REF_POLYGON ;

// 参照用ポリゴンデータ構造体
typedef struct tagMV1_REF_POLYGONLIST
{
	int						PolygonNum ;						// 参照用ポリゴンの数
	int						VertexNum ;							// 頂点の数
	VECTOR					MinPosition ;						// 頂点座標の最小値
	VECTOR					MaxPosition ;						// 頂点座標の最大値
	MV1_REF_POLYGON	*		Polygons ;							// 参照用ポリゴン配列
	MV1_REF_VERTEX *		Vertexs ;							// 参照用頂点配列
} MV1_REF_POLYGONLIST ;

#endif // DX_NOTUSE_DRAWFUNCTION




// ３Ｄサウンドリバーブエフェクトパラメータ構造体
// ( 注釈は MSDN の XAUDIO2FX_REVERB_PARAMETERS 構造体の解説をほぼ引用しています )
typedef struct tagSOUND3D_REVERB_PARAM
{
	float					WetDryMix ;							// リバーブとなる出力の割合( 指定可能範囲 0.0f ～ 100.0f )

	unsigned int			ReflectionsDelay ;					// ダイレクト パスに対する初期反射の遅延時間、単位はミリ秒( 指定可能範囲 0 ～ 300 )
	BYTE					ReverbDelay ;						// 初期反射に対するリバーブの遅延時間、単位はミリ秒( 指定可能範囲 0 ～ 85 )
	BYTE					RearDelay ;							// 左後方出力および右後方出力の遅延時間、単位はミリ秒( 指定可能範囲 0 ～ 5 )

	BYTE					PositionLeft ;						// シミュレーション空間における視聴者に対する左入力の位置( 指定可能範囲 0 ～ 30 )
																// PositionLeft を最小値に設定した場合、左入力は視聴者の近くに配置されます。
																// この位置では、サウンド フィールドにおいて初期反射が優勢になり、残響減衰は弱まって、振幅が小さくなります。
																// PositionLeft を最大値に設定した場合、左入力はシミュレーション室内で視聴者から最大限遠い位置に配置されます。
																// PositionLeft は残響減衰時間 (部屋の残響効果) に影響せず、視聴者に対する音源の見かけの位置のみに影響します。
	BYTE					PositionRight ;						// PositionLeft と同効果の右入力値( 指定可能範囲 0 ～ 30 )、右入力にのみ影響を与える
	BYTE					PositionMatrixLeft ;				// 音源から視聴者までの距離によるインプレッションを増減させる値( 指定可能範囲 0 ～ 30 )
	BYTE					PositionMatrixRight ;				// 音源から視聴者までの距離によるインプレッションを増減させま値( 指定可能範囲 0 ～ 30 )
	BYTE					EarlyDiffusion ;					// 個々の壁の反射特性値( 指定可能範囲 0 ～ 15 )、( 堅く平らな表面をシミュレートするには小さな値を設定し、散乱性の表面をシミュレートするには大きな値を設定します。)
	BYTE					LateDiffusion ;						// 個々の壁のリバーブ特性値( 指定可能範囲 0 ～ 15 )、( 堅く平らな表面をシミュレートするには小さな値を設定し、散乱性の表面をシミュレートするには大きな値を設定します。)
	BYTE					LowEQGain ;							// 1 kHz における減衰時間を基準にして低周波数の減衰時間調整値( 指定可能範囲 0 ～ 12 )
																// 値とゲイン (dB) の関係
																// 値          0  1  2  3  4  5  6  7  8  9 10 11 12
																// ゲイン(dB) -8 -7 -6 -5 -4 -3 -2 -1  0 +1 +2 +3 +4
																// LowEQGain の値が 8 の場合、低周波数の減衰時間と 1 kHz における減衰時間が等しくなることに注意してください
	BYTE					LowEQCutoff ;						// LowEQGain パラメーターにより制御されるローパス フィルターの折点周波数の設定値( 指定可能範囲 0 ～ 9 )
																// 値と周波数 (Hz) の関係
																// 値          0   1   2   3   4   5   6   7   8   9
																// 周波数(Hz) 50 100 150 200 250 300 350 400 450 500
	BYTE					HighEQGain ;						// 1 kHz における減衰時間を基準にして高周波数の減衰時間調整値( 指定可能範囲 0 ～ 8 )
																// 値とゲイン (dB) の関係
																// 値          0  1  2  3  4  5  6  7 8
																// ゲイン(dB) -8 -7 -6 -5 -4 -3 -2 -1 0
																// 0 に設定すると、高周波数の音が 1 kHz の場合と同じ割合で減衰します。最大値に設定すると、高周波数の音が 1 kHz の場合よりもはるかに高い割合で減衰します。
	BYTE					HighEQCutoff ;						// HighEQGain パラメーターにより制御されるハイパス フィルターの折点周波数設定値( 指定可能範囲 0 ～ 14 )
																// 値と周波数 (kHz) の関係
																// 値          0    1    2     3    4     5    6     7    8     9   10    11   12    13   14
																// 周波数(kHz) 1  1.5    2   2.5    3   3.5    4   4.5    5   5.5    6   6.5    7   7.5    8

	float					RoomFilterFreq ;					// 室内エフェクトのローパス フィルターの折点周波数、単位は Hz ( 指定可能範囲 20.0f ～ 20000.0f )
	float					RoomFilterMain ;					// 初期反射と後期フィールド残響の両方に適用されるローパス フィルターのパス バンド強度レベル、単位は dB ( 指定可能範囲 -100.0f ～ 0.0f )
	float					RoomFilterHF ;						// 折点周波数 (RoomFilterFreq) での初期反射と後期フィールド残響の両方に適用されるローパス フィルターのパス バンド強度レベル、単位は dB ( 指定可能範囲 -100.0f ～ 0.0f )
	float					ReflectionsGain ;					// 初期反射の強度/レベルを調整値、単位は dB ( 指定可能範囲 -100.0f ～ 20.0f )
	float					ReverbGain ;						// リバーブの強度/レベルを調整値、単位は dB ( 指定可能範囲 -100.0f ～ 20.0f )
	float					DecayTime ;							// 1 kHz における残響減衰時間、単位は秒 ( 指定可能範囲 0.1f ～ 上限値特になし )、これは、フル スケールの入力信号が 60 dB 減衰するまでの時間です。
	float					Density ;							// 後期フィールド残響のモード密度を制御値、単位はパーセント( 指定可能範囲 0.0f ～ 100.0f )
																// 無色 (colorless) の空間では、Density を最大値 (100.0f ) に設定する必要があります。
																// Density を小さくすると、サウンドはくぐもった音 (くし形フィルターが適用された音) になります。
																// これはサイロをシミュレーションするときに有効なエフェクトです。
	float					RoomSize ;							// 音響空間の見かけ上のサイズ、単位はフィート( 指定可能範囲 1.0f (30.48 cm) ～ 100.0f (30.48 m) )
} SOUND3D_REVERB_PARAM ;





// ストリームデータ制御用関数ポインタ構造体タイプ２
typedef struct tagSTREAMDATASHREDTYPE2
{
	DWORD_PTR				(*Open		)( const TCHAR *Path, int UseCacheFlag, int BlockReadFlag, int UseASyncReadFlag ) ;
	int						(*Close		)( DWORD_PTR Handle ) ;
	LONGLONG				(*Tell		)( DWORD_PTR Handle ) ;
	int						(*Seek		)( DWORD_PTR Handle, LONGLONG SeekPoint, int SeekType ) ;
	size_t					(*Read		)( void *Buffer, size_t BlockSize, size_t DataNum, DWORD_PTR Handle ) ;
	int						(*Eof		)( DWORD_PTR Handle ) ;
	int						(*IdleCheck	)( DWORD_PTR Handle ) ;
	int						(*ChDir		)( const TCHAR *Path ) ;
	int						(*GetDir	)( TCHAR *Buffer ) ;
	int						(*GetDirS	)( TCHAR *Buffer, size_t BufferSize ) ;
	DWORD_PTR				(*FindFirst	)( const TCHAR *FilePath, FILEINFO *Buffer ) ;		// 戻り値: -1=エラー  -1以外=FindHandle
	int						(*FindNext	)( DWORD_PTR FindHandle, FILEINFO *Buffer ) ;			// 戻り値: -1=エラー  0=成功
	int						(*FindClose	)( DWORD_PTR FindHandle ) ;							// 戻り値: -1=エラー  0=成功
} STREAMDATASHREDTYPE2 ;

// ストリームデータ制御用関数ポインタ構造体タイプ２の wchar_t 使用版
typedef struct tagSTREAMDATASHREDTYPE2W
{
	DWORD_PTR				(*Open		)( const wchar_t *Path, int UseCacheFlag, int BlockReadFlag, int UseASyncReadFlag ) ;
	int						(*Close		)( DWORD_PTR Handle ) ;
	LONGLONG				(*Tell		)( DWORD_PTR Handle ) ;
	int						(*Seek		)( DWORD_PTR Handle, LONGLONG SeekPoint, int SeekType ) ;
	size_t					(*Read		)( void *Buffer, size_t BlockSize, size_t DataNum, DWORD_PTR Handle ) ;
	int						(*Eof		)( DWORD_PTR Handle ) ;
	int						(*IdleCheck	)( DWORD_PTR Handle ) ;
	int						(*ChDir		)( const wchar_t *Path ) ;
	int						(*GetDir	)( wchar_t *Buffer ) ;
	int						(*GetDirS	)( wchar_t *Buffer, size_t BufferSize ) ;
	DWORD_PTR				(*FindFirst	)( const wchar_t *FilePath, FILEINFOW *Buffer ) ;		// 戻り値: -1=エラー  -1以外=FindHandle
	int						(*FindNext	)( DWORD_PTR FindHandle, FILEINFOW *Buffer ) ;			// 戻り値: -1=エラー  0=成功
	int						(*FindClose	)( DWORD_PTR FindHandle ) ;								// 戻り値: -1=エラー  0=成功
} STREAMDATASHREDTYPE2W ;

// ストリームデータ制御用関数ポインタ構造体
typedef struct tagSTREAMDATASHRED
{
	LONGLONG				(*Tell		)( void *StreamDataPoint ) ;
	int						(*Seek		)( void *StreamDataPoint, LONGLONG SeekPoint, int SeekType ) ;
	size_t					(*Read		)( void *Buffer, size_t BlockSize, size_t DataNum, void *StreamDataPoint ) ;
//	size_t					(*Write		)( void *Buffer, size_t BlockSize, size_t DataNum, void *StreamDataPoint ) ;
	int						(*Eof		)( void *StreamDataPoint ) ;
	int						(*IdleCheck	)( void *StreamDataPoint ) ;
	int						(*Close		)( void *StreamDataPoint ) ;
} STREAMDATASHRED, *LPSTREAMDATASHRED ;

// ストリームデータ制御用データ構造体
typedef struct tagSTREAMDATA
{
	STREAMDATASHRED			ReadShred ;
	void					*DataPoint ;
} STREAMDATA ;





// パレット情報構造体
typedef struct tagCOLORPALETTEDATA
{
	unsigned char			Blue ;
	unsigned char			Green ;
	unsigned char			Red ;
	unsigned char			Alpha ;
} COLORPALETTEDATA ;

// カラー構造情報構造体
typedef struct tagCOLORDATA
{
	unsigned char			Format ;										// フォーマット( DX_BASEIMAGE_FORMAT_NORMAL 等 )

	unsigned char			ChannelNum ;									// チャンネル数
	unsigned char			ChannelBitDepth ;								// １チャンネル辺りのビット深度
	unsigned char			FloatTypeFlag ;									// 浮動小数点型かどうか( TRUE:浮動小数点型  FALSE:整数型 )
	unsigned char			PixelByte ;										// １ピクセルあたりのバイト数

	// 以下は ChannelNum 又は ChannelBitDepth が 0 の時のみ有効
	unsigned char			ColorBitDepth ;									// ビット深度
	unsigned char			NoneLoc, NoneWidth ;							// 使われていないビットのアドレスと幅
	unsigned char			RedWidth, GreenWidth, BlueWidth, AlphaWidth ;	// 各色のビット幅
	unsigned char			RedLoc	, GreenLoc  , BlueLoc  , AlphaLoc   ;	// 各色の配置されているビットアドレス
	unsigned int			RedMask , GreenMask , BlueMask , AlphaMask  ;	// 各色のビットマスク
	unsigned int			NoneMask ;										// 使われていないビットのマスク
	int						MaxPaletteNo ;									// 使用しているパレット番号の最大値( 0 の場合は 255 とみなす )

	// memo : ここより上にメンバー変数を追加したら DxBaseImage.cpp の NS_GraphColorMatchBltVer2 のアセンブラでのパレットデータ参照のリテラル値を修正する必要あり
	COLORPALETTEDATA		Palette[ 256 ] ;								// パレット( ColorBitDepth が８以下の場合のみ有効 )
} COLORDATA, *LPCOLORDATA ;

// 基本イメージデータ構造体
typedef struct tagBASEIMAGE
{
	COLORDATA				ColorData ;							// 色情報
	int						Width, Height, Pitch ;				// 幅、高さ、ピッチ
	void					*GraphData ;						// グラフィックイメージ
	int						MipMapCount ;						// ミップマップの数
	int						GraphDataCount ;					// グラフィックイメージの数
} BASEIMAGE, GRAPHIMAGE, *LPGRAPHIMAGE ;

// ラインデータ型
typedef struct tagLINEDATA
{
	int						x1, y1, x2, y2 ;					// 座標
	unsigned int			color ;								// 色
	int						pal ;								// パラメータ
} LINEDATA, *LPLINEDATA ;

// 座標データ型
typedef struct tagPOINTDATA
{
	int						x, y ;								// 座標
	unsigned int			color ;								// 色
	int						pal ;								// パラメータ
} POINTDATA, *LPPOINTDATA ;

#ifndef DX_NOTUSE_DRAWFUNCTION

// イメージフォーマットデータ
typedef struct tagIMAGEFORMATDESC
{
	unsigned char			TextureFlag ;					// テクスチャか、フラグ( TRUE:テクスチャ  FALSE:標準サーフェス )
	unsigned char			CubeMapTextureFlag ;			// キューブマップテクスチャか、フラグ( TRUE:キューブマップテクスチャ　FALSE:それ以外 )
	unsigned char			AlphaChFlag ;					// αチャンネルはあるか、フラグ	( TRUE:ある  FALSE:ない )
	unsigned char			DrawValidFlag ;					// 描画可能か、フラグ( TRUE:可能  FALSE:不可能 )
	unsigned char			SystemMemFlag ;					// システムメモリ上に存在しているか、フラグ( TRUE:システムメモリ上  FALSE:ＶＲＡＭ上 )( 標準サーフェスの時のみ有効 )
	unsigned char			UseManagedTextureFlag ;			// マネージドテクスチャを使用するか、フラグ
	unsigned char			UseLinearMapTextureFlag ;		// テクスチャのメモリデータ配置にリニアが選択できる場合はデータ配置方式をリニアにするかどうか( TRUE:リニアが可能な場合はリニアにする  FALSE:リニアが可能な場合も特にリニアを指定しない )
	unsigned char			PlatformTextureFormat ;			// 環境依存のテクスチャフォーマットを直接指定するために使用するための変数( DX_TEXTUREFORMAT_DIRECT3D9_R8G8B8 など )

	unsigned char			BaseFormat ;					// 基本フォーマット( DX_BASEIMAGE_FORMAT_NORMAL 等 )
	unsigned char			MipMapCount ;					// ミップマップの数
	unsigned char			AlphaTestFlag ;					// αテストチャンネルはあるか、フラグ( TRUE:ある  FALSE:ない )( テクスチャの場合のみ有効 )
	unsigned char			FloatTypeFlag ;					// 浮動小数点型かどうか
	unsigned char			ColorBitDepth ;					// 色深度( テクスチャの場合のみ有効 )
	unsigned char			ChannelNum ;					// チャンネルの数
	unsigned char			ChannelBitDepth ;				// １チャンネル辺りのビット深度( テクスチャの場合のみ有効、0 の場合は ColorBitDepth が使用される )
	unsigned char			BlendGraphFlag ;				// ブレンド用画像か、フラグ
	unsigned char			UsePaletteFlag ;				// パレットを使用しているか、フラグ( SystemMemFlag が TRUE の場合のみ有効 )

	unsigned char			MSSamples ;						// マルチサンプリング数( 描画対象の場合使用 )
	unsigned char			MSQuality ;						// マルチサンプリングクオリティ( 描画対象の場合使用 )
} IMAGEFORMATDESC ;

#endif // DX_NOTUSE_DRAWFUNCTION

// DirectInput のジョイパッド入力情報
typedef struct tagDINPUT_JOYSTATE
{
	int						X ;								// スティックのＸ軸パラメータ( -1000～1000 )
	int						Y ;								// スティックのＹ軸パラメータ( -1000～1000 )
	int						Z ;								// スティックのＺ軸パラメータ( -1000～1000 )
	int						Rx ;							// スティックのＸ軸回転パラメータ( -1000～1000 )
	int						Ry ;							// スティックのＹ軸回転パラメータ( -1000～1000 )
	int						Rz ;							// スティックのＺ軸回転パラメータ( -1000～1000 )
	int						Slider[ 2 ] ;					// スライダー二つ
	unsigned int			POV[ 4 ] ;						// ハットスイッチ４つ( 0xffffffff:入力なし 0:上 4500:右上 9000:右 13500:右下 18000:下 22500:左下 27000:左 31500:左上 )
	unsigned char			Buttons[ 32 ] ;					// ボタン３２個( 押されたボタンは 128 になる )
} DINPUT_JOYSTATE ;

// XInput のジョイパッド入力情報
typedef struct tagXINPUT_STATE
{
	unsigned char			Buttons[ 16 ] ;					// ボタン１６個( 添字には XINPUT_BUTTON_DPAD_UP 等を使用する、0:押されていない  1:押されている )
	unsigned char			LeftTrigger ;					// 左トリガー( 0～255 )
	unsigned char			RightTrigger ;					// 右トリガー( 0～255 )
	short					ThumbLX ;						// 左スティックの横軸値( -32768 ～ 32767 )
	short					ThumbLY ;						// 左スティックの縦軸値( -32768 ～ 32767 )
	short					ThumbRX ;						// 右スティックの横軸値( -32768 ～ 32767 )
	short					ThumbRY ;						// 右スティックの縦軸値( -32768 ～ 32767 )
} XINPUT_STATE ;

// タッチパネルの１箇所分のタッチの情報
typedef struct tagTOUCHINPUTPOINT
{
	DWORD					Device ;						// タッチされたデバイス
	DWORD					ID ;							// タッチを判別するためのＩＤ
	int						PositionX ;						// タッチされた座標X
	int						PositionY ;						// タッチされた座標Y
} TOUCHINPUTPOINT ;

// タッチパネルのタッチの情報
typedef struct tagTOUCHINPUTDATA
{
	LONGLONG				Time ;							// 情報の時間

	int						PointNum ;						// 有効なタッチ情報の数
	TOUCHINPUTPOINT			Point[ TOUCHINPUTPOINT_MAX ] ;	// タッチ情報
} TOUCHINPUTDATA ;






// WinSockets使用時のアドレス指定用構造体
typedef struct tagIPDATA
{
	unsigned char			d1, d2, d3, d4 ;				// アドレス値
} IPDATA, *LPIPDATA ;

typedef struct tagIPDATA_IPv6
{
	union
	{
		unsigned char			Byte[ 16 ] ;
		unsigned short			Word[ 8 ] ;
	} ;
} IPDATA_IPv6 ;

#define DX_STRUCT_END


#ifndef DX_NON_NAMESPACE

}

#endif // DX_NON_NAMESPACE
///// DxLibHeader/DxLib.h: [データ型定義] End
///// DxLibHeader/DxLib.h: [ネームスペース DxLib を使用する] Start

#ifndef DX_NON_NAMESPACE
#ifndef DX_NON_USING_NAMESPACE_DXLIB

using namespace DxLib ;

#endif // DX_NON_USING_NAMESPACE_DXLIB
#endif // DX_NON_NAMESPACE
///// DxLibHeader/DxLib.h: [ネームスペース DxLib を使用する] End
///// DxLibHeader/DxLib.h End

extern "C"
{
 int  __stdcall dx_SetKeyInputStringColor( ULONGLONG  NmlStr, ULONGLONG  NmlCur, ULONGLONG  IMEStr, ULONGLONG  IMECur, ULONGLONG  IMELine, ULONGLONG  IMESelectStr, ULONGLONG  IMEModeStr, ULONGLONG  NmlStrE = 0, ULONGLONG  IMESelectStrE = 0, ULONGLONG  IMEModeStrE = 0, ULONGLONG  IMESelectWinE = 0xffffffffffffffff, ULONGLONG  IMESelectWinF = 0xffffffffffffffff, ULONGLONG  SelectStrBackColor = 0xffffffffffffffff, ULONGLONG  SelectStrColor = 0xffffffffffffffff, ULONGLONG  SelectStrEdgeColor = 0xffffffffffffffff);
int  __stdcall dx_Paint( int  x, int  y, unsigned int  FillColor, ULONGLONG  BoundaryColor = 0xffffffffffffffffUL);
int  __stdcall dx_GraphFilterS( int GrHandle, int FilterType, int Param0, int Param1, int Param2, int Param3, int Param4, int Param5 ) ;
int  __stdcall dx_GraphFilterBltS( int SrcGrHandle, int DestGrHandle, int FilterType, int Param0, int Param1, int Param2, int Param3, int Param4, int Param5 ) ;
int  __stdcall dx_GraphFilterRectBltS( int SrcGrHandle, int DestGrHandle, int SrcX1, int SrcY1, int SrcX2, int SrcY2, int DestX, int DestY, int FilterType, int Param0, int Param1, int Param2, int Param3, int Param4, int Param5 ) ;
int  __stdcall dx_GraphBlendS( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType, int Param0, int Param1, int Param2, int Param3, int Param4, int Param5 ) ;
int  __stdcall dx_GraphBlendBltS( int SrcGrHandle, int BlendGrHandle, int DestGrHandle, int BlendRatio, int BlendType, int Param0, int Param1, int Param2, int Param3, int Param4, int Param5 ) ;
int  __stdcall dx_GraphBlendRectBltS( int SrcGrHandle, int BlendGrHandle, int DestGrHandle, int SrcX1, int SrcY1, int SrcX2, int SrcY2, int BlendX, int BlendY, int DestX, int DestY, int BlendRatio, int BlendType, int Param0, int Param1, int Param2, int Param3, int Param4, int Param5 ) ;
int  __stdcall dx_SetBlendGraphParamS( int BlendGraph, int BlendType, int Param0, int Param1, int Param2, int Param3, int Param4, int Param5 ) ;
VECTOR   __stdcall dx_VGet(  float x, float y, float z ) ;
VECTOR_D __stdcall dx_VGetD( double x, double y, double z ) ;
VECTOR   __stdcall dx_VAdd(  VECTOR   In1, VECTOR   In2 ) ;
VECTOR_D __stdcall dx_VAddD( VECTOR_D In1, VECTOR_D In2 ) ;
VECTOR   __stdcall dx_VSub(  VECTOR   In1, VECTOR   In2 ) ;
VECTOR_D __stdcall dx_VSubD( VECTOR_D In1, VECTOR_D In2 ) ;
float  __stdcall dx_VDot(  VECTOR   In1, VECTOR   In2 ) ;
double __stdcall dx_VDotD( VECTOR_D In1, VECTOR_D In2 ) ;
VECTOR   __stdcall dx_VCross(  VECTOR   In1, VECTOR   In2 ) ;
VECTOR_D __stdcall dx_VCrossD( VECTOR_D In1, VECTOR_D In2 ) ;
VECTOR   __stdcall dx_VScale(  VECTOR   In, float Scale ) ;
VECTOR_D __stdcall dx_VScaleD( VECTOR_D In, double Scale ) ;
float  __stdcall dx_VSquareSize(  VECTOR   In ) ;
double __stdcall dx_VSquareSizeD( VECTOR_D In ) ;
VECTOR   __stdcall dx_VTransform(  VECTOR   InV, MATRIX   InM ) ;
VECTOR_D __stdcall dx_VTransformD( VECTOR_D InV, MATRIX_D InM ) ;
VECTOR   __stdcall dx_VTransformSR(  VECTOR   InV, MATRIX   InM ) ;
VECTOR_D __stdcall dx_VTransformSRD( VECTOR_D InV, MATRIX_D InM ) ;
int  __stdcall dx_DxLib_Init( void);
int  __stdcall dx_DxLib_End( void);
int  __stdcall dx_DxLib_GlobalStructInitialize( void);
int  __stdcall dx_DxLib_IsInit( void);
int  __stdcall dx_ProcessMessage( void);
int  __stdcall dx_WaitTimer( int  WaitTime);
int  __stdcall dx_WaitKey( void);
int  __stdcall dx_GetNowCount( int  UseRDTSCFlag = FALSE);
LONGLONG  __stdcall dx_GetNowHiPerformanceCount( int  UseRDTSCFlag = FALSE);
int  __stdcall dx_GetDateTime( DATEDATA *  DateBuf);
int  __stdcall dx_GetRand( int  RandMax);
int  __stdcall dx_SRand( int  Seed);
int  __stdcall dx_ErrorLogAdd( const char * ErrorStr);
int  __stdcall dx_ErrorLogTabAdd( void);
int  __stdcall dx_ErrorLogTabSub( void);
int  __stdcall dx_SetUseTimeStampFlag( int  UseFlag);
int  __stdcall dx_SetOutApplicationLogValidFlag( int  Flag);
int  __stdcall dx_SetApplicationLogSaveDirectory( const char * DirectoryPath);
int  __stdcall dx_SetUseDateNameLogFile( int  Flag);
int  __stdcall dx_SetLogDrawOutFlag( int  DrawFlag);
int  __stdcall dx_GetLogDrawFlag( void);
int  __stdcall dx_SetLogFontSize( int  Size);
int  __stdcall dx_SetLogDrawArea( int  x1, int  y1, int  x2, int  y2);
int  __stdcall dx_clsDx( void);
int  __stdcall dx_SetUseASyncLoadFlag( int  Flag);
int  __stdcall dx_CheckHandleASyncLoad( int  Handle);
int  __stdcall dx_GetHandleASyncLoadResult( int  Handle);
int  __stdcall dx_SetASyncLoadFinishDeleteFlag( int  Handle);
int  __stdcall dx_GetASyncLoadNum( void);
int  __stdcall dx_SetASyncLoadThreadNum( int  ThreadNum);
int  __stdcall dx_SetDeleteHandleFlag( int  Handle, int *  DeleteFlag);
int  __stdcall dx_SetMouseDispFlag( int  DispFlag);
int  __stdcall dx_GetMousePoint( int *  XBuf, int *  YBuf);
int  __stdcall dx_SetMousePoint( int  PointX, int  PointY);
int  __stdcall dx_GetMouseInput( void);
int  __stdcall dx_GetMouseWheelRotVol( int  CounterReset = TRUE);
int  __stdcall dx_GetMouseHWheelRotVol( int  CounterReset = TRUE);
float  __stdcall dx_GetMouseWheelRotVolF( int  CounterReset = TRUE);
float  __stdcall dx_GetMouseHWheelRotVolF( int  CounterReset = TRUE);
int  __stdcall dx_GetMouseInputLog( int *  Button, int *  ClickX, int *  ClickY, int  LogDelete = TRUE);
int  __stdcall dx_GetTouchInputNum( void);
int  __stdcall dx_GetTouchInput( int  InputNo, int *  PositionX, int *  PositionY, int *  ID, int *  Device);
int  __stdcall dx_GetTouchInputLogNum( void);
TOUCHINPUTDATA __stdcall dx_GetTouchInputLogOne( int PeekFlag = FALSE ) ;
int  __stdcall dx_GetTouchInputLog( TOUCHINPUTDATA *  TouchData, int  GetNum, int  PeekFlag = FALSE);
void *  __stdcall dx_DxAlloc( size_t  AllocSize, const char * File = NULL, int  Line = -1);
void *  __stdcall dx_DxCalloc( size_t  AllocSize, const char * File = NULL, int  Line = -1);
void *  __stdcall dx_DxRealloc( void *  Memory, size_t  AllocSize, const char * File = NULL, int  Line = -1);
void  __stdcall dx_DxFree( void *  Memory);
size_t  __stdcall dx_DxSetAllocSizeTrap( size_t  Size);
int  __stdcall dx_DxSetAllocPrintFlag( int  Flag);
size_t  __stdcall dx_DxGetAllocSize( void);
int  __stdcall dx_DxGetAllocNum( void);
void  __stdcall dx_DxDumpAlloc( void);
void  __stdcall dx_DxDrawAlloc( int  x, int  y, int  Width, int  Height);
int  __stdcall dx_DxErrorCheckAlloc( void);
int  __stdcall dx_DxSetAllocSizeOutFlag( int  Flag);
int  __stdcall dx_DxSetAllocMemoryErrorCheckFlag( int  Flag);
int  __stdcall dx_ConvertStringCharCodeFormat( int  SrcCharCodeFormat, const void * SrcString, int  DestCharCodeFormat, void *  DestStringBuffer);
int  __stdcall dx_SetUseCharCodeFormat( int  CharCodeFormat);
void  __stdcall dx_strcpyDx( TCHAR *  Dest, const char * Src);
void  __stdcall dx_strcpy_sDx( TCHAR *  Dest, size_t  DestBytes, const char * Src);
void  __stdcall dx_strpcpyDx( TCHAR *  Dest, const char * Src, int  Pos);
void  __stdcall dx_strpcpy_sDx( TCHAR *  Dest, size_t  DestBytes, const char * Src, int  Pos);
void  __stdcall dx_strpcpy2Dx( TCHAR *  Dest, const char * Src, int  Pos);
void  __stdcall dx_strpcpy2_sDx( TCHAR *  Dest, size_t  DestBytes, const char * Src, int  Pos);
void  __stdcall dx_strncpyDx( TCHAR *  Dest, const char * Src, int  Num);
void  __stdcall dx_strncpy_sDx( TCHAR *  Dest, size_t  DestBytes, const char * Src, int  Num);
void  __stdcall dx_strncpy2Dx( TCHAR *  Dest, const char * Src, int  Num);
void  __stdcall dx_strncpy2_sDx( TCHAR *  Dest, size_t  DestBytes, const char * Src, int  Num);
void  __stdcall dx_strrncpyDx( TCHAR *  Dest, const char * Src, int  Num);
void  __stdcall dx_strrncpy_sDx( TCHAR *  Dest, size_t  DestBytes, const char * Src, int  Num);
void  __stdcall dx_strrncpy2Dx( TCHAR *  Dest, const char * Src, int  Num);
void  __stdcall dx_strrncpy2_sDx( TCHAR *  Dest, size_t  DestBytes, const char * Src, int  Num);
void  __stdcall dx_strpncpyDx( TCHAR *  Dest, const char * Src, int  Pos, int  Num);
void  __stdcall dx_strpncpy_sDx( TCHAR *  Dest, size_t  DestBytes, const char * Src, int  Pos, int  Num);
void  __stdcall dx_strpncpy2Dx( TCHAR *  Dest, const char * Src, int  Pos, int  Num);
void  __stdcall dx_strpncpy2_sDx( TCHAR *  Dest, size_t  DestBytes, const char * Src, int  Pos, int  Num);
void  __stdcall dx_strcatDx( TCHAR *  Dest, const char * Src);
void  __stdcall dx_strcat_sDx( TCHAR *  Dest, size_t  DestBytes, const char * Src);
size_t  __stdcall dx_strlenDx( const char * Str);
size_t  __stdcall dx_strlen2Dx( const char * Str);
int  __stdcall dx_strcmpDx( const char * Str1, const char * Str2);
int  __stdcall dx_stricmpDx( const char * Str1, const char * Str2);
int  __stdcall dx_strncmpDx( const char * Str1, const char * Str2, int  Num);
int  __stdcall dx_strncmp2Dx( const char * Str1, const char * Str2, int  Num);
int  __stdcall dx_strpncmpDx( const char * Str1, const char * Str2, int  Pos, int  Num);
int  __stdcall dx_strpncmp2Dx( const char * Str1, const char * Str2, int  Pos, int  Num);
DWORD  __stdcall dx_strgetchrDx( const char * Str, int  Pos, int *  CharNums);
DWORD  __stdcall dx_strgetchr2Dx( const char * Str, int  Pos, int *  CharNums);
int  __stdcall dx_strputchrDx( TCHAR *  Str, int  Pos, DWORD  CharCode);
int  __stdcall dx_strputchr2Dx( TCHAR *  Str, int  Pos, DWORD  CharCode);
const TCHAR * __stdcall dx_strposDx( const TCHAR * Str , int Pos ) ;
const TCHAR * __stdcall dx_strpos2Dx( const TCHAR * Str , int Pos ) ;
const TCHAR * __stdcall dx_strstrDx( const TCHAR * Str1 , const TCHAR * Str2 ) ;
int  __stdcall dx_strstr2Dx( const char * Str1, const char * Str2);
const TCHAR * __stdcall dx_strrstrDx( const TCHAR * Str1 , const TCHAR * Str2 ) ;
int  __stdcall dx_strrstr2Dx( const char * Str1, const char * Str2);
const TCHAR * __stdcall dx_strchrDx( const TCHAR * Str , DWORD CharCode ) ;
int  __stdcall dx_strchr2Dx( const char * Str, DWORD  CharCode);
const TCHAR * __stdcall dx_strrchrDx( const TCHAR * Str , DWORD CharCode ) ;
int  __stdcall dx_strrchr2Dx( const char * Str, DWORD  CharCode);
TCHAR * __stdcall dx_struprDx( TCHAR * Str ) ;
int __stdcall dx_vsprintfDx( TCHAR * Buffer , const TCHAR * FormatString , va_list Arg ) ;
int __stdcall dx_vsnprintfDx( TCHAR * Buffer , size_t BufferSize , const TCHAR * FormatString , va_list Arg ) ;
TCHAR * __stdcall dx_itoaDx( int Value , TCHAR * Buffer , int Radix ) ;
TCHAR * __stdcall dx_itoa_sDx( int Value , TCHAR * Buffer , size_t BufferBytes , int Radix ) ;
int  __stdcall dx_atoiDx( const char * Str);
double __stdcall dx_atofDx( const TCHAR * Str ) ;
int __stdcall dx_vsscanfDx( const TCHAR * String , const TCHAR * FormatString , va_list Arg ) ;
int  __stdcall dx_ProcessNetMessage( int  RunReleaseProcess = FALSE);
int  __stdcall dx_GetHostIPbyName( const char * HostName, IPDATA *  IPDataBuf);
int  __stdcall dx_GetHostIPbyName_IPv6( const char * HostName, IPDATA_IPv6 *  IPDataBuf);
int  __stdcall dx_ConnectNetWork( IPDATA  IPData, int  Port = -1);
int  __stdcall dx_ConnectNetWork_IPv6( IPDATA_IPv6  IPData, int  Port = -1);
int  __stdcall dx_ConnectNetWork_ASync( IPDATA  IPData, int  Port = -1);
int  __stdcall dx_ConnectNetWork_IPv6_ASync( IPDATA_IPv6  IPData, int  Port = -1);
int  __stdcall dx_PreparationListenNetWork( int  Port = -1);
int  __stdcall dx_PreparationListenNetWork_IPv6( int  Port = -1);
int  __stdcall dx_StopListenNetWork( void);
int  __stdcall dx_CloseNetWork( int  NetHandle);
int  __stdcall dx_GetNetWorkAcceptState( int  NetHandle);
int  __stdcall dx_GetNetWorkDataLength( int  NetHandle);
int  __stdcall dx_GetNetWorkSendDataLength( int  NetHandle);
int  __stdcall dx_GetNewAcceptNetWork( void);
int  __stdcall dx_GetLostNetWork( void);
int  __stdcall dx_GetNetWorkIP( int  NetHandle, IPDATA *  IpBuf);
int  __stdcall dx_GetNetWorkIP_IPv6( int  NetHandle, IPDATA_IPv6 *  IpBuf);
int  __stdcall dx_GetMyIPAddress( IPDATA *  IpBuf, int  IpBufLength, int *  IpNum);
int  __stdcall dx_SetConnectTimeOutWait( int  Time);
int  __stdcall dx_SetUseDXNetWorkProtocol( int  Flag);
int  __stdcall dx_GetUseDXNetWorkProtocol( void);
int  __stdcall dx_SetUseDXProtocol( int  Flag);
int  __stdcall dx_GetUseDXProtocol( void);
int  __stdcall dx_SetNetWorkCloseAfterLostFlag( int  Flag);
int  __stdcall dx_GetNetWorkCloseAfterLostFlag( void);
int  __stdcall dx_NetWorkRecv( int  NetHandle, void *  Buffer, int  Length);
int  __stdcall dx_NetWorkRecvToPeek( int  NetHandle, void *  Buffer, int  Length);
int  __stdcall dx_NetWorkRecvBufferClear( int  NetHandle);
int  __stdcall dx_NetWorkSend( int  NetHandle, const void * Buffer, int  Length);
int  __stdcall dx_MakeUDPSocket( int  RecvPort = -1);
int  __stdcall dx_MakeUDPSocket_IPv6( int  RecvPort = -1);
int  __stdcall dx_DeleteUDPSocket( int  NetUDPHandle);
int  __stdcall dx_NetWorkSendUDP( int  NetUDPHandle, IPDATA  SendIP, int  SendPort, const void * Buffer, int  Length);
int  __stdcall dx_NetWorkSendUDP_IPv6( int  NetUDPHandle, IPDATA_IPv6  SendIP, int  SendPort, const void * Buffer, int  Length);
int  __stdcall dx_NetWorkRecvUDP( int  NetUDPHandle, IPDATA *  RecvIP, int *  RecvPort, void *  Buffer, int  Length, int  Peek);
int  __stdcall dx_NetWorkRecvUDP_IPv6( int  NetUDPHandle, IPDATA_IPv6 *  RecvIP, int *  RecvPort, void *  Buffer, int  Length, int  Peek);
int  __stdcall dx_CheckNetWorkRecvUDP( int  NetUDPHandle);
int  __stdcall dx_StockInputChar( TCHAR  CharCode);
int  __stdcall dx_ClearInputCharBuf( void);
TCHAR __stdcall dx_GetInputChar( int DeleteFlag ) ;
TCHAR __stdcall dx_GetInputCharWait( int DeleteFlag ) ;
int  __stdcall dx_GetOneChar( TCHAR *  CharBuffer, int  DeleteFlag);
int  __stdcall dx_GetOneCharWait( TCHAR *  CharBuffer, int  DeleteFlag);
int  __stdcall dx_GetCtrlCodeCmp( TCHAR  Char);
int  __stdcall dx_DrawIMEInputString( int  x, int  y, int  SelectStringNum);
int  __stdcall dx_SetUseIMEFlag( int  UseFlag);
int  __stdcall dx_SetInputStringMaxLengthIMESync( int  Flag);
int  __stdcall dx_SetIMEInputStringMaxLength( int  Length);
int  __stdcall dx_GetStringPoint( const char * String, int  Point);
int  __stdcall dx_GetStringPoint2( const char * String, int  Point);
int  __stdcall dx_GetStringLength( const char * String);
int  __stdcall dx_DrawObtainsString( int  x, int  y, int  AddY, const char * String, unsigned int  StrColor, unsigned int  StrEdgeColor = 0, int  FontHandle = -1, unsigned int  SelectBackColor = 0xffffffff, unsigned int  SelectStrColor = 0, unsigned int  SelectStrEdgeColor = 0xffffffff, int  SelectStart = -1, int  SelectEnd = -1);
int  __stdcall dx_DrawObtainsString_CharClip( int  x, int  y, int  AddY, const char * String, unsigned int  StrColor, unsigned int  StrEdgeColor = 0, int  FontHandle = -1, unsigned int  SelectBackColor = 0xffffffff, unsigned int  SelectStrColor = 0, unsigned int  SelectStrEdgeColor = 0xffffffff, int  SelectStart = -1, int  SelectEnd = -1);
int  __stdcall dx_DrawObtainsBox( int  x1, int  y1, int  x2, int  y2, int  AddY, unsigned int  Color, int  FillFlag);
int  __stdcall dx_InputStringToCustom( int  x, int  y, size_t  BufLength, TCHAR *  StrBuffer, int  CancelValidFlag, int  SingleCharOnlyFlag, int  NumCharOnlyFlag, int  DoubleCharOnlyFlag = FALSE);
int  __stdcall dx_KeyInputString( int  x, int  y, size_t  CharMaxLength, TCHAR *  StrBuffer, int  CancelValidFlag);
int  __stdcall dx_KeyInputSingleCharString( int  x, int  y, size_t  CharMaxLength, TCHAR *  StrBuffer, int  CancelValidFlag);
int  __stdcall dx_KeyInputNumber( int  x, int  y, int  MaxNum, int  MinNum, int  CancelValidFlag);
int  __stdcall dx_GetIMEInputModeStr( TCHAR *  GetBuffer);
const IMEINPUTDATA * __stdcall dx_GetIMEInputData( void );
int  __stdcall dx_SetKeyInputStringColor2( int  TargetColor, unsigned int  Color);
int  __stdcall dx_ResetKeyInputStringColor2( int  TargetColor);
int  __stdcall dx_SetKeyInputStringFont( int  FontHandle);
int  __stdcall dx_SetKeyInputStringEndCharaMode( int  EndCharaMode);
int  __stdcall dx_DrawKeyInputModeString( int  x, int  y);
int  __stdcall dx_InitKeyInput( void);
int  __stdcall dx_MakeKeyInput( size_t  MaxStrLength, int  CancelValidFlag, int  SingleCharOnlyFlag, int  NumCharOnlyFlag, int  DoubleCharOnlyFlag = FALSE);
int  __stdcall dx_DeleteKeyInput( int  InputHandle);
int  __stdcall dx_SetActiveKeyInput( int  InputHandle);
int  __stdcall dx_GetActiveKeyInput( void);
int  __stdcall dx_CheckKeyInput( int  InputHandle);
int  __stdcall dx_ReStartKeyInput( int  InputHandle);
int  __stdcall dx_ProcessActKeyInput( void);
int  __stdcall dx_DrawKeyInputString( int  x, int  y, int  InputHandle);
int  __stdcall dx_SetKeyInputDrawArea( int  x1, int  y1, int  x2, int  y2, int  InputHandle);
int  __stdcall dx_SetKeyInputSelectArea( int  SelectStart, int  SelectEnd, int  InputHandle);
int  __stdcall dx_GetKeyInputSelectArea( int *  SelectStart, int *  SelectEnd, int  InputHandle);
int  __stdcall dx_SetKeyInputDrawStartPos( int  DrawStartPos, int  InputHandle);
int  __stdcall dx_GetKeyInputDrawStartPos( int  InputHandle);
int  __stdcall dx_SetKeyInputCursorBrinkTime( int  Time);
int  __stdcall dx_SetKeyInputCursorBrinkFlag( int  Flag);
int  __stdcall dx_SetKeyInputString( const char * String, int  InputHandle);
int  __stdcall dx_SetKeyInputNumber( int  Number, int  InputHandle);
int  __stdcall dx_SetKeyInputNumberToFloat( float  Number, int  InputHandle);
int  __stdcall dx_GetKeyInputString( TCHAR *  StrBuffer, int  InputHandle);
int  __stdcall dx_GetKeyInputNumber( int  InputHandle);
float  __stdcall dx_GetKeyInputNumberToFloat( int  InputHandle);
int  __stdcall dx_SetKeyInputCursorPosition( int  Position, int  InputHandle);
int  __stdcall dx_GetKeyInputCursorPosition( int  InputHandle);
int  __stdcall dx_FileRead_open( const char * FilePath, int  ASync = FALSE);
LONGLONG  __stdcall dx_FileRead_size( const char * FilePath);
int  __stdcall dx_FileRead_close( int  FileHandle);
LONGLONG  __stdcall dx_FileRead_tell( int  FileHandle);
int  __stdcall dx_FileRead_seek( int  FileHandle, LONGLONG  Offset, int  Origin);
int  __stdcall dx_FileRead_read( void *  Buffer, int  ReadSize, int  FileHandle);
int  __stdcall dx_FileRead_idle_chk( int  FileHandle);
int  __stdcall dx_FileRead_eof( int  FileHandle);
int  __stdcall dx_FileRead_gets( TCHAR *  Buffer, int  BufferSize, int  FileHandle);
TCHAR __stdcall dx_FileRead_getc( int FileHandle ) ;
DWORD_PTR  __stdcall dx_FileRead_createInfo( const char * ObjectPath);
int  __stdcall dx_FileRead_getInfoNum( DWORD_PTR  FileInfoHandle);
int __stdcall dx_FileRead_getInfo( int Index , FILEINFO * Buffer , DWORD_PTR FileInfoHandle ) ;
int  __stdcall dx_FileRead_deleteInfo( DWORD_PTR  FileInfoHandle);
DWORD_PTR __stdcall dx_FileRead_findFirst( const TCHAR * FilePath , FILEINFO * Buffer ) ;
int __stdcall dx_FileRead_findNext( DWORD_PTR FindHandle , FILEINFO * Buffer ) ;
int __stdcall dx_FileRead_findClose( DWORD_PTR FindHandle ) ;
int  __stdcall dx_FileRead_fullyLoad( const char * FilePath);
int  __stdcall dx_FileRead_fullyLoad_delete( int  FLoadHandle);
const void * __stdcall dx_FileRead_fullyLoad_getImage( int  FLoadHandle);
LONGLONG  __stdcall dx_FileRead_fullyLoad_getSize( int  FLoadHandle);
int  __stdcall dx_GetStreamFunctionDefault( void);
int __stdcall dx_ChangeStreamFunction( const STREAMDATASHREDTYPE2 * StreamThread ) ;
int __stdcall dx_ChangeStreamFunctionW( const STREAMDATASHREDTYPE2W * StreamThreadW ) ;
int  __stdcall dx_ConvertFullPath( const char * Src, TCHAR *  Dest, const char * CurrentDir = NULL);
int  __stdcall dx_CheckHitKey( int  KeyCode);
int  __stdcall dx_CheckHitKeyAll( int  CheckType = DX_CHECKINPUT_ALL);
int  __stdcall dx_GetHitKeyStateAll( DX_CHAR *  KeyStateBuf);
int  __stdcall dx_GetJoypadNum( void);
int  __stdcall dx_GetJoypadInputState( int  InputType);
int  __stdcall dx_GetJoypadAnalogInput( int *  XBuf, int *  YBuf, int  InputType);
int  __stdcall dx_GetJoypadAnalogInputRight( int *  XBuf, int *  YBuf, int  InputType);
int  __stdcall dx_GetJoypadDirectInputState( int  InputType, DINPUT_JOYSTATE *  DInputState);
int  __stdcall dx_CheckJoypadXInput( int  InputType);
int  __stdcall dx_GetJoypadXInputState( int  InputType, XINPUT_STATE *  XInputState);
int  __stdcall dx_SetJoypadInputToKeyInput( int  InputType, int  PadInput, int  KeyInput1, int  KeyInput2 = -1, int  KeyInput3 = -1, int  KeyInput4 = -1);
int  __stdcall dx_SetJoypadDeadZone( int  InputType, double  Zone);
int  __stdcall dx_StartJoypadVibration( int  InputType, int  Power, int  Time, int  EffectIndex = -1);
int  __stdcall dx_StopJoypadVibration( int  InputType, int  EffectIndex = -1);
int  __stdcall dx_GetJoypadPOVState( int  InputType, int  POVNumber);
int  __stdcall dx_ReSetupJoypad( void);
int  __stdcall dx_SetUseJoypadVibrationFlag( int  Flag);
int  __stdcall dx_MakeGraph( int  SizeX, int  SizeY, int  NotUse3DFlag = FALSE);
int  __stdcall dx_MakeScreen( int  SizeX, int  SizeY, int  UseAlphaChannel = FALSE);
int  __stdcall dx_DerivationGraph( int  SrcX, int  SrcY, int  Width, int  Height, int  SrcGraphHandle);
int  __stdcall dx_DeleteGraph( int  GrHandle, int  LogOutFlag = FALSE);
int  __stdcall dx_DeleteSharingGraph( int  GrHandle);
int  __stdcall dx_GetGraphNum( void);
int  __stdcall dx_FillGraph( int  GrHandle, int  Red, int  Green, int  Blue, int  Alpha = 255);
int  __stdcall dx_SetGraphLostFlag( int  GrHandle, int *  LostFlag);
int  __stdcall dx_InitGraph( int  LogOutFlag = FALSE);
int  __stdcall dx_ReloadFileGraphAll( void);
int  __stdcall dx_MakeShadowMap( int  SizeX, int  SizeY);
int  __stdcall dx_DeleteShadowMap( int  SmHandle);
int  __stdcall dx_SetShadowMapLightDirection( int  SmHandle, VECTOR  Direction);
int  __stdcall dx_ShadowMap_DrawSetup( int  SmHandle);
int  __stdcall dx_ShadowMap_DrawEnd( void);
int  __stdcall dx_SetUseShadowMap( int  SmSlotIndex, int  SmHandle);
int  __stdcall dx_SetShadowMapDrawArea( int  SmHandle, VECTOR  MinPosition, VECTOR  MaxPosition);
int  __stdcall dx_ResetShadowMapDrawArea( int  SmHandle);
int  __stdcall dx_SetShadowMapAdjustDepth( int  SmHandle, float  Depth);
int  __stdcall dx_TestDrawShadowMap( int  SmHandle, int  x1, int  y1, int  x2, int  y2);
int __stdcall dx_BltBmpToGraph( const COLORDATA * BmpColorData , HBITMAP RgbBmp , HBITMAP AlphaBmp , int CopyPointX , int CopyPointY , int GrHandle ) ;
int __stdcall dx_BltBmpToDivGraph( const COLORDATA * BmpColorData , HBITMAP RgbBmp , HBITMAP AlphaBmp , int AllNum , int XNum , int YNum , int Width , int Height , const int * GrHandle , int ReverseFlag ) ;
int __stdcall dx_BltBmpOrGraphImageToGraph( const COLORDATA * BmpColorData , HBITMAP RgbBmp , HBITMAP AlphaBmp , int BmpFlag , const BASEIMAGE * RgbBaseImage , const BASEIMAGE * AlphaBaseImage , int CopyPointX , int CopyPointY , int GrHandle ) ;
int __stdcall dx_BltBmpOrGraphImageToGraph2( const COLORDATA * BmpColorData , HBITMAP RgbBmp , HBITMAP AlphaBmp , int BmpFlag , const BASEIMAGE * RgbBaseImage , const BASEIMAGE * AlphaBaseImage , const RECT * SrcRect , int DestX , int DestY , int GrHandle ) ;
int __stdcall dx_BltBmpOrGraphImageToDivGraph( const COLORDATA * BmpColorData , HBITMAP RgbBmp , HBITMAP AlphaBmp , int BmpFlag , const BASEIMAGE * RgbBaseImage , const BASEIMAGE * AlphaBaseImage , int AllNum , int XNum , int YNum , int Width , int Height , const int * GrHandle , int ReverseFlag ) ;
int  __stdcall dx_LoadBmpToGraph( const char * FileName, int  TextureFlag, int  ReverseFlag, int  SurfaceMode = DX_MOVIESURFACE_NORMAL);
int  __stdcall dx_LoadGraph( const char * FileName, int  NotUse3DFlag = FALSE);
int  __stdcall dx_LoadReverseGraph( const char * FileName, int  NotUse3DFlag = FALSE);
int  __stdcall dx_LoadDivGraph( const char * FileName, int  AllNum, int  XNum, int  YNum, int  XSize, int  YSize, int *  HandleBuf, int  NotUse3DFlag = FALSE);
int  __stdcall dx_LoadDivBmpToGraph( const char * FileName, int  AllNum, int  XNum, int  YNum, int  SizeX, int  SizeY, int *  HandleBuf, int  TextureFlag, int  ReverseFlag);
int  __stdcall dx_LoadReverseDivGraph( const char * FileName, int  AllNum, int  XNum, int  YNum, int  XSize, int  YSize, int *  HandleBuf, int  NotUse3DFlag = FALSE);
int  __stdcall dx_LoadBlendGraph( const char * FileName);
int  __stdcall dx_CreateGraphFromMem( const void * RGBFileImage, int  RGBFileImageSize, const void * AlphaFileImage = NULL, int  AlphaFileImageSize = 0, int  TextureFlag = TRUE, int  ReverseFlag = FALSE);
int  __stdcall dx_ReCreateGraphFromMem( const void * RGBFileImage, int  RGBFileImageSize, int  GrHandle, const void * AlphaFileImage = NULL, int  AlphaFileImageSize = 0, int  TextureFlag = TRUE, int  ReverseFlag = FALSE);
int  __stdcall dx_CreateDivGraphFromMem( const void * RGBFileImage, int  RGBFileImageSize, int  AllNum, int  XNum, int  YNum, int  SizeX, int  SizeY, int *  HandleBuf, int  TextureFlag = TRUE, int  ReverseFlag = FALSE, const void * AlphaFileImage = NULL, int  AlphaFileImageSize = 0);
int  __stdcall dx_ReCreateDivGraphFromMem( const void * RGBFileImage, int  RGBFileImageSize, int  AllNum, int  XNum, int  YNum, int  SizeX, int  SizeY, const int *  HandleBuf, int  TextureFlag = TRUE, int  ReverseFlag = FALSE, const void * AlphaFileImage = NULL, int  AlphaFileImageSize = 0);
int __stdcall dx_CreateGraphFromBmp( const BITMAPINFO * RGBBmpInfo , const void * RGBBmpImage , const BITMAPINFO * AlphaBmpInfo = NULL , const void * AlphaBmpImage = NULL , int TextureFlag = TRUE , int ReverseFlag = FALSE ) ;
int __stdcall dx_ReCreateGraphFromBmp( const BITMAPINFO * RGBBmpInfo , const void * RGBBmpImage , int GrHandle , const BITMAPINFO * AlphaBmpInfo = NULL , const void * AlphaBmpImage = NULL , int TextureFlag = TRUE , int ReverseFlag = FALSE ) ;
int __stdcall dx_CreateDivGraphFromBmp( const BITMAPINFO * RGBBmpInfo , const void * RGBBmpImage , int AllNum , int XNum , int YNum , int SizeX , int SizeY , int * HandleBuf , int TextureFlag = TRUE , int ReverseFlag = FALSE , const BITMAPINFO * AlphaBmpInfo = NULL , const void * AlphaBmpImage = NULL ) ;
int __stdcall dx_ReCreateDivGraphFromBmp( const BITMAPINFO * RGBBmpInfo , const void * RGBBmpImage , int AllNum , int XNum , int YNum , int SizeX , int SizeY , const int * HandleBuf , int TextureFlag = TRUE , int ReverseFlag = FALSE , const BITMAPINFO * AlphaBmpInfo = NULL , const void * AlphaBmpImage = NULL ) ;
int __stdcall dx_CreateDXGraph( const BASEIMAGE * RgbBaseImage , const BASEIMAGE * AlphaBaseImage , int TextureFlag ) ;
int __stdcall dx_CreateGraphFromGraphImage( const BASEIMAGE * RgbBaseImage , int TextureFlag = TRUE , int ReverseFlag = FALSE ) ;
int __stdcall dx_CreateGraphFromGraphImage_2( const BASEIMAGE * RgbBaseImage , const BASEIMAGE * AlphaBaseImage , int TextureFlag = TRUE , int ReverseFlag = FALSE ) ;
int __stdcall dx_ReCreateGraphFromGraphImage( const BASEIMAGE * RgbBaseImage , int GrHandle , int TextureFlag = TRUE , int ReverseFlag = FALSE ) ;
int __stdcall dx_ReCreateGraphFromGraphImage_2( const BASEIMAGE * RgbBaseImage , const BASEIMAGE * AlphaBaseImage , int GrHandle , int TextureFlag = TRUE , int ReverseFlag = FALSE ) ;
int __stdcall dx_CreateDivGraphFromGraphImage( BASEIMAGE * RgbBaseImage , int AllNum , int XNum , int YNum , int SizeX , int SizeY , int * HandleBuf , int TextureFlag = TRUE , int ReverseFlag = FALSE ) ;
int __stdcall dx_CreateDivGraphFromGraphImage_2( BASEIMAGE * RgbBaseImage , const BASEIMAGE * AlphaBaseImage , int AllNum , int XNum , int YNum , int SizeX , int SizeY , int * HandleBuf , int TextureFlag = TRUE , int ReverseFlag = FALSE ) ;
int __stdcall dx_ReCreateDivGraphFromGraphImage( BASEIMAGE * RgbBaseImage , int AllNum , int XNum , int YNum , int SizeX , int SizeY , const int * HandleBuf , int TextureFlag = TRUE , int ReverseFlag = FALSE ) ;
int __stdcall dx_ReCreateDivGraphFromGraphImage_2( BASEIMAGE * RgbBaseImage , const BASEIMAGE * AlphaBaseImage , int AllNum , int XNum , int YNum , int SizeX , int SizeY , const int * HandleBuf , int TextureFlag = TRUE , int ReverseFlag = FALSE ) ;
int  __stdcall dx_CreateGraph( int  Width, int  Height, int  Pitch, const void * RGBImage, const void * AlphaImage = NULL, int  GrHandle = -1);
int  __stdcall dx_CreateDivGraph( int  Width, int  Height, int  Pitch, const void * RGBImage, int  AllNum, int  XNum, int  YNum, int  SizeX, int  SizeY, int *  HandleBuf, const void * AlphaImage = NULL);
int  __stdcall dx_ReCreateGraph( int  Width, int  Height, int  Pitch, const void * RGBImage, int  GrHandle, const void * AlphaImage = NULL);
int  __stdcall dx_CreateBlendGraphFromSoftImage( int  SIHandle);
int  __stdcall dx_CreateGraphFromSoftImage( int  SIHandle);
int  __stdcall dx_CreateGraphFromRectSoftImage( int  SIHandle, int  x, int  y, int  SizeX, int  SizeY);
int  __stdcall dx_ReCreateGraphFromSoftImage( int  SIHandle, int  GrHandle);
int  __stdcall dx_ReCreateGraphFromRectSoftImage( int  SIHandle, int  x, int  y, int  SizeX, int  SizeY, int  GrHandle);
int  __stdcall dx_CreateDivGraphFromSoftImage( int  SIHandle, int  AllNum, int  XNum, int  YNum, int  SizeX, int  SizeY, int *  HandleBuf);
int __stdcall dx_CreateGraphFromBaseImage( const BASEIMAGE * BaseImage ) ;
int __stdcall dx_CreateGraphFromRectBaseImage( const BASEIMAGE * BaseImage , int x , int y , int SizeX , int SizeY ) ;
int __stdcall dx_ReCreateGraphFromBaseImage( const BASEIMAGE * BaseImage , int GrHandle ) ;
int __stdcall dx_ReCreateGraphFromRectBaseImage( const BASEIMAGE * BaseImage , int x , int y , int SizeX , int SizeY , int GrHandle ) ;
int __stdcall dx_CreateDivGraphFromBaseImage( BASEIMAGE * BaseImage , int AllNum , int XNum , int YNum , int SizeX , int SizeY , int * HandleBuf ) ;
int  __stdcall dx_ReloadGraph( const char * FileName, int  GrHandle, int  ReverseFlag = FALSE);
int  __stdcall dx_ReloadDivGraph( const char * FileName, int  AllNum, int  XNum, int  YNum, int  XSize, int  YSize, const int *  HandleBuf, int  ReverseFlag = FALSE);
int  __stdcall dx_ReloadReverseGraph( const char * FileName, int  GrHandle);
int  __stdcall dx_ReloadReverseDivGraph( const char * FileName, int  AllNum, int  XNum, int  YNum, int  XSize, int  YSize, const int *  HandleBuf);
int  __stdcall dx_SetGraphColorBitDepth( int  ColorBitDepth);
int  __stdcall dx_GetGraphColorBitDepth( void);
int  __stdcall dx_SetCreateGraphColorBitDepth( int  BitDepth);
int  __stdcall dx_GetCreateGraphColorBitDepth( void);
int  __stdcall dx_SetCreateGraphChannelBitDepth( int  BitDepth);
int  __stdcall dx_GetCreateGraphChannelBitDepth( void);
int  __stdcall dx_SetDrawValidGraphCreateFlag( int  Flag);
int  __stdcall dx_GetDrawValidGraphCreateFlag( void);
int  __stdcall dx_SetDrawValidFlagOf3DGraph( int  Flag);
int  __stdcall dx_SetLeftUpColorIsTransColorFlag( int  Flag);
int  __stdcall dx_SetUseBlendGraphCreateFlag( int  Flag);
int  __stdcall dx_GetUseBlendGraphCreateFlag( void);
int  __stdcall dx_SetUseAlphaTestGraphCreateFlag( int  Flag);
int  __stdcall dx_GetUseAlphaTestGraphCreateFlag( void);
int  __stdcall dx_SetUseAlphaTestFlag( int  Flag);
int  __stdcall dx_GetUseAlphaTestFlag( void);
int  __stdcall dx_SetCubeMapTextureCreateFlag( int  Flag);
int  __stdcall dx_GetCubeMapTextureCreateFlag( void);
int  __stdcall dx_SetUseNoBlendModeParam( int  Flag);
int  __stdcall dx_SetDrawValidAlphaChannelGraphCreateFlag( int  Flag);
int  __stdcall dx_GetDrawValidAlphaChannelGraphCreateFlag( void);
int  __stdcall dx_SetDrawValidFloatTypeGraphCreateFlag( int  Flag);
int  __stdcall dx_GetDrawValidFloatTypeGraphCreateFlag( void);
int  __stdcall dx_SetDrawValidGraphCreateZBufferFlag( int  Flag);
int  __stdcall dx_GetDrawValidGraphCreateZBufferFlag( void);
int  __stdcall dx_SetCreateDrawValidGraphZBufferBitDepth( int  BitDepth);
int  __stdcall dx_GetCreateDrawValidGraphZBufferBitDepth( void);
int  __stdcall dx_SetCreateDrawValidGraphChannelNum( int  ChannelNum);
int  __stdcall dx_GetCreateDrawValidGraphChannelNum( void);
int  __stdcall dx_SetCreateDrawValidGraphMultiSample( int  Samples, int  Quality);
int  __stdcall dx_SetDrawValidMultiSample( int  Samples, int  Quality);
int  __stdcall dx_GetMultiSampleQuality( int  Samples);
int  __stdcall dx_SetUseTransColor( int  Flag);
int  __stdcall dx_SetUseTransColorGraphCreateFlag( int  Flag);
int  __stdcall dx_SetUseGraphAlphaChannel( int  Flag);
int  __stdcall dx_GetUseGraphAlphaChannel( void);
int  __stdcall dx_SetUseAlphaChannelGraphCreateFlag( int  Flag);
int  __stdcall dx_GetUseAlphaChannelGraphCreateFlag( void);
int  __stdcall dx_SetUseNotManageTextureFlag( int  Flag);
int  __stdcall dx_GetUseNotManageTextureFlag( void);
int  __stdcall dx_SetUsePlatformTextureFormat( int  PlatformTextureFormat);
int  __stdcall dx_GetUsePlatformTextureFormat( void);
int  __stdcall dx_SetTransColor( int  Red, int  Green, int  Blue);
int  __stdcall dx_GetTransColor( int *  Red, int *  Green, int *  Blue);
int  __stdcall dx_SetUseDivGraphFlag( int  Flag);
int  __stdcall dx_SetUseAlphaImageLoadFlag( int  Flag);
int  __stdcall dx_SetUseMaxTextureSize( int  Size);
int  __stdcall dx_SetUseGraphBaseDataBackup( int  Flag);
int  __stdcall dx_GetUseGraphBaseDataBackup( void);
int  __stdcall dx_SetUseSystemMemGraphCreateFlag( int  Flag);
int  __stdcall dx_GetUseSystemMemGraphCreateFlag( void);
const unsigned int * __stdcall dx_GetFullColorImage( int GrHandle ) ;
int __stdcall dx_GraphLock( int GrHandle , int * PitchBuf , void * * DataPointBuf , COLORDATA * * ColorDataPP = NULL , int WriteOnly = FALSE ) ;
int  __stdcall dx_GraphUnLock( int  GrHandle);
int  __stdcall dx_SetUseGraphZBuffer( int  GrHandle, int  UseFlag, int  BitDepth = -1);
int  __stdcall dx_CopyGraphZBufferImage( int  DestGrHandle, int  SrcGrHandle);
int  __stdcall dx_SetDeviceLostDeleteGraphFlag( int  GrHandle, int  DeleteFlag);
int  __stdcall dx_GetGraphSize( int  GrHandle, int *  SizeXBuf, int *  SizeYBuf);
int  __stdcall dx_GetGraphTextureSize( int  GrHandle, int *  SizeXBuf, int *  SizeYBuf);
int  __stdcall dx_GetGraphMipmapCount( int  GrHandle);
int  __stdcall dx_GetGraphFilePath( int  GrHandle, TCHAR *  FilePathBuffer);
const COLORDATA * __stdcall dx_GetTexColorData( int AlphaCh , int AlphaTest , int ColorBitDepth , int DrawValid = FALSE ) ;
const COLORDATA * __stdcall dx_GetTexColorData_2( const IMAGEFORMATDESC * Format ) ;
const COLORDATA * __stdcall dx_GetTexColorData_3( int FormatIndex ) ;
int  __stdcall dx_GetMaxGraphTextureSize( int *  SizeX, int *  SizeY);
int  __stdcall dx_GetValidRestoreShredPoint( void);
int  __stdcall dx_GetCreateGraphColorData( COLORDATA *  ColorData, IMAGEFORMATDESC *  Format);
int  __stdcall dx_GetGraphPalette( int  GrHandle, int  ColorIndex, int *  Red, int *  Green, int *  Blue);
int  __stdcall dx_GetGraphOriginalPalette( int  GrHandle, int  ColorIndex, int *  Red, int *  Green, int *  Blue);
int  __stdcall dx_SetGraphPalette( int  GrHandle, int  ColorIndex, unsigned int  Color);
int  __stdcall dx_ResetGraphPalette( int  GrHandle);
int  __stdcall dx_DrawLine( int  x1, int  y1, int  x2, int  y2, unsigned int  Color, int  Thickness = 1);
int  __stdcall dx_DrawBox( int  x1, int  y1, int  x2, int  y2, unsigned int  Color, int  FillFlag);
int  __stdcall dx_DrawFillBox( int  x1, int  y1, int  x2, int  y2, unsigned int  Color);
int  __stdcall dx_DrawLineBox( int  x1, int  y1, int  x2, int  y2, unsigned int  Color);
int  __stdcall dx_DrawCircle( int  x, int  y, int  r, unsigned int  Color, int  FillFlag = TRUE, int  LineThickness = 1);
int  __stdcall dx_DrawOval( int  x, int  y, int  rx, int  ry, unsigned int  Color, int  FillFlag, int  LineThickness = 1);
int  __stdcall dx_DrawTriangle( int  x1, int  y1, int  x2, int  y2, int  x3, int  y3, unsigned int  Color, int  FillFlag);
int  __stdcall dx_DrawQuadrangle( int  x1, int  y1, int  x2, int  y2, int  x3, int  y3, int  x4, int  y4, unsigned int  Color, int  FillFlag);
int  __stdcall dx_DrawRoundRect( int  x1, int  y1, int  x2, int  y2, int  rx, int  ry, unsigned int  Color, int  FillFlag);
int  __stdcall dx_DrawPixel( int  x, int  y, unsigned int  Color);
int  __stdcall dx_DrawPixelSet( const POINTDATA *  PointData, int  Num);
int  __stdcall dx_DrawLineSet( const LINEDATA *  LineData, int  Num);
int  __stdcall dx_DrawPixel3D( VECTOR  Pos, unsigned int  Color);
int  __stdcall dx_DrawPixel3DD( VECTOR_D  Pos, unsigned int  Color);
int  __stdcall dx_DrawLine3D( VECTOR  Pos1, VECTOR  Pos2, unsigned int  Color);
int  __stdcall dx_DrawLine3DD( VECTOR_D  Pos1, VECTOR_D  Pos2, unsigned int  Color);
int  __stdcall dx_DrawTriangle3D( VECTOR  Pos1, VECTOR  Pos2, VECTOR  Pos3, unsigned int  Color, int  FillFlag);
int  __stdcall dx_DrawTriangle3DD( VECTOR_D  Pos1, VECTOR_D  Pos2, VECTOR_D  Pos3, unsigned int  Color, int  FillFlag);
int  __stdcall dx_DrawCube3D( VECTOR  Pos1, VECTOR  Pos2, unsigned int  DifColor, unsigned int  SpcColor, int  FillFlag);
int  __stdcall dx_DrawCube3DD( VECTOR_D  Pos1, VECTOR_D  Pos2, unsigned int  DifColor, unsigned int  SpcColor, int  FillFlag);
int  __stdcall dx_DrawSphere3D( VECTOR  CenterPos, float  r, int  DivNum, unsigned int  DifColor, unsigned int  SpcColor, int  FillFlag);
int  __stdcall dx_DrawSphere3DD( VECTOR_D  CenterPos, double  r, int  DivNum, unsigned int  DifColor, unsigned int  SpcColor, int  FillFlag);
int  __stdcall dx_DrawCapsule3D( VECTOR  Pos1, VECTOR  Pos2, float  r, int  DivNum, unsigned int  DifColor, unsigned int  SpcColor, int  FillFlag);
int  __stdcall dx_DrawCapsule3DD( VECTOR_D  Pos1, VECTOR_D  Pos2, double  r, int  DivNum, unsigned int  DifColor, unsigned int  SpcColor, int  FillFlag);
int  __stdcall dx_DrawCone3D( VECTOR  TopPos, VECTOR  BottomPos, float  r, int  DivNum, unsigned int  DifColor, unsigned int  SpcColor, int  FillFlag);
int  __stdcall dx_DrawCone3DD( VECTOR_D  TopPos, VECTOR_D  BottomPos, double  r, int  DivNum, unsigned int  DifColor, unsigned int  SpcColor, int  FillFlag);
int  __stdcall dx_LoadGraphScreen( int  x, int  y, const char * GraphName, int  TransFlag);
int  __stdcall dx_DrawGraph( int  x, int  y, int  GrHandle, int  TransFlag);
int  __stdcall dx_DrawExtendGraph( int  x1, int  y1, int  x2, int  y2, int  GrHandle, int  TransFlag);
int  __stdcall dx_DrawRotaGraph( int  x, int  y, double  ExRate, double  Angle, int  GrHandle, int  TransFlag, int  TurnFlag = FALSE);
int  __stdcall dx_DrawRotaGraph2( int  x, int  y, int  cx, int  cy, double  ExtRate, double  Angle, int  GrHandle, int  TransFlag, int  TurnFlag = FALSE);
int  __stdcall dx_DrawRotaGraph3( int  x, int  y, int  cx, int  cy, double  ExtRateX, double  ExtRateY, double  Angle, int  GrHandle, int  TransFlag, int  TurnFlag = FALSE);
int  __stdcall dx_DrawRotaGraphFast( int  x, int  y, float  ExRate, float  Angle, int  GrHandle, int  TransFlag, int  TurnFlag = FALSE);
int  __stdcall dx_DrawRotaGraphFast2( int  x, int  y, int  cx, int  cy, float  ExtRate, float  Angle, int  GrHandle, int  TransFlag, int  TurnFlag = FALSE);
int  __stdcall dx_DrawRotaGraphFast3( int  x, int  y, int  cx, int  cy, float  ExtRateX, float  ExtRateY, float  Angle, int  GrHandle, int  TransFlag, int  TurnFlag = FALSE);
int  __stdcall dx_DrawModiGraph( int  x1, int  y1, int  x2, int  y2, int  x3, int  y3, int  x4, int  y4, int  GrHandle, int  TransFlag);
int  __stdcall dx_DrawTurnGraph( int  x, int  y, int  GrHandle, int  TransFlag);
int  __stdcall dx_DrawGraphF( float  xf, float  yf, int  GrHandle, int  TransFlag);
int  __stdcall dx_DrawExtendGraphF( float  x1f, float  y1f, float  x2f, float  y2, int  GrHandle, int  TransFlag);
int  __stdcall dx_DrawRotaGraphF( float  xf, float  yf, double  ExRate, double  Angle, int  GrHandle, int  TransFlag, int  TurnFlag = FALSE);
int  __stdcall dx_DrawRotaGraph2F( float  xf, float  yf, float  cxf, float  cyf, double  ExtRate, double  Angle, int  GrHandle, int  TransFlag, int  TurnFlag = FALSE);
int  __stdcall dx_DrawRotaGraph3F( float  xf, float  yf, float  cxf, float  cyf, double  ExtRateX, double  ExtRateY, double  Angle, int  GrHandle, int  TransFlag, int  TurnFlag = FALSE);
int  __stdcall dx_DrawRotaGraphFastF( float  xf, float  yf, float  ExRate, float  Angle, int  GrHandle, int  TransFlag, int  TurnFlag = FALSE);
int  __stdcall dx_DrawRotaGraphFast2F( float  xf, float  yf, float  cxf, float  cyf, float  ExtRate, float  Angle, int  GrHandle, int  TransFlag, int  TurnFlag = FALSE);
int  __stdcall dx_DrawRotaGraphFast3F( float  xf, float  yf, float  cxf, float  cyf, float  ExtRateX, float  ExtRateY, float  Angle, int  GrHandle, int  TransFlag, int  TurnFlag = FALSE);
int  __stdcall dx_DrawModiGraphF( float  x1, float  y1, float  x2, float  y2, float  x3, float  y3, float  x4, float  y4, int  GrHandle, int  TransFlag);
int  __stdcall dx_DrawTurnGraphF( float  xf, float  yf, int  GrHandle, int  TransFlag);
int __stdcall dx_DrawChipMap( int Sx , int Sy , int XNum , int YNum , const int * MapData , int ChipTypeNum , int MapDataPitch , const int * ChipGrHandle , int TransFlag ) ;
int __stdcall dx_DrawChipMap_2( int MapWidth , int MapHeight , const int * MapData , int ChipTypeNum , const int * ChipGrHandle , int TransFlag , int MapDrawPointX , int MapDrawPointY , int MapDrawWidth , int MapDrawHeight , int ScreenX , int ScreenY ) ;
int  __stdcall dx_DrawTile( int  x1, int  y1, int  x2, int  y2, int  Tx, int  Ty, double  ExtRate, double  Angle, int  GrHandle, int  TransFlag);
int  __stdcall dx_DrawRectGraph( int  DestX, int  DestY, int  SrcX, int  SrcY, int  Width, int  Height, int  GraphHandle, int  TransFlag, int  TurnFlag);
int  __stdcall dx_DrawRectExtendGraph( int  DestX1, int  DestY1, int  DestX2, int  DestY2, int  SrcX, int  SrcY, int  SrcWidth, int  SrcHeight, int  GraphHandle, int  TransFlag);
int  __stdcall dx_DrawRectRotaGraph( int  x, int  y, int  SrcX, int  SrcY, int  Width, int  Height, double  ExtRate, double  Angle, int  GraphHandle, int  TransFlag, int  TurnFlag);
int  __stdcall dx_DrawRectRotaGraph2( int  x, int  y, int  SrcX, int  SrcY, int  Width, int  Height, int  cx, int  cy, double  ExtRate, double  Angle, int  GraphHandle, int  TransFlag, int  TurnFlag);
int  __stdcall dx_DrawRectRotaGraph3( int  x, int  y, int  SrcX, int  SrcY, int  Width, int  Height, int  cx, int  cy, double  ExtRateX, double  ExtRateY, double  Angle, int  GraphHandle, int  TransFlag, int  TurnFlag);
int  __stdcall dx_DrawRectRotaGraphFast( int  x, int  y, int  SrcX, int  SrcY, int  Width, int  Height, float  ExtRate, float  Angle, int  GraphHandle, int  TransFlag, int  TurnFlag);
int  __stdcall dx_DrawRectRotaGraphFast2( int  x, int  y, int  SrcX, int  SrcY, int  Width, int  Height, int  cx, int  cy, float  ExtRate, float  Angle, int  GraphHandle, int  TransFlag, int  TurnFlag);
int  __stdcall dx_DrawRectRotaGraphFast3( int  x, int  y, int  SrcX, int  SrcY, int  Width, int  Height, int  cx, int  cy, float  ExtRateX, float  ExtRateY, float  Angle, int  GraphHandle, int  TransFlag, int  TurnFlag);
int  __stdcall dx_DrawRectModiGraph( int  x1, int  y1, int  x2, int  y2, int  x3, int  y3, int  x4, int  y4, int  SrcX, int  SrcY, int  Width, int  Height, int  GraphHandle, int  TransFlag);
int  __stdcall dx_DrawRectGraphF( float  DestX, float  DestY, int  SrcX, int  SrcY, int  Width, int  Height, int  GraphHandle, int  TransFlag, int  TurnFlag);
int  __stdcall dx_DrawRectExtendGraphF( float  DestX1, float  DestY1, float  DestX2, float  DestY2, int  SrcX, int  SrcY, int  SrcWidth, int  SrcHeight, int  GraphHandle, int  TransFlag);
int  __stdcall dx_DrawRectRotaGraphF( float  x, float  y, int  SrcX, int  SrcY, int  Width, int  Height, double  ExtRate, double  Angle, int  GraphHandle, int  TransFlag, int  TurnFlag);
int  __stdcall dx_DrawRectRotaGraph2F( float  x, float  y, int  SrcX, int  SrcY, int  Width, int  Height, float  cxf, float  cyf, double  ExtRate, double  Angle, int  GraphHandle, int  TransFlag, int  TurnFlag);
int  __stdcall dx_DrawRectRotaGraph3F( float  x, float  y, int  SrcX, int  SrcY, int  Width, int  Height, float  cxf, float  cyf, double  ExtRateX, double  ExtRateY, double  Angle, int  GraphHandle, int  TransFlag, int  TurnFlag);
int  __stdcall dx_DrawRectRotaGraphFastF( float  x, float  y, int  SrcX, int  SrcY, int  Width, int  Height, float  ExtRate, float  Angle, int  GraphHandle, int  TransFlag, int  TurnFlag);
int  __stdcall dx_DrawRectRotaGraphFast2F( float  x, float  y, int  SrcX, int  SrcY, int  Width, int  Height, float  cxf, float  cyf, float  ExtRate, float  Angle, int  GraphHandle, int  TransFlag, int  TurnFlag);
int  __stdcall dx_DrawRectRotaGraphFast3F( float  x, float  y, int  SrcX, int  SrcY, int  Width, int  Height, float  cxf, float  cyf, float  ExtRateX, float  ExtRateY, float  Angle, int  GraphHandle, int  TransFlag, int  TurnFlag);
int  __stdcall dx_DrawRectModiGraphF( float  x1, float  y1, float  x2, float  y2, float  x3, float  y3, float  x4, float  y4, int  SrcX, int  SrcY, int  Width, int  Height, int  GraphHandle, int  TransFlag);
int  __stdcall dx_DrawBlendGraph( int  x, int  y, int  GrHandle, int  TransFlag, int  BlendGraph, int  BorderParam, int  BorderRange);
int  __stdcall dx_DrawBlendGraphPos( int  x, int  y, int  GrHandle, int  TransFlag, int  bx, int  by, int  BlendGraph, int  BorderParam, int  BorderRange);
int  __stdcall dx_DrawCircleGauge( int  CenterX, int  CenterY, double  Percent, int  GrHandle, double  StartPercent = 0.0);
int  __stdcall dx_DrawGraphToZBuffer( int  X, int  Y, int  GrHandle, int  WriteZMode);
int  __stdcall dx_DrawTurnGraphToZBuffer( int  x, int  y, int  GrHandle, int  WriteZMode);
int  __stdcall dx_DrawExtendGraphToZBuffer( int  x1, int  y1, int  x2, int  y2, int  GrHandle, int  WriteZMode);
int  __stdcall dx_DrawRotaGraphToZBuffer( int  x, int  y, double  ExRate, double  Angle, int  GrHandle, int  WriteZMode, int  TurnFlag = FALSE);
int  __stdcall dx_DrawRotaGraph2ToZBuffer( int  x, int  y, int  cx, int  cy, double  ExtRate, double  Angle, int  GrHandle, int  WriteZMode, int  TurnFlag = FALSE);
int  __stdcall dx_DrawRotaGraph3ToZBuffer( int  x, int  y, int  cx, int  cy, double  ExtRateX, double  ExtRateY, double  Angle, int  GrHandle, int  WriteZMode, int  TurnFlag = FALSE);
int  __stdcall dx_DrawRotaGraphFastToZBuffer( int  x, int  y, float  ExRate, float  Angle, int  GrHandle, int  WriteZMode, int  TurnFlag = FALSE);
int  __stdcall dx_DrawRotaGraphFast2ToZBuffer( int  x, int  y, int  cx, int  cy, float  ExtRate, float  Angle, int  GrHandle, int  WriteZMode, int  TurnFlag = FALSE);
int  __stdcall dx_DrawRotaGraphFast3ToZBuffer( int  x, int  y, int  cx, int  cy, float  ExtRateX, float  ExtRateY, float  Angle, int  GrHandle, int  WriteZMode, int  TurnFlag = FALSE);
int  __stdcall dx_DrawModiGraphToZBuffer( int  x1, int  y1, int  x2, int  y2, int  x3, int  y3, int  x4, int  y4, int  GrHandle, int  WriteZMode);
int  __stdcall dx_DrawBoxToZBuffer( int  x1, int  y1, int  x2, int  y2, int  FillFlag, int  WriteZMode);
int  __stdcall dx_DrawCircleToZBuffer( int  x, int  y, int  r, int  FillFlag, int  WriteZMode);
int  __stdcall dx_DrawTriangleToZBuffer( int  x1, int  y1, int  x2, int  y2, int  x3, int  y3, int  FillFlag, int  WriteZMode);
int  __stdcall dx_DrawQuadrangleToZBuffer( int  x1, int  y1, int  x2, int  y2, int  x3, int  y3, int  x4, int  y4, int  FillFlag, int  WriteZMode);
int  __stdcall dx_DrawRoundRectToZBuffer( int  x1, int  y1, int  x2, int  y2, int  rx, int  ry, int  FillFlag, int  WriteZMode);
int  __stdcall dx_DrawPolygon( const VERTEX *  Vertex, int  PolygonNum, int  GrHandle, int  TransFlag, int  UVScaling = FALSE);
int  __stdcall dx_DrawPolygon2D( const VERTEX2D *  Vertex, int  PolygonNum, int  GrHandle, int  TransFlag);
int  __stdcall dx_DrawPolygon3D( const VERTEX3D *  Vertex, int  PolygonNum, int  GrHandle, int  TransFlag);
int  __stdcall dx_DrawPolygonIndexed2D( const VERTEX2D *  Vertex, int  VertexNum, const unsigned short *  Indices, int  PolygonNum, int  GrHandle, int  TransFlag);
int  __stdcall dx_DrawPolygonIndexed3D( const VERTEX3D *  Vertex, int  VertexNum, const unsigned short *  Indices, int  PolygonNum, int  GrHandle, int  TransFlag);
int  __stdcall dx_DrawPolygonIndexed3DBase( const VERTEX_3D *  Vertex, int  VertexNum, const unsigned short *  Indices, int  IndexNum, int  PrimitiveType, int  GrHandle, int  TransFlag);
int  __stdcall dx_DrawPolygon3DBase( const VERTEX_3D *  Vertex, int  VertexNum, int  PrimitiveType, int  GrHandle, int  TransFlag);
int  __stdcall dx_DrawPolygon3D_2( const VERTEX_3D *  Vertex, int  PolygonNum, int  GrHandle, int  TransFlag);
int  __stdcall dx_DrawPolygonBase( const VERTEX *  Vertex, int  VertexNum, int  PrimitiveType, int  GrHandle, int  TransFlag, int  UVScaling = FALSE);
int  __stdcall dx_DrawPrimitive2D( const VERTEX2D *  Vertex, int  VertexNum, int  PrimitiveType, int  GrHandle, int  TransFlag);
int  __stdcall dx_DrawPrimitive3D( const VERTEX3D *  Vertex, int  VertexNum, int  PrimitiveType, int  GrHandle, int  TransFlag);
int  __stdcall dx_DrawPrimitiveIndexed2D( const VERTEX2D *  Vertex, int  VertexNum, const unsigned short *  Indices, int  IndexNum, int  PrimitiveType, int  GrHandle, int  TransFlag);
int  __stdcall dx_DrawPrimitiveIndexed3D( const VERTEX3D *  Vertex, int  VertexNum, const unsigned short *  Indices, int  IndexNum, int  PrimitiveType, int  GrHandle, int  TransFlag);
int  __stdcall dx_DrawPolygon3D_UseVertexBuffer( int  VertexBufHandle, int  GrHandle, int  TransFlag);
int  __stdcall dx_DrawPrimitive3D_UseVertexBuffer( int  VertexBufHandle, int  PrimitiveType, int  GrHandle, int  TransFlag);
int  __stdcall dx_DrawPrimitive3D_UseVertexBuffer2( int  VertexBufHandle, int  PrimitiveType, int  StartVertex, int  UseVertexNum, int  GrHandle, int  TransFlag);
int  __stdcall dx_DrawPolygonIndexed3D_UseVertexBuffer( int  VertexBufHandle, int  IndexBufHandle, int  GrHandle, int  TransFlag);
int  __stdcall dx_DrawPrimitiveIndexed3D_UseVertexBuffer( int  VertexBufHandle, int  IndexBufHandle, int  PrimitiveType, int  GrHandle, int  TransFlag);
int  __stdcall dx_DrawPrimitiveIndexed3D_UseVertexBuffer2( int  VertexBufHandle, int  IndexBufHandle, int  PrimitiveType, int  BaseVertex, int  StartVertex, int  UseVertexNum, int  StartIndex, int  UseIndexNum, int  GrHandle, int  TransFlag);
int  __stdcall dx_DrawGraph3D( float  x, float  y, float  z, int  GrHandle, int  TransFlag);
int  __stdcall dx_DrawExtendGraph3D( float  x, float  y, float  z, double  ExRateX, double  ExRateY, int  GrHandle, int  TransFlag);
int  __stdcall dx_DrawRotaGraph3D( float  x, float  y, float  z, double  ExRate, double  Angle, int  GrHandle, int  TransFlag, int  TurnFlag = FALSE);
int  __stdcall dx_DrawRota2Graph3D( float  x, float  y, float  z, float  cx, float  cy, double  ExtRateX, double  ExtRateY, double  Angle, int  GrHandle, int  TransFlag, int  TurnFlag = FALSE);
int  __stdcall dx_DrawModiBillboard3D( VECTOR  Pos, float  x1, float  y1, float  x2, float  y2, float  x3, float  y3, float  x4, float  y4, int  GrHandle, int  TransFlag);
int  __stdcall dx_DrawBillboard3D( VECTOR  Pos, float  cx, float  cy, float  Size, float  Angle, int  GrHandle, int  TransFlag, int  TurnFlag = FALSE);
int  __stdcall dx_SetDrawMode( int  DrawMode);
int  __stdcall dx_GetDrawMode( void);
int  __stdcall dx_SetDrawBlendMode( int  BlendMode, int  BlendParam);
int  __stdcall dx_GetDrawBlendMode( int *  BlendMode, int *  BlendParam);
int  __stdcall dx_SetDrawAlphaTest( int  TestMode, int  TestParam);
int  __stdcall dx_SetBlendGraph( int  BlendGraph, int  BorderParam, int  BorderRange);
int  __stdcall dx_SetBlendGraphPosition( int  x, int  y);
int  __stdcall dx_SetDrawBright( int  RedBright, int  GreenBright, int  BlueBright);
int  __stdcall dx_GetDrawBright( int *  Red, int *  Green, int *  Blue);
int  __stdcall dx_SetIgnoreDrawGraphColor( int  EnableFlag);
int  __stdcall dx_SetMaxAnisotropy( int  MaxAnisotropy);
int  __stdcall dx_SetUseLarge3DPositionSupport( int  UseFlag);
int  __stdcall dx_SetUseZBufferFlag( int  Flag);
int  __stdcall dx_SetWriteZBufferFlag( int  Flag);
int  __stdcall dx_SetZBufferCmpType( int  CmpType);
int  __stdcall dx_SetZBias( int  Bias);
int  __stdcall dx_SetUseZBuffer3D( int  Flag);
int  __stdcall dx_SetWriteZBuffer3D( int  Flag);
int  __stdcall dx_SetZBufferCmpType3D( int  CmpType);
int  __stdcall dx_SetZBias3D( int  Bias);
int  __stdcall dx_SetDrawZ( float  Z);
int  __stdcall dx_SetDrawArea( int  x1, int  y1, int  x2, int  y2);
int  __stdcall dx_GetDrawArea( RECT *  Rect);
int  __stdcall dx_SetDrawAreaFull( void);
int  __stdcall dx_SetDraw3DScale( float  Scale);
int __stdcall dx_SetRestoreShredPoint( void ( *ShredPoint )( void ) ) ;
int __stdcall dx_SetRestoreGraphCallback( void ( *Callback )( void ) ) ;
int  __stdcall dx_RunRestoreShred( void);
int __stdcall dx_SetGraphicsDeviceRestoreCallbackFunction( void ( *Callback )( void * Data ) , void * CallbackData ) ;
int __stdcall dx_SetGraphicsDeviceLostCallbackFunction( void ( *Callback )( void * Data ) , void * CallbackData ) ;
int  __stdcall dx_SetTransformToWorld( const MATRIX *  Matrix);
int  __stdcall dx_SetTransformToWorldD( const MATRIX_D *  Matrix);
int  __stdcall dx_GetTransformToWorldMatrix( MATRIX *  MatBuf);
int  __stdcall dx_GetTransformToWorldMatrixD( MATRIX_D *  MatBuf);
int  __stdcall dx_SetTransformToView( const MATRIX *  Matrix);
int  __stdcall dx_SetTransformToViewD( const MATRIX_D *  Matrix);
int  __stdcall dx_GetTransformToViewMatrix( MATRIX *  MatBuf);
int  __stdcall dx_GetTransformToViewMatrixD( MATRIX_D *  MatBuf);
int  __stdcall dx_SetTransformToProjection( const MATRIX *  Matrix);
int  __stdcall dx_SetTransformToProjectionD( const MATRIX_D *  Matrix);
int  __stdcall dx_GetTransformToProjectionMatrix( MATRIX *  MatBuf);
int  __stdcall dx_GetTransformToProjectionMatrixD( MATRIX_D *  MatBuf);
int  __stdcall dx_SetTransformToViewport( const MATRIX *  Matrix);
int  __stdcall dx_SetTransformToViewportD( const MATRIX_D *  Matrix);
int  __stdcall dx_GetTransformToViewportMatrix( MATRIX *  MatBuf);
int  __stdcall dx_GetTransformToViewportMatrixD( MATRIX_D *  MatBuf);
int  __stdcall dx_GetTransformToAPIViewportMatrix( MATRIX *  MatBuf);
int  __stdcall dx_GetTransformToAPIViewportMatrixD( MATRIX_D *  MatBuf);
int  __stdcall dx_SetDefTransformMatrix( void);
int  __stdcall dx_GetTransformPosition( VECTOR *  LocalPos, float *  x, float *  y);
int  __stdcall dx_GetTransformPositionD( VECTOR_D *  LocalPos, double *  x, double *  y);
float  __stdcall dx_GetBillboardPixelSize( VECTOR  WorldPos, float  WorldSize);
double __stdcall dx_GetBillboardPixelSizeD( VECTOR_D WorldPos , double WorldSize ) ;
VECTOR  __stdcall dx_ConvWorldPosToViewPos( VECTOR  WorldPos);
VECTOR_D  __stdcall dx_ConvWorldPosToViewPosD( VECTOR_D  WorldPos);
VECTOR  __stdcall dx_ConvWorldPosToScreenPos( VECTOR  WorldPos);
VECTOR_D  __stdcall dx_ConvWorldPosToScreenPosD( VECTOR_D  WorldPos);
FLOAT4  __stdcall dx_ConvWorldPosToScreenPosPlusW( VECTOR  WorldPos);
DOUBLE4  __stdcall dx_ConvWorldPosToScreenPosPlusWD( VECTOR_D  WorldPos);
VECTOR  __stdcall dx_ConvScreenPosToWorldPos( VECTOR  ScreenPos);
VECTOR_D  __stdcall dx_ConvScreenPosToWorldPosD( VECTOR_D  ScreenPos);
VECTOR  __stdcall dx_ConvScreenPosToWorldPos_ZLinear( VECTOR  ScreenPos);
VECTOR_D  __stdcall dx_ConvScreenPosToWorldPos_ZLinearD( VECTOR_D  ScreenPos);
int  __stdcall dx_SetUseCullingFlag( int  Flag);
int  __stdcall dx_SetUseBackCulling( int  Flag);
int  __stdcall dx_GetUseBackCulling( void);
int  __stdcall dx_SetTextureAddressMode( int  Mode, int  Stage = -1);
int  __stdcall dx_SetTextureAddressModeUV( int  ModeU, int  ModeV, int  Stage = -1);
int  __stdcall dx_SetTextureAddressTransform( float  TransU, float  TransV, float  ScaleU, float  ScaleV, float  RotCenterU, float  RotCenterV, float  Rotate);
int  __stdcall dx_SetTextureAddressTransformMatrix( MATRIX  Matrix);
int  __stdcall dx_ResetTextureAddressTransform( void);
int  __stdcall dx_SetFogEnable( int  Flag);
int  __stdcall dx_GetFogEnable( void);
int  __stdcall dx_SetFogMode( int  Mode);
int  __stdcall dx_GetFogMode( void);
int  __stdcall dx_SetFogColor( int  r, int  g, int  b);
int  __stdcall dx_GetFogColor( int *  r, int *  g, int *  b);
int  __stdcall dx_SetFogStartEnd( float  start, float  end);
int  __stdcall dx_GetFogStartEnd( float *  start, float *  end);
int  __stdcall dx_SetFogDensity( float  density);
float  __stdcall dx_GetFogDensity( void);
unsigned int  __stdcall dx_GetPixel( int  x, int  y);
int  __stdcall dx_SetBackgroundColor( int  Red, int  Green, int  Blue);
int  __stdcall dx_GetBackgroundColor( int *  Red, int *  Green, int *  Blue);
int  __stdcall dx_GetDrawScreenGraph( int  x1, int  y1, int  x2, int  y2, int  GrHandle, int  UseClientFlag = TRUE);
int  __stdcall dx_BltDrawValidGraph( int  TargetDrawValidGrHandle, int  x1, int  y1, int  x2, int  y2, int  DestX, int  DestY, int  DestGrHandle);
int  __stdcall dx_ScreenFlip( void);
int  __stdcall dx_ScreenCopy( void);
int  __stdcall dx_WaitVSync( int  SyncNum);
int __stdcall dx_ClearDrawScreen( const RECT * ClearRect = NULL ) ;
int __stdcall dx_ClearDrawScreenZBuffer( const RECT * ClearRect = NULL ) ;
int  __stdcall dx_ClsDrawScreen( void);
int  __stdcall dx_SetDrawScreen( int  DrawScreen);
int  __stdcall dx_GetDrawScreen( void);
int  __stdcall dx_GetActiveGraph( void);
int  __stdcall dx_SetUseSetDrawScreenSettingReset( int  UseFlag);
int  __stdcall dx_GetUseSetDrawScreenSettingReset( void);
int  __stdcall dx_SetDrawZBuffer( int  DrawScreen);
int  __stdcall dx_SetGraphMode( int  ScreenSizeX, int  ScreenSizeY, int  ColorBitDepth, int  RefreshRate = 60);
int  __stdcall dx_SetFullScreenResolutionMode( int  ResolutionMode);
int  __stdcall dx_SetFullScreenScalingMode( int  ScalingMode);
int  __stdcall dx_SetEmulation320x240( int  Flag);
int  __stdcall dx_SetZBufferSize( int  ZBufferSizeX, int  ZBufferSizeY);
int  __stdcall dx_SetZBufferBitDepth( int  BitDepth);
int  __stdcall dx_SetWaitVSyncFlag( int  Flag);
int  __stdcall dx_GetWaitVSyncFlag( void);
int  __stdcall dx_SetFullSceneAntiAliasingMode( int  Samples, int  Quality);
int  __stdcall dx_SetGraphDisplayArea( int  x1, int  y1, int  x2, int  y2);
int  __stdcall dx_SetChangeScreenModeGraphicsSystemResetFlag( int  Flag);
int  __stdcall dx_GetScreenState( int *  SizeX, int *  SizeY, int *  ColorBitDepth);
int  __stdcall dx_GetDrawScreenSize( int *  XBuf, int *  YBuf);
int  __stdcall dx_GetScreenBitDepth( void);
int  __stdcall dx_GetColorBitDepth( void);
int  __stdcall dx_GetChangeDisplayFlag( void);
int  __stdcall dx_GetVideoMemorySize( int *  AllSize, int *  FreeSize);
int  __stdcall dx_GetRefreshRate( void);
int  __stdcall dx_GetDisplayNum( void);
int  __stdcall dx_GetDisplayModeNum( int  DisplayIndex = 0);
DISPLAYMODEDATA  __stdcall dx_GetDisplayMode( int  ModeIndex, int  DisplayIndex = 0);
int  __stdcall dx_GetDisplayMaxResolution( int *  SizeX, int *  SizeY, int  DisplayIndex = 0);
const COLORDATA * __stdcall dx_GetDispColorData( void );
int  __stdcall dx_GetMultiDrawScreenNum( void);
int  __stdcall dx_GetDrawFloatCoordType( void);
int  __stdcall dx_SetUseNormalDrawShader( int  Flag);
int  __stdcall dx_SetUseSoftwareRenderModeFlag( int  Flag);
int  __stdcall dx_SetNotUse3DFlag( int  Flag);
int  __stdcall dx_SetUse3DFlag( int  Flag);
int  __stdcall dx_GetUse3DFlag( void);
int  __stdcall dx_SetScreenMemToVramFlag( int  Flag);
int  __stdcall dx_GetScreenMemToSystemMemFlag( void);
int  __stdcall dx_SetWindowDrawRect( const RECT *  DrawRect);
int  __stdcall dx_RestoreGraphSystem( void);
int  __stdcall dx_SetUseHardwareVertexProcessing( int  Flag);
int  __stdcall dx_SetUsePixelLighting( int  Flag);
int  __stdcall dx_SetUseOldDrawModiGraphCodeFlag( int  Flag);
int  __stdcall dx_SetUseVramFlag( int  Flag);
int  __stdcall dx_GetUseVramFlag( void);
int  __stdcall dx_SetBasicBlendFlag( int  Flag);
int  __stdcall dx_SetUseBasicGraphDraw3DDeviceMethodFlag( int  Flag);
int  __stdcall dx_SetUseDisplayIndex( int  Index);
int  __stdcall dx_RenderVertex( void);
int  __stdcall dx_SaveDrawScreen( int  x1, int  y1, int  x2, int  y2, const char * FileName, int  SaveType = DX_IMAGESAVETYPE_BMP, int  Jpeg_Quality = 80, int  Jpeg_Sample2x1 = TRUE, int  Png_CompressionLevel = -1);
int  __stdcall dx_SaveDrawScreenToBMP( int  x1, int  y1, int  x2, int  y2, const char * FileName);
int  __stdcall dx_SaveDrawScreenToDDS( int  x1, int  y1, int  x2, int  y2, const char * FileName);
int  __stdcall dx_SaveDrawScreenToJPEG( int  x1, int  y1, int  x2, int  y2, const char * FileName, int  Quality = 80, int  Sample2x1 = TRUE);
int  __stdcall dx_SaveDrawScreenToPNG( int  x1, int  y1, int  x2, int  y2, const char * FileName, int  CompressionLevel = -1);
int  __stdcall dx_CreateVertexBuffer( int  VertexNum, int  VertexType);
int  __stdcall dx_DeleteVertexBuffer( int  VertexBufHandle);
int  __stdcall dx_InitVertexBuffer( void);
int  __stdcall dx_SetVertexBufferData( int  SetIndex, const void * VertexData, int  VertexNum, int  VertexBufHandle);
int  __stdcall dx_CreateIndexBuffer( int  IndexNum, int  IndexType);
int  __stdcall dx_DeleteIndexBuffer( int  IndexBufHandle);
int  __stdcall dx_InitIndexBuffer( void);
int  __stdcall dx_SetIndexBufferData( int  SetIndex, const void * IndexData, int  IndexNum, int  IndexBufHandle);
int  __stdcall dx_GetMaxPrimitiveCount( void);
int  __stdcall dx_GetMaxVertexIndex( void);
int  __stdcall dx_GetValidShaderVersion( void);
int  __stdcall dx_LoadVertexShader( const char * FileName);
int  __stdcall dx_LoadPixelShader( const char * FileName);
int  __stdcall dx_LoadVertexShaderFromMem( const void * ImageAddress, int  ImageSize);
int  __stdcall dx_LoadPixelShaderFromMem( const void * ImageAddress, int  ImageSize);
int  __stdcall dx_DeleteShader( int  ShaderHandle);
int  __stdcall dx_InitShader( void);
int  __stdcall dx_GetConstIndexToShader( const char * ConstantName, int  ShaderHandle);
int  __stdcall dx_GetConstCountToShader( const char * ConstantName, int  ShaderHandle);
const FLOAT4 *  __stdcall dx_GetConstDefaultParamFToShader( const char * ConstantName, int  ShaderHandle);
int  __stdcall dx_SetVSConstSF( int  ConstantIndex, float  Param);
int  __stdcall dx_SetVSConstF( int  ConstantIndex, FLOAT4  Param);
int  __stdcall dx_SetVSConstFMtx( int  ConstantIndex, MATRIX  Param);
int  __stdcall dx_SetVSConstFMtxT( int  ConstantIndex, MATRIX  Param);
int  __stdcall dx_SetVSConstSI( int  ConstantIndex, int  Param);
int  __stdcall dx_SetVSConstI( int  ConstantIndex, INT4  Param);
int  __stdcall dx_SetVSConstB( int  ConstantIndex, BOOL  Param);
int  __stdcall dx_SetVSConstSFArray( int  ConstantIndex, const float *  ParamArray, int  ParamNum);
int  __stdcall dx_SetVSConstFArray( int  ConstantIndex, const FLOAT4 *  ParamArray, int  ParamNum);
int  __stdcall dx_SetVSConstFMtxArray( int  ConstantIndex, const MATRIX *  ParamArray, int  ParamNum);
int  __stdcall dx_SetVSConstFMtxTArray( int  ConstantIndex, const MATRIX *  ParamArray, int  ParamNum);
int  __stdcall dx_SetVSConstSIArray( int  ConstantIndex, const int *  ParamArray, int  ParamNum);
int  __stdcall dx_SetVSConstIArray( int  ConstantIndex, const INT4 *  ParamArray, int  ParamNum);
int  __stdcall dx_SetVSConstBArray( int  ConstantIndex, const BOOL *  ParamArray, int  ParamNum);
int  __stdcall dx_ResetVSConstF( int  ConstantIndex, int  ParamNum);
int  __stdcall dx_ResetVSConstI( int  ConstantIndex, int  ParamNum);
int  __stdcall dx_ResetVSConstB( int  ConstantIndex, int  ParamNum);
int  __stdcall dx_SetPSConstSF( int  ConstantIndex, float  Param);
int  __stdcall dx_SetPSConstF( int  ConstantIndex, FLOAT4  Param);
int  __stdcall dx_SetPSConstFMtx( int  ConstantIndex, MATRIX  Param);
int  __stdcall dx_SetPSConstFMtxT( int  ConstantIndex, MATRIX  Param);
int  __stdcall dx_SetPSConstSI( int  ConstantIndex, int  Param);
int  __stdcall dx_SetPSConstI( int  ConstantIndex, INT4  Param);
int  __stdcall dx_SetPSConstB( int  ConstantIndex, BOOL  Param);
int  __stdcall dx_SetPSConstSFArray( int  ConstantIndex, const float *  ParamArray, int  ParamNum);
int  __stdcall dx_SetPSConstFArray( int  ConstantIndex, const FLOAT4 *  ParamArray, int  ParamNum);
int  __stdcall dx_SetPSConstFMtxArray( int  ConstantIndex, const MATRIX *  ParamArray, int  ParamNum);
int  __stdcall dx_SetPSConstFMtxTArray( int  ConstantIndex, const MATRIX *  ParamArray, int  ParamNum);
int  __stdcall dx_SetPSConstSIArray( int  ConstantIndex, const int *  ParamArray, int  ParamNum);
int  __stdcall dx_SetPSConstIArray( int  ConstantIndex, const INT4 *  ParamArray, int  ParamNum);
int  __stdcall dx_SetPSConstBArray( int  ConstantIndex, const BOOL *  ParamArray, int  ParamNum);
int  __stdcall dx_ResetPSConstF( int  ConstantIndex, int  ParamNum);
int  __stdcall dx_ResetPSConstI( int  ConstantIndex, int  ParamNum);
int  __stdcall dx_ResetPSConstB( int  ConstantIndex, int  ParamNum);
int  __stdcall dx_SetRenderTargetToShader( int  TargetIndex, int  DrawScreen, int  SurfaceIndex = 0);
int  __stdcall dx_SetUseTextureToShader( int  StageIndex, int  GraphHandle);
int  __stdcall dx_SetUseVertexShader( int  ShaderHandle);
int  __stdcall dx_SetUsePixelShader( int  ShaderHandle);
int  __stdcall dx_CalcPolygonBinormalAndTangentsToShader( VERTEX3DSHADER *  Vertex, int  PolygonNum);
int  __stdcall dx_CalcPolygonIndexedBinormalAndTangentsToShader( VERTEX3DSHADER *  Vertex, int  VertexNum, const unsigned short *  Indices, int  PolygonNum);
int  __stdcall dx_DrawBillboard3DToShader( VECTOR  Pos, float  cx, float  cy, float  Size, float  Angle, int  GrHandle, int  TransFlag, int  TurnFlag = FALSE);
int  __stdcall dx_DrawPolygon2DToShader( const VERTEX2DSHADER *  Vertex, int  PolygonNum);
int  __stdcall dx_DrawPolygon3DToShader( const VERTEX3DSHADER *  Vertex, int  PolygonNum);
int  __stdcall dx_DrawPolygonIndexed2DToShader( const VERTEX2DSHADER *  Vertex, int  VertexNum, const unsigned short *  Indices, int  PolygonNum);
int  __stdcall dx_DrawPolygonIndexed3DToShader( const VERTEX3DSHADER *  Vertex, int  VertexNum, const unsigned short *  Indices, int  PolygonNum);
int  __stdcall dx_DrawPrimitive2DToShader( const VERTEX2DSHADER *  Vertex, int  VertexNum, int  PrimitiveType);
int  __stdcall dx_DrawPrimitive3DToShader( const VERTEX3DSHADER *  Vertex, int  VertexNum, int  PrimitiveType);
int  __stdcall dx_DrawPrimitiveIndexed2DToShader( const VERTEX2DSHADER *  Vertex, int  VertexNum, const unsigned short *  Indices, int  IndexNum, int  PrimitiveType);
int  __stdcall dx_DrawPrimitiveIndexed3DToShader( const VERTEX3DSHADER *  Vertex, int  VertexNum, const unsigned short *  Indices, int  IndexNum, int  PrimitiveType);
int  __stdcall dx_DrawPolygon3DToShader_UseVertexBuffer( int  VertexBufHandle);
int  __stdcall dx_DrawPolygonIndexed3DToShader_UseVertexBuffer( int  VertexBufHandle, int  IndexBufHandle);
int  __stdcall dx_DrawPrimitive3DToShader_UseVertexBuffer( int  VertexBufHandle, int  PrimitiveType);
int  __stdcall dx_DrawPrimitive3DToShader_UseVertexBuffer2( int  VertexBufHandle, int  PrimitiveType, int  StartVertex, int  UseVertexNum);
int  __stdcall dx_DrawPrimitiveIndexed3DToShader_UseVertexBuffer( int  VertexBufHandle, int  IndexBufHandle, int  PrimitiveType);
int  __stdcall dx_DrawPrimitiveIndexed3DToShader_UseVertexBuffer2( int  VertexBufHandle, int  IndexBufHandle, int  PrimitiveType, int  BaseVertex, int  StartVertex, int  UseVertexNum, int  StartIndex, int  UseIndexNum);
int  __stdcall dx_InitShaderConstantBuffer( void);
int  __stdcall dx_CreateShaderConstantBuffer( int  BufferSize);
int  __stdcall dx_DeleteShaderConstantBuffer( int  SConstBufHandle);
void *  __stdcall dx_GetBufferShaderConstantBuffer( int  SConstBufHandle);
int  __stdcall dx_UpdateShaderConstantBuffer( int  SConstBufHandle);
int  __stdcall dx_SetShaderConstantBuffer( int  SConstBufHandle, int  TargetShader, int  Slot);
int  __stdcall dx_PlayMovie( const char * FileName, int  ExRate, int  PlayType);
int  __stdcall dx_OpenMovieToGraph( const char * FileName, int  FullColor = TRUE);
int  __stdcall dx_PlayMovieToGraph( int  GraphHandle, int  PlayType = DX_PLAYTYPE_BACK, int  SysPlay = 0);
int  __stdcall dx_PauseMovieToGraph( int  GraphHandle, int  SysPause = 0);
int  __stdcall dx_AddMovieFrameToGraph( int  GraphHandle, unsigned int  FrameNum);
int  __stdcall dx_SeekMovieToGraph( int  GraphHandle, int  Time);
int  __stdcall dx_SetPlaySpeedRateMovieToGraph( int  GraphHandle, double  SpeedRate);
int  __stdcall dx_GetMovieStateToGraph( int  GraphHandle);
int  __stdcall dx_SetMovieVolumeToGraph( int  Volume, int  GraphHandle);
int  __stdcall dx_ChangeMovieVolumeToGraph( int  Volume, int  GraphHandle);
const BASEIMAGE * __stdcall dx_GetMovieBaseImageToGraph( int GraphHandle , int * ImageUpdateFlag = NULL ) ;
int  __stdcall dx_GetMovieTotalFrameToGraph( int  GraphHandle);
int  __stdcall dx_TellMovieToGraph( int  GraphHandle);
int  __stdcall dx_TellMovieToGraphToFrame( int  GraphHandle);
int  __stdcall dx_SeekMovieToGraphToFrame( int  GraphHandle, int  Frame);
LONGLONG  __stdcall dx_GetOneFrameTimeMovieToGraph( int  GraphHandle);
int  __stdcall dx_GetLastUpdateTimeMovieToGraph( int  GraphHandle);
int  __stdcall dx_SetMovieRightImageAlphaFlag( int  Flag);
int  __stdcall dx_SetMovieColorA8R8G8B8Flag( int  Flag);
int  __stdcall dx_SetMovieUseYUVFormatSurfaceFlag( int  Flag);
int  __stdcall dx_SetCameraNearFar( float  Near, float  Far);
int  __stdcall dx_SetCameraNearFarD( double  Near, double  Far);
int  __stdcall dx_SetCameraPositionAndTarget_UpVecY( VECTOR  Position, VECTOR  Target);
int  __stdcall dx_SetCameraPositionAndTarget_UpVecYD( VECTOR_D  Position, VECTOR_D  Target);
int  __stdcall dx_SetCameraPositionAndTargetAndUpVec( VECTOR  Position, VECTOR  TargetPosition, VECTOR  UpVector);
int  __stdcall dx_SetCameraPositionAndTargetAndUpVecD( VECTOR_D  Position, VECTOR_D  TargetPosition, VECTOR_D  UpVector);
int  __stdcall dx_SetCameraPositionAndAngle( VECTOR  Position, float  VRotate, float  HRotate, float  TRotate);
int  __stdcall dx_SetCameraPositionAndAngleD( VECTOR_D  Position, double  VRotate, double  HRotate, double  TRotate);
int  __stdcall dx_SetCameraViewMatrix( MATRIX  ViewMatrix);
int  __stdcall dx_SetCameraViewMatrixD( MATRIX_D  ViewMatrix);
int  __stdcall dx_SetCameraScreenCenter( float  x, float  y);
int  __stdcall dx_SetCameraScreenCenterD( double  x, double  y);
int  __stdcall dx_SetupCamera_Perspective( float  Fov);
int  __stdcall dx_SetupCamera_PerspectiveD( double  Fov);
int  __stdcall dx_SetupCamera_Ortho( float  Size);
int  __stdcall dx_SetupCamera_OrthoD( double  Size);
int  __stdcall dx_SetupCamera_ProjectionMatrix( MATRIX  ProjectionMatrix);
int  __stdcall dx_SetupCamera_ProjectionMatrixD( MATRIX_D  ProjectionMatrix);
int  __stdcall dx_SetCameraDotAspect( float  DotAspect);
int  __stdcall dx_SetCameraDotAspectD( double  DotAspect);
int  __stdcall dx_CheckCameraViewClip( VECTOR  CheckPos);
int  __stdcall dx_CheckCameraViewClipD( VECTOR_D  CheckPos);
int  __stdcall dx_CheckCameraViewClip_Dir( VECTOR  CheckPos);
int  __stdcall dx_CheckCameraViewClip_DirD( VECTOR_D  CheckPos);
int  __stdcall dx_CheckCameraViewClip_Box( VECTOR  BoxPos1, VECTOR  BoxPos2);
int  __stdcall dx_CheckCameraViewClip_BoxD( VECTOR_D  BoxPos1, VECTOR_D  BoxPos2);
float  __stdcall dx_GetCameraNear( void);
double __stdcall dx_GetCameraNearD( void );
float  __stdcall dx_GetCameraFar( void);
double __stdcall dx_GetCameraFarD( void );
VECTOR  __stdcall dx_GetCameraPosition( void);
VECTOR_D  __stdcall dx_GetCameraPositionD( void);
VECTOR  __stdcall dx_GetCameraTarget( void);
VECTOR_D  __stdcall dx_GetCameraTargetD( void);
VECTOR  __stdcall dx_GetCameraUpVector( void);
VECTOR_D  __stdcall dx_GetCameraUpVectorD( void);
float  __stdcall dx_GetCameraAngleHRotate( void);
double __stdcall dx_GetCameraAngleHRotateD( void );
float  __stdcall dx_GetCameraAngleVRotate( void);
double __stdcall dx_GetCameraAngleVRotateD( void );
float  __stdcall dx_GetCameraAngleTRotate( void);
double __stdcall dx_GetCameraAngleTRotateD( void );
MATRIX  __stdcall dx_GetCameraViewMatrix( void);
MATRIX_D  __stdcall dx_GetCameraViewMatrixD( void);
MATRIX  __stdcall dx_GetCameraBillboardMatrix( void);
MATRIX_D  __stdcall dx_GetCameraBillboardMatrixD( void);
int  __stdcall dx_GetCameraScreenCenter( float *  x, float *  y);
int  __stdcall dx_GetCameraScreenCenterD( double *  x, double *  y);
float  __stdcall dx_GetCameraFov( void);
double __stdcall dx_GetCameraFovD( void );
float  __stdcall dx_GetCameraSize( void);
double __stdcall dx_GetCameraSizeD( void );
MATRIX  __stdcall dx_GetCameraProjectionMatrix( void);
MATRIX_D  __stdcall dx_GetCameraProjectionMatrixD( void);
float  __stdcall dx_GetCameraDotAspect( void);
double __stdcall dx_GetCameraDotAspectD( void );
MATRIX  __stdcall dx_GetCameraViewportMatrix( void);
MATRIX_D  __stdcall dx_GetCameraViewportMatrixD( void);
MATRIX  __stdcall dx_GetCameraAPIViewportMatrix( void);
MATRIX_D  __stdcall dx_GetCameraAPIViewportMatrixD( void);
int  __stdcall dx_SetUseLighting( int  Flag);
int  __stdcall dx_SetMaterialUseVertDifColor( int  UseFlag);
int  __stdcall dx_SetMaterialUseVertSpcColor( int  UseFlag);
int  __stdcall dx_SetMaterialParam( MATERIALPARAM  Material);
int  __stdcall dx_SetUseSpecular( int  UseFlag);
int  __stdcall dx_SetGlobalAmbientLight( COLOR_F  Color);
int  __stdcall dx_ChangeLightTypeDir( VECTOR  Direction);
int  __stdcall dx_ChangeLightTypeSpot( VECTOR  Position, VECTOR  Direction, float  OutAngle, float  InAngle, float  Range, float  Atten0, float  Atten1, float  Atten2);
int  __stdcall dx_ChangeLightTypePoint( VECTOR  Position, float  Range, float  Atten0, float  Atten1, float  Atten2);
int  __stdcall dx_GetLightType( void);
int  __stdcall dx_SetLightEnable( int  EnableFlag);
int  __stdcall dx_GetLightEnable( void);
int  __stdcall dx_SetLightDifColor( COLOR_F  Color);
COLOR_F  __stdcall dx_GetLightDifColor( void);
int  __stdcall dx_SetLightSpcColor( COLOR_F  Color);
COLOR_F  __stdcall dx_GetLightSpcColor( void);
int  __stdcall dx_SetLightAmbColor( COLOR_F  Color);
COLOR_F  __stdcall dx_GetLightAmbColor( void);
int  __stdcall dx_SetLightDirection( VECTOR  Direction);
VECTOR  __stdcall dx_GetLightDirection( void);
int  __stdcall dx_SetLightPosition( VECTOR  Position);
VECTOR  __stdcall dx_GetLightPosition( void);
int  __stdcall dx_SetLightRangeAtten( float  Range, float  Atten0, float  Atten1, float  Atten2);
int  __stdcall dx_GetLightRangeAtten( float *  Range, float *  Atten0, float *  Atten1, float *  Atten2);
int  __stdcall dx_SetLightAngle( float  OutAngle, float  InAngle);
int  __stdcall dx_GetLightAngle( float *  OutAngle, float *  InAngle);
int  __stdcall dx_SetLightUseShadowMap( int  SmSlotIndex, int  UseFlag);
int  __stdcall dx_CreateDirLightHandle( VECTOR  Direction);
int  __stdcall dx_CreateSpotLightHandle( VECTOR  Position, VECTOR  Direction, float  OutAngle, float  InAngle, float  Range, float  Atten0, float  Atten1, float  Atten2);
int  __stdcall dx_CreatePointLightHandle( VECTOR  Position, float  Range, float  Atten0, float  Atten1, float  Atten2);
int  __stdcall dx_DeleteLightHandle( int  LHandle);
int  __stdcall dx_DeleteLightHandleAll( void);
int  __stdcall dx_SetLightTypeHandle( int  LHandle, int  LightType);
int  __stdcall dx_SetLightEnableHandle( int  LHandle, int  EnableFlag);
int  __stdcall dx_SetLightDifColorHandle( int  LHandle, COLOR_F  Color);
int  __stdcall dx_SetLightSpcColorHandle( int  LHandle, COLOR_F  Color);
int  __stdcall dx_SetLightAmbColorHandle( int  LHandle, COLOR_F  Color);
int  __stdcall dx_SetLightDirectionHandle( int  LHandle, VECTOR  Direction);
int  __stdcall dx_SetLightPositionHandle( int  LHandle, VECTOR  Position);
int  __stdcall dx_SetLightRangeAttenHandle( int  LHandle, float  Range, float  Atten0, float  Atten1, float  Atten2);
int  __stdcall dx_SetLightAngleHandle( int  LHandle, float  OutAngle, float  InAngle);
int  __stdcall dx_SetLightUseShadowMapHandle( int  LHandle, int  SmSlotIndex, int  UseFlag);
int  __stdcall dx_GetLightTypeHandle( int  LHandle);
int  __stdcall dx_GetLightEnableHandle( int  LHandle);
COLOR_F  __stdcall dx_GetLightDifColorHandle( int  LHandle);
COLOR_F  __stdcall dx_GetLightSpcColorHandle( int  LHandle);
COLOR_F  __stdcall dx_GetLightAmbColorHandle( int  LHandle);
VECTOR  __stdcall dx_GetLightDirectionHandle( int  LHandle);
VECTOR  __stdcall dx_GetLightPositionHandle( int  LHandle);
int  __stdcall dx_GetLightRangeAttenHandle( int  LHandle, float *  Range, float *  Atten0, float *  Atten1, float *  Atten2);
int  __stdcall dx_GetLightAngleHandle( int  LHandle, float *  OutAngle, float *  InAngle);
int  __stdcall dx_GetEnableLightHandleNum( void);
int  __stdcall dx_GetEnableLightHandle( int  Index);
int  __stdcall dx_GetTexFormatIndex( const IMAGEFORMATDESC *  Format);
int  __stdcall dx_CreateMaskScreen( void);
int  __stdcall dx_DeleteMaskScreen( void);
int  __stdcall dx_DrawMaskToDirectData( int  x, int  y, int  Width, int  Height, const void * MaskData, int  TransMode);
int  __stdcall dx_DrawFillMaskToDirectData( int  x1, int  y1, int  x2, int  y2, int  Width, int  Height, const void * MaskData);
int  __stdcall dx_SetUseMaskScreenFlag( int  ValidFlag);
int  __stdcall dx_GetUseMaskScreenFlag( void);
int  __stdcall dx_FillMaskScreen( int  Flag);
int  __stdcall dx_SetMaskScreenGraph( int  GraphHandle);
int  __stdcall dx_SetMaskScreenGraphUseChannel( int  UseChannel);
int  __stdcall dx_InitMask( void);
int  __stdcall dx_MakeMask( int  Width, int  Height);
int  __stdcall dx_GetMaskSize( int *  WidthBuf, int *  HeightBuf, int  MaskHandle);
int  __stdcall dx_SetDataToMask( int  Width, int  Height, const void * MaskData, int  MaskHandle);
int  __stdcall dx_DeleteMask( int  MaskHandle);
int __stdcall dx_GraphImageBltToMask( const BASEIMAGE * BaseImage , int ImageX , int ImageY , int MaskHandle ) ;
int  __stdcall dx_LoadMask( const char * FileName);
int  __stdcall dx_LoadDivMask( const char * FileName, int  AllNum, int  XNum, int  YNum, int  XSize, int  YSize, int *  HandleBuf);
int  __stdcall dx_CreateMaskFromMem( const void * FileImage, int  FileImageSize);
int  __stdcall dx_CreateDivMaskFromMem( const void * FileImage, int  FileImageSize, int  AllNum, int  XNum, int  YNum, int  XSize, int  YSize, int *  HandleBuf);
int  __stdcall dx_DrawMask( int  x, int  y, int  MaskHandle, int  TransMode);
int  __stdcall dx_DrawStringMask( int  x, int  y, int  Flag, const char * String);
int  __stdcall dx_DrawStringMaskToHandle( int  x, int  y, int  Flag, int  FontHandle, const char * String);
int  __stdcall dx_DrawFillMask( int  x1, int  y1, int  x2, int  y2, int  MaskHandle);
int  __stdcall dx_SetMaskReverseEffectFlag( int  ReverseFlag);
int  __stdcall dx_GetMaskScreenData( int  x1, int  y1, int  x2, int  y2, int  MaskHandle);
int  __stdcall dx_GetMaskUseFlag( void);
int  __stdcall dx_EnumFontName( TCHAR *  NameBuffer, int  NameBufferNum, int  JapanOnlyFlag = TRUE);
int  __stdcall dx_EnumFontNameEx( TCHAR *  NameBuffer, int  NameBufferNum, int  CharSet = -1);
int  __stdcall dx_EnumFontNameEx2( TCHAR *  NameBuffer, int  NameBufferNum, const char * EnumFontName, int  CharSet = -1);
int  __stdcall dx_CheckFontName( const char * FontName, int  CharSet = -1);
int  __stdcall dx_InitFontToHandle( void);
int  __stdcall dx_CreateFontToHandle( const char * FontName, int  Size, int  Thick, int  FontType = -1, int  CharSet = -1, int  EdgeSize = -1, int  Italic = FALSE, int  Handle = -1);
int  __stdcall dx_LoadFontDataToHandle( const char * FileName, int  EdgeSize = 0);
int  __stdcall dx_LoadFontDataFromMemToHandle( const void * FontDataImage, int  FontDataImageSize, int  EdgeSize = 0);
int  __stdcall dx_SetFontSpaceToHandle( int  Pixel, int  FontHandle);
int  __stdcall dx_SetFontLineSpaceToHandle( int  Pixel, int  FontHandle);
int  __stdcall dx_SetFontCharCodeFormatToHandle( int  CharCodeFormat, int  FontHandle);
int  __stdcall dx_DeleteFontToHandle( int  FontHandle);
int  __stdcall dx_SetFontLostFlag( int  FontHandle, int *  LostFlag);
int  __stdcall dx_AddFontImageToHandle( int  FontHandle, const char * Char, int  GrHandle, int  DrawX, int  DrawY, int  AddX);
int  __stdcall dx_SubFontImageToHandle( int  FontHandle, const char * Char);
int  __stdcall dx_ChangeFont( const char * FontName, int  CharSet = -1);
int  __stdcall dx_ChangeFontType( int  FontType);
int  __stdcall dx_SetFontSize( int  FontSize);
int  __stdcall dx_GetFontSize( void);
int  __stdcall dx_SetFontThickness( int  ThickPal);
int  __stdcall dx_SetFontSpace( int  Pixel);
int  __stdcall dx_GetFontSpace( void);
int  __stdcall dx_SetFontLineSpace( int  Pixel);
int  __stdcall dx_GetFontLineSpace( void);
int  __stdcall dx_SetFontCharCodeFormat( int  CharCodeFormat);
int  __stdcall dx_SetDefaultFontState( const char * FontName, int  Size, int  Thick, int  FontType = -1, int  CharSet = -1, int  EdgeSize = -1, int  Italic = FALSE);
int  __stdcall dx_GetDefaultFontHandle( void);
int  __stdcall dx_GetFontMaxWidth( void);
int  __stdcall dx_GetDrawStringWidth( const char * String, int  StrLen, int  VerticalFlag = FALSE);
int  __stdcall dx_GetDrawExtendStringWidth( double  ExRateX, const char * String, int  StrLen, int  VerticalFlag = FALSE);
int  __stdcall dx_GetDrawStringSize( int *  SizeX, int *  SizeY, int *  LineCount, const char * String, int  StrLen, int  VerticalFlag = FALSE);
int  __stdcall dx_GetDrawExtendStringSize( int *  SizeX, int *  SizeY, int *  LineCount, double  ExRateX, double  ExRateY, const char * String, int  StrLen, int  VerticalFlag = FALSE);
int  __stdcall dx_GetFontMaxWidthToHandle( int  FontHandle);
int  __stdcall dx_GetFontSizeToHandle( int  FontHandle);
int  __stdcall dx_GetFontSpaceToHandle( int  FontHandle);
int  __stdcall dx_GetFontLineSpaceToHandle( int  FontHandle);
int  __stdcall dx_GetFontCharInfo( int  FontHandle, const char * Char, int *  DrawX, int *  DrawY, int *  NextCharX, int *  SizeX, int *  SizeY);
int  __stdcall dx_GetDrawStringWidthToHandle( const char * String, int  StrLen, int  FontHandle, int  VerticalFlag = FALSE);
int  __stdcall dx_GetDrawExtendStringWidthToHandle( double  ExRateX, const char * String, int  StrLen, int  FontHandle, int  VerticalFlag = FALSE);
int  __stdcall dx_GetDrawStringSizeToHandle( int *  SizeX, int *  SizeY, int *  LineCount, const char * String, int  StrLen, int  FontHandle, int  VerticalFlag = FALSE);
int  __stdcall dx_GetDrawExtendStringSizeToHandle( int *  SizeX, int *  SizeY, int *  LineCount, double  ExRateX, double  ExRateY, const char * String, int  StrLen, int  FontHandle, int  VerticalFlag = FALSE);
int  __stdcall dx_GetFontStateToHandle( TCHAR *  FontName, int *  Size, int *  Thick, int  FontHandle, int *  FontType, int *  CharSet, int *  EdgeSize, int *  Italic);
int  __stdcall dx_CheckFontCacheToTextureFlag( int  FontHandle);
int  __stdcall dx_CheckFontChacheToTextureFlag( int  FontHandle);
int  __stdcall dx_CheckFontHandleValid( int  FontHandle);
int  __stdcall dx_SetFontCacheToTextureFlag( int  Flag);
int  __stdcall dx_GetFontCacheToTextureFlag( void);
int  __stdcall dx_SetFontChacheToTextureFlag( int  Flag);
int  __stdcall dx_GetFontChacheToTextureFlag( void);
int  __stdcall dx_SetFontCacheTextureColorBitDepth( int  ColorBitDepth);
int  __stdcall dx_GetFontCacheTextureColorBitDepth( void);
int  __stdcall dx_SetFontCacheCharNum( int  CharNum);
int  __stdcall dx_GetFontCacheCharNum( void);
int  __stdcall dx_SetFontCacheUsePremulAlphaFlag( int  Flag);
int  __stdcall dx_GetFontCacheUsePremulAlphaFlag( void);
int __stdcall dx_FontCacheStringDrawToHandle( int x , int y , const TCHAR * StrData , unsigned int Color , unsigned int EdgeColor , BASEIMAGE * DestImage , const RECT * ClipRect , int FontHandle , int VerticalFlag = FALSE , SIZE * DrawSizeP = NULL ) ;
int __stdcall dx_FontBaseImageBlt( int x , int y , const TCHAR * StrData , BASEIMAGE * DestImage , BASEIMAGE * DestEdgeImage , int VerticalFlag = FALSE ) ;
int __stdcall dx_FontBaseImageBltToHandle( int x , int y , const TCHAR * StrData , BASEIMAGE * DestImage , BASEIMAGE * DestEdgeImage , int FontHandle , int VerticalFlag = FALSE ) ;
int  __stdcall dx_MultiByteCharCheck( const char * Buf, int  CharSet);
int  __stdcall dx_DrawString( int  x, int  y, const char * String, unsigned int  Color, unsigned int  EdgeColor = 0);
int  __stdcall dx_DrawVString( int  x, int  y, const char * String, unsigned int  Color, unsigned int  EdgeColor = 0);
int  __stdcall dx_DrawExtendString( int  x, int  y, double  ExRateX, double  ExRateY, const char * String, unsigned int  Color, unsigned int  EdgeColor = 0);
int  __stdcall dx_DrawExtendVString( int  x, int  y, double  ExRateX, double  ExRateY, const char * String, unsigned int  Color, unsigned int  EdgeColor = 0);
int  __stdcall dx_DrawRotaString( int  x, int  y, double  ExRateX, double  ExRateY, double  RotCenterX, double  RotCenterY, double  RotAngle, unsigned int  Color, unsigned int  EdgeColor = 0, int  VerticalFlag = FALSE, const char * String = NULL);
int  __stdcall dx_DrawStringF( float  x, float  y, const char * String, unsigned int  Color, unsigned int  EdgeColor = 0);
int  __stdcall dx_DrawVStringF( float  x, float  y, const char * String, unsigned int  Color, unsigned int  EdgeColor = 0);
int  __stdcall dx_DrawExtendStringF( float  x, float  y, double  ExRateX, double  ExRateY, const char * String, unsigned int  Color, unsigned int  EdgeColor = 0);
int  __stdcall dx_DrawExtendVStringF( float  x, float  y, double  ExRateX, double  ExRateY, const char * String, unsigned int  Color, unsigned int  EdgeColor = 0);
int  __stdcall dx_DrawRotaStringF( float  x, float  y, double  ExRateX, double  ExRateY, double  RotCenterX, double  RotCenterY, double  RotAngle, unsigned int  Color, unsigned int  EdgeColor = 0, int  VerticalFlag = FALSE, const char * String = NULL);
int  __stdcall dx_DrawNumberToI( int  x, int  y, int  Num, int  RisesNum, unsigned int  Color, unsigned int  EdgeColor = 0);
int  __stdcall dx_DrawNumberToF( int  x, int  y, double  Num, int  Length, unsigned int  Color, unsigned int  EdgeColor = 0);
int  __stdcall dx_DrawNumberPlusToI( int  x, int  y, const char * NoteString, int  Num, int  RisesNum, unsigned int  Color, unsigned int  EdgeColor = 0);
int  __stdcall dx_DrawNumberPlusToF( int  x, int  y, const char * NoteString, double  Num, int  Length, unsigned int  Color, unsigned int  EdgeColor = 0);
int  __stdcall dx_DrawStringToZBuffer( int  x, int  y, const char * String, int  WriteZMode);
int  __stdcall dx_DrawVStringToZBuffer( int  x, int  y, const char * String, int  WriteZMode);
int  __stdcall dx_DrawExtendStringToZBuffer( int  x, int  y, double  ExRateX, double  ExRateY, const char * String, int  WriteZMode);
int  __stdcall dx_DrawExtendVStringToZBuffer( int  x, int  y, double  ExRateX, double  ExRateY, const char * String, int  WriteZMode);
int  __stdcall dx_DrawStringToHandle( int  x, int  y, const char * String, unsigned int  Color, int  FontHandle, unsigned int  EdgeColor = 0, int  VerticalFlag = FALSE);
int  __stdcall dx_DrawVStringToHandle( int  x, int  y, const char * String, unsigned int  Color, int  FontHandle, unsigned int  EdgeColor = 0);
int  __stdcall dx_DrawExtendStringToHandle( int  x, int  y, double  ExRateX, double  ExRateY, const char * String, unsigned int  Color, int  FontHandle, unsigned int  EdgeColor = 0, int  VerticalFlag = FALSE);
int  __stdcall dx_DrawExtendVStringToHandle( int  x, int  y, double  ExRateX, double  ExRateY, const char * String, unsigned int  Color, int  FontHandle, unsigned int  EdgeColor = 0);
int  __stdcall dx_DrawRotaStringToHandle( int  x, int  y, double  ExRateX, double  ExRateY, double  RotCenterX, double  RotCenterY, double  RotAngle, unsigned int  Color, int  FontHandle, unsigned int  EdgeColor = 0, int  VerticalFlag = FALSE, const char * String = NULL);
int  __stdcall dx_DrawStringFToHandle( float  x, float  y, const char * String, unsigned int  Color, int  FontHandle, unsigned int  EdgeColor = 0, int  VerticalFlag = FALSE);
int  __stdcall dx_DrawVStringFToHandle( float  x, float  y, const char * String, unsigned int  Color, int  FontHandle, unsigned int  EdgeColor = 0);
int  __stdcall dx_DrawExtendStringFToHandle( float  x, float  y, double  ExRateX, double  ExRateY, const char * String, unsigned int  Color, int  FontHandle, unsigned int  EdgeColor = 0, int  VerticalFlag = FALSE);
int  __stdcall dx_DrawExtendVStringFToHandle( float  x, float  y, double  ExRateX, double  ExRateY, const char * String, unsigned int  Color, int  FontHandle, unsigned int  EdgeColor = 0);
int  __stdcall dx_DrawRotaStringFToHandle( float  x, float  y, double  ExRateX, double  ExRateY, double  RotCenterX, double  RotCenterY, double  RotAngle, unsigned int  Color, int  FontHandle, unsigned int  EdgeColor = 0, int  VerticalFlag = FALSE, const char * String = NULL);
int  __stdcall dx_DrawNumberToIToHandle( int  x, int  y, int  Num, int  RisesNum, unsigned int  Color, int  FontHandle, unsigned int  EdgeColor = 0);
int  __stdcall dx_DrawNumberToFToHandle( int  x, int  y, double  Num, int  Length, unsigned int  Color, int  FontHandle, unsigned int  EdgeColor = 0);
int  __stdcall dx_DrawNumberPlusToIToHandle( int  x, int  y, const char * NoteString, int  Num, int  RisesNum, unsigned int  Color, int  FontHandle, unsigned int  EdgeColor = 0);
int  __stdcall dx_DrawNumberPlusToFToHandle( int  x, int  y, const char * NoteString, double  Num, int  Length, unsigned int  Color, int  FontHandle, unsigned int  EdgeColor = 0);
int  __stdcall dx_DrawStringToHandleToZBuffer( int  x, int  y, const char * String, int  FontHandle, int  WriteZMode, int  VerticalFlag = FALSE);
int  __stdcall dx_DrawVStringToHandleToZBuffer( int  x, int  y, const char * String, int  FontHandle, int  WriteZMode);
int  __stdcall dx_DrawExtendStringToHandleToZBuffer( int  x, int  y, double  ExRateX, double  ExRateY, const char * String, int  FontHandle, int  WriteZMode, int  VerticalFlag = FALSE);
int  __stdcall dx_DrawExtendVStringToHandleToZBuffer( int  x, int  y, double  ExRateX, double  ExRateY, const char * String, int  FontHandle, int  WriteZMode);
int  __stdcall dx_ConvertMatrixFtoD( MATRIX_D *  Out, const MATRIX *  In);
int  __stdcall dx_ConvertMatrixDtoF( MATRIX *  Out, const MATRIX_D *  In);
int  __stdcall dx_CreateIdentityMatrix( MATRIX *  Out);
int  __stdcall dx_CreateIdentityMatrixD( MATRIX_D *  Out);
int  __stdcall dx_CreateLookAtMatrix( MATRIX *  Out, const VECTOR *  Eye, const VECTOR *  At, const VECTOR *  Up);
int  __stdcall dx_CreateLookAtMatrixD( MATRIX_D *  Out, const VECTOR_D *  Eye, const VECTOR_D *  At, const VECTOR_D *  Up);
int  __stdcall dx_CreateLookAtMatrix2( MATRIX *  Out, const VECTOR *  Eye, double  XZAngle, double  Oira);
int  __stdcall dx_CreateLookAtMatrix2D( MATRIX_D *  Out, const VECTOR_D *  Eye, double  XZAngle, double  Oira);
int  __stdcall dx_CreateLookAtMatrixRH( MATRIX *  Out, const VECTOR *  Eye, const VECTOR *  At, const VECTOR *  Up);
int  __stdcall dx_CreateLookAtMatrixRHD( MATRIX_D *  Out, const VECTOR_D *  Eye, const VECTOR_D *  At, const VECTOR_D *  Up);
int  __stdcall dx_CreateMultiplyMatrix( MATRIX *  Out, const MATRIX *  In1, const MATRIX *  In2);
int  __stdcall dx_CreateMultiplyMatrixD( MATRIX_D *  Out, const MATRIX_D *  In1, const MATRIX_D *  In2);
int  __stdcall dx_CreatePerspectiveFovMatrix( MATRIX *  Out, float  fov, float  zn, float  zf, float  aspect = -1.0f);
int  __stdcall dx_CreatePerspectiveFovMatrixD( MATRIX_D *  Out, double  fov, double  zn, double  zf, double  aspect = -1.0f);
int  __stdcall dx_CreatePerspectiveFovMatrixRH( MATRIX *  Out, float  fov, float  zn, float  zf, float  aspect = -1.0f);
int  __stdcall dx_CreatePerspectiveFovMatrixRHD( MATRIX_D *  Out, double  fov, double  zn, double  zf, double  aspect = -1.0f);
int  __stdcall dx_CreateOrthoMatrix( MATRIX *  Out, float  size, float  zn, float  zf, float  aspect = -1.0f);
int  __stdcall dx_CreateOrthoMatrixD( MATRIX_D *  Out, double  size, double  zn, double  zf, double  aspect = -1.0f);
int  __stdcall dx_CreateOrthoMatrixRH( MATRIX *  Out, float  size, float  zn, float  zf, float  aspect = -1.0f);
int  __stdcall dx_CreateOrthoMatrixRHD( MATRIX_D *  Out, double  size, double  zn, double  zf, double  aspect = -1.0f);
int  __stdcall dx_CreateScalingMatrix( MATRIX *  Out, float  sx, float  sy, float  sz);
int  __stdcall dx_CreateScalingMatrixD( MATRIX_D *  Out, double  sx, double  sy, double  sz);
int  __stdcall dx_CreateRotationXMatrix( MATRIX *  Out, float  Angle);
int  __stdcall dx_CreateRotationXMatrixD( MATRIX_D *  Out, double  Angle);
int  __stdcall dx_CreateRotationYMatrix( MATRIX *  Out, float  Angle);
int  __stdcall dx_CreateRotationYMatrixD( MATRIX_D *  Out, double  Angle);
int  __stdcall dx_CreateRotationZMatrix( MATRIX *  Out, float  Angle);
int  __stdcall dx_CreateRotationZMatrixD( MATRIX_D *  Out, double  Angle);
int  __stdcall dx_CreateTranslationMatrix( MATRIX *  Out, float  x, float  y, float  z);
int  __stdcall dx_CreateTranslationMatrixD( MATRIX_D *  Out, double  x, double  y, double  z);
int  __stdcall dx_CreateTransposeMatrix( MATRIX *  Out, const MATRIX *  In);
int  __stdcall dx_CreateTransposeMatrixD( MATRIX_D *  Out, const MATRIX_D *  In);
int  __stdcall dx_CreateInverseMatrix( MATRIX *  Out, const MATRIX *  In);
int  __stdcall dx_CreateInverseMatrixD( MATRIX_D *  Out, const MATRIX_D *  In);
int  __stdcall dx_CreateViewportMatrix( MATRIX *  Out, float  CenterX, float  CenterY, float  Width, float  Height);
int  __stdcall dx_CreateViewportMatrixD( MATRIX_D *  Out, double  CenterX, double  CenterY, double  Width, double  Height);
int  __stdcall dx_CreateRotationXYZMatrix( MATRIX *  Out, float  XRot, float  YRot, float  ZRot);
int  __stdcall dx_CreateRotationXYZMatrixD( MATRIX_D *  Out, double  XRot, double  YRot, double  ZRot);
int  __stdcall dx_CreateRotationXZYMatrix( MATRIX *  Out, float  XRot, float  YRot, float  ZRot);
int  __stdcall dx_CreateRotationXZYMatrixD( MATRIX_D *  Out, double  XRot, double  YRot, double  ZRot);
int  __stdcall dx_CreateRotationYXZMatrix( MATRIX *  Out, float  XRot, float  YRot, float  ZRot);
int  __stdcall dx_CreateRotationYXZMatrixD( MATRIX_D *  Out, double  XRot, double  YRot, double  ZRot);
int  __stdcall dx_CreateRotationYZXMatrix( MATRIX *  Out, float  XRot, float  YRot, float  ZRot);
int  __stdcall dx_CreateRotationYZXMatrixD( MATRIX_D *  Out, double  XRot, double  YRot, double  ZRot);
int  __stdcall dx_CreateRotationZXYMatrix( MATRIX *  Out, float  XRot, float  YRot, float  ZRot);
int  __stdcall dx_CreateRotationZXYMatrixD( MATRIX_D *  Out, double  XRot, double  YRot, double  ZRot);
int  __stdcall dx_CreateRotationZYXMatrix( MATRIX *  Out, float  XRot, float  YRot, float  ZRot);
int  __stdcall dx_CreateRotationZYXMatrixD( MATRIX_D *  Out, double  XRot, double  YRot, double  ZRot);
int  __stdcall dx_GetMatrixXYZRotation( const MATRIX *  In, float *  OutXRot, float *  OutYRot, float *  OutZRot);
int  __stdcall dx_GetMatrixXYZRotationD( const MATRIX_D *  In, double *  OutXRot, double *  OutYRot, double *  OutZRot);
int  __stdcall dx_GetMatrixXZYRotation( const MATRIX *  In, float *  OutXRot, float *  OutYRot, float *  OutZRot);
int  __stdcall dx_GetMatrixXZYRotationD( const MATRIX_D *  In, double *  OutXRot, double *  OutYRot, double *  OutZRot);
int  __stdcall dx_GetMatrixYXZRotation( const MATRIX *  In, float *  OutXRot, float *  OutYRot, float *  OutZRot);
int  __stdcall dx_GetMatrixYXZRotationD( const MATRIX_D *  In, double *  OutXRot, double *  OutYRot, double *  OutZRot);
int  __stdcall dx_GetMatrixYZXRotation( const MATRIX *  In, float *  OutXRot, float *  OutYRot, float *  OutZRot);
int  __stdcall dx_GetMatrixYZXRotationD( const MATRIX_D *  In, double *  OutXRot, double *  OutYRot, double *  OutZRot);
int  __stdcall dx_GetMatrixZXYRotation( const MATRIX *  In, float *  OutXRot, float *  OutYRot, float *  OutZRot);
int  __stdcall dx_GetMatrixZXYRotationD( const MATRIX_D *  In, double *  OutXRot, double *  OutYRot, double *  OutZRot);
int  __stdcall dx_GetMatrixZYXRotation( const MATRIX *  In, float *  OutXRot, float *  OutYRot, float *  OutZRot);
int  __stdcall dx_GetMatrixZYXRotationD( const MATRIX_D *  In, double *  OutXRot, double *  OutYRot, double *  OutZRot);
int  __stdcall dx_VectorConvertFtoD( VECTOR_D *  Out, const VECTOR *  In);
int  __stdcall dx_VectorConvertDtoF( VECTOR *  Out, const VECTOR_D *  In);
int  __stdcall dx_VectorNormalize( VECTOR *  Out, const VECTOR *  In);
int  __stdcall dx_VectorNormalizeD( VECTOR_D *  Out, const VECTOR_D *  In);
int  __stdcall dx_VectorScale( VECTOR *  Out, const VECTOR *  In, float  Scale);
int  __stdcall dx_VectorScaleD( VECTOR_D *  Out, const VECTOR_D *  In, double  Scale);
int  __stdcall dx_VectorMultiply( VECTOR *  Out, const VECTOR *  In1, const VECTOR *  In2);
int  __stdcall dx_VectorMultiplyD( VECTOR_D *  Out, const VECTOR_D *  In1, const VECTOR_D *  In2);
int  __stdcall dx_VectorSub( VECTOR *  Out, const VECTOR *  In1, const VECTOR *  In2);
int  __stdcall dx_VectorSubD( VECTOR_D *  Out, const VECTOR_D *  In1, const VECTOR_D *  In2);
int  __stdcall dx_VectorAdd( VECTOR *  Out, const VECTOR *  In1, const VECTOR *  In2);
int  __stdcall dx_VectorAddD( VECTOR_D *  Out, const VECTOR_D *  In1, const VECTOR_D *  In2);
int  __stdcall dx_VectorOuterProduct( VECTOR *  Out, const VECTOR *  In1, const VECTOR *  In2);
int  __stdcall dx_VectorOuterProductD( VECTOR_D *  Out, const VECTOR_D *  In1, const VECTOR_D *  In2);
float  __stdcall dx_VectorInnerProduct( const VECTOR *  In1, const VECTOR *  In2);
double __stdcall dx_VectorInnerProductD( const VECTOR_D * In1 , const VECTOR_D * In2 ) ;
int  __stdcall dx_VectorRotationX( VECTOR *  Out, const VECTOR *  In, double  Angle);
int  __stdcall dx_VectorRotationXD( VECTOR_D *  Out, const VECTOR_D *  In, double  Angle);
int  __stdcall dx_VectorRotationY( VECTOR *  Out, const VECTOR *  In, double  Angle);
int  __stdcall dx_VectorRotationYD( VECTOR_D *  Out, const VECTOR_D *  In, double  Angle);
int  __stdcall dx_VectorRotationZ( VECTOR *  Out, const VECTOR *  In, double  Angle);
int  __stdcall dx_VectorRotationZD( VECTOR_D *  Out, const VECTOR_D *  In, double  Angle);
int  __stdcall dx_VectorTransform( VECTOR *  Out, const VECTOR *  InVec, const MATRIX *  InMatrix);
int  __stdcall dx_VectorTransformD( VECTOR_D *  Out, const VECTOR_D *  InVec, const MATRIX_D *  InMatrix);
int  __stdcall dx_VectorTransformSR( VECTOR *  Out, const VECTOR *  InVec, const MATRIX *  InMatrix);
int  __stdcall dx_VectorTransformSRD( VECTOR_D *  Out, const VECTOR_D *  InVec, const MATRIX_D *  InMatrix);
int  __stdcall dx_VectorTransform4( VECTOR *  Out, float *  V4Out, const VECTOR *  InVec, const float *  V4In, const MATRIX *  InMatrix);
int  __stdcall dx_VectorTransform4D( VECTOR_D *  Out, double *  V4Out, const VECTOR_D *  InVec, const double *  V4In, const MATRIX_D *  InMatrix);
int  __stdcall dx_Segment_Segment_Analyse( const VECTOR *  SegmentAPos1, const VECTOR *  SegmentAPos2, const VECTOR *  SegmentBPos1, const VECTOR *  SegmentBPos2, SEGMENT_SEGMENT_RESULT *  Result);
int  __stdcall dx_Segment_Segment_AnalyseD( const VECTOR_D *  SegmentAPos1, const VECTOR_D *  SegmentAPos2, const VECTOR_D *  SegmentBPos1, const VECTOR_D *  SegmentBPos2, SEGMENT_SEGMENT_RESULT_D *  Result);
int  __stdcall dx_Segment_Point_Analyse( const VECTOR *  SegmentPos1, const VECTOR *  SegmentPos2, const VECTOR *  PointPos, SEGMENT_POINT_RESULT *  Result);
int  __stdcall dx_Segment_Point_AnalyseD( const VECTOR_D *  SegmentPos1, const VECTOR_D *  SegmentPos2, const VECTOR_D *  PointPos, SEGMENT_POINT_RESULT_D *  Result);
int  __stdcall dx_Segment_Triangle_Analyse( const VECTOR *  SegmentPos1, const VECTOR *  SegmentPos2, const VECTOR *  TrianglePos1, const VECTOR *  TrianglePos2, const VECTOR *  TrianglePos3, SEGMENT_TRIANGLE_RESULT *  Result);
int  __stdcall dx_Segment_Triangle_AnalyseD( const VECTOR_D *  SegmentPos1, const VECTOR_D *  SegmentPos2, const VECTOR_D *  TrianglePos1, const VECTOR_D *  TrianglePos2, const VECTOR_D *  TrianglePos3, SEGMENT_TRIANGLE_RESULT_D *  Result);
int  __stdcall dx_Triangle_Point_Analyse( const VECTOR *  TrianglePos1, const VECTOR *  TrianglePos2, const VECTOR *  TrianglePos3, const VECTOR *  PointPos, TRIANGLE_POINT_RESULT *  Result);
int  __stdcall dx_Triangle_Point_AnalyseD( const VECTOR_D *  TrianglePos1, const VECTOR_D *  TrianglePos2, const VECTOR_D *  TrianglePos3, const VECTOR_D *  PointPos, TRIANGLE_POINT_RESULT_D *  Result);
int  __stdcall dx_Plane_Point_Analyse( const VECTOR *  PlanePos, const VECTOR *  PlaneNormal, const VECTOR *  PointPos, PLANE_POINT_RESULT *  Result);
int  __stdcall dx_Plane_Point_AnalyseD( const VECTOR_D *  PlanePos, const VECTOR_D *  PlaneNormal, const VECTOR_D *  PointPos, PLANE_POINT_RESULT_D *  Result);
void  __stdcall dx_TriangleBarycenter( VECTOR  TrianglePos1, VECTOR  TrianglePos2, VECTOR  TrianglePos3, VECTOR  Position, float *  TrianglePos1Weight, float *  TrianglePos2Weight, float *  TrianglePos3Weight);
void  __stdcall dx_TriangleBarycenterD( VECTOR_D  TrianglePos1, VECTOR_D  TrianglePos2, VECTOR_D  TrianglePos3, VECTOR_D  Position, double *  TrianglePos1Weight, double *  TrianglePos2Weight, double *  TrianglePos3Weight);
float  __stdcall dx_Segment_Segment_MinLength( VECTOR  SegmentAPos1, VECTOR  SegmentAPos2, VECTOR  SegmentBPos1, VECTOR  SegmentBPos2);
double __stdcall dx_Segment_Segment_MinLengthD( VECTOR_D SegmentAPos1 , VECTOR_D SegmentAPos2 , VECTOR_D SegmentBPos1 , VECTOR_D SegmentBPos2 ) ;
float  __stdcall dx_Segment_Segment_MinLength_Square( VECTOR  SegmentAPos1, VECTOR  SegmentAPos2, VECTOR  SegmentBPos1, VECTOR  SegmentBPos2);
double __stdcall dx_Segment_Segment_MinLength_SquareD( VECTOR_D SegmentAPos1 , VECTOR_D SegmentAPos2 , VECTOR_D SegmentBPos1 , VECTOR_D SegmentBPos2 ) ;
float  __stdcall dx_Segment_Triangle_MinLength( VECTOR  SegmentPos1, VECTOR  SegmentPos2, VECTOR  TrianglePos1, VECTOR  TrianglePos2, VECTOR  TrianglePos3);
double __stdcall dx_Segment_Triangle_MinLengthD( VECTOR_D SegmentPos1 , VECTOR_D SegmentPos2 , VECTOR_D TrianglePos1 , VECTOR_D TrianglePos2 , VECTOR_D TrianglePos3 ) ;
float  __stdcall dx_Segment_Triangle_MinLength_Square( VECTOR  SegmentPos1, VECTOR  SegmentPos2, VECTOR  TrianglePos1, VECTOR  TrianglePos2, VECTOR  TrianglePos3);
double __stdcall dx_Segment_Triangle_MinLength_SquareD( VECTOR_D SegmentPos1 , VECTOR_D SegmentPos2 , VECTOR_D TrianglePos1 , VECTOR_D TrianglePos2 , VECTOR_D TrianglePos3 ) ;
float  __stdcall dx_Segment_Point_MinLength( VECTOR  SegmentPos1, VECTOR  SegmentPos2, VECTOR  PointPos);
double __stdcall dx_Segment_Point_MinLengthD( VECTOR_D SegmentPos1 , VECTOR_D SegmentPos2 , VECTOR_D PointPos ) ;
float  __stdcall dx_Segment_Point_MinLength_Square( VECTOR  SegmentPos1, VECTOR  SegmentPos2, VECTOR  PointPos);
double __stdcall dx_Segment_Point_MinLength_SquareD( VECTOR_D SegmentPos1 , VECTOR_D SegmentPos2 , VECTOR_D PointPos ) ;
float  __stdcall dx_Triangle_Point_MinLength( VECTOR  TrianglePos1, VECTOR  TrianglePos2, VECTOR  TrianglePos3, VECTOR  PointPos);
double __stdcall dx_Triangle_Point_MinLengthD( VECTOR_D TrianglePos1 , VECTOR_D TrianglePos2 , VECTOR_D TrianglePos3 , VECTOR_D PointPos ) ;
float  __stdcall dx_Triangle_Point_MinLength_Square( VECTOR  TrianglePos1, VECTOR  TrianglePos2, VECTOR  TrianglePos3, VECTOR  PointPos);
double __stdcall dx_Triangle_Point_MinLength_SquareD( VECTOR_D TrianglePos1 , VECTOR_D TrianglePos2 , VECTOR_D TrianglePos3 , VECTOR_D PointPos ) ;
float  __stdcall dx_Triangle_Triangle_MinLength( VECTOR  Triangle1Pos1, VECTOR  Triangle1Pos2, VECTOR  Triangle1Pos3, VECTOR  Triangle2Pos1, VECTOR  Triangle2Pos2, VECTOR  Triangle2Pos3);
double __stdcall dx_Triangle_Triangle_MinLengthD( VECTOR_D Triangle1Pos1 , VECTOR_D Triangle1Pos2 , VECTOR_D Triangle1Pos3 , VECTOR_D Triangle2Pos1 , VECTOR_D Triangle2Pos2 , VECTOR_D Triangle2Pos3 ) ;
float  __stdcall dx_Triangle_Triangle_MinLength_Square( VECTOR  Triangle1Pos1, VECTOR  Triangle1Pos2, VECTOR  Triangle1Pos3, VECTOR  Triangle2Pos1, VECTOR  Triangle2Pos2, VECTOR  Triangle2Pos3);
double __stdcall dx_Triangle_Triangle_MinLength_SquareD( VECTOR_D Triangle1Pos1 , VECTOR_D Triangle1Pos2 , VECTOR_D Triangle1Pos3 , VECTOR_D Triangle2Pos1 , VECTOR_D Triangle2Pos2 , VECTOR_D Triangle2Pos3 ) ;
VECTOR  __stdcall dx_Plane_Point_MinLength_Position( VECTOR  PlanePos, VECTOR  PlaneNormal, VECTOR  PointPos);
VECTOR_D  __stdcall dx_Plane_Point_MinLength_PositionD( VECTOR_D  PlanePos, VECTOR_D  PlaneNormal, VECTOR_D  PointPos);
float  __stdcall dx_Plane_Point_MinLength( VECTOR  PlanePos, VECTOR  PlaneNormal, VECTOR  PointPos);
double __stdcall dx_Plane_Point_MinLengthD( VECTOR_D PlanePos , VECTOR_D PlaneNormal , VECTOR_D PointPos ) ;
HITRESULT_LINE  __stdcall dx_HitCheck_Line_Triangle( VECTOR  LinePos1, VECTOR  LinePos2, VECTOR  TrianglePos1, VECTOR  TrianglePos2, VECTOR  TrianglePos3);
HITRESULT_LINE_D __stdcall dx_HitCheck_Line_TriangleD( VECTOR_D LinePos1 , VECTOR_D LinePos2 , VECTOR_D TrianglePos1 , VECTOR_D TrianglePos2 , VECTOR_D TrianglePos3 ) ;
int  __stdcall dx_HitCheck_Triangle_Triangle( VECTOR  Triangle1Pos1, VECTOR  Triangle1Pos2, VECTOR  Triangle1Pos3, VECTOR  Triangle2Pos1, VECTOR  Triangle2Pos2, VECTOR  Triangle2Pos3);
int  __stdcall dx_HitCheck_Triangle_TriangleD( VECTOR_D  Triangle1Pos1, VECTOR_D  Triangle1Pos2, VECTOR_D  Triangle1Pos3, VECTOR_D  Triangle2Pos1, VECTOR_D  Triangle2Pos2, VECTOR_D  Triangle2Pos3);
HITRESULT_LINE  __stdcall dx_HitCheck_Line_Cube( VECTOR  LinePos1, VECTOR  LinePos2, VECTOR  CubePos1, VECTOR  CubePos2);
HITRESULT_LINE_D __stdcall dx_HitCheck_Line_CubeD( VECTOR_D LinePos1 , VECTOR_D LinePos2 , VECTOR_D CubePos1 , VECTOR_D CubePos2 ) ;
int  __stdcall dx_HitCheck_Line_Sphere( VECTOR  LinePos1, VECTOR  LinePos2, VECTOR  SphereCenterPos, float  SphereR);
int  __stdcall dx_HitCheck_Line_SphereD( VECTOR_D  LinePos1, VECTOR_D  LinePos2, VECTOR_D  SphereCenterPos, double  SphereR);
int  __stdcall dx_HitCheck_Sphere_Sphere( VECTOR  Sphere1CenterPos, float  Sphere1R, VECTOR  Sphere2CenterPos, float  Sphere2R);
int  __stdcall dx_HitCheck_Sphere_SphereD( VECTOR_D  Sphere1CenterPos, double  Sphere1R, VECTOR_D  Sphere2CenterPos, double  Sphere2R);
int  __stdcall dx_HitCheck_Sphere_Capsule( VECTOR  SphereCenterPos, float  SphereR, VECTOR  CapPos1, VECTOR  CapPos2, float  CapR);
int  __stdcall dx_HitCheck_Sphere_CapsuleD( VECTOR_D  SphereCenterPos, double  SphereR, VECTOR_D  CapPos1, VECTOR_D  CapPos2, double  CapR);
int  __stdcall dx_HitCheck_Sphere_Triangle( VECTOR  SphereCenterPos, float  SphereR, VECTOR  TrianglePos1, VECTOR  TrianglePos2, VECTOR  TrianglePos3);
int  __stdcall dx_HitCheck_Sphere_TriangleD( VECTOR_D  SphereCenterPos, double  SphereR, VECTOR_D  TrianglePos1, VECTOR_D  TrianglePos2, VECTOR_D  TrianglePos3);
int  __stdcall dx_HitCheck_Capsule_Capsule( VECTOR  Cap1Pos1, VECTOR  Cap1Pos2, float  Cap1R, VECTOR  Cap2Pos1, VECTOR  Cap2Pos2, float  Cap2R);
int  __stdcall dx_HitCheck_Capsule_CapsuleD( VECTOR_D  Cap1Pos1, VECTOR_D  Cap1Pos2, double  Cap1R, VECTOR_D  Cap2Pos1, VECTOR_D  Cap2Pos2, double  Cap2R);
int  __stdcall dx_HitCheck_Capsule_Triangle( VECTOR  CapPos1, VECTOR  CapPos2, float  CapR, VECTOR  TrianglePos1, VECTOR  TrianglePos2, VECTOR  TrianglePos3);
int  __stdcall dx_HitCheck_Capsule_TriangleD( VECTOR_D  CapPos1, VECTOR_D  CapPos2, double  CapR, VECTOR_D  TrianglePos1, VECTOR_D  TrianglePos2, VECTOR_D  TrianglePos3);
int  __stdcall dx_RectClipping( RECT *  Rect, const RECT *  ClippuRect);
int  __stdcall dx_RectAdjust( RECT *  Rect);
int  __stdcall dx_GetRectSize( const RECT *  Rect, int *  Width, int *  Height);
MATRIX  __stdcall dx_MGetIdent( void);
MATRIX_D  __stdcall dx_MGetIdentD( void);
MATRIX  __stdcall dx_MMult( MATRIX  In1, MATRIX  In2);
MATRIX_D  __stdcall dx_MMultD( MATRIX_D  In1, MATRIX_D  In2);
MATRIX  __stdcall dx_MScale( MATRIX  InM, float  Scale);
MATRIX_D  __stdcall dx_MScaleD( MATRIX_D  InM, double  Scale);
MATRIX  __stdcall dx_MAdd( MATRIX  In1, MATRIX  In2);
MATRIX_D  __stdcall dx_MAddD( MATRIX_D  In1, MATRIX_D  In2);
MATRIX  __stdcall dx_MGetScale( VECTOR  Scale);
MATRIX_D  __stdcall dx_MGetScaleD( VECTOR_D  Scale);
MATRIX  __stdcall dx_MGetRotX( float  XAxisRotate);
MATRIX_D  __stdcall dx_MGetRotXD( double  XAxisRotate);
MATRIX  __stdcall dx_MGetRotY( float  YAxisRotate);
MATRIX_D  __stdcall dx_MGetRotYD( double  YAxisRotate);
MATRIX  __stdcall dx_MGetRotZ( float  ZAxisRotate);
MATRIX_D  __stdcall dx_MGetRotZD( double  ZAxisRotate);
MATRIX  __stdcall dx_MGetRotAxis( VECTOR  RotateAxis, float  Rotate);
MATRIX_D  __stdcall dx_MGetRotAxisD( VECTOR_D  RotateAxis, double  Rotate);
MATRIX  __stdcall dx_MGetRotVec2( VECTOR  In1, VECTOR  In2);
MATRIX_D  __stdcall dx_MGetRotVec2D( VECTOR_D  In1, VECTOR_D  In2);
MATRIX  __stdcall dx_MGetTranslate( VECTOR  Trans);
MATRIX_D  __stdcall dx_MGetTranslateD( VECTOR_D  Trans);
MATRIX  __stdcall dx_MGetAxis1( VECTOR  XAxis, VECTOR  YAxis, VECTOR  ZAxis, VECTOR  Pos);
MATRIX_D  __stdcall dx_MGetAxis1D( VECTOR_D  XAxis, VECTOR_D  YAxis, VECTOR_D  ZAxis, VECTOR_D  Pos);
MATRIX  __stdcall dx_MGetAxis2( VECTOR  XAxis, VECTOR  YAxis, VECTOR  ZAxis, VECTOR  Pos);
MATRIX_D  __stdcall dx_MGetAxis2D( VECTOR_D  XAxis, VECTOR_D  YAxis, VECTOR_D  ZAxis, VECTOR_D  Pos);
MATRIX  __stdcall dx_MTranspose( MATRIX  InM);
MATRIX_D  __stdcall dx_MTransposeD( MATRIX_D  InM);
MATRIX  __stdcall dx_MInverse( MATRIX  InM);
MATRIX_D  __stdcall dx_MInverseD( MATRIX_D  InM);
VECTOR  __stdcall dx_MGetSize( MATRIX  InM);
VECTOR_D  __stdcall dx_MGetSizeD( MATRIX_D  InM);
VECTOR  __stdcall dx_VNorm( VECTOR  In);
VECTOR_D  __stdcall dx_VNormD( VECTOR_D  In);
float  __stdcall dx_VSize( VECTOR  In);
double __stdcall dx_VSizeD( VECTOR_D In ) ;
float  __stdcall dx_VCos( VECTOR  In1, VECTOR  In2);
double __stdcall dx_VCosD( VECTOR_D In1 , VECTOR_D In2 ) ;
float  __stdcall dx_VRad( VECTOR  In1, VECTOR  In2);
double __stdcall dx_VRadD( VECTOR_D In1 , VECTOR_D In2 ) ;
int __stdcall dx_CreateGraphImageOrDIBGraph( const TCHAR * FileName , const void * DataImage , int DataImageSize , int DataImageType , int BmpFlag , int ReverseFlag , BASEIMAGE * BaseImage , BITMAPINFO * * BmpInfo , void * * GraphData ) ;
int __stdcall dx_CreateGraphImageType2( STREAMDATA * Src , BASEIMAGE * Dest ) ;
int __stdcall dx_CreateBmpInfo( BITMAPINFO * BmpInfo , int Width , int Height , int Pitch , const void * SrcGrData , void * * DestGrData ) ;
int  __stdcall dx_GetImageSize_File( const char * FileName, int *  SizeX, int *  SizeY);
int  __stdcall dx_GetImageSize_Mem( const void * FileImage, int  FileImageSize, int *  SizeX, int *  SizeY);
unsigned int __stdcall dx_GetGraphImageFullColorCode( const BASEIMAGE * GraphImage , int x , int y ) ;
int __stdcall dx_CreateGraphImage_plus_Alpha( const TCHAR * FileName , const void * RgbBaseImage , int RgbImageSize , int RgbImageType , const void * AlphaImage , int AlphaImageSize , int AlphaImageType , BASEIMAGE * RgbGraphImage , BASEIMAGE * AlphaGraphImage , int ReverseFlag ) ;
int __stdcall dx_ReverseGraphImage( BASEIMAGE * GraphImage ) ;
int __stdcall dx_AddUserGraphLoadFunction4( int ( *UserLoadFunc )( STREAMDATA * Src , BASEIMAGE * BaseImage ) ) ;
int __stdcall dx_SubUserGraphLoadFunction4( int ( *UserLoadFunc )( STREAMDATA * Src , BASEIMAGE * BaseImage ) ) ;
int  __stdcall dx_SetUseFastLoadFlag( int  Flag);
int  __stdcall dx_SetGraphDataShavedMode( int  ShavedMode);
int  __stdcall dx_GetGraphDataShavedMode( void);
int  __stdcall dx_SetUsePremulAlphaConvertLoad( int  UseFlag);
int __stdcall dx_CreateBaseImage( const TCHAR * FileName , const void * FileImage , int FileImageSize , int DataType , BASEIMAGE * BaseImage , int ReverseFlag ) ;
int __stdcall dx_CreateGraphImage( const TCHAR * FileName , const void * DataImage , int DataImageSize , int DataImageType , BASEIMAGE * GraphImage , int ReverseFlag ) ;
int __stdcall dx_CreateBaseImageToFile( const TCHAR * FileName , BASEIMAGE * BaseImage , int ReverseFlag = FALSE ) ;
int __stdcall dx_CreateBaseImageToMem( const void * FileImage , int FileImageSize , BASEIMAGE * BaseImage , int ReverseFlag = FALSE ) ;
int __stdcall dx_CreateARGBF32ColorBaseImage( int SizeX , int SizeY , BASEIMAGE * BaseImage ) ;
int __stdcall dx_CreateARGBF16ColorBaseImage( int SizeX , int SizeY , BASEIMAGE * BaseImage ) ;
int __stdcall dx_CreateARGB8ColorBaseImage( int SizeX , int SizeY , BASEIMAGE * BaseImage ) ;
int __stdcall dx_CreateXRGB8ColorBaseImage( int SizeX , int SizeY , BASEIMAGE * BaseImage ) ;
int __stdcall dx_CreateRGB8ColorBaseImage( int SizeX , int SizeY , BASEIMAGE * BaseImage ) ;
int __stdcall dx_CreateARGB4ColorBaseImage( int SizeX , int SizeY , BASEIMAGE * BaseImage ) ;
int __stdcall dx_CreatePAL8ColorBaseImage( int SizeX , int SizeY , BASEIMAGE * BaseImage , int UseAlpha = FALSE ) ;
int __stdcall dx_CreateColorDataBaseImage( int SizeX , int SizeY , const COLORDATA * ColorData , BASEIMAGE * BaseImage ) ;
int __stdcall dx_GetBaseImageGraphDataSize( const BASEIMAGE * BaseImage ) ;
int __stdcall dx_DerivationBaseImage( const BASEIMAGE * BaseImage , int x1 , int y1 , int x2 , int y2 , BASEIMAGE * NewBaseImage ) ;
int __stdcall dx_ReleaseBaseImage( BASEIMAGE * BaseImage ) ;
int __stdcall dx_ReleaseGraphImage( BASEIMAGE * GraphImage ) ;
int __stdcall dx_ConvertNormalFormatBaseImage( BASEIMAGE * BaseImage , int ReleaseOrigGraphData = TRUE ) ;
int __stdcall dx_ConvertPremulAlphaBaseImage( BASEIMAGE * BaseImage ) ;
int __stdcall dx_ConvertInterpAlphaBaseImage( BASEIMAGE * BaseImage ) ;
int __stdcall dx_GetDrawScreenBaseImage( int x1 , int y1 , int x2 , int y2 , BASEIMAGE * BaseImage ) ;
int __stdcall dx_GetDrawScreenBaseImageDestPos( int x1 , int y1 , int x2 , int y2 , BASEIMAGE * BaseImage , int DestX , int DestY ) ;
int __stdcall dx_FillBaseImage( BASEIMAGE * BaseImage , int r , int g , int b , int a ) ;
int __stdcall dx_FillRectBaseImage( BASEIMAGE * BaseImage , int x , int y , int w , int h , int r , int g , int b , int a ) ;
int __stdcall dx_ClearRectBaseImage( BASEIMAGE * BaseImage , int x , int y , int w , int h ) ;
int __stdcall dx_GetPaletteBaseImage( const BASEIMAGE * BaseImage , int PaletteNo , int * r , int * g , int * b , int * a ) ;
int __stdcall dx_SetPaletteBaseImage( BASEIMAGE * BaseImage , int PaletteNo , int r , int g , int b , int a ) ;
int __stdcall dx_SetPixelPalCodeBaseImage( BASEIMAGE * BaseImage , int x , int y , int palNo ) ;
int __stdcall dx_GetPixelPalCodeBaseImage( const BASEIMAGE * BaseImage , int x , int y ) ;
int __stdcall dx_SetPixelBaseImage( BASEIMAGE * BaseImage , int x , int y , int r , int g , int b , int a ) ;
int __stdcall dx_SetPixelBaseImageF( BASEIMAGE * BaseImage , int x , int y , float r , float g , float b , float a ) ;
int __stdcall dx_GetPixelBaseImage( const BASEIMAGE * BaseImage , int x , int y , int * r , int * g , int * b , int * a ) ;
int __stdcall dx_GetPixelBaseImageF( const BASEIMAGE * BaseImage , int x , int y , float * r , float * g , float * b , float * a ) ;
int __stdcall dx_DrawLineBaseImage( BASEIMAGE * BaseImage , int x1 , int y1 , int x2 , int y2 , int r , int g , int b , int a ) ;
int __stdcall dx_DrawCircleBaseImage( BASEIMAGE * BaseImage , int x , int y , int radius , int r , int g , int b , int a , int FillFlag = TRUE ) ;
int __stdcall dx_BltBaseImage( int SrcX , int SrcY , int SrcSizeX , int SrcSizeY , int DestX , int DestY , BASEIMAGE * SrcBaseImage , BASEIMAGE * DestBaseImage ) ;
int __stdcall dx_BltBaseImage_2( int DestX , int DestY , BASEIMAGE * SrcBaseImage , BASEIMAGE * DestBaseImage ) ;
int __stdcall dx_BltBaseImageWithTransColor( int SrcX , int SrcY , int SrcSizeX , int SrcSizeY , int DestX , int DestY , BASEIMAGE * SrcBaseImage , BASEIMAGE * DestBaseImage , int Tr , int Tg , int Tb , int Ta ) ;
int __stdcall dx_BltBaseImageWithAlphaBlend( int SrcX , int SrcY , int SrcSizeX , int SrcSizeY , int DestX , int DestY , BASEIMAGE * SrcBaseImage , BASEIMAGE * DestBaseImage , int Opacity = 255 ) ;
int __stdcall dx_ReverseBaseImageH( BASEIMAGE * BaseImage ) ;
int __stdcall dx_ReverseBaseImageV( BASEIMAGE * BaseImage ) ;
int __stdcall dx_ReverseBaseImage( BASEIMAGE * BaseImage ) ;
int __stdcall dx_CheckPixelAlphaBaseImage( const BASEIMAGE * BaseImage ) ;
int __stdcall dx_GetBaseImageUseMaxPaletteNo( const BASEIMAGE * BaseImage ) ;
int __stdcall dx_SaveBaseImageToBmp( const TCHAR * FilePath , const BASEIMAGE * BaseImage ) ;
int __stdcall dx_SaveBaseImageToDds( const TCHAR * FilePath , const BASEIMAGE * BaseImage ) ;
int __stdcall dx_SaveBaseImageToPng( const TCHAR * FilePath , BASEIMAGE * BaseImage , int CompressionLevel ) ;
int __stdcall dx_SaveBaseImageToJpeg( const TCHAR * FilePath , BASEIMAGE * BaseImage , int Quality , int Sample2x1 ) ;
int __stdcall dx_DrawBaseImage( int x , int y , BASEIMAGE * BaseImage ) ;
int __stdcall dx_GraphColorMatchBltVer2( void * DestGraphData , int DestPitch , const COLORDATA * DestColorData , const void * SrcGraphData , int SrcPitch , const COLORDATA * SrcColorData , const void * AlphaMask , int AlphaPitch , const COLORDATA * AlphaColorData , POINT DestPoint , const RECT * SrcRect , int ReverseFlag , int TransColorAlphaTestFlag , unsigned int TransColor , int ImageShavedMode , int AlphaOnlyFlag = FALSE , int RedIsAlphaFlag = FALSE , int TransColorNoMoveFlag = FALSE , int Pal8ColorMatch = FALSE ) ;
COLOR_F  __stdcall dx_GetColorF( float  Red, float  Green, float  Blue, float  Alpha);
COLOR_U8  __stdcall dx_GetColorU8( int  Red, int  Green, int  Blue, int  Alpha);
unsigned int  __stdcall dx_GetColor( int  Red, int  Green, int  Blue);
int  __stdcall dx_GetColor2( unsigned int  Color, int *  Red, int *  Green, int *  Blue);
unsigned int  __stdcall dx_GetColor3( const COLORDATA *  ColorData, int  Red, int  Green, int  Blue, int  Alpha = 255);
unsigned int  __stdcall dx_GetColor4( const COLORDATA *  DestColorData, const COLORDATA *  SrcColorData, unsigned int  SrcColor);
int  __stdcall dx_GetColor5( const COLORDATA *  ColorData, unsigned int  Color, int *  Red, int *  Green, int *  Blue, int *  Alpha);
int  __stdcall dx_CreatePaletteColorData( COLORDATA *  ColorDataBuf);
int  __stdcall dx_CreateARGBF32ColorData( COLORDATA *  ColorDataBuf);
int  __stdcall dx_CreateARGBF16ColorData( COLORDATA *  ColorDataBuf);
int  __stdcall dx_CreateXRGB8ColorData( COLORDATA *  ColorDataBuf);
int  __stdcall dx_CreateARGB8ColorData( COLORDATA *  ColorDataBuf);
int  __stdcall dx_CreateARGB4ColorData( COLORDATA *  ColorDataBuf);
int  __stdcall dx_CreateFullColorData( COLORDATA *  ColorDataBuf);
int  __stdcall dx_CreateGrayColorData( COLORDATA *  ColorDataBuf);
int  __stdcall dx_CreatePal8ColorData( COLORDATA *  ColorDataBuf, int  UseAlpha = FALSE);
int  __stdcall dx_CreateColorData( COLORDATA *  ColorDataBuf, int  ColorBitDepth, DWORD  RedMask, DWORD  GreenMask, DWORD  BlueMask, DWORD  AlphaMask, int  ChannelNum = 0, int  ChannelBitDepth = 0, int  FloatTypeFlag = FALSE);
void  __stdcall dx_SetColorDataNoneMask( COLORDATA *  ColorData);
int  __stdcall dx_CmpColorData( const COLORDATA *  ColorData1, const COLORDATA *  ColorData2);
int  __stdcall dx_InitSoftImage( void);
int  __stdcall dx_LoadSoftImage( const char * FileName);
int  __stdcall dx_LoadSoftImageToMem( const void * FileImage, int  FileImageSize);
int  __stdcall dx_MakeSoftImage( int  SizeX, int  SizeY);
int  __stdcall dx_MakeARGBF32ColorSoftImage( int  SizeX, int  SizeY);
int  __stdcall dx_MakeARGBF16ColorSoftImage( int  SizeX, int  SizeY);
int  __stdcall dx_MakeARGB8ColorSoftImage( int  SizeX, int  SizeY);
int  __stdcall dx_MakeXRGB8ColorSoftImage( int  SizeX, int  SizeY);
int  __stdcall dx_MakeARGB4ColorSoftImage( int  SizeX, int  SizeY);
int  __stdcall dx_MakeRGB8ColorSoftImage( int  SizeX, int  SizeY);
int  __stdcall dx_MakePAL8ColorSoftImage( int  SizeX, int  SizeY, int  UseAlpha = FALSE);
int  __stdcall dx_DeleteSoftImage( int  SIHandle);
int  __stdcall dx_GetSoftImageSize( int  SIHandle, int *  Width, int *  Height);
int  __stdcall dx_CheckPaletteSoftImage( int  SIHandle);
int  __stdcall dx_CheckAlphaSoftImage( int  SIHandle);
int  __stdcall dx_CheckPixelAlphaSoftImage( int  SIHandle);
int  __stdcall dx_GetDrawScreenSoftImage( int  x1, int  y1, int  x2, int  y2, int  SIHandle);
int  __stdcall dx_GetDrawScreenSoftImageDestPos( int  x1, int  y1, int  x2, int  y2, int  SIHandle, int  DestX, int  DestY);
int  __stdcall dx_FillSoftImage( int  SIHandle, int  r, int  g, int  b, int  a);
int  __stdcall dx_ClearRectSoftImage( int  SIHandle, int  x, int  y, int  w, int  h);
int  __stdcall dx_GetPaletteSoftImage( int  SIHandle, int  PaletteNo, int *  r, int *  g, int *  b, int *  a);
int  __stdcall dx_SetPaletteSoftImage( int  SIHandle, int  PaletteNo, int  r, int  g, int  b, int  a);
int  __stdcall dx_DrawPixelPalCodeSoftImage( int  SIHandle, int  x, int  y, int  palNo);
int  __stdcall dx_GetPixelPalCodeSoftImage( int  SIHandle, int  x, int  y);
void *  __stdcall dx_GetImageAddressSoftImage( int  SIHandle);
int  __stdcall dx_GetPitchSoftImage( int  SIHandle);
int  __stdcall dx_DrawPixelSoftImage( int  SIHandle, int  x, int  y, int  r, int  g, int  b, int  a);
int  __stdcall dx_DrawPixelSoftImageF( int  SIHandle, int  x, int  y, float  r, float  g, float  b, float  a);
void  __stdcall dx_DrawPixelSoftImage_Unsafe_XRGB8( int  SIHandle, int  x, int  y, int  r, int  g, int  b);
void  __stdcall dx_DrawPixelSoftImage_Unsafe_ARGB8( int  SIHandle, int  x, int  y, int  r, int  g, int  b, int  a);
int  __stdcall dx_GetPixelSoftImage( int  SIHandle, int  x, int  y, int *  r, int *  g, int *  b, int *  a);
int  __stdcall dx_GetPixelSoftImageF( int  SIHandle, int  x, int  y, float *  r, float *  g, float *  b, float *  a);
void  __stdcall dx_GetPixelSoftImage_Unsafe_XRGB8( int  SIHandle, int  x, int  y, int *  r, int *  g, int *  b);
void  __stdcall dx_GetPixelSoftImage_Unsafe_ARGB8( int  SIHandle, int  x, int  y, int *  r, int *  g, int *  b, int *  a);
int  __stdcall dx_DrawLineSoftImage( int  SIHandle, int  x1, int  y1, int  x2, int  y2, int  r, int  g, int  b, int  a);
int  __stdcall dx_DrawCircleSoftImage( int  SIHandle, int  x, int  y, int  radius, int  r, int  g, int  b, int  a, int  FillFlag = TRUE);
int  __stdcall dx_BltSoftImage( int  SrcX, int  SrcY, int  SrcSizeX, int  SrcSizeY, int  SrcSIHandle, int  DestX, int  DestY, int  DestSIHandle);
int  __stdcall dx_BltSoftImageWithTransColor( int  SrcX, int  SrcY, int  SrcSizeX, int  SrcSizeY, int  SrcSIHandle, int  DestX, int  DestY, int  DestSIHandle, int  Tr, int  Tg, int  Tb, int  Ta);
int  __stdcall dx_BltSoftImageWithAlphaBlend( int  SrcX, int  SrcY, int  SrcSizeX, int  SrcSizeY, int  SrcSIHandle, int  DestX, int  DestY, int  DestSIHandle, int  Opacity = 255);
int  __stdcall dx_ReverseSoftImageH( int  SIHandle);
int  __stdcall dx_ReverseSoftImageV( int  SIHandle);
int  __stdcall dx_ReverseSoftImage( int  SIHandle);
int  __stdcall dx_BltStringSoftImage( int  x, int  y, const char * StrData, int  DestSIHandle, int  DestEdgeSIHandle = -1, int  VerticalFlag = FALSE);
int  __stdcall dx_BltStringSoftImageToHandle( int  x, int  y, const char * StrData, int  DestSIHandle, int  DestEdgeSIHandle, int  FontHandle, int  VerticalFlag = FALSE);
int  __stdcall dx_DrawSoftImage( int  x, int  y, int  SIHandle);
int  __stdcall dx_SaveSoftImageToBmp( const char * FilePath, int  SIHandle);
int  __stdcall dx_SaveSoftImageToDds( const char * FilePath, int  SIHandle);
int  __stdcall dx_SaveSoftImageToPng( const char * FilePath, int  SIHandle, int  CompressionLevel);
int  __stdcall dx_SaveSoftImageToJpeg( const char * FilePath, int  SIHandle, int  Quality, int  Sample2x1);
int  __stdcall dx_InitSoundMem( int  LogOutFlag = FALSE);
int  __stdcall dx_AddSoundData( int  Handle = -1);
int __stdcall dx_AddStreamSoundMem( STREAMDATA * Stream , int LoopNum , int SoundHandle , int StreamDataType , int * CanStreamCloseFlag , int UnionHandle = -1 ) ;
int  __stdcall dx_AddStreamSoundMemToMem( const void * FileImage, int  FileImageSize, int  LoopNum, int  SoundHandle, int  StreamDataType, int  UnionHandle = -1);
int  __stdcall dx_AddStreamSoundMemToFile( const char * WaveFile, int  LoopNum, int  SoundHandle, int  StreamDataType, int  UnionHandle = -1);
int  __stdcall dx_SetupStreamSoundMem( int  SoundHandle);
int  __stdcall dx_PlayStreamSoundMem( int  SoundHandle, int  PlayType = DX_PLAYTYPE_LOOP, int  TopPositionFlag = TRUE);
int  __stdcall dx_CheckStreamSoundMem( int  SoundHandle);
int  __stdcall dx_StopStreamSoundMem( int  SoundHandle);
int  __stdcall dx_SetStreamSoundCurrentPosition( int  Byte, int  SoundHandle);
int  __stdcall dx_GetStreamSoundCurrentPosition( int  SoundHandle);
int  __stdcall dx_SetStreamSoundCurrentTime( int  Time, int  SoundHandle);
int  __stdcall dx_GetStreamSoundCurrentTime( int  SoundHandle);
int  __stdcall dx_ProcessStreamSoundMem( int  SoundHandle);
int  __stdcall dx_ProcessStreamSoundMemAll( void);
int  __stdcall dx_LoadSoundMem2( const char * FileName1, const char * FileName2);
int  __stdcall dx_LoadBGM( const char * FileName);
int  __stdcall dx_LoadSoundMemBase( const char * FileName, int  BufferNum, int  UnionHandle = -1);
int  __stdcall dx_LoadSoundMem( const char * FileName, int  BufferNum = 3, int  UnionHandle = -1);
int  __stdcall dx_LoadSoundMemToBufNumSitei( const char * FileName, int  BufferNum);
int  __stdcall dx_DuplicateSoundMem( int  SrcSoundHandle, int  BufferNum = 3);
int  __stdcall dx_LoadSoundMemByMemImageBase( const void * FileImage, int  FileImageSize, int  BufferNum, int  UnionHandle = -1);
int  __stdcall dx_LoadSoundMemByMemImage( const void * FileImage, int  FileImageSize, int  UnionHandle = -1);
int __stdcall dx_LoadSoundMemByMemImage2( const void * WaveImage , int WaveImageSize , const WAVEFORMATEX * WaveFormat , int WaveHeaderSize ) ;
int  __stdcall dx_LoadSoundMemByMemImageToBufNumSitei( const void * FileImage, int  FileImageSize, int  BufferNum);
int  __stdcall dx_LoadSoundMem2ByMemImage( const void * FileImage1, int  FileImageSize1, const void * FileImage2, int  FileImageSize2);
int  __stdcall dx_LoadSoundMemFromSoftSound( int  SoftSoundHandle, int  BufferNum = 3);
int  __stdcall dx_DeleteSoundMem( int  SoundHandle, int  LogOutFlag = FALSE);
int  __stdcall dx_PlaySoundMem( int  SoundHandle, int  PlayType, int  TopPositionFlag = TRUE);
int  __stdcall dx_StopSoundMem( int  SoundHandle);
int  __stdcall dx_CheckSoundMem( int  SoundHandle);
int  __stdcall dx_SetPanSoundMem( int  PanPal, int  SoundHandle);
int  __stdcall dx_ChangePanSoundMem( int  PanPal, int  SoundHandle);
int  __stdcall dx_GetPanSoundMem( int  SoundHandle);
int  __stdcall dx_SetVolumeSoundMem( int  VolumePal, int  SoundHandle);
int  __stdcall dx_ChangeVolumeSoundMem( int  VolumePal, int  SoundHandle);
int  __stdcall dx_GetVolumeSoundMem( int  SoundHandle);
int  __stdcall dx_SetChannelVolumeSoundMem( int  Channel, int  VolumePal, int  SoundHandle);
int  __stdcall dx_ChangeChannelVolumeSoundMem( int  Channel, int  VolumePal, int  SoundHandle);
int  __stdcall dx_GetChannelVolumeSoundMem( int  Channel, int  SoundHandle);
int  __stdcall dx_SetFrequencySoundMem( int  FrequencyPal, int  SoundHandle);
int  __stdcall dx_GetFrequencySoundMem( int  SoundHandle);
int  __stdcall dx_ResetFrequencySoundMem( int  SoundHandle);
int  __stdcall dx_SetNextPlayPanSoundMem( int  PanPal, int  SoundHandle);
int  __stdcall dx_ChangeNextPlayPanSoundMem( int  PanPal, int  SoundHandle);
int  __stdcall dx_SetNextPlayVolumeSoundMem( int  VolumePal, int  SoundHandle);
int  __stdcall dx_ChangeNextPlayVolumeSoundMem( int  VolumePal, int  SoundHandle);
int  __stdcall dx_SetNextPlayChannelVolumeSoundMem( int  Channel, int  VolumePal, int  SoundHandle);
int  __stdcall dx_ChangeNextPlayChannelVolumeSoundMem( int  Channel, int  VolumePal, int  SoundHandle);
int  __stdcall dx_SetNextPlayFrequencySoundMem( int  FrequencyPal, int  SoundHandle);
int  __stdcall dx_SetCurrentPositionSoundMem( int  SamplePosition, int  SoundHandle);
int  __stdcall dx_GetCurrentPositionSoundMem( int  SoundHandle);
int  __stdcall dx_SetSoundCurrentPosition( int  Byte, int  SoundHandle);
int  __stdcall dx_GetSoundCurrentPosition( int  SoundHandle);
int  __stdcall dx_SetSoundCurrentTime( int  Time, int  SoundHandle);
int  __stdcall dx_GetSoundCurrentTime( int  SoundHandle);
int  __stdcall dx_GetSoundTotalSample( int  SoundHandle);
int  __stdcall dx_GetSoundTotalTime( int  SoundHandle);
int  __stdcall dx_SetLoopPosSoundMem( int  LoopTime, int  SoundHandle);
int  __stdcall dx_SetLoopTimePosSoundMem( int  LoopTime, int  SoundHandle);
int  __stdcall dx_SetLoopSamplePosSoundMem( int  LoopSamplePosition, int  SoundHandle);
int  __stdcall dx_SetLoopStartTimePosSoundMem( int  LoopStartTime, int  SoundHandle);
int  __stdcall dx_SetLoopStartSamplePosSoundMem( int  LoopStartSamplePosition, int  SoundHandle);
int  __stdcall dx_SetPlayFinishDeleteSoundMem( int  DeleteFlag, int  SoundHandle);
int  __stdcall dx_Set3DReverbParamSoundMem( const SOUND3D_REVERB_PARAM *  Param, int  SoundHandle);
int  __stdcall dx_Set3DPresetReverbParamSoundMem( int  PresetNo, int  SoundHandle);
int  __stdcall dx_Set3DReverbParamSoundMemAll( const SOUND3D_REVERB_PARAM *  Param, int  PlaySoundOnly = FALSE);
int  __stdcall dx_Set3DPresetReverbParamSoundMemAll( int  PresetNo, int  PlaySoundOnly = FALSE);
int  __stdcall dx_Get3DReverbParamSoundMem( SOUND3D_REVERB_PARAM *  ParamBuffer, int  SoundHandle);
int  __stdcall dx_Get3DPresetReverbParamSoundMem( SOUND3D_REVERB_PARAM *  ParamBuffer, int  PresetNo);
int  __stdcall dx_Set3DPositionSoundMem( VECTOR  Position, int  SoundHandle);
int  __stdcall dx_Set3DRadiusSoundMem( float  Radius, int  SoundHandle);
int  __stdcall dx_Set3DVelocitySoundMem( VECTOR  Velocity, int  SoundHandle);
int  __stdcall dx_SetNextPlay3DPositionSoundMem( VECTOR  Position, int  SoundHandle);
int  __stdcall dx_SetNextPlay3DRadiusSoundMem( float  Radius, int  SoundHandle);
int  __stdcall dx_SetNextPlay3DVelocitySoundMem( VECTOR  Velocity, int  SoundHandle);
int  __stdcall dx_SetCreateSoundDataType( int  SoundDataType);
int  __stdcall dx_GetCreateSoundDataType( void);
int  __stdcall dx_SetCreateSoundPitchRate( float  Cents);
float  __stdcall dx_GetCreateSoundPitchRate( void);
int  __stdcall dx_SetCreateSoundTimeStretchRate( float  Rate);
float  __stdcall dx_GetCreateSoundTimeStretchRate( void);
int  __stdcall dx_SetDisableReadSoundFunctionMask( int  Mask);
int  __stdcall dx_GetDisableReadSoundFunctionMask( void);
int  __stdcall dx_SetEnableSoundCaptureFlag( int  Flag);
int  __stdcall dx_SetUseOldVolumeCalcFlag( int  Flag);
int  __stdcall dx_SetCreate3DSoundFlag( int  Flag);
int  __stdcall dx_Set3DSoundOneMetre( float  Distance);
int  __stdcall dx_Set3DSoundListenerPosAndFrontPos_UpVecY( VECTOR  Position, VECTOR  FrontPosition);
int  __stdcall dx_Set3DSoundListenerPosAndFrontPosAndUpVec( VECTOR  Position, VECTOR  FrontPosition, VECTOR  UpVector);
int  __stdcall dx_Set3DSoundListenerVelocity( VECTOR  Velocity);
int  __stdcall dx_Set3DSoundListenerConeAngle( float  InnerAngle, float  OuterAngle);
int  __stdcall dx_Set3DSoundListenerConeVolume( float  InnerAngleVolume, float  OuterAngleVolume);
int  __stdcall dx_PlaySoundFile( const char * FileName, int  PlayType);
int  __stdcall dx_PlaySound( const char * FileName, int  PlayType);
int  __stdcall dx_CheckSoundFile( void);
int  __stdcall dx_CheckSound( void);
int  __stdcall dx_StopSoundFile( void);
int  __stdcall dx_StopSound( void);
int  __stdcall dx_SetVolumeSoundFile( int  VolumePal);
int  __stdcall dx_SetVolumeSound( int  VolumePal);
int  __stdcall dx_InitSoftSound( void);
int  __stdcall dx_LoadSoftSound( const char * FileName);
int  __stdcall dx_LoadSoftSoundFromMemImage( const void * FileImage, int  FileImageSize);
int  __stdcall dx_MakeSoftSound( int  UseFormat_SoftSoundHandle, int  SampleNum);
int  __stdcall dx_MakeSoftSound2Ch16Bit44KHz( int  SampleNum);
int  __stdcall dx_MakeSoftSound2Ch16Bit22KHz( int  SampleNum);
int  __stdcall dx_MakeSoftSound2Ch8Bit44KHz( int  SampleNum);
int  __stdcall dx_MakeSoftSound2Ch8Bit22KHz( int  SampleNum);
int  __stdcall dx_MakeSoftSound1Ch16Bit44KHz( int  SampleNum);
int  __stdcall dx_MakeSoftSound1Ch16Bit22KHz( int  SampleNum);
int  __stdcall dx_MakeSoftSound1Ch8Bit44KHz( int  SampleNum);
int  __stdcall dx_MakeSoftSound1Ch8Bit22KHz( int  SampleNum);
int  __stdcall dx_MakeSoftSoundCustom( int  ChannelNum, int  BitsPerSample, int  SamplesPerSec, int  SampleNum, int  IsFloatType = 0);
int  __stdcall dx_DeleteSoftSound( int  SoftSoundHandle);
int  __stdcall dx_SaveSoftSound( int  SoftSoundHandle, const char * FileName);
int  __stdcall dx_GetSoftSoundSampleNum( int  SoftSoundHandle);
int  __stdcall dx_GetSoftSoundFormat( int  SoftSoundHandle, int *  Channels, int *  BitsPerSample, int *  SamplesPerSec, int *  IsFloatType);
int  __stdcall dx_ReadSoftSoundData( int  SoftSoundHandle, int  SamplePosition, int *  Channel1, int *  Channel2);
int  __stdcall dx_ReadSoftSoundDataF( int  SoftSoundHandle, int  SamplePosition, float *  Channel1, float *  Channel2);
int  __stdcall dx_WriteSoftSoundData( int  SoftSoundHandle, int  SamplePosition, int  Channel1, int  Channel2);
int  __stdcall dx_WriteSoftSoundDataF( int  SoftSoundHandle, int  SamplePosition, float  Channel1, float  Channel2);
int  __stdcall dx_WriteTimeStretchSoftSoundData( int  SrcSoftSoundHandle, int  DestSoftSoundHandle);
int  __stdcall dx_WritePitchShiftSoftSoundData( int  SrcSoftSoundHandle, int  DestSoftSoundHandle);
void *  __stdcall dx_GetSoftSoundDataImage( int  SoftSoundHandle);
int  __stdcall dx_GetFFTVibrationSoftSound( int  SoftSoundHandle, int  Channel, int  SamplePosition, int  SampleNum, float *  Buffer, int  BufferLength);
int  __stdcall dx_InitSoftSoundPlayer( void);
int  __stdcall dx_MakeSoftSoundPlayer( int  UseFormat_SoftSoundHandle);
int  __stdcall dx_MakeSoftSoundPlayer2Ch16Bit44KHz( void);
int  __stdcall dx_MakeSoftSoundPlayer2Ch16Bit22KHz( void);
int  __stdcall dx_MakeSoftSoundPlayer2Ch8Bit44KHz( void);
int  __stdcall dx_MakeSoftSoundPlayer2Ch8Bit22KHz( void);
int  __stdcall dx_MakeSoftSoundPlayer1Ch16Bit44KHz( void);
int  __stdcall dx_MakeSoftSoundPlayer1Ch16Bit22KHz( void);
int  __stdcall dx_MakeSoftSoundPlayer1Ch8Bit44KHz( void);
int  __stdcall dx_MakeSoftSoundPlayer1Ch8Bit22KHz( void);
int  __stdcall dx_MakeSoftSoundPlayerCustom( int  ChannelNum, int  BitsPerSample, int  SamplesPerSec);
int  __stdcall dx_DeleteSoftSoundPlayer( int  SSoundPlayerHandle);
int  __stdcall dx_AddDataSoftSoundPlayer( int  SSoundPlayerHandle, int  SoftSoundHandle, int  AddSamplePosition, int  AddSampleNum);
int  __stdcall dx_AddDirectDataSoftSoundPlayer( int  SSoundPlayerHandle, const void * SoundData, int  AddSampleNum);
int  __stdcall dx_AddOneDataSoftSoundPlayer( int  SSoundPlayerHandle, int  Channel1, int  Channel2);
int  __stdcall dx_GetSoftSoundPlayerFormat( int  SSoundPlayerHandle, int *  Channels, int *  BitsPerSample, int *  SamplesPerSec);
int  __stdcall dx_StartSoftSoundPlayer( int  SSoundPlayerHandle);
int  __stdcall dx_CheckStartSoftSoundPlayer( int  SSoundPlayerHandle);
int  __stdcall dx_StopSoftSoundPlayer( int  SSoundPlayerHandle);
int  __stdcall dx_ResetSoftSoundPlayer( int  SSoundPlayerHandle);
int  __stdcall dx_GetStockDataLengthSoftSoundPlayer( int  SSoundPlayerHandle);
int  __stdcall dx_CheckSoftSoundPlayerNoneData( int  SSoundPlayerHandle);
int  __stdcall dx_DeleteMusicMem( int  MusicHandle);
int  __stdcall dx_LoadMusicMem( const char * FileName);
int  __stdcall dx_LoadMusicMemByMemImage( const void * FileImage, int  FileImageSize);
int  __stdcall dx_PlayMusicMem( int  MusicHandle, int  PlayType);
int  __stdcall dx_StopMusicMem( int  MusicHandle);
int  __stdcall dx_CheckMusicMem( int  MusicHandle);
int  __stdcall dx_SetVolumeMusicMem( int  Volume, int  MusicHandle);
int  __stdcall dx_GetMusicMemPosition( int  MusicHandle);
int  __stdcall dx_InitMusicMem( void);
int  __stdcall dx_ProcessMusicMem( void);
int  __stdcall dx_PlayMusic( const char * FileName, int  PlayType);
int  __stdcall dx_PlayMusicByMemImage( const void * FileImage, int  FileImageSize, int  PlayType);
int  __stdcall dx_PlayMusicByResource( const char * ResourceName, const char * ResourceType, int  PlayType);
int  __stdcall dx_SetVolumeMusic( int  Volume);
int  __stdcall dx_StopMusic( void);
int  __stdcall dx_CheckMusic( void);
int  __stdcall dx_GetMusicPosition( void);
int  __stdcall dx_SelectMidiMode( int  Mode);
int  __stdcall dx_SetUseDXArchiveFlag( int  Flag);
int  __stdcall dx_SetDXArchivePriority( int  Priority = 0);
int  __stdcall dx_SetDXArchiveExtension( const char * Extension = NULL);
int  __stdcall dx_SetDXArchiveKeyString( const char * KeyString = NULL);
int  __stdcall dx_DXArchivePreLoad( const char * FilePath, int  ASync = FALSE);
int  __stdcall dx_DXArchiveCheckIdle( const char * FilePath);
int  __stdcall dx_DXArchiveRelease( const char * FilePath);
int  __stdcall dx_DXArchiveCheckFile( const char * FilePath, const char * TargetFilePath);
int  __stdcall dx_DXArchiveSetMemImage( void *  ArchiveImage, int  ArchiveImageSize, const char * EmulateFilePath, int  ArchiveImageCopyFlag = FALSE, int  ArchiveImageReadOnly = TRUE);
int  __stdcall dx_DXArchiveReleaseMemImage( void *  ArchiveImage);
int  __stdcall dx_MV1LoadModel( const char * FileName);
int __stdcall dx_MV1LoadModelFromMem( const void * FileImage , int FileSize , int ( *FileReadFunc )( const TCHAR * FilePath , void * * FileImageAddr , int * FileSize , void * FileReadFuncData ) , int ( *FileReleaseFunc )( void * MemoryAddr , void * FileReadFuncData ) , void * FileReadFuncData = NULL ) ;
int  __stdcall dx_MV1DuplicateModel( int  SrcMHandle);
int  __stdcall dx_MV1CreateCloneModel( int  SrcMHandle);
int  __stdcall dx_MV1DeleteModel( int  MHandle);
int  __stdcall dx_MV1InitModel( void);
int  __stdcall dx_MV1SetLoadModelReMakeNormal( int  Flag);
int  __stdcall dx_MV1SetLoadModelReMakeNormalSmoothingAngle( float  SmoothingAngle = 1.562069f);
int  __stdcall dx_MV1SetLoadModelIgnoreScaling( int  Flag);
int  __stdcall dx_MV1SetLoadModelPositionOptimize( int  Flag);
int  __stdcall dx_MV1SetLoadModelNotEqNormalSide_AddZeroAreaPolygon( int  Flag);
int  __stdcall dx_MV1SetLoadModelUsePhysicsMode( int  PhysicsMode);
int  __stdcall dx_MV1SetLoadModelPhysicsWorldGravity( float  Gravity);
int  __stdcall dx_MV1SetLoadCalcPhysicsWorldGravity( int  GravityNo, VECTOR  Gravity);
int  __stdcall dx_MV1SetLoadModelPhysicsCalcPrecision( int  Precision);
int  __stdcall dx_MV1SetLoadModelAnimFilePath( const char * FileName);
int  __stdcall dx_MV1SetLoadModelUsePackDraw( int  Flag);
int  __stdcall dx_MV1SetLoadModelTriangleListUseMaxBoneNum( int  UseMaxBoneNum);
int  __stdcall dx_MV1SaveModelToMV1File( int  MHandle, const char * FileName, int  SaveType = MV1_SAVETYPE_NORMAL, int  AnimMHandle = -1, int  AnimNameCheck = TRUE, int  Normal8BitFlag = 1, int  Position16BitFlag = 1, int  Weight8BitFlag = 0, int  Anim16BitFlag = 1);
int  __stdcall dx_MV1SaveModelToXFile( int  MHandle, const char * FileName, int  SaveType = MV1_SAVETYPE_NORMAL, int  AnimMHandle = -1, int  AnimNameCheck = TRUE);
int  __stdcall dx_MV1DrawModel( int  MHandle);
int  __stdcall dx_MV1DrawFrame( int  MHandle, int  FrameIndex);
int  __stdcall dx_MV1DrawMesh( int  MHandle, int  MeshIndex);
int  __stdcall dx_MV1DrawTriangleList( int  MHandle, int  TriangleListIndex);
int  __stdcall dx_MV1DrawModelDebug( int  MHandle, unsigned int  Color, int  IsNormalLine, float  NormalLineLength, int  IsPolyLine, int  IsCollisionBox);
int  __stdcall dx_MV1SetUseOrigShader( int  UseFlag);
int  __stdcall dx_MV1SetSemiTransDrawMode( int  DrawMode);
MATRIX  __stdcall dx_MV1GetLocalWorldMatrix( int  MHandle);
MATRIX_D  __stdcall dx_MV1GetLocalWorldMatrixD( int  MHandle);
int  __stdcall dx_MV1SetPosition( int  MHandle, VECTOR  Position);
int  __stdcall dx_MV1SetPositionD( int  MHandle, VECTOR_D  Position);
VECTOR  __stdcall dx_MV1GetPosition( int  MHandle);
VECTOR_D  __stdcall dx_MV1GetPositionD( int  MHandle);
int  __stdcall dx_MV1SetScale( int  MHandle, VECTOR  Scale);
VECTOR  __stdcall dx_MV1GetScale( int  MHandle);
int  __stdcall dx_MV1SetRotationXYZ( int  MHandle, VECTOR  Rotate);
VECTOR  __stdcall dx_MV1GetRotationXYZ( int  MHandle);
int  __stdcall dx_MV1SetRotationZYAxis( int  MHandle, VECTOR  ZAxisDirection, VECTOR  YAxisDirection, float  ZAxisTwistRotate);
int  __stdcall dx_MV1SetRotationMatrix( int  MHandle, MATRIX  Matrix);
MATRIX  __stdcall dx_MV1GetRotationMatrix( int  MHandle);
int  __stdcall dx_MV1SetMatrix( int  MHandle, MATRIX  Matrix);
int  __stdcall dx_MV1SetMatrixD( int  MHandle, MATRIX_D  Matrix);
MATRIX  __stdcall dx_MV1GetMatrix( int  MHandle);
MATRIX_D  __stdcall dx_MV1GetMatrixD( int  MHandle);
int  __stdcall dx_MV1SetVisible( int  MHandle, int  VisibleFlag);
int  __stdcall dx_MV1GetVisible( int  MHandle);
int  __stdcall dx_MV1SetMeshCategoryVisible( int  MHandle, int  MeshCategory, int  VisibleFlag);
int  __stdcall dx_MV1GetMeshCategoryVisible( int  MHandle, int  MeshCategory);
int  __stdcall dx_MV1SetDifColorScale( int  MHandle, COLOR_F  Scale);
COLOR_F  __stdcall dx_MV1GetDifColorScale( int  MHandle);
int  __stdcall dx_MV1SetSpcColorScale( int  MHandle, COLOR_F  Scale);
COLOR_F  __stdcall dx_MV1GetSpcColorScale( int  MHandle);
int  __stdcall dx_MV1SetEmiColorScale( int  MHandle, COLOR_F  Scale);
COLOR_F  __stdcall dx_MV1GetEmiColorScale( int  MHandle);
int  __stdcall dx_MV1SetAmbColorScale( int  MHandle, COLOR_F  Scale);
COLOR_F  __stdcall dx_MV1GetAmbColorScale( int  MHandle);
int  __stdcall dx_MV1GetSemiTransState( int  MHandle);
int  __stdcall dx_MV1SetOpacityRate( int  MHandle, float  Rate);
float  __stdcall dx_MV1GetOpacityRate( int  MHandle);
int  __stdcall dx_MV1SetUseDrawMulAlphaColor( int  MHandle, int  Flag);
int  __stdcall dx_MV1GetUseDrawMulAlphaColor( int  MHandle);
int  __stdcall dx_MV1SetUseZBuffer( int  MHandle, int  Flag);
int  __stdcall dx_MV1SetWriteZBuffer( int  MHandle, int  Flag);
int  __stdcall dx_MV1SetZBufferCmpType( int  MHandle, int  CmpType);
int  __stdcall dx_MV1SetZBias( int  MHandle, int  Bias);
int  __stdcall dx_MV1SetUseVertDifColor( int  MHandle, int  UseFlag);
int  __stdcall dx_MV1SetUseVertSpcColor( int  MHandle, int  UseFlag);
int  __stdcall dx_MV1SetSampleFilterMode( int  MHandle, int  FilterMode);
int  __stdcall dx_MV1SetMaxAnisotropy( int  MHandle, int  MaxAnisotropy);
int  __stdcall dx_MV1SetWireFrameDrawFlag( int  MHandle, int  Flag);
int  __stdcall dx_MV1RefreshVertColorFromMaterial( int  MHandle);
int  __stdcall dx_MV1SetPhysicsWorldGravity( int  MHandle, VECTOR  Gravity);
int  __stdcall dx_MV1PhysicsCalculation( int  MHandle, float  MillisecondTime);
int  __stdcall dx_MV1PhysicsResetState( int  MHandle);
int  __stdcall dx_MV1SetUseShapeFlag( int  MHandle, int  UseFlag);
int  __stdcall dx_MV1GetMaterialNumberOrderFlag( int  MHandle);
int  __stdcall dx_MV1AttachAnim( int  MHandle, int  AnimIndex, int  AnimSrcMHandle = -1, int  NameCheck = TRUE);
int  __stdcall dx_MV1DetachAnim( int  MHandle, int  AttachIndex);
int  __stdcall dx_MV1SetAttachAnimTime( int  MHandle, int  AttachIndex, float  Time);
float  __stdcall dx_MV1GetAttachAnimTime( int  MHandle, int  AttachIndex);
float  __stdcall dx_MV1GetAttachAnimTotalTime( int  MHandle, int  AttachIndex);
int  __stdcall dx_MV1SetAttachAnimBlendRate( int  MHandle, int  AttachIndex, float  Rate = 1.0f);
float  __stdcall dx_MV1GetAttachAnimBlendRate( int  MHandle, int  AttachIndex);
int  __stdcall dx_MV1SetAttachAnimBlendRateToFrame( int  MHandle, int  AttachIndex, int  FrameIndex, float  Rate, int  SetChild = TRUE);
float  __stdcall dx_MV1GetAttachAnimBlendRateToFrame( int  MHandle, int  AttachIndex, int  FrameIndex);
int  __stdcall dx_MV1GetAttachAnim( int  MHandle, int  AttachIndex);
int  __stdcall dx_MV1SetAttachAnimUseShapeFlag( int  MHandle, int  AttachIndex, int  UseFlag);
int  __stdcall dx_MV1GetAttachAnimUseShapeFlag( int  MHandle, int  AttachIndex);
VECTOR  __stdcall dx_MV1GetAttachAnimFrameLocalPosition( int  MHandle, int  AttachIndex, int  FrameIndex);
MATRIX  __stdcall dx_MV1GetAttachAnimFrameLocalMatrix( int  MHandle, int  AttachIndex, int  FrameIndex);
int  __stdcall dx_MV1GetAnimNum( int  MHandle);
const TCHAR * __stdcall dx_MV1GetAnimName( int MHandle , int AnimIndex ) ;
int  __stdcall dx_MV1SetAnimName( int  MHandle, int  AnimIndex, const char * AnimName);
int  __stdcall dx_MV1GetAnimIndex( int  MHandle, const char * AnimName);
float  __stdcall dx_MV1GetAnimTotalTime( int  MHandle, int  AnimIndex);
int  __stdcall dx_MV1GetAnimTargetFrameNum( int  MHandle, int  AnimIndex);
const TCHAR * __stdcall dx_MV1GetAnimTargetFrameName( int MHandle , int AnimIndex , int AnimFrameIndex ) ;
int  __stdcall dx_MV1GetAnimTargetFrame( int  MHandle, int  AnimIndex, int  AnimFrameIndex);
int  __stdcall dx_MV1GetAnimTargetFrameKeySetNum( int  MHandle, int  AnimIndex, int  AnimFrameIndex);
int  __stdcall dx_MV1GetAnimTargetFrameKeySet( int  MHandle, int  AnimIndex, int  AnimFrameIndex, int  Index);
int  __stdcall dx_MV1GetAnimKeySetNum( int  MHandle);
int  __stdcall dx_MV1GetAnimKeySetType( int  MHandle, int  AnimKeySetIndex);
int  __stdcall dx_MV1GetAnimKeySetDataType( int  MHandle, int  AnimKeySetIndex);
int  __stdcall dx_MV1GetAnimKeySetTimeType( int  MHandle, int  AnimKeySetIndex);
int  __stdcall dx_MV1GetAnimKeySetDataNum( int  MHandle, int  AnimKeySetIndex);
float  __stdcall dx_MV1GetAnimKeyDataTime( int  MHandle, int  AnimKeySetIndex, int  Index);
int  __stdcall dx_MV1GetAnimKeyDataIndexFromTime( int  MHandle, int  AnimKeySetIndex, float  Time);
FLOAT4  __stdcall dx_MV1GetAnimKeyDataToQuaternion( int  MHandle, int  AnimKeySetIndex, int  Index);
FLOAT4  __stdcall dx_MV1GetAnimKeyDataToQuaternionFromTime( int  MHandle, int  AnimKeySetIndex, float  Time);
VECTOR  __stdcall dx_MV1GetAnimKeyDataToVector( int  MHandle, int  AnimKeySetIndex, int  Index);
VECTOR  __stdcall dx_MV1GetAnimKeyDataToVectorFromTime( int  MHandle, int  AnimKeySetIndex, float  Time);
MATRIX  __stdcall dx_MV1GetAnimKeyDataToMatrix( int  MHandle, int  AnimKeySetIndex, int  Index);
MATRIX  __stdcall dx_MV1GetAnimKeyDataToMatrixFromTime( int  MHandle, int  AnimKeySetIndex, float  Time);
float  __stdcall dx_MV1GetAnimKeyDataToFlat( int  MHandle, int  AnimKeySetIndex, int  Index);
float  __stdcall dx_MV1GetAnimKeyDataToFlatFromTime( int  MHandle, int  AnimKeySetIndex, float  Time);
float  __stdcall dx_MV1GetAnimKeyDataToLinear( int  MHandle, int  AnimKeySetIndex, int  Index);
float  __stdcall dx_MV1GetAnimKeyDataToLinearFromTime( int  MHandle, int  AnimKeySetIndex, float  Time);
int  __stdcall dx_MV1GetMaterialNum( int  MHandle);
const TCHAR * __stdcall dx_MV1GetMaterialName( int MHandle , int MaterialIndex ) ;
int  __stdcall dx_MV1SetMaterialTypeAll( int  MHandle, int  Type);
int  __stdcall dx_MV1SetMaterialType( int  MHandle, int  MaterialIndex, int  Type);
int  __stdcall dx_MV1GetMaterialType( int  MHandle, int  MaterialIndex);
int  __stdcall dx_MV1SetMaterialDifColor( int  MHandle, int  MaterialIndex, COLOR_F  Color);
COLOR_F  __stdcall dx_MV1GetMaterialDifColor( int  MHandle, int  MaterialIndex);
int  __stdcall dx_MV1SetMaterialSpcColor( int  MHandle, int  MaterialIndex, COLOR_F  Color);
COLOR_F  __stdcall dx_MV1GetMaterialSpcColor( int  MHandle, int  MaterialIndex);
int  __stdcall dx_MV1SetMaterialEmiColor( int  MHandle, int  MaterialIndex, COLOR_F  Color);
COLOR_F  __stdcall dx_MV1GetMaterialEmiColor( int  MHandle, int  MaterialIndex);
int  __stdcall dx_MV1SetMaterialAmbColor( int  MHandle, int  MaterialIndex, COLOR_F  Color);
COLOR_F  __stdcall dx_MV1GetMaterialAmbColor( int  MHandle, int  MaterialIndex);
int  __stdcall dx_MV1SetMaterialSpcPower( int  MHandle, int  MaterialIndex, float  Power);
float  __stdcall dx_MV1GetMaterialSpcPower( int  MHandle, int  MaterialIndex);
int  __stdcall dx_MV1SetMaterialDifMapTexture( int  MHandle, int  MaterialIndex, int  TexIndex);
int  __stdcall dx_MV1GetMaterialDifMapTexture( int  MHandle, int  MaterialIndex);
int  __stdcall dx_MV1SetMaterialSpcMapTexture( int  MHandle, int  MaterialIndex, int  TexIndex);
int  __stdcall dx_MV1GetMaterialSpcMapTexture( int  MHandle, int  MaterialIndex);
int  __stdcall dx_MV1GetMaterialNormalMapTexture( int  MHandle, int  MaterialIndex);
int  __stdcall dx_MV1SetMaterialDifGradTexture( int  MHandle, int  MaterialIndex, int  TexIndex);
int  __stdcall dx_MV1GetMaterialDifGradTexture( int  MHandle, int  MaterialIndex);
int  __stdcall dx_MV1SetMaterialSpcGradTexture( int  MHandle, int  MaterialIndex, int  TexIndex);
int  __stdcall dx_MV1GetMaterialSpcGradTexture( int  MHandle, int  MaterialIndex);
int  __stdcall dx_MV1SetMaterialSphereMapTexture( int  MHandle, int  MaterialIndex, int  TexIndex);
int  __stdcall dx_MV1GetMaterialSphereMapTexture( int  MHandle, int  MaterialIndex);
int  __stdcall dx_MV1SetMaterialDifGradBlendTypeAll( int  MHandle, int  BlendType);
int  __stdcall dx_MV1SetMaterialDifGradBlendType( int  MHandle, int  MaterialIndex, int  BlendType);
int  __stdcall dx_MV1GetMaterialDifGradBlendType( int  MHandle, int  MaterialIndex);
int  __stdcall dx_MV1SetMaterialSpcGradBlendTypeAll( int  MHandle, int  BlendType);
int  __stdcall dx_MV1SetMaterialSpcGradBlendType( int  MHandle, int  MaterialIndex, int  BlendType);
int  __stdcall dx_MV1GetMaterialSpcGradBlendType( int  MHandle, int  MaterialIndex);
int  __stdcall dx_MV1SetMaterialSphereMapBlendTypeAll( int  MHandle, int  BlendType);
int  __stdcall dx_MV1SetMaterialSphereMapBlendType( int  MHandle, int  MaterialIndex, int  BlendType);
int  __stdcall dx_MV1GetMaterialSphereMapBlendType( int  MHandle, int  MaterialIndex);
int  __stdcall dx_MV1SetMaterialOutLineWidthAll( int  MHandle, float  Width);
int  __stdcall dx_MV1SetMaterialOutLineWidth( int  MHandle, int  MaterialIndex, float  Width);
float  __stdcall dx_MV1GetMaterialOutLineWidth( int  MHandle, int  MaterialIndex);
int  __stdcall dx_MV1SetMaterialOutLineDotWidthAll( int  MHandle, float  Width);
int  __stdcall dx_MV1SetMaterialOutLineDotWidth( int  MHandle, int  MaterialIndex, float  Width);
float  __stdcall dx_MV1GetMaterialOutLineDotWidth( int  MHandle, int  MaterialIndex);
int  __stdcall dx_MV1SetMaterialOutLineColorAll( int  MHandle, COLOR_F  Color);
int  __stdcall dx_MV1SetMaterialOutLineColor( int  MHandle, int  MaterialIndex, COLOR_F  Color);
COLOR_F  __stdcall dx_MV1GetMaterialOutLineColor( int  MHandle, int  MaterialIndex);
int  __stdcall dx_MV1SetMaterialDrawBlendModeAll( int  MHandle, int  BlendMode);
int  __stdcall dx_MV1SetMaterialDrawBlendMode( int  MHandle, int  MaterialIndex, int  BlendMode);
int  __stdcall dx_MV1GetMaterialDrawBlendMode( int  MHandle, int  MaterialIndex);
int  __stdcall dx_MV1SetMaterialDrawBlendParamAll( int  MHandle, int  BlendParam);
int  __stdcall dx_MV1SetMaterialDrawBlendParam( int  MHandle, int  MaterialIndex, int  BlendParam);
int  __stdcall dx_MV1GetMaterialDrawBlendParam( int  MHandle, int  MaterialIndex);
int  __stdcall dx_MV1SetMaterialDrawAlphaTestAll( int  MHandle, int  Enable, int  Mode, int  Param);
int  __stdcall dx_MV1SetMaterialDrawAlphaTest( int  MHandle, int  MaterialIndex, int  Enable, int  Mode, int  Param);
int  __stdcall dx_MV1GetMaterialDrawAlphaTestEnable( int  MHandle, int  MaterialIndex);
int  __stdcall dx_MV1GetMaterialDrawAlphaTestMode( int  MHandle, int  MaterialIndex);
int  __stdcall dx_MV1GetMaterialDrawAlphaTestParam( int  MHandle, int  MaterialIndex);
int  __stdcall dx_MV1GetTextureNum( int  MHandle);
const TCHAR * __stdcall dx_MV1GetTextureName( int MHandle , int TexIndex ) ;
int  __stdcall dx_MV1SetTextureColorFilePath( int  MHandle, int  TexIndex, const char * FilePath);
const TCHAR * __stdcall dx_MV1GetTextureColorFilePath( int MHandle , int TexIndex ) ;
int  __stdcall dx_MV1SetTextureAlphaFilePath( int  MHandle, int  TexIndex, const char * FilePath);
const TCHAR * __stdcall dx_MV1GetTextureAlphaFilePath( int MHandle , int TexIndex ) ;
int  __stdcall dx_MV1SetTextureGraphHandle( int  MHandle, int  TexIndex, int  GrHandle, int  SemiTransFlag);
int  __stdcall dx_MV1GetTextureGraphHandle( int  MHandle, int  TexIndex);
int  __stdcall dx_MV1SetTextureAddressMode( int  MHandle, int  TexIndex, int  AddrUMode, int  AddrVMode);
int  __stdcall dx_MV1GetTextureAddressModeU( int  MHandle, int  TexIndex);
int  __stdcall dx_MV1GetTextureAddressModeV( int  MHandle, int  TexIndex);
int  __stdcall dx_MV1GetTextureWidth( int  MHandle, int  TexIndex);
int  __stdcall dx_MV1GetTextureHeight( int  MHandle, int  TexIndex);
int  __stdcall dx_MV1GetTextureSemiTransState( int  MHandle, int  TexIndex);
int  __stdcall dx_MV1SetTextureBumpImageFlag( int  MHandle, int  TexIndex, int  Flag);
int  __stdcall dx_MV1GetTextureBumpImageFlag( int  MHandle, int  TexIndex);
int  __stdcall dx_MV1SetTextureBumpImageNextPixelLength( int  MHandle, int  TexIndex, float  Length);
float  __stdcall dx_MV1GetTextureBumpImageNextPixelLength( int  MHandle, int  TexIndex);
int  __stdcall dx_MV1SetTextureSampleFilterMode( int  MHandle, int  TexIndex, int  FilterMode);
int  __stdcall dx_MV1GetTextureSampleFilterMode( int  MHandle, int  TexIndex);
int  __stdcall dx_MV1LoadTexture( const char * FilePath);
int  __stdcall dx_MV1GetFrameNum( int  MHandle);
int  __stdcall dx_MV1SearchFrame( int  MHandle, const char * FrameName);
int  __stdcall dx_MV1SearchFrameChild( int  MHandle, int  FrameIndex = -1, const char * ChildName = NULL);
const TCHAR * __stdcall dx_MV1GetFrameName( int MHandle , int FrameIndex ) ;
int  __stdcall dx_MV1GetFrameName2( int  MHandle, int  FrameIndex, TCHAR *  StrBuffer);
int  __stdcall dx_MV1GetFrameParent( int  MHandle, int  FrameIndex);
int  __stdcall dx_MV1GetFrameChildNum( int  MHandle, int  FrameIndex = -1);
int  __stdcall dx_MV1GetFrameChild( int  MHandle, int  FrameIndex = -1, int  ChildIndex = 0);
VECTOR  __stdcall dx_MV1GetFramePosition( int  MHandle, int  FrameIndex);
VECTOR_D  __stdcall dx_MV1GetFramePositionD( int  MHandle, int  FrameIndex);
MATRIX  __stdcall dx_MV1GetFrameBaseLocalMatrix( int  MHandle, int  FrameIndex);
MATRIX_D  __stdcall dx_MV1GetFrameBaseLocalMatrixD( int  MHandle, int  FrameIndex);
MATRIX  __stdcall dx_MV1GetFrameLocalMatrix( int  MHandle, int  FrameIndex);
MATRIX_D  __stdcall dx_MV1GetFrameLocalMatrixD( int  MHandle, int  FrameIndex);
MATRIX  __stdcall dx_MV1GetFrameLocalWorldMatrix( int  MHandle, int  FrameIndex);
MATRIX_D  __stdcall dx_MV1GetFrameLocalWorldMatrixD( int  MHandle, int  FrameIndex);
int  __stdcall dx_MV1SetFrameUserLocalMatrix( int  MHandle, int  FrameIndex, MATRIX  Matrix);
int  __stdcall dx_MV1SetFrameUserLocalMatrixD( int  MHandle, int  FrameIndex, MATRIX_D  Matrix);
int  __stdcall dx_MV1ResetFrameUserLocalMatrix( int  MHandle, int  FrameIndex);
VECTOR  __stdcall dx_MV1GetFrameMaxVertexLocalPosition( int  MHandle, int  FrameIndex);
VECTOR_D  __stdcall dx_MV1GetFrameMaxVertexLocalPositionD( int  MHandle, int  FrameIndex);
VECTOR  __stdcall dx_MV1GetFrameMinVertexLocalPosition( int  MHandle, int  FrameIndex);
VECTOR_D  __stdcall dx_MV1GetFrameMinVertexLocalPositionD( int  MHandle, int  FrameIndex);
VECTOR  __stdcall dx_MV1GetFrameAvgVertexLocalPosition( int  MHandle, int  FrameIndex);
VECTOR_D  __stdcall dx_MV1GetFrameAvgVertexLocalPositionD( int  MHandle, int  FrameIndex);
int  __stdcall dx_MV1GetFrameTriangleNum( int  MHandle, int  FrameIndex);
int  __stdcall dx_MV1GetFrameMeshNum( int  MHandle, int  FrameIndex);
int  __stdcall dx_MV1GetFrameMesh( int  MHandle, int  FrameIndex, int  Index);
int  __stdcall dx_MV1SetFrameVisible( int  MHandle, int  FrameIndex, int  VisibleFlag);
int  __stdcall dx_MV1GetFrameVisible( int  MHandle, int  FrameIndex);
int  __stdcall dx_MV1SetFrameDifColorScale( int  MHandle, int  FrameIndex, COLOR_F  Scale);
int  __stdcall dx_MV1SetFrameSpcColorScale( int  MHandle, int  FrameIndex, COLOR_F  Scale);
int  __stdcall dx_MV1SetFrameEmiColorScale( int  MHandle, int  FrameIndex, COLOR_F  Scale);
int  __stdcall dx_MV1SetFrameAmbColorScale( int  MHandle, int  FrameIndex, COLOR_F  Scale);
COLOR_F  __stdcall dx_MV1GetFrameDifColorScale( int  MHandle, int  FrameIndex);
COLOR_F  __stdcall dx_MV1GetFrameSpcColorScale( int  MHandle, int  FrameIndex);
COLOR_F  __stdcall dx_MV1GetFrameEmiColorScale( int  MHandle, int  FrameIndex);
COLOR_F  __stdcall dx_MV1GetFrameAmbColorScale( int  MHandle, int  FrameIndex);
int  __stdcall dx_MV1GetFrameSemiTransState( int  MHandle, int  FrameIndex);
int  __stdcall dx_MV1SetFrameOpacityRate( int  MHandle, int  FrameIndex, float  Rate);
float  __stdcall dx_MV1GetFrameOpacityRate( int  MHandle, int  FrameIndex);
int  __stdcall dx_MV1SetFrameBaseVisible( int  MHandle, int  FrameIndex, int  VisibleFlag);
int  __stdcall dx_MV1GetFrameBaseVisible( int  MHandle, int  FrameIndex);
int  __stdcall dx_MV1SetFrameTextureAddressTransform( int  MHandle, int  FrameIndex, float  TransU, float  TransV, float  ScaleU, float  ScaleV, float  RotCenterU, float  RotCenterV, float  Rotate);
int  __stdcall dx_MV1SetFrameTextureAddressTransformMatrix( int  MHandle, int  FrameIndex, MATRIX  Matrix);
int  __stdcall dx_MV1ResetFrameTextureAddressTransform( int  MHandle, int  FrameIndex);
int  __stdcall dx_MV1GetMeshNum( int  MHandle);
int  __stdcall dx_MV1GetMeshMaterial( int  MHandle, int  MeshIndex);
int  __stdcall dx_MV1GetMeshTriangleNum( int  MHandle, int  MeshIndex);
int  __stdcall dx_MV1SetMeshVisible( int  MHandle, int  MeshIndex, int  VisibleFlag);
int  __stdcall dx_MV1GetMeshVisible( int  MHandle, int  MeshIndex);
int  __stdcall dx_MV1SetMeshDifColorScale( int  MHandle, int  MeshIndex, COLOR_F  Scale);
int  __stdcall dx_MV1SetMeshSpcColorScale( int  MHandle, int  MeshIndex, COLOR_F  Scale);
int  __stdcall dx_MV1SetMeshEmiColorScale( int  MHandle, int  MeshIndex, COLOR_F  Scale);
int  __stdcall dx_MV1SetMeshAmbColorScale( int  MHandle, int  MeshIndex, COLOR_F  Scale);
COLOR_F  __stdcall dx_MV1GetMeshDifColorScale( int  MHandle, int  MeshIndex);
COLOR_F  __stdcall dx_MV1GetMeshSpcColorScale( int  MHandle, int  MeshIndex);
COLOR_F  __stdcall dx_MV1GetMeshEmiColorScale( int  MHandle, int  MeshIndex);
COLOR_F  __stdcall dx_MV1GetMeshAmbColorScale( int  MHandle, int  MeshIndex);
int  __stdcall dx_MV1SetMeshOpacityRate( int  MHandle, int  MeshIndex, float  Rate);
float  __stdcall dx_MV1GetMeshOpacityRate( int  MHandle, int  MeshIndex);
int  __stdcall dx_MV1SetMeshDrawBlendMode( int  MHandle, int  MeshIndex, int  BlendMode);
int  __stdcall dx_MV1SetMeshDrawBlendParam( int  MHandle, int  MeshIndex, int  BlendParam);
int  __stdcall dx_MV1GetMeshDrawBlendMode( int  MHandle, int  MeshIndex);
int  __stdcall dx_MV1GetMeshDrawBlendParam( int  MHandle, int  MeshIndex);
int  __stdcall dx_MV1SetMeshBaseVisible( int  MHandle, int  MeshIndex, int  VisibleFlag);
int  __stdcall dx_MV1GetMeshBaseVisible( int  MHandle, int  MeshIndex);
int  __stdcall dx_MV1SetMeshBackCulling( int  MHandle, int  MeshIndex, int  CullingFlag);
int  __stdcall dx_MV1GetMeshBackCulling( int  MHandle, int  MeshIndex);
VECTOR  __stdcall dx_MV1GetMeshMaxPosition( int  MHandle, int  MeshIndex);
VECTOR  __stdcall dx_MV1GetMeshMinPosition( int  MHandle, int  MeshIndex);
int  __stdcall dx_MV1GetMeshTListNum( int  MHandle, int  MeshIndex);
int  __stdcall dx_MV1GetMeshTList( int  MHandle, int  MeshIndex, int  Index);
int  __stdcall dx_MV1GetMeshSemiTransState( int  MHandle, int  MeshIndex);
int  __stdcall dx_MV1SetMeshUseVertDifColor( int  MHandle, int  MeshIndex, int  UseFlag);
int  __stdcall dx_MV1SetMeshUseVertSpcColor( int  MHandle, int  MeshIndex, int  UseFlag);
int  __stdcall dx_MV1GetMeshUseVertDifColor( int  MHandle, int  MeshIndex);
int  __stdcall dx_MV1GetMeshUseVertSpcColor( int  MHandle, int  MeshIndex);
int  __stdcall dx_MV1GetMeshShapeFlag( int  MHandle, int  MeshIndex);
int  __stdcall dx_MV1GetShapeNum( int  MHandle);
int  __stdcall dx_MV1SearchShape( int  MHandle, const char * ShapeName);
const TCHAR * __stdcall dx_MV1GetShapeName( int MHandle , int ShapeIndex ) ;
int  __stdcall dx_MV1GetShapeTargetMeshNum( int  MHandle, int  ShapeIndex);
int  __stdcall dx_MV1GetShapeTargetMesh( int  MHandle, int  ShapeIndex, int  Index);
int  __stdcall dx_MV1SetShapeRate( int  MHandle, int  ShapeIndex, float  Rate);
float  __stdcall dx_MV1GetShapeRate( int  MHandle, int  ShapeIndex);
int  __stdcall dx_MV1GetTriangleListNum( int  MHandle);
int  __stdcall dx_MV1GetTriangleListVertexType( int  MHandle, int  TListIndex);
int  __stdcall dx_MV1GetTriangleListPolygonNum( int  MHandle, int  TListIndex);
int  __stdcall dx_MV1GetTriangleListVertexNum( int  MHandle, int  TListIndex);
int  __stdcall dx_MV1GetTriangleListLocalWorldMatrixNum( int  MHandle, int  TListIndex);
MATRIX  __stdcall dx_MV1GetTriangleListLocalWorldMatrix( int  MHandle, int  TListIndex, int  LWMatrixIndex);
int  __stdcall dx_MV1GetTriangleListPolygonVertexPosition( int  MHandle, int  TListIndex, int  PolygonIndex, VECTOR *  VertexPositions);
int  __stdcall dx_MV1SetupCollInfo( int  MHandle, int  FrameIndex = -1, int  XDivNum = 32, int  YDivNum = 8, int  ZDivNum = 32);
int  __stdcall dx_MV1TerminateCollInfo( int  MHandle, int  FrameIndex = -1);
int  __stdcall dx_MV1RefreshCollInfo( int  MHandle, int  FrameIndex = -1);
MV1_COLL_RESULT_POLY  __stdcall dx_MV1CollCheck_Line( int  MHandle, int  FrameIndex, VECTOR  PosStart, VECTOR  PosEnd);
MV1_COLL_RESULT_POLY_DIM  __stdcall dx_MV1CollCheck_LineDim( int  MHandle, int  FrameIndex, VECTOR  PosStart, VECTOR  PosEnd);
MV1_COLL_RESULT_POLY_DIM  __stdcall dx_MV1CollCheck_Sphere( int  MHandle, int  FrameIndex, VECTOR  CenterPos, float  r);
MV1_COLL_RESULT_POLY_DIM  __stdcall dx_MV1CollCheck_Capsule( int  MHandle, int  FrameIndex, VECTOR  Pos1, VECTOR  Pos2, float  r);
MV1_COLL_RESULT_POLY_DIM  __stdcall dx_MV1CollCheck_Triangle( int  MHandle, int  FrameIndex, VECTOR  Pos1, VECTOR  Pos2, VECTOR  Pos3);
MV1_COLL_RESULT_POLY  __stdcall dx_MV1CollCheck_GetResultPoly( MV1_COLL_RESULT_POLY_DIM  ResultPolyDim, int  PolyNo);
int  __stdcall dx_MV1CollResultPolyDimTerminate( MV1_COLL_RESULT_POLY_DIM  ResultPolyDim);
int  __stdcall dx_MV1SetupReferenceMesh( int  MHandle, int  FrameIndex, int  IsTransform, int  IsPositionOnly = FALSE);
int  __stdcall dx_MV1TerminateReferenceMesh( int  MHandle, int  FrameIndex, int  IsTransform, int  IsPositionOnly = FALSE);
int  __stdcall dx_MV1RefreshReferenceMesh( int  MHandle, int  FrameIndex, int  IsTransform, int  IsPositionOnly = FALSE);
MV1_REF_POLYGONLIST __stdcall dx_MV1GetReferenceMesh( int MHandle , int FrameIndex , int IsTransform , int IsPositionOnly = FALSE ) ;
int __stdcall dx_GetResourceInfo( const TCHAR * ResourceName , const TCHAR * ResourceType , void * * DataPointerP , int * DataSizeP ) ;
const TCHAR * __stdcall dx_GetResourceIDString( int ResourceID ) ;
int  __stdcall dx_GetWindowCRect( RECT *  RectBuf);
int  __stdcall dx_GetWindowActiveFlag( void);
int  __stdcall dx_GetWindowMinSizeFlag( void);
int  __stdcall dx_GetWindowMaxSizeFlag( void);
int  __stdcall dx_GetActiveFlag( void);
HWND __stdcall dx_GetMainWindowHandle( void );
int  __stdcall dx_GetWindowModeFlag( void);
int  __stdcall dx_GetDefaultState( int *  SizeX, int *  SizeY, int *  ColorBitDepth, int *  RefreshRate, int *  LeftTopX, int *  LeftTopY);
int  __stdcall dx_GetNoActiveState( int  ResetFlag = TRUE);
int  __stdcall dx_GetMouseDispFlag( void);
int  __stdcall dx_GetAlwaysRunFlag( void);
int  __stdcall dx__GetSystemInfo( int *  DxLibVer, int *  DirectXVer, int *  WindowsVer);
int  __stdcall dx_GetPcInfo( TCHAR *  OSString, TCHAR *  DirectXString, TCHAR *  CPUString, int *  CPUSpeed, double *  FreeMemorySize, double *  TotalMemorySize, TCHAR *  VideoDriverFileName, TCHAR *  VideoDriverString, double *  FreeVideoMemorySize, double *  TotalVideoMemorySize);
int  __stdcall dx_GetUseMMXFlag( void);
int  __stdcall dx_GetUseSSEFlag( void);
int  __stdcall dx_GetUseSSE2Flag( void);
int  __stdcall dx_GetWindowCloseFlag( void);
HINSTANCE __stdcall dx_GetTaskInstance( void );
int  __stdcall dx_GetUseWindowRgnFlag( void);
int __stdcall dx_GetWindowSizeChangeEnableFlag( int * FitScreen = NULL ) ;
double __stdcall dx_GetWindowSizeExtendRate( double * ExRateX = NULL , double * ExRateY = NULL ) ;
int  __stdcall dx_GetWindowSize( int *  Width, int *  Height);
int  __stdcall dx_GetWindowPosition( int *  x, int *  y);
int  __stdcall dx_GetWindowUserCloseFlag( int  StateResetFlag = FALSE);
int  __stdcall dx_GetNotDrawFlag( void);
int  __stdcall dx_GetPaintMessageFlag( void);
int  __stdcall dx_GetValidHiPerformanceCounter( void);
TCHAR __stdcall dx_GetInputSystemChar( int DeleteFlag ) ;
int  __stdcall dx_ChangeWindowMode( int  Flag);
int  __stdcall dx_SetUseCharSet( int  CharSet);
int  __stdcall dx_LoadPauseGraph( const char * FileName);
int  __stdcall dx_LoadPauseGraphFromMem( const void * MemImage, int  MemImageSize);
int __stdcall dx_SetActiveStateChangeCallBackFunction( int ( *CallBackFunction )( int ActiveState , void * UserData ) , void * UserData ) ;
int  __stdcall dx_SetWindowText( const char * WindowText);
int  __stdcall dx_SetMainWindowText( const char * WindowText);
int  __stdcall dx_SetMainWindowClassName( const char * ClassName);
int  __stdcall dx_SetAlwaysRunFlag( int  Flag);
int  __stdcall dx_SetWindowIconID( int  ID);
int  __stdcall dx_SetWindowIconHandle( HICON  Icon);
int __stdcall dx_SetUseASyncChangeWindowModeFunction( int Flag , void ( *CallBackFunction )( void * ) , void * Data ) ;
int  __stdcall dx_SetWindowStyleMode( int  Mode);
int  __stdcall dx_SetWindowZOrder( int  ZType);
int  __stdcall dx_SetWindowSizeChangeEnableFlag( int  Flag, int  FitScreen = TRUE);
int  __stdcall dx_SetWindowSizeExtendRate( double  ExRateX, double  ExRateY = -1.0);
int  __stdcall dx_SetWindowSize( int  Width, int  Height);
int  __stdcall dx_SetWindowMaxSize( int  MaxWidth, int  MaxHeight);
int  __stdcall dx_SetWindowMinSize( int  MinWidth, int  MinHeight);
int  __stdcall dx_SetWindowPosition( int  x, int  y);
int  __stdcall dx_SetSysCommandOffFlag( int  Flag, const char * HookDllPath = NULL);
int __stdcall dx_SetHookWinProc( WNDPROC WinProc ) ;
int  __stdcall dx_SetUseHookWinProcReturnValue( int  UseFlag);
int  __stdcall dx_SetDoubleStartValidFlag( int  Flag);
int  __stdcall dx_AddMessageTakeOverWindow( HWND  Window);
int  __stdcall dx_SubMessageTakeOverWindow( HWND  Window);
int  __stdcall dx_SetWindowInitPosition( int  x, int  y);
int  __stdcall dx_SetNotWinFlag( int  Flag);
int  __stdcall dx_SetNotDrawFlag( int  Flag);
int  __stdcall dx_SetNotSoundFlag( int  Flag);
int  __stdcall dx_SetNotInputFlag( int  Flag);
int  __stdcall dx_SetDialogBoxHandle( HWND  WindowHandle);
int  __stdcall dx_SetWindowVisibleFlag( int  Flag);
int  __stdcall dx_SetWindowMinimizeFlag( int  Flag);
int  __stdcall dx_SetWindowUserCloseEnableFlag( int  Flag);
int  __stdcall dx_SetDxLibEndPostQuitMessageFlag( int  Flag);
int  __stdcall dx_SetUserWindow( HWND  WindowHandle);
int  __stdcall dx_SetUserChildWindow( HWND  WindowHandle);
int  __stdcall dx_SetUserWindowMessageProcessDXLibFlag( int  Flag);
int  __stdcall dx_SetUseFPUPreserveFlag( int  Flag);
int  __stdcall dx_SetValidMousePointerWindowOutClientAreaMoveFlag( int  Flag);
int  __stdcall dx_SetUseBackBufferTransColorFlag( int  Flag);
int  __stdcall dx_SetUseUpdateLayerdWindowFlag( int  Flag);
int __stdcall dx_SetResourceModule( HMODULE ResourceModule ) ;
int  __stdcall dx_SetUseDxLibWM_PAINTProcess( int  Flag);
int  __stdcall dx_GetClipboardText( TCHAR *  DestBuffer);
int  __stdcall dx_SetClipboardText( const char * Text);
int  __stdcall dx_SetDragFileValidFlag( int  Flag);
int  __stdcall dx_DragFileInfoClear( void);
int  __stdcall dx_GetDragFilePath( TCHAR *  FilePathBuffer);
int  __stdcall dx_GetDragFileNum( void);
HRGN __stdcall dx_CreateRgnFromGraph( int Width , int Height , const void * MaskData , int Pitch , int Byte ) ;
HRGN __stdcall dx_CreateRgnFromBaseImage( BASEIMAGE * BaseImage , int TransColorR , int TransColorG , int TransColorB ) ;
int  __stdcall dx_SetWindowRgnGraph( const char * FileName);
int  __stdcall dx_UpdateTransColorWindowRgn( void);
int  __stdcall dx_SetupToolBar( const char * BitmapName, int  DivNum, int  ResourceID = -1);
int  __stdcall dx_AddToolBarButton( int  Type, int  State, int  ImageIndex, int  ID);
int  __stdcall dx_AddToolBarSep( void);
int  __stdcall dx_GetToolBarButtonState( int  ID);
int  __stdcall dx_SetToolBarButtonState( int  ID, int  State);
int  __stdcall dx_DeleteAllToolBarButton( void);
int  __stdcall dx_SetUseMenuFlag( int  Flag);
int  __stdcall dx_SetUseKeyAccelFlag( int  Flag);
int  __stdcall dx_AddKeyAccel( const char * ItemName, int  ItemID, int  KeyCode, int  CtrlFlag, int  AltFlag, int  ShiftFlag);
int  __stdcall dx_AddKeyAccel_Name( const char * ItemName, int  KeyCode, int  CtrlFlag, int  AltFlag, int  ShiftFlag);
int  __stdcall dx_AddKeyAccel_ID( int  ItemID, int  KeyCode, int  CtrlFlag, int  AltFlag, int  ShiftFlag);
int  __stdcall dx_ClearKeyAccel( void);
int  __stdcall dx_AddMenuItem( int  AddType, const char * ItemName, int  ItemID, int  SeparatorFlag, const char * NewItemName = NULL, int  NewItemID = -1);
int  __stdcall dx_DeleteMenuItem( const char * ItemName, int  ItemID);
int  __stdcall dx_CheckMenuItemSelect( const char * ItemName, int  ItemID);
int  __stdcall dx_SetMenuItemEnable( const char * ItemName, int  ItemID, int  EnableFlag);
int  __stdcall dx_SetMenuItemMark( const char * ItemName, int  ItemID, int  Mark);
int  __stdcall dx_CheckMenuItemSelectAll( void);
int  __stdcall dx_AddMenuItem_Name( const char * ParentItemName, const char * NewItemName);
int  __stdcall dx_AddMenuLine_Name( const char * ParentItemName);
int  __stdcall dx_InsertMenuItem_Name( const char * ItemName, const char * NewItemName);
int  __stdcall dx_InsertMenuLine_Name( const char * ItemName);
int  __stdcall dx_DeleteMenuItem_Name( const char * ItemName);
int  __stdcall dx_CheckMenuItemSelect_Name( const char * ItemName);
int  __stdcall dx_SetMenuItemEnable_Name( const char * ItemName, int  EnableFlag);
int  __stdcall dx_SetMenuItemMark_Name( const char * ItemName, int  Mark);
int  __stdcall dx_AddMenuItem_ID( int  ParentItemID, const char * NewItemName, int  NewItemID = -1);
int  __stdcall dx_AddMenuLine_ID( int  ParentItemID);
int  __stdcall dx_InsertMenuItem_ID( int  ItemID, int  NewItemID);
int  __stdcall dx_InsertMenuLine_ID( int  ItemID, int  NewItemID);
int  __stdcall dx_DeleteMenuItem_ID( int  ItemID);
int  __stdcall dx_CheckMenuItemSelect_ID( int  ItemID);
int  __stdcall dx_SetMenuItemEnable_ID( int  ItemID, int  EnableFlag);
int  __stdcall dx_SetMenuItemMark_ID( int  ItemID, int  Mark);
int  __stdcall dx_DeleteMenuItemAll( void);
int  __stdcall dx_ClearMenuItemSelect( void);
int  __stdcall dx_GetMenuItemID( const char * ItemName);
int  __stdcall dx_GetMenuItemName( int  ItemID, TCHAR *  NameBuffer);
int  __stdcall dx_LoadMenuResource( int  MenuResourceID);
int __stdcall dx_SetMenuItemSelectCallBackFunction( void ( *CallBackFunction )( const TCHAR * ItemName , int ItemID ) ) ;
int __stdcall dx_SetWindowMenu( int MenuID , int ( *MenuProc )( WORD ID ) ) ;
int  __stdcall dx_SetDisplayMenuFlag( int  Flag);
int  __stdcall dx_GetDisplayMenuFlag( void);
int  __stdcall dx_GetUseMenuFlag( void);
int  __stdcall dx_SetAutoMenuDisplayFlag( int  Flag);
int  __stdcall dx_SetKeyExclusiveCooperativeLevelFlag( int  Flag);
int  __stdcall dx_SetKeyboardNotDirectInputFlag( int  Flag);
int  __stdcall dx_SetUseDirectInputFlag( int  Flag);
int  __stdcall dx_SetUseXInputFlag( int  Flag);
int __stdcall dx_GetJoypadGUID( int PadIndex , GUID * GuidInstanceBuffer , GUID * GuidProductBuffer = NULL ) ;
int  __stdcall dx_GetJoypadName( int  InputType, TCHAR *  InstanceNameBuffer, TCHAR *  ProductNameBuffer);
int  __stdcall dx_ConvertKeyCodeToVirtualKey( int  KeyCode);
int  __stdcall dx_ConvertVirtualKeyToKeyCode( int  VirtualKey);
int __stdcall dx_LoadGraphToResource( int ResourceID ) ;
int  __stdcall dx_LoadDivGraphToResource( int  ResourceID, int  AllNum, int  XNum, int  YNum, int  XSize, int  YSize, int *  HandleBuf);
int __stdcall dx_LoadGraphToResource_2( const TCHAR * ResourceName , const TCHAR * ResourceType ) ;
int  __stdcall dx_LoadDivGraphToResource_2( const char * ResourceName, const char * ResourceType, int  AllNum, int  XNum, int  YNum, int  XSize, int  YSize, int *  HandleBuf);
int  __stdcall dx_BltBackScreenToWindow( HWND  Window, int  ClientX, int  ClientY);
int  __stdcall dx_BltRectBackScreenToWindow( HWND  Window, RECT  BackScreenRect, RECT  WindowClientRect);
int  __stdcall dx_SetScreenFlipTargetWindow( HWND  TargetWindow);
int  __stdcall dx_SetMultiThreadFlag( int  Flag);
int  __stdcall dx_SetUseDirectDrawDeviceIndex( int  Index);
int  __stdcall dx_SetAeroDisableFlag( int  Flag);
int  __stdcall dx_SetUseDirect3D9Ex( int  Flag);
int  __stdcall dx_SetUseDirect3D11( int  Flag);
int  __stdcall dx_SetUseDirect3D11MinFeatureLevel( int  Level);
int  __stdcall dx_SetUseDirect3DVersion( int  Version);
int  __stdcall dx_GetUseDirect3DVersion( void);
int  __stdcall dx_GetUseDirect3D11FeatureLevel( void);
int  __stdcall dx_SetUseDirectDrawFlag( int  Flag);
int  __stdcall dx_SetUseGDIFlag( int  Flag);
int  __stdcall dx_GetUseGDIFlag( void);
int __stdcall dx_SetDDrawUseGuid( const GUID * Guid ) ;
const void * __stdcall dx_GetUseDDrawObj( void );
const GUID * __stdcall dx_GetDirectDrawDeviceGUID( int Number ) ;
int  __stdcall dx_GetDirectDrawDeviceDescription( int  Number, char *  StringBuffer);
int  __stdcall dx_GetDirectDrawDeviceNum( void);
const void * __stdcall dx_GetUseDirect3DDevice9( void);
const void * __stdcall dx_GetUseDirect3D9BackBufferSurface( void);
const void * __stdcall dx_GetUseDirect3D11Device( void);
const void * __stdcall dx_GetUseDirect3D11DeviceContext( void);
const void * __stdcall dx_GetUseDirect3D11BackBufferTexture2D( void);
const void * __stdcall dx_GetUseDirect3D11DepthStencilTexture2D( void);
int  __stdcall dx_RefreshDxLibDirect3DSetting( void);
int  __stdcall dx_ColorKaiseki( const void * PixelData, COLORDATA *  ColorData);
int __stdcall dx_BmpBltToMask( HBITMAP Bmp , int BmpPointX , int BmpPointY , int MaskHandle ) ;
HANDLE  __stdcall dx_AddFontFile( const char * FontFilePath);
HANDLE  __stdcall dx_AddFontFileFromMem( const void * FontFileImage, int  FontFileImageSize);
int  __stdcall dx_RemoveFontFile( HANDLE  FontHandle);
int  __stdcall dx_CreateFontDataFile( const char * SaveFilePath, const char * FontName, int  Size, int  BitDepth, int  Thick, int  Italic = FALSE, int  CharSet = -1, const char * SaveCharaList = NULL);
HBITMAP __stdcall dx_CreateDIBGraph( const TCHAR * FileName , int ReverseFlag , COLORDATA * SrcColor ) ;
HBITMAP __stdcall dx_CreateDIBGraphToMem( const BITMAPINFO * BmpInfo , const void * GraphData , int ReverseFlag , COLORDATA * SrcColor ) ;
int __stdcall dx_CreateDIBGraph_plus_Alpha( const TCHAR * FileName , HBITMAP * RGBBmp , HBITMAP * AlphaBmp , int ReverseFlag = FALSE , COLORDATA * SrcColor = NULL ) ;
HBITMAP __stdcall dx_CreateDIBGraphVer2( const TCHAR * FileName , const void * MemImage , int MemImageSize , int ImageType , int ReverseFlag , COLORDATA * SrcColor ) ;
int __stdcall dx_CreateDIBGraphVer2_plus_Alpha( const TCHAR * FileName , const void * MemImage , int MemImageSize , const void * AlphaImage , int AlphaImageSize , int ImageType , HBITMAP * RGBBmp , HBITMAP * AlphaBmp , int ReverseFlag , COLORDATA * SrcColor ) ;
int __stdcall dx_ConvBitmapToGraphImage( const BITMAPINFO * BmpInfo , void * GraphData , BASEIMAGE * GraphImage , int CopyFlag ) ;
int __stdcall dx_ConvGraphImageToBitmap( const BASEIMAGE * GraphImage , BITMAPINFO * BmpInfo , void * * GraphData , int CopyFlag , int FullColorConv = TRUE ) ;
int __stdcall dx_UpdateLayerdWindowForBaseImage( const BASEIMAGE * BaseImage ) ;
int __stdcall dx_UpdateLayerdWindowForBaseImageRect( const BASEIMAGE * BaseImage , int x1 , int y1 , int x2 , int y2 ) ;
int __stdcall dx_UpdateLayerdWindowForPremultipliedAlphaBaseImage( const BASEIMAGE * BaseImage ) ;
int __stdcall dx_UpdateLayerdWindowForPremultipliedAlphaBaseImageRect( const BASEIMAGE * BaseImage , int x1 , int y1 , int x2 , int y2 ) ;
int  __stdcall dx_UpdateLayerdWindowForSoftImage( int  SIHandle);
int  __stdcall dx_UpdateLayerdWindowForSoftImageRect( int  SIHandle, int  x1, int  y1, int  x2, int  y2);
int  __stdcall dx_UpdateLayerdWindowForPremultipliedAlphaSoftImage( int  SIHandle);
int  __stdcall dx_UpdateLayerdWindowForPremultipliedAlphaSoftImageRect( int  SIHandle, int  x1, int  y1, int  x2, int  y2);
int  __stdcall dx_LoadSoundMemByResource( const char * ResourceName, const char * ResourceType, int  BufferNum = 1);
int  __stdcall dx_SetUseSoftwareMixingSoundFlag( int  Flag);
int  __stdcall dx_SetEnableXAudioFlag( int  Flag);
const void * __stdcall dx_GetDSoundObj( void);
int  __stdcall dx_LoadMusicMemByResource( const char * ResourceName, const char * ResourceType);
}

#define AddDataSoftSoundPlayer dx_AddDataSoftSoundPlayer
#define AddDirectDataSoftSoundPlayer dx_AddDirectDataSoftSoundPlayer
#define AddFontFile dx_AddFontFile
#define AddFontFileFromMem dx_AddFontFileFromMem
#define AddFontImageToHandle dx_AddFontImageToHandle
#define AddKeyAccel dx_AddKeyAccel
#define AddKeyAccel_ID dx_AddKeyAccel_ID
#define AddKeyAccel_Name dx_AddKeyAccel_Name
#define AddMenuItem dx_AddMenuItem
#define AddMenuItem_ID dx_AddMenuItem_ID
#define AddMenuItem_Name dx_AddMenuItem_Name
#define AddMenuLine_ID dx_AddMenuLine_ID
#define AddMenuLine_Name dx_AddMenuLine_Name
#define AddMessageTakeOverWindow dx_AddMessageTakeOverWindow
#define AddMovieFrameToGraph dx_AddMovieFrameToGraph
#define AddOneDataSoftSoundPlayer dx_AddOneDataSoftSoundPlayer
#define AddSoundData dx_AddSoundData
#define AddStreamSoundMem dx_AddStreamSoundMem
#define AddStreamSoundMemToFile dx_AddStreamSoundMemToFile
#define AddStreamSoundMemToMem dx_AddStreamSoundMemToMem
#define AddToolBarButton dx_AddToolBarButton
#define AddToolBarSep dx_AddToolBarSep
#define AddUserGraphLoadFunction4 dx_AddUserGraphLoadFunction4
#define BltBackScreenToWindow dx_BltBackScreenToWindow
extern int dxexc_BltBaseImage(const BASEIMAGE*  RgbBaseImage, int TextureFlag, int ReverseFlag); // overload
extern int dxexc_BltBaseImage(const BASEIMAGE*  RgbBaseImage, const BASEIMAGE*  AlphaBaseImage, int TextureFlag, int ReverseFlag); // overload
#define BltBaseImage dxexc_BltBaseImage
#define BltBaseImageWithAlphaBlend dx_BltBaseImageWithAlphaBlend
#define BltBaseImageWithTransColor dx_BltBaseImageWithTransColor
#define BltBmpOrGraphImageToDivGraph dx_BltBmpOrGraphImageToDivGraph
#define BltBmpOrGraphImageToGraph dx_BltBmpOrGraphImageToGraph
#define BltBmpOrGraphImageToGraph2 dx_BltBmpOrGraphImageToGraph2
#define BltBmpToDivGraph dx_BltBmpToDivGraph
#define BltBmpToGraph dx_BltBmpToGraph
#define BltDrawValidGraph dx_BltDrawValidGraph
#define BltRectBackScreenToWindow dx_BltRectBackScreenToWindow
#define BltSoftImage dx_BltSoftImage
#define BltSoftImageWithAlphaBlend dx_BltSoftImageWithAlphaBlend
#define BltSoftImageWithTransColor dx_BltSoftImageWithTransColor
#define BltStringSoftImage dx_BltStringSoftImage
#define BltStringSoftImageToHandle dx_BltStringSoftImageToHandle
#define BmpBltToMask dx_BmpBltToMask
#define CalcPolygonBinormalAndTangentsToShader dx_CalcPolygonBinormalAndTangentsToShader
#define CalcPolygonIndexedBinormalAndTangentsToShader dx_CalcPolygonIndexedBinormalAndTangentsToShader
#define ChangeChannelVolumeSoundMem dx_ChangeChannelVolumeSoundMem
#define ChangeFont dx_ChangeFont
#define ChangeFontType dx_ChangeFontType
#define ChangeLightTypeDir dx_ChangeLightTypeDir
#define ChangeLightTypePoint dx_ChangeLightTypePoint
#define ChangeLightTypeSpot dx_ChangeLightTypeSpot
#define ChangeMovieVolumeToGraph dx_ChangeMovieVolumeToGraph
#define ChangeNextPlayChannelVolumeSoundMem dx_ChangeNextPlayChannelVolumeSoundMem
#define ChangeNextPlayPanSoundMem dx_ChangeNextPlayPanSoundMem
#define ChangeNextPlayVolumeSoundMem dx_ChangeNextPlayVolumeSoundMem
#define ChangePanSoundMem dx_ChangePanSoundMem
#define ChangeStreamFunction dx_ChangeStreamFunction
#define ChangeStreamFunctionW dx_ChangeStreamFunctionW
#define ChangeVolumeSoundMem dx_ChangeVolumeSoundMem
#define ChangeWindowMode dx_ChangeWindowMode
#define CheckAlphaSoftImage dx_CheckAlphaSoftImage
#define CheckCameraViewClip dx_CheckCameraViewClip
#define CheckCameraViewClipD dx_CheckCameraViewClipD
#define CheckCameraViewClip_Box dx_CheckCameraViewClip_Box
#define CheckCameraViewClip_BoxD dx_CheckCameraViewClip_BoxD
#define CheckCameraViewClip_Dir dx_CheckCameraViewClip_Dir
#define CheckCameraViewClip_DirD dx_CheckCameraViewClip_DirD
#define CheckFontCacheToTextureFlag dx_CheckFontCacheToTextureFlag
#define CheckFontChacheToTextureFlag dx_CheckFontChacheToTextureFlag
#define CheckFontHandleValid dx_CheckFontHandleValid
#define CheckFontName dx_CheckFontName
#define CheckHandleASyncLoad dx_CheckHandleASyncLoad
#define CheckHitKey dx_CheckHitKey
#define CheckHitKeyAll dx_CheckHitKeyAll
#define CheckJoypadXInput dx_CheckJoypadXInput
#define CheckKeyInput dx_CheckKeyInput
#define CheckMenuItemSelect dx_CheckMenuItemSelect
#define CheckMenuItemSelectAll dx_CheckMenuItemSelectAll
#define CheckMenuItemSelect_ID dx_CheckMenuItemSelect_ID
#define CheckMenuItemSelect_Name dx_CheckMenuItemSelect_Name
#define CheckMusic dx_CheckMusic
#define CheckMusicMem dx_CheckMusicMem
#define CheckNetWorkRecvUDP dx_CheckNetWorkRecvUDP
#define CheckPaletteSoftImage dx_CheckPaletteSoftImage
#define CheckPixelAlphaBaseImage dx_CheckPixelAlphaBaseImage
#define CheckPixelAlphaSoftImage dx_CheckPixelAlphaSoftImage
#define CheckSoftSoundPlayerNoneData dx_CheckSoftSoundPlayerNoneData
#define CheckSound dx_CheckSound
#define CheckSoundFile dx_CheckSoundFile
#define CheckSoundMem dx_CheckSoundMem
#define CheckStartSoftSoundPlayer dx_CheckStartSoftSoundPlayer
#define CheckStreamSoundMem dx_CheckStreamSoundMem
#define ClearDrawScreen dx_ClearDrawScreen
#define ClearDrawScreenZBuffer dx_ClearDrawScreenZBuffer
#define ClearInputCharBuf dx_ClearInputCharBuf
#define ClearKeyAccel dx_ClearKeyAccel
#define ClearMenuItemSelect dx_ClearMenuItemSelect
#define ClearRectBaseImage dx_ClearRectBaseImage
#define ClearRectSoftImage dx_ClearRectSoftImage
#define CloseNetWork dx_CloseNetWork
#define ClsDrawScreen dx_ClsDrawScreen
#define CmpColorData dx_CmpColorData
#define ColorKaiseki dx_ColorKaiseki
#define ConnectNetWork dx_ConnectNetWork
#define ConnectNetWork_ASync dx_ConnectNetWork_ASync
#define ConnectNetWork_IPv6 dx_ConnectNetWork_IPv6
#define ConnectNetWork_IPv6_ASync dx_ConnectNetWork_IPv6_ASync
#define ConvBitmapToGraphImage dx_ConvBitmapToGraphImage
#define ConvGraphImageToBitmap dx_ConvGraphImageToBitmap
#define ConvScreenPosToWorldPos dx_ConvScreenPosToWorldPos
#define ConvScreenPosToWorldPosD dx_ConvScreenPosToWorldPosD
#define ConvScreenPosToWorldPos_ZLinear dx_ConvScreenPosToWorldPos_ZLinear
#define ConvScreenPosToWorldPos_ZLinearD dx_ConvScreenPosToWorldPos_ZLinearD
#define ConvWorldPosToScreenPos dx_ConvWorldPosToScreenPos
#define ConvWorldPosToScreenPosD dx_ConvWorldPosToScreenPosD
#define ConvWorldPosToScreenPosPlusW dx_ConvWorldPosToScreenPosPlusW
#define ConvWorldPosToScreenPosPlusWD dx_ConvWorldPosToScreenPosPlusWD
#define ConvWorldPosToViewPos dx_ConvWorldPosToViewPos
#define ConvWorldPosToViewPosD dx_ConvWorldPosToViewPosD
#define ConvertFullPath dx_ConvertFullPath
#define ConvertInterpAlphaBaseImage dx_ConvertInterpAlphaBaseImage
#define ConvertKeyCodeToVirtualKey dx_ConvertKeyCodeToVirtualKey
#define ConvertMatrixDtoF dx_ConvertMatrixDtoF
#define ConvertMatrixFtoD dx_ConvertMatrixFtoD
#define ConvertNormalFormatBaseImage dx_ConvertNormalFormatBaseImage
#define ConvertPremulAlphaBaseImage dx_ConvertPremulAlphaBaseImage
#define ConvertStringCharCodeFormat dx_ConvertStringCharCodeFormat
#define ConvertVirtualKeyToKeyCode dx_ConvertVirtualKeyToKeyCode
#define CopyGraphZBufferImage dx_CopyGraphZBufferImage
#define CreateARGB4ColorBaseImage dx_CreateARGB4ColorBaseImage
#define CreateARGB4ColorData dx_CreateARGB4ColorData
#define CreateARGB8ColorBaseImage dx_CreateARGB8ColorBaseImage
#define CreateARGB8ColorData dx_CreateARGB8ColorData
#define CreateARGBF16ColorBaseImage dx_CreateARGBF16ColorBaseImage
#define CreateARGBF16ColorData dx_CreateARGBF16ColorData
#define CreateARGBF32ColorBaseImage dx_CreateARGBF32ColorBaseImage
#define CreateARGBF32ColorData dx_CreateARGBF32ColorData
#define CreateBaseImage dx_CreateBaseImage
#define CreateBaseImageToFile dx_CreateBaseImageToFile
#define CreateBaseImageToMem dx_CreateBaseImageToMem
#define CreateBlendGraphFromSoftImage dx_CreateBlendGraphFromSoftImage
#define CreateBmpInfo dx_CreateBmpInfo
#define CreateColorData dx_CreateColorData
#define CreateColorDataBaseImage dx_CreateColorDataBaseImage
#define CreateDIBGraph dx_CreateDIBGraph
#define CreateDIBGraphToMem dx_CreateDIBGraphToMem
#define CreateDIBGraphVer2 dx_CreateDIBGraphVer2
#define CreateDIBGraphVer2_plus_Alpha dx_CreateDIBGraphVer2_plus_Alpha
#define CreateDIBGraph_plus_Alpha dx_CreateDIBGraph_plus_Alpha
#define CreateDXGraph dx_CreateDXGraph
#define CreateDirLightHandle dx_CreateDirLightHandle
#define CreateDivGraph dx_CreateDivGraph
#define CreateDivGraphFromBaseImage dx_CreateDivGraphFromBaseImage
#define CreateDivGraphFromBmp dx_CreateDivGraphFromBmp
extern int dxexc_CreateDivGraphFromGraphImage(BASEIMAGE*  RgbBaseImage, int AllNum, int XNum, int YNum, int SizeX, int SizeY, int*  HandleBuf, int TextureFlag, int ReverseFlag); // overload
extern int dxexc_CreateDivGraphFromGraphImage(BASEIMAGE*  RgbBaseImage, const BASEIMAGE*  AlphaBaseImage, int AllNum, int XNum, int YNum, int SizeX, int SizeY, int*  HandleBuf, int TextureFlag, int ReverseFlag); // overload
#define CreateDivGraphFromGraphImage dxexc_CreateDivGraphFromGraphImage
#define CreateDivGraphFromMem dx_CreateDivGraphFromMem
#define CreateDivGraphFromSoftImage dx_CreateDivGraphFromSoftImage
#define CreateDivMaskFromMem dx_CreateDivMaskFromMem
#define CreateFontDataFile dx_CreateFontDataFile
#define CreateFontToHandle dx_CreateFontToHandle
#define CreateFullColorData dx_CreateFullColorData
#define CreateGraph dx_CreateGraph
#define CreateGraphFromBaseImage dx_CreateGraphFromBaseImage
#define CreateGraphFromBmp dx_CreateGraphFromBmp
extern int dxexc_CreateGraphFromGraphImage(const BASEIMAGE*  RgbBaseImage, int TextureFlag, int ReverseFlag); // overload
extern int dxexc_CreateGraphFromGraphImage(const BASEIMAGE*  RgbBaseImage, const BASEIMAGE*  AlphaBaseImage, int TextureFlag, int ReverseFlag); // overload
#define CreateGraphFromGraphImage dxexc_CreateGraphFromGraphImage
#define CreateGraphFromMem dx_CreateGraphFromMem
#define CreateGraphFromRectBaseImage dx_CreateGraphFromRectBaseImage
#define CreateGraphFromRectSoftImage dx_CreateGraphFromRectSoftImage
#define CreateGraphFromSoftImage dx_CreateGraphFromSoftImage
#define CreateGraphImage dx_CreateGraphImage
#define CreateGraphImageOrDIBGraph dx_CreateGraphImageOrDIBGraph
#define CreateGraphImageType2 dx_CreateGraphImageType2
#define CreateGraphImage_plus_Alpha dx_CreateGraphImage_plus_Alpha
#define CreateGrayColorData dx_CreateGrayColorData
#define CreateIdentityMatrix dx_CreateIdentityMatrix
#define CreateIdentityMatrixD dx_CreateIdentityMatrixD
#define CreateIndexBuffer dx_CreateIndexBuffer
#define CreateInverseMatrix dx_CreateInverseMatrix
#define CreateInverseMatrixD dx_CreateInverseMatrixD
#define CreateLookAtMatrix dx_CreateLookAtMatrix
#define CreateLookAtMatrix2 dx_CreateLookAtMatrix2
#define CreateLookAtMatrix2D dx_CreateLookAtMatrix2D
#define CreateLookAtMatrixD dx_CreateLookAtMatrixD
#define CreateLookAtMatrixRH dx_CreateLookAtMatrixRH
#define CreateLookAtMatrixRHD dx_CreateLookAtMatrixRHD
#define CreateMaskFromMem dx_CreateMaskFromMem
#define CreateMaskScreen dx_CreateMaskScreen
#define CreateMultiplyMatrix dx_CreateMultiplyMatrix
#define CreateMultiplyMatrixD dx_CreateMultiplyMatrixD
#define CreateOrthoMatrix dx_CreateOrthoMatrix
#define CreateOrthoMatrixD dx_CreateOrthoMatrixD
#define CreateOrthoMatrixRH dx_CreateOrthoMatrixRH
#define CreateOrthoMatrixRHD dx_CreateOrthoMatrixRHD
#define CreatePAL8ColorBaseImage dx_CreatePAL8ColorBaseImage
#define CreatePal8ColorData dx_CreatePal8ColorData
#define CreatePaletteColorData dx_CreatePaletteColorData
#define CreatePerspectiveFovMatrix dx_CreatePerspectiveFovMatrix
#define CreatePerspectiveFovMatrixD dx_CreatePerspectiveFovMatrixD
#define CreatePerspectiveFovMatrixRH dx_CreatePerspectiveFovMatrixRH
#define CreatePerspectiveFovMatrixRHD dx_CreatePerspectiveFovMatrixRHD
#define CreatePointLightHandle dx_CreatePointLightHandle
#define CreateRGB8ColorBaseImage dx_CreateRGB8ColorBaseImage
#define CreateRgnFromBaseImage dx_CreateRgnFromBaseImage
#define CreateRgnFromGraph dx_CreateRgnFromGraph
#define CreateRotationXMatrix dx_CreateRotationXMatrix
#define CreateRotationXMatrixD dx_CreateRotationXMatrixD
#define CreateRotationXYZMatrix dx_CreateRotationXYZMatrix
#define CreateRotationXYZMatrixD dx_CreateRotationXYZMatrixD
#define CreateRotationXZYMatrix dx_CreateRotationXZYMatrix
#define CreateRotationXZYMatrixD dx_CreateRotationXZYMatrixD
#define CreateRotationYMatrix dx_CreateRotationYMatrix
#define CreateRotationYMatrixD dx_CreateRotationYMatrixD
#define CreateRotationYXZMatrix dx_CreateRotationYXZMatrix
#define CreateRotationYXZMatrixD dx_CreateRotationYXZMatrixD
#define CreateRotationYZXMatrix dx_CreateRotationYZXMatrix
#define CreateRotationYZXMatrixD dx_CreateRotationYZXMatrixD
#define CreateRotationZMatrix dx_CreateRotationZMatrix
#define CreateRotationZMatrixD dx_CreateRotationZMatrixD
#define CreateRotationZXYMatrix dx_CreateRotationZXYMatrix
#define CreateRotationZXYMatrixD dx_CreateRotationZXYMatrixD
#define CreateRotationZYXMatrix dx_CreateRotationZYXMatrix
#define CreateRotationZYXMatrixD dx_CreateRotationZYXMatrixD
#define CreateScalingMatrix dx_CreateScalingMatrix
#define CreateScalingMatrixD dx_CreateScalingMatrixD
#define CreateShaderConstantBuffer dx_CreateShaderConstantBuffer
#define CreateSpotLightHandle dx_CreateSpotLightHandle
#define CreateTranslationMatrix dx_CreateTranslationMatrix
#define CreateTranslationMatrixD dx_CreateTranslationMatrixD
#define CreateTransposeMatrix dx_CreateTransposeMatrix
#define CreateTransposeMatrixD dx_CreateTransposeMatrixD
#define CreateVertexBuffer dx_CreateVertexBuffer
#define CreateViewportMatrix dx_CreateViewportMatrix
#define CreateViewportMatrixD dx_CreateViewportMatrixD
#define CreateXRGB8ColorBaseImage dx_CreateXRGB8ColorBaseImage
#define CreateXRGB8ColorData dx_CreateXRGB8ColorData
#define DXArchiveCheckFile dx_DXArchiveCheckFile
#define DXArchiveCheckIdle dx_DXArchiveCheckIdle
#define DXArchivePreLoad dx_DXArchivePreLoad
#define DXArchiveRelease dx_DXArchiveRelease
#define DXArchiveReleaseMemImage dx_DXArchiveReleaseMemImage
#define DXArchiveSetMemImage dx_DXArchiveSetMemImage
#define DeleteAllToolBarButton dx_DeleteAllToolBarButton
#define DeleteFontToHandle dx_DeleteFontToHandle
#define DeleteGraph dx_DeleteGraph
#define DeleteIndexBuffer dx_DeleteIndexBuffer
#define DeleteKeyInput dx_DeleteKeyInput
#define DeleteLightHandle dx_DeleteLightHandle
#define DeleteLightHandleAll dx_DeleteLightHandleAll
#define DeleteMask dx_DeleteMask
#define DeleteMaskScreen dx_DeleteMaskScreen
#define DeleteMenuItem dx_DeleteMenuItem
#define DeleteMenuItemAll dx_DeleteMenuItemAll
#define DeleteMenuItem_ID dx_DeleteMenuItem_ID
#define DeleteMenuItem_Name dx_DeleteMenuItem_Name
#define DeleteMusicMem dx_DeleteMusicMem
#define DeleteShader dx_DeleteShader
#define DeleteShaderConstantBuffer dx_DeleteShaderConstantBuffer
#define DeleteShadowMap dx_DeleteShadowMap
#define DeleteSharingGraph dx_DeleteSharingGraph
#define DeleteSoftImage dx_DeleteSoftImage
#define DeleteSoftSound dx_DeleteSoftSound
#define DeleteSoftSoundPlayer dx_DeleteSoftSoundPlayer
#define DeleteSoundMem dx_DeleteSoundMem
#define DeleteUDPSocket dx_DeleteUDPSocket
#define DeleteVertexBuffer dx_DeleteVertexBuffer
#define DerivationBaseImage dx_DerivationBaseImage
#define DerivationGraph dx_DerivationGraph
#define DragFileInfoClear dx_DragFileInfoClear
#define DrawBaseImage dx_DrawBaseImage
#define DrawBillboard3D dx_DrawBillboard3D
#define DrawBillboard3DToShader dx_DrawBillboard3DToShader
#define DrawBlendGraph dx_DrawBlendGraph
#define DrawBlendGraphPos dx_DrawBlendGraphPos
#define DrawBox dx_DrawBox
#define DrawBoxToZBuffer dx_DrawBoxToZBuffer
#define DrawCapsule3D dx_DrawCapsule3D
#define DrawCapsule3DD dx_DrawCapsule3DD
extern int dxexc_DrawChipMap(const BASEIMAGE*  RgbBaseImage, int TextureFlag, int ReverseFlag); // overload
extern int dxexc_DrawChipMap(const BASEIMAGE*  RgbBaseImage, const BASEIMAGE*  AlphaBaseImage, int TextureFlag, int ReverseFlag); // overload
#define DrawChipMap dxexc_DrawChipMap
#define DrawCircle dx_DrawCircle
#define DrawCircleBaseImage dx_DrawCircleBaseImage
#define DrawCircleGauge dx_DrawCircleGauge
#define DrawCircleSoftImage dx_DrawCircleSoftImage
#define DrawCircleToZBuffer dx_DrawCircleToZBuffer
#define DrawCone3D dx_DrawCone3D
#define DrawCone3DD dx_DrawCone3DD
#define DrawCube3D dx_DrawCube3D
#define DrawCube3DD dx_DrawCube3DD
#define DrawExtendGraph dx_DrawExtendGraph
#define DrawExtendGraph3D dx_DrawExtendGraph3D
#define DrawExtendGraphF dx_DrawExtendGraphF
#define DrawExtendGraphToZBuffer dx_DrawExtendGraphToZBuffer
#define DrawExtendString dx_DrawExtendString
#define DrawExtendStringF dx_DrawExtendStringF
#define DrawExtendStringFToHandle dx_DrawExtendStringFToHandle
#define DrawExtendStringToHandle dx_DrawExtendStringToHandle
#define DrawExtendStringToHandleToZBuffer dx_DrawExtendStringToHandleToZBuffer
#define DrawExtendStringToZBuffer dx_DrawExtendStringToZBuffer
#define DrawExtendVString dx_DrawExtendVString
#define DrawExtendVStringF dx_DrawExtendVStringF
#define DrawExtendVStringFToHandle dx_DrawExtendVStringFToHandle
#define DrawExtendVStringToHandle dx_DrawExtendVStringToHandle
#define DrawExtendVStringToHandleToZBuffer dx_DrawExtendVStringToHandleToZBuffer
#define DrawExtendVStringToZBuffer dx_DrawExtendVStringToZBuffer
#define DrawFillBox dx_DrawFillBox
#define DrawFillMask dx_DrawFillMask
#define DrawFillMaskToDirectData dx_DrawFillMaskToDirectData
#define DrawGraph dx_DrawGraph
#define DrawGraph3D dx_DrawGraph3D
#define DrawGraphF dx_DrawGraphF
#define DrawGraphToZBuffer dx_DrawGraphToZBuffer
#define DrawIMEInputString dx_DrawIMEInputString
#define DrawKeyInputModeString dx_DrawKeyInputModeString
#define DrawKeyInputString dx_DrawKeyInputString
#define DrawLine dx_DrawLine
#define DrawLine3D dx_DrawLine3D
#define DrawLine3DD dx_DrawLine3DD
#define DrawLineBaseImage dx_DrawLineBaseImage
#define DrawLineBox dx_DrawLineBox
#define DrawLineSet dx_DrawLineSet
#define DrawLineSoftImage dx_DrawLineSoftImage
#define DrawMask dx_DrawMask
#define DrawMaskToDirectData dx_DrawMaskToDirectData
#define DrawModiBillboard3D dx_DrawModiBillboard3D
#define DrawModiGraph dx_DrawModiGraph
#define DrawModiGraphF dx_DrawModiGraphF
#define DrawModiGraphToZBuffer dx_DrawModiGraphToZBuffer
#define DrawNumberPlusToF dx_DrawNumberPlusToF
#define DrawNumberPlusToFToHandle dx_DrawNumberPlusToFToHandle
#define DrawNumberPlusToI dx_DrawNumberPlusToI
#define DrawNumberPlusToIToHandle dx_DrawNumberPlusToIToHandle
#define DrawNumberToF dx_DrawNumberToF
#define DrawNumberToFToHandle dx_DrawNumberToFToHandle
#define DrawNumberToI dx_DrawNumberToI
#define DrawNumberToIToHandle dx_DrawNumberToIToHandle
#define DrawObtainsBox dx_DrawObtainsBox
#define DrawObtainsString dx_DrawObtainsString
#define DrawObtainsString_CharClip dx_DrawObtainsString_CharClip
#define DrawOval dx_DrawOval
#define DrawPixel dx_DrawPixel
#define DrawPixel3D dx_DrawPixel3D
#define DrawPixel3DD dx_DrawPixel3DD
#define DrawPixelPalCodeSoftImage dx_DrawPixelPalCodeSoftImage
#define DrawPixelSet dx_DrawPixelSet
#define DrawPixelSoftImage dx_DrawPixelSoftImage
#define DrawPixelSoftImageF dx_DrawPixelSoftImageF
#define DrawPixelSoftImage_Unsafe_ARGB8 dx_DrawPixelSoftImage_Unsafe_ARGB8
#define DrawPixelSoftImage_Unsafe_XRGB8 dx_DrawPixelSoftImage_Unsafe_XRGB8
#define DrawPolygon dx_DrawPolygon
#define DrawPolygon2D dx_DrawPolygon2D
#define DrawPolygon2DToShader dx_DrawPolygon2DToShader
extern int dxexc_DrawPolygon3D(const BASEIMAGE*  RgbBaseImage, int TextureFlag, int ReverseFlag); // overload
extern int dxexc_DrawPolygon3D(const BASEIMAGE*  RgbBaseImage, const BASEIMAGE*  AlphaBaseImage, int TextureFlag, int ReverseFlag); // overload
#define DrawPolygon3D dxexc_DrawPolygon3D
#define DrawPolygon3DBase dx_DrawPolygon3DBase
#define DrawPolygon3DToShader dx_DrawPolygon3DToShader
#define DrawPolygon3DToShader_UseVertexBuffer dx_DrawPolygon3DToShader_UseVertexBuffer
#define DrawPolygon3D_UseVertexBuffer dx_DrawPolygon3D_UseVertexBuffer
#define DrawPolygonBase dx_DrawPolygonBase
#define DrawPolygonIndexed2D dx_DrawPolygonIndexed2D
#define DrawPolygonIndexed2DToShader dx_DrawPolygonIndexed2DToShader
#define DrawPolygonIndexed3D dx_DrawPolygonIndexed3D
#define DrawPolygonIndexed3DBase dx_DrawPolygonIndexed3DBase
#define DrawPolygonIndexed3DToShader dx_DrawPolygonIndexed3DToShader
#define DrawPolygonIndexed3DToShader_UseVertexBuffer dx_DrawPolygonIndexed3DToShader_UseVertexBuffer
#define DrawPolygonIndexed3D_UseVertexBuffer dx_DrawPolygonIndexed3D_UseVertexBuffer
#define DrawPrimitive2D dx_DrawPrimitive2D
#define DrawPrimitive2DToShader dx_DrawPrimitive2DToShader
#define DrawPrimitive3D dx_DrawPrimitive3D
#define DrawPrimitive3DToShader dx_DrawPrimitive3DToShader
#define DrawPrimitive3DToShader_UseVertexBuffer dx_DrawPrimitive3DToShader_UseVertexBuffer
#define DrawPrimitive3DToShader_UseVertexBuffer2 dx_DrawPrimitive3DToShader_UseVertexBuffer2
#define DrawPrimitive3D_UseVertexBuffer dx_DrawPrimitive3D_UseVertexBuffer
#define DrawPrimitive3D_UseVertexBuffer2 dx_DrawPrimitive3D_UseVertexBuffer2
#define DrawPrimitiveIndexed2D dx_DrawPrimitiveIndexed2D
#define DrawPrimitiveIndexed2DToShader dx_DrawPrimitiveIndexed2DToShader
#define DrawPrimitiveIndexed3D dx_DrawPrimitiveIndexed3D
#define DrawPrimitiveIndexed3DToShader dx_DrawPrimitiveIndexed3DToShader
#define DrawPrimitiveIndexed3DToShader_UseVertexBuffer dx_DrawPrimitiveIndexed3DToShader_UseVertexBuffer
#define DrawPrimitiveIndexed3DToShader_UseVertexBuffer2 dx_DrawPrimitiveIndexed3DToShader_UseVertexBuffer2
#define DrawPrimitiveIndexed3D_UseVertexBuffer dx_DrawPrimitiveIndexed3D_UseVertexBuffer
#define DrawPrimitiveIndexed3D_UseVertexBuffer2 dx_DrawPrimitiveIndexed3D_UseVertexBuffer2
#define DrawQuadrangle dx_DrawQuadrangle
#define DrawQuadrangleToZBuffer dx_DrawQuadrangleToZBuffer
#define DrawRectExtendGraph dx_DrawRectExtendGraph
#define DrawRectExtendGraphF dx_DrawRectExtendGraphF
#define DrawRectGraph dx_DrawRectGraph
#define DrawRectGraphF dx_DrawRectGraphF
#define DrawRectModiGraph dx_DrawRectModiGraph
#define DrawRectModiGraphF dx_DrawRectModiGraphF
#define DrawRectRotaGraph dx_DrawRectRotaGraph
#define DrawRectRotaGraph2 dx_DrawRectRotaGraph2
#define DrawRectRotaGraph2F dx_DrawRectRotaGraph2F
#define DrawRectRotaGraph3 dx_DrawRectRotaGraph3
#define DrawRectRotaGraph3F dx_DrawRectRotaGraph3F
#define DrawRectRotaGraphF dx_DrawRectRotaGraphF
#define DrawRectRotaGraphFast dx_DrawRectRotaGraphFast
#define DrawRectRotaGraphFast2 dx_DrawRectRotaGraphFast2
#define DrawRectRotaGraphFast2F dx_DrawRectRotaGraphFast2F
#define DrawRectRotaGraphFast3 dx_DrawRectRotaGraphFast3
#define DrawRectRotaGraphFast3F dx_DrawRectRotaGraphFast3F
#define DrawRectRotaGraphFastF dx_DrawRectRotaGraphFastF
#define DrawRota2Graph3D dx_DrawRota2Graph3D
#define DrawRotaGraph dx_DrawRotaGraph
#define DrawRotaGraph2 dx_DrawRotaGraph2
#define DrawRotaGraph2F dx_DrawRotaGraph2F
#define DrawRotaGraph2ToZBuffer dx_DrawRotaGraph2ToZBuffer
#define DrawRotaGraph3 dx_DrawRotaGraph3
#define DrawRotaGraph3D dx_DrawRotaGraph3D
#define DrawRotaGraph3F dx_DrawRotaGraph3F
#define DrawRotaGraph3ToZBuffer dx_DrawRotaGraph3ToZBuffer
#define DrawRotaGraphF dx_DrawRotaGraphF
#define DrawRotaGraphFast dx_DrawRotaGraphFast
#define DrawRotaGraphFast2 dx_DrawRotaGraphFast2
#define DrawRotaGraphFast2F dx_DrawRotaGraphFast2F
#define DrawRotaGraphFast2ToZBuffer dx_DrawRotaGraphFast2ToZBuffer
#define DrawRotaGraphFast3 dx_DrawRotaGraphFast3
#define DrawRotaGraphFast3F dx_DrawRotaGraphFast3F
#define DrawRotaGraphFast3ToZBuffer dx_DrawRotaGraphFast3ToZBuffer
#define DrawRotaGraphFastF dx_DrawRotaGraphFastF
#define DrawRotaGraphFastToZBuffer dx_DrawRotaGraphFastToZBuffer
#define DrawRotaGraphToZBuffer dx_DrawRotaGraphToZBuffer
#define DrawRotaString dx_DrawRotaString
#define DrawRotaStringF dx_DrawRotaStringF
#define DrawRotaStringFToHandle dx_DrawRotaStringFToHandle
#define DrawRotaStringToHandle dx_DrawRotaStringToHandle
#define DrawRoundRect dx_DrawRoundRect
#define DrawRoundRectToZBuffer dx_DrawRoundRectToZBuffer
#define DrawSoftImage dx_DrawSoftImage
#define DrawSphere3D dx_DrawSphere3D
#define DrawSphere3DD dx_DrawSphere3DD
#define DrawString dx_DrawString
#define DrawStringF dx_DrawStringF
#define DrawStringFToHandle dx_DrawStringFToHandle
#define DrawStringMask dx_DrawStringMask
#define DrawStringMaskToHandle dx_DrawStringMaskToHandle
#define DrawStringToHandle dx_DrawStringToHandle
#define DrawStringToHandleToZBuffer dx_DrawStringToHandleToZBuffer
#define DrawStringToZBuffer dx_DrawStringToZBuffer
#define DrawTile dx_DrawTile
#define DrawTriangle dx_DrawTriangle
#define DrawTriangle3D dx_DrawTriangle3D
#define DrawTriangle3DD dx_DrawTriangle3DD
#define DrawTriangleToZBuffer dx_DrawTriangleToZBuffer
#define DrawTurnGraph dx_DrawTurnGraph
#define DrawTurnGraphF dx_DrawTurnGraphF
#define DrawTurnGraphToZBuffer dx_DrawTurnGraphToZBuffer
#define DrawVString dx_DrawVString
#define DrawVStringF dx_DrawVStringF
#define DrawVStringFToHandle dx_DrawVStringFToHandle
#define DrawVStringToHandle dx_DrawVStringToHandle
#define DrawVStringToHandleToZBuffer dx_DrawVStringToHandleToZBuffer
#define DrawVStringToZBuffer dx_DrawVStringToZBuffer
#define DuplicateSoundMem dx_DuplicateSoundMem
#define DxAlloc dx_DxAlloc
#define DxCalloc dx_DxCalloc
#define DxDrawAlloc dx_DxDrawAlloc
#define DxDumpAlloc dx_DxDumpAlloc
#define DxErrorCheckAlloc dx_DxErrorCheckAlloc
#define DxFree dx_DxFree
#define DxGetAllocNum dx_DxGetAllocNum
#define DxGetAllocSize dx_DxGetAllocSize
#define DxLib_End dx_DxLib_End
#define DxLib_GlobalStructInitialize dx_DxLib_GlobalStructInitialize
#define DxLib_Init dx_DxLib_Init
#define DxLib_IsInit dx_DxLib_IsInit
#define DxRealloc dx_DxRealloc
#define DxSetAllocMemoryErrorCheckFlag dx_DxSetAllocMemoryErrorCheckFlag
#define DxSetAllocPrintFlag dx_DxSetAllocPrintFlag
#define DxSetAllocSizeOutFlag dx_DxSetAllocSizeOutFlag
#define DxSetAllocSizeTrap dx_DxSetAllocSizeTrap
#define EnumFontName dx_EnumFontName
#define EnumFontNameEx dx_EnumFontNameEx
#define EnumFontNameEx2 dx_EnumFontNameEx2
#define ErrorLogAdd dx_ErrorLogAdd
#define ErrorLogTabAdd dx_ErrorLogTabAdd
#define ErrorLogTabSub dx_ErrorLogTabSub
#define FileRead_close dx_FileRead_close
#define FileRead_createInfo dx_FileRead_createInfo
#define FileRead_deleteInfo dx_FileRead_deleteInfo
#define FileRead_eof dx_FileRead_eof
#define FileRead_findClose dx_FileRead_findClose
#define FileRead_findFirst dx_FileRead_findFirst
#define FileRead_findNext dx_FileRead_findNext
#define FileRead_fullyLoad dx_FileRead_fullyLoad
#define FileRead_fullyLoad_delete dx_FileRead_fullyLoad_delete
#define FileRead_fullyLoad_getImage dx_FileRead_fullyLoad_getImage
#define FileRead_fullyLoad_getSize dx_FileRead_fullyLoad_getSize
#define FileRead_getInfo dx_FileRead_getInfo
#define FileRead_getInfoNum dx_FileRead_getInfoNum
#define FileRead_getc dx_FileRead_getc
#define FileRead_gets dx_FileRead_gets
#define FileRead_idle_chk dx_FileRead_idle_chk
#define FileRead_open dx_FileRead_open
#define FileRead_read dx_FileRead_read
#define FileRead_seek dx_FileRead_seek
#define FileRead_size dx_FileRead_size
#define FileRead_tell dx_FileRead_tell
#define FillBaseImage dx_FillBaseImage
#define FillGraph dx_FillGraph
#define FillMaskScreen dx_FillMaskScreen
#define FillRectBaseImage dx_FillRectBaseImage
#define FillSoftImage dx_FillSoftImage
#define FontBaseImageBlt dx_FontBaseImageBlt
#define FontBaseImageBltToHandle dx_FontBaseImageBltToHandle
#define FontCacheStringDrawToHandle dx_FontCacheStringDrawToHandle
#define Get3DPresetReverbParamSoundMem dx_Get3DPresetReverbParamSoundMem
#define Get3DReverbParamSoundMem dx_Get3DReverbParamSoundMem
#define GetASyncLoadNum dx_GetASyncLoadNum
#define GetActiveFlag dx_GetActiveFlag
#define GetActiveGraph dx_GetActiveGraph
#define GetActiveKeyInput dx_GetActiveKeyInput
#define GetAlwaysRunFlag dx_GetAlwaysRunFlag
#define GetBackgroundColor dx_GetBackgroundColor
#define GetBaseImageGraphDataSize dx_GetBaseImageGraphDataSize
#define GetBaseImageUseMaxPaletteNo dx_GetBaseImageUseMaxPaletteNo
#define GetBillboardPixelSize dx_GetBillboardPixelSize
#define GetBillboardPixelSizeD dx_GetBillboardPixelSizeD
#define GetBufferShaderConstantBuffer dx_GetBufferShaderConstantBuffer
#define GetCameraAPIViewportMatrix dx_GetCameraAPIViewportMatrix
#define GetCameraAPIViewportMatrixD dx_GetCameraAPIViewportMatrixD
#define GetCameraAngleHRotate dx_GetCameraAngleHRotate
#define GetCameraAngleHRotateD dx_GetCameraAngleHRotateD
#define GetCameraAngleTRotate dx_GetCameraAngleTRotate
#define GetCameraAngleTRotateD dx_GetCameraAngleTRotateD
#define GetCameraAngleVRotate dx_GetCameraAngleVRotate
#define GetCameraAngleVRotateD dx_GetCameraAngleVRotateD
#define GetCameraBillboardMatrix dx_GetCameraBillboardMatrix
#define GetCameraBillboardMatrixD dx_GetCameraBillboardMatrixD
#define GetCameraDotAspect dx_GetCameraDotAspect
#define GetCameraDotAspectD dx_GetCameraDotAspectD
#define GetCameraFar dx_GetCameraFar
#define GetCameraFarD dx_GetCameraFarD
#define GetCameraFov dx_GetCameraFov
#define GetCameraFovD dx_GetCameraFovD
#define GetCameraNear dx_GetCameraNear
#define GetCameraNearD dx_GetCameraNearD
#define GetCameraPosition dx_GetCameraPosition
#define GetCameraPositionD dx_GetCameraPositionD
#define GetCameraProjectionMatrix dx_GetCameraProjectionMatrix
#define GetCameraProjectionMatrixD dx_GetCameraProjectionMatrixD
#define GetCameraScreenCenter dx_GetCameraScreenCenter
#define GetCameraScreenCenterD dx_GetCameraScreenCenterD
#define GetCameraSize dx_GetCameraSize
#define GetCameraSizeD dx_GetCameraSizeD
#define GetCameraTarget dx_GetCameraTarget
#define GetCameraTargetD dx_GetCameraTargetD
#define GetCameraUpVector dx_GetCameraUpVector
#define GetCameraUpVectorD dx_GetCameraUpVectorD
#define GetCameraViewMatrix dx_GetCameraViewMatrix
#define GetCameraViewMatrixD dx_GetCameraViewMatrixD
#define GetCameraViewportMatrix dx_GetCameraViewportMatrix
#define GetCameraViewportMatrixD dx_GetCameraViewportMatrixD
#define GetChangeDisplayFlag dx_GetChangeDisplayFlag
#define GetChannelVolumeSoundMem dx_GetChannelVolumeSoundMem
#define GetClipboardText dx_GetClipboardText
#define GetColor dx_GetColor
#define GetColor2 dx_GetColor2
#define GetColor3 dx_GetColor3
#define GetColor4 dx_GetColor4
#define GetColor5 dx_GetColor5
#define GetColorBitDepth dx_GetColorBitDepth
#define GetColorF dx_GetColorF
#define GetColorU8 dx_GetColorU8
#define GetConstCountToShader dx_GetConstCountToShader
#define GetConstDefaultParamFToShader dx_GetConstDefaultParamFToShader
#define GetConstIndexToShader dx_GetConstIndexToShader
#define GetCreateDrawValidGraphChannelNum dx_GetCreateDrawValidGraphChannelNum
#define GetCreateDrawValidGraphZBufferBitDepth dx_GetCreateDrawValidGraphZBufferBitDepth
#define GetCreateGraphChannelBitDepth dx_GetCreateGraphChannelBitDepth
#define GetCreateGraphColorBitDepth dx_GetCreateGraphColorBitDepth
#define GetCreateGraphColorData dx_GetCreateGraphColorData
#define GetCreateSoundDataType dx_GetCreateSoundDataType
#define GetCreateSoundPitchRate dx_GetCreateSoundPitchRate
#define GetCreateSoundTimeStretchRate dx_GetCreateSoundTimeStretchRate
#define GetCtrlCodeCmp dx_GetCtrlCodeCmp
#define GetCubeMapTextureCreateFlag dx_GetCubeMapTextureCreateFlag
#define GetCurrentPositionSoundMem dx_GetCurrentPositionSoundMem
#define GetDSoundObj dx_GetDSoundObj
#define GetDateTime dx_GetDateTime
#define GetDefaultFontHandle dx_GetDefaultFontHandle
#define GetDefaultState dx_GetDefaultState
#define GetDirectDrawDeviceDescription dx_GetDirectDrawDeviceDescription
#define GetDirectDrawDeviceGUID dx_GetDirectDrawDeviceGUID
#define GetDirectDrawDeviceNum dx_GetDirectDrawDeviceNum
#define GetDisableReadSoundFunctionMask dx_GetDisableReadSoundFunctionMask
#define GetDispColorData dx_GetDispColorData
#define GetDisplayMaxResolution dx_GetDisplayMaxResolution
#define GetDisplayMenuFlag dx_GetDisplayMenuFlag
#define GetDisplayMode dx_GetDisplayMode
#define GetDisplayModeNum dx_GetDisplayModeNum
#define GetDisplayNum dx_GetDisplayNum
#define GetDragFileNum dx_GetDragFileNum
#define GetDragFilePath dx_GetDragFilePath
#define GetDrawArea dx_GetDrawArea
#define GetDrawBlendMode dx_GetDrawBlendMode
#define GetDrawBright dx_GetDrawBright
#define GetDrawExtendStringSize dx_GetDrawExtendStringSize
#define GetDrawExtendStringSizeToHandle dx_GetDrawExtendStringSizeToHandle
#define GetDrawExtendStringWidth dx_GetDrawExtendStringWidth
#define GetDrawExtendStringWidthToHandle dx_GetDrawExtendStringWidthToHandle
#define GetDrawFloatCoordType dx_GetDrawFloatCoordType
#define GetDrawMode dx_GetDrawMode
#define GetDrawScreen dx_GetDrawScreen
#define GetDrawScreenBaseImage dx_GetDrawScreenBaseImage
#define GetDrawScreenBaseImageDestPos dx_GetDrawScreenBaseImageDestPos
#define GetDrawScreenGraph dx_GetDrawScreenGraph
#define GetDrawScreenSize dx_GetDrawScreenSize
#define GetDrawScreenSoftImage dx_GetDrawScreenSoftImage
#define GetDrawScreenSoftImageDestPos dx_GetDrawScreenSoftImageDestPos
#define GetDrawStringSize dx_GetDrawStringSize
#define GetDrawStringSizeToHandle dx_GetDrawStringSizeToHandle
#define GetDrawStringWidth dx_GetDrawStringWidth
#define GetDrawStringWidthToHandle dx_GetDrawStringWidthToHandle
#define GetDrawValidAlphaChannelGraphCreateFlag dx_GetDrawValidAlphaChannelGraphCreateFlag
#define GetDrawValidFloatTypeGraphCreateFlag dx_GetDrawValidFloatTypeGraphCreateFlag
#define GetDrawValidGraphCreateFlag dx_GetDrawValidGraphCreateFlag
#define GetDrawValidGraphCreateZBufferFlag dx_GetDrawValidGraphCreateZBufferFlag
#define GetEnableLightHandle dx_GetEnableLightHandle
#define GetEnableLightHandleNum dx_GetEnableLightHandleNum
#define GetFFTVibrationSoftSound dx_GetFFTVibrationSoftSound
#define GetFogColor dx_GetFogColor
#define GetFogDensity dx_GetFogDensity
#define GetFogEnable dx_GetFogEnable
#define GetFogMode dx_GetFogMode
#define GetFogStartEnd dx_GetFogStartEnd
#define GetFontCacheCharNum dx_GetFontCacheCharNum
#define GetFontCacheTextureColorBitDepth dx_GetFontCacheTextureColorBitDepth
#define GetFontCacheToTextureFlag dx_GetFontCacheToTextureFlag
#define GetFontCacheUsePremulAlphaFlag dx_GetFontCacheUsePremulAlphaFlag
#define GetFontChacheToTextureFlag dx_GetFontChacheToTextureFlag
#define GetFontCharInfo dx_GetFontCharInfo
#define GetFontLineSpace dx_GetFontLineSpace
#define GetFontLineSpaceToHandle dx_GetFontLineSpaceToHandle
#define GetFontMaxWidth dx_GetFontMaxWidth
#define GetFontMaxWidthToHandle dx_GetFontMaxWidthToHandle
#define GetFontSize dx_GetFontSize
#define GetFontSizeToHandle dx_GetFontSizeToHandle
#define GetFontSpace dx_GetFontSpace
#define GetFontSpaceToHandle dx_GetFontSpaceToHandle
#define GetFontStateToHandle dx_GetFontStateToHandle
#define GetFrequencySoundMem dx_GetFrequencySoundMem
#define GetFullColorImage dx_GetFullColorImage
#define GetGraphColorBitDepth dx_GetGraphColorBitDepth
#define GetGraphDataShavedMode dx_GetGraphDataShavedMode
#define GetGraphFilePath dx_GetGraphFilePath
#define GetGraphImageFullColorCode dx_GetGraphImageFullColorCode
#define GetGraphMipmapCount dx_GetGraphMipmapCount
#define GetGraphNum dx_GetGraphNum
#define GetGraphOriginalPalette dx_GetGraphOriginalPalette
#define GetGraphPalette dx_GetGraphPalette
#define GetGraphSize dx_GetGraphSize
#define GetGraphTextureSize dx_GetGraphTextureSize
#define GetHandleASyncLoadResult dx_GetHandleASyncLoadResult
#define GetHitKeyStateAll dx_GetHitKeyStateAll
#define GetHostIPbyName dx_GetHostIPbyName
#define GetHostIPbyName_IPv6 dx_GetHostIPbyName_IPv6
#define GetIMEInputData dx_GetIMEInputData
#define GetIMEInputModeStr dx_GetIMEInputModeStr
#define GetImageAddressSoftImage dx_GetImageAddressSoftImage
#define GetImageSize_File dx_GetImageSize_File
#define GetImageSize_Mem dx_GetImageSize_Mem
#define GetInputChar dx_GetInputChar
#define GetInputCharWait dx_GetInputCharWait
#define GetInputSystemChar dx_GetInputSystemChar
#define GetJoypadAnalogInput dx_GetJoypadAnalogInput
#define GetJoypadAnalogInputRight dx_GetJoypadAnalogInputRight
#define GetJoypadDirectInputState dx_GetJoypadDirectInputState
#define GetJoypadGUID dx_GetJoypadGUID
#define GetJoypadInputState dx_GetJoypadInputState
#define GetJoypadName dx_GetJoypadName
#define GetJoypadNum dx_GetJoypadNum
#define GetJoypadPOVState dx_GetJoypadPOVState
#define GetJoypadXInputState dx_GetJoypadXInputState
#define GetKeyInputCursorPosition dx_GetKeyInputCursorPosition
#define GetKeyInputDrawStartPos dx_GetKeyInputDrawStartPos
#define GetKeyInputNumber dx_GetKeyInputNumber
#define GetKeyInputNumberToFloat dx_GetKeyInputNumberToFloat
#define GetKeyInputSelectArea dx_GetKeyInputSelectArea
#define GetKeyInputString dx_GetKeyInputString
#define GetLastUpdateTimeMovieToGraph dx_GetLastUpdateTimeMovieToGraph
#define GetLightAmbColor dx_GetLightAmbColor
#define GetLightAmbColorHandle dx_GetLightAmbColorHandle
#define GetLightAngle dx_GetLightAngle
#define GetLightAngleHandle dx_GetLightAngleHandle
#define GetLightDifColor dx_GetLightDifColor
#define GetLightDifColorHandle dx_GetLightDifColorHandle
#define GetLightDirection dx_GetLightDirection
#define GetLightDirectionHandle dx_GetLightDirectionHandle
#define GetLightEnable dx_GetLightEnable
#define GetLightEnableHandle dx_GetLightEnableHandle
#define GetLightPosition dx_GetLightPosition
#define GetLightPositionHandle dx_GetLightPositionHandle
#define GetLightRangeAtten dx_GetLightRangeAtten
#define GetLightRangeAttenHandle dx_GetLightRangeAttenHandle
#define GetLightSpcColor dx_GetLightSpcColor
#define GetLightSpcColorHandle dx_GetLightSpcColorHandle
#define GetLightType dx_GetLightType
#define GetLightTypeHandle dx_GetLightTypeHandle
#define GetLogDrawFlag dx_GetLogDrawFlag
#define GetLostNetWork dx_GetLostNetWork
#define GetMainWindowHandle dx_GetMainWindowHandle
#define GetMaskScreenData dx_GetMaskScreenData
#define GetMaskSize dx_GetMaskSize
#define GetMaskUseFlag dx_GetMaskUseFlag
#define GetMatrixXYZRotation dx_GetMatrixXYZRotation
#define GetMatrixXYZRotationD dx_GetMatrixXYZRotationD
#define GetMatrixXZYRotation dx_GetMatrixXZYRotation
#define GetMatrixXZYRotationD dx_GetMatrixXZYRotationD
#define GetMatrixYXZRotation dx_GetMatrixYXZRotation
#define GetMatrixYXZRotationD dx_GetMatrixYXZRotationD
#define GetMatrixYZXRotation dx_GetMatrixYZXRotation
#define GetMatrixYZXRotationD dx_GetMatrixYZXRotationD
#define GetMatrixZXYRotation dx_GetMatrixZXYRotation
#define GetMatrixZXYRotationD dx_GetMatrixZXYRotationD
#define GetMatrixZYXRotation dx_GetMatrixZYXRotation
#define GetMatrixZYXRotationD dx_GetMatrixZYXRotationD
#define GetMaxGraphTextureSize dx_GetMaxGraphTextureSize
#define GetMaxPrimitiveCount dx_GetMaxPrimitiveCount
#define GetMaxVertexIndex dx_GetMaxVertexIndex
#define GetMenuItemID dx_GetMenuItemID
#define GetMenuItemName dx_GetMenuItemName
#define GetMouseDispFlag dx_GetMouseDispFlag
#define GetMouseHWheelRotVol dx_GetMouseHWheelRotVol
#define GetMouseHWheelRotVolF dx_GetMouseHWheelRotVolF
#define GetMouseInput dx_GetMouseInput
#define GetMouseInputLog dx_GetMouseInputLog
#define GetMousePoint dx_GetMousePoint
#define GetMouseWheelRotVol dx_GetMouseWheelRotVol
#define GetMouseWheelRotVolF dx_GetMouseWheelRotVolF
#define GetMovieBaseImageToGraph dx_GetMovieBaseImageToGraph
#define GetMovieStateToGraph dx_GetMovieStateToGraph
#define GetMovieTotalFrameToGraph dx_GetMovieTotalFrameToGraph
#define GetMultiDrawScreenNum dx_GetMultiDrawScreenNum
#define GetMultiSampleQuality dx_GetMultiSampleQuality
#define GetMusicMemPosition dx_GetMusicMemPosition
#define GetMusicPosition dx_GetMusicPosition
#define GetMyIPAddress dx_GetMyIPAddress
#define GetNetWorkAcceptState dx_GetNetWorkAcceptState
#define GetNetWorkCloseAfterLostFlag dx_GetNetWorkCloseAfterLostFlag
#define GetNetWorkDataLength dx_GetNetWorkDataLength
#define GetNetWorkIP dx_GetNetWorkIP
#define GetNetWorkIP_IPv6 dx_GetNetWorkIP_IPv6
#define GetNetWorkSendDataLength dx_GetNetWorkSendDataLength
#define GetNewAcceptNetWork dx_GetNewAcceptNetWork
#define GetNoActiveState dx_GetNoActiveState
#define GetNotDrawFlag dx_GetNotDrawFlag
#define GetNowCount dx_GetNowCount
#define GetNowHiPerformanceCount dx_GetNowHiPerformanceCount
#define GetOneChar dx_GetOneChar
#define GetOneCharWait dx_GetOneCharWait
#define GetOneFrameTimeMovieToGraph dx_GetOneFrameTimeMovieToGraph
#define GetPaintMessageFlag dx_GetPaintMessageFlag
#define GetPaletteBaseImage dx_GetPaletteBaseImage
#define GetPaletteSoftImage dx_GetPaletteSoftImage
#define GetPanSoundMem dx_GetPanSoundMem
#define GetPcInfo dx_GetPcInfo
#define GetPitchSoftImage dx_GetPitchSoftImage
#define GetPixel dx_GetPixel
#define GetPixelBaseImage dx_GetPixelBaseImage
#define GetPixelBaseImageF dx_GetPixelBaseImageF
#define GetPixelPalCodeBaseImage dx_GetPixelPalCodeBaseImage
#define GetPixelPalCodeSoftImage dx_GetPixelPalCodeSoftImage
#define GetPixelSoftImage dx_GetPixelSoftImage
#define GetPixelSoftImageF dx_GetPixelSoftImageF
#define GetPixelSoftImage_Unsafe_ARGB8 dx_GetPixelSoftImage_Unsafe_ARGB8
#define GetPixelSoftImage_Unsafe_XRGB8 dx_GetPixelSoftImage_Unsafe_XRGB8
#define GetRand dx_GetRand
#define GetRectSize dx_GetRectSize
#define GetRefreshRate dx_GetRefreshRate
#define GetResourceIDString dx_GetResourceIDString
#define GetResourceInfo dx_GetResourceInfo
#define GetScreenBitDepth dx_GetScreenBitDepth
#define GetScreenMemToSystemMemFlag dx_GetScreenMemToSystemMemFlag
#define GetScreenState dx_GetScreenState
#define GetSoftImageSize dx_GetSoftImageSize
#define GetSoftSoundDataImage dx_GetSoftSoundDataImage
#define GetSoftSoundFormat dx_GetSoftSoundFormat
#define GetSoftSoundPlayerFormat dx_GetSoftSoundPlayerFormat
#define GetSoftSoundSampleNum dx_GetSoftSoundSampleNum
#define GetSoundCurrentPosition dx_GetSoundCurrentPosition
#define GetSoundCurrentTime dx_GetSoundCurrentTime
#define GetSoundTotalSample dx_GetSoundTotalSample
#define GetSoundTotalTime dx_GetSoundTotalTime
#define GetStockDataLengthSoftSoundPlayer dx_GetStockDataLengthSoftSoundPlayer
#define GetStreamFunctionDefault dx_GetStreamFunctionDefault
#define GetStreamSoundCurrentPosition dx_GetStreamSoundCurrentPosition
#define GetStreamSoundCurrentTime dx_GetStreamSoundCurrentTime
#define GetStringLength dx_GetStringLength
#define GetStringPoint dx_GetStringPoint
#define GetStringPoint2 dx_GetStringPoint2
#define GetTaskInstance dx_GetTaskInstance
extern const COLORDATA*  dxexc_GetTexColorData(int AlphaCh, int AlphaTest, int ColorBitDepth, int DrawValid); // overload
extern const COLORDATA*  dxexc_GetTexColorData(const IMAGEFORMATDESC*  Format); // overload
extern const COLORDATA*  dxexc_GetTexColorData(int FormatIndex); // overload
#define GetTexColorData dxexc_GetTexColorData
#define GetTexFormatIndex dx_GetTexFormatIndex
#define GetToolBarButtonState dx_GetToolBarButtonState
#define GetTouchInput dx_GetTouchInput
#define GetTouchInputLog dx_GetTouchInputLog
#define GetTouchInputLogNum dx_GetTouchInputLogNum
#define GetTouchInputLogOne dx_GetTouchInputLogOne
#define GetTouchInputNum dx_GetTouchInputNum
#define GetTransColor dx_GetTransColor
#define GetTransformPosition dx_GetTransformPosition
#define GetTransformPositionD dx_GetTransformPositionD
#define GetTransformToAPIViewportMatrix dx_GetTransformToAPIViewportMatrix
#define GetTransformToAPIViewportMatrixD dx_GetTransformToAPIViewportMatrixD
#define GetTransformToProjectionMatrix dx_GetTransformToProjectionMatrix
#define GetTransformToProjectionMatrixD dx_GetTransformToProjectionMatrixD
#define GetTransformToViewMatrix dx_GetTransformToViewMatrix
#define GetTransformToViewMatrixD dx_GetTransformToViewMatrixD
#define GetTransformToViewportMatrix dx_GetTransformToViewportMatrix
#define GetTransformToViewportMatrixD dx_GetTransformToViewportMatrixD
#define GetTransformToWorldMatrix dx_GetTransformToWorldMatrix
#define GetTransformToWorldMatrixD dx_GetTransformToWorldMatrixD
#define GetUse3DFlag dx_GetUse3DFlag
#define GetUseAlphaChannelGraphCreateFlag dx_GetUseAlphaChannelGraphCreateFlag
#define GetUseAlphaTestFlag dx_GetUseAlphaTestFlag
#define GetUseAlphaTestGraphCreateFlag dx_GetUseAlphaTestGraphCreateFlag
#define GetUseBackCulling dx_GetUseBackCulling
#define GetUseBlendGraphCreateFlag dx_GetUseBlendGraphCreateFlag
#define GetUseDDrawObj dx_GetUseDDrawObj
#define GetUseDXNetWorkProtocol dx_GetUseDXNetWorkProtocol
#define GetUseDXProtocol dx_GetUseDXProtocol
#define GetUseDirect3D11BackBufferTexture2D dx_GetUseDirect3D11BackBufferTexture2D
#define GetUseDirect3D11DepthStencilTexture2D dx_GetUseDirect3D11DepthStencilTexture2D
#define GetUseDirect3D11Device dx_GetUseDirect3D11Device
#define GetUseDirect3D11DeviceContext dx_GetUseDirect3D11DeviceContext
#define GetUseDirect3D11FeatureLevel dx_GetUseDirect3D11FeatureLevel
#define GetUseDirect3D9BackBufferSurface dx_GetUseDirect3D9BackBufferSurface
#define GetUseDirect3DDevice9 dx_GetUseDirect3DDevice9
#define GetUseDirect3DVersion dx_GetUseDirect3DVersion
#define GetUseGDIFlag dx_GetUseGDIFlag
#define GetUseGraphAlphaChannel dx_GetUseGraphAlphaChannel
#define GetUseGraphBaseDataBackup dx_GetUseGraphBaseDataBackup
#define GetUseMMXFlag dx_GetUseMMXFlag
#define GetUseMaskScreenFlag dx_GetUseMaskScreenFlag
#define GetUseMenuFlag dx_GetUseMenuFlag
#define GetUseNotManageTextureFlag dx_GetUseNotManageTextureFlag
#define GetUsePlatformTextureFormat dx_GetUsePlatformTextureFormat
#define GetUseSSE2Flag dx_GetUseSSE2Flag
#define GetUseSSEFlag dx_GetUseSSEFlag
#define GetUseSetDrawScreenSettingReset dx_GetUseSetDrawScreenSettingReset
#define GetUseSystemMemGraphCreateFlag dx_GetUseSystemMemGraphCreateFlag
#define GetUseVramFlag dx_GetUseVramFlag
#define GetUseWindowRgnFlag dx_GetUseWindowRgnFlag
#define GetValidHiPerformanceCounter dx_GetValidHiPerformanceCounter
#define GetValidRestoreShredPoint dx_GetValidRestoreShredPoint
#define GetValidShaderVersion dx_GetValidShaderVersion
#define GetVideoMemorySize dx_GetVideoMemorySize
#define GetVolumeSoundMem dx_GetVolumeSoundMem
#define GetWaitVSyncFlag dx_GetWaitVSyncFlag
#define GetWindowActiveFlag dx_GetWindowActiveFlag
#define GetWindowCRect dx_GetWindowCRect
#define GetWindowCloseFlag dx_GetWindowCloseFlag
#define GetWindowMaxSizeFlag dx_GetWindowMaxSizeFlag
#define GetWindowMinSizeFlag dx_GetWindowMinSizeFlag
#define GetWindowModeFlag dx_GetWindowModeFlag
#define GetWindowPosition dx_GetWindowPosition
#define GetWindowSize dx_GetWindowSize
#define GetWindowSizeChangeEnableFlag dx_GetWindowSizeChangeEnableFlag
#define GetWindowSizeExtendRate dx_GetWindowSizeExtendRate
#define GetWindowUserCloseFlag dx_GetWindowUserCloseFlag
#define GraphColorMatchBltVer2 dx_GraphColorMatchBltVer2
#define GraphImageBltToMask dx_GraphImageBltToMask
#define GraphLock dx_GraphLock
#define GraphUnLock dx_GraphUnLock
#define HitCheck_Capsule_Capsule dx_HitCheck_Capsule_Capsule
#define HitCheck_Capsule_CapsuleD dx_HitCheck_Capsule_CapsuleD
#define HitCheck_Capsule_Triangle dx_HitCheck_Capsule_Triangle
#define HitCheck_Capsule_TriangleD dx_HitCheck_Capsule_TriangleD
#define HitCheck_Line_Cube dx_HitCheck_Line_Cube
#define HitCheck_Line_CubeD dx_HitCheck_Line_CubeD
#define HitCheck_Line_Sphere dx_HitCheck_Line_Sphere
#define HitCheck_Line_SphereD dx_HitCheck_Line_SphereD
#define HitCheck_Line_Triangle dx_HitCheck_Line_Triangle
#define HitCheck_Line_TriangleD dx_HitCheck_Line_TriangleD
#define HitCheck_Sphere_Capsule dx_HitCheck_Sphere_Capsule
#define HitCheck_Sphere_CapsuleD dx_HitCheck_Sphere_CapsuleD
#define HitCheck_Sphere_Sphere dx_HitCheck_Sphere_Sphere
#define HitCheck_Sphere_SphereD dx_HitCheck_Sphere_SphereD
#define HitCheck_Sphere_Triangle dx_HitCheck_Sphere_Triangle
#define HitCheck_Sphere_TriangleD dx_HitCheck_Sphere_TriangleD
#define HitCheck_Triangle_Triangle dx_HitCheck_Triangle_Triangle
#define HitCheck_Triangle_TriangleD dx_HitCheck_Triangle_TriangleD
#define InitFontToHandle dx_InitFontToHandle
#define InitGraph dx_InitGraph
#define InitIndexBuffer dx_InitIndexBuffer
#define InitKeyInput dx_InitKeyInput
#define InitMask dx_InitMask
#define InitMusicMem dx_InitMusicMem
#define InitShader dx_InitShader
#define InitShaderConstantBuffer dx_InitShaderConstantBuffer
#define InitSoftImage dx_InitSoftImage
#define InitSoftSound dx_InitSoftSound
#define InitSoftSoundPlayer dx_InitSoftSoundPlayer
#define InitSoundMem dx_InitSoundMem
#define InitVertexBuffer dx_InitVertexBuffer
#define InputStringToCustom dx_InputStringToCustom
#define InsertMenuItem_ID dx_InsertMenuItem_ID
#define InsertMenuItem_Name dx_InsertMenuItem_Name
#define InsertMenuLine_ID dx_InsertMenuLine_ID
#define InsertMenuLine_Name dx_InsertMenuLine_Name
#define KeyInputNumber dx_KeyInputNumber
#define KeyInputSingleCharString dx_KeyInputSingleCharString
#define KeyInputString dx_KeyInputString
#define LoadBGM dx_LoadBGM
#define LoadBlendGraph dx_LoadBlendGraph
#define LoadBmpToGraph dx_LoadBmpToGraph
#define LoadDivBmpToGraph dx_LoadDivBmpToGraph
#define LoadDivGraph dx_LoadDivGraph
extern int dxexc_LoadDivGraphToResource(const BASEIMAGE*  RgbBaseImage, int TextureFlag, int ReverseFlag); // overload
extern int dxexc_LoadDivGraphToResource(const BASEIMAGE*  RgbBaseImage, const BASEIMAGE*  AlphaBaseImage, int TextureFlag, int ReverseFlag); // overload
#define LoadDivGraphToResource dxexc_LoadDivGraphToResource
#define LoadDivMask dx_LoadDivMask
#define LoadFontDataFromMemToHandle dx_LoadFontDataFromMemToHandle
#define LoadFontDataToHandle dx_LoadFontDataToHandle
#define LoadGraph dx_LoadGraph
#define LoadGraphScreen dx_LoadGraphScreen
extern int dxexc_LoadGraphToResource(const BASEIMAGE*  RgbBaseImage, int TextureFlag, int ReverseFlag); // overload
extern int dxexc_LoadGraphToResource(const BASEIMAGE*  RgbBaseImage, const BASEIMAGE*  AlphaBaseImage, int TextureFlag, int ReverseFlag); // overload
#define LoadGraphToResource dxexc_LoadGraphToResource
#define LoadMask dx_LoadMask
#define LoadMenuResource dx_LoadMenuResource
#define LoadMusicMem dx_LoadMusicMem
#define LoadMusicMemByMemImage dx_LoadMusicMemByMemImage
#define LoadMusicMemByResource dx_LoadMusicMemByResource
#define LoadPauseGraph dx_LoadPauseGraph
#define LoadPauseGraphFromMem dx_LoadPauseGraphFromMem
#define LoadPixelShader dx_LoadPixelShader
#define LoadPixelShaderFromMem dx_LoadPixelShaderFromMem
#define LoadReverseDivGraph dx_LoadReverseDivGraph
#define LoadReverseGraph dx_LoadReverseGraph
#define LoadSoftImage dx_LoadSoftImage
#define LoadSoftImageToMem dx_LoadSoftImageToMem
#define LoadSoftSound dx_LoadSoftSound
#define LoadSoftSoundFromMemImage dx_LoadSoftSoundFromMemImage
#define LoadSoundMem dx_LoadSoundMem
#define LoadSoundMem2 dx_LoadSoundMem2
#define LoadSoundMem2ByMemImage dx_LoadSoundMem2ByMemImage
#define LoadSoundMemBase dx_LoadSoundMemBase
#define LoadSoundMemByMemImage dx_LoadSoundMemByMemImage
#define LoadSoundMemByMemImage2 dx_LoadSoundMemByMemImage2
#define LoadSoundMemByMemImageBase dx_LoadSoundMemByMemImageBase
#define LoadSoundMemByMemImageToBufNumSitei dx_LoadSoundMemByMemImageToBufNumSitei
#define LoadSoundMemByResource dx_LoadSoundMemByResource
#define LoadSoundMemFromSoftSound dx_LoadSoundMemFromSoftSound
#define LoadSoundMemToBufNumSitei dx_LoadSoundMemToBufNumSitei
#define LoadVertexShader dx_LoadVertexShader
#define LoadVertexShaderFromMem dx_LoadVertexShaderFromMem
#define MAdd dx_MAdd
#define MAddD dx_MAddD
#define MGetAxis1 dx_MGetAxis1
#define MGetAxis1D dx_MGetAxis1D
#define MGetAxis2 dx_MGetAxis2
#define MGetAxis2D dx_MGetAxis2D
#define MGetIdent dx_MGetIdent
#define MGetIdentD dx_MGetIdentD
#define MGetRotAxis dx_MGetRotAxis
#define MGetRotAxisD dx_MGetRotAxisD
#define MGetRotVec2 dx_MGetRotVec2
#define MGetRotVec2D dx_MGetRotVec2D
#define MGetRotX dx_MGetRotX
#define MGetRotXD dx_MGetRotXD
#define MGetRotY dx_MGetRotY
#define MGetRotYD dx_MGetRotYD
#define MGetRotZ dx_MGetRotZ
#define MGetRotZD dx_MGetRotZD
#define MGetScale dx_MGetScale
#define MGetScaleD dx_MGetScaleD
#define MGetSize dx_MGetSize
#define MGetSizeD dx_MGetSizeD
#define MGetTranslate dx_MGetTranslate
#define MGetTranslateD dx_MGetTranslateD
#define MInverse dx_MInverse
#define MInverseD dx_MInverseD
#define MMult dx_MMult
#define MMultD dx_MMultD
#define MScale dx_MScale
#define MScaleD dx_MScaleD
#define MTranspose dx_MTranspose
#define MTransposeD dx_MTransposeD
#define MV1AttachAnim dx_MV1AttachAnim
#define MV1CollCheck_Capsule dx_MV1CollCheck_Capsule
#define MV1CollCheck_GetResultPoly dx_MV1CollCheck_GetResultPoly
#define MV1CollCheck_Line dx_MV1CollCheck_Line
#define MV1CollCheck_LineDim dx_MV1CollCheck_LineDim
#define MV1CollCheck_Sphere dx_MV1CollCheck_Sphere
#define MV1CollCheck_Triangle dx_MV1CollCheck_Triangle
#define MV1CollResultPolyDimTerminate dx_MV1CollResultPolyDimTerminate
#define MV1CreateCloneModel dx_MV1CreateCloneModel
#define MV1DeleteModel dx_MV1DeleteModel
#define MV1DetachAnim dx_MV1DetachAnim
#define MV1DrawFrame dx_MV1DrawFrame
#define MV1DrawMesh dx_MV1DrawMesh
#define MV1DrawModel dx_MV1DrawModel
#define MV1DrawModelDebug dx_MV1DrawModelDebug
#define MV1DrawTriangleList dx_MV1DrawTriangleList
#define MV1DuplicateModel dx_MV1DuplicateModel
#define MV1GetAmbColorScale dx_MV1GetAmbColorScale
#define MV1GetAnimIndex dx_MV1GetAnimIndex
#define MV1GetAnimKeyDataIndexFromTime dx_MV1GetAnimKeyDataIndexFromTime
#define MV1GetAnimKeyDataTime dx_MV1GetAnimKeyDataTime
#define MV1GetAnimKeyDataToFlat dx_MV1GetAnimKeyDataToFlat
#define MV1GetAnimKeyDataToFlatFromTime dx_MV1GetAnimKeyDataToFlatFromTime
#define MV1GetAnimKeyDataToLinear dx_MV1GetAnimKeyDataToLinear
#define MV1GetAnimKeyDataToLinearFromTime dx_MV1GetAnimKeyDataToLinearFromTime
#define MV1GetAnimKeyDataToMatrix dx_MV1GetAnimKeyDataToMatrix
#define MV1GetAnimKeyDataToMatrixFromTime dx_MV1GetAnimKeyDataToMatrixFromTime
#define MV1GetAnimKeyDataToQuaternion dx_MV1GetAnimKeyDataToQuaternion
#define MV1GetAnimKeyDataToQuaternionFromTime dx_MV1GetAnimKeyDataToQuaternionFromTime
#define MV1GetAnimKeyDataToVector dx_MV1GetAnimKeyDataToVector
#define MV1GetAnimKeyDataToVectorFromTime dx_MV1GetAnimKeyDataToVectorFromTime
#define MV1GetAnimKeySetDataNum dx_MV1GetAnimKeySetDataNum
#define MV1GetAnimKeySetDataType dx_MV1GetAnimKeySetDataType
#define MV1GetAnimKeySetNum dx_MV1GetAnimKeySetNum
#define MV1GetAnimKeySetTimeType dx_MV1GetAnimKeySetTimeType
#define MV1GetAnimKeySetType dx_MV1GetAnimKeySetType
#define MV1GetAnimName dx_MV1GetAnimName
#define MV1GetAnimNum dx_MV1GetAnimNum
#define MV1GetAnimTargetFrame dx_MV1GetAnimTargetFrame
#define MV1GetAnimTargetFrameKeySet dx_MV1GetAnimTargetFrameKeySet
#define MV1GetAnimTargetFrameKeySetNum dx_MV1GetAnimTargetFrameKeySetNum
#define MV1GetAnimTargetFrameName dx_MV1GetAnimTargetFrameName
#define MV1GetAnimTargetFrameNum dx_MV1GetAnimTargetFrameNum
#define MV1GetAnimTotalTime dx_MV1GetAnimTotalTime
#define MV1GetAttachAnim dx_MV1GetAttachAnim
#define MV1GetAttachAnimBlendRate dx_MV1GetAttachAnimBlendRate
#define MV1GetAttachAnimBlendRateToFrame dx_MV1GetAttachAnimBlendRateToFrame
#define MV1GetAttachAnimFrameLocalMatrix dx_MV1GetAttachAnimFrameLocalMatrix
#define MV1GetAttachAnimFrameLocalPosition dx_MV1GetAttachAnimFrameLocalPosition
#define MV1GetAttachAnimTime dx_MV1GetAttachAnimTime
#define MV1GetAttachAnimTotalTime dx_MV1GetAttachAnimTotalTime
#define MV1GetAttachAnimUseShapeFlag dx_MV1GetAttachAnimUseShapeFlag
#define MV1GetDifColorScale dx_MV1GetDifColorScale
#define MV1GetEmiColorScale dx_MV1GetEmiColorScale
#define MV1GetFrameAmbColorScale dx_MV1GetFrameAmbColorScale
#define MV1GetFrameAvgVertexLocalPosition dx_MV1GetFrameAvgVertexLocalPosition
#define MV1GetFrameAvgVertexLocalPositionD dx_MV1GetFrameAvgVertexLocalPositionD
#define MV1GetFrameBaseLocalMatrix dx_MV1GetFrameBaseLocalMatrix
#define MV1GetFrameBaseLocalMatrixD dx_MV1GetFrameBaseLocalMatrixD
#define MV1GetFrameBaseVisible dx_MV1GetFrameBaseVisible
#define MV1GetFrameChild dx_MV1GetFrameChild
#define MV1GetFrameChildNum dx_MV1GetFrameChildNum
#define MV1GetFrameDifColorScale dx_MV1GetFrameDifColorScale
#define MV1GetFrameEmiColorScale dx_MV1GetFrameEmiColorScale
#define MV1GetFrameLocalMatrix dx_MV1GetFrameLocalMatrix
#define MV1GetFrameLocalMatrixD dx_MV1GetFrameLocalMatrixD
#define MV1GetFrameLocalWorldMatrix dx_MV1GetFrameLocalWorldMatrix
#define MV1GetFrameLocalWorldMatrixD dx_MV1GetFrameLocalWorldMatrixD
#define MV1GetFrameMaxVertexLocalPosition dx_MV1GetFrameMaxVertexLocalPosition
#define MV1GetFrameMaxVertexLocalPositionD dx_MV1GetFrameMaxVertexLocalPositionD
#define MV1GetFrameMesh dx_MV1GetFrameMesh
#define MV1GetFrameMeshNum dx_MV1GetFrameMeshNum
#define MV1GetFrameMinVertexLocalPosition dx_MV1GetFrameMinVertexLocalPosition
#define MV1GetFrameMinVertexLocalPositionD dx_MV1GetFrameMinVertexLocalPositionD
#define MV1GetFrameName dx_MV1GetFrameName
#define MV1GetFrameName2 dx_MV1GetFrameName2
#define MV1GetFrameNum dx_MV1GetFrameNum
#define MV1GetFrameOpacityRate dx_MV1GetFrameOpacityRate
#define MV1GetFrameParent dx_MV1GetFrameParent
#define MV1GetFramePosition dx_MV1GetFramePosition
#define MV1GetFramePositionD dx_MV1GetFramePositionD
#define MV1GetFrameSemiTransState dx_MV1GetFrameSemiTransState
#define MV1GetFrameSpcColorScale dx_MV1GetFrameSpcColorScale
#define MV1GetFrameTriangleNum dx_MV1GetFrameTriangleNum
#define MV1GetFrameVisible dx_MV1GetFrameVisible
#define MV1GetLocalWorldMatrix dx_MV1GetLocalWorldMatrix
#define MV1GetLocalWorldMatrixD dx_MV1GetLocalWorldMatrixD
#define MV1GetMaterialAmbColor dx_MV1GetMaterialAmbColor
#define MV1GetMaterialDifColor dx_MV1GetMaterialDifColor
#define MV1GetMaterialDifGradBlendType dx_MV1GetMaterialDifGradBlendType
#define MV1GetMaterialDifGradTexture dx_MV1GetMaterialDifGradTexture
#define MV1GetMaterialDifMapTexture dx_MV1GetMaterialDifMapTexture
#define MV1GetMaterialDrawAlphaTestEnable dx_MV1GetMaterialDrawAlphaTestEnable
#define MV1GetMaterialDrawAlphaTestMode dx_MV1GetMaterialDrawAlphaTestMode
#define MV1GetMaterialDrawAlphaTestParam dx_MV1GetMaterialDrawAlphaTestParam
#define MV1GetMaterialDrawBlendMode dx_MV1GetMaterialDrawBlendMode
#define MV1GetMaterialDrawBlendParam dx_MV1GetMaterialDrawBlendParam
#define MV1GetMaterialEmiColor dx_MV1GetMaterialEmiColor
#define MV1GetMaterialName dx_MV1GetMaterialName
#define MV1GetMaterialNormalMapTexture dx_MV1GetMaterialNormalMapTexture
#define MV1GetMaterialNum dx_MV1GetMaterialNum
#define MV1GetMaterialNumberOrderFlag dx_MV1GetMaterialNumberOrderFlag
#define MV1GetMaterialOutLineColor dx_MV1GetMaterialOutLineColor
#define MV1GetMaterialOutLineDotWidth dx_MV1GetMaterialOutLineDotWidth
#define MV1GetMaterialOutLineWidth dx_MV1GetMaterialOutLineWidth
#define MV1GetMaterialSpcColor dx_MV1GetMaterialSpcColor
#define MV1GetMaterialSpcGradBlendType dx_MV1GetMaterialSpcGradBlendType
#define MV1GetMaterialSpcGradTexture dx_MV1GetMaterialSpcGradTexture
#define MV1GetMaterialSpcMapTexture dx_MV1GetMaterialSpcMapTexture
#define MV1GetMaterialSpcPower dx_MV1GetMaterialSpcPower
#define MV1GetMaterialSphereMapBlendType dx_MV1GetMaterialSphereMapBlendType
#define MV1GetMaterialSphereMapTexture dx_MV1GetMaterialSphereMapTexture
#define MV1GetMaterialType dx_MV1GetMaterialType
#define MV1GetMatrix dx_MV1GetMatrix
#define MV1GetMatrixD dx_MV1GetMatrixD
#define MV1GetMeshAmbColorScale dx_MV1GetMeshAmbColorScale
#define MV1GetMeshBackCulling dx_MV1GetMeshBackCulling
#define MV1GetMeshBaseVisible dx_MV1GetMeshBaseVisible
#define MV1GetMeshCategoryVisible dx_MV1GetMeshCategoryVisible
#define MV1GetMeshDifColorScale dx_MV1GetMeshDifColorScale
#define MV1GetMeshDrawBlendMode dx_MV1GetMeshDrawBlendMode
#define MV1GetMeshDrawBlendParam dx_MV1GetMeshDrawBlendParam
#define MV1GetMeshEmiColorScale dx_MV1GetMeshEmiColorScale
#define MV1GetMeshMaterial dx_MV1GetMeshMaterial
#define MV1GetMeshMaxPosition dx_MV1GetMeshMaxPosition
#define MV1GetMeshMinPosition dx_MV1GetMeshMinPosition
#define MV1GetMeshNum dx_MV1GetMeshNum
#define MV1GetMeshOpacityRate dx_MV1GetMeshOpacityRate
#define MV1GetMeshSemiTransState dx_MV1GetMeshSemiTransState
#define MV1GetMeshShapeFlag dx_MV1GetMeshShapeFlag
#define MV1GetMeshSpcColorScale dx_MV1GetMeshSpcColorScale
#define MV1GetMeshTList dx_MV1GetMeshTList
#define MV1GetMeshTListNum dx_MV1GetMeshTListNum
#define MV1GetMeshTriangleNum dx_MV1GetMeshTriangleNum
#define MV1GetMeshUseVertDifColor dx_MV1GetMeshUseVertDifColor
#define MV1GetMeshUseVertSpcColor dx_MV1GetMeshUseVertSpcColor
#define MV1GetMeshVisible dx_MV1GetMeshVisible
#define MV1GetOpacityRate dx_MV1GetOpacityRate
#define MV1GetPosition dx_MV1GetPosition
#define MV1GetPositionD dx_MV1GetPositionD
#define MV1GetReferenceMesh dx_MV1GetReferenceMesh
#define MV1GetRotationMatrix dx_MV1GetRotationMatrix
#define MV1GetRotationXYZ dx_MV1GetRotationXYZ
#define MV1GetScale dx_MV1GetScale
#define MV1GetSemiTransState dx_MV1GetSemiTransState
#define MV1GetShapeName dx_MV1GetShapeName
#define MV1GetShapeNum dx_MV1GetShapeNum
#define MV1GetShapeRate dx_MV1GetShapeRate
#define MV1GetShapeTargetMesh dx_MV1GetShapeTargetMesh
#define MV1GetShapeTargetMeshNum dx_MV1GetShapeTargetMeshNum
#define MV1GetSpcColorScale dx_MV1GetSpcColorScale
#define MV1GetTextureAddressModeU dx_MV1GetTextureAddressModeU
#define MV1GetTextureAddressModeV dx_MV1GetTextureAddressModeV
#define MV1GetTextureAlphaFilePath dx_MV1GetTextureAlphaFilePath
#define MV1GetTextureBumpImageFlag dx_MV1GetTextureBumpImageFlag
#define MV1GetTextureBumpImageNextPixelLength dx_MV1GetTextureBumpImageNextPixelLength
#define MV1GetTextureColorFilePath dx_MV1GetTextureColorFilePath
#define MV1GetTextureGraphHandle dx_MV1GetTextureGraphHandle
#define MV1GetTextureHeight dx_MV1GetTextureHeight
#define MV1GetTextureName dx_MV1GetTextureName
#define MV1GetTextureNum dx_MV1GetTextureNum
#define MV1GetTextureSampleFilterMode dx_MV1GetTextureSampleFilterMode
#define MV1GetTextureSemiTransState dx_MV1GetTextureSemiTransState
#define MV1GetTextureWidth dx_MV1GetTextureWidth
#define MV1GetTriangleListLocalWorldMatrix dx_MV1GetTriangleListLocalWorldMatrix
#define MV1GetTriangleListLocalWorldMatrixNum dx_MV1GetTriangleListLocalWorldMatrixNum
#define MV1GetTriangleListNum dx_MV1GetTriangleListNum
#define MV1GetTriangleListPolygonNum dx_MV1GetTriangleListPolygonNum
#define MV1GetTriangleListPolygonVertexPosition dx_MV1GetTriangleListPolygonVertexPosition
#define MV1GetTriangleListVertexNum dx_MV1GetTriangleListVertexNum
#define MV1GetTriangleListVertexType dx_MV1GetTriangleListVertexType
#define MV1GetUseDrawMulAlphaColor dx_MV1GetUseDrawMulAlphaColor
#define MV1GetVisible dx_MV1GetVisible
#define MV1InitModel dx_MV1InitModel
#define MV1LoadModel dx_MV1LoadModel
#define MV1LoadModelFromMem dx_MV1LoadModelFromMem
#define MV1LoadTexture dx_MV1LoadTexture
#define MV1PhysicsCalculation dx_MV1PhysicsCalculation
#define MV1PhysicsResetState dx_MV1PhysicsResetState
#define MV1RefreshCollInfo dx_MV1RefreshCollInfo
#define MV1RefreshReferenceMesh dx_MV1RefreshReferenceMesh
#define MV1RefreshVertColorFromMaterial dx_MV1RefreshVertColorFromMaterial
#define MV1ResetFrameTextureAddressTransform dx_MV1ResetFrameTextureAddressTransform
#define MV1ResetFrameUserLocalMatrix dx_MV1ResetFrameUserLocalMatrix
#define MV1SaveModelToMV1File dx_MV1SaveModelToMV1File
#define MV1SaveModelToXFile dx_MV1SaveModelToXFile
#define MV1SearchFrame dx_MV1SearchFrame
#define MV1SearchFrameChild dx_MV1SearchFrameChild
#define MV1SearchShape dx_MV1SearchShape
#define MV1SetAmbColorScale dx_MV1SetAmbColorScale
#define MV1SetAnimName dx_MV1SetAnimName
#define MV1SetAttachAnimBlendRate dx_MV1SetAttachAnimBlendRate
#define MV1SetAttachAnimBlendRateToFrame dx_MV1SetAttachAnimBlendRateToFrame
#define MV1SetAttachAnimTime dx_MV1SetAttachAnimTime
#define MV1SetAttachAnimUseShapeFlag dx_MV1SetAttachAnimUseShapeFlag
#define MV1SetDifColorScale dx_MV1SetDifColorScale
#define MV1SetEmiColorScale dx_MV1SetEmiColorScale
#define MV1SetFrameAmbColorScale dx_MV1SetFrameAmbColorScale
#define MV1SetFrameBaseVisible dx_MV1SetFrameBaseVisible
#define MV1SetFrameDifColorScale dx_MV1SetFrameDifColorScale
#define MV1SetFrameEmiColorScale dx_MV1SetFrameEmiColorScale
#define MV1SetFrameOpacityRate dx_MV1SetFrameOpacityRate
#define MV1SetFrameSpcColorScale dx_MV1SetFrameSpcColorScale
#define MV1SetFrameTextureAddressTransform dx_MV1SetFrameTextureAddressTransform
#define MV1SetFrameTextureAddressTransformMatrix dx_MV1SetFrameTextureAddressTransformMatrix
#define MV1SetFrameUserLocalMatrix dx_MV1SetFrameUserLocalMatrix
#define MV1SetFrameUserLocalMatrixD dx_MV1SetFrameUserLocalMatrixD
#define MV1SetFrameVisible dx_MV1SetFrameVisible
#define MV1SetLoadCalcPhysicsWorldGravity dx_MV1SetLoadCalcPhysicsWorldGravity
#define MV1SetLoadModelAnimFilePath dx_MV1SetLoadModelAnimFilePath
#define MV1SetLoadModelIgnoreScaling dx_MV1SetLoadModelIgnoreScaling
#define MV1SetLoadModelNotEqNormalSide_AddZeroAreaPolygon dx_MV1SetLoadModelNotEqNormalSide_AddZeroAreaPolygon
#define MV1SetLoadModelPhysicsCalcPrecision dx_MV1SetLoadModelPhysicsCalcPrecision
#define MV1SetLoadModelPhysicsWorldGravity dx_MV1SetLoadModelPhysicsWorldGravity
#define MV1SetLoadModelPositionOptimize dx_MV1SetLoadModelPositionOptimize
#define MV1SetLoadModelReMakeNormal dx_MV1SetLoadModelReMakeNormal
#define MV1SetLoadModelReMakeNormalSmoothingAngle dx_MV1SetLoadModelReMakeNormalSmoothingAngle
#define MV1SetLoadModelTriangleListUseMaxBoneNum dx_MV1SetLoadModelTriangleListUseMaxBoneNum
#define MV1SetLoadModelUsePackDraw dx_MV1SetLoadModelUsePackDraw
#define MV1SetLoadModelUsePhysicsMode dx_MV1SetLoadModelUsePhysicsMode
#define MV1SetMaterialAmbColor dx_MV1SetMaterialAmbColor
#define MV1SetMaterialDifColor dx_MV1SetMaterialDifColor
#define MV1SetMaterialDifGradBlendType dx_MV1SetMaterialDifGradBlendType
#define MV1SetMaterialDifGradBlendTypeAll dx_MV1SetMaterialDifGradBlendTypeAll
#define MV1SetMaterialDifGradTexture dx_MV1SetMaterialDifGradTexture
#define MV1SetMaterialDifMapTexture dx_MV1SetMaterialDifMapTexture
#define MV1SetMaterialDrawAlphaTest dx_MV1SetMaterialDrawAlphaTest
#define MV1SetMaterialDrawAlphaTestAll dx_MV1SetMaterialDrawAlphaTestAll
#define MV1SetMaterialDrawBlendMode dx_MV1SetMaterialDrawBlendMode
#define MV1SetMaterialDrawBlendModeAll dx_MV1SetMaterialDrawBlendModeAll
#define MV1SetMaterialDrawBlendParam dx_MV1SetMaterialDrawBlendParam
#define MV1SetMaterialDrawBlendParamAll dx_MV1SetMaterialDrawBlendParamAll
#define MV1SetMaterialEmiColor dx_MV1SetMaterialEmiColor
#define MV1SetMaterialOutLineColor dx_MV1SetMaterialOutLineColor
#define MV1SetMaterialOutLineColorAll dx_MV1SetMaterialOutLineColorAll
#define MV1SetMaterialOutLineDotWidth dx_MV1SetMaterialOutLineDotWidth
#define MV1SetMaterialOutLineDotWidthAll dx_MV1SetMaterialOutLineDotWidthAll
#define MV1SetMaterialOutLineWidth dx_MV1SetMaterialOutLineWidth
#define MV1SetMaterialOutLineWidthAll dx_MV1SetMaterialOutLineWidthAll
#define MV1SetMaterialSpcColor dx_MV1SetMaterialSpcColor
#define MV1SetMaterialSpcGradBlendType dx_MV1SetMaterialSpcGradBlendType
#define MV1SetMaterialSpcGradBlendTypeAll dx_MV1SetMaterialSpcGradBlendTypeAll
#define MV1SetMaterialSpcGradTexture dx_MV1SetMaterialSpcGradTexture
#define MV1SetMaterialSpcMapTexture dx_MV1SetMaterialSpcMapTexture
#define MV1SetMaterialSpcPower dx_MV1SetMaterialSpcPower
#define MV1SetMaterialSphereMapBlendType dx_MV1SetMaterialSphereMapBlendType
#define MV1SetMaterialSphereMapBlendTypeAll dx_MV1SetMaterialSphereMapBlendTypeAll
#define MV1SetMaterialSphereMapTexture dx_MV1SetMaterialSphereMapTexture
#define MV1SetMaterialType dx_MV1SetMaterialType
#define MV1SetMaterialTypeAll dx_MV1SetMaterialTypeAll
#define MV1SetMatrix dx_MV1SetMatrix
#define MV1SetMatrixD dx_MV1SetMatrixD
#define MV1SetMaxAnisotropy dx_MV1SetMaxAnisotropy
#define MV1SetMeshAmbColorScale dx_MV1SetMeshAmbColorScale
#define MV1SetMeshBackCulling dx_MV1SetMeshBackCulling
#define MV1SetMeshBaseVisible dx_MV1SetMeshBaseVisible
#define MV1SetMeshCategoryVisible dx_MV1SetMeshCategoryVisible
#define MV1SetMeshDifColorScale dx_MV1SetMeshDifColorScale
#define MV1SetMeshDrawBlendMode dx_MV1SetMeshDrawBlendMode
#define MV1SetMeshDrawBlendParam dx_MV1SetMeshDrawBlendParam
#define MV1SetMeshEmiColorScale dx_MV1SetMeshEmiColorScale
#define MV1SetMeshOpacityRate dx_MV1SetMeshOpacityRate
#define MV1SetMeshSpcColorScale dx_MV1SetMeshSpcColorScale
#define MV1SetMeshUseVertDifColor dx_MV1SetMeshUseVertDifColor
#define MV1SetMeshUseVertSpcColor dx_MV1SetMeshUseVertSpcColor
#define MV1SetMeshVisible dx_MV1SetMeshVisible
#define MV1SetOpacityRate dx_MV1SetOpacityRate
#define MV1SetPhysicsWorldGravity dx_MV1SetPhysicsWorldGravity
#define MV1SetPosition dx_MV1SetPosition
#define MV1SetPositionD dx_MV1SetPositionD
#define MV1SetRotationMatrix dx_MV1SetRotationMatrix
#define MV1SetRotationXYZ dx_MV1SetRotationXYZ
#define MV1SetRotationZYAxis dx_MV1SetRotationZYAxis
#define MV1SetSampleFilterMode dx_MV1SetSampleFilterMode
#define MV1SetScale dx_MV1SetScale
#define MV1SetSemiTransDrawMode dx_MV1SetSemiTransDrawMode
#define MV1SetShapeRate dx_MV1SetShapeRate
#define MV1SetSpcColorScale dx_MV1SetSpcColorScale
#define MV1SetTextureAddressMode dx_MV1SetTextureAddressMode
#define MV1SetTextureAlphaFilePath dx_MV1SetTextureAlphaFilePath
#define MV1SetTextureBumpImageFlag dx_MV1SetTextureBumpImageFlag
#define MV1SetTextureBumpImageNextPixelLength dx_MV1SetTextureBumpImageNextPixelLength
#define MV1SetTextureColorFilePath dx_MV1SetTextureColorFilePath
#define MV1SetTextureGraphHandle dx_MV1SetTextureGraphHandle
#define MV1SetTextureSampleFilterMode dx_MV1SetTextureSampleFilterMode
#define MV1SetUseDrawMulAlphaColor dx_MV1SetUseDrawMulAlphaColor
#define MV1SetUseOrigShader dx_MV1SetUseOrigShader
#define MV1SetUseShapeFlag dx_MV1SetUseShapeFlag
#define MV1SetUseVertDifColor dx_MV1SetUseVertDifColor
#define MV1SetUseVertSpcColor dx_MV1SetUseVertSpcColor
#define MV1SetUseZBuffer dx_MV1SetUseZBuffer
#define MV1SetVisible dx_MV1SetVisible
#define MV1SetWireFrameDrawFlag dx_MV1SetWireFrameDrawFlag
#define MV1SetWriteZBuffer dx_MV1SetWriteZBuffer
#define MV1SetZBias dx_MV1SetZBias
#define MV1SetZBufferCmpType dx_MV1SetZBufferCmpType
#define MV1SetupCollInfo dx_MV1SetupCollInfo
#define MV1SetupReferenceMesh dx_MV1SetupReferenceMesh
#define MV1TerminateCollInfo dx_MV1TerminateCollInfo
#define MV1TerminateReferenceMesh dx_MV1TerminateReferenceMesh
#define MakeARGB4ColorSoftImage dx_MakeARGB4ColorSoftImage
#define MakeARGB8ColorSoftImage dx_MakeARGB8ColorSoftImage
#define MakeARGBF16ColorSoftImage dx_MakeARGBF16ColorSoftImage
#define MakeARGBF32ColorSoftImage dx_MakeARGBF32ColorSoftImage
#define MakeGraph dx_MakeGraph
#define MakeKeyInput dx_MakeKeyInput
#define MakeMask dx_MakeMask
#define MakePAL8ColorSoftImage dx_MakePAL8ColorSoftImage
#define MakeRGB8ColorSoftImage dx_MakeRGB8ColorSoftImage
#define MakeScreen dx_MakeScreen
#define MakeShadowMap dx_MakeShadowMap
#define MakeSoftImage dx_MakeSoftImage
#define MakeSoftSound dx_MakeSoftSound
#define MakeSoftSound1Ch16Bit22KHz dx_MakeSoftSound1Ch16Bit22KHz
#define MakeSoftSound1Ch16Bit44KHz dx_MakeSoftSound1Ch16Bit44KHz
#define MakeSoftSound1Ch8Bit22KHz dx_MakeSoftSound1Ch8Bit22KHz
#define MakeSoftSound1Ch8Bit44KHz dx_MakeSoftSound1Ch8Bit44KHz
#define MakeSoftSound2Ch16Bit22KHz dx_MakeSoftSound2Ch16Bit22KHz
#define MakeSoftSound2Ch16Bit44KHz dx_MakeSoftSound2Ch16Bit44KHz
#define MakeSoftSound2Ch8Bit22KHz dx_MakeSoftSound2Ch8Bit22KHz
#define MakeSoftSound2Ch8Bit44KHz dx_MakeSoftSound2Ch8Bit44KHz
#define MakeSoftSoundCustom dx_MakeSoftSoundCustom
#define MakeSoftSoundPlayer dx_MakeSoftSoundPlayer
#define MakeSoftSoundPlayer1Ch16Bit22KHz dx_MakeSoftSoundPlayer1Ch16Bit22KHz
#define MakeSoftSoundPlayer1Ch16Bit44KHz dx_MakeSoftSoundPlayer1Ch16Bit44KHz
#define MakeSoftSoundPlayer1Ch8Bit22KHz dx_MakeSoftSoundPlayer1Ch8Bit22KHz
#define MakeSoftSoundPlayer1Ch8Bit44KHz dx_MakeSoftSoundPlayer1Ch8Bit44KHz
#define MakeSoftSoundPlayer2Ch16Bit22KHz dx_MakeSoftSoundPlayer2Ch16Bit22KHz
#define MakeSoftSoundPlayer2Ch16Bit44KHz dx_MakeSoftSoundPlayer2Ch16Bit44KHz
#define MakeSoftSoundPlayer2Ch8Bit22KHz dx_MakeSoftSoundPlayer2Ch8Bit22KHz
#define MakeSoftSoundPlayer2Ch8Bit44KHz dx_MakeSoftSoundPlayer2Ch8Bit44KHz
#define MakeSoftSoundPlayerCustom dx_MakeSoftSoundPlayerCustom
#define MakeUDPSocket dx_MakeUDPSocket
#define MakeUDPSocket_IPv6 dx_MakeUDPSocket_IPv6
#define MakeXRGB8ColorSoftImage dx_MakeXRGB8ColorSoftImage
#define MultiByteCharCheck dx_MultiByteCharCheck
#define NetWorkRecv dx_NetWorkRecv
#define NetWorkRecvBufferClear dx_NetWorkRecvBufferClear
#define NetWorkRecvToPeek dx_NetWorkRecvToPeek
#define NetWorkRecvUDP dx_NetWorkRecvUDP
#define NetWorkRecvUDP_IPv6 dx_NetWorkRecvUDP_IPv6
#define NetWorkSend dx_NetWorkSend
#define NetWorkSendUDP dx_NetWorkSendUDP
#define NetWorkSendUDP_IPv6 dx_NetWorkSendUDP_IPv6
#define OpenMovieToGraph dx_OpenMovieToGraph
#define PauseMovieToGraph dx_PauseMovieToGraph
#define Plane_Point_Analyse dx_Plane_Point_Analyse
#define Plane_Point_AnalyseD dx_Plane_Point_AnalyseD
#define Plane_Point_MinLength dx_Plane_Point_MinLength
#define Plane_Point_MinLengthD dx_Plane_Point_MinLengthD
#define Plane_Point_MinLength_Position dx_Plane_Point_MinLength_Position
#define Plane_Point_MinLength_PositionD dx_Plane_Point_MinLength_PositionD
#define PlayMovie dx_PlayMovie
#define PlayMovieToGraph dx_PlayMovieToGraph
#define PlayMusic dx_PlayMusic
#define PlayMusicByMemImage dx_PlayMusicByMemImage
#define PlayMusicByResource dx_PlayMusicByResource
#define PlayMusicMem dx_PlayMusicMem
#define PlaySound dx_PlaySound
#define PlaySoundFile dx_PlaySoundFile
#define PlaySoundMem dx_PlaySoundMem
#define PlayStreamSoundMem dx_PlayStreamSoundMem
#define PreparationListenNetWork dx_PreparationListenNetWork
#define PreparationListenNetWork_IPv6 dx_PreparationListenNetWork_IPv6
#define ProcessActKeyInput dx_ProcessActKeyInput
#define ProcessMessage dx_ProcessMessage
#define ProcessMusicMem dx_ProcessMusicMem
#define ProcessNetMessage dx_ProcessNetMessage
#define ProcessStreamSoundMem dx_ProcessStreamSoundMem
#define ProcessStreamSoundMemAll dx_ProcessStreamSoundMemAll
#define ReCreateDivGraphFromBmp dx_ReCreateDivGraphFromBmp
extern int dxexc_ReCreateDivGraphFromGraphImage(BASEIMAGE*  RgbBaseImage, int AllNum, int XNum, int YNum, int SizeX, int SizeY, const int*  HandleBuf, int TextureFlag, int ReverseFlag); // overload
extern int dxexc_ReCreateDivGraphFromGraphImage(BASEIMAGE*  RgbBaseImage, const BASEIMAGE*  AlphaBaseImage, int AllNum, int XNum, int YNum, int SizeX, int SizeY, const int*  HandleBuf, int TextureFlag, int ReverseFlag); // overload
#define ReCreateDivGraphFromGraphImage dxexc_ReCreateDivGraphFromGraphImage
#define ReCreateDivGraphFromMem dx_ReCreateDivGraphFromMem
#define ReCreateGraph dx_ReCreateGraph
#define ReCreateGraphFromBaseImage dx_ReCreateGraphFromBaseImage
#define ReCreateGraphFromBmp dx_ReCreateGraphFromBmp
extern int dxexc_ReCreateGraphFromGraphImage(const BASEIMAGE*  RgbBaseImage, int GrHandle, int TextureFlag, int ReverseFlag); // overload
extern int dxexc_ReCreateGraphFromGraphImage(const BASEIMAGE*  RgbBaseImage, const BASEIMAGE*  AlphaBaseImage, int GrHandle, int TextureFlag, int ReverseFlag); // overload
#define ReCreateGraphFromGraphImage dxexc_ReCreateGraphFromGraphImage
#define ReCreateGraphFromMem dx_ReCreateGraphFromMem
#define ReCreateGraphFromRectBaseImage dx_ReCreateGraphFromRectBaseImage
#define ReCreateGraphFromRectSoftImage dx_ReCreateGraphFromRectSoftImage
#define ReCreateGraphFromSoftImage dx_ReCreateGraphFromSoftImage
#define ReSetupJoypad dx_ReSetupJoypad
#define ReStartKeyInput dx_ReStartKeyInput
#define ReadSoftSoundData dx_ReadSoftSoundData
#define ReadSoftSoundDataF dx_ReadSoftSoundDataF
#define RectAdjust dx_RectAdjust
#define RectClipping dx_RectClipping
#define RefreshDxLibDirect3DSetting dx_RefreshDxLibDirect3DSetting
#define ReleaseBaseImage dx_ReleaseBaseImage
#define ReleaseGraphImage dx_ReleaseGraphImage
#define ReloadDivGraph dx_ReloadDivGraph
#define ReloadFileGraphAll dx_ReloadFileGraphAll
#define ReloadGraph dx_ReloadGraph
#define ReloadReverseDivGraph dx_ReloadReverseDivGraph
#define ReloadReverseGraph dx_ReloadReverseGraph
#define RemoveFontFile dx_RemoveFontFile
#define RenderVertex dx_RenderVertex
#define ResetFrequencySoundMem dx_ResetFrequencySoundMem
#define ResetGraphPalette dx_ResetGraphPalette
#define ResetKeyInputStringColor2 dx_ResetKeyInputStringColor2
#define ResetPSConstB dx_ResetPSConstB
#define ResetPSConstF dx_ResetPSConstF
#define ResetPSConstI dx_ResetPSConstI
#define ResetShadowMapDrawArea dx_ResetShadowMapDrawArea
#define ResetSoftSoundPlayer dx_ResetSoftSoundPlayer
#define ResetTextureAddressTransform dx_ResetTextureAddressTransform
#define ResetVSConstB dx_ResetVSConstB
#define ResetVSConstF dx_ResetVSConstF
#define ResetVSConstI dx_ResetVSConstI
#define RestoreGraphSystem dx_RestoreGraphSystem
#define ReverseBaseImage dx_ReverseBaseImage
#define ReverseBaseImageH dx_ReverseBaseImageH
#define ReverseBaseImageV dx_ReverseBaseImageV
#define ReverseGraphImage dx_ReverseGraphImage
#define ReverseSoftImage dx_ReverseSoftImage
#define ReverseSoftImageH dx_ReverseSoftImageH
#define ReverseSoftImageV dx_ReverseSoftImageV
#define RunRestoreShred dx_RunRestoreShred
#define SRand dx_SRand
#define SaveBaseImageToBmp dx_SaveBaseImageToBmp
#define SaveBaseImageToDds dx_SaveBaseImageToDds
#define SaveBaseImageToJpeg dx_SaveBaseImageToJpeg
#define SaveBaseImageToPng dx_SaveBaseImageToPng
#define SaveDrawScreen dx_SaveDrawScreen
#define SaveDrawScreenToBMP dx_SaveDrawScreenToBMP
#define SaveDrawScreenToDDS dx_SaveDrawScreenToDDS
#define SaveDrawScreenToJPEG dx_SaveDrawScreenToJPEG
#define SaveDrawScreenToPNG dx_SaveDrawScreenToPNG
#define SaveSoftImageToBmp dx_SaveSoftImageToBmp
#define SaveSoftImageToDds dx_SaveSoftImageToDds
#define SaveSoftImageToJpeg dx_SaveSoftImageToJpeg
#define SaveSoftImageToPng dx_SaveSoftImageToPng
#define SaveSoftSound dx_SaveSoftSound
#define ScreenCopy dx_ScreenCopy
#define ScreenFlip dx_ScreenFlip
#define SeekMovieToGraph dx_SeekMovieToGraph
#define SeekMovieToGraphToFrame dx_SeekMovieToGraphToFrame
#define Segment_Point_Analyse dx_Segment_Point_Analyse
#define Segment_Point_AnalyseD dx_Segment_Point_AnalyseD
#define Segment_Point_MinLength dx_Segment_Point_MinLength
#define Segment_Point_MinLengthD dx_Segment_Point_MinLengthD
#define Segment_Point_MinLength_Square dx_Segment_Point_MinLength_Square
#define Segment_Point_MinLength_SquareD dx_Segment_Point_MinLength_SquareD
#define Segment_Segment_Analyse dx_Segment_Segment_Analyse
#define Segment_Segment_AnalyseD dx_Segment_Segment_AnalyseD
#define Segment_Segment_MinLength dx_Segment_Segment_MinLength
#define Segment_Segment_MinLengthD dx_Segment_Segment_MinLengthD
#define Segment_Segment_MinLength_Square dx_Segment_Segment_MinLength_Square
#define Segment_Segment_MinLength_SquareD dx_Segment_Segment_MinLength_SquareD
#define Segment_Triangle_Analyse dx_Segment_Triangle_Analyse
#define Segment_Triangle_AnalyseD dx_Segment_Triangle_AnalyseD
#define Segment_Triangle_MinLength dx_Segment_Triangle_MinLength
#define Segment_Triangle_MinLengthD dx_Segment_Triangle_MinLengthD
#define Segment_Triangle_MinLength_Square dx_Segment_Triangle_MinLength_Square
#define Segment_Triangle_MinLength_SquareD dx_Segment_Triangle_MinLength_SquareD
#define SelectMidiMode dx_SelectMidiMode
#define Set3DPositionSoundMem dx_Set3DPositionSoundMem
#define Set3DPresetReverbParamSoundMem dx_Set3DPresetReverbParamSoundMem
#define Set3DPresetReverbParamSoundMemAll dx_Set3DPresetReverbParamSoundMemAll
#define Set3DRadiusSoundMem dx_Set3DRadiusSoundMem
#define Set3DReverbParamSoundMem dx_Set3DReverbParamSoundMem
#define Set3DReverbParamSoundMemAll dx_Set3DReverbParamSoundMemAll
#define Set3DSoundListenerConeAngle dx_Set3DSoundListenerConeAngle
#define Set3DSoundListenerConeVolume dx_Set3DSoundListenerConeVolume
#define Set3DSoundListenerPosAndFrontPosAndUpVec dx_Set3DSoundListenerPosAndFrontPosAndUpVec
#define Set3DSoundListenerPosAndFrontPos_UpVecY dx_Set3DSoundListenerPosAndFrontPos_UpVecY
#define Set3DSoundListenerVelocity dx_Set3DSoundListenerVelocity
#define Set3DSoundOneMetre dx_Set3DSoundOneMetre
#define Set3DVelocitySoundMem dx_Set3DVelocitySoundMem
#define SetASyncLoadFinishDeleteFlag dx_SetASyncLoadFinishDeleteFlag
#define SetASyncLoadThreadNum dx_SetASyncLoadThreadNum
#define SetActiveKeyInput dx_SetActiveKeyInput
#define SetActiveStateChangeCallBackFunction dx_SetActiveStateChangeCallBackFunction
#define SetAeroDisableFlag dx_SetAeroDisableFlag
#define SetAlwaysRunFlag dx_SetAlwaysRunFlag
#define SetApplicationLogSaveDirectory dx_SetApplicationLogSaveDirectory
#define SetAutoMenuDisplayFlag dx_SetAutoMenuDisplayFlag
#define SetBackgroundColor dx_SetBackgroundColor
#define SetBasicBlendFlag dx_SetBasicBlendFlag
#define SetBlendGraph dx_SetBlendGraph
#define SetBlendGraphPosition dx_SetBlendGraphPosition
#define SetCameraDotAspect dx_SetCameraDotAspect
#define SetCameraDotAspectD dx_SetCameraDotAspectD
#define SetCameraNearFar dx_SetCameraNearFar
#define SetCameraNearFarD dx_SetCameraNearFarD
#define SetCameraPositionAndAngle dx_SetCameraPositionAndAngle
#define SetCameraPositionAndAngleD dx_SetCameraPositionAndAngleD
#define SetCameraPositionAndTargetAndUpVec dx_SetCameraPositionAndTargetAndUpVec
#define SetCameraPositionAndTargetAndUpVecD dx_SetCameraPositionAndTargetAndUpVecD
#define SetCameraPositionAndTarget_UpVecY dx_SetCameraPositionAndTarget_UpVecY
#define SetCameraPositionAndTarget_UpVecYD dx_SetCameraPositionAndTarget_UpVecYD
#define SetCameraScreenCenter dx_SetCameraScreenCenter
#define SetCameraScreenCenterD dx_SetCameraScreenCenterD
#define SetCameraViewMatrix dx_SetCameraViewMatrix
#define SetCameraViewMatrixD dx_SetCameraViewMatrixD
#define SetChangeScreenModeGraphicsSystemResetFlag dx_SetChangeScreenModeGraphicsSystemResetFlag
#define SetChannelVolumeSoundMem dx_SetChannelVolumeSoundMem
#define SetClipboardText dx_SetClipboardText
#define SetColorDataNoneMask dx_SetColorDataNoneMask
#define SetConnectTimeOutWait dx_SetConnectTimeOutWait
#define SetCreate3DSoundFlag dx_SetCreate3DSoundFlag
#define SetCreateDrawValidGraphChannelNum dx_SetCreateDrawValidGraphChannelNum
#define SetCreateDrawValidGraphMultiSample dx_SetCreateDrawValidGraphMultiSample
#define SetCreateDrawValidGraphZBufferBitDepth dx_SetCreateDrawValidGraphZBufferBitDepth
#define SetCreateGraphChannelBitDepth dx_SetCreateGraphChannelBitDepth
#define SetCreateGraphColorBitDepth dx_SetCreateGraphColorBitDepth
#define SetCreateSoundDataType dx_SetCreateSoundDataType
#define SetCreateSoundPitchRate dx_SetCreateSoundPitchRate
#define SetCreateSoundTimeStretchRate dx_SetCreateSoundTimeStretchRate
#define SetCubeMapTextureCreateFlag dx_SetCubeMapTextureCreateFlag
#define SetCurrentPositionSoundMem dx_SetCurrentPositionSoundMem
#define SetDDrawUseGuid dx_SetDDrawUseGuid
#define SetDXArchiveExtension dx_SetDXArchiveExtension
#define SetDXArchiveKeyString dx_SetDXArchiveKeyString
#define SetDXArchivePriority dx_SetDXArchivePriority
#define SetDataToMask dx_SetDataToMask
#define SetDefTransformMatrix dx_SetDefTransformMatrix
#define SetDefaultFontState dx_SetDefaultFontState
#define SetDeleteHandleFlag dx_SetDeleteHandleFlag
#define SetDeviceLostDeleteGraphFlag dx_SetDeviceLostDeleteGraphFlag
#define SetDialogBoxHandle dx_SetDialogBoxHandle
#define SetDisableReadSoundFunctionMask dx_SetDisableReadSoundFunctionMask
#define SetDisplayMenuFlag dx_SetDisplayMenuFlag
#define SetDoubleStartValidFlag dx_SetDoubleStartValidFlag
#define SetDragFileValidFlag dx_SetDragFileValidFlag
#define SetDraw3DScale dx_SetDraw3DScale
#define SetDrawAlphaTest dx_SetDrawAlphaTest
#define SetDrawArea dx_SetDrawArea
#define SetDrawAreaFull dx_SetDrawAreaFull
#define SetDrawBlendMode dx_SetDrawBlendMode
#define SetDrawBright dx_SetDrawBright
#define SetDrawMode dx_SetDrawMode
#define SetDrawScreen dx_SetDrawScreen
#define SetDrawValidAlphaChannelGraphCreateFlag dx_SetDrawValidAlphaChannelGraphCreateFlag
#define SetDrawValidFlagOf3DGraph dx_SetDrawValidFlagOf3DGraph
#define SetDrawValidFloatTypeGraphCreateFlag dx_SetDrawValidFloatTypeGraphCreateFlag
#define SetDrawValidGraphCreateFlag dx_SetDrawValidGraphCreateFlag
#define SetDrawValidGraphCreateZBufferFlag dx_SetDrawValidGraphCreateZBufferFlag
#define SetDrawValidMultiSample dx_SetDrawValidMultiSample
#define SetDrawZ dx_SetDrawZ
#define SetDrawZBuffer dx_SetDrawZBuffer
#define SetDxLibEndPostQuitMessageFlag dx_SetDxLibEndPostQuitMessageFlag
#define SetEmulation320x240 dx_SetEmulation320x240
#define SetEnableSoundCaptureFlag dx_SetEnableSoundCaptureFlag
#define SetEnableXAudioFlag dx_SetEnableXAudioFlag
#define SetFogColor dx_SetFogColor
#define SetFogDensity dx_SetFogDensity
#define SetFogEnable dx_SetFogEnable
#define SetFogMode dx_SetFogMode
#define SetFogStartEnd dx_SetFogStartEnd
#define SetFontCacheCharNum dx_SetFontCacheCharNum
#define SetFontCacheTextureColorBitDepth dx_SetFontCacheTextureColorBitDepth
#define SetFontCacheToTextureFlag dx_SetFontCacheToTextureFlag
#define SetFontCacheUsePremulAlphaFlag dx_SetFontCacheUsePremulAlphaFlag
#define SetFontChacheToTextureFlag dx_SetFontChacheToTextureFlag
#define SetFontCharCodeFormat dx_SetFontCharCodeFormat
#define SetFontCharCodeFormatToHandle dx_SetFontCharCodeFormatToHandle
#define SetFontLineSpace dx_SetFontLineSpace
#define SetFontLineSpaceToHandle dx_SetFontLineSpaceToHandle
#define SetFontLostFlag dx_SetFontLostFlag
#define SetFontSize dx_SetFontSize
#define SetFontSpace dx_SetFontSpace
#define SetFontSpaceToHandle dx_SetFontSpaceToHandle
#define SetFontThickness dx_SetFontThickness
#define SetFrequencySoundMem dx_SetFrequencySoundMem
#define SetFullSceneAntiAliasingMode dx_SetFullSceneAntiAliasingMode
#define SetFullScreenResolutionMode dx_SetFullScreenResolutionMode
#define SetFullScreenScalingMode dx_SetFullScreenScalingMode
#define SetGlobalAmbientLight dx_SetGlobalAmbientLight
#define SetGraphColorBitDepth dx_SetGraphColorBitDepth
#define SetGraphDataShavedMode dx_SetGraphDataShavedMode
#define SetGraphDisplayArea dx_SetGraphDisplayArea
#define SetGraphLostFlag dx_SetGraphLostFlag
#define SetGraphMode dx_SetGraphMode
#define SetGraphPalette dx_SetGraphPalette
#define SetGraphicsDeviceLostCallbackFunction dx_SetGraphicsDeviceLostCallbackFunction
#define SetGraphicsDeviceRestoreCallbackFunction dx_SetGraphicsDeviceRestoreCallbackFunction
#define SetHookWinProc dx_SetHookWinProc
#define SetIMEInputStringMaxLength dx_SetIMEInputStringMaxLength
#define SetIgnoreDrawGraphColor dx_SetIgnoreDrawGraphColor
#define SetIndexBufferData dx_SetIndexBufferData
#define SetInputStringMaxLengthIMESync dx_SetInputStringMaxLengthIMESync
#define SetJoypadDeadZone dx_SetJoypadDeadZone
#define SetJoypadInputToKeyInput dx_SetJoypadInputToKeyInput
#define SetKeyExclusiveCooperativeLevelFlag dx_SetKeyExclusiveCooperativeLevelFlag
#define SetKeyInputCursorBrinkFlag dx_SetKeyInputCursorBrinkFlag
#define SetKeyInputCursorBrinkTime dx_SetKeyInputCursorBrinkTime
#define SetKeyInputCursorPosition dx_SetKeyInputCursorPosition
#define SetKeyInputDrawArea dx_SetKeyInputDrawArea
#define SetKeyInputDrawStartPos dx_SetKeyInputDrawStartPos
#define SetKeyInputNumber dx_SetKeyInputNumber
#define SetKeyInputNumberToFloat dx_SetKeyInputNumberToFloat
#define SetKeyInputSelectArea dx_SetKeyInputSelectArea
#define SetKeyInputString dx_SetKeyInputString
#define SetKeyInputStringColor2 dx_SetKeyInputStringColor2
#define SetKeyInputStringEndCharaMode dx_SetKeyInputStringEndCharaMode
#define SetKeyInputStringFont dx_SetKeyInputStringFont
#define SetKeyboardNotDirectInputFlag dx_SetKeyboardNotDirectInputFlag
#define SetLeftUpColorIsTransColorFlag dx_SetLeftUpColorIsTransColorFlag
#define SetLightAmbColor dx_SetLightAmbColor
#define SetLightAmbColorHandle dx_SetLightAmbColorHandle
#define SetLightAngle dx_SetLightAngle
#define SetLightAngleHandle dx_SetLightAngleHandle
#define SetLightDifColor dx_SetLightDifColor
#define SetLightDifColorHandle dx_SetLightDifColorHandle
#define SetLightDirection dx_SetLightDirection
#define SetLightDirectionHandle dx_SetLightDirectionHandle
#define SetLightEnable dx_SetLightEnable
#define SetLightEnableHandle dx_SetLightEnableHandle
#define SetLightPosition dx_SetLightPosition
#define SetLightPositionHandle dx_SetLightPositionHandle
#define SetLightRangeAtten dx_SetLightRangeAtten
#define SetLightRangeAttenHandle dx_SetLightRangeAttenHandle
#define SetLightSpcColor dx_SetLightSpcColor
#define SetLightSpcColorHandle dx_SetLightSpcColorHandle
#define SetLightTypeHandle dx_SetLightTypeHandle
#define SetLightUseShadowMap dx_SetLightUseShadowMap
#define SetLightUseShadowMapHandle dx_SetLightUseShadowMapHandle
#define SetLogDrawArea dx_SetLogDrawArea
#define SetLogDrawOutFlag dx_SetLogDrawOutFlag
#define SetLogFontSize dx_SetLogFontSize
#define SetLoopPosSoundMem dx_SetLoopPosSoundMem
#define SetLoopSamplePosSoundMem dx_SetLoopSamplePosSoundMem
#define SetLoopStartSamplePosSoundMem dx_SetLoopStartSamplePosSoundMem
#define SetLoopStartTimePosSoundMem dx_SetLoopStartTimePosSoundMem
#define SetLoopTimePosSoundMem dx_SetLoopTimePosSoundMem
#define SetMainWindowClassName dx_SetMainWindowClassName
#define SetMainWindowText dx_SetMainWindowText
#define SetMaskReverseEffectFlag dx_SetMaskReverseEffectFlag
#define SetMaskScreenGraph dx_SetMaskScreenGraph
#define SetMaskScreenGraphUseChannel dx_SetMaskScreenGraphUseChannel
#define SetMaterialParam dx_SetMaterialParam
#define SetMaterialUseVertDifColor dx_SetMaterialUseVertDifColor
#define SetMaterialUseVertSpcColor dx_SetMaterialUseVertSpcColor
#define SetMaxAnisotropy dx_SetMaxAnisotropy
#define SetMenuItemEnable dx_SetMenuItemEnable
#define SetMenuItemEnable_ID dx_SetMenuItemEnable_ID
#define SetMenuItemEnable_Name dx_SetMenuItemEnable_Name
#define SetMenuItemMark dx_SetMenuItemMark
#define SetMenuItemMark_ID dx_SetMenuItemMark_ID
#define SetMenuItemMark_Name dx_SetMenuItemMark_Name
#define SetMenuItemSelectCallBackFunction dx_SetMenuItemSelectCallBackFunction
#define SetMouseDispFlag dx_SetMouseDispFlag
#define SetMousePoint dx_SetMousePoint
#define SetMovieColorA8R8G8B8Flag dx_SetMovieColorA8R8G8B8Flag
#define SetMovieRightImageAlphaFlag dx_SetMovieRightImageAlphaFlag
#define SetMovieUseYUVFormatSurfaceFlag dx_SetMovieUseYUVFormatSurfaceFlag
#define SetMovieVolumeToGraph dx_SetMovieVolumeToGraph
#define SetMultiThreadFlag dx_SetMultiThreadFlag
#define SetNetWorkCloseAfterLostFlag dx_SetNetWorkCloseAfterLostFlag
#define SetNextPlay3DPositionSoundMem dx_SetNextPlay3DPositionSoundMem
#define SetNextPlay3DRadiusSoundMem dx_SetNextPlay3DRadiusSoundMem
#define SetNextPlay3DVelocitySoundMem dx_SetNextPlay3DVelocitySoundMem
#define SetNextPlayChannelVolumeSoundMem dx_SetNextPlayChannelVolumeSoundMem
#define SetNextPlayFrequencySoundMem dx_SetNextPlayFrequencySoundMem
#define SetNextPlayPanSoundMem dx_SetNextPlayPanSoundMem
#define SetNextPlayVolumeSoundMem dx_SetNextPlayVolumeSoundMem
#define SetNotDrawFlag dx_SetNotDrawFlag
#define SetNotInputFlag dx_SetNotInputFlag
#define SetNotSoundFlag dx_SetNotSoundFlag
#define SetNotUse3DFlag dx_SetNotUse3DFlag
#define SetNotWinFlag dx_SetNotWinFlag
#define SetOutApplicationLogValidFlag dx_SetOutApplicationLogValidFlag
#define SetPSConstB dx_SetPSConstB
#define SetPSConstBArray dx_SetPSConstBArray
#define SetPSConstF dx_SetPSConstF
#define SetPSConstFArray dx_SetPSConstFArray
#define SetPSConstFMtx dx_SetPSConstFMtx
#define SetPSConstFMtxArray dx_SetPSConstFMtxArray
#define SetPSConstFMtxT dx_SetPSConstFMtxT
#define SetPSConstFMtxTArray dx_SetPSConstFMtxTArray
#define SetPSConstI dx_SetPSConstI
#define SetPSConstIArray dx_SetPSConstIArray
#define SetPSConstSF dx_SetPSConstSF
#define SetPSConstSFArray dx_SetPSConstSFArray
#define SetPSConstSI dx_SetPSConstSI
#define SetPSConstSIArray dx_SetPSConstSIArray
#define SetPaletteBaseImage dx_SetPaletteBaseImage
#define SetPaletteSoftImage dx_SetPaletteSoftImage
#define SetPanSoundMem dx_SetPanSoundMem
#define SetPixelBaseImage dx_SetPixelBaseImage
#define SetPixelBaseImageF dx_SetPixelBaseImageF
#define SetPixelPalCodeBaseImage dx_SetPixelPalCodeBaseImage
#define SetPlayFinishDeleteSoundMem dx_SetPlayFinishDeleteSoundMem
#define SetPlaySpeedRateMovieToGraph dx_SetPlaySpeedRateMovieToGraph
#define SetRenderTargetToShader dx_SetRenderTargetToShader
#define SetResourceModule dx_SetResourceModule
#define SetRestoreGraphCallback dx_SetRestoreGraphCallback
#define SetRestoreShredPoint dx_SetRestoreShredPoint
#define SetScreenFlipTargetWindow dx_SetScreenFlipTargetWindow
#define SetScreenMemToVramFlag dx_SetScreenMemToVramFlag
#define SetShaderConstantBuffer dx_SetShaderConstantBuffer
#define SetShadowMapAdjustDepth dx_SetShadowMapAdjustDepth
#define SetShadowMapDrawArea dx_SetShadowMapDrawArea
#define SetShadowMapLightDirection dx_SetShadowMapLightDirection
#define SetSoundCurrentPosition dx_SetSoundCurrentPosition
#define SetSoundCurrentTime dx_SetSoundCurrentTime
#define SetStreamSoundCurrentPosition dx_SetStreamSoundCurrentPosition
#define SetStreamSoundCurrentTime dx_SetStreamSoundCurrentTime
#define SetSysCommandOffFlag dx_SetSysCommandOffFlag
#define SetTextureAddressMode dx_SetTextureAddressMode
#define SetTextureAddressModeUV dx_SetTextureAddressModeUV
#define SetTextureAddressTransform dx_SetTextureAddressTransform
#define SetTextureAddressTransformMatrix dx_SetTextureAddressTransformMatrix
#define SetToolBarButtonState dx_SetToolBarButtonState
#define SetTransColor dx_SetTransColor
#define SetTransformToProjection dx_SetTransformToProjection
#define SetTransformToProjectionD dx_SetTransformToProjectionD
#define SetTransformToView dx_SetTransformToView
#define SetTransformToViewD dx_SetTransformToViewD
#define SetTransformToViewport dx_SetTransformToViewport
#define SetTransformToViewportD dx_SetTransformToViewportD
#define SetTransformToWorld dx_SetTransformToWorld
#define SetTransformToWorldD dx_SetTransformToWorldD
#define SetUse3DFlag dx_SetUse3DFlag
#define SetUseASyncChangeWindowModeFunction dx_SetUseASyncChangeWindowModeFunction
#define SetUseASyncLoadFlag dx_SetUseASyncLoadFlag
#define SetUseAlphaChannelGraphCreateFlag dx_SetUseAlphaChannelGraphCreateFlag
#define SetUseAlphaImageLoadFlag dx_SetUseAlphaImageLoadFlag
#define SetUseAlphaTestFlag dx_SetUseAlphaTestFlag
#define SetUseAlphaTestGraphCreateFlag dx_SetUseAlphaTestGraphCreateFlag
#define SetUseBackBufferTransColorFlag dx_SetUseBackBufferTransColorFlag
#define SetUseBackCulling dx_SetUseBackCulling
#define SetUseBasicGraphDraw3DDeviceMethodFlag dx_SetUseBasicGraphDraw3DDeviceMethodFlag
#define SetUseBlendGraphCreateFlag dx_SetUseBlendGraphCreateFlag
#define SetUseCharCodeFormat dx_SetUseCharCodeFormat
#define SetUseCharSet dx_SetUseCharSet
#define SetUseCullingFlag dx_SetUseCullingFlag
#define SetUseDXArchiveFlag dx_SetUseDXArchiveFlag
#define SetUseDXNetWorkProtocol dx_SetUseDXNetWorkProtocol
#define SetUseDXProtocol dx_SetUseDXProtocol
#define SetUseDateNameLogFile dx_SetUseDateNameLogFile
#define SetUseDirect3D11 dx_SetUseDirect3D11
#define SetUseDirect3D11MinFeatureLevel dx_SetUseDirect3D11MinFeatureLevel
#define SetUseDirect3D9Ex dx_SetUseDirect3D9Ex
#define SetUseDirect3DVersion dx_SetUseDirect3DVersion
#define SetUseDirectDrawDeviceIndex dx_SetUseDirectDrawDeviceIndex
#define SetUseDirectDrawFlag dx_SetUseDirectDrawFlag
#define SetUseDirectInputFlag dx_SetUseDirectInputFlag
#define SetUseDisplayIndex dx_SetUseDisplayIndex
#define SetUseDivGraphFlag dx_SetUseDivGraphFlag
#define SetUseDxLibWM_PAINTProcess dx_SetUseDxLibWM_PAINTProcess
#define SetUseFPUPreserveFlag dx_SetUseFPUPreserveFlag
#define SetUseFastLoadFlag dx_SetUseFastLoadFlag
#define SetUseGDIFlag dx_SetUseGDIFlag
#define SetUseGraphAlphaChannel dx_SetUseGraphAlphaChannel
#define SetUseGraphBaseDataBackup dx_SetUseGraphBaseDataBackup
#define SetUseGraphZBuffer dx_SetUseGraphZBuffer
#define SetUseHardwareVertexProcessing dx_SetUseHardwareVertexProcessing
#define SetUseHookWinProcReturnValue dx_SetUseHookWinProcReturnValue
#define SetUseIMEFlag dx_SetUseIMEFlag
#define SetUseJoypadVibrationFlag dx_SetUseJoypadVibrationFlag
#define SetUseKeyAccelFlag dx_SetUseKeyAccelFlag
#define SetUseLarge3DPositionSupport dx_SetUseLarge3DPositionSupport
#define SetUseLighting dx_SetUseLighting
#define SetUseMaskScreenFlag dx_SetUseMaskScreenFlag
#define SetUseMaxTextureSize dx_SetUseMaxTextureSize
#define SetUseMenuFlag dx_SetUseMenuFlag
#define SetUseNoBlendModeParam dx_SetUseNoBlendModeParam
#define SetUseNormalDrawShader dx_SetUseNormalDrawShader
#define SetUseNotManageTextureFlag dx_SetUseNotManageTextureFlag
#define SetUseOldDrawModiGraphCodeFlag dx_SetUseOldDrawModiGraphCodeFlag
#define SetUseOldVolumeCalcFlag dx_SetUseOldVolumeCalcFlag
#define SetUsePixelLighting dx_SetUsePixelLighting
#define SetUsePixelShader dx_SetUsePixelShader
#define SetUsePlatformTextureFormat dx_SetUsePlatformTextureFormat
#define SetUsePremulAlphaConvertLoad dx_SetUsePremulAlphaConvertLoad
#define SetUseSetDrawScreenSettingReset dx_SetUseSetDrawScreenSettingReset
#define SetUseShadowMap dx_SetUseShadowMap
#define SetUseSoftwareMixingSoundFlag dx_SetUseSoftwareMixingSoundFlag
#define SetUseSoftwareRenderModeFlag dx_SetUseSoftwareRenderModeFlag
#define SetUseSpecular dx_SetUseSpecular
#define SetUseSystemMemGraphCreateFlag dx_SetUseSystemMemGraphCreateFlag
#define SetUseTextureToShader dx_SetUseTextureToShader
#define SetUseTimeStampFlag dx_SetUseTimeStampFlag
#define SetUseTransColor dx_SetUseTransColor
#define SetUseTransColorGraphCreateFlag dx_SetUseTransColorGraphCreateFlag
#define SetUseUpdateLayerdWindowFlag dx_SetUseUpdateLayerdWindowFlag
#define SetUseVertexShader dx_SetUseVertexShader
#define SetUseVramFlag dx_SetUseVramFlag
#define SetUseXInputFlag dx_SetUseXInputFlag
#define SetUseZBuffer3D dx_SetUseZBuffer3D
#define SetUseZBufferFlag dx_SetUseZBufferFlag
#define SetUserChildWindow dx_SetUserChildWindow
#define SetUserWindow dx_SetUserWindow
#define SetUserWindowMessageProcessDXLibFlag dx_SetUserWindowMessageProcessDXLibFlag
#define SetVSConstB dx_SetVSConstB
#define SetVSConstBArray dx_SetVSConstBArray
#define SetVSConstF dx_SetVSConstF
#define SetVSConstFArray dx_SetVSConstFArray
#define SetVSConstFMtx dx_SetVSConstFMtx
#define SetVSConstFMtxArray dx_SetVSConstFMtxArray
#define SetVSConstFMtxT dx_SetVSConstFMtxT
#define SetVSConstFMtxTArray dx_SetVSConstFMtxTArray
#define SetVSConstI dx_SetVSConstI
#define SetVSConstIArray dx_SetVSConstIArray
#define SetVSConstSF dx_SetVSConstSF
#define SetVSConstSFArray dx_SetVSConstSFArray
#define SetVSConstSI dx_SetVSConstSI
#define SetVSConstSIArray dx_SetVSConstSIArray
#define SetValidMousePointerWindowOutClientAreaMoveFlag dx_SetValidMousePointerWindowOutClientAreaMoveFlag
#define SetVertexBufferData dx_SetVertexBufferData
#define SetVolumeMusic dx_SetVolumeMusic
#define SetVolumeMusicMem dx_SetVolumeMusicMem
#define SetVolumeSound dx_SetVolumeSound
#define SetVolumeSoundFile dx_SetVolumeSoundFile
#define SetVolumeSoundMem dx_SetVolumeSoundMem
#define SetWaitVSyncFlag dx_SetWaitVSyncFlag
#define SetWindowDrawRect dx_SetWindowDrawRect
#define SetWindowIconHandle dx_SetWindowIconHandle
#define SetWindowIconID dx_SetWindowIconID
#define SetWindowInitPosition dx_SetWindowInitPosition
#define SetWindowMaxSize dx_SetWindowMaxSize
#define SetWindowMenu dx_SetWindowMenu
#define SetWindowMinSize dx_SetWindowMinSize
#define SetWindowMinimizeFlag dx_SetWindowMinimizeFlag
#define SetWindowPosition dx_SetWindowPosition
#define SetWindowRgnGraph dx_SetWindowRgnGraph
#define SetWindowSize dx_SetWindowSize
#define SetWindowSizeChangeEnableFlag dx_SetWindowSizeChangeEnableFlag
#define SetWindowSizeExtendRate dx_SetWindowSizeExtendRate
#define SetWindowStyleMode dx_SetWindowStyleMode
#define SetWindowText dx_SetWindowText
#define SetWindowUserCloseEnableFlag dx_SetWindowUserCloseEnableFlag
#define SetWindowVisibleFlag dx_SetWindowVisibleFlag
#define SetWindowZOrder dx_SetWindowZOrder
#define SetWriteZBuffer3D dx_SetWriteZBuffer3D
#define SetWriteZBufferFlag dx_SetWriteZBufferFlag
#define SetZBias dx_SetZBias
#define SetZBias3D dx_SetZBias3D
#define SetZBufferBitDepth dx_SetZBufferBitDepth
#define SetZBufferCmpType dx_SetZBufferCmpType
#define SetZBufferCmpType3D dx_SetZBufferCmpType3D
#define SetZBufferSize dx_SetZBufferSize
#define SetupCamera_Ortho dx_SetupCamera_Ortho
#define SetupCamera_OrthoD dx_SetupCamera_OrthoD
#define SetupCamera_Perspective dx_SetupCamera_Perspective
#define SetupCamera_PerspectiveD dx_SetupCamera_PerspectiveD
#define SetupCamera_ProjectionMatrix dx_SetupCamera_ProjectionMatrix
#define SetupCamera_ProjectionMatrixD dx_SetupCamera_ProjectionMatrixD
#define SetupStreamSoundMem dx_SetupStreamSoundMem
#define SetupToolBar dx_SetupToolBar
#define ShadowMap_DrawEnd dx_ShadowMap_DrawEnd
#define ShadowMap_DrawSetup dx_ShadowMap_DrawSetup
#define StartJoypadVibration dx_StartJoypadVibration
#define StartSoftSoundPlayer dx_StartSoftSoundPlayer
#define StockInputChar dx_StockInputChar
#define StopJoypadVibration dx_StopJoypadVibration
#define StopListenNetWork dx_StopListenNetWork
#define StopMusic dx_StopMusic
#define StopMusicMem dx_StopMusicMem
#define StopSoftSoundPlayer dx_StopSoftSoundPlayer
#define StopSound dx_StopSound
#define StopSoundFile dx_StopSoundFile
#define StopSoundMem dx_StopSoundMem
#define StopStreamSoundMem dx_StopStreamSoundMem
#define SubFontImageToHandle dx_SubFontImageToHandle
#define SubMessageTakeOverWindow dx_SubMessageTakeOverWindow
#define SubUserGraphLoadFunction4 dx_SubUserGraphLoadFunction4
#define TellMovieToGraph dx_TellMovieToGraph
#define TellMovieToGraphToFrame dx_TellMovieToGraphToFrame
#define TestDrawShadowMap dx_TestDrawShadowMap
#define TriangleBarycenter dx_TriangleBarycenter
#define TriangleBarycenterD dx_TriangleBarycenterD
#define Triangle_Point_Analyse dx_Triangle_Point_Analyse
#define Triangle_Point_AnalyseD dx_Triangle_Point_AnalyseD
#define Triangle_Point_MinLength dx_Triangle_Point_MinLength
#define Triangle_Point_MinLengthD dx_Triangle_Point_MinLengthD
#define Triangle_Point_MinLength_Square dx_Triangle_Point_MinLength_Square
#define Triangle_Point_MinLength_SquareD dx_Triangle_Point_MinLength_SquareD
#define Triangle_Triangle_MinLength dx_Triangle_Triangle_MinLength
#define Triangle_Triangle_MinLengthD dx_Triangle_Triangle_MinLengthD
#define Triangle_Triangle_MinLength_Square dx_Triangle_Triangle_MinLength_Square
#define Triangle_Triangle_MinLength_SquareD dx_Triangle_Triangle_MinLength_SquareD
#define UpdateLayerdWindowForBaseImage dx_UpdateLayerdWindowForBaseImage
#define UpdateLayerdWindowForBaseImageRect dx_UpdateLayerdWindowForBaseImageRect
#define UpdateLayerdWindowForPremultipliedAlphaBaseImage dx_UpdateLayerdWindowForPremultipliedAlphaBaseImage
#define UpdateLayerdWindowForPremultipliedAlphaBaseImageRect dx_UpdateLayerdWindowForPremultipliedAlphaBaseImageRect
#define UpdateLayerdWindowForPremultipliedAlphaSoftImage dx_UpdateLayerdWindowForPremultipliedAlphaSoftImage
#define UpdateLayerdWindowForPremultipliedAlphaSoftImageRect dx_UpdateLayerdWindowForPremultipliedAlphaSoftImageRect
#define UpdateLayerdWindowForSoftImage dx_UpdateLayerdWindowForSoftImage
#define UpdateLayerdWindowForSoftImageRect dx_UpdateLayerdWindowForSoftImageRect
#define UpdateShaderConstantBuffer dx_UpdateShaderConstantBuffer
#define UpdateTransColorWindowRgn dx_UpdateTransColorWindowRgn
#define VCos dx_VCos
#define VCosD dx_VCosD
#define VNorm dx_VNorm
#define VNormD dx_VNormD
#define VRad dx_VRad
#define VRadD dx_VRadD
#define VSize dx_VSize
#define VSizeD dx_VSizeD
#define VectorAdd dx_VectorAdd
#define VectorAddD dx_VectorAddD
#define VectorConvertDtoF dx_VectorConvertDtoF
#define VectorConvertFtoD dx_VectorConvertFtoD
#define VectorInnerProduct dx_VectorInnerProduct
#define VectorInnerProductD dx_VectorInnerProductD
#define VectorMultiply dx_VectorMultiply
#define VectorMultiplyD dx_VectorMultiplyD
#define VectorNormalize dx_VectorNormalize
#define VectorNormalizeD dx_VectorNormalizeD
#define VectorOuterProduct dx_VectorOuterProduct
#define VectorOuterProductD dx_VectorOuterProductD
#define VectorRotationX dx_VectorRotationX
#define VectorRotationXD dx_VectorRotationXD
#define VectorRotationY dx_VectorRotationY
#define VectorRotationYD dx_VectorRotationYD
#define VectorRotationZ dx_VectorRotationZ
#define VectorRotationZD dx_VectorRotationZD
#define VectorScale dx_VectorScale
#define VectorScaleD dx_VectorScaleD
#define VectorSub dx_VectorSub
#define VectorSubD dx_VectorSubD
#define VectorTransform dx_VectorTransform
#define VectorTransform4 dx_VectorTransform4
#define VectorTransform4D dx_VectorTransform4D
#define VectorTransformD dx_VectorTransformD
#define VectorTransformSR dx_VectorTransformSR
#define VectorTransformSRD dx_VectorTransformSRD
#define WaitKey dx_WaitKey
#define WaitTimer dx_WaitTimer
#define WaitVSync dx_WaitVSync
#define WritePitchShiftSoftSoundData dx_WritePitchShiftSoftSoundData
#define WriteSoftSoundData dx_WriteSoftSoundData
#define WriteSoftSoundDataF dx_WriteSoftSoundDataF
#define WriteTimeStretchSoftSoundData dx_WriteTimeStretchSoftSoundData
#define _GetSystemInfo dx__GetSystemInfo
#define atofDx dx_atofDx
#define atoiDx dx_atoiDx
#define clsDx dx_clsDx
#define itoaDx dx_itoaDx
#define itoa_sDx dx_itoa_sDx
#define strcatDx dx_strcatDx
#define strcat_sDx dx_strcat_sDx
#define strchr2Dx dx_strchr2Dx
#define strchrDx dx_strchrDx
#define strcmpDx dx_strcmpDx
#define strcpyDx dx_strcpyDx
#define strcpy_sDx dx_strcpy_sDx
#define strgetchr2Dx dx_strgetchr2Dx
#define strgetchrDx dx_strgetchrDx
#define stricmpDx dx_stricmpDx
#define strlen2Dx dx_strlen2Dx
#define strlenDx dx_strlenDx
#define strncmp2Dx dx_strncmp2Dx
#define strncmpDx dx_strncmpDx
#define strncpy2Dx dx_strncpy2Dx
#define strncpy2_sDx dx_strncpy2_sDx
#define strncpyDx dx_strncpyDx
#define strncpy_sDx dx_strncpy_sDx
#define strpcpy2Dx dx_strpcpy2Dx
#define strpcpy2_sDx dx_strpcpy2_sDx
#define strpcpyDx dx_strpcpyDx
#define strpcpy_sDx dx_strpcpy_sDx
#define strpncmp2Dx dx_strpncmp2Dx
#define strpncmpDx dx_strpncmpDx
#define strpncpy2Dx dx_strpncpy2Dx
#define strpncpy2_sDx dx_strpncpy2_sDx
#define strpncpyDx dx_strpncpyDx
#define strpncpy_sDx dx_strpncpy_sDx
#define strpos2Dx dx_strpos2Dx
#define strposDx dx_strposDx
#define strputchr2Dx dx_strputchr2Dx
#define strputchrDx dx_strputchrDx
#define strrchr2Dx dx_strrchr2Dx
#define strrchrDx dx_strrchrDx
#define strrncpy2Dx dx_strrncpy2Dx
#define strrncpy2_sDx dx_strrncpy2_sDx
#define strrncpyDx dx_strrncpyDx
#define strrncpy_sDx dx_strrncpy_sDx
#define strrstr2Dx dx_strrstr2Dx
#define strrstrDx dx_strrstrDx
#define strstr2Dx dx_strstr2Dx
#define strstrDx dx_strstrDx
#define struprDx dx_struprDx
#define vsnprintfDx dx_vsnprintfDx
#define vsprintfDx dx_vsprintfDx
#define vsscanfDx dx_vsscanfDx
extern int dxexc_AppLogAdd(const TCHAR* dxexc_String, ...);
#define AppLogAdd dxexc_AppLogAdd
extern int dxexc_DrawExtendFormatString(int x, int y, double ExRateX, double ExRateY, unsigned int Color, const TCHAR* dxexc_String, ...);
#define DrawExtendFormatString dxexc_DrawExtendFormatString
extern int dxexc_DrawExtendFormatStringF(float x, float y, double ExRateX, double ExRateY, unsigned int Color, const TCHAR* dxexc_String, ...);
#define DrawExtendFormatStringF dxexc_DrawExtendFormatStringF
extern int dxexc_DrawExtendFormatStringFToHandle(float x, float y, double ExRateX, double ExRateY, unsigned int Color, int FontHandle, const TCHAR* dxexc_String, ...);
#define DrawExtendFormatStringFToHandle dxexc_DrawExtendFormatStringFToHandle
extern int dxexc_DrawExtendFormatStringToHandle(int x, int y, double ExRateX, double ExRateY, unsigned int Color, int FontHandle, const TCHAR* dxexc_String, ...);
#define DrawExtendFormatStringToHandle dxexc_DrawExtendFormatStringToHandle
extern int dxexc_DrawExtendFormatStringToHandleToZBuffer(int x, int y, double ExRateX, double ExRateY, int FontHandle, int WriteZMode, const TCHAR* dxexc_String, ...);
#define DrawExtendFormatStringToHandleToZBuffer dxexc_DrawExtendFormatStringToHandleToZBuffer
extern int dxexc_DrawExtendFormatStringToZBuffer(int x, int y, double ExRateX, double ExRateY, int WriteZMode, const TCHAR* dxexc_String, ...);
#define DrawExtendFormatStringToZBuffer dxexc_DrawExtendFormatStringToZBuffer
extern int dxexc_DrawExtendFormatVString(int x, int y, double ExRateX, double ExRateY, unsigned int Color, const TCHAR* dxexc_String, ...);
#define DrawExtendFormatVString dxexc_DrawExtendFormatVString
extern int dxexc_DrawExtendFormatVStringF(float x, float y, double ExRateX, double ExRateY, unsigned int Color, const TCHAR* dxexc_String, ...);
#define DrawExtendFormatVStringF dxexc_DrawExtendFormatVStringF
extern int dxexc_DrawExtendFormatVStringFToHandle(float x, float y, double ExRateX, double ExRateY, unsigned int Color, int FontHandle, const TCHAR* dxexc_String, ...);
#define DrawExtendFormatVStringFToHandle dxexc_DrawExtendFormatVStringFToHandle
extern int dxexc_DrawExtendFormatVStringToHandle(int x, int y, double ExRateX, double ExRateY, unsigned int Color, int FontHandle, const TCHAR* dxexc_String, ...);
#define DrawExtendFormatVStringToHandle dxexc_DrawExtendFormatVStringToHandle
extern int dxexc_DrawExtendFormatVStringToHandleToZBuffer(int x, int y, double ExRateX, double ExRateY, int FontHandle, int WriteZMode, const TCHAR* dxexc_String, ...);
#define DrawExtendFormatVStringToHandleToZBuffer dxexc_DrawExtendFormatVStringToHandleToZBuffer
extern int dxexc_DrawExtendFormatVStringToZBuffer(int x, int y, double ExRateX, double ExRateY, int WriteZMode, const TCHAR* dxexc_String, ...);
#define DrawExtendFormatVStringToZBuffer dxexc_DrawExtendFormatVStringToZBuffer
extern int dxexc_DrawFormatString(int x, int y, unsigned int Color, const TCHAR* dxexc_String, ...);
#define DrawFormatString dxexc_DrawFormatString
extern int dxexc_DrawFormatStringF(float x, float y, unsigned int Color, const TCHAR* dxexc_String, ...);
#define DrawFormatStringF dxexc_DrawFormatStringF
extern int dxexc_DrawFormatStringFToHandle(float x, float y, unsigned int Color, int FontHandle, const TCHAR* dxexc_String, ...);
#define DrawFormatStringFToHandle dxexc_DrawFormatStringFToHandle
extern int dxexc_DrawFormatStringMask(int x, int y, int Flag, const TCHAR* dxexc_String, ...);
#define DrawFormatStringMask dxexc_DrawFormatStringMask
extern int dxexc_DrawFormatStringMaskToHandle(int x, int y, int Flag, int FontHandle, const TCHAR* dxexc_String, ...);
#define DrawFormatStringMaskToHandle dxexc_DrawFormatStringMaskToHandle
extern int dxexc_DrawFormatStringToHandle(int x, int y, unsigned int Color, int FontHandle, const TCHAR* dxexc_String, ...);
#define DrawFormatStringToHandle dxexc_DrawFormatStringToHandle
extern int dxexc_DrawFormatStringToHandleToZBuffer(int x, int y, int FontHandle, int WriteZMode, const TCHAR* dxexc_String, ...);
#define DrawFormatStringToHandleToZBuffer dxexc_DrawFormatStringToHandleToZBuffer
extern int dxexc_DrawFormatStringToZBuffer(int x, int y, int WriteZMode, const TCHAR* dxexc_String, ...);
#define DrawFormatStringToZBuffer dxexc_DrawFormatStringToZBuffer
extern int dxexc_DrawFormatVString(int x, int y, unsigned int Color, const TCHAR* dxexc_String, ...);
#define DrawFormatVString dxexc_DrawFormatVString
extern int dxexc_DrawFormatVStringF(float x, float y, unsigned int Color, const TCHAR* dxexc_String, ...);
#define DrawFormatVStringF dxexc_DrawFormatVStringF
extern int dxexc_DrawFormatVStringFToHandle(float x, float y, unsigned int Color, int FontHandle, const TCHAR* dxexc_String, ...);
#define DrawFormatVStringFToHandle dxexc_DrawFormatVStringFToHandle
extern int dxexc_DrawFormatVStringToHandle(int x, int y, unsigned int Color, int FontHandle, const TCHAR* dxexc_String, ...);
#define DrawFormatVStringToHandle dxexc_DrawFormatVStringToHandle
extern int dxexc_DrawFormatVStringToHandleToZBuffer(int x, int y, int FontHandle, int WriteZMode, const TCHAR* dxexc_String, ...);
#define DrawFormatVStringToHandleToZBuffer dxexc_DrawFormatVStringToHandleToZBuffer
extern int dxexc_DrawFormatVStringToZBuffer(int x, int y, int WriteZMode, const TCHAR* dxexc_String, ...);
#define DrawFormatVStringToZBuffer dxexc_DrawFormatVStringToZBuffer
extern int dxexc_DrawRotaFormatString(int x, int y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, unsigned int EdgeColor, int VerticalFlag, const TCHAR* dxexc_String, ...);
#define DrawRotaFormatString dxexc_DrawRotaFormatString
extern int dxexc_DrawRotaFormatStringF(float x, float y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, unsigned int EdgeColor, int VerticalFlag, const TCHAR* dxexc_String, ...);
#define DrawRotaFormatStringF dxexc_DrawRotaFormatStringF
extern int dxexc_DrawRotaFormatStringFToHandle(float x, float y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, int FontHandle, unsigned int EdgeColor, int VerticalFlag, const TCHAR* dxexc_String, ...);
#define DrawRotaFormatStringFToHandle dxexc_DrawRotaFormatStringFToHandle
extern int dxexc_DrawRotaFormatStringToHandle(int x, int y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, int FontHandle, unsigned int EdgeColor, int VerticalFlag, const TCHAR* dxexc_String, ...);
#define DrawRotaFormatStringToHandle dxexc_DrawRotaFormatStringToHandle
extern int dxexc_ErrorLogFmtAdd(const TCHAR* dxexc_String, ...);
#define ErrorLogFmtAdd dxexc_ErrorLogFmtAdd
extern int dxexc_GetDrawExtendFormatStringSize(int* SizeX, int* SizeY, int* LineCount, double ExRateX, double ExRateY, const TCHAR* dxexc_String, ...);
#define GetDrawExtendFormatStringSize dxexc_GetDrawExtendFormatStringSize
extern int dxexc_GetDrawExtendFormatStringSizeToHandle(int* SizeX, int* SizeY, int* LineCount, double ExRateX, double ExRateY, int FontHandle, const TCHAR* dxexc_String, ...);
#define GetDrawExtendFormatStringSizeToHandle dxexc_GetDrawExtendFormatStringSizeToHandle
extern int dxexc_GetDrawExtendFormatStringWidth(double ExRateX, const TCHAR* dxexc_String, ...);
#define GetDrawExtendFormatStringWidth dxexc_GetDrawExtendFormatStringWidth
extern int dxexc_GetDrawExtendFormatStringWidthToHandle(double ExRateX, int FontHandle, const TCHAR* dxexc_String, ...);
#define GetDrawExtendFormatStringWidthToHandle dxexc_GetDrawExtendFormatStringWidthToHandle
extern int dxexc_GetDrawFormatStringSize(int* SizeX, int* SizeY, int* LineCount, const TCHAR* dxexc_String, ...);
#define GetDrawFormatStringSize dxexc_GetDrawFormatStringSize
extern int dxexc_GetDrawFormatStringSizeToHandle(int* SizeX, int* SizeY, int* LineCount, int FontHandle, const TCHAR* dxexc_String, ...);
#define GetDrawFormatStringSizeToHandle dxexc_GetDrawFormatStringSizeToHandle
extern int dxexc_GetDrawFormatStringWidth(const TCHAR* dxexc_String, ...);
#define GetDrawFormatStringWidth dxexc_GetDrawFormatStringWidth
extern int dxexc_GetDrawFormatStringWidthToHandle(int FontHandle, const TCHAR* dxexc_String, ...);
#define GetDrawFormatStringWidthToHandle dxexc_GetDrawFormatStringWidthToHandle
extern int dxexc_GraphBlend(int GrHandle, int BlendGrHandle, int BlendRatio, int dxexc_BlendType, ...);
#define GraphBlend dxexc_GraphBlend
extern int dxexc_GraphBlendBlt(int SrcGrHandle, int BlendGrHandle, int DestGrHandle, int BlendRatio, int dxexc_BlendType, ...);
#define GraphBlendBlt dxexc_GraphBlendBlt
extern int dxexc_GraphBlendRectBlt(int SrcGrHandle, int BlendGrHandle, int DestGrHandle, int SrcX1, int SrcY1, int SrcX2, int SrcY2, int BlendX, int BlendY, int DestX, int DestY, int BlendRatio, int dxexc_BlendType, ...);
#define GraphBlendRectBlt dxexc_GraphBlendRectBlt
extern int dxexc_GraphFilter(int GrHandle, int dxexc_FilterType, ...);
#define GraphFilter dxexc_GraphFilter
extern int dxexc_GraphFilterBlt(int SrcGrHandle, int DestGrHandle, int dxexc_FilterType, ...);
#define GraphFilterBlt dxexc_GraphFilterBlt
extern int dxexc_GraphFilterRectBlt(int SrcGrHandle, int DestGrHandle, int SrcX1, int SrcY1, int SrcX2, int SrcY2, int DestX, int DestY, int dxexc_FilterType, ...);
#define GraphFilterRectBlt dxexc_GraphFilterRectBlt
extern int dxexc_SetBlendGraphParam(int BlendGraph, int dxexc_BlendType, ...);
#define SetBlendGraphParam dxexc_SetBlendGraphParam
