#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CairoRenderer
#include <openfl/display/CairoRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLRenderer
#include <openfl/display/OpenGLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoGraphics
#include <openfl/display/_internal/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DBuffer
#include <openfl/display/_internal/Context3DBuffer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DElementType
#include <openfl/display/_internal/Context3DElementType.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DGraphics
#include <openfl/display/_internal/Context3DGraphics.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DMaskShader
#include <openfl/display/_internal/Context3DMaskShader.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandBuffer
#include <openfl/display/_internal/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandReader
#include <openfl/display/_internal/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandType
#include <openfl/display/_internal/DrawCommandType.h>
#endif
#ifndef INCLUDED_openfl_display__internal_ShaderBuffer
#include <openfl/display/_internal/ShaderBuffer.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_14098afca734a8c3_41_buildBuffer,"openfl.display._internal.Context3DGraphics","buildBuffer",0x4d7a46af,"openfl.display._internal.Context3DGraphics.buildBuffer","openfl/display/_internal/Context3DGraphics.hx",41,0x8e8e2a52)
HX_LOCAL_STACK_FRAME(_hx_pos_14098afca734a8c3_370_isCompatible,"openfl.display._internal.Context3DGraphics","isCompatible",0xc3dcc4dd,"openfl.display._internal.Context3DGraphics.isCompatible","openfl/display/_internal/Context3DGraphics.hx",370,0x8e8e2a52)
HX_LOCAL_STACK_FRAME(_hx_pos_14098afca734a8c3_463_render,"openfl.display._internal.Context3DGraphics","render",0x6cd95315,"openfl.display._internal.Context3DGraphics.render","openfl/display/_internal/Context3DGraphics.hx",463,0x8e8e2a52)
HX_LOCAL_STACK_FRAME(_hx_pos_14098afca734a8c3_821_renderMask,"openfl.display._internal.Context3DGraphics","renderMask",0xda186ea1,"openfl.display._internal.Context3DGraphics.renderMask","openfl/display/_internal/Context3DGraphics.hx",821,0x8e8e2a52)
HX_LOCAL_STACK_FRAME(_hx_pos_14098afca734a8c3_830_resizeIndexBuffer,"openfl.display._internal.Context3DGraphics","resizeIndexBuffer",0x673d02bf,"openfl.display._internal.Context3DGraphics.resizeIndexBuffer","openfl/display/_internal/Context3DGraphics.hx",830,0x8e8e2a52)
HX_LOCAL_STACK_FRAME(_hx_pos_14098afca734a8c3_878_resizeVertexBuffer,"openfl.display._internal.Context3DGraphics","resizeVertexBuffer",0x62dc7dd7,"openfl.display._internal.Context3DGraphics.resizeVertexBuffer","openfl/display/_internal/Context3DGraphics.hx",878,0x8e8e2a52)
HX_LOCAL_STACK_FRAME(_hx_pos_14098afca734a8c3_34_boot,"openfl.display._internal.Context3DGraphics","boot",0x906dae31,"openfl.display._internal.Context3DGraphics.boot","openfl/display/_internal/Context3DGraphics.hx",34,0x8e8e2a52)
HX_LOCAL_STACK_FRAME(_hx_pos_14098afca734a8c3_36_boot,"openfl.display._internal.Context3DGraphics","boot",0x906dae31,"openfl.display._internal.Context3DGraphics.boot","openfl/display/_internal/Context3DGraphics.hx",36,0x8e8e2a52)
HX_LOCAL_STACK_FRAME(_hx_pos_14098afca734a8c3_38_boot,"openfl.display._internal.Context3DGraphics","boot",0x906dae31,"openfl.display._internal.Context3DGraphics.boot","openfl/display/_internal/Context3DGraphics.hx",38,0x8e8e2a52)
namespace openfl{
namespace display{
namespace _internal{

void Context3DGraphics_obj::__construct() { }

Dynamic Context3DGraphics_obj::__CreateEmpty() { return new Context3DGraphics_obj; }

void *Context3DGraphics_obj::_hx_vtable = 0;

Dynamic Context3DGraphics_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Context3DGraphics_obj > _hx_result = new Context3DGraphics_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DGraphics_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2cec42c1;
}

 ::openfl::display::BitmapData Context3DGraphics_obj::blankBitmapData;

bool Context3DGraphics_obj::maskRender;

 ::openfl::geom::ColorTransform Context3DGraphics_obj::tempColorTransform;

void Context3DGraphics_obj::buildBuffer( ::openfl::display::Graphics graphics, ::openfl::display::OpenGLRenderer renderer){
            	HX_GC_STACKFRAME(&_hx_pos_14098afca734a8c3_41_buildBuffer)
            	HX_STACK_ARG(graphics,"graphics")
            	HX_STACK_ARG(renderer,"renderer")
HXLINE(  41)
HXLINE(  42)		HX_VARI( int,quadBufferPosition) = 0;
HXLINE(  43)		HX_VARI( int,triangleIndexBufferPosition) = 0;
HXLINE(  44)		HX_VARI( int,vertexBufferPosition) = 0;
HXLINE(  45)		HX_VARI( int,vertexBufferPositionUVT) = 0;
HXLINE(  47)		HX_VARI(  ::openfl::display::_internal::DrawCommandReader,data) =  ::openfl::display::_internal::DrawCommandReader_obj::__alloc( HX_CTX ,graphics->_hx___commands);
HXLINE(  49)		HX_VARI(  ::openfl::display3D::Context3D,context) = renderer->_hx___context3D;
HXLINE(  51)		HX_VARI(  ::openfl::geom::Rectangle,tileRect) = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE(  52)		HX_VARI(  ::openfl::geom::Matrix,tileTransform) = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE(  54)		HX_VARI(  ::openfl::display::BitmapData,bitmap) = null();
HXLINE(  56)		{
HXLINE(  56)			int _g = 0;
HXDLIN(  56)			::Array< ::Dynamic> _g1 = graphics->_hx___commands->types;
HXDLIN(  56)			while((_g < _g1->length)){
HXLINE(  56)				HX_VARI(  ::openfl::display::_internal::DrawCommandType,type) = _g1->__get(_g).StaticCast<  ::openfl::display::_internal::DrawCommandType >();
HXDLIN(  56)				_g = (_g + 1);
HXLINE(  58)				switch((int)(type->_hx_getIndex())){
            					case (int)0: {
HXLINE(  61)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->oPos = (data1->oPos + 2);
HXDLIN(  61)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  61)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->iPos = (data1->iPos + 1);
HXDLIN(  61)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  61)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->oPos = (data1->oPos + 4);
HXDLIN(  61)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  61)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  61)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  61)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  61)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  61)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->fPos = (data1->fPos + 5);
HXDLIN(  61)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  61)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->oPos = (data1->oPos + 2);
HXDLIN(  61)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  61)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->oPos = (data1->oPos + 4);
HXDLIN(  61)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  61)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  61)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  61)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  61)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  61)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->oPos = (data1->oPos + 4);
HXDLIN(  61)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  61)								data2->iPos = (data2->iPos + 1);
HXDLIN(  61)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  61)								data3->fPos = (data3->fPos + 2);
HXDLIN(  61)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  61)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(  61)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn();
HXDLIN(  61)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(  61)						HX_VARI(  ::openfl::display::_internal::DrawCommandReader,c) = this1;
HXLINE(  62)						bitmap = ( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) );
            					}
            					break;
            					case (int)1: {
HXLINE(  65)						bitmap = null();
HXLINE(  66)						{
HXLINE(  66)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->oPos = (data1->oPos + 2);
HXDLIN(  66)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  66)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->iPos = (data1->iPos + 1);
HXDLIN(  66)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  66)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->oPos = (data1->oPos + 4);
HXDLIN(  66)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  66)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(  66)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  66)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(  66)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  66)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->fPos = (data1->fPos + 5);
HXDLIN(  66)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  66)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->oPos = (data1->oPos + 2);
HXDLIN(  66)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  66)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->oPos = (data1->oPos + 4);
HXDLIN(  66)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  66)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(  66)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  66)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(  66)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  66)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->oPos = (data1->oPos + 4);
HXDLIN(  66)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  66)									data2->iPos = (data2->iPos + 1);
HXDLIN(  66)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  66)									data3->fPos = (data3->fPos + 2);
HXDLIN(  66)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  66)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(  66)							data->prev = type;
            						}
            					}
            					break;
            					case (int)3: {
HXLINE(  69)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->oPos = (data1->oPos + 2);
HXDLIN(  69)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  69)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->iPos = (data1->iPos + 1);
HXDLIN(  69)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  69)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->oPos = (data1->oPos + 4);
HXDLIN(  69)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  69)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  69)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  69)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  69)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  69)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->fPos = (data1->fPos + 5);
HXDLIN(  69)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  69)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->oPos = (data1->oPos + 2);
HXDLIN(  69)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  69)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->oPos = (data1->oPos + 4);
HXDLIN(  69)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  69)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  69)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  69)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  69)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  69)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->oPos = (data1->oPos + 4);
HXDLIN(  69)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  69)								data2->iPos = (data2->iPos + 1);
HXDLIN(  69)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  69)								data3->fPos = (data3->fPos + 2);
HXDLIN(  69)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  69)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(  69)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_SHADER_FILL_dyn();
HXDLIN(  69)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(  69)						HX_VARI(  ::openfl::display::_internal::DrawCommandReader,c) = this1;
HXLINE(  70)						HX_VARI(  ::openfl::display::_internal::ShaderBuffer,shaderBuffer) = ( ( ::openfl::display::_internal::ShaderBuffer)(c->buffer->o->__get(c->oPos)) );
HXLINE(  72)						bitmap = null();
HXLINE(  74)						if (::hx::IsNotNull( shaderBuffer )) {
HXLINE(  76)							int _g = 0;
HXDLIN(  76)							int _g1 = shaderBuffer->inputCount;
HXDLIN(  76)							while((_g < _g1)){
HXLINE(  76)								_g = (_g + 1);
HXDLIN(  76)								HX_VARI( int,i) = (_g - 1);
HXLINE(  78)								if ((shaderBuffer->inputRefs->__get(i).StaticCast<  ::openfl::display::ShaderInput_openfl_display_BitmapData >()->name == HX_("bitmap",ef,0f,0c,f1))) {
HXLINE(  80)									bitmap = shaderBuffer->inputs->__get(i).StaticCast<  ::openfl::display::BitmapData >();
HXLINE(  81)									goto _hx_goto_1;
            								}
            							}
            							_hx_goto_1:;
            						}
            					}
            					break;
            					case (int)8: {
HXLINE(  89)						if (::hx::IsNotNull( bitmap )) {
HXLINE(  91)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->oPos = (data1->oPos + 2);
HXDLIN(  91)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  91)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->iPos = (data1->iPos + 1);
HXDLIN(  91)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  91)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->oPos = (data1->oPos + 4);
HXDLIN(  91)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  91)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(  91)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  91)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(  91)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  91)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->fPos = (data1->fPos + 5);
HXDLIN(  91)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  91)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->oPos = (data1->oPos + 2);
HXDLIN(  91)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  91)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->oPos = (data1->oPos + 4);
HXDLIN(  91)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  91)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(  91)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  91)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(  91)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  91)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->oPos = (data1->oPos + 4);
HXDLIN(  91)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  91)									data2->iPos = (data2->iPos + 1);
HXDLIN(  91)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  91)									data3->fPos = (data3->fPos + 2);
HXDLIN(  91)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  91)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(  91)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_QUADS_dyn();
HXDLIN(  91)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(  91)							HX_VARI(  ::openfl::display::_internal::DrawCommandReader,c) = this1;
HXLINE(  92)							HX_VARI(  ::openfl::_Vector::FloatVector,rects) = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get(c->oPos)) );
HXLINE(  93)							HX_VARI(  ::openfl::_Vector::IntVector,indices) = ( ( ::openfl::_Vector::IntVector)(c->buffer->o->__get((c->oPos + 1))) );
HXLINE(  94)							HX_VARI(  ::openfl::_Vector::FloatVector,transforms) = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) );
HXLINE(  97)							HX_VAR( ::Array< Float >,rects1);
HXDLIN(  97)							if (::hx::IsNull( rects )) {
HXLINE(  97)								rects1 = null();
            							}
            							else {
HXLINE(  97)								rects1 = ( (::Array< Float >)(rects->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
            							}
HXLINE(  98)							HX_VAR( ::Array< int >,indices1);
HXDLIN(  98)							if (::hx::IsNull( indices )) {
HXLINE(  98)								indices1 = null();
            							}
            							else {
HXLINE(  98)								indices1 = ( (::Array< int >)(indices->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
            							}
HXLINE(  99)							HX_VAR( ::Array< Float >,transforms1);
HXDLIN(  99)							if (::hx::IsNull( transforms )) {
HXLINE(  99)								transforms1 = null();
            							}
            							else {
HXLINE(  99)								transforms1 = ( (::Array< Float >)(transforms->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
            							}
HXLINE( 102)							HX_VARI( bool,hasIndices) = ::hx::IsNotNull( indices1 );
HXLINE( 103)							HX_VARI( bool,transformABCD) = false;
HXDLIN( 103)							HX_VARI( bool,transformXY) = false;
HXLINE( 105)							HX_VAR( int,length);
HXDLIN( 105)							if (hasIndices) {
HXLINE( 105)								length = indices1->length;
            							}
            							else {
HXLINE( 105)								length = ::Math_obj::floor((( (Float)(rects1->length) ) / ( (Float)(4) )));
            							}
HXLINE( 106)							if ((length == 0)) {
HXLINE( 106)								return;
            							}
HXLINE( 108)							if (::hx::IsNotNull( transforms1 )) {
HXLINE( 110)								if ((transforms1->length >= (length * 6))) {
HXLINE( 112)									transformABCD = true;
HXLINE( 113)									transformXY = true;
            								}
            								else {
HXLINE( 115)									if ((transforms1->length >= (length * 4))) {
HXLINE( 117)										transformABCD = true;
            									}
            									else {
HXLINE( 119)										if ((transforms1->length >= (length * 2))) {
HXLINE( 121)											transformXY = true;
            										}
            									}
            								}
            							}
HXLINE( 125)							HX_VARI( int,dataPerVertex) = 4;
HXLINE( 126)							HX_VARI( int,stride) = (dataPerVertex * 4);
HXLINE( 128)							if (::hx::IsNull( graphics->_hx___quadBuffer )) {
HXLINE( 130)								graphics->_hx___quadBuffer =  ::openfl::display::_internal::Context3DBuffer_obj::__alloc( HX_CTX ,context,::openfl::display::_internal::Context3DElementType_obj::QUADS_dyn(),length,dataPerVertex);
            							}
            							else {
HXLINE( 134)								graphics->_hx___quadBuffer->resize((quadBufferPosition + length),dataPerVertex);
            							}
HXLINE( 137)							HX_VAR( int,vertexOffset);
HXDLIN( 137)							HX_VARI( Float,alpha) = ((Float)1.0);
HXDLIN( 137)							HX_VAR(  ::Dynamic,tileData);
HXDLIN( 137)							HX_VAR(  ::Dynamic,id);
HXLINE( 138)							HX_VAR( Float,tileWidth);
HXDLIN( 138)							HX_VAR( Float,tileHeight);
HXLINE( 142)							HX_VAR( Float,uvX);
HXDLIN( 142)							HX_VAR( Float,uvY);
HXDLIN( 142)							HX_VAR( Float,uvWidth);
HXDLIN( 142)							HX_VAR( Float,uvHeight);
HXLINE( 143)							HX_VAR( Float,x);
HXDLIN( 143)							HX_VAR( Float,y);
HXDLIN( 143)							HX_VAR( Float,x2);
HXDLIN( 143)							HX_VAR( Float,y2);
HXDLIN( 143)							HX_VAR( Float,x3);
HXDLIN( 143)							HX_VAR( Float,y3);
HXDLIN( 143)							HX_VAR( Float,x4);
HXDLIN( 143)							HX_VAR( Float,y4);
HXLINE( 144)							HX_VAR( int,ri);
HXDLIN( 144)							HX_VAR( int,ti);
HXLINE( 146)							HX_VARI(  ::lime::utils::ArrayBufferView,vertexBufferData) = graphics->_hx___quadBuffer->vertexBufferData;
HXLINE( 138)							HX_VARI( int,bitmapWidth) = bitmap->width;
HXDLIN( 138)							HX_VARI( int,bitmapHeight) = bitmap->height;
HXLINE( 164)							HX_VARI(  ::openfl::geom::Rectangle,sourceRect) = bitmap->rect;
HXLINE( 166)							{
HXLINE( 166)								int _g = 0;
HXDLIN( 166)								int _g1 = length;
HXDLIN( 166)								while((_g < _g1)){
HXLINE( 166)									_g = (_g + 1);
HXDLIN( 166)									HX_VARI( int,i) = (_g - 1);
HXLINE( 168)									vertexOffset = ((quadBufferPosition + i) * stride);
HXLINE( 170)									if (hasIndices) {
HXLINE( 170)										ri = (indices1->__get(i) * 4);
            									}
            									else {
HXLINE( 170)										ri = (i * 4);
            									}
HXLINE( 171)									if ((ri < 0)) {
HXLINE( 171)										continue;
            									}
HXLINE( 172)									tileRect->setTo(rects1->__get(ri),rects1->__get((ri + 1)),rects1->__get((ri + 2)),rects1->__get((ri + 3)));
HXLINE( 174)									tileWidth = tileRect->width;
HXLINE( 175)									tileHeight = tileRect->height;
HXLINE( 177)									bool _hx_tmp;
HXDLIN( 177)									if (!((tileWidth <= 0))) {
HXLINE( 177)										_hx_tmp = (tileHeight <= 0);
            									}
            									else {
HXLINE( 177)										_hx_tmp = true;
            									}
HXDLIN( 177)									if (_hx_tmp) {
HXLINE( 179)										continue;
            									}
HXLINE( 182)									bool _hx_tmp1;
HXDLIN( 182)									if (transformABCD) {
HXLINE( 182)										_hx_tmp1 = transformXY;
            									}
            									else {
HXLINE( 182)										_hx_tmp1 = false;
            									}
HXDLIN( 182)									if (_hx_tmp1) {
HXLINE( 184)										ti = (i * 6);
HXLINE( 185)										tileTransform->setTo(transforms1->__get(ti),transforms1->__get((ti + 1)),transforms1->__get((ti + 2)),transforms1->__get((ti + 3)),transforms1->__get((ti + 4)),transforms1->__get((ti + 5)));
            									}
            									else {
HXLINE( 188)										if (transformABCD) {
HXLINE( 190)											ti = (i * 4);
HXLINE( 191)											tileTransform->setTo(transforms1->__get(ti),transforms1->__get((ti + 1)),transforms1->__get((ti + 2)),transforms1->__get((ti + 3)),tileRect->x,tileRect->y);
            										}
            										else {
HXLINE( 193)											if (transformXY) {
HXLINE( 195)												ti = (i * 2);
HXLINE( 196)												tileTransform->tx = transforms1->__get(ti);
HXLINE( 197)												tileTransform->ty = transforms1->__get((ti + 1));
            											}
            											else {
HXLINE( 201)												tileTransform->tx = tileRect->x;
HXLINE( 202)												tileTransform->ty = tileRect->y;
            											}
            										}
            									}
HXLINE( 205)									uvX = (tileRect->x / ( (Float)(bitmapWidth) ));
HXLINE( 206)									uvY = (tileRect->y / ( (Float)(bitmapHeight) ));
HXLINE( 207)									uvWidth = (tileRect->get_right() / ( (Float)(bitmapWidth) ));
HXLINE( 208)									uvHeight = (tileRect->get_bottom() / ( (Float)(bitmapHeight) ));
HXLINE( 210)									x = (((( (Float)(0) ) * tileTransform->a) + (( (Float)(0) ) * tileTransform->c)) + tileTransform->tx);
HXLINE( 211)									y = (((( (Float)(0) ) * tileTransform->b) + (( (Float)(0) ) * tileTransform->d)) + tileTransform->ty);
HXLINE( 212)									x2 = (((tileWidth * tileTransform->a) + (( (Float)(0) ) * tileTransform->c)) + tileTransform->tx);
HXLINE( 213)									y2 = (((tileWidth * tileTransform->b) + (( (Float)(0) ) * tileTransform->d)) + tileTransform->ty);
HXLINE( 214)									x3 = (((( (Float)(0) ) * tileTransform->a) + (tileHeight * tileTransform->c)) + tileTransform->tx);
HXLINE( 215)									y3 = (((( (Float)(0) ) * tileTransform->b) + (tileHeight * tileTransform->d)) + tileTransform->ty);
HXLINE( 216)									x4 = (((tileWidth * tileTransform->a) + (tileHeight * tileTransform->c)) + tileTransform->tx);
HXLINE( 217)									y4 = (((tileWidth * tileTransform->b) + (tileHeight * tileTransform->d)) + tileTransform->ty);
HXLINE( 219)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (vertexOffset * 4)),x);
HXLINE( 220)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((vertexOffset + 1) * 4)),y);
HXLINE( 221)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((vertexOffset + 2) * 4)),uvX);
HXLINE( 222)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((vertexOffset + 3) * 4)),uvY);
HXLINE( 224)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((vertexOffset + dataPerVertex) * 4)),x2);
HXLINE( 225)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((vertexOffset + dataPerVertex) + 1) * 4)),y2);
HXLINE( 226)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((vertexOffset + dataPerVertex) + 2) * 4)),uvWidth);
HXLINE( 227)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((vertexOffset + dataPerVertex) + 3) * 4)),uvY);
HXLINE( 229)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((vertexOffset + (dataPerVertex * 2)) * 4)),x3);
HXLINE( 230)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((vertexOffset + (dataPerVertex * 2)) + 1) * 4)),y3);
HXLINE( 231)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((vertexOffset + (dataPerVertex * 2)) + 2) * 4)),uvX);
HXLINE( 232)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((vertexOffset + (dataPerVertex * 2)) + 3) * 4)),uvHeight);
HXLINE( 234)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((vertexOffset + (dataPerVertex * 3)) * 4)),x4);
HXLINE( 235)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((vertexOffset + (dataPerVertex * 3)) + 1) * 4)),y4);
HXLINE( 236)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((vertexOffset + (dataPerVertex * 3)) + 2) * 4)),uvWidth);
HXLINE( 237)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((vertexOffset + (dataPerVertex * 3)) + 3) * 4)),uvHeight);
            								}
            							}
