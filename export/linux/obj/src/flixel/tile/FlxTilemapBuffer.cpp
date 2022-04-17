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
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemapBuffer
#include <flixel/tile/FlxTilemapBuffer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_ea53adae7ad7e842_19_new,"flixel.tile.FlxTilemapBuffer","new",0x92818fbc,"flixel.tile.FlxTilemapBuffer.new","flixel/tile/FlxTilemapBuffer.hx",19,0x56d29ad4)
HX_LOCAL_STACK_FRAME(_hx_pos_ea53adae7ad7e842_106_resize,"flixel.tile.FlxTilemapBuffer","resize",0xccfe9c18,"flixel.tile.FlxTilemapBuffer.resize","flixel/tile/FlxTilemapBuffer.hx",106,0x56d29ad4)
HX_LOCAL_STACK_FRAME(_hx_pos_ea53adae7ad7e842_137_destroy,"flixel.tile.FlxTilemapBuffer","destroy",0x52dcca56,"flixel.tile.FlxTilemapBuffer.destroy","flixel/tile/FlxTilemapBuffer.hx",137,0x56d29ad4)
HX_LOCAL_STACK_FRAME(_hx_pos_ea53adae7ad7e842_154_fill,"flixel.tile.FlxTilemapBuffer","fill",0x99957fa7,"flixel.tile.FlxTilemapBuffer.fill","flixel/tile/FlxTilemapBuffer.hx",154,0x56d29ad4)
HX_LOCAL_STACK_FRAME(_hx_pos_ea53adae7ad7e842_167_draw,"flixel.tile.FlxTilemapBuffer","draw",0x9849dd28,"flixel.tile.FlxTilemapBuffer.draw","flixel/tile/FlxTilemapBuffer.hx",167,0x56d29ad4)
HX_LOCAL_STACK_FRAME(_hx_pos_ea53adae7ad7e842_189_colorTransform,"flixel.tile.FlxTilemapBuffer","colorTransform",0x13c7ddad,"flixel.tile.FlxTilemapBuffer.colorTransform","flixel/tile/FlxTilemapBuffer.hx",189,0x56d29ad4)
HX_LOCAL_STACK_FRAME(_hx_pos_ea53adae7ad7e842_194_updateColumns,"flixel.tile.FlxTilemapBuffer","updateColumns",0xed291c30,"flixel.tile.FlxTilemapBuffer.updateColumns","flixel/tile/FlxTilemapBuffer.hx",194,0x56d29ad4)
HX_LOCAL_STACK_FRAME(_hx_pos_ea53adae7ad7e842_213_updateRows,"flixel.tile.FlxTilemapBuffer","updateRows",0xf31d03e6,"flixel.tile.FlxTilemapBuffer.updateRows","flixel/tile/FlxTilemapBuffer.hx",213,0x56d29ad4)
HX_LOCAL_STACK_FRAME(_hx_pos_ea53adae7ad7e842_234_isPixelPerfectRender,"flixel.tile.FlxTilemapBuffer","isPixelPerfectRender",0x7d4e558b,"flixel.tile.FlxTilemapBuffer.isPixelPerfectRender","flixel/tile/FlxTilemapBuffer.hx",234,0x56d29ad4)
HX_LOCAL_STACK_FRAME(_hx_pos_ea53adae7ad7e842_249_isDirty,"flixel.tile.FlxTilemapBuffer","isDirty",0xa4ac9124,"flixel.tile.FlxTilemapBuffer.isDirty","flixel/tile/FlxTilemapBuffer.hx",249,0x56d29ad4)
namespace flixel{
namespace tile{

void FlxTilemapBuffer_obj::__construct(int TileWidth,int TileHeight,int WidthInTiles,int HeightInTiles, ::flixel::FlxCamera Camera,::hx::Null< Float >  __o_ScaleX,::hx::Null< Float >  __o_ScaleY){
            		Float ScaleX = __o_ScaleX.Default(((Float)1.0));
            		Float ScaleY = __o_ScaleY.Default(((Float)1.0));
            	HX_STACKFRAME(&_hx_pos_ea53adae7ad7e842_19_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(TileWidth,"TileWidth")
            	HX_STACK_ARG(TileHeight,"TileHeight")
            	HX_STACK_ARG(WidthInTiles,"WidthInTiles")
            	HX_STACK_ARG(HeightInTiles,"HeightInTiles")
            	HX_STACK_ARG(Camera,"Camera")
            	HX_STACK_ARG(ScaleX,"ScaleX")
            	HX_STACK_ARG(ScaleY,"ScaleY")
HXLINE(  19)
HXLINE(  69)		this->antialiasing = false;
HXLINE(  54)		this->columns = 0;
HXLINE(  49)		this->rows = 0;
HXLINE(  44)		this->dirty = false;
HXLINE(  39)		this->height = ((Float)0);
HXLINE(  34)		this->width = ((Float)0);
HXLINE(  29)		this->y = ((Float)0);
HXLINE(  24)		this->x = ((Float)0);
HXLINE( 102)		this->resize(TileWidth,TileHeight,WidthInTiles,HeightInTiles,Camera,ScaleX,ScaleY);
            	}

Dynamic FlxTilemapBuffer_obj::__CreateEmpty() { return new FlxTilemapBuffer_obj; }

void *FlxTilemapBuffer_obj::_hx_vtable = 0;

Dynamic FlxTilemapBuffer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTilemapBuffer_obj > _hx_result = new FlxTilemapBuffer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool FlxTilemapBuffer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x68352dca;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_tile_FlxTilemapBuffer__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::tile::FlxTilemapBuffer_obj::destroy,
};

void *FlxTilemapBuffer_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_tile_FlxTilemapBuffer__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxTilemapBuffer_obj::resize(int TileWidth,int TileHeight,int WidthInTiles,int HeightInTiles, ::flixel::FlxCamera Camera,::hx::Null< Float >  __o_ScaleX,::hx::Null< Float >  __o_ScaleY){
            		Float ScaleX = __o_ScaleX.Default(((Float)1.0));
            		Float ScaleY = __o_ScaleY.Default(((Float)1.0));
            	HX_GC_STACKFRAME(&_hx_pos_ea53adae7ad7e842_106_resize)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(TileWidth,"TileWidth")
            	HX_STACK_ARG(TileHeight,"TileHeight")
            	HX_STACK_ARG(WidthInTiles,"WidthInTiles")
            	HX_STACK_ARG(HeightInTiles,"HeightInTiles")
            	HX_STACK_ARG(Camera,"Camera")
            	HX_STACK_ARG(ScaleX,"ScaleX")
            	HX_STACK_ARG(ScaleY,"ScaleY")
HXLINE( 106)
HXLINE( 107)		this->updateColumns(TileWidth,WidthInTiles,ScaleX,Camera);
HXLINE( 108)		this->updateRows(TileHeight,HeightInTiles,ScaleY,Camera);
HXLINE( 110)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 112)			HX_VARI( int,newWidth) = ::Std_obj::_hx_int(( (Float)((this->columns * TileWidth)) ));
HXLINE( 113)			HX_VARI( int,newHeight) = ::Std_obj::_hx_int(( (Float)((this->rows * TileHeight)) ));
HXLINE( 115)			if (::hx::IsNull( this->pixels )) {
HXLINE( 117)				this->pixels =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,newWidth,newHeight,true,0);
HXLINE( 118)				this->_flashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,newWidth,newHeight);
HXLINE( 119)				this->_matrix =  ::flixel::math::FlxMatrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE( 120)				this->dirty = true;
            			}
            			else {
HXLINE( 122)				bool _hx_tmp;
HXDLIN( 122)				if ((this->pixels->width == newWidth)) {
HXLINE( 122)					_hx_tmp = (this->pixels->height != newHeight);
            				}
            				else {
HXLINE( 122)					_hx_tmp = true;
            				}
HXDLIN( 122)				if (_hx_tmp) {
HXLINE( 124)					::flixel::util::FlxDestroyUtil_obj::dispose(this->pixels);
HXLINE( 125)					this->pixels =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,newWidth,newHeight,true,0);
HXLINE( 126)					this->_flashRect->setTo(( (Float)(0) ),( (Float)(0) ),( (Float)(newWidth) ),( (Float)(newHeight) ));
HXLINE( 127)					this->dirty = true;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC7(FlxTilemapBuffer_obj,resize,(void))

void FlxTilemapBuffer_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_ea53adae7ad7e842_137_destroy)
            	HX_STACK_THIS(this)
