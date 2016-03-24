
#include "DxLib.h"

int dxexc_BltBaseImage(const BASEIMAGE*  RgbBaseImage, int TextureFlag, int ReverseFlag) { // overload
    return dx_CreateGraphFromGraphImage(RgbBaseImage, TextureFlag, ReverseFlag);
}

int dxexc_BltBaseImage(const BASEIMAGE*  RgbBaseImage, const BASEIMAGE*  AlphaBaseImage, int TextureFlag, int ReverseFlag) { // overload
    return dx_CreateGraphFromGraphImage_2(RgbBaseImage, AlphaBaseImage, TextureFlag, ReverseFlag);
}

int dxexc_CreateDivGraphFromGraphImage(BASEIMAGE*  RgbBaseImage, int AllNum, int XNum, int YNum, int SizeX, int SizeY, int*  HandleBuf, int TextureFlag, int ReverseFlag) { // overload
    return dx_CreateDivGraphFromGraphImage(RgbBaseImage, AllNum, XNum, YNum, SizeX, SizeY, HandleBuf, TextureFlag, ReverseFlag);
}

int dxexc_CreateDivGraphFromGraphImage(BASEIMAGE*  RgbBaseImage, const BASEIMAGE*  AlphaBaseImage, int AllNum, int XNum, int YNum, int SizeX, int SizeY, int*  HandleBuf, int TextureFlag, int ReverseFlag) { // overload
    return dx_CreateDivGraphFromGraphImage_2(RgbBaseImage, AlphaBaseImage, AllNum, XNum, YNum, SizeX, SizeY, HandleBuf, TextureFlag, ReverseFlag);
}

int dxexc_CreateGraphFromGraphImage(const BASEIMAGE*  RgbBaseImage, int TextureFlag, int ReverseFlag) { // overload
    return dx_CreateGraphFromGraphImage(RgbBaseImage, TextureFlag, ReverseFlag);
}

int dxexc_CreateGraphFromGraphImage(const BASEIMAGE*  RgbBaseImage, const BASEIMAGE*  AlphaBaseImage, int TextureFlag, int ReverseFlag) { // overload
    return dx_CreateGraphFromGraphImage_2(RgbBaseImage, AlphaBaseImage, TextureFlag, ReverseFlag);
}

int dxexc_DrawChipMap(const BASEIMAGE*  RgbBaseImage, int TextureFlag, int ReverseFlag) { // overload
    return dx_CreateGraphFromGraphImage(RgbBaseImage, TextureFlag, ReverseFlag);
}

int dxexc_DrawChipMap(const BASEIMAGE*  RgbBaseImage, const BASEIMAGE*  AlphaBaseImage, int TextureFlag, int ReverseFlag) { // overload
    return dx_CreateGraphFromGraphImage_2(RgbBaseImage, AlphaBaseImage, TextureFlag, ReverseFlag);
}

int dxexc_DrawPolygon3D(const BASEIMAGE*  RgbBaseImage, int TextureFlag, int ReverseFlag) { // overload
    return dx_CreateGraphFromGraphImage(RgbBaseImage, TextureFlag, ReverseFlag);
}

int dxexc_DrawPolygon3D(const BASEIMAGE*  RgbBaseImage, const BASEIMAGE*  AlphaBaseImage, int TextureFlag, int ReverseFlag) { // overload
    return dx_CreateGraphFromGraphImage_2(RgbBaseImage, AlphaBaseImage, TextureFlag, ReverseFlag);
}

const COLORDATA*  dxexc_GetTexColorData(int AlphaCh, int AlphaTest, int ColorBitDepth, int DrawValid) { // overload
    return dx_GetTexColorData(AlphaCh, AlphaTest, ColorBitDepth, DrawValid);
}

const COLORDATA*  dxexc_GetTexColorData(const IMAGEFORMATDESC*  Format) { // overload
    return dx_GetTexColorData_2(Format);
}

const COLORDATA*  dxexc_GetTexColorData(int FormatIndex) { // overload
    return dx_GetTexColorData_3(FormatIndex);
}

int dxexc_LoadDivGraphToResource(const BASEIMAGE*  RgbBaseImage, int TextureFlag, int ReverseFlag) { // overload
    return dx_CreateGraphFromGraphImage(RgbBaseImage, TextureFlag, ReverseFlag);
}

int dxexc_LoadDivGraphToResource(const BASEIMAGE*  RgbBaseImage, const BASEIMAGE*  AlphaBaseImage, int TextureFlag, int ReverseFlag) { // overload
    return dx_CreateGraphFromGraphImage_2(RgbBaseImage, AlphaBaseImage, TextureFlag, ReverseFlag);
}

int dxexc_LoadGraphToResource(const BASEIMAGE*  RgbBaseImage, int TextureFlag, int ReverseFlag) { // overload
    return dx_CreateGraphFromGraphImage(RgbBaseImage, TextureFlag, ReverseFlag);
}

