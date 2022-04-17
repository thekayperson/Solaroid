#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
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
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
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
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_haxe_ds_ArraySort
#include <haxe/ds/ArraySort.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_5df8bdd839d6a258_19_new,"flixel.graphics.frames.FlxFrame","new",0x06ad24e4,"flixel.graphics.frames.FlxFrame.new","flixel/graphics/frames/FlxFrame.hx",19,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_116_cacheFrameMatrix,"flixel.graphics.frames.FlxFrame","cacheFrameMatrix",0xffbbac28,"flixel.graphics.frames.FlxFrame.cacheFrameMatrix","flixel/graphics/frames/FlxFrame.hx",116,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_146_prepareBlitMatrix,"flixel.graphics.frames.FlxFrame","prepareBlitMatrix",0xbf3c9041,"flixel.graphics.frames.FlxFrame.prepareBlitMatrix","flixel/graphics/frames/FlxFrame.hx",146,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_178_rotateAndFlip,"flixel.graphics.frames.FlxFrame","rotateAndFlip",0x835ac58d,"flixel.graphics.frames.FlxFrame.rotateAndFlip","flixel/graphics/frames/FlxFrame.hx",178,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_227_prepareTransformedBlitMatrix,"flixel.graphics.frames.FlxFrame","prepareTransformedBlitMatrix",0xc5ea2af6,"flixel.graphics.frames.FlxFrame.prepareTransformedBlitMatrix","flixel/graphics/frames/FlxFrame.hx",227,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_242_prepareMatrix,"flixel.graphics.frames.FlxFrame","prepareMatrix",0xbf883cac,"flixel.graphics.frames.FlxFrame.prepareMatrix","flixel/graphics/frames/FlxFrame.hx",242,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_266_fillBlitMatrix,"flixel.graphics.frames.FlxFrame","fillBlitMatrix",0xa3605eb5,"flixel.graphics.frames.FlxFrame.fillBlitMatrix","flixel/graphics/frames/FlxFrame.hx",266,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_289_paint,"flixel.graphics.frames.FlxFrame","paint",0x0c093522,"flixel.graphics.frames.FlxFrame.paint","flixel/graphics/frames/FlxFrame.hx",289,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_336_paintRotatedAndFlipped,"flixel.graphics.frames.FlxFrame","paintRotatedAndFlipped",0x8f0fb1b2,"flixel.graphics.frames.FlxFrame.paintRotatedAndFlipped","flixel/graphics/frames/FlxFrame.hx",336,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_376_checkInputBitmap,"flixel.graphics.frames.FlxFrame","checkInputBitmap",0x11e1b8ad,"flixel.graphics.frames.FlxFrame.checkInputBitmap","flixel/graphics/frames/FlxFrame.hx",376,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_411_getDrawFrameRect,"flixel.graphics.frames.FlxFrame","getDrawFrameRect",0x7930f1d3,"flixel.graphics.frames.FlxFrame.getDrawFrameRect","flixel/graphics/frames/FlxFrame.hx",411,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_432_subFrameTo,"flixel.graphics.frames.FlxFrame","subFrameTo",0x37199964,"flixel.graphics.frames.FlxFrame.subFrameTo","flixel/graphics/frames/FlxFrame.hx",432,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_520_setBorderTo,"flixel.graphics.frames.FlxFrame","setBorderTo",0x0ba0ebcd,"flixel.graphics.frames.FlxFrame.setBorderTo","flixel/graphics/frames/FlxFrame.hx",520,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_537_clipTo,"flixel.graphics.frames.FlxFrame","clipTo",0x9ecb6267,"flixel.graphics.frames.FlxFrame.clipTo","flixel/graphics/frames/FlxFrame.hx",537,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_622_copyTo,"flixel.graphics.frames.FlxFrame","copyTo",0x5da6728c,"flixel.graphics.frames.FlxFrame.copyTo","flixel/graphics/frames/FlxFrame.hx",622,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_646_destroy,"flixel.graphics.frames.FlxFrame","destroy",0x74fe137e,"flixel.graphics.frames.FlxFrame.destroy","flixel/graphics/frames/FlxFrame.hx",646,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_659_toString,"flixel.graphics.frames.FlxFrame","toString",0x50e09da8,"flixel.graphics.frames.FlxFrame.toString","flixel/graphics/frames/FlxFrame.hx",659,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_663_set_frame,"flixel.graphics.frames.FlxFrame","set_frame",0x789f5014,"flixel.graphics.frames.FlxFrame.set_frame","flixel/graphics/frames/FlxFrame.hx",663,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_33_sort,"flixel.graphics.frames.FlxFrame","sort",0xd428c65a,"flixel.graphics.frames.FlxFrame.sort","flixel/graphics/frames/FlxFrame.hx",33,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_37_sortByName,"flixel.graphics.frames.FlxFrame","sortByName",0xdd6fa5bc,"flixel.graphics.frames.FlxFrame.sortByName","flixel/graphics/frames/FlxFrame.hx",37,0x6c7f608b)
namespace flixel{
namespace graphics{
namespace frames{

void FlxFrame_obj::__construct( ::flixel::graphics::FlxGraphic parent,::hx::Null< int >  __o_angle,::hx::Null< bool >  __o_flipX,::hx::Null< bool >  __o_flipY){
            		int angle = __o_angle.Default(0);
            		bool flipX = __o_flipX.Default(false);
            		bool flipY = __o_flipY.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_5df8bdd839d6a258_19_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(parent,"parent")
            	HX_STACK_ARG(angle,"angle")
            	HX_STACK_ARG(flipX,"flipX")
            	HX_STACK_ARG(flipY,"flipY")
HXLINE(  19)
HXLINE(  24)		this->matrix =  ::flixel::math::FlxMatrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE(  23)		this->rect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  22)		this->point2 =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  21)		this->point1 =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  98)		this->parent = parent;
HXLINE(  99)		this->angle = angle;
HXLINE( 100)		this->flipX = flipX;
HXLINE( 101)		this->flipY = flipY;
HXLINE( 103)		this->type = 0;
HXLINE( 105)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 105)		point->_inPool = false;
HXDLIN( 105)		this->sourceSize = point;
HXLINE( 106)		 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 106)		point1->_inPool = false;
HXDLIN( 106)		this->offset = point1;
HXLINE( 108)		::Array< Float > this1 = ::Array_obj< Float >::__new(6);
HXDLIN( 108)		this->blitMatrix = this1;
HXLINE( 109)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 110)			::Array< Float > this1 = ::Array_obj< Float >::__new(6);
HXDLIN( 110)			this->tileMatrix = this1;
            		}
            	}

Dynamic FlxFrame_obj::__CreateEmpty() { return new FlxFrame_obj; }

void *FlxFrame_obj::_hx_vtable = 0;

Dynamic FlxFrame_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxFrame_obj > _hx_result = new FlxFrame_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool FlxFrame_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3adf0488;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_graphics_frames_FlxFrame__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::graphics::frames::FlxFrame_obj::destroy,
};

void *FlxFrame_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_graphics_frames_FlxFrame__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxFrame_obj::cacheFrameMatrix(){
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_116_cacheFrameMatrix)
            	HX_STACK_THIS(this)
HXLINE( 116)
HXLINE( 117)		{
HXLINE( 117)			 ::flixel::math::FlxMatrix mat = this->matrix;
HXDLIN( 117)			mat->identity();
HXDLIN( 117)			mat->translate(-(this->frame->x),-(this->frame->y));
HXDLIN( 117)			if ((this->angle == 90)) {
HXLINE( 117)				mat->setTo(-(mat->b),mat->a,-(mat->d),mat->c,-(mat->ty),mat->tx);
HXDLIN( 117)				mat->translate(this->frame->height,( (Float)(0) ));
            			}
            			else {
HXLINE( 117)				if ((this->angle == -90)) {
HXLINE( 117)					mat->setTo(mat->b,-(mat->a),mat->d,-(mat->c),mat->ty,-(mat->tx));
HXDLIN( 117)					mat->translate(( (Float)(0) ),this->frame->width);
            				}
            			}
HXDLIN( 117)			mat->translate(this->offset->x,this->offset->y);
            		}
HXLINE( 118)		this->blitMatrix->__unsafe_set(0,this->matrix->a);
HXLINE( 119)		this->blitMatrix->__unsafe_set(1,this->matrix->b);
HXLINE( 120)		this->blitMatrix->__unsafe_set(2,this->matrix->c);
HXLINE( 121)		this->blitMatrix->__unsafe_set(3,this->matrix->d);
HXLINE( 122)		this->blitMatrix->__unsafe_set(4,this->matrix->tx);
HXLINE( 123)		this->blitMatrix->__unsafe_set(5,this->matrix->ty);
HXLINE( 125)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 127)			{
HXLINE( 127)				 ::flixel::math::FlxMatrix mat = this->matrix;
HXDLIN( 127)				mat->identity();
HXDLIN( 127)				if ((this->angle == 90)) {
HXLINE( 127)					mat->setTo(-(mat->b),mat->a,-(mat->d),mat->c,-(mat->ty),mat->tx);
HXDLIN( 127)					mat->translate(this->frame->height,( (Float)(0) ));
            				}
            				else {
HXLINE( 127)					if ((this->angle == -90)) {
HXLINE( 127)						mat->setTo(mat->b,-(mat->a),mat->d,-(mat->c),mat->ty,-(mat->tx));
HXDLIN( 127)						mat->translate(( (Float)(0) ),this->frame->width);
            					}
            				}
HXDLIN( 127)				mat->translate(this->offset->x,this->offset->y);
            			}
HXLINE( 128)			this->tileMatrix->__unsafe_set(0,this->matrix->a);
HXLINE( 129)			this->tileMatrix->__unsafe_set(1,this->matrix->b);
HXLINE( 130)			this->tileMatrix->__unsafe_set(2,this->matrix->c);
HXLINE( 131)			this->tileMatrix->__unsafe_set(3,this->matrix->d);
HXLINE( 132)			this->tileMatrix->__unsafe_set(4,this->matrix->tx);
HXLINE( 133)			this->tileMatrix->__unsafe_set(5,this->matrix->ty);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxFrame_obj,cacheFrameMatrix,(void))

 ::flixel::math::FlxMatrix FlxFrame_obj::prepareBlitMatrix( ::flixel::math::FlxMatrix mat,::hx::Null< bool >  __o_blit){
            		bool blit = __o_blit.Default(true);
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_146_prepareBlitMatrix)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(mat,"mat")
            	HX_STACK_ARG(blit,"blit")