HXLINE( 137)
HXDLIN( 137)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 139)			this->pixels = ::flixel::util::FlxDestroyUtil_obj::dispose(this->pixels);
HXLINE( 140)			this->blend = null();
HXLINE( 141)			this->_matrix = null();
HXLINE( 142)			this->_flashRect = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemapBuffer_obj,destroy,(void))

void FlxTilemapBuffer_obj::fill(::hx::Null< int >  __o_Color){
            		int Color = __o_Color.Default(0);
            	HX_STACKFRAME(&_hx_pos_ea53adae7ad7e842_154_fill)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Color,"Color")
HXLINE( 154)
HXDLIN( 154)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 156)			this->pixels->fillRect(this->_flashRect,Color);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapBuffer_obj,fill,(void))

void FlxTilemapBuffer_obj::draw( ::flixel::FlxCamera Camera, ::openfl::geom::Point FlashPoint,::hx::Null< Float >  __o_ScaleX,::hx::Null< Float >  __o_ScaleY){
            		Float ScaleX = __o_ScaleX.Default(((Float)1.0));
            		Float ScaleY = __o_ScaleY.Default(((Float)1.0));
            	HX_STACKFRAME(&_hx_pos_ea53adae7ad7e842_167_draw)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Camera,"Camera")
            	HX_STACK_ARG(FlashPoint,"FlashPoint")
            	HX_STACK_ARG(ScaleX,"ScaleX")
            	HX_STACK_ARG(ScaleY,"ScaleY")
