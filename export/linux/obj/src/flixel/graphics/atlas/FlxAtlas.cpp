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
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas_FlxAtlas
#include <flixel/graphics/atlas/FlxAtlas.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas_FlxNode
#include <flixel/graphics/atlas/FlxNode.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxTileFrames
#include <flixel/graphics/frames/FlxTileFrames.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxBitmapDataUtil
#include <flixel/util/FlxBitmapDataUtil.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal1
#include <flixel/util/_FlxSignal/FlxSignal1.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_f38becfab6571882_25_new,"flixel.graphics.atlas.FlxAtlas","new",0xc05046bf,"flixel.graphics.atlas.FlxAtlas.new","flixel/graphics/atlas/FlxAtlas.hx",25,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_154_initRoot,"flixel.graphics.atlas.FlxAtlas","initRoot",0x37652e93,"flixel.graphics.atlas.FlxAtlas.initRoot","flixel/graphics/atlas/FlxAtlas.hx",154,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_177_addNode,"flixel.graphics.atlas.FlxAtlas","addNode",0xeec7dea2,"flixel.graphics.atlas.FlxAtlas.addNode","flixel/graphics/atlas/FlxAtlas.hx",177,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_219_wrapRoot,"flixel.graphics.atlas.FlxAtlas","wrapRoot",0x7e08124d,"flixel.graphics.atlas.FlxAtlas.wrapRoot","flixel/graphics/atlas/FlxAtlas.hx",219,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_226_tryInsert,"flixel.graphics.atlas.FlxAtlas","tryInsert",0xc0214673,"flixel.graphics.atlas.FlxAtlas.tryInsert","flixel/graphics/atlas/FlxAtlas.hx",226,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_262_needToDivideHorizontally,"flixel.graphics.atlas.FlxAtlas","needToDivideHorizontally",0x28a8e09c,"flixel.graphics.atlas.FlxAtlas.needToDivideHorizontally","flixel/graphics/atlas/FlxAtlas.hx",262,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_271_divideNode,"flixel.graphics.atlas.FlxAtlas","divideNode",0x568bb99c,"flixel.graphics.atlas.FlxAtlas.divideNode","flixel/graphics/atlas/FlxAtlas.hx",271,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_353_insertFirstNodeInRoot,"flixel.graphics.atlas.FlxAtlas","insertFirstNodeInRoot",0xea82177f,"flixel.graphics.atlas.FlxAtlas.insertFirstNodeInRoot","flixel/graphics/atlas/FlxAtlas.hx",353,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_397_expand,"flixel.graphics.atlas.FlxAtlas","expand",0x67ef7d5b,"flixel.graphics.atlas.FlxAtlas.expand","flixel/graphics/atlas/FlxAtlas.hx",397,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_550_expandRoot,"flixel.graphics.atlas.FlxAtlas","expandRoot",0x3df0e11d,"flixel.graphics.atlas.FlxAtlas.expandRoot","flixel/graphics/atlas/FlxAtlas.hx",550,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_563_expandBitmapData,"flixel.graphics.atlas.FlxAtlas","expandBitmapData",0xdc8f96f4,"flixel.graphics.atlas.FlxAtlas.expandBitmapData","flixel/graphics/atlas/FlxAtlas.hx",563,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_581_getNextPowerOfTwo,"flixel.graphics.atlas.FlxAtlas","getNextPowerOfTwo",0x3bc20318,"flixel.graphics.atlas.FlxAtlas.getNextPowerOfTwo","flixel/graphics/atlas/FlxAtlas.hx",581,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_607_addNodeWithSpacesAndBorders,"flixel.graphics.atlas.FlxAtlas","addNodeWithSpacesAndBorders",0x375b9d25,"flixel.graphics.atlas.FlxAtlas.addNodeWithSpacesAndBorders","flixel/graphics/atlas/FlxAtlas.hx",607,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_657_getAtlasFrames,"flixel.graphics.atlas.FlxAtlas","getAtlasFrames",0xe2ec465c,"flixel.graphics.atlas.FlxAtlas.getAtlasFrames","flixel/graphics/atlas/FlxAtlas.hx",657,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_673_addNodeToAtlasFrames,"flixel.graphics.atlas.FlxAtlas","addNodeToAtlasFrames",0x19696d94,"flixel.graphics.atlas.FlxAtlas.addNodeToAtlasFrames","flixel/graphics/atlas/FlxAtlas.hx",673,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_698_hasNodeWithName,"flixel.graphics.atlas.FlxAtlas","hasNodeWithName",0x3a185aec,"flixel.graphics.atlas.FlxAtlas.hasNodeWithName","flixel/graphics/atlas/FlxAtlas.hx",698,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_709_getNode,"flixel.graphics.atlas.FlxAtlas","getNode",0x850d4b97,"flixel.graphics.atlas.FlxAtlas.getNode","flixel/graphics/atlas/FlxAtlas.hx",709,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_721_addNodes,"flixel.graphics.atlas.FlxAtlas","addNodes",0x001aef91,"flixel.graphics.atlas.FlxAtlas.addNodes","flixel/graphics/atlas/FlxAtlas.hx",721,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_744_addFromAtlasObjects,"flixel.graphics.atlas.FlxAtlas","addFromAtlasObjects",0xc364fff3,"flixel.graphics.atlas.FlxAtlas.addFromAtlasObjects","flixel/graphics/atlas/FlxAtlas.hx",744,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_758_bitmapSorter,"flixel.graphics.atlas.FlxAtlas","bitmapSorter",0x4abe7a5b,"flixel.graphics.atlas.FlxAtlas.bitmapSorter","flixel/graphics/atlas/FlxAtlas.hx",758,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_780_createQueue,"flixel.graphics.atlas.FlxAtlas","createQueue",0x315e3254,"flixel.graphics.atlas.FlxAtlas.createQueue","flixel/graphics/atlas/FlxAtlas.hx",780,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_792_addToQueue,"flixel.graphics.atlas.FlxAtlas","addToQueue",0x83cfa976,"flixel.graphics.atlas.FlxAtlas.addToQueue","flixel/graphics/atlas/FlxAtlas.hx",792,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_804_generateFromQueue,"flixel.graphics.atlas.FlxAtlas","generateFromQueue",0x8e4a2871,"flixel.graphics.atlas.FlxAtlas.generateFromQueue","flixel/graphics/atlas/FlxAtlas.hx",804,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_813_onClear,"flixel.graphics.atlas.FlxAtlas","onClear",0x4819a1cd,"flixel.graphics.atlas.FlxAtlas.onClear","flixel/graphics/atlas/FlxAtlas.hx",813,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_822_destroy,"flixel.graphics.atlas.FlxAtlas","destroy",0x8e06bed9,"flixel.graphics.atlas.FlxAtlas.destroy","flixel/graphics/atlas/FlxAtlas.hx",822,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_840_clear,"flixel.graphics.atlas.FlxAtlas","clear",0x59297dac,"flixel.graphics.atlas.FlxAtlas.clear","flixel/graphics/atlas/FlxAtlas.hx",840,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_853_getLibGdxData,"flixel.graphics.atlas.FlxAtlas","getLibGdxData",0x1a9c9615,"flixel.graphics.atlas.FlxAtlas.getLibGdxData","flixel/graphics/atlas/FlxAtlas.hx",853,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_886_deleteSubtree,"flixel.graphics.atlas.FlxAtlas","deleteSubtree",0xf9ad5912,"flixel.graphics.atlas.FlxAtlas.deleteSubtree","flixel/graphics/atlas/FlxAtlas.hx",886,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_898_findNodeToInsert,"flixel.graphics.atlas.FlxAtlas","findNodeToInsert",0x513a4b50,"flixel.graphics.atlas.FlxAtlas.findNodeToInsert","flixel/graphics/atlas/FlxAtlas.hx",898,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_964_set_bitmapData,"flixel.graphics.atlas.FlxAtlas","set_bitmapData",0xf5eb1e77,"flixel.graphics.atlas.FlxAtlas.set_bitmapData","flixel/graphics/atlas/FlxAtlas.hx",964,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_973_get_graphic,"flixel.graphics.atlas.FlxAtlas","get_graphic",0xa3fa281e,"flixel.graphics.atlas.FlxAtlas.get_graphic","flixel/graphics/atlas/FlxAtlas.hx",973,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_984_set_persist,"flixel.graphics.atlas.FlxAtlas","set_persist",0xbdd0f696,"flixel.graphics.atlas.FlxAtlas.set_persist","flixel/graphics/atlas/FlxAtlas.hx",984,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_992_set_minWidth,"flixel.graphics.atlas.FlxAtlas","set_minWidth",0x9b144052,"flixel.graphics.atlas.FlxAtlas.set_minWidth","flixel/graphics/atlas/FlxAtlas.hx",992,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_1004_set_minHeight,"flixel.graphics.atlas.FlxAtlas","set_minHeight",0xccf3801b,"flixel.graphics.atlas.FlxAtlas.set_minHeight","flixel/graphics/atlas/FlxAtlas.hx",1004,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_1016_get_width,"flixel.graphics.atlas.FlxAtlas","get_width",0x463c19fc,"flixel.graphics.atlas.FlxAtlas.get_width","flixel/graphics/atlas/FlxAtlas.hx",1016,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_1024_set_width,"flixel.graphics.atlas.FlxAtlas","set_width",0x298d0608,"flixel.graphics.atlas.FlxAtlas.set_width","flixel/graphics/atlas/FlxAtlas.hx",1024,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_1043_get_height,"flixel.graphics.atlas.FlxAtlas","get_height",0xe4aa1b31,"flixel.graphics.atlas.FlxAtlas.get_height","flixel/graphics/atlas/FlxAtlas.hx",1043,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_1050_set_height,"flixel.graphics.atlas.FlxAtlas","set_height",0xe827b9a5,"flixel.graphics.atlas.FlxAtlas.set_height","flixel/graphics/atlas/FlxAtlas.hx",1050,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_1069_set_maxWidth,"flixel.graphics.atlas.FlxAtlas","set_maxWidth",0x4dfa2600,"flixel.graphics.atlas.FlxAtlas.set_maxWidth","flixel/graphics/atlas/FlxAtlas.hx",1069,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_1077_set_maxHeight,"flixel.graphics.atlas.FlxAtlas","set_maxHeight",0xa33692ad,"flixel.graphics.atlas.FlxAtlas.set_maxHeight","flixel/graphics/atlas/FlxAtlas.hx",1077,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_1085_set_powerOfTwo,"flixel.graphics.atlas.FlxAtlas","set_powerOfTwo",0xacd9272e,"flixel.graphics.atlas.FlxAtlas.set_powerOfTwo","flixel/graphics/atlas/FlxAtlas.hx",1085,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_27_boot,"flixel.graphics.atlas.FlxAtlas","boot",0x7e06a0f3,"flixel.graphics.atlas.FlxAtlas.boot","flixel/graphics/atlas/FlxAtlas.hx",27,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_28_boot,"flixel.graphics.atlas.FlxAtlas","boot",0x7e06a0f3,"flixel.graphics.atlas.FlxAtlas.boot","flixel/graphics/atlas/FlxAtlas.hx",28,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_33_boot,"flixel.graphics.atlas.FlxAtlas","boot",0x7e06a0f3,"flixel.graphics.atlas.FlxAtlas.boot","flixel/graphics/atlas/FlxAtlas.hx",33,0x03972f50)
HX_LOCAL_STACK_FRAME(_hx_pos_f38becfab6571882_38_boot,"flixel.graphics.atlas.FlxAtlas","boot",0x7e06a0f3,"flixel.graphics.atlas.FlxAtlas.boot","flixel/graphics/atlas/FlxAtlas.hx",38,0x03972f50)
namespace flixel{
namespace graphics{
namespace atlas{

void FlxAtlas_obj::__construct(::String name,::hx::Null< bool >  __o_powerOfTwo,::hx::Null< int >  __o_border,::hx::Null< bool >  __o_rotate, ::flixel::math::FlxPoint minSize, ::flixel::math::FlxPoint maxSize){
            		bool powerOfTwo = __o_powerOfTwo.Default(false);
            		int border = __o_border.Default(1);
            		bool rotate = __o_rotate.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_f38becfab6571882_25_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(name,"name")
            	HX_STACK_ARG(powerOfTwo,"powerOfTwo")
            	HX_STACK_ARG(border,"border")
            	HX_STACK_ARG(rotate,"rotate")
            	HX_STACK_ARG(minSize,"minSize")
            	HX_STACK_ARG(maxSize,"maxSize")
HXLINE(  25)
HXLINE( 113)		this->powerOfTwo = false;
HXLINE( 108)		this->allowRotation = false;
HXLINE( 103)		this->maxHeight = 1024;
HXLINE(  98)		this->maxWidth = 1024;
HXLINE(  93)		this->minHeight = 128;
HXLINE(  88)		this->minWidth = 128;
HXLINE(  71)		this->border = 1;
HXLINE(  66)		this->persist = false;
HXLINE( 134)		this->nodes =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 135)		this->name = name;
HXLINE( 136)		this->set_powerOfTwo(powerOfTwo);
HXLINE( 137)		this->border = border;
HXLINE( 139)		if (::hx::IsNull( minSize )) {
HXLINE( 139)			minSize = ::flixel::graphics::atlas::FlxAtlas_obj::defaultMinSize;
            		}
HXLINE( 140)		if (::hx::IsNull( maxSize )) {
HXLINE( 140)			maxSize = ::flixel::graphics::atlas::FlxAtlas_obj::defaultMaxSize;
            		}
HXLINE( 142)		this->set_minWidth(::Std_obj::_hx_int(minSize->x));
HXLINE( 143)		this->set_minHeight(::Std_obj::_hx_int(minSize->y));
HXLINE( 144)		int _hx_tmp;
HXDLIN( 144)		if ((maxSize->x > minSize->x)) {
HXLINE( 144)			_hx_tmp = ::Std_obj::_hx_int(maxSize->x);
            		}
            		else {
HXLINE( 144)			_hx_tmp = this->minWidth;
            		}
HXDLIN( 144)		this->set_maxWidth(_hx_tmp);
HXLINE( 145)		int _hx_tmp1;
HXDLIN( 145)		if ((maxSize->y > minSize->x)) {
HXLINE( 145)			_hx_tmp1 = ::Std_obj::_hx_int(maxSize->y);
            		}
            		else {
HXLINE( 145)			_hx_tmp1 = this->minHeight;
            		}
HXDLIN( 145)		this->set_maxHeight(_hx_tmp1);
HXLINE( 146)		this->allowRotation = rotate;
HXLINE( 148)		this->initRoot();
HXLINE( 150)		::flixel::FlxG_obj::signals->preStateCreate->add(this->onClear_dyn());
            	}

Dynamic FlxAtlas_obj::__CreateEmpty() { return new FlxAtlas_obj; }

void *FlxAtlas_obj::_hx_vtable = 0;

Dynamic FlxAtlas_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxAtlas_obj > _hx_result = new FlxAtlas_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool FlxAtlas_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x27a7f739;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_graphics_atlas_FlxAtlas__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::graphics::atlas::FlxAtlas_obj::destroy,
};

void *FlxAtlas_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_graphics_atlas_FlxAtlas__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxAtlas_obj::initRoot(){
            	HX_GC_STACKFRAME(&_hx_pos_f38becfab6571882_154_initRoot)
            	HX_STACK_THIS(this)
HXLINE( 154)
HXLINE( 155)		HX_VARI( int,rootWidth) = this->minWidth;
HXLINE( 156)		HX_VARI( int,rootHeight) = this->minHeight;
HXLINE( 158)		if (this->powerOfTwo) {
HXLINE( 160)			rootWidth = this->getNextPowerOfTwo(( (Float)(rootWidth) ));
HXLINE( 161)			rootHeight = this->getNextPowerOfTwo(( (Float)(rootHeight) ));
            		}
HXLINE( 164)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 164)		_this->x = ( (Float)(0) );
HXDLIN( 164)		_this->y = ( (Float)(0) );
HXDLIN( 164)		_this->width = ( (Float)(rootWidth) );
HXDLIN( 164)		_this->height = ( (Float)(rootHeight) );
HXDLIN( 164)		 ::flixel::math::FlxRect rect = _this;
HXDLIN( 164)		rect->_inPool = false;
HXDLIN( 164)		this->root =  ::flixel::graphics::atlas::FlxNode_obj::__alloc( HX_CTX ,rect,::hx::ObjectPtr<OBJ_>(this),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,initRoot,(void))