HXLINE( 146)
HXLINE( 147)		mat->identity();
HXLINE( 149)		if (blit) {
HXLINE( 150)			mat->translate(-(this->frame->x),-(this->frame->y));
            		}
HXLINE( 152)		if ((this->angle == 90)) {
HXLINE( 154)			mat->setTo(-(mat->b),mat->a,-(mat->d),mat->c,-(mat->ty),mat->tx);
HXLINE( 155)			mat->translate(this->frame->height,( (Float)(0) ));
            		}
            		else {
HXLINE( 157)			if ((this->angle == -90)) {
HXLINE( 159)				mat->setTo(mat->b,-(mat->a),mat->d,-(mat->c),mat->ty,-(mat->tx));
HXLINE( 160)				mat->translate(( (Float)(0) ),this->frame->width);
            			}
            		}
HXLINE( 163)		mat->translate(this->offset->x,this->offset->y);
HXLINE( 164)		return mat;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxFrame_obj,prepareBlitMatrix,return )

 ::flixel::math::FlxMatrix FlxFrame_obj::rotateAndFlip( ::flixel::math::FlxMatrix mat,::hx::Null< int >  __o_rotation,::hx::Null< bool >  __o_flipX,::hx::Null< bool >  __o_flipY){
            		int rotation = __o_rotation.Default(0);
            		bool flipX = __o_flipX.Default(false);
            		bool flipY = __o_flipY.Default(false);
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_178_rotateAndFlip)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(mat,"mat")
            	HX_STACK_ARG(rotation,"rotation")
            	HX_STACK_ARG(flipX,"flipX")
            	HX_STACK_ARG(flipY,"flipY")
HXLINE( 178)
HXLINE( 179)		HX_VARI( int,w) = ::Std_obj::_hx_int(this->sourceSize->x);
HXLINE( 180)		HX_VARI( int,h) = ::Std_obj::_hx_int(this->sourceSize->y);
HXLINE( 183)		if ((rotation != 0)) {
HXLINE( 185)			HX_VARI( int,t) = w;
HXLINE( 186)			w = h;
HXLINE( 187)			h = t;
HXLINE( 189)			if ((rotation == 90)) {
HXLINE( 191)				mat->setTo(-(mat->b),mat->a,-(mat->d),mat->c,-(mat->ty),mat->tx);
HXLINE( 192)				mat->translate(this->sourceSize->y,( (Float)(0) ));
            			}
            			else {
HXLINE( 194)				bool _hx_tmp;
HXDLIN( 194)				if ((rotation != -90)) {
HXLINE( 194)					_hx_tmp = (rotation == -90);
            				}
            				else {
HXLINE( 194)					_hx_tmp = true;
            				}
HXDLIN( 194)				if (_hx_tmp) {
HXLINE( 196)					mat->setTo(mat->b,-(mat->a),mat->d,-(mat->c),mat->ty,-(mat->tx));
HXLINE( 197)					mat->translate(( (Float)(0) ),this->sourceSize->x);
            				}
            			}
            		}
HXLINE( 202)		if (flipX) {
HXLINE( 204)			mat->scale(( (Float)(-1) ),( (Float)(1) ));
HXLINE( 205)			mat->translate(( (Float)(w) ),( (Float)(0) ));
            		}
HXLINE( 208)		if (flipY) {
HXLINE( 210)			mat->scale(( (Float)(1) ),( (Float)(-1) ));
HXLINE( 211)			mat->translate(( (Float)(0) ),( (Float)(h) ));
            		}
HXLINE( 214)		return mat;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxFrame_obj,rotateAndFlip,return )

 ::flixel::math::FlxMatrix FlxFrame_obj::prepareTransformedBlitMatrix( ::flixel::math::FlxMatrix mat,::hx::Null< int >  __o_rotation,::hx::Null< bool >  __o_flipX,::hx::Null< bool >  __o_flipY){
            		int rotation = __o_rotation.Default(0);
            		bool flipX = __o_flipX.Default(false);
            		bool flipY = __o_flipY.Default(false);
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_227_prepareTransformedBlitMatrix)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(mat,"mat")
            	HX_STACK_ARG(rotation,"rotation")
            	HX_STACK_ARG(flipX,"flipX")
            	HX_STACK_ARG(flipY,"flipY")
HXLINE( 227)
HXLINE( 228)		mat->a = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,0)) );
HXDLIN( 228)		mat->b = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,1)) );
HXDLIN( 228)		mat->c = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,2)) );
HXDLIN( 228)		mat->d = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,3)) );
HXDLIN( 228)		mat->tx = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,4)) );
HXDLIN( 228)		mat->ty = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,5)) );
HXLINE( 229)		int w = ::Std_obj::_hx_int(this->sourceSize->x);
HXDLIN( 229)		int h = ::Std_obj::_hx_int(this->sourceSize->y);
HXDLIN( 229)		if ((rotation != 0)) {
HXLINE( 229)			int t = w;
HXDLIN( 229)			w = h;
HXDLIN( 229)			h = t;
HXDLIN( 229)			if ((rotation == 90)) {
HXLINE( 229)				mat->setTo(-(mat->b),mat->a,-(mat->d),mat->c,-(mat->ty),mat->tx);
HXDLIN( 229)				mat->translate(this->sourceSize->y,( (Float)(0) ));
            			}
            			else {
HXLINE( 229)				bool _hx_tmp;
HXDLIN( 229)				if ((rotation != -90)) {
HXLINE( 229)					_hx_tmp = (rotation == -90);
            				}
            				else {
HXLINE( 229)					_hx_tmp = true;
            				}
HXDLIN( 229)				if (_hx_tmp) {
HXLINE( 229)					mat->setTo(mat->b,-(mat->a),mat->d,-(mat->c),mat->ty,-(mat->tx));
HXDLIN( 229)					mat->translate(( (Float)(0) ),this->sourceSize->x);
            				}
            			}
            		}
HXDLIN( 229)		if (flipX) {
HXLINE( 229)			mat->scale(( (Float)(-1) ),( (Float)(1) ));
HXDLIN( 229)			mat->translate(( (Float)(w) ),( (Float)(0) ));
            		}
HXDLIN( 229)		if (flipY) {
HXLINE( 229)			mat->scale(( (Float)(1) ),( (Float)(-1) ));
HXDLIN( 229)			mat->translate(( (Float)(0) ),( (Float)(h) ));
            		}
HXDLIN( 229)		return mat;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxFrame_obj,prepareTransformedBlitMatrix,return )

 ::flixel::math::FlxMatrix FlxFrame_obj::prepareMatrix( ::flixel::math::FlxMatrix mat,::hx::Null< int >  __o_rotation,::hx::Null< bool >  __o_flipX,::hx::Null< bool >  __o_flipY){
            		int rotation = __o_rotation.Default(0);
            		bool flipX = __o_flipX.Default(false);
            		bool flipY = __o_flipY.Default(false);
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_242_prepareMatrix)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(mat,"mat")
            	HX_STACK_ARG(rotation,"rotation")
            	HX_STACK_ARG(flipX,"flipX")
            	HX_STACK_ARG(flipY,"flipY")
HXLINE( 242)
HXLINE( 243)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 245)			mat->identity();
HXLINE( 246)			return mat;
            		}
HXLINE( 249)		mat->a = ( (Float)(_hx_array_unsafe_get(this->tileMatrix,0)) );
HXLINE( 250)		mat->b = ( (Float)(_hx_array_unsafe_get(this->tileMatrix,1)) );
HXLINE( 251)		mat->c = ( (Float)(_hx_array_unsafe_get(this->tileMatrix,2)) );
HXLINE( 252)		mat->d = ( (Float)(_hx_array_unsafe_get(this->tileMatrix,3)) );
HXLINE( 253)		mat->tx = ( (Float)(_hx_array_unsafe_get(this->tileMatrix,4)) );
HXLINE( 254)		mat->ty = ( (Float)(_hx_array_unsafe_get(this->tileMatrix,5)) );
HXLINE( 256)		HX_VARI( bool,doFlipX) = (flipX != this->flipX);
HXLINE( 257)		HX_VARI( bool,doFlipY) = (flipY != this->flipY);
HXLINE( 259)		bool _hx_tmp;
HXDLIN( 259)		bool _hx_tmp1;
HXDLIN( 259)		if ((rotation == 0)) {
HXLINE( 259)			_hx_tmp1 = !(doFlipX);
            		}
            		else {
HXLINE( 259)			_hx_tmp1 = false;
            		}
HXDLIN( 259)		if (_hx_tmp1) {
HXLINE( 259)			_hx_tmp = !(doFlipY);
            		}
            		else {
HXLINE( 259)			_hx_tmp = false;
            		}
HXDLIN( 259)		if (_hx_tmp) {
HXLINE( 260)			return mat;
            		}
HXLINE( 262)		int w = ::Std_obj::_hx_int(this->sourceSize->x);
HXDLIN( 262)		int h = ::Std_obj::_hx_int(this->sourceSize->y);
HXDLIN( 262)		if ((rotation != 0)) {
HXLINE( 262)			int t = w;
HXDLIN( 262)			w = h;
HXDLIN( 262)			h = t;
HXDLIN( 262)			if ((rotation == 90)) {
HXLINE( 262)				mat->setTo(-(mat->b),mat->a,-(mat->d),mat->c,-(mat->ty),mat->tx);
HXDLIN( 262)				mat->translate(this->sourceSize->y,( (Float)(0) ));
            			}
            			else {
HXLINE( 262)				bool _hx_tmp;
HXDLIN( 262)				if ((rotation != -90)) {
HXLINE( 262)					_hx_tmp = (rotation == -90);
            				}
            				else {
HXLINE( 262)					_hx_tmp = true;
            				}
HXDLIN( 262)				if (_hx_tmp) {
HXLINE( 262)					mat->setTo(mat->b,-(mat->a),mat->d,-(mat->c),mat->ty,-(mat->tx));
HXDLIN( 262)					mat->translate(( (Float)(0) ),this->sourceSize->x);
            				}
            			}
            		}
HXDLIN( 262)		if (doFlipX) {
HXLINE( 262)			mat->scale(( (Float)(-1) ),( (Float)(1) ));
HXDLIN( 262)			mat->translate(( (Float)(w) ),( (Float)(0) ));
            		}
HXDLIN( 262)		if (doFlipY) {
HXLINE( 262)			mat->scale(( (Float)(1) ),( (Float)(-1) ));
HXDLIN( 262)			mat->translate(( (Float)(0) ),( (Float)(h) ));
            		}
