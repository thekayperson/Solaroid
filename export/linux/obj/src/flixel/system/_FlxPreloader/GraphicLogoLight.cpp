#include <hxcpp.h>

#ifndef INCLUDED_flixel_system__FlxPreloader_GraphicLogoLight
#include <flixel/system/_FlxPreloader/GraphicLogoLight.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_1650a94bdf7fa7ef_47_new,"flixel.system._FlxPreloader.GraphicLogoLight","new",0xeb15e96d,"flixel.system._FlxPreloader.GraphicLogoLight.new","openfl/utils/_internal/AssetsMacro.hx",47,0xfdd54705)
HX_LOCAL_STACK_FRAME(_hx_pos_2c59a9ade474181c_13_boot,"flixel.system._FlxPreloader.GraphicLogoLight","boot",0xc02f5685,"flixel.system._FlxPreloader.GraphicLogoLight.boot","flixel/system/FlxPreloader.hx",13,0xf0599dad)
namespace flixel{
namespace _hx_system{
namespace _FlxPreloader{

void GraphicLogoLight_obj::__construct(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA){
            		 ::Dynamic transparent = __o_transparent;
            		if (::hx::IsNull(__o_transparent)) transparent = true;
            		 ::Dynamic fillRGBA = __o_fillRGBA;
            		if (::hx::IsNull(__o_fillRGBA)) fillRGBA = -1;
            	HX_STACKFRAME(&_hx_pos_1650a94bdf7fa7ef_47_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	HX_STACK_ARG(transparent,"transparent")
            	HX_STACK_ARG(fillRGBA,"fillRGBA")
HXLINE(  47)
HXLINE(  71)		super::__construct(0,0,transparent,fillRGBA);
HXLINE(  73)		HX_VARI(  ::openfl::utils::ByteArrayData,byteArray) = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(::haxe::Resource_obj::getBytes(::flixel::_hx_system::_FlxPreloader::GraphicLogoLight_obj::resourceName));
HXLINE(  74)		{
HXLINE(  74)			 ::openfl::utils::ByteArrayData rawAlpha = null();
HXDLIN(  74)			 ::lime::graphics::Image image = ::lime::graphics::Image_obj::fromBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytes(byteArray));
HXDLIN(  74)			this->_hx___fromImage(image);
HXDLIN(  74)			if (::hx::IsNotNull( rawAlpha )) {
HXLINE(  74)				this->_hx___applyAlpha(rawAlpha);
            			}
            		}
            	}

Dynamic GraphicLogoLight_obj::__CreateEmpty() { return new GraphicLogoLight_obj; }

void *GraphicLogoLight_obj::_hx_vtable = 0;

Dynamic GraphicLogoLight_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicLogoLight_obj > _hx_result = new GraphicLogoLight_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicLogoLight_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x073e5103) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x073e5103;
	} else {
		return inClassId==(int)0x1e8331fb;
	}
}

::String GraphicLogoLight_obj::resourceName;


::hx::ObjectPtr< GraphicLogoLight_obj > GraphicLogoLight_obj::__new(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	::hx::ObjectPtr< GraphicLogoLight_obj > __this = new GraphicLogoLight_obj();
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

::hx::ObjectPtr< GraphicLogoLight_obj > GraphicLogoLight_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	GraphicLogoLight_obj *__this = (GraphicLogoLight_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicLogoLight_obj), true, "flixel.system._FlxPreloader.GraphicLogoLight"));
	*(void **)__this = GraphicLogoLight_obj::_hx_vtable;
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

GraphicLogoLight_obj::GraphicLogoLight_obj()
{
}

bool GraphicLogoLight_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = ( resourceName ); return true; }
	}
	return false;
}

bool GraphicLogoLight_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GraphicLogoLight_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo GraphicLogoLight_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &GraphicLogoLight_obj::resourceName,HX_("resourceName",39,7a,62,90)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void GraphicLogoLight_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicLogoLight_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicLogoLight_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicLogoLight_obj::resourceName,"resourceName");
};

#endif

::hx::Class GraphicLogoLight_obj::__mClass;

static ::String GraphicLogoLight_obj_sStaticFields[] = {
	HX_("resourceName",39,7a,62,90),
	::String(null())
};

void GraphicLogoLight_obj::__register()
{
	GraphicLogoLight_obj _hx_dummy;
	GraphicLogoLight_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system._FlxPreloader.GraphicLogoLight",fb,ae,57,16);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GraphicLogoLight_obj::__GetStatic;
	__mClass->mSetStaticField = &GraphicLogoLight_obj::__SetStatic;
	__mClass->mMarkFunc = GraphicLogoLight_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GraphicLogoLight_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GraphicLogoLight_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicLogoLight_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicLogoLight_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicLogoLight_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GraphicLogoLight_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2c59a9ade474181c_13_boot)
HXDLIN(  13)		resourceName = HX_("__ASSET__:bitmap_flixel_system__FlxPreloader_GraphicLogoLight",b2,b0,e9,d2);
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace _FlxPreloader