HXLINE( 167)
HXLINE( 168)		if (this->isPixelPerfectRender(Camera)) {
HXLINE( 170)			FlashPoint->x = ( (Float)(::Math_obj::floor(FlashPoint->x)) );
HXLINE( 171)			FlashPoint->y = ( (Float)(::Math_obj::floor(FlashPoint->y)) );
            		}
HXLINE( 174)		bool _hx_tmp;
HXDLIN( 174)		bool _hx_tmp1;
HXDLIN( 174)		if (this->isPixelPerfectRender(Camera)) {
HXLINE( 174)			if ((ScaleX == ((Float)1.0))) {
HXLINE( 174)				_hx_tmp1 = (ScaleY == ((Float)1.0));
            			}
            			else {
HXLINE( 174)				_hx_tmp1 = false;
            			}
            		}
            		else {
HXLINE( 174)			_hx_tmp1 = false;
            		}
HXDLIN( 174)		if (_hx_tmp1) {
HXLINE( 174)			_hx_tmp = ::hx::IsNull( this->blend );
            		}
            		else {
HXLINE( 174)			_hx_tmp = false;
            		}
HXDLIN( 174)		if (_hx_tmp) {
HXLINE( 176)			Camera->copyPixels(null(),this->pixels,this->_flashRect,FlashPoint,null(),null(),true,null());
            		}
            		else {
HXLINE( 180)			this->_matrix->identity();
HXLINE( 181)			this->_matrix->scale(ScaleX,ScaleY);
HXLINE( 182)			this->_matrix->translate(FlashPoint->x,FlashPoint->y);
HXLINE( 183)			Camera->drawPixels(null(),this->pixels,this->_matrix,null(),this->blend,this->antialiasing,null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemapBuffer_obj,draw,(void))

void FlxTilemapBuffer_obj::colorTransform( ::openfl::geom::ColorTransform Transform){
            	HX_STACKFRAME(&_hx_pos_ea53adae7ad7e842_189_colorTransform)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Transform,"Transform")
HXLINE( 189)
HXDLIN( 189)		this->pixels->colorTransform(this->_flashRect,Transform);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapBuffer_obj,colorTransform,(void))

void FlxTilemapBuffer_obj::updateColumns(int TileWidth,int WidthInTiles,::hx::Null< Float >  __o_ScaleX, ::flixel::FlxCamera Camera){
            		Float ScaleX = __o_ScaleX.Default(((Float)1.0));
            	HX_STACKFRAME(&_hx_pos_ea53adae7ad7e842_194_updateColumns)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(TileWidth,"TileWidth")
            	HX_STACK_ARG(WidthInTiles,"WidthInTiles")
            	HX_STACK_ARG(ScaleX,"ScaleX")
            	HX_STACK_ARG(Camera,"Camera")
HXLINE( 194)
HXLINE( 195)		if ((WidthInTiles < 0)) {
HXLINE( 196)			WidthInTiles = 0;
            		}
HXLINE( 198)		if (::hx::IsNull( Camera )) {
HXLINE( 199)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 201)		this->columns = (::Math_obj::ceil((Camera->viewWidth / (( (Float)(TileWidth) ) * ScaleX))) + 1);
HXLINE( 203)		if ((this->columns > WidthInTiles)) {
HXLINE( 204)			this->columns = WidthInTiles;
            		}
HXLINE( 206)		this->width = ( (Float)(::Std_obj::_hx_int((( (Float)((this->columns * TileWidth)) ) * ScaleX))) );
HXLINE( 208)		this->dirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemapBuffer_obj,updateColumns,(void))

