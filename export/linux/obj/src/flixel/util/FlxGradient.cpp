#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_util_FlxGradient
#include <flixel/util/FlxGradient.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_5278df5c1114b3d6_25_createGradientMatrix,"flixel.util.FlxGradient","createGradientMatrix",0x11545e53,"flixel.util.FlxGradient.createGradientMatrix","flixel/util/FlxGradient.hx",25,0x5a5037d6)
HX_LOCAL_STACK_FRAME(_hx_pos_5278df5c1114b3d6_69_createGradientArray,"flixel.util.FlxGradient","createGradientArray",0xc5836dc7,"flixel.util.FlxGradient.createGradientArray","flixel/util/FlxGradient.hx",69,0x5a5037d6)
HX_LOCAL_STACK_FRAME(_hx_pos_5278df5c1114b3d6_94_createGradientFlxSprite,"flixel.util.FlxGradient","createGradientFlxSprite",0xca14a545,"flixel.util.FlxGradient.createGradientFlxSprite","flixel/util/FlxGradient.hx",94,0x5a5037d6)
HX_LOCAL_STACK_FRAME(_hx_pos_5278df5c1114b3d6_103_createGradientBitmapData,"flixel.util.FlxGradient","createGradientBitmapData",0xa3b74ecb,"flixel.util.FlxGradient.createGradientBitmapData","flixel/util/FlxGradient.hx",103,0x5a5037d6)
HX_LOCAL_STACK_FRAME(_hx_pos_5278df5c1114b3d6_169_overlayGradientOnFlxSprite,"flixel.util.FlxGradient","overlayGradientOnFlxSprite",0xe400659e,"flixel.util.FlxGradient.overlayGradientOnFlxSprite","flixel/util/FlxGradient.hx",169,0x5a5037d6)
HX_LOCAL_STACK_FRAME(_hx_pos_5278df5c1114b3d6_203_overlayGradientOnBitmapData,"flixel.util.FlxGradient","overlayGradientOnBitmapData",0x3813dc52,"flixel.util.FlxGradient.overlayGradientOnBitmapData","flixel/util/FlxGradient.hx",203,0x5a5037d6)
namespace flixel{
namespace util{

void FlxGradient_obj::__construct() { }

Dynamic FlxGradient_obj::__CreateEmpty() { return new FlxGradient_obj; }

void *FlxGradient_obj::_hx_vtable = 0;

Dynamic FlxGradient_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxGradient_obj > _hx_result = new FlxGradient_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxGradient_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x27df7a04;
}

 ::Dynamic FlxGradient_obj::createGradientMatrix(int width,int height,::Array< int > colors,::hx::Null< int >  __o_chunkSize,::hx::Null< int >  __o_rotation){
            		int chunkSize = __o_chunkSize.Default(1);
            		int rotation = __o_rotation.Default(90);
            	HX_GC_STACKFRAME(&_hx_pos_5278df5c1114b3d6_25_createGradientMatrix)
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	HX_STACK_ARG(colors,"colors")
            	HX_STACK_ARG(chunkSize,"chunkSize")
            	HX_STACK_ARG(rotation,"rotation")
HXLINE(  25)
HXLINE(  26)		HX_VARI(  ::openfl::geom::Matrix,gradientMatrix) =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE(  29)		HX_VARI( Float,rot) = (( (Float)(rotation) ) * (::Math_obj::PI / ( (Float)(180) )));
HXLINE(  32)		int _hx_int = height;
HXDLIN(  32)		Float _hx_tmp;
HXDLIN(  32)		if ((_hx_int < 0)) {
HXLINE(  32)			_hx_tmp = (((Float)4294967296.0) + _hx_int);
            		}
            		else {
HXLINE(  32)			_hx_tmp = (_hx_int + ((Float)0.0));
            		}
HXDLIN(  32)		int int1 = chunkSize;
HXDLIN(  32)		Float _hx_tmp1;
HXDLIN(  32)		if ((int1 < 0)) {
HXLINE(  32)			_hx_tmp1 = (((Float)4294967296.0) + int1);
            		}
            		else {
HXLINE(  32)			_hx_tmp1 = (int1 + ((Float)0.0));
            		}
HXDLIN(  32)		gradientMatrix->createGradientBox(( (Float)(width) ),(_hx_tmp / _hx_tmp1),rot,0,0);
HXLINE(  35)		HX_VARI( ::Array< Float >,alpha) = ::Array_obj< Float >::__new();
HXLINE(  37)		{
HXLINE(  37)			int _g = 0;
HXDLIN(  37)			int _g1 = colors->length;
HXDLIN(  37)			while((_g < _g1)){
HXLINE(  37)				_g = (_g + 1);
HXDLIN(  37)				HX_VARI( int,ai) = (_g - 1);
HXLINE(  39)				alpha->push((( (Float)(((colors->__get(ai) >> 24) & 255)) ) / ( (Float)(255) )));
            			}
            		}
HXLINE(  42)		HX_VARI( ::Array< int >,ratio) = ::Array_obj< int >::__new();
HXLINE(  44)		if ((colors->length == 2)) {
HXLINE(  46)			ratio[0] = 0;
HXLINE(  47)			ratio[1] = 255;
            		}
            		else {
HXLINE(  52)			HX_VARI( int,spread) = ::Std_obj::_hx_int((( (Float)(255) ) / ( (Float)((colors->length - 1)) )));
HXLINE(  54)			ratio->push(0);
HXLINE(  56)			{
HXLINE(  56)				int _g = 1;
HXDLIN(  56)				int _g1 = (colors->length - 1);
HXDLIN(  56)				while((_g < _g1)){
HXLINE(  56)					_g = (_g + 1);
HXDLIN(  56)					HX_VARI( int,ri) = (_g - 1);
HXLINE(  58)					ratio->push((ri * spread));
            				}
            			}
HXLINE(  61)			ratio->push(255);
            		}
HXLINE(  64)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("matrix",41,36,c8,bb),gradientMatrix)
            			->setFixed(1,HX_("ratio",0b,35,24,e4),ratio)
            			->setFixed(2,HX_("alpha",5e,a7,96,21),alpha));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxGradient_obj,createGradientMatrix,return )