HXDLIN( 262)		return mat;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxFrame_obj,prepareMatrix,return )

 ::flixel::math::FlxMatrix FlxFrame_obj::fillBlitMatrix( ::flixel::math::FlxMatrix mat){
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_266_fillBlitMatrix)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(mat,"mat")
HXLINE( 266)
HXLINE( 267)		mat->a = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,0)) );
HXLINE( 268)		mat->b = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,1)) );
HXLINE( 269)		mat->c = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,2)) );
HXLINE( 270)		mat->d = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,3)) );
HXLINE( 271)		mat->tx = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,4)) );
HXLINE( 272)		mat->ty = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,5)) );
HXLINE( 273)		return mat;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFrame_obj,fillBlitMatrix,return )

 ::openfl::display::BitmapData FlxFrame_obj::paint( ::openfl::display::BitmapData bmd, ::openfl::geom::Point point,::hx::Null< bool >  __o_mergeAlpha,::hx::Null< bool >  __o_disposeIfNotEqual){
            		bool mergeAlpha = __o_mergeAlpha.Default(false);
            		bool disposeIfNotEqual = __o_disposeIfNotEqual.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_5df8bdd839d6a258_289_paint)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(bmd,"bmd")
            	HX_STACK_ARG(point,"point")
            	HX_STACK_ARG(mergeAlpha,"mergeAlpha")
            	HX_STACK_ARG(disposeIfNotEqual,"disposeIfNotEqual")
HXLINE( 289)
HXLINE( 290)		if (::hx::IsNull( point )) {
HXLINE( 292)			point = this->point1;
HXLINE( 293)			point->setTo(( (Float)(0) ),( (Float)(0) ));
            		}
HXLINE( 296)		 ::openfl::display::BitmapData bmd1 = bmd;
HXDLIN( 296)		int w = ::Std_obj::_hx_int(this->sourceSize->x);
HXDLIN( 296)		int h = ::Std_obj::_hx_int(this->sourceSize->y);
HXDLIN( 296)		if ((0 != 0)) {
HXLINE( 296)			int t = w;
HXDLIN( 296)			w = h;
HXDLIN( 296)			h = t;
            		}
HXDLIN( 296)		bool bmd2;
HXDLIN( 296)		if (::hx::IsNotNull( bmd1 )) {
HXLINE( 296)			bmd2 = disposeIfNotEqual;
            		}
            		else {
HXLINE( 296)			bmd2 = false;
            		}
HXDLIN( 296)		if (bmd2) {
HXLINE( 296)			bmd1 = ::flixel::util::FlxDestroyUtil_obj::disposeIfNotEqual(bmd1,( (Float)(w) ),( (Float)(h) ));
            		}
HXDLIN( 296)		bool bmd3;
HXDLIN( 296)		if (::hx::IsNotNull( bmd1 )) {
HXLINE( 296)			bmd3 = !(mergeAlpha);
            		}
            		else {
HXLINE( 296)			bmd3 = false;
            		}
HXDLIN( 296)		if (bmd3) {
HXLINE( 296)			this->rect->setTo(point->x,point->y,( (Float)(w) ),( (Float)(h) ));
HXDLIN( 296)			bmd1->fillRect(this->rect,0);
            		}
            		else {
HXLINE( 296)			if (::hx::IsNull( bmd1 )) {
HXLINE( 296)				bmd1 =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,w,h,true,0);
            			}
            		}
HXDLIN( 296)		bmd = bmd1;
HXLINE( 298)		if ((this->type == 2)) {
HXLINE( 299)			return bmd;
            		}
HXLINE( 301)		if ((this->angle == 0)) {
HXLINE( 303)			{
HXLINE( 303)				 ::flixel::math::FlxPoint _this = this->offset;
HXDLIN( 303)				 ::openfl::geom::Point FlashPoint = this->point2;
HXDLIN( 303)				if (::hx::IsNull( FlashPoint )) {
HXLINE( 303)					FlashPoint =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
            				}
HXDLIN( 303)				FlashPoint->x = _this->x;
HXDLIN( 303)				FlashPoint->y = _this->y;
            			}
HXLINE( 304)			 ::openfl::geom::Point fh = this->point2;
HXDLIN( 304)			fh->x = (fh->x + point->x);
HXLINE( 305)			 ::openfl::geom::Point fh1 = this->point2;
HXDLIN( 305)			fh1->y = (fh1->y + point->y);
HXLINE( 306)			 ::openfl::display::BitmapData _hx_tmp = this->parent->bitmap;
HXDLIN( 306)			 ::flixel::math::FlxRect _this1 = this->frame;
HXDLIN( 306)			 ::openfl::geom::Rectangle FlashRect = this->rect;
HXDLIN( 306)			if (::hx::IsNull( FlashRect )) {
HXLINE( 306)				FlashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            			}
HXDLIN( 306)			FlashRect->x = _this1->x;
HXDLIN( 306)			FlashRect->y = _this1->y;
HXDLIN( 306)			FlashRect->width = _this1->width;
HXDLIN( 306)			FlashRect->height = _this1->height;
HXDLIN( 306)			bmd->copyPixels(_hx_tmp,FlashRect,this->point2,null(),null(),mergeAlpha);
            		}
            		else {
HXLINE( 310)			{
HXLINE( 310)				 ::flixel::math::FlxMatrix mat = this->matrix;
HXDLIN( 310)				mat->a = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,0)) );
HXDLIN( 310)				mat->b = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,1)) );
HXDLIN( 310)				mat->c = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,2)) );
HXDLIN( 310)				mat->d = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,3)) );
HXDLIN( 310)				mat->tx = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,4)) );
HXDLIN( 310)				mat->ty = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,5)) );
            			}
HXLINE( 311)			this->matrix->translate(point->x,point->y);
HXLINE( 312)			 ::flixel::math::FlxMatrix mat1 = this->matrix;
HXDLIN( 312)			Float X = this->frame->x;
HXDLIN( 312)			Float Y = this->frame->y;
HXDLIN( 312)			 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);
HXDLIN( 312)			point1->_inPool = false;
HXDLIN( 312)			 ::flixel::math::FlxPoint point2 = point1;
HXDLIN( 312)			point2->_weak = true;
HXDLIN( 312)			 ::flixel::math::FlxPoint p1 = point2;
HXDLIN( 312)			 ::flixel::math::FlxRect _this = this->frame;
HXDLIN( 312)			Float X1 = (_this->x + _this->width);
HXDLIN( 312)			 ::flixel::math::FlxRect _this1 = this->frame;
HXDLIN( 312)			Float Y1 = (_this1->y + _this1->height);
HXDLIN( 312)			 ::flixel::math::FlxPoint point3 = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);
HXDLIN( 312)			point3->_inPool = false;
HXDLIN( 312)			 ::flixel::math::FlxPoint point4 = point3;
HXDLIN( 312)			point4->_weak = true;
HXDLIN( 312)			 ::flixel::math::FlxPoint p2 = point4;
HXDLIN( 312)			{
HXLINE( 312)				Float x1 = (((p1->x * mat1->a) + (p1->y * mat1->c)) + mat1->tx);
HXDLIN( 312)				Float y1 = (((p1->x * mat1->b) + (p1->y * mat1->d)) + mat1->ty);
HXDLIN( 312)				p1->set(x1,y1);
            			}
HXDLIN( 312)			{
HXLINE( 312)				Float x11 = (((p2->x * mat1->a) + (p2->y * mat1->c)) + mat1->tx);
HXDLIN( 312)				Float y11 = (((p2->x * mat1->b) + (p2->y * mat1->d)) + mat1->ty);
HXDLIN( 312)				p2->set(x11,y11);
            			}
HXDLIN( 312)			 ::flixel::math::FlxRect _this2 = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 312)			_this2->x = ( (Float)(0) );
HXDLIN( 312)			_this2->y = ( (Float)(0) );
HXDLIN( 312)			_this2->width = ( (Float)(0) );
HXDLIN( 312)			_this2->height = ( (Float)(0) );
HXDLIN( 312)			 ::flixel::math::FlxRect rect = _this2;
HXDLIN( 312)			rect->_inPool = false;
HXDLIN( 312)			 ::flixel::math::FlxRect _this3 = rect;
HXDLIN( 312)			Float minX = ::Math_obj::min(p1->x,p2->x);
HXDLIN( 312)			Float minY = ::Math_obj::min(p1->y,p2->y);
HXDLIN( 312)			Float maxX = ::Math_obj::max(p1->x,p2->x);
HXDLIN( 312)			Float maxY = ::Math_obj::max(p1->y,p2->y);
HXDLIN( 312)			if (p1->_weak) {
HXLINE( 312)				p1->put();
            			}
HXDLIN( 312)			if (p2->_weak) {
HXLINE( 312)				p2->put();
            			}
HXDLIN( 312)			_this3->x = minX;
HXDLIN( 312)			_this3->y = minY;
HXDLIN( 312)			_this3->width = (maxX - minX);
HXDLIN( 312)			_this3->height = (maxY - minY);
HXDLIN( 312)			 ::flixel::math::FlxRect flxRect = _this3;
HXDLIN( 312)			{
HXLINE( 312)				 ::openfl::geom::Rectangle FlashRect = this->rect;
HXDLIN( 312)				if (::hx::IsNull( FlashRect )) {
HXLINE( 312)					FlashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            				}
HXDLIN( 312)				FlashRect->x = flxRect->x;
HXDLIN( 312)				FlashRect->y = flxRect->y;
HXDLIN( 312)				FlashRect->width = flxRect->width;
HXDLIN( 312)				FlashRect->height = flxRect->height;
            			}
HXDLIN( 312)			if (!(flxRect->_inPool)) {
HXLINE( 312)				flxRect->_inPool = true;
HXDLIN( 312)				flxRect->_weak = false;
HXDLIN( 312)				::flixel::math::FlxRect_obj::_pool->putUnsafe(flxRect);
            			}
HXDLIN( 312)			HX_VARI(  ::openfl::geom::Rectangle,rect1) = this->rect;
HXLINE( 313)			bmd->draw(this->parent->bitmap,this->matrix,null(),null(),rect1,null());
            		}
HXLINE( 316)		return bmd;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxFrame_obj,paint,return )

 ::openfl::display::BitmapData FlxFrame_obj::paintRotatedAndFlipped( ::openfl::display::BitmapData bmd, ::openfl::geom::Point point,::hx::Null< int >  __o_rotation,::hx::Null< bool >  __o_flipX,::hx::Null< bool >  __o_flipY,::hx::Null< bool >  __o_mergeAlpha,::hx::Null< bool >  __o_disposeIfNotEqual){
            		int rotation = __o_rotation.Default(0);
            		bool flipX = __o_flipX.Default(false);
            		bool flipY = __o_flipY.Default(false);
            		bool mergeAlpha = __o_mergeAlpha.Default(false);
            		bool disposeIfNotEqual = __o_disposeIfNotEqual.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_5df8bdd839d6a258_336_paintRotatedAndFlipped)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(bmd,"bmd")
            	HX_STACK_ARG(point,"point")
            	HX_STACK_ARG(rotation,"rotation")
            	HX_STACK_ARG(flipX,"flipX")
            	HX_STACK_ARG(flipY,"flipY")
            	HX_STACK_ARG(mergeAlpha,"mergeAlpha")
            	HX_STACK_ARG(disposeIfNotEqual,"disposeIfNotEqual")
