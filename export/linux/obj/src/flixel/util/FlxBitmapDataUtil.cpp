#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxBitmapDataUtil
#include <flixel/util/FlxBitmapDataUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_412bf34bd2ca21dd_33_merge,"flixel.util.FlxBitmapDataUtil","merge",0x21db12bd,"flixel.util.FlxBitmapDataUtil.merge","flixel/util/FlxBitmapDataUtil.hx",33,0xf477b24b)
HX_LOCAL_STACK_FRAME(_hx_pos_412bf34bd2ca21dd_154_mergeColorComponent,"flixel.util.FlxBitmapDataUtil","mergeColorComponent",0x5b71b277,"flixel.util.FlxBitmapDataUtil.mergeColorComponent","flixel/util/FlxBitmapDataUtil.hx",154,0xf477b24b)
HX_LOCAL_STACK_FRAME(_hx_pos_412bf34bd2ca21dd_169_compare,"flixel.util.FlxBitmapDataUtil","compare",0x217d53ea,"flixel.util.FlxBitmapDataUtil.compare","flixel/util/FlxBitmapDataUtil.hx",169,0xf477b24b)
HX_LOCAL_STACK_FRAME(_hx_pos_412bf34bd2ca21dd_233_getDiff,"flixel.util.FlxBitmapDataUtil","getDiff",0xb3004700,"flixel.util.FlxBitmapDataUtil.getDiff","flixel/util/FlxBitmapDataUtil.hx",233,0xf477b24b)
HX_LOCAL_STACK_FRAME(_hx_pos_412bf34bd2ca21dd_243_getMemorySize,"flixel.util.FlxBitmapDataUtil","getMemorySize",0x5bc2859d,"flixel.util.FlxBitmapDataUtil.getMemorySize","flixel/util/FlxBitmapDataUtil.hx",243,0xf477b24b)
HX_LOCAL_STACK_FRAME(_hx_pos_412bf34bd2ca21dd_258_replaceColor,"flixel.util.FlxBitmapDataUtil","replaceColor",0xbc41272a,"flixel.util.FlxBitmapDataUtil.replaceColor","flixel/util/FlxBitmapDataUtil.hx",258,0xf477b24b)
HX_LOCAL_STACK_FRAME(_hx_pos_412bf34bd2ca21dd_327_addSpacesAndBorders,"flixel.util.FlxBitmapDataUtil","addSpacesAndBorders",0xf8f1a643,"flixel.util.FlxBitmapDataUtil.addSpacesAndBorders","flixel/util/FlxBitmapDataUtil.hx",327,0xf477b24b)
HX_LOCAL_STACK_FRAME(_hx_pos_412bf34bd2ca21dd_408_copyBorderPixels,"flixel.util.FlxBitmapDataUtil","copyBorderPixels",0x739e20a9,"flixel.util.FlxBitmapDataUtil.copyBorderPixels","flixel/util/FlxBitmapDataUtil.hx",408,0xf477b24b)
HX_LOCAL_STACK_FRAME(_hx_pos_412bf34bd2ca21dd_468_generateRotations,"flixel.util.FlxBitmapDataUtil","generateRotations",0xe085af05,"flixel.util.FlxBitmapDataUtil.generateRotations","flixel/util/FlxBitmapDataUtil.hx",468,0xf477b24b)
HX_LOCAL_STACK_FRAME(_hx_pos_412bf34bd2ca21dd_17_boot,"flixel.util.FlxBitmapDataUtil","boot",0x2db7bbcd,"flixel.util.FlxBitmapDataUtil.boot","flixel/util/FlxBitmapDataUtil.hx",17,0xf477b24b)
namespace flixel{
namespace util{

void FlxBitmapDataUtil_obj::__construct() { }

Dynamic FlxBitmapDataUtil_obj::__CreateEmpty() { return new FlxBitmapDataUtil_obj; }

void *FlxBitmapDataUtil_obj::_hx_vtable = 0;

Dynamic FlxBitmapDataUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxBitmapDataUtil_obj > _hx_result = new FlxBitmapDataUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxBitmapDataUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0ce7d88b;
}