void FlxTilemapBuffer_obj::updateRows(int TileHeight,int HeightInTiles,::hx::Null< Float >  __o_ScaleY, ::flixel::FlxCamera Camera){
            		Float ScaleY = __o_ScaleY.Default(((Float)1.0));
            	HX_STACKFRAME(&_hx_pos_ea53adae7ad7e842_213_updateRows)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(TileHeight,"TileHeight")
            	HX_STACK_ARG(HeightInTiles,"HeightInTiles")
            	HX_STACK_ARG(ScaleY,"ScaleY")
            	HX_STACK_ARG(Camera,"Camera")
HXLINE( 213)
HXLINE( 214)		if ((HeightInTiles < 0)) {
HXLINE( 215)			HeightInTiles = 0;
            		}
HXLINE( 217)		if (::hx::IsNull( Camera )) {
HXLINE( 218)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 220)		this->rows = (::Math_obj::ceil((Camera->viewHeight / (( (Float)(TileHeight) ) * ScaleY))) + 1);
HXLINE( 222)		if ((this->rows > HeightInTiles)) {
HXLINE( 223)			this->rows = HeightInTiles;
            		}
HXLINE( 225)		this->height = ( (Float)(::Std_obj::_hx_int((( (Float)((this->rows * TileHeight)) ) * ScaleY))) );
HXLINE( 227)		this->dirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemapBuffer_obj,updateRows,(void))

bool FlxTilemapBuffer_obj::isPixelPerfectRender( ::flixel::FlxCamera Camera){
            	HX_STACKFRAME(&_hx_pos_ea53adae7ad7e842_234_isPixelPerfectRender)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Camera,"Camera")
HXLINE( 234)
HXLINE( 235)		if (::hx::IsNull( Camera )) {
HXLINE( 236)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 238)		if (::hx::IsNull( this->pixelPerfectRender )) {
HXLINE( 238)			return Camera->pixelPerfectRender;
            		}
            		else {
HXLINE( 238)			return ( (bool)(this->pixelPerfectRender) );
            		}
HXDLIN( 238)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapBuffer_obj,isPixelPerfectRender,return )

bool FlxTilemapBuffer_obj::isDirty( ::flixel::tile::FlxTilemap Tilemap, ::flixel::FlxCamera Camera){
            	HX_STACKFRAME(&_hx_pos_ea53adae7ad7e842_249_isDirty)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Tilemap,"Tilemap")
            	HX_STACK_ARG(Camera,"Camera")
HXLINE( 249)
HXLINE( 250)		bool _hx_tmp;
HXDLIN( 250)		bool _hx_tmp1;
HXDLIN( 250)		bool _hx_tmp2;
HXDLIN( 250)		bool _hx_tmp3;
HXDLIN( 250)		bool _hx_tmp4;
HXDLIN( 250)		bool _hx_tmp5;
HXDLIN( 250)		bool _hx_tmp6;
HXDLIN( 250)		bool _hx_tmp7;
HXDLIN( 250)		bool _hx_tmp8;
HXDLIN( 250)		bool _hx_tmp9;
HXDLIN( 250)		bool _hx_tmp10;
HXDLIN( 250)		bool _hx_tmp11;
HXDLIN( 250)		if (!(this->dirty)) {
HXLINE( 250)			_hx_tmp11 = (Tilemap->x != this->_prevTilemapX);
            		}
            		else {
HXLINE( 250)			_hx_tmp11 = true;
            		}
HXDLIN( 250)		if (!(_hx_tmp11)) {
HXLINE( 250)			_hx_tmp10 = (Tilemap->y != this->_prevTilemapY);
            		}
            		else {
HXLINE( 250)			_hx_tmp10 = true;
            		}
HXDLIN( 250)		if (!(_hx_tmp10)) {
HXLINE( 250)			_hx_tmp9 = (Tilemap->scale->x != this->_prevTilemapScaleX);
            		}
            		else {
HXLINE( 250)			_hx_tmp9 = true;
            		}
HXDLIN( 250)		if (!(_hx_tmp9)) {
HXLINE( 250)			_hx_tmp8 = (Tilemap->scale->y != this->_prevTilemapScaleY);
            		}
            		else {
HXLINE( 250)			_hx_tmp8 = true;
            		}
