#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_ARM_rgba8
#include <lime/graphics/opengl/ext/ARM_rgba8.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e0775cc2fd58ee3f_5_new,"lime.graphics.opengl.ext.ARM_rgba8","new",0xe0dce511,"lime.graphics.opengl.ext.ARM_rgba8.new","lime/graphics/opengl/ext/ARM_rgba8.hx",5,0xfb26fb21)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void ARM_rgba8_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e0775cc2fd58ee3f_5_new)
            	HX_STACK_THIS(this)
HXLINE(   5)
            	}

Dynamic ARM_rgba8_obj::__CreateEmpty() { return new ARM_rgba8_obj; }

void *ARM_rgba8_obj::_hx_vtable = 0;

Dynamic ARM_rgba8_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ARM_rgba8_obj > _hx_result = new ARM_rgba8_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ARM_rgba8_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x301a1bb3;
}


ARM_rgba8_obj::ARM_rgba8_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ARM_rgba8_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ARM_rgba8_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ARM_rgba8_obj::__mClass;

void ARM_rgba8_obj::__register()
{
	ARM_rgba8_obj _hx_dummy;
	ARM_rgba8_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.ARM_rgba8",9f,08,47,51);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ARM_rgba8_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ARM_rgba8_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ARM_rgba8_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