::Array< int > FlxGradient_obj::createGradientArray(int width,int height,::Array< int > colors,::hx::Null< int >  __o_chunkSize,::hx::Null< int >  __o_rotation,::hx::Null< bool >  __o_interpolate){
            		int chunkSize = __o_chunkSize.Default(1);
            		int rotation = __o_rotation.Default(90);
            		bool interpolate = __o_interpolate.Default(true);
            	HX_STACKFRAME(&_hx_pos_5278df5c1114b3d6_69_createGradientArray)
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	HX_STACK_ARG(colors,"colors")
            	HX_STACK_ARG(chunkSize,"chunkSize")
            	HX_STACK_ARG(rotation,"rotation")
            	HX_STACK_ARG(interpolate,"interpolate")
HXLINE(  69)
HXLINE(  70)		HX_VARI(  ::openfl::display::BitmapData,data) = ::flixel::util::FlxGradient_obj::createGradientBitmapData(width,height,colors,chunkSize,rotation,interpolate);
HXLINE(  71)		HX_VARI( ::Array< int >,result) = ::Array_obj< int >::__new();
HXLINE(  73)		{
HXLINE(  73)			int _g = 0;
HXDLIN(  73)			int _g1 = data->height;
HXDLIN(  73)			while((_g < _g1)){
HXLINE(  73)				_g = (_g + 1);
HXDLIN(  73)				HX_VARI( int,y) = (_g - 1);
HXLINE(  75)				result->push(data->getPixel32(0,y));
            			}
            		}
HXLINE(  78)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxGradient_obj,createGradientArray,return )

 ::flixel::FlxSprite FlxGradient_obj::createGradientFlxSprite(int width,int height,::Array< int > colors,::hx::Null< int >  __o_chunkSize,::hx::Null< int >  __o_rotation,::hx::Null< bool >  __o_interpolate){
            		int chunkSize = __o_chunkSize.Default(1);
            		int rotation = __o_rotation.Default(90);
            		bool interpolate = __o_interpolate.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_5278df5c1114b3d6_94_createGradientFlxSprite)
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	HX_STACK_ARG(colors,"colors")
            	HX_STACK_ARG(chunkSize,"chunkSize")
            	HX_STACK_ARG(rotation,"rotation")
            	HX_STACK_ARG(interpolate,"interpolate")