HXLINE( 336)
HXLINE( 337)		bool _hx_tmp;
HXDLIN( 337)		if ((this->type == 2)) {
HXLINE( 337)			_hx_tmp = (rotation == 0);
            		}
            		else {
HXLINE( 337)			_hx_tmp = false;
            		}
HXDLIN( 337)		if (_hx_tmp) {
HXLINE( 338)			return this->paint(bmd,point,mergeAlpha,disposeIfNotEqual);
            		}
HXLINE( 340)		if (::hx::IsNull( point )) {
HXLINE( 342)			point = this->point2;
HXLINE( 343)			point->setTo(( (Float)(0) ),( (Float)(0) ));
            		}
HXLINE( 346)		 ::openfl::display::BitmapData bmd1 = bmd;
HXDLIN( 346)		int w = ::Std_obj::_hx_int(this->sourceSize->x);
HXDLIN( 346)		int h = ::Std_obj::_hx_int(this->sourceSize->y);
HXDLIN( 346)		if ((rotation != 0)) {
HXLINE( 346)			int t = w;
HXDLIN( 346)			w = h;
HXDLIN( 346)			h = t;
            		}
HXDLIN( 346)		bool bmd2;
HXDLIN( 346)		if (::hx::IsNotNull( bmd1 )) {
HXLINE( 346)			bmd2 = disposeIfNotEqual;
            		}
            		else {
HXLINE( 346)			bmd2 = false;
            		}
HXDLIN( 346)		if (bmd2) {
HXLINE( 346)			bmd1 = ::flixel::util::FlxDestroyUtil_obj::disposeIfNotEqual(bmd1,( (Float)(w) ),( (Float)(h) ));
            		}
HXDLIN( 346)		bool bmd3;
HXDLIN( 346)		if (::hx::IsNotNull( bmd1 )) {
HXLINE( 346)			bmd3 = !(mergeAlpha);
            		}
            		else {
HXLINE( 346)			bmd3 = false;
            		}
HXDLIN( 346)		if (bmd3) {
HXLINE( 346)			this->rect->setTo(point->x,point->y,( (Float)(w) ),( (Float)(h) ));
HXDLIN( 346)			bmd1->fillRect(this->rect,0);
            		}
            		else {
HXLINE( 346)			if (::hx::IsNull( bmd1 )) {
HXLINE( 346)				bmd1 =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,w,h,true,0);
            			}
            		}
HXDLIN( 346)		bmd = bmd1;
HXLINE( 348)		if ((this->type == 2)) {
HXLINE( 349)			return bmd;
            		}
HXLINE( 351)		HX_VARI( bool,doFlipX) = (flipX != this->flipX);
HXLINE( 352)		HX_VARI( bool,doFlipY) = (flipY != this->flipY);
HXLINE( 354)		this->prepareTransformedBlitMatrix(this->matrix,rotation,doFlipX,doFlipY);
HXLINE( 355)		this->matrix->translate(point->x,point->y);
HXLINE( 356)		 ::flixel::math::FlxMatrix mat = this->matrix;
HXDLIN( 356)		Float X = this->frame->x;
HXDLIN( 356)		Float Y = this->frame->y;
HXDLIN( 356)		 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);
HXDLIN( 356)		point1->_inPool = false;
HXDLIN( 356)		 ::flixel::math::FlxPoint point2 = point1;
HXDLIN( 356)		point2->_weak = true;
HXDLIN( 356)		 ::flixel::math::FlxPoint p1 = point2;
HXDLIN( 356)		 ::flixel::math::FlxRect _this = this->frame;
HXDLIN( 356)		Float X1 = (_this->x + _this->width);
HXDLIN( 356)		 ::flixel::math::FlxRect _this1 = this->frame;
HXDLIN( 356)		Float Y1 = (_this1->y + _this1->height);
HXDLIN( 356)		 ::flixel::math::FlxPoint point3 = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);
HXDLIN( 356)		point3->_inPool = false;
HXDLIN( 356)		 ::flixel::math::FlxPoint point4 = point3;
HXDLIN( 356)		point4->_weak = true;
HXDLIN( 356)		 ::flixel::math::FlxPoint p2 = point4;
HXDLIN( 356)		{
HXLINE( 356)			Float x1 = (((p1->x * mat->a) + (p1->y * mat->c)) + mat->tx);
HXDLIN( 356)			Float y1 = (((p1->x * mat->b) + (p1->y * mat->d)) + mat->ty);
HXDLIN( 356)			p1->set(x1,y1);
            		}
HXDLIN( 356)		{
HXLINE( 356)			Float x11 = (((p2->x * mat->a) + (p2->y * mat->c)) + mat->tx);
HXDLIN( 356)			Float y11 = (((p2->x * mat->b) + (p2->y * mat->d)) + mat->ty);
HXDLIN( 356)			p2->set(x11,y11);
            		}
HXDLIN( 356)		 ::flixel::math::FlxRect _this2 = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 356)		_this2->x = ( (Float)(0) );
HXDLIN( 356)		_this2->y = ( (Float)(0) );
HXDLIN( 356)		_this2->width = ( (Float)(0) );
HXDLIN( 356)		_this2->height = ( (Float)(0) );
HXDLIN( 356)		 ::flixel::math::FlxRect rect = _this2;
HXDLIN( 356)		rect->_inPool = false;
HXDLIN( 356)		 ::flixel::math::FlxRect _this3 = rect;
HXDLIN( 356)		Float minX = ::Math_obj::min(p1->x,p2->x);
HXDLIN( 356)		Float minY = ::Math_obj::min(p1->y,p2->y);
HXDLIN( 356)		Float maxX = ::Math_obj::max(p1->x,p2->x);
HXDLIN( 356)		Float maxY = ::Math_obj::max(p1->y,p2->y);
HXDLIN( 356)		if (p1->_weak) {
HXLINE( 356)			p1->put();
            		}
HXDLIN( 356)		if (p2->_weak) {
HXLINE( 356)			p2->put();
            		}
HXDLIN( 356)		_this3->x = minX;
HXDLIN( 356)		_this3->y = minY;
HXDLIN( 356)		_this3->width = (maxX - minX);
HXDLIN( 356)		_this3->height = (maxY - minY);
HXDLIN( 356)		 ::flixel::math::FlxRect flxRect = _this3;
HXDLIN( 356)		{
HXLINE( 356)			 ::openfl::geom::Rectangle FlashRect = this->rect;
HXDLIN( 356)			if (::hx::IsNull( FlashRect )) {
HXLINE( 356)				FlashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            			}
HXDLIN( 356)			FlashRect->x = flxRect->x;
HXDLIN( 356)			FlashRect->y = flxRect->y;
HXDLIN( 356)			FlashRect->width = flxRect->width;
HXDLIN( 356)			FlashRect->height = flxRect->height;
            		}
HXDLIN( 356)		if (!(flxRect->_inPool)) {
HXLINE( 356)			flxRect->_inPool = true;
HXDLIN( 356)			flxRect->_weak = false;
HXDLIN( 356)			::flixel::math::FlxRect_obj::_pool->putUnsafe(flxRect);
            		}
HXDLIN( 356)		HX_VARI(  ::openfl::geom::Rectangle,rect1) = this->rect;
HXLINE( 357)		bmd->draw(this->parent->bitmap,this->matrix,null(),null(),rect1,null());
HXLINE( 358)		return bmd;
            	}


HX_DEFINE_DYNAMIC_FUNC7(FlxFrame_obj,paintRotatedAndFlipped,return )

 ::openfl::display::BitmapData FlxFrame_obj::checkInputBitmap( ::openfl::display::BitmapData bmd, ::openfl::geom::Point point,::hx::Null< int >  __o_rotation,::hx::Null< bool >  __o_mergeAlpha,::hx::Null< bool >  __o_disposeIfNotEqual){
            		int rotation = __o_rotation.Default(0);
            		bool mergeAlpha = __o_mergeAlpha.Default(false);
            		bool disposeIfNotEqual = __o_disposeIfNotEqual.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_5df8bdd839d6a258_376_checkInputBitmap)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(bmd,"bmd")
            	HX_STACK_ARG(point,"point")
            	HX_STACK_ARG(rotation,"rotation")
            	HX_STACK_ARG(mergeAlpha,"mergeAlpha")
            	HX_STACK_ARG(disposeIfNotEqual,"disposeIfNotEqual")
HXLINE( 376)
HXLINE( 377)		HX_VARI( int,w) = ::Std_obj::_hx_int(this->sourceSize->x);
HXLINE( 378)		HX_VARI( int,h) = ::Std_obj::_hx_int(this->sourceSize->y);
HXLINE( 380)		if ((rotation != 0)) {
HXLINE( 382)			HX_VARI( int,t) = w;
HXLINE( 383)			w = h;
HXLINE( 384)			h = t;
            		}
HXLINE( 387)		bool _hx_tmp;
HXDLIN( 387)		if (::hx::IsNotNull( bmd )) {
HXLINE( 387)			_hx_tmp = disposeIfNotEqual;
            		}
            		else {
HXLINE( 387)			_hx_tmp = false;
            		}
HXDLIN( 387)		if (_hx_tmp) {
HXLINE( 388)			bmd = ::flixel::util::FlxDestroyUtil_obj::disposeIfNotEqual(bmd,( (Float)(w) ),( (Float)(h) ));
            		}
HXLINE( 390)		bool _hx_tmp1;
HXDLIN( 390)		if (::hx::IsNotNull( bmd )) {
HXLINE( 390)			_hx_tmp1 = !(mergeAlpha);
            		}
            		else {
HXLINE( 390)			_hx_tmp1 = false;
            		}
HXDLIN( 390)		if (_hx_tmp1) {
HXLINE( 392)			this->rect->setTo(point->x,point->y,( (Float)(w) ),( (Float)(h) ));
HXLINE( 393)			bmd->fillRect(this->rect,0);
            		}
            		else {
HXLINE( 395)			if (::hx::IsNull( bmd )) {
HXLINE( 397)				bmd =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,w,h,true,0);
            			}
            		}
