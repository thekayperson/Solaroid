#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_mouse__FlxMouse_GraphicCursor
#include <flixel/input/mouse/_FlxMouse/GraphicCursor.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_bfff486827f56158_47_new,"flixel.input.mouse._FlxMouse.GraphicCursor","new",0x35242895,"flixel.input.mouse._FlxMouse.GraphicCursor.new","openfl/utils/_internal/AssetsMacro.hx",47,0xfdd54705)
HX_LOCAL_STACK_FRAME(_hx_pos_09fd7ad916773a7e_28_boot,"flixel.input.mouse._FlxMouse.GraphicCursor","boot",0x42985a5d,"flixel.input.mouse._FlxMouse.GraphicCursor.boot","flixel/input/mouse/FlxMouse.hx",28,0xe4e80b89)
namespace flixel{
namespace input{
namespace mouse{
namespace _FlxMouse{

void GraphicCursor_obj::__construct(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA){
            		 ::Dynamic transparent = __o_transparent;
            		if (::hx::IsNull(__o_transparent)) transparent = true;
            		 ::Dynamic fillRGBA = __o_fillRGBA;
            		if (::hx::IsNull(__o_fillRGBA)) fillRGBA = -1;
            	HX_STACKFRAME(&_hx_pos_bfff486827f56158_47_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	HX_STACK_ARG(transparent,"transparent")
            	HX_STACK_ARG(fillRGBA,"fillRGBA")
HXLINE(  47)
HXLINE(  71)		super::__construct(0,0,transparent,fillRGBA);
HXLINE(  73)		HX_VARI(  ::openfl::utils::ByteArrayData,byteArray) = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(::haxe::Resource_obj::getBytes(::flixel::input::mouse::_FlxMouse::GraphicCursor_obj::resourceName));
HXLINE(  74)		{
HXLINE(  74)			 ::openfl::utils::ByteArrayData rawAlpha = null();
HXDLIN(  74)			 ::lime::graphics::Image image = ::lime::graphics::Image_obj::fromBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytes(byteArray));
HXDLIN(  74)			this->_hx___fromImage(image);
HXDLIN(  74)			if (::hx::IsNotNull( rawAlpha )) {
HXLINE(  74)				this->_hx___applyAlpha(rawAlpha);
            			}
            		}
            	}

Dynamic GraphicCursor_obj::__CreateEmpty() { return new GraphicCursor_obj; }

void *GraphicCursor_obj::_hx_vtable = 0;

Dynamic GraphicCursor_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicCursor_obj > _hx_result = new GraphicCursor_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicCursor_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x073e5103) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x073e5103;
	} else {
		return inClassId==(int)0x26630e23;
	}
}

::String GraphicCursor_obj::resourceName;


::hx::ObjectPtr< GraphicCursor_obj > GraphicCursor_obj::__new(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	::hx::ObjectPtr< GraphicCursor_obj > __this = new GraphicCursor_obj();
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

::hx::ObjectPtr< GraphicCursor_obj > GraphicCursor_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	GraphicCursor_obj *__this = (GraphicCursor_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicCursor_obj), true, "flixel.input.mouse._FlxMouse.GraphicCursor"));
	*(void **)__this = GraphicCursor_obj::_hx_vtable;
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

GraphicCursor_obj::GraphicCursor_obj()
{
}

bool GraphicCursor_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = ( resourceName ); return true; }
	}
	return false;
}

bool GraphicCursor_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GraphicCursor_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo GraphicCursor_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &GraphicCursor_obj::resourceName,HX_("resourceName",39,7a,62,90)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void GraphicCursor_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicCursor_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicCursor_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicCursor_obj::resourceName,"resourceName");
};

#endif

::hx::Class GraphicCursor_obj::__mClass;

static ::String GraphicCursor_obj_sStaticFields[] = {
	HX_("resourceName",39,7a,62,90),
	::String(null())
};

void GraphicCursor_obj::__register()
{
	GraphicCursor_obj _hx_dummy;
	GraphicCursor_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.mouse._FlxMouse.GraphicCursor",23,3a,3d,cf);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GraphicCursor_obj::__GetStatic;
	__mClass->mSetStaticField = &GraphicCursor_obj::__SetStatic;
	__mClass->mMarkFunc = GraphicCursor_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GraphicCursor_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GraphicCursor_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicCursor_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicCursor_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicCursor_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GraphicCursor_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_09fd7ad916773a7e_28_boot)
HXDLIN(  28)		resourceName = HX_("__ASSET__:bitmap_flixel_input_mouse__FlxMouse_GraphicCursor",c5,22,e3,93);
            	}
}

} // end namespace flixel
} // end namespace input
} // end namespace mouse
} // end namespace _FlxMouse