 ::flixel::graphics::atlas::FlxNode FlxAtlas_obj::addNode( ::Dynamic Graphic,::String Key){
            	HX_STACKFRAME(&_hx_pos_f38becfab6571882_177_addNode)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Graphic,"Graphic")
            	HX_STACK_ARG(Key,"Key")
HXLINE( 177)
HXLINE( 178)		HX_VARI( ::String,key) = ::flixel::_hx_system::FlxAssets_obj::resolveKey(Graphic,Key);
HXLINE( 180)		if (::hx::IsNull( key )) {
HXLINE( 183)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("addNode can't find the key for specified BitmapData. Please provide not null value as a Key argument.",d2,94,28,ae)));
            		}
HXLINE( 188)		if (this->hasNodeWithName(key)) {
HXLINE( 189)			return ( ( ::flixel::graphics::atlas::FlxNode)(this->nodes->get(key)) );
            		}
HXLINE( 191)		HX_VARI(  ::openfl::display::BitmapData,data) = ::flixel::_hx_system::FlxAssets_obj::resolveBitmapData(Graphic);
HXLINE( 193)		if (::hx::IsNull( data )) {
HXLINE( 196)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("addNode can't find BitmapData with specified key: ",7b,9b,ce,f1) + Graphic) + HX_(". Please provide valid value.",84,e6,88,32))));
            		}
HXLINE( 202)		if (::hx::IsNull( this->root->left )) {
HXLINE( 203)			return this->insertFirstNodeInRoot(data,key);
            		}
HXLINE( 205)		if (::hx::IsNull( this->root->right )) {
HXLINE( 206)			return this->expand(data,key);
            		}
HXLINE( 209)		HX_VARI(  ::flixel::graphics::atlas::FlxNode,inserted) = this->tryInsert(data,key);
HXLINE( 210)		if (::hx::IsNotNull( inserted )) {
HXLINE( 211)			return inserted;
            		}
HXLINE( 214)		this->wrapRoot();
HXLINE( 215)		return this->expand(data,key);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxAtlas_obj,addNode,return )

void FlxAtlas_obj::wrapRoot(){
            	HX_GC_STACKFRAME(&_hx_pos_f38becfab6571882_219_wrapRoot)
            	HX_STACK_THIS(this)
HXLINE( 219)
HXLINE( 220)		HX_VARI(  ::flixel::graphics::atlas::FlxNode,temp) = this->root;
HXLINE( 221)		Float Width = ( (Float)(::Std_obj::_hx_int(temp->rect->width)) );
HXDLIN( 221)		Float Height = ( (Float)(::Std_obj::_hx_int(temp->rect->height)) );
HXDLIN( 221)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 221)		_this->x = ( (Float)(0) );
HXDLIN( 221)		_this->y = ( (Float)(0) );
HXDLIN( 221)		_this->width = Width;
HXDLIN( 221)		_this->height = Height;
HXDLIN( 221)		 ::flixel::math::FlxRect rect = _this;
HXDLIN( 221)		rect->_inPool = false;
HXDLIN( 221)		this->root =  ::flixel::graphics::atlas::FlxNode_obj::__alloc( HX_CTX ,rect,::hx::ObjectPtr<OBJ_>(this),null(),null(),null());
HXLINE( 222)		this->root->left = temp;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,wrapRoot,(void))

 ::flixel::graphics::atlas::FlxNode FlxAtlas_obj::tryInsert( ::openfl::display::BitmapData data,::String key){
            	HX_STACKFRAME(&_hx_pos_f38becfab6571882_226_tryInsert)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(data,"data")
            	HX_STACK_ARG(key,"key")
HXLINE( 226)
HXLINE( 227)		HX_VARI( int,insertWidth) = (data->width + this->border);
HXLINE( 228)		HX_VARI( int,insertHeight) = (data->height + this->border);
HXLINE( 230)		HX_VARI( bool,rotateNode) = false;
HXLINE( 231)		HX_VARI(  ::flixel::graphics::atlas::FlxNode,nodeToInsert) = this->findNodeToInsert(insertWidth,insertHeight);
HXLINE( 233)		if (this->allowRotation) {
HXLINE( 235)			HX_VARI(  ::flixel::graphics::atlas::FlxNode,nodeToInsertWithRotation) = this->findNodeToInsert(insertHeight,insertWidth);
HXLINE( 237)			if (::hx::IsNotNull( nodeToInsertWithRotation )) {
HXLINE( 239)				int nodeWithRotationArea = ::Std_obj::_hx_int(nodeToInsertWithRotation->rect->width);
HXDLIN( 239)				HX_VARI( int,nodeWithRotationArea1) = (nodeWithRotationArea * ::Std_obj::_hx_int(nodeToInsertWithRotation->rect->height));
HXLINE( 241)				bool _hx_tmp;
HXDLIN( 241)				if (::hx::IsNotNull( nodeToInsert )) {
HXLINE( 241)					if (::hx::IsNotNull( nodeToInsert )) {
HXLINE( 241)						int _hx_tmp1 = ::Std_obj::_hx_int(nodeToInsert->rect->width);
HXDLIN( 241)						_hx_tmp = ((_hx_tmp1 * ::Std_obj::_hx_int(nodeToInsert->rect->height)) > nodeWithRotationArea1);
            					}
            					else {
HXLINE( 241)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 241)					_hx_tmp = true;
            				}
HXDLIN( 241)				if (_hx_tmp) {
HXLINE( 243)					nodeToInsert = nodeToInsertWithRotation;
HXLINE( 244)					rotateNode = true;
HXLINE( 245)					HX_VARI( int,temp) = insertWidth;
HXLINE( 246)					insertWidth = insertHeight;
HXLINE( 247)					insertHeight = temp;
            				}
            			}
            		}
HXLINE( 252)		if (::hx::IsNotNull( nodeToInsert )) {
HXLINE( 254)			HX_VARI( bool,horizontally) = this->needToDivideHorizontally(nodeToInsert,insertWidth,insertHeight);
HXLINE( 255)			return this->divideNode(nodeToInsert,insertWidth,insertHeight,horizontally,data,key,rotateNode);
            		}
HXLINE( 258)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxAtlas_obj,tryInsert,return )

bool FlxAtlas_obj::needToDivideHorizontally( ::flixel::graphics::atlas::FlxNode nodeToDivide,int insertWidth,int insertHeight){
            	HX_STACKFRAME(&_hx_pos_f38becfab6571882_262_needToDivideHorizontally)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(nodeToDivide,"nodeToDivide")
            	HX_STACK_ARG(insertWidth,"insertWidth")
            	HX_STACK_ARG(insertHeight,"insertHeight")
HXLINE( 262)
HXLINE( 263)		HX_VARI( int,dw) = (::Std_obj::_hx_int(nodeToDivide->rect->width) - insertWidth);
HXLINE( 264)		HX_VARI( int,dh) = (::Std_obj::_hx_int(nodeToDivide->rect->height) - insertHeight);
HXLINE( 266)		return (dw > dh);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxAtlas_obj,needToDivideHorizontally,return )

 ::flixel::graphics::atlas::FlxNode FlxAtlas_obj::divideNode( ::flixel::graphics::atlas::FlxNode nodeToDivide,int insertWidth,int insertHeight,bool divideHorizontally, ::openfl::display::BitmapData firstGrandChildData,::String firstGrandChildKey,::hx::Null< bool >  __o_firstGrandChildRotated){
            		bool firstGrandChildRotated = __o_firstGrandChildRotated.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_f38becfab6571882_271_divideNode)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(nodeToDivide,"nodeToDivide")
            	HX_STACK_ARG(insertWidth,"insertWidth")
            	HX_STACK_ARG(insertHeight,"insertHeight")
            	HX_STACK_ARG(divideHorizontally,"divideHorizontally")
            	HX_STACK_ARG(firstGrandChildData,"firstGrandChildData")
            	HX_STACK_ARG(firstGrandChildKey,"firstGrandChildKey")
            	HX_STACK_ARG(firstGrandChildRotated,"firstGrandChildRotated")
HXLINE( 271)
HXLINE( 272)		if (::hx::IsNotNull( nodeToDivide )) {
HXLINE( 274)			HX_VARI(  ::flixel::graphics::atlas::FlxNode,firstChild) = null();
HXLINE( 275)			HX_VARI(  ::flixel::graphics::atlas::FlxNode,secondChild) = null();
HXLINE( 276)			HX_VARI(  ::flixel::graphics::atlas::FlxNode,firstGrandChild) = null();
HXLINE( 277)			HX_VARI(  ::flixel::graphics::atlas::FlxNode,secondGrandChild) = null();
HXLINE( 278)			HX_VARI( bool,firstGrandChildFilled) = ::hx::IsNotNull( firstGrandChildKey );
HXLINE( 280)			if (divideHorizontally) {
HXLINE( 282)				Float X = ( (Float)(::Std_obj::_hx_int(nodeToDivide->rect->x)) );
HXDLIN( 282)				Float Y = ( (Float)(::Std_obj::_hx_int(nodeToDivide->rect->y)) );
HXDLIN( 282)				Float Height = ( (Float)(::Std_obj::_hx_int(nodeToDivide->rect->height)) );
HXDLIN( 282)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 282)				_this->x = X;
HXDLIN( 282)				_this->y = Y;
HXDLIN( 282)				_this->width = ( (Float)(insertWidth) );
HXDLIN( 282)				_this->height = Height;
HXDLIN( 282)				 ::flixel::math::FlxRect rect = _this;
HXDLIN( 282)				rect->_inPool = false;
HXDLIN( 282)				firstChild =  ::flixel::graphics::atlas::FlxNode_obj::__alloc( HX_CTX ,rect,::hx::ObjectPtr<OBJ_>(this),null(),null(),null());
HXLINE( 284)				if (((::Std_obj::_hx_int(nodeToDivide->rect->width) - insertWidth) > 0)) {
HXLINE( 286)					Float X = ( (Float)((::Std_obj::_hx_int(nodeToDivide->rect->x) + insertWidth)) );
HXDLIN( 286)					Float Y = ( (Float)(::Std_obj::_hx_int(nodeToDivide->rect->y)) );
HXDLIN( 286)					Float Width = ( (Float)((::Std_obj::_hx_int(nodeToDivide->rect->width) - insertWidth)) );
HXDLIN( 286)					Float Height = ( (Float)(::Std_obj::_hx_int(nodeToDivide->rect->height)) );
HXDLIN( 286)					 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 286)					_this->x = X;
HXDLIN( 286)					_this->y = Y;
HXDLIN( 286)					_this->width = Width;
HXDLIN( 286)					_this->height = Height;
HXDLIN( 286)					 ::flixel::math::FlxRect rect = _this;
HXDLIN( 286)					rect->_inPool = false;
HXDLIN( 286)					secondChild =  ::flixel::graphics::atlas::FlxNode_obj::__alloc( HX_CTX ,rect,::hx::ObjectPtr<OBJ_>(this),null(),null(),null());
            				}
HXLINE( 290)				Float X1 = ( (Float)(::Std_obj::_hx_int(firstChild->rect->x)) );
HXDLIN( 290)				Float Y1 = ( (Float)(::Std_obj::_hx_int(firstChild->rect->y)) );
HXDLIN( 290)				 ::flixel::math::FlxRect _this1 = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 290)				_this1->x = X1;
HXDLIN( 290)				_this1->y = Y1;
HXDLIN( 290)				_this1->width = ( (Float)(insertWidth) );
HXDLIN( 290)				_this1->height = ( (Float)(insertHeight) );
HXDLIN( 290)				 ::flixel::math::FlxRect rect1 = _this1;
HXDLIN( 290)				rect1->_inPool = false;
HXDLIN( 290)				firstGrandChild =  ::flixel::graphics::atlas::FlxNode_obj::__alloc( HX_CTX ,rect1,::hx::ObjectPtr<OBJ_>(this),firstGrandChildFilled,firstGrandChildKey,firstGrandChildRotated);
HXLINE( 293)				if (((::Std_obj::_hx_int(firstChild->rect->height) - insertHeight) > 0)) {
HXLINE( 295)					Float X = ( (Float)(::Std_obj::_hx_int(firstChild->rect->x)) );
HXDLIN( 295)					Float Y = ( (Float)((::Std_obj::_hx_int(firstChild->rect->y) + insertHeight)) );
HXDLIN( 295)					Float Height = ( (Float)((::Std_obj::_hx_int(firstChild->rect->height) - insertHeight)) );
HXDLIN( 295)					 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 295)					_this->x = X;
HXDLIN( 295)					_this->y = Y;
HXDLIN( 295)					_this->width = ( (Float)(insertWidth) );
HXDLIN( 295)					_this->height = Height;
HXDLIN( 295)					 ::flixel::math::FlxRect rect = _this;
HXDLIN( 295)					rect->_inPool = false;
HXDLIN( 295)					secondGrandChild =  ::flixel::graphics::atlas::FlxNode_obj::__alloc( HX_CTX ,rect,::hx::ObjectPtr<OBJ_>(this),null(),null(),null());
            				}
            			}
            			else {
HXLINE( 301)				Float X = ( (Float)(::Std_obj::_hx_int(nodeToDivide->rect->x)) );
HXDLIN( 301)				Float Y = ( (Float)(::Std_obj::_hx_int(nodeToDivide->rect->y)) );
HXDLIN( 301)				Float Width = ( (Float)(::Std_obj::_hx_int(nodeToDivide->rect->width)) );
HXDLIN( 301)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 301)				_this->x = X;
HXDLIN( 301)				_this->y = Y;
HXDLIN( 301)				_this->width = Width;
HXDLIN( 301)				_this->height = ( (Float)(insertHeight) );
HXDLIN( 301)				 ::flixel::math::FlxRect rect = _this;
HXDLIN( 301)				rect->_inPool = false;
HXDLIN( 301)				firstChild =  ::flixel::graphics::atlas::FlxNode_obj::__alloc( HX_CTX ,rect,::hx::ObjectPtr<OBJ_>(this),null(),null(),null());
HXLINE( 303)				if (((::Std_obj::_hx_int(nodeToDivide->rect->height) - insertHeight) > 0)) {
HXLINE( 305)					Float X = ( (Float)(::Std_obj::_hx_int(nodeToDivide->rect->x)) );
HXDLIN( 305)					Float Y = ( (Float)((::Std_obj::_hx_int(nodeToDivide->rect->y) + insertHeight)) );
HXDLIN( 305)					Float Width = ( (Float)(::Std_obj::_hx_int(nodeToDivide->rect->width)) );
HXDLIN( 305)					Float Height = ( (Float)((::Std_obj::_hx_int(nodeToDivide->rect->height) - insertHeight)) );
HXDLIN( 305)					 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 305)					_this->x = X;
HXDLIN( 305)					_this->y = Y;
HXDLIN( 305)					_this->width = Width;
HXDLIN( 305)					_this->height = Height;
HXDLIN( 305)					 ::flixel::math::FlxRect rect = _this;
HXDLIN( 305)					rect->_inPool = false;
HXDLIN( 305)					secondChild =  ::flixel::graphics::atlas::FlxNode_obj::__alloc( HX_CTX ,rect,::hx::ObjectPtr<OBJ_>(this),null(),null(),null());
            				}