HXLINE(  94)
HXLINE(  95)		HX_VARI(  ::openfl::display::BitmapData,data) = ::flixel::util::FlxGradient_obj::createGradientBitmapData(width,height,colors,chunkSize,rotation,interpolate);
HXLINE(  96)		HX_VARI(  ::flixel::FlxSprite,dest) =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  97)		dest->set_pixels(data);
HXLINE(  98)		return dest;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxGradient_obj,createGradientFlxSprite,return )

 ::openfl::display::BitmapData FlxGradient_obj::createGradientBitmapData(int width,int height,::Array< int > colors,::hx::Null< int >  __o_chunkSize,::hx::Null< int >  __o_rotation,::hx::Null< bool >  __o_interpolate){
            		int chunkSize = __o_chunkSize.Default(1);
            		int rotation = __o_rotation.Default(90);
            		bool interpolate = __o_interpolate.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_5278df5c1114b3d6_103_createGradientBitmapData)
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	HX_STACK_ARG(colors,"colors")
            	HX_STACK_ARG(chunkSize,"chunkSize")
            	HX_STACK_ARG(rotation,"rotation")
            	HX_STACK_ARG(interpolate,"interpolate")
HXLINE( 103)
HXLINE( 105)		bool aNeg = (1 < 0);
HXDLIN( 105)		bool bNeg = (width < 0);
HXDLIN( 105)		bool _hx_tmp;
HXDLIN( 105)		if ((aNeg != bNeg)) {
HXLINE( 105)			_hx_tmp = aNeg;
            		}
            		else {
HXLINE( 105)			_hx_tmp = (1 > width);
            		}
HXDLIN( 105)		if (_hx_tmp) {
HXLINE( 107)			width = 1;
            		}
HXLINE( 110)		bool aNeg1 = (1 < 0);
HXDLIN( 110)		bool bNeg1 = (height < 0);
HXDLIN( 110)		bool _hx_tmp1;
HXDLIN( 110)		if ((aNeg1 != bNeg1)) {
HXLINE( 110)			_hx_tmp1 = aNeg1;
            		}
            		else {
HXLINE( 110)			_hx_tmp1 = (1 > height);
            		}
HXDLIN( 110)		if (_hx_tmp1) {
HXLINE( 112)			height = 1;
            		}
HXLINE( 115)		HX_VARI(  ::Dynamic,gradient) = ::flixel::util::FlxGradient_obj::createGradientMatrix(width,height,colors,chunkSize,rotation);
HXLINE( 116)		HX_VARI(  ::openfl::display::Shape,shape) =  ::openfl::display::Shape_obj::__alloc( HX_CTX );
HXLINE( 117)		HX_VAR(  ::Dynamic,interpolationMethod);
HXDLIN( 117)		if (interpolate) {
HXLINE( 117)			interpolationMethod = 1;
            		}
            		else {
HXLINE( 117)			interpolationMethod = 0;
            		}
HXLINE( 122)		shape->get_graphics()->beginGradientFill(0,colors,( (::Array< Float >)(gradient->__Field(HX_("alpha",5e,a7,96,21),::hx::paccDynamic)) ),( (::Array< int >)(gradient->__Field(HX_("ratio",0b,35,24,e4),::hx::paccDynamic)) ),( ( ::openfl::geom::Matrix)(gradient->__Field(HX_("matrix",41,36,c8,bb),::hx::paccDynamic)) ),0,interpolationMethod,0);
HXLINE( 125)		 ::openfl::display::Graphics _hx_tmp2 = shape->get_graphics();
HXDLIN( 125)		int _hx_int = width;
HXDLIN( 125)		Float _hx_tmp3;
HXDLIN( 125)		if ((_hx_int < 0)) {
HXLINE( 125)			_hx_tmp3 = (((Float)4294967296.0) + _hx_int);
            		}
            		else {
HXLINE( 125)			_hx_tmp3 = (_hx_int + ((Float)0.0));
            		}
HXDLIN( 125)		int int1 = height;
HXDLIN( 125)		Float _hx_tmp4;
HXDLIN( 125)		if ((int1 < 0)) {
HXLINE( 125)			_hx_tmp4 = (((Float)4294967296.0) + int1);
            		}
            		else {
HXLINE( 125)			_hx_tmp4 = (int1 + ((Float)0.0));
            		}
HXDLIN( 125)		int int2 = chunkSize;
HXDLIN( 125)		Float _hx_tmp5;
HXDLIN( 125)		if ((int2 < 0)) {
HXLINE( 125)			_hx_tmp5 = (((Float)4294967296.0) + int2);
            		}
            		else {
HXLINE( 125)			_hx_tmp5 = (int2 + ((Float)0.0));
            		}