 ::flixel::math::FlxMatrix FlxBitmapDataUtil_obj::matrix;

void FlxBitmapDataUtil_obj::merge( ::openfl::display::BitmapData sourceBitmapData, ::openfl::geom::Rectangle sourceRect, ::openfl::display::BitmapData destBitmapData, ::openfl::geom::Point destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
            	HX_STACKFRAME(&_hx_pos_412bf34bd2ca21dd_33_merge)
            	HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
            	HX_STACK_ARG(sourceRect,"sourceRect")
            	HX_STACK_ARG(destBitmapData,"destBitmapData")
            	HX_STACK_ARG(destPoint,"destPoint")
            	HX_STACK_ARG(redMultiplier,"redMultiplier")
            	HX_STACK_ARG(greenMultiplier,"greenMultiplier")
            	HX_STACK_ARG(blueMultiplier,"blueMultiplier")
            	HX_STACK_ARG(alphaMultiplier,"alphaMultiplier")
HXLINE(  33)
HXLINE(  37)		bool _hx_tmp;
HXDLIN(  37)		bool _hx_tmp1;
HXDLIN(  37)		bool _hx_tmp2;
HXDLIN(  37)		bool _hx_tmp3;
HXDLIN(  37)		bool _hx_tmp4;
HXDLIN(  37)		if (!((destPoint->x >= destBitmapData->width))) {
HXLINE(  37)			_hx_tmp4 = (destPoint->y >= destBitmapData->height);
            		}
            		else {
HXLINE(  37)			_hx_tmp4 = true;
            		}
HXDLIN(  37)		if (!(_hx_tmp4)) {
HXLINE(  37)			_hx_tmp3 = (sourceRect->x >= sourceBitmapData->width);
            		}
            		else {
HXLINE(  37)			_hx_tmp3 = true;
            		}
HXDLIN(  37)		if (!(_hx_tmp3)) {
HXLINE(  37)			_hx_tmp2 = (sourceRect->y >= sourceBitmapData->height);
            		}
            		else {
HXLINE(  37)			_hx_tmp2 = true;
            		}
HXDLIN(  37)		if (!(_hx_tmp2)) {
HXLINE(  37)			_hx_tmp1 = ((sourceRect->x + sourceRect->width) <= 0);
            		}
            		else {
HXLINE(  37)			_hx_tmp1 = true;
            		}
HXDLIN(  37)		if (!(_hx_tmp1)) {
HXLINE(  37)			_hx_tmp = ((sourceRect->y + sourceRect->height) <= 0);
            		}
            		else {
HXLINE(  37)			_hx_tmp = true;
            		}
HXDLIN(  37)		if (_hx_tmp) {
HXLINE(  44)			return;
            		}
HXLINE(  48)		while(true){
HXLINE(  48)			bool _hx_tmp;
HXDLIN(  48)			bool _hx_tmp1;
HXDLIN(  48)			bool _hx_tmp2;
HXDLIN(  48)			bool _hx_tmp3;
HXDLIN(  48)			bool _hx_tmp4;
HXDLIN(  48)			if (!(((sourceRect->x + sourceRect->width) > sourceBitmapData->width))) {
HXLINE(  48)				_hx_tmp4 = ((sourceRect->y + sourceRect->height) > sourceBitmapData->height);
            			}
            			else {
HXLINE(  48)				_hx_tmp4 = true;
            			}
HXDLIN(  48)			if (!(_hx_tmp4)) {
HXLINE(  48)				_hx_tmp3 = (sourceRect->x < 0);
            			}
            			else {
HXLINE(  48)				_hx_tmp3 = true;
            			}
HXDLIN(  48)			if (!(_hx_tmp3)) {
HXLINE(  48)				_hx_tmp2 = (sourceRect->y < 0);
            			}
            			else {
HXLINE(  48)				_hx_tmp2 = true;
            			}
HXDLIN(  48)			if (!(_hx_tmp2)) {
HXLINE(  48)				_hx_tmp1 = (destPoint->x < 0);
            			}
            			else {
HXLINE(  48)				_hx_tmp1 = true;
            			}
HXDLIN(  48)			if (!(_hx_tmp1)) {
HXLINE(  48)				_hx_tmp = (destPoint->y < 0);
            			}
            			else {
HXLINE(  48)				_hx_tmp = true;
            			}
HXDLIN(  48)			if (!(_hx_tmp)) {
HXLINE(  48)				goto _hx_goto_0;
            			}
HXLINE(  55)			if (((sourceRect->x + sourceRect->width) > sourceBitmapData->width)) {
HXLINE(  56)				sourceRect->width = (( (Float)(sourceBitmapData->width) ) - sourceRect->x);
            			}
HXLINE(  57)			if (((sourceRect->y + sourceRect->height) > sourceBitmapData->height)) {
HXLINE(  58)				sourceRect->height = (( (Float)(sourceBitmapData->height) ) - sourceRect->y);
            			}
HXLINE(  60)			if ((sourceRect->x < 0)) {
HXLINE(  62)				destPoint->x = (destPoint->x - sourceRect->x);
HXLINE(  63)				sourceRect->width = (sourceRect->width + sourceRect->x);
HXLINE(  64)				sourceRect->x = ( (Float)(0) );
            			}
HXLINE(  67)			if ((sourceRect->y < 0)) {
HXLINE(  69)				destPoint->y = (destPoint->y - sourceRect->y);
HXLINE(  70)				sourceRect->height = (sourceRect->height + sourceRect->y);
HXLINE(  71)				sourceRect->y = ( (Float)(0) );
            			}
HXLINE(  74)			bool _hx_tmp5;
HXDLIN(  74)			if (!((destPoint->x >= destBitmapData->width))) {
HXLINE(  74)				_hx_tmp5 = (destPoint->y >= destBitmapData->height);
            			}
            			else {
HXLINE(  74)				_hx_tmp5 = true;
            			}
HXDLIN(  74)			if (_hx_tmp5) {
HXLINE(  75)				return;
            			}
HXLINE(  77)			if ((destPoint->x < 0)) {
HXLINE(  79)				sourceRect->x = (sourceRect->x - destPoint->x);
HXLINE(  80)				sourceRect->width = (sourceRect->width + destPoint->x);
HXLINE(  81)				destPoint->x = ( (Float)(0) );
            			}
HXLINE(  84)			if ((destPoint->y < 0)) {
HXLINE(  86)				sourceRect->y = (sourceRect->y - destPoint->y);
HXLINE(  87)				sourceRect->height = (sourceRect->height + destPoint->y);
HXLINE(  88)				destPoint->y = ( (Float)(0) );
            			}
            		}
            		_hx_goto_0:;
HXLINE(  92)		bool _hx_tmp5;
HXDLIN(  92)		if (!((sourceRect->width <= 0))) {
HXLINE(  92)			_hx_tmp5 = (sourceRect->height <= 0);
            		}
            		else {
HXLINE(  92)			_hx_tmp5 = true;
            		}
HXDLIN(  92)		if (_hx_tmp5) {
HXLINE(  93)			return;
            		}
HXLINE(  95)		HX_VARI( int,startSourceX) = ::Math_obj::round(sourceRect->x);
HXLINE(  96)		HX_VARI( int,startSourceY) = ::Math_obj::round(sourceRect->y);
HXLINE(  98)		HX_VARI( int,width) = ::Math_obj::round(sourceRect->width);
HXLINE(  99)		HX_VARI( int,height) = ::Math_obj::round(sourceRect->height);
HXLINE( 101)		HX_VARI( int,sourceX) = startSourceX;
HXLINE( 102)		HX_VARI( int,sourceY) = startSourceY;
HXLINE( 104)		HX_VARI( int,destX) = ::Math_obj::round(destPoint->x);
HXLINE( 105)		HX_VARI( int,destY) = ::Math_obj::round(destPoint->y);
HXLINE( 107)		HX_VARI( int,currX) = destX;
HXLINE( 108)		HX_VARI( int,currY) = destY;
HXLINE( 110)		HX_VAR( int,sourceColor);
HXLINE( 111)		HX_VAR( int,destColor);
HXLINE( 113)		HX_VAR( int,resultRed);
HXLINE( 114)		HX_VAR( int,resultGreen);
HXLINE( 115)		HX_VAR( int,resultBlue);
HXLINE( 116)		HX_VAR( int,resultAlpha);
HXLINE( 118)		HX_VARI( int,resultColor) = 0;
HXLINE( 119)		destBitmapData->lock();
HXLINE( 122)		{
HXLINE( 122)			int _g = 0;
HXDLIN( 122)			int _g1 = width;
HXDLIN( 122)			while((_g < _g1)){
HXLINE( 122)				_g = (_g + 1);
HXDLIN( 122)				HX_VARI( int,i) = (_g - 1);
HXLINE( 124)				{
HXLINE( 124)					int _g1 = 0;
HXDLIN( 124)					int _g2 = height;
HXDLIN( 124)					while((_g1 < _g2)){
HXLINE( 124)						_g1 = (_g1 + 1);
HXDLIN( 124)						HX_VARI( int,j) = (_g1 - 1);
HXLINE( 126)						sourceX = (startSourceX + i);
HXLINE( 127)						sourceY = (startSourceY + j);
HXLINE( 129)						currX = (destX + i);
HXLINE( 130)						currY = (destY + j);
HXLINE( 132)						sourceColor = sourceBitmapData->getPixel32(sourceX,sourceY);
HXLINE( 133)						destColor = destBitmapData->getPixel32(currX,currY);
HXLINE( 136)						resultRed = ::Std_obj::_hx_int((( (Float)(((((sourceColor >> 16) & 255) * redMultiplier) + (((destColor >> 16) & 255) * (256 - redMultiplier)))) ) / ( (Float)(256) )));
HXLINE( 137)						resultGreen = ::Std_obj::_hx_int((( (Float)(((((sourceColor >> 8) & 255) * greenMultiplier) + (((destColor >> 8) & 255) * (256 - greenMultiplier)))) ) / ( (Float)(256) )));
HXLINE( 138)						resultBlue = ::Std_obj::_hx_int((( (Float)((((sourceColor & 255) * blueMultiplier) + ((destColor & 255) * (256 - blueMultiplier)))) ) / ( (Float)(256) )));
HXLINE( 139)						resultAlpha = ::Std_obj::_hx_int((( (Float)(((((sourceColor >> 24) & 255) * alphaMultiplier) + (((destColor >> 24) & 255) * (256 - alphaMultiplier)))) ) / ( (Float)(256) )));
HXLINE( 142)						int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN( 142)						{
HXLINE( 142)							color = (color & -16711681);
HXDLIN( 142)							int color1;
HXDLIN( 142)							if ((resultRed > 255)) {
HXLINE( 142)								color1 = 255;
            							}
            							else {
HXLINE( 142)								if ((resultRed < 0)) {
HXLINE( 142)									color1 = 0;
            								}
            								else {
HXLINE( 142)									color1 = resultRed;
            								}
            							}
HXDLIN( 142)							color = (color | (color1 << 16));
            						}
HXDLIN( 142)						{
HXLINE( 142)							color = (color & -65281);
HXDLIN( 142)							int color2;
HXDLIN( 142)							if ((resultGreen > 255)) {
HXLINE( 142)								color2 = 255;
            							}
            							else {
HXLINE( 142)								if ((resultGreen < 0)) {
HXLINE( 142)									color2 = 0;
            								}
            								else {
HXLINE( 142)									color2 = resultGreen;
            								}
            							}
HXDLIN( 142)							color = (color | (color2 << 8));
            						}
HXDLIN( 142)						{
HXLINE( 142)							color = (color & -256);
HXDLIN( 142)							int color3;
HXDLIN( 142)							if ((resultBlue > 255)) {
HXLINE( 142)								color3 = 255;
            							}
            							else {
HXLINE( 142)								if ((resultBlue < 0)) {
HXLINE( 142)									color3 = 0;
            								}
            								else {
HXLINE( 142)									color3 = resultBlue;
            								}
            							}
HXDLIN( 142)							color = (color | color3);
            						}
HXDLIN( 142)						{
HXLINE( 142)							color = (color & 16777215);
HXDLIN( 142)							int color4;
HXDLIN( 142)							if ((resultAlpha > 255)) {
HXLINE( 142)								color4 = 255;
            							}
            							else {
HXLINE( 142)								if ((resultAlpha < 0)) {
HXLINE( 142)									color4 = 0;
            								}
            								else {
HXLINE( 142)									color4 = resultAlpha;
            								}
            							}
HXDLIN( 142)							color = (color | (color4 << 24));
            						}
HXDLIN( 142)						resultColor = color;
HXLINE( 145)						destBitmapData->setPixel32(currX,currY,resultColor);
            					}
            				}
            			}
            		}
HXLINE( 148)		destBitmapData->unlock(null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxBitmapDataUtil_obj,merge,(void))

int FlxBitmapDataUtil_obj::mergeColorComponent(int source,int dest,int multiplier){
            	HX_STACKFRAME(&_hx_pos_412bf34bd2ca21dd_154_mergeColorComponent)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(dest,"dest")
            	HX_STACK_ARG(multiplier,"multiplier")
HXLINE( 154)
HXDLIN( 154)		return ::Std_obj::_hx_int((( (Float)(((source * multiplier) + (dest * (256 - multiplier)))) ) / ( (Float)(256) )));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxBitmapDataUtil_obj,mergeColorComponent,return )

 ::Dynamic FlxBitmapDataUtil_obj::compare( ::openfl::display::BitmapData Bitmap1, ::openfl::display::BitmapData Bitmap2){
            	HX_GC_STACKFRAME(&_hx_pos_412bf34bd2ca21dd_169_compare)
            	HX_STACK_ARG(Bitmap1,"Bitmap1")
            	HX_STACK_ARG(Bitmap2,"Bitmap2")
HXLINE( 169)
HXLINE( 173)		if (::hx::IsInstanceEq( Bitmap1,Bitmap2 )) {
HXLINE( 175)			return 0;
            		}
HXLINE( 177)		if ((Bitmap1->width != Bitmap2->width)) {
HXLINE( 179)			return -3;
            		}
            		else {
HXLINE( 181)			if ((Bitmap1->height != Bitmap2->height)) {
HXLINE( 183)				return -4;
            			}
            			else {
HXLINE( 187)				HX_VARI( int,width) = Bitmap1->width;
HXLINE( 188)				HX_VARI( int,height) = Bitmap1->height;
HXLINE( 189)				HX_VARI(  ::openfl::display::BitmapData,result) =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,width,height,true,0);
HXLINE( 190)				HX_VARI( bool,identical) = true;
HXLINE( 192)				{
HXLINE( 192)					int _g = 0;
HXDLIN( 192)					int _g1 = width;
HXDLIN( 192)					while((_g < _g1)){
HXLINE( 192)						_g = (_g + 1);
HXDLIN( 192)						HX_VARI( int,i) = (_g - 1);
HXLINE( 194)						{
HXLINE( 194)							int _g1 = 0;
HXDLIN( 194)							int _g2 = height;
HXDLIN( 194)							while((_g1 < _g2)){
HXLINE( 194)								_g1 = (_g1 + 1);
HXDLIN( 194)								HX_VARI( int,j) = (_g1 - 1);
HXLINE( 196)								HX_VARI( int,pixel1) = Bitmap1->getPixel32(i,j);
HXLINE( 197)								HX_VARI( int,pixel2) = Bitmap2->getPixel32(i,j);
HXLINE( 199)								if ((pixel1 != pixel2)) {
HXLINE( 201)									identical = false;
HXLINE( 203)									if (((pixel1 & 16777215) != (pixel2 & 16777215))) {
HXLINE( 206)										int diff = (((pixel1 >> 16) & 255) - ((pixel2 >> 16) & 255));
HXDLIN( 206)										int Red;
HXDLIN( 206)										if ((diff >= 0)) {
HXLINE( 206)											Red = diff;
            										}
            										else {
HXLINE( 206)											Red = (256 + diff);
            										}
HXDLIN( 206)										int diff1 = (((pixel1 >> 8) & 255) - ((pixel2 >> 8) & 255));
HXDLIN( 206)										int Green;
HXDLIN( 206)										if ((diff1 >= 0)) {
HXLINE( 206)											Green = diff1;
            										}
            										else {
HXLINE( 206)											Green = (256 + diff1);
            										}
HXDLIN( 206)										int diff2 = ((pixel1 & 255) - (pixel2 & 255));
HXDLIN( 206)										int Blue;
HXDLIN( 206)										if ((diff2 >= 0)) {
HXLINE( 206)											Blue = diff2;
            										}
            										else {
HXLINE( 206)											Blue = (256 + diff2);
            										}
HXDLIN( 206)										int Alpha = 255;
HXDLIN( 206)										int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN( 206)										{
HXLINE( 206)											color = (color & -16711681);
HXDLIN( 206)											int color1;
HXDLIN( 206)											if ((Red > 255)) {
HXLINE( 206)												color1 = 255;
            											}
            											else {
HXLINE( 206)												if ((Red < 0)) {
HXLINE( 206)													color1 = 0;
            												}
            												else {
HXLINE( 206)													color1 = Red;
            												}
            											}
HXDLIN( 206)											color = (color | (color1 << 16));
            										}
HXDLIN( 206)										{
HXLINE( 206)											color = (color & -65281);
HXDLIN( 206)											int color2;
HXDLIN( 206)											if ((Green > 255)) {
HXLINE( 206)												color2 = 255;
            											}
            											else {
HXLINE( 206)												if ((Green < 0)) {
HXLINE( 206)													color2 = 0;
            												}
            												else {
HXLINE( 206)													color2 = Green;
            												}
            											}
HXDLIN( 206)											color = (color | (color2 << 8));
            										}
HXDLIN( 206)										{
HXLINE( 206)											color = (color & -256);
HXDLIN( 206)											int color3;
HXDLIN( 206)											if ((Blue > 255)) {
HXLINE( 206)												color3 = 255;
            											}
            											else {
HXLINE( 206)												if ((Blue < 0)) {
HXLINE( 206)													color3 = 0;
            												}
            												else {
HXLINE( 206)													color3 = Blue;
            												}
            											}
HXDLIN( 206)											color = (color | color3);
            										}
HXDLIN( 206)										{
HXLINE( 206)											color = (color & 16777215);
HXDLIN( 206)											int color4;
HXDLIN( 206)											if ((Alpha > 255)) {
HXLINE( 206)												color4 = 255;
            											}
            											else {
HXLINE( 206)												if ((Alpha < 0)) {
HXLINE( 206)													color4 = 0;
            												}
            												else {
HXLINE( 206)													color4 = Alpha;
            												}
            											}
HXDLIN( 206)											color = (color | (color4 << 24));
            										}
HXLINE( 205)										result->setPixel32(i,j,color);
            									}
            									else {
HXLINE( 210)										HX_VARI( int,alpha1) = ((pixel1 >> 24) & 255);
HXLINE( 211)										HX_VARI( int,alpha2) = ((pixel2 >> 24) & 255);
HXLINE( 213)										if ((alpha1 != alpha2)) {
HXLINE( 215)											int diff = (alpha1 - alpha2);
HXDLIN( 215)											int Alpha;
HXDLIN( 215)											if ((diff >= 0)) {
HXLINE( 215)												Alpha = diff;
            											}
            											else {
HXLINE( 215)												Alpha = (256 + diff);
            											}
HXDLIN( 215)											int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN( 215)											{
HXLINE( 215)												color = (color & -16711681);
HXDLIN( 215)												color = (color | 16711680);
            											}
HXDLIN( 215)											{
HXLINE( 215)												color = (color & -65281);
HXDLIN( 215)												color = (color | 65280);
            											}
HXDLIN( 215)											{
HXLINE( 215)												color = (color & -256);
HXDLIN( 215)												color = (color | 255);
            											}
HXDLIN( 215)											{
HXLINE( 215)												color = (color & 16777215);
HXDLIN( 215)												int color1;
HXDLIN( 215)												if ((Alpha > 255)) {
HXLINE( 215)													color1 = 255;
            												}
            												else {
HXLINE( 215)													if ((Alpha < 0)) {
HXLINE( 215)														color1 = 0;
            													}
            													else {
HXLINE( 215)														color1 = Alpha;
            													}
            												}
HXDLIN( 215)												color = (color | (color1 << 24));
            											}
HXDLIN( 215)											result->setPixel32(i,j,color);
            										}
            									}
            								}
            							}
            						}
            					}
            				}
HXLINE( 222)				if (!(identical)) {
HXLINE( 224)					return result;
            				}
            			}
            		}
HXLINE( 228)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxBitmapDataUtil_obj,compare,return )

int FlxBitmapDataUtil_obj::getDiff(int value1,int value2){
            	HX_STACKFRAME(&_hx_pos_412bf34bd2ca21dd_233_getDiff)
            	HX_STACK_ARG(value1,"value1")
            	HX_STACK_ARG(value2,"value2")
HXLINE( 233)
HXLINE( 234)		HX_VARI( int,diff) = (value1 - value2);
HXLINE( 235)		if ((diff >= 0)) {
HXLINE( 235)			return diff;
            		}
            		else {
HXLINE( 235)			return (256 + diff);
            		}
HXDLIN( 235)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxBitmapDataUtil_obj,getDiff,return )

Float FlxBitmapDataUtil_obj::getMemorySize( ::openfl::display::BitmapData bitmapData){
            	HX_STACKFRAME(&_hx_pos_412bf34bd2ca21dd_243_getMemorySize)
            	HX_STACK_ARG(bitmapData,"bitmapData")
HXLINE( 243)
HXDLIN( 243)		return ( (Float)(((bitmapData->width * bitmapData->height) * 4)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapDataUtil_obj,getMemorySize,return )

::Array< ::Dynamic> FlxBitmapDataUtil_obj::replaceColor( ::openfl::display::BitmapData bitmapData,int color,int newColor,::hx::Null< bool >  __o_fetchPositions, ::flixel::math::FlxRect rect){
            		bool fetchPositions = __o_fetchPositions.Default(false);
            	HX_STACKFRAME(&_hx_pos_412bf34bd2ca21dd_258_replaceColor)
            	HX_STACK_ARG(bitmapData,"bitmapData")
            	HX_STACK_ARG(color,"color")
            	HX_STACK_ARG(newColor,"newColor")
            	HX_STACK_ARG(fetchPositions,"fetchPositions")
            	HX_STACK_ARG(rect,"rect")
HXLINE( 258)
HXLINE( 259)		HX_VARI( ::Array< ::Dynamic>,positions) = null();
HXLINE( 260)		if (fetchPositions) {
HXLINE( 262)			positions = ::Array_obj< ::Dynamic>::__new();
            		}
HXLINE( 265)		HX_VARI( int,startX) = 0;
HXLINE( 266)		HX_VARI( int,startY) = 0;
HXLINE( 267)		HX_VARI( int,columns) = bitmapData->width;
HXLINE( 268)		HX_VARI( int,rows) = bitmapData->height;
HXLINE( 270)		if (::hx::IsNotNull( rect )) {
HXLINE( 272)			startX = ::Std_obj::_hx_int(rect->x);
HXLINE( 273)			startY = ::Std_obj::_hx_int(rect->y);
HXLINE( 274)			columns = ::Std_obj::_hx_int(rect->width);
HXLINE( 275)			rows = ::Std_obj::_hx_int(rect->height);
            		}
HXLINE( 278)		columns = ::Std_obj::_hx_int(::Math_obj::max(( (Float)(columns) ),( (Float)(bitmapData->width) )));
HXLINE( 279)		rows = ::Std_obj::_hx_int(::Math_obj::max(( (Float)(rows) ),( (Float)(bitmapData->height) )));
HXLINE( 281)		HX_VARI( int,row) = 0;
HXLINE( 282)		HX_VARI( int,column) = 0;
HXLINE( 283)		HX_VAR( int,x);
HXDLIN( 283)		HX_VAR( int,y);
HXLINE( 285)		HX_VARI( bool,changed) = false;
HXLINE( 286)		bitmapData->lock();
HXLINE( 287)		while((row < rows)){
HXLINE( 289)			column = 0;
HXLINE( 290)			while((column < columns)){
HXLINE( 292)				x = (startX + column);
HXLINE( 293)				y = (startY + row);
HXLINE( 294)				if ((bitmapData->getPixel32(x,y) == color)) {
HXLINE( 296)					bitmapData->setPixel32(x,y,newColor);
HXLINE( 297)					changed = true;
HXLINE( 298)					if (fetchPositions) {
HXLINE( 300)						 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(x,y);
HXDLIN( 300)						point->_inPool = false;
HXDLIN( 300)						positions->push(point);
            					}
            				}
HXLINE( 303)				column = (column + 1);
            			}
HXLINE( 305)			row = (row + 1);
            		}
HXLINE( 307)		bitmapData->unlock(null());
HXLINE( 309)		bool _hx_tmp;
HXDLIN( 309)		if (changed) {
HXLINE( 309)			_hx_tmp = ::hx::IsNull( positions );
            		}
            		else {
HXLINE( 309)			_hx_tmp = false;
            		}
HXDLIN( 309)		if (_hx_tmp) {
HXLINE( 311)			positions = ::Array_obj< ::Dynamic>::__new();
            		}
HXLINE( 314)		return positions;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxBitmapDataUtil_obj,replaceColor,return )

 ::openfl::display::BitmapData FlxBitmapDataUtil_obj::addSpacesAndBorders( ::openfl::display::BitmapData bitmapData, ::flixel::math::FlxPoint frameSize, ::flixel::math::FlxPoint spacing, ::flixel::math::FlxPoint border, ::flixel::math::FlxRect region){
            	HX_GC_STACKFRAME(&_hx_pos_412bf34bd2ca21dd_327_addSpacesAndBorders)
            	HX_STACK_ARG(bitmapData,"bitmapData")
            	HX_STACK_ARG(frameSize,"frameSize")
            	HX_STACK_ARG(spacing,"spacing")
            	HX_STACK_ARG(border,"border")
            	HX_STACK_ARG(region,"region")
HXLINE( 327)
HXLINE( 328)		if (::hx::IsNull( region )) {
HXLINE( 330)			Float Width = ( (Float)(bitmapData->width) );
HXDLIN( 330)			Float Height = ( (Float)(bitmapData->height) );
HXDLIN( 330)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 330)			_this->x = ( (Float)(0) );
HXDLIN( 330)			_this->y = ( (Float)(0) );
HXDLIN( 330)			_this->width = Width;
HXDLIN( 330)			_this->height = Height;
HXDLIN( 330)			 ::flixel::math::FlxRect rect = _this;
HXDLIN( 330)			rect->_inPool = false;
HXDLIN( 330)			region = rect;
            		}
HXLINE( 333)		HX_VARI( int,frameWidth) = ::Std_obj::_hx_int(region->width);
HXLINE( 334)		HX_VARI( int,frameHeight) = ::Std_obj::_hx_int(region->height);
HXLINE( 336)		if (::hx::IsNotNull( frameSize )) {
HXLINE( 338)			frameWidth = ::Std_obj::_hx_int(frameSize->x);
HXLINE( 339)			frameHeight = ::Std_obj::_hx_int(frameSize->y);
            		}
HXLINE( 342)		HX_VARI( int,numHorizontalFrames) = ::Std_obj::_hx_int((region->width / ( (Float)(frameWidth) )));
HXLINE( 343)		HX_VARI( int,numVerticalFrames) = ::Std_obj::_hx_int((region->height / ( (Float)(frameHeight) )));
HXLINE( 345)		HX_VARI( int,spaceX) = 0;
HXLINE( 346)		HX_VARI( int,spaceY) = 0;
HXLINE( 348)		if (::hx::IsNotNull( spacing )) {
HXLINE( 350)			spaceX = ::Std_obj::_hx_int(spacing->x);
HXLINE( 351)			spaceY = ::Std_obj::_hx_int(spacing->y);
            		}
HXLINE( 354)		HX_VARI( int,borderX) = 0;
HXLINE( 355)		HX_VARI( int,borderY) = 0;
HXLINE( 357)		if (::hx::IsNotNull( border )) {
HXLINE( 359)			borderX = ::Std_obj::_hx_int(border->x);
HXLINE( 360)			borderY = ::Std_obj::_hx_int(border->y);
            		}
HXLINE( 363)		int result = ::Std_obj::_hx_int(((region->width + ((numHorizontalFrames - 1) * spaceX)) + ((2 * numHorizontalFrames) * borderX)));
HXDLIN( 363)		HX_VARI(  ::openfl::display::BitmapData,result1) =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,result,::Std_obj::_hx_int(((region->height + ((numVerticalFrames - 1) * spaceY)) + ((2 * numVerticalFrames) * borderY))),true,0);
HXLINE( 366)		result1->lock();
HXLINE( 367)		HX_VARI(  ::openfl::geom::Rectangle,tempRect) =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,frameWidth,frameHeight);
HXLINE( 368)		HX_VARI(  ::openfl::geom::Point,tempPoint) =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 371)		{
HXLINE( 371)			int _g = 0;
HXDLIN( 371)			int _g1 = numHorizontalFrames;
HXDLIN( 371)			while((_g < _g1)){
HXLINE( 371)				_g = (_g + 1);
HXDLIN( 371)				HX_VARI( int,i) = (_g - 1);
HXLINE( 373)				tempPoint->x = ( (Float)(((i * ((frameWidth + spaceX) + (2 * borderX))) + borderX)) );
HXLINE( 374)				tempRect->x = ((i * frameWidth) + region->x);
HXLINE( 376)				{
HXLINE( 376)					int _g1 = 0;
HXDLIN( 376)					int _g2 = numVerticalFrames;
HXDLIN( 376)					while((_g1 < _g2)){
HXLINE( 376)						_g1 = (_g1 + 1);
HXDLIN( 376)						HX_VARI( int,j) = (_g1 - 1);
HXLINE( 378)						tempPoint->y = ( (Float)(((j * ((frameHeight + spaceY) + (2 * borderY))) + borderY)) );
HXLINE( 379)						tempRect->y = ((j * frameHeight) + region->y);
HXLINE( 380)						result1->copyPixels(bitmapData,tempRect,tempPoint,null(),null(),null());
            					}
            				}
            			}
            		}