HXLINE( 309)				Float X1 = ( (Float)(::Std_obj::_hx_int(firstChild->rect->x)) );
HXDLIN( 309)				Float Y1 = ( (Float)(::Std_obj::_hx_int(firstChild->rect->y)) );
HXDLIN( 309)				 ::flixel::math::FlxRect _this1 = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 309)				_this1->x = X1;
HXDLIN( 309)				_this1->y = Y1;
HXDLIN( 309)				_this1->width = ( (Float)(insertWidth) );
HXDLIN( 309)				_this1->height = ( (Float)(insertHeight) );
HXDLIN( 309)				 ::flixel::math::FlxRect rect1 = _this1;
HXDLIN( 309)				rect1->_inPool = false;
HXDLIN( 309)				firstGrandChild =  ::flixel::graphics::atlas::FlxNode_obj::__alloc( HX_CTX ,rect1,::hx::ObjectPtr<OBJ_>(this),firstGrandChildFilled,firstGrandChildKey,firstGrandChildRotated);
HXLINE( 312)				if (((::Std_obj::_hx_int(firstChild->rect->width) - insertWidth) > 0)) {
HXLINE( 314)					Float X = ( (Float)((::Std_obj::_hx_int(firstChild->rect->x) + insertWidth)) );
HXDLIN( 314)					Float Y = ( (Float)(::Std_obj::_hx_int(firstChild->rect->y)) );
HXDLIN( 314)					Float Width = ( (Float)((::Std_obj::_hx_int(firstChild->rect->width) - insertWidth)) );
HXDLIN( 314)					 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 314)					_this->x = X;
HXDLIN( 314)					_this->y = Y;
HXDLIN( 314)					_this->width = Width;
HXDLIN( 314)					_this->height = ( (Float)(insertHeight) );
HXDLIN( 314)					 ::flixel::math::FlxRect rect = _this;
HXDLIN( 314)					rect->_inPool = false;
HXDLIN( 314)					secondGrandChild =  ::flixel::graphics::atlas::FlxNode_obj::__alloc( HX_CTX ,rect,::hx::ObjectPtr<OBJ_>(this),null(),null(),null());
            				}
            			}
HXLINE( 318)			firstChild->left = firstGrandChild;
HXLINE( 319)			firstChild->right = secondGrandChild;
HXLINE( 321)			nodeToDivide->left = firstChild;
HXLINE( 322)			nodeToDivide->right = secondChild;
HXLINE( 325)			bool _hx_tmp;
HXDLIN( 325)			if (::hx::IsNotNull( firstGrandChildKey )) {
HXLINE( 325)				_hx_tmp = ::hx::IsNotNull( firstGrandChildData );
            			}
            			else {
HXLINE( 325)				_hx_tmp = false;
            			}
HXDLIN( 325)			if (_hx_tmp) {
HXLINE( 327)				this->expandBitmapData();
HXLINE( 329)				if (firstGrandChildRotated) {
HXLINE( 331)					::flixel::graphics::atlas::FlxAtlas_obj::matrix->identity();
HXLINE( 332)					::flixel::graphics::atlas::FlxAtlas_obj::matrix->rotate((::Math_obj::PI / ( (Float)(2) )));
HXLINE( 333)					 ::openfl::geom::Matrix _hx_tmp = ::flixel::graphics::atlas::FlxAtlas_obj::matrix;
HXDLIN( 333)					int firstGrandChildData1 = firstGrandChildData->height;
HXDLIN( 333)					int _hx_tmp1 = (firstGrandChildData1 + ::Std_obj::_hx_int(firstGrandChild->rect->x));
HXDLIN( 333)					_hx_tmp->translate(( (Float)(_hx_tmp1) ),( (Float)(::Std_obj::_hx_int(firstGrandChild->rect->y)) ));
HXLINE( 334)					this->bitmapData->draw(firstGrandChildData,::flixel::graphics::atlas::FlxAtlas_obj::matrix,null(),null(),null(),null());
            				}
            				else {
HXLINE( 338)					 ::openfl::geom::Point _hx_tmp = ::flixel::graphics::atlas::FlxAtlas_obj::point;
HXDLIN( 338)					int _hx_tmp1 = ::Std_obj::_hx_int(firstGrandChild->rect->x);
HXDLIN( 338)					_hx_tmp->setTo(( (Float)(_hx_tmp1) ),( (Float)(::Std_obj::_hx_int(firstGrandChild->rect->y)) ));
HXLINE( 339)					this->bitmapData->copyPixels(firstGrandChildData,firstGrandChildData->rect,::flixel::graphics::atlas::FlxAtlas_obj::point,null(),null(),null());
            				}
HXLINE( 342)				this->addNodeToAtlasFrames(firstGrandChild);
HXLINE( 343)				this->nodes->set(firstGrandChildKey,firstGrandChild);
            			}
HXLINE( 346)			return firstGrandChild;
            		}
HXLINE( 349)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC7(FlxAtlas_obj,divideNode,return )

 ::flixel::graphics::atlas::FlxNode FlxAtlas_obj::insertFirstNodeInRoot( ::openfl::display::BitmapData data,::String key){
            	HX_STACKFRAME(&_hx_pos_f38becfab6571882_353_insertFirstNodeInRoot)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(data,"data")
            	HX_STACK_ARG(key,"key")
HXLINE( 353)
HXLINE( 354)		if (::hx::IsNull( this->root->left )) {
HXLINE( 356)			HX_VARI( int,insertWidth) = (data->width + this->border);
HXLINE( 357)			HX_VARI( int,insertHeight) = (data->height + this->border);
HXLINE( 359)			HX_VARI( int,rootWidth) = insertWidth;
HXLINE( 360)			HX_VARI( int,rootHeight) = insertHeight;
HXLINE( 362)			if (this->powerOfTwo) {
HXLINE( 364)				rootWidth = this->getNextPowerOfTwo(( (Float)(rootWidth) ));
HXLINE( 365)				rootHeight = this->getNextPowerOfTwo(( (Float)(rootHeight) ));
            			}
HXLINE( 368)			if ((this->minWidth > rootWidth)) {
HXLINE( 368)				rootWidth = this->minWidth;
            			}
HXLINE( 369)			if ((this->minHeight > rootHeight)) {
HXLINE( 369)				rootHeight = this->minHeight;
            			}
HXLINE( 371)			if (this->powerOfTwo) {
HXLINE( 373)				rootWidth = this->getNextPowerOfTwo(( (Float)(rootWidth) ));
HXLINE( 374)				rootHeight = this->getNextPowerOfTwo(( (Float)(rootHeight) ));
            			}
HXLINE( 377)			bool _hx_tmp;
HXDLIN( 377)			bool _hx_tmp1;
HXDLIN( 377)			if ((this->maxWidth > 0)) {
HXLINE( 377)				_hx_tmp1 = (rootWidth > this->maxWidth);
            			}
            			else {
HXLINE( 377)				_hx_tmp1 = false;
            			}
HXDLIN( 377)			if (!(_hx_tmp1)) {
HXLINE( 377)				if ((this->maxHeight > 0)) {
HXLINE( 377)					_hx_tmp = (rootHeight > this->maxHeight);
            				}
            				else {
HXLINE( 377)					_hx_tmp = false;
            				}
            			}
            			else {
HXLINE( 377)				_hx_tmp = true;
            			}
HXDLIN( 377)			if (_hx_tmp) {
HXLINE( 380)				::String _hx_tmp = ((((((((((((HX_("Can't insert node ",5a,c7,4d,53) + key) + HX_(" with the size of (",b5,20,c2,55)) + data->width) + HX_("; ",85,33,00,00)) + data->height) + HX_(") in atlas ",99,70,14,d3)) + this->name) + HX_(" with the max size of (",b9,b3,66,74)) + this->maxWidth) + HX_("; ",85,33,00,00)) + this->maxHeight) + HX_(") and powerOfTwo: ",d6,69,4d,94));
HXDLIN( 380)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp + ::Std_obj::string(this->powerOfTwo))));
            			}
HXLINE( 386)			this->root->set_width(rootWidth);
HXLINE( 387)			this->root->set_height(rootHeight);
HXLINE( 389)			HX_VARI( bool,horizontally) = this->needToDivideHorizontally(this->root,insertWidth,insertHeight);
HXLINE( 390)			return this->divideNode(this->root,insertWidth,insertHeight,horizontally,data,key,null());
            		}