HXDLIN( 125)		_hx_tmp2->drawRect(( (Float)(0) ),( (Float)(0) ),_hx_tmp3,(_hx_tmp4 / _hx_tmp5));
HXLINE( 127)		HX_VARI(  ::openfl::display::BitmapData,data) =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,width,height,true,0);
HXLINE( 129)		if ((chunkSize == 1)) {
HXLINE( 131)			data->draw(shape,null(),null(),null(),null(),null());
            		}
            		else {
HXLINE( 135)			int _hx_int = height;
HXDLIN( 135)			Float tempBitmap;
HXDLIN( 135)			if ((_hx_int < 0)) {
HXLINE( 135)				tempBitmap = (((Float)4294967296.0) + _hx_int);
            			}
            			else {
HXLINE( 135)				tempBitmap = (_hx_int + ((Float)0.0));
            			}
HXDLIN( 135)			int int1 = chunkSize;
HXDLIN( 135)			Float tempBitmap1;
HXDLIN( 135)			if ((int1 < 0)) {
HXLINE( 135)				tempBitmap1 = (((Float)4294967296.0) + int1);
            			}
            			else {
HXLINE( 135)				tempBitmap1 = (int1 + ((Float)0.0));
            			}
HXDLIN( 135)			HX_VARI(  ::openfl::display::Bitmap,tempBitmap2) =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX , ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,width,::Std_obj::_hx_int((tempBitmap / tempBitmap1)),true,0),null(),null());
HXLINE( 136)			tempBitmap2->get_bitmapData()->draw(shape,null(),null(),null(),null(),null());
HXLINE( 137)			int int2 = chunkSize;
HXDLIN( 137)			Float _hx_tmp;
HXDLIN( 137)			if ((int2 < 0)) {
HXLINE( 137)				_hx_tmp = (((Float)4294967296.0) + int2);
            			}
            			else {
HXLINE( 137)				_hx_tmp = (int2 + ((Float)0.0));
            			}
HXDLIN( 137)			tempBitmap2->set_scaleY(_hx_tmp);
HXLINE( 139)			HX_VARI(  ::openfl::geom::Matrix,sM) =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE( 140)			Float _hx_tmp1 = tempBitmap2->get_scaleX();
HXDLIN( 140)			sM->scale(_hx_tmp1,tempBitmap2->get_scaleY());
HXLINE( 142)			data->draw(tempBitmap2,sM,null(),null(),null(),null());
HXLINE( 145)			Float remainingRect = tempBitmap2->get_height();
HXDLIN( 145)			int int3 = width;
HXDLIN( 145)			Float remainingRect1;
HXDLIN( 145)			if ((int3 < 0)) {
HXLINE( 145)				remainingRect1 = (((Float)4294967296.0) + int3);
            			}
            			else {
HXLINE( 145)				remainingRect1 = (int3 + ((Float)0.0));
            			}
HXDLIN( 145)			Float b = tempBitmap2->get_height();
HXDLIN( 145)			int int4 = height;
HXDLIN( 145)			Float remainingRect2;
HXDLIN( 145)			if ((int4 < 0)) {
HXLINE( 145)				remainingRect2 = (((Float)4294967296.0) + int4);
            			}
            			else {
HXLINE( 145)				remainingRect2 = (int4 + ((Float)0.0));
            			}
HXDLIN( 145)			HX_VARI(  ::openfl::geom::Rectangle,remainingRect3) =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,remainingRect,remainingRect1,(remainingRect2 - b));
HXLINE( 146)			data->fillRect(remainingRect3,colors->__get((colors->length - 1)));
            		}