HXDLIN( 250)		if (!(_hx_tmp8)) {
HXLINE( 250)			_hx_tmp7 = (Tilemap->scrollFactor->x != this->_prevTilemapScrollX);
            		}
            		else {
HXLINE( 250)			_hx_tmp7 = true;
            		}
HXDLIN( 250)		if (!(_hx_tmp7)) {
HXLINE( 250)			_hx_tmp6 = (Tilemap->scrollFactor->y != this->_prevTilemapScrollY);
            		}
            		else {
HXLINE( 250)			_hx_tmp6 = true;
            		}
HXDLIN( 250)		if (!(_hx_tmp6)) {
HXLINE( 250)			_hx_tmp5 = (Camera->scroll->x != this->_prevCameraScrollX);
            		}
            		else {
HXLINE( 250)			_hx_tmp5 = true;
            		}
HXDLIN( 250)		if (!(_hx_tmp5)) {
HXLINE( 250)			_hx_tmp4 = (Camera->scroll->y != this->_prevCameraScrollY);
            		}
            		else {
HXLINE( 250)			_hx_tmp4 = true;
            		}
HXDLIN( 250)		if (!(_hx_tmp4)) {
HXLINE( 250)			_hx_tmp3 = (Camera->scaleX != this->_prevCameraScaleX);
            		}
            		else {
HXLINE( 250)			_hx_tmp3 = true;
            		}
HXDLIN( 250)		if (!(_hx_tmp3)) {
HXLINE( 250)			_hx_tmp2 = (Camera->scaleY != this->_prevCameraScaleY);
            		}
            		else {
HXLINE( 250)			_hx_tmp2 = true;
            		}
HXDLIN( 250)		if (!(_hx_tmp2)) {
HXLINE( 250)			_hx_tmp1 = (Camera->width != this->_prevCameraWidth);
            		}
            		else {
HXLINE( 250)			_hx_tmp1 = true;
            		}
HXDLIN( 250)		if (!(_hx_tmp1)) {
HXLINE( 250)			_hx_tmp = (Camera->height != this->_prevCameraHeight);
            		}
            		else {
HXLINE( 250)			_hx_tmp = true;
            		}
HXDLIN( 250)		this->dirty = _hx_tmp;
HXLINE( 264)		if (this->dirty) {
HXLINE( 266)			this->_prevTilemapX = Tilemap->x;
HXLINE( 267)			this->_prevTilemapY = Tilemap->y;
HXLINE( 268)			this->_prevTilemapScaleX = Tilemap->scale->x;
HXLINE( 269)			this->_prevTilemapScaleY = Tilemap->scale->y;
HXLINE( 270)			this->_prevTilemapScrollX = Tilemap->scrollFactor->x;
HXLINE( 271)			this->_prevTilemapScrollY = Tilemap->scrollFactor->y;
HXLINE( 272)			this->_prevCameraScrollX = Camera->scroll->x;
HXLINE( 273)			this->_prevCameraScrollY = Camera->scroll->y;
HXLINE( 274)			this->_prevCameraScaleX = Camera->scaleX;
HXLINE( 275)			this->_prevCameraScaleY = Camera->scaleY;
HXLINE( 276)			this->_prevCameraWidth = Camera->width;
HXLINE( 277)			this->_prevCameraHeight = Camera->height;
            		}
HXLINE( 280)		return this->dirty;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemapBuffer_obj,isDirty,return )


::hx::ObjectPtr< FlxTilemapBuffer_obj > FlxTilemapBuffer_obj::__new(int TileWidth,int TileHeight,int WidthInTiles,int HeightInTiles, ::flixel::FlxCamera Camera,::hx::Null< Float >  __o_ScaleX,::hx::Null< Float >  __o_ScaleY) {
	::hx::ObjectPtr< FlxTilemapBuffer_obj > __this = new FlxTilemapBuffer_obj();
	__this->__construct(TileWidth,TileHeight,WidthInTiles,HeightInTiles,Camera,__o_ScaleX,__o_ScaleY);
	return __this;
}

::hx::ObjectPtr< FlxTilemapBuffer_obj > FlxTilemapBuffer_obj::__alloc(::hx::Ctx *_hx_ctx,int TileWidth,int TileHeight,int WidthInTiles,int HeightInTiles, ::flixel::FlxCamera Camera,::hx::Null< Float >  __o_ScaleX,::hx::Null< Float >  __o_ScaleY) {
	FlxTilemapBuffer_obj *__this = (FlxTilemapBuffer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTilemapBuffer_obj), true, "flixel.tile.FlxTilemapBuffer"));
	*(void **)__this = FlxTilemapBuffer_obj::_hx_vtable;
	__this->__construct(TileWidth,TileHeight,WidthInTiles,HeightInTiles,Camera,__o_ScaleX,__o_ScaleY);
	return __this;
}