HXLINE( 393)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxAtlas_obj,insertFirstNodeInRoot,return )

 ::flixel::graphics::atlas::FlxNode FlxAtlas_obj::expand( ::openfl::display::BitmapData data,::String key){
            	HX_STACKFRAME(&_hx_pos_f38becfab6571882_397_expand)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(data,"data")
            	HX_STACK_ARG(key,"key")
HXLINE( 397)
HXLINE( 398)		if (::hx::IsNull( this->root->right )) {
HXLINE( 400)			HX_VARI( int,insertWidth) = (data->width + this->border);
HXLINE( 401)			HX_VARI( int,insertHeight) = (data->height + this->border);
HXLINE( 404)			HX_VARI( int,addRightWidth) = (::Std_obj::_hx_int(this->root->rect->width) + insertWidth);
HXLINE( 405)			HX_VARI( int,addRightHeight) = ::Std_obj::_hx_int(::Math_obj::max(( (Float)(::Std_obj::_hx_int(this->root->rect->height)) ),( (Float)(insertHeight) )));
HXLINE( 407)			HX_VARI( int,addBottomWidth) = ::Std_obj::_hx_int(::Math_obj::max(( (Float)(::Std_obj::_hx_int(this->root->rect->width)) ),( (Float)(insertWidth) )));
HXLINE( 408)			HX_VARI( int,addBottomHeight) = (::Std_obj::_hx_int(this->root->rect->height) + insertHeight);
HXLINE( 410)			HX_VARI( int,addRightWidthRotate) = addRightWidth;
HXLINE( 411)			HX_VARI( int,addRightHeightRotate) = addRightHeight;
HXLINE( 413)			HX_VARI( int,addBottomWidthRotate) = addBottomWidth;
HXLINE( 414)			HX_VARI( int,addBottomHeightRotate) = addBottomHeight;
HXLINE( 416)			if (this->allowRotation) {
HXLINE( 418)				addRightWidthRotate = (::Std_obj::_hx_int(this->root->rect->width) + insertHeight);
HXLINE( 419)				addRightHeightRotate = ::Std_obj::_hx_int(::Math_obj::max(( (Float)(::Std_obj::_hx_int(this->root->rect->height)) ),( (Float)(insertWidth) )));
HXLINE( 421)				addBottomWidthRotate = ::Std_obj::_hx_int(::Math_obj::max(( (Float)(::Std_obj::_hx_int(this->root->rect->width)) ),( (Float)(insertHeight) )));
HXLINE( 422)				addBottomHeightRotate = (::Std_obj::_hx_int(this->root->rect->height) + insertWidth);
            			}
HXLINE( 425)			if (this->powerOfTwo) {
HXLINE( 427)				addRightWidth = this->getNextPowerOfTwo(( (Float)(addRightWidth) ));
HXDLIN( 427)				addRightWidthRotate = addRightWidth;
HXLINE( 428)				addRightHeight = this->getNextPowerOfTwo(( (Float)(addRightHeight) ));
HXDLIN( 428)				addRightHeightRotate = addRightHeight;
HXLINE( 429)				addBottomWidth = this->getNextPowerOfTwo(( (Float)(addBottomWidth) ));
HXDLIN( 429)				addBottomWidthRotate = addBottomWidth;
HXLINE( 430)				addBottomHeight = this->getNextPowerOfTwo(( (Float)(addBottomHeight) ));
HXDLIN( 430)				addBottomHeightRotate = addBottomHeight;
HXLINE( 432)				if (this->allowRotation) {
HXLINE( 434)					addRightWidthRotate = this->getNextPowerOfTwo(( (Float)(addRightWidthRotate) ));
HXLINE( 435)					addRightHeightRotate = this->getNextPowerOfTwo(( (Float)(addRightHeightRotate) ));
HXLINE( 436)					addBottomWidthRotate = this->getNextPowerOfTwo(( (Float)(addBottomWidthRotate) ));
HXLINE( 437)					addBottomHeightRotate = this->getNextPowerOfTwo(( (Float)(addBottomHeightRotate) ));
            				}
            			}
HXLINE( 442)			HX_VARI( bool,canExpandRight) = true;
HXLINE( 443)			HX_VARI( bool,canExpandBottom) = true;
HXLINE( 445)			HX_VARI( bool,canExpandRightRotate) = this->allowRotation;
HXLINE( 446)			HX_VARI( bool,canExpandBottomRotate) = this->allowRotation;
HXLINE( 448)			bool _hx_tmp;
HXDLIN( 448)			bool _hx_tmp1;
HXDLIN( 448)			if ((this->maxWidth > 0)) {
HXLINE( 448)				_hx_tmp1 = (addRightWidth > this->maxWidth);
            			}
            			else {
HXLINE( 448)				_hx_tmp1 = false;
            			}
HXDLIN( 448)			if (!(_hx_tmp1)) {
HXLINE( 448)				if ((this->maxHeight > 0)) {
HXLINE( 448)					_hx_tmp = (addRightHeight > this->maxHeight);
            				}
            				else {
HXLINE( 448)					_hx_tmp = false;
            				}
            			}
            			else {
HXLINE( 448)				_hx_tmp = true;
            			}
HXDLIN( 448)			if (_hx_tmp) {
HXLINE( 449)				canExpandRight = false;
            			}
HXLINE( 451)			bool _hx_tmp2;
HXDLIN( 451)			bool _hx_tmp3;
HXDLIN( 451)			if ((this->maxWidth > 0)) {
HXLINE( 451)				_hx_tmp3 = (addBottomWidth > this->maxWidth);
            			}
            			else {
HXLINE( 451)				_hx_tmp3 = false;
            			}
HXDLIN( 451)			if (!(_hx_tmp3)) {
HXLINE( 451)				if ((this->maxHeight > 0)) {
HXLINE( 451)					_hx_tmp2 = (addBottomHeight > this->maxHeight);
            				}
            				else {
HXLINE( 451)					_hx_tmp2 = false;
            				}
            			}
            			else {
HXLINE( 451)				_hx_tmp2 = true;
            			}
HXDLIN( 451)			if (_hx_tmp2) {
HXLINE( 452)				canExpandBottom = false;
            			}
HXLINE( 454)			bool _hx_tmp4;
HXDLIN( 454)			bool _hx_tmp5;
HXDLIN( 454)			if ((this->maxWidth > 0)) {
HXLINE( 454)				_hx_tmp5 = (addRightWidthRotate > this->maxWidth);
            			}
            			else {
HXLINE( 454)				_hx_tmp5 = false;
            			}
HXDLIN( 454)			if (!(_hx_tmp5)) {
HXLINE( 454)				if ((this->maxHeight > 0)) {
HXLINE( 454)					_hx_tmp4 = (addRightHeightRotate > this->maxHeight);
            				}
            				else {
HXLINE( 454)					_hx_tmp4 = false;
            				}
            			}
            			else {
HXLINE( 454)				_hx_tmp4 = true;
            			}
HXDLIN( 454)			if (_hx_tmp4) {
HXLINE( 455)				canExpandRightRotate = false;
            			}
HXLINE( 457)			bool _hx_tmp6;
HXDLIN( 457)			bool _hx_tmp7;
HXDLIN( 457)			if ((this->maxWidth > 0)) {
HXLINE( 457)				_hx_tmp7 = (addBottomWidthRotate > this->maxWidth);
            			}
            			else {
HXLINE( 457)				_hx_tmp7 = false;
            			}
HXDLIN( 457)			if (!(_hx_tmp7)) {
HXLINE( 457)				if ((this->maxHeight > 0)) {
HXLINE( 457)					_hx_tmp6 = (addBottomHeightRotate > this->maxHeight);
            				}
            				else {
HXLINE( 457)					_hx_tmp6 = false;
            				}
            			}
            			else {
HXLINE( 457)				_hx_tmp6 = true;
            			}
HXDLIN( 457)			if (_hx_tmp6) {
HXLINE( 458)				canExpandBottomRotate = false;
            			}
HXLINE( 460)			bool _hx_tmp8;
HXDLIN( 460)			bool _hx_tmp9;
HXDLIN( 460)			bool _hx_tmp10;
HXDLIN( 460)			if (!(canExpandRight)) {
HXLINE( 460)				_hx_tmp10 = !(canExpandBottom);
            			}
            			else {
HXLINE( 460)				_hx_tmp10 = false;
            			}
HXDLIN( 460)			if (_hx_tmp10) {
HXLINE( 460)				_hx_tmp9 = !(canExpandRightRotate);
            			}
            			else {
HXLINE( 460)				_hx_tmp9 = false;
            			}
HXDLIN( 460)			if (_hx_tmp9) {
HXLINE( 460)				_hx_tmp8 = !(canExpandBottomRotate);
            			}
            			else {
HXLINE( 460)				_hx_tmp8 = false;
            			}
HXDLIN( 460)			if (_hx_tmp8) {
HXLINE( 463)				::String _hx_tmp = ((((((((((((HX_("Can't insert node ",5a,c7,4d,53) + key) + HX_(" with the size of (",b5,20,c2,55)) + data->width) + HX_("; ",85,33,00,00)) + data->height) + HX_(") in atlas ",99,70,14,d3)) + this->name) + HX_(" with the max size of (",b9,b3,66,74)) + this->maxWidth) + HX_("; ",85,33,00,00)) + this->maxHeight) + HX_(") and powerOfTwo: ",d6,69,4d,94));
HXDLIN( 463)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp + ::Std_obj::string(this->powerOfTwo))));
            			}
HXLINE( 471)			HX_VARI( int,addRightArea) = (addRightWidth * addRightHeight);
HXLINE( 472)			HX_VARI( int,addBottomArea) = (addBottomWidth * addBottomHeight);
HXLINE( 474)			HX_VARI( int,addRightAreaRotate) = (addRightWidthRotate * addRightHeightRotate);
HXLINE( 475)			HX_VARI( int,addBottomAreaRotate) = (addBottomWidthRotate * addBottomHeightRotate);
HXLINE( 477)			HX_VARI( bool,rotateRight) = false;
HXLINE( 478)			HX_VARI( bool,rotateBottom) = false;
HXLINE( 479)			HX_VARI( bool,rotateNode) = false;
HXLINE( 481)			bool _hx_tmp11;
HXDLIN( 481)			bool _hx_tmp12;
HXDLIN( 481)			bool _hx_tmp13;
HXDLIN( 481)			if (canExpandRight) {
HXLINE( 481)				_hx_tmp13 = canExpandRightRotate;
            			}
            			else {
HXLINE( 481)				_hx_tmp13 = false;
            			}
HXDLIN( 481)			if (_hx_tmp13) {
HXLINE( 481)				_hx_tmp12 = (addRightArea > addRightAreaRotate);
            			}
            			else {
HXLINE( 481)				_hx_tmp12 = false;
            			}
HXDLIN( 481)			if (!(_hx_tmp12)) {
HXLINE( 481)				if (!(canExpandRight)) {
HXLINE( 481)					_hx_tmp11 = canExpandRightRotate;
            				}
            				else {
HXLINE( 481)					_hx_tmp11 = false;
            				}
            			}
            			else {
HXLINE( 481)				_hx_tmp11 = true;
            			}
HXDLIN( 481)			if (_hx_tmp11) {
HXLINE( 483)				addRightArea = addBottomAreaRotate;
HXLINE( 484)				addRightWidth = addRightWidthRotate;
HXLINE( 485)				addRightHeight = addRightHeightRotate;
HXLINE( 486)				canExpandRight = true;
HXLINE( 487)				rotateRight = true;
            			}
HXLINE( 490)			bool _hx_tmp14;
HXDLIN( 490)			bool _hx_tmp15;
HXDLIN( 490)			bool _hx_tmp16;
HXDLIN( 490)			if (canExpandBottom) {
HXLINE( 490)				_hx_tmp16 = canExpandBottomRotate;
            			}
            			else {
HXLINE( 490)				_hx_tmp16 = false;
            			}
HXDLIN( 490)			if (_hx_tmp16) {
HXLINE( 490)				_hx_tmp15 = (addBottomArea > addBottomAreaRotate);
            			}
            			else {
HXLINE( 490)				_hx_tmp15 = false;
            			}
HXDLIN( 490)			if (!(_hx_tmp15)) {
HXLINE( 491)				if (!(canExpandBottom)) {
HXLINE( 490)					_hx_tmp14 = canExpandBottomRotate;
            				}
            				else {
HXLINE( 490)					_hx_tmp14 = false;
            				}
            			}
            			else {
HXLINE( 490)				_hx_tmp14 = true;
            			}
HXDLIN( 490)			if (_hx_tmp14) {
HXLINE( 493)				addBottomArea = addBottomAreaRotate;
HXLINE( 494)				addBottomWidth = addBottomWidthRotate;
HXLINE( 495)				addBottomHeight = addBottomHeightRotate;
HXLINE( 496)				canExpandBottom = true;
HXLINE( 497)				rotateBottom = true;
            			}
HXLINE( 500)			bool _hx_tmp17;
HXDLIN( 500)			if (!(canExpandRight)) {
HXLINE( 500)				_hx_tmp17 = canExpandBottom;
            			}
            			else {
HXLINE( 500)				_hx_tmp17 = false;
            			}
HXDLIN( 500)			if (_hx_tmp17) {
HXLINE( 502)				addRightArea = (addBottomArea + 1);
HXLINE( 503)				rotateNode = rotateRight;
            			}
            			else {
HXLINE( 505)				bool _hx_tmp;
HXDLIN( 505)				if (canExpandRight) {
HXLINE( 505)					_hx_tmp = !(canExpandBottom);
            				}
            				else {
HXLINE( 505)					_hx_tmp = false;
            				}
HXDLIN( 505)				if (_hx_tmp) {
HXLINE( 507)					addBottomArea = (addRightArea + 1);
HXLINE( 508)					rotateNode = rotateBottom;
            				}
            			}
HXLINE( 511)			HX_VARI(  ::flixel::graphics::atlas::FlxNode,dataNode) = null();
HXLINE( 512)			HX_VARI(  ::flixel::graphics::atlas::FlxNode,temp) = this->root;
HXLINE( 513)			HX_VARI( int,insertNodeWidth) = insertWidth;
HXLINE( 514)			HX_VARI( int,insertNodeHeight) = insertHeight;
HXLINE( 517)			if ((addBottomArea >= addRightArea)) {
HXLINE( 519)				if (rotateRight) {
HXLINE( 521)					insertNodeWidth = insertHeight;
HXLINE( 522)					insertNodeHeight = insertWidth;
            				}
HXLINE( 525)				int _hx_tmp = (::Std_obj::_hx_int(temp->rect->width) + insertNodeWidth);
HXDLIN( 525)				this->expandRoot(( (Float)(_hx_tmp) ),::Math_obj::max(( (Float)(::Std_obj::_hx_int(temp->rect->height)) ),( (Float)(insertNodeHeight) )),true,null());
HXLINE( 526)				dataNode = this->divideNode(this->root->right,insertNodeWidth,insertNodeHeight,true,data,key,rotateRight);
HXLINE( 527)				this->expandRoot(( (Float)(addRightWidth) ),( (Float)(addRightHeight) ),false,true);
            			}
            			else {
HXLINE( 531)				if (rotateBottom) {
HXLINE( 533)					insertNodeWidth = insertHeight;
HXLINE( 534)					insertNodeHeight = insertWidth;
            				}
HXLINE( 537)				Float _hx_tmp = ::Math_obj::max(( (Float)(::Std_obj::_hx_int(temp->rect->width)) ),( (Float)(insertNodeWidth) ));
HXDLIN( 537)				this->expandRoot(_hx_tmp,( (Float)((::Std_obj::_hx_int(temp->rect->height) + insertNodeHeight)) ),false,null());
HXLINE( 538)				dataNode = this->divideNode(this->root->right,insertNodeWidth,insertNodeHeight,true,data,key,rotateBottom);
HXLINE( 539)				this->expandRoot(( (Float)(addBottomWidth) ),( (Float)(addBottomHeight) ),false,true);
            			}
HXLINE( 542)			return dataNode;
            		}
HXLINE( 545)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxAtlas_obj,expand,return )

void FlxAtlas_obj::expandRoot(Float newWidth,Float newHeight,bool divideHorizontally,::hx::Null< bool >  __o_decideHowToDivide){
            		bool decideHowToDivide = __o_decideHowToDivide.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_f38becfab6571882_550_expandRoot)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(newWidth,"newWidth")
            	HX_STACK_ARG(newHeight,"newHeight")
            	HX_STACK_ARG(divideHorizontally,"divideHorizontally")
            	HX_STACK_ARG(decideHowToDivide,"decideHowToDivide")
HXLINE( 550)
HXDLIN( 550)		bool _hx_tmp;
HXDLIN( 550)		if (!((newWidth > ::Std_obj::_hx_int(this->root->rect->width)))) {
HXDLIN( 550)			_hx_tmp = (newHeight > ::Std_obj::_hx_int(this->root->rect->height));
            		}
            		else {
HXDLIN( 550)			_hx_tmp = true;
            		}
HXDLIN( 550)		if (_hx_tmp) {
HXLINE( 552)			HX_VARI(  ::flixel::graphics::atlas::FlxNode,temp) = this->root;
HXLINE( 553)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 553)			_this->x = ( (Float)(0) );
HXDLIN( 553)			_this->y = ( (Float)(0) );
HXDLIN( 553)			_this->width = newWidth;
HXDLIN( 553)			_this->height = newHeight;
HXDLIN( 553)			 ::flixel::math::FlxRect rect = _this;
HXDLIN( 553)			rect->_inPool = false;
HXDLIN( 553)			this->root =  ::flixel::graphics::atlas::FlxNode_obj::__alloc( HX_CTX ,rect,::hx::ObjectPtr<OBJ_>(this),null(),null(),null());
HXLINE( 555)			if (decideHowToDivide) {
HXLINE( 555)				 ::flixel::graphics::atlas::FlxNode divideHorizontally1 = this->root;
HXDLIN( 555)				int divideHorizontally2 = ::Std_obj::_hx_int(temp->rect->width);
HXDLIN( 555)				divideHorizontally = this->needToDivideHorizontally(divideHorizontally1,divideHorizontally2,::Std_obj::_hx_int(temp->rect->height));
            			}
HXLINE( 557)			 ::flixel::graphics::atlas::FlxNode _hx_tmp = this->root;
HXDLIN( 557)			int _hx_tmp1 = ::Std_obj::_hx_int(temp->rect->width);
HXDLIN( 557)			this->divideNode(_hx_tmp,_hx_tmp1,::Std_obj::_hx_int(temp->rect->height),divideHorizontally,null(),null(),null());
HXLINE( 558)			this->root->left->left = temp;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxAtlas_obj,expandRoot,(void))