HXLINE( 400)		return bmd;
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxFrame_obj,checkInputBitmap,return )

 ::openfl::geom::Rectangle FlxFrame_obj::getDrawFrameRect( ::flixel::math::FlxMatrix mat){
            	HX_GC_STACKFRAME(&_hx_pos_5df8bdd839d6a258_411_getDrawFrameRect)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(mat,"mat")
HXLINE( 411)
HXLINE( 412)		Float X = this->frame->x;
HXDLIN( 412)		Float Y = this->frame->y;
HXDLIN( 412)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);
HXDLIN( 412)		point->_inPool = false;
HXDLIN( 412)		 ::flixel::math::FlxPoint point1 = point;
HXDLIN( 412)		point1->_weak = true;
HXDLIN( 412)		HX_VARI(  ::flixel::math::FlxPoint,p1) = point1;
HXLINE( 413)		 ::flixel::math::FlxRect _this = this->frame;
HXDLIN( 413)		Float X1 = (_this->x + _this->width);
HXDLIN( 413)		 ::flixel::math::FlxRect _this1 = this->frame;
HXDLIN( 413)		Float Y1 = (_this1->y + _this1->height);
HXDLIN( 413)		 ::flixel::math::FlxPoint point2 = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);
HXDLIN( 413)		point2->_inPool = false;
HXDLIN( 413)		 ::flixel::math::FlxPoint point3 = point2;
HXDLIN( 413)		point3->_weak = true;
HXDLIN( 413)		HX_VARI(  ::flixel::math::FlxPoint,p2) = point3;
HXLINE( 415)		{
HXLINE( 415)			Float x1 = (((p1->x * mat->a) + (p1->y * mat->c)) + mat->tx);
HXDLIN( 415)			Float y1 = (((p1->x * mat->b) + (p1->y * mat->d)) + mat->ty);
HXDLIN( 415)			p1->set(x1,y1);
            		}
HXLINE( 416)		{
HXLINE( 416)			Float x11 = (((p2->x * mat->a) + (p2->y * mat->c)) + mat->tx);
HXDLIN( 416)			Float y11 = (((p2->x * mat->b) + (p2->y * mat->d)) + mat->ty);
HXDLIN( 416)			p2->set(x11,y11);
            		}
HXLINE( 418)		 ::flixel::math::FlxRect _this2 = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 418)		_this2->x = ( (Float)(0) );
HXDLIN( 418)		_this2->y = ( (Float)(0) );
HXDLIN( 418)		_this2->width = ( (Float)(0) );
HXDLIN( 418)		_this2->height = ( (Float)(0) );
HXDLIN( 418)		 ::flixel::math::FlxRect rect = _this2;
HXDLIN( 418)		rect->_inPool = false;
HXDLIN( 418)		 ::flixel::math::FlxRect _this3 = rect;
HXDLIN( 418)		Float minX = ::Math_obj::min(p1->x,p2->x);
HXDLIN( 418)		Float minY = ::Math_obj::min(p1->y,p2->y);
HXDLIN( 418)		Float maxX = ::Math_obj::max(p1->x,p2->x);
HXDLIN( 418)		Float maxY = ::Math_obj::max(p1->y,p2->y);
HXDLIN( 418)		if (p1->_weak) {
HXLINE( 418)			p1->put();
            		}
HXDLIN( 418)		if (p2->_weak) {
HXLINE( 418)			p2->put();
            		}
HXDLIN( 418)		_this3->x = minX;
HXDLIN( 418)		_this3->y = minY;
HXDLIN( 418)		_this3->width = (maxX - minX);
HXDLIN( 418)		_this3->height = (maxY - minY);
HXDLIN( 418)		HX_VARI(  ::flixel::math::FlxRect,flxRect) = _this3;
HXLINE( 419)		{
HXLINE( 419)			 ::openfl::geom::Rectangle FlashRect = this->rect;
HXDLIN( 419)			if (::hx::IsNull( FlashRect )) {
HXLINE( 419)				FlashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            			}
HXDLIN( 419)			FlashRect->x = flxRect->x;
HXDLIN( 419)			FlashRect->y = flxRect->y;
HXDLIN( 419)			FlashRect->width = flxRect->width;
HXDLIN( 419)			FlashRect->height = flxRect->height;
            		}
HXLINE( 420)		if (!(flxRect->_inPool)) {
HXLINE( 420)			flxRect->_inPool = true;
HXDLIN( 420)			flxRect->_weak = false;
HXDLIN( 420)			::flixel::math::FlxRect_obj::_pool->putUnsafe(flxRect);
            		}
HXLINE( 421)		return this->rect;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFrame_obj,getDrawFrameRect,return )

 ::flixel::graphics::frames::FlxFrame FlxFrame_obj::subFrameTo( ::flixel::math::FlxRect rect, ::flixel::graphics::frames::FlxFrame frameToFill){
            	HX_GC_STACKFRAME(&_hx_pos_5df8bdd839d6a258_432_subFrameTo)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rect,"rect")
            	HX_STACK_ARG(frameToFill,"frameToFill")
HXLINE( 432)
HXLINE( 433)		if (::hx::IsNull( frameToFill )) {
HXLINE( 435)			frameToFill =  ::flixel::graphics::frames::FlxFrame_obj::__alloc( HX_CTX ,this->parent,this->angle,null(),null());
            		}
            		else {
HXLINE( 439)			frameToFill->parent = this->parent;
HXLINE( 440)			frameToFill->angle = this->angle;
HXLINE( 441)			frameToFill->set_frame(( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(frameToFill->frame)) ));
            		}
HXLINE( 444)		frameToFill->sourceSize->set(rect->width,rect->height);
HXLINE( 447)		if ((this->type == 2)) {
HXLINE( 449)			frameToFill->type = 2;
HXLINE( 450)			frameToFill->offset->set(0,0);
HXLINE( 451)			return frameToFill;
            		}
HXLINE( 454)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 454)		_this->x = ( (Float)(0) );
HXDLIN( 454)		_this->y = ( (Float)(0) );
HXDLIN( 454)		_this->width = ( (Float)(0) );
HXDLIN( 454)		_this->height = ( (Float)(0) );
HXDLIN( 454)		 ::flixel::math::FlxRect rect1 = _this;
HXDLIN( 454)		rect1->_inPool = false;
HXDLIN( 454)		 ::flixel::math::FlxRect _this1 = rect1;
HXDLIN( 454)		_this1->width = this->frame->width;
HXDLIN( 454)		_this1->height = this->frame->height;
HXDLIN( 454)		HX_VARI(  ::flixel::math::FlxRect,clippedRect) = _this1;
HXLINE( 455)		if ((this->angle != 0)) {
HXLINE( 457)			clippedRect->width = this->frame->height;
HXLINE( 458)			clippedRect->height = this->frame->width;
            		}
HXLINE( 461)		HX_VARI( Float,ox) = ::Math_obj::max(this->offset->x,( (Float)(0) ));
HXLINE( 462)		HX_VARI( Float,oy) = ::Math_obj::max(this->offset->y,( (Float)(0) ));
HXLINE( 464)		{
HXLINE( 464)			 ::flixel::math::FlxRect rect2 = rect;
HXDLIN( 464)			rect2->x = (rect2->x + -(ox));
HXDLIN( 464)			 ::flixel::math::FlxRect rect3 = rect;
HXDLIN( 464)			rect3->y = (rect3->y + -(oy));
            		}
HXLINE( 465)		HX_VARI(  ::flixel::math::FlxRect,frameRect) = clippedRect->intersection(rect,null());
HXLINE( 466)		clippedRect = ( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(clippedRect)) );
HXLINE( 467)		{
HXLINE( 467)			 ::flixel::math::FlxRect rect4 = rect;
HXDLIN( 467)			rect4->x = (rect4->x + ox);
HXDLIN( 467)			 ::flixel::math::FlxRect rect5 = rect;
HXDLIN( 467)			rect5->y = (rect5->y + oy);
            		}
HXLINE( 469)		bool _hx_tmp;
HXDLIN( 469)		if ((frameRect->width != 0)) {
HXLINE( 469)			_hx_tmp = (frameRect->height == 0);
            		}
            		else {
HXLINE( 469)			_hx_tmp = true;
            		}
HXDLIN( 469)		if (_hx_tmp) {
HXLINE( 471)			frameToFill->type = 2;
HXLINE( 472)			{
HXLINE( 472)				frameRect->x = ( (Float)(0) );
HXDLIN( 472)				frameRect->y = ( (Float)(0) );
HXDLIN( 472)				frameRect->width = ( (Float)(0) );
HXDLIN( 472)				frameRect->height = ( (Float)(0) );
            			}
HXLINE( 473)			frameToFill->set_frame(frameRect);
HXLINE( 474)			frameToFill->offset->set(0,0);
            		}
            		else {
HXLINE( 478)			frameToFill->type = 0;
HXLINE( 479)			 ::flixel::math::FlxPoint _this = frameToFill->offset->set(frameRect->x,frameRect->y);
HXDLIN( 479)			Float Y = rect->y;
HXDLIN( 479)			_this->set_x((_this->x - rect->x));
HXDLIN( 479)			_this->set_y((_this->y - Y));
HXDLIN( 479)			_this->addPoint(this->offset);
HXLINE( 481)			Float X = frameRect->x;
HXDLIN( 481)			Float Y1 = frameRect->y;
HXDLIN( 481)			 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y1);
HXDLIN( 481)			point->_inPool = false;
HXDLIN( 481)			 ::flixel::math::FlxPoint point1 = point;
HXDLIN( 481)			point1->_weak = true;
HXDLIN( 481)			HX_VARI(  ::flixel::math::FlxPoint,p1) = point1;
HXLINE( 482)			Float X1 = (frameRect->x + frameRect->width);
HXDLIN( 482)			Float Y2 = (frameRect->y + frameRect->height);
HXDLIN( 482)			 ::flixel::math::FlxPoint point2 = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y2);
HXDLIN( 482)			point2->_inPool = false;
HXDLIN( 482)			 ::flixel::math::FlxPoint point3 = point2;
HXDLIN( 482)			point3->_weak = true;
HXDLIN( 482)			HX_VARI(  ::flixel::math::FlxPoint,p2) = point3;
HXLINE( 484)			this->matrix->identity();
HXLINE( 486)			if ((this->angle == -90)) {
HXLINE( 488)				{
HXLINE( 488)					 ::flixel::math::FlxMatrix _this = this->matrix;
HXDLIN( 488)					_this->setTo(-(_this->b),_this->a,-(_this->d),_this->c,-(_this->ty),_this->tx);
            				}
HXLINE( 489)				this->matrix->translate(this->frame->width,( (Float)(0) ));
            			}
            			else {
HXLINE( 491)				if ((this->angle == 90)) {
HXLINE( 493)					{
HXLINE( 493)						 ::flixel::math::FlxMatrix _this = this->matrix;
HXDLIN( 493)						_this->setTo(_this->b,-(_this->a),_this->d,-(_this->c),_this->ty,-(_this->tx));
            					}
HXLINE( 494)					this->matrix->translate(( (Float)(0) ),this->frame->height);
            				}
            			}