FlxTilemapBuffer_obj::FlxTilemapBuffer_obj()
{
}

void FlxTilemapBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTilemapBuffer);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(rows,"rows");
	HX_MARK_MEMBER_NAME(columns,"columns");
	HX_MARK_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_MARK_MEMBER_NAME(pixels,"pixels");
	HX_MARK_MEMBER_NAME(blend,"blend");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_prevTilemapX,"_prevTilemapX");
	HX_MARK_MEMBER_NAME(_prevTilemapY,"_prevTilemapY");
	HX_MARK_MEMBER_NAME(_prevTilemapScaleX,"_prevTilemapScaleX");
	HX_MARK_MEMBER_NAME(_prevTilemapScaleY,"_prevTilemapScaleY");
	HX_MARK_MEMBER_NAME(_prevTilemapScrollX,"_prevTilemapScrollX");
	HX_MARK_MEMBER_NAME(_prevTilemapScrollY,"_prevTilemapScrollY");
	HX_MARK_MEMBER_NAME(_prevCameraScrollX,"_prevCameraScrollX");
	HX_MARK_MEMBER_NAME(_prevCameraScrollY,"_prevCameraScrollY");
	HX_MARK_MEMBER_NAME(_prevCameraScaleX,"_prevCameraScaleX");
	HX_MARK_MEMBER_NAME(_prevCameraScaleY,"_prevCameraScaleY");
	HX_MARK_MEMBER_NAME(_prevCameraWidth,"_prevCameraWidth");
	HX_MARK_MEMBER_NAME(_prevCameraHeight,"_prevCameraHeight");
	HX_MARK_END_CLASS();
}

void FlxTilemapBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(rows,"rows");
	HX_VISIT_MEMBER_NAME(columns,"columns");
	HX_VISIT_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_VISIT_MEMBER_NAME(pixels,"pixels");
	HX_VISIT_MEMBER_NAME(blend,"blend");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_prevTilemapX,"_prevTilemapX");
	HX_VISIT_MEMBER_NAME(_prevTilemapY,"_prevTilemapY");
	HX_VISIT_MEMBER_NAME(_prevTilemapScaleX,"_prevTilemapScaleX");
	HX_VISIT_MEMBER_NAME(_prevTilemapScaleY,"_prevTilemapScaleY");
	HX_VISIT_MEMBER_NAME(_prevTilemapScrollX,"_prevTilemapScrollX");
	HX_VISIT_MEMBER_NAME(_prevTilemapScrollY,"_prevTilemapScrollY");
	HX_VISIT_MEMBER_NAME(_prevCameraScrollX,"_prevCameraScrollX");
	HX_VISIT_MEMBER_NAME(_prevCameraScrollY,"_prevCameraScrollY");
	HX_VISIT_MEMBER_NAME(_prevCameraScaleX,"_prevCameraScaleX");
	HX_VISIT_MEMBER_NAME(_prevCameraScaleY,"_prevCameraScaleY");
	HX_VISIT_MEMBER_NAME(_prevCameraWidth,"_prevCameraWidth");
	HX_VISIT_MEMBER_NAME(_prevCameraHeight,"_prevCameraHeight");
}