void FlxAtlas_obj::expandBitmapData(){
            	HX_GC_STACKFRAME(&_hx_pos_f38becfab6571882_563_expandBitmapData)
            	HX_STACK_THIS(this)
HXLINE( 563)
HXLINE( 564)		bool _hx_tmp;
HXDLIN( 564)		bool _hx_tmp1;
HXDLIN( 564)		if (::hx::IsNotNull( this->bitmapData )) {
HXLINE( 564)			int _hx_tmp = this->bitmapData->width;
HXDLIN( 564)			_hx_tmp1 = (_hx_tmp == ::Std_obj::_hx_int(this->root->rect->width));
            		}
            		else {
HXLINE( 564)			_hx_tmp1 = false;
            		}
HXDLIN( 564)		if (_hx_tmp1) {
HXLINE( 564)			int _hx_tmp1 = this->bitmapData->height;
HXDLIN( 564)			_hx_tmp = (_hx_tmp1 == ::Std_obj::_hx_int(this->root->rect->height));
            		}
            		else {
HXLINE( 564)			_hx_tmp = false;
            		}
HXDLIN( 564)		if (_hx_tmp) {
HXLINE( 566)			return;
            		}
HXLINE( 569)		int newBitmapData = ::Std_obj::_hx_int(this->root->rect->width);
HXDLIN( 569)		HX_VARI(  ::openfl::display::BitmapData,newBitmapData1) =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,newBitmapData,::Std_obj::_hx_int(this->root->rect->height),true,0);
HXLINE( 570)		if (::hx::IsNotNull( this->bitmapData )) {
HXLINE( 572)			::flixel::graphics::atlas::FlxAtlas_obj::point->setTo(( (Float)(0) ),( (Float)(0) ));
HXLINE( 573)			newBitmapData1->copyPixels(this->bitmapData,this->bitmapData->rect,::flixel::graphics::atlas::FlxAtlas_obj::point,null(),null(),null());
            		}
HXLINE( 576)		this->set_bitmapData(::flixel::util::FlxDestroyUtil_obj::dispose(this->bitmapData));
HXLINE( 577)		this->set_bitmapData(newBitmapData1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,expandBitmapData,(void))

int FlxAtlas_obj::getNextPowerOfTwo(Float number){
            	HX_STACKFRAME(&_hx_pos_f38becfab6571882_581_getNextPowerOfTwo)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(number,"number")
HXLINE( 581)
HXLINE( 582)		HX_VARI( int,n) = ::Std_obj::_hx_int(number);
HXLINE( 583)		bool _hx_tmp;
HXDLIN( 583)		if ((n > 0)) {
HXLINE( 583)			_hx_tmp = ((n & (n - 1)) == 0);
            		}
            		else {
HXLINE( 583)			_hx_tmp = false;
            		}
HXDLIN( 583)		if (_hx_tmp) {
HXLINE( 584)			return n;
            		}
HXLINE( 586)		HX_VARI( int,result) = 1;
HXLINE( 587)		while((result < n)){
HXLINE( 588)			result = (result << 1);
            		}
HXLINE( 589)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,getNextPowerOfTwo,return )

 ::flixel::graphics::frames::FlxTileFrames FlxAtlas_obj::addNodeWithSpacesAndBorders( ::Dynamic Graphic,::String Key, ::flixel::math::FlxPoint tileSize, ::flixel::math::FlxPoint tileSpacing, ::flixel::math::FlxPoint tileBorder, ::flixel::math::FlxRect region){
            	HX_STACKFRAME(&_hx_pos_f38becfab6571882_607_addNodeWithSpacesAndBorders)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Graphic,"Graphic")
            	HX_STACK_ARG(Key,"Key")
            	HX_STACK_ARG(tileSize,"tileSize")
            	HX_STACK_ARG(tileSpacing,"tileSpacing")
            	HX_STACK_ARG(tileBorder,"tileBorder")
            	HX_STACK_ARG(region,"region")
HXLINE( 607)
HXLINE( 608)		HX_VARI( ::String,key) = ::flixel::_hx_system::FlxAssets_obj::resolveKey(Graphic,Key);
HXLINE( 610)		if (::hx::IsNull( key )) {
HXLINE( 613)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("addNodeWithSpacings can't find the key for specified BitmapData.",41,5c,a7,0a) + HX_(" Please provide not null value as a Key argument.",09,c1,63,d1))));
            		}
HXLINE( 618)		key = ::flixel::FlxG_obj::bitmap->getKeyWithSpacesAndBorders(key,tileSize,tileSpacing,tileBorder,region);
HXLINE( 620)		if (this->hasNodeWithName(key)) {
HXLINE( 621)			return ( ( ::flixel::graphics::atlas::FlxNode)(this->nodes->get(key)) )->getTileFrames(tileSize,tileSpacing,tileBorder);
            		}
HXLINE( 623)		HX_VARI(  ::openfl::display::BitmapData,data) = ::flixel::_hx_system::FlxAssets_obj::resolveBitmapData(Graphic);
HXLINE( 625)		if (::hx::IsNull( data )) {
HXLINE( 628)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("addNodeWithSpacings can't find BitmapData with specified key: ",e5,6a,ec,e9) + Graphic) + HX_(". Please provide valid value.",84,e6,88,32))));
            		}
HXLINE( 633)		HX_VARI(  ::openfl::display::BitmapData,nodeData) = ::flixel::util::FlxBitmapDataUtil_obj::addSpacesAndBorders(data,tileSize,tileSpacing,tileBorder,region);
HXLINE( 634)		HX_VARI(  ::flixel::graphics::atlas::FlxNode,node) = this->addNode(nodeData,key);
HXLINE( 636)		if (::hx::IsNull( node )) {
HXLINE( 639)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("addNodeWithSpacings can't insert provided image: ",a1,49,3a,35) + Graphic) + HX_(") in atlas. It's probably too big.",a7,39,69,92))));
            		}
HXLINE( 644)		if (::hx::IsNotNull( tileBorder )) {
HXLINE( 645)			Float Y = (( (Float)(2) ) * tileBorder->y);
HXDLIN( 645)			tileSize->set_x((tileSize->x + (( (Float)(2) ) * tileBorder->x)));
HXDLIN( 645)			tileSize->set_y((tileSize->y + Y));
            		}
HXLINE( 647)		return node->getTileFrames(tileSize,tileSpacing,tileBorder);
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlxAtlas_obj,addNodeWithSpacesAndBorders,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlas_obj::getAtlasFrames(){
            	HX_GC_STACKFRAME(&_hx_pos_f38becfab6571882_657_getAtlasFrames)
            	HX_STACK_THIS(this)
HXLINE( 657)
HXLINE( 658)		HX_VARI(  ::flixel::graphics::FlxGraphic,graph) = this->get_graphic();
HXLINE( 660)		HX_VARI(  ::flixel::graphics::frames::FlxAtlasFrames,atlasFrames) = graph->get_atlasFrames();
HXLINE( 661)		if (::hx::IsNull( graph->get_atlasFrames() )) {
HXLINE( 663)			atlasFrames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,graph,null());
            		}
HXLINE( 666)		{
HXLINE( 666)			HX_VARI(  ::Dynamic,node) = this->nodes->iterator();
HXDLIN( 666)			while(( (bool)(node->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 666)				HX_VARI(  ::flixel::graphics::atlas::FlxNode,node1) = ( ( ::flixel::graphics::atlas::FlxNode)(node->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 667)				this->addNodeToAtlasFrames(node1);
            			}
            		}
HXLINE( 669)		return atlasFrames;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,getAtlasFrames,return )

void FlxAtlas_obj::addNodeToAtlasFrames( ::flixel::graphics::atlas::FlxNode node){
            	HX_STACKFRAME(&_hx_pos_f38becfab6571882_673_addNodeToAtlasFrames)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(node,"node")
HXLINE( 673)
HXLINE( 674)		bool _hx_tmp;
HXDLIN( 674)		bool _hx_tmp1;
HXDLIN( 674)		if (::hx::IsNotNull( this->_graphic )) {
HXLINE( 674)			_hx_tmp1 = ::hx::IsNull( this->_graphic->get_atlasFrames() );
            		}
            		else {
HXLINE( 674)			_hx_tmp1 = true;
            		}
HXDLIN( 674)		if (!(_hx_tmp1)) {
HXLINE( 674)			_hx_tmp = ::hx::IsNull( node );
            		}
            		else {
HXLINE( 674)			_hx_tmp = true;
            		}
HXDLIN( 674)		if (_hx_tmp) {
HXLINE( 675)			return;
            		}
HXLINE( 677)		HX_VARI(  ::flixel::graphics::frames::FlxAtlasFrames,atlasFrames) = this->_graphic->get_atlasFrames();
HXLINE( 679)		bool _hx_tmp2;
HXDLIN( 679)		if (node->filled) {
HXLINE( 679)			_hx_tmp2 = !(atlasFrames->framesHash->exists(node->key));
            		}
            		else {
HXLINE( 679)			_hx_tmp2 = false;
            		}
HXDLIN( 679)		if (_hx_tmp2) {
HXLINE( 681)			Float X = ( (Float)(::Std_obj::_hx_int(node->rect->x)) );
HXDLIN( 681)			Float Y = ( (Float)(::Std_obj::_hx_int(node->rect->y)) );
HXDLIN( 681)			int Width = ::Std_obj::_hx_int(node->rect->width);
HXDLIN( 681)			Float Width1 = ( (Float)((Width - this->border)) );
HXDLIN( 681)			int Height = ::Std_obj::_hx_int(node->rect->height);
HXDLIN( 681)			Float Height1 = ( (Float)((Height - this->border)) );
HXDLIN( 681)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 681)			_this->x = X;
HXDLIN( 681)			_this->y = Y;
HXDLIN( 681)			_this->width = Width1;
HXDLIN( 681)			_this->height = Height1;
HXDLIN( 681)			 ::flixel::math::FlxRect rect = _this;
HXDLIN( 681)			rect->_inPool = false;
HXDLIN( 681)			HX_VARI(  ::flixel::math::FlxRect,frame) = rect;
HXLINE( 682)			HX_VAR(  ::flixel::math::FlxPoint,sourceSize);
HXDLIN( 682)			if (node->rotated) {
HXLINE( 682)				int X = ::Std_obj::_hx_int(node->rect->height);
HXDLIN( 682)				Float X1 = ( (Float)((X - this->border)) );
HXLINE( 683)				int Y = ::Std_obj::_hx_int(node->rect->width);
HXLINE( 682)				Float Y1 = ( (Float)((Y - this->border)) );
HXDLIN( 682)				 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);
HXDLIN( 682)				point->_inPool = false;
HXDLIN( 682)				sourceSize = point;
            			}
            			else {
HXLINE( 683)				int X = ::Std_obj::_hx_int(node->rect->width);
HXDLIN( 683)				Float X1 = ( (Float)((X - this->border)) );
HXDLIN( 683)				int Y = ::Std_obj::_hx_int(node->rect->height);
HXDLIN( 683)				Float Y1 = ( (Float)((Y - this->border)) );
HXDLIN( 683)				 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);
HXDLIN( 683)				point->_inPool = false;
HXLINE( 682)				sourceSize = point;
            			}
HXLINE( 684)			 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(0,0);
HXDLIN( 684)			point->_inPool = false;
HXDLIN( 684)			HX_VARI(  ::flixel::math::FlxPoint,offset) = point;
HXLINE( 685)			HX_VAR( int,angle);
HXDLIN( 685)			if (node->rotated) {
HXLINE( 685)				angle = -90;
            			}
            			else {
HXLINE( 685)				angle = 0;
            			}
HXLINE( 686)			atlasFrames->addAtlasFrame(frame,sourceSize,offset,node->key,angle,null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,addNodeToAtlasFrames,(void))

bool FlxAtlas_obj::hasNodeWithName(::String nodeName){
            	HX_STACKFRAME(&_hx_pos_f38becfab6571882_698_hasNodeWithName)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(nodeName,"nodeName")
HXLINE( 698)
HXDLIN( 698)		return this->nodes->exists(nodeName);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,hasNodeWithName,return )

 ::flixel::graphics::atlas::FlxNode FlxAtlas_obj::getNode(::String key){
            	HX_STACKFRAME(&_hx_pos_f38becfab6571882_709_getNode)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(key,"key")
HXLINE( 709)
HXDLIN( 709)		return ( ( ::flixel::graphics::atlas::FlxNode)(this->nodes->get(key)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,getNode,return )

 ::flixel::graphics::atlas::FlxAtlas FlxAtlas_obj::addNodes(::Array< ::Dynamic> bitmaps,::Array< ::String > keys){
            	HX_STACKFRAME(&_hx_pos_f38becfab6571882_721_addNodes)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(bitmaps,"bitmaps")
            	HX_STACK_ARG(keys,"keys")
HXLINE( 721)
HXLINE( 722)		HX_VARI( int,numKeys) = keys->length;
HXLINE( 723)		HX_VARI( int,numBitmaps) = bitmaps->length;
HXLINE( 725)		if ((numBitmaps != numKeys)) {
HXLINE( 728)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("The number of bitmaps (",cb,e8,a2,a6) + numBitmaps) + HX_(") should be equal to number of keys (",a0,90,37,97)) + numKeys) + HX_(")",29,00,00,00))));
            		}
HXLINE( 733)		this->_tempStorage = ::Array_obj< ::Dynamic>::__new();
HXLINE( 734)		{
HXLINE( 734)			int _g = 0;
HXDLIN( 734)			int _g1 = numBitmaps;
HXDLIN( 734)			while((_g < _g1)){
HXLINE( 734)				_g = (_g + 1);
HXDLIN( 734)				HX_VARI( int,i) = (_g - 1);
HXLINE( 736)				this->_tempStorage->push( ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("bmd",39,bc,4a,00),bitmaps->__get(i).StaticCast<  ::openfl::display::BitmapData >())
            					->setFixed(1,HX_("keyStr",52,64,e2,3f),keys->__get(i))));
            			}
            		}
HXLINE( 739)		this->addFromAtlasObjects(this->_tempStorage);
HXLINE( 740)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxAtlas_obj,addNodes,return )

void FlxAtlas_obj::addFromAtlasObjects(::Array< ::Dynamic> objects){
            	HX_STACKFRAME(&_hx_pos_f38becfab6571882_744_addFromAtlasObjects)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(objects,"objects")
HXLINE( 744)
HXLINE( 745)		objects->sort(this->bitmapSorter_dyn());
HXLINE( 746)		HX_VARI( int,numBitmaps) = objects->length;
HXLINE( 748)		{
HXLINE( 748)			int _g = 0;
HXDLIN( 748)			int _g1 = numBitmaps;
HXDLIN( 748)			while((_g < _g1)){
HXLINE( 748)				_g = (_g + 1);
HXDLIN( 748)				HX_VARI( int,i) = (_g - 1);
HXLINE( 749)				this->addNode( ::Dynamic(objects->__get(i)->__Field(HX_("bmd",39,bc,4a,00),::hx::paccDynamic)),( (::String)(objects->__get(i)->__Field(HX_("keyStr",52,64,e2,3f),::hx::paccDynamic)) ));
            			}
            		}
HXLINE( 751)		this->_tempStorage = null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,addFromAtlasObjects,(void))