HXLINE( 497)			if ((this->angle != 0)) {
HXLINE( 499)				{
HXLINE( 499)					 ::openfl::geom::Matrix matrix = this->matrix;
HXDLIN( 499)					Float x1 = (((p1->x * matrix->a) + (p1->y * matrix->c)) + matrix->tx);
HXDLIN( 499)					Float y1 = (((p1->x * matrix->b) + (p1->y * matrix->d)) + matrix->ty);
HXDLIN( 499)					p1->set(x1,y1);
            				}
HXLINE( 500)				{
HXLINE( 500)					 ::openfl::geom::Matrix matrix1 = this->matrix;
HXDLIN( 500)					Float x11 = (((p2->x * matrix1->a) + (p2->y * matrix1->c)) + matrix1->tx);
HXDLIN( 500)					Float y11 = (((p2->x * matrix1->b) + (p2->y * matrix1->d)) + matrix1->ty);
HXDLIN( 500)					p2->set(x11,y11);
            				}
            			}
HXLINE( 503)			{
HXLINE( 503)				Float minX = ::Math_obj::min(p1->x,p2->x);
HXDLIN( 503)				Float minY = ::Math_obj::min(p1->y,p2->y);
HXDLIN( 503)				Float maxX = ::Math_obj::max(p1->x,p2->x);
HXDLIN( 503)				Float maxY = ::Math_obj::max(p1->y,p2->y);
HXDLIN( 503)				if (p1->_weak) {
HXLINE( 503)					p1->put();
            				}
HXDLIN( 503)				if (p2->_weak) {
HXLINE( 503)					p2->put();
            				}
HXDLIN( 503)				{
HXLINE( 503)					frameRect->x = minX;
HXDLIN( 503)					frameRect->y = minY;
HXDLIN( 503)					frameRect->width = (maxX - minX);
HXDLIN( 503)					frameRect->height = (maxY - minY);
            				}
            			}
HXLINE( 504)			{
HXLINE( 504)				 ::flixel::math::FlxRect frameRect1 = frameRect;
HXDLIN( 504)				frameRect1->x = (frameRect1->x + this->frame->x);
HXDLIN( 504)				 ::flixel::math::FlxRect frameRect2 = frameRect;
HXDLIN( 504)				frameRect2->y = (frameRect2->y + this->frame->y);
            			}
HXLINE( 505)			frameToFill->set_frame(frameRect);
HXLINE( 506)			frameToFill->cacheFrameMatrix();
            		}
HXLINE( 509)		return frameToFill;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxFrame_obj,subFrameTo,return )

 ::flixel::graphics::frames::FlxFrame FlxFrame_obj::setBorderTo( ::flixel::math::FlxPoint border, ::flixel::graphics::frames::FlxFrame frameToFill){
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_520_setBorderTo)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(border,"border")
            	HX_STACK_ARG(frameToFill,"frameToFill")
HXLINE( 520)
HXLINE( 521)		Float X = border->x;
HXDLIN( 521)		Float Y = border->y;
HXDLIN( 521)		Float Width = (this->sourceSize->x - (( (Float)(2) ) * border->x));
HXDLIN( 521)		Float Height = (this->sourceSize->y - (( (Float)(2) ) * border->y));
HXDLIN( 521)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 521)		_this->x = X;
HXDLIN( 521)		_this->y = Y;
HXDLIN( 521)		_this->width = Width;
HXDLIN( 521)		_this->height = Height;
HXDLIN( 521)		 ::flixel::math::FlxRect rect = _this;
HXDLIN( 521)		rect->_inPool = false;
HXDLIN( 521)		HX_VARI(  ::flixel::math::FlxRect,rect1) = rect;
HXLINE( 522)		frameToFill = this->subFrameTo(rect1,frameToFill);
HXLINE( 523)		frameToFill->name = this->name;
HXLINE( 524)		rect1 = ( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(rect1)) );
HXLINE( 525)		return frameToFill;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxFrame_obj,setBorderTo,return )

 ::flixel::graphics::frames::FlxFrame FlxFrame_obj::clipTo( ::flixel::math::FlxRect clip, ::flixel::graphics::frames::FlxFrame clippedFrame){
            	HX_GC_STACKFRAME(&_hx_pos_5df8bdd839d6a258_537_clipTo)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(clip,"clip")
            	HX_STACK_ARG(clippedFrame,"clippedFrame")
HXLINE( 537)
HXLINE( 538)		if (::hx::IsNull( clippedFrame )) {
HXLINE( 540)			clippedFrame =  ::flixel::graphics::frames::FlxFrame_obj::__alloc( HX_CTX ,this->parent,this->angle,null(),null());
            		}
            		else {
HXLINE( 544)			clippedFrame->parent = this->parent;
HXLINE( 545)			clippedFrame->angle = this->angle;
HXLINE( 546)			clippedFrame->set_frame(( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(clippedFrame->frame)) ));
            		}
HXLINE( 549)		{
HXLINE( 549)			 ::flixel::math::FlxPoint _this = clippedFrame->sourceSize;
HXDLIN( 549)			 ::flixel::math::FlxPoint point = this->sourceSize;
HXDLIN( 549)			_this->set_x(point->x);
HXDLIN( 549)			_this->set_y(point->y);
HXDLIN( 549)			if (point->_weak) {
HXLINE( 549)				point->put();
            			}
            		}
HXLINE( 550)		clippedFrame->name = this->name;
HXLINE( 553)		if ((this->type == 2)) {
HXLINE( 555)			clippedFrame->type = 2;
HXLINE( 556)			clippedFrame->offset->set(0,0);
HXLINE( 557)			return clippedFrame;
            		}
HXLINE( 560)		 ::flixel::math::FlxRect _this1 = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 560)		_this1->x = ( (Float)(0) );
HXDLIN( 560)		_this1->y = ( (Float)(0) );
HXDLIN( 560)		_this1->width = ( (Float)(0) );
HXDLIN( 560)		_this1->height = ( (Float)(0) );
HXDLIN( 560)		 ::flixel::math::FlxRect rect = _this1;
HXDLIN( 560)		rect->_inPool = false;
HXDLIN( 560)		 ::flixel::math::FlxRect _this2 = rect;
HXDLIN( 560)		_this2->width = this->frame->width;
HXDLIN( 560)		_this2->height = this->frame->height;
HXDLIN( 560)		HX_VARI(  ::flixel::math::FlxRect,clippedRect) = _this2;
HXLINE( 561)		if ((this->angle != 0)) {
HXLINE( 563)			clippedRect->width = this->frame->height;
HXLINE( 564)			clippedRect->height = this->frame->width;
            		}
HXLINE( 567)		{
HXLINE( 567)			 ::flixel::math::FlxRect clip1 = clip;
HXDLIN( 567)			clip1->x = (clip1->x + -(this->offset->x));
HXDLIN( 567)			 ::flixel::math::FlxRect clip2 = clip;
HXDLIN( 567)			clip2->y = (clip2->y + -(this->offset->y));
            		}
HXLINE( 568)		HX_VARI(  ::flixel::math::FlxRect,frameRect) = clippedRect->intersection(clip,null());
HXLINE( 569)		clippedRect = ( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(clippedRect)) );
HXLINE( 571)		bool _hx_tmp;
HXDLIN( 571)		if ((frameRect->width != 0)) {
HXLINE( 571)			_hx_tmp = (frameRect->height == 0);
            		}
            		else {
HXLINE( 571)			_hx_tmp = true;
            		}
HXDLIN( 571)		if (_hx_tmp) {
HXLINE( 573)			clippedFrame->type = 2;
HXLINE( 574)			{
HXLINE( 574)				frameRect->x = ( (Float)(0) );
HXDLIN( 574)				frameRect->y = ( (Float)(0) );
HXDLIN( 574)				frameRect->width = ( (Float)(0) );
HXDLIN( 574)				frameRect->height = ( (Float)(0) );
            			}
HXLINE( 575)			clippedFrame->set_frame(frameRect);
HXLINE( 576)			clippedFrame->offset->set(0,0);
            		}
            		else {
HXLINE( 580)			clippedFrame->type = 0;
HXLINE( 581)			clippedFrame->offset->set(frameRect->x,frameRect->y)->addPoint(this->offset);
HXLINE( 583)			Float X = frameRect->x;
HXDLIN( 583)			Float Y = frameRect->y;
HXDLIN( 583)			 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);
HXDLIN( 583)			point->_inPool = false;
HXDLIN( 583)			 ::flixel::math::FlxPoint point1 = point;
HXDLIN( 583)			point1->_weak = true;
HXDLIN( 583)			HX_VARI(  ::flixel::math::FlxPoint,p1) = point1;
HXLINE( 584)			Float X1 = (frameRect->x + frameRect->width);
HXDLIN( 584)			Float Y1 = (frameRect->y + frameRect->height);
HXDLIN( 584)			 ::flixel::math::FlxPoint point2 = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);
HXDLIN( 584)			point2->_inPool = false;
HXDLIN( 584)			 ::flixel::math::FlxPoint point3 = point2;
HXDLIN( 584)			point3->_weak = true;
HXDLIN( 584)			HX_VARI(  ::flixel::math::FlxPoint,p2) = point3;
HXLINE( 586)			this->matrix->identity();
HXLINE( 588)			if ((this->angle == -90)) {
HXLINE( 590)				{
HXLINE( 590)					 ::flixel::math::FlxMatrix _this = this->matrix;
HXDLIN( 590)					_this->setTo(-(_this->b),_this->a,-(_this->d),_this->c,-(_this->ty),_this->tx);
            				}
HXLINE( 591)				this->matrix->translate(this->frame->width,( (Float)(0) ));
            			}
            			else {
HXLINE( 593)				if ((this->angle == 90)) {
HXLINE( 595)					{
HXLINE( 595)						 ::flixel::math::FlxMatrix _this = this->matrix;
HXDLIN( 595)						_this->setTo(_this->b,-(_this->a),_this->d,-(_this->c),_this->ty,-(_this->tx));
            					}
HXLINE( 596)					this->matrix->translate(( (Float)(0) ),this->frame->height);
            				}
            			}