int dxexc_LoadGraphToResource(const BASEIMAGE*  RgbBaseImage, const BASEIMAGE*  AlphaBaseImage, int TextureFlag, int ReverseFlag) { // overload
    return dx_CreateGraphFromGraphImage_2(RgbBaseImage, AlphaBaseImage, TextureFlag, ReverseFlag);
}

int dxexc_ReCreateDivGraphFromGraphImage(BASEIMAGE*  RgbBaseImage, int AllNum, int XNum, int YNum, int SizeX, int SizeY, const int*  HandleBuf, int TextureFlag, int ReverseFlag) { // overload
    return dx_ReCreateDivGraphFromGraphImage(RgbBaseImage, AllNum, XNum, YNum, SizeX, SizeY, HandleBuf, TextureFlag, ReverseFlag);
}

int dxexc_ReCreateDivGraphFromGraphImage(BASEIMAGE*  RgbBaseImage, const BASEIMAGE*  AlphaBaseImage, int AllNum, int XNum, int YNum, int SizeX, int SizeY, const int*  HandleBuf, int TextureFlag, int ReverseFlag) { // overload
    return dx_ReCreateDivGraphFromGraphImage_2(RgbBaseImage, AlphaBaseImage, AllNum, XNum, YNum, SizeX, SizeY, HandleBuf, TextureFlag, ReverseFlag);
}

int dxexc_ReCreateGraphFromGraphImage(const BASEIMAGE*  RgbBaseImage, int GrHandle, int TextureFlag, int ReverseFlag) { // overload
    return dx_ReCreateGraphFromGraphImage(RgbBaseImage, GrHandle, TextureFlag, ReverseFlag);
}

int dxexc_ReCreateGraphFromGraphImage(const BASEIMAGE*  RgbBaseImage, const BASEIMAGE*  AlphaBaseImage, int GrHandle, int TextureFlag, int ReverseFlag) { // overload
    return dx_ReCreateGraphFromGraphImage_2(RgbBaseImage, AlphaBaseImage, GrHandle, TextureFlag, ReverseFlag);
}

int dxexc_AppLogAdd(const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_ErrorLogAdd(dxexc_StringBuf);
}

int dxexc_DrawExtendFormatString(int x, int y, double ExRateX, double ExRateY, unsigned int Color, const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_DrawExtendString(x, y, ExRateX, ExRateY, dxexc_StringBuf, Color);
}

int dxexc_DrawExtendFormatStringF(float x, float y, double ExRateX, double ExRateY, unsigned int Color, const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_DrawExtendStringF(x, y, ExRateX, ExRateY, dxexc_StringBuf, Color);
}

int dxexc_DrawExtendFormatStringFToHandle(float x, float y, double ExRateX, double ExRateY, unsigned int Color, int FontHandle, const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_DrawExtendStringFToHandle(x, y, ExRateX, ExRateY, dxexc_StringBuf, Color, FontHandle);
}

int dxexc_DrawExtendFormatStringToHandle(int x, int y, double ExRateX, double ExRateY, unsigned int Color, int FontHandle, const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_DrawExtendStringToHandle(x, y, ExRateX, ExRateY, dxexc_StringBuf, Color, FontHandle);
}

int dxexc_DrawExtendFormatStringToHandleToZBuffer(int x, int y, double ExRateX, double ExRateY, int FontHandle, int WriteZMode, const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_DrawExtendStringToHandleToZBuffer(x, y, ExRateX, ExRateY, dxexc_StringBuf, FontHandle, WriteZMode);
}

int dxexc_DrawExtendFormatStringToZBuffer(int x, int y, double ExRateX, double ExRateY, int WriteZMode, const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_DrawExtendStringToZBuffer(x, y, ExRateX, ExRateY, dxexc_StringBuf, WriteZMode);
}

int dxexc_DrawExtendFormatVString(int x, int y, double ExRateX, double ExRateY, unsigned int Color, const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_DrawExtendVString(x, y, ExRateX, ExRateY, dxexc_StringBuf, Color);
}

int dxexc_DrawExtendFormatVStringF(float x, float y, double ExRateX, double ExRateY, unsigned int Color, const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_DrawExtendVStringF(x, y, ExRateX, ExRateY, dxexc_StringBuf, Color);
}

int dxexc_DrawExtendFormatVStringFToHandle(float x, float y, double ExRateX, double ExRateY, unsigned int Color, int FontHandle, const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_DrawExtendVStringFToHandle(x, y, ExRateX, ExRateY, dxexc_StringBuf, Color, FontHandle);
}

int dxexc_DrawExtendFormatVStringToHandle(int x, int y, double ExRateX, double ExRateY, unsigned int Color, int FontHandle, const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_DrawExtendVStringToHandle(x, y, ExRateX, ExRateY, dxexc_StringBuf, Color, FontHandle);
}