int FlxAtlas_obj::bitmapSorter( ::Dynamic obj1, ::Dynamic obj2){
            	HX_STACKFRAME(&_hx_pos_f38becfab6571882_758_bitmapSorter)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(obj1,"obj1")
            	HX_STACK_ARG(obj2,"obj2")
HXLINE( 758)
HXLINE( 759)		if (this->allowRotation) {
HXLINE( 761)			HX_VARI( int,area1) = (( ( ::openfl::display::BitmapData)(obj1->__Field(HX_("bmd",39,bc,4a,00),::hx::paccDynamic)) )->width * ( ( ::openfl::display::BitmapData)(obj1->__Field(HX_("bmd",39,bc,4a,00),::hx::paccDynamic)) )->height);
HXLINE( 762)			HX_VARI( int,area2) = (( ( ::openfl::display::BitmapData)(obj2->__Field(HX_("bmd",39,bc,4a,00),::hx::paccDynamic)) )->width * ( ( ::openfl::display::BitmapData)(obj2->__Field(HX_("bmd",39,bc,4a,00),::hx::paccDynamic)) )->height);
HXLINE( 763)			return (area2 - area1);
            		}
HXLINE( 766)		if ((( ( ::openfl::display::BitmapData)(obj2->__Field(HX_("bmd",39,bc,4a,00),::hx::paccDynamic)) )->width == ( ( ::openfl::display::BitmapData)(obj1->__Field(HX_("bmd",39,bc,4a,00),::hx::paccDynamic)) )->width)) {
HXLINE( 767)			return (( ( ::openfl::display::BitmapData)(obj2->__Field(HX_("bmd",39,bc,4a,00),::hx::paccDynamic)) )->height - ( ( ::openfl::display::BitmapData)(obj1->__Field(HX_("bmd",39,bc,4a,00),::hx::paccDynamic)) )->height);
            		}
HXLINE( 769)		return (( ( ::openfl::display::BitmapData)(obj2->__Field(HX_("bmd",39,bc,4a,00),::hx::paccDynamic)) )->width - ( ( ::openfl::display::BitmapData)(obj1->__Field(HX_("bmd",39,bc,4a,00),::hx::paccDynamic)) )->width);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxAtlas_obj,bitmapSorter,return )

 ::flixel::graphics::atlas::FlxAtlas FlxAtlas_obj::createQueue(){
            	HX_STACKFRAME(&_hx_pos_f38becfab6571882_780_createQueue)
            	HX_STACK_THIS(this)
HXLINE( 780)
HXLINE( 781)		this->_tempStorage = ::Array_obj< ::Dynamic>::__new();
HXLINE( 782)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,createQueue,return )

 ::flixel::graphics::atlas::FlxAtlas FlxAtlas_obj::addToQueue( ::openfl::display::BitmapData data,::String key){
            	HX_STACKFRAME(&_hx_pos_f38becfab6571882_792_addToQueue)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(data,"data")
            	HX_STACK_ARG(key,"key")
HXLINE( 792)
HXLINE( 793)		if (::hx::IsNull( this->_tempStorage )) {
HXLINE( 794)			this->_tempStorage = ::Array_obj< ::Dynamic>::__new();
            		}
HXLINE( 796)		this->_tempStorage->push( ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("bmd",39,bc,4a,00),data)
            			->setFixed(1,HX_("keyStr",52,64,e2,3f),key)));
HXLINE( 797)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxAtlas_obj,addToQueue,return )

 ::flixel::graphics::atlas::FlxAtlas FlxAtlas_obj::generateFromQueue(){
            	HX_STACKFRAME(&_hx_pos_f38becfab6571882_804_generateFromQueue)
            	HX_STACK_THIS(this)
HXLINE( 804)
HXLINE( 805)		if (::hx::IsNotNull( this->_tempStorage )) {
HXLINE( 806)			this->addFromAtlasObjects(this->_tempStorage);
            		}
HXLINE( 808)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,generateFromQueue,return )

void FlxAtlas_obj::onClear( ::flixel::FlxState _){
            	HX_STACKFRAME(&_hx_pos_f38becfab6571882_813_onClear)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(_,"_")
HXLINE( 813)
HXDLIN( 813)		bool _hx_tmp;
HXDLIN( 813)		if (this->persist) {
HXDLIN( 813)			if (::hx::IsNotNull( this->_graphic )) {
HXDLIN( 813)				_hx_tmp = (this->_graphic->get_useCount() <= 0);
            			}
            			else {
HXDLIN( 813)				_hx_tmp = false;
            			}
            		}
            		else {
HXDLIN( 813)			_hx_tmp = true;
            		}
HXDLIN( 813)		if (_hx_tmp) {
HXLINE( 814)			this->destroy();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,onClear,(void))

void FlxAtlas_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_f38becfab6571882_822_destroy)
            	HX_STACK_THIS(this)
HXLINE( 822)
HXLINE( 823)		this->_tempStorage = null();
HXLINE( 824)		this->deleteSubtree(this->root);
HXLINE( 825)		this->root = null();
HXLINE( 826)		::flixel::FlxG_obj::bitmap->removeByKey(this->name);
HXLINE( 827)		this->set_bitmapData(null());
HXLINE( 828)		this->nodes = null();
HXLINE( 829)		this->_graphic = null();
HXLINE( 831)		::flixel::FlxG_obj::signals->preStateCreate->remove(this->onClear_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,destroy,(void))

void FlxAtlas_obj::clear(){
            	HX_GC_STACKFRAME(&_hx_pos_f38becfab6571882_840_clear)
            	HX_STACK_THIS(this)
HXLINE( 840)
HXLINE( 841)		this->deleteSubtree(this->root);
HXLINE( 842)		this->initRoot();
HXLINE( 843)		::flixel::FlxG_obj::bitmap->removeByKey(this->name);
HXLINE( 844)		this->set_bitmapData(null());
HXLINE( 845)		this->nodes =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 846)		this->_graphic = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,clear,(void))

::String FlxAtlas_obj::getLibGdxData(){
            	HX_STACKFRAME(&_hx_pos_f38becfab6571882_853_getLibGdxData)
            	HX_STACK_THIS(this)
HXLINE( 853)
HXLINE( 854)		HX_VARI( ::String,data) = HX_("\n",0a,00,00,00);
HXLINE( 855)		data = (data + (this->name + HX_("\n",0a,00,00,00)));
HXLINE( 856)		data = (data + HX_("format: RGBA8888\n",99,1f,ed,c2));
HXLINE( 857)		data = (data + HX_("filter: Linear,Linear\n",9c,47,05,72));
HXLINE( 858)		data = (data + HX_("repeat: none\n",f1,9b,51,ee));
HXLINE( 860)		{
HXLINE( 860)			HX_VARI(  ::Dynamic,node) = this->nodes->iterator();
HXDLIN( 860)			while(( (bool)(node->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 860)				HX_VARI(  ::flixel::graphics::atlas::FlxNode,node1) = ( ( ::flixel::graphics::atlas::FlxNode)(node->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 862)				data = (data + (node1->key + HX_("\n",0a,00,00,00)));
HXLINE( 863)				data = (data + ((HX_("  rotate: ",c1,21,ff,6f) + ::Std_obj::string(node1->rotated)) + HX_("\n",0a,00,00,00)));
HXLINE( 864)				::String data1 = ((HX_("  xy: ",e7,b9,eb,87) + ::Std_obj::_hx_int(node1->rect->x)) + HX_(", ",74,26,00,00));
HXDLIN( 864)				data = (data + ((data1 + ::Std_obj::_hx_int(node1->rect->y)) + HX_("\n",0a,00,00,00)));
HXLINE( 866)				if (this->allowRotation) {
HXLINE( 868)					::String data1 = ((HX_("size: ",a7,45,0e,c1) + ::Std_obj::_hx_int(node1->rect->height)) + HX_(", ",74,26,00,00));
HXDLIN( 868)					data = (data + ((data1 + ::Std_obj::_hx_int(node1->rect->width)) + HX_("\n",0a,00,00,00)));
HXLINE( 869)					::String data2 = ((HX_("orig: ",a7,f0,00,4b) + ::Std_obj::_hx_int(node1->rect->height)) + HX_(", ",74,26,00,00));
HXDLIN( 869)					data = (data + ((data2 + ::Std_obj::_hx_int(node1->rect->width)) + HX_("\n",0a,00,00,00)));
            				}
            				else {
HXLINE( 873)					::String data1 = ((HX_("size: ",a7,45,0e,c1) + ::Std_obj::_hx_int(node1->rect->width)) + HX_(", ",74,26,00,00));
HXDLIN( 873)					data = (data + ((data1 + ::Std_obj::_hx_int(node1->rect->height)) + HX_("\n",0a,00,00,00)));
HXLINE( 874)					::String data2 = ((HX_("orig: ",a7,f0,00,4b) + ::Std_obj::_hx_int(node1->rect->width)) + HX_(", ",74,26,00,00));
HXDLIN( 874)					data = (data + ((data2 + ::Std_obj::_hx_int(node1->rect->height)) + HX_("\n",0a,00,00,00)));
            				}
HXLINE( 877)				data = (data + HX_("  offset: 0, 0\n",e5,55,b9,3b));
HXLINE( 878)				data = (data + HX_("  index: -1\n",ee,e8,07,0b));
            			}
            		}
HXLINE( 881)		return data;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,getLibGdxData,return )

void FlxAtlas_obj::deleteSubtree( ::flixel::graphics::atlas::FlxNode node){
            	HX_STACKFRAME(&_hx_pos_f38becfab6571882_886_deleteSubtree)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(node,"node")
HXLINE( 886)
HXDLIN( 886)		if (::hx::IsNotNull( node )) {
HXLINE( 888)			if (::hx::IsNotNull( node->left )) {
HXLINE( 889)				this->deleteSubtree(node->left);
            			}
HXLINE( 890)			if (::hx::IsNotNull( node->right )) {
HXLINE( 891)				this->deleteSubtree(node->right);
            			}
HXLINE( 892)			{
HXLINE( 892)				node->key = null();
HXDLIN( 892)				node->left = null();
HXDLIN( 892)				node->right = null();
HXDLIN( 892)				node->rect = null();
HXDLIN( 892)				node->atlas = null();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,deleteSubtree,(void))

 ::flixel::graphics::atlas::FlxNode FlxAtlas_obj::findNodeToInsert(int insertWidth,int insertHeight){
            	HX_STACKFRAME(&_hx_pos_f38becfab6571882_898_findNodeToInsert)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(insertWidth,"insertWidth")
            	HX_STACK_ARG(insertHeight,"insertHeight")
HXLINE( 898)
HXLINE( 900)		HX_VARI( ::Array< ::Dynamic>,stack) = ::Array_obj< ::Dynamic>::__new();
HXLINE( 902)		HX_VARI(  ::flixel::graphics::atlas::FlxNode,current) = this->root;
HXLINE( 904)		HX_VARI( ::Array< ::Dynamic>,emptyNodes) = ::Array_obj< ::Dynamic>::__new();
HXLINE( 906)		HX_VARI( bool,canPlaceRight) = false;
HXLINE( 907)		HX_VARI( bool,canPlaceLeft) = false;
HXLINE( 909)		HX_VARI( bool,looping) = true;
HXLINE( 911)		HX_VARI(  ::flixel::graphics::atlas::FlxNode,result) = null();
HXLINE( 912)		HX_VARI( int,minArea) = ((this->maxWidth * this->maxHeight) + 1);
HXLINE( 913)		HX_VAR( int,nodeArea);
HXLINE( 916)		while(looping){
HXLINE( 919)			bool _hx_tmp;
HXDLIN( 919)			bool _hx_tmp1;
HXDLIN( 919)			bool _hx_tmp2;
HXDLIN( 919)			if (!(current->filled)) {
HXLINE( 919)				_hx_tmp2 = ::hx::IsNull( current->left );
            			}
            			else {
HXLINE( 919)				_hx_tmp2 = false;
            			}
HXDLIN( 919)			if (_hx_tmp2) {
HXLINE( 919)				_hx_tmp1 = ::hx::IsNull( current->right );
            			}
            			else {
HXLINE( 919)				_hx_tmp1 = false;
            			}
HXDLIN( 919)			if (_hx_tmp1) {
HXLINE( 919)				if ((current->rect->width >= insertWidth)) {
HXLINE( 919)					_hx_tmp = (current->rect->height >= insertHeight);
            				}
            				else {
HXLINE( 919)					_hx_tmp = false;
            				}
            			}
            			else {
HXLINE( 919)				_hx_tmp = false;
            			}
HXDLIN( 919)			if (_hx_tmp) {
HXLINE( 921)				int nodeArea1 = ::Std_obj::_hx_int(current->rect->width);
HXDLIN( 921)				nodeArea = (nodeArea1 * ::Std_obj::_hx_int(current->rect->height));
HXLINE( 923)				if ((nodeArea < minArea)) {
HXLINE( 925)					minArea = nodeArea;
HXLINE( 926)					result = current;
            				}
            			}
HXLINE( 930)			if (::hx::IsNotNull( current->right )) {
HXLINE( 930)				 ::flixel::graphics::atlas::FlxNode _this = current->right;
HXDLIN( 930)				if ((_this->rect->width >= insertWidth)) {
HXLINE( 930)					canPlaceRight = (_this->rect->height >= insertHeight);
            				}
            				else {
HXLINE( 930)					canPlaceRight = false;
            				}
            			}
            			else {
HXLINE( 930)				canPlaceRight = false;
            			}
HXLINE( 931)			if (::hx::IsNotNull( current->left )) {
HXLINE( 931)				 ::flixel::graphics::atlas::FlxNode _this = current->left;
HXDLIN( 931)				if ((_this->rect->width >= insertWidth)) {
HXLINE( 931)					canPlaceLeft = (_this->rect->height >= insertHeight);
            				}
            				else {
HXLINE( 931)					canPlaceLeft = false;
            				}
            			}
            			else {
HXLINE( 931)				canPlaceLeft = false;
            			}
HXLINE( 932)			bool _hx_tmp3;
HXDLIN( 932)			if (canPlaceRight) {
HXLINE( 932)				_hx_tmp3 = canPlaceLeft;
            			}
            			else {
HXLINE( 932)				_hx_tmp3 = false;
            			}
HXDLIN( 932)			if (_hx_tmp3) {
HXLINE( 934)				stack->push(current->right);
HXLINE( 935)				current = current->left;
            			}
            			else {
HXLINE( 937)				if (canPlaceLeft) {
HXLINE( 939)					current = current->left;
            				}
            				else {
HXLINE( 941)					if (canPlaceRight) {
HXLINE( 943)						current = current->right;
            					}
            					else {
HXLINE( 947)						if ((stack->length > 0)) {
HXLINE( 950)							current = stack->pop().StaticCast<  ::flixel::graphics::atlas::FlxNode >();
            						}
            						else {
HXLINE( 955)							looping = false;
            						}
            					}
            				}
            			}
            		}
HXLINE( 960)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxAtlas_obj,findNodeToInsert,return )

 ::openfl::display::BitmapData FlxAtlas_obj::set_bitmapData( ::openfl::display::BitmapData value){
            	HX_STACKFRAME(&_hx_pos_f38becfab6571882_964_set_bitmapData)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 964)
HXLINE( 966)		bool _hx_tmp;
HXDLIN( 966)		if (::hx::IsNotNull( value )) {
HXLINE( 966)			_hx_tmp = ::hx::IsNotNull( this->_graphic );
            		}
            		else {
HXLINE( 966)			_hx_tmp = false;
            		}
HXDLIN( 966)		if (_hx_tmp) {
HXLINE( 967)			this->_graphic->set_bitmap(value);
            		}
HXLINE( 969)		return (this->bitmapData = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,set_bitmapData,return )

 ::flixel::graphics::FlxGraphic FlxAtlas_obj::get_graphic(){
            	HX_STACKFRAME(&_hx_pos_f38becfab6571882_973_get_graphic)
            	HX_STACK_THIS(this)
HXLINE( 973)
HXLINE( 974)		if (::hx::IsNotNull( this->_graphic )) {
HXLINE( 975)			return this->_graphic;
            		}
HXLINE( 977)		this->_graphic = ::flixel::FlxG_obj::bitmap->add(this->bitmapData,false,this->name);
HXLINE( 978)		this->_graphic->persist = this->persist;
HXLINE( 980)		return this->_graphic;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,get_graphic,return )

bool FlxAtlas_obj::set_persist(bool value){
            	HX_STACKFRAME(&_hx_pos_f38becfab6571882_984_set_persist)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 984)
HXLINE( 985)		if (::hx::IsNotNull( this->_graphic )) {
HXLINE( 986)			this->_graphic->persist = value;
            		}
HXLINE( 988)		return (this->persist = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,set_persist,return )

int FlxAtlas_obj::set_minWidth(int value){
            	HX_STACKFRAME(&_hx_pos_f38becfab6571882_992_set_minWidth)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 992)
HXLINE( 993)		if ((value <= this->maxWidth)) {
HXLINE( 995)			this->minWidth = value;
HXLINE( 996)			if ((value > this->get_width())) {
HXLINE( 997)				this->set_width(value);
            			}
            		}
HXLINE(1000)		return this->minWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,set_minWidth,return )

int FlxAtlas_obj::set_minHeight(int value){
            	HX_STACKFRAME(&_hx_pos_f38becfab6571882_1004_set_minHeight)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE(1004)
HXLINE(1005)		if ((value <= this->maxHeight)) {
HXLINE(1007)			this->minHeight = value;
HXLINE(1008)			if ((value > this->get_height())) {
HXLINE(1009)				this->set_height(value);
            			}
            		}
HXLINE(1012)		return this->minHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,set_minHeight,return )

int FlxAtlas_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_f38becfab6571882_1016_get_width)
            	HX_STACK_THIS(this)
HXLINE(1016)
HXLINE(1017)		if (::hx::IsNotNull( this->root )) {
HXLINE(1018)			return ::Std_obj::_hx_int(this->root->rect->width);
            		}
HXLINE(1020)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,get_width,return )

int FlxAtlas_obj::set_width(int value){
            	HX_STACKFRAME(&_hx_pos_f38becfab6571882_1024_set_width)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE(1024)
HXLINE(1025)		if ((value > this->get_width())) {
HXLINE(1027)			if (this->powerOfTwo) {
HXLINE(1028)				value = this->getNextPowerOfTwo(( (Float)(value) ));
            			}
HXLINE(1030)			if ((value <= this->maxWidth)) {
HXLINE(1032)				bool _hx_tmp;
HXDLIN(1032)				if (::hx::IsNotNull( this->root )) {
HXLINE(1032)					_hx_tmp = (::Std_obj::_hx_int(this->root->rect->width) < value);
            				}
            				else {
HXLINE(1032)					_hx_tmp = false;
            				}
HXDLIN(1032)				if (_hx_tmp) {
HXLINE(1034)					int _hx_tmp = ::Std_obj::_hx_int(this->root->rect->height);
HXDLIN(1034)					 ::flixel::graphics::atlas::FlxNode _hx_tmp1 = this->root;
HXDLIN(1034)					int _hx_tmp2 = ::Std_obj::_hx_int(this->root->rect->width);
HXDLIN(1034)					this->expandRoot(( (Float)(value) ),( (Float)(_hx_tmp) ),this->needToDivideHorizontally(_hx_tmp1,_hx_tmp2,::Std_obj::_hx_int(this->root->rect->height)),null());
            				}
            			}
            		}
HXLINE(1039)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,set_width,return )

int FlxAtlas_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_f38becfab6571882_1043_get_height)
            	HX_STACK_THIS(this)