HXLINE( 240)							quadBufferPosition = (quadBufferPosition + length);
            						}
            					}
            					break;
            					case (int)12: {
HXLINE( 244)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->oPos = (data1->oPos + 2);
HXDLIN( 244)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 244)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->iPos = (data1->iPos + 1);
HXDLIN( 244)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 244)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->oPos = (data1->oPos + 4);
HXDLIN( 244)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 244)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 244)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 244)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 244)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 244)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->fPos = (data1->fPos + 5);
HXDLIN( 244)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 244)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->oPos = (data1->oPos + 2);
HXDLIN( 244)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 244)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->oPos = (data1->oPos + 4);
HXDLIN( 244)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 244)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 244)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 244)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 244)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 244)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->oPos = (data1->oPos + 4);
HXDLIN( 244)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 244)								data2->iPos = (data2->iPos + 1);
HXDLIN( 244)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 244)								data3->fPos = (data3->fPos + 2);
HXDLIN( 244)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 244)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 244)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_TRIANGLES_dyn();
HXDLIN( 244)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 244)						HX_VARI(  ::openfl::display::_internal::DrawCommandReader,c) = this1;
HXLINE( 245)						HX_VARI(  ::openfl::_Vector::FloatVector,vertices) = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get(c->oPos)) );
HXLINE( 246)						HX_VARI(  ::openfl::_Vector::IntVector,indices) = ( ( ::openfl::_Vector::IntVector)(c->buffer->o->__get((c->oPos + 1))) );
HXLINE( 247)						HX_VARI(  ::openfl::_Vector::FloatVector,uvtData) = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) );
HXLINE( 248)						HX_VARI(  ::Dynamic,culling) = c->buffer->o->__get((c->oPos + 3));
HXLINE( 250)						HX_VARI( bool,hasIndices) = ::hx::IsNotNull( indices );
HXLINE( 251)						HX_VARI( int,numVertices) = ::Math_obj::floor((( (Float)(vertices->get_length()) ) / ( (Float)(2) )));
HXLINE( 252)						HX_VAR( int,length);
HXDLIN( 252)						if (hasIndices) {
HXLINE( 252)							length = indices->get_length();
            						}
            						else {
HXLINE( 252)							length = numVertices;
            						}
HXLINE( 254)						HX_VARI( bool,hasUVData) = ::hx::IsNotNull( uvtData );
HXLINE( 255)						HX_VAR( bool,hasUVTData);
HXDLIN( 255)						if (hasUVData) {
HXLINE( 255)							hasUVTData = (uvtData->get_length() >= (numVertices * 3));
            						}
            						else {
HXLINE( 255)							hasUVTData = false;
            						}
HXLINE( 256)						HX_VAR( int,vertLength);
HXDLIN( 256)						if (hasUVTData) {
HXLINE( 256)							vertLength = 4;
            						}
            						else {
HXLINE( 256)							vertLength = 2;
            						}
HXLINE( 257)						HX_VAR( int,uvStride);
HXDLIN( 257)						if (hasUVTData) {
HXLINE( 257)							uvStride = 3;
            						}
            						else {
HXLINE( 257)							uvStride = 2;
            						}
HXLINE( 259)						HX_VARI( int,dataPerVertex) = (vertLength + 2);
HXLINE( 260)						HX_VAR( int,vertexOffset);
HXDLIN( 260)						if (hasUVTData) {
HXLINE( 260)							vertexOffset = vertexBufferPositionUVT;
            						}
            						else {
HXLINE( 260)							vertexOffset = vertexBufferPosition;
            						}
HXLINE( 265)						::openfl::display::_internal::Context3DGraphics_obj::resizeVertexBuffer(graphics,hasUVTData,(vertexOffset + (length * dataPerVertex)));
HXLINE( 268)						HX_VAR(  ::lime::utils::ArrayBufferView,vertexBufferData);
HXDLIN( 268)						if (hasUVTData) {
HXLINE( 268)							vertexBufferData = graphics->_hx___vertexBufferDataUVT;
            						}
            						else {
HXLINE( 268)							vertexBufferData = graphics->_hx___vertexBufferData;
            						}
HXLINE( 269)						HX_VAR( int,offset);
HXDLIN( 269)						HX_VAR( int,vertOffset);
HXDLIN( 269)						HX_VAR( int,uvOffset);
HXDLIN( 269)						HX_VAR( Float,t);
HXLINE( 271)						{
HXLINE( 271)							int _g = 0;
HXDLIN( 271)							int _g1 = length;
HXDLIN( 271)							while((_g < _g1)){
HXLINE( 271)								_g = (_g + 1);
HXDLIN( 271)								HX_VARI( int,i) = (_g - 1);
HXLINE( 273)								offset = (vertexOffset + (i * dataPerVertex));
HXLINE( 274)								if (hasIndices) {
HXLINE( 274)									vertOffset = (indices->get(i) * 2);
            								}
            								else {
HXLINE( 274)									vertOffset = (i * 2);
            								}
HXLINE( 275)								if (hasIndices) {
HXLINE( 275)									uvOffset = (indices->get(i) * uvStride);
            								}
            								else {
HXLINE( 275)									uvOffset = (i * uvStride);
            								}
HXLINE( 279)								if (hasUVTData) {
HXLINE( 281)									t = uvtData->get((uvOffset + 2));
HXLINE( 283)									{
HXLINE( 283)										Float val = (vertices->get(vertOffset) / t);
HXDLIN( 283)										 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (offset * 4)),val);
            									}
HXLINE( 284)									{
HXLINE( 284)										Float val1 = (vertices->get((vertOffset + 1)) / t);
HXDLIN( 284)										 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((offset + 1) * 4)),val1);
            									}