HXLINE( 383)		result1->unlock(null());
HXLINE( 386)		::flixel::util::FlxBitmapDataUtil_obj::copyBorderPixels(result1,frameWidth,frameHeight,spaceX,spaceY,borderX,borderY,numHorizontalFrames,numVerticalFrames);
HXLINE( 387)		return result1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxBitmapDataUtil_obj,addSpacesAndBorders,return )

 ::openfl::display::BitmapData FlxBitmapDataUtil_obj::copyBorderPixels( ::openfl::display::BitmapData bitmapData,int frameWidth,int frameHeight,int spaceX,int spaceY,int borderX,int borderY,int horizontalFrames,int verticalFrames){
            	HX_GC_STACKFRAME(&_hx_pos_412bf34bd2ca21dd_408_copyBorderPixels)
            	HX_STACK_ARG(bitmapData,"bitmapData")
            	HX_STACK_ARG(frameWidth,"frameWidth")
            	HX_STACK_ARG(frameHeight,"frameHeight")
            	HX_STACK_ARG(spaceX,"spaceX")
            	HX_STACK_ARG(spaceY,"spaceY")
            	HX_STACK_ARG(borderX,"borderX")
            	HX_STACK_ARG(borderY,"borderY")
            	HX_STACK_ARG(horizontalFrames,"horizontalFrames")
            	HX_STACK_ARG(verticalFrames,"verticalFrames")
HXLINE( 408)
HXLINE( 410)		HX_VARI(  ::openfl::geom::Rectangle,tempRect) =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,1,bitmapData->height);
HXLINE( 411)		HX_VARI(  ::openfl::geom::Point,tempPoint) =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 412)		bitmapData->lock();
HXLINE( 414)		{
HXLINE( 414)			int _g = 0;
HXDLIN( 414)			int _g1 = horizontalFrames;
HXDLIN( 414)			while((_g < _g1)){
HXLINE( 414)				_g = (_g + 1);
HXDLIN( 414)				HX_VARI( int,i) = (_g - 1);
HXLINE( 416)				tempRect->x = ( (Float)(((i * ((frameWidth + (2 * borderX)) + spaceX)) + borderX)) );
HXLINE( 418)				{
HXLINE( 418)					int _g1 = 0;
HXDLIN( 418)					int _g2 = borderX;
HXDLIN( 418)					while((_g1 < _g2)){
HXLINE( 418)						_g1 = (_g1 + 1);
HXDLIN( 418)						HX_VARI( int,j) = (_g1 - 1);
HXLINE( 420)						tempPoint->x = ((tempRect->x - ( (Float)(j) )) - ( (Float)(1) ));
HXLINE( 421)						bitmapData->copyPixels(bitmapData,tempRect,tempPoint,null(),null(),null());
            					}
            				}
HXLINE( 424)				 ::openfl::geom::Rectangle tempRect1 = tempRect;
HXDLIN( 424)				tempRect1->x = (tempRect1->x + (frameWidth - 1));
HXLINE( 426)				{
HXLINE( 426)					int _g3 = 0;
HXDLIN( 426)					int _g4 = borderX;
HXDLIN( 426)					while((_g3 < _g4)){
HXLINE( 426)						_g3 = (_g3 + 1);
HXDLIN( 426)						HX_VARI( int,j) = (_g3 - 1);
HXLINE( 428)						tempPoint->x = ((tempRect->x + j) + 1);
HXLINE( 429)						bitmapData->copyPixels(bitmapData,tempRect,tempPoint,null(),null(),null());
            					}
            				}
            			}
            		}