HXLINE(1043)
HXLINE(1044)		if (::hx::IsNotNull( this->root )) {
HXLINE(1045)			return ::Std_obj::_hx_int(this->root->rect->height);
            		}
HXLINE(1046)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAtlas_obj,get_height,return )

int FlxAtlas_obj::set_height(int value){
            	HX_STACKFRAME(&_hx_pos_f38becfab6571882_1050_set_height)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE(1050)
HXLINE(1051)		if ((value > this->get_height())) {
HXLINE(1053)			if (this->powerOfTwo) {
HXLINE(1054)				value = this->getNextPowerOfTwo(( (Float)(value) ));
            			}
HXLINE(1056)			if ((value <= this->maxHeight)) {
HXLINE(1058)				bool _hx_tmp;
HXDLIN(1058)				if (::hx::IsNotNull( this->root )) {
HXLINE(1058)					_hx_tmp = (::Std_obj::_hx_int(this->root->rect->height) < value);
            				}
            				else {
HXLINE(1058)					_hx_tmp = false;
            				}
HXDLIN(1058)				if (_hx_tmp) {
HXLINE(1060)					int _hx_tmp = ::Std_obj::_hx_int(this->root->rect->width);
HXDLIN(1060)					 ::flixel::graphics::atlas::FlxNode _hx_tmp1 = this->root;
HXDLIN(1060)					int _hx_tmp2 = ::Std_obj::_hx_int(this->root->rect->width);
HXDLIN(1060)					this->expandRoot(( (Float)(_hx_tmp) ),( (Float)(value) ),this->needToDivideHorizontally(_hx_tmp1,_hx_tmp2,::Std_obj::_hx_int(this->root->rect->height)),null());
            				}
            			}
            		}
HXLINE(1065)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,set_height,return )

int FlxAtlas_obj::set_maxWidth(int value){
            	HX_STACKFRAME(&_hx_pos_f38becfab6571882_1069_set_maxWidth)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE(1069)
HXLINE(1070)		bool _hx_tmp;
HXDLIN(1070)		if ((value >= this->minWidth)) {
HXLINE(1070)			if (::hx::IsNotNull( this->root )) {
HXLINE(1070)				_hx_tmp = (value >= this->get_width());
            			}
            			else {
HXLINE(1070)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE(1070)			_hx_tmp = false;
            		}
HXDLIN(1070)		if (_hx_tmp) {
HXLINE(1071)			this->maxWidth = value;
            		}
HXLINE(1073)		return this->maxWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,set_maxWidth,return )

int FlxAtlas_obj::set_maxHeight(int value){
            	HX_STACKFRAME(&_hx_pos_f38becfab6571882_1077_set_maxHeight)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE(1077)
HXLINE(1078)		bool _hx_tmp;
HXDLIN(1078)		if ((value >= this->minHeight)) {
HXLINE(1078)			if (::hx::IsNotNull( this->root )) {
HXLINE(1078)				_hx_tmp = (value >= this->get_height());
            			}
            			else {
HXLINE(1078)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE(1078)			_hx_tmp = false;
            		}
HXDLIN(1078)		if (_hx_tmp) {
HXLINE(1079)			this->maxHeight = value;
            		}
HXLINE(1081)		return this->maxHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,set_maxHeight,return )

bool FlxAtlas_obj::set_powerOfTwo(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_f38becfab6571882_1085_set_powerOfTwo)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE(1085)
HXLINE(1086)		bool _hx_tmp;
HXDLIN(1086)		bool _hx_tmp1;
HXDLIN(1086)		if ((value != this->powerOfTwo)) {
HXLINE(1086)			_hx_tmp1 = value;
            		}
            		else {
HXLINE(1086)			_hx_tmp1 = false;
            		}
HXDLIN(1086)		if (_hx_tmp1) {
HXLINE(1086)			_hx_tmp = ::hx::IsNotNull( this->root );
            		}
            		else {
HXLINE(1086)			_hx_tmp = false;
            		}
HXDLIN(1086)		if (_hx_tmp) {
HXLINE(1088)			HX_VARI( int,nextWidth) = this->getNextPowerOfTwo(( (Float)(::Std_obj::_hx_int(this->root->rect->width)) ));
HXLINE(1089)			HX_VARI( int,nextHeight) = this->getNextPowerOfTwo(( (Float)(::Std_obj::_hx_int(this->root->rect->height)) ));
HXLINE(1091)			bool _hx_tmp;
HXDLIN(1091)			if ((nextWidth == ::Std_obj::_hx_int(this->root->rect->width))) {
HXLINE(1091)				_hx_tmp = (nextHeight != ::Std_obj::_hx_int(this->root->rect->height));
            			}
            			else {
HXLINE(1091)				_hx_tmp = true;
            			}
HXDLIN(1091)			if (_hx_tmp) {
HXLINE(1093)				bool _hx_tmp;
HXDLIN(1093)				bool _hx_tmp1;
HXDLIN(1093)				if ((this->maxWidth > 0)) {
HXLINE(1093)					_hx_tmp1 = (nextWidth > this->maxWidth);
            				}
            				else {
HXLINE(1093)					_hx_tmp1 = false;
            				}
HXDLIN(1093)				if (!(_hx_tmp1)) {
HXLINE(1093)					if ((this->maxHeight > 0)) {
HXLINE(1093)						_hx_tmp = (nextHeight > this->maxHeight);
            					}
            					else {
HXLINE(1093)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE(1093)					_hx_tmp = true;
            				}
HXDLIN(1093)				if (_hx_tmp) {
HXLINE(1096)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Can't set powerOfTwo property to true,",95,3e,d2,3d) + HX_(" since it requires to increase atlas size which is bigger that max size",8f,79,d1,e8))));
            				}
HXLINE(1101)				HX_VARI(  ::flixel::graphics::atlas::FlxNode,temp) = this->root;
HXLINE(1102)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN(1102)				_this->x = ( (Float)(0) );
HXDLIN(1102)				_this->y = ( (Float)(0) );
HXDLIN(1102)				_this->width = ( (Float)(nextWidth) );
HXDLIN(1102)				_this->height = ( (Float)(nextHeight) );
HXDLIN(1102)				 ::flixel::math::FlxRect rect = _this;
HXDLIN(1102)				rect->_inPool = false;
HXDLIN(1102)				this->root =  ::flixel::graphics::atlas::FlxNode_obj::__alloc( HX_CTX ,rect,::hx::ObjectPtr<OBJ_>(this),null(),null(),null());
HXLINE(1104)				if (::hx::IsNotNull( temp->left )) {
HXLINE(1106)					 ::flixel::graphics::atlas::FlxNode _hx_tmp = this->root;
HXDLIN(1106)					int _hx_tmp1 = ::Std_obj::_hx_int(temp->rect->width);
HXDLIN(1106)					int _hx_tmp2 = ::Std_obj::_hx_int(temp->rect->height);
HXDLIN(1106)					 ::flixel::graphics::atlas::FlxNode _hx_tmp3 = this->root;
HXDLIN(1106)					int _hx_tmp4 = ::Std_obj::_hx_int(temp->rect->width);
HXDLIN(1106)					this->divideNode(_hx_tmp,_hx_tmp1,_hx_tmp2,this->needToDivideHorizontally(_hx_tmp3,_hx_tmp4,::Std_obj::_hx_int(temp->rect->height)),null(),null(),null());
HXLINE(1107)					this->root->left->left = temp;
            				}
            			}
            		}
HXLINE(1112)		return (this->powerOfTwo = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAtlas_obj,set_powerOfTwo,return )

 ::openfl::geom::Point FlxAtlas_obj::point;

 ::openfl::geom::Matrix FlxAtlas_obj::matrix;

 ::flixel::math::FlxPoint FlxAtlas_obj::defaultMinSize;

 ::flixel::math::FlxPoint FlxAtlas_obj::defaultMaxSize;


::hx::ObjectPtr< FlxAtlas_obj > FlxAtlas_obj::__new(::String name,::hx::Null< bool >  __o_powerOfTwo,::hx::Null< int >  __o_border,::hx::Null< bool >  __o_rotate, ::flixel::math::FlxPoint minSize, ::flixel::math::FlxPoint maxSize) {
	::hx::ObjectPtr< FlxAtlas_obj > __this = new FlxAtlas_obj();
	__this->__construct(name,__o_powerOfTwo,__o_border,__o_rotate,minSize,maxSize);
	return __this;
}

::hx::ObjectPtr< FlxAtlas_obj > FlxAtlas_obj::__alloc(::hx::Ctx *_hx_ctx,::String name,::hx::Null< bool >  __o_powerOfTwo,::hx::Null< int >  __o_border,::hx::Null< bool >  __o_rotate, ::flixel::math::FlxPoint minSize, ::flixel::math::FlxPoint maxSize) {
	FlxAtlas_obj *__this = (FlxAtlas_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxAtlas_obj), true, "flixel.graphics.atlas.FlxAtlas"));
	*(void **)__this = FlxAtlas_obj::_hx_vtable;
	__this->__construct(name,__o_powerOfTwo,__o_border,__o_rotate,minSize,maxSize);
	return __this;
}

FlxAtlas_obj::FlxAtlas_obj()
{
}

void FlxAtlas_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxAtlas);
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(nodes,"nodes");
	HX_MARK_MEMBER_NAME(bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(persist,"persist");
	HX_MARK_MEMBER_NAME(border,"border");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(minWidth,"minWidth");
	HX_MARK_MEMBER_NAME(minHeight,"minHeight");
	HX_MARK_MEMBER_NAME(maxWidth,"maxWidth");
	HX_MARK_MEMBER_NAME(maxHeight,"maxHeight");
	HX_MARK_MEMBER_NAME(allowRotation,"allowRotation");
	HX_MARK_MEMBER_NAME(powerOfTwo,"powerOfTwo");
	HX_MARK_MEMBER_NAME(_graphic,"_graphic");
	HX_MARK_MEMBER_NAME(_tempStorage,"_tempStorage");
	HX_MARK_END_CLASS();
}