HXLINE( 285)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((offset + 2) * 4)),0);
HXLINE( 286)									{
HXLINE( 286)										Float val2 = (( (Float)(1) ) / t);
HXDLIN( 286)										 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((offset + 3) * 4)),val2);
            									}
            								}
            								else {
HXLINE( 290)									{
HXLINE( 290)										Float val = vertices->get(vertOffset);
HXDLIN( 290)										 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (offset * 4)),val);
            									}
HXLINE( 291)									{
HXLINE( 291)										Float val1 = vertices->get((vertOffset + 1));
HXDLIN( 291)										 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((offset + 1) * 4)),val1);
            									}
            								}
HXLINE( 294)								{
HXLINE( 294)									Float val;
HXDLIN( 294)									if (hasUVData) {
HXLINE( 294)										val = uvtData->get(uvOffset);
            									}
            									else {
HXLINE( 294)										val = ( (Float)(0) );
            									}
HXDLIN( 294)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((offset + vertLength) * 4)),val);
            								}
HXLINE( 295)								{
HXLINE( 295)									Float val1;
HXDLIN( 295)									if (hasUVData) {
HXLINE( 295)										val1 = uvtData->get((uvOffset + 1));
            									}
            									else {
HXLINE( 295)										val1 = ( (Float)(0) );
            									}
HXDLIN( 295)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((offset + vertLength) + 1) * 4)),val1);
            								}
            							}
            						}
HXLINE( 299)						if (hasUVTData) {
HXLINE( 301)							vertexBufferPositionUVT = (vertexBufferPositionUVT + (length * dataPerVertex));
            						}
            						else {
HXLINE( 305)							vertexBufferPosition = (vertexBufferPosition + (length * dataPerVertex));
            						}
            					}
            					break;
            					case (int)13: {
HXLINE( 309)						bitmap = null();
            					}
            					break;
            					default:{
HXLINE( 312)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->oPos = (data1->oPos + 2);
HXDLIN( 312)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 312)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->iPos = (data1->iPos + 1);
HXDLIN( 312)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 312)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->oPos = (data1->oPos + 4);
HXDLIN( 312)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 312)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 312)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 312)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 312)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 312)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->fPos = (data1->fPos + 5);
HXDLIN( 312)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 312)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->oPos = (data1->oPos + 2);
HXDLIN( 312)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 312)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->oPos = (data1->oPos + 4);
HXDLIN( 312)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 312)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 312)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 312)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 312)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 312)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->oPos = (data1->oPos + 4);
HXDLIN( 312)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 312)								data2->iPos = (data2->iPos + 1);
HXDLIN( 312)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 312)								data3->fPos = (data3->fPos + 2);
HXDLIN( 312)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 312)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 312)						data->prev = type;
            					}
            				}
            			}
            		}
HXLINE( 318)		if ((quadBufferPosition > 0)) {
HXLINE( 320)			graphics->_hx___quadBuffer->flushVertexBufferData();
            		}
HXLINE( 323)		if ((triangleIndexBufferPosition > 0)) {
HXLINE( 325)			HX_VARI(  ::openfl::display3D::IndexBuffer3D,buffer) = graphics->_hx___triangleIndexBuffer;
HXLINE( 327)			bool _hx_tmp;
HXDLIN( 327)			if (::hx::IsNotNull( buffer )) {
HXLINE( 327)				_hx_tmp = (triangleIndexBufferPosition > graphics->_hx___triangleIndexBufferCount);
            			}
            			else {
HXLINE( 327)				_hx_tmp = true;
            			}
HXDLIN( 327)			if (_hx_tmp) {
HXLINE( 329)				buffer = context->createIndexBuffer(triangleIndexBufferPosition,0);
HXLINE( 330)				graphics->_hx___triangleIndexBuffer = buffer;
HXLINE( 331)				graphics->_hx___triangleIndexBufferCount = triangleIndexBufferPosition;
            			}
HXLINE( 334)			buffer->uploadFromTypedArray(graphics->_hx___triangleIndexBufferData,null());
            		}
HXLINE( 337)		if ((vertexBufferPosition > 0)) {
HXLINE( 339)			HX_VARI(  ::openfl::display3D::VertexBuffer3D,buffer) = graphics->_hx___vertexBuffer;
HXLINE( 341)			bool _hx_tmp;
HXDLIN( 341)			if (::hx::IsNotNull( buffer )) {
HXLINE( 341)				_hx_tmp = (vertexBufferPosition > graphics->_hx___vertexBufferCount);
            			}
            			else {
HXLINE( 341)				_hx_tmp = true;
            			}
HXDLIN( 341)			if (_hx_tmp) {
HXLINE( 343)				buffer = context->createVertexBuffer(vertexBufferPosition,4,0);
HXLINE( 344)				graphics->_hx___vertexBuffer = buffer;
HXLINE( 345)				graphics->_hx___vertexBufferCount = vertexBufferPosition;
            			}
HXLINE( 348)			buffer->uploadFromTypedArray(graphics->_hx___vertexBufferData,null());
            		}
HXLINE( 351)		if ((vertexBufferPositionUVT > 0)) {
HXLINE( 353)			HX_VARI(  ::openfl::display3D::VertexBuffer3D,buffer) = graphics->_hx___vertexBufferUVT;
HXLINE( 355)			bool _hx_tmp;
HXDLIN( 355)			if (::hx::IsNotNull( buffer )) {
HXLINE( 355)				_hx_tmp = (vertexBufferPositionUVT > graphics->_hx___vertexBufferCountUVT);
            			}
            			else {
HXLINE( 355)				_hx_tmp = true;
            			}
HXDLIN( 355)			if (_hx_tmp) {
HXLINE( 357)				buffer = context->createVertexBuffer(vertexBufferPositionUVT,6,0);
HXLINE( 358)				graphics->_hx___vertexBufferUVT = buffer;
HXLINE( 359)				graphics->_hx___vertexBufferCountUVT = vertexBufferPositionUVT;
            			}
HXLINE( 362)			buffer->uploadFromTypedArray(graphics->_hx___vertexBufferDataUVT,null());
            		}
HXLINE( 365)		::openfl::geom::Rectangle_obj::_hx___pool->release(tileRect);
HXLINE( 366)		::openfl::geom::Matrix_obj::_hx___pool->release(tileTransform);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DGraphics_obj,buildBuffer,(void))

bool Context3DGraphics_obj::isCompatible( ::openfl::display::Graphics graphics){
            	HX_GC_STACKFRAME(&_hx_pos_14098afca734a8c3_370_isCompatible)
            	HX_STACK_ARG(graphics,"graphics")
HXLINE( 370)
HXLINE( 377)		if (::hx::IsNotNull( graphics->_hx___owner->_hx___worldScale9Grid )) {
HXLINE( 379)			return false;
            		}
HXLINE( 382)		HX_VARI(  ::openfl::display::_internal::DrawCommandReader,data) =  ::openfl::display::_internal::DrawCommandReader_obj::__alloc( HX_CTX ,graphics->_hx___commands);
HXLINE( 383)		HX_VARI( bool,hasColorFill) = false;
HXDLIN( 383)		HX_VARI( bool,hasBitmapFill) = false;
HXDLIN( 383)		HX_VARI( bool,hasShaderFill) = false;
HXLINE( 385)		{
HXLINE( 385)			int _g = 0;
HXDLIN( 385)			::Array< ::Dynamic> _g1 = graphics->_hx___commands->types;
HXDLIN( 385)			while((_g < _g1->length)){
HXLINE( 385)				HX_VARI(  ::openfl::display::_internal::DrawCommandType,type) = _g1->__get(_g).StaticCast<  ::openfl::display::_internal::DrawCommandType >();
HXDLIN( 385)				_g = (_g + 1);
HXLINE( 387)				switch((int)(type->_hx_getIndex())){
            					case (int)0: {
HXLINE( 390)						hasBitmapFill = true;
HXLINE( 391)						hasColorFill = false;
HXLINE( 392)						hasShaderFill = false;
HXLINE( 393)						{
HXLINE( 393)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->oPos = (data1->oPos + 2);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 393)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->iPos = (data1->iPos + 1);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 393)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->oPos = (data1->oPos + 4);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 393)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 393)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 393)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->fPos = (data1->fPos + 5);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 393)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->oPos = (data1->oPos + 2);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 393)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->oPos = (data1->oPos + 4);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 393)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 393)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 393)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->oPos = (data1->oPos + 4);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 393)									data2->iPos = (data2->iPos + 1);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 393)									data3->fPos = (data3->fPos + 2);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 393)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 393)							data->prev = type;
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 396)						hasBitmapFill = false;
HXLINE( 397)						hasColorFill = true;
HXLINE( 398)						hasShaderFill = false;
HXLINE( 399)						{
HXLINE( 399)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->oPos = (data1->oPos + 2);
HXDLIN( 399)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 399)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->iPos = (data1->iPos + 1);
HXDLIN( 399)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 399)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->oPos = (data1->oPos + 4);
HXDLIN( 399)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 399)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 399)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 399)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 399)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 399)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->fPos = (data1->fPos + 5);
HXDLIN( 399)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 399)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->oPos = (data1->oPos + 2);
HXDLIN( 399)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 399)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->oPos = (data1->oPos + 4);
HXDLIN( 399)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 399)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 399)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 399)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 399)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 399)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->oPos = (data1->oPos + 4);
HXDLIN( 399)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 399)									data2->iPos = (data2->iPos + 1);
HXDLIN( 399)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 399)									data3->fPos = (data3->fPos + 2);
HXDLIN( 399)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 399)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 399)							data->prev = type;
            						}
            					}
            					break;
            					case (int)3: {
HXLINE( 402)						hasBitmapFill = false;
HXLINE( 403)						hasColorFill = false;
HXLINE( 404)						hasShaderFill = true;
HXLINE( 405)						{
HXLINE( 405)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->oPos = (data1->oPos + 2);
HXDLIN( 405)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 405)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->iPos = (data1->iPos + 1);
HXDLIN( 405)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 405)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->oPos = (data1->oPos + 4);
HXDLIN( 405)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 405)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 405)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 405)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 405)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 405)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->fPos = (data1->fPos + 5);
HXDLIN( 405)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 405)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->oPos = (data1->oPos + 2);
HXDLIN( 405)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 405)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->oPos = (data1->oPos + 4);
HXDLIN( 405)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 405)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 405)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 405)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 405)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 405)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->oPos = (data1->oPos + 4);
HXDLIN( 405)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 405)									data2->iPos = (data2->iPos + 1);
HXDLIN( 405)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 405)									data3->fPos = (data3->fPos + 2);
HXDLIN( 405)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 405)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 405)							data->prev = type;
            						}
            					}
            					break;
            					case (int)8: {
HXLINE( 408)						bool _hx_tmp;
HXDLIN( 408)						if (!(hasBitmapFill)) {
HXLINE( 408)							_hx_tmp = hasShaderFill;
            						}
            						else {
HXLINE( 408)							_hx_tmp = true;
            						}
HXDLIN( 408)						if (_hx_tmp) {
HXLINE( 410)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->oPos = (data1->oPos + 2);
HXDLIN( 410)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 410)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->iPos = (data1->iPos + 1);
HXDLIN( 410)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 410)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->oPos = (data1->oPos + 4);
HXDLIN( 410)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 410)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 410)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 410)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 410)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 410)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->fPos = (data1->fPos + 5);
HXDLIN( 410)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 410)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->oPos = (data1->oPos + 2);
HXDLIN( 410)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 410)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->oPos = (data1->oPos + 4);
HXDLIN( 410)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 410)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 410)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 410)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 410)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 410)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->oPos = (data1->oPos + 4);
HXDLIN( 410)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 410)									data2->iPos = (data2->iPos + 1);
HXDLIN( 410)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 410)									data3->fPos = (data3->fPos + 2);
HXDLIN( 410)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 410)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 410)							data->prev = type;
            						}
            						else {
HXLINE( 414)							data->destroy();
HXLINE( 415)							return false;
            						}
            					}
            					break;
            					case (int)9: {
HXLINE( 419)						if (hasColorFill) {
HXLINE( 421)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->oPos = (data1->oPos + 2);
HXDLIN( 421)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 421)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->iPos = (data1->iPos + 1);
HXDLIN( 421)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 421)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->oPos = (data1->oPos + 4);
HXDLIN( 421)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 421)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 421)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 421)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 421)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 421)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->fPos = (data1->fPos + 5);
HXDLIN( 421)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 421)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->oPos = (data1->oPos + 2);
HXDLIN( 421)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 421)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->oPos = (data1->oPos + 4);
HXDLIN( 421)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 421)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 421)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 421)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 421)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 421)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->oPos = (data1->oPos + 4);
HXDLIN( 421)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 421)									data2->iPos = (data2->iPos + 1);
HXDLIN( 421)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 421)									data3->fPos = (data3->fPos + 2);
HXDLIN( 421)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 421)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 421)							data->prev = type;
            						}
            						else {
HXLINE( 425)							data->destroy();
HXLINE( 426)							return false;
            						}
            					}
            					break;
            					case (int)12: {
HXLINE( 430)						bool _hx_tmp;
HXDLIN( 430)						if (!(hasBitmapFill)) {
HXLINE( 430)							_hx_tmp = hasShaderFill;
            						}
            						else {
HXLINE( 430)							_hx_tmp = true;
            						}
HXDLIN( 430)						if (_hx_tmp) {
HXLINE( 432)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->oPos = (data1->oPos + 2);
HXDLIN( 432)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 432)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->iPos = (data1->iPos + 1);
HXDLIN( 432)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 432)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->oPos = (data1->oPos + 4);
HXDLIN( 432)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 432)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 432)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 432)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 432)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 432)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->fPos = (data1->fPos + 5);
HXDLIN( 432)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 432)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->oPos = (data1->oPos + 2);
HXDLIN( 432)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 432)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->oPos = (data1->oPos + 4);
HXDLIN( 432)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 432)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 432)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 432)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 432)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 432)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->oPos = (data1->oPos + 4);
HXDLIN( 432)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 432)									data2->iPos = (data2->iPos + 1);
HXDLIN( 432)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 432)									data3->fPos = (data3->fPos + 2);
HXDLIN( 432)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 432)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 432)							data->prev = type;
            						}
            						else {
HXLINE( 436)							data->destroy();
HXLINE( 437)							return false;
            						}
            					}
            					break;
            					case (int)13: {
HXLINE( 441)						hasBitmapFill = false;
HXLINE( 442)						hasColorFill = false;
HXLINE( 443)						hasShaderFill = false;
HXLINE( 444)						{
HXLINE( 444)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->oPos = (data1->oPos + 2);
HXDLIN( 444)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 444)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->iPos = (data1->iPos + 1);
HXDLIN( 444)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 444)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->oPos = (data1->oPos + 4);
HXDLIN( 444)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 444)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 444)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 444)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 444)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 444)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->fPos = (data1->fPos + 5);
HXDLIN( 444)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 444)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->oPos = (data1->oPos + 2);
HXDLIN( 444)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 444)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->oPos = (data1->oPos + 4);
HXDLIN( 444)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 444)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 444)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 444)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 444)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 444)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->oPos = (data1->oPos + 4);
HXDLIN( 444)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 444)									data2->iPos = (data2->iPos + 1);
HXDLIN( 444)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 444)									data3->fPos = (data3->fPos + 2);
HXDLIN( 444)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 444)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 444)							data->prev = type;
            						}
            					}
            					break;
            					case (int)18: {
HXLINE( 447)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->oPos = (data1->oPos + 2);
HXDLIN( 447)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 447)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->iPos = (data1->iPos + 1);
HXDLIN( 447)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 447)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->oPos = (data1->oPos + 4);
HXDLIN( 447)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 447)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 447)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 447)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 447)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 447)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->fPos = (data1->fPos + 5);
HXDLIN( 447)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 447)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->oPos = (data1->oPos + 2);
HXDLIN( 447)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 447)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->oPos = (data1->oPos + 4);
HXDLIN( 447)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 447)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 447)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 447)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 447)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 447)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->oPos = (data1->oPos + 4);
HXDLIN( 447)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 447)								data2->iPos = (data2->iPos + 1);
HXDLIN( 447)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 447)								data3->fPos = (data3->fPos + 2);
HXDLIN( 447)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 447)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 447)						data->prev = type;
            					}
            					break;
            					case (int)19: {
HXLINE( 450)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->oPos = (data1->oPos + 2);
HXDLIN( 450)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 450)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->iPos = (data1->iPos + 1);
HXDLIN( 450)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 450)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->oPos = (data1->oPos + 4);
HXDLIN( 450)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 450)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 450)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 450)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 450)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 450)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->fPos = (data1->fPos + 5);
HXDLIN( 450)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 450)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->oPos = (data1->oPos + 2);
HXDLIN( 450)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 450)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->oPos = (data1->oPos + 4);
HXDLIN( 450)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 450)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 450)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 450)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 450)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 450)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->oPos = (data1->oPos + 4);
HXDLIN( 450)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 450)								data2->iPos = (data2->iPos + 1);
HXDLIN( 450)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 450)								data3->fPos = (data3->fPos + 2);
HXDLIN( 450)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 450)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 450)						data->prev = type;
            					}
            					break;
            					default:{
HXLINE( 453)						data->destroy();
HXLINE( 454)						return false;
            					}
            				}
            			}
            		}