HXLINE( 433)		tempPoint->setTo(( (Float)(0) ),( (Float)(0) ));
HXLINE( 434)		tempRect->setTo(( (Float)(0) ),( (Float)(0) ),( (Float)(bitmapData->width) ),( (Float)(1) ));
HXLINE( 435)		{
HXLINE( 435)			int _g2 = 0;
HXDLIN( 435)			int _g3 = verticalFrames;
HXDLIN( 435)			while((_g2 < _g3)){
HXLINE( 435)				_g2 = (_g2 + 1);
HXDLIN( 435)				HX_VARI( int,i) = (_g2 - 1);
HXLINE( 437)				tempRect->y = ( (Float)(((i * ((frameHeight + (2 * borderY)) + spaceY)) + borderY)) );
HXLINE( 439)				{
HXLINE( 439)					int _g = 0;
HXDLIN( 439)					int _g1 = borderY;
HXDLIN( 439)					while((_g < _g1)){
HXLINE( 439)						_g = (_g + 1);
HXDLIN( 439)						HX_VARI( int,j) = (_g - 1);
HXLINE( 441)						tempPoint->y = ((tempRect->y - ( (Float)(j) )) - ( (Float)(1) ));
HXLINE( 442)						bitmapData->copyPixels(bitmapData,tempRect,tempPoint,null(),null(),null());
            					}
            				}
HXLINE( 445)				 ::openfl::geom::Rectangle tempRect1 = tempRect;
HXDLIN( 445)				tempRect1->y = (tempRect1->y + (frameHeight - 1));
HXLINE( 447)				{
HXLINE( 447)					int _g3 = 0;
HXDLIN( 447)					int _g4 = borderY;
HXDLIN( 447)					while((_g3 < _g4)){
HXLINE( 447)						_g3 = (_g3 + 1);
HXDLIN( 447)						HX_VARI( int,j) = (_g3 - 1);
HXLINE( 449)						tempPoint->y = ((tempRect->y + j) + 1);
HXLINE( 450)						bitmapData->copyPixels(bitmapData,tempRect,tempPoint,null(),null(),null());
            					}
            				}
            			}
            		}