HXLINE( 599)			if ((this->angle != 0)) {
HXLINE( 601)				{
HXLINE( 601)					 ::openfl::geom::Matrix matrix = this->matrix;
HXDLIN( 601)					Float x1 = (((p1->x * matrix->a) + (p1->y * matrix->c)) + matrix->tx);
HXDLIN( 601)					Float y1 = (((p1->x * matrix->b) + (p1->y * matrix->d)) + matrix->ty);
HXDLIN( 601)					p1->set(x1,y1);
            				}
HXLINE( 602)				{
HXLINE( 602)					 ::openfl::geom::Matrix matrix1 = this->matrix;
HXDLIN( 602)					Float x11 = (((p2->x * matrix1->a) + (p2->y * matrix1->c)) + matrix1->tx);
HXDLIN( 602)					Float y11 = (((p2->x * matrix1->b) + (p2->y * matrix1->d)) + matrix1->ty);
HXDLIN( 602)					p2->set(x11,y11);
            				}
            			}
HXLINE( 605)			{
HXLINE( 605)				Float minX = ::Math_obj::min(p1->x,p2->x);
HXDLIN( 605)				Float minY = ::Math_obj::min(p1->y,p2->y);
HXDLIN( 605)				Float maxX = ::Math_obj::max(p1->x,p2->x);
HXDLIN( 605)				Float maxY = ::Math_obj::max(p1->y,p2->y);
HXDLIN( 605)				if (p1->_weak) {
HXLINE( 605)					p1->put();
            				}
HXDLIN( 605)				if (p2->_weak) {
HXLINE( 605)					p2->put();
            				}
HXDLIN( 605)				{
HXLINE( 605)					frameRect->x = minX;
HXDLIN( 605)					frameRect->y = minY;
HXDLIN( 605)					frameRect->width = (maxX - minX);
HXDLIN( 605)					frameRect->height = (maxY - minY);
            				}
            			}
HXLINE( 606)			{
HXLINE( 606)				 ::flixel::math::FlxRect frameRect1 = frameRect;
HXDLIN( 606)				frameRect1->x = (frameRect1->x + this->frame->x);
HXDLIN( 606)				 ::flixel::math::FlxRect frameRect2 = frameRect;
HXDLIN( 606)				frameRect2->y = (frameRect2->y + this->frame->y);
            			}
HXLINE( 607)			clippedFrame->set_frame(frameRect);
HXLINE( 608)			clippedFrame->cacheFrameMatrix();
            		}
HXLINE( 611)		{
HXLINE( 611)			 ::flixel::math::FlxRect clip3 = clip;
HXDLIN( 611)			clip3->x = (clip3->x + this->offset->x);
HXDLIN( 611)			 ::flixel::math::FlxRect clip4 = clip;
HXDLIN( 611)			clip4->y = (clip4->y + this->offset->y);
            		}
HXLINE( 612)		return clippedFrame;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxFrame_obj,clipTo,return )

 ::flixel::graphics::frames::FlxFrame FlxFrame_obj::copyTo( ::flixel::graphics::frames::FlxFrame clone){
            	HX_GC_STACKFRAME(&_hx_pos_5df8bdd839d6a258_622_copyTo)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(clone,"clone")
HXLINE( 622)
HXLINE( 623)		if (::hx::IsNull( clone )) {
HXLINE( 625)			clone =  ::flixel::graphics::frames::FlxFrame_obj::__alloc( HX_CTX ,this->parent,this->angle,null(),null());
            		}
            		else {
HXLINE( 629)			clone->parent = this->parent;
HXLINE( 630)			clone->angle = this->angle;
HXLINE( 631)			clone->set_frame(( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(clone->frame)) ));
            		}
HXLINE( 634)		{
HXLINE( 634)			 ::flixel::math::FlxPoint _this = clone->offset;
HXDLIN( 634)			 ::flixel::math::FlxPoint point = this->offset;
HXDLIN( 634)			_this->set_x(point->x);
HXDLIN( 634)			_this->set_y(point->y);
HXDLIN( 634)			if (point->_weak) {
HXLINE( 634)				point->put();
            			}
            		}
HXLINE( 635)		clone->flipX = this->flipX;
HXLINE( 636)		clone->flipY = this->flipY;
HXLINE( 637)		{
HXLINE( 637)			 ::flixel::math::FlxPoint _this1 = clone->sourceSize;
HXDLIN( 637)			 ::flixel::math::FlxPoint point1 = this->sourceSize;
HXDLIN( 637)			_this1->set_x(point1->x);
HXDLIN( 637)			_this1->set_y(point1->y);
HXDLIN( 637)			if (point1->_weak) {
HXLINE( 637)				point1->put();
            			}
            		}
HXLINE( 638)		 ::flixel::math::FlxRect _this2 = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 638)		_this2->x = ( (Float)(0) );
HXDLIN( 638)		_this2->y = ( (Float)(0) );
HXDLIN( 638)		_this2->width = ( (Float)(0) );
HXDLIN( 638)		_this2->height = ( (Float)(0) );
HXDLIN( 638)		 ::flixel::math::FlxRect rect = _this2;
HXDLIN( 638)		rect->_inPool = false;
HXDLIN( 638)		 ::flixel::math::FlxRect _this3 = rect;
HXDLIN( 638)		 ::flixel::math::FlxRect Rect = this->frame;
HXDLIN( 638)		_this3->x = Rect->x;
HXDLIN( 638)		_this3->y = Rect->y;
HXDLIN( 638)		_this3->width = Rect->width;
HXDLIN( 638)		_this3->height = Rect->height;
HXDLIN( 638)		if (Rect->_weak) {
HXLINE( 638)			if (!(Rect->_inPool)) {
HXLINE( 638)				Rect->_inPool = true;
HXDLIN( 638)				Rect->_weak = false;
HXDLIN( 638)				::flixel::math::FlxRect_obj::_pool->putUnsafe(Rect);
            			}
            		}
HXDLIN( 638)		clone->set_frame(_this3);
HXLINE( 639)		clone->type = this->type;
HXLINE( 640)		clone->name = this->name;
HXLINE( 641)		clone->cacheFrameMatrix();
HXLINE( 642)		return clone;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFrame_obj,copyTo,return )

void FlxFrame_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_646_destroy)
            	HX_STACK_THIS(this)
HXLINE( 646)
HXLINE( 647)		this->name = null();
HXLINE( 648)		this->parent = null();
HXLINE( 649)		this->sourceSize = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->sourceSize)) );
HXLINE( 650)		this->offset = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->offset)) );
HXLINE( 651)		this->set_frame(( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(this->frame)) ));
HXLINE( 652)		this->uv = ( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(this->uv)) );
HXLINE( 653)		this->blitMatrix = null();
HXLINE( 654)		this->tileMatrix = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxFrame_obj,destroy,(void))

::String FlxFrame_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_659_toString)
            	HX_STACK_THIS(this)
HXLINE( 659)
HXDLIN( 659)		 ::Dynamic value = this->name;
HXDLIN( 659)		 ::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 659)		_this->label = HX_("name",4b,72,ff,48);
HXDLIN( 659)		_this->value = value;
HXDLIN( 659)		return ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(1)->init(0,_this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxFrame_obj,toString,return )

 ::flixel::math::FlxRect FlxFrame_obj::set_frame( ::flixel::math::FlxRect value){
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_663_set_frame)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 663)
HXLINE( 664)		if (::hx::IsNotNull( value )) {
HXLINE( 666)			if (::hx::IsNull( this->uv )) {
HXLINE( 667)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 667)				_this->x = ( (Float)(0) );
HXDLIN( 667)				_this->y = ( (Float)(0) );
HXDLIN( 667)				_this->width = ( (Float)(0) );
HXDLIN( 667)				_this->height = ( (Float)(0) );
HXDLIN( 667)				 ::flixel::math::FlxRect rect = _this;
HXDLIN( 667)				rect->_inPool = false;
HXDLIN( 667)				this->uv = rect;
            			}
HXLINE( 669)			{
HXLINE( 669)				 ::flixel::math::FlxRect _this = this->uv;
HXDLIN( 669)				Float Width = ((value->x + value->width) / ( (Float)(this->parent->width) ));
HXDLIN( 669)				Float Height = ((value->y + value->height) / ( (Float)(this->parent->height) ));
HXDLIN( 669)				_this->x = (value->x / ( (Float)(this->parent->width) ));
HXDLIN( 669)				_this->y = (value->y / ( (Float)(this->parent->height) ));
HXDLIN( 669)				_this->width = Width;
HXDLIN( 669)				_this->height = Height;
            			}
            		}
HXLINE( 672)		return (this->frame = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFrame_obj,set_frame,return )

void FlxFrame_obj::sort(::Array< ::Dynamic> frames,int prefixLength,int postfixLength){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,int,postfixLength1,int,prefixLength1) HXARGC(2)
            		int _hx_run( ::flixel::graphics::frames::FlxFrame frame1, ::flixel::graphics::frames::FlxFrame frame2){
            			HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_33_sort)
HXLINE(  33)
HXDLIN(  33)			return ::flixel::graphics::frames::FlxFrame_obj::sortByName(frame1,frame2,prefixLength1,postfixLength1);
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_33_sort)
            	HX_STACK_ARG(frames,"frames")
            	HX_STACK_ARG(prefixLength,"prefixLength")
            	HX_STACK_ARG(postfixLength,"postfixLength")
