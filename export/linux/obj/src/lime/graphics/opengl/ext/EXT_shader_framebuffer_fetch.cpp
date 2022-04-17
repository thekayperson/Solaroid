#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_shader_framebuffer_fetch
#include <lime/graphics/opengl/ext/EXT_shader_framebuffer_fetch.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c2a15eaaaac5f681_6_new,"lime.graphics.opengl.ext.EXT_shader_framebuffer_fetch","new",0x36f079a0,"lime.graphics.opengl.ext.EXT_shader_framebuffer_fetch.new","lime/graphics/opengl/ext/EXT_shader_framebuffer_fetch.hx",6,0xe61dd36e)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void EXT_shader_framebuffer_fetch_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c2a15eaaaac5f681_6_new)
            	HX_STACK_THIS(this)
HXLINE(   6)
HXDLIN(   6)		this->FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT = 35410;
            	}

Dynamic EXT_shader_framebuffer_fetch_obj::__CreateEmpty() { return new EXT_shader_framebuffer_fetch_obj; }

void *EXT_shader_framebuffer_fetch_obj::_hx_vtable = 0;

Dynamic EXT_shader_framebuffer_fetch_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EXT_shader_framebuffer_fetch_obj > _hx_result = new EXT_shader_framebuffer_fetch_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EXT_shader_framebuffer_fetch_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x18fc8752;
}


EXT_shader_framebuffer_fetch_obj::EXT_shader_framebuffer_fetch_obj()
{
}

::hx::Val EXT_shader_framebuffer_fetch_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 36:
		if (HX_FIELD_EQ(inName,"FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT") ) { return ::hx::Val( FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EXT_shader_framebuffer_fetch_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 36:
		if (HX_FIELD_EQ(inName,"FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT") ) { FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_shader_framebuffer_fetch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT",6c,bf,6f,46));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EXT_shader_framebuffer_fetch_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(EXT_shader_framebuffer_fetch_obj,FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT),HX_("FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT",6c,bf,6f,46)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EXT_shader_framebuffer_fetch_obj_sStaticStorageInfo = 0;
#endif

static ::String EXT_shader_framebuffer_fetch_obj_sMemberFields[] = {
	HX_("FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT",6c,bf,6f,46),
	::String(null()) };

::hx::Class EXT_shader_framebuffer_fetch_obj::__mClass;

void EXT_shader_framebuffer_fetch_obj::__register()
{
	EXT_shader_framebuffer_fetch_obj _hx_dummy;
	EXT_shader_framebuffer_fetch_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.EXT_shader_framebuffer_fetch",ae,69,13,d0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EXT_shader_framebuffer_fetch_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EXT_shader_framebuffer_fetch_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EXT_shader_framebuffer_fetch_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EXT_shader_framebuffer_fetch_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