HXLINE( 458)		data->destroy();
HXLINE( 459)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DGraphics_obj,isCompatible,return )

void Context3DGraphics_obj::render( ::openfl::display::Graphics graphics, ::openfl::display::OpenGLRenderer renderer){
            	HX_GC_STACKFRAME(&_hx_pos_14098afca734a8c3_463_render)
            	HX_STACK_ARG(graphics,"graphics")
            	HX_STACK_ARG(renderer,"renderer")
HXLINE( 463)
HXLINE( 464)		bool _hx_tmp;
HXDLIN( 464)		if (graphics->_hx___visible) {
HXLINE( 464)			_hx_tmp = (graphics->_hx___commands->get_length() == 0);
            		}
            		else {
HXLINE( 464)			_hx_tmp = true;
            		}
HXDLIN( 464)		if (_hx_tmp) {
HXLINE( 464)			return;
            		}
HXLINE( 466)		bool _hx_tmp1;
HXDLIN( 466)		bool _hx_tmp2;
HXDLIN( 466)		if (::hx::IsNotNull( graphics->_hx___bitmap )) {
HXLINE( 466)			_hx_tmp2 = !(graphics->_hx___dirty);
            		}
            		else {
HXLINE( 466)			_hx_tmp2 = false;
            		}
HXDLIN( 466)		if (!(_hx_tmp2)) {
HXLINE( 466)			_hx_tmp1 = !(::openfl::display::_internal::Context3DGraphics_obj::isCompatible(graphics));
            		}
            		else {
HXLINE( 466)			_hx_tmp1 = true;
            		}
HXDLIN( 466)		if (_hx_tmp1) {
HXLINE( 482)			HX_VARI(  ::openfl::geom::Matrix,cacheTransform) = renderer->_hx___softwareRenderer->_hx___worldTransform;
HXLINE( 483)			renderer->_hx___softwareRenderer->_hx___worldTransform = renderer->_hx___worldTransform;
HXLINE( 488)			::openfl::display::_internal::CairoGraphics_obj::render(graphics,( ( ::openfl::display::CairoRenderer)(renderer->_hx___softwareRenderer) ));
HXLINE( 491)			renderer->_hx___softwareRenderer->_hx___worldTransform = cacheTransform;
            		}
            		else {
HXLINE( 495)			graphics->_hx___bitmap = null();
HXLINE( 496)			graphics->_hx___update(renderer->_hx___worldTransform);
HXLINE( 498)			HX_VARI(  ::openfl::geom::Rectangle,bounds) = graphics->_hx___bounds;
HXLINE( 500)			HX_VARI( int,width) = graphics->_hx___width;
HXLINE( 501)			HX_VARI( int,height) = graphics->_hx___height;
HXLINE( 503)			bool _hx_tmp;
HXDLIN( 503)			bool _hx_tmp1;
HXDLIN( 503)			if (::hx::IsNotNull( bounds )) {
HXLINE( 503)				_hx_tmp1 = (width >= 1);
            			}
            			else {
HXLINE( 503)				_hx_tmp1 = false;
            			}
HXDLIN( 503)			if (_hx_tmp1) {
HXLINE( 503)				_hx_tmp = (height >= 1);
            			}
            			else {
HXLINE( 503)				_hx_tmp = false;
            			}
HXDLIN( 503)			if (_hx_tmp) {
HXLINE( 505)				bool _hx_tmp;
HXDLIN( 505)				if (!(graphics->_hx___hardwareDirty)) {
HXLINE( 506)					bool _hx_tmp1;
HXDLIN( 506)					if (::hx::IsNull( graphics->_hx___quadBuffer )) {
HXLINE( 506)						_hx_tmp1 = ::hx::IsNull( graphics->_hx___vertexBuffer );
            					}
            					else {
HXLINE( 506)						_hx_tmp1 = false;
            					}
HXDLIN( 506)					if (_hx_tmp1) {
HXLINE( 505)						_hx_tmp = ::hx::IsNull( graphics->_hx___vertexBufferUVT );
            					}
            					else {
HXLINE( 505)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 505)					_hx_tmp = true;
            				}
HXDLIN( 505)				if (_hx_tmp) {
HXLINE( 508)					::openfl::display::_internal::Context3DGraphics_obj::buildBuffer(graphics,renderer);
            				}
HXLINE( 511)				HX_VARI(  ::openfl::display::_internal::DrawCommandReader,data) =  ::openfl::display::_internal::DrawCommandReader_obj::__alloc( HX_CTX ,graphics->_hx___commands);
HXLINE( 513)				HX_VARI(  ::openfl::display3D::Context3D,context) = renderer->_hx___context3D;
HXLINE( 514)				HX_VARI(  ::lime::_internal::backend::native::NativeOpenGLRenderContext,gl) = context->gl;
HXLINE( 516)				HX_VARI(  ::openfl::geom::Matrix,matrix) = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE( 518)				HX_VARI(  ::openfl::display::_internal::ShaderBuffer,shaderBuffer) = null();
HXLINE( 519)				HX_VARI(  ::openfl::display::BitmapData,bitmap) = null();
HXLINE( 520)				HX_VARI( bool,repeat) = false;
HXLINE( 521)				HX_VARI( bool,smooth) = false;
HXLINE( 522)				HX_VARI(  ::Dynamic,fill) = null();
HXLINE( 524)				HX_VARI( Float,positionX) = ((Float)0.0);
HXLINE( 525)				HX_VARI( Float,positionY) = ((Float)0.0);
HXLINE( 527)				HX_VARI( int,quadBufferPosition) = 0;
HXLINE( 528)				HX_VARI( int,shaderBufferOffset) = 0;
HXLINE( 529)				HX_VARI( int,triangleIndexBufferPosition) = 0;
HXLINE( 530)				HX_VARI( int,vertexBufferPosition) = 0;
HXLINE( 531)				HX_VARI( int,vertexBufferPositionUVT) = 0;
HXLINE( 533)				{
HXLINE( 533)					int _g = 0;
HXDLIN( 533)					::Array< ::Dynamic> _g1 = graphics->_hx___commands->types;
HXDLIN( 533)					while((_g < _g1->length)){
HXLINE( 533)						HX_VARI(  ::openfl::display::_internal::DrawCommandType,type) = _g1->__get(_g).StaticCast<  ::openfl::display::_internal::DrawCommandType >();
HXDLIN( 533)						_g = (_g + 1);
HXLINE( 535)						switch((int)(type->_hx_getIndex())){
            							case (int)0: {
HXLINE( 538)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 538)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 538)										data1->oPos = (data1->oPos + 2);
HXDLIN( 538)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 538)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 538)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 538)										data1->iPos = (data1->iPos + 1);
HXDLIN( 538)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 538)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 538)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 538)										data1->oPos = (data1->oPos + 4);
HXDLIN( 538)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 538)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 538)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 538)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 538)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 538)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 538)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 538)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 538)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 538)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 538)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 538)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 538)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 538)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 538)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 538)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 538)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 538)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 538)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 538)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 538)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 538)										data1->fPos = (data1->fPos + 5);
HXDLIN( 538)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 538)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 538)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 538)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 538)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 538)										data1->oPos = (data1->oPos + 2);
HXDLIN( 538)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 538)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 538)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 538)										data1->oPos = (data1->oPos + 4);
HXDLIN( 538)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 538)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 538)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 538)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 538)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 538)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 538)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 538)										data1->oPos = (data1->oPos + 4);
HXDLIN( 538)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 538)										data2->iPos = (data2->iPos + 1);
HXDLIN( 538)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 538)										data3->fPos = (data3->fPos + 2);
HXDLIN( 538)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 538)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 538)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 538)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 538)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 538)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 538)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 538)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 538)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 538)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 538)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn();
HXDLIN( 538)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 538)								HX_VARI(  ::openfl::display::_internal::DrawCommandReader,c) = this1;
HXLINE( 539)								bitmap = ( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) );
HXLINE( 540)								repeat = c->buffer->b->__get(c->bPos);
HXLINE( 541)								smooth = c->buffer->b->__get((c->bPos + 1));
HXLINE( 542)								shaderBuffer = null();
HXLINE( 543)								fill = null();
            							}
            							break;
            							case (int)1: {
HXLINE( 546)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 546)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)										data1->oPos = (data1->oPos + 2);
HXDLIN( 546)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 546)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 546)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)										data1->iPos = (data1->iPos + 1);
HXDLIN( 546)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 546)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 546)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)										data1->oPos = (data1->oPos + 4);
HXDLIN( 546)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 546)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 546)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 546)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 546)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 546)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 546)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 546)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 546)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 546)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 546)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 546)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 546)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 546)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)										data1->fPos = (data1->fPos + 5);
HXDLIN( 546)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 546)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 546)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 546)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)										data1->oPos = (data1->oPos + 2);
HXDLIN( 546)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 546)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 546)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)										data1->oPos = (data1->oPos + 4);
HXDLIN( 546)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 546)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 546)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 546)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 546)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 546)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 546)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)										data1->oPos = (data1->oPos + 4);
HXDLIN( 546)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 546)										data2->iPos = (data2->iPos + 1);
HXDLIN( 546)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 546)										data3->fPos = (data3->fPos + 2);
HXDLIN( 546)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 546)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 546)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 546)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 546)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 546)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 546)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 546)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_FILL_dyn();
HXDLIN( 546)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 546)								HX_VARI(  ::openfl::display::_internal::DrawCommandReader,c) = this1;
HXLINE( 547)								HX_VARI( int,color) = ::Std_obj::_hx_int(( (Float)(c->buffer->i->__get(c->iPos)) ));
HXLINE( 548)								HX_VARI( int,alpha) = ::Std_obj::_hx_int((c->buffer->f->__get(c->fPos) * ( (Float)(255) )));
HXLINE( 550)								fill = ((color & 16777215) | (alpha << 24));
HXLINE( 551)								shaderBuffer = null();
HXLINE( 552)								bitmap = null();
            							}
            							break;
            							case (int)3: {
HXLINE( 555)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 555)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 555)										data1->oPos = (data1->oPos + 2);
HXDLIN( 555)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 555)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 555)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 555)										data1->iPos = (data1->iPos + 1);
HXDLIN( 555)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 555)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 555)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 555)										data1->oPos = (data1->oPos + 4);
HXDLIN( 555)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 555)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 555)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 555)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 555)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 555)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 555)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 555)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 555)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 555)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 555)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 555)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 555)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 555)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 555)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 555)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 555)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 555)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 555)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 555)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 555)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 555)										data1->fPos = (data1->fPos + 5);
HXDLIN( 555)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 555)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 555)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 555)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 555)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 555)										data1->oPos = (data1->oPos + 2);
HXDLIN( 555)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 555)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 555)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 555)										data1->oPos = (data1->oPos + 4);
HXDLIN( 555)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 555)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 555)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 555)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 555)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 555)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 555)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 555)										data1->oPos = (data1->oPos + 4);
HXDLIN( 555)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 555)										data2->iPos = (data2->iPos + 1);
HXDLIN( 555)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 555)										data3->fPos = (data3->fPos + 2);
HXDLIN( 555)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 555)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 555)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 555)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 555)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 555)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 555)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 555)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 555)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 555)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 555)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_SHADER_FILL_dyn();
HXDLIN( 555)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 555)								HX_VARI(  ::openfl::display::_internal::DrawCommandReader,c) = this1;
HXLINE( 556)								shaderBuffer = ( ( ::openfl::display::_internal::ShaderBuffer)(c->buffer->o->__get(c->oPos)) );
HXLINE( 557)								shaderBufferOffset = 0;
HXLINE( 559)								bool _hx_tmp;
HXDLIN( 559)								bool _hx_tmp1;
HXDLIN( 559)								if (::hx::IsNotNull( shaderBuffer )) {
HXLINE( 559)									_hx_tmp1 = ::hx::IsNull( shaderBuffer->shader );
            								}
            								else {
HXLINE( 559)									_hx_tmp1 = true;
            								}