::hx::Val FlxTilemapBuffer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { return ::hx::Val( rows ); }
		if (HX_FIELD_EQ(inName,"fill") ) { return ::hx::Val( fill_dyn() ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"dirty") ) { return ::hx::Val( dirty ); }
		if (HX_FIELD_EQ(inName,"blend") ) { return ::hx::Val( blend ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"pixels") ) { return ::hx::Val( pixels ); }
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { return ::hx::Val( columns ); }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return ::hx::Val( _matrix ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"isDirty") ) { return ::hx::Val( isDirty_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return ::hx::Val( _flashRect ); }
		if (HX_FIELD_EQ(inName,"updateRows") ) { return ::hx::Val( updateRows_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return ::hx::Val( antialiasing ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_prevTilemapX") ) { return ::hx::Val( _prevTilemapX ); }
		if (HX_FIELD_EQ(inName,"_prevTilemapY") ) { return ::hx::Val( _prevTilemapY ); }
		if (HX_FIELD_EQ(inName,"updateColumns") ) { return ::hx::Val( updateColumns_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return ::hx::Val( colorTransform_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_prevCameraWidth") ) { return ::hx::Val( _prevCameraWidth ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_prevCameraScaleX") ) { return ::hx::Val( _prevCameraScaleX ); }
		if (HX_FIELD_EQ(inName,"_prevCameraScaleY") ) { return ::hx::Val( _prevCameraScaleY ); }
		if (HX_FIELD_EQ(inName,"_prevCameraHeight") ) { return ::hx::Val( _prevCameraHeight ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { return ::hx::Val( pixelPerfectRender ); }
		if (HX_FIELD_EQ(inName,"_prevTilemapScaleX") ) { return ::hx::Val( _prevTilemapScaleX ); }
		if (HX_FIELD_EQ(inName,"_prevTilemapScaleY") ) { return ::hx::Val( _prevTilemapScaleY ); }
		if (HX_FIELD_EQ(inName,"_prevCameraScrollX") ) { return ::hx::Val( _prevCameraScrollX ); }
		if (HX_FIELD_EQ(inName,"_prevCameraScrollY") ) { return ::hx::Val( _prevCameraScrollY ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_prevTilemapScrollX") ) { return ::hx::Val( _prevTilemapScrollX ); }
		if (HX_FIELD_EQ(inName,"_prevTilemapScrollY") ) { return ::hx::Val( _prevTilemapScrollY ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"isPixelPerfectRender") ) { return ::hx::Val( isPixelPerfectRender_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxTilemapBuffer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { rows=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blend") ) { blend=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pixels") ) { pixels=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { columns=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast<  ::flixel::math::FlxMatrix >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { antialiasing=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_prevTilemapX") ) { _prevTilemapX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prevTilemapY") ) { _prevTilemapY=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_prevCameraWidth") ) { _prevCameraWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_prevCameraScaleX") ) { _prevCameraScaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prevCameraScaleY") ) { _prevCameraScaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prevCameraHeight") ) { _prevCameraHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { pixelPerfectRender=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prevTilemapScaleX") ) { _prevTilemapScaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prevTilemapScaleY") ) { _prevTilemapScaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prevCameraScrollX") ) { _prevCameraScrollX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prevCameraScrollY") ) { _prevCameraScrollY=inValue.Cast< Float >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_prevTilemapScrollX") ) { _prevTilemapScrollX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prevTilemapScrollY") ) { _prevTilemapScrollY=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTilemapBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("dirty",12,50,d0,d9));
	outFields->push(HX_("rows",19,f5,ae,4b));
	outFields->push(HX_("columns",dd,ac,59,f3));
	outFields->push(HX_("pixelPerfectRender",dd,59,4f,2f));
	outFields->push(HX_("pixels",2d,ef,a9,8c));
	outFields->push(HX_("blend",51,e8,f4,b4));
	outFields->push(HX_("antialiasing",f4,16,b3,48));
	outFields->push(HX_("_flashRect",b5,c2,f3,5d));
	outFields->push(HX_("_matrix",e0,47,3f,2a));
	outFields->push(HX_("_prevTilemapX",5c,f1,16,93));
	outFields->push(HX_("_prevTilemapY",5d,f1,16,93));
	outFields->push(HX_("_prevTilemapScaleX",2a,3f,47,89));
	outFields->push(HX_("_prevTilemapScaleY",2b,3f,47,89));
	outFields->push(HX_("_prevTilemapScrollX",8f,e7,e0,60));
	outFields->push(HX_("_prevTilemapScrollY",90,e7,e0,60));
	outFields->push(HX_("_prevCameraScrollX",54,fd,23,d5));
	outFields->push(HX_("_prevCameraScrollY",55,fd,23,d5));
	outFields->push(HX_("_prevCameraScaleX",05,c9,dc,d7));
	outFields->push(HX_("_prevCameraScaleY",06,c9,dc,d7));
	outFields->push(HX_("_prevCameraWidth",6f,93,2d,40));
	outFields->push(HX_("_prevCameraHeight",5e,e6,02,9e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTilemapBuffer_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsBool,(int)offsetof(FlxTilemapBuffer_obj,dirty),HX_("dirty",12,50,d0,d9)},
	{::hx::fsInt,(int)offsetof(FlxTilemapBuffer_obj,rows),HX_("rows",19,f5,ae,4b)},
	{::hx::fsInt,(int)offsetof(FlxTilemapBuffer_obj,columns),HX_("columns",dd,ac,59,f3)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxTilemapBuffer_obj,pixelPerfectRender),HX_("pixelPerfectRender",dd,59,4f,2f)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(FlxTilemapBuffer_obj,pixels),HX_("pixels",2d,ef,a9,8c)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxTilemapBuffer_obj,blend),HX_("blend",51,e8,f4,b4)},
	{::hx::fsBool,(int)offsetof(FlxTilemapBuffer_obj,antialiasing),HX_("antialiasing",f4,16,b3,48)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(FlxTilemapBuffer_obj,_flashRect),HX_("_flashRect",b5,c2,f3,5d)},
	{::hx::fsObject /*  ::flixel::math::FlxMatrix */ ,(int)offsetof(FlxTilemapBuffer_obj,_matrix),HX_("_matrix",e0,47,3f,2a)},
	{::hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,_prevTilemapX),HX_("_prevTilemapX",5c,f1,16,93)},
	{::hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,_prevTilemapY),HX_("_prevTilemapY",5d,f1,16,93)},
	{::hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,_prevTilemapScaleX),HX_("_prevTilemapScaleX",2a,3f,47,89)},
	{::hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,_prevTilemapScaleY),HX_("_prevTilemapScaleY",2b,3f,47,89)},
	{::hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,_prevTilemapScrollX),HX_("_prevTilemapScrollX",8f,e7,e0,60)},
	{::hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,_prevTilemapScrollY),HX_("_prevTilemapScrollY",90,e7,e0,60)},
	{::hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,_prevCameraScrollX),HX_("_prevCameraScrollX",54,fd,23,d5)},
	{::hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,_prevCameraScrollY),HX_("_prevCameraScrollY",55,fd,23,d5)},
	{::hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,_prevCameraScaleX),HX_("_prevCameraScaleX",05,c9,dc,d7)},
	{::hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,_prevCameraScaleY),HX_("_prevCameraScaleY",06,c9,dc,d7)},
	{::hx::fsInt,(int)offsetof(FlxTilemapBuffer_obj,_prevCameraWidth),HX_("_prevCameraWidth",6f,93,2d,40)},
	{::hx::fsInt,(int)offsetof(FlxTilemapBuffer_obj,_prevCameraHeight),HX_("_prevCameraHeight",5e,e6,02,9e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxTilemapBuffer_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTilemapBuffer_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("dirty",12,50,d0,d9),
	HX_("rows",19,f5,ae,4b),
	HX_("columns",dd,ac,59,f3),
	HX_("pixelPerfectRender",dd,59,4f,2f),
	HX_("pixels",2d,ef,a9,8c),
	HX_("blend",51,e8,f4,b4),
	HX_("antialiasing",f4,16,b3,48),
	HX_("_flashRect",b5,c2,f3,5d),
	HX_("_matrix",e0,47,3f,2a),
	HX_("_prevTilemapX",5c,f1,16,93),
	HX_("_prevTilemapY",5d,f1,16,93),
	HX_("_prevTilemapScaleX",2a,3f,47,89),
	HX_("_prevTilemapScaleY",2b,3f,47,89),
	HX_("_prevTilemapScrollX",8f,e7,e0,60),
	HX_("_prevTilemapScrollY",90,e7,e0,60),
	HX_("_prevCameraScrollX",54,fd,23,d5),
	HX_("_prevCameraScrollY",55,fd,23,d5),
	HX_("_prevCameraScaleX",05,c9,dc,d7),
	HX_("_prevCameraScaleY",06,c9,dc,d7),
	HX_("_prevCameraWidth",6f,93,2d,40),
	HX_("_prevCameraHeight",5e,e6,02,9e),
	HX_("resize",f4,59,7b,08),
	HX_("destroy",fa,2c,86,24),
	HX_("fill",83,ce,bb,43),
	HX_("draw",04,2c,70,42),
	HX_("colorTransform",89,d7,3f,ad),
	HX_("updateColumns",d4,11,c8,be),
	HX_("updateRows",c2,df,63,04),
	HX_("isPixelPerfectRender",67,1c,f9,26),
	HX_("isDirty",c8,f3,55,76),
	::String(null()) };

::hx::Class FlxTilemapBuffer_obj::__mClass;

void FlxTilemapBuffer_obj::__register()
{
	FlxTilemapBuffer_obj _hx_dummy;
	FlxTilemapBuffer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.tile.FlxTilemapBuffer",ca,41,20,09);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTilemapBuffer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTilemapBuffer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTilemapBuffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTilemapBuffer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace tile
