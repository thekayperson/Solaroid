#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_stats__Stats_GraphicMinimizeButton
#include <flixel/system/debug/stats/_Stats/GraphicMinimizeButton.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2de8af6cc75a88e9_47_new,"flixel.system.debug.stats._Stats.GraphicMinimizeButton","new",0x3ce68c53,"flixel.system.debug.stats._Stats.GraphicMinimizeButton.new","openfl/utils/_internal/AssetsMacro.hx",47,0xfdd54705)
HX_LOCAL_STACK_FRAME(_hx_pos_fb95b28c7458bd93_16_boot,"flixel.system.debug.stats._Stats.GraphicMinimizeButton","boot",0x04ed3cdf,"flixel.system.debug.stats._Stats.GraphicMinimizeButton.boot","flixel/system/debug/stats/Stats.hx",16,0xc15f23b8)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace stats{
namespace _Stats{

void GraphicMinimizeButton_obj::__construct(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA){
            		 ::Dynamic transparent = __o_transparent;
            		if (::hx::IsNull(__o_transparent)) transparent = true;
            		 ::Dynamic fillRGBA = __o_fillRGBA;
            		if (::hx::IsNull(__o_fillRGBA)) fillRGBA = -1;
            	HX_STACKFRAME(&_hx_pos_2de8af6cc75a88e9_47_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	HX_STACK_ARG(transparent,"transparent")
            	HX_STACK_ARG(fillRGBA,"fillRGBA")
HXLINE(  47)
HXLINE(  71)		super::__construct(0,0,transparent,fillRGBA);
HXLINE(  73)		HX_VARI(  ::openfl::utils::ByteArrayData,byteArray) = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(::haxe::Resource_obj::getBytes(::flixel::_hx_system::debug::stats::_Stats::GraphicMinimizeButton_obj::resourceName));
HXLINE(  74)		{
HXLINE(  74)			 ::openfl::utils::ByteArrayData rawAlpha = null();
HXDLIN(  74)			 ::lime::graphics::Image image = ::lime::graphics::Image_obj::fromBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytes(byteArray));
HXDLIN(  74)			this->_hx___fromImage(image);
HXDLIN(  74)			if (::hx::IsNotNull( rawAlpha )) {
HXLINE(  74)				this->_hx___applyAlpha(rawAlpha);
            			}
            		}
            	}

Dynamic GraphicMinimizeButton_obj::__CreateEmpty() { return new GraphicMinimizeButton_obj; }

void *GraphicMinimizeButton_obj::_hx_vtable = 0;

Dynamic GraphicMinimizeButton_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicMinimizeButton_obj > _hx_result = new GraphicMinimizeButton_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicMinimizeButton_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x073e5103) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x073e5103;
	} else {
		return inClassId==(int)0x22e97d41;
	}
}

::String GraphicMinimizeButton_obj::resourceName;


::hx::ObjectPtr< GraphicMinimizeButton_obj > GraphicMinimizeButton_obj::__new(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	::hx::ObjectPtr< GraphicMinimizeButton_obj > __this = new GraphicMinimizeButton_obj();
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

::hx::ObjectPtr< GraphicMinimizeButton_obj > GraphicMinimizeButton_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	GraphicMinimizeButton_obj *__this = (GraphicMinimizeButton_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicMinimizeButton_obj), true, "flixel.system.debug.stats._Stats.GraphicMinimizeButton"));
	*(void **)__this = GraphicMinimizeButton_obj::_hx_vtable;
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

GraphicMinimizeButton_obj::GraphicMinimizeButton_obj()
{
}

bool GraphicMinimizeButton_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = ( resourceName ); return true; }
	}
	return false;
}

bool GraphicMinimizeButton_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GraphicMinimizeButton_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo GraphicMinimizeButton_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &GraphicMinimizeButton_obj::resourceName,HX_("resourceName",39,7a,62,90)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void GraphicMinimizeButton_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicMinimizeButton_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicMinimizeButton_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicMinimizeButton_obj::resourceName,"resourceName");
};

#endif

::hx::Class GraphicMinimizeButton_obj::__mClass;

static ::String GraphicMinimizeButton_obj_sStaticFields[] = {
	HX_("resourceName",39,7a,62,90),
	::String(null())
};

void GraphicMinimizeButton_obj::__register()
{
	GraphicMinimizeButton_obj _hx_dummy;
	GraphicMinimizeButton_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.stats._Stats.GraphicMinimizeButton",e1,66,57,3a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GraphicMinimizeButton_obj::__GetStatic;
	__mClass->mSetStaticField = &GraphicMinimizeButton_obj::__SetStatic;
	__mClass->mMarkFunc = GraphicMinimizeButton_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GraphicMinimizeButton_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GraphicMinimizeButton_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicMinimizeButton_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicMinimizeButton_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicMinimizeButton_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GraphicMinimizeButton_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_fb95b28c7458bd93_16_boot)
HXDLIN(  16)		resourceName = HX_("__ASSET__:bitmap_flixel_system_debug_stats__Stats_GraphicMinimizeButton",38,20,46,56);
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace stats
} // end namespace _Stats