HXDLIN( 559)								if (!(_hx_tmp1)) {
HXLINE( 559)									_hx_tmp = ::hx::IsNull( shaderBuffer->shader->_hx___bitmap );
            								}
            								else {
HXLINE( 559)									_hx_tmp = true;
            								}
HXDLIN( 559)								if (_hx_tmp) {
HXLINE( 561)									bitmap = null();
            								}
            								else {
HXLINE( 565)									bitmap = shaderBuffer->shader->_hx___bitmap->input;
            								}
HXLINE( 568)								fill = null();
            							}
            							break;
            							case (int)8: {
HXLINE( 571)								if (::hx::IsNotNull( bitmap )) {
HXLINE( 573)									switch((int)(data->prev->_hx_getIndex())){
            										case (int)0: {
HXLINE( 573)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 573)											data1->oPos = (data1->oPos + 2);
HXDLIN( 573)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 573)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)1: {
HXLINE( 573)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 573)											data1->iPos = (data1->iPos + 1);
HXDLIN( 573)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 573)											data2->fPos = (data2->fPos + 1);
            										}
            										break;
            										case (int)2: {
HXLINE( 573)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 573)											data1->oPos = (data1->oPos + 4);
HXDLIN( 573)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 573)											data2->iiPos = (data2->iiPos + 2);
HXDLIN( 573)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 573)											data3->ffPos = (data3->ffPos + 1);
HXDLIN( 573)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 573)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)3: {
HXLINE( 573)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 573)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)4: {
HXLINE( 573)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 573)											data1->fPos = (data1->fPos + 6);
            										}
            										break;
            										case (int)5: {
HXLINE( 573)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 573)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)6: {
HXLINE( 573)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 573)											data1->fPos = (data1->fPos + 3);
            										}
            										break;
            										case (int)7: {
HXLINE( 573)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 573)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)8: {
HXLINE( 573)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 573)											data1->oPos = (data1->oPos + 3);
            										}
            										break;
            										case (int)9: {
HXLINE( 573)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 573)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)10: {
HXLINE( 573)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 573)											data1->fPos = (data1->fPos + 5);
HXDLIN( 573)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 573)											data2->oPos = (data2->oPos + 1);
            										}
            										break;
            										case (int)12: {
HXLINE( 573)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 573)											data1->oPos = (data1->oPos + 4);
            										}
            										break;
            										case (int)13: {
            										}
            										break;
            										case (int)14: {
HXLINE( 573)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 573)											data1->oPos = (data1->oPos + 2);
HXDLIN( 573)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 573)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)15: {
HXLINE( 573)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 573)											data1->oPos = (data1->oPos + 4);
HXDLIN( 573)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 573)											data2->iiPos = (data2->iiPos + 2);
HXDLIN( 573)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 573)											data3->ffPos = (data3->ffPos + 1);
HXDLIN( 573)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 573)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)16: {
HXLINE( 573)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 573)											data1->oPos = (data1->oPos + 4);
HXDLIN( 573)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 573)											data2->iPos = (data2->iPos + 1);
HXDLIN( 573)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 573)											data3->fPos = (data3->fPos + 2);
HXDLIN( 573)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 573)											data4->bPos = (data4->bPos + 1);
            										}
            										break;
            										case (int)17: {
HXLINE( 573)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 573)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)18: {
HXLINE( 573)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 573)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)19: {
HXLINE( 573)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 573)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)20: {
HXLINE( 573)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 573)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)21: case (int)22: {
            										}
            										break;
            										default:{
            										}
            									}
HXLINE( 573)									data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_QUADS_dyn();
HXDLIN( 573)									 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 573)									HX_VARI(  ::openfl::display::_internal::DrawCommandReader,c) = this1;
HXLINE( 574)									HX_VARI(  ::openfl::_Vector::FloatVector,rects) = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get(c->oPos)) );
HXLINE( 575)									HX_VARI(  ::openfl::_Vector::IntVector,indices) = ( ( ::openfl::_Vector::IntVector)(c->buffer->o->__get((c->oPos + 1))) );
HXLINE( 576)									HX_VARI(  ::openfl::_Vector::FloatVector,transforms) = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) );
HXLINE( 579)									HX_VAR( ::Array< Float >,rects1);
HXDLIN( 579)									if (::hx::IsNull( rects )) {
HXLINE( 579)										rects1 = null();
            									}
            									else {
HXLINE( 579)										rects1 = ( (::Array< Float >)(rects->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
            									}
HXLINE( 580)									HX_VAR( ::Array< int >,indices1);
HXDLIN( 580)									if (::hx::IsNull( indices )) {
HXLINE( 580)										indices1 = null();
            									}
            									else {
HXLINE( 580)										indices1 = ( (::Array< int >)(indices->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
            									}
HXLINE( 581)									HX_VAR( ::Array< Float >,transforms1);
HXDLIN( 581)									if (::hx::IsNull( transforms )) {
HXLINE( 581)										transforms1 = null();
            									}
            									else {
HXLINE( 581)										transforms1 = ( (::Array< Float >)(transforms->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
            									}
HXLINE( 584)									HX_VARI( bool,hasIndices) = ::hx::IsNotNull( indices1 );
HXLINE( 585)									HX_VAR( int,length);
HXDLIN( 585)									if (hasIndices) {
HXLINE( 585)										length = indices1->length;
            									}
            									else {
HXLINE( 585)										length = ::Math_obj::floor((( (Float)(rects1->length) ) / ( (Float)(4) )));
            									}
HXLINE( 587)									HX_VARI( ::Array< Float >,uMatrix) = renderer->_hx___getMatrix(graphics->_hx___owner->_hx___renderTransform,1);
HXLINE( 588)									HX_VAR(  ::openfl::display::Shader,shader);
HXLINE( 590)									bool _hx_tmp;
HXDLIN( 590)									if (::hx::IsNotNull( shaderBuffer )) {
HXLINE( 590)										_hx_tmp = !(::openfl::display::_internal::Context3DGraphics_obj::maskRender);
            									}
            									else {
HXLINE( 590)										_hx_tmp = false;
            									}
HXDLIN( 590)									if (_hx_tmp) {
HXLINE( 592)										shader = renderer->_hx___initShaderBuffer(shaderBuffer);
HXLINE( 594)										renderer->_hx___setShaderBuffer(shaderBuffer);
HXLINE( 595)										renderer->applyMatrix(uMatrix);
HXLINE( 596)										renderer->applyBitmapData(bitmap,false,repeat);
HXLINE( 597)										renderer->applyAlpha(graphics->_hx___owner->_hx___worldAlpha);
HXLINE( 598)										renderer->applyColorTransform(graphics->_hx___owner->_hx___worldColorTransform);
            									}
            									else {
HXLINE( 603)										if (::openfl::display::_internal::Context3DGraphics_obj::maskRender) {
HXLINE( 603)											shader = renderer->_hx___maskShader;
            										}
            										else {
HXLINE( 603)											shader = renderer->_hx___initGraphicsShader(null());
            										}
HXLINE( 604)										renderer->setShader(shader);
HXLINE( 605)										renderer->applyMatrix(uMatrix);
HXLINE( 606)										renderer->applyBitmapData(bitmap,smooth,repeat);
HXLINE( 607)										renderer->applyAlpha(graphics->_hx___owner->_hx___worldAlpha);
HXLINE( 608)										renderer->applyColorTransform(graphics->_hx___owner->_hx___worldColorTransform);
HXLINE( 609)										renderer->updateShader();
            									}
HXLINE( 612)									HX_VARI( int,end) = (quadBufferPosition + length);
HXLINE( 614)									while((quadBufferPosition < end)){
HXLINE( 616)										length = ::Std_obj::_hx_int(::Math_obj::min(( (Float)((end - quadBufferPosition)) ),( (Float)(context->_hx___quadIndexBufferElements) )));
HXLINE( 617)										if ((length <= 0)) {
HXLINE( 617)											goto _hx_goto_8;
            										}
HXLINE( 619)										bool _hx_tmp;
HXDLIN( 619)										if (::hx::IsNotNull( shaderBuffer )) {
HXLINE( 619)											_hx_tmp = !(::openfl::display::_internal::Context3DGraphics_obj::maskRender);
            										}
            										else {
HXLINE( 619)											_hx_tmp = false;
            										}
HXDLIN( 619)										if (_hx_tmp) {
HXLINE( 621)											renderer->_hx___updateShaderBuffer(shaderBufferOffset);
            										}
HXLINE( 624)										if (::hx::IsNotNull( shader->_hx___position )) {
HXLINE( 624)											context->setVertexBufferAt(( (int)(shader->_hx___position->index) ),graphics->_hx___quadBuffer->vertexBuffer,(quadBufferPosition * 16),2);
            										}
HXLINE( 626)										if (::hx::IsNotNull( shader->_hx___textureCoord )) {
HXLINE( 626)											context->setVertexBufferAt(( (int)(shader->_hx___textureCoord->index) ),graphics->_hx___quadBuffer->vertexBuffer,((quadBufferPosition * 16) + 2),2);
            										}
HXLINE( 629)										context->drawTriangles(context->_hx___quadIndexBuffer,0,(length * 2));
HXLINE( 631)										shaderBufferOffset = (shaderBufferOffset + (length * 4));
HXLINE( 632)										quadBufferPosition = (quadBufferPosition + length);
            									}
            									_hx_goto_8:;
HXLINE( 639)									renderer->_hx___clearShader();
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 643)								if (::hx::IsNotNull( fill )) {
HXLINE( 645)									switch((int)(data->prev->_hx_getIndex())){
            										case (int)0: {
HXLINE( 645)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 645)											data1->oPos = (data1->oPos + 2);
HXDLIN( 645)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 645)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)1: {
HXLINE( 645)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 645)											data1->iPos = (data1->iPos + 1);
HXDLIN( 645)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 645)											data2->fPos = (data2->fPos + 1);
            										}
            										break;
            										case (int)2: {
HXLINE( 645)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 645)											data1->oPos = (data1->oPos + 4);
HXDLIN( 645)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 645)											data2->iiPos = (data2->iiPos + 2);
HXDLIN( 645)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 645)											data3->ffPos = (data3->ffPos + 1);
HXDLIN( 645)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 645)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)3: {
HXLINE( 645)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 645)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)4: {
HXLINE( 645)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 645)											data1->fPos = (data1->fPos + 6);
            										}
            										break;
            										case (int)5: {
HXLINE( 645)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 645)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)6: {
HXLINE( 645)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 645)											data1->fPos = (data1->fPos + 3);
            										}
            										break;
            										case (int)7: {
HXLINE( 645)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 645)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)8: {
HXLINE( 645)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 645)											data1->oPos = (data1->oPos + 3);
            										}
            										break;
            										case (int)9: {
HXLINE( 645)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 645)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)10: {
HXLINE( 645)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 645)											data1->fPos = (data1->fPos + 5);
HXDLIN( 645)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 645)											data2->oPos = (data2->oPos + 1);
            										}
            										break;
            										case (int)12: {
HXLINE( 645)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 645)											data1->oPos = (data1->oPos + 4);
            										}
            										break;
            										case (int)13: {
            										}
            										break;
            										case (int)14: {
HXLINE( 645)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 645)											data1->oPos = (data1->oPos + 2);
HXDLIN( 645)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 645)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)15: {
HXLINE( 645)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 645)											data1->oPos = (data1->oPos + 4);
HXDLIN( 645)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 645)											data2->iiPos = (data2->iiPos + 2);
HXDLIN( 645)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 645)											data3->ffPos = (data3->ffPos + 1);
HXDLIN( 645)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 645)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)16: {
HXLINE( 645)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 645)											data1->oPos = (data1->oPos + 4);
HXDLIN( 645)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 645)											data2->iPos = (data2->iPos + 1);
HXDLIN( 645)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 645)											data3->fPos = (data3->fPos + 2);
HXDLIN( 645)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 645)											data4->bPos = (data4->bPos + 1);
            										}
            										break;
            										case (int)17: {
HXLINE( 645)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 645)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)18: {
HXLINE( 645)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 645)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)19: {
HXLINE( 645)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 645)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)20: {
HXLINE( 645)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 645)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)21: case (int)22: {
            										}
            										break;
            										default:{
            										}
            									}
