#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_depth_texture
#include <lime/graphics/opengl/ext/OES_depth_texture.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_40e705a33ea3613f_5_new,"lime.graphics.opengl.ext.OES_depth_texture","new",0xde3f7b6d,"lime.graphics.opengl.ext.OES_depth_texture.new","lime/graphics/opengl/ext/OES_depth_texture.hx",5,0xae4fd645)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void OES_depth_texture_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_40e705a33ea3613f_5_new)
            	HX_STACK_THIS(this)
HXLINE(   5)
            	}

Dynamic OES_depth_texture_obj::__CreateEmpty() { return new OES_depth_texture_obj; }

void *OES_depth_texture_obj::_hx_vtable = 0;

Dynamic OES_depth_texture_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OES_depth_texture_obj > _hx_result = new OES_depth_texture_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OES_depth_texture_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x02adc523;
}


OES_depth_texture_obj::OES_depth_texture_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *OES_depth_texture_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *OES_depth_texture_obj_sStaticStorageInfo = 0;
#endif

::hx::Class OES_depth_texture_obj::__mClass;

void OES_depth_texture_obj::__register()
{
	OES_depth_texture_obj _hx_dummy;
	OES_depth_texture_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.OES_depth_texture",fb,40,d0,ec);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< OES_depth_texture_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OES_depth_texture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OES_depth_texture_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