HXLINE( 454)		bitmapData->unlock(null());
HXLINE( 455)		return bitmapData;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(FlxBitmapDataUtil_obj,copyBorderPixels,return )

 ::openfl::display::BitmapData FlxBitmapDataUtil_obj::generateRotations( ::openfl::display::BitmapData brush,::hx::Null< int >  __o_rotations,::hx::Null< bool >  __o_antiAliasing,::hx::Null< bool >  __o_autoBuffer){
            		int rotations = __o_rotations.Default(16);
            		bool antiAliasing = __o_antiAliasing.Default(false);
            		bool autoBuffer = __o_autoBuffer.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_412bf34bd2ca21dd_468_generateRotations)
            	HX_STACK_ARG(brush,"brush")
            	HX_STACK_ARG(rotations,"rotations")
            	HX_STACK_ARG(antiAliasing,"antiAliasing")
            	HX_STACK_ARG(autoBuffer,"autoBuffer")
HXLINE( 468)
HXLINE( 469)		HX_VARI( int,brushWidth) = brush->width;
HXLINE( 470)		HX_VARI( int,brushHeight) = brush->height;
HXLINE( 471)		HX_VAR( int,max);
HXDLIN( 471)		if ((brushHeight > brushWidth)) {
HXLINE( 471)			max = brushHeight;
            		}
            		else {
HXLINE( 471)			max = brushWidth;
            		}
