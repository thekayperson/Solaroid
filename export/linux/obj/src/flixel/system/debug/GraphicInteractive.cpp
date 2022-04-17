#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_GraphicInteractive
#include <flixel/system/debug/GraphicInteractive.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_75f87a0e952edcfc_47_new,"flixel.system.debug.GraphicInteractive","new",0x8c45a4b4,"flixel.system.debug.GraphicInteractive.new","openfl/utils/_internal/AssetsMacro.hx",47,0xfdd54705)
HX_LOCAL_STACK_FRAME(_hx_pos_8e56f9cbe4884d6a_58_boot,"flixel.system.debug.GraphicInteractive","boot",0x28c3795e,"flixel.system.debug.GraphicInteractive.boot","flixel/system/debug/FlxDebugger.hx",58,0xd9fc0a74)
namespace flixel{
namespace _hx_system{
namespace debug{

void GraphicInteractive_obj::__construct(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA){
            		 ::Dynamic transparent = __o_transparent;
            		if (::hx::IsNull(__o_transparent)) transparent = true;
            		 ::Dynamic fillRGBA = __o_fillRGBA;
            		if (::hx::IsNull(__o_fillRGBA)) fillRGBA = -1;
            	HX_STACKFRAME(&_hx_pos_75f87a0e952edcfc_47_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	HX_STACK_ARG(transparent,"transparent")
            	HX_STACK_ARG(fillRGBA,"fillRGBA")
HXLINE(  47)
HXLINE(  71)		super::__construct(0,0,transparent,fillRGBA);
HXLINE(  73)		HX_VARI(  ::openfl::utils::ByteArrayData,byteArray) = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(::haxe::Resource_obj::getBytes(::flixel::_hx_system::debug::GraphicInteractive_obj::resourceName));
HXLINE(  74)		{
HXLINE(  74)			 ::openfl::utils::ByteArrayData rawAlpha = null();
HXDLIN(  74)			 ::lime::graphics::Image image = ::lime::graphics::Image_obj::fromBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytes(byteArray));
HXDLIN(  74)			this->_hx___fromImage(image);
HXDLIN(  74)			if (::hx::IsNotNull( rawAlpha )) {
HXLINE(  74)				this->_hx___applyAlpha(rawAlpha);
            			}
            		}
            	}

Dynamic GraphicInteractive_obj::__CreateEmpty() { return new GraphicInteractive_obj; }

void *GraphicInteractive_obj::_hx_vtable = 0;

Dynamic GraphicInteractive_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicInteractive_obj > _hx_result = new GraphicInteractive_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicInteractive_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x073e5103) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x073e5103;
	} else {
		return inClassId==(int)0x79ecc322;
	}
}

::String GraphicInteractive_obj::resourceName;


::hx::ObjectPtr< GraphicInteractive_obj > GraphicInteractive_obj::__new(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	::hx::ObjectPtr< GraphicInteractive_obj > __this = new GraphicInteractive_obj();
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

::hx::ObjectPtr< GraphicInteractive_obj > GraphicInteractive_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	GraphicInteractive_obj *__this = (GraphicInteractive_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicInteractive_obj), true, "flixel.system.debug.GraphicInteractive"));
	*(void **)__this = GraphicInteractive_obj::_hx_vtable;
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

GraphicInteractive_obj::GraphicInteractive_obj()
{
}

bool GraphicInteractive_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = ( resourceName ); return true; }
	}
	return false;
}

bool GraphicInteractive_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GraphicInteractive_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo GraphicInteractive_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &GraphicInteractive_obj::resourceName,HX_("resourceName",39,7a,62,90)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void GraphicInteractive_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicInteractive_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicInteractive_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicInteractive_obj::resourceName,"resourceName");
};

#endif

::hx::Class GraphicInteractive_obj::__mClass;

static ::String GraphicInteractive_obj_sStaticFields[] = {
	HX_("resourceName",39,7a,62,90),
	::String(null())
};

void GraphicInteractive_obj::__register()
{
	GraphicInteractive_obj _hx_dummy;
	GraphicInteractive_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.GraphicInteractive",c2,7a,08,b3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GraphicInteractive_obj::__GetStatic;
	__mClass->mSetStaticField = &GraphicInteractive_obj::__SetStatic;
	__mClass->mMarkFunc = GraphicInteractive_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GraphicInteractive_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GraphicInteractive_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicInteractive_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicInteractive_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicInteractive_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GraphicInteractive_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_8e56f9cbe4884d6a_58_boot)
HXDLIN(  58)		resourceName = HX_("__ASSET__:bitmap_flixel_system_debug_GraphicInteractive",39,22,20,19);
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