HXLINE(  33)
HXDLIN(  33)		int prefixLength1 = prefixLength;
HXDLIN(  33)		int postfixLength1 = postfixLength;
HXDLIN(  33)		::haxe::ds::ArraySort_obj::sort(frames, ::Dynamic(new _hx_Closure_0(postfixLength1,prefixLength1)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxFrame_obj,sort,(void))

int FlxFrame_obj::sortByName( ::flixel::graphics::frames::FlxFrame frame1, ::flixel::graphics::frames::FlxFrame frame2,int prefixLength,int postfixLength){
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_37_sortByName)
            	HX_STACK_ARG(frame1,"frame1")
            	HX_STACK_ARG(frame2,"frame2")
            	HX_STACK_ARG(prefixLength,"prefixLength")
            	HX_STACK_ARG(postfixLength,"postfixLength")
HXLINE(  37)
HXLINE(  38)		HX_VARI( ::String,name1) = frame1->name;
HXLINE(  39)		HX_VARI( ::String,name2) = frame2->name;
HXLINE(  40)		HX_VARI(  ::Dynamic,num1) = ::Std_obj::parseInt(name1.substring(prefixLength,(name1.length - postfixLength)));
HXLINE(  41)		HX_VARI(  ::Dynamic,num2) = ::Std_obj::parseInt(name2.substring(prefixLength,(name2.length - postfixLength)));
HXLINE(  42)		if (::hx::IsNull( num1 )) {
HXLINE(  43)			num1 = 0;
            		}
HXLINE(  44)		if (::hx::IsNull( num2 )) {
HXLINE(  45)			num2 = 0;
            		}
HXLINE(  47)		return (( (int)(num1) ) - ( (int)(num2) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxFrame_obj,sortByName,return )


::hx::ObjectPtr< FlxFrame_obj > FlxFrame_obj::__new( ::flixel::graphics::FlxGraphic parent,::hx::Null< int >  __o_angle,::hx::Null< bool >  __o_flipX,::hx::Null< bool >  __o_flipY) {
	::hx::ObjectPtr< FlxFrame_obj > __this = new FlxFrame_obj();
	__this->__construct(parent,__o_angle,__o_flipX,__o_flipY);
	return __this;
}

::hx::ObjectPtr< FlxFrame_obj > FlxFrame_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::graphics::FlxGraphic parent,::hx::Null< int >  __o_angle,::hx::Null< bool >  __o_flipX,::hx::Null< bool >  __o_flipY) {
	FlxFrame_obj *__this = (FlxFrame_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxFrame_obj), true, "flixel.graphics.frames.FlxFrame"));
	*(void **)__this = FlxFrame_obj::_hx_vtable;
	__this->__construct(parent,__o_angle,__o_flipX,__o_flipY);
	return __this;
}

FlxFrame_obj::FlxFrame_obj()
{
}

void FlxFrame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxFrame);
	HX_MARK_MEMBER_NAME(point1,"point1");
	HX_MARK_MEMBER_NAME(point2,"point2");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(uv,"uv");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(flipX,"flipX");
	HX_MARK_MEMBER_NAME(flipY,"flipY");
	HX_MARK_MEMBER_NAME(sourceSize,"sourceSize");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(tileMatrix,"tileMatrix");
	HX_MARK_MEMBER_NAME(blitMatrix,"blitMatrix");
	HX_MARK_END_CLASS();
}

void FlxFrame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(point1,"point1");
	HX_VISIT_MEMBER_NAME(point2,"point2");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(uv,"uv");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(flipX,"flipX");
	HX_VISIT_MEMBER_NAME(flipY,"flipY");
	HX_VISIT_MEMBER_NAME(sourceSize,"sourceSize");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(tileMatrix,"tileMatrix");
	HX_VISIT_MEMBER_NAME(blitMatrix,"blitMatrix");
}

::hx::Val FlxFrame_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"uv") ) { return ::hx::Val( uv ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { return ::hx::Val( rect ); }
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { return ::hx::Val( frame ); }
		if (HX_FIELD_EQ(inName,"angle") ) { return ::hx::Val( angle ); }
		if (HX_FIELD_EQ(inName,"flipX") ) { return ::hx::Val( flipX ); }
		if (HX_FIELD_EQ(inName,"flipY") ) { return ::hx::Val( flipY ); }
		if (HX_FIELD_EQ(inName,"paint") ) { return ::hx::Val( paint_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"point1") ) { return ::hx::Val( point1 ); }
		if (HX_FIELD_EQ(inName,"point2") ) { return ::hx::Val( point2 ); }
		if (HX_FIELD_EQ(inName,"matrix") ) { return ::hx::Val( matrix ); }
		if (HX_FIELD_EQ(inName,"parent") ) { return ::hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset ); }
		if (HX_FIELD_EQ(inName,"clipTo") ) { return ::hx::Val( clipTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"copyTo") ) { return ::hx::Val( copyTo_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_frame") ) { return ::hx::Val( set_frame_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sourceSize") ) { return ::hx::Val( sourceSize ); }
		if (HX_FIELD_EQ(inName,"tileMatrix") ) { return ::hx::Val( tileMatrix ); }
		if (HX_FIELD_EQ(inName,"blitMatrix") ) { return ::hx::Val( blitMatrix ); }
		if (HX_FIELD_EQ(inName,"subFrameTo") ) { return ::hx::Val( subFrameTo_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setBorderTo") ) { return ::hx::Val( setBorderTo_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"rotateAndFlip") ) { return ::hx::Val( rotateAndFlip_dyn() ); }
		if (HX_FIELD_EQ(inName,"prepareMatrix") ) { return ::hx::Val( prepareMatrix_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fillBlitMatrix") ) { return ::hx::Val( fillBlitMatrix_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cacheFrameMatrix") ) { return ::hx::Val( cacheFrameMatrix_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkInputBitmap") ) { return ::hx::Val( checkInputBitmap_dyn() ); }
		if (HX_FIELD_EQ(inName,"getDrawFrameRect") ) { return ::hx::Val( getDrawFrameRect_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"prepareBlitMatrix") ) { return ::hx::Val( prepareBlitMatrix_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"paintRotatedAndFlipped") ) { return ::hx::Val( paintRotatedAndFlipped_dyn() ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"prepareTransformedBlitMatrix") ) { return ::hx::Val( prepareTransformedBlitMatrix_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxFrame_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"sort") ) { outValue = sort_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sortByName") ) { outValue = sortByName_dyn(); return true; }
	}
	return false;
}

::hx::Val FlxFrame_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"uv") ) { uv=inValue.Cast<  ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_frame(inValue.Cast<  ::flixel::math::FlxRect >()) );frame=inValue.Cast<  ::flixel::math::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipX") ) { flipX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipY") ) { flipY=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"point1") ) { point1=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"point2") ) { point2=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast<  ::flixel::math::FlxMatrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::flixel::graphics::FlxGraphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sourceSize") ) { sourceSize=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileMatrix") ) { tileMatrix=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blitMatrix") ) { blitMatrix=inValue.Cast< ::Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxFrame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("point1",e1,11,2e,f7));
	outFields->push(HX_("point2",e2,11,2e,f7));
	outFields->push(HX_("rect",24,4d,a7,4b));
	outFields->push(HX_("matrix",41,36,c8,bb));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("frame",2d,78,83,06));
	outFields->push(HX_("uv",61,66,00,00));
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("angle",d3,43,e2,22));
	outFields->push(HX_("flipX",0b,45,92,02));
	outFields->push(HX_("flipY",0c,45,92,02));
	outFields->push(HX_("sourceSize",3c,87,b7,74));
	outFields->push(HX_("offset",93,97,3f,60));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("tileMatrix",0f,0c,5f,20));
	outFields->push(HX_("blitMatrix",56,78,21,d8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxFrame_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(FlxFrame_obj,point1),HX_("point1",e1,11,2e,f7)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(FlxFrame_obj,point2),HX_("point2",e2,11,2e,f7)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(FlxFrame_obj,rect),HX_("rect",24,4d,a7,4b)},
	{::hx::fsObject /*  ::flixel::math::FlxMatrix */ ,(int)offsetof(FlxFrame_obj,matrix),HX_("matrix",41,36,c8,bb)},
	{::hx::fsString,(int)offsetof(FlxFrame_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(int)offsetof(FlxFrame_obj,frame),HX_("frame",2d,78,83,06)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(int)offsetof(FlxFrame_obj,uv),HX_("uv",61,66,00,00)},
	{::hx::fsObject /*  ::flixel::graphics::FlxGraphic */ ,(int)offsetof(FlxFrame_obj,parent),HX_("parent",2a,05,7e,ed)},
	{::hx::fsInt,(int)offsetof(FlxFrame_obj,angle),HX_("angle",d3,43,e2,22)},
	{::hx::fsBool,(int)offsetof(FlxFrame_obj,flipX),HX_("flipX",0b,45,92,02)},
	{::hx::fsBool,(int)offsetof(FlxFrame_obj,flipY),HX_("flipY",0c,45,92,02)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxFrame_obj,sourceSize),HX_("sourceSize",3c,87,b7,74)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxFrame_obj,offset),HX_("offset",93,97,3f,60)},
	{::hx::fsInt,(int)offsetof(FlxFrame_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(FlxFrame_obj,tileMatrix),HX_("tileMatrix",0f,0c,5f,20)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(FlxFrame_obj,blitMatrix),HX_("blitMatrix",56,78,21,d8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxFrame_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxFrame_obj_sMemberFields[] = {
	HX_("point1",e1,11,2e,f7),
	HX_("point2",e2,11,2e,f7),
	HX_("rect",24,4d,a7,4b),
	HX_("matrix",41,36,c8,bb),
	HX_("name",4b,72,ff,48),
	HX_("frame",2d,78,83,06),
	HX_("uv",61,66,00,00),
	HX_("parent",2a,05,7e,ed),
	HX_("angle",d3,43,e2,22),
	HX_("flipX",0b,45,92,02),
	HX_("flipY",0c,45,92,02),
	HX_("sourceSize",3c,87,b7,74),
	HX_("offset",93,97,3f,60),
	HX_("type",ba,f2,08,4d),
	HX_("tileMatrix",0f,0c,5f,20),
	HX_("blitMatrix",56,78,21,d8),
	HX_("cacheFrameMatrix",2c,83,fa,88),
	HX_("prepareBlitMatrix",bd,dc,f9,4c),
	HX_("rotateAndFlip",09,24,e1,45),
	HX_("prepareTransformedBlitMatrix",fa,77,91,f4),
	HX_("prepareMatrix",28,9b,0e,82),
	HX_("fillBlitMatrix",b9,ac,6c,16),
	HX_("paint",9e,b7,4e,bd),
	HX_("paintRotatedAndFlipped",b6,a3,df,c7),
	HX_("checkInputBitmap",b1,8f,20,9b),
	HX_("getDrawFrameRect",d7,c8,6f,02),
	HX_("subFrameTo",68,95,dd,c4),
	HX_("setBorderTo",49,73,59,89),
	HX_("clipTo",6b,0c,58,0a),
	HX_("copyTo",90,1c,33,c9),
	HX_("destroy",fa,2c,86,24),
	HX_("toString",ac,d0,6e,38),
	HX_("set_frame",90,c0,7d,2d),
	::String(null()) };

::hx::Class FlxFrame_obj::__mClass;

static ::String FlxFrame_obj_sStaticFields[] = {
	HX_("sort",5e,27,58,4c),
	HX_("sortByName",c0,a1,33,6b),
	::String(null())
};

void FlxFrame_obj::__register()
{
	FlxFrame_obj _hx_dummy;
	FlxFrame_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.frames.FlxFrame",f2,22,40,51);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxFrame_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxFrame_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxFrame_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxFrame_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxFrame_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxFrame_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