void FlxAtlas_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(root,"root");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(nodes,"nodes");
	HX_VISIT_MEMBER_NAME(bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(persist,"persist");
	HX_VISIT_MEMBER_NAME(border,"border");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(minWidth,"minWidth");
	HX_VISIT_MEMBER_NAME(minHeight,"minHeight");
	HX_VISIT_MEMBER_NAME(maxWidth,"maxWidth");
	HX_VISIT_MEMBER_NAME(maxHeight,"maxHeight");
	HX_VISIT_MEMBER_NAME(allowRotation,"allowRotation");
	HX_VISIT_MEMBER_NAME(powerOfTwo,"powerOfTwo");
	HX_VISIT_MEMBER_NAME(_graphic,"_graphic");
	HX_VISIT_MEMBER_NAME(_tempStorage,"_tempStorage");
}

::hx::Val FlxAtlas_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { return ::hx::Val( root ); }
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { return ::hx::Val( nodes ); }
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_width() : width ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { return ::hx::Val( border ); }
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_height() : height ); }
		if (HX_FIELD_EQ(inName,"expand") ) { return ::hx::Val( expand_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"graphic") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_graphic() ); }
		if (HX_FIELD_EQ(inName,"persist") ) { return ::hx::Val( persist ); }
		if (HX_FIELD_EQ(inName,"addNode") ) { return ::hx::Val( addNode_dyn() ); }
		if (HX_FIELD_EQ(inName,"getNode") ) { return ::hx::Val( getNode_dyn() ); }
		if (HX_FIELD_EQ(inName,"onClear") ) { return ::hx::Val( onClear_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"minWidth") ) { return ::hx::Val( minWidth ); }
		if (HX_FIELD_EQ(inName,"maxWidth") ) { return ::hx::Val( maxWidth ); }
		if (HX_FIELD_EQ(inName,"_graphic") ) { return ::hx::Val( _graphic ); }
		if (HX_FIELD_EQ(inName,"initRoot") ) { return ::hx::Val( initRoot_dyn() ); }
		if (HX_FIELD_EQ(inName,"wrapRoot") ) { return ::hx::Val( wrapRoot_dyn() ); }
		if (HX_FIELD_EQ(inName,"addNodes") ) { return ::hx::Val( addNodes_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"minHeight") ) { return ::hx::Val( minHeight ); }
		if (HX_FIELD_EQ(inName,"maxHeight") ) { return ::hx::Val( maxHeight ); }
		if (HX_FIELD_EQ(inName,"tryInsert") ) { return ::hx::Val( tryInsert_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return ::hx::Val( bitmapData ); }
		if (HX_FIELD_EQ(inName,"powerOfTwo") ) { return ::hx::Val( powerOfTwo ); }
		if (HX_FIELD_EQ(inName,"divideNode") ) { return ::hx::Val( divideNode_dyn() ); }
		if (HX_FIELD_EQ(inName,"expandRoot") ) { return ::hx::Val( expandRoot_dyn() ); }
		if (HX_FIELD_EQ(inName,"addToQueue") ) { return ::hx::Val( addToQueue_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createQueue") ) { return ::hx::Val( createQueue_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_graphic") ) { return ::hx::Val( get_graphic_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_persist") ) { return ::hx::Val( set_persist_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_tempStorage") ) { return ::hx::Val( _tempStorage ); }
		if (HX_FIELD_EQ(inName,"bitmapSorter") ) { return ::hx::Val( bitmapSorter_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_minWidth") ) { return ::hx::Val( set_minWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_maxWidth") ) { return ::hx::Val( set_maxWidth_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"allowRotation") ) { return ::hx::Val( allowRotation ); }
		if (HX_FIELD_EQ(inName,"getLibGdxData") ) { return ::hx::Val( getLibGdxData_dyn() ); }
		if (HX_FIELD_EQ(inName,"deleteSubtree") ) { return ::hx::Val( deleteSubtree_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_minHeight") ) { return ::hx::Val( set_minHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_maxHeight") ) { return ::hx::Val( set_maxHeight_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getAtlasFrames") ) { return ::hx::Val( getAtlasFrames_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bitmapData") ) { return ::hx::Val( set_bitmapData_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_powerOfTwo") ) { return ::hx::Val( set_powerOfTwo_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hasNodeWithName") ) { return ::hx::Val( hasNodeWithName_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"expandBitmapData") ) { return ::hx::Val( expandBitmapData_dyn() ); }
		if (HX_FIELD_EQ(inName,"findNodeToInsert") ) { return ::hx::Val( findNodeToInsert_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getNextPowerOfTwo") ) { return ::hx::Val( getNextPowerOfTwo_dyn() ); }
		if (HX_FIELD_EQ(inName,"generateFromQueue") ) { return ::hx::Val( generateFromQueue_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addFromAtlasObjects") ) { return ::hx::Val( addFromAtlasObjects_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"addNodeToAtlasFrames") ) { return ::hx::Val( addNodeToAtlasFrames_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"insertFirstNodeInRoot") ) { return ::hx::Val( insertFirstNodeInRoot_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"needToDivideHorizontally") ) { return ::hx::Val( needToDivideHorizontally_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"addNodeWithSpacesAndBorders") ) { return ::hx::Val( addNodeWithSpacesAndBorders_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxAtlas_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { outValue = ( point ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { outValue = ( matrix ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultMinSize") ) { outValue = ( defaultMinSize ); return true; }
		if (HX_FIELD_EQ(inName,"defaultMaxSize") ) { outValue = ( defaultMaxSize ); return true; }
	}
	return false;
}

::hx::Val FlxAtlas_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast<  ::flixel::graphics::atlas::FlxNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { nodes=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_width(inValue.Cast< int >()) );width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { border=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_height(inValue.Cast< int >()) );height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"persist") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_persist(inValue.Cast< bool >()) );persist=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"minWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_minWidth(inValue.Cast< int >()) );minWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_maxWidth(inValue.Cast< int >()) );maxWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_graphic") ) { _graphic=inValue.Cast<  ::flixel::graphics::FlxGraphic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"minHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_minHeight(inValue.Cast< int >()) );minHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_maxHeight(inValue.Cast< int >()) );maxHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_bitmapData(inValue.Cast<  ::openfl::display::BitmapData >()) );bitmapData=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"powerOfTwo") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_powerOfTwo(inValue.Cast< bool >()) );powerOfTwo=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_tempStorage") ) { _tempStorage=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"allowRotation") ) { allowRotation=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxAtlas_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { point=ioValue.Cast<  ::openfl::geom::Point >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=ioValue.Cast<  ::openfl::geom::Matrix >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultMinSize") ) { defaultMinSize=ioValue.Cast<  ::flixel::math::FlxPoint >(); return true; }
		if (HX_FIELD_EQ(inName,"defaultMaxSize") ) { defaultMaxSize=ioValue.Cast<  ::flixel::math::FlxPoint >(); return true; }
	}
	return false;
}

void FlxAtlas_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("root",22,ee,ae,4b));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("nodes",31,b8,be,9f));
	outFields->push(HX_("bitmapData",b9,b5,c0,33));
	outFields->push(HX_("graphic",a8,5a,07,74));
	outFields->push(HX_("persist",14,22,71,83));
	outFields->push(HX_("border",ec,4c,1a,64));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("minWidth",14,23,9a,c1));
	outFields->push(HX_("minHeight",19,07,94,5b));
	outFields->push(HX_("maxWidth",c2,08,80,74));
	outFields->push(HX_("maxHeight",ab,19,d7,31));
	outFields->push(HX_("allowRotation",e7,ce,40,d9));
	outFields->push(HX_("powerOfTwo",70,be,ae,ea));
	outFields->push(HX_("_graphic",29,b4,bf,ad));
	outFields->push(HX_("_tempStorage",88,3c,09,91));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxAtlas_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::graphics::atlas::FlxNode */ ,(int)offsetof(FlxAtlas_obj,root),HX_("root",22,ee,ae,4b)},
	{::hx::fsString,(int)offsetof(FlxAtlas_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(FlxAtlas_obj,nodes),HX_("nodes",31,b8,be,9f)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(FlxAtlas_obj,bitmapData),HX_("bitmapData",b9,b5,c0,33)},
	{::hx::fsBool,(int)offsetof(FlxAtlas_obj,persist),HX_("persist",14,22,71,83)},
	{::hx::fsInt,(int)offsetof(FlxAtlas_obj,border),HX_("border",ec,4c,1a,64)},
	{::hx::fsInt,(int)offsetof(FlxAtlas_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsInt,(int)offsetof(FlxAtlas_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsInt,(int)offsetof(FlxAtlas_obj,minWidth),HX_("minWidth",14,23,9a,c1)},
	{::hx::fsInt,(int)offsetof(FlxAtlas_obj,minHeight),HX_("minHeight",19,07,94,5b)},
	{::hx::fsInt,(int)offsetof(FlxAtlas_obj,maxWidth),HX_("maxWidth",c2,08,80,74)},
	{::hx::fsInt,(int)offsetof(FlxAtlas_obj,maxHeight),HX_("maxHeight",ab,19,d7,31)},
	{::hx::fsBool,(int)offsetof(FlxAtlas_obj,allowRotation),HX_("allowRotation",e7,ce,40,d9)},
	{::hx::fsBool,(int)offsetof(FlxAtlas_obj,powerOfTwo),HX_("powerOfTwo",70,be,ae,ea)},
	{::hx::fsObject /*  ::flixel::graphics::FlxGraphic */ ,(int)offsetof(FlxAtlas_obj,_graphic),HX_("_graphic",29,b4,bf,ad)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxAtlas_obj,_tempStorage),HX_("_tempStorage",88,3c,09,91)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxAtlas_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(void *) &FlxAtlas_obj::point,HX_("point",50,b4,8f,c6)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(void *) &FlxAtlas_obj::matrix,HX_("matrix",41,36,c8,bb)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(void *) &FlxAtlas_obj::defaultMinSize,HX_("defaultMinSize",b2,68,9d,6c)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(void *) &FlxAtlas_obj::defaultMaxSize,HX_("defaultMaxSize",c4,52,c4,fb)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxAtlas_obj_sMemberFields[] = {
	HX_("root",22,ee,ae,4b),
	HX_("name",4b,72,ff,48),
	HX_("nodes",31,b8,be,9f),
	HX_("bitmapData",b9,b5,c0,33),
	HX_("persist",14,22,71,83),
	HX_("border",ec,4c,1a,64),
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("minWidth",14,23,9a,c1),
	HX_("minHeight",19,07,94,5b),
	HX_("maxWidth",c2,08,80,74),
	HX_("maxHeight",ab,19,d7,31),
	HX_("allowRotation",e7,ce,40,d9),
	HX_("powerOfTwo",70,be,ae,ea),
	HX_("_graphic",29,b4,bf,ad),
	HX_("_tempStorage",88,3c,09,91),
	HX_("initRoot",52,1d,66,50),
	HX_("addNode",c3,4c,47,85),
	HX_("wrapRoot",0c,01,09,97),
	HX_("tryInsert",d4,3e,f1,87),
	HX_("needToDivideHorizontally",5b,7d,cf,a2),
	HX_("divideNode",1b,16,b5,64),
	HX_("insertFirstNodeInRoot",60,9d,55,94),
	HX_("expand",5a,ee,72,c4),
	HX_("expandRoot",9c,3d,1a,4c),
	HX_("expandBitmapData",b3,dc,4b,c7),
	HX_("getNextPowerOfTwo",79,c4,c2,b5),
	HX_("addNodeWithSpacesAndBorders",c6,41,7e,b4),
	HX_("getAtlasFrames",5b,4e,d7,b6),
	HX_("addNodeToAtlasFrames",d3,fe,b4,b1),
	HX_("hasNodeWithName",0d,52,d4,d3),
	HX_("getNode",b8,b9,8c,1b),
	HX_("addNodes",50,de,1b,19),
	HX_("addFromAtlasObjects",94,9b,21,50),
	HX_("bitmapSorter",9a,34,57,3b),
	HX_("createQueue",f5,c4,65,87),
	HX_("addToQueue",f5,05,f9,91),
	HX_("generateFromQueue",d2,e9,4a,08),
	HX_("onClear",ee,0f,99,de),
	HX_("destroy",fa,2c,86,24),
	HX_("clear",8d,71,5b,48),
	HX_("getLibGdxData",f6,d2,a6,af),
	HX_("deleteSubtree",f3,95,b7,8e),
	HX_("findNodeToInsert",0f,91,f6,3b),
	HX_("set_bitmapData",76,26,d6,c9),
	HX_("get_graphic",bf,ba,01,fa),
	HX_("set_persist",37,89,d8,13),
	HX_("set_minWidth",91,fa,ac,8b),
	HX_("set_minHeight",fc,bc,fd,61),
	HX_("get_width",5d,12,0c,0e),
	HX_("set_width",69,fe,5c,f1),
	HX_("get_height",b0,77,d3,f2),
	HX_("set_height",24,16,51,f6),
	HX_("set_maxWidth",3f,e0,92,3e),
	HX_("set_maxHeight",8e,cf,40,38),
	HX_("set_powerOfTwo",2d,2f,c4,80),
	::String(null()) };

static void FlxAtlas_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAtlas_obj::point,"point");
	HX_MARK_MEMBER_NAME(FlxAtlas_obj::matrix,"matrix");
	HX_MARK_MEMBER_NAME(FlxAtlas_obj::defaultMinSize,"defaultMinSize");
	HX_MARK_MEMBER_NAME(FlxAtlas_obj::defaultMaxSize,"defaultMaxSize");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxAtlas_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAtlas_obj::point,"point");
	HX_VISIT_MEMBER_NAME(FlxAtlas_obj::matrix,"matrix");
	HX_VISIT_MEMBER_NAME(FlxAtlas_obj::defaultMinSize,"defaultMinSize");
	HX_VISIT_MEMBER_NAME(FlxAtlas_obj::defaultMaxSize,"defaultMaxSize");
};

#endif

::hx::Class FlxAtlas_obj::__mClass;

static ::String FlxAtlas_obj_sStaticFields[] = {
	HX_("point",50,b4,8f,c6),
	HX_("matrix",41,36,c8,bb),
	HX_("defaultMinSize",b2,68,9d,6c),
	HX_("defaultMaxSize",c4,52,c4,fb),
	::String(null())
};

void FlxAtlas_obj::__register()
{
	FlxAtlas_obj _hx_dummy;
	FlxAtlas_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.atlas.FlxAtlas",4d,7b,60,52);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxAtlas_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxAtlas_obj::__SetStatic;
	__mClass->mMarkFunc = FlxAtlas_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxAtlas_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxAtlas_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxAtlas_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxAtlas_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxAtlas_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxAtlas_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxAtlas_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_f38becfab6571882_27_boot)
HXDLIN(  27)		point =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_f38becfab6571882_28_boot)
HXDLIN(  28)		matrix =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_f38becfab6571882_33_boot)
HXDLIN(  33)		defaultMinSize =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,128,128);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_f38becfab6571882_38_boot)
HXDLIN(  38)		defaultMaxSize =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,1024,1024);
            	}
}

} // end namespace flixel
} // end namespace graphics
} // end namespace atlas