HXLINE( 645)									data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_RECT_dyn();
HXDLIN( 645)									 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 645)									HX_VARI(  ::openfl::display::_internal::DrawCommandReader,c) = this1;
HXLINE( 646)									HX_VARI( Float,x) = c->buffer->f->__get(c->fPos);
HXLINE( 647)									HX_VARI( Float,y) = c->buffer->f->__get((c->fPos + 1));
HXLINE( 648)									HX_VARI( Float,width) = c->buffer->f->__get((c->fPos + 2));
HXLINE( 649)									HX_VARI( Float,height) = c->buffer->f->__get((c->fPos + 3));
HXLINE( 652)									HX_VARI( int,color) = ( (int)(fill) );
HXLINE( 653)									::openfl::display::_internal::Context3DGraphics_obj::tempColorTransform->redOffset = ( (Float)((::hx::UShr(color,16) & 255)) );
HXLINE( 654)									::openfl::display::_internal::Context3DGraphics_obj::tempColorTransform->greenOffset = ( (Float)((::hx::UShr(color,8) & 255)) );
HXLINE( 655)									::openfl::display::_internal::Context3DGraphics_obj::tempColorTransform->blueOffset = ( (Float)((color & 255)) );
HXLINE( 657)									::openfl::display::_internal::Context3DGraphics_obj::tempColorTransform->_hx___combine(graphics->_hx___owner->_hx___worldColorTransform);
HXLINE( 659)									matrix->identity();
HXLINE( 660)									matrix->scale(width,height);
HXLINE( 661)									matrix->tx = x;
HXLINE( 662)									matrix->ty = y;
HXLINE( 663)									matrix->concat(graphics->_hx___owner->_hx___renderTransform);
HXLINE( 665)									HX_VAR(  ::openfl::display::Shader,shader);
HXDLIN( 665)									if (::openfl::display::_internal::Context3DGraphics_obj::maskRender) {
HXLINE( 665)										shader = renderer->_hx___maskShader;
            									}
            									else {
HXLINE( 665)										shader = renderer->_hx___initGraphicsShader(null());
            									}
HXLINE( 666)									renderer->setShader(shader);
HXLINE( 667)									renderer->applyMatrix(renderer->_hx___getMatrix(matrix,1));
HXLINE( 668)									renderer->applyBitmapData(::openfl::display::_internal::Context3DGraphics_obj::blankBitmapData,true,repeat);
HXLINE( 670)									renderer->applyAlpha(((( (Float)((::hx::UShr(color,24) & 255)) ) / ( (Float)(255) )) * graphics->_hx___owner->_hx___worldAlpha));
HXLINE( 672)									renderer->applyColorTransform(::openfl::display::_internal::Context3DGraphics_obj::tempColorTransform);
HXLINE( 673)									renderer->updateShader();
HXLINE( 675)									HX_VARI(  ::openfl::display3D::VertexBuffer3D,vertexBuffer) = ::openfl::display::_internal::Context3DGraphics_obj::blankBitmapData->getVertexBuffer(context,null(),null());
HXLINE( 676)									if (::hx::IsNotNull( shader->_hx___position )) {
HXLINE( 676)										context->setVertexBufferAt(( (int)(shader->_hx___position->index) ),vertexBuffer,0,3);
            									}
HXLINE( 677)									if (::hx::IsNotNull( shader->_hx___textureCoord )) {
HXLINE( 677)										context->setVertexBufferAt(( (int)(shader->_hx___textureCoord->index) ),vertexBuffer,3,2);
            									}
HXLINE( 678)									HX_VARI(  ::openfl::display3D::IndexBuffer3D,indexBuffer) = ::openfl::display::_internal::Context3DGraphics_obj::blankBitmapData->getIndexBuffer(context,null());
HXLINE( 679)									context->drawTriangles(indexBuffer,null(),null());
HXLINE( 681)									shaderBufferOffset = (shaderBufferOffset + 4);
HXLINE( 687)									renderer->_hx___clearShader();
            								}
            							}
            							break;
            							case (int)12: {
HXLINE( 691)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 691)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 691)										data1->oPos = (data1->oPos + 2);
HXDLIN( 691)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 691)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 691)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 691)										data1->iPos = (data1->iPos + 1);
HXDLIN( 691)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 691)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 691)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 691)										data1->oPos = (data1->oPos + 4);
HXDLIN( 691)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 691)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 691)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 691)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 691)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 691)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 691)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 691)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 691)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 691)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 691)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 691)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 691)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 691)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 691)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 691)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 691)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 691)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 691)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 691)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 691)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 691)										data1->fPos = (data1->fPos + 5);
HXDLIN( 691)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 691)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 691)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 691)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 691)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 691)										data1->oPos = (data1->oPos + 2);
HXDLIN( 691)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 691)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 691)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 691)										data1->oPos = (data1->oPos + 4);
HXDLIN( 691)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 691)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 691)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 691)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 691)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 691)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 691)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 691)										data1->oPos = (data1->oPos + 4);
HXDLIN( 691)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 691)										data2->iPos = (data2->iPos + 1);
HXDLIN( 691)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 691)										data3->fPos = (data3->fPos + 2);
HXDLIN( 691)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 691)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 691)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 691)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 691)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 691)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 691)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 691)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 691)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 691)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 691)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_TRIANGLES_dyn();
HXDLIN( 691)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 691)								HX_VARI(  ::openfl::display::_internal::DrawCommandReader,c) = this1;
HXLINE( 692)								HX_VARI(  ::openfl::_Vector::FloatVector,vertices) = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get(c->oPos)) );
HXLINE( 693)								HX_VARI(  ::openfl::_Vector::IntVector,indices) = ( ( ::openfl::_Vector::IntVector)(c->buffer->o->__get((c->oPos + 1))) );
HXLINE( 694)								HX_VARI(  ::openfl::_Vector::FloatVector,uvtData) = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) );
HXLINE( 695)								HX_VARI(  ::Dynamic,culling) = c->buffer->o->__get((c->oPos + 3));
HXLINE( 697)								HX_VARI( bool,hasIndices) = ::hx::IsNotNull( indices );
HXLINE( 698)								HX_VARI( int,numVertices) = ::Math_obj::floor((( (Float)(vertices->get_length()) ) / ( (Float)(2) )));
HXLINE( 699)								HX_VAR( int,length);
HXDLIN( 699)								if (hasIndices) {
HXLINE( 699)									length = indices->get_length();
            								}
            								else {
HXLINE( 699)									length = numVertices;
            								}
HXLINE( 701)								HX_VARI( bool,hasUVData) = ::hx::IsNotNull( uvtData );
HXLINE( 702)								HX_VAR( bool,hasUVTData);
HXDLIN( 702)								if (hasUVData) {
HXLINE( 702)									hasUVTData = (uvtData->get_length() >= (numVertices * 3));
            								}
            								else {
HXLINE( 702)									hasUVTData = false;
            								}
HXLINE( 703)								HX_VAR( int,vertLength);
HXDLIN( 703)								if (hasUVTData) {
HXLINE( 703)									vertLength = 4;
            								}
            								else {
HXLINE( 703)									vertLength = 2;
            								}
HXLINE( 704)								HX_VAR( int,uvStride);
HXDLIN( 704)								if (hasUVTData) {
HXLINE( 704)									uvStride = 3;
            								}
            								else {
HXLINE( 704)									uvStride = 2;
            								}
HXLINE( 706)								HX_VARI( int,dataPerVertex) = (vertLength + 2);
HXLINE( 707)								HX_VAR(  ::openfl::display3D::VertexBuffer3D,vertexBuffer);
HXDLIN( 707)								if (hasUVTData) {
HXLINE( 707)									vertexBuffer = graphics->_hx___vertexBufferUVT;
            								}
            								else {
HXLINE( 707)									vertexBuffer = graphics->_hx___vertexBuffer;
            								}
HXLINE( 708)								HX_VAR( int,bufferPosition);
HXDLIN( 708)								if (hasUVTData) {
HXLINE( 708)									bufferPosition = vertexBufferPositionUVT;
            								}
            								else {
HXLINE( 708)									bufferPosition = vertexBufferPosition;
            								}
HXLINE( 710)								HX_VARI( ::Array< Float >,uMatrix) = renderer->_hx___getMatrix(graphics->_hx___owner->_hx___renderTransform,1);
HXLINE( 711)								HX_VAR(  ::openfl::display::Shader,shader);
HXLINE( 713)								bool _hx_tmp;
HXDLIN( 713)								if (::hx::IsNotNull( shaderBuffer )) {
HXLINE( 713)									_hx_tmp = !(::openfl::display::_internal::Context3DGraphics_obj::maskRender);
            								}
            								else {
HXLINE( 713)									_hx_tmp = false;
            								}
HXDLIN( 713)								if (_hx_tmp) {
HXLINE( 715)									shader = renderer->_hx___initShaderBuffer(shaderBuffer);
HXLINE( 717)									renderer->_hx___setShaderBuffer(shaderBuffer);
HXLINE( 718)									renderer->applyMatrix(uMatrix);
HXLINE( 719)									renderer->applyBitmapData(bitmap,false,repeat);
HXLINE( 720)									renderer->applyAlpha(( (Float)(1) ));
HXLINE( 721)									renderer->applyColorTransform(null());
HXLINE( 722)									renderer->_hx___updateShaderBuffer(shaderBufferOffset);
            								}
            								else {
HXLINE( 726)									if (::openfl::display::_internal::Context3DGraphics_obj::maskRender) {
HXLINE( 726)										shader = renderer->_hx___maskShader;
            									}
            									else {
HXLINE( 726)										shader = renderer->_hx___initGraphicsShader(null());
            									}
HXLINE( 727)									renderer->setShader(shader);
HXLINE( 728)									renderer->applyMatrix(uMatrix);
HXLINE( 729)									renderer->applyBitmapData(bitmap,smooth,repeat);
HXLINE( 730)									renderer->applyAlpha(graphics->_hx___owner->_hx___worldAlpha);
HXLINE( 731)									renderer->applyColorTransform(graphics->_hx___owner->_hx___worldColorTransform);
HXLINE( 732)									renderer->updateShader();
            								}
HXLINE( 735)								if (::hx::IsNotNull( shader->_hx___position )) {
HXLINE( 736)									 ::Dynamic _hx_tmp;
HXDLIN( 736)									if (hasUVTData) {
HXLINE( 736)										_hx_tmp = 4;
            									}
            									else {
HXLINE( 736)										_hx_tmp = 2;
            									}
HXLINE( 735)									context->setVertexBufferAt(( (int)(shader->_hx___position->index) ),vertexBuffer,bufferPosition,_hx_tmp);
            								}
HXLINE( 737)								if (::hx::IsNotNull( shader->_hx___textureCoord )) {
HXLINE( 737)									context->setVertexBufferAt(( (int)(shader->_hx___textureCoord->index) ),vertexBuffer,(bufferPosition + vertLength),2);
            								}
HXLINE( 740)								 ::Dynamic _hx_switch_0 = culling;
            								if (  (_hx_switch_0==0) ){
HXLINE( 746)									context->setCulling(0);
HXDLIN( 746)									goto _hx_goto_9;
            								}
            								if (  (_hx_switch_0==1) ){
HXLINE( 749)									context->setCulling(3);
HXDLIN( 749)									goto _hx_goto_9;
            								}
            								if (  (_hx_switch_0==2) ){
HXLINE( 743)									context->setCulling(1);
HXDLIN( 743)									goto _hx_goto_9;
            								}
            								/* default */{
            								}
            								_hx_goto_9:;
HXLINE( 761)								context->_hx___drawTriangles(0,length);
HXLINE( 765)								shaderBufferOffset = (shaderBufferOffset + length);
HXLINE( 766)								if (hasUVTData) {
HXLINE( 768)									vertexBufferPositionUVT = (vertexBufferPositionUVT + (dataPerVertex * length));
            								}
            								else {
HXLINE( 772)									vertexBufferPosition = (vertexBufferPosition + (dataPerVertex * length));
            								}
HXLINE( 777)								 ::Dynamic _hx_switch_1 = culling;
            								if (  (_hx_switch_1==1) ||  (_hx_switch_1==2) ){
HXLINE( 780)									context->setCulling(0);
HXDLIN( 780)									goto _hx_goto_10;
            								}
            								/* default */{
            								}
            								_hx_goto_10:;
HXLINE( 789)								renderer->_hx___clearShader();
            							}
            							break;
            							case (int)13: {
HXLINE( 792)								bitmap = null();
HXLINE( 793)								fill = null();
HXLINE( 794)								shaderBuffer = null();
HXLINE( 795)								{
HXLINE( 795)									switch((int)(data->prev->_hx_getIndex())){
            										case (int)0: {
HXLINE( 795)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 795)											data1->oPos = (data1->oPos + 2);
HXDLIN( 795)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 795)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)1: {
HXLINE( 795)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 795)											data1->iPos = (data1->iPos + 1);
HXDLIN( 795)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 795)											data2->fPos = (data2->fPos + 1);
            										}
            										break;
            										case (int)2: {
HXLINE( 795)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 795)											data1->oPos = (data1->oPos + 4);
HXDLIN( 795)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 795)											data2->iiPos = (data2->iiPos + 2);
HXDLIN( 795)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 795)											data3->ffPos = (data3->ffPos + 1);
HXDLIN( 795)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 795)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)3: {
HXLINE( 795)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 795)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)4: {
HXLINE( 795)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 795)											data1->fPos = (data1->fPos + 6);
            										}
            										break;
            										case (int)5: {
HXLINE( 795)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 795)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)6: {
HXLINE( 795)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 795)											data1->fPos = (data1->fPos + 3);
            										}
            										break;
            										case (int)7: {
HXLINE( 795)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 795)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)8: {
HXLINE( 795)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 795)											data1->oPos = (data1->oPos + 3);
            										}
            										break;
            										case (int)9: {
HXLINE( 795)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 795)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)10: {
HXLINE( 795)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 795)											data1->fPos = (data1->fPos + 5);
HXDLIN( 795)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 795)											data2->oPos = (data2->oPos + 1);
            										}
            										break;
            										case (int)12: {
HXLINE( 795)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 795)											data1->oPos = (data1->oPos + 4);
            										}
            										break;
            										case (int)13: {
            										}
            										break;
            										case (int)14: {
HXLINE( 795)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 795)											data1->oPos = (data1->oPos + 2);
HXDLIN( 795)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 795)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)15: {
HXLINE( 795)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 795)											data1->oPos = (data1->oPos + 4);
HXDLIN( 795)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 795)											data2->iiPos = (data2->iiPos + 2);
HXDLIN( 795)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 795)											data3->ffPos = (data3->ffPos + 1);
HXDLIN( 795)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 795)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)16: {
HXLINE( 795)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 795)											data1->oPos = (data1->oPos + 4);
HXDLIN( 795)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 795)											data2->iPos = (data2->iPos + 1);
HXDLIN( 795)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 795)											data3->fPos = (data3->fPos + 2);
HXDLIN( 795)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 795)											data4->bPos = (data4->bPos + 1);
            										}
            										break;
            										case (int)17: {
HXLINE( 795)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 795)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)18: {
HXLINE( 795)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 795)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)19: {
HXLINE( 795)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 795)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)20: {
HXLINE( 795)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 795)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)21: case (int)22: {
            										}
            										break;
            										default:{
            										}
            									}