HXLINE( 472)		if (autoBuffer) {
HXLINE( 472)			max = ::Std_obj::_hx_int((( (Float)(max) ) * ((Float)1.5)));
            		}
HXLINE( 474)		HX_VARI( int,rows) = ::Std_obj::_hx_int(::Math_obj::sqrt(( (Float)(rotations) )));
HXLINE( 475)		HX_VARI( int,columns) = ::Math_obj::ceil((( (Float)(rotations) ) / ( (Float)(rows) )));
HXLINE( 476)		HX_VARI( Float,bakedRotationAngle) = (( (Float)(360) ) / ( (Float)(rotations) ));
HXLINE( 478)		HX_VARI( int,width) = (max * columns);
HXLINE( 479)		HX_VARI( int,height) = (max * rows);
HXLINE( 481)		HX_VARI(  ::openfl::display::BitmapData,result) =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,width,height,true,0);
HXLINE( 483)		HX_VARI( int,row) = 0;
HXLINE( 484)		HX_VARI( int,column) = 0;
HXLINE( 485)		HX_VARI( Float,bakedAngle) = ( (Float)(0) );
HXLINE( 486)		HX_VARI( int,halfBrushWidth) = ::Std_obj::_hx_int((( (Float)(brushWidth) ) * ((Float)0.5)));
HXLINE( 487)		HX_VARI( int,halfBrushHeight) = ::Std_obj::_hx_int((( (Float)(brushHeight) ) * ((Float)0.5)));
HXLINE( 488)		HX_VARI( int,midpointX) = ::Std_obj::_hx_int((( (Float)(max) ) * ((Float)0.5)));
HXLINE( 489)		HX_VARI( int,midpointY) = ::Std_obj::_hx_int((( (Float)(max) ) * ((Float)0.5)));
HXLINE( 491)		while((row < rows)){
HXLINE( 493)			column = 0;
HXLINE( 494)			while((column < columns)){
HXLINE( 496)				::flixel::util::FlxBitmapDataUtil_obj::matrix->identity();
HXLINE( 497)				::flixel::util::FlxBitmapDataUtil_obj::matrix->translate(( (Float)(-(halfBrushWidth)) ),( (Float)(-(halfBrushHeight)) ));
HXLINE( 498)				::flixel::util::FlxBitmapDataUtil_obj::matrix->rotate((bakedAngle * (::Math_obj::PI / ( (Float)(180) ))));
HXLINE( 499)				::flixel::util::FlxBitmapDataUtil_obj::matrix->translate(( (Float)(((max * column) + midpointX)) ),( (Float)(midpointY) ));
HXLINE( 500)				bakedAngle = (bakedAngle + bakedRotationAngle);
HXLINE( 501)				result->draw(brush,::flixel::util::FlxBitmapDataUtil_obj::matrix,null(),null(),null(),antiAliasing);
HXLINE( 502)				column = (column + 1);
            			}
HXLINE( 504)			midpointY = (midpointY + max);
HXLINE( 505)			row = (row + 1);
            		}
