#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_NV_read_depth_stencil
#include <lime/graphics/opengl/ext/NV_read_depth_stencil.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_12fd9b206b598ca3_5_new,"lime.graphics.opengl.ext.NV_read_depth_stencil","new",0x21dc877e,"lime.graphics.opengl.ext.NV_read_depth_stencil.new","lime/graphics/opengl/ext/NV_read_depth_stencil.hx",5,0x5c883054)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void NV_read_depth_stencil_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_12fd9b206b598ca3_5_new)
            	HX_STACK_THIS(this)
HXLINE(   5)
            	}

Dynamic NV_read_depth_stencil_obj::__CreateEmpty() { return new NV_read_depth_stencil_obj; }

void *NV_read_depth_stencil_obj::_hx_vtable = 0;

Dynamic NV_read_depth_stencil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NV_read_depth_stencil_obj > _hx_result = new NV_read_depth_stencil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NV_read_depth_stencil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x091d11a0;
}


NV_read_depth_stencil_obj::NV_read_depth_stencil_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *NV_read_depth_stencil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *NV_read_depth_stencil_obj_sStaticStorageInfo = 0;
#endif

::hx::Class NV_read_depth_stencil_obj::__mClass;

void NV_read_depth_stencil_obj::__register()
{
	NV_read_depth_stencil_obj _hx_dummy;
	NV_read_depth_stencil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.NV_read_depth_stencil",8c,b0,6f,fd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< NV_read_depth_stencil_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NV_read_depth_stencil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NV_read_depth_stencil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