HXLINE( 795)									data->prev = type;
            								}
HXLINE( 796)								context->setCulling(3);
            							}
            							break;
            							case (int)18: {
HXLINE( 799)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 799)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 799)										data1->oPos = (data1->oPos + 2);
HXDLIN( 799)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 799)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 799)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 799)										data1->iPos = (data1->iPos + 1);
HXDLIN( 799)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 799)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 799)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 799)										data1->oPos = (data1->oPos + 4);
HXDLIN( 799)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 799)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 799)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 799)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 799)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 799)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 799)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 799)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 799)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 799)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 799)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 799)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 799)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 799)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 799)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 799)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 799)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 799)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 799)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 799)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 799)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 799)										data1->fPos = (data1->fPos + 5);
HXDLIN( 799)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 799)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 799)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 799)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 799)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 799)										data1->oPos = (data1->oPos + 2);
HXDLIN( 799)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 799)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 799)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 799)										data1->oPos = (data1->oPos + 4);
HXDLIN( 799)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 799)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 799)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 799)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 799)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 799)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 799)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 799)										data1->oPos = (data1->oPos + 4);
HXDLIN( 799)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 799)										data2->iPos = (data2->iPos + 1);
HXDLIN( 799)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 799)										data3->fPos = (data3->fPos + 2);
HXDLIN( 799)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 799)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 799)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 799)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 799)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 799)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 799)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 799)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 799)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 799)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 799)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::MOVE_TO_dyn();
HXDLIN( 799)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 799)								HX_VARI(  ::openfl::display::_internal::DrawCommandReader,c) = this1;
HXLINE( 800)								positionX = c->buffer->f->__get(c->fPos);
HXLINE( 801)								positionY = c->buffer->f->__get((c->fPos + 1));
            							}
            							break;
            							case (int)19: {
HXLINE( 804)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 804)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 804)										data1->oPos = (data1->oPos + 2);
HXDLIN( 804)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 804)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 804)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 804)										data1->iPos = (data1->iPos + 1);
HXDLIN( 804)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 804)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 804)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 804)										data1->oPos = (data1->oPos + 4);
HXDLIN( 804)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 804)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 804)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 804)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 804)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 804)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 804)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 804)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 804)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 804)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 804)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 804)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 804)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 804)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 804)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 804)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 804)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 804)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 804)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 804)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 804)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 804)										data1->fPos = (data1->fPos + 5);
HXDLIN( 804)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 804)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 804)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 804)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 804)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 804)										data1->oPos = (data1->oPos + 2);
HXDLIN( 804)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 804)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 804)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 804)										data1->oPos = (data1->oPos + 4);
HXDLIN( 804)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 804)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 804)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 804)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 804)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 804)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 804)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 804)										data1->oPos = (data1->oPos + 4);
HXDLIN( 804)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 804)										data2->iPos = (data2->iPos + 1);
HXDLIN( 804)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 804)										data3->fPos = (data3->fPos + 2);
HXDLIN( 804)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 804)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 804)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 804)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 804)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 804)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 804)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 804)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 804)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 804)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 804)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::OVERRIDE_BLEND_MODE_dyn();
HXDLIN( 804)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 804)								HX_VARI(  ::openfl::display::_internal::DrawCommandReader,c) = this1;
HXLINE( 805)								renderer->_hx___setBlendMode(c->buffer->o->__get(c->oPos));
            							}
            							break;
            							default:{
HXLINE( 808)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 808)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)										data1->oPos = (data1->oPos + 2);
HXDLIN( 808)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 808)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 808)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)										data1->iPos = (data1->iPos + 1);
HXDLIN( 808)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 808)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 808)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)										data1->oPos = (data1->oPos + 4);
HXDLIN( 808)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 808)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 808)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 808)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 808)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 808)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 808)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 808)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 808)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 808)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 808)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 808)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 808)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 808)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)										data1->fPos = (data1->fPos + 5);
HXDLIN( 808)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 808)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 808)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 808)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)										data1->oPos = (data1->oPos + 2);
HXDLIN( 808)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 808)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 808)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)										data1->oPos = (data1->oPos + 4);
HXDLIN( 808)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 808)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 808)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 808)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 808)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 808)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 808)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)										data1->oPos = (data1->oPos + 4);
HXDLIN( 808)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 808)										data2->iPos = (data2->iPos + 1);
HXDLIN( 808)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 808)										data3->fPos = (data3->fPos + 2);
HXDLIN( 808)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 808)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 808)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 808)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 808)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 808)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 808)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 808)								data->prev = type;
            							}
            						}
            					}
            				}
HXLINE( 812)				::openfl::geom::Matrix_obj::_hx___pool->release(matrix);
            			}
HXLINE( 815)			graphics->_hx___hardwareDirty = false;
HXLINE( 816)			graphics->set___dirty(false);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DGraphics_obj,render,(void))

void Context3DGraphics_obj::renderMask( ::openfl::display::Graphics graphics, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_14098afca734a8c3_821_renderMask)
            	HX_STACK_ARG(graphics,"graphics")
            	HX_STACK_ARG(renderer,"renderer")
HXLINE( 821)
HXLINE( 824)		::openfl::display::_internal::Context3DGraphics_obj::maskRender = true;
HXLINE( 825)		::openfl::display::_internal::Context3DGraphics_obj::render(graphics,renderer);
HXLINE( 826)		::openfl::display::_internal::Context3DGraphics_obj::maskRender = false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DGraphics_obj,renderMask,(void))

void Context3DGraphics_obj::resizeIndexBuffer( ::openfl::display::Graphics graphics,bool isQuad,int length){
            	HX_GC_STACKFRAME(&_hx_pos_14098afca734a8c3_830_resizeIndexBuffer)
            	HX_STACK_ARG(graphics,"graphics")
            	HX_STACK_ARG(isQuad,"isQuad")
            	HX_STACK_ARG(length,"length")
HXLINE( 830)
HXLINE( 831)		if (isQuad) {
HXLINE( 831)			return;
            		}
HXLINE( 833)		HX_VAR(  ::lime::utils::ArrayBufferView,buffer);
HXDLIN( 833)		if (isQuad) {
HXLINE( 833)			buffer = null();
            		}
            		else {
HXLINE( 833)			buffer = graphics->_hx___triangleIndexBufferData;
            		}
HXLINE( 834)		HX_VARI( int,position) = 0;
HXDLIN( 834)		HX_VARI(  ::lime::utils::ArrayBufferView,newBuffer) = null();
HXLINE( 837)		if (::hx::IsNull( buffer )) {
HXLINE( 839)			 ::haxe::io::Bytes buffer = null();
HXDLIN( 839)			::cpp::VirtualArray array = null();
HXDLIN( 839)			 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 839)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 839)			 ::Dynamic len = null();
HXDLIN( 839)			 ::lime::utils::ArrayBufferView this1;
HXDLIN( 839)			if (::hx::IsNotNull( length )) {
HXLINE( 839)				this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,length,6);
            			}
            			else {
HXLINE( 839)				if (::hx::IsNotNull( array )) {
HXLINE( 839)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 839)					_this->byteOffset = 0;
HXDLIN( 839)					_this->length = array->get_length();
HXDLIN( 839)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 839)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 839)					_this->buffer = this2;
HXDLIN( 839)					_this->copyFromArray(array,null());
HXDLIN( 839)					this1 = _this;
            				}
            				else {
HXLINE( 839)					if (::hx::IsNotNull( vector )) {
HXLINE( 839)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 839)						::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 839)						_this->byteOffset = 0;
HXDLIN( 839)						_this->length = array->get_length();
HXDLIN( 839)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 839)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 839)						_this->buffer = this2;
HXDLIN( 839)						_this->copyFromArray(array,null());
HXDLIN( 839)						this1 = _this;
            					}
            					else {
HXLINE( 839)						if (::hx::IsNotNull( view )) {
HXLINE( 839)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 839)							 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 839)							int srcLength = view->length;
HXDLIN( 839)							int srcByteOffset = view->byteOffset;
HXDLIN( 839)							int srcElementSize = view->bytesPerElement;
HXDLIN( 839)							int elementSize = _this->bytesPerElement;
HXDLIN( 839)							if ((view->type == _this->type)) {
HXLINE( 839)								int srcLength = srcData->length;
HXDLIN( 839)								int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 839)								 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 839)								_this->buffer = this1;
HXDLIN( 839)								_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            							}
            							else {
HXLINE( 839)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            							}
HXDLIN( 839)							_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 839)							_this->byteOffset = 0;
HXDLIN( 839)							_this->length = srcLength;
HXDLIN( 839)							this1 = _this;
            						}
            						else {
HXLINE( 839)							if (::hx::IsNotNull( buffer )) {
HXLINE( 839)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 839)								int in_byteOffset = 0;
HXDLIN( 839)								if ((in_byteOffset < 0)) {
HXLINE( 839)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 839)								if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 839)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 839)								int bufferByteLength = buffer->length;
HXDLIN( 839)								int elementSize = _this->bytesPerElement;
HXDLIN( 839)								int newByteLength = bufferByteLength;
HXDLIN( 839)								if (::hx::IsNull( len )) {
HXLINE( 839)									newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 839)									if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 839)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 839)									if ((newByteLength < 0)) {
HXLINE( 839)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
            								else {
HXLINE( 839)									newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 839)									int newRange = (in_byteOffset + newByteLength);
HXDLIN( 839)									if ((newRange > bufferByteLength)) {
HXLINE( 839)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
HXDLIN( 839)								_this->buffer = buffer;
HXDLIN( 839)								_this->byteOffset = in_byteOffset;
HXDLIN( 839)								_this->byteLength = newByteLength;
HXDLIN( 839)								_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 839)								this1 = _this;
            							}
            							else {
HXLINE( 839)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt16Array",0a,c7,2d,d5)));
            							}
            						}
            					}
            				}
            			}
HXDLIN( 839)			newBuffer = this1;
            		}
            		else {
HXLINE( 841)			if ((length > buffer->length)) {
HXLINE( 843)				 ::haxe::io::Bytes buffer1 = null();
HXDLIN( 843)				::cpp::VirtualArray array = null();
HXDLIN( 843)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 843)				 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 843)				 ::Dynamic len = null();
HXDLIN( 843)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 843)				if (::hx::IsNotNull( length )) {
HXLINE( 843)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,length,6);
            				}
            				else {
HXLINE( 843)					if (::hx::IsNotNull( array )) {
HXLINE( 843)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 843)						_this->byteOffset = 0;
HXDLIN( 843)						_this->length = array->get_length();
HXDLIN( 843)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 843)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 843)						_this->buffer = this2;
HXDLIN( 843)						_this->copyFromArray(array,null());
HXDLIN( 843)						this1 = _this;
            					}
            					else {
HXLINE( 843)						if (::hx::IsNotNull( vector )) {
HXLINE( 843)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 843)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 843)							_this->byteOffset = 0;
HXDLIN( 843)							_this->length = array->get_length();
HXDLIN( 843)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 843)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 843)							_this->buffer = this2;
HXDLIN( 843)							_this->copyFromArray(array,null());
HXDLIN( 843)							this1 = _this;
            						}
            						else {
HXLINE( 843)							if (::hx::IsNotNull( view )) {
HXLINE( 843)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 843)								 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 843)								int srcLength = view->length;
HXDLIN( 843)								int srcByteOffset = view->byteOffset;
HXDLIN( 843)								int srcElementSize = view->bytesPerElement;
HXDLIN( 843)								int elementSize = _this->bytesPerElement;
HXDLIN( 843)								if ((view->type == _this->type)) {
HXLINE( 843)									int srcLength = srcData->length;
HXDLIN( 843)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 843)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 843)									_this->buffer = this1;
HXDLIN( 843)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 843)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 843)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 843)								_this->byteOffset = 0;
HXDLIN( 843)								_this->length = srcLength;
HXDLIN( 843)								this1 = _this;
            							}
            							else {
HXLINE( 843)								if (::hx::IsNotNull( buffer1 )) {
HXLINE( 843)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 843)									int in_byteOffset = 0;
HXDLIN( 843)									if ((in_byteOffset < 0)) {
HXLINE( 843)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 843)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 843)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 843)									int bufferByteLength = buffer1->length;
HXDLIN( 843)									int elementSize = _this->bytesPerElement;
HXDLIN( 843)									int newByteLength = bufferByteLength;
HXDLIN( 843)									if (::hx::IsNull( len )) {
HXLINE( 843)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 843)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 843)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 843)										if ((newByteLength < 0)) {
HXLINE( 843)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 843)										newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 843)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 843)										if ((newRange > bufferByteLength)) {
HXLINE( 843)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 843)									_this->buffer = buffer1;
HXDLIN( 843)									_this->byteOffset = in_byteOffset;
HXDLIN( 843)									_this->byteLength = newByteLength;
HXDLIN( 843)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 843)									this1 = _this;
            								}
            								else {
HXLINE( 843)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt16Array",0a,c7,2d,d5)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 843)				newBuffer = this1;
HXLINE( 844)				{
HXLINE( 844)					::cpp::VirtualArray array1 = null();
HXDLIN( 844)					int offset = 0;
HXDLIN( 844)					bool _hx_tmp;
HXDLIN( 844)					if (::hx::IsNotNull( buffer )) {
HXLINE( 844)						_hx_tmp = ::hx::IsNull( array1 );
            					}
            					else {
HXLINE( 844)						_hx_tmp = false;
            					}
HXDLIN( 844)					if (_hx_tmp) {
HXLINE( 844)						newBuffer->buffer->blit((offset * newBuffer->bytesPerElement),buffer->buffer,buffer->byteOffset,buffer->byteLength);
            					}
            					else {
HXLINE( 844)						bool _hx_tmp;
HXDLIN( 844)						if (::hx::IsNotNull( array1 )) {
HXLINE( 844)							_hx_tmp = ::hx::IsNull( buffer );
            						}
            						else {
HXLINE( 844)							_hx_tmp = false;
            						}
HXDLIN( 844)						if (_hx_tmp) {
HXLINE( 844)							newBuffer->copyFromArray(array1,offset);
            						}
            						else {
HXLINE( 844)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid .set call. either view, or array must be not-null.",64,ba,b7,6c)));
            						}
            					}
            				}
HXLINE( 845)				position = buffer->length;
            			}
            		}