HXLINE( 508)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxBitmapDataUtil_obj,generateRotations,return )


FlxBitmapDataUtil_obj::FlxBitmapDataUtil_obj()
{
}

bool FlxBitmapDataUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"merge") ) { outValue = merge_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { outValue = ( matrix ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { outValue = compare_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getDiff") ) { outValue = getDiff_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"replaceColor") ) { outValue = replaceColor_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getMemorySize") ) { outValue = getMemorySize_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"copyBorderPixels") ) { outValue = copyBorderPixels_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"generateRotations") ) { outValue = generateRotations_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"mergeColorComponent") ) { outValue = mergeColorComponent_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"addSpacesAndBorders") ) { outValue = addSpacesAndBorders_dyn(); return true; }
	}
	return false;
}

bool FlxBitmapDataUtil_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=ioValue.Cast<  ::flixel::math::FlxMatrix >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxBitmapDataUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FlxBitmapDataUtil_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::math::FlxMatrix */ ,(void *) &FlxBitmapDataUtil_obj::matrix,HX_("matrix",41,36,c8,bb)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void FlxBitmapDataUtil_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBitmapDataUtil_obj::matrix,"matrix");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxBitmapDataUtil_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBitmapDataUtil_obj::matrix,"matrix");
};

#endif

::hx::Class FlxBitmapDataUtil_obj::__mClass;

