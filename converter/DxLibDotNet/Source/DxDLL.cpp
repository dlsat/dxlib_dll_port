#include "DxDLL.h"
#define DX_CHAR char
int  __stdcall dx_SetKeyInputStringColor( ULONGLONG  NmlStr, ULONGLONG  NmlCur, ULONGLONG  IMEStr, ULONGLONG  IMECur, ULONGLONG  IMELine, ULONGLONG  IMESelectStr, ULONGLONG  IMEModeStr, ULONGLONG  NmlStrE, ULONGLONG  IMESelectStrE, ULONGLONG  IMEModeStrE, ULONGLONG  IMESelectWinE, ULONGLONG  IMESelectWinF, ULONGLONG  SelectStrBackColor, ULONGLONG  SelectStrColor, ULONGLONG  SelectStrEdgeColor)
{
	return SetKeyInputStringColor( NmlStr, NmlCur, IMEStr, IMECur, IMELine, IMESelectStr, IMEModeStr, NmlStrE, IMESelectStrE, IMEModeStrE, IMESelectWinE, IMESelectWinF, SelectStrBackColor, SelectStrColor, SelectStrEdgeColor);
}
int  __stdcall dx_Paint( int  x, int  y, unsigned int  FillColor, ULONGLONG  BoundaryColor)
{
	return Paint( x, y, FillColor, BoundaryColor);
}
int  __stdcall dx_GraphFilterS( int GrHandle, int FilterType, int Param0, int Param1, int Param2, int Param3, int Param4, int Param5 )
{
	return GraphFilter( GrHandle, FilterType, Param0, Param1, Param2, Param3, Param4, Param5 );
}
int  __stdcall dx_GraphFilterBltS( int SrcGrHandle, int DestGrHandle, int FilterType, int Param0, int Param1, int Param2, int Param3, int Param4, int Param5 )
{
	return GraphFilterBlt( SrcGrHandle, DestGrHandle, FilterType, Param0, Param1, Param2, Param3, Param4, Param5 );
}
int  __stdcall dx_GraphFilterRectBltS( int SrcGrHandle, int DestGrHandle, int SrcX1, int SrcY1, int SrcX2, int SrcY2, int DestX, int DestY, int FilterType, int Param0, int Param1, int Param2, int Param3, int Param4, int Param5 )
{
	return GraphFilterRectBlt( SrcGrHandle, DestGrHandle, SrcX1, SrcY1, SrcX2, SrcY2, DestX, DestY, FilterType, Param0, Param1, Param2, Param3, Param4, Param5 ) ;
}
int  __stdcall dx_GraphBlendS( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType, int Param0, int Param1, int Param2, int Param3, int Param4, int Param5 )
{
	return GraphBlend( GrHandle, BlendGrHandle, BlendRatio, BlendType, Param0, Param1, Param2, Param3, Param4, Param5 ) ;
}
int  __stdcall dx_GraphBlendBltS( int SrcGrHandle, int BlendGrHandle, int DestGrHandle, int BlendRatio, int BlendType, int Param0, int Param1, int Param2, int Param3, int Param4, int Param5 )
{
	return GraphBlendBlt( SrcGrHandle, BlendGrHandle, DestGrHandle, BlendRatio, BlendType, Param0, Param1, Param2, Param3, Param4, Param5 ) ;
}
int  __stdcall dx_GraphBlendRectBltS( int SrcGrHandle, int BlendGrHandle, int DestGrHandle, int SrcX1, int SrcY1, int SrcX2, int SrcY2, int BlendX, int BlendY, int DestX, int DestY, int BlendRatio, int BlendType, int Param0, int Param1, int Param2, int Param3, int Param4, int Param5 )
{
	return GraphBlendRectBlt( SrcGrHandle, BlendGrHandle, DestGrHandle, SrcX1, SrcY1, SrcX2, SrcY2, BlendX, BlendY, DestX, DestY, BlendRatio, BlendType, Param0, Param1, Param2, Param3, Param4, Param5 ) ;
}
int  __stdcall dx_SetBlendGraphParamS( int BlendGraph, int BlendType, int Param0, int Param1, int Param2, int Param3, int Param4, int Param5 )
{
	return SetBlendGraphParam( BlendGraph, BlendType, Param0, Param1, Param2, Param3, Param4, Param5 );
}
VECTOR __stdcall dx_VGet( float x, float y, float z )
{
	VECTOR Result ;
	Result.x = x ;
	Result.y = y ;
	Result.z = z ;
	return Result ;
}

VECTOR_D __stdcall dx_VGetD( double x, double y, double z )
{
	VECTOR_D Result ;
	Result.x = x ;
	Result.y = y ;
	Result.z = z ;
	return Result ;
}

VECTOR __stdcall dx_VAdd( VECTOR In1, VECTOR In2 )
{
	VECTOR Result ;
	Result.x = In1.x + In2.x ;
	Result.y = In1.y + In2.y ;
	Result.z = In1.z + In2.z ;
	return Result ;
}

VECTOR_D __stdcall dx_VAddD( VECTOR_D In1, VECTOR_D In2 )
{
	VECTOR_D Result ;
	Result.x = In1.x + In2.x ;
	Result.y = In1.y + In2.y ;
	Result.z = In1.z + In2.z ;
	return Result ;
}

VECTOR __stdcall dx_VSub( VECTOR In1, VECTOR In2 )
{
	VECTOR Result ;
	Result.x = In1.x - In2.x ;
	Result.y = In1.y - In2.y ;
	Result.z = In1.z - In2.z ;
	return Result ;
}

VECTOR_D __stdcall dx_VSubD( VECTOR_D In1, VECTOR_D In2 )
{
	VECTOR_D Result ;
	Result.x = In1.x - In2.x ;
	Result.y = In1.y - In2.y ;
	Result.z = In1.z - In2.z ;
	return Result ;
}

float __stdcall dx_VDot( VECTOR In1, VECTOR In2 )
{
	return In1.x * In2.x + In1.y * In2.y + In1.z * In2.z ;
}

double __stdcall dx_VDotD( VECTOR_D In1, VECTOR_D In2 )
{
	return In1.x * In2.x + In1.y * In2.y + In1.z * In2.z ;
}

VECTOR __stdcall dx_VCross( VECTOR In1, VECTOR In2 )
{
	VECTOR Result ;
	Result.x = In1.y * In2.z - In1.z * In2.y ;
	Result.y = In1.z * In2.x - In1.x * In2.z ;
	Result.z = In1.x * In2.y - In1.y * In2.x ;
	return Result ;
}

VECTOR_D __stdcall dx_VCrossD( VECTOR_D In1, VECTOR_D In2 )
{
	VECTOR_D Result ;
	Result.x = In1.y * In2.z - In1.z * In2.y ;
	Result.y = In1.z * In2.x - In1.x * In2.z ;
	Result.z = In1.x * In2.y - In1.y * In2.x ;
	return Result ;
}

VECTOR __stdcall dx_VScale( VECTOR In, float Scale )
{
	VECTOR Result ;
	Result.x = In.x * Scale ;
	Result.y = In.y * Scale ;
	Result.z = In.z * Scale ;
	return Result ;
}

VECTOR_D __stdcall dx_VScaleD( VECTOR_D In, double Scale )
{
	VECTOR_D Result ;
	Result.x = In.x * Scale ;
	Result.y = In.y * Scale ;
	Result.z = In.z * Scale ;
	return Result ;
}

float __stdcall dx_VSquareSize( VECTOR In )
{
	return In.x * In.x + In.y * In.y + In.z * In.z ;
}

double __stdcall dx_VSquareSizeD( VECTOR_D In )
{
	return In.x * In.x + In.y * In.y + In.z * In.z ;
}

VECTOR __stdcall dx_VTransform( VECTOR InV, MATRIX InM )
{
	VECTOR Result ;
	Result.x = InV.x * InM.m[0][0] + InV.y * InM.m[1][0] + InV.z * InM.m[2][0] + InM.m[3][0] ;
	Result.y = InV.x * InM.m[0][1] + InV.y * InM.m[1][1] + InV.z * InM.m[2][1] + InM.m[3][1] ;
	Result.z = InV.x * InM.m[0][2] + InV.y * InM.m[1][2] + InV.z * InM.m[2][2] + InM.m[3][2] ;
	return Result ;
}

VECTOR_D __stdcall dx_VTransformD( VECTOR_D InV, MATRIX_D InM )
{
	VECTOR_D Result ;
	Result.x = InV.x * InM.m[0][0] + InV.y * InM.m[1][0] + InV.z * InM.m[2][0] + InM.m[3][0] ;
	Result.y = InV.x * InM.m[0][1] + InV.y * InM.m[1][1] + InV.z * InM.m[2][1] + InM.m[3][1] ;
	Result.z = InV.x * InM.m[0][2] + InV.y * InM.m[1][2] + InV.z * InM.m[2][2] + InM.m[3][2] ;
	return Result ;
}

VECTOR __stdcall dx_VTransformSR( VECTOR InV, MATRIX InM )
{
	VECTOR Result ;
	Result.x = InV.x * InM.m[0][0] + InV.y * InM.m[1][0] + InV.z * InM.m[2][0] ;
	Result.y = InV.x * InM.m[0][1] + InV.y * InM.m[1][1] + InV.z * InM.m[2][1] ;
	Result.z = InV.x * InM.m[0][2] + InV.y * InM.m[1][2] + InV.z * InM.m[2][2] ;
	return Result ;
}

VECTOR_D __stdcall dx_VTransformSRD( VECTOR_D InV, MATRIX_D InM )
{
	VECTOR_D Result ;
	Result.x = InV.x * InM.m[0][0] + InV.y * InM.m[1][0] + InV.z * InM.m[2][0] ;
	Result.y = InV.x * InM.m[0][1] + InV.y * InM.m[1][1] + InV.z * InM.m[2][1] ;
	Result.z = InV.x * InM.m[0][2] + InV.y * InM.m[1][2] + InV.z * InM.m[2][2] ;
	return Result ;
}

int  __stdcall dx_DxLib_Init( void)
{
	return DxLib_Init( );
}
int  __stdcall dx_DxLib_End( void)
{
	return DxLib_End( );
}
int  __stdcall dx_DxLib_GlobalStructInitialize( void)
{
	return DxLib_GlobalStructInitialize( );
}
int  __stdcall dx_DxLib_IsInit( void)
{
	return DxLib_IsInit( );
}
int  __stdcall dx_ProcessMessage( void)
{
	return ProcessMessage( );
}
int  __stdcall dx_WaitTimer( int  WaitTime)
{
	return WaitTimer( WaitTime);
}
int  __stdcall dx_WaitKey( void)
{
	return WaitKey( );
}
int  __stdcall dx_GetNowCount( int  UseRDTSCFlag)
{
	return GetNowCount( UseRDTSCFlag);
}
LONGLONG  __stdcall dx_GetNowHiPerformanceCount( int  UseRDTSCFlag)
{
	return GetNowHiPerformanceCount( UseRDTSCFlag);
}
int  __stdcall dx_GetDateTime( DATEDATA *  DateBuf)
{
	return GetDateTime( DateBuf);
}
int  __stdcall dx_GetRand( int  RandMax)
{
	return GetRand( RandMax);
}
int  __stdcall dx_SRand( int  Seed)
{
	return SRand( Seed);
}
int  __stdcall dx_ErrorLogAdd( const char * ErrorStr)
{
	return ErrorLogAdd( ErrorStr);
}
int  __stdcall dx_ErrorLogTabAdd( void)
{
	return ErrorLogTabAdd( );
}
int  __stdcall dx_ErrorLogTabSub( void)
{
	return ErrorLogTabSub( );
}
int  __stdcall dx_SetUseTimeStampFlag( int  UseFlag)
{
	return SetUseTimeStampFlag( UseFlag);
}
int  __stdcall dx_SetOutApplicationLogValidFlag( int  Flag)
{
	return SetOutApplicationLogValidFlag( Flag);
}
int  __stdcall dx_SetApplicationLogSaveDirectory( const char * DirectoryPath)
{
	return SetApplicationLogSaveDirectory( DirectoryPath);
}
int  __stdcall dx_SetUseDateNameLogFile( int  Flag)
{
	return SetUseDateNameLogFile( Flag);
}
int  __stdcall dx_SetLogDrawOutFlag( int  DrawFlag)
{
	return SetLogDrawOutFlag( DrawFlag);
}
int  __stdcall dx_GetLogDrawFlag( void)
{
	return GetLogDrawFlag( );
}
int  __stdcall dx_SetLogFontSize( int  Size)
{
	return SetLogFontSize( Size);
}
int  __stdcall dx_SetLogDrawArea( int  x1, int  y1, int  x2, int  y2)
{
	return SetLogDrawArea( x1, y1, x2, y2);
}
int  __stdcall dx_clsDx( void)
{
	return clsDx( );
}
int  __stdcall dx_SetUseASyncLoadFlag( int  Flag)
{
	return SetUseASyncLoadFlag( Flag);
}
int  __stdcall dx_CheckHandleASyncLoad( int  Handle)
{
	return CheckHandleASyncLoad( Handle);
}
int  __stdcall dx_GetHandleASyncLoadResult( int  Handle)
{
	return GetHandleASyncLoadResult( Handle);
}
int  __stdcall dx_SetASyncLoadFinishDeleteFlag( int  Handle)
{
	return SetASyncLoadFinishDeleteFlag( Handle);
}
int  __stdcall dx_GetASyncLoadNum( void)
{
	return GetASyncLoadNum( );
}
int  __stdcall dx_SetASyncLoadThreadNum( int  ThreadNum)
{
	return SetASyncLoadThreadNum( ThreadNum);
}
int  __stdcall dx_SetDeleteHandleFlag( int  Handle, int *  DeleteFlag)
{
	return SetDeleteHandleFlag( Handle, DeleteFlag);
}
int  __stdcall dx_SetMouseDispFlag( int  DispFlag)
{
	return SetMouseDispFlag( DispFlag);
}
int  __stdcall dx_GetMousePoint( int *  XBuf, int *  YBuf)
{
	return GetMousePoint( XBuf, YBuf);
}
int  __stdcall dx_SetMousePoint( int  PointX, int  PointY)
{
	return SetMousePoint( PointX, PointY);
}
int  __stdcall dx_GetMouseInput( void)
{
	return GetMouseInput( );
}
int  __stdcall dx_GetMouseWheelRotVol( int  CounterReset)
{
	return GetMouseWheelRotVol( CounterReset);
}
int  __stdcall dx_GetMouseHWheelRotVol( int  CounterReset)
{
	return GetMouseHWheelRotVol( CounterReset);
}
float  __stdcall dx_GetMouseWheelRotVolF( int  CounterReset)
{
	return GetMouseWheelRotVolF( CounterReset);
}
float  __stdcall dx_GetMouseHWheelRotVolF( int  CounterReset)
{
	return GetMouseHWheelRotVolF( CounterReset);
}
int  __stdcall dx_GetMouseInputLog( int *  Button, int *  ClickX, int *  ClickY, int  LogDelete)
{
	return GetMouseInputLog( Button, ClickX, ClickY, LogDelete);
}
int  __stdcall dx_GetTouchInputNum( void)
{
	return GetTouchInputNum( );
}
int  __stdcall dx_GetTouchInput( int  InputNo, int *  PositionX, int *  PositionY, int *  ID, int *  Device)
{
	return GetTouchInput( InputNo, PositionX, PositionY, ID, Device);
}
int  __stdcall dx_GetTouchInputLogNum( void)
{
	return GetTouchInputLogNum( );
}
TOUCHINPUTDATA __stdcall dx_GetTouchInputLogOne( int PeekFlag ) 
{
	return GetTouchInputLogOne( PeekFlag  ) ;
}
int  __stdcall dx_GetTouchInputLog( TOUCHINPUTDATA *  TouchData, int  GetNum, int  PeekFlag)
{
	return GetTouchInputLog( TouchData, GetNum, PeekFlag);
}
void *  __stdcall dx_DxAlloc( size_t  AllocSize, const char * File, int  Line)
{
	return DxAlloc( AllocSize, File, Line);
}
void *  __stdcall dx_DxCalloc( size_t  AllocSize, const char * File, int  Line)
{
	return DxCalloc( AllocSize, File, Line);
}
void *  __stdcall dx_DxRealloc( void *  Memory, size_t  AllocSize, const char * File, int  Line)
{
	return DxRealloc( Memory, AllocSize, File, Line);
}
void  __stdcall dx_DxFree( void *  Memory)
{
	DxFree( Memory);
}
size_t  __stdcall dx_DxSetAllocSizeTrap( size_t  Size)
{
	return DxSetAllocSizeTrap( Size);
}
int  __stdcall dx_DxSetAllocPrintFlag( int  Flag)
{
	return DxSetAllocPrintFlag( Flag);
}
size_t  __stdcall dx_DxGetAllocSize( void)
{
	return DxGetAllocSize( );
}
int  __stdcall dx_DxGetAllocNum( void)
{
	return DxGetAllocNum( );
}
void  __stdcall dx_DxDumpAlloc( void)
{
	DxDumpAlloc( );
}
void  __stdcall dx_DxDrawAlloc( int  x, int  y, int  Width, int  Height)
{
	DxDrawAlloc( x, y, Width, Height);
}
int  __stdcall dx_DxErrorCheckAlloc( void)
{
	return DxErrorCheckAlloc( );
}
int  __stdcall dx_DxSetAllocSizeOutFlag( int  Flag)
{
	return DxSetAllocSizeOutFlag( Flag);
}
int  __stdcall dx_DxSetAllocMemoryErrorCheckFlag( int  Flag)
{
	return DxSetAllocMemoryErrorCheckFlag( Flag);
}
int  __stdcall dx_ConvertStringCharCodeFormat( int  SrcCharCodeFormat, const void * SrcString, int  DestCharCodeFormat, void *  DestStringBuffer)
{
	return ConvertStringCharCodeFormat( SrcCharCodeFormat, SrcString, DestCharCodeFormat, DestStringBuffer);
}
int  __stdcall dx_SetUseCharCodeFormat( int  CharCodeFormat)
{
	return SetUseCharCodeFormat( CharCodeFormat);
}
void  __stdcall dx_strcpyDx( TCHAR *  Dest, const char * Src)
{
	strcpyDx( Dest, Src);
}
void  __stdcall dx_strcpy_sDx( TCHAR *  Dest, size_t  DestBytes, const char * Src)
{
	strcpy_sDx( Dest, DestBytes, Src);
}
void  __stdcall dx_strpcpyDx( TCHAR *  Dest, const char * Src, int  Pos)
{
	strpcpyDx( Dest, Src, Pos);
}
void  __stdcall dx_strpcpy_sDx( TCHAR *  Dest, size_t  DestBytes, const char * Src, int  Pos)
{
	strpcpy_sDx( Dest, DestBytes, Src, Pos);
}
void  __stdcall dx_strpcpy2Dx( TCHAR *  Dest, const char * Src, int  Pos)
{
	strpcpy2Dx( Dest, Src, Pos);
}
void  __stdcall dx_strpcpy2_sDx( TCHAR *  Dest, size_t  DestBytes, const char * Src, int  Pos)
{
	strpcpy2_sDx( Dest, DestBytes, Src, Pos);
}
void  __stdcall dx_strncpyDx( TCHAR *  Dest, const char * Src, int  Num)
{
	strncpyDx( Dest, Src, Num);
}
void  __stdcall dx_strncpy_sDx( TCHAR *  Dest, size_t  DestBytes, const char * Src, int  Num)
{
	strncpy_sDx( Dest, DestBytes, Src, Num);
}
void  __stdcall dx_strncpy2Dx( TCHAR *  Dest, const char * Src, int  Num)
{
	strncpy2Dx( Dest, Src, Num);
}
void  __stdcall dx_strncpy2_sDx( TCHAR *  Dest, size_t  DestBytes, const char * Src, int  Num)
{
	strncpy2_sDx( Dest, DestBytes, Src, Num);
}
void  __stdcall dx_strrncpyDx( TCHAR *  Dest, const char * Src, int  Num)
{
	strrncpyDx( Dest, Src, Num);
}
void  __stdcall dx_strrncpy_sDx( TCHAR *  Dest, size_t  DestBytes, const char * Src, int  Num)
{
	strrncpy_sDx( Dest, DestBytes, Src, Num);
}
void  __stdcall dx_strrncpy2Dx( TCHAR *  Dest, const char * Src, int  Num)
{
	strrncpy2Dx( Dest, Src, Num);
}
void  __stdcall dx_strrncpy2_sDx( TCHAR *  Dest, size_t  DestBytes, const char * Src, int  Num)
{
	strrncpy2_sDx( Dest, DestBytes, Src, Num);
}
void  __stdcall dx_strpncpyDx( TCHAR *  Dest, const char * Src, int  Pos, int  Num)
{
	strpncpyDx( Dest, Src, Pos, Num);
}
void  __stdcall dx_strpncpy_sDx( TCHAR *  Dest, size_t  DestBytes, const char * Src, int  Pos, int  Num)
{
	strpncpy_sDx( Dest, DestBytes, Src, Pos, Num);
}
void  __stdcall dx_strpncpy2Dx( TCHAR *  Dest, const char * Src, int  Pos, int  Num)
{
	strpncpy2Dx( Dest, Src, Pos, Num);
}
void  __stdcall dx_strpncpy2_sDx( TCHAR *  Dest, size_t  DestBytes, const char * Src, int  Pos, int  Num)
{
	strpncpy2_sDx( Dest, DestBytes, Src, Pos, Num);
}
void  __stdcall dx_strcatDx( TCHAR *  Dest, const char * Src)
{
	strcatDx( Dest, Src);
}
void  __stdcall dx_strcat_sDx( TCHAR *  Dest, size_t  DestBytes, const char * Src)
{
	strcat_sDx( Dest, DestBytes, Src);
}
size_t  __stdcall dx_strlenDx( const char * Str)
{
	return strlenDx( Str);
}
size_t  __stdcall dx_strlen2Dx( const char * Str)
{
	return strlen2Dx( Str);
}
int  __stdcall dx_strcmpDx( const char * Str1, const char * Str2)
{
	return strcmpDx( Str1, Str2);
}
int  __stdcall dx_stricmpDx( const char * Str1, const char * Str2)
{
	return stricmpDx( Str1, Str2);
}
int  __stdcall dx_strncmpDx( const char * Str1, const char * Str2, int  Num)
{
	return strncmpDx( Str1, Str2, Num);
}
int  __stdcall dx_strncmp2Dx( const char * Str1, const char * Str2, int  Num)
{
	return strncmp2Dx( Str1, Str2, Num);
}
int  __stdcall dx_strpncmpDx( const char * Str1, const char * Str2, int  Pos, int  Num)
{
	return strpncmpDx( Str1, Str2, Pos, Num);
}
int  __stdcall dx_strpncmp2Dx( const char * Str1, const char * Str2, int  Pos, int  Num)
{
	return strpncmp2Dx( Str1, Str2, Pos, Num);
}
DWORD  __stdcall dx_strgetchrDx( const char * Str, int  Pos, int *  CharNums)
{
	return strgetchrDx( Str, Pos, CharNums);
}
DWORD  __stdcall dx_strgetchr2Dx( const char * Str, int  Pos, int *  CharNums)
{
	return strgetchr2Dx( Str, Pos, CharNums);
}
int  __stdcall dx_strputchrDx( TCHAR *  Str, int  Pos, DWORD  CharCode)
{
	return strputchrDx( Str, Pos, CharCode);
}
int  __stdcall dx_strputchr2Dx( TCHAR *  Str, int  Pos, DWORD  CharCode)
{
	return strputchr2Dx( Str, Pos, CharCode);
}
const TCHAR * __stdcall dx_strposDx( const TCHAR * Str , int Pos ) 
{
	return strposDx( Str , Pos  ) ;
}
const TCHAR * __stdcall dx_strpos2Dx( const TCHAR * Str , int Pos ) 
{
	return strpos2Dx( Str , Pos  ) ;
}
const TCHAR * __stdcall dx_strstrDx( const TCHAR * Str1 , const TCHAR * Str2 ) 
{
	return strstrDx( Str1 , Str2  ) ;
}
int  __stdcall dx_strstr2Dx( const char * Str1, const char * Str2)
{
	return strstr2Dx( Str1, Str2);
}
const TCHAR * __stdcall dx_strrstrDx( const TCHAR * Str1 , const TCHAR * Str2 ) 
{
	return strrstrDx( Str1 , Str2  ) ;
}
int  __stdcall dx_strrstr2Dx( const char * Str1, const char * Str2)
{
	return strrstr2Dx( Str1, Str2);
}
const TCHAR * __stdcall dx_strchrDx( const TCHAR * Str , DWORD CharCode ) 
{
	return strchrDx( Str , CharCode  ) ;
}
int  __stdcall dx_strchr2Dx( const char * Str, DWORD  CharCode)
{
	return strchr2Dx( Str, CharCode);
}
const TCHAR * __stdcall dx_strrchrDx( const TCHAR * Str , DWORD CharCode ) 
{
	return strrchrDx( Str , CharCode  ) ;
}
int  __stdcall dx_strrchr2Dx( const char * Str, DWORD  CharCode)
{
	return strrchr2Dx( Str, CharCode);
}
TCHAR * __stdcall dx_struprDx( TCHAR * Str ) 
{
	return struprDx( Str  ) ;
}
int __stdcall dx_vsprintfDx( TCHAR * Buffer , const TCHAR * FormatString , va_list Arg ) 
{
	return vsprintfDx( Buffer , FormatString , Arg  ) ;
}
int __stdcall dx_vsnprintfDx( TCHAR * Buffer , size_t BufferSize , const TCHAR * FormatString , va_list Arg ) 
{
	return vsnprintfDx( Buffer , BufferSize , FormatString , Arg  ) ;
}
TCHAR * __stdcall dx_itoaDx( int Value , TCHAR * Buffer , int Radix ) 
{
	return itoaDx( Value , Buffer , Radix  ) ;
}
TCHAR * __stdcall dx_itoa_sDx( int Value , TCHAR * Buffer , size_t BufferBytes , int Radix ) 
{
	return itoa_sDx( Value , Buffer , BufferBytes , Radix  ) ;
}
int  __stdcall dx_atoiDx( const char * Str)
{
	return atoiDx( Str);
}
double __stdcall dx_atofDx( const TCHAR * Str ) 
{
	return atofDx( Str  ) ;
}
int __stdcall dx_vsscanfDx( const TCHAR * String , const TCHAR * FormatString , va_list Arg ) 
{
	return vsscanfDx( String , FormatString , Arg  ) ;
}
int  __stdcall dx_ProcessNetMessage( int  RunReleaseProcess)
{
	return ProcessNetMessage( RunReleaseProcess);
}
int  __stdcall dx_GetHostIPbyName( const char * HostName, IPDATA *  IPDataBuf)
{
	return GetHostIPbyName( HostName, IPDataBuf);
}
int  __stdcall dx_GetHostIPbyName_IPv6( const char * HostName, IPDATA_IPv6 *  IPDataBuf)
{
	return GetHostIPbyName_IPv6( HostName, IPDataBuf);
}
int  __stdcall dx_ConnectNetWork( IPDATA  IPData, int  Port)
{
	return ConnectNetWork( IPData, Port);
}
int  __stdcall dx_ConnectNetWork_IPv6( IPDATA_IPv6  IPData, int  Port)
{
	return ConnectNetWork_IPv6( IPData, Port);
}
int  __stdcall dx_ConnectNetWork_ASync( IPDATA  IPData, int  Port)
{
	return ConnectNetWork_ASync( IPData, Port);
}
int  __stdcall dx_ConnectNetWork_IPv6_ASync( IPDATA_IPv6  IPData, int  Port)
{
	return ConnectNetWork_IPv6_ASync( IPData, Port);
}
int  __stdcall dx_PreparationListenNetWork( int  Port)
{
	return PreparationListenNetWork( Port);
}
int  __stdcall dx_PreparationListenNetWork_IPv6( int  Port)
{
	return PreparationListenNetWork_IPv6( Port);
}
int  __stdcall dx_StopListenNetWork( void)
{
	return StopListenNetWork( );
}
int  __stdcall dx_CloseNetWork( int  NetHandle)
{
	return CloseNetWork( NetHandle);
}
int  __stdcall dx_GetNetWorkAcceptState( int  NetHandle)
{
	return GetNetWorkAcceptState( NetHandle);
}
int  __stdcall dx_GetNetWorkDataLength( int  NetHandle)
{
	return GetNetWorkDataLength( NetHandle);
}
int  __stdcall dx_GetNetWorkSendDataLength( int  NetHandle)
{
	return GetNetWorkSendDataLength( NetHandle);
}
int  __stdcall dx_GetNewAcceptNetWork( void)
{
	return GetNewAcceptNetWork( );
}
int  __stdcall dx_GetLostNetWork( void)
{
	return GetLostNetWork( );
}
int  __stdcall dx_GetNetWorkIP( int  NetHandle, IPDATA *  IpBuf)
{
	return GetNetWorkIP( NetHandle, IpBuf);
}
int  __stdcall dx_GetNetWorkIP_IPv6( int  NetHandle, IPDATA_IPv6 *  IpBuf)
{
	return GetNetWorkIP_IPv6( NetHandle, IpBuf);
}
int  __stdcall dx_GetMyIPAddress( IPDATA *  IpBuf, int  IpBufLength, int *  IpNum)
{
	return GetMyIPAddress( IpBuf, IpBufLength, IpNum);
}
int  __stdcall dx_SetConnectTimeOutWait( int  Time)
{
	return SetConnectTimeOutWait( Time);
}
int  __stdcall dx_SetUseDXNetWorkProtocol( int  Flag)
{
	return SetUseDXNetWorkProtocol( Flag);
}
int  __stdcall dx_GetUseDXNetWorkProtocol( void)
{
	return GetUseDXNetWorkProtocol( );
}
int  __stdcall dx_SetUseDXProtocol( int  Flag)
{
	return SetUseDXProtocol( Flag);
}
int  __stdcall dx_GetUseDXProtocol( void)
{
	return GetUseDXProtocol( );
}
int  __stdcall dx_SetNetWorkCloseAfterLostFlag( int  Flag)
{
	return SetNetWorkCloseAfterLostFlag( Flag);
}
int  __stdcall dx_GetNetWorkCloseAfterLostFlag( void)
{
	return GetNetWorkCloseAfterLostFlag( );
}
int  __stdcall dx_NetWorkRecv( int  NetHandle, void *  Buffer, int  Length)
{
	return NetWorkRecv( NetHandle, Buffer, Length);
}
int  __stdcall dx_NetWorkRecvToPeek( int  NetHandle, void *  Buffer, int  Length)
{
	return NetWorkRecvToPeek( NetHandle, Buffer, Length);
}
int  __stdcall dx_NetWorkRecvBufferClear( int  NetHandle)
{
	return NetWorkRecvBufferClear( NetHandle);
}
int  __stdcall dx_NetWorkSend( int  NetHandle, const void * Buffer, int  Length)
{
	return NetWorkSend( NetHandle, Buffer, Length);
}
int  __stdcall dx_MakeUDPSocket( int  RecvPort)
{
	return MakeUDPSocket( RecvPort);
}
int  __stdcall dx_MakeUDPSocket_IPv6( int  RecvPort)
{
	return MakeUDPSocket_IPv6( RecvPort);
}
int  __stdcall dx_DeleteUDPSocket( int  NetUDPHandle)
{
	return DeleteUDPSocket( NetUDPHandle);
}
int  __stdcall dx_NetWorkSendUDP( int  NetUDPHandle, IPDATA  SendIP, int  SendPort, const void * Buffer, int  Length)
{
	return NetWorkSendUDP( NetUDPHandle, SendIP, SendPort, Buffer, Length);
}
int  __stdcall dx_NetWorkSendUDP_IPv6( int  NetUDPHandle, IPDATA_IPv6  SendIP, int  SendPort, const void * Buffer, int  Length)
{
	return NetWorkSendUDP_IPv6( NetUDPHandle, SendIP, SendPort, Buffer, Length);
}
int  __stdcall dx_NetWorkRecvUDP( int  NetUDPHandle, IPDATA *  RecvIP, int *  RecvPort, void *  Buffer, int  Length, int  Peek)
{
	return NetWorkRecvUDP( NetUDPHandle, RecvIP, RecvPort, Buffer, Length, Peek);
}
int  __stdcall dx_NetWorkRecvUDP_IPv6( int  NetUDPHandle, IPDATA_IPv6 *  RecvIP, int *  RecvPort, void *  Buffer, int  Length, int  Peek)
{
	return NetWorkRecvUDP_IPv6( NetUDPHandle, RecvIP, RecvPort, Buffer, Length, Peek);
}
int  __stdcall dx_CheckNetWorkRecvUDP( int  NetUDPHandle)
{
	return CheckNetWorkRecvUDP( NetUDPHandle);
}
int  __stdcall dx_StockInputChar( TCHAR  CharCode)
{
	return StockInputChar( CharCode);
}
int  __stdcall dx_ClearInputCharBuf( void)
{
	return ClearInputCharBuf( );
}
TCHAR __stdcall dx_GetInputChar( int DeleteFlag ) 
{
	return GetInputChar( DeleteFlag  ) ;
}
TCHAR __stdcall dx_GetInputCharWait( int DeleteFlag ) 
{
	return GetInputCharWait( DeleteFlag  ) ;
}
int  __stdcall dx_GetOneChar( TCHAR *  CharBuffer, int  DeleteFlag)
{
	return GetOneChar( CharBuffer, DeleteFlag);
}
int  __stdcall dx_GetOneCharWait( TCHAR *  CharBuffer, int  DeleteFlag)
{
	return GetOneCharWait( CharBuffer, DeleteFlag);
}
int  __stdcall dx_GetCtrlCodeCmp( TCHAR  Char)
{
	return GetCtrlCodeCmp( Char);
}
int  __stdcall dx_DrawIMEInputString( int  x, int  y, int  SelectStringNum)
{
	return DrawIMEInputString( x, y, SelectStringNum);
}
int  __stdcall dx_SetUseIMEFlag( int  UseFlag)
{
	return SetUseIMEFlag( UseFlag);
}
int  __stdcall dx_SetInputStringMaxLengthIMESync( int  Flag)
{
	return SetInputStringMaxLengthIMESync( Flag);
}
int  __stdcall dx_SetIMEInputStringMaxLength( int  Length)
{
	return SetIMEInputStringMaxLength( Length);
}
int  __stdcall dx_GetStringPoint( const char * String, int  Point)
{
	return GetStringPoint( String, Point);
}
int  __stdcall dx_GetStringPoint2( const char * String, int  Point)
{
	return GetStringPoint2( String, Point);
}
int  __stdcall dx_GetStringLength( const char * String)
{
	return GetStringLength( String);
}
int  __stdcall dx_DrawObtainsString( int  x, int  y, int  AddY, const char * String, unsigned int  StrColor, unsigned int  StrEdgeColor, int  FontHandle, unsigned int  SelectBackColor, unsigned int  SelectStrColor, unsigned int  SelectStrEdgeColor, int  SelectStart, int  SelectEnd)
{
	return DrawObtainsString( x, y, AddY, String, StrColor, StrEdgeColor, FontHandle, SelectBackColor, SelectStrColor, SelectStrEdgeColor, SelectStart, SelectEnd);
}
int  __stdcall dx_DrawObtainsString_CharClip( int  x, int  y, int  AddY, const char * String, unsigned int  StrColor, unsigned int  StrEdgeColor, int  FontHandle, unsigned int  SelectBackColor, unsigned int  SelectStrColor, unsigned int  SelectStrEdgeColor, int  SelectStart, int  SelectEnd)
{
	return DrawObtainsString_CharClip( x, y, AddY, String, StrColor, StrEdgeColor, FontHandle, SelectBackColor, SelectStrColor, SelectStrEdgeColor, SelectStart, SelectEnd);
}
int  __stdcall dx_DrawObtainsBox( int  x1, int  y1, int  x2, int  y2, int  AddY, unsigned int  Color, int  FillFlag)
{
	return DrawObtainsBox( x1, y1, x2, y2, AddY, Color, FillFlag);
}
int  __stdcall dx_InputStringToCustom( int  x, int  y, size_t  BufLength, TCHAR *  StrBuffer, int  CancelValidFlag, int  SingleCharOnlyFlag, int  NumCharOnlyFlag, int  DoubleCharOnlyFlag)
{
	return InputStringToCustom( x, y, BufLength, StrBuffer, CancelValidFlag, SingleCharOnlyFlag, NumCharOnlyFlag, DoubleCharOnlyFlag);
}
int  __stdcall dx_KeyInputString( int  x, int  y, size_t  CharMaxLength, TCHAR *  StrBuffer, int  CancelValidFlag)
{
	return KeyInputString( x, y, CharMaxLength, StrBuffer, CancelValidFlag);
}
int  __stdcall dx_KeyInputSingleCharString( int  x, int  y, size_t  CharMaxLength, TCHAR *  StrBuffer, int  CancelValidFlag)
{
	return KeyInputSingleCharString( x, y, CharMaxLength, StrBuffer, CancelValidFlag);
}
int  __stdcall dx_KeyInputNumber( int  x, int  y, int  MaxNum, int  MinNum, int  CancelValidFlag)
{
	return KeyInputNumber( x, y, MaxNum, MinNum, CancelValidFlag);
}
int  __stdcall dx_GetIMEInputModeStr( TCHAR *  GetBuffer)
{
	return GetIMEInputModeStr( GetBuffer);
}
const IMEINPUTDATA * __stdcall dx_GetIMEInputData( void )
{
	return GetIMEInputData(  ) ;
}
int  __stdcall dx_SetKeyInputStringColor2( int  TargetColor, unsigned int  Color)
{
	return SetKeyInputStringColor2( TargetColor, Color);
}
int  __stdcall dx_ResetKeyInputStringColor2( int  TargetColor)
{
	return ResetKeyInputStringColor2( TargetColor);
}
int  __stdcall dx_SetKeyInputStringFont( int  FontHandle)
{
	return SetKeyInputStringFont( FontHandle);
}
int  __stdcall dx_SetKeyInputStringEndCharaMode( int  EndCharaMode)
{
	return SetKeyInputStringEndCharaMode( EndCharaMode);
}
int  __stdcall dx_DrawKeyInputModeString( int  x, int  y)
{
	return DrawKeyInputModeString( x, y);
}
int  __stdcall dx_InitKeyInput( void)
{
	return InitKeyInput( );
}
int  __stdcall dx_MakeKeyInput( size_t  MaxStrLength, int  CancelValidFlag, int  SingleCharOnlyFlag, int  NumCharOnlyFlag, int  DoubleCharOnlyFlag)
{
	return MakeKeyInput( MaxStrLength, CancelValidFlag, SingleCharOnlyFlag, NumCharOnlyFlag, DoubleCharOnlyFlag);
}
int  __stdcall dx_DeleteKeyInput( int  InputHandle)
{
	return DeleteKeyInput( InputHandle);
}
int  __stdcall dx_SetActiveKeyInput( int  InputHandle)
{
	return SetActiveKeyInput( InputHandle);
}
int  __stdcall dx_GetActiveKeyInput( void)
{
	return GetActiveKeyInput( );
}
int  __stdcall dx_CheckKeyInput( int  InputHandle)
{
	return CheckKeyInput( InputHandle);
}
int  __stdcall dx_ReStartKeyInput( int  InputHandle)
{
	return ReStartKeyInput( InputHandle);
}
int  __stdcall dx_ProcessActKeyInput( void)
{
	return ProcessActKeyInput( );
}
int  __stdcall dx_DrawKeyInputString( int  x, int  y, int  InputHandle)
{
	return DrawKeyInputString( x, y, InputHandle);
}
int  __stdcall dx_SetKeyInputDrawArea( int  x1, int  y1, int  x2, int  y2, int  InputHandle)
{
	return SetKeyInputDrawArea( x1, y1, x2, y2, InputHandle);
}
int  __stdcall dx_SetKeyInputSelectArea( int  SelectStart, int  SelectEnd, int  InputHandle)
{
	return SetKeyInputSelectArea( SelectStart, SelectEnd, InputHandle);
}
int  __stdcall dx_GetKeyInputSelectArea( int *  SelectStart, int *  SelectEnd, int  InputHandle)
{
	return GetKeyInputSelectArea( SelectStart, SelectEnd, InputHandle);
}
int  __stdcall dx_SetKeyInputDrawStartPos( int  DrawStartPos, int  InputHandle)
{
	return SetKeyInputDrawStartPos( DrawStartPos, InputHandle);
}
int  __stdcall dx_GetKeyInputDrawStartPos( int  InputHandle)
{
	return GetKeyInputDrawStartPos( InputHandle);
}
int  __stdcall dx_SetKeyInputCursorBrinkTime( int  Time)
{
	return SetKeyInputCursorBrinkTime( Time);
}
int  __stdcall dx_SetKeyInputCursorBrinkFlag( int  Flag)
{
	return SetKeyInputCursorBrinkFlag( Flag);
}
int  __stdcall dx_SetKeyInputString( const char * String, int  InputHandle)
{
	return SetKeyInputString( String, InputHandle);
}
int  __stdcall dx_SetKeyInputNumber( int  Number, int  InputHandle)
{
	return SetKeyInputNumber( Number, InputHandle);
}
int  __stdcall dx_SetKeyInputNumberToFloat( float  Number, int  InputHandle)
{
	return SetKeyInputNumberToFloat( Number, InputHandle);
}
int  __stdcall dx_GetKeyInputString( TCHAR *  StrBuffer, int  InputHandle)
{
	return GetKeyInputString( StrBuffer, InputHandle);
}
int  __stdcall dx_GetKeyInputNumber( int  InputHandle)
{
	return GetKeyInputNumber( InputHandle);
}
float  __stdcall dx_GetKeyInputNumberToFloat( int  InputHandle)
{
	return GetKeyInputNumberToFloat( InputHandle);
}
int  __stdcall dx_SetKeyInputCursorPosition( int  Position, int  InputHandle)
{
	return SetKeyInputCursorPosition( Position, InputHandle);
}
int  __stdcall dx_GetKeyInputCursorPosition( int  InputHandle)
{
	return GetKeyInputCursorPosition( InputHandle);
}
int  __stdcall dx_FileRead_open( const char * FilePath, int  ASync)
{
	return FileRead_open( FilePath, ASync);
}
LONGLONG  __stdcall dx_FileRead_size( const char * FilePath)
{
	return FileRead_size( FilePath);
}
int  __stdcall dx_FileRead_close( int  FileHandle)
{
	return FileRead_close( FileHandle);
}
LONGLONG  __stdcall dx_FileRead_tell( int  FileHandle)
{
	return FileRead_tell( FileHandle);
}
int  __stdcall dx_FileRead_seek( int  FileHandle, LONGLONG  Offset, int  Origin)
{
	return FileRead_seek( FileHandle, Offset, Origin);
}
int  __stdcall dx_FileRead_read( void *  Buffer, int  ReadSize, int  FileHandle)
{
	return FileRead_read( Buffer, ReadSize, FileHandle);
}
int  __stdcall dx_FileRead_idle_chk( int  FileHandle)
{
	return FileRead_idle_chk( FileHandle);
}
int  __stdcall dx_FileRead_eof( int  FileHandle)
{
	return FileRead_eof( FileHandle);
}
int  __stdcall dx_FileRead_gets( TCHAR *  Buffer, int  BufferSize, int  FileHandle)
{
	return FileRead_gets( Buffer, BufferSize, FileHandle);
}
TCHAR __stdcall dx_FileRead_getc( int FileHandle ) 
{
	return FileRead_getc( FileHandle  ) ;
}
DWORD_PTR  __stdcall dx_FileRead_createInfo( const char * ObjectPath)
{
	return FileRead_createInfo( ObjectPath);
}
int  __stdcall dx_FileRead_getInfoNum( DWORD_PTR  FileInfoHandle)
{
	return FileRead_getInfoNum( FileInfoHandle);
}
int __stdcall dx_FileRead_getInfo( int Index , FILEINFO * Buffer , DWORD_PTR FileInfoHandle ) 
{
	return FileRead_getInfo( Index , Buffer , FileInfoHandle  ) ;
}
int  __stdcall dx_FileRead_deleteInfo( DWORD_PTR  FileInfoHandle)
{
	return FileRead_deleteInfo( FileInfoHandle);
}
DWORD_PTR __stdcall dx_FileRead_findFirst( const TCHAR * FilePath , FILEINFO * Buffer ) 
{
	return FileRead_findFirst( FilePath , Buffer  ) ;
}
int __stdcall dx_FileRead_findNext( DWORD_PTR FindHandle , FILEINFO * Buffer ) 
{
	return FileRead_findNext( FindHandle , Buffer  ) ;
}
int __stdcall dx_FileRead_findClose( DWORD_PTR FindHandle ) 
{
	return FileRead_findClose( FindHandle  ) ;
}
int  __stdcall dx_FileRead_fullyLoad( const char * FilePath)
{
	return FileRead_fullyLoad( FilePath);
}
int  __stdcall dx_FileRead_fullyLoad_delete( int  FLoadHandle)
{
	return FileRead_fullyLoad_delete( FLoadHandle);
}
const void * __stdcall dx_FileRead_fullyLoad_getImage( int  FLoadHandle)
{
	return FileRead_fullyLoad_getImage( FLoadHandle);
}
LONGLONG  __stdcall dx_FileRead_fullyLoad_getSize( int  FLoadHandle)
{
	return FileRead_fullyLoad_getSize( FLoadHandle);
}
int  __stdcall dx_GetStreamFunctionDefault( void)
{
	return GetStreamFunctionDefault( );
}
int __stdcall dx_ChangeStreamFunction( const STREAMDATASHREDTYPE2 * StreamThread ) 
{
	return ChangeStreamFunction( StreamThread  ) ;
}
int __stdcall dx_ChangeStreamFunctionW( const STREAMDATASHREDTYPE2W * StreamThreadW ) 
{
	return ChangeStreamFunctionW( StreamThreadW  ) ;
}
int  __stdcall dx_ConvertFullPath( const char * Src, TCHAR *  Dest, const char * CurrentDir)
{
	return ConvertFullPath( Src, Dest, CurrentDir);
}
int  __stdcall dx_CheckHitKey( int  KeyCode)
{
	return CheckHitKey( KeyCode);
}
int  __stdcall dx_CheckHitKeyAll( int  CheckType)
{
	return CheckHitKeyAll( CheckType);
}
int  __stdcall dx_GetHitKeyStateAll( DX_CHAR *  KeyStateBuf)
{
	return GetHitKeyStateAll( KeyStateBuf);
}
int  __stdcall dx_GetJoypadNum( void)
{
	return GetJoypadNum( );
}
int  __stdcall dx_GetJoypadInputState( int  InputType)
{
	return GetJoypadInputState( InputType);
}
int  __stdcall dx_GetJoypadAnalogInput( int *  XBuf, int *  YBuf, int  InputType)
{
	return GetJoypadAnalogInput( XBuf, YBuf, InputType);
}
int  __stdcall dx_GetJoypadAnalogInputRight( int *  XBuf, int *  YBuf, int  InputType)
{
	return GetJoypadAnalogInputRight( XBuf, YBuf, InputType);
}
int  __stdcall dx_GetJoypadDirectInputState( int  InputType, DINPUT_JOYSTATE *  DInputState)
{
	return GetJoypadDirectInputState( InputType, DInputState);
}
int  __stdcall dx_CheckJoypadXInput( int  InputType)
{
	return CheckJoypadXInput( InputType);
}
int  __stdcall dx_GetJoypadXInputState( int  InputType, XINPUT_STATE *  XInputState)
{
	return GetJoypadXInputState( InputType, XInputState);
}
int  __stdcall dx_SetJoypadInputToKeyInput( int  InputType, int  PadInput, int  KeyInput1, int  KeyInput2, int  KeyInput3, int  KeyInput4)
{
	return SetJoypadInputToKeyInput( InputType, PadInput, KeyInput1, KeyInput2, KeyInput3, KeyInput4);
}
int  __stdcall dx_SetJoypadDeadZone( int  InputType, double  Zone)
{
	return SetJoypadDeadZone( InputType, Zone);
}
int  __stdcall dx_StartJoypadVibration( int  InputType, int  Power, int  Time, int  EffectIndex)
{
	return StartJoypadVibration( InputType, Power, Time, EffectIndex);
}
int  __stdcall dx_StopJoypadVibration( int  InputType, int  EffectIndex)
{
	return StopJoypadVibration( InputType, EffectIndex);
}
int  __stdcall dx_GetJoypadPOVState( int  InputType, int  POVNumber)
{
	return GetJoypadPOVState( InputType, POVNumber);
}
int  __stdcall dx_ReSetupJoypad( void)
{
	return ReSetupJoypad( );
}
int  __stdcall dx_SetUseJoypadVibrationFlag( int  Flag)
{
	return SetUseJoypadVibrationFlag( Flag);
}
int  __stdcall dx_MakeGraph( int  SizeX, int  SizeY, int  NotUse3DFlag)
{
	return MakeGraph( SizeX, SizeY, NotUse3DFlag);
}
int  __stdcall dx_MakeScreen( int  SizeX, int  SizeY, int  UseAlphaChannel)
{
	return MakeScreen( SizeX, SizeY, UseAlphaChannel);
}
int  __stdcall dx_DerivationGraph( int  SrcX, int  SrcY, int  Width, int  Height, int  SrcGraphHandle)
{
	return DerivationGraph( SrcX, SrcY, Width, Height, SrcGraphHandle);
}
int  __stdcall dx_DeleteGraph( int  GrHandle, int  LogOutFlag)
{
	return DeleteGraph( GrHandle, LogOutFlag);
}
int  __stdcall dx_DeleteSharingGraph( int  GrHandle)
{
	return DeleteSharingGraph( GrHandle);
}
int  __stdcall dx_GetGraphNum( void)
{
	return GetGraphNum( );
}
int  __stdcall dx_FillGraph( int  GrHandle, int  Red, int  Green, int  Blue, int  Alpha)
{
	return FillGraph( GrHandle, Red, Green, Blue, Alpha);
}
int  __stdcall dx_SetGraphLostFlag( int  GrHandle, int *  LostFlag)
{
	return SetGraphLostFlag( GrHandle, LostFlag);
}
int  __stdcall dx_InitGraph( int  LogOutFlag)
{
	return InitGraph( LogOutFlag);
}
int  __stdcall dx_ReloadFileGraphAll( void)
{
	return ReloadFileGraphAll( );
}
int  __stdcall dx_MakeShadowMap( int  SizeX, int  SizeY)
{
	return MakeShadowMap( SizeX, SizeY);
}
int  __stdcall dx_DeleteShadowMap( int  SmHandle)
{
	return DeleteShadowMap( SmHandle);
}
int  __stdcall dx_SetShadowMapLightDirection( int  SmHandle, VECTOR  Direction)
{
	return SetShadowMapLightDirection( SmHandle, Direction);
}
int  __stdcall dx_ShadowMap_DrawSetup( int  SmHandle)
{
	return ShadowMap_DrawSetup( SmHandle);
}
int  __stdcall dx_ShadowMap_DrawEnd( void)
{
	return ShadowMap_DrawEnd( );
}
int  __stdcall dx_SetUseShadowMap( int  SmSlotIndex, int  SmHandle)
{
	return SetUseShadowMap( SmSlotIndex, SmHandle);
}
int  __stdcall dx_SetShadowMapDrawArea( int  SmHandle, VECTOR  MinPosition, VECTOR  MaxPosition)
{
	return SetShadowMapDrawArea( SmHandle, MinPosition, MaxPosition);
}
int  __stdcall dx_ResetShadowMapDrawArea( int  SmHandle)
{
	return ResetShadowMapDrawArea( SmHandle);
}
int  __stdcall dx_SetShadowMapAdjustDepth( int  SmHandle, float  Depth)
{
	return SetShadowMapAdjustDepth( SmHandle, Depth);
}
int  __stdcall dx_TestDrawShadowMap( int  SmHandle, int  x1, int  y1, int  x2, int  y2)
{
	return TestDrawShadowMap( SmHandle, x1, y1, x2, y2);
}
int __stdcall dx_BltBmpToGraph( const COLORDATA * BmpColorData , HBITMAP RgbBmp , HBITMAP AlphaBmp , int CopyPointX , int CopyPointY , int GrHandle ) 
{
	return BltBmpToGraph( BmpColorData , RgbBmp , AlphaBmp , CopyPointX , CopyPointY , GrHandle  ) ;
}
int __stdcall dx_BltBmpToDivGraph( const COLORDATA * BmpColorData , HBITMAP RgbBmp , HBITMAP AlphaBmp , int AllNum , int XNum , int YNum , int Width , int Height , const int * GrHandle , int ReverseFlag ) 
{
	return BltBmpToDivGraph( BmpColorData , RgbBmp , AlphaBmp , AllNum , XNum , YNum , Width , Height , GrHandle , ReverseFlag  ) ;
}
int __stdcall dx_BltBmpOrGraphImageToGraph( const COLORDATA * BmpColorData , HBITMAP RgbBmp , HBITMAP AlphaBmp , int BmpFlag , const BASEIMAGE * RgbBaseImage , const BASEIMAGE * AlphaBaseImage , int CopyPointX , int CopyPointY , int GrHandle ) 
{
	return BltBmpOrGraphImageToGraph( BmpColorData , RgbBmp , AlphaBmp , BmpFlag , RgbBaseImage , AlphaBaseImage , CopyPointX , CopyPointY , GrHandle  ) ;
}
int __stdcall dx_BltBmpOrGraphImageToGraph2( const COLORDATA * BmpColorData , HBITMAP RgbBmp , HBITMAP AlphaBmp , int BmpFlag , const BASEIMAGE * RgbBaseImage , const BASEIMAGE * AlphaBaseImage , const RECT * SrcRect , int DestX , int DestY , int GrHandle ) 
{
	return BltBmpOrGraphImageToGraph2( BmpColorData , RgbBmp , AlphaBmp , BmpFlag , RgbBaseImage , AlphaBaseImage , SrcRect , DestX , DestY , GrHandle  ) ;
}
int __stdcall dx_BltBmpOrGraphImageToDivGraph( const COLORDATA * BmpColorData , HBITMAP RgbBmp , HBITMAP AlphaBmp , int BmpFlag , const BASEIMAGE * RgbBaseImage , const BASEIMAGE * AlphaBaseImage , int AllNum , int XNum , int YNum , int Width , int Height , const int * GrHandle , int ReverseFlag ) 
{
	return BltBmpOrGraphImageToDivGraph( BmpColorData , RgbBmp , AlphaBmp , BmpFlag , RgbBaseImage , AlphaBaseImage , AllNum , XNum , YNum , Width , Height , GrHandle , ReverseFlag  ) ;
}
int  __stdcall dx_LoadBmpToGraph( const char * FileName, int  TextureFlag, int  ReverseFlag, int  SurfaceMode)
{
	return LoadBmpToGraph( FileName, TextureFlag, ReverseFlag, SurfaceMode);
}
int  __stdcall dx_LoadGraph( const char * FileName, int  NotUse3DFlag)
{
	return LoadGraph( FileName, NotUse3DFlag);
}
int  __stdcall dx_LoadReverseGraph( const char * FileName, int  NotUse3DFlag)
{
	return LoadReverseGraph( FileName, NotUse3DFlag);
}
int  __stdcall dx_LoadDivGraph( const char * FileName, int  AllNum, int  XNum, int  YNum, int  XSize, int  YSize, int *  HandleBuf, int  NotUse3DFlag)
{
	return LoadDivGraph( FileName, AllNum, XNum, YNum, XSize, YSize, HandleBuf, NotUse3DFlag);
}
int  __stdcall dx_LoadDivBmpToGraph( const char * FileName, int  AllNum, int  XNum, int  YNum, int  SizeX, int  SizeY, int *  HandleBuf, int  TextureFlag, int  ReverseFlag)
{
	return LoadDivBmpToGraph( FileName, AllNum, XNum, YNum, SizeX, SizeY, HandleBuf, TextureFlag, ReverseFlag);
}
int  __stdcall dx_LoadReverseDivGraph( const char * FileName, int  AllNum, int  XNum, int  YNum, int  XSize, int  YSize, int *  HandleBuf, int  NotUse3DFlag)
{
	return LoadReverseDivGraph( FileName, AllNum, XNum, YNum, XSize, YSize, HandleBuf, NotUse3DFlag);
}
int  __stdcall dx_LoadBlendGraph( const char * FileName)
{
	return LoadBlendGraph( FileName);
}
int  __stdcall dx_CreateGraphFromMem( const void * RGBFileImage, int  RGBFileImageSize, const void * AlphaFileImage, int  AlphaFileImageSize, int  TextureFlag, int  ReverseFlag)
{
	return CreateGraphFromMem( RGBFileImage, RGBFileImageSize, AlphaFileImage, AlphaFileImageSize, TextureFlag, ReverseFlag);
}
int  __stdcall dx_ReCreateGraphFromMem( const void * RGBFileImage, int  RGBFileImageSize, int  GrHandle, const void * AlphaFileImage, int  AlphaFileImageSize, int  TextureFlag, int  ReverseFlag)
{
	return ReCreateGraphFromMem( RGBFileImage, RGBFileImageSize, GrHandle, AlphaFileImage, AlphaFileImageSize, TextureFlag, ReverseFlag);
}
int  __stdcall dx_CreateDivGraphFromMem( const void * RGBFileImage, int  RGBFileImageSize, int  AllNum, int  XNum, int  YNum, int  SizeX, int  SizeY, int *  HandleBuf, int  TextureFlag, int  ReverseFlag, const void * AlphaFileImage, int  AlphaFileImageSize)
{
	return CreateDivGraphFromMem( RGBFileImage, RGBFileImageSize, AllNum, XNum, YNum, SizeX, SizeY, HandleBuf, TextureFlag, ReverseFlag, AlphaFileImage, AlphaFileImageSize);
}
int  __stdcall dx_ReCreateDivGraphFromMem( const void * RGBFileImage, int  RGBFileImageSize, int  AllNum, int  XNum, int  YNum, int  SizeX, int  SizeY, const int *  HandleBuf, int  TextureFlag, int  ReverseFlag, const void * AlphaFileImage, int  AlphaFileImageSize)
{
	return ReCreateDivGraphFromMem( RGBFileImage, RGBFileImageSize, AllNum, XNum, YNum, SizeX, SizeY, HandleBuf, TextureFlag, ReverseFlag, AlphaFileImage, AlphaFileImageSize);
}
int __stdcall dx_CreateGraphFromBmp( const BITMAPINFO * RGBBmpInfo , const void * RGBBmpImage , const BITMAPINFO * AlphaBmpInfo , const void * AlphaBmpImage , int TextureFlag , int ReverseFlag ) 
{
	return CreateGraphFromBmp( RGBBmpInfo , RGBBmpImage , AlphaBmpInfo , AlphaBmpImage , TextureFlag , ReverseFlag  ) ;
}
int __stdcall dx_ReCreateGraphFromBmp( const BITMAPINFO * RGBBmpInfo , const void * RGBBmpImage , int GrHandle , const BITMAPINFO * AlphaBmpInfo , const void * AlphaBmpImage , int TextureFlag , int ReverseFlag ) 
{
	return ReCreateGraphFromBmp( RGBBmpInfo , RGBBmpImage , GrHandle , AlphaBmpInfo , AlphaBmpImage , TextureFlag , ReverseFlag  ) ;
}
int __stdcall dx_CreateDivGraphFromBmp( const BITMAPINFO * RGBBmpInfo , const void * RGBBmpImage , int AllNum , int XNum , int YNum , int SizeX , int SizeY , int * HandleBuf , int TextureFlag , int ReverseFlag , const BITMAPINFO * AlphaBmpInfo , const void * AlphaBmpImage ) 
{
	return CreateDivGraphFromBmp( RGBBmpInfo , RGBBmpImage , AllNum , XNum , YNum , SizeX , SizeY , HandleBuf , TextureFlag , ReverseFlag , AlphaBmpInfo , AlphaBmpImage  ) ;
}
int __stdcall dx_ReCreateDivGraphFromBmp( const BITMAPINFO * RGBBmpInfo , const void * RGBBmpImage , int AllNum , int XNum , int YNum , int SizeX , int SizeY , const int * HandleBuf , int TextureFlag , int ReverseFlag , const BITMAPINFO * AlphaBmpInfo , const void * AlphaBmpImage ) 
{
	return ReCreateDivGraphFromBmp( RGBBmpInfo , RGBBmpImage , AllNum , XNum , YNum , SizeX , SizeY , HandleBuf , TextureFlag , ReverseFlag , AlphaBmpInfo , AlphaBmpImage  ) ;
}
int __stdcall dx_CreateDXGraph( const BASEIMAGE * RgbBaseImage , const BASEIMAGE * AlphaBaseImage , int TextureFlag ) 
{
	return CreateDXGraph( RgbBaseImage , AlphaBaseImage , TextureFlag  ) ;
}
int __stdcall dx_CreateGraphFromGraphImage( const BASEIMAGE * RgbBaseImage , int TextureFlag , int ReverseFlag ) 
{
	return CreateGraphFromGraphImage( RgbBaseImage , TextureFlag , ReverseFlag  ) ;
}
int __stdcall dx_CreateGraphFromGraphImage_2( const BASEIMAGE * RgbBaseImage , const BASEIMAGE * AlphaBaseImage , int TextureFlag , int ReverseFlag ) 
{
	return CreateGraphFromGraphImage( RgbBaseImage , AlphaBaseImage , TextureFlag , ReverseFlag  ) ;
}
int __stdcall dx_ReCreateGraphFromGraphImage( const BASEIMAGE * RgbBaseImage , int GrHandle , int TextureFlag , int ReverseFlag ) 
{
	return ReCreateGraphFromGraphImage( RgbBaseImage , GrHandle , TextureFlag , ReverseFlag  ) ;
}
int __stdcall dx_ReCreateGraphFromGraphImage_2( const BASEIMAGE * RgbBaseImage , const BASEIMAGE * AlphaBaseImage , int GrHandle , int TextureFlag , int ReverseFlag ) 
{
	return ReCreateGraphFromGraphImage( RgbBaseImage , AlphaBaseImage , GrHandle , TextureFlag , ReverseFlag  ) ;
}
int __stdcall dx_CreateDivGraphFromGraphImage( BASEIMAGE * RgbBaseImage , int AllNum , int XNum , int YNum , int SizeX , int SizeY , int * HandleBuf , int TextureFlag , int ReverseFlag ) 
{
	return CreateDivGraphFromGraphImage( RgbBaseImage , AllNum , XNum , YNum , SizeX , SizeY , HandleBuf , TextureFlag , ReverseFlag  ) ;
}
int __stdcall dx_CreateDivGraphFromGraphImage_2( BASEIMAGE * RgbBaseImage , const BASEIMAGE * AlphaBaseImage , int AllNum , int XNum , int YNum , int SizeX , int SizeY , int * HandleBuf , int TextureFlag , int ReverseFlag ) 
{
	return CreateDivGraphFromGraphImage( RgbBaseImage , AlphaBaseImage , AllNum , XNum , YNum , SizeX , SizeY , HandleBuf , TextureFlag , ReverseFlag  ) ;
}
int __stdcall dx_ReCreateDivGraphFromGraphImage( BASEIMAGE * RgbBaseImage , int AllNum , int XNum , int YNum , int SizeX , int SizeY , const int * HandleBuf , int TextureFlag , int ReverseFlag ) 
{
	return ReCreateDivGraphFromGraphImage( RgbBaseImage , AllNum , XNum , YNum , SizeX , SizeY , HandleBuf , TextureFlag , ReverseFlag  ) ;
}
int __stdcall dx_ReCreateDivGraphFromGraphImage_2( BASEIMAGE * RgbBaseImage , const BASEIMAGE * AlphaBaseImage , int AllNum , int XNum , int YNum , int SizeX , int SizeY , const int * HandleBuf , int TextureFlag , int ReverseFlag ) 
{
	return ReCreateDivGraphFromGraphImage( RgbBaseImage , AlphaBaseImage , AllNum , XNum , YNum , SizeX , SizeY , HandleBuf , TextureFlag , ReverseFlag  ) ;
}
int  __stdcall dx_CreateGraph( int  Width, int  Height, int  Pitch, const void * RGBImage, const void * AlphaImage, int  GrHandle)
{
	return CreateGraph( Width, Height, Pitch, RGBImage, AlphaImage, GrHandle);
}
int  __stdcall dx_CreateDivGraph( int  Width, int  Height, int  Pitch, const void * RGBImage, int  AllNum, int  XNum, int  YNum, int  SizeX, int  SizeY, int *  HandleBuf, const void * AlphaImage)
{
	return CreateDivGraph( Width, Height, Pitch, RGBImage, AllNum, XNum, YNum, SizeX, SizeY, HandleBuf, AlphaImage);
}
int  __stdcall dx_ReCreateGraph( int  Width, int  Height, int  Pitch, const void * RGBImage, int  GrHandle, const void * AlphaImage)
{
	return ReCreateGraph( Width, Height, Pitch, RGBImage, GrHandle, AlphaImage);
}
int  __stdcall dx_CreateBlendGraphFromSoftImage( int  SIHandle)
{
	return CreateBlendGraphFromSoftImage( SIHandle);
}
int  __stdcall dx_CreateGraphFromSoftImage( int  SIHandle)
{
	return CreateGraphFromSoftImage( SIHandle);
}
int  __stdcall dx_CreateGraphFromRectSoftImage( int  SIHandle, int  x, int  y, int  SizeX, int  SizeY)
{
	return CreateGraphFromRectSoftImage( SIHandle, x, y, SizeX, SizeY);
}
int  __stdcall dx_ReCreateGraphFromSoftImage( int  SIHandle, int  GrHandle)
{
	return ReCreateGraphFromSoftImage( SIHandle, GrHandle);
}
int  __stdcall dx_ReCreateGraphFromRectSoftImage( int  SIHandle, int  x, int  y, int  SizeX, int  SizeY, int  GrHandle)
{
	return ReCreateGraphFromRectSoftImage( SIHandle, x, y, SizeX, SizeY, GrHandle);
}
int  __stdcall dx_CreateDivGraphFromSoftImage( int  SIHandle, int  AllNum, int  XNum, int  YNum, int  SizeX, int  SizeY, int *  HandleBuf)
{
	return CreateDivGraphFromSoftImage( SIHandle, AllNum, XNum, YNum, SizeX, SizeY, HandleBuf);
}
int __stdcall dx_CreateGraphFromBaseImage( const BASEIMAGE * BaseImage ) 
{
	return CreateGraphFromBaseImage( BaseImage  ) ;
}
int __stdcall dx_CreateGraphFromRectBaseImage( const BASEIMAGE * BaseImage , int x , int y , int SizeX , int SizeY ) 
{
	return CreateGraphFromRectBaseImage( BaseImage , x , y , SizeX , SizeY  ) ;
}
int __stdcall dx_ReCreateGraphFromBaseImage( const BASEIMAGE * BaseImage , int GrHandle ) 
{
	return ReCreateGraphFromBaseImage( BaseImage , GrHandle  ) ;
}
int __stdcall dx_ReCreateGraphFromRectBaseImage( const BASEIMAGE * BaseImage , int x , int y , int SizeX , int SizeY , int GrHandle ) 
{
	return ReCreateGraphFromRectBaseImage( BaseImage , x , y , SizeX , SizeY , GrHandle  ) ;
}
int __stdcall dx_CreateDivGraphFromBaseImage( BASEIMAGE * BaseImage , int AllNum , int XNum , int YNum , int SizeX , int SizeY , int * HandleBuf ) 
{
	return CreateDivGraphFromBaseImage( BaseImage , AllNum , XNum , YNum , SizeX , SizeY , HandleBuf  ) ;
}
int  __stdcall dx_ReloadGraph( const char * FileName, int  GrHandle, int  ReverseFlag)
{
	return ReloadGraph( FileName, GrHandle, ReverseFlag);
}
int  __stdcall dx_ReloadDivGraph( const char * FileName, int  AllNum, int  XNum, int  YNum, int  XSize, int  YSize, const int *  HandleBuf, int  ReverseFlag)
{
	return ReloadDivGraph( FileName, AllNum, XNum, YNum, XSize, YSize, HandleBuf, ReverseFlag);
}
int  __stdcall dx_ReloadReverseGraph( const char * FileName, int  GrHandle)
{
	return ReloadReverseGraph( FileName, GrHandle);
}
int  __stdcall dx_ReloadReverseDivGraph( const char * FileName, int  AllNum, int  XNum, int  YNum, int  XSize, int  YSize, const int *  HandleBuf)
{
	return ReloadReverseDivGraph( FileName, AllNum, XNum, YNum, XSize, YSize, HandleBuf);
}
int  __stdcall dx_SetGraphColorBitDepth( int  ColorBitDepth)
{
	return SetGraphColorBitDepth( ColorBitDepth);
}
int  __stdcall dx_GetGraphColorBitDepth( void)
{
	return GetGraphColorBitDepth( );
}
int  __stdcall dx_SetCreateGraphColorBitDepth( int  BitDepth)
{
	return SetCreateGraphColorBitDepth( BitDepth);
}
int  __stdcall dx_GetCreateGraphColorBitDepth( void)
{
	return GetCreateGraphColorBitDepth( );
}
int  __stdcall dx_SetCreateGraphChannelBitDepth( int  BitDepth)
{
	return SetCreateGraphChannelBitDepth( BitDepth);
}
int  __stdcall dx_GetCreateGraphChannelBitDepth( void)
{
	return GetCreateGraphChannelBitDepth( );
}
int  __stdcall dx_SetDrawValidGraphCreateFlag( int  Flag)
{
	return SetDrawValidGraphCreateFlag( Flag);
}
int  __stdcall dx_GetDrawValidGraphCreateFlag( void)
{
	return GetDrawValidGraphCreateFlag( );
}
int  __stdcall dx_SetDrawValidFlagOf3DGraph( int  Flag)
{
	return SetDrawValidFlagOf3DGraph( Flag);
}
int  __stdcall dx_SetLeftUpColorIsTransColorFlag( int  Flag)
{
	return SetLeftUpColorIsTransColorFlag( Flag);
}
int  __stdcall dx_SetUseBlendGraphCreateFlag( int  Flag)
{
	return SetUseBlendGraphCreateFlag( Flag);
}
int  __stdcall dx_GetUseBlendGraphCreateFlag( void)
{
	return GetUseBlendGraphCreateFlag( );
}
int  __stdcall dx_SetUseAlphaTestGraphCreateFlag( int  Flag)
{
	return SetUseAlphaTestGraphCreateFlag( Flag);
}
int  __stdcall dx_GetUseAlphaTestGraphCreateFlag( void)
{
	return GetUseAlphaTestGraphCreateFlag( );
}
int  __stdcall dx_SetUseAlphaTestFlag( int  Flag)
{
	return SetUseAlphaTestFlag( Flag);
}
int  __stdcall dx_GetUseAlphaTestFlag( void)
{
	return GetUseAlphaTestFlag( );
}
int  __stdcall dx_SetCubeMapTextureCreateFlag( int  Flag)
{
	return SetCubeMapTextureCreateFlag( Flag);
}
int  __stdcall dx_GetCubeMapTextureCreateFlag( void)
{
	return GetCubeMapTextureCreateFlag( );
}
int  __stdcall dx_SetUseNoBlendModeParam( int  Flag)
{
	return SetUseNoBlendModeParam( Flag);
}
int  __stdcall dx_SetDrawValidAlphaChannelGraphCreateFlag( int  Flag)
{
	return SetDrawValidAlphaChannelGraphCreateFlag( Flag);
}
int  __stdcall dx_GetDrawValidAlphaChannelGraphCreateFlag( void)
{
	return GetDrawValidAlphaChannelGraphCreateFlag( );
}
int  __stdcall dx_SetDrawValidFloatTypeGraphCreateFlag( int  Flag)
{
	return SetDrawValidFloatTypeGraphCreateFlag( Flag);
}
int  __stdcall dx_GetDrawValidFloatTypeGraphCreateFlag( void)
{
	return GetDrawValidFloatTypeGraphCreateFlag( );
}
int  __stdcall dx_SetDrawValidGraphCreateZBufferFlag( int  Flag)
{
	return SetDrawValidGraphCreateZBufferFlag( Flag);
}
int  __stdcall dx_GetDrawValidGraphCreateZBufferFlag( void)
{
	return GetDrawValidGraphCreateZBufferFlag( );
}
int  __stdcall dx_SetCreateDrawValidGraphZBufferBitDepth( int  BitDepth)
{
	return SetCreateDrawValidGraphZBufferBitDepth( BitDepth);
}
int  __stdcall dx_GetCreateDrawValidGraphZBufferBitDepth( void)
{
	return GetCreateDrawValidGraphZBufferBitDepth( );
}
int  __stdcall dx_SetCreateDrawValidGraphChannelNum( int  ChannelNum)
{
	return SetCreateDrawValidGraphChannelNum( ChannelNum);
}
int  __stdcall dx_GetCreateDrawValidGraphChannelNum( void)
{
	return GetCreateDrawValidGraphChannelNum( );
}
int  __stdcall dx_SetCreateDrawValidGraphMultiSample( int  Samples, int  Quality)
{
	return SetCreateDrawValidGraphMultiSample( Samples, Quality);
}
int  __stdcall dx_SetDrawValidMultiSample( int  Samples, int  Quality)
{
	return SetDrawValidMultiSample( Samples, Quality);
}
int  __stdcall dx_GetMultiSampleQuality( int  Samples)
{
	return GetMultiSampleQuality( Samples);
}
int  __stdcall dx_SetUseTransColor( int  Flag)
{
	return SetUseTransColor( Flag);
}
int  __stdcall dx_SetUseTransColorGraphCreateFlag( int  Flag)
{
	return SetUseTransColorGraphCreateFlag( Flag);
}
int  __stdcall dx_SetUseGraphAlphaChannel( int  Flag)
{
	return SetUseGraphAlphaChannel( Flag);
}
int  __stdcall dx_GetUseGraphAlphaChannel( void)
{
	return GetUseGraphAlphaChannel( );
}
int  __stdcall dx_SetUseAlphaChannelGraphCreateFlag( int  Flag)
{
	return SetUseAlphaChannelGraphCreateFlag( Flag);
}
int  __stdcall dx_GetUseAlphaChannelGraphCreateFlag( void)
{
	return GetUseAlphaChannelGraphCreateFlag( );
}
int  __stdcall dx_SetUseNotManageTextureFlag( int  Flag)
{
	return SetUseNotManageTextureFlag( Flag);
}
int  __stdcall dx_GetUseNotManageTextureFlag( void)
{
	return GetUseNotManageTextureFlag( );
}
int  __stdcall dx_SetUsePlatformTextureFormat( int  PlatformTextureFormat)
{
	return SetUsePlatformTextureFormat( PlatformTextureFormat);
}
int  __stdcall dx_GetUsePlatformTextureFormat( void)
{
	return GetUsePlatformTextureFormat( );
}
int  __stdcall dx_SetTransColor( int  Red, int  Green, int  Blue)
{
	return SetTransColor( Red, Green, Blue);
}
int  __stdcall dx_GetTransColor( int *  Red, int *  Green, int *  Blue)
{
	return GetTransColor( Red, Green, Blue);
}
int  __stdcall dx_SetUseDivGraphFlag( int  Flag)
{
	return SetUseDivGraphFlag( Flag);
}
int  __stdcall dx_SetUseAlphaImageLoadFlag( int  Flag)
{
	return SetUseAlphaImageLoadFlag( Flag);
}
int  __stdcall dx_SetUseMaxTextureSize( int  Size)
{
	return SetUseMaxTextureSize( Size);
}
int  __stdcall dx_SetUseGraphBaseDataBackup( int  Flag)
{
	return SetUseGraphBaseDataBackup( Flag);
}
int  __stdcall dx_GetUseGraphBaseDataBackup( void)
{
	return GetUseGraphBaseDataBackup( );
}
int  __stdcall dx_SetUseSystemMemGraphCreateFlag( int  Flag)
{
	return SetUseSystemMemGraphCreateFlag( Flag);
}
int  __stdcall dx_GetUseSystemMemGraphCreateFlag( void)
{
	return GetUseSystemMemGraphCreateFlag( );
}
const unsigned int * __stdcall dx_GetFullColorImage( int GrHandle ) 
{
	return GetFullColorImage( GrHandle  ) ;
}
int __stdcall dx_GraphLock( int GrHandle , int * PitchBuf , void * * DataPointBuf , COLORDATA * * ColorDataPP , int WriteOnly ) 
{
	return GraphLock( GrHandle , PitchBuf , DataPointBuf , ColorDataPP , WriteOnly  ) ;
}
int  __stdcall dx_GraphUnLock( int  GrHandle)
{
	return GraphUnLock( GrHandle);
}
int  __stdcall dx_SetUseGraphZBuffer( int  GrHandle, int  UseFlag, int  BitDepth)
{
	return SetUseGraphZBuffer( GrHandle, UseFlag, BitDepth);
}
int  __stdcall dx_CopyGraphZBufferImage( int  DestGrHandle, int  SrcGrHandle)
{
	return CopyGraphZBufferImage( DestGrHandle, SrcGrHandle);
}
int  __stdcall dx_SetDeviceLostDeleteGraphFlag( int  GrHandle, int  DeleteFlag)
{
	return SetDeviceLostDeleteGraphFlag( GrHandle, DeleteFlag);
}
int  __stdcall dx_GetGraphSize( int  GrHandle, int *  SizeXBuf, int *  SizeYBuf)
{
	return GetGraphSize( GrHandle, SizeXBuf, SizeYBuf);
}
int  __stdcall dx_GetGraphTextureSize( int  GrHandle, int *  SizeXBuf, int *  SizeYBuf)
{
	return GetGraphTextureSize( GrHandle, SizeXBuf, SizeYBuf);
}
int  __stdcall dx_GetGraphMipmapCount( int  GrHandle)
{
	return GetGraphMipmapCount( GrHandle);
}
int  __stdcall dx_GetGraphFilePath( int  GrHandle, TCHAR *  FilePathBuffer)
{
	return GetGraphFilePath( GrHandle, FilePathBuffer);
}
const COLORDATA * __stdcall dx_GetTexColorData( int AlphaCh , int AlphaTest , int ColorBitDepth , int DrawValid ) 
{
	return GetTexColorData( AlphaCh , AlphaTest , ColorBitDepth , DrawValid  ) ;
}
const COLORDATA * __stdcall dx_GetTexColorData_2( const IMAGEFORMATDESC * Format ) 
{
	return GetTexColorData( Format  ) ;
}
const COLORDATA * __stdcall dx_GetTexColorData_3( int FormatIndex ) 
{
	return GetTexColorData( FormatIndex  ) ;
}
int  __stdcall dx_GetMaxGraphTextureSize( int *  SizeX, int *  SizeY)
{
	return GetMaxGraphTextureSize( SizeX, SizeY);
}
int  __stdcall dx_GetValidRestoreShredPoint( void)
{
	return GetValidRestoreShredPoint( );
}
int  __stdcall dx_GetCreateGraphColorData( COLORDATA *  ColorData, IMAGEFORMATDESC *  Format)
{
	return GetCreateGraphColorData( ColorData, Format);
}
int  __stdcall dx_GetGraphPalette( int  GrHandle, int  ColorIndex, int *  Red, int *  Green, int *  Blue)
{
	return GetGraphPalette( GrHandle, ColorIndex, Red, Green, Blue);
}
int  __stdcall dx_GetGraphOriginalPalette( int  GrHandle, int  ColorIndex, int *  Red, int *  Green, int *  Blue)
{
	return GetGraphOriginalPalette( GrHandle, ColorIndex, Red, Green, Blue);
}
int  __stdcall dx_SetGraphPalette( int  GrHandle, int  ColorIndex, unsigned int  Color)
{
	return SetGraphPalette( GrHandle, ColorIndex, Color);
}
int  __stdcall dx_ResetGraphPalette( int  GrHandle)
{
	return ResetGraphPalette( GrHandle);
}
int  __stdcall dx_DrawLine( int  x1, int  y1, int  x2, int  y2, unsigned int  Color, int  Thickness)
{
	return DrawLine( x1, y1, x2, y2, Color, Thickness);
}
int  __stdcall dx_DrawBox( int  x1, int  y1, int  x2, int  y2, unsigned int  Color, int  FillFlag)
{
	return DrawBox( x1, y1, x2, y2, Color, FillFlag);
}
int  __stdcall dx_DrawFillBox( int  x1, int  y1, int  x2, int  y2, unsigned int  Color)
{
	return DrawFillBox( x1, y1, x2, y2, Color);
}
int  __stdcall dx_DrawLineBox( int  x1, int  y1, int  x2, int  y2, unsigned int  Color)
{
	return DrawLineBox( x1, y1, x2, y2, Color);
}
int  __stdcall dx_DrawCircle( int  x, int  y, int  r, unsigned int  Color, int  FillFlag, int  LineThickness)
{
	return DrawCircle( x, y, r, Color, FillFlag, LineThickness);
}
int  __stdcall dx_DrawOval( int  x, int  y, int  rx, int  ry, unsigned int  Color, int  FillFlag, int  LineThickness)
{
	return DrawOval( x, y, rx, ry, Color, FillFlag, LineThickness);
}
int  __stdcall dx_DrawTriangle( int  x1, int  y1, int  x2, int  y2, int  x3, int  y3, unsigned int  Color, int  FillFlag)
{
	return DrawTriangle( x1, y1, x2, y2, x3, y3, Color, FillFlag);
}
int  __stdcall dx_DrawQuadrangle( int  x1, int  y1, int  x2, int  y2, int  x3, int  y3, int  x4, int  y4, unsigned int  Color, int  FillFlag)
{
	return DrawQuadrangle( x1, y1, x2, y2, x3, y3, x4, y4, Color, FillFlag);
}
int  __stdcall dx_DrawRoundRect( int  x1, int  y1, int  x2, int  y2, int  rx, int  ry, unsigned int  Color, int  FillFlag)
{
	return DrawRoundRect( x1, y1, x2, y2, rx, ry, Color, FillFlag);
}
int  __stdcall dx_DrawPixel( int  x, int  y, unsigned int  Color)
{
	return DrawPixel( x, y, Color);
}
int  __stdcall dx_DrawPixelSet( const POINTDATA *  PointData, int  Num)
{
	return DrawPixelSet( PointData, Num);
}
int  __stdcall dx_DrawLineSet( const LINEDATA *  LineData, int  Num)
{
	return DrawLineSet( LineData, Num);
}
int  __stdcall dx_DrawPixel3D( VECTOR  Pos, unsigned int  Color)
{
	return DrawPixel3D( Pos, Color);
}
int  __stdcall dx_DrawPixel3DD( VECTOR_D  Pos, unsigned int  Color)
{
	return DrawPixel3DD( Pos, Color);
}
int  __stdcall dx_DrawLine3D( VECTOR  Pos1, VECTOR  Pos2, unsigned int  Color)
{
	return DrawLine3D( Pos1, Pos2, Color);
}
int  __stdcall dx_DrawLine3DD( VECTOR_D  Pos1, VECTOR_D  Pos2, unsigned int  Color)
{
	return DrawLine3DD( Pos1, Pos2, Color);
}
int  __stdcall dx_DrawTriangle3D( VECTOR  Pos1, VECTOR  Pos2, VECTOR  Pos3, unsigned int  Color, int  FillFlag)
{
	return DrawTriangle3D( Pos1, Pos2, Pos3, Color, FillFlag);
}
int  __stdcall dx_DrawTriangle3DD( VECTOR_D  Pos1, VECTOR_D  Pos2, VECTOR_D  Pos3, unsigned int  Color, int  FillFlag)
{
	return DrawTriangle3DD( Pos1, Pos2, Pos3, Color, FillFlag);
}
int  __stdcall dx_DrawCube3D( VECTOR  Pos1, VECTOR  Pos2, unsigned int  DifColor, unsigned int  SpcColor, int  FillFlag)
{
	return DrawCube3D( Pos1, Pos2, DifColor, SpcColor, FillFlag);
}
int  __stdcall dx_DrawCube3DD( VECTOR_D  Pos1, VECTOR_D  Pos2, unsigned int  DifColor, unsigned int  SpcColor, int  FillFlag)
{
	return DrawCube3DD( Pos1, Pos2, DifColor, SpcColor, FillFlag);
}
int  __stdcall dx_DrawSphere3D( VECTOR  CenterPos, float  r, int  DivNum, unsigned int  DifColor, unsigned int  SpcColor, int  FillFlag)
{
	return DrawSphere3D( CenterPos, r, DivNum, DifColor, SpcColor, FillFlag);
}
int  __stdcall dx_DrawSphere3DD( VECTOR_D  CenterPos, double  r, int  DivNum, unsigned int  DifColor, unsigned int  SpcColor, int  FillFlag)
{
	return DrawSphere3DD( CenterPos, r, DivNum, DifColor, SpcColor, FillFlag);
}
int  __stdcall dx_DrawCapsule3D( VECTOR  Pos1, VECTOR  Pos2, float  r, int  DivNum, unsigned int  DifColor, unsigned int  SpcColor, int  FillFlag)
{
	return DrawCapsule3D( Pos1, Pos2, r, DivNum, DifColor, SpcColor, FillFlag);
}
int  __stdcall dx_DrawCapsule3DD( VECTOR_D  Pos1, VECTOR_D  Pos2, double  r, int  DivNum, unsigned int  DifColor, unsigned int  SpcColor, int  FillFlag)
{
	return DrawCapsule3DD( Pos1, Pos2, r, DivNum, DifColor, SpcColor, FillFlag);
}
int  __stdcall dx_DrawCone3D( VECTOR  TopPos, VECTOR  BottomPos, float  r, int  DivNum, unsigned int  DifColor, unsigned int  SpcColor, int  FillFlag)
{
	return DrawCone3D( TopPos, BottomPos, r, DivNum, DifColor, SpcColor, FillFlag);
}
int  __stdcall dx_DrawCone3DD( VECTOR_D  TopPos, VECTOR_D  BottomPos, double  r, int  DivNum, unsigned int  DifColor, unsigned int  SpcColor, int  FillFlag)
{
	return DrawCone3DD( TopPos, BottomPos, r, DivNum, DifColor, SpcColor, FillFlag);
}
int  __stdcall dx_LoadGraphScreen( int  x, int  y, const char * GraphName, int  TransFlag)
{
	return LoadGraphScreen( x, y, GraphName, TransFlag);
}
int  __stdcall dx_DrawGraph( int  x, int  y, int  GrHandle, int  TransFlag)
{
	return DrawGraph( x, y, GrHandle, TransFlag);
}
int  __stdcall dx_DrawExtendGraph( int  x1, int  y1, int  x2, int  y2, int  GrHandle, int  TransFlag)
{
	return DrawExtendGraph( x1, y1, x2, y2, GrHandle, TransFlag);
}
int  __stdcall dx_DrawRotaGraph( int  x, int  y, double  ExRate, double  Angle, int  GrHandle, int  TransFlag, int  TurnFlag)
{
	return DrawRotaGraph( x, y, ExRate, Angle, GrHandle, TransFlag, TurnFlag);
}
int  __stdcall dx_DrawRotaGraph2( int  x, int  y, int  cx, int  cy, double  ExtRate, double  Angle, int  GrHandle, int  TransFlag, int  TurnFlag)
{
	return DrawRotaGraph2( x, y, cx, cy, ExtRate, Angle, GrHandle, TransFlag, TurnFlag);
}
int  __stdcall dx_DrawRotaGraph3( int  x, int  y, int  cx, int  cy, double  ExtRateX, double  ExtRateY, double  Angle, int  GrHandle, int  TransFlag, int  TurnFlag)
{
	return DrawRotaGraph3( x, y, cx, cy, ExtRateX, ExtRateY, Angle, GrHandle, TransFlag, TurnFlag);
}
int  __stdcall dx_DrawRotaGraphFast( int  x, int  y, float  ExRate, float  Angle, int  GrHandle, int  TransFlag, int  TurnFlag)
{
	return DrawRotaGraphFast( x, y, ExRate, Angle, GrHandle, TransFlag, TurnFlag);
}
int  __stdcall dx_DrawRotaGraphFast2( int  x, int  y, int  cx, int  cy, float  ExtRate, float  Angle, int  GrHandle, int  TransFlag, int  TurnFlag)
{
	return DrawRotaGraphFast2( x, y, cx, cy, ExtRate, Angle, GrHandle, TransFlag, TurnFlag);
}
int  __stdcall dx_DrawRotaGraphFast3( int  x, int  y, int  cx, int  cy, float  ExtRateX, float  ExtRateY, float  Angle, int  GrHandle, int  TransFlag, int  TurnFlag)
{
	return DrawRotaGraphFast3( x, y, cx, cy, ExtRateX, ExtRateY, Angle, GrHandle, TransFlag, TurnFlag);
}
int  __stdcall dx_DrawModiGraph( int  x1, int  y1, int  x2, int  y2, int  x3, int  y3, int  x4, int  y4, int  GrHandle, int  TransFlag)
{
	return DrawModiGraph( x1, y1, x2, y2, x3, y3, x4, y4, GrHandle, TransFlag);
}
int  __stdcall dx_DrawTurnGraph( int  x, int  y, int  GrHandle, int  TransFlag)
{
	return DrawTurnGraph( x, y, GrHandle, TransFlag);
}
int  __stdcall dx_DrawGraphF( float  xf, float  yf, int  GrHandle, int  TransFlag)
{
	return DrawGraphF( xf, yf, GrHandle, TransFlag);
}
int  __stdcall dx_DrawExtendGraphF( float  x1f, float  y1f, float  x2f, float  y2, int  GrHandle, int  TransFlag)
{
	return DrawExtendGraphF( x1f, y1f, x2f, y2, GrHandle, TransFlag);
}
int  __stdcall dx_DrawRotaGraphF( float  xf, float  yf, double  ExRate, double  Angle, int  GrHandle, int  TransFlag, int  TurnFlag)
{
	return DrawRotaGraphF( xf, yf, ExRate, Angle, GrHandle, TransFlag, TurnFlag);
}
int  __stdcall dx_DrawRotaGraph2F( float  xf, float  yf, float  cxf, float  cyf, double  ExtRate, double  Angle, int  GrHandle, int  TransFlag, int  TurnFlag)
{
	return DrawRotaGraph2F( xf, yf, cxf, cyf, ExtRate, Angle, GrHandle, TransFlag, TurnFlag);
}
int  __stdcall dx_DrawRotaGraph3F( float  xf, float  yf, float  cxf, float  cyf, double  ExtRateX, double  ExtRateY, double  Angle, int  GrHandle, int  TransFlag, int  TurnFlag)
{
	return DrawRotaGraph3F( xf, yf, cxf, cyf, ExtRateX, ExtRateY, Angle, GrHandle, TransFlag, TurnFlag);
}
int  __stdcall dx_DrawRotaGraphFastF( float  xf, float  yf, float  ExRate, float  Angle, int  GrHandle, int  TransFlag, int  TurnFlag)
{
	return DrawRotaGraphFastF( xf, yf, ExRate, Angle, GrHandle, TransFlag, TurnFlag);
}
int  __stdcall dx_DrawRotaGraphFast2F( float  xf, float  yf, float  cxf, float  cyf, float  ExtRate, float  Angle, int  GrHandle, int  TransFlag, int  TurnFlag)
{
	return DrawRotaGraphFast2F( xf, yf, cxf, cyf, ExtRate, Angle, GrHandle, TransFlag, TurnFlag);
}
int  __stdcall dx_DrawRotaGraphFast3F( float  xf, float  yf, float  cxf, float  cyf, float  ExtRateX, float  ExtRateY, float  Angle, int  GrHandle, int  TransFlag, int  TurnFlag)
{
	return DrawRotaGraphFast3F( xf, yf, cxf, cyf, ExtRateX, ExtRateY, Angle, GrHandle, TransFlag, TurnFlag);
}
int  __stdcall dx_DrawModiGraphF( float  x1, float  y1, float  x2, float  y2, float  x3, float  y3, float  x4, float  y4, int  GrHandle, int  TransFlag)
{
	return DrawModiGraphF( x1, y1, x2, y2, x3, y3, x4, y4, GrHandle, TransFlag);
}
int  __stdcall dx_DrawTurnGraphF( float  xf, float  yf, int  GrHandle, int  TransFlag)
{
	return DrawTurnGraphF( xf, yf, GrHandle, TransFlag);
}
int __stdcall dx_DrawChipMap( int Sx , int Sy , int XNum , int YNum , const int * MapData , int ChipTypeNum , int MapDataPitch , const int * ChipGrHandle , int TransFlag ) 
{
	return DrawChipMap( Sx , Sy , XNum , YNum , MapData , ChipTypeNum , MapDataPitch , ChipGrHandle , TransFlag  ) ;
}
int __stdcall dx_DrawChipMap_2( int MapWidth , int MapHeight , const int * MapData , int ChipTypeNum , const int * ChipGrHandle , int TransFlag , int MapDrawPointX , int MapDrawPointY , int MapDrawWidth , int MapDrawHeight , int ScreenX , int ScreenY ) 
{
	return DrawChipMap( MapWidth , MapHeight , MapData , ChipTypeNum , ChipGrHandle , TransFlag , MapDrawPointX , MapDrawPointY , MapDrawWidth , MapDrawHeight , ScreenX , ScreenY  ) ;
}
int  __stdcall dx_DrawTile( int  x1, int  y1, int  x2, int  y2, int  Tx, int  Ty, double  ExtRate, double  Angle, int  GrHandle, int  TransFlag)
{
	return DrawTile( x1, y1, x2, y2, Tx, Ty, ExtRate, Angle, GrHandle, TransFlag);
}
int  __stdcall dx_DrawRectGraph( int  DestX, int  DestY, int  SrcX, int  SrcY, int  Width, int  Height, int  GraphHandle, int  TransFlag, int  TurnFlag)
{
	return DrawRectGraph( DestX, DestY, SrcX, SrcY, Width, Height, GraphHandle, TransFlag, TurnFlag);
}
int  __stdcall dx_DrawRectExtendGraph( int  DestX1, int  DestY1, int  DestX2, int  DestY2, int  SrcX, int  SrcY, int  SrcWidth, int  SrcHeight, int  GraphHandle, int  TransFlag)
{
	return DrawRectExtendGraph( DestX1, DestY1, DestX2, DestY2, SrcX, SrcY, SrcWidth, SrcHeight, GraphHandle, TransFlag);
}
int  __stdcall dx_DrawRectRotaGraph( int  x, int  y, int  SrcX, int  SrcY, int  Width, int  Height, double  ExtRate, double  Angle, int  GraphHandle, int  TransFlag, int  TurnFlag)
{
	return DrawRectRotaGraph( x, y, SrcX, SrcY, Width, Height, ExtRate, Angle, GraphHandle, TransFlag, TurnFlag);
}
int  __stdcall dx_DrawRectRotaGraph2( int  x, int  y, int  SrcX, int  SrcY, int  Width, int  Height, int  cx, int  cy, double  ExtRate, double  Angle, int  GraphHandle, int  TransFlag, int  TurnFlag)
{
	return DrawRectRotaGraph2( x, y, SrcX, SrcY, Width, Height, cx, cy, ExtRate, Angle, GraphHandle, TransFlag, TurnFlag);
}
int  __stdcall dx_DrawRectRotaGraph3( int  x, int  y, int  SrcX, int  SrcY, int  Width, int  Height, int  cx, int  cy, double  ExtRateX, double  ExtRateY, double  Angle, int  GraphHandle, int  TransFlag, int  TurnFlag)
{
	return DrawRectRotaGraph3( x, y, SrcX, SrcY, Width, Height, cx, cy, ExtRateX, ExtRateY, Angle, GraphHandle, TransFlag, TurnFlag);
}
int  __stdcall dx_DrawRectRotaGraphFast( int  x, int  y, int  SrcX, int  SrcY, int  Width, int  Height, float  ExtRate, float  Angle, int  GraphHandle, int  TransFlag, int  TurnFlag)
{
	return DrawRectRotaGraphFast( x, y, SrcX, SrcY, Width, Height, ExtRate, Angle, GraphHandle, TransFlag, TurnFlag);
}
int  __stdcall dx_DrawRectRotaGraphFast2( int  x, int  y, int  SrcX, int  SrcY, int  Width, int  Height, int  cx, int  cy, float  ExtRate, float  Angle, int  GraphHandle, int  TransFlag, int  TurnFlag)
{
	return DrawRectRotaGraphFast2( x, y, SrcX, SrcY, Width, Height, cx, cy, ExtRate, Angle, GraphHandle, TransFlag, TurnFlag);
}
int  __stdcall dx_DrawRectRotaGraphFast3( int  x, int  y, int  SrcX, int  SrcY, int  Width, int  Height, int  cx, int  cy, float  ExtRateX, float  ExtRateY, float  Angle, int  GraphHandle, int  TransFlag, int  TurnFlag)
{
	return DrawRectRotaGraphFast3( x, y, SrcX, SrcY, Width, Height, cx, cy, ExtRateX, ExtRateY, Angle, GraphHandle, TransFlag, TurnFlag);
}
int  __stdcall dx_DrawRectModiGraph( int  x1, int  y1, int  x2, int  y2, int  x3, int  y3, int  x4, int  y4, int  SrcX, int  SrcY, int  Width, int  Height, int  GraphHandle, int  TransFlag)
{
	return DrawRectModiGraph( x1, y1, x2, y2, x3, y3, x4, y4, SrcX, SrcY, Width, Height, GraphHandle, TransFlag);
}
int  __stdcall dx_DrawRectGraphF( float  DestX, float  DestY, int  SrcX, int  SrcY, int  Width, int  Height, int  GraphHandle, int  TransFlag, int  TurnFlag)
{
	return DrawRectGraphF( DestX, DestY, SrcX, SrcY, Width, Height, GraphHandle, TransFlag, TurnFlag);
}
int  __stdcall dx_DrawRectExtendGraphF( float  DestX1, float  DestY1, float  DestX2, float  DestY2, int  SrcX, int  SrcY, int  SrcWidth, int  SrcHeight, int  GraphHandle, int  TransFlag)
{
	return DrawRectExtendGraphF( DestX1, DestY1, DestX2, DestY2, SrcX, SrcY, SrcWidth, SrcHeight, GraphHandle, TransFlag);
}
int  __stdcall dx_DrawRectRotaGraphF( float  x, float  y, int  SrcX, int  SrcY, int  Width, int  Height, double  ExtRate, double  Angle, int  GraphHandle, int  TransFlag, int  TurnFlag)
{
	return DrawRectRotaGraphF( x, y, SrcX, SrcY, Width, Height, ExtRate, Angle, GraphHandle, TransFlag, TurnFlag);
}
int  __stdcall dx_DrawRectRotaGraph2F( float  x, float  y, int  SrcX, int  SrcY, int  Width, int  Height, float  cxf, float  cyf, double  ExtRate, double  Angle, int  GraphHandle, int  TransFlag, int  TurnFlag)
{
	return DrawRectRotaGraph2F( x, y, SrcX, SrcY, Width, Height, cxf, cyf, ExtRate, Angle, GraphHandle, TransFlag, TurnFlag);
}
int  __stdcall dx_DrawRectRotaGraph3F( float  x, float  y, int  SrcX, int  SrcY, int  Width, int  Height, float  cxf, float  cyf, double  ExtRateX, double  ExtRateY, double  Angle, int  GraphHandle, int  TransFlag, int  TurnFlag)
{
	return DrawRectRotaGraph3F( x, y, SrcX, SrcY, Width, Height, cxf, cyf, ExtRateX, ExtRateY, Angle, GraphHandle, TransFlag, TurnFlag);
}
int  __stdcall dx_DrawRectRotaGraphFastF( float  x, float  y, int  SrcX, int  SrcY, int  Width, int  Height, float  ExtRate, float  Angle, int  GraphHandle, int  TransFlag, int  TurnFlag)
{
	return DrawRectRotaGraphFastF( x, y, SrcX, SrcY, Width, Height, ExtRate, Angle, GraphHandle, TransFlag, TurnFlag);
}
int  __stdcall dx_DrawRectRotaGraphFast2F( float  x, float  y, int  SrcX, int  SrcY, int  Width, int  Height, float  cxf, float  cyf, float  ExtRate, float  Angle, int  GraphHandle, int  TransFlag, int  TurnFlag)
{
	return DrawRectRotaGraphFast2F( x, y, SrcX, SrcY, Width, Height, cxf, cyf, ExtRate, Angle, GraphHandle, TransFlag, TurnFlag);
}
int  __stdcall dx_DrawRectRotaGraphFast3F( float  x, float  y, int  SrcX, int  SrcY, int  Width, int  Height, float  cxf, float  cyf, float  ExtRateX, float  ExtRateY, float  Angle, int  GraphHandle, int  TransFlag, int  TurnFlag)
{
	return DrawRectRotaGraphFast3F( x, y, SrcX, SrcY, Width, Height, cxf, cyf, ExtRateX, ExtRateY, Angle, GraphHandle, TransFlag, TurnFlag);
}
int  __stdcall dx_DrawRectModiGraphF( float  x1, float  y1, float  x2, float  y2, float  x3, float  y3, float  x4, float  y4, int  SrcX, int  SrcY, int  Width, int  Height, int  GraphHandle, int  TransFlag)
{
	return DrawRectModiGraphF( x1, y1, x2, y2, x3, y3, x4, y4, SrcX, SrcY, Width, Height, GraphHandle, TransFlag);
}
int  __stdcall dx_DrawBlendGraph( int  x, int  y, int  GrHandle, int  TransFlag, int  BlendGraph, int  BorderParam, int  BorderRange)
{
	return DrawBlendGraph( x, y, GrHandle, TransFlag, BlendGraph, BorderParam, BorderRange);
}
int  __stdcall dx_DrawBlendGraphPos( int  x, int  y, int  GrHandle, int  TransFlag, int  bx, int  by, int  BlendGraph, int  BorderParam, int  BorderRange)
{
	return DrawBlendGraphPos( x, y, GrHandle, TransFlag, bx, by, BlendGraph, BorderParam, BorderRange);
}
int  __stdcall dx_DrawCircleGauge( int  CenterX, int  CenterY, double  Percent, int  GrHandle, double  StartPercent)
{
	return DrawCircleGauge( CenterX, CenterY, Percent, GrHandle, StartPercent);
}
int  __stdcall dx_DrawGraphToZBuffer( int  X, int  Y, int  GrHandle, int  WriteZMode)
{
	return DrawGraphToZBuffer( X, Y, GrHandle, WriteZMode);
}
int  __stdcall dx_DrawTurnGraphToZBuffer( int  x, int  y, int  GrHandle, int  WriteZMode)
{
	return DrawTurnGraphToZBuffer( x, y, GrHandle, WriteZMode);
}
int  __stdcall dx_DrawExtendGraphToZBuffer( int  x1, int  y1, int  x2, int  y2, int  GrHandle, int  WriteZMode)
{
	return DrawExtendGraphToZBuffer( x1, y1, x2, y2, GrHandle, WriteZMode);
}
int  __stdcall dx_DrawRotaGraphToZBuffer( int  x, int  y, double  ExRate, double  Angle, int  GrHandle, int  WriteZMode, int  TurnFlag)
{
	return DrawRotaGraphToZBuffer( x, y, ExRate, Angle, GrHandle, WriteZMode, TurnFlag);
}
int  __stdcall dx_DrawRotaGraph2ToZBuffer( int  x, int  y, int  cx, int  cy, double  ExtRate, double  Angle, int  GrHandle, int  WriteZMode, int  TurnFlag)
{
	return DrawRotaGraph2ToZBuffer( x, y, cx, cy, ExtRate, Angle, GrHandle, WriteZMode, TurnFlag);
}
int  __stdcall dx_DrawRotaGraph3ToZBuffer( int  x, int  y, int  cx, int  cy, double  ExtRateX, double  ExtRateY, double  Angle, int  GrHandle, int  WriteZMode, int  TurnFlag)
{
	return DrawRotaGraph3ToZBuffer( x, y, cx, cy, ExtRateX, ExtRateY, Angle, GrHandle, WriteZMode, TurnFlag);
}
int  __stdcall dx_DrawRotaGraphFastToZBuffer( int  x, int  y, float  ExRate, float  Angle, int  GrHandle, int  WriteZMode, int  TurnFlag)
{
	return DrawRotaGraphFastToZBuffer( x, y, ExRate, Angle, GrHandle, WriteZMode, TurnFlag);
}
int  __stdcall dx_DrawRotaGraphFast2ToZBuffer( int  x, int  y, int  cx, int  cy, float  ExtRate, float  Angle, int  GrHandle, int  WriteZMode, int  TurnFlag)
{
	return DrawRotaGraphFast2ToZBuffer( x, y, cx, cy, ExtRate, Angle, GrHandle, WriteZMode, TurnFlag);
}
int  __stdcall dx_DrawRotaGraphFast3ToZBuffer( int  x, int  y, int  cx, int  cy, float  ExtRateX, float  ExtRateY, float  Angle, int  GrHandle, int  WriteZMode, int  TurnFlag)
{
	return DrawRotaGraphFast3ToZBuffer( x, y, cx, cy, ExtRateX, ExtRateY, Angle, GrHandle, WriteZMode, TurnFlag);
}
int  __stdcall dx_DrawModiGraphToZBuffer( int  x1, int  y1, int  x2, int  y2, int  x3, int  y3, int  x4, int  y4, int  GrHandle, int  WriteZMode)
{
	return DrawModiGraphToZBuffer( x1, y1, x2, y2, x3, y3, x4, y4, GrHandle, WriteZMode);
}
int  __stdcall dx_DrawBoxToZBuffer( int  x1, int  y1, int  x2, int  y2, int  FillFlag, int  WriteZMode)
{
	return DrawBoxToZBuffer( x1, y1, x2, y2, FillFlag, WriteZMode);
}
int  __stdcall dx_DrawCircleToZBuffer( int  x, int  y, int  r, int  FillFlag, int  WriteZMode)
{
	return DrawCircleToZBuffer( x, y, r, FillFlag, WriteZMode);
}
int  __stdcall dx_DrawTriangleToZBuffer( int  x1, int  y1, int  x2, int  y2, int  x3, int  y3, int  FillFlag, int  WriteZMode)
{
	return DrawTriangleToZBuffer( x1, y1, x2, y2, x3, y3, FillFlag, WriteZMode);
}
int  __stdcall dx_DrawQuadrangleToZBuffer( int  x1, int  y1, int  x2, int  y2, int  x3, int  y3, int  x4, int  y4, int  FillFlag, int  WriteZMode)
{
	return DrawQuadrangleToZBuffer( x1, y1, x2, y2, x3, y3, x4, y4, FillFlag, WriteZMode);
}
int  __stdcall dx_DrawRoundRectToZBuffer( int  x1, int  y1, int  x2, int  y2, int  rx, int  ry, int  FillFlag, int  WriteZMode)
{
	return DrawRoundRectToZBuffer( x1, y1, x2, y2, rx, ry, FillFlag, WriteZMode);
}
int  __stdcall dx_DrawPolygon( const VERTEX *  Vertex, int  PolygonNum, int  GrHandle, int  TransFlag, int  UVScaling)
{
	return DrawPolygon( Vertex, PolygonNum, GrHandle, TransFlag, UVScaling);
}
int  __stdcall dx_DrawPolygon2D( const VERTEX2D *  Vertex, int  PolygonNum, int  GrHandle, int  TransFlag)
{
	return DrawPolygon2D( Vertex, PolygonNum, GrHandle, TransFlag);
}
int  __stdcall dx_DrawPolygon3D( const VERTEX3D *  Vertex, int  PolygonNum, int  GrHandle, int  TransFlag)
{
	return DrawPolygon3D( Vertex, PolygonNum, GrHandle, TransFlag);
}
int  __stdcall dx_DrawPolygonIndexed2D( const VERTEX2D *  Vertex, int  VertexNum, const unsigned short *  Indices, int  PolygonNum, int  GrHandle, int  TransFlag)
{
	return DrawPolygonIndexed2D( Vertex, VertexNum, Indices, PolygonNum, GrHandle, TransFlag);
}
int  __stdcall dx_DrawPolygonIndexed3D( const VERTEX3D *  Vertex, int  VertexNum, const unsigned short *  Indices, int  PolygonNum, int  GrHandle, int  TransFlag)
{
	return DrawPolygonIndexed3D( Vertex, VertexNum, Indices, PolygonNum, GrHandle, TransFlag);
}
int  __stdcall dx_DrawPolygonIndexed3DBase( const VERTEX_3D *  Vertex, int  VertexNum, const unsigned short *  Indices, int  IndexNum, int  PrimitiveType, int  GrHandle, int  TransFlag)
{
	return DrawPolygonIndexed3DBase( Vertex, VertexNum, Indices, IndexNum, PrimitiveType, GrHandle, TransFlag);
}
int  __stdcall dx_DrawPolygon3DBase( const VERTEX_3D *  Vertex, int  VertexNum, int  PrimitiveType, int  GrHandle, int  TransFlag)
{
	return DrawPolygon3DBase( Vertex, VertexNum, PrimitiveType, GrHandle, TransFlag);
}
int  __stdcall dx_DrawPolygon3D_2( const VERTEX_3D *  Vertex, int  PolygonNum, int  GrHandle, int  TransFlag)
{
	return DrawPolygon3D( Vertex, PolygonNum, GrHandle, TransFlag);
}
int  __stdcall dx_DrawPolygonBase( const VERTEX *  Vertex, int  VertexNum, int  PrimitiveType, int  GrHandle, int  TransFlag, int  UVScaling)
{
	return DrawPolygonBase( Vertex, VertexNum, PrimitiveType, GrHandle, TransFlag, UVScaling);
}
int  __stdcall dx_DrawPrimitive2D( const VERTEX2D *  Vertex, int  VertexNum, int  PrimitiveType, int  GrHandle, int  TransFlag)
{
	return DrawPrimitive2D( Vertex, VertexNum, PrimitiveType, GrHandle, TransFlag);
}
int  __stdcall dx_DrawPrimitive3D( const VERTEX3D *  Vertex, int  VertexNum, int  PrimitiveType, int  GrHandle, int  TransFlag)
{
	return DrawPrimitive3D( Vertex, VertexNum, PrimitiveType, GrHandle, TransFlag);
}
int  __stdcall dx_DrawPrimitiveIndexed2D( const VERTEX2D *  Vertex, int  VertexNum, const unsigned short *  Indices, int  IndexNum, int  PrimitiveType, int  GrHandle, int  TransFlag)
{
	return DrawPrimitiveIndexed2D( Vertex, VertexNum, Indices, IndexNum, PrimitiveType, GrHandle, TransFlag);
}
int  __stdcall dx_DrawPrimitiveIndexed3D( const VERTEX3D *  Vertex, int  VertexNum, const unsigned short *  Indices, int  IndexNum, int  PrimitiveType, int  GrHandle, int  TransFlag)
{
	return DrawPrimitiveIndexed3D( Vertex, VertexNum, Indices, IndexNum, PrimitiveType, GrHandle, TransFlag);
}
int  __stdcall dx_DrawPolygon3D_UseVertexBuffer( int  VertexBufHandle, int  GrHandle, int  TransFlag)
{
	return DrawPolygon3D_UseVertexBuffer( VertexBufHandle, GrHandle, TransFlag);
}
int  __stdcall dx_DrawPrimitive3D_UseVertexBuffer( int  VertexBufHandle, int  PrimitiveType, int  GrHandle, int  TransFlag)
{
	return DrawPrimitive3D_UseVertexBuffer( VertexBufHandle, PrimitiveType, GrHandle, TransFlag);
}
int  __stdcall dx_DrawPrimitive3D_UseVertexBuffer2( int  VertexBufHandle, int  PrimitiveType, int  StartVertex, int  UseVertexNum, int  GrHandle, int  TransFlag)
{
	return DrawPrimitive3D_UseVertexBuffer2( VertexBufHandle, PrimitiveType, StartVertex, UseVertexNum, GrHandle, TransFlag);
}
int  __stdcall dx_DrawPolygonIndexed3D_UseVertexBuffer( int  VertexBufHandle, int  IndexBufHandle, int  GrHandle, int  TransFlag)
{
	return DrawPolygonIndexed3D_UseVertexBuffer( VertexBufHandle, IndexBufHandle, GrHandle, TransFlag);
}
int  __stdcall dx_DrawPrimitiveIndexed3D_UseVertexBuffer( int  VertexBufHandle, int  IndexBufHandle, int  PrimitiveType, int  GrHandle, int  TransFlag)
{
	return DrawPrimitiveIndexed3D_UseVertexBuffer( VertexBufHandle, IndexBufHandle, PrimitiveType, GrHandle, TransFlag);
}
int  __stdcall dx_DrawPrimitiveIndexed3D_UseVertexBuffer2( int  VertexBufHandle, int  IndexBufHandle, int  PrimitiveType, int  BaseVertex, int  StartVertex, int  UseVertexNum, int  StartIndex, int  UseIndexNum, int  GrHandle, int  TransFlag)
{
	return DrawPrimitiveIndexed3D_UseVertexBuffer2( VertexBufHandle, IndexBufHandle, PrimitiveType, BaseVertex, StartVertex, UseVertexNum, StartIndex, UseIndexNum, GrHandle, TransFlag);
}
int  __stdcall dx_DrawGraph3D( float  x, float  y, float  z, int  GrHandle, int  TransFlag)
{
	return DrawGraph3D( x, y, z, GrHandle, TransFlag);
}
int  __stdcall dx_DrawExtendGraph3D( float  x, float  y, float  z, double  ExRateX, double  ExRateY, int  GrHandle, int  TransFlag)
{
	return DrawExtendGraph3D( x, y, z, ExRateX, ExRateY, GrHandle, TransFlag);
}
int  __stdcall dx_DrawRotaGraph3D( float  x, float  y, float  z, double  ExRate, double  Angle, int  GrHandle, int  TransFlag, int  TurnFlag)
{
	return DrawRotaGraph3D( x, y, z, ExRate, Angle, GrHandle, TransFlag, TurnFlag);
}
int  __stdcall dx_DrawRota2Graph3D( float  x, float  y, float  z, float  cx, float  cy, double  ExtRateX, double  ExtRateY, double  Angle, int  GrHandle, int  TransFlag, int  TurnFlag)
{
	return DrawRota2Graph3D( x, y, z, cx, cy, ExtRateX, ExtRateY, Angle, GrHandle, TransFlag, TurnFlag);
}
int  __stdcall dx_DrawModiBillboard3D( VECTOR  Pos, float  x1, float  y1, float  x2, float  y2, float  x3, float  y3, float  x4, float  y4, int  GrHandle, int  TransFlag)
{
	return DrawModiBillboard3D( Pos, x1, y1, x2, y2, x3, y3, x4, y4, GrHandle, TransFlag);
}
int  __stdcall dx_DrawBillboard3D( VECTOR  Pos, float  cx, float  cy, float  Size, float  Angle, int  GrHandle, int  TransFlag, int  TurnFlag)
{
	return DrawBillboard3D( Pos, cx, cy, Size, Angle, GrHandle, TransFlag, TurnFlag);
}
int  __stdcall dx_SetDrawMode( int  DrawMode)
{
	return SetDrawMode( DrawMode);
}
int  __stdcall dx_GetDrawMode( void)
{
	return GetDrawMode( );
}
int  __stdcall dx_SetDrawBlendMode( int  BlendMode, int  BlendParam)
{
	return SetDrawBlendMode( BlendMode, BlendParam);
}
int  __stdcall dx_GetDrawBlendMode( int *  BlendMode, int *  BlendParam)
{
	return GetDrawBlendMode( BlendMode, BlendParam);
}
int  __stdcall dx_SetDrawAlphaTest( int  TestMode, int  TestParam)
{
	return SetDrawAlphaTest( TestMode, TestParam);
}
int  __stdcall dx_SetBlendGraph( int  BlendGraph, int  BorderParam, int  BorderRange)
{
	return SetBlendGraph( BlendGraph, BorderParam, BorderRange);
}
int  __stdcall dx_SetBlendGraphPosition( int  x, int  y)
{
	return SetBlendGraphPosition( x, y);
}
int  __stdcall dx_SetDrawBright( int  RedBright, int  GreenBright, int  BlueBright)
{
	return SetDrawBright( RedBright, GreenBright, BlueBright);
}
int  __stdcall dx_GetDrawBright( int *  Red, int *  Green, int *  Blue)
{
	return GetDrawBright( Red, Green, Blue);
}
int  __stdcall dx_SetIgnoreDrawGraphColor( int  EnableFlag)
{
	return SetIgnoreDrawGraphColor( EnableFlag);
}
int  __stdcall dx_SetMaxAnisotropy( int  MaxAnisotropy)
{
	return SetMaxAnisotropy( MaxAnisotropy);
}
int  __stdcall dx_SetUseLarge3DPositionSupport( int  UseFlag)
{
	return SetUseLarge3DPositionSupport( UseFlag);
}
int  __stdcall dx_SetUseZBufferFlag( int  Flag)
{
	return SetUseZBufferFlag( Flag);
}
int  __stdcall dx_SetWriteZBufferFlag( int  Flag)
{
	return SetWriteZBufferFlag( Flag);
}
int  __stdcall dx_SetZBufferCmpType( int  CmpType)
{
	return SetZBufferCmpType( CmpType);
}
int  __stdcall dx_SetZBias( int  Bias)
{
	return SetZBias( Bias);
}
int  __stdcall dx_SetUseZBuffer3D( int  Flag)
{
	return SetUseZBuffer3D( Flag);
}
int  __stdcall dx_SetWriteZBuffer3D( int  Flag)
{
	return SetWriteZBuffer3D( Flag);
}
int  __stdcall dx_SetZBufferCmpType3D( int  CmpType)
{
	return SetZBufferCmpType3D( CmpType);
}
int  __stdcall dx_SetZBias3D( int  Bias)
{
	return SetZBias3D( Bias);
}
int  __stdcall dx_SetDrawZ( float  Z)
{
	return SetDrawZ( Z);
}
int  __stdcall dx_SetDrawArea( int  x1, int  y1, int  x2, int  y2)
{
	return SetDrawArea( x1, y1, x2, y2);
}
int  __stdcall dx_GetDrawArea( RECT *  Rect)
{
	return GetDrawArea( Rect);
}
int  __stdcall dx_SetDrawAreaFull( void)
{
	return SetDrawAreaFull( );
}
int  __stdcall dx_SetDraw3DScale( float  Scale)
{
	return SetDraw3DScale( Scale);
}
int __stdcall dx_SetRestoreShredPoint( void ( *ShredPoint )( void ) ) 
{
	return SetRestoreShredPoint( ShredPoint  ) ;
}
int __stdcall dx_SetRestoreGraphCallback( void ( *Callback )( void ) ) 
{
	return SetRestoreGraphCallback( Callback  ) ;
}
int  __stdcall dx_RunRestoreShred( void)
{
	return RunRestoreShred( );
}
int __stdcall dx_SetGraphicsDeviceRestoreCallbackFunction( void ( *Callback )( void * Data ) , void * CallbackData ) 
{
	return SetGraphicsDeviceRestoreCallbackFunction( Callback , CallbackData  ) ;
}
int __stdcall dx_SetGraphicsDeviceLostCallbackFunction( void ( *Callback )( void * Data ) , void * CallbackData ) 
{
	return SetGraphicsDeviceLostCallbackFunction( Callback , CallbackData  ) ;
}
int  __stdcall dx_SetTransformToWorld( const MATRIX *  Matrix)
{
	return SetTransformToWorld( Matrix);
}
int  __stdcall dx_SetTransformToWorldD( const MATRIX_D *  Matrix)
{
	return SetTransformToWorldD( Matrix);
}
int  __stdcall dx_GetTransformToWorldMatrix( MATRIX *  MatBuf)
{
	return GetTransformToWorldMatrix( MatBuf);
}
int  __stdcall dx_GetTransformToWorldMatrixD( MATRIX_D *  MatBuf)
{
	return GetTransformToWorldMatrixD( MatBuf);
}
int  __stdcall dx_SetTransformToView( const MATRIX *  Matrix)
{
	return SetTransformToView( Matrix);
}
int  __stdcall dx_SetTransformToViewD( const MATRIX_D *  Matrix)
{
	return SetTransformToViewD( Matrix);
}
int  __stdcall dx_GetTransformToViewMatrix( MATRIX *  MatBuf)
{
	return GetTransformToViewMatrix( MatBuf);
}
int  __stdcall dx_GetTransformToViewMatrixD( MATRIX_D *  MatBuf)
{
	return GetTransformToViewMatrixD( MatBuf);
}
int  __stdcall dx_SetTransformToProjection( const MATRIX *  Matrix)
{
	return SetTransformToProjection( Matrix);
}
int  __stdcall dx_SetTransformToProjectionD( const MATRIX_D *  Matrix)
{
	return SetTransformToProjectionD( Matrix);
}
int  __stdcall dx_GetTransformToProjectionMatrix( MATRIX *  MatBuf)
{
	return GetTransformToProjectionMatrix( MatBuf);
}
int  __stdcall dx_GetTransformToProjectionMatrixD( MATRIX_D *  MatBuf)
{
	return GetTransformToProjectionMatrixD( MatBuf);
}
int  __stdcall dx_SetTransformToViewport( const MATRIX *  Matrix)
{
	return SetTransformToViewport( Matrix);
}
int  __stdcall dx_SetTransformToViewportD( const MATRIX_D *  Matrix)
{
	return SetTransformToViewportD( Matrix);
}
int  __stdcall dx_GetTransformToViewportMatrix( MATRIX *  MatBuf)
{
	return GetTransformToViewportMatrix( MatBuf);
}
int  __stdcall dx_GetTransformToViewportMatrixD( MATRIX_D *  MatBuf)
{
	return GetTransformToViewportMatrixD( MatBuf);
}
int  __stdcall dx_GetTransformToAPIViewportMatrix( MATRIX *  MatBuf)
{
	return GetTransformToAPIViewportMatrix( MatBuf);
}
int  __stdcall dx_GetTransformToAPIViewportMatrixD( MATRIX_D *  MatBuf)
{
	return GetTransformToAPIViewportMatrixD( MatBuf);
}
int  __stdcall dx_SetDefTransformMatrix( void)
{
	return SetDefTransformMatrix( );
}
int  __stdcall dx_GetTransformPosition( VECTOR *  LocalPos, float *  x, float *  y)
{
	return GetTransformPosition( LocalPos, x, y);
}
int  __stdcall dx_GetTransformPositionD( VECTOR_D *  LocalPos, double *  x, double *  y)
{
	return GetTransformPositionD( LocalPos, x, y);
}
float  __stdcall dx_GetBillboardPixelSize( VECTOR  WorldPos, float  WorldSize)
{
	return GetBillboardPixelSize( WorldPos, WorldSize);
}
double __stdcall dx_GetBillboardPixelSizeD( VECTOR_D WorldPos , double WorldSize ) 
{
	return GetBillboardPixelSizeD( WorldPos , WorldSize  ) ;
}
VECTOR  __stdcall dx_ConvWorldPosToViewPos( VECTOR  WorldPos)
{
	return ConvWorldPosToViewPos( WorldPos);
}
VECTOR_D  __stdcall dx_ConvWorldPosToViewPosD( VECTOR_D  WorldPos)
{
	return ConvWorldPosToViewPosD( WorldPos);
}
VECTOR  __stdcall dx_ConvWorldPosToScreenPos( VECTOR  WorldPos)
{
	return ConvWorldPosToScreenPos( WorldPos);
}
VECTOR_D  __stdcall dx_ConvWorldPosToScreenPosD( VECTOR_D  WorldPos)
{
	return ConvWorldPosToScreenPosD( WorldPos);
}
FLOAT4  __stdcall dx_ConvWorldPosToScreenPosPlusW( VECTOR  WorldPos)
{
	return ConvWorldPosToScreenPosPlusW( WorldPos);
}
DOUBLE4  __stdcall dx_ConvWorldPosToScreenPosPlusWD( VECTOR_D  WorldPos)
{
	return ConvWorldPosToScreenPosPlusWD( WorldPos);
}
VECTOR  __stdcall dx_ConvScreenPosToWorldPos( VECTOR  ScreenPos)
{
	return ConvScreenPosToWorldPos( ScreenPos);
}
VECTOR_D  __stdcall dx_ConvScreenPosToWorldPosD( VECTOR_D  ScreenPos)
{
	return ConvScreenPosToWorldPosD( ScreenPos);
}
VECTOR  __stdcall dx_ConvScreenPosToWorldPos_ZLinear( VECTOR  ScreenPos)
{
	return ConvScreenPosToWorldPos_ZLinear( ScreenPos);
}
VECTOR_D  __stdcall dx_ConvScreenPosToWorldPos_ZLinearD( VECTOR_D  ScreenPos)
{
	return ConvScreenPosToWorldPos_ZLinearD( ScreenPos);
}
int  __stdcall dx_SetUseCullingFlag( int  Flag)
{
	return SetUseCullingFlag( Flag);
}
int  __stdcall dx_SetUseBackCulling( int  Flag)
{
	return SetUseBackCulling( Flag);
}
int  __stdcall dx_GetUseBackCulling( void)
{
	return GetUseBackCulling( );
}
int  __stdcall dx_SetTextureAddressMode( int  Mode, int  Stage)
{
	return SetTextureAddressMode( Mode, Stage);
}
int  __stdcall dx_SetTextureAddressModeUV( int  ModeU, int  ModeV, int  Stage)
{
	return SetTextureAddressModeUV( ModeU, ModeV, Stage);
}
int  __stdcall dx_SetTextureAddressTransform( float  TransU, float  TransV, float  ScaleU, float  ScaleV, float  RotCenterU, float  RotCenterV, float  Rotate)
{
	return SetTextureAddressTransform( TransU, TransV, ScaleU, ScaleV, RotCenterU, RotCenterV, Rotate);
}
int  __stdcall dx_SetTextureAddressTransformMatrix( MATRIX  Matrix)
{
	return SetTextureAddressTransformMatrix( Matrix);
}
int  __stdcall dx_ResetTextureAddressTransform( void)
{
	return ResetTextureAddressTransform( );
}
int  __stdcall dx_SetFogEnable( int  Flag)
{
	return SetFogEnable( Flag);
}
int  __stdcall dx_GetFogEnable( void)
{
	return GetFogEnable( );
}
int  __stdcall dx_SetFogMode( int  Mode)
{
	return SetFogMode( Mode);
}
int  __stdcall dx_GetFogMode( void)
{
	return GetFogMode( );
}
int  __stdcall dx_SetFogColor( int  r, int  g, int  b)
{
	return SetFogColor( r, g, b);
}
int  __stdcall dx_GetFogColor( int *  r, int *  g, int *  b)
{
	return GetFogColor( r, g, b);
}
int  __stdcall dx_SetFogStartEnd( float  start, float  end)
{
	return SetFogStartEnd( start, end);
}
int  __stdcall dx_GetFogStartEnd( float *  start, float *  end)
{
	return GetFogStartEnd( start, end);
}
int  __stdcall dx_SetFogDensity( float  density)
{
	return SetFogDensity( density);
}
float  __stdcall dx_GetFogDensity( void)
{
	return GetFogDensity( );
}
unsigned int  __stdcall dx_GetPixel( int  x, int  y)
{
	return GetPixel( x, y);
}
int  __stdcall dx_SetBackgroundColor( int  Red, int  Green, int  Blue)
{
	return SetBackgroundColor( Red, Green, Blue);
}
int  __stdcall dx_GetBackgroundColor( int *  Red, int *  Green, int *  Blue)
{
	return GetBackgroundColor( Red, Green, Blue);
}
int  __stdcall dx_GetDrawScreenGraph( int  x1, int  y1, int  x2, int  y2, int  GrHandle, int  UseClientFlag)
{
	return GetDrawScreenGraph( x1, y1, x2, y2, GrHandle, UseClientFlag);
}
int  __stdcall dx_BltDrawValidGraph( int  TargetDrawValidGrHandle, int  x1, int  y1, int  x2, int  y2, int  DestX, int  DestY, int  DestGrHandle)
{
	return BltDrawValidGraph( TargetDrawValidGrHandle, x1, y1, x2, y2, DestX, DestY, DestGrHandle);
}
int  __stdcall dx_ScreenFlip( void)
{
	return ScreenFlip( );
}
int  __stdcall dx_ScreenCopy( void)
{
	return ScreenCopy( );
}
int  __stdcall dx_WaitVSync( int  SyncNum)
{
	return WaitVSync( SyncNum);
}
int __stdcall dx_ClearDrawScreen( const RECT * ClearRect ) 
{
	return ClearDrawScreen( ClearRect  ) ;
}
int __stdcall dx_ClearDrawScreenZBuffer( const RECT * ClearRect ) 
{
	return ClearDrawScreenZBuffer( ClearRect  ) ;
}
int  __stdcall dx_ClsDrawScreen( void)
{
	return ClsDrawScreen( );
}
int  __stdcall dx_SetDrawScreen( int  DrawScreen)
{
	return SetDrawScreen( DrawScreen);
}
int  __stdcall dx_GetDrawScreen( void)
{
	return GetDrawScreen( );
}
int  __stdcall dx_GetActiveGraph( void)
{
	return GetActiveGraph( );
}
int  __stdcall dx_SetUseSetDrawScreenSettingReset( int  UseFlag)
{
	return SetUseSetDrawScreenSettingReset( UseFlag);
}
int  __stdcall dx_GetUseSetDrawScreenSettingReset( void)
{
	return GetUseSetDrawScreenSettingReset( );
}
int  __stdcall dx_SetDrawZBuffer( int  DrawScreen)
{
	return SetDrawZBuffer( DrawScreen);
}
int  __stdcall dx_SetGraphMode( int  ScreenSizeX, int  ScreenSizeY, int  ColorBitDepth, int  RefreshRate)
{
	return SetGraphMode( ScreenSizeX, ScreenSizeY, ColorBitDepth, RefreshRate);
}
int  __stdcall dx_SetFullScreenResolutionMode( int  ResolutionMode)
{
	return SetFullScreenResolutionMode( ResolutionMode);
}
int  __stdcall dx_SetFullScreenScalingMode( int  ScalingMode)
{
	return SetFullScreenScalingMode( ScalingMode);
}
int  __stdcall dx_SetEmulation320x240( int  Flag)
{
	return SetEmulation320x240( Flag);
}
int  __stdcall dx_SetZBufferSize( int  ZBufferSizeX, int  ZBufferSizeY)
{
	return SetZBufferSize( ZBufferSizeX, ZBufferSizeY);
}
int  __stdcall dx_SetZBufferBitDepth( int  BitDepth)
{
	return SetZBufferBitDepth( BitDepth);
}
int  __stdcall dx_SetWaitVSyncFlag( int  Flag)
{
	return SetWaitVSyncFlag( Flag);
}
int  __stdcall dx_GetWaitVSyncFlag( void)
{
	return GetWaitVSyncFlag( );
}
int  __stdcall dx_SetFullSceneAntiAliasingMode( int  Samples, int  Quality)
{
	return SetFullSceneAntiAliasingMode( Samples, Quality);
}
int  __stdcall dx_SetGraphDisplayArea( int  x1, int  y1, int  x2, int  y2)
{
	return SetGraphDisplayArea( x1, y1, x2, y2);
}
int  __stdcall dx_SetChangeScreenModeGraphicsSystemResetFlag( int  Flag)
{
	return SetChangeScreenModeGraphicsSystemResetFlag( Flag);
}
int  __stdcall dx_GetScreenState( int *  SizeX, int *  SizeY, int *  ColorBitDepth)
{
	return GetScreenState( SizeX, SizeY, ColorBitDepth);
}
int  __stdcall dx_GetDrawScreenSize( int *  XBuf, int *  YBuf)
{
	return GetDrawScreenSize( XBuf, YBuf);
}
int  __stdcall dx_GetScreenBitDepth( void)
{
	return GetScreenBitDepth( );
}
int  __stdcall dx_GetColorBitDepth( void)
{
	return GetColorBitDepth( );
}
int  __stdcall dx_GetChangeDisplayFlag( void)
{
	return GetChangeDisplayFlag( );
}
int  __stdcall dx_GetVideoMemorySize( int *  AllSize, int *  FreeSize)
{
	return GetVideoMemorySize( AllSize, FreeSize);
}
int  __stdcall dx_GetRefreshRate( void)
{
	return GetRefreshRate( );
}
int  __stdcall dx_GetDisplayNum( void)
{
	return GetDisplayNum( );
}
int  __stdcall dx_GetDisplayModeNum( int  DisplayIndex)
{
	return GetDisplayModeNum( DisplayIndex);
}
DISPLAYMODEDATA  __stdcall dx_GetDisplayMode( int  ModeIndex, int  DisplayIndex)
{
	return GetDisplayMode( ModeIndex, DisplayIndex);
}
int  __stdcall dx_GetDisplayMaxResolution( int *  SizeX, int *  SizeY, int  DisplayIndex)
{
	return GetDisplayMaxResolution( SizeX, SizeY, DisplayIndex);
}
const COLORDATA * __stdcall dx_GetDispColorData( void )
{
	return GetDispColorData(  ) ;
}
int  __stdcall dx_GetMultiDrawScreenNum( void)
{
	return GetMultiDrawScreenNum( );
}
int  __stdcall dx_GetDrawFloatCoordType( void)
{
	return GetDrawFloatCoordType( );
}
int  __stdcall dx_SetUseNormalDrawShader( int  Flag)
{
	return SetUseNormalDrawShader( Flag);
}
int  __stdcall dx_SetUseSoftwareRenderModeFlag( int  Flag)
{
	return SetUseSoftwareRenderModeFlag( Flag);
}
int  __stdcall dx_SetNotUse3DFlag( int  Flag)
{
	return SetNotUse3DFlag( Flag);
}
int  __stdcall dx_SetUse3DFlag( int  Flag)
{
	return SetUse3DFlag( Flag);
}
int  __stdcall dx_GetUse3DFlag( void)
{
	return GetUse3DFlag( );
}
int  __stdcall dx_SetScreenMemToVramFlag( int  Flag)
{
	return SetScreenMemToVramFlag( Flag);
}
int  __stdcall dx_GetScreenMemToSystemMemFlag( void)
{
	return GetScreenMemToSystemMemFlag( );
}
int  __stdcall dx_SetWindowDrawRect( const RECT *  DrawRect)
{
	return SetWindowDrawRect( DrawRect);
}
int  __stdcall dx_RestoreGraphSystem( void)
{
	return RestoreGraphSystem( );
}
int  __stdcall dx_SetUseHardwareVertexProcessing( int  Flag)
{
	return SetUseHardwareVertexProcessing( Flag);
}
int  __stdcall dx_SetUsePixelLighting( int  Flag)
{
	return SetUsePixelLighting( Flag);
}
int  __stdcall dx_SetUseOldDrawModiGraphCodeFlag( int  Flag)
{
	return SetUseOldDrawModiGraphCodeFlag( Flag);
}
int  __stdcall dx_SetUseVramFlag( int  Flag)
{
	return SetUseVramFlag( Flag);
}
int  __stdcall dx_GetUseVramFlag( void)
{
	return GetUseVramFlag( );
}
int  __stdcall dx_SetBasicBlendFlag( int  Flag)
{
	return SetBasicBlendFlag( Flag);
}
int  __stdcall dx_SetUseBasicGraphDraw3DDeviceMethodFlag( int  Flag)
{
	return SetUseBasicGraphDraw3DDeviceMethodFlag( Flag);
}
int  __stdcall dx_SetUseDisplayIndex( int  Index)
{
	return SetUseDisplayIndex( Index);
}
int  __stdcall dx_RenderVertex( void)
{
	return RenderVertex( );
}
int  __stdcall dx_SaveDrawScreen( int  x1, int  y1, int  x2, int  y2, const char * FileName, int  SaveType, int  Jpeg_Quality, int  Jpeg_Sample2x1, int  Png_CompressionLevel)
{
	return SaveDrawScreen( x1, y1, x2, y2, FileName, SaveType, Jpeg_Quality, Jpeg_Sample2x1, Png_CompressionLevel);
}
int  __stdcall dx_SaveDrawScreenToBMP( int  x1, int  y1, int  x2, int  y2, const char * FileName)
{
	return SaveDrawScreenToBMP( x1, y1, x2, y2, FileName);
}
int  __stdcall dx_SaveDrawScreenToDDS( int  x1, int  y1, int  x2, int  y2, const char * FileName)
{
	return SaveDrawScreenToDDS( x1, y1, x2, y2, FileName);
}
int  __stdcall dx_SaveDrawScreenToJPEG( int  x1, int  y1, int  x2, int  y2, const char * FileName, int  Quality, int  Sample2x1)
{
	return SaveDrawScreenToJPEG( x1, y1, x2, y2, FileName, Quality, Sample2x1);
}
int  __stdcall dx_SaveDrawScreenToPNG( int  x1, int  y1, int  x2, int  y2, const char * FileName, int  CompressionLevel)
{
	return SaveDrawScreenToPNG( x1, y1, x2, y2, FileName, CompressionLevel);
}
int  __stdcall dx_CreateVertexBuffer( int  VertexNum, int  VertexType)
{
	return CreateVertexBuffer( VertexNum, VertexType);
}
int  __stdcall dx_DeleteVertexBuffer( int  VertexBufHandle)
{
	return DeleteVertexBuffer( VertexBufHandle);
}
int  __stdcall dx_InitVertexBuffer( void)
{
	return InitVertexBuffer( );
}
int  __stdcall dx_SetVertexBufferData( int  SetIndex, const void * VertexData, int  VertexNum, int  VertexBufHandle)
{
	return SetVertexBufferData( SetIndex, VertexData, VertexNum, VertexBufHandle);
}
int  __stdcall dx_CreateIndexBuffer( int  IndexNum, int  IndexType)
{
	return CreateIndexBuffer( IndexNum, IndexType);
}
int  __stdcall dx_DeleteIndexBuffer( int  IndexBufHandle)
{
	return DeleteIndexBuffer( IndexBufHandle);
}
int  __stdcall dx_InitIndexBuffer( void)
{
	return InitIndexBuffer( );
}
int  __stdcall dx_SetIndexBufferData( int  SetIndex, const void * IndexData, int  IndexNum, int  IndexBufHandle)
{
	return SetIndexBufferData( SetIndex, IndexData, IndexNum, IndexBufHandle);
}
int  __stdcall dx_GetMaxPrimitiveCount( void)
{
	return GetMaxPrimitiveCount( );
}
int  __stdcall dx_GetMaxVertexIndex( void)
{
	return GetMaxVertexIndex( );
}
int  __stdcall dx_GetValidShaderVersion( void)
{
	return GetValidShaderVersion( );
}
int  __stdcall dx_LoadVertexShader( const char * FileName)
{
	return LoadVertexShader( FileName);
}
int  __stdcall dx_LoadPixelShader( const char * FileName)
{
	return LoadPixelShader( FileName);
}
int  __stdcall dx_LoadVertexShaderFromMem( const void * ImageAddress, int  ImageSize)
{
	return LoadVertexShaderFromMem( ImageAddress, ImageSize);
}
int  __stdcall dx_LoadPixelShaderFromMem( const void * ImageAddress, int  ImageSize)
{
	return LoadPixelShaderFromMem( ImageAddress, ImageSize);
}
int  __stdcall dx_DeleteShader( int  ShaderHandle)
{
	return DeleteShader( ShaderHandle);
}
int  __stdcall dx_InitShader( void)
{
	return InitShader( );
}
int  __stdcall dx_GetConstIndexToShader( const char * ConstantName, int  ShaderHandle)
{
	return GetConstIndexToShader( ConstantName, ShaderHandle);
}
int  __stdcall dx_GetConstCountToShader( const char * ConstantName, int  ShaderHandle)
{
	return GetConstCountToShader( ConstantName, ShaderHandle);
}
const FLOAT4 *  __stdcall dx_GetConstDefaultParamFToShader( const char * ConstantName, int  ShaderHandle)
{
	return GetConstDefaultParamFToShader( ConstantName, ShaderHandle);
}
int  __stdcall dx_SetVSConstSF( int  ConstantIndex, float  Param)
{
	return SetVSConstSF( ConstantIndex, Param);
}
int  __stdcall dx_SetVSConstF( int  ConstantIndex, FLOAT4  Param)
{
	return SetVSConstF( ConstantIndex, Param);
}
int  __stdcall dx_SetVSConstFMtx( int  ConstantIndex, MATRIX  Param)
{
	return SetVSConstFMtx( ConstantIndex, Param);
}
int  __stdcall dx_SetVSConstFMtxT( int  ConstantIndex, MATRIX  Param)
{
	return SetVSConstFMtxT( ConstantIndex, Param);
}
int  __stdcall dx_SetVSConstSI( int  ConstantIndex, int  Param)
{
	return SetVSConstSI( ConstantIndex, Param);
}
int  __stdcall dx_SetVSConstI( int  ConstantIndex, INT4  Param)
{
	return SetVSConstI( ConstantIndex, Param);
}
int  __stdcall dx_SetVSConstB( int  ConstantIndex, BOOL  Param)
{
	return SetVSConstB( ConstantIndex, Param);
}
int  __stdcall dx_SetVSConstSFArray( int  ConstantIndex, const float *  ParamArray, int  ParamNum)
{
	return SetVSConstSFArray( ConstantIndex, ParamArray, ParamNum);
}
int  __stdcall dx_SetVSConstFArray( int  ConstantIndex, const FLOAT4 *  ParamArray, int  ParamNum)
{
	return SetVSConstFArray( ConstantIndex, ParamArray, ParamNum);
}
int  __stdcall dx_SetVSConstFMtxArray( int  ConstantIndex, const MATRIX *  ParamArray, int  ParamNum)
{
	return SetVSConstFMtxArray( ConstantIndex, ParamArray, ParamNum);
}
int  __stdcall dx_SetVSConstFMtxTArray( int  ConstantIndex, const MATRIX *  ParamArray, int  ParamNum)
{
	return SetVSConstFMtxTArray( ConstantIndex, ParamArray, ParamNum);
}
int  __stdcall dx_SetVSConstSIArray( int  ConstantIndex, const int *  ParamArray, int  ParamNum)
{
	return SetVSConstSIArray( ConstantIndex, ParamArray, ParamNum);
}
int  __stdcall dx_SetVSConstIArray( int  ConstantIndex, const INT4 *  ParamArray, int  ParamNum)
{
	return SetVSConstIArray( ConstantIndex, ParamArray, ParamNum);
}
int  __stdcall dx_SetVSConstBArray( int  ConstantIndex, const BOOL *  ParamArray, int  ParamNum)
{
	return SetVSConstBArray( ConstantIndex, ParamArray, ParamNum);
}
int  __stdcall dx_ResetVSConstF( int  ConstantIndex, int  ParamNum)
{
	return ResetVSConstF( ConstantIndex, ParamNum);
}
int  __stdcall dx_ResetVSConstI( int  ConstantIndex, int  ParamNum)
{
	return ResetVSConstI( ConstantIndex, ParamNum);
}
int  __stdcall dx_ResetVSConstB( int  ConstantIndex, int  ParamNum)
{
	return ResetVSConstB( ConstantIndex, ParamNum);
}
int  __stdcall dx_SetPSConstSF( int  ConstantIndex, float  Param)
{
	return SetPSConstSF( ConstantIndex, Param);
}
int  __stdcall dx_SetPSConstF( int  ConstantIndex, FLOAT4  Param)
{
	return SetPSConstF( ConstantIndex, Param);
}
int  __stdcall dx_SetPSConstFMtx( int  ConstantIndex, MATRIX  Param)
{
	return SetPSConstFMtx( ConstantIndex, Param);
}
int  __stdcall dx_SetPSConstFMtxT( int  ConstantIndex, MATRIX  Param)
{
	return SetPSConstFMtxT( ConstantIndex, Param);
}
int  __stdcall dx_SetPSConstSI( int  ConstantIndex, int  Param)
{
	return SetPSConstSI( ConstantIndex, Param);
}
int  __stdcall dx_SetPSConstI( int  ConstantIndex, INT4  Param)
{
	return SetPSConstI( ConstantIndex, Param);
}
int  __stdcall dx_SetPSConstB( int  ConstantIndex, BOOL  Param)
{
	return SetPSConstB( ConstantIndex, Param);
}
int  __stdcall dx_SetPSConstSFArray( int  ConstantIndex, const float *  ParamArray, int  ParamNum)
{
	return SetPSConstSFArray( ConstantIndex, ParamArray, ParamNum);
}
int  __stdcall dx_SetPSConstFArray( int  ConstantIndex, const FLOAT4 *  ParamArray, int  ParamNum)
{
	return SetPSConstFArray( ConstantIndex, ParamArray, ParamNum);
}
int  __stdcall dx_SetPSConstFMtxArray( int  ConstantIndex, const MATRIX *  ParamArray, int  ParamNum)
{
	return SetPSConstFMtxArray( ConstantIndex, ParamArray, ParamNum);
}
int  __stdcall dx_SetPSConstFMtxTArray( int  ConstantIndex, const MATRIX *  ParamArray, int  ParamNum)
{
	return SetPSConstFMtxTArray( ConstantIndex, ParamArray, ParamNum);
}
int  __stdcall dx_SetPSConstSIArray( int  ConstantIndex, const int *  ParamArray, int  ParamNum)
{
	return SetPSConstSIArray( ConstantIndex, ParamArray, ParamNum);
}
int  __stdcall dx_SetPSConstIArray( int  ConstantIndex, const INT4 *  ParamArray, int  ParamNum)
{
	return SetPSConstIArray( ConstantIndex, ParamArray, ParamNum);
}
int  __stdcall dx_SetPSConstBArray( int  ConstantIndex, const BOOL *  ParamArray, int  ParamNum)
{
	return SetPSConstBArray( ConstantIndex, ParamArray, ParamNum);
}
int  __stdcall dx_ResetPSConstF( int  ConstantIndex, int  ParamNum)
{
	return ResetPSConstF( ConstantIndex, ParamNum);
}
int  __stdcall dx_ResetPSConstI( int  ConstantIndex, int  ParamNum)
{
	return ResetPSConstI( ConstantIndex, ParamNum);
}
int  __stdcall dx_ResetPSConstB( int  ConstantIndex, int  ParamNum)
{
	return ResetPSConstB( ConstantIndex, ParamNum);
}
int  __stdcall dx_SetRenderTargetToShader( int  TargetIndex, int  DrawScreen, int  SurfaceIndex)
{
	return SetRenderTargetToShader( TargetIndex, DrawScreen, SurfaceIndex);
}
int  __stdcall dx_SetUseTextureToShader( int  StageIndex, int  GraphHandle)
{
	return SetUseTextureToShader( StageIndex, GraphHandle);
}
int  __stdcall dx_SetUseVertexShader( int  ShaderHandle)
{
	return SetUseVertexShader( ShaderHandle);
}
int  __stdcall dx_SetUsePixelShader( int  ShaderHandle)
{
	return SetUsePixelShader( ShaderHandle);
}
int  __stdcall dx_CalcPolygonBinormalAndTangentsToShader( VERTEX3DSHADER *  Vertex, int  PolygonNum)
{
	return CalcPolygonBinormalAndTangentsToShader( Vertex, PolygonNum);
}
int  __stdcall dx_CalcPolygonIndexedBinormalAndTangentsToShader( VERTEX3DSHADER *  Vertex, int  VertexNum, const unsigned short *  Indices, int  PolygonNum)
{
	return CalcPolygonIndexedBinormalAndTangentsToShader( Vertex, VertexNum, Indices, PolygonNum);
}
int  __stdcall dx_DrawBillboard3DToShader( VECTOR  Pos, float  cx, float  cy, float  Size, float  Angle, int  GrHandle, int  TransFlag, int  TurnFlag)
{
	return DrawBillboard3DToShader( Pos, cx, cy, Size, Angle, GrHandle, TransFlag, TurnFlag);
}
int  __stdcall dx_DrawPolygon2DToShader( const VERTEX2DSHADER *  Vertex, int  PolygonNum)
{
	return DrawPolygon2DToShader( Vertex, PolygonNum);
}
int  __stdcall dx_DrawPolygon3DToShader( const VERTEX3DSHADER *  Vertex, int  PolygonNum)
{
	return DrawPolygon3DToShader( Vertex, PolygonNum);
}
int  __stdcall dx_DrawPolygonIndexed2DToShader( const VERTEX2DSHADER *  Vertex, int  VertexNum, const unsigned short *  Indices, int  PolygonNum)
{
	return DrawPolygonIndexed2DToShader( Vertex, VertexNum, Indices, PolygonNum);
}
int  __stdcall dx_DrawPolygonIndexed3DToShader( const VERTEX3DSHADER *  Vertex, int  VertexNum, const unsigned short *  Indices, int  PolygonNum)
{
	return DrawPolygonIndexed3DToShader( Vertex, VertexNum, Indices, PolygonNum);
}
int  __stdcall dx_DrawPrimitive2DToShader( const VERTEX2DSHADER *  Vertex, int  VertexNum, int  PrimitiveType)
{
	return DrawPrimitive2DToShader( Vertex, VertexNum, PrimitiveType);
}
int  __stdcall dx_DrawPrimitive3DToShader( const VERTEX3DSHADER *  Vertex, int  VertexNum, int  PrimitiveType)
{
	return DrawPrimitive3DToShader( Vertex, VertexNum, PrimitiveType);
}
int  __stdcall dx_DrawPrimitiveIndexed2DToShader( const VERTEX2DSHADER *  Vertex, int  VertexNum, const unsigned short *  Indices, int  IndexNum, int  PrimitiveType)
{
	return DrawPrimitiveIndexed2DToShader( Vertex, VertexNum, Indices, IndexNum, PrimitiveType);
}
int  __stdcall dx_DrawPrimitiveIndexed3DToShader( const VERTEX3DSHADER *  Vertex, int  VertexNum, const unsigned short *  Indices, int  IndexNum, int  PrimitiveType)
{
	return DrawPrimitiveIndexed3DToShader( Vertex, VertexNum, Indices, IndexNum, PrimitiveType);
}
int  __stdcall dx_DrawPolygon3DToShader_UseVertexBuffer( int  VertexBufHandle)
{
	return DrawPolygon3DToShader_UseVertexBuffer( VertexBufHandle);
}
int  __stdcall dx_DrawPolygonIndexed3DToShader_UseVertexBuffer( int  VertexBufHandle, int  IndexBufHandle)
{
	return DrawPolygonIndexed3DToShader_UseVertexBuffer( VertexBufHandle, IndexBufHandle);
}
int  __stdcall dx_DrawPrimitive3DToShader_UseVertexBuffer( int  VertexBufHandle, int  PrimitiveType)
{
	return DrawPrimitive3DToShader_UseVertexBuffer( VertexBufHandle, PrimitiveType);
}
int  __stdcall dx_DrawPrimitive3DToShader_UseVertexBuffer2( int  VertexBufHandle, int  PrimitiveType, int  StartVertex, int  UseVertexNum)
{
	return DrawPrimitive3DToShader_UseVertexBuffer2( VertexBufHandle, PrimitiveType, StartVertex, UseVertexNum);
}
int  __stdcall dx_DrawPrimitiveIndexed3DToShader_UseVertexBuffer( int  VertexBufHandle, int  IndexBufHandle, int  PrimitiveType)
{
	return DrawPrimitiveIndexed3DToShader_UseVertexBuffer( VertexBufHandle, IndexBufHandle, PrimitiveType);
}
int  __stdcall dx_DrawPrimitiveIndexed3DToShader_UseVertexBuffer2( int  VertexBufHandle, int  IndexBufHandle, int  PrimitiveType, int  BaseVertex, int  StartVertex, int  UseVertexNum, int  StartIndex, int  UseIndexNum)
{
	return DrawPrimitiveIndexed3DToShader_UseVertexBuffer2( VertexBufHandle, IndexBufHandle, PrimitiveType, BaseVertex, StartVertex, UseVertexNum, StartIndex, UseIndexNum);
}
int  __stdcall dx_InitShaderConstantBuffer( void)
{
	return InitShaderConstantBuffer( );
}
int  __stdcall dx_CreateShaderConstantBuffer( int  BufferSize)
{
	return CreateShaderConstantBuffer( BufferSize);
}
int  __stdcall dx_DeleteShaderConstantBuffer( int  SConstBufHandle)
{
	return DeleteShaderConstantBuffer( SConstBufHandle);
}
void *  __stdcall dx_GetBufferShaderConstantBuffer( int  SConstBufHandle)
{
	return GetBufferShaderConstantBuffer( SConstBufHandle);
}
int  __stdcall dx_UpdateShaderConstantBuffer( int  SConstBufHandle)
{
	return UpdateShaderConstantBuffer( SConstBufHandle);
}
int  __stdcall dx_SetShaderConstantBuffer( int  SConstBufHandle, int  TargetShader, int  Slot)
{
	return SetShaderConstantBuffer( SConstBufHandle, TargetShader, Slot);
}
int  __stdcall dx_PlayMovie( const char * FileName, int  ExRate, int  PlayType)
{
	return PlayMovie( FileName, ExRate, PlayType);
}
int  __stdcall dx_OpenMovieToGraph( const char * FileName, int  FullColor)
{
	return OpenMovieToGraph( FileName, FullColor);
}
int  __stdcall dx_PlayMovieToGraph( int  GraphHandle, int  PlayType, int  SysPlay)
{
	return PlayMovieToGraph( GraphHandle, PlayType, SysPlay);
}
int  __stdcall dx_PauseMovieToGraph( int  GraphHandle, int  SysPause)
{
	return PauseMovieToGraph( GraphHandle, SysPause);
}
int  __stdcall dx_AddMovieFrameToGraph( int  GraphHandle, unsigned int  FrameNum)
{
	return AddMovieFrameToGraph( GraphHandle, FrameNum);
}
int  __stdcall dx_SeekMovieToGraph( int  GraphHandle, int  Time)
{
	return SeekMovieToGraph( GraphHandle, Time);
}
int  __stdcall dx_SetPlaySpeedRateMovieToGraph( int  GraphHandle, double  SpeedRate)
{
	return SetPlaySpeedRateMovieToGraph( GraphHandle, SpeedRate);
}
int  __stdcall dx_GetMovieStateToGraph( int  GraphHandle)
{
	return GetMovieStateToGraph( GraphHandle);
}
int  __stdcall dx_SetMovieVolumeToGraph( int  Volume, int  GraphHandle)
{
	return SetMovieVolumeToGraph( Volume, GraphHandle);
}
int  __stdcall dx_ChangeMovieVolumeToGraph( int  Volume, int  GraphHandle)
{
	return ChangeMovieVolumeToGraph( Volume, GraphHandle);
}
const BASEIMAGE * __stdcall dx_GetMovieBaseImageToGraph( int GraphHandle , int * ImageUpdateFlag ) 
{
	return GetMovieBaseImageToGraph( GraphHandle , ImageUpdateFlag  ) ;
}
int  __stdcall dx_GetMovieTotalFrameToGraph( int  GraphHandle)
{
	return GetMovieTotalFrameToGraph( GraphHandle);
}
int  __stdcall dx_TellMovieToGraph( int  GraphHandle)
{
	return TellMovieToGraph( GraphHandle);
}
int  __stdcall dx_TellMovieToGraphToFrame( int  GraphHandle)
{
	return TellMovieToGraphToFrame( GraphHandle);
}
int  __stdcall dx_SeekMovieToGraphToFrame( int  GraphHandle, int  Frame)
{
	return SeekMovieToGraphToFrame( GraphHandle, Frame);
}
LONGLONG  __stdcall dx_GetOneFrameTimeMovieToGraph( int  GraphHandle)
{
	return GetOneFrameTimeMovieToGraph( GraphHandle);
}
int  __stdcall dx_GetLastUpdateTimeMovieToGraph( int  GraphHandle)
{
	return GetLastUpdateTimeMovieToGraph( GraphHandle);
}
int  __stdcall dx_SetMovieRightImageAlphaFlag( int  Flag)
{
	return SetMovieRightImageAlphaFlag( Flag);
}
int  __stdcall dx_SetMovieColorA8R8G8B8Flag( int  Flag)
{
	return SetMovieColorA8R8G8B8Flag( Flag);
}
int  __stdcall dx_SetMovieUseYUVFormatSurfaceFlag( int  Flag)
{
	return SetMovieUseYUVFormatSurfaceFlag( Flag);
}
int  __stdcall dx_SetCameraNearFar( float  Near, float  Far)
{
	return SetCameraNearFar( Near, Far);
}
int  __stdcall dx_SetCameraNearFarD( double  Near, double  Far)
{
	return SetCameraNearFarD( Near, Far);
}
int  __stdcall dx_SetCameraPositionAndTarget_UpVecY( VECTOR  Position, VECTOR  Target)
{
	return SetCameraPositionAndTarget_UpVecY( Position, Target);
}
int  __stdcall dx_SetCameraPositionAndTarget_UpVecYD( VECTOR_D  Position, VECTOR_D  Target)
{
	return SetCameraPositionAndTarget_UpVecYD( Position, Target);
}
int  __stdcall dx_SetCameraPositionAndTargetAndUpVec( VECTOR  Position, VECTOR  TargetPosition, VECTOR  UpVector)
{
	return SetCameraPositionAndTargetAndUpVec( Position, TargetPosition, UpVector);
}
int  __stdcall dx_SetCameraPositionAndTargetAndUpVecD( VECTOR_D  Position, VECTOR_D  TargetPosition, VECTOR_D  UpVector)
{
	return SetCameraPositionAndTargetAndUpVecD( Position, TargetPosition, UpVector);
}
int  __stdcall dx_SetCameraPositionAndAngle( VECTOR  Position, float  VRotate, float  HRotate, float  TRotate)
{
	return SetCameraPositionAndAngle( Position, VRotate, HRotate, TRotate);
}
int  __stdcall dx_SetCameraPositionAndAngleD( VECTOR_D  Position, double  VRotate, double  HRotate, double  TRotate)
{
	return SetCameraPositionAndAngleD( Position, VRotate, HRotate, TRotate);
}
int  __stdcall dx_SetCameraViewMatrix( MATRIX  ViewMatrix)
{
	return SetCameraViewMatrix( ViewMatrix);
}
int  __stdcall dx_SetCameraViewMatrixD( MATRIX_D  ViewMatrix)
{
	return SetCameraViewMatrixD( ViewMatrix);
}
int  __stdcall dx_SetCameraScreenCenter( float  x, float  y)
{
	return SetCameraScreenCenter( x, y);
}
int  __stdcall dx_SetCameraScreenCenterD( double  x, double  y)
{
	return SetCameraScreenCenterD( x, y);
}
int  __stdcall dx_SetupCamera_Perspective( float  Fov)
{
	return SetupCamera_Perspective( Fov);
}
int  __stdcall dx_SetupCamera_PerspectiveD( double  Fov)
{
	return SetupCamera_PerspectiveD( Fov);
}
int  __stdcall dx_SetupCamera_Ortho( float  Size)
{
	return SetupCamera_Ortho( Size);
}
int  __stdcall dx_SetupCamera_OrthoD( double  Size)
{
	return SetupCamera_OrthoD( Size);
}
int  __stdcall dx_SetupCamera_ProjectionMatrix( MATRIX  ProjectionMatrix)
{
	return SetupCamera_ProjectionMatrix( ProjectionMatrix);
}
int  __stdcall dx_SetupCamera_ProjectionMatrixD( MATRIX_D  ProjectionMatrix)
{
	return SetupCamera_ProjectionMatrixD( ProjectionMatrix);
}
int  __stdcall dx_SetCameraDotAspect( float  DotAspect)
{
	return SetCameraDotAspect( DotAspect);
}
int  __stdcall dx_SetCameraDotAspectD( double  DotAspect)
{
	return SetCameraDotAspectD( DotAspect);
}
int  __stdcall dx_CheckCameraViewClip( VECTOR  CheckPos)
{
	return CheckCameraViewClip( CheckPos);
}
int  __stdcall dx_CheckCameraViewClipD( VECTOR_D  CheckPos)
{
	return CheckCameraViewClipD( CheckPos);
}
int  __stdcall dx_CheckCameraViewClip_Dir( VECTOR  CheckPos)
{
	return CheckCameraViewClip_Dir( CheckPos);
}
int  __stdcall dx_CheckCameraViewClip_DirD( VECTOR_D  CheckPos)
{
	return CheckCameraViewClip_DirD( CheckPos);
}
int  __stdcall dx_CheckCameraViewClip_Box( VECTOR  BoxPos1, VECTOR  BoxPos2)
{
	return CheckCameraViewClip_Box( BoxPos1, BoxPos2);
}
int  __stdcall dx_CheckCameraViewClip_BoxD( VECTOR_D  BoxPos1, VECTOR_D  BoxPos2)
{
	return CheckCameraViewClip_BoxD( BoxPos1, BoxPos2);
}
float  __stdcall dx_GetCameraNear( void)
{
	return GetCameraNear( );
}
double __stdcall dx_GetCameraNearD( void )
{
	return GetCameraNearD(  ) ;
}
float  __stdcall dx_GetCameraFar( void)
{
	return GetCameraFar( );
}
double __stdcall dx_GetCameraFarD( void )
{
	return GetCameraFarD(  ) ;
}
VECTOR  __stdcall dx_GetCameraPosition( void)
{
	return GetCameraPosition( );
}
VECTOR_D  __stdcall dx_GetCameraPositionD( void)
{
	return GetCameraPositionD( );
}
VECTOR  __stdcall dx_GetCameraTarget( void)
{
	return GetCameraTarget( );
}
VECTOR_D  __stdcall dx_GetCameraTargetD( void)
{
	return GetCameraTargetD( );
}
VECTOR  __stdcall dx_GetCameraUpVector( void)
{
	return GetCameraUpVector( );
}
VECTOR_D  __stdcall dx_GetCameraUpVectorD( void)
{
	return GetCameraUpVectorD( );
}
float  __stdcall dx_GetCameraAngleHRotate( void)
{
	return GetCameraAngleHRotate( );
}
double __stdcall dx_GetCameraAngleHRotateD( void )
{
	return GetCameraAngleHRotateD(  ) ;
}
float  __stdcall dx_GetCameraAngleVRotate( void)
{
	return GetCameraAngleVRotate( );
}
double __stdcall dx_GetCameraAngleVRotateD( void )
{
	return GetCameraAngleVRotateD(  ) ;
}
float  __stdcall dx_GetCameraAngleTRotate( void)
{
	return GetCameraAngleTRotate( );
}
double __stdcall dx_GetCameraAngleTRotateD( void )
{
	return GetCameraAngleTRotateD(  ) ;
}
MATRIX  __stdcall dx_GetCameraViewMatrix( void)
{
	return GetCameraViewMatrix( );
}
MATRIX_D  __stdcall dx_GetCameraViewMatrixD( void)
{
	return GetCameraViewMatrixD( );
}
MATRIX  __stdcall dx_GetCameraBillboardMatrix( void)
{
	return GetCameraBillboardMatrix( );
}
MATRIX_D  __stdcall dx_GetCameraBillboardMatrixD( void)
{
	return GetCameraBillboardMatrixD( );
}
int  __stdcall dx_GetCameraScreenCenter( float *  x, float *  y)
{
	return GetCameraScreenCenter( x, y);
}
int  __stdcall dx_GetCameraScreenCenterD( double *  x, double *  y)
{
	return GetCameraScreenCenterD( x, y);
}
float  __stdcall dx_GetCameraFov( void)
{
	return GetCameraFov( );
}
double __stdcall dx_GetCameraFovD( void )
{
	return GetCameraFovD(  ) ;
}
float  __stdcall dx_GetCameraSize( void)
{
	return GetCameraSize( );
}
double __stdcall dx_GetCameraSizeD( void )
{
	return GetCameraSizeD(  ) ;
}
MATRIX  __stdcall dx_GetCameraProjectionMatrix( void)
{
	return GetCameraProjectionMatrix( );
}
MATRIX_D  __stdcall dx_GetCameraProjectionMatrixD( void)
{
	return GetCameraProjectionMatrixD( );
}
float  __stdcall dx_GetCameraDotAspect( void)
{
	return GetCameraDotAspect( );
}
double __stdcall dx_GetCameraDotAspectD( void )
{
	return GetCameraDotAspectD(  ) ;
}
MATRIX  __stdcall dx_GetCameraViewportMatrix( void)
{
	return GetCameraViewportMatrix( );
}
MATRIX_D  __stdcall dx_GetCameraViewportMatrixD( void)
{
	return GetCameraViewportMatrixD( );
}
MATRIX  __stdcall dx_GetCameraAPIViewportMatrix( void)
{
	return GetCameraAPIViewportMatrix( );
}
MATRIX_D  __stdcall dx_GetCameraAPIViewportMatrixD( void)
{
	return GetCameraAPIViewportMatrixD( );
}
int  __stdcall dx_SetUseLighting( int  Flag)
{
	return SetUseLighting( Flag);
}
int  __stdcall dx_SetMaterialUseVertDifColor( int  UseFlag)
{
	return SetMaterialUseVertDifColor( UseFlag);
}
int  __stdcall dx_SetMaterialUseVertSpcColor( int  UseFlag)
{
	return SetMaterialUseVertSpcColor( UseFlag);
}
int  __stdcall dx_SetMaterialParam( MATERIALPARAM  Material)
{
	return SetMaterialParam( Material);
}
int  __stdcall dx_SetUseSpecular( int  UseFlag)
{
	return SetUseSpecular( UseFlag);
}
int  __stdcall dx_SetGlobalAmbientLight( COLOR_F  Color)
{
	return SetGlobalAmbientLight( Color);
}
int  __stdcall dx_ChangeLightTypeDir( VECTOR  Direction)
{
	return ChangeLightTypeDir( Direction);
}
int  __stdcall dx_ChangeLightTypeSpot( VECTOR  Position, VECTOR  Direction, float  OutAngle, float  InAngle, float  Range, float  Atten0, float  Atten1, float  Atten2)
{
	return ChangeLightTypeSpot( Position, Direction, OutAngle, InAngle, Range, Atten0, Atten1, Atten2);
}
int  __stdcall dx_ChangeLightTypePoint( VECTOR  Position, float  Range, float  Atten0, float  Atten1, float  Atten2)
{
	return ChangeLightTypePoint( Position, Range, Atten0, Atten1, Atten2);
}
int  __stdcall dx_GetLightType( void)
{
	return GetLightType( );
}
int  __stdcall dx_SetLightEnable( int  EnableFlag)
{
	return SetLightEnable( EnableFlag);
}
int  __stdcall dx_GetLightEnable( void)
{
	return GetLightEnable( );
}
int  __stdcall dx_SetLightDifColor( COLOR_F  Color)
{
	return SetLightDifColor( Color);
}
COLOR_F  __stdcall dx_GetLightDifColor( void)
{
	return GetLightDifColor( );
}
int  __stdcall dx_SetLightSpcColor( COLOR_F  Color)
{
	return SetLightSpcColor( Color);
}
COLOR_F  __stdcall dx_GetLightSpcColor( void)
{
	return GetLightSpcColor( );
}
int  __stdcall dx_SetLightAmbColor( COLOR_F  Color)
{
	return SetLightAmbColor( Color);
}
COLOR_F  __stdcall dx_GetLightAmbColor( void)
{
	return GetLightAmbColor( );
}
int  __stdcall dx_SetLightDirection( VECTOR  Direction)
{
	return SetLightDirection( Direction);
}
VECTOR  __stdcall dx_GetLightDirection( void)
{
	return GetLightDirection( );
}
int  __stdcall dx_SetLightPosition( VECTOR  Position)
{
	return SetLightPosition( Position);
}
VECTOR  __stdcall dx_GetLightPosition( void)
{
	return GetLightPosition( );
}
int  __stdcall dx_SetLightRangeAtten( float  Range, float  Atten0, float  Atten1, float  Atten2)
{
	return SetLightRangeAtten( Range, Atten0, Atten1, Atten2);
}
int  __stdcall dx_GetLightRangeAtten( float *  Range, float *  Atten0, float *  Atten1, float *  Atten2)
{
	return GetLightRangeAtten( Range, Atten0, Atten1, Atten2);
}
int  __stdcall dx_SetLightAngle( float  OutAngle, float  InAngle)
{
	return SetLightAngle( OutAngle, InAngle);
}
int  __stdcall dx_GetLightAngle( float *  OutAngle, float *  InAngle)
{
	return GetLightAngle( OutAngle, InAngle);
}
int  __stdcall dx_SetLightUseShadowMap( int  SmSlotIndex, int  UseFlag)
{
	return SetLightUseShadowMap( SmSlotIndex, UseFlag);
}
int  __stdcall dx_CreateDirLightHandle( VECTOR  Direction)
{
	return CreateDirLightHandle( Direction);
}
int  __stdcall dx_CreateSpotLightHandle( VECTOR  Position, VECTOR  Direction, float  OutAngle, float  InAngle, float  Range, float  Atten0, float  Atten1, float  Atten2)
{
	return CreateSpotLightHandle( Position, Direction, OutAngle, InAngle, Range, Atten0, Atten1, Atten2);
}
int  __stdcall dx_CreatePointLightHandle( VECTOR  Position, float  Range, float  Atten0, float  Atten1, float  Atten2)
{
	return CreatePointLightHandle( Position, Range, Atten0, Atten1, Atten2);
}
int  __stdcall dx_DeleteLightHandle( int  LHandle)
{
	return DeleteLightHandle( LHandle);
}
int  __stdcall dx_DeleteLightHandleAll( void)
{
	return DeleteLightHandleAll( );
}
int  __stdcall dx_SetLightTypeHandle( int  LHandle, int  LightType)
{
	return SetLightTypeHandle( LHandle, LightType);
}
int  __stdcall dx_SetLightEnableHandle( int  LHandle, int  EnableFlag)
{
	return SetLightEnableHandle( LHandle, EnableFlag);
}
int  __stdcall dx_SetLightDifColorHandle( int  LHandle, COLOR_F  Color)
{
	return SetLightDifColorHandle( LHandle, Color);
}
int  __stdcall dx_SetLightSpcColorHandle( int  LHandle, COLOR_F  Color)
{
	return SetLightSpcColorHandle( LHandle, Color);
}
int  __stdcall dx_SetLightAmbColorHandle( int  LHandle, COLOR_F  Color)
{
	return SetLightAmbColorHandle( LHandle, Color);
}
int  __stdcall dx_SetLightDirectionHandle( int  LHandle, VECTOR  Direction)
{
	return SetLightDirectionHandle( LHandle, Direction);
}
int  __stdcall dx_SetLightPositionHandle( int  LHandle, VECTOR  Position)
{
	return SetLightPositionHandle( LHandle, Position);
}
int  __stdcall dx_SetLightRangeAttenHandle( int  LHandle, float  Range, float  Atten0, float  Atten1, float  Atten2)
{
	return SetLightRangeAttenHandle( LHandle, Range, Atten0, Atten1, Atten2);
}
int  __stdcall dx_SetLightAngleHandle( int  LHandle, float  OutAngle, float  InAngle)
{
	return SetLightAngleHandle( LHandle, OutAngle, InAngle);
}
int  __stdcall dx_SetLightUseShadowMapHandle( int  LHandle, int  SmSlotIndex, int  UseFlag)
{
	return SetLightUseShadowMapHandle( LHandle, SmSlotIndex, UseFlag);
}
int  __stdcall dx_GetLightTypeHandle( int  LHandle)
{
	return GetLightTypeHandle( LHandle);
}
int  __stdcall dx_GetLightEnableHandle( int  LHandle)
{
	return GetLightEnableHandle( LHandle);
}
COLOR_F  __stdcall dx_GetLightDifColorHandle( int  LHandle)
{
	return GetLightDifColorHandle( LHandle);
}
COLOR_F  __stdcall dx_GetLightSpcColorHandle( int  LHandle)
{
	return GetLightSpcColorHandle( LHandle);
}
COLOR_F  __stdcall dx_GetLightAmbColorHandle( int  LHandle)
{
	return GetLightAmbColorHandle( LHandle);
}
VECTOR  __stdcall dx_GetLightDirectionHandle( int  LHandle)
{
	return GetLightDirectionHandle( LHandle);
}
VECTOR  __stdcall dx_GetLightPositionHandle( int  LHandle)
{
	return GetLightPositionHandle( LHandle);
}
int  __stdcall dx_GetLightRangeAttenHandle( int  LHandle, float *  Range, float *  Atten0, float *  Atten1, float *  Atten2)
{
	return GetLightRangeAttenHandle( LHandle, Range, Atten0, Atten1, Atten2);
}
int  __stdcall dx_GetLightAngleHandle( int  LHandle, float *  OutAngle, float *  InAngle)
{
	return GetLightAngleHandle( LHandle, OutAngle, InAngle);
}
int  __stdcall dx_GetEnableLightHandleNum( void)
{
	return GetEnableLightHandleNum( );
}
int  __stdcall dx_GetEnableLightHandle( int  Index)
{
	return GetEnableLightHandle( Index);
}
int  __stdcall dx_GetTexFormatIndex( const IMAGEFORMATDESC *  Format)
{
	return GetTexFormatIndex( Format);
}
int  __stdcall dx_CreateMaskScreen( void)
{
	return CreateMaskScreen( );
}
int  __stdcall dx_DeleteMaskScreen( void)
{
	return DeleteMaskScreen( );
}
int  __stdcall dx_DrawMaskToDirectData( int  x, int  y, int  Width, int  Height, const void * MaskData, int  TransMode)
{
	return DrawMaskToDirectData( x, y, Width, Height, MaskData, TransMode);
}
int  __stdcall dx_DrawFillMaskToDirectData( int  x1, int  y1, int  x2, int  y2, int  Width, int  Height, const void * MaskData)
{
	return DrawFillMaskToDirectData( x1, y1, x2, y2, Width, Height, MaskData);
}
int  __stdcall dx_SetUseMaskScreenFlag( int  ValidFlag)
{
	return SetUseMaskScreenFlag( ValidFlag);
}
int  __stdcall dx_GetUseMaskScreenFlag( void)
{
	return GetUseMaskScreenFlag( );
}
int  __stdcall dx_FillMaskScreen( int  Flag)
{
	return FillMaskScreen( Flag);
}
int  __stdcall dx_SetMaskScreenGraph( int  GraphHandle)
{
	return SetMaskScreenGraph( GraphHandle);
}
int  __stdcall dx_SetMaskScreenGraphUseChannel( int  UseChannel)
{
	return SetMaskScreenGraphUseChannel( UseChannel);
}
int  __stdcall dx_InitMask( void)
{
	return InitMask( );
}
int  __stdcall dx_MakeMask( int  Width, int  Height)
{
	return MakeMask( Width, Height);
}
int  __stdcall dx_GetMaskSize( int *  WidthBuf, int *  HeightBuf, int  MaskHandle)
{
	return GetMaskSize( WidthBuf, HeightBuf, MaskHandle);
}
int  __stdcall dx_SetDataToMask( int  Width, int  Height, const void * MaskData, int  MaskHandle)
{
	return SetDataToMask( Width, Height, MaskData, MaskHandle);
}
int  __stdcall dx_DeleteMask( int  MaskHandle)
{
	return DeleteMask( MaskHandle);
}
int __stdcall dx_GraphImageBltToMask( const BASEIMAGE * BaseImage , int ImageX , int ImageY , int MaskHandle ) 
{
	return GraphImageBltToMask( BaseImage , ImageX , ImageY , MaskHandle  ) ;
}
int  __stdcall dx_LoadMask( const char * FileName)
{
	return LoadMask( FileName);
}
int  __stdcall dx_LoadDivMask( const char * FileName, int  AllNum, int  XNum, int  YNum, int  XSize, int  YSize, int *  HandleBuf)
{
	return LoadDivMask( FileName, AllNum, XNum, YNum, XSize, YSize, HandleBuf);
}
int  __stdcall dx_CreateMaskFromMem( const void * FileImage, int  FileImageSize)
{
	return CreateMaskFromMem( FileImage, FileImageSize);
}
int  __stdcall dx_CreateDivMaskFromMem( const void * FileImage, int  FileImageSize, int  AllNum, int  XNum, int  YNum, int  XSize, int  YSize, int *  HandleBuf)
{
	return CreateDivMaskFromMem( FileImage, FileImageSize, AllNum, XNum, YNum, XSize, YSize, HandleBuf);
}
int  __stdcall dx_DrawMask( int  x, int  y, int  MaskHandle, int  TransMode)
{
	return DrawMask( x, y, MaskHandle, TransMode);
}
int  __stdcall dx_DrawStringMask( int  x, int  y, int  Flag, const char * String)
{
	return DrawStringMask( x, y, Flag, String);
}
int  __stdcall dx_DrawStringMaskToHandle( int  x, int  y, int  Flag, int  FontHandle, const char * String)
{
	return DrawStringMaskToHandle( x, y, Flag, FontHandle, String);
}
int  __stdcall dx_DrawFillMask( int  x1, int  y1, int  x2, int  y2, int  MaskHandle)
{
	return DrawFillMask( x1, y1, x2, y2, MaskHandle);
}
int  __stdcall dx_SetMaskReverseEffectFlag( int  ReverseFlag)
{
	return SetMaskReverseEffectFlag( ReverseFlag);
}
int  __stdcall dx_GetMaskScreenData( int  x1, int  y1, int  x2, int  y2, int  MaskHandle)
{
	return GetMaskScreenData( x1, y1, x2, y2, MaskHandle);
}
int  __stdcall dx_GetMaskUseFlag( void)
{
	return GetMaskUseFlag( );
}
int  __stdcall dx_EnumFontName( TCHAR *  NameBuffer, int  NameBufferNum, int  JapanOnlyFlag)
{
	return EnumFontName( NameBuffer, NameBufferNum, JapanOnlyFlag);
}
int  __stdcall dx_EnumFontNameEx( TCHAR *  NameBuffer, int  NameBufferNum, int  CharSet)
{
	return EnumFontNameEx( NameBuffer, NameBufferNum, CharSet);
}
int  __stdcall dx_EnumFontNameEx2( TCHAR *  NameBuffer, int  NameBufferNum, const char * EnumFontName, int  CharSet)
{
	return EnumFontNameEx2( NameBuffer, NameBufferNum, EnumFontName, CharSet);
}
int  __stdcall dx_CheckFontName( const char * FontName, int  CharSet)
{
	return CheckFontName( FontName, CharSet);
}
int  __stdcall dx_InitFontToHandle( void)
{
	return InitFontToHandle( );
}
int  __stdcall dx_CreateFontToHandle( const char * FontName, int  Size, int  Thick, int  FontType, int  CharSet, int  EdgeSize, int  Italic, int  Handle)
{
	return CreateFontToHandle( FontName, Size, Thick, FontType, CharSet, EdgeSize, Italic, Handle);
}
int  __stdcall dx_LoadFontDataToHandle( const char * FileName, int  EdgeSize)
{
	return LoadFontDataToHandle( FileName, EdgeSize);
}
int  __stdcall dx_LoadFontDataFromMemToHandle( const void * FontDataImage, int  FontDataImageSize, int  EdgeSize)
{
	return LoadFontDataFromMemToHandle( FontDataImage, FontDataImageSize, EdgeSize);
}
int  __stdcall dx_SetFontSpaceToHandle( int  Pixel, int  FontHandle)
{
	return SetFontSpaceToHandle( Pixel, FontHandle);
}
int  __stdcall dx_SetFontLineSpaceToHandle( int  Pixel, int  FontHandle)
{
	return SetFontLineSpaceToHandle( Pixel, FontHandle);
}
int  __stdcall dx_SetFontCharCodeFormatToHandle( int  CharCodeFormat, int  FontHandle)
{
	return SetFontCharCodeFormatToHandle( CharCodeFormat, FontHandle);
}
int  __stdcall dx_DeleteFontToHandle( int  FontHandle)
{
	return DeleteFontToHandle( FontHandle);
}
int  __stdcall dx_SetFontLostFlag( int  FontHandle, int *  LostFlag)
{
	return SetFontLostFlag( FontHandle, LostFlag);
}
int  __stdcall dx_AddFontImageToHandle( int  FontHandle, const char * Char, int  GrHandle, int  DrawX, int  DrawY, int  AddX)
{
	return AddFontImageToHandle( FontHandle, Char, GrHandle, DrawX, DrawY, AddX);
}
int  __stdcall dx_SubFontImageToHandle( int  FontHandle, const char * Char)
{
	return SubFontImageToHandle( FontHandle, Char);
}
int  __stdcall dx_ChangeFont( const char * FontName, int  CharSet)
{
	return ChangeFont( FontName, CharSet);
}
int  __stdcall dx_ChangeFontType( int  FontType)
{
	return ChangeFontType( FontType);
}
int  __stdcall dx_SetFontSize( int  FontSize)
{
	return SetFontSize( FontSize);
}
int  __stdcall dx_GetFontSize( void)
{
	return GetFontSize( );
}
int  __stdcall dx_SetFontThickness( int  ThickPal)
{
	return SetFontThickness( ThickPal);
}
int  __stdcall dx_SetFontSpace( int  Pixel)
{
	return SetFontSpace( Pixel);
}
int  __stdcall dx_GetFontSpace( void)
{
	return GetFontSpace( );
}
int  __stdcall dx_SetFontLineSpace( int  Pixel)
{
	return SetFontLineSpace( Pixel);
}
int  __stdcall dx_GetFontLineSpace( void)
{
	return GetFontLineSpace( );
}
int  __stdcall dx_SetFontCharCodeFormat( int  CharCodeFormat)
{
	return SetFontCharCodeFormat( CharCodeFormat);
}
int  __stdcall dx_SetDefaultFontState( const char * FontName, int  Size, int  Thick, int  FontType, int  CharSet, int  EdgeSize, int  Italic)
{
	return SetDefaultFontState( FontName, Size, Thick, FontType, CharSet, EdgeSize, Italic);
}
int  __stdcall dx_GetDefaultFontHandle( void)
{
	return GetDefaultFontHandle( );
}
int  __stdcall dx_GetFontMaxWidth( void)
{
	return GetFontMaxWidth( );
}
int  __stdcall dx_GetDrawStringWidth( const char * String, int  StrLen, int  VerticalFlag)
{
	return GetDrawStringWidth( String, StrLen, VerticalFlag);
}
int  __stdcall dx_GetDrawExtendStringWidth( double  ExRateX, const char * String, int  StrLen, int  VerticalFlag)
{
	return GetDrawExtendStringWidth( ExRateX, String, StrLen, VerticalFlag);
}
int  __stdcall dx_GetDrawStringSize( int *  SizeX, int *  SizeY, int *  LineCount, const char * String, int  StrLen, int  VerticalFlag)
{
	return GetDrawStringSize( SizeX, SizeY, LineCount, String, StrLen, VerticalFlag);
}
int  __stdcall dx_GetDrawExtendStringSize( int *  SizeX, int *  SizeY, int *  LineCount, double  ExRateX, double  ExRateY, const char * String, int  StrLen, int  VerticalFlag)
{
	return GetDrawExtendStringSize( SizeX, SizeY, LineCount, ExRateX, ExRateY, String, StrLen, VerticalFlag);
}
int  __stdcall dx_GetFontMaxWidthToHandle( int  FontHandle)
{
	return GetFontMaxWidthToHandle( FontHandle);
}
int  __stdcall dx_GetFontSizeToHandle( int  FontHandle)
{
	return GetFontSizeToHandle( FontHandle);
}
int  __stdcall dx_GetFontSpaceToHandle( int  FontHandle)
{
	return GetFontSpaceToHandle( FontHandle);
}
int  __stdcall dx_GetFontLineSpaceToHandle( int  FontHandle)
{
	return GetFontLineSpaceToHandle( FontHandle);
}
int  __stdcall dx_GetFontCharInfo( int  FontHandle, const char * Char, int *  DrawX, int *  DrawY, int *  NextCharX, int *  SizeX, int *  SizeY)
{
	return GetFontCharInfo( FontHandle, Char, DrawX, DrawY, NextCharX, SizeX, SizeY);
}
int  __stdcall dx_GetDrawStringWidthToHandle( const char * String, int  StrLen, int  FontHandle, int  VerticalFlag)
{
	return GetDrawStringWidthToHandle( String, StrLen, FontHandle, VerticalFlag);
}
int  __stdcall dx_GetDrawExtendStringWidthToHandle( double  ExRateX, const char * String, int  StrLen, int  FontHandle, int  VerticalFlag)
{
	return GetDrawExtendStringWidthToHandle( ExRateX, String, StrLen, FontHandle, VerticalFlag);
}
int  __stdcall dx_GetDrawStringSizeToHandle( int *  SizeX, int *  SizeY, int *  LineCount, const char * String, int  StrLen, int  FontHandle, int  VerticalFlag)
{
	return GetDrawStringSizeToHandle( SizeX, SizeY, LineCount, String, StrLen, FontHandle, VerticalFlag);
}
int  __stdcall dx_GetDrawExtendStringSizeToHandle( int *  SizeX, int *  SizeY, int *  LineCount, double  ExRateX, double  ExRateY, const char * String, int  StrLen, int  FontHandle, int  VerticalFlag)
{
	return GetDrawExtendStringSizeToHandle( SizeX, SizeY, LineCount, ExRateX, ExRateY, String, StrLen, FontHandle, VerticalFlag);
}
int  __stdcall dx_GetFontStateToHandle( TCHAR *  FontName, int *  Size, int *  Thick, int  FontHandle, int *  FontType, int *  CharSet, int *  EdgeSize, int *  Italic)
{
	return GetFontStateToHandle( FontName, Size, Thick, FontHandle, FontType, CharSet, EdgeSize, Italic);
}
int  __stdcall dx_CheckFontCacheToTextureFlag( int  FontHandle)
{
	return CheckFontCacheToTextureFlag( FontHandle);
}
int  __stdcall dx_CheckFontChacheToTextureFlag( int  FontHandle)
{
	return CheckFontChacheToTextureFlag( FontHandle);
}
int  __stdcall dx_CheckFontHandleValid( int  FontHandle)
{
	return CheckFontHandleValid( FontHandle);
}
int  __stdcall dx_SetFontCacheToTextureFlag( int  Flag)
{
	return SetFontCacheToTextureFlag( Flag);
}
int  __stdcall dx_GetFontCacheToTextureFlag( void)
{
	return GetFontCacheToTextureFlag( );
}
int  __stdcall dx_SetFontChacheToTextureFlag( int  Flag)
{
	return SetFontChacheToTextureFlag( Flag);
}
int  __stdcall dx_GetFontChacheToTextureFlag( void)
{
	return GetFontChacheToTextureFlag( );
}
int  __stdcall dx_SetFontCacheTextureColorBitDepth( int  ColorBitDepth)
{
	return SetFontCacheTextureColorBitDepth( ColorBitDepth);
}
int  __stdcall dx_GetFontCacheTextureColorBitDepth( void)
{
	return GetFontCacheTextureColorBitDepth( );
}
int  __stdcall dx_SetFontCacheCharNum( int  CharNum)
{
	return SetFontCacheCharNum( CharNum);
}
int  __stdcall dx_GetFontCacheCharNum( void)
{
	return GetFontCacheCharNum( );
}
int  __stdcall dx_SetFontCacheUsePremulAlphaFlag( int  Flag)
{
	return SetFontCacheUsePremulAlphaFlag( Flag);
}
int  __stdcall dx_GetFontCacheUsePremulAlphaFlag( void)
{
	return GetFontCacheUsePremulAlphaFlag( );
}
int __stdcall dx_FontCacheStringDrawToHandle( int x , int y , const TCHAR * StrData , unsigned int Color , unsigned int EdgeColor , BASEIMAGE * DestImage , const RECT * ClipRect , int FontHandle , int VerticalFlag , SIZE * DrawSizeP ) 
{
	return FontCacheStringDrawToHandle( x , y , StrData , Color , EdgeColor , DestImage , ClipRect , FontHandle , VerticalFlag , DrawSizeP  ) ;
}
int __stdcall dx_FontBaseImageBlt( int x , int y , const TCHAR * StrData , BASEIMAGE * DestImage , BASEIMAGE * DestEdgeImage , int VerticalFlag ) 
{
	return FontBaseImageBlt( x , y , StrData , DestImage , DestEdgeImage , VerticalFlag  ) ;
}
int __stdcall dx_FontBaseImageBltToHandle( int x , int y , const TCHAR * StrData , BASEIMAGE * DestImage , BASEIMAGE * DestEdgeImage , int FontHandle , int VerticalFlag ) 
{
	return FontBaseImageBltToHandle( x , y , StrData , DestImage , DestEdgeImage , FontHandle , VerticalFlag  ) ;
}
int  __stdcall dx_MultiByteCharCheck( const char * Buf, int  CharSet)
{
	return MultiByteCharCheck( Buf, CharSet);
}
int  __stdcall dx_DrawString( int  x, int  y, const char * String, unsigned int  Color, unsigned int  EdgeColor)
{
	return DrawString( x, y, String, Color, EdgeColor);
}
int  __stdcall dx_DrawVString( int  x, int  y, const char * String, unsigned int  Color, unsigned int  EdgeColor)
{
	return DrawVString( x, y, String, Color, EdgeColor);
}
int  __stdcall dx_DrawExtendString( int  x, int  y, double  ExRateX, double  ExRateY, const char * String, unsigned int  Color, unsigned int  EdgeColor)
{
	return DrawExtendString( x, y, ExRateX, ExRateY, String, Color, EdgeColor);
}
int  __stdcall dx_DrawExtendVString( int  x, int  y, double  ExRateX, double  ExRateY, const char * String, unsigned int  Color, unsigned int  EdgeColor)
{
	return DrawExtendVString( x, y, ExRateX, ExRateY, String, Color, EdgeColor);
}
int  __stdcall dx_DrawRotaString( int  x, int  y, double  ExRateX, double  ExRateY, double  RotCenterX, double  RotCenterY, double  RotAngle, unsigned int  Color, unsigned int  EdgeColor, int  VerticalFlag, const char * String)
{
	return DrawRotaString( x, y, ExRateX, ExRateY, RotCenterX, RotCenterY, RotAngle, Color, EdgeColor, VerticalFlag, String);
}
int  __stdcall dx_DrawStringF( float  x, float  y, const char * String, unsigned int  Color, unsigned int  EdgeColor)
{
	return DrawStringF( x, y, String, Color, EdgeColor);
}
int  __stdcall dx_DrawVStringF( float  x, float  y, const char * String, unsigned int  Color, unsigned int  EdgeColor)
{
	return DrawVStringF( x, y, String, Color, EdgeColor);
}
int  __stdcall dx_DrawExtendStringF( float  x, float  y, double  ExRateX, double  ExRateY, const char * String, unsigned int  Color, unsigned int  EdgeColor)
{
	return DrawExtendStringF( x, y, ExRateX, ExRateY, String, Color, EdgeColor);
}
int  __stdcall dx_DrawExtendVStringF( float  x, float  y, double  ExRateX, double  ExRateY, const char * String, unsigned int  Color, unsigned int  EdgeColor)
{
	return DrawExtendVStringF( x, y, ExRateX, ExRateY, String, Color, EdgeColor);
}
int  __stdcall dx_DrawRotaStringF( float  x, float  y, double  ExRateX, double  ExRateY, double  RotCenterX, double  RotCenterY, double  RotAngle, unsigned int  Color, unsigned int  EdgeColor, int  VerticalFlag, const char * String)
{
	return DrawRotaStringF( x, y, ExRateX, ExRateY, RotCenterX, RotCenterY, RotAngle, Color, EdgeColor, VerticalFlag, String);
}
int  __stdcall dx_DrawNumberToI( int  x, int  y, int  Num, int  RisesNum, unsigned int  Color, unsigned int  EdgeColor)
{
	return DrawNumberToI( x, y, Num, RisesNum, Color, EdgeColor);
}
int  __stdcall dx_DrawNumberToF( int  x, int  y, double  Num, int  Length, unsigned int  Color, unsigned int  EdgeColor)
{
	return DrawNumberToF( x, y, Num, Length, Color, EdgeColor);
}
int  __stdcall dx_DrawNumberPlusToI( int  x, int  y, const char * NoteString, int  Num, int  RisesNum, unsigned int  Color, unsigned int  EdgeColor)
{
	return DrawNumberPlusToI( x, y, NoteString, Num, RisesNum, Color, EdgeColor);
}
int  __stdcall dx_DrawNumberPlusToF( int  x, int  y, const char * NoteString, double  Num, int  Length, unsigned int  Color, unsigned int  EdgeColor)
{
	return DrawNumberPlusToF( x, y, NoteString, Num, Length, Color, EdgeColor);
}
int  __stdcall dx_DrawStringToZBuffer( int  x, int  y, const char * String, int  WriteZMode)
{
	return DrawStringToZBuffer( x, y, String, WriteZMode);
}
int  __stdcall dx_DrawVStringToZBuffer( int  x, int  y, const char * String, int  WriteZMode)
{
	return DrawVStringToZBuffer( x, y, String, WriteZMode);
}
int  __stdcall dx_DrawExtendStringToZBuffer( int  x, int  y, double  ExRateX, double  ExRateY, const char * String, int  WriteZMode)
{
	return DrawExtendStringToZBuffer( x, y, ExRateX, ExRateY, String, WriteZMode);
}
int  __stdcall dx_DrawExtendVStringToZBuffer( int  x, int  y, double  ExRateX, double  ExRateY, const char * String, int  WriteZMode)
{
	return DrawExtendVStringToZBuffer( x, y, ExRateX, ExRateY, String, WriteZMode);
}
int  __stdcall dx_DrawStringToHandle( int  x, int  y, const char * String, unsigned int  Color, int  FontHandle, unsigned int  EdgeColor, int  VerticalFlag)
{
	return DrawStringToHandle( x, y, String, Color, FontHandle, EdgeColor, VerticalFlag);
}
int  __stdcall dx_DrawVStringToHandle( int  x, int  y, const char * String, unsigned int  Color, int  FontHandle, unsigned int  EdgeColor)
{
	return DrawVStringToHandle( x, y, String, Color, FontHandle, EdgeColor);
}
int  __stdcall dx_DrawExtendStringToHandle( int  x, int  y, double  ExRateX, double  ExRateY, const char * String, unsigned int  Color, int  FontHandle, unsigned int  EdgeColor, int  VerticalFlag)
{
	return DrawExtendStringToHandle( x, y, ExRateX, ExRateY, String, Color, FontHandle, EdgeColor, VerticalFlag);
}
int  __stdcall dx_DrawExtendVStringToHandle( int  x, int  y, double  ExRateX, double  ExRateY, const char * String, unsigned int  Color, int  FontHandle, unsigned int  EdgeColor)
{
	return DrawExtendVStringToHandle( x, y, ExRateX, ExRateY, String, Color, FontHandle, EdgeColor);
}
int  __stdcall dx_DrawRotaStringToHandle( int  x, int  y, double  ExRateX, double  ExRateY, double  RotCenterX, double  RotCenterY, double  RotAngle, unsigned int  Color, int  FontHandle, unsigned int  EdgeColor, int  VerticalFlag, const char * String)
{
	return DrawRotaStringToHandle( x, y, ExRateX, ExRateY, RotCenterX, RotCenterY, RotAngle, Color, FontHandle, EdgeColor, VerticalFlag, String);
}
int  __stdcall dx_DrawStringFToHandle( float  x, float  y, const char * String, unsigned int  Color, int  FontHandle, unsigned int  EdgeColor, int  VerticalFlag)
{
	return DrawStringFToHandle( x, y, String, Color, FontHandle, EdgeColor, VerticalFlag);
}
int  __stdcall dx_DrawVStringFToHandle( float  x, float  y, const char * String, unsigned int  Color, int  FontHandle, unsigned int  EdgeColor)
{
	return DrawVStringFToHandle( x, y, String, Color, FontHandle, EdgeColor);
}
int  __stdcall dx_DrawExtendStringFToHandle( float  x, float  y, double  ExRateX, double  ExRateY, const char * String, unsigned int  Color, int  FontHandle, unsigned int  EdgeColor, int  VerticalFlag)
{
	return DrawExtendStringFToHandle( x, y, ExRateX, ExRateY, String, Color, FontHandle, EdgeColor, VerticalFlag);
}
int  __stdcall dx_DrawExtendVStringFToHandle( float  x, float  y, double  ExRateX, double  ExRateY, const char * String, unsigned int  Color, int  FontHandle, unsigned int  EdgeColor)
{
	return DrawExtendVStringFToHandle( x, y, ExRateX, ExRateY, String, Color, FontHandle, EdgeColor);
}
int  __stdcall dx_DrawRotaStringFToHandle( float  x, float  y, double  ExRateX, double  ExRateY, double  RotCenterX, double  RotCenterY, double  RotAngle, unsigned int  Color, int  FontHandle, unsigned int  EdgeColor, int  VerticalFlag, const char * String)
{
	return DrawRotaStringFToHandle( x, y, ExRateX, ExRateY, RotCenterX, RotCenterY, RotAngle, Color, FontHandle, EdgeColor, VerticalFlag, String);
}
int  __stdcall dx_DrawNumberToIToHandle( int  x, int  y, int  Num, int  RisesNum, unsigned int  Color, int  FontHandle, unsigned int  EdgeColor)
{
	return DrawNumberToIToHandle( x, y, Num, RisesNum, Color, FontHandle, EdgeColor);
}
int  __stdcall dx_DrawNumberToFToHandle( int  x, int  y, double  Num, int  Length, unsigned int  Color, int  FontHandle, unsigned int  EdgeColor)
{
	return DrawNumberToFToHandle( x, y, Num, Length, Color, FontHandle, EdgeColor);
}
int  __stdcall dx_DrawNumberPlusToIToHandle( int  x, int  y, const char * NoteString, int  Num, int  RisesNum, unsigned int  Color, int  FontHandle, unsigned int  EdgeColor)
{
	return DrawNumberPlusToIToHandle( x, y, NoteString, Num, RisesNum, Color, FontHandle, EdgeColor);
}
int  __stdcall dx_DrawNumberPlusToFToHandle( int  x, int  y, const char * NoteString, double  Num, int  Length, unsigned int  Color, int  FontHandle, unsigned int  EdgeColor)
{
	return DrawNumberPlusToFToHandle( x, y, NoteString, Num, Length, Color, FontHandle, EdgeColor);
}
int  __stdcall dx_DrawStringToHandleToZBuffer( int  x, int  y, const char * String, int  FontHandle, int  WriteZMode, int  VerticalFlag)
{
	return DrawStringToHandleToZBuffer( x, y, String, FontHandle, WriteZMode, VerticalFlag);
}
int  __stdcall dx_DrawVStringToHandleToZBuffer( int  x, int  y, const char * String, int  FontHandle, int  WriteZMode)
{
	return DrawVStringToHandleToZBuffer( x, y, String, FontHandle, WriteZMode);
}
int  __stdcall dx_DrawExtendStringToHandleToZBuffer( int  x, int  y, double  ExRateX, double  ExRateY, const char * String, int  FontHandle, int  WriteZMode, int  VerticalFlag)
{
	return DrawExtendStringToHandleToZBuffer( x, y, ExRateX, ExRateY, String, FontHandle, WriteZMode, VerticalFlag);
}
int  __stdcall dx_DrawExtendVStringToHandleToZBuffer( int  x, int  y, double  ExRateX, double  ExRateY, const char * String, int  FontHandle, int  WriteZMode)
{
	return DrawExtendVStringToHandleToZBuffer( x, y, ExRateX, ExRateY, String, FontHandle, WriteZMode);
}
int  __stdcall dx_ConvertMatrixFtoD( MATRIX_D *  Out, const MATRIX *  In)
{
	return ConvertMatrixFtoD( Out, In);
}
int  __stdcall dx_ConvertMatrixDtoF( MATRIX *  Out, const MATRIX_D *  In)
{
	return ConvertMatrixDtoF( Out, In);
}
int  __stdcall dx_CreateIdentityMatrix( MATRIX *  Out)
{
	return CreateIdentityMatrix( Out);
}
int  __stdcall dx_CreateIdentityMatrixD( MATRIX_D *  Out)
{
	return CreateIdentityMatrixD( Out);
}
int  __stdcall dx_CreateLookAtMatrix( MATRIX *  Out, const VECTOR *  Eye, const VECTOR *  At, const VECTOR *  Up)
{
	return CreateLookAtMatrix( Out, Eye, At, Up);
}
int  __stdcall dx_CreateLookAtMatrixD( MATRIX_D *  Out, const VECTOR_D *  Eye, const VECTOR_D *  At, const VECTOR_D *  Up)
{
	return CreateLookAtMatrixD( Out, Eye, At, Up);
}
int  __stdcall dx_CreateLookAtMatrix2( MATRIX *  Out, const VECTOR *  Eye, double  XZAngle, double  Oira)
{
	return CreateLookAtMatrix2( Out, Eye, XZAngle, Oira);
}
int  __stdcall dx_CreateLookAtMatrix2D( MATRIX_D *  Out, const VECTOR_D *  Eye, double  XZAngle, double  Oira)
{
	return CreateLookAtMatrix2D( Out, Eye, XZAngle, Oira);
}
int  __stdcall dx_CreateLookAtMatrixRH( MATRIX *  Out, const VECTOR *  Eye, const VECTOR *  At, const VECTOR *  Up)
{
	return CreateLookAtMatrixRH( Out, Eye, At, Up);
}
int  __stdcall dx_CreateLookAtMatrixRHD( MATRIX_D *  Out, const VECTOR_D *  Eye, const VECTOR_D *  At, const VECTOR_D *  Up)
{
	return CreateLookAtMatrixRHD( Out, Eye, At, Up);
}
int  __stdcall dx_CreateMultiplyMatrix( MATRIX *  Out, const MATRIX *  In1, const MATRIX *  In2)
{
	return CreateMultiplyMatrix( Out, In1, In2);
}
int  __stdcall dx_CreateMultiplyMatrixD( MATRIX_D *  Out, const MATRIX_D *  In1, const MATRIX_D *  In2)
{
	return CreateMultiplyMatrixD( Out, In1, In2);
}
int  __stdcall dx_CreatePerspectiveFovMatrix( MATRIX *  Out, float  fov, float  zn, float  zf, float  aspect)
{
	return CreatePerspectiveFovMatrix( Out, fov, zn, zf, aspect);
}
int  __stdcall dx_CreatePerspectiveFovMatrixD( MATRIX_D *  Out, double  fov, double  zn, double  zf, double  aspect)
{
	return CreatePerspectiveFovMatrixD( Out, fov, zn, zf, aspect);
}
int  __stdcall dx_CreatePerspectiveFovMatrixRH( MATRIX *  Out, float  fov, float  zn, float  zf, float  aspect)
{
	return CreatePerspectiveFovMatrixRH( Out, fov, zn, zf, aspect);
}
int  __stdcall dx_CreatePerspectiveFovMatrixRHD( MATRIX_D *  Out, double  fov, double  zn, double  zf, double  aspect)
{
	return CreatePerspectiveFovMatrixRHD( Out, fov, zn, zf, aspect);
}
int  __stdcall dx_CreateOrthoMatrix( MATRIX *  Out, float  size, float  zn, float  zf, float  aspect)
{
	return CreateOrthoMatrix( Out, size, zn, zf, aspect);
}
int  __stdcall dx_CreateOrthoMatrixD( MATRIX_D *  Out, double  size, double  zn, double  zf, double  aspect)
{
	return CreateOrthoMatrixD( Out, size, zn, zf, aspect);
}
int  __stdcall dx_CreateOrthoMatrixRH( MATRIX *  Out, float  size, float  zn, float  zf, float  aspect)
{
	return CreateOrthoMatrixRH( Out, size, zn, zf, aspect);
}
int  __stdcall dx_CreateOrthoMatrixRHD( MATRIX_D *  Out, double  size, double  zn, double  zf, double  aspect)
{
	return CreateOrthoMatrixRHD( Out, size, zn, zf, aspect);
}
int  __stdcall dx_CreateScalingMatrix( MATRIX *  Out, float  sx, float  sy, float  sz)
{
	return CreateScalingMatrix( Out, sx, sy, sz);
}
int  __stdcall dx_CreateScalingMatrixD( MATRIX_D *  Out, double  sx, double  sy, double  sz)
{
	return CreateScalingMatrixD( Out, sx, sy, sz);
}
int  __stdcall dx_CreateRotationXMatrix( MATRIX *  Out, float  Angle)
{
	return CreateRotationXMatrix( Out, Angle);
}
int  __stdcall dx_CreateRotationXMatrixD( MATRIX_D *  Out, double  Angle)
{
	return CreateRotationXMatrixD( Out, Angle);
}
int  __stdcall dx_CreateRotationYMatrix( MATRIX *  Out, float  Angle)
{
	return CreateRotationYMatrix( Out, Angle);
}
int  __stdcall dx_CreateRotationYMatrixD( MATRIX_D *  Out, double  Angle)
{
	return CreateRotationYMatrixD( Out, Angle);
}
int  __stdcall dx_CreateRotationZMatrix( MATRIX *  Out, float  Angle)
{
	return CreateRotationZMatrix( Out, Angle);
}
int  __stdcall dx_CreateRotationZMatrixD( MATRIX_D *  Out, double  Angle)
{
	return CreateRotationZMatrixD( Out, Angle);
}
int  __stdcall dx_CreateTranslationMatrix( MATRIX *  Out, float  x, float  y, float  z)
{
	return CreateTranslationMatrix( Out, x, y, z);
}
int  __stdcall dx_CreateTranslationMatrixD( MATRIX_D *  Out, double  x, double  y, double  z)
{
	return CreateTranslationMatrixD( Out, x, y, z);
}
int  __stdcall dx_CreateTransposeMatrix( MATRIX *  Out, const MATRIX *  In)
{
	return CreateTransposeMatrix( Out, In);
}
int  __stdcall dx_CreateTransposeMatrixD( MATRIX_D *  Out, const MATRIX_D *  In)
{
	return CreateTransposeMatrixD( Out, In);
}
int  __stdcall dx_CreateInverseMatrix( MATRIX *  Out, const MATRIX *  In)
{
	return CreateInverseMatrix( Out, In);
}
int  __stdcall dx_CreateInverseMatrixD( MATRIX_D *  Out, const MATRIX_D *  In)
{
	return CreateInverseMatrixD( Out, In);
}
int  __stdcall dx_CreateViewportMatrix( MATRIX *  Out, float  CenterX, float  CenterY, float  Width, float  Height)
{
	return CreateViewportMatrix( Out, CenterX, CenterY, Width, Height);
}
int  __stdcall dx_CreateViewportMatrixD( MATRIX_D *  Out, double  CenterX, double  CenterY, double  Width, double  Height)
{
	return CreateViewportMatrixD( Out, CenterX, CenterY, Width, Height);
}
int  __stdcall dx_CreateRotationXYZMatrix( MATRIX *  Out, float  XRot, float  YRot, float  ZRot)
{
	return CreateRotationXYZMatrix( Out, XRot, YRot, ZRot);
}
int  __stdcall dx_CreateRotationXYZMatrixD( MATRIX_D *  Out, double  XRot, double  YRot, double  ZRot)
{
	return CreateRotationXYZMatrixD( Out, XRot, YRot, ZRot);
}
int  __stdcall dx_CreateRotationXZYMatrix( MATRIX *  Out, float  XRot, float  YRot, float  ZRot)
{
	return CreateRotationXZYMatrix( Out, XRot, YRot, ZRot);
}
int  __stdcall dx_CreateRotationXZYMatrixD( MATRIX_D *  Out, double  XRot, double  YRot, double  ZRot)
{
	return CreateRotationXZYMatrixD( Out, XRot, YRot, ZRot);
}
int  __stdcall dx_CreateRotationYXZMatrix( MATRIX *  Out, float  XRot, float  YRot, float  ZRot)
{
	return CreateRotationYXZMatrix( Out, XRot, YRot, ZRot);
}
int  __stdcall dx_CreateRotationYXZMatrixD( MATRIX_D *  Out, double  XRot, double  YRot, double  ZRot)
{
	return CreateRotationYXZMatrixD( Out, XRot, YRot, ZRot);
}
int  __stdcall dx_CreateRotationYZXMatrix( MATRIX *  Out, float  XRot, float  YRot, float  ZRot)
{
	return CreateRotationYZXMatrix( Out, XRot, YRot, ZRot);
}
int  __stdcall dx_CreateRotationYZXMatrixD( MATRIX_D *  Out, double  XRot, double  YRot, double  ZRot)
{
	return CreateRotationYZXMatrixD( Out, XRot, YRot, ZRot);
}
int  __stdcall dx_CreateRotationZXYMatrix( MATRIX *  Out, float  XRot, float  YRot, float  ZRot)
{
	return CreateRotationZXYMatrix( Out, XRot, YRot, ZRot);
}
int  __stdcall dx_CreateRotationZXYMatrixD( MATRIX_D *  Out, double  XRot, double  YRot, double  ZRot)
{
	return CreateRotationZXYMatrixD( Out, XRot, YRot, ZRot);
}
int  __stdcall dx_CreateRotationZYXMatrix( MATRIX *  Out, float  XRot, float  YRot, float  ZRot)
{
	return CreateRotationZYXMatrix( Out, XRot, YRot, ZRot);
}
int  __stdcall dx_CreateRotationZYXMatrixD( MATRIX_D *  Out, double  XRot, double  YRot, double  ZRot)
{
	return CreateRotationZYXMatrixD( Out, XRot, YRot, ZRot);
}
int  __stdcall dx_GetMatrixXYZRotation( const MATRIX *  In, float *  OutXRot, float *  OutYRot, float *  OutZRot)
{
	return GetMatrixXYZRotation( In, OutXRot, OutYRot, OutZRot);
}
int  __stdcall dx_GetMatrixXYZRotationD( const MATRIX_D *  In, double *  OutXRot, double *  OutYRot, double *  OutZRot)
{
	return GetMatrixXYZRotationD( In, OutXRot, OutYRot, OutZRot);
}
int  __stdcall dx_GetMatrixXZYRotation( const MATRIX *  In, float *  OutXRot, float *  OutYRot, float *  OutZRot)
{
	return GetMatrixXZYRotation( In, OutXRot, OutYRot, OutZRot);
}
int  __stdcall dx_GetMatrixXZYRotationD( const MATRIX_D *  In, double *  OutXRot, double *  OutYRot, double *  OutZRot)
{
	return GetMatrixXZYRotationD( In, OutXRot, OutYRot, OutZRot);
}
int  __stdcall dx_GetMatrixYXZRotation( const MATRIX *  In, float *  OutXRot, float *  OutYRot, float *  OutZRot)
{
	return GetMatrixYXZRotation( In, OutXRot, OutYRot, OutZRot);
}
int  __stdcall dx_GetMatrixYXZRotationD( const MATRIX_D *  In, double *  OutXRot, double *  OutYRot, double *  OutZRot)
{
	return GetMatrixYXZRotationD( In, OutXRot, OutYRot, OutZRot);
}
int  __stdcall dx_GetMatrixYZXRotation( const MATRIX *  In, float *  OutXRot, float *  OutYRot, float *  OutZRot)
{
	return GetMatrixYZXRotation( In, OutXRot, OutYRot, OutZRot);
}
int  __stdcall dx_GetMatrixYZXRotationD( const MATRIX_D *  In, double *  OutXRot, double *  OutYRot, double *  OutZRot)
{
	return GetMatrixYZXRotationD( In, OutXRot, OutYRot, OutZRot);
}
int  __stdcall dx_GetMatrixZXYRotation( const MATRIX *  In, float *  OutXRot, float *  OutYRot, float *  OutZRot)
{
	return GetMatrixZXYRotation( In, OutXRot, OutYRot, OutZRot);
}
int  __stdcall dx_GetMatrixZXYRotationD( const MATRIX_D *  In, double *  OutXRot, double *  OutYRot, double *  OutZRot)
{
	return GetMatrixZXYRotationD( In, OutXRot, OutYRot, OutZRot);
}
int  __stdcall dx_GetMatrixZYXRotation( const MATRIX *  In, float *  OutXRot, float *  OutYRot, float *  OutZRot)
{
	return GetMatrixZYXRotation( In, OutXRot, OutYRot, OutZRot);
}
int  __stdcall dx_GetMatrixZYXRotationD( const MATRIX_D *  In, double *  OutXRot, double *  OutYRot, double *  OutZRot)
{
	return GetMatrixZYXRotationD( In, OutXRot, OutYRot, OutZRot);
}
int  __stdcall dx_VectorConvertFtoD( VECTOR_D *  Out, const VECTOR *  In)
{
	return VectorConvertFtoD( Out, In);
}
int  __stdcall dx_VectorConvertDtoF( VECTOR *  Out, const VECTOR_D *  In)
{
	return VectorConvertDtoF( Out, In);
}
int  __stdcall dx_VectorNormalize( VECTOR *  Out, const VECTOR *  In)
{
	return VectorNormalize( Out, In);
}
int  __stdcall dx_VectorNormalizeD( VECTOR_D *  Out, const VECTOR_D *  In)
{
	return VectorNormalizeD( Out, In);
}
int  __stdcall dx_VectorScale( VECTOR *  Out, const VECTOR *  In, float  Scale)
{
	return VectorScale( Out, In, Scale);
}
int  __stdcall dx_VectorScaleD( VECTOR_D *  Out, const VECTOR_D *  In, double  Scale)
{
	return VectorScaleD( Out, In, Scale);
}
int  __stdcall dx_VectorMultiply( VECTOR *  Out, const VECTOR *  In1, const VECTOR *  In2)
{
	return VectorMultiply( Out, In1, In2);
}
int  __stdcall dx_VectorMultiplyD( VECTOR_D *  Out, const VECTOR_D *  In1, const VECTOR_D *  In2)
{
	return VectorMultiplyD( Out, In1, In2);
}
int  __stdcall dx_VectorSub( VECTOR *  Out, const VECTOR *  In1, const VECTOR *  In2)
{
	return VectorSub( Out, In1, In2);
}
int  __stdcall dx_VectorSubD( VECTOR_D *  Out, const VECTOR_D *  In1, const VECTOR_D *  In2)
{
	return VectorSubD( Out, In1, In2);
}
int  __stdcall dx_VectorAdd( VECTOR *  Out, const VECTOR *  In1, const VECTOR *  In2)
{
	return VectorAdd( Out, In1, In2);
}
int  __stdcall dx_VectorAddD( VECTOR_D *  Out, const VECTOR_D *  In1, const VECTOR_D *  In2)
{
	return VectorAddD( Out, In1, In2);
}
int  __stdcall dx_VectorOuterProduct( VECTOR *  Out, const VECTOR *  In1, const VECTOR *  In2)
{
	return VectorOuterProduct( Out, In1, In2);
}
int  __stdcall dx_VectorOuterProductD( VECTOR_D *  Out, const VECTOR_D *  In1, const VECTOR_D *  In2)
{
	return VectorOuterProductD( Out, In1, In2);
}
float  __stdcall dx_VectorInnerProduct( const VECTOR *  In1, const VECTOR *  In2)
{
	return VectorInnerProduct( In1, In2);
}
double __stdcall dx_VectorInnerProductD( const VECTOR_D * In1 , const VECTOR_D * In2 ) 
{
	return VectorInnerProductD( In1 , In2  ) ;
}
int  __stdcall dx_VectorRotationX( VECTOR *  Out, const VECTOR *  In, double  Angle)
{
	return VectorRotationX( Out, In, Angle);
}
int  __stdcall dx_VectorRotationXD( VECTOR_D *  Out, const VECTOR_D *  In, double  Angle)
{
	return VectorRotationXD( Out, In, Angle);
}
int  __stdcall dx_VectorRotationY( VECTOR *  Out, const VECTOR *  In, double  Angle)
{
	return VectorRotationY( Out, In, Angle);
}
int  __stdcall dx_VectorRotationYD( VECTOR_D *  Out, const VECTOR_D *  In, double  Angle)
{
	return VectorRotationYD( Out, In, Angle);
}
int  __stdcall dx_VectorRotationZ( VECTOR *  Out, const VECTOR *  In, double  Angle)
{
	return VectorRotationZ( Out, In, Angle);
}
int  __stdcall dx_VectorRotationZD( VECTOR_D *  Out, const VECTOR_D *  In, double  Angle)
{
	return VectorRotationZD( Out, In, Angle);
}
int  __stdcall dx_VectorTransform( VECTOR *  Out, const VECTOR *  InVec, const MATRIX *  InMatrix)
{
	return VectorTransform( Out, InVec, InMatrix);
}
int  __stdcall dx_VectorTransformD( VECTOR_D *  Out, const VECTOR_D *  InVec, const MATRIX_D *  InMatrix)
{
	return VectorTransformD( Out, InVec, InMatrix);
}
int  __stdcall dx_VectorTransformSR( VECTOR *  Out, const VECTOR *  InVec, const MATRIX *  InMatrix)
{
	return VectorTransformSR( Out, InVec, InMatrix);
}
int  __stdcall dx_VectorTransformSRD( VECTOR_D *  Out, const VECTOR_D *  InVec, const MATRIX_D *  InMatrix)
{
	return VectorTransformSRD( Out, InVec, InMatrix);
}
int  __stdcall dx_VectorTransform4( VECTOR *  Out, float *  V4Out, const VECTOR *  InVec, const float *  V4In, const MATRIX *  InMatrix)
{
	return VectorTransform4( Out, V4Out, InVec, V4In, InMatrix);
}
int  __stdcall dx_VectorTransform4D( VECTOR_D *  Out, double *  V4Out, const VECTOR_D *  InVec, const double *  V4In, const MATRIX_D *  InMatrix)
{
	return VectorTransform4D( Out, V4Out, InVec, V4In, InMatrix);
}
int  __stdcall dx_Segment_Segment_Analyse( const VECTOR *  SegmentAPos1, const VECTOR *  SegmentAPos2, const VECTOR *  SegmentBPos1, const VECTOR *  SegmentBPos2, SEGMENT_SEGMENT_RESULT *  Result)
{
	return Segment_Segment_Analyse( SegmentAPos1, SegmentAPos2, SegmentBPos1, SegmentBPos2, Result);
}
int  __stdcall dx_Segment_Segment_AnalyseD( const VECTOR_D *  SegmentAPos1, const VECTOR_D *  SegmentAPos2, const VECTOR_D *  SegmentBPos1, const VECTOR_D *  SegmentBPos2, SEGMENT_SEGMENT_RESULT_D *  Result)
{
	return Segment_Segment_AnalyseD( SegmentAPos1, SegmentAPos2, SegmentBPos1, SegmentBPos2, Result);
}
int  __stdcall dx_Segment_Point_Analyse( const VECTOR *  SegmentPos1, const VECTOR *  SegmentPos2, const VECTOR *  PointPos, SEGMENT_POINT_RESULT *  Result)
{
	return Segment_Point_Analyse( SegmentPos1, SegmentPos2, PointPos, Result);
}
int  __stdcall dx_Segment_Point_AnalyseD( const VECTOR_D *  SegmentPos1, const VECTOR_D *  SegmentPos2, const VECTOR_D *  PointPos, SEGMENT_POINT_RESULT_D *  Result)
{
	return Segment_Point_AnalyseD( SegmentPos1, SegmentPos2, PointPos, Result);
}
int  __stdcall dx_Segment_Triangle_Analyse( const VECTOR *  SegmentPos1, const VECTOR *  SegmentPos2, const VECTOR *  TrianglePos1, const VECTOR *  TrianglePos2, const VECTOR *  TrianglePos3, SEGMENT_TRIANGLE_RESULT *  Result)
{
	return Segment_Triangle_Analyse( SegmentPos1, SegmentPos2, TrianglePos1, TrianglePos2, TrianglePos3, Result);
}
int  __stdcall dx_Segment_Triangle_AnalyseD( const VECTOR_D *  SegmentPos1, const VECTOR_D *  SegmentPos2, const VECTOR_D *  TrianglePos1, const VECTOR_D *  TrianglePos2, const VECTOR_D *  TrianglePos3, SEGMENT_TRIANGLE_RESULT_D *  Result)
{
	return Segment_Triangle_AnalyseD( SegmentPos1, SegmentPos2, TrianglePos1, TrianglePos2, TrianglePos3, Result);
}
int  __stdcall dx_Triangle_Point_Analyse( const VECTOR *  TrianglePos1, const VECTOR *  TrianglePos2, const VECTOR *  TrianglePos3, const VECTOR *  PointPos, TRIANGLE_POINT_RESULT *  Result)
{
	return Triangle_Point_Analyse( TrianglePos1, TrianglePos2, TrianglePos3, PointPos, Result);
}
int  __stdcall dx_Triangle_Point_AnalyseD( const VECTOR_D *  TrianglePos1, const VECTOR_D *  TrianglePos2, const VECTOR_D *  TrianglePos3, const VECTOR_D *  PointPos, TRIANGLE_POINT_RESULT_D *  Result)
{
	return Triangle_Point_AnalyseD( TrianglePos1, TrianglePos2, TrianglePos3, PointPos, Result);
}
int  __stdcall dx_Plane_Point_Analyse( const VECTOR *  PlanePos, const VECTOR *  PlaneNormal, const VECTOR *  PointPos, PLANE_POINT_RESULT *  Result)
{
	return Plane_Point_Analyse( PlanePos, PlaneNormal, PointPos, Result);
}
int  __stdcall dx_Plane_Point_AnalyseD( const VECTOR_D *  PlanePos, const VECTOR_D *  PlaneNormal, const VECTOR_D *  PointPos, PLANE_POINT_RESULT_D *  Result)
{
	return Plane_Point_AnalyseD( PlanePos, PlaneNormal, PointPos, Result);
}
void  __stdcall dx_TriangleBarycenter( VECTOR  TrianglePos1, VECTOR  TrianglePos2, VECTOR  TrianglePos3, VECTOR  Position, float *  TrianglePos1Weight, float *  TrianglePos2Weight, float *  TrianglePos3Weight)
{
	TriangleBarycenter( TrianglePos1, TrianglePos2, TrianglePos3, Position, TrianglePos1Weight, TrianglePos2Weight, TrianglePos3Weight);
}
void  __stdcall dx_TriangleBarycenterD( VECTOR_D  TrianglePos1, VECTOR_D  TrianglePos2, VECTOR_D  TrianglePos3, VECTOR_D  Position, double *  TrianglePos1Weight, double *  TrianglePos2Weight, double *  TrianglePos3Weight)
{
	TriangleBarycenterD( TrianglePos1, TrianglePos2, TrianglePos3, Position, TrianglePos1Weight, TrianglePos2Weight, TrianglePos3Weight);
}
float  __stdcall dx_Segment_Segment_MinLength( VECTOR  SegmentAPos1, VECTOR  SegmentAPos2, VECTOR  SegmentBPos1, VECTOR  SegmentBPos2)
{
	return Segment_Segment_MinLength( SegmentAPos1, SegmentAPos2, SegmentBPos1, SegmentBPos2);
}
double __stdcall dx_Segment_Segment_MinLengthD( VECTOR_D SegmentAPos1 , VECTOR_D SegmentAPos2 , VECTOR_D SegmentBPos1 , VECTOR_D SegmentBPos2 ) 
{
	return Segment_Segment_MinLengthD( SegmentAPos1 , SegmentAPos2 , SegmentBPos1 , SegmentBPos2  ) ;
}
float  __stdcall dx_Segment_Segment_MinLength_Square( VECTOR  SegmentAPos1, VECTOR  SegmentAPos2, VECTOR  SegmentBPos1, VECTOR  SegmentBPos2)
{
	return Segment_Segment_MinLength_Square( SegmentAPos1, SegmentAPos2, SegmentBPos1, SegmentBPos2);
}
double __stdcall dx_Segment_Segment_MinLength_SquareD( VECTOR_D SegmentAPos1 , VECTOR_D SegmentAPos2 , VECTOR_D SegmentBPos1 , VECTOR_D SegmentBPos2 ) 
{
	return Segment_Segment_MinLength_SquareD( SegmentAPos1 , SegmentAPos2 , SegmentBPos1 , SegmentBPos2  ) ;
}
float  __stdcall dx_Segment_Triangle_MinLength( VECTOR  SegmentPos1, VECTOR  SegmentPos2, VECTOR  TrianglePos1, VECTOR  TrianglePos2, VECTOR  TrianglePos3)
{
	return Segment_Triangle_MinLength( SegmentPos1, SegmentPos2, TrianglePos1, TrianglePos2, TrianglePos3);
}
double __stdcall dx_Segment_Triangle_MinLengthD( VECTOR_D SegmentPos1 , VECTOR_D SegmentPos2 , VECTOR_D TrianglePos1 , VECTOR_D TrianglePos2 , VECTOR_D TrianglePos3 ) 
{
	return Segment_Triangle_MinLengthD( SegmentPos1 , SegmentPos2 , TrianglePos1 , TrianglePos2 , TrianglePos3  ) ;
}
float  __stdcall dx_Segment_Triangle_MinLength_Square( VECTOR  SegmentPos1, VECTOR  SegmentPos2, VECTOR  TrianglePos1, VECTOR  TrianglePos2, VECTOR  TrianglePos3)
{
	return Segment_Triangle_MinLength_Square( SegmentPos1, SegmentPos2, TrianglePos1, TrianglePos2, TrianglePos3);
}
double __stdcall dx_Segment_Triangle_MinLength_SquareD( VECTOR_D SegmentPos1 , VECTOR_D SegmentPos2 , VECTOR_D TrianglePos1 , VECTOR_D TrianglePos2 , VECTOR_D TrianglePos3 ) 
{
	return Segment_Triangle_MinLength_SquareD( SegmentPos1 , SegmentPos2 , TrianglePos1 , TrianglePos2 , TrianglePos3  ) ;
}
float  __stdcall dx_Segment_Point_MinLength( VECTOR  SegmentPos1, VECTOR  SegmentPos2, VECTOR  PointPos)
{
	return Segment_Point_MinLength( SegmentPos1, SegmentPos2, PointPos);
}
double __stdcall dx_Segment_Point_MinLengthD( VECTOR_D SegmentPos1 , VECTOR_D SegmentPos2 , VECTOR_D PointPos ) 
{
	return Segment_Point_MinLengthD( SegmentPos1 , SegmentPos2 , PointPos  ) ;
}
float  __stdcall dx_Segment_Point_MinLength_Square( VECTOR  SegmentPos1, VECTOR  SegmentPos2, VECTOR  PointPos)
{
	return Segment_Point_MinLength_Square( SegmentPos1, SegmentPos2, PointPos);
}
double __stdcall dx_Segment_Point_MinLength_SquareD( VECTOR_D SegmentPos1 , VECTOR_D SegmentPos2 , VECTOR_D PointPos ) 
{
	return Segment_Point_MinLength_SquareD( SegmentPos1 , SegmentPos2 , PointPos  ) ;
}
float  __stdcall dx_Triangle_Point_MinLength( VECTOR  TrianglePos1, VECTOR  TrianglePos2, VECTOR  TrianglePos3, VECTOR  PointPos)
{
	return Triangle_Point_MinLength( TrianglePos1, TrianglePos2, TrianglePos3, PointPos);
}
double __stdcall dx_Triangle_Point_MinLengthD( VECTOR_D TrianglePos1 , VECTOR_D TrianglePos2 , VECTOR_D TrianglePos3 , VECTOR_D PointPos ) 
{
	return Triangle_Point_MinLengthD( TrianglePos1 , TrianglePos2 , TrianglePos3 , PointPos  ) ;
}
float  __stdcall dx_Triangle_Point_MinLength_Square( VECTOR  TrianglePos1, VECTOR  TrianglePos2, VECTOR  TrianglePos3, VECTOR  PointPos)
{
	return Triangle_Point_MinLength_Square( TrianglePos1, TrianglePos2, TrianglePos3, PointPos);
}
double __stdcall dx_Triangle_Point_MinLength_SquareD( VECTOR_D TrianglePos1 , VECTOR_D TrianglePos2 , VECTOR_D TrianglePos3 , VECTOR_D PointPos ) 
{
	return Triangle_Point_MinLength_SquareD( TrianglePos1 , TrianglePos2 , TrianglePos3 , PointPos  ) ;
}
float  __stdcall dx_Triangle_Triangle_MinLength( VECTOR  Triangle1Pos1, VECTOR  Triangle1Pos2, VECTOR  Triangle1Pos3, VECTOR  Triangle2Pos1, VECTOR  Triangle2Pos2, VECTOR  Triangle2Pos3)
{
	return Triangle_Triangle_MinLength( Triangle1Pos1, Triangle1Pos2, Triangle1Pos3, Triangle2Pos1, Triangle2Pos2, Triangle2Pos3);
}
double __stdcall dx_Triangle_Triangle_MinLengthD( VECTOR_D Triangle1Pos1 , VECTOR_D Triangle1Pos2 , VECTOR_D Triangle1Pos3 , VECTOR_D Triangle2Pos1 , VECTOR_D Triangle2Pos2 , VECTOR_D Triangle2Pos3 ) 
{
	return Triangle_Triangle_MinLengthD( Triangle1Pos1 , Triangle1Pos2 , Triangle1Pos3 , Triangle2Pos1 , Triangle2Pos2 , Triangle2Pos3  ) ;
}
float  __stdcall dx_Triangle_Triangle_MinLength_Square( VECTOR  Triangle1Pos1, VECTOR  Triangle1Pos2, VECTOR  Triangle1Pos3, VECTOR  Triangle2Pos1, VECTOR  Triangle2Pos2, VECTOR  Triangle2Pos3)
{
	return Triangle_Triangle_MinLength_Square( Triangle1Pos1, Triangle1Pos2, Triangle1Pos3, Triangle2Pos1, Triangle2Pos2, Triangle2Pos3);
}
double __stdcall dx_Triangle_Triangle_MinLength_SquareD( VECTOR_D Triangle1Pos1 , VECTOR_D Triangle1Pos2 , VECTOR_D Triangle1Pos3 , VECTOR_D Triangle2Pos1 , VECTOR_D Triangle2Pos2 , VECTOR_D Triangle2Pos3 ) 
{
	return Triangle_Triangle_MinLength_SquareD( Triangle1Pos1 , Triangle1Pos2 , Triangle1Pos3 , Triangle2Pos1 , Triangle2Pos2 , Triangle2Pos3  ) ;
}
VECTOR  __stdcall dx_Plane_Point_MinLength_Position( VECTOR  PlanePos, VECTOR  PlaneNormal, VECTOR  PointPos)
{
	return Plane_Point_MinLength_Position( PlanePos, PlaneNormal, PointPos);
}
VECTOR_D  __stdcall dx_Plane_Point_MinLength_PositionD( VECTOR_D  PlanePos, VECTOR_D  PlaneNormal, VECTOR_D  PointPos)
{
	return Plane_Point_MinLength_PositionD( PlanePos, PlaneNormal, PointPos);
}
float  __stdcall dx_Plane_Point_MinLength( VECTOR  PlanePos, VECTOR  PlaneNormal, VECTOR  PointPos)
{
	return Plane_Point_MinLength( PlanePos, PlaneNormal, PointPos);
}
double __stdcall dx_Plane_Point_MinLengthD( VECTOR_D PlanePos , VECTOR_D PlaneNormal , VECTOR_D PointPos ) 
{
	return Plane_Point_MinLengthD( PlanePos , PlaneNormal , PointPos  ) ;
}
HITRESULT_LINE  __stdcall dx_HitCheck_Line_Triangle( VECTOR  LinePos1, VECTOR  LinePos2, VECTOR  TrianglePos1, VECTOR  TrianglePos2, VECTOR  TrianglePos3)
{
	return HitCheck_Line_Triangle( LinePos1, LinePos2, TrianglePos1, TrianglePos2, TrianglePos3);
}
HITRESULT_LINE_D __stdcall dx_HitCheck_Line_TriangleD( VECTOR_D LinePos1 , VECTOR_D LinePos2 , VECTOR_D TrianglePos1 , VECTOR_D TrianglePos2 , VECTOR_D TrianglePos3 ) 
{
	return HitCheck_Line_TriangleD( LinePos1 , LinePos2 , TrianglePos1 , TrianglePos2 , TrianglePos3  ) ;
}
int  __stdcall dx_HitCheck_Triangle_Triangle( VECTOR  Triangle1Pos1, VECTOR  Triangle1Pos2, VECTOR  Triangle1Pos3, VECTOR  Triangle2Pos1, VECTOR  Triangle2Pos2, VECTOR  Triangle2Pos3)
{
	return HitCheck_Triangle_Triangle( Triangle1Pos1, Triangle1Pos2, Triangle1Pos3, Triangle2Pos1, Triangle2Pos2, Triangle2Pos3);
}
int  __stdcall dx_HitCheck_Triangle_TriangleD( VECTOR_D  Triangle1Pos1, VECTOR_D  Triangle1Pos2, VECTOR_D  Triangle1Pos3, VECTOR_D  Triangle2Pos1, VECTOR_D  Triangle2Pos2, VECTOR_D  Triangle2Pos3)
{
	return HitCheck_Triangle_TriangleD( Triangle1Pos1, Triangle1Pos2, Triangle1Pos3, Triangle2Pos1, Triangle2Pos2, Triangle2Pos3);
}
HITRESULT_LINE  __stdcall dx_HitCheck_Line_Cube( VECTOR  LinePos1, VECTOR  LinePos2, VECTOR  CubePos1, VECTOR  CubePos2)
{
	return HitCheck_Line_Cube( LinePos1, LinePos2, CubePos1, CubePos2);
}
HITRESULT_LINE_D __stdcall dx_HitCheck_Line_CubeD( VECTOR_D LinePos1 , VECTOR_D LinePos2 , VECTOR_D CubePos1 , VECTOR_D CubePos2 ) 
{
	return HitCheck_Line_CubeD( LinePos1 , LinePos2 , CubePos1 , CubePos2  ) ;
}
int  __stdcall dx_HitCheck_Line_Sphere( VECTOR  LinePos1, VECTOR  LinePos2, VECTOR  SphereCenterPos, float  SphereR)
{
	return HitCheck_Line_Sphere( LinePos1, LinePos2, SphereCenterPos, SphereR);
}
int  __stdcall dx_HitCheck_Line_SphereD( VECTOR_D  LinePos1, VECTOR_D  LinePos2, VECTOR_D  SphereCenterPos, double  SphereR)
{
	return HitCheck_Line_SphereD( LinePos1, LinePos2, SphereCenterPos, SphereR);
}
int  __stdcall dx_HitCheck_Sphere_Sphere( VECTOR  Sphere1CenterPos, float  Sphere1R, VECTOR  Sphere2CenterPos, float  Sphere2R)
{
	return HitCheck_Sphere_Sphere( Sphere1CenterPos, Sphere1R, Sphere2CenterPos, Sphere2R);
}
int  __stdcall dx_HitCheck_Sphere_SphereD( VECTOR_D  Sphere1CenterPos, double  Sphere1R, VECTOR_D  Sphere2CenterPos, double  Sphere2R)
{
	return HitCheck_Sphere_SphereD( Sphere1CenterPos, Sphere1R, Sphere2CenterPos, Sphere2R);
}
int  __stdcall dx_HitCheck_Sphere_Capsule( VECTOR  SphereCenterPos, float  SphereR, VECTOR  CapPos1, VECTOR  CapPos2, float  CapR)
{
	return HitCheck_Sphere_Capsule( SphereCenterPos, SphereR, CapPos1, CapPos2, CapR);
}
int  __stdcall dx_HitCheck_Sphere_CapsuleD( VECTOR_D  SphereCenterPos, double  SphereR, VECTOR_D  CapPos1, VECTOR_D  CapPos2, double  CapR)
{
	return HitCheck_Sphere_CapsuleD( SphereCenterPos, SphereR, CapPos1, CapPos2, CapR);
}
int  __stdcall dx_HitCheck_Sphere_Triangle( VECTOR  SphereCenterPos, float  SphereR, VECTOR  TrianglePos1, VECTOR  TrianglePos2, VECTOR  TrianglePos3)
{
	return HitCheck_Sphere_Triangle( SphereCenterPos, SphereR, TrianglePos1, TrianglePos2, TrianglePos3);
}
int  __stdcall dx_HitCheck_Sphere_TriangleD( VECTOR_D  SphereCenterPos, double  SphereR, VECTOR_D  TrianglePos1, VECTOR_D  TrianglePos2, VECTOR_D  TrianglePos3)
{
	return HitCheck_Sphere_TriangleD( SphereCenterPos, SphereR, TrianglePos1, TrianglePos2, TrianglePos3);
}
int  __stdcall dx_HitCheck_Capsule_Capsule( VECTOR  Cap1Pos1, VECTOR  Cap1Pos2, float  Cap1R, VECTOR  Cap2Pos1, VECTOR  Cap2Pos2, float  Cap2R)
{
	return HitCheck_Capsule_Capsule( Cap1Pos1, Cap1Pos2, Cap1R, Cap2Pos1, Cap2Pos2, Cap2R);
}
int  __stdcall dx_HitCheck_Capsule_CapsuleD( VECTOR_D  Cap1Pos1, VECTOR_D  Cap1Pos2, double  Cap1R, VECTOR_D  Cap2Pos1, VECTOR_D  Cap2Pos2, double  Cap2R)
{
	return HitCheck_Capsule_CapsuleD( Cap1Pos1, Cap1Pos2, Cap1R, Cap2Pos1, Cap2Pos2, Cap2R);
}
int  __stdcall dx_HitCheck_Capsule_Triangle( VECTOR  CapPos1, VECTOR  CapPos2, float  CapR, VECTOR  TrianglePos1, VECTOR  TrianglePos2, VECTOR  TrianglePos3)
{
	return HitCheck_Capsule_Triangle( CapPos1, CapPos2, CapR, TrianglePos1, TrianglePos2, TrianglePos3);
}
int  __stdcall dx_HitCheck_Capsule_TriangleD( VECTOR_D  CapPos1, VECTOR_D  CapPos2, double  CapR, VECTOR_D  TrianglePos1, VECTOR_D  TrianglePos2, VECTOR_D  TrianglePos3)
{
	return HitCheck_Capsule_TriangleD( CapPos1, CapPos2, CapR, TrianglePos1, TrianglePos2, TrianglePos3);
}
int  __stdcall dx_RectClipping( RECT *  Rect, const RECT *  ClippuRect)
{
	return RectClipping( Rect, ClippuRect);
}
int  __stdcall dx_RectAdjust( RECT *  Rect)
{
	return RectAdjust( Rect);
}
int  __stdcall dx_GetRectSize( const RECT *  Rect, int *  Width, int *  Height)
{
	return GetRectSize( Rect, Width, Height);
}
MATRIX  __stdcall dx_MGetIdent( void)
{
	return MGetIdent( );
}
MATRIX_D  __stdcall dx_MGetIdentD( void)
{
	return MGetIdentD( );
}
MATRIX  __stdcall dx_MMult( MATRIX  In1, MATRIX  In2)
{
	return MMult( In1, In2);
}
MATRIX_D  __stdcall dx_MMultD( MATRIX_D  In1, MATRIX_D  In2)
{
	return MMultD( In1, In2);
}
MATRIX  __stdcall dx_MScale( MATRIX  InM, float  Scale)
{
	return MScale( InM, Scale);
}
MATRIX_D  __stdcall dx_MScaleD( MATRIX_D  InM, double  Scale)
{
	return MScaleD( InM, Scale);
}
MATRIX  __stdcall dx_MAdd( MATRIX  In1, MATRIX  In2)
{
	return MAdd( In1, In2);
}
MATRIX_D  __stdcall dx_MAddD( MATRIX_D  In1, MATRIX_D  In2)
{
	return MAddD( In1, In2);
}
MATRIX  __stdcall dx_MGetScale( VECTOR  Scale)
{
	return MGetScale( Scale);
}
MATRIX_D  __stdcall dx_MGetScaleD( VECTOR_D  Scale)
{
	return MGetScaleD( Scale);
}
MATRIX  __stdcall dx_MGetRotX( float  XAxisRotate)
{
	return MGetRotX( XAxisRotate);
}
MATRIX_D  __stdcall dx_MGetRotXD( double  XAxisRotate)
{
	return MGetRotXD( XAxisRotate);
}
MATRIX  __stdcall dx_MGetRotY( float  YAxisRotate)
{
	return MGetRotY( YAxisRotate);
}
MATRIX_D  __stdcall dx_MGetRotYD( double  YAxisRotate)
{
	return MGetRotYD( YAxisRotate);
}
MATRIX  __stdcall dx_MGetRotZ( float  ZAxisRotate)
{
	return MGetRotZ( ZAxisRotate);
}
MATRIX_D  __stdcall dx_MGetRotZD( double  ZAxisRotate)
{
	return MGetRotZD( ZAxisRotate);
}
MATRIX  __stdcall dx_MGetRotAxis( VECTOR  RotateAxis, float  Rotate)
{
	return MGetRotAxis( RotateAxis, Rotate);
}
MATRIX_D  __stdcall dx_MGetRotAxisD( VECTOR_D  RotateAxis, double  Rotate)
{
	return MGetRotAxisD( RotateAxis, Rotate);
}
MATRIX  __stdcall dx_MGetRotVec2( VECTOR  In1, VECTOR  In2)
{
	return MGetRotVec2( In1, In2);
}
MATRIX_D  __stdcall dx_MGetRotVec2D( VECTOR_D  In1, VECTOR_D  In2)
{
	return MGetRotVec2D( In1, In2);
}
MATRIX  __stdcall dx_MGetTranslate( VECTOR  Trans)
{
	return MGetTranslate( Trans);
}
MATRIX_D  __stdcall dx_MGetTranslateD( VECTOR_D  Trans)
{
	return MGetTranslateD( Trans);
}
MATRIX  __stdcall dx_MGetAxis1( VECTOR  XAxis, VECTOR  YAxis, VECTOR  ZAxis, VECTOR  Pos)
{
	return MGetAxis1( XAxis, YAxis, ZAxis, Pos);
}
MATRIX_D  __stdcall dx_MGetAxis1D( VECTOR_D  XAxis, VECTOR_D  YAxis, VECTOR_D  ZAxis, VECTOR_D  Pos)
{
	return MGetAxis1D( XAxis, YAxis, ZAxis, Pos);
}
MATRIX  __stdcall dx_MGetAxis2( VECTOR  XAxis, VECTOR  YAxis, VECTOR  ZAxis, VECTOR  Pos)
{
	return MGetAxis2( XAxis, YAxis, ZAxis, Pos);
}
MATRIX_D  __stdcall dx_MGetAxis2D( VECTOR_D  XAxis, VECTOR_D  YAxis, VECTOR_D  ZAxis, VECTOR_D  Pos)
{
	return MGetAxis2D( XAxis, YAxis, ZAxis, Pos);
}
MATRIX  __stdcall dx_MTranspose( MATRIX  InM)
{
	return MTranspose( InM);
}
MATRIX_D  __stdcall dx_MTransposeD( MATRIX_D  InM)
{
	return MTransposeD( InM);
}
MATRIX  __stdcall dx_MInverse( MATRIX  InM)
{
	return MInverse( InM);
}
MATRIX_D  __stdcall dx_MInverseD( MATRIX_D  InM)
{
	return MInverseD( InM);
}
VECTOR  __stdcall dx_MGetSize( MATRIX  InM)
{
	return MGetSize( InM);
}
VECTOR_D  __stdcall dx_MGetSizeD( MATRIX_D  InM)
{
	return MGetSizeD( InM);
}
VECTOR  __stdcall dx_VNorm( VECTOR  In)
{
	return VNorm( In);
}
VECTOR_D  __stdcall dx_VNormD( VECTOR_D  In)
{
	return VNormD( In);
}
float  __stdcall dx_VSize( VECTOR  In)
{
	return VSize( In);
}
double __stdcall dx_VSizeD( VECTOR_D In ) 
{
	return VSizeD( In  ) ;
}
float  __stdcall dx_VCos( VECTOR  In1, VECTOR  In2)
{
	return VCos( In1, In2);
}
double __stdcall dx_VCosD( VECTOR_D In1 , VECTOR_D In2 ) 
{
	return VCosD( In1 , In2  ) ;
}
float  __stdcall dx_VRad( VECTOR  In1, VECTOR  In2)
{
	return VRad( In1, In2);
}
double __stdcall dx_VRadD( VECTOR_D In1 , VECTOR_D In2 ) 
{
	return VRadD( In1 , In2  ) ;
}
int __stdcall dx_CreateGraphImageOrDIBGraph( const TCHAR * FileName , const void * DataImage , int DataImageSize , int DataImageType , int BmpFlag , int ReverseFlag , BASEIMAGE * BaseImage , BITMAPINFO * * BmpInfo , void * * GraphData ) 
{
	return CreateGraphImageOrDIBGraph( FileName , DataImage , DataImageSize , DataImageType , BmpFlag , ReverseFlag , BaseImage , BmpInfo , GraphData  ) ;
}
int __stdcall dx_CreateGraphImageType2( STREAMDATA * Src , BASEIMAGE * Dest ) 
{
	return CreateGraphImageType2( Src , Dest  ) ;
}
int __stdcall dx_CreateBmpInfo( BITMAPINFO * BmpInfo , int Width , int Height , int Pitch , const void * SrcGrData , void * * DestGrData ) 
{
	return CreateBmpInfo( BmpInfo , Width , Height , Pitch , SrcGrData , DestGrData  ) ;
}
int  __stdcall dx_GetImageSize_File( const char * FileName, int *  SizeX, int *  SizeY)
{
	return GetImageSize_File( FileName, SizeX, SizeY);
}
int  __stdcall dx_GetImageSize_Mem( const void * FileImage, int  FileImageSize, int *  SizeX, int *  SizeY)
{
	return GetImageSize_Mem( FileImage, FileImageSize, SizeX, SizeY);
}
unsigned int __stdcall dx_GetGraphImageFullColorCode( const BASEIMAGE * GraphImage , int x , int y ) 
{
	return GetGraphImageFullColorCode( GraphImage , x , y  ) ;
}
int __stdcall dx_CreateGraphImage_plus_Alpha( const TCHAR * FileName , const void * RgbBaseImage , int RgbImageSize , int RgbImageType , const void * AlphaImage , int AlphaImageSize , int AlphaImageType , BASEIMAGE * RgbGraphImage , BASEIMAGE * AlphaGraphImage , int ReverseFlag ) 
{
	return CreateGraphImage_plus_Alpha( FileName , RgbBaseImage , RgbImageSize , RgbImageType , AlphaImage , AlphaImageSize , AlphaImageType , RgbGraphImage , AlphaGraphImage , ReverseFlag  ) ;
}
int __stdcall dx_ReverseGraphImage( BASEIMAGE * GraphImage ) 
{
	return ReverseGraphImage( GraphImage  ) ;
}
int __stdcall dx_AddUserGraphLoadFunction4( int ( *UserLoadFunc )( STREAMDATA * Src , BASEIMAGE * BaseImage ) ) 
{
	return AddUserGraphLoadFunction4( UserLoadFunc  ) ;
}
int __stdcall dx_SubUserGraphLoadFunction4( int ( *UserLoadFunc )( STREAMDATA * Src , BASEIMAGE * BaseImage ) ) 
{
	return SubUserGraphLoadFunction4( UserLoadFunc  ) ;
}
int  __stdcall dx_SetUseFastLoadFlag( int  Flag)
{
	return SetUseFastLoadFlag( Flag);
}
int  __stdcall dx_SetGraphDataShavedMode( int  ShavedMode)
{
	return SetGraphDataShavedMode( ShavedMode);
}
int  __stdcall dx_GetGraphDataShavedMode( void)
{
	return GetGraphDataShavedMode( );
}
int  __stdcall dx_SetUsePremulAlphaConvertLoad( int  UseFlag)
{
	return SetUsePremulAlphaConvertLoad( UseFlag);
}
int __stdcall dx_CreateBaseImage( const TCHAR * FileName , const void * FileImage , int FileImageSize , int DataType , BASEIMAGE * BaseImage , int ReverseFlag ) 
{
	return CreateBaseImage( FileName , FileImage , FileImageSize , DataType , BaseImage , ReverseFlag  ) ;
}
int __stdcall dx_CreateGraphImage( const TCHAR * FileName , const void * DataImage , int DataImageSize , int DataImageType , BASEIMAGE * GraphImage , int ReverseFlag ) 
{
	return CreateGraphImage( FileName , DataImage , DataImageSize , DataImageType , GraphImage , ReverseFlag  ) ;
}
int __stdcall dx_CreateBaseImageToFile( const TCHAR * FileName , BASEIMAGE * BaseImage , int ReverseFlag ) 
{
	return CreateBaseImageToFile( FileName , BaseImage , ReverseFlag  ) ;
}
int __stdcall dx_CreateBaseImageToMem( const void * FileImage , int FileImageSize , BASEIMAGE * BaseImage , int ReverseFlag ) 
{
	return CreateBaseImageToMem( FileImage , FileImageSize , BaseImage , ReverseFlag  ) ;
}
int __stdcall dx_CreateARGBF32ColorBaseImage( int SizeX , int SizeY , BASEIMAGE * BaseImage ) 
{
	return CreateARGBF32ColorBaseImage( SizeX , SizeY , BaseImage  ) ;
}
int __stdcall dx_CreateARGBF16ColorBaseImage( int SizeX , int SizeY , BASEIMAGE * BaseImage ) 
{
	return CreateARGBF16ColorBaseImage( SizeX , SizeY , BaseImage  ) ;
}
int __stdcall dx_CreateARGB8ColorBaseImage( int SizeX , int SizeY , BASEIMAGE * BaseImage ) 
{
	return CreateARGB8ColorBaseImage( SizeX , SizeY , BaseImage  ) ;
}
int __stdcall dx_CreateXRGB8ColorBaseImage( int SizeX , int SizeY , BASEIMAGE * BaseImage ) 
{
	return CreateXRGB8ColorBaseImage( SizeX , SizeY , BaseImage  ) ;
}
int __stdcall dx_CreateRGB8ColorBaseImage( int SizeX , int SizeY , BASEIMAGE * BaseImage ) 
{
	return CreateRGB8ColorBaseImage( SizeX , SizeY , BaseImage  ) ;
}
int __stdcall dx_CreateARGB4ColorBaseImage( int SizeX , int SizeY , BASEIMAGE * BaseImage ) 
{
	return CreateARGB4ColorBaseImage( SizeX , SizeY , BaseImage  ) ;
}
int __stdcall dx_CreatePAL8ColorBaseImage( int SizeX , int SizeY , BASEIMAGE * BaseImage , int UseAlpha ) 
{
	return CreatePAL8ColorBaseImage( SizeX , SizeY , BaseImage , UseAlpha  ) ;
}
int __stdcall dx_CreateColorDataBaseImage( int SizeX , int SizeY , const COLORDATA * ColorData , BASEIMAGE * BaseImage ) 
{
	return CreateColorDataBaseImage( SizeX , SizeY , ColorData , BaseImage  ) ;
}
int __stdcall dx_GetBaseImageGraphDataSize( const BASEIMAGE * BaseImage ) 
{
	return GetBaseImageGraphDataSize( BaseImage  ) ;
}
int __stdcall dx_DerivationBaseImage( const BASEIMAGE * BaseImage , int x1 , int y1 , int x2 , int y2 , BASEIMAGE * NewBaseImage ) 
{
	return DerivationBaseImage( BaseImage , x1 , y1 , x2 , y2 , NewBaseImage  ) ;
}
int __stdcall dx_ReleaseBaseImage( BASEIMAGE * BaseImage ) 
{
	return ReleaseBaseImage( BaseImage  ) ;
}
int __stdcall dx_ReleaseGraphImage( BASEIMAGE * GraphImage ) 
{
	return ReleaseGraphImage( GraphImage  ) ;
}
int __stdcall dx_ConvertNormalFormatBaseImage( BASEIMAGE * BaseImage , int ReleaseOrigGraphData ) 
{
	return ConvertNormalFormatBaseImage( BaseImage , ReleaseOrigGraphData  ) ;
}
int __stdcall dx_ConvertPremulAlphaBaseImage( BASEIMAGE * BaseImage ) 
{
	return ConvertPremulAlphaBaseImage( BaseImage  ) ;
}
int __stdcall dx_ConvertInterpAlphaBaseImage( BASEIMAGE * BaseImage ) 
{
	return ConvertInterpAlphaBaseImage( BaseImage  ) ;
}
int __stdcall dx_GetDrawScreenBaseImage( int x1 , int y1 , int x2 , int y2 , BASEIMAGE * BaseImage ) 
{
	return GetDrawScreenBaseImage( x1 , y1 , x2 , y2 , BaseImage  ) ;
}
int __stdcall dx_GetDrawScreenBaseImageDestPos( int x1 , int y1 , int x2 , int y2 , BASEIMAGE * BaseImage , int DestX , int DestY ) 
{
	return GetDrawScreenBaseImageDestPos( x1 , y1 , x2 , y2 , BaseImage , DestX , DestY  ) ;
}
int __stdcall dx_FillBaseImage( BASEIMAGE * BaseImage , int r , int g , int b , int a ) 
{
	return FillBaseImage( BaseImage , r , g , b , a  ) ;
}
int __stdcall dx_FillRectBaseImage( BASEIMAGE * BaseImage , int x , int y , int w , int h , int r , int g , int b , int a ) 
{
	return FillRectBaseImage( BaseImage , x , y , w , h , r , g , b , a  ) ;
}
int __stdcall dx_ClearRectBaseImage( BASEIMAGE * BaseImage , int x , int y , int w , int h ) 
{
	return ClearRectBaseImage( BaseImage , x , y , w , h  ) ;
}
int __stdcall dx_GetPaletteBaseImage( const BASEIMAGE * BaseImage , int PaletteNo , int * r , int * g , int * b , int * a ) 
{
	return GetPaletteBaseImage( BaseImage , PaletteNo , r , g , b , a  ) ;
}
int __stdcall dx_SetPaletteBaseImage( BASEIMAGE * BaseImage , int PaletteNo , int r , int g , int b , int a ) 
{
	return SetPaletteBaseImage( BaseImage , PaletteNo , r , g , b , a  ) ;
}
int __stdcall dx_SetPixelPalCodeBaseImage( BASEIMAGE * BaseImage , int x , int y , int palNo ) 
{
	return SetPixelPalCodeBaseImage( BaseImage , x , y , palNo  ) ;
}
int __stdcall dx_GetPixelPalCodeBaseImage( const BASEIMAGE * BaseImage , int x , int y ) 
{
	return GetPixelPalCodeBaseImage( BaseImage , x , y  ) ;
}
int __stdcall dx_SetPixelBaseImage( BASEIMAGE * BaseImage , int x , int y , int r , int g , int b , int a ) 
{
	return SetPixelBaseImage( BaseImage , x , y , r , g , b , a  ) ;
}
int __stdcall dx_SetPixelBaseImageF( BASEIMAGE * BaseImage , int x , int y , float r , float g , float b , float a ) 
{
	return SetPixelBaseImageF( BaseImage , x , y , r , g , b , a  ) ;
}
int __stdcall dx_GetPixelBaseImage( const BASEIMAGE * BaseImage , int x , int y , int * r , int * g , int * b , int * a ) 
{
	return GetPixelBaseImage( BaseImage , x , y , r , g , b , a  ) ;
}
int __stdcall dx_GetPixelBaseImageF( const BASEIMAGE * BaseImage , int x , int y , float * r , float * g , float * b , float * a ) 
{
	return GetPixelBaseImageF( BaseImage , x , y , r , g , b , a  ) ;
}
int __stdcall dx_DrawLineBaseImage( BASEIMAGE * BaseImage , int x1 , int y1 , int x2 , int y2 , int r , int g , int b , int a ) 
{
	return DrawLineBaseImage( BaseImage , x1 , y1 , x2 , y2 , r , g , b , a  ) ;
}
int __stdcall dx_DrawCircleBaseImage( BASEIMAGE * BaseImage , int x , int y , int radius , int r , int g , int b , int a , int FillFlag ) 
{
	return DrawCircleBaseImage( BaseImage , x , y , radius , r , g , b , a , FillFlag  ) ;
}
int __stdcall dx_BltBaseImage( int SrcX , int SrcY , int SrcSizeX , int SrcSizeY , int DestX , int DestY , BASEIMAGE * SrcBaseImage , BASEIMAGE * DestBaseImage ) 
{
	return BltBaseImage( SrcX , SrcY , SrcSizeX , SrcSizeY , DestX , DestY , SrcBaseImage , DestBaseImage  ) ;
}
int __stdcall dx_BltBaseImage_2( int DestX , int DestY , BASEIMAGE * SrcBaseImage , BASEIMAGE * DestBaseImage ) 
{
	return BltBaseImage( DestX , DestY , SrcBaseImage , DestBaseImage  ) ;
}
int __stdcall dx_BltBaseImageWithTransColor( int SrcX , int SrcY , int SrcSizeX , int SrcSizeY , int DestX , int DestY , BASEIMAGE * SrcBaseImage , BASEIMAGE * DestBaseImage , int Tr , int Tg , int Tb , int Ta ) 
{
	return BltBaseImageWithTransColor( SrcX , SrcY , SrcSizeX , SrcSizeY , DestX , DestY , SrcBaseImage , DestBaseImage , Tr , Tg , Tb , Ta  ) ;
}
int __stdcall dx_BltBaseImageWithAlphaBlend( int SrcX , int SrcY , int SrcSizeX , int SrcSizeY , int DestX , int DestY , BASEIMAGE * SrcBaseImage , BASEIMAGE * DestBaseImage , int Opacity ) 
{
	return BltBaseImageWithAlphaBlend( SrcX , SrcY , SrcSizeX , SrcSizeY , DestX , DestY , SrcBaseImage , DestBaseImage , Opacity  ) ;
}
int __stdcall dx_ReverseBaseImageH( BASEIMAGE * BaseImage ) 
{
	return ReverseBaseImageH( BaseImage  ) ;
}
int __stdcall dx_ReverseBaseImageV( BASEIMAGE * BaseImage ) 
{
	return ReverseBaseImageV( BaseImage  ) ;
}
int __stdcall dx_ReverseBaseImage( BASEIMAGE * BaseImage ) 
{
	return ReverseBaseImage( BaseImage  ) ;
}
int __stdcall dx_CheckPixelAlphaBaseImage( const BASEIMAGE * BaseImage ) 
{
	return CheckPixelAlphaBaseImage( BaseImage  ) ;
}
int __stdcall dx_GetBaseImageUseMaxPaletteNo( const BASEIMAGE * BaseImage ) 
{
	return GetBaseImageUseMaxPaletteNo( BaseImage  ) ;
}
int __stdcall dx_SaveBaseImageToBmp( const TCHAR * FilePath , const BASEIMAGE * BaseImage ) 
{
	return SaveBaseImageToBmp( FilePath , BaseImage  ) ;
}
int __stdcall dx_SaveBaseImageToDds( const TCHAR * FilePath , const BASEIMAGE * BaseImage ) 
{
	return SaveBaseImageToDds( FilePath , BaseImage  ) ;
}
int __stdcall dx_SaveBaseImageToPng( const TCHAR * FilePath , BASEIMAGE * BaseImage , int CompressionLevel ) 
{
	return SaveBaseImageToPng( FilePath , BaseImage , CompressionLevel  ) ;
}
int __stdcall dx_SaveBaseImageToJpeg( const TCHAR * FilePath , BASEIMAGE * BaseImage , int Quality , int Sample2x1 ) 
{
	return SaveBaseImageToJpeg( FilePath , BaseImage , Quality , Sample2x1  ) ;
}
int __stdcall dx_DrawBaseImage( int x , int y , BASEIMAGE * BaseImage ) 
{
	return DrawBaseImage( x , y , BaseImage  ) ;
}
int __stdcall dx_GraphColorMatchBltVer2( void * DestGraphData , int DestPitch , const COLORDATA * DestColorData , const void * SrcGraphData , int SrcPitch , const COLORDATA * SrcColorData , const void * AlphaMask , int AlphaPitch , const COLORDATA * AlphaColorData , POINT DestPoint , const RECT * SrcRect , int ReverseFlag , int TransColorAlphaTestFlag , unsigned int TransColor , int ImageShavedMode , int AlphaOnlyFlag , int RedIsAlphaFlag , int TransColorNoMoveFlag , int Pal8ColorMatch ) 
{
	return GraphColorMatchBltVer2( DestGraphData , DestPitch , DestColorData , SrcGraphData , SrcPitch , SrcColorData , AlphaMask , AlphaPitch , AlphaColorData , DestPoint , SrcRect , ReverseFlag , TransColorAlphaTestFlag , TransColor , ImageShavedMode , AlphaOnlyFlag , RedIsAlphaFlag , TransColorNoMoveFlag , Pal8ColorMatch  ) ;
}
COLOR_F  __stdcall dx_GetColorF( float  Red, float  Green, float  Blue, float  Alpha)
{
	return GetColorF( Red, Green, Blue, Alpha);
}
COLOR_U8  __stdcall dx_GetColorU8( int  Red, int  Green, int  Blue, int  Alpha)
{
	return GetColorU8( Red, Green, Blue, Alpha);
}
unsigned int  __stdcall dx_GetColor( int  Red, int  Green, int  Blue)
{
	return GetColor( Red, Green, Blue);
}
int  __stdcall dx_GetColor2( unsigned int  Color, int *  Red, int *  Green, int *  Blue)
{
	return GetColor2( Color, Red, Green, Blue);
}
unsigned int  __stdcall dx_GetColor3( const COLORDATA *  ColorData, int  Red, int  Green, int  Blue, int  Alpha)
{
	return GetColor3( ColorData, Red, Green, Blue, Alpha);
}
unsigned int  __stdcall dx_GetColor4( const COLORDATA *  DestColorData, const COLORDATA *  SrcColorData, unsigned int  SrcColor)
{
	return GetColor4( DestColorData, SrcColorData, SrcColor);
}
int  __stdcall dx_GetColor5( const COLORDATA *  ColorData, unsigned int  Color, int *  Red, int *  Green, int *  Blue, int *  Alpha)
{
	return GetColor5( ColorData, Color, Red, Green, Blue, Alpha);
}
int  __stdcall dx_CreatePaletteColorData( COLORDATA *  ColorDataBuf)
{
	return CreatePaletteColorData( ColorDataBuf);
}
int  __stdcall dx_CreateARGBF32ColorData( COLORDATA *  ColorDataBuf)
{
	return CreateARGBF32ColorData( ColorDataBuf);
}
int  __stdcall dx_CreateARGBF16ColorData( COLORDATA *  ColorDataBuf)
{
	return CreateARGBF16ColorData( ColorDataBuf);
}
int  __stdcall dx_CreateXRGB8ColorData( COLORDATA *  ColorDataBuf)
{
	return CreateXRGB8ColorData( ColorDataBuf);
}
int  __stdcall dx_CreateARGB8ColorData( COLORDATA *  ColorDataBuf)
{
	return CreateARGB8ColorData( ColorDataBuf);
}
int  __stdcall dx_CreateARGB4ColorData( COLORDATA *  ColorDataBuf)
{
	return CreateARGB4ColorData( ColorDataBuf);
}
int  __stdcall dx_CreateFullColorData( COLORDATA *  ColorDataBuf)
{
	return CreateFullColorData( ColorDataBuf);
}
int  __stdcall dx_CreateGrayColorData( COLORDATA *  ColorDataBuf)
{
	return CreateGrayColorData( ColorDataBuf);
}
int  __stdcall dx_CreatePal8ColorData( COLORDATA *  ColorDataBuf, int  UseAlpha)
{
	return CreatePal8ColorData( ColorDataBuf, UseAlpha);
}
int  __stdcall dx_CreateColorData( COLORDATA *  ColorDataBuf, int  ColorBitDepth, DWORD  RedMask, DWORD  GreenMask, DWORD  BlueMask, DWORD  AlphaMask, int  ChannelNum, int  ChannelBitDepth, int  FloatTypeFlag)
{
	return CreateColorData( ColorDataBuf, ColorBitDepth, RedMask, GreenMask, BlueMask, AlphaMask, ChannelNum, ChannelBitDepth, FloatTypeFlag);
}
void  __stdcall dx_SetColorDataNoneMask( COLORDATA *  ColorData)
{
	SetColorDataNoneMask( ColorData);
}
int  __stdcall dx_CmpColorData( const COLORDATA *  ColorData1, const COLORDATA *  ColorData2)
{
	return CmpColorData( ColorData1, ColorData2);
}
int  __stdcall dx_InitSoftImage( void)
{
	return InitSoftImage( );
}
int  __stdcall dx_LoadSoftImage( const char * FileName)
{
	return LoadSoftImage( FileName);
}
int  __stdcall dx_LoadSoftImageToMem( const void * FileImage, int  FileImageSize)
{
	return LoadSoftImageToMem( FileImage, FileImageSize);
}
int  __stdcall dx_MakeSoftImage( int  SizeX, int  SizeY)
{
	return MakeSoftImage( SizeX, SizeY);
}
int  __stdcall dx_MakeARGBF32ColorSoftImage( int  SizeX, int  SizeY)
{
	return MakeARGBF32ColorSoftImage( SizeX, SizeY);
}
int  __stdcall dx_MakeARGBF16ColorSoftImage( int  SizeX, int  SizeY)
{
	return MakeARGBF16ColorSoftImage( SizeX, SizeY);
}
int  __stdcall dx_MakeARGB8ColorSoftImage( int  SizeX, int  SizeY)
{
	return MakeARGB8ColorSoftImage( SizeX, SizeY);
}
int  __stdcall dx_MakeXRGB8ColorSoftImage( int  SizeX, int  SizeY)
{
	return MakeXRGB8ColorSoftImage( SizeX, SizeY);
}
int  __stdcall dx_MakeARGB4ColorSoftImage( int  SizeX, int  SizeY)
{
	return MakeARGB4ColorSoftImage( SizeX, SizeY);
}
int  __stdcall dx_MakeRGB8ColorSoftImage( int  SizeX, int  SizeY)
{
	return MakeRGB8ColorSoftImage( SizeX, SizeY);
}
int  __stdcall dx_MakePAL8ColorSoftImage( int  SizeX, int  SizeY, int  UseAlpha)
{
	return MakePAL8ColorSoftImage( SizeX, SizeY, UseAlpha);
}
int  __stdcall dx_DeleteSoftImage( int  SIHandle)
{
	return DeleteSoftImage( SIHandle);
}
int  __stdcall dx_GetSoftImageSize( int  SIHandle, int *  Width, int *  Height)
{
	return GetSoftImageSize( SIHandle, Width, Height);
}
int  __stdcall dx_CheckPaletteSoftImage( int  SIHandle)
{
	return CheckPaletteSoftImage( SIHandle);
}
int  __stdcall dx_CheckAlphaSoftImage( int  SIHandle)
{
	return CheckAlphaSoftImage( SIHandle);
}
int  __stdcall dx_CheckPixelAlphaSoftImage( int  SIHandle)
{
	return CheckPixelAlphaSoftImage( SIHandle);
}
int  __stdcall dx_GetDrawScreenSoftImage( int  x1, int  y1, int  x2, int  y2, int  SIHandle)
{
	return GetDrawScreenSoftImage( x1, y1, x2, y2, SIHandle);
}
int  __stdcall dx_GetDrawScreenSoftImageDestPos( int  x1, int  y1, int  x2, int  y2, int  SIHandle, int  DestX, int  DestY)
{
	return GetDrawScreenSoftImageDestPos( x1, y1, x2, y2, SIHandle, DestX, DestY);
}
int  __stdcall dx_FillSoftImage( int  SIHandle, int  r, int  g, int  b, int  a)
{
	return FillSoftImage( SIHandle, r, g, b, a);
}
int  __stdcall dx_ClearRectSoftImage( int  SIHandle, int  x, int  y, int  w, int  h)
{
	return ClearRectSoftImage( SIHandle, x, y, w, h);
}
int  __stdcall dx_GetPaletteSoftImage( int  SIHandle, int  PaletteNo, int *  r, int *  g, int *  b, int *  a)
{
	return GetPaletteSoftImage( SIHandle, PaletteNo, r, g, b, a);
}
int  __stdcall dx_SetPaletteSoftImage( int  SIHandle, int  PaletteNo, int  r, int  g, int  b, int  a)
{
	return SetPaletteSoftImage( SIHandle, PaletteNo, r, g, b, a);
}
int  __stdcall dx_DrawPixelPalCodeSoftImage( int  SIHandle, int  x, int  y, int  palNo)
{
	return DrawPixelPalCodeSoftImage( SIHandle, x, y, palNo);
}
int  __stdcall dx_GetPixelPalCodeSoftImage( int  SIHandle, int  x, int  y)
{
	return GetPixelPalCodeSoftImage( SIHandle, x, y);
}
void *  __stdcall dx_GetImageAddressSoftImage( int  SIHandle)
{
	return GetImageAddressSoftImage( SIHandle);
}
int  __stdcall dx_GetPitchSoftImage( int  SIHandle)
{
	return GetPitchSoftImage( SIHandle);
}
int  __stdcall dx_DrawPixelSoftImage( int  SIHandle, int  x, int  y, int  r, int  g, int  b, int  a)
{
	return DrawPixelSoftImage( SIHandle, x, y, r, g, b, a);
}
int  __stdcall dx_DrawPixelSoftImageF( int  SIHandle, int  x, int  y, float  r, float  g, float  b, float  a)
{
	return DrawPixelSoftImageF( SIHandle, x, y, r, g, b, a);
}
void  __stdcall dx_DrawPixelSoftImage_Unsafe_XRGB8( int  SIHandle, int  x, int  y, int  r, int  g, int  b)
{
	DrawPixelSoftImage_Unsafe_XRGB8( SIHandle, x, y, r, g, b);
}
void  __stdcall dx_DrawPixelSoftImage_Unsafe_ARGB8( int  SIHandle, int  x, int  y, int  r, int  g, int  b, int  a)
{
	DrawPixelSoftImage_Unsafe_ARGB8( SIHandle, x, y, r, g, b, a);
}
int  __stdcall dx_GetPixelSoftImage( int  SIHandle, int  x, int  y, int *  r, int *  g, int *  b, int *  a)
{
	return GetPixelSoftImage( SIHandle, x, y, r, g, b, a);
}
int  __stdcall dx_GetPixelSoftImageF( int  SIHandle, int  x, int  y, float *  r, float *  g, float *  b, float *  a)
{
	return GetPixelSoftImageF( SIHandle, x, y, r, g, b, a);
}
void  __stdcall dx_GetPixelSoftImage_Unsafe_XRGB8( int  SIHandle, int  x, int  y, int *  r, int *  g, int *  b)
{
	GetPixelSoftImage_Unsafe_XRGB8( SIHandle, x, y, r, g, b);
}
void  __stdcall dx_GetPixelSoftImage_Unsafe_ARGB8( int  SIHandle, int  x, int  y, int *  r, int *  g, int *  b, int *  a)
{
	GetPixelSoftImage_Unsafe_ARGB8( SIHandle, x, y, r, g, b, a);
}
int  __stdcall dx_DrawLineSoftImage( int  SIHandle, int  x1, int  y1, int  x2, int  y2, int  r, int  g, int  b, int  a)
{
	return DrawLineSoftImage( SIHandle, x1, y1, x2, y2, r, g, b, a);
}
int  __stdcall dx_DrawCircleSoftImage( int  SIHandle, int  x, int  y, int  radius, int  r, int  g, int  b, int  a, int  FillFlag)
{
	return DrawCircleSoftImage( SIHandle, x, y, radius, r, g, b, a, FillFlag);
}
int  __stdcall dx_BltSoftImage( int  SrcX, int  SrcY, int  SrcSizeX, int  SrcSizeY, int  SrcSIHandle, int  DestX, int  DestY, int  DestSIHandle)
{
	return BltSoftImage( SrcX, SrcY, SrcSizeX, SrcSizeY, SrcSIHandle, DestX, DestY, DestSIHandle);
}
int  __stdcall dx_BltSoftImageWithTransColor( int  SrcX, int  SrcY, int  SrcSizeX, int  SrcSizeY, int  SrcSIHandle, int  DestX, int  DestY, int  DestSIHandle, int  Tr, int  Tg, int  Tb, int  Ta)
{
	return BltSoftImageWithTransColor( SrcX, SrcY, SrcSizeX, SrcSizeY, SrcSIHandle, DestX, DestY, DestSIHandle, Tr, Tg, Tb, Ta);
}
int  __stdcall dx_BltSoftImageWithAlphaBlend( int  SrcX, int  SrcY, int  SrcSizeX, int  SrcSizeY, int  SrcSIHandle, int  DestX, int  DestY, int  DestSIHandle, int  Opacity)
{
	return BltSoftImageWithAlphaBlend( SrcX, SrcY, SrcSizeX, SrcSizeY, SrcSIHandle, DestX, DestY, DestSIHandle, Opacity);
}
int  __stdcall dx_ReverseSoftImageH( int  SIHandle)
{
	return ReverseSoftImageH( SIHandle);
}
int  __stdcall dx_ReverseSoftImageV( int  SIHandle)
{
	return ReverseSoftImageV( SIHandle);
}
int  __stdcall dx_ReverseSoftImage( int  SIHandle)
{
	return ReverseSoftImage( SIHandle);
}
int  __stdcall dx_BltStringSoftImage( int  x, int  y, const char * StrData, int  DestSIHandle, int  DestEdgeSIHandle, int  VerticalFlag)
{
	return BltStringSoftImage( x, y, StrData, DestSIHandle, DestEdgeSIHandle, VerticalFlag);
}
int  __stdcall dx_BltStringSoftImageToHandle( int  x, int  y, const char * StrData, int  DestSIHandle, int  DestEdgeSIHandle, int  FontHandle, int  VerticalFlag)
{
	return BltStringSoftImageToHandle( x, y, StrData, DestSIHandle, DestEdgeSIHandle, FontHandle, VerticalFlag);
}
int  __stdcall dx_DrawSoftImage( int  x, int  y, int  SIHandle)
{
	return DrawSoftImage( x, y, SIHandle);
}
int  __stdcall dx_SaveSoftImageToBmp( const char * FilePath, int  SIHandle)
{
	return SaveSoftImageToBmp( FilePath, SIHandle);
}
int  __stdcall dx_SaveSoftImageToDds( const char * FilePath, int  SIHandle)
{
	return SaveSoftImageToDds( FilePath, SIHandle);
}
int  __stdcall dx_SaveSoftImageToPng( const char * FilePath, int  SIHandle, int  CompressionLevel)
{
	return SaveSoftImageToPng( FilePath, SIHandle, CompressionLevel);
}
int  __stdcall dx_SaveSoftImageToJpeg( const char * FilePath, int  SIHandle, int  Quality, int  Sample2x1)
{
	return SaveSoftImageToJpeg( FilePath, SIHandle, Quality, Sample2x1);
}
int  __stdcall dx_InitSoundMem( int  LogOutFlag)
{
	return InitSoundMem( LogOutFlag);
}
int  __stdcall dx_AddSoundData( int  Handle)
{
	return AddSoundData( Handle);
}
int __stdcall dx_AddStreamSoundMem( STREAMDATA * Stream , int LoopNum , int SoundHandle , int StreamDataType , int * CanStreamCloseFlag , int UnionHandle ) 
{
	return AddStreamSoundMem( Stream , LoopNum , SoundHandle , StreamDataType , CanStreamCloseFlag , UnionHandle  ) ;
}
int  __stdcall dx_AddStreamSoundMemToMem( const void * FileImage, int  FileImageSize, int  LoopNum, int  SoundHandle, int  StreamDataType, int  UnionHandle)
{
	return AddStreamSoundMemToMem( FileImage, FileImageSize, LoopNum, SoundHandle, StreamDataType, UnionHandle);
}
int  __stdcall dx_AddStreamSoundMemToFile( const char * WaveFile, int  LoopNum, int  SoundHandle, int  StreamDataType, int  UnionHandle)
{
	return AddStreamSoundMemToFile( WaveFile, LoopNum, SoundHandle, StreamDataType, UnionHandle);
}
int  __stdcall dx_SetupStreamSoundMem( int  SoundHandle)
{
	return SetupStreamSoundMem( SoundHandle);
}
int  __stdcall dx_PlayStreamSoundMem( int  SoundHandle, int  PlayType, int  TopPositionFlag)
{
	return PlayStreamSoundMem( SoundHandle, PlayType, TopPositionFlag);
}
int  __stdcall dx_CheckStreamSoundMem( int  SoundHandle)
{
	return CheckStreamSoundMem( SoundHandle);
}
int  __stdcall dx_StopStreamSoundMem( int  SoundHandle)
{
	return StopStreamSoundMem( SoundHandle);
}
int  __stdcall dx_SetStreamSoundCurrentPosition( int  Byte, int  SoundHandle)
{
	return SetStreamSoundCurrentPosition( Byte, SoundHandle);
}
int  __stdcall dx_GetStreamSoundCurrentPosition( int  SoundHandle)
{
	return GetStreamSoundCurrentPosition( SoundHandle);
}
int  __stdcall dx_SetStreamSoundCurrentTime( int  Time, int  SoundHandle)
{
	return SetStreamSoundCurrentTime( Time, SoundHandle);
}
int  __stdcall dx_GetStreamSoundCurrentTime( int  SoundHandle)
{
	return GetStreamSoundCurrentTime( SoundHandle);
}
int  __stdcall dx_ProcessStreamSoundMem( int  SoundHandle)
{
	return ProcessStreamSoundMem( SoundHandle);
}
int  __stdcall dx_ProcessStreamSoundMemAll( void)
{
	return ProcessStreamSoundMemAll( );
}
int  __stdcall dx_LoadSoundMem2( const char * FileName1, const char * FileName2)
{
	return LoadSoundMem2( FileName1, FileName2);
}
int  __stdcall dx_LoadBGM( const char * FileName)
{
	return LoadBGM( FileName);
}
int  __stdcall dx_LoadSoundMemBase( const char * FileName, int  BufferNum, int  UnionHandle)
{
	return LoadSoundMemBase( FileName, BufferNum, UnionHandle);
}
int  __stdcall dx_LoadSoundMem( const char * FileName, int  BufferNum, int  UnionHandle)
{
	return LoadSoundMem( FileName, BufferNum, UnionHandle);
}
int  __stdcall dx_LoadSoundMemToBufNumSitei( const char * FileName, int  BufferNum)
{
	return LoadSoundMemToBufNumSitei( FileName, BufferNum);
}
int  __stdcall dx_DuplicateSoundMem( int  SrcSoundHandle, int  BufferNum)
{
	return DuplicateSoundMem( SrcSoundHandle, BufferNum);
}
int  __stdcall dx_LoadSoundMemByMemImageBase( const void * FileImage, int  FileImageSize, int  BufferNum, int  UnionHandle)
{
	return LoadSoundMemByMemImageBase( FileImage, FileImageSize, BufferNum, UnionHandle);
}
int  __stdcall dx_LoadSoundMemByMemImage( const void * FileImage, int  FileImageSize, int  UnionHandle)
{
	return LoadSoundMemByMemImage( FileImage, FileImageSize, UnionHandle);
}
int __stdcall dx_LoadSoundMemByMemImage2( const void * WaveImage , int WaveImageSize , const WAVEFORMATEX * WaveFormat , int WaveHeaderSize ) 
{
	return LoadSoundMemByMemImage2( WaveImage , WaveImageSize , WaveFormat , WaveHeaderSize  ) ;
}
int  __stdcall dx_LoadSoundMemByMemImageToBufNumSitei( const void * FileImage, int  FileImageSize, int  BufferNum)
{
	return LoadSoundMemByMemImageToBufNumSitei( FileImage, FileImageSize, BufferNum);
}
int  __stdcall dx_LoadSoundMem2ByMemImage( const void * FileImage1, int  FileImageSize1, const void * FileImage2, int  FileImageSize2)
{
	return LoadSoundMem2ByMemImage( FileImage1, FileImageSize1, FileImage2, FileImageSize2);
}
int  __stdcall dx_LoadSoundMemFromSoftSound( int  SoftSoundHandle, int  BufferNum)
{
	return LoadSoundMemFromSoftSound( SoftSoundHandle, BufferNum);
}
int  __stdcall dx_DeleteSoundMem( int  SoundHandle, int  LogOutFlag)
{
	return DeleteSoundMem( SoundHandle, LogOutFlag);
}
int  __stdcall dx_PlaySoundMem( int  SoundHandle, int  PlayType, int  TopPositionFlag)
{
	return PlaySoundMem( SoundHandle, PlayType, TopPositionFlag);
}
int  __stdcall dx_StopSoundMem( int  SoundHandle)
{
	return StopSoundMem( SoundHandle);
}
int  __stdcall dx_CheckSoundMem( int  SoundHandle)
{
	return CheckSoundMem( SoundHandle);
}
int  __stdcall dx_SetPanSoundMem( int  PanPal, int  SoundHandle)
{
	return SetPanSoundMem( PanPal, SoundHandle);
}
int  __stdcall dx_ChangePanSoundMem( int  PanPal, int  SoundHandle)
{
	return ChangePanSoundMem( PanPal, SoundHandle);
}
int  __stdcall dx_GetPanSoundMem( int  SoundHandle)
{
	return GetPanSoundMem( SoundHandle);
}
int  __stdcall dx_SetVolumeSoundMem( int  VolumePal, int  SoundHandle)
{
	return SetVolumeSoundMem( VolumePal, SoundHandle);
}
int  __stdcall dx_ChangeVolumeSoundMem( int  VolumePal, int  SoundHandle)
{
	return ChangeVolumeSoundMem( VolumePal, SoundHandle);
}
int  __stdcall dx_GetVolumeSoundMem( int  SoundHandle)
{
	return GetVolumeSoundMem( SoundHandle);
}
int  __stdcall dx_SetChannelVolumeSoundMem( int  Channel, int  VolumePal, int  SoundHandle)
{
	return SetChannelVolumeSoundMem( Channel, VolumePal, SoundHandle);
}
int  __stdcall dx_ChangeChannelVolumeSoundMem( int  Channel, int  VolumePal, int  SoundHandle)
{
	return ChangeChannelVolumeSoundMem( Channel, VolumePal, SoundHandle);
}
int  __stdcall dx_GetChannelVolumeSoundMem( int  Channel, int  SoundHandle)
{
	return GetChannelVolumeSoundMem( Channel, SoundHandle);
}
int  __stdcall dx_SetFrequencySoundMem( int  FrequencyPal, int  SoundHandle)
{
	return SetFrequencySoundMem( FrequencyPal, SoundHandle);
}
int  __stdcall dx_GetFrequencySoundMem( int  SoundHandle)
{
	return GetFrequencySoundMem( SoundHandle);
}
int  __stdcall dx_ResetFrequencySoundMem( int  SoundHandle)
{
	return ResetFrequencySoundMem( SoundHandle);
}
int  __stdcall dx_SetNextPlayPanSoundMem( int  PanPal, int  SoundHandle)
{
	return SetNextPlayPanSoundMem( PanPal, SoundHandle);
}
int  __stdcall dx_ChangeNextPlayPanSoundMem( int  PanPal, int  SoundHandle)
{
	return ChangeNextPlayPanSoundMem( PanPal, SoundHandle);
}
int  __stdcall dx_SetNextPlayVolumeSoundMem( int  VolumePal, int  SoundHandle)
{
	return SetNextPlayVolumeSoundMem( VolumePal, SoundHandle);
}
int  __stdcall dx_ChangeNextPlayVolumeSoundMem( int  VolumePal, int  SoundHandle)
{
	return ChangeNextPlayVolumeSoundMem( VolumePal, SoundHandle);
}
int  __stdcall dx_SetNextPlayChannelVolumeSoundMem( int  Channel, int  VolumePal, int  SoundHandle)
{
	return SetNextPlayChannelVolumeSoundMem( Channel, VolumePal, SoundHandle);
}
int  __stdcall dx_ChangeNextPlayChannelVolumeSoundMem( int  Channel, int  VolumePal, int  SoundHandle)
{
	return ChangeNextPlayChannelVolumeSoundMem( Channel, VolumePal, SoundHandle);
}
int  __stdcall dx_SetNextPlayFrequencySoundMem( int  FrequencyPal, int  SoundHandle)
{
	return SetNextPlayFrequencySoundMem( FrequencyPal, SoundHandle);
}
int  __stdcall dx_SetCurrentPositionSoundMem( int  SamplePosition, int  SoundHandle)
{
	return SetCurrentPositionSoundMem( SamplePosition, SoundHandle);
}
int  __stdcall dx_GetCurrentPositionSoundMem( int  SoundHandle)
{
	return GetCurrentPositionSoundMem( SoundHandle);
}
int  __stdcall dx_SetSoundCurrentPosition( int  Byte, int  SoundHandle)
{
	return SetSoundCurrentPosition( Byte, SoundHandle);
}
int  __stdcall dx_GetSoundCurrentPosition( int  SoundHandle)
{
	return GetSoundCurrentPosition( SoundHandle);
}
int  __stdcall dx_SetSoundCurrentTime( int  Time, int  SoundHandle)
{
	return SetSoundCurrentTime( Time, SoundHandle);
}
int  __stdcall dx_GetSoundCurrentTime( int  SoundHandle)
{
	return GetSoundCurrentTime( SoundHandle);
}
int  __stdcall dx_GetSoundTotalSample( int  SoundHandle)
{
	return GetSoundTotalSample( SoundHandle);
}
int  __stdcall dx_GetSoundTotalTime( int  SoundHandle)
{
	return GetSoundTotalTime( SoundHandle);
}
int  __stdcall dx_SetLoopPosSoundMem( int  LoopTime, int  SoundHandle)
{
	return SetLoopPosSoundMem( LoopTime, SoundHandle);
}
int  __stdcall dx_SetLoopTimePosSoundMem( int  LoopTime, int  SoundHandle)
{
	return SetLoopTimePosSoundMem( LoopTime, SoundHandle);
}
int  __stdcall dx_SetLoopSamplePosSoundMem( int  LoopSamplePosition, int  SoundHandle)
{
	return SetLoopSamplePosSoundMem( LoopSamplePosition, SoundHandle);
}
int  __stdcall dx_SetLoopStartTimePosSoundMem( int  LoopStartTime, int  SoundHandle)
{
	return SetLoopStartTimePosSoundMem( LoopStartTime, SoundHandle);
}
int  __stdcall dx_SetLoopStartSamplePosSoundMem( int  LoopStartSamplePosition, int  SoundHandle)
{
	return SetLoopStartSamplePosSoundMem( LoopStartSamplePosition, SoundHandle);
}
int  __stdcall dx_SetPlayFinishDeleteSoundMem( int  DeleteFlag, int  SoundHandle)
{
	return SetPlayFinishDeleteSoundMem( DeleteFlag, SoundHandle);
}
int  __stdcall dx_Set3DReverbParamSoundMem( const SOUND3D_REVERB_PARAM *  Param, int  SoundHandle)
{
	return Set3DReverbParamSoundMem( Param, SoundHandle);
}
int  __stdcall dx_Set3DPresetReverbParamSoundMem( int  PresetNo, int  SoundHandle)
{
	return Set3DPresetReverbParamSoundMem( PresetNo, SoundHandle);
}
int  __stdcall dx_Set3DReverbParamSoundMemAll( const SOUND3D_REVERB_PARAM *  Param, int  PlaySoundOnly)
{
	return Set3DReverbParamSoundMemAll( Param, PlaySoundOnly);
}
int  __stdcall dx_Set3DPresetReverbParamSoundMemAll( int  PresetNo, int  PlaySoundOnly)
{
	return Set3DPresetReverbParamSoundMemAll( PresetNo, PlaySoundOnly);
}
int  __stdcall dx_Get3DReverbParamSoundMem( SOUND3D_REVERB_PARAM *  ParamBuffer, int  SoundHandle)
{
	return Get3DReverbParamSoundMem( ParamBuffer, SoundHandle);
}
int  __stdcall dx_Get3DPresetReverbParamSoundMem( SOUND3D_REVERB_PARAM *  ParamBuffer, int  PresetNo)
{
	return Get3DPresetReverbParamSoundMem( ParamBuffer, PresetNo);
}
int  __stdcall dx_Set3DPositionSoundMem( VECTOR  Position, int  SoundHandle)
{
	return Set3DPositionSoundMem( Position, SoundHandle);
}
int  __stdcall dx_Set3DRadiusSoundMem( float  Radius, int  SoundHandle)
{
	return Set3DRadiusSoundMem( Radius, SoundHandle);
}
int  __stdcall dx_Set3DVelocitySoundMem( VECTOR  Velocity, int  SoundHandle)
{
	return Set3DVelocitySoundMem( Velocity, SoundHandle);
}
int  __stdcall dx_SetNextPlay3DPositionSoundMem( VECTOR  Position, int  SoundHandle)
{
	return SetNextPlay3DPositionSoundMem( Position, SoundHandle);
}
int  __stdcall dx_SetNextPlay3DRadiusSoundMem( float  Radius, int  SoundHandle)
{
	return SetNextPlay3DRadiusSoundMem( Radius, SoundHandle);
}
int  __stdcall dx_SetNextPlay3DVelocitySoundMem( VECTOR  Velocity, int  SoundHandle)
{
	return SetNextPlay3DVelocitySoundMem( Velocity, SoundHandle);
}
int  __stdcall dx_SetCreateSoundDataType( int  SoundDataType)
{
	return SetCreateSoundDataType( SoundDataType);
}
int  __stdcall dx_GetCreateSoundDataType( void)
{
	return GetCreateSoundDataType( );
}
int  __stdcall dx_SetCreateSoundPitchRate( float  Cents)
{
	return SetCreateSoundPitchRate( Cents);
}
float  __stdcall dx_GetCreateSoundPitchRate( void)
{
	return GetCreateSoundPitchRate( );
}
int  __stdcall dx_SetCreateSoundTimeStretchRate( float  Rate)
{
	return SetCreateSoundTimeStretchRate( Rate);
}
float  __stdcall dx_GetCreateSoundTimeStretchRate( void)
{
	return GetCreateSoundTimeStretchRate( );
}
int  __stdcall dx_SetDisableReadSoundFunctionMask( int  Mask)
{
	return SetDisableReadSoundFunctionMask( Mask);
}
int  __stdcall dx_GetDisableReadSoundFunctionMask( void)
{
	return GetDisableReadSoundFunctionMask( );
}
int  __stdcall dx_SetEnableSoundCaptureFlag( int  Flag)
{
	return SetEnableSoundCaptureFlag( Flag);
}
int  __stdcall dx_SetUseOldVolumeCalcFlag( int  Flag)
{
	return SetUseOldVolumeCalcFlag( Flag);
}
int  __stdcall dx_SetCreate3DSoundFlag( int  Flag)
{
	return SetCreate3DSoundFlag( Flag);
}
int  __stdcall dx_Set3DSoundOneMetre( float  Distance)
{
	return Set3DSoundOneMetre( Distance);
}
int  __stdcall dx_Set3DSoundListenerPosAndFrontPos_UpVecY( VECTOR  Position, VECTOR  FrontPosition)
{
	return Set3DSoundListenerPosAndFrontPos_UpVecY( Position, FrontPosition);
}
int  __stdcall dx_Set3DSoundListenerPosAndFrontPosAndUpVec( VECTOR  Position, VECTOR  FrontPosition, VECTOR  UpVector)
{
	return Set3DSoundListenerPosAndFrontPosAndUpVec( Position, FrontPosition, UpVector);
}
int  __stdcall dx_Set3DSoundListenerVelocity( VECTOR  Velocity)
{
	return Set3DSoundListenerVelocity( Velocity);
}
int  __stdcall dx_Set3DSoundListenerConeAngle( float  InnerAngle, float  OuterAngle)
{
	return Set3DSoundListenerConeAngle( InnerAngle, OuterAngle);
}
int  __stdcall dx_Set3DSoundListenerConeVolume( float  InnerAngleVolume, float  OuterAngleVolume)
{
	return Set3DSoundListenerConeVolume( InnerAngleVolume, OuterAngleVolume);
}
int  __stdcall dx_PlaySoundFile( const char * FileName, int  PlayType)
{
	return PlaySoundFile( FileName, PlayType);
}
int  __stdcall dx_PlaySound( const char * FileName, int  PlayType)
{
	return PlaySound( FileName, PlayType);
}
int  __stdcall dx_CheckSoundFile( void)
{
	return CheckSoundFile( );
}
int  __stdcall dx_CheckSound( void)
{
	return CheckSound( );
}
int  __stdcall dx_StopSoundFile( void)
{
	return StopSoundFile( );
}
int  __stdcall dx_StopSound( void)
{
	return StopSound( );
}
int  __stdcall dx_SetVolumeSoundFile( int  VolumePal)
{
	return SetVolumeSoundFile( VolumePal);
}
int  __stdcall dx_SetVolumeSound( int  VolumePal)
{
	return SetVolumeSound( VolumePal);
}
int  __stdcall dx_InitSoftSound( void)
{
	return InitSoftSound( );
}
int  __stdcall dx_LoadSoftSound( const char * FileName)
{
	return LoadSoftSound( FileName);
}
int  __stdcall dx_LoadSoftSoundFromMemImage( const void * FileImage, int  FileImageSize)
{
	return LoadSoftSoundFromMemImage( FileImage, FileImageSize);
}
int  __stdcall dx_MakeSoftSound( int  UseFormat_SoftSoundHandle, int  SampleNum)
{
	return MakeSoftSound( UseFormat_SoftSoundHandle, SampleNum);
}
int  __stdcall dx_MakeSoftSound2Ch16Bit44KHz( int  SampleNum)
{
	return MakeSoftSound2Ch16Bit44KHz( SampleNum);
}
int  __stdcall dx_MakeSoftSound2Ch16Bit22KHz( int  SampleNum)
{
	return MakeSoftSound2Ch16Bit22KHz( SampleNum);
}
int  __stdcall dx_MakeSoftSound2Ch8Bit44KHz( int  SampleNum)
{
	return MakeSoftSound2Ch8Bit44KHz( SampleNum);
}
int  __stdcall dx_MakeSoftSound2Ch8Bit22KHz( int  SampleNum)
{
	return MakeSoftSound2Ch8Bit22KHz( SampleNum);
}
int  __stdcall dx_MakeSoftSound1Ch16Bit44KHz( int  SampleNum)
{
	return MakeSoftSound1Ch16Bit44KHz( SampleNum);
}
int  __stdcall dx_MakeSoftSound1Ch16Bit22KHz( int  SampleNum)
{
	return MakeSoftSound1Ch16Bit22KHz( SampleNum);
}
int  __stdcall dx_MakeSoftSound1Ch8Bit44KHz( int  SampleNum)
{
	return MakeSoftSound1Ch8Bit44KHz( SampleNum);
}
int  __stdcall dx_MakeSoftSound1Ch8Bit22KHz( int  SampleNum)
{
	return MakeSoftSound1Ch8Bit22KHz( SampleNum);
}
int  __stdcall dx_MakeSoftSoundCustom( int  ChannelNum, int  BitsPerSample, int  SamplesPerSec, int  SampleNum, int  IsFloatType)
{
	return MakeSoftSoundCustom( ChannelNum, BitsPerSample, SamplesPerSec, SampleNum, IsFloatType);
}
int  __stdcall dx_DeleteSoftSound( int  SoftSoundHandle)
{
	return DeleteSoftSound( SoftSoundHandle);
}
int  __stdcall dx_SaveSoftSound( int  SoftSoundHandle, const char * FileName)
{
	return SaveSoftSound( SoftSoundHandle, FileName);
}
int  __stdcall dx_GetSoftSoundSampleNum( int  SoftSoundHandle)
{
	return GetSoftSoundSampleNum( SoftSoundHandle);
}
int  __stdcall dx_GetSoftSoundFormat( int  SoftSoundHandle, int *  Channels, int *  BitsPerSample, int *  SamplesPerSec, int *  IsFloatType)
{
	return GetSoftSoundFormat( SoftSoundHandle, Channels, BitsPerSample, SamplesPerSec, IsFloatType);
}
int  __stdcall dx_ReadSoftSoundData( int  SoftSoundHandle, int  SamplePosition, int *  Channel1, int *  Channel2)
{
	return ReadSoftSoundData( SoftSoundHandle, SamplePosition, Channel1, Channel2);
}
int  __stdcall dx_ReadSoftSoundDataF( int  SoftSoundHandle, int  SamplePosition, float *  Channel1, float *  Channel2)
{
	return ReadSoftSoundDataF( SoftSoundHandle, SamplePosition, Channel1, Channel2);
}
int  __stdcall dx_WriteSoftSoundData( int  SoftSoundHandle, int  SamplePosition, int  Channel1, int  Channel2)
{
	return WriteSoftSoundData( SoftSoundHandle, SamplePosition, Channel1, Channel2);
}
int  __stdcall dx_WriteSoftSoundDataF( int  SoftSoundHandle, int  SamplePosition, float  Channel1, float  Channel2)
{
	return WriteSoftSoundDataF( SoftSoundHandle, SamplePosition, Channel1, Channel2);
}
int  __stdcall dx_WriteTimeStretchSoftSoundData( int  SrcSoftSoundHandle, int  DestSoftSoundHandle)
{
	return WriteTimeStretchSoftSoundData( SrcSoftSoundHandle, DestSoftSoundHandle);
}
int  __stdcall dx_WritePitchShiftSoftSoundData( int  SrcSoftSoundHandle, int  DestSoftSoundHandle)
{
	return WritePitchShiftSoftSoundData( SrcSoftSoundHandle, DestSoftSoundHandle);
}
void *  __stdcall dx_GetSoftSoundDataImage( int  SoftSoundHandle)
{
	return GetSoftSoundDataImage( SoftSoundHandle);
}
int  __stdcall dx_GetFFTVibrationSoftSound( int  SoftSoundHandle, int  Channel, int  SamplePosition, int  SampleNum, float *  Buffer, int  BufferLength)
{
	return GetFFTVibrationSoftSound( SoftSoundHandle, Channel, SamplePosition, SampleNum, Buffer, BufferLength);
}
int  __stdcall dx_InitSoftSoundPlayer( void)
{
	return InitSoftSoundPlayer( );
}
int  __stdcall dx_MakeSoftSoundPlayer( int  UseFormat_SoftSoundHandle)
{
	return MakeSoftSoundPlayer( UseFormat_SoftSoundHandle);
}
int  __stdcall dx_MakeSoftSoundPlayer2Ch16Bit44KHz( void)
{
	return MakeSoftSoundPlayer2Ch16Bit44KHz( );
}
int  __stdcall dx_MakeSoftSoundPlayer2Ch16Bit22KHz( void)
{
	return MakeSoftSoundPlayer2Ch16Bit22KHz( );
}
int  __stdcall dx_MakeSoftSoundPlayer2Ch8Bit44KHz( void)
{
	return MakeSoftSoundPlayer2Ch8Bit44KHz( );
}
int  __stdcall dx_MakeSoftSoundPlayer2Ch8Bit22KHz( void)
{
	return MakeSoftSoundPlayer2Ch8Bit22KHz( );
}
int  __stdcall dx_MakeSoftSoundPlayer1Ch16Bit44KHz( void)
{
	return MakeSoftSoundPlayer1Ch16Bit44KHz( );
}
int  __stdcall dx_MakeSoftSoundPlayer1Ch16Bit22KHz( void)
{
	return MakeSoftSoundPlayer1Ch16Bit22KHz( );
}
int  __stdcall dx_MakeSoftSoundPlayer1Ch8Bit44KHz( void)
{
	return MakeSoftSoundPlayer1Ch8Bit44KHz( );
}
int  __stdcall dx_MakeSoftSoundPlayer1Ch8Bit22KHz( void)
{
	return MakeSoftSoundPlayer1Ch8Bit22KHz( );
}
int  __stdcall dx_MakeSoftSoundPlayerCustom( int  ChannelNum, int  BitsPerSample, int  SamplesPerSec)
{
	return MakeSoftSoundPlayerCustom( ChannelNum, BitsPerSample, SamplesPerSec);
}
int  __stdcall dx_DeleteSoftSoundPlayer( int  SSoundPlayerHandle)
{
	return DeleteSoftSoundPlayer( SSoundPlayerHandle);
}
int  __stdcall dx_AddDataSoftSoundPlayer( int  SSoundPlayerHandle, int  SoftSoundHandle, int  AddSamplePosition, int  AddSampleNum)
{
	return AddDataSoftSoundPlayer( SSoundPlayerHandle, SoftSoundHandle, AddSamplePosition, AddSampleNum);
}
int  __stdcall dx_AddDirectDataSoftSoundPlayer( int  SSoundPlayerHandle, const void * SoundData, int  AddSampleNum)
{
	return AddDirectDataSoftSoundPlayer( SSoundPlayerHandle, SoundData, AddSampleNum);
}
int  __stdcall dx_AddOneDataSoftSoundPlayer( int  SSoundPlayerHandle, int  Channel1, int  Channel2)
{
	return AddOneDataSoftSoundPlayer( SSoundPlayerHandle, Channel1, Channel2);
}
int  __stdcall dx_GetSoftSoundPlayerFormat( int  SSoundPlayerHandle, int *  Channels, int *  BitsPerSample, int *  SamplesPerSec)
{
	return GetSoftSoundPlayerFormat( SSoundPlayerHandle, Channels, BitsPerSample, SamplesPerSec);
}
int  __stdcall dx_StartSoftSoundPlayer( int  SSoundPlayerHandle)
{
	return StartSoftSoundPlayer( SSoundPlayerHandle);
}
int  __stdcall dx_CheckStartSoftSoundPlayer( int  SSoundPlayerHandle)
{
	return CheckStartSoftSoundPlayer( SSoundPlayerHandle);
}
int  __stdcall dx_StopSoftSoundPlayer( int  SSoundPlayerHandle)
{
	return StopSoftSoundPlayer( SSoundPlayerHandle);
}
int  __stdcall dx_ResetSoftSoundPlayer( int  SSoundPlayerHandle)
{
	return ResetSoftSoundPlayer( SSoundPlayerHandle);
}
int  __stdcall dx_GetStockDataLengthSoftSoundPlayer( int  SSoundPlayerHandle)
{
	return GetStockDataLengthSoftSoundPlayer( SSoundPlayerHandle);
}
int  __stdcall dx_CheckSoftSoundPlayerNoneData( int  SSoundPlayerHandle)
{
	return CheckSoftSoundPlayerNoneData( SSoundPlayerHandle);
}
int  __stdcall dx_DeleteMusicMem( int  MusicHandle)
{
	return DeleteMusicMem( MusicHandle);
}
int  __stdcall dx_LoadMusicMem( const char * FileName)
{
	return LoadMusicMem( FileName);
}
int  __stdcall dx_LoadMusicMemByMemImage( const void * FileImage, int  FileImageSize)
{
	return LoadMusicMemByMemImage( FileImage, FileImageSize);
}
int  __stdcall dx_PlayMusicMem( int  MusicHandle, int  PlayType)
{
	return PlayMusicMem( MusicHandle, PlayType);
}
int  __stdcall dx_StopMusicMem( int  MusicHandle)
{
	return StopMusicMem( MusicHandle);
}
int  __stdcall dx_CheckMusicMem( int  MusicHandle)
{
	return CheckMusicMem( MusicHandle);
}
int  __stdcall dx_SetVolumeMusicMem( int  Volume, int  MusicHandle)
{
	return SetVolumeMusicMem( Volume, MusicHandle);
}
int  __stdcall dx_GetMusicMemPosition( int  MusicHandle)
{
	return GetMusicMemPosition( MusicHandle);
}
int  __stdcall dx_InitMusicMem( void)
{
	return InitMusicMem( );
}
int  __stdcall dx_ProcessMusicMem( void)
{
	return ProcessMusicMem( );
}
int  __stdcall dx_PlayMusic( const char * FileName, int  PlayType)
{
	return PlayMusic( FileName, PlayType);
}
int  __stdcall dx_PlayMusicByMemImage( const void * FileImage, int  FileImageSize, int  PlayType)
{
	return PlayMusicByMemImage( FileImage, FileImageSize, PlayType);
}
int  __stdcall dx_PlayMusicByResource( const char * ResourceName, const char * ResourceType, int  PlayType)
{
	return PlayMusicByResource( ResourceName, ResourceType, PlayType);
}
int  __stdcall dx_SetVolumeMusic( int  Volume)
{
	return SetVolumeMusic( Volume);
}
int  __stdcall dx_StopMusic( void)
{
	return StopMusic( );
}
int  __stdcall dx_CheckMusic( void)
{
	return CheckMusic( );
}
int  __stdcall dx_GetMusicPosition( void)
{
	return GetMusicPosition( );
}
int  __stdcall dx_SelectMidiMode( int  Mode)
{
	return SelectMidiMode( Mode);
}
int  __stdcall dx_SetUseDXArchiveFlag( int  Flag)
{
	return SetUseDXArchiveFlag( Flag);
}
int  __stdcall dx_SetDXArchivePriority( int  Priority)
{
	return SetDXArchivePriority( Priority);
}
int  __stdcall dx_SetDXArchiveExtension( const char * Extension)
{
	return SetDXArchiveExtension( Extension);
}
int  __stdcall dx_SetDXArchiveKeyString( const char * KeyString)
{
	return SetDXArchiveKeyString( KeyString);
}
int  __stdcall dx_DXArchivePreLoad( const char * FilePath, int  ASync)
{
	return DXArchivePreLoad( FilePath, ASync);
}
int  __stdcall dx_DXArchiveCheckIdle( const char * FilePath)
{
	return DXArchiveCheckIdle( FilePath);
}
int  __stdcall dx_DXArchiveRelease( const char * FilePath)
{
	return DXArchiveRelease( FilePath);
}
int  __stdcall dx_DXArchiveCheckFile( const char * FilePath, const char * TargetFilePath)
{
	return DXArchiveCheckFile( FilePath, TargetFilePath);
}
int  __stdcall dx_DXArchiveSetMemImage( void *  ArchiveImage, int  ArchiveImageSize, const char * EmulateFilePath, int  ArchiveImageCopyFlag, int  ArchiveImageReadOnly)
{
	return DXArchiveSetMemImage( ArchiveImage, ArchiveImageSize, EmulateFilePath, ArchiveImageCopyFlag, ArchiveImageReadOnly);
}
int  __stdcall dx_DXArchiveReleaseMemImage( void *  ArchiveImage)
{
	return DXArchiveReleaseMemImage( ArchiveImage);
}
int  __stdcall dx_MV1LoadModel( const char * FileName)
{
	return MV1LoadModel( FileName);
}
int __stdcall dx_MV1LoadModelFromMem( const void * FileImage , int FileSize , int ( *FileReadFunc )( const TCHAR * FilePath , void * * FileImageAddr , int * FileSize , void * FileReadFuncData ) , int ( *FileReleaseFunc )( void * MemoryAddr , void * FileReadFuncData ) , void * FileReadFuncData ) 
{
	return MV1LoadModelFromMem( FileImage , FileSize , FileReadFunc , FileReleaseFunc , FileReadFuncData  ) ;
}
int  __stdcall dx_MV1DuplicateModel( int  SrcMHandle)
{
	return MV1DuplicateModel( SrcMHandle);
}
int  __stdcall dx_MV1CreateCloneModel( int  SrcMHandle)
{
	return MV1CreateCloneModel( SrcMHandle);
}
int  __stdcall dx_MV1DeleteModel( int  MHandle)
{
	return MV1DeleteModel( MHandle);
}
int  __stdcall dx_MV1InitModel( void)
{
	return MV1InitModel( );
}
int  __stdcall dx_MV1SetLoadModelReMakeNormal( int  Flag)
{
	return MV1SetLoadModelReMakeNormal( Flag);
}
int  __stdcall dx_MV1SetLoadModelReMakeNormalSmoothingAngle( float  SmoothingAngle)
{
	return MV1SetLoadModelReMakeNormalSmoothingAngle( SmoothingAngle);
}
int  __stdcall dx_MV1SetLoadModelIgnoreScaling( int  Flag)
{
	return MV1SetLoadModelIgnoreScaling( Flag);
}
int  __stdcall dx_MV1SetLoadModelPositionOptimize( int  Flag)
{
	return MV1SetLoadModelPositionOptimize( Flag);
}
int  __stdcall dx_MV1SetLoadModelNotEqNormalSide_AddZeroAreaPolygon( int  Flag)
{
	return MV1SetLoadModelNotEqNormalSide_AddZeroAreaPolygon( Flag);
}
int  __stdcall dx_MV1SetLoadModelUsePhysicsMode( int  PhysicsMode)
{
	return MV1SetLoadModelUsePhysicsMode( PhysicsMode);
}
int  __stdcall dx_MV1SetLoadModelPhysicsWorldGravity( float  Gravity)
{
	return MV1SetLoadModelPhysicsWorldGravity( Gravity);
}
int  __stdcall dx_MV1SetLoadCalcPhysicsWorldGravity( int  GravityNo, VECTOR  Gravity)
{
	return MV1SetLoadCalcPhysicsWorldGravity( GravityNo, Gravity);
}
int  __stdcall dx_MV1SetLoadModelPhysicsCalcPrecision( int  Precision)
{
	return MV1SetLoadModelPhysicsCalcPrecision( Precision);
}
int  __stdcall dx_MV1SetLoadModelAnimFilePath( const char * FileName)
{
	return MV1SetLoadModelAnimFilePath( FileName);
}
int  __stdcall dx_MV1SetLoadModelUsePackDraw( int  Flag)
{
	return MV1SetLoadModelUsePackDraw( Flag);
}
int  __stdcall dx_MV1SetLoadModelTriangleListUseMaxBoneNum( int  UseMaxBoneNum)
{
	return MV1SetLoadModelTriangleListUseMaxBoneNum( UseMaxBoneNum);
}
int  __stdcall dx_MV1SaveModelToMV1File( int  MHandle, const char * FileName, int  SaveType, int  AnimMHandle, int  AnimNameCheck, int  Normal8BitFlag, int  Position16BitFlag, int  Weight8BitFlag, int  Anim16BitFlag)
{
	return MV1SaveModelToMV1File( MHandle, FileName, SaveType, AnimMHandle, AnimNameCheck, Normal8BitFlag, Position16BitFlag, Weight8BitFlag, Anim16BitFlag);
}
int  __stdcall dx_MV1SaveModelToXFile( int  MHandle, const char * FileName, int  SaveType, int  AnimMHandle, int  AnimNameCheck)
{
	return MV1SaveModelToXFile( MHandle, FileName, SaveType, AnimMHandle, AnimNameCheck);
}
int  __stdcall dx_MV1DrawModel( int  MHandle)
{
	return MV1DrawModel( MHandle);
}
int  __stdcall dx_MV1DrawFrame( int  MHandle, int  FrameIndex)
{
	return MV1DrawFrame( MHandle, FrameIndex);
}
int  __stdcall dx_MV1DrawMesh( int  MHandle, int  MeshIndex)
{
	return MV1DrawMesh( MHandle, MeshIndex);
}
int  __stdcall dx_MV1DrawTriangleList( int  MHandle, int  TriangleListIndex)
{
	return MV1DrawTriangleList( MHandle, TriangleListIndex);
}
int  __stdcall dx_MV1DrawModelDebug( int  MHandle, unsigned int  Color, int  IsNormalLine, float  NormalLineLength, int  IsPolyLine, int  IsCollisionBox)
{
	return MV1DrawModelDebug( MHandle, Color, IsNormalLine, NormalLineLength, IsPolyLine, IsCollisionBox);
}
int  __stdcall dx_MV1SetUseOrigShader( int  UseFlag)
{
	return MV1SetUseOrigShader( UseFlag);
}
int  __stdcall dx_MV1SetSemiTransDrawMode( int  DrawMode)
{
	return MV1SetSemiTransDrawMode( DrawMode);
}
MATRIX  __stdcall dx_MV1GetLocalWorldMatrix( int  MHandle)
{
	return MV1GetLocalWorldMatrix( MHandle);
}
MATRIX_D  __stdcall dx_MV1GetLocalWorldMatrixD( int  MHandle)
{
	return MV1GetLocalWorldMatrixD( MHandle);
}
int  __stdcall dx_MV1SetPosition( int  MHandle, VECTOR  Position)
{
	return MV1SetPosition( MHandle, Position);
}
int  __stdcall dx_MV1SetPositionD( int  MHandle, VECTOR_D  Position)
{
	return MV1SetPositionD( MHandle, Position);
}
VECTOR  __stdcall dx_MV1GetPosition( int  MHandle)
{
	return MV1GetPosition( MHandle);
}
VECTOR_D  __stdcall dx_MV1GetPositionD( int  MHandle)
{
	return MV1GetPositionD( MHandle);
}
int  __stdcall dx_MV1SetScale( int  MHandle, VECTOR  Scale)
{
	return MV1SetScale( MHandle, Scale);
}
VECTOR  __stdcall dx_MV1GetScale( int  MHandle)
{
	return MV1GetScale( MHandle);
}
int  __stdcall dx_MV1SetRotationXYZ( int  MHandle, VECTOR  Rotate)
{
	return MV1SetRotationXYZ( MHandle, Rotate);
}
VECTOR  __stdcall dx_MV1GetRotationXYZ( int  MHandle)
{
	return MV1GetRotationXYZ( MHandle);
}
int  __stdcall dx_MV1SetRotationZYAxis( int  MHandle, VECTOR  ZAxisDirection, VECTOR  YAxisDirection, float  ZAxisTwistRotate)
{
	return MV1SetRotationZYAxis( MHandle, ZAxisDirection, YAxisDirection, ZAxisTwistRotate);
}
int  __stdcall dx_MV1SetRotationMatrix( int  MHandle, MATRIX  Matrix)
{
	return MV1SetRotationMatrix( MHandle, Matrix);
}
MATRIX  __stdcall dx_MV1GetRotationMatrix( int  MHandle)
{
	return MV1GetRotationMatrix( MHandle);
}
int  __stdcall dx_MV1SetMatrix( int  MHandle, MATRIX  Matrix)
{
	return MV1SetMatrix( MHandle, Matrix);
}
int  __stdcall dx_MV1SetMatrixD( int  MHandle, MATRIX_D  Matrix)
{
	return MV1SetMatrixD( MHandle, Matrix);
}
MATRIX  __stdcall dx_MV1GetMatrix( int  MHandle)
{
	return MV1GetMatrix( MHandle);
}
MATRIX_D  __stdcall dx_MV1GetMatrixD( int  MHandle)
{
	return MV1GetMatrixD( MHandle);
}
int  __stdcall dx_MV1SetVisible( int  MHandle, int  VisibleFlag)
{
	return MV1SetVisible( MHandle, VisibleFlag);
}
int  __stdcall dx_MV1GetVisible( int  MHandle)
{
	return MV1GetVisible( MHandle);
}
int  __stdcall dx_MV1SetMeshCategoryVisible( int  MHandle, int  MeshCategory, int  VisibleFlag)
{
	return MV1SetMeshCategoryVisible( MHandle, MeshCategory, VisibleFlag);
}
int  __stdcall dx_MV1GetMeshCategoryVisible( int  MHandle, int  MeshCategory)
{
	return MV1GetMeshCategoryVisible( MHandle, MeshCategory);
}
int  __stdcall dx_MV1SetDifColorScale( int  MHandle, COLOR_F  Scale)
{
	return MV1SetDifColorScale( MHandle, Scale);
}
COLOR_F  __stdcall dx_MV1GetDifColorScale( int  MHandle)
{
	return MV1GetDifColorScale( MHandle);
}
int  __stdcall dx_MV1SetSpcColorScale( int  MHandle, COLOR_F  Scale)
{
	return MV1SetSpcColorScale( MHandle, Scale);
}
COLOR_F  __stdcall dx_MV1GetSpcColorScale( int  MHandle)
{
	return MV1GetSpcColorScale( MHandle);
}
int  __stdcall dx_MV1SetEmiColorScale( int  MHandle, COLOR_F  Scale)
{
	return MV1SetEmiColorScale( MHandle, Scale);
}
COLOR_F  __stdcall dx_MV1GetEmiColorScale( int  MHandle)
{
	return MV1GetEmiColorScale( MHandle);
}
int  __stdcall dx_MV1SetAmbColorScale( int  MHandle, COLOR_F  Scale)
{
	return MV1SetAmbColorScale( MHandle, Scale);
}
COLOR_F  __stdcall dx_MV1GetAmbColorScale( int  MHandle)
{
	return MV1GetAmbColorScale( MHandle);
}
int  __stdcall dx_MV1GetSemiTransState( int  MHandle)
{
	return MV1GetSemiTransState( MHandle);
}
int  __stdcall dx_MV1SetOpacityRate( int  MHandle, float  Rate)
{
	return MV1SetOpacityRate( MHandle, Rate);
}
float  __stdcall dx_MV1GetOpacityRate( int  MHandle)
{
	return MV1GetOpacityRate( MHandle);
}
int  __stdcall dx_MV1SetUseDrawMulAlphaColor( int  MHandle, int  Flag)
{
	return MV1SetUseDrawMulAlphaColor( MHandle, Flag);
}
int  __stdcall dx_MV1GetUseDrawMulAlphaColor( int  MHandle)
{
	return MV1GetUseDrawMulAlphaColor( MHandle);
}
int  __stdcall dx_MV1SetUseZBuffer( int  MHandle, int  Flag)
{
	return MV1SetUseZBuffer( MHandle, Flag);
}
int  __stdcall dx_MV1SetWriteZBuffer( int  MHandle, int  Flag)
{
	return MV1SetWriteZBuffer( MHandle, Flag);
}
int  __stdcall dx_MV1SetZBufferCmpType( int  MHandle, int  CmpType)
{
	return MV1SetZBufferCmpType( MHandle, CmpType);
}
int  __stdcall dx_MV1SetZBias( int  MHandle, int  Bias)
{
	return MV1SetZBias( MHandle, Bias);
}
int  __stdcall dx_MV1SetUseVertDifColor( int  MHandle, int  UseFlag)
{
	return MV1SetUseVertDifColor( MHandle, UseFlag);
}
int  __stdcall dx_MV1SetUseVertSpcColor( int  MHandle, int  UseFlag)
{
	return MV1SetUseVertSpcColor( MHandle, UseFlag);
}
int  __stdcall dx_MV1SetSampleFilterMode( int  MHandle, int  FilterMode)
{
	return MV1SetSampleFilterMode( MHandle, FilterMode);
}
int  __stdcall dx_MV1SetMaxAnisotropy( int  MHandle, int  MaxAnisotropy)
{
	return MV1SetMaxAnisotropy( MHandle, MaxAnisotropy);
}
int  __stdcall dx_MV1SetWireFrameDrawFlag( int  MHandle, int  Flag)
{
	return MV1SetWireFrameDrawFlag( MHandle, Flag);
}
int  __stdcall dx_MV1RefreshVertColorFromMaterial( int  MHandle)
{
	return MV1RefreshVertColorFromMaterial( MHandle);
}
int  __stdcall dx_MV1SetPhysicsWorldGravity( int  MHandle, VECTOR  Gravity)
{
	return MV1SetPhysicsWorldGravity( MHandle, Gravity);
}
int  __stdcall dx_MV1PhysicsCalculation( int  MHandle, float  MillisecondTime)
{
	return MV1PhysicsCalculation( MHandle, MillisecondTime);
}
int  __stdcall dx_MV1PhysicsResetState( int  MHandle)
{
	return MV1PhysicsResetState( MHandle);
}
int  __stdcall dx_MV1SetUseShapeFlag( int  MHandle, int  UseFlag)
{
	return MV1SetUseShapeFlag( MHandle, UseFlag);
}
int  __stdcall dx_MV1GetMaterialNumberOrderFlag( int  MHandle)
{
	return MV1GetMaterialNumberOrderFlag( MHandle);
}
int  __stdcall dx_MV1AttachAnim( int  MHandle, int  AnimIndex, int  AnimSrcMHandle, int  NameCheck)
{
	return MV1AttachAnim( MHandle, AnimIndex, AnimSrcMHandle, NameCheck);
}
int  __stdcall dx_MV1DetachAnim( int  MHandle, int  AttachIndex)
{
	return MV1DetachAnim( MHandle, AttachIndex);
}
int  __stdcall dx_MV1SetAttachAnimTime( int  MHandle, int  AttachIndex, float  Time)
{
	return MV1SetAttachAnimTime( MHandle, AttachIndex, Time);
}
float  __stdcall dx_MV1GetAttachAnimTime( int  MHandle, int  AttachIndex)
{
	return MV1GetAttachAnimTime( MHandle, AttachIndex);
}
float  __stdcall dx_MV1GetAttachAnimTotalTime( int  MHandle, int  AttachIndex)
{
	return MV1GetAttachAnimTotalTime( MHandle, AttachIndex);
}
int  __stdcall dx_MV1SetAttachAnimBlendRate( int  MHandle, int  AttachIndex, float  Rate)
{
	return MV1SetAttachAnimBlendRate( MHandle, AttachIndex, Rate);
}
float  __stdcall dx_MV1GetAttachAnimBlendRate( int  MHandle, int  AttachIndex)
{
	return MV1GetAttachAnimBlendRate( MHandle, AttachIndex);
}
int  __stdcall dx_MV1SetAttachAnimBlendRateToFrame( int  MHandle, int  AttachIndex, int  FrameIndex, float  Rate, int  SetChild)
{
	return MV1SetAttachAnimBlendRateToFrame( MHandle, AttachIndex, FrameIndex, Rate, SetChild);
}
float  __stdcall dx_MV1GetAttachAnimBlendRateToFrame( int  MHandle, int  AttachIndex, int  FrameIndex)
{
	return MV1GetAttachAnimBlendRateToFrame( MHandle, AttachIndex, FrameIndex);
}
int  __stdcall dx_MV1GetAttachAnim( int  MHandle, int  AttachIndex)
{
	return MV1GetAttachAnim( MHandle, AttachIndex);
}
int  __stdcall dx_MV1SetAttachAnimUseShapeFlag( int  MHandle, int  AttachIndex, int  UseFlag)
{
	return MV1SetAttachAnimUseShapeFlag( MHandle, AttachIndex, UseFlag);
}
int  __stdcall dx_MV1GetAttachAnimUseShapeFlag( int  MHandle, int  AttachIndex)
{
	return MV1GetAttachAnimUseShapeFlag( MHandle, AttachIndex);
}
VECTOR  __stdcall dx_MV1GetAttachAnimFrameLocalPosition( int  MHandle, int  AttachIndex, int  FrameIndex)
{
	return MV1GetAttachAnimFrameLocalPosition( MHandle, AttachIndex, FrameIndex);
}
MATRIX  __stdcall dx_MV1GetAttachAnimFrameLocalMatrix( int  MHandle, int  AttachIndex, int  FrameIndex)
{
	return MV1GetAttachAnimFrameLocalMatrix( MHandle, AttachIndex, FrameIndex);
}
int  __stdcall dx_MV1GetAnimNum( int  MHandle)
{
	return MV1GetAnimNum( MHandle);
}
const TCHAR * __stdcall dx_MV1GetAnimName( int MHandle , int AnimIndex ) 
{
	return MV1GetAnimName( MHandle , AnimIndex  ) ;
}
int  __stdcall dx_MV1SetAnimName( int  MHandle, int  AnimIndex, const char * AnimName)
{
	return MV1SetAnimName( MHandle, AnimIndex, AnimName);
}
int  __stdcall dx_MV1GetAnimIndex( int  MHandle, const char * AnimName)
{
	return MV1GetAnimIndex( MHandle, AnimName);
}
float  __stdcall dx_MV1GetAnimTotalTime( int  MHandle, int  AnimIndex)
{
	return MV1GetAnimTotalTime( MHandle, AnimIndex);
}
int  __stdcall dx_MV1GetAnimTargetFrameNum( int  MHandle, int  AnimIndex)
{
	return MV1GetAnimTargetFrameNum( MHandle, AnimIndex);
}
const TCHAR * __stdcall dx_MV1GetAnimTargetFrameName( int MHandle , int AnimIndex , int AnimFrameIndex ) 
{
	return MV1GetAnimTargetFrameName( MHandle , AnimIndex , AnimFrameIndex  ) ;
}
int  __stdcall dx_MV1GetAnimTargetFrame( int  MHandle, int  AnimIndex, int  AnimFrameIndex)
{
	return MV1GetAnimTargetFrame( MHandle, AnimIndex, AnimFrameIndex);
}
int  __stdcall dx_MV1GetAnimTargetFrameKeySetNum( int  MHandle, int  AnimIndex, int  AnimFrameIndex)
{
	return MV1GetAnimTargetFrameKeySetNum( MHandle, AnimIndex, AnimFrameIndex);
}
int  __stdcall dx_MV1GetAnimTargetFrameKeySet( int  MHandle, int  AnimIndex, int  AnimFrameIndex, int  Index)
{
	return MV1GetAnimTargetFrameKeySet( MHandle, AnimIndex, AnimFrameIndex, Index);
}
int  __stdcall dx_MV1GetAnimKeySetNum( int  MHandle)
{
	return MV1GetAnimKeySetNum( MHandle);
}
int  __stdcall dx_MV1GetAnimKeySetType( int  MHandle, int  AnimKeySetIndex)
{
	return MV1GetAnimKeySetType( MHandle, AnimKeySetIndex);
}
int  __stdcall dx_MV1GetAnimKeySetDataType( int  MHandle, int  AnimKeySetIndex)
{
	return MV1GetAnimKeySetDataType( MHandle, AnimKeySetIndex);
}
int  __stdcall dx_MV1GetAnimKeySetTimeType( int  MHandle, int  AnimKeySetIndex)
{
	return MV1GetAnimKeySetTimeType( MHandle, AnimKeySetIndex);
}
int  __stdcall dx_MV1GetAnimKeySetDataNum( int  MHandle, int  AnimKeySetIndex)
{
	return MV1GetAnimKeySetDataNum( MHandle, AnimKeySetIndex);
}
float  __stdcall dx_MV1GetAnimKeyDataTime( int  MHandle, int  AnimKeySetIndex, int  Index)
{
	return MV1GetAnimKeyDataTime( MHandle, AnimKeySetIndex, Index);
}
int  __stdcall dx_MV1GetAnimKeyDataIndexFromTime( int  MHandle, int  AnimKeySetIndex, float  Time)
{
	return MV1GetAnimKeyDataIndexFromTime( MHandle, AnimKeySetIndex, Time);
}
FLOAT4  __stdcall dx_MV1GetAnimKeyDataToQuaternion( int  MHandle, int  AnimKeySetIndex, int  Index)
{
	return MV1GetAnimKeyDataToQuaternion( MHandle, AnimKeySetIndex, Index);
}
FLOAT4  __stdcall dx_MV1GetAnimKeyDataToQuaternionFromTime( int  MHandle, int  AnimKeySetIndex, float  Time)
{
	return MV1GetAnimKeyDataToQuaternionFromTime( MHandle, AnimKeySetIndex, Time);
}
VECTOR  __stdcall dx_MV1GetAnimKeyDataToVector( int  MHandle, int  AnimKeySetIndex, int  Index)
{
	return MV1GetAnimKeyDataToVector( MHandle, AnimKeySetIndex, Index);
}
VECTOR  __stdcall dx_MV1GetAnimKeyDataToVectorFromTime( int  MHandle, int  AnimKeySetIndex, float  Time)
{
	return MV1GetAnimKeyDataToVectorFromTime( MHandle, AnimKeySetIndex, Time);
}
MATRIX  __stdcall dx_MV1GetAnimKeyDataToMatrix( int  MHandle, int  AnimKeySetIndex, int  Index)
{
	return MV1GetAnimKeyDataToMatrix( MHandle, AnimKeySetIndex, Index);
}
MATRIX  __stdcall dx_MV1GetAnimKeyDataToMatrixFromTime( int  MHandle, int  AnimKeySetIndex, float  Time)
{
	return MV1GetAnimKeyDataToMatrixFromTime( MHandle, AnimKeySetIndex, Time);
}
float  __stdcall dx_MV1GetAnimKeyDataToFlat( int  MHandle, int  AnimKeySetIndex, int  Index)
{
	return MV1GetAnimKeyDataToFlat( MHandle, AnimKeySetIndex, Index);
}
float  __stdcall dx_MV1GetAnimKeyDataToFlatFromTime( int  MHandle, int  AnimKeySetIndex, float  Time)
{
	return MV1GetAnimKeyDataToFlatFromTime( MHandle, AnimKeySetIndex, Time);
}
float  __stdcall dx_MV1GetAnimKeyDataToLinear( int  MHandle, int  AnimKeySetIndex, int  Index)
{
	return MV1GetAnimKeyDataToLinear( MHandle, AnimKeySetIndex, Index);
}
float  __stdcall dx_MV1GetAnimKeyDataToLinearFromTime( int  MHandle, int  AnimKeySetIndex, float  Time)
{
	return MV1GetAnimKeyDataToLinearFromTime( MHandle, AnimKeySetIndex, Time);
}
int  __stdcall dx_MV1GetMaterialNum( int  MHandle)
{
	return MV1GetMaterialNum( MHandle);
}
const TCHAR * __stdcall dx_MV1GetMaterialName( int MHandle , int MaterialIndex ) 
{
	return MV1GetMaterialName( MHandle , MaterialIndex  ) ;
}
int  __stdcall dx_MV1SetMaterialTypeAll( int  MHandle, int  Type)
{
	return MV1SetMaterialTypeAll( MHandle, Type);
}
int  __stdcall dx_MV1SetMaterialType( int  MHandle, int  MaterialIndex, int  Type)
{
	return MV1SetMaterialType( MHandle, MaterialIndex, Type);
}
int  __stdcall dx_MV1GetMaterialType( int  MHandle, int  MaterialIndex)
{
	return MV1GetMaterialType( MHandle, MaterialIndex);
}
int  __stdcall dx_MV1SetMaterialDifColor( int  MHandle, int  MaterialIndex, COLOR_F  Color)
{
	return MV1SetMaterialDifColor( MHandle, MaterialIndex, Color);
}
COLOR_F  __stdcall dx_MV1GetMaterialDifColor( int  MHandle, int  MaterialIndex)
{
	return MV1GetMaterialDifColor( MHandle, MaterialIndex);
}
int  __stdcall dx_MV1SetMaterialSpcColor( int  MHandle, int  MaterialIndex, COLOR_F  Color)
{
	return MV1SetMaterialSpcColor( MHandle, MaterialIndex, Color);
}
COLOR_F  __stdcall dx_MV1GetMaterialSpcColor( int  MHandle, int  MaterialIndex)
{
	return MV1GetMaterialSpcColor( MHandle, MaterialIndex);
}
int  __stdcall dx_MV1SetMaterialEmiColor( int  MHandle, int  MaterialIndex, COLOR_F  Color)
{
	return MV1SetMaterialEmiColor( MHandle, MaterialIndex, Color);
}
COLOR_F  __stdcall dx_MV1GetMaterialEmiColor( int  MHandle, int  MaterialIndex)
{
	return MV1GetMaterialEmiColor( MHandle, MaterialIndex);
}
int  __stdcall dx_MV1SetMaterialAmbColor( int  MHandle, int  MaterialIndex, COLOR_F  Color)
{
	return MV1SetMaterialAmbColor( MHandle, MaterialIndex, Color);
}
COLOR_F  __stdcall dx_MV1GetMaterialAmbColor( int  MHandle, int  MaterialIndex)
{
	return MV1GetMaterialAmbColor( MHandle, MaterialIndex);
}
int  __stdcall dx_MV1SetMaterialSpcPower( int  MHandle, int  MaterialIndex, float  Power)
{
	return MV1SetMaterialSpcPower( MHandle, MaterialIndex, Power);
}
float  __stdcall dx_MV1GetMaterialSpcPower( int  MHandle, int  MaterialIndex)
{
	return MV1GetMaterialSpcPower( MHandle, MaterialIndex);
}
int  __stdcall dx_MV1SetMaterialDifMapTexture( int  MHandle, int  MaterialIndex, int  TexIndex)
{
	return MV1SetMaterialDifMapTexture( MHandle, MaterialIndex, TexIndex);
}
int  __stdcall dx_MV1GetMaterialDifMapTexture( int  MHandle, int  MaterialIndex)
{
	return MV1GetMaterialDifMapTexture( MHandle, MaterialIndex);
}
int  __stdcall dx_MV1SetMaterialSpcMapTexture( int  MHandle, int  MaterialIndex, int  TexIndex)
{
	return MV1SetMaterialSpcMapTexture( MHandle, MaterialIndex, TexIndex);
}
int  __stdcall dx_MV1GetMaterialSpcMapTexture( int  MHandle, int  MaterialIndex)
{
	return MV1GetMaterialSpcMapTexture( MHandle, MaterialIndex);
}
int  __stdcall dx_MV1GetMaterialNormalMapTexture( int  MHandle, int  MaterialIndex)
{
	return MV1GetMaterialNormalMapTexture( MHandle, MaterialIndex);
}
int  __stdcall dx_MV1SetMaterialDifGradTexture( int  MHandle, int  MaterialIndex, int  TexIndex)
{
	return MV1SetMaterialDifGradTexture( MHandle, MaterialIndex, TexIndex);
}
int  __stdcall dx_MV1GetMaterialDifGradTexture( int  MHandle, int  MaterialIndex)
{
	return MV1GetMaterialDifGradTexture( MHandle, MaterialIndex);
}
int  __stdcall dx_MV1SetMaterialSpcGradTexture( int  MHandle, int  MaterialIndex, int  TexIndex)
{
	return MV1SetMaterialSpcGradTexture( MHandle, MaterialIndex, TexIndex);
}
int  __stdcall dx_MV1GetMaterialSpcGradTexture( int  MHandle, int  MaterialIndex)
{
	return MV1GetMaterialSpcGradTexture( MHandle, MaterialIndex);
}
int  __stdcall dx_MV1SetMaterialSphereMapTexture( int  MHandle, int  MaterialIndex, int  TexIndex)
{
	return MV1SetMaterialSphereMapTexture( MHandle, MaterialIndex, TexIndex);
}
int  __stdcall dx_MV1GetMaterialSphereMapTexture( int  MHandle, int  MaterialIndex)
{
	return MV1GetMaterialSphereMapTexture( MHandle, MaterialIndex);
}
int  __stdcall dx_MV1SetMaterialDifGradBlendTypeAll( int  MHandle, int  BlendType)
{
	return MV1SetMaterialDifGradBlendTypeAll( MHandle, BlendType);
}
int  __stdcall dx_MV1SetMaterialDifGradBlendType( int  MHandle, int  MaterialIndex, int  BlendType)
{
	return MV1SetMaterialDifGradBlendType( MHandle, MaterialIndex, BlendType);
}
int  __stdcall dx_MV1GetMaterialDifGradBlendType( int  MHandle, int  MaterialIndex)
{
	return MV1GetMaterialDifGradBlendType( MHandle, MaterialIndex);
}
int  __stdcall dx_MV1SetMaterialSpcGradBlendTypeAll( int  MHandle, int  BlendType)
{
	return MV1SetMaterialSpcGradBlendTypeAll( MHandle, BlendType);
}
int  __stdcall dx_MV1SetMaterialSpcGradBlendType( int  MHandle, int  MaterialIndex, int  BlendType)
{
	return MV1SetMaterialSpcGradBlendType( MHandle, MaterialIndex, BlendType);
}
int  __stdcall dx_MV1GetMaterialSpcGradBlendType( int  MHandle, int  MaterialIndex)
{
	return MV1GetMaterialSpcGradBlendType( MHandle, MaterialIndex);
}
int  __stdcall dx_MV1SetMaterialSphereMapBlendTypeAll( int  MHandle, int  BlendType)
{
	return MV1SetMaterialSphereMapBlendTypeAll( MHandle, BlendType);
}
int  __stdcall dx_MV1SetMaterialSphereMapBlendType( int  MHandle, int  MaterialIndex, int  BlendType)
{
	return MV1SetMaterialSphereMapBlendType( MHandle, MaterialIndex, BlendType);
}
int  __stdcall dx_MV1GetMaterialSphereMapBlendType( int  MHandle, int  MaterialIndex)
{
	return MV1GetMaterialSphereMapBlendType( MHandle, MaterialIndex);
}
int  __stdcall dx_MV1SetMaterialOutLineWidthAll( int  MHandle, float  Width)
{
	return MV1SetMaterialOutLineWidthAll( MHandle, Width);
}
int  __stdcall dx_MV1SetMaterialOutLineWidth( int  MHandle, int  MaterialIndex, float  Width)
{
	return MV1SetMaterialOutLineWidth( MHandle, MaterialIndex, Width);
}
float  __stdcall dx_MV1GetMaterialOutLineWidth( int  MHandle, int  MaterialIndex)
{
	return MV1GetMaterialOutLineWidth( MHandle, MaterialIndex);
}
int  __stdcall dx_MV1SetMaterialOutLineDotWidthAll( int  MHandle, float  Width)
{
	return MV1SetMaterialOutLineDotWidthAll( MHandle, Width);
}
int  __stdcall dx_MV1SetMaterialOutLineDotWidth( int  MHandle, int  MaterialIndex, float  Width)
{
	return MV1SetMaterialOutLineDotWidth( MHandle, MaterialIndex, Width);
}
float  __stdcall dx_MV1GetMaterialOutLineDotWidth( int  MHandle, int  MaterialIndex)
{
	return MV1GetMaterialOutLineDotWidth( MHandle, MaterialIndex);
}
int  __stdcall dx_MV1SetMaterialOutLineColorAll( int  MHandle, COLOR_F  Color)
{
	return MV1SetMaterialOutLineColorAll( MHandle, Color);
}
int  __stdcall dx_MV1SetMaterialOutLineColor( int  MHandle, int  MaterialIndex, COLOR_F  Color)
{
	return MV1SetMaterialOutLineColor( MHandle, MaterialIndex, Color);
}
COLOR_F  __stdcall dx_MV1GetMaterialOutLineColor( int  MHandle, int  MaterialIndex)
{
	return MV1GetMaterialOutLineColor( MHandle, MaterialIndex);
}
int  __stdcall dx_MV1SetMaterialDrawBlendModeAll( int  MHandle, int  BlendMode)
{
	return MV1SetMaterialDrawBlendModeAll( MHandle, BlendMode);
}
int  __stdcall dx_MV1SetMaterialDrawBlendMode( int  MHandle, int  MaterialIndex, int  BlendMode)
{
	return MV1SetMaterialDrawBlendMode( MHandle, MaterialIndex, BlendMode);
}
int  __stdcall dx_MV1GetMaterialDrawBlendMode( int  MHandle, int  MaterialIndex)
{
	return MV1GetMaterialDrawBlendMode( MHandle, MaterialIndex);
}
int  __stdcall dx_MV1SetMaterialDrawBlendParamAll( int  MHandle, int  BlendParam)
{
	return MV1SetMaterialDrawBlendParamAll( MHandle, BlendParam);
}
int  __stdcall dx_MV1SetMaterialDrawBlendParam( int  MHandle, int  MaterialIndex, int  BlendParam)
{
	return MV1SetMaterialDrawBlendParam( MHandle, MaterialIndex, BlendParam);
}
int  __stdcall dx_MV1GetMaterialDrawBlendParam( int  MHandle, int  MaterialIndex)
{
	return MV1GetMaterialDrawBlendParam( MHandle, MaterialIndex);
}
int  __stdcall dx_MV1SetMaterialDrawAlphaTestAll( int  MHandle, int  Enable, int  Mode, int  Param)
{
	return MV1SetMaterialDrawAlphaTestAll( MHandle, Enable, Mode, Param);
}
int  __stdcall dx_MV1SetMaterialDrawAlphaTest( int  MHandle, int  MaterialIndex, int  Enable, int  Mode, int  Param)
{
	return MV1SetMaterialDrawAlphaTest( MHandle, MaterialIndex, Enable, Mode, Param);
}
int  __stdcall dx_MV1GetMaterialDrawAlphaTestEnable( int  MHandle, int  MaterialIndex)
{
	return MV1GetMaterialDrawAlphaTestEnable( MHandle, MaterialIndex);
}
int  __stdcall dx_MV1GetMaterialDrawAlphaTestMode( int  MHandle, int  MaterialIndex)
{
	return MV1GetMaterialDrawAlphaTestMode( MHandle, MaterialIndex);
}
int  __stdcall dx_MV1GetMaterialDrawAlphaTestParam( int  MHandle, int  MaterialIndex)
{
	return MV1GetMaterialDrawAlphaTestParam( MHandle, MaterialIndex);
}
int  __stdcall dx_MV1GetTextureNum( int  MHandle)
{
	return MV1GetTextureNum( MHandle);
}
const TCHAR * __stdcall dx_MV1GetTextureName( int MHandle , int TexIndex ) 
{
	return MV1GetTextureName( MHandle , TexIndex  ) ;
}
int  __stdcall dx_MV1SetTextureColorFilePath( int  MHandle, int  TexIndex, const char * FilePath)
{
	return MV1SetTextureColorFilePath( MHandle, TexIndex, FilePath);
}
const TCHAR * __stdcall dx_MV1GetTextureColorFilePath( int MHandle , int TexIndex ) 
{
	return MV1GetTextureColorFilePath( MHandle , TexIndex  ) ;
}
int  __stdcall dx_MV1SetTextureAlphaFilePath( int  MHandle, int  TexIndex, const char * FilePath)
{
	return MV1SetTextureAlphaFilePath( MHandle, TexIndex, FilePath);
}
const TCHAR * __stdcall dx_MV1GetTextureAlphaFilePath( int MHandle , int TexIndex ) 
{
	return MV1GetTextureAlphaFilePath( MHandle , TexIndex  ) ;
}
int  __stdcall dx_MV1SetTextureGraphHandle( int  MHandle, int  TexIndex, int  GrHandle, int  SemiTransFlag)
{
	return MV1SetTextureGraphHandle( MHandle, TexIndex, GrHandle, SemiTransFlag);
}
int  __stdcall dx_MV1GetTextureGraphHandle( int  MHandle, int  TexIndex)
{
	return MV1GetTextureGraphHandle( MHandle, TexIndex);
}
int  __stdcall dx_MV1SetTextureAddressMode( int  MHandle, int  TexIndex, int  AddrUMode, int  AddrVMode)
{
	return MV1SetTextureAddressMode( MHandle, TexIndex, AddrUMode, AddrVMode);
}
int  __stdcall dx_MV1GetTextureAddressModeU( int  MHandle, int  TexIndex)
{
	return MV1GetTextureAddressModeU( MHandle, TexIndex);
}
int  __stdcall dx_MV1GetTextureAddressModeV( int  MHandle, int  TexIndex)
{
	return MV1GetTextureAddressModeV( MHandle, TexIndex);
}
int  __stdcall dx_MV1GetTextureWidth( int  MHandle, int  TexIndex)
{
	return MV1GetTextureWidth( MHandle, TexIndex);
}
int  __stdcall dx_MV1GetTextureHeight( int  MHandle, int  TexIndex)
{
	return MV1GetTextureHeight( MHandle, TexIndex);
}
int  __stdcall dx_MV1GetTextureSemiTransState( int  MHandle, int  TexIndex)
{
	return MV1GetTextureSemiTransState( MHandle, TexIndex);
}
int  __stdcall dx_MV1SetTextureBumpImageFlag( int  MHandle, int  TexIndex, int  Flag)
{
	return MV1SetTextureBumpImageFlag( MHandle, TexIndex, Flag);
}
int  __stdcall dx_MV1GetTextureBumpImageFlag( int  MHandle, int  TexIndex)
{
	return MV1GetTextureBumpImageFlag( MHandle, TexIndex);
}
int  __stdcall dx_MV1SetTextureBumpImageNextPixelLength( int  MHandle, int  TexIndex, float  Length)
{
	return MV1SetTextureBumpImageNextPixelLength( MHandle, TexIndex, Length);
}
float  __stdcall dx_MV1GetTextureBumpImageNextPixelLength( int  MHandle, int  TexIndex)
{
	return MV1GetTextureBumpImageNextPixelLength( MHandle, TexIndex);
}
int  __stdcall dx_MV1SetTextureSampleFilterMode( int  MHandle, int  TexIndex, int  FilterMode)
{
	return MV1SetTextureSampleFilterMode( MHandle, TexIndex, FilterMode);
}
int  __stdcall dx_MV1GetTextureSampleFilterMode( int  MHandle, int  TexIndex)
{
	return MV1GetTextureSampleFilterMode( MHandle, TexIndex);
}
int  __stdcall dx_MV1LoadTexture( const char * FilePath)
{
	return MV1LoadTexture( FilePath);
}
int  __stdcall dx_MV1GetFrameNum( int  MHandle)
{
	return MV1GetFrameNum( MHandle);
}
int  __stdcall dx_MV1SearchFrame( int  MHandle, const char * FrameName)
{
	return MV1SearchFrame( MHandle, FrameName);
}
int  __stdcall dx_MV1SearchFrameChild( int  MHandle, int  FrameIndex, const char * ChildName)
{
	return MV1SearchFrameChild( MHandle, FrameIndex, ChildName);
}
const TCHAR * __stdcall dx_MV1GetFrameName( int MHandle , int FrameIndex ) 
{
	return MV1GetFrameName( MHandle , FrameIndex  ) ;
}
int  __stdcall dx_MV1GetFrameName2( int  MHandle, int  FrameIndex, TCHAR *  StrBuffer)
{
	return MV1GetFrameName2( MHandle, FrameIndex, StrBuffer);
}
int  __stdcall dx_MV1GetFrameParent( int  MHandle, int  FrameIndex)
{
	return MV1GetFrameParent( MHandle, FrameIndex);
}
int  __stdcall dx_MV1GetFrameChildNum( int  MHandle, int  FrameIndex)
{
	return MV1GetFrameChildNum( MHandle, FrameIndex);
}
int  __stdcall dx_MV1GetFrameChild( int  MHandle, int  FrameIndex, int  ChildIndex)
{
	return MV1GetFrameChild( MHandle, FrameIndex, ChildIndex);
}
VECTOR  __stdcall dx_MV1GetFramePosition( int  MHandle, int  FrameIndex)
{
	return MV1GetFramePosition( MHandle, FrameIndex);
}
VECTOR_D  __stdcall dx_MV1GetFramePositionD( int  MHandle, int  FrameIndex)
{
	return MV1GetFramePositionD( MHandle, FrameIndex);
}
MATRIX  __stdcall dx_MV1GetFrameBaseLocalMatrix( int  MHandle, int  FrameIndex)
{
	return MV1GetFrameBaseLocalMatrix( MHandle, FrameIndex);
}
MATRIX_D  __stdcall dx_MV1GetFrameBaseLocalMatrixD( int  MHandle, int  FrameIndex)
{
	return MV1GetFrameBaseLocalMatrixD( MHandle, FrameIndex);
}
MATRIX  __stdcall dx_MV1GetFrameLocalMatrix( int  MHandle, int  FrameIndex)
{
	return MV1GetFrameLocalMatrix( MHandle, FrameIndex);
}
MATRIX_D  __stdcall dx_MV1GetFrameLocalMatrixD( int  MHandle, int  FrameIndex)
{
	return MV1GetFrameLocalMatrixD( MHandle, FrameIndex);
}
MATRIX  __stdcall dx_MV1GetFrameLocalWorldMatrix( int  MHandle, int  FrameIndex)
{
	return MV1GetFrameLocalWorldMatrix( MHandle, FrameIndex);
}
MATRIX_D  __stdcall dx_MV1GetFrameLocalWorldMatrixD( int  MHandle, int  FrameIndex)
{
	return MV1GetFrameLocalWorldMatrixD( MHandle, FrameIndex);
}
int  __stdcall dx_MV1SetFrameUserLocalMatrix( int  MHandle, int  FrameIndex, MATRIX  Matrix)
{
	return MV1SetFrameUserLocalMatrix( MHandle, FrameIndex, Matrix);
}
int  __stdcall dx_MV1SetFrameUserLocalMatrixD( int  MHandle, int  FrameIndex, MATRIX_D  Matrix)
{
	return MV1SetFrameUserLocalMatrixD( MHandle, FrameIndex, Matrix);
}
int  __stdcall dx_MV1ResetFrameUserLocalMatrix( int  MHandle, int  FrameIndex)
{
	return MV1ResetFrameUserLocalMatrix( MHandle, FrameIndex);
}
VECTOR  __stdcall dx_MV1GetFrameMaxVertexLocalPosition( int  MHandle, int  FrameIndex)
{
	return MV1GetFrameMaxVertexLocalPosition( MHandle, FrameIndex);
}
VECTOR_D  __stdcall dx_MV1GetFrameMaxVertexLocalPositionD( int  MHandle, int  FrameIndex)
{
	return MV1GetFrameMaxVertexLocalPositionD( MHandle, FrameIndex);
}
VECTOR  __stdcall dx_MV1GetFrameMinVertexLocalPosition( int  MHandle, int  FrameIndex)
{
	return MV1GetFrameMinVertexLocalPosition( MHandle, FrameIndex);
}
VECTOR_D  __stdcall dx_MV1GetFrameMinVertexLocalPositionD( int  MHandle, int  FrameIndex)
{
	return MV1GetFrameMinVertexLocalPositionD( MHandle, FrameIndex);
}
VECTOR  __stdcall dx_MV1GetFrameAvgVertexLocalPosition( int  MHandle, int  FrameIndex)
{
	return MV1GetFrameAvgVertexLocalPosition( MHandle, FrameIndex);
}
VECTOR_D  __stdcall dx_MV1GetFrameAvgVertexLocalPositionD( int  MHandle, int  FrameIndex)
{
	return MV1GetFrameAvgVertexLocalPositionD( MHandle, FrameIndex);
}
int  __stdcall dx_MV1GetFrameTriangleNum( int  MHandle, int  FrameIndex)
{
	return MV1GetFrameTriangleNum( MHandle, FrameIndex);
}
int  __stdcall dx_MV1GetFrameMeshNum( int  MHandle, int  FrameIndex)
{
	return MV1GetFrameMeshNum( MHandle, FrameIndex);
}
int  __stdcall dx_MV1GetFrameMesh( int  MHandle, int  FrameIndex, int  Index)
{
	return MV1GetFrameMesh( MHandle, FrameIndex, Index);
}
int  __stdcall dx_MV1SetFrameVisible( int  MHandle, int  FrameIndex, int  VisibleFlag)
{
	return MV1SetFrameVisible( MHandle, FrameIndex, VisibleFlag);
}
int  __stdcall dx_MV1GetFrameVisible( int  MHandle, int  FrameIndex)
{
	return MV1GetFrameVisible( MHandle, FrameIndex);
}
int  __stdcall dx_MV1SetFrameDifColorScale( int  MHandle, int  FrameIndex, COLOR_F  Scale)
{
	return MV1SetFrameDifColorScale( MHandle, FrameIndex, Scale);
}
int  __stdcall dx_MV1SetFrameSpcColorScale( int  MHandle, int  FrameIndex, COLOR_F  Scale)
{
	return MV1SetFrameSpcColorScale( MHandle, FrameIndex, Scale);
}
int  __stdcall dx_MV1SetFrameEmiColorScale( int  MHandle, int  FrameIndex, COLOR_F  Scale)
{
	return MV1SetFrameEmiColorScale( MHandle, FrameIndex, Scale);
}
int  __stdcall dx_MV1SetFrameAmbColorScale( int  MHandle, int  FrameIndex, COLOR_F  Scale)
{
	return MV1SetFrameAmbColorScale( MHandle, FrameIndex, Scale);
}
COLOR_F  __stdcall dx_MV1GetFrameDifColorScale( int  MHandle, int  FrameIndex)
{
	return MV1GetFrameDifColorScale( MHandle, FrameIndex);
}
COLOR_F  __stdcall dx_MV1GetFrameSpcColorScale( int  MHandle, int  FrameIndex)
{
	return MV1GetFrameSpcColorScale( MHandle, FrameIndex);
}
COLOR_F  __stdcall dx_MV1GetFrameEmiColorScale( int  MHandle, int  FrameIndex)
{
	return MV1GetFrameEmiColorScale( MHandle, FrameIndex);
}
COLOR_F  __stdcall dx_MV1GetFrameAmbColorScale( int  MHandle, int  FrameIndex)
{
	return MV1GetFrameAmbColorScale( MHandle, FrameIndex);
}
int  __stdcall dx_MV1GetFrameSemiTransState( int  MHandle, int  FrameIndex)
{
	return MV1GetFrameSemiTransState( MHandle, FrameIndex);
}
int  __stdcall dx_MV1SetFrameOpacityRate( int  MHandle, int  FrameIndex, float  Rate)
{
	return MV1SetFrameOpacityRate( MHandle, FrameIndex, Rate);
}
float  __stdcall dx_MV1GetFrameOpacityRate( int  MHandle, int  FrameIndex)
{
	return MV1GetFrameOpacityRate( MHandle, FrameIndex);
}
int  __stdcall dx_MV1SetFrameBaseVisible( int  MHandle, int  FrameIndex, int  VisibleFlag)
{
	return MV1SetFrameBaseVisible( MHandle, FrameIndex, VisibleFlag);
}
int  __stdcall dx_MV1GetFrameBaseVisible( int  MHandle, int  FrameIndex)
{
	return MV1GetFrameBaseVisible( MHandle, FrameIndex);
}
int  __stdcall dx_MV1SetFrameTextureAddressTransform( int  MHandle, int  FrameIndex, float  TransU, float  TransV, float  ScaleU, float  ScaleV, float  RotCenterU, float  RotCenterV, float  Rotate)
{
	return MV1SetFrameTextureAddressTransform( MHandle, FrameIndex, TransU, TransV, ScaleU, ScaleV, RotCenterU, RotCenterV, Rotate);
}
int  __stdcall dx_MV1SetFrameTextureAddressTransformMatrix( int  MHandle, int  FrameIndex, MATRIX  Matrix)
{
	return MV1SetFrameTextureAddressTransformMatrix( MHandle, FrameIndex, Matrix);
}
int  __stdcall dx_MV1ResetFrameTextureAddressTransform( int  MHandle, int  FrameIndex)
{
	return MV1ResetFrameTextureAddressTransform( MHandle, FrameIndex);
}
int  __stdcall dx_MV1GetMeshNum( int  MHandle)
{
	return MV1GetMeshNum( MHandle);
}
int  __stdcall dx_MV1GetMeshMaterial( int  MHandle, int  MeshIndex)
{
	return MV1GetMeshMaterial( MHandle, MeshIndex);
}
int  __stdcall dx_MV1GetMeshTriangleNum( int  MHandle, int  MeshIndex)
{
	return MV1GetMeshTriangleNum( MHandle, MeshIndex);
}
int  __stdcall dx_MV1SetMeshVisible( int  MHandle, int  MeshIndex, int  VisibleFlag)
{
	return MV1SetMeshVisible( MHandle, MeshIndex, VisibleFlag);
}
int  __stdcall dx_MV1GetMeshVisible( int  MHandle, int  MeshIndex)
{
	return MV1GetMeshVisible( MHandle, MeshIndex);
}
int  __stdcall dx_MV1SetMeshDifColorScale( int  MHandle, int  MeshIndex, COLOR_F  Scale)
{
	return MV1SetMeshDifColorScale( MHandle, MeshIndex, Scale);
}
int  __stdcall dx_MV1SetMeshSpcColorScale( int  MHandle, int  MeshIndex, COLOR_F  Scale)
{
	return MV1SetMeshSpcColorScale( MHandle, MeshIndex, Scale);
}
int  __stdcall dx_MV1SetMeshEmiColorScale( int  MHandle, int  MeshIndex, COLOR_F  Scale)
{
	return MV1SetMeshEmiColorScale( MHandle, MeshIndex, Scale);
}
int  __stdcall dx_MV1SetMeshAmbColorScale( int  MHandle, int  MeshIndex, COLOR_F  Scale)
{
	return MV1SetMeshAmbColorScale( MHandle, MeshIndex, Scale);
}
COLOR_F  __stdcall dx_MV1GetMeshDifColorScale( int  MHandle, int  MeshIndex)
{
	return MV1GetMeshDifColorScale( MHandle, MeshIndex);
}
COLOR_F  __stdcall dx_MV1GetMeshSpcColorScale( int  MHandle, int  MeshIndex)
{
	return MV1GetMeshSpcColorScale( MHandle, MeshIndex);
}
COLOR_F  __stdcall dx_MV1GetMeshEmiColorScale( int  MHandle, int  MeshIndex)
{
	return MV1GetMeshEmiColorScale( MHandle, MeshIndex);
}
COLOR_F  __stdcall dx_MV1GetMeshAmbColorScale( int  MHandle, int  MeshIndex)
{
	return MV1GetMeshAmbColorScale( MHandle, MeshIndex);
}
int  __stdcall dx_MV1SetMeshOpacityRate( int  MHandle, int  MeshIndex, float  Rate)
{
	return MV1SetMeshOpacityRate( MHandle, MeshIndex, Rate);
}
float  __stdcall dx_MV1GetMeshOpacityRate( int  MHandle, int  MeshIndex)
{
	return MV1GetMeshOpacityRate( MHandle, MeshIndex);
}
int  __stdcall dx_MV1SetMeshDrawBlendMode( int  MHandle, int  MeshIndex, int  BlendMode)
{
	return MV1SetMeshDrawBlendMode( MHandle, MeshIndex, BlendMode);
}
int  __stdcall dx_MV1SetMeshDrawBlendParam( int  MHandle, int  MeshIndex, int  BlendParam)
{
	return MV1SetMeshDrawBlendParam( MHandle, MeshIndex, BlendParam);
}
int  __stdcall dx_MV1GetMeshDrawBlendMode( int  MHandle, int  MeshIndex)
{
	return MV1GetMeshDrawBlendMode( MHandle, MeshIndex);
}
int  __stdcall dx_MV1GetMeshDrawBlendParam( int  MHandle, int  MeshIndex)
{
	return MV1GetMeshDrawBlendParam( MHandle, MeshIndex);
}
int  __stdcall dx_MV1SetMeshBaseVisible( int  MHandle, int  MeshIndex, int  VisibleFlag)
{
	return MV1SetMeshBaseVisible( MHandle, MeshIndex, VisibleFlag);
}
int  __stdcall dx_MV1GetMeshBaseVisible( int  MHandle, int  MeshIndex)
{
	return MV1GetMeshBaseVisible( MHandle, MeshIndex);
}
int  __stdcall dx_MV1SetMeshBackCulling( int  MHandle, int  MeshIndex, int  CullingFlag)
{
	return MV1SetMeshBackCulling( MHandle, MeshIndex, CullingFlag);
}
int  __stdcall dx_MV1GetMeshBackCulling( int  MHandle, int  MeshIndex)
{
	return MV1GetMeshBackCulling( MHandle, MeshIndex);
}
VECTOR  __stdcall dx_MV1GetMeshMaxPosition( int  MHandle, int  MeshIndex)
{
	return MV1GetMeshMaxPosition( MHandle, MeshIndex);
}
VECTOR  __stdcall dx_MV1GetMeshMinPosition( int  MHandle, int  MeshIndex)
{
	return MV1GetMeshMinPosition( MHandle, MeshIndex);
}
int  __stdcall dx_MV1GetMeshTListNum( int  MHandle, int  MeshIndex)
{
	return MV1GetMeshTListNum( MHandle, MeshIndex);
}
int  __stdcall dx_MV1GetMeshTList( int  MHandle, int  MeshIndex, int  Index)
{
	return MV1GetMeshTList( MHandle, MeshIndex, Index);
}
int  __stdcall dx_MV1GetMeshSemiTransState( int  MHandle, int  MeshIndex)
{
	return MV1GetMeshSemiTransState( MHandle, MeshIndex);
}
int  __stdcall dx_MV1SetMeshUseVertDifColor( int  MHandle, int  MeshIndex, int  UseFlag)
{
	return MV1SetMeshUseVertDifColor( MHandle, MeshIndex, UseFlag);
}
int  __stdcall dx_MV1SetMeshUseVertSpcColor( int  MHandle, int  MeshIndex, int  UseFlag)
{
	return MV1SetMeshUseVertSpcColor( MHandle, MeshIndex, UseFlag);
}
int  __stdcall dx_MV1GetMeshUseVertDifColor( int  MHandle, int  MeshIndex)
{
	return MV1GetMeshUseVertDifColor( MHandle, MeshIndex);
}
int  __stdcall dx_MV1GetMeshUseVertSpcColor( int  MHandle, int  MeshIndex)
{
	return MV1GetMeshUseVertSpcColor( MHandle, MeshIndex);
}
int  __stdcall dx_MV1GetMeshShapeFlag( int  MHandle, int  MeshIndex)
{
	return MV1GetMeshShapeFlag( MHandle, MeshIndex);
}
int  __stdcall dx_MV1GetShapeNum( int  MHandle)
{
	return MV1GetShapeNum( MHandle);
}
int  __stdcall dx_MV1SearchShape( int  MHandle, const char * ShapeName)
{
	return MV1SearchShape( MHandle, ShapeName);
}
const TCHAR * __stdcall dx_MV1GetShapeName( int MHandle , int ShapeIndex ) 
{
	return MV1GetShapeName( MHandle , ShapeIndex  ) ;
}
int  __stdcall dx_MV1GetShapeTargetMeshNum( int  MHandle, int  ShapeIndex)
{
	return MV1GetShapeTargetMeshNum( MHandle, ShapeIndex);
}
int  __stdcall dx_MV1GetShapeTargetMesh( int  MHandle, int  ShapeIndex, int  Index)
{
	return MV1GetShapeTargetMesh( MHandle, ShapeIndex, Index);
}
int  __stdcall dx_MV1SetShapeRate( int  MHandle, int  ShapeIndex, float  Rate)
{
	return MV1SetShapeRate( MHandle, ShapeIndex, Rate);
}
float  __stdcall dx_MV1GetShapeRate( int  MHandle, int  ShapeIndex)
{
	return MV1GetShapeRate( MHandle, ShapeIndex);
}
int  __stdcall dx_MV1GetTriangleListNum( int  MHandle)
{
	return MV1GetTriangleListNum( MHandle);
}
int  __stdcall dx_MV1GetTriangleListVertexType( int  MHandle, int  TListIndex)
{
	return MV1GetTriangleListVertexType( MHandle, TListIndex);
}
int  __stdcall dx_MV1GetTriangleListPolygonNum( int  MHandle, int  TListIndex)
{
	return MV1GetTriangleListPolygonNum( MHandle, TListIndex);
}
int  __stdcall dx_MV1GetTriangleListVertexNum( int  MHandle, int  TListIndex)
{
	return MV1GetTriangleListVertexNum( MHandle, TListIndex);
}
int  __stdcall dx_MV1GetTriangleListLocalWorldMatrixNum( int  MHandle, int  TListIndex)
{
	return MV1GetTriangleListLocalWorldMatrixNum( MHandle, TListIndex);
}
MATRIX  __stdcall dx_MV1GetTriangleListLocalWorldMatrix( int  MHandle, int  TListIndex, int  LWMatrixIndex)
{
	return MV1GetTriangleListLocalWorldMatrix( MHandle, TListIndex, LWMatrixIndex);
}
int  __stdcall dx_MV1GetTriangleListPolygonVertexPosition( int  MHandle, int  TListIndex, int  PolygonIndex, VECTOR *  VertexPositions)
{
	return MV1GetTriangleListPolygonVertexPosition( MHandle, TListIndex, PolygonIndex, VertexPositions);
}
int  __stdcall dx_MV1SetupCollInfo( int  MHandle, int  FrameIndex, int  XDivNum, int  YDivNum, int  ZDivNum)
{
	return MV1SetupCollInfo( MHandle, FrameIndex, XDivNum, YDivNum, ZDivNum);
}
int  __stdcall dx_MV1TerminateCollInfo( int  MHandle, int  FrameIndex)
{
	return MV1TerminateCollInfo( MHandle, FrameIndex);
}
int  __stdcall dx_MV1RefreshCollInfo( int  MHandle, int  FrameIndex)
{
	return MV1RefreshCollInfo( MHandle, FrameIndex);
}
MV1_COLL_RESULT_POLY  __stdcall dx_MV1CollCheck_Line( int  MHandle, int  FrameIndex, VECTOR  PosStart, VECTOR  PosEnd)
{
	return MV1CollCheck_Line( MHandle, FrameIndex, PosStart, PosEnd);
}
MV1_COLL_RESULT_POLY_DIM  __stdcall dx_MV1CollCheck_LineDim( int  MHandle, int  FrameIndex, VECTOR  PosStart, VECTOR  PosEnd)
{
	return MV1CollCheck_LineDim( MHandle, FrameIndex, PosStart, PosEnd);
}
MV1_COLL_RESULT_POLY_DIM  __stdcall dx_MV1CollCheck_Sphere( int  MHandle, int  FrameIndex, VECTOR  CenterPos, float  r)
{
	return MV1CollCheck_Sphere( MHandle, FrameIndex, CenterPos, r);
}
MV1_COLL_RESULT_POLY_DIM  __stdcall dx_MV1CollCheck_Capsule( int  MHandle, int  FrameIndex, VECTOR  Pos1, VECTOR  Pos2, float  r)
{
	return MV1CollCheck_Capsule( MHandle, FrameIndex, Pos1, Pos2, r);
}
MV1_COLL_RESULT_POLY_DIM  __stdcall dx_MV1CollCheck_Triangle( int  MHandle, int  FrameIndex, VECTOR  Pos1, VECTOR  Pos2, VECTOR  Pos3)
{
	return MV1CollCheck_Triangle( MHandle, FrameIndex, Pos1, Pos2, Pos3);
}
MV1_COLL_RESULT_POLY  __stdcall dx_MV1CollCheck_GetResultPoly( MV1_COLL_RESULT_POLY_DIM  ResultPolyDim, int  PolyNo)
{
	return MV1CollCheck_GetResultPoly( ResultPolyDim, PolyNo);
}
int  __stdcall dx_MV1CollResultPolyDimTerminate( MV1_COLL_RESULT_POLY_DIM  ResultPolyDim)
{
	return MV1CollResultPolyDimTerminate( ResultPolyDim);
}
int  __stdcall dx_MV1SetupReferenceMesh( int  MHandle, int  FrameIndex, int  IsTransform, int  IsPositionOnly)
{
	return MV1SetupReferenceMesh( MHandle, FrameIndex, IsTransform, IsPositionOnly);
}
int  __stdcall dx_MV1TerminateReferenceMesh( int  MHandle, int  FrameIndex, int  IsTransform, int  IsPositionOnly)
{
	return MV1TerminateReferenceMesh( MHandle, FrameIndex, IsTransform, IsPositionOnly);
}
int  __stdcall dx_MV1RefreshReferenceMesh( int  MHandle, int  FrameIndex, int  IsTransform, int  IsPositionOnly)
{
	return MV1RefreshReferenceMesh( MHandle, FrameIndex, IsTransform, IsPositionOnly);
}
MV1_REF_POLYGONLIST __stdcall dx_MV1GetReferenceMesh( int MHandle , int FrameIndex , int IsTransform , int IsPositionOnly ) 
{
	return MV1GetReferenceMesh( MHandle , FrameIndex , IsTransform , IsPositionOnly  ) ;
}
int __stdcall dx_GetResourceInfo( const TCHAR * ResourceName , const TCHAR * ResourceType , void * * DataPointerP , int * DataSizeP ) 
{
	return GetResourceInfo( ResourceName , ResourceType , DataPointerP , DataSizeP  ) ;
}
const TCHAR * __stdcall dx_GetResourceIDString( int ResourceID ) 
{
	return GetResourceIDString( ResourceID  ) ;
}
int  __stdcall dx_GetWindowCRect( RECT *  RectBuf)
{
	return GetWindowCRect( RectBuf);
}
int  __stdcall dx_GetWindowActiveFlag( void)
{
	return GetWindowActiveFlag( );
}
int  __stdcall dx_GetWindowMinSizeFlag( void)
{
	return GetWindowMinSizeFlag( );
}
int  __stdcall dx_GetWindowMaxSizeFlag( void)
{
	return GetWindowMaxSizeFlag( );
}
int  __stdcall dx_GetActiveFlag( void)
{
	return GetActiveFlag( );
}
HWND __stdcall dx_GetMainWindowHandle( void )
{
	return GetMainWindowHandle(  ) ;
}
int  __stdcall dx_GetWindowModeFlag( void)
{
	return GetWindowModeFlag( );
}
int  __stdcall dx_GetDefaultState( int *  SizeX, int *  SizeY, int *  ColorBitDepth, int *  RefreshRate, int *  LeftTopX, int *  LeftTopY)
{
	return GetDefaultState( SizeX, SizeY, ColorBitDepth, RefreshRate, LeftTopX, LeftTopY);
}
int  __stdcall dx_GetNoActiveState( int  ResetFlag)
{
	return GetNoActiveState( ResetFlag);
}
int  __stdcall dx_GetMouseDispFlag( void)
{
	return GetMouseDispFlag( );
}
int  __stdcall dx_GetAlwaysRunFlag( void)
{
	return GetAlwaysRunFlag( );
}
int  __stdcall dx__GetSystemInfo( int *  DxLibVer, int *  DirectXVer, int *  WindowsVer)
{
	return _GetSystemInfo( DxLibVer, DirectXVer, WindowsVer);
}
int  __stdcall dx_GetPcInfo( TCHAR *  OSString, TCHAR *  DirectXString, TCHAR *  CPUString, int *  CPUSpeed, double *  FreeMemorySize, double *  TotalMemorySize, TCHAR *  VideoDriverFileName, TCHAR *  VideoDriverString, double *  FreeVideoMemorySize, double *  TotalVideoMemorySize)
{
	return GetPcInfo( OSString, DirectXString, CPUString, CPUSpeed, FreeMemorySize, TotalMemorySize, VideoDriverFileName, VideoDriverString, FreeVideoMemorySize, TotalVideoMemorySize);
}
int  __stdcall dx_GetUseMMXFlag( void)
{
	return GetUseMMXFlag( );
}
int  __stdcall dx_GetUseSSEFlag( void)
{
	return GetUseSSEFlag( );
}
int  __stdcall dx_GetUseSSE2Flag( void)
{
	return GetUseSSE2Flag( );
}
int  __stdcall dx_GetWindowCloseFlag( void)
{
	return GetWindowCloseFlag( );
}
HINSTANCE __stdcall dx_GetTaskInstance( void )
{
	return GetTaskInstance(  ) ;
}
int  __stdcall dx_GetUseWindowRgnFlag( void)
{
	return GetUseWindowRgnFlag( );
}
int __stdcall dx_GetWindowSizeChangeEnableFlag( int * FitScreen ) 
{
	return GetWindowSizeChangeEnableFlag( FitScreen  ) ;
}
double __stdcall dx_GetWindowSizeExtendRate( double * ExRateX , double * ExRateY ) 
{
	return GetWindowSizeExtendRate( ExRateX , ExRateY  ) ;
}
int  __stdcall dx_GetWindowSize( int *  Width, int *  Height)
{
	return GetWindowSize( Width, Height);
}
int  __stdcall dx_GetWindowPosition( int *  x, int *  y)
{
	return GetWindowPosition( x, y);
}
int  __stdcall dx_GetWindowUserCloseFlag( int  StateResetFlag)
{
	return GetWindowUserCloseFlag( StateResetFlag);
}
int  __stdcall dx_GetNotDrawFlag( void)
{
	return GetNotDrawFlag( );
}
int  __stdcall dx_GetPaintMessageFlag( void)
{
	return GetPaintMessageFlag( );
}
int  __stdcall dx_GetValidHiPerformanceCounter( void)
{
	return GetValidHiPerformanceCounter( );
}
TCHAR __stdcall dx_GetInputSystemChar( int DeleteFlag ) 
{
	return GetInputSystemChar( DeleteFlag  ) ;
}
int  __stdcall dx_ChangeWindowMode( int  Flag)
{
	return ChangeWindowMode( Flag);
}
int  __stdcall dx_SetUseCharSet( int  CharSet)
{
	return SetUseCharSet( CharSet);
}
int  __stdcall dx_LoadPauseGraph( const char * FileName)
{
	return LoadPauseGraph( FileName);
}
int  __stdcall dx_LoadPauseGraphFromMem( const void * MemImage, int  MemImageSize)
{
	return LoadPauseGraphFromMem( MemImage, MemImageSize);
}
int __stdcall dx_SetActiveStateChangeCallBackFunction( int ( *CallBackFunction )( int ActiveState , void * UserData ) , void * UserData ) 
{
	return SetActiveStateChangeCallBackFunction( CallBackFunction , UserData  ) ;
}
int  __stdcall dx_SetWindowText( const char * WindowText)
{
	return SetWindowText( WindowText);
}
int  __stdcall dx_SetMainWindowText( const char * WindowText)
{
	return SetMainWindowText( WindowText);
}
int  __stdcall dx_SetMainWindowClassName( const char * ClassName)
{
	return SetMainWindowClassName( ClassName);
}
int  __stdcall dx_SetAlwaysRunFlag( int  Flag)
{
	return SetAlwaysRunFlag( Flag);
}
int  __stdcall dx_SetWindowIconID( int  ID)
{
	return SetWindowIconID( ID);
}
int  __stdcall dx_SetWindowIconHandle( HICON  Icon)
{
	return SetWindowIconHandle( Icon);
}
int __stdcall dx_SetUseASyncChangeWindowModeFunction( int Flag , void ( *CallBackFunction )( void * ) , void * Data ) 
{
	return SetUseASyncChangeWindowModeFunction( Flag , CallBackFunction , Data  ) ;
}
int  __stdcall dx_SetWindowStyleMode( int  Mode)
{
	return SetWindowStyleMode( Mode);
}
int  __stdcall dx_SetWindowZOrder( int  ZType)
{
	return SetWindowZOrder( ZType);
}
int  __stdcall dx_SetWindowSizeChangeEnableFlag( int  Flag, int  FitScreen)
{
	return SetWindowSizeChangeEnableFlag( Flag, FitScreen);
}
int  __stdcall dx_SetWindowSizeExtendRate( double  ExRateX, double  ExRateY)
{
	return SetWindowSizeExtendRate( ExRateX, ExRateY);
}
int  __stdcall dx_SetWindowSize( int  Width, int  Height)
{
	return SetWindowSize( Width, Height);
}
int  __stdcall dx_SetWindowMaxSize( int  MaxWidth, int  MaxHeight)
{
	return SetWindowMaxSize( MaxWidth, MaxHeight);
}
int  __stdcall dx_SetWindowMinSize( int  MinWidth, int  MinHeight)
{
	return SetWindowMinSize( MinWidth, MinHeight);
}
int  __stdcall dx_SetWindowPosition( int  x, int  y)
{
	return SetWindowPosition( x, y);
}
int  __stdcall dx_SetSysCommandOffFlag( int  Flag, const char * HookDllPath)
{
	return SetSysCommandOffFlag( Flag, HookDllPath);
}
int __stdcall dx_SetHookWinProc( WNDPROC WinProc ) 
{
	return SetHookWinProc( WinProc  ) ;
}
int  __stdcall dx_SetUseHookWinProcReturnValue( int  UseFlag)
{
	return SetUseHookWinProcReturnValue( UseFlag);
}
int  __stdcall dx_SetDoubleStartValidFlag( int  Flag)
{
	return SetDoubleStartValidFlag( Flag);
}
int  __stdcall dx_AddMessageTakeOverWindow( HWND  Window)
{
	return AddMessageTakeOverWindow( Window);
}
int  __stdcall dx_SubMessageTakeOverWindow( HWND  Window)
{
	return SubMessageTakeOverWindow( Window);
}
int  __stdcall dx_SetWindowInitPosition( int  x, int  y)
{
	return SetWindowInitPosition( x, y);
}
int  __stdcall dx_SetNotWinFlag( int  Flag)
{
	return SetNotWinFlag( Flag);
}
int  __stdcall dx_SetNotDrawFlag( int  Flag)
{
	return SetNotDrawFlag( Flag);
}
int  __stdcall dx_SetNotSoundFlag( int  Flag)
{
	return SetNotSoundFlag( Flag);
}
int  __stdcall dx_SetNotInputFlag( int  Flag)
{
	return SetNotInputFlag( Flag);
}
int  __stdcall dx_SetDialogBoxHandle( HWND  WindowHandle)
{
	return SetDialogBoxHandle( WindowHandle);
}
int  __stdcall dx_SetWindowVisibleFlag( int  Flag)
{
	return SetWindowVisibleFlag( Flag);
}
int  __stdcall dx_SetWindowMinimizeFlag( int  Flag)
{
	return SetWindowMinimizeFlag( Flag);
}
int  __stdcall dx_SetWindowUserCloseEnableFlag( int  Flag)
{
	return SetWindowUserCloseEnableFlag( Flag);
}
int  __stdcall dx_SetDxLibEndPostQuitMessageFlag( int  Flag)
{
	return SetDxLibEndPostQuitMessageFlag( Flag);
}
int  __stdcall dx_SetUserWindow( HWND  WindowHandle)
{
	return SetUserWindow( WindowHandle);
}
int  __stdcall dx_SetUserChildWindow( HWND  WindowHandle)
{
	return SetUserChildWindow( WindowHandle);
}
int  __stdcall dx_SetUserWindowMessageProcessDXLibFlag( int  Flag)
{
	return SetUserWindowMessageProcessDXLibFlag( Flag);
}
int  __stdcall dx_SetUseFPUPreserveFlag( int  Flag)
{
	return SetUseFPUPreserveFlag( Flag);
}
int  __stdcall dx_SetValidMousePointerWindowOutClientAreaMoveFlag( int  Flag)
{
	return SetValidMousePointerWindowOutClientAreaMoveFlag( Flag);
}
int  __stdcall dx_SetUseBackBufferTransColorFlag( int  Flag)
{
	return SetUseBackBufferTransColorFlag( Flag);
}
int  __stdcall dx_SetUseUpdateLayerdWindowFlag( int  Flag)
{
	return SetUseUpdateLayerdWindowFlag( Flag);
}
int __stdcall dx_SetResourceModule( HMODULE ResourceModule ) 
{
	return SetResourceModule( ResourceModule  ) ;
}
int  __stdcall dx_SetUseDxLibWM_PAINTProcess( int  Flag)
{
	return SetUseDxLibWM_PAINTProcess( Flag);
}
int  __stdcall dx_GetClipboardText( TCHAR *  DestBuffer)
{
	return GetClipboardText( DestBuffer);
}
int  __stdcall dx_SetClipboardText( const char * Text)
{
	return SetClipboardText( Text);
}
int  __stdcall dx_SetDragFileValidFlag( int  Flag)
{
	return SetDragFileValidFlag( Flag);
}
int  __stdcall dx_DragFileInfoClear( void)
{
	return DragFileInfoClear( );
}
int  __stdcall dx_GetDragFilePath( TCHAR *  FilePathBuffer)
{
	return GetDragFilePath( FilePathBuffer);
}
int  __stdcall dx_GetDragFileNum( void)
{
	return GetDragFileNum( );
}
HRGN __stdcall dx_CreateRgnFromGraph( int Width , int Height , const void * MaskData , int Pitch , int Byte ) 
{
	return CreateRgnFromGraph( Width , Height , MaskData , Pitch , Byte  ) ;
}
HRGN __stdcall dx_CreateRgnFromBaseImage( BASEIMAGE * BaseImage , int TransColorR , int TransColorG , int TransColorB ) 
{
	return CreateRgnFromBaseImage( BaseImage , TransColorR , TransColorG , TransColorB  ) ;
}
int  __stdcall dx_SetWindowRgnGraph( const char * FileName)
{
	return SetWindowRgnGraph( FileName);
}
int  __stdcall dx_UpdateTransColorWindowRgn( void)
{
	return UpdateTransColorWindowRgn( );
}
int  __stdcall dx_SetupToolBar( const char * BitmapName, int  DivNum, int  ResourceID)
{
	return SetupToolBar( BitmapName, DivNum, ResourceID);
}
int  __stdcall dx_AddToolBarButton( int  Type, int  State, int  ImageIndex, int  ID)
{
	return AddToolBarButton( Type, State, ImageIndex, ID);
}
int  __stdcall dx_AddToolBarSep( void)
{
	return AddToolBarSep( );
}
int  __stdcall dx_GetToolBarButtonState( int  ID)
{
	return GetToolBarButtonState( ID);
}
int  __stdcall dx_SetToolBarButtonState( int  ID, int  State)
{
	return SetToolBarButtonState( ID, State);
}
int  __stdcall dx_DeleteAllToolBarButton( void)
{
	return DeleteAllToolBarButton( );
}
int  __stdcall dx_SetUseMenuFlag( int  Flag)
{
	return SetUseMenuFlag( Flag);
}
int  __stdcall dx_SetUseKeyAccelFlag( int  Flag)
{
	return SetUseKeyAccelFlag( Flag);
}
int  __stdcall dx_AddKeyAccel( const char * ItemName, int  ItemID, int  KeyCode, int  CtrlFlag, int  AltFlag, int  ShiftFlag)
{
	return AddKeyAccel( ItemName, ItemID, KeyCode, CtrlFlag, AltFlag, ShiftFlag);
}
int  __stdcall dx_AddKeyAccel_Name( const char * ItemName, int  KeyCode, int  CtrlFlag, int  AltFlag, int  ShiftFlag)
{
	return AddKeyAccel_Name( ItemName, KeyCode, CtrlFlag, AltFlag, ShiftFlag);
}
int  __stdcall dx_AddKeyAccel_ID( int  ItemID, int  KeyCode, int  CtrlFlag, int  AltFlag, int  ShiftFlag)
{
	return AddKeyAccel_ID( ItemID, KeyCode, CtrlFlag, AltFlag, ShiftFlag);
}
int  __stdcall dx_ClearKeyAccel( void)
{
	return ClearKeyAccel( );
}
int  __stdcall dx_AddMenuItem( int  AddType, const char * ItemName, int  ItemID, int  SeparatorFlag, const char * NewItemName, int  NewItemID)
{
	return AddMenuItem( AddType, ItemName, ItemID, SeparatorFlag, NewItemName, NewItemID);
}
int  __stdcall dx_DeleteMenuItem( const char * ItemName, int  ItemID)
{
	return DeleteMenuItem( ItemName, ItemID);
}
int  __stdcall dx_CheckMenuItemSelect( const char * ItemName, int  ItemID)
{
	return CheckMenuItemSelect( ItemName, ItemID);
}
int  __stdcall dx_SetMenuItemEnable( const char * ItemName, int  ItemID, int  EnableFlag)
{
	return SetMenuItemEnable( ItemName, ItemID, EnableFlag);
}
int  __stdcall dx_SetMenuItemMark( const char * ItemName, int  ItemID, int  Mark)
{
	return SetMenuItemMark( ItemName, ItemID, Mark);
}
int  __stdcall dx_CheckMenuItemSelectAll( void)
{
	return CheckMenuItemSelectAll( );
}
int  __stdcall dx_AddMenuItem_Name( const char * ParentItemName, const char * NewItemName)
{
	return AddMenuItem_Name( ParentItemName, NewItemName);
}
int  __stdcall dx_AddMenuLine_Name( const char * ParentItemName)
{
	return AddMenuLine_Name( ParentItemName);
}
int  __stdcall dx_InsertMenuItem_Name( const char * ItemName, const char * NewItemName)
{
	return InsertMenuItem_Name( ItemName, NewItemName);
}
int  __stdcall dx_InsertMenuLine_Name( const char * ItemName)
{
	return InsertMenuLine_Name( ItemName);
}
int  __stdcall dx_DeleteMenuItem_Name( const char * ItemName)
{
	return DeleteMenuItem_Name( ItemName);
}
int  __stdcall dx_CheckMenuItemSelect_Name( const char * ItemName)
{
	return CheckMenuItemSelect_Name( ItemName);
}
int  __stdcall dx_SetMenuItemEnable_Name( const char * ItemName, int  EnableFlag)
{
	return SetMenuItemEnable_Name( ItemName, EnableFlag);
}
int  __stdcall dx_SetMenuItemMark_Name( const char * ItemName, int  Mark)
{
	return SetMenuItemMark_Name( ItemName, Mark);
}
int  __stdcall dx_AddMenuItem_ID( int  ParentItemID, const char * NewItemName, int  NewItemID)
{
	return AddMenuItem_ID( ParentItemID, NewItemName, NewItemID);
}
int  __stdcall dx_AddMenuLine_ID( int  ParentItemID)
{
	return AddMenuLine_ID( ParentItemID);
}
int  __stdcall dx_InsertMenuItem_ID( int  ItemID, int  NewItemID)
{
	return InsertMenuItem_ID( ItemID, NewItemID);
}
int  __stdcall dx_InsertMenuLine_ID( int  ItemID, int  NewItemID)
{
	return InsertMenuLine_ID( ItemID, NewItemID);
}
int  __stdcall dx_DeleteMenuItem_ID( int  ItemID)
{
	return DeleteMenuItem_ID( ItemID);
}
int  __stdcall dx_CheckMenuItemSelect_ID( int  ItemID)
{
	return CheckMenuItemSelect_ID( ItemID);
}
int  __stdcall dx_SetMenuItemEnable_ID( int  ItemID, int  EnableFlag)
{
	return SetMenuItemEnable_ID( ItemID, EnableFlag);
}
int  __stdcall dx_SetMenuItemMark_ID( int  ItemID, int  Mark)
{
	return SetMenuItemMark_ID( ItemID, Mark);
}
int  __stdcall dx_DeleteMenuItemAll( void)
{
	return DeleteMenuItemAll( );
}
int  __stdcall dx_ClearMenuItemSelect( void)
{
	return ClearMenuItemSelect( );
}
int  __stdcall dx_GetMenuItemID( const char * ItemName)
{
	return GetMenuItemID( ItemName);
}
int  __stdcall dx_GetMenuItemName( int  ItemID, TCHAR *  NameBuffer)
{
	return GetMenuItemName( ItemID, NameBuffer);
}
int  __stdcall dx_LoadMenuResource( int  MenuResourceID)
{
	return LoadMenuResource( MenuResourceID);
}
int __stdcall dx_SetMenuItemSelectCallBackFunction( void ( *CallBackFunction )( const TCHAR * ItemName , int ItemID ) ) 
{
	return SetMenuItemSelectCallBackFunction( CallBackFunction  ) ;
}
int __stdcall dx_SetWindowMenu( int MenuID , int ( *MenuProc )( WORD ID ) ) 
{
	return SetWindowMenu( MenuID , MenuProc  ) ;
}
int  __stdcall dx_SetDisplayMenuFlag( int  Flag)
{
	return SetDisplayMenuFlag( Flag);
}
int  __stdcall dx_GetDisplayMenuFlag( void)
{
	return GetDisplayMenuFlag( );
}
int  __stdcall dx_GetUseMenuFlag( void)
{
	return GetUseMenuFlag( );
}
int  __stdcall dx_SetAutoMenuDisplayFlag( int  Flag)
{
	return SetAutoMenuDisplayFlag( Flag);
}
int  __stdcall dx_SetKeyExclusiveCooperativeLevelFlag( int  Flag)
{
	return SetKeyExclusiveCooperativeLevelFlag( Flag);
}
int  __stdcall dx_SetKeyboardNotDirectInputFlag( int  Flag)
{
	return SetKeyboardNotDirectInputFlag( Flag);
}
int  __stdcall dx_SetUseDirectInputFlag( int  Flag)
{
	return SetUseDirectInputFlag( Flag);
}
int  __stdcall dx_SetUseXInputFlag( int  Flag)
{
	return SetUseXInputFlag( Flag);
}
int __stdcall dx_GetJoypadGUID( int PadIndex , GUID * GuidInstanceBuffer , GUID * GuidProductBuffer ) 
{
	return GetJoypadGUID( PadIndex , GuidInstanceBuffer , GuidProductBuffer  ) ;
}
int  __stdcall dx_GetJoypadName( int  InputType, TCHAR *  InstanceNameBuffer, TCHAR *  ProductNameBuffer)
{
	return GetJoypadName( InputType, InstanceNameBuffer, ProductNameBuffer);
}
int  __stdcall dx_ConvertKeyCodeToVirtualKey( int  KeyCode)
{
	return ConvertKeyCodeToVirtualKey( KeyCode);
}
int  __stdcall dx_ConvertVirtualKeyToKeyCode( int  VirtualKey)
{
	return ConvertVirtualKeyToKeyCode( VirtualKey);
}
int __stdcall dx_LoadGraphToResource( int ResourceID ) 
{
	return LoadGraphToResource( ResourceID  ) ;
}
int  __stdcall dx_LoadDivGraphToResource( int  ResourceID, int  AllNum, int  XNum, int  YNum, int  XSize, int  YSize, int *  HandleBuf)
{
	return LoadDivGraphToResource( ResourceID, AllNum, XNum, YNum, XSize, YSize, HandleBuf);
}
int __stdcall dx_LoadGraphToResource_2( const TCHAR * ResourceName , const TCHAR * ResourceType ) 
{
	return LoadGraphToResource( ResourceName , ResourceType  ) ;
}
int  __stdcall dx_LoadDivGraphToResource_2( const char * ResourceName, const char * ResourceType, int  AllNum, int  XNum, int  YNum, int  XSize, int  YSize, int *  HandleBuf)
{
	return LoadDivGraphToResource( ResourceName, ResourceType, AllNum, XNum, YNum, XSize, YSize, HandleBuf);
}
int  __stdcall dx_BltBackScreenToWindow( HWND  Window, int  ClientX, int  ClientY)
{
	return BltBackScreenToWindow( Window, ClientX, ClientY);
}
int  __stdcall dx_BltRectBackScreenToWindow( HWND  Window, RECT  BackScreenRect, RECT  WindowClientRect)
{
	return BltRectBackScreenToWindow( Window, BackScreenRect, WindowClientRect);
}
int  __stdcall dx_SetScreenFlipTargetWindow( HWND  TargetWindow)
{
	return SetScreenFlipTargetWindow( TargetWindow);
}
int  __stdcall dx_SetMultiThreadFlag( int  Flag)
{
	return SetMultiThreadFlag( Flag);
}
int  __stdcall dx_SetUseDirectDrawDeviceIndex( int  Index)
{
	return SetUseDirectDrawDeviceIndex( Index);
}
int  __stdcall dx_SetAeroDisableFlag( int  Flag)
{
	return SetAeroDisableFlag( Flag);
}
int  __stdcall dx_SetUseDirect3D9Ex( int  Flag)
{
	return SetUseDirect3D9Ex( Flag);
}
int  __stdcall dx_SetUseDirect3D11( int  Flag)
{
	return SetUseDirect3D11( Flag);
}
int  __stdcall dx_SetUseDirect3D11MinFeatureLevel( int  Level)
{
	return SetUseDirect3D11MinFeatureLevel( Level);
}
int  __stdcall dx_SetUseDirect3DVersion( int  Version)
{
	return SetUseDirect3DVersion( Version);
}
int  __stdcall dx_GetUseDirect3DVersion( void)
{
	return GetUseDirect3DVersion( );
}
int  __stdcall dx_GetUseDirect3D11FeatureLevel( void)
{
	return GetUseDirect3D11FeatureLevel( );
}
int  __stdcall dx_SetUseDirectDrawFlag( int  Flag)
{
	return SetUseDirectDrawFlag( Flag);
}
int  __stdcall dx_SetUseGDIFlag( int  Flag)
{
	return SetUseGDIFlag( Flag);
}
int  __stdcall dx_GetUseGDIFlag( void)
{
	return GetUseGDIFlag( );
}
int __stdcall dx_SetDDrawUseGuid( const GUID * Guid ) 
{
	return SetDDrawUseGuid( Guid  ) ;
}
const void * __stdcall dx_GetUseDDrawObj( void )
{
	return GetUseDDrawObj(  ) ;
}
const GUID * __stdcall dx_GetDirectDrawDeviceGUID( int Number ) 
{
	return GetDirectDrawDeviceGUID( Number  ) ;
}
int  __stdcall dx_GetDirectDrawDeviceDescription( int  Number, char *  StringBuffer)
{
	return GetDirectDrawDeviceDescription( Number, StringBuffer);
}
int  __stdcall dx_GetDirectDrawDeviceNum( void)
{
	return GetDirectDrawDeviceNum( );
}
const void * __stdcall dx_GetUseDirect3DDevice9( void)
{
	return GetUseDirect3DDevice9( );
}
const void * __stdcall dx_GetUseDirect3D9BackBufferSurface( void)
{
	return GetUseDirect3D9BackBufferSurface( );
}
const void * __stdcall dx_GetUseDirect3D11Device( void)
{
	return GetUseDirect3D11Device( );
}
const void * __stdcall dx_GetUseDirect3D11DeviceContext( void)
{
	return GetUseDirect3D11DeviceContext( );
}
const void * __stdcall dx_GetUseDirect3D11BackBufferTexture2D( void)
{
	return GetUseDirect3D11BackBufferTexture2D( );
}
const void * __stdcall dx_GetUseDirect3D11DepthStencilTexture2D( void)
{
	return GetUseDirect3D11DepthStencilTexture2D( );
}
int  __stdcall dx_RefreshDxLibDirect3DSetting( void)
{
	return RefreshDxLibDirect3DSetting( );
}
int  __stdcall dx_ColorKaiseki( const void * PixelData, COLORDATA *  ColorData)
{
	return ColorKaiseki( PixelData, ColorData);
}
int __stdcall dx_BmpBltToMask( HBITMAP Bmp , int BmpPointX , int BmpPointY , int MaskHandle ) 
{
	return BmpBltToMask( Bmp , BmpPointX , BmpPointY , MaskHandle  ) ;
}
HANDLE  __stdcall dx_AddFontFile( const char * FontFilePath)
{
	return AddFontFile( FontFilePath);
}
HANDLE  __stdcall dx_AddFontFileFromMem( const void * FontFileImage, int  FontFileImageSize)
{
	return AddFontFileFromMem( FontFileImage, FontFileImageSize);
}
int  __stdcall dx_RemoveFontFile( HANDLE  FontHandle)
{
	return RemoveFontFile( FontHandle);
}
int  __stdcall dx_CreateFontDataFile( const char * SaveFilePath, const char * FontName, int  Size, int  BitDepth, int  Thick, int  Italic, int  CharSet, const char * SaveCharaList)
{
	return CreateFontDataFile( SaveFilePath, FontName, Size, BitDepth, Thick, Italic, CharSet, SaveCharaList);
}
HBITMAP __stdcall dx_CreateDIBGraph( const TCHAR * FileName , int ReverseFlag , COLORDATA * SrcColor ) 
{
	return CreateDIBGraph( FileName , ReverseFlag , SrcColor  ) ;
}
HBITMAP __stdcall dx_CreateDIBGraphToMem( const BITMAPINFO * BmpInfo , const void * GraphData , int ReverseFlag , COLORDATA * SrcColor ) 
{
	return CreateDIBGraphToMem( BmpInfo , GraphData , ReverseFlag , SrcColor  ) ;
}
int __stdcall dx_CreateDIBGraph_plus_Alpha( const TCHAR * FileName , HBITMAP * RGBBmp , HBITMAP * AlphaBmp , int ReverseFlag , COLORDATA * SrcColor ) 
{
	return CreateDIBGraph_plus_Alpha( FileName , RGBBmp , AlphaBmp , ReverseFlag , SrcColor  ) ;
}
HBITMAP __stdcall dx_CreateDIBGraphVer2( const TCHAR * FileName , const void * MemImage , int MemImageSize , int ImageType , int ReverseFlag , COLORDATA * SrcColor ) 
{
	return CreateDIBGraphVer2( FileName , MemImage , MemImageSize , ImageType , ReverseFlag , SrcColor  ) ;
}
int __stdcall dx_CreateDIBGraphVer2_plus_Alpha( const TCHAR * FileName , const void * MemImage , int MemImageSize , const void * AlphaImage , int AlphaImageSize , int ImageType , HBITMAP * RGBBmp , HBITMAP * AlphaBmp , int ReverseFlag , COLORDATA * SrcColor ) 
{
	return CreateDIBGraphVer2_plus_Alpha( FileName , MemImage , MemImageSize , AlphaImage , AlphaImageSize , ImageType , RGBBmp , AlphaBmp , ReverseFlag , SrcColor  ) ;
}
int __stdcall dx_ConvBitmapToGraphImage( const BITMAPINFO * BmpInfo , void * GraphData , BASEIMAGE * GraphImage , int CopyFlag ) 
{
	return ConvBitmapToGraphImage( BmpInfo , GraphData , GraphImage , CopyFlag  ) ;
}
int __stdcall dx_ConvGraphImageToBitmap( const BASEIMAGE * GraphImage , BITMAPINFO * BmpInfo , void * * GraphData , int CopyFlag , int FullColorConv ) 
{
	return ConvGraphImageToBitmap( GraphImage , BmpInfo , GraphData , CopyFlag , FullColorConv  ) ;
}
int __stdcall dx_UpdateLayerdWindowForBaseImage( const BASEIMAGE * BaseImage ) 
{
	return UpdateLayerdWindowForBaseImage( BaseImage  ) ;
}
int __stdcall dx_UpdateLayerdWindowForBaseImageRect( const BASEIMAGE * BaseImage , int x1 , int y1 , int x2 , int y2 ) 
{
	return UpdateLayerdWindowForBaseImageRect( BaseImage , x1 , y1 , x2 , y2  ) ;
}
int __stdcall dx_UpdateLayerdWindowForPremultipliedAlphaBaseImage( const BASEIMAGE * BaseImage ) 
{
	return UpdateLayerdWindowForPremultipliedAlphaBaseImage( BaseImage  ) ;
}
int __stdcall dx_UpdateLayerdWindowForPremultipliedAlphaBaseImageRect( const BASEIMAGE * BaseImage , int x1 , int y1 , int x2 , int y2 ) 
{
	return UpdateLayerdWindowForPremultipliedAlphaBaseImageRect( BaseImage , x1 , y1 , x2 , y2  ) ;
}
int  __stdcall dx_UpdateLayerdWindowForSoftImage( int  SIHandle)
{
	return UpdateLayerdWindowForSoftImage( SIHandle);
}
int  __stdcall dx_UpdateLayerdWindowForSoftImageRect( int  SIHandle, int  x1, int  y1, int  x2, int  y2)
{
	return UpdateLayerdWindowForSoftImageRect( SIHandle, x1, y1, x2, y2);
}
int  __stdcall dx_UpdateLayerdWindowForPremultipliedAlphaSoftImage( int  SIHandle)
{
	return UpdateLayerdWindowForPremultipliedAlphaSoftImage( SIHandle);
}
int  __stdcall dx_UpdateLayerdWindowForPremultipliedAlphaSoftImageRect( int  SIHandle, int  x1, int  y1, int  x2, int  y2)
{
	return UpdateLayerdWindowForPremultipliedAlphaSoftImageRect( SIHandle, x1, y1, x2, y2);
}
int  __stdcall dx_LoadSoundMemByResource( const char * ResourceName, const char * ResourceType, int  BufferNum)
{
	return LoadSoundMemByResource( ResourceName, ResourceType, BufferNum);
}
int  __stdcall dx_SetUseSoftwareMixingSoundFlag( int  Flag)
{
	return SetUseSoftwareMixingSoundFlag( Flag);
}
int  __stdcall dx_SetEnableXAudioFlag( int  Flag)
{
	return SetEnableXAudioFlag( Flag);
}
const void * __stdcall dx_GetDSoundObj( void)
{
	return GetDSoundObj( );
}
int  __stdcall dx_LoadMusicMemByResource( const char * ResourceName, const char * ResourceType)
{
	return LoadMusicMemByResource( ResourceName, ResourceType);
}