HXLINE( 849)		if (::hx::IsNotNull( newBuffer )) {
HXLINE( 851)			if (!(isQuad)) {
HXLINE( 872)				graphics->_hx___triangleIndexBufferData = newBuffer;
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Context3DGraphics_obj,resizeIndexBuffer,(void))

void Context3DGraphics_obj::resizeVertexBuffer( ::openfl::display::Graphics graphics,bool hasUVTData,int length){
            	HX_GC_STACKFRAME(&_hx_pos_14098afca734a8c3_878_resizeVertexBuffer)
            	HX_STACK_ARG(graphics,"graphics")
            	HX_STACK_ARG(hasUVTData,"hasUVTData")
            	HX_STACK_ARG(length,"length")
HXLINE( 878)
HXLINE( 879)		HX_VAR(  ::lime::utils::ArrayBufferView,buffer);
HXDLIN( 879)		if (hasUVTData) {
HXLINE( 879)			buffer = graphics->_hx___vertexBufferDataUVT;
            		}
            		else {
HXLINE( 879)			buffer = graphics->_hx___vertexBufferData;
            		}
HXLINE( 880)		HX_VARI(  ::lime::utils::ArrayBufferView,newBuffer) = null();
HXLINE( 883)		if (::hx::IsNull( buffer )) {
HXLINE( 885)			 ::haxe::io::Bytes buffer = null();
HXDLIN( 885)			::cpp::VirtualArray array = null();
HXDLIN( 885)			 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 885)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 885)			 ::Dynamic len = null();
HXDLIN( 885)			 ::lime::utils::ArrayBufferView this1;
HXDLIN( 885)			if (::hx::IsNotNull( length )) {
HXLINE( 885)				this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,length,8);
            			}
            			else {
HXLINE( 885)				if (::hx::IsNotNull( array )) {
HXLINE( 885)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 885)					_this->byteOffset = 0;
HXDLIN( 885)					_this->length = array->get_length();
HXDLIN( 885)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 885)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 885)					_this->buffer = this2;
HXDLIN( 885)					_this->copyFromArray(array,null());
HXDLIN( 885)					this1 = _this;
            				}
            				else {
HXLINE( 885)					if (::hx::IsNotNull( vector )) {
HXLINE( 885)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 885)						::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 885)						_this->byteOffset = 0;
HXDLIN( 885)						_this->length = array->get_length();
HXDLIN( 885)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 885)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 885)						_this->buffer = this2;
HXDLIN( 885)						_this->copyFromArray(array,null());
HXDLIN( 885)						this1 = _this;
            					}
            					else {
HXLINE( 885)						if (::hx::IsNotNull( view )) {
HXLINE( 885)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 885)							 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 885)							int srcLength = view->length;
HXDLIN( 885)							int srcByteOffset = view->byteOffset;
HXDLIN( 885)							int srcElementSize = view->bytesPerElement;
HXDLIN( 885)							int elementSize = _this->bytesPerElement;
HXDLIN( 885)							if ((view->type == _this->type)) {
HXLINE( 885)								int srcLength = srcData->length;
HXDLIN( 885)								int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 885)								 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 885)								_this->buffer = this1;
HXDLIN( 885)								_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            							}
            							else {
HXLINE( 885)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            							}
HXDLIN( 885)							_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 885)							_this->byteOffset = 0;
HXDLIN( 885)							_this->length = srcLength;
HXDLIN( 885)							this1 = _this;
            						}
            						else {
HXLINE( 885)							if (::hx::IsNotNull( buffer )) {
HXLINE( 885)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 885)								int in_byteOffset = 0;
HXDLIN( 885)								if ((in_byteOffset < 0)) {
HXLINE( 885)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 885)								if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 885)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 885)								int bufferByteLength = buffer->length;
HXDLIN( 885)								int elementSize = _this->bytesPerElement;
HXDLIN( 885)								int newByteLength = bufferByteLength;
HXDLIN( 885)								if (::hx::IsNull( len )) {
HXLINE( 885)									newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 885)									if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 885)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 885)									if ((newByteLength < 0)) {
HXLINE( 885)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
            								else {
HXLINE( 885)									newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 885)									int newRange = (in_byteOffset + newByteLength);
HXDLIN( 885)									if ((newRange > bufferByteLength)) {
HXLINE( 885)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
HXDLIN( 885)								_this->buffer = buffer;
HXDLIN( 885)								_this->byteOffset = in_byteOffset;
HXDLIN( 885)								_this->byteLength = newByteLength;
HXDLIN( 885)								_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 885)								this1 = _this;
            							}
            							else {
HXLINE( 885)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            							}
            						}
            					}
            				}
            			}
HXDLIN( 885)			newBuffer = this1;
            		}
            		else {
HXLINE( 887)			if ((length > buffer->length)) {
HXLINE( 889)				 ::haxe::io::Bytes buffer1 = null();
HXDLIN( 889)				::cpp::VirtualArray array = null();
HXDLIN( 889)				 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 889)				 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 889)				 ::Dynamic len = null();
HXDLIN( 889)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 889)				if (::hx::IsNotNull( length )) {
HXLINE( 889)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,length,8);
            				}
            				else {
HXLINE( 889)					if (::hx::IsNotNull( array )) {
HXLINE( 889)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 889)						_this->byteOffset = 0;
HXDLIN( 889)						_this->length = array->get_length();
HXDLIN( 889)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 889)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 889)						_this->buffer = this2;
HXDLIN( 889)						_this->copyFromArray(array,null());
HXDLIN( 889)						this1 = _this;
            					}
            					else {
HXLINE( 889)						if (::hx::IsNotNull( vector )) {
HXLINE( 889)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 889)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 889)							_this->byteOffset = 0;
HXDLIN( 889)							_this->length = array->get_length();
HXDLIN( 889)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 889)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 889)							_this->buffer = this2;
HXDLIN( 889)							_this->copyFromArray(array,null());
HXDLIN( 889)							this1 = _this;
            						}
            						else {
HXLINE( 889)							if (::hx::IsNotNull( view )) {
HXLINE( 889)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 889)								 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 889)								int srcLength = view->length;
HXDLIN( 889)								int srcByteOffset = view->byteOffset;
HXDLIN( 889)								int srcElementSize = view->bytesPerElement;
HXDLIN( 889)								int elementSize = _this->bytesPerElement;
HXDLIN( 889)								if ((view->type == _this->type)) {
HXLINE( 889)									int srcLength = srcData->length;
HXDLIN( 889)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 889)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 889)									_this->buffer = this1;
HXDLIN( 889)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 889)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 889)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 889)								_this->byteOffset = 0;
HXDLIN( 889)								_this->length = srcLength;
HXDLIN( 889)								this1 = _this;
            							}
            							else {
HXLINE( 889)								if (::hx::IsNotNull( buffer1 )) {
HXLINE( 889)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 889)									int in_byteOffset = 0;
HXDLIN( 889)									if ((in_byteOffset < 0)) {
HXLINE( 889)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 889)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 889)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 889)									int bufferByteLength = buffer1->length;
HXDLIN( 889)									int elementSize = _this->bytesPerElement;
HXDLIN( 889)									int newByteLength = bufferByteLength;
HXDLIN( 889)									if (::hx::IsNull( len )) {
HXLINE( 889)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 889)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 889)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 889)										if ((newByteLength < 0)) {
HXLINE( 889)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 889)										newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 889)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 889)										if ((newRange > bufferByteLength)) {
HXLINE( 889)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 889)									_this->buffer = buffer1;
HXDLIN( 889)									_this->byteOffset = in_byteOffset;
HXDLIN( 889)									_this->byteLength = newByteLength;
HXDLIN( 889)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 889)									this1 = _this;
            								}
            								else {
HXLINE( 889)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 889)				newBuffer = this1;
HXLINE( 890)				{
HXLINE( 890)					::cpp::VirtualArray array1 = null();
HXDLIN( 890)					int offset = 0;
HXDLIN( 890)					bool _hx_tmp;
HXDLIN( 890)					if (::hx::IsNotNull( buffer )) {
HXLINE( 890)						_hx_tmp = ::hx::IsNull( array1 );
            					}
            					else {
HXLINE( 890)						_hx_tmp = false;
            					}
HXDLIN( 890)					if (_hx_tmp) {
HXLINE( 890)						newBuffer->buffer->blit((offset * newBuffer->bytesPerElement),buffer->buffer,buffer->byteOffset,buffer->byteLength);
            					}
            					else {
HXLINE( 890)						bool _hx_tmp;
HXDLIN( 890)						if (::hx::IsNotNull( array1 )) {
HXLINE( 890)							_hx_tmp = ::hx::IsNull( buffer );
            						}
            						else {
HXLINE( 890)							_hx_tmp = false;
            						}
HXDLIN( 890)						if (_hx_tmp) {
HXLINE( 890)							newBuffer->copyFromArray(array1,offset);
            						}
            						else {
HXLINE( 890)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid .set call. either view, or array must be not-null.",64,ba,b7,6c)));
            						}
            					}
            				}
            			}
            		}
HXLINE( 894)		if (::hx::IsNotNull( newBuffer )) {
HXLINE( 896)			if (hasUVTData) {
HXLINE( 896)				graphics->_hx___vertexBufferDataUVT = newBuffer;
            			}
            			else {
HXLINE( 896)				graphics->_hx___vertexBufferData = newBuffer;
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Context3DGraphics_obj,resizeVertexBuffer,(void))


Context3DGraphics_obj::Context3DGraphics_obj()
{
}

bool Context3DGraphics_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maskRender") ) { outValue = ( maskRender ); return true; }
		if (HX_FIELD_EQ(inName,"renderMask") ) { outValue = renderMask_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"buildBuffer") ) { outValue = buildBuffer_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isCompatible") ) { outValue = isCompatible_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"blankBitmapData") ) { outValue = ( blankBitmapData ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"resizeIndexBuffer") ) { outValue = resizeIndexBuffer_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"tempColorTransform") ) { outValue = ( tempColorTransform ); return true; }
		if (HX_FIELD_EQ(inName,"resizeVertexBuffer") ) { outValue = resizeVertexBuffer_dyn(); return true; }
	}
	return false;
}

bool Context3DGraphics_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"maskRender") ) { maskRender=ioValue.Cast< bool >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"blankBitmapData") ) { blankBitmapData=ioValue.Cast<  ::openfl::display::BitmapData >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"tempColorTransform") ) { tempColorTransform=ioValue.Cast<  ::openfl::geom::ColorTransform >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Context3DGraphics_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Context3DGraphics_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(void *) &Context3DGraphics_obj::blankBitmapData,HX_("blankBitmapData",2d,8a,0b,df)},
	{::hx::fsBool,(void *) &Context3DGraphics_obj::maskRender,HX_("maskRender",62,99,0d,1a)},
	{::hx::fsObject /*  ::openfl::geom::ColorTransform */ ,(void *) &Context3DGraphics_obj::tempColorTransform,HX_("tempColorTransform",bd,e9,a6,54)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Context3DGraphics_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DGraphics_obj::blankBitmapData,"blankBitmapData");
	HX_MARK_MEMBER_NAME(Context3DGraphics_obj::maskRender,"maskRender");
	HX_MARK_MEMBER_NAME(Context3DGraphics_obj::tempColorTransform,"tempColorTransform");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Context3DGraphics_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DGraphics_obj::blankBitmapData,"blankBitmapData");
	HX_VISIT_MEMBER_NAME(Context3DGraphics_obj::maskRender,"maskRender");
	HX_VISIT_MEMBER_NAME(Context3DGraphics_obj::tempColorTransform,"tempColorTransform");
};

#endif

::hx::Class Context3DGraphics_obj::__mClass;

static ::String Context3DGraphics_obj_sStaticFields[] = {
	HX_("blankBitmapData",2d,8a,0b,df),
	HX_("maskRender",62,99,0d,1a),
	HX_("tempColorTransform",bd,e9,a6,54),
	HX_("buildBuffer",ce,a2,05,21),
	HX_("isCompatible",de,03,42,0a),
	HX_("render",56,6b,29,05),
	HX_("renderMask",62,3b,60,e5),
	HX_("resizeIndexBuffer",1e,c0,ce,b4),
	HX_("resizeVertexBuffer",98,73,d0,f4),
	::String(null())
};

void Context3DGraphics_obj::__register()
{
	Context3DGraphics_obj _hx_dummy;
	Context3DGraphics_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.Context3DGraphics",cf,76,90,23);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DGraphics_obj::__GetStatic;
	__mClass->mSetStaticField = &Context3DGraphics_obj::__SetStatic;
	__mClass->mMarkFunc = Context3DGraphics_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Context3DGraphics_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Context3DGraphics_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Context3DGraphics_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DGraphics_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DGraphics_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Context3DGraphics_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_14098afca734a8c3_34_boot)
HXDLIN(  34)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_14098afca734a8c3_36_boot)
HXDLIN(  36)		blankBitmapData =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,1,1,false,0);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_14098afca734a8c3_38_boot)
HXDLIN(  38)		tempColorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,1,1,1,1,0,0,0,0);
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