static ::String FlxBitmapDataUtil_obj_sStaticFields[] = {
	HX_("matrix",41,36,c8,bb),
	HX_("merge",b8,a2,c6,05),
	HX_("mergeColorComponent",b2,23,8f,c5),
	HX_("compare",a5,18,69,83),
	HX_("getDiff",bb,0b,ec,14),
	HX_("getMemorySize",98,08,07,4f),
	HX_("replaceColor",8f,5c,eb,3d),
	HX_("addSpacesAndBorders",7e,17,0f,63),
	HX_("copyBorderPixels",8e,6c,7f,76),
	HX_("generateRotations",80,cb,c6,62),
	::String(null())
};

void FlxBitmapDataUtil_obj::__register()
{
	FlxBitmapDataUtil_obj _hx_dummy;
	FlxBitmapDataUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util.FlxBitmapDataUtil",b3,4e,39,e9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxBitmapDataUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxBitmapDataUtil_obj::__SetStatic;
	__mClass->mMarkFunc = FlxBitmapDataUtil_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxBitmapDataUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxBitmapDataUtil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxBitmapDataUtil_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxBitmapDataUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxBitmapDataUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxBitmapDataUtil_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_412bf34bd2ca21dd_17_boot)
HXDLIN(  17)		matrix =  ::flixel::math::FlxMatrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            	}
}

} // end namespace flixel
} // end namespace util