int dxexc_DrawExtendFormatVStringToHandleToZBuffer(int x, int y, double ExRateX, double ExRateY, int FontHandle, int WriteZMode, const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_DrawExtendVStringToHandleToZBuffer(x, y, ExRateX, ExRateY, dxexc_StringBuf, FontHandle, WriteZMode);
}

int dxexc_DrawExtendFormatVStringToZBuffer(int x, int y, double ExRateX, double ExRateY, int WriteZMode, const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_DrawExtendVStringToZBuffer(x, y, ExRateX, ExRateY, dxexc_StringBuf, WriteZMode);
}

int dxexc_DrawFormatString(int x, int y, unsigned int Color, const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_DrawString(x, y, dxexc_StringBuf, Color);
}

int dxexc_DrawFormatStringF(float x, float y, unsigned int Color, const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_DrawStringF(x, y, dxexc_StringBuf, Color);
}

int dxexc_DrawFormatStringFToHandle(float x, float y, unsigned int Color, int FontHandle, const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_DrawStringFToHandle(x, y, dxexc_StringBuf, Color, FontHandle);
}

int dxexc_DrawFormatStringMask(int x, int y, int Flag, const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_DrawStringMask(x, y, Flag, dxexc_StringBuf);
}

int dxexc_DrawFormatStringMaskToHandle(int x, int y, int Flag, int FontHandle, const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_DrawStringMaskToHandle(x, y, Flag, FontHandle, dxexc_StringBuf);
}

int dxexc_DrawFormatStringToHandle(int x, int y, unsigned int Color, int FontHandle, const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_DrawStringToHandle(x, y, dxexc_StringBuf, Color, FontHandle);
}

int dxexc_DrawFormatStringToHandleToZBuffer(int x, int y, int FontHandle, int WriteZMode, const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_DrawStringToHandleToZBuffer(x, y, dxexc_StringBuf, FontHandle, WriteZMode);
}

int dxexc_DrawFormatStringToZBuffer(int x, int y, int WriteZMode, const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_DrawStringToZBuffer(x, y, dxexc_StringBuf, WriteZMode);
}

int dxexc_DrawFormatVString(int x, int y, unsigned int Color, const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_DrawVString(x, y, dxexc_StringBuf, Color);
}

int dxexc_DrawFormatVStringF(float x, float y, unsigned int Color, const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_DrawVStringF(x, y, dxexc_StringBuf, Color);
}

int dxexc_DrawFormatVStringFToHandle(float x, float y, unsigned int Color, int FontHandle, const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_DrawVStringFToHandle(x, y, dxexc_StringBuf, Color, FontHandle);
}

int dxexc_DrawFormatVStringToHandle(int x, int y, unsigned int Color, int FontHandle, const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_DrawVStringToHandle(x, y, dxexc_StringBuf, Color, FontHandle);
}

int dxexc_DrawFormatVStringToHandleToZBuffer(int x, int y, int FontHandle, int WriteZMode, const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_DrawVStringToHandleToZBuffer(x, y, dxexc_StringBuf, FontHandle, WriteZMode);
}

int dxexc_DrawFormatVStringToZBuffer(int x, int y, int WriteZMode, const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_DrawVStringToZBuffer(x, y, dxexc_StringBuf, WriteZMode);
}

int dxexc_DrawRotaFormatString(int x, int y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, unsigned int EdgeColor, int VerticalFlag, const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_DrawRotaString(x, y, ExRateX, ExRateY, RotCenterX, RotCenterY, RotAngle, Color);
}

int dxexc_DrawRotaFormatStringF(float x, float y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, unsigned int EdgeColor, int VerticalFlag, const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_DrawRotaStringF(x, y, ExRateX, ExRateY, RotCenterX, RotCenterY, RotAngle, Color);
}

int dxexc_DrawRotaFormatStringFToHandle(float x, float y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, int FontHandle, unsigned int EdgeColor, int VerticalFlag, const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_DrawRotaStringFToHandle(x, y, ExRateX, ExRateY, RotCenterX, RotCenterY, RotAngle, Color, FontHandle);
}

int dxexc_DrawRotaFormatStringToHandle(int x, int y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, int FontHandle, unsigned int EdgeColor, int VerticalFlag, const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_DrawRotaStringToHandle(x, y, ExRateX, ExRateY, RotCenterX, RotCenterY, RotAngle, Color, FontHandle);
}

int dxexc_ErrorLogFmtAdd(const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_ErrorLogAdd(dxexc_StringBuf);
}

int dxexc_GetDrawExtendFormatStringSize(int* SizeX, int* SizeY, int* LineCount, double ExRateX, double ExRateY, const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_GetDrawExtendStringSize(SizeX, SizeY, LineCount, ExRateX, ExRateY, dxexc_StringBuf, StrLen);
}