HXLINE( 149)		return data;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxGradient_obj,createGradientBitmapData,return )

 ::flixel::FlxSprite FlxGradient_obj::overlayGradientOnFlxSprite( ::flixel::FlxSprite dest,int width,int height,::Array< int > colors,::hx::Null< int >  __o_destX,::hx::Null< int >  __o_destY,::hx::Null< int >  __o_chunkSize,::hx::Null< int >  __o_rotation,::hx::Null< bool >  __o_interpolate){
            		int destX = __o_destX.Default(0);
            		int destY = __o_destY.Default(0);
            		int chunkSize = __o_chunkSize.Default(1);
            		int rotation = __o_rotation.Default(90);
            		bool interpolate = __o_interpolate.Default(true);
            	HX_STACKFRAME(&_hx_pos_5278df5c1114b3d6_169_overlayGradientOnFlxSprite)
            	HX_STACK_ARG(dest,"dest")
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	HX_STACK_ARG(colors,"colors")
            	HX_STACK_ARG(destX,"destX")
            	HX_STACK_ARG(destY,"destY")
            	HX_STACK_ARG(chunkSize,"chunkSize")
            	HX_STACK_ARG(rotation,"rotation")
            	HX_STACK_ARG(interpolate,"interpolate")
HXLINE( 169)
HXLINE( 170)		if ((width > dest->get_width())) {
HXLINE( 172)			width = ::Std_obj::_hx_int(dest->get_width());
            		}
HXLINE( 175)		if ((height > dest->get_height())) {
HXLINE( 177)			height = ::Std_obj::_hx_int(dest->get_height());
            		}
HXLINE( 180)		HX_VARI(  ::flixel::FlxSprite,source) = ::flixel::util::FlxGradient_obj::createGradientFlxSprite(width,height,colors,chunkSize,rotation,interpolate);
HXLINE( 181)		dest->stamp(source,destX,destY);
HXLINE( 182)		source->destroy();
HXLINE( 183)		return dest;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(FlxGradient_obj,overlayGradientOnFlxSprite,return )

 ::openfl::display::BitmapData FlxGradient_obj::overlayGradientOnBitmapData( ::openfl::display::BitmapData dest,int width,int height,::Array< int > colors,::hx::Null< int >  __o_destX,::hx::Null< int >  __o_destY,::hx::Null< int >  __o_chunkSize,::hx::Null< int >  __o_rotation,::hx::Null< bool >  __o_interpolate){
            		int destX = __o_destX.Default(0);
            		int destY = __o_destY.Default(0);
            		int chunkSize = __o_chunkSize.Default(1);
            		int rotation = __o_rotation.Default(90);
            		bool interpolate = __o_interpolate.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_5278df5c1114b3d6_203_overlayGradientOnBitmapData)
            	HX_STACK_ARG(dest,"dest")
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	HX_STACK_ARG(colors,"colors")
            	HX_STACK_ARG(destX,"destX")
            	HX_STACK_ARG(destY,"destY")
            	HX_STACK_ARG(chunkSize,"chunkSize")
            	HX_STACK_ARG(rotation,"rotation")
            	HX_STACK_ARG(interpolate,"interpolate")
HXLINE( 203)
HXLINE( 204)		if ((width > dest->width)) {
HXLINE( 206)			width = dest->width;
            		}
HXLINE( 209)		if ((height > dest->height)) {
HXLINE( 211)			height = dest->height;
            		}
HXLINE( 214)		HX_VARI(  ::openfl::display::BitmapData,source) = ::flixel::util::FlxGradient_obj::createGradientBitmapData(width,height,colors,chunkSize,rotation,interpolate);
HXLINE( 215)		 ::openfl::geom::Rectangle _hx_tmp =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,source->width,source->height);
HXDLIN( 215)		dest->copyPixels(source,_hx_tmp, ::openfl::geom::Point_obj::__alloc( HX_CTX ,destX,destY),null(),null(),true);
HXLINE( 216)		source->dispose();
HXLINE( 217)		return dest;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(FlxGradient_obj,overlayGradientOnBitmapData,return )


FlxGradient_obj::FlxGradient_obj()
{
}

bool FlxGradient_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"createGradientArray") ) { outValue = createGradientArray_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createGradientMatrix") ) { outValue = createGradientMatrix_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"createGradientFlxSprite") ) { outValue = createGradientFlxSprite_dyn(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"createGradientBitmapData") ) { outValue = createGradientBitmapData_dyn(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"overlayGradientOnFlxSprite") ) { outValue = overlayGradientOnFlxSprite_dyn(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"overlayGradientOnBitmapData") ) { outValue = overlayGradientOnBitmapData_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxGradient_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxGradient_obj_sStaticStorageInfo = 0;
#endif

::hx::Class FlxGradient_obj::__mClass;

static ::String FlxGradient_obj_sStaticFields[] = {
	HX_("createGradientMatrix",6d,b4,68,83),
	HX_("createGradientArray",ed,d8,ac,37),
	HX_("createGradientFlxSprite",6b,9b,09,c6),
	HX_("createGradientBitmapData",e5,b9,19,1e),
	HX_("overlayGradientOnFlxSprite",38,4b,27,8c),
	HX_("overlayGradientOnBitmapData",78,dd,f5,b1),
	::String(null())
};

void FlxGradient_obj::__register()
{
	FlxGradient_obj _hx_dummy;
	FlxGradient_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util.FlxGradient",48,2c,ee,6e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxGradient_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxGradient_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxGradient_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxGradient_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxGradient_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