int dxexc_GetDrawExtendFormatStringSizeToHandle(int* SizeX, int* SizeY, int* LineCount, double ExRateX, double ExRateY, int FontHandle, const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_GetDrawExtendStringSizeToHandle(SizeX, SizeY, LineCount, ExRateX, ExRateY, dxexc_StringBuf, StrLen, FontHandle);
}

int dxexc_GetDrawExtendFormatStringWidth(double ExRateX, const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_GetDrawExtendStringWidth(ExRateX, dxexc_StringBuf, StrLen);
}

int dxexc_GetDrawExtendFormatStringWidthToHandle(double ExRateX, int FontHandle, const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_GetDrawExtendStringWidthToHandle(ExRateX, dxexc_StringBuf, StrLen, FontHandle);
}

int dxexc_GetDrawFormatStringSize(int* SizeX, int* SizeY, int* LineCount, const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_GetDrawStringSize(SizeX, SizeY, LineCount, dxexc_StringBuf, StrLen);
}

int dxexc_GetDrawFormatStringSizeToHandle(int* SizeX, int* SizeY, int* LineCount, int FontHandle, const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_GetDrawStringSizeToHandle(SizeX, SizeY, LineCount, dxexc_StringBuf, StrLen, FontHandle);
}

int dxexc_GetDrawFormatStringWidth(const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_GetDrawStringWidth(dxexc_StringBuf, StrLen);
}

int dxexc_GetDrawFormatStringWidthToHandle(int FontHandle, const TCHAR* dxexc_String, ...) {
    va_list VaList ;
    TCHAR dxexc_StringBuf[ 2048 ] ;
        
    va_start( VaList, dxexc_String ) ;
    dx_vsnprintfDx( dxexc_StringBuf, sizeof( dxexc_StringBuf ) / sizeof( TCHAR ), dxexc_String, VaList ) ;
    va_end( VaList ) ;
    int StrLen = strlenDx(dxexc_StringBuf);

    return dx_GetDrawStringWidthToHandle(dxexc_StringBuf, StrLen, FontHandle);
}

int dxexc_GraphBlend(int GrHandle, int BlendGrHandle, int BlendRatio, int dxexc_BlendType, ...) {
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
    
    return dx_GraphBlendS(GrHandle, BlendGrHandle, BlendRatio, dxexc_BlendType, Param0, Param1, Param2, Param3, Param4, Param5);
}

int dxexc_GraphBlendBlt(int SrcGrHandle, int BlendGrHandle, int DestGrHandle, int BlendRatio, int dxexc_BlendType, ...) {
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
    
    return dx_GraphBlendBltS(SrcGrHandle, BlendGrHandle, DestGrHandle, BlendRatio, dxexc_BlendType, Param0, Param1, Param2, Param3, Param4, Param5);
}

int dxexc_GraphBlendRectBlt(int SrcGrHandle, int BlendGrHandle, int DestGrHandle, int SrcX1, int SrcY1, int SrcX2, int SrcY2, int BlendX, int BlendY, int DestX, int DestY, int BlendRatio, int dxexc_BlendType, ...) {
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
    
    return dx_GraphBlendRectBltS(SrcGrHandle, BlendGrHandle, DestGrHandle, SrcX1, SrcY1, SrcX2, SrcY2, BlendX, BlendY, DestX, DestY, BlendRatio, dxexc_BlendType, Param0, Param1, Param2, Param3, Param4, Param5);
}

int dxexc_GraphFilter(int GrHandle, int dxexc_FilterType, ...) {
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
    
    return dx_GraphFilterS(GrHandle, dxexc_FilterType, Param0, Param1, Param2, Param3, Param4, Param5);
}

int dxexc_GraphFilterBlt(int SrcGrHandle, int DestGrHandle, int dxexc_FilterType, ...) {
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
    
    return dx_GraphFilterBltS(SrcGrHandle, DestGrHandle, dxexc_FilterType, Param0, Param1, Param2, Param3, Param4, Param5);
}

int dxexc_GraphFilterRectBlt(int SrcGrHandle, int DestGrHandle, int SrcX1, int SrcY1, int SrcX2, int SrcY2, int DestX, int DestY, int dxexc_FilterType, ...) {
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
    
    return dx_GraphFilterRectBltS(SrcGrHandle, DestGrHandle, SrcX1, SrcY1, SrcX2, SrcY2, DestX, DestY, dxexc_FilterType, Param0, Param1, Param2, Param3, Param4, Param5);
}

int dxexc_SetBlendGraphParam(int BlendGraph, int dxexc_BlendType, ...) {
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
    
    return dx_SetBlendGraphParamS(BlendGraph, dxexc_BlendType, Param0, Param1, Param2, Param3, Param4, Param5);
}
