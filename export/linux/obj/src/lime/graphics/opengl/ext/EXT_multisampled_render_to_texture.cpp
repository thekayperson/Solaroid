#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_multisampled_render_to_texture
#include <lime/graphics/opengl/ext/EXT_multisampled_render_to_texture.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_04dcf93d6e0b1395_4_new,"lime.graphics.opengl.ext.EXT_multisampled_render_to_texture","new",0x7ed41754,"lime.graphics.opengl.ext.EXT_multisampled_render_to_texture.new","lime/graphics/opengl/ext/EXT_multisampled_render_to_texture.hx",4,0x46ec72ba)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void EXT_multisampled_render_to_texture_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_04dcf93d6e0b1395_4_new)
            	HX_STACK_THIS(this)
HXLINE(   4)
HXLINE(   9)		this->MAX_SAMPLES_EXT = 36183;
HXLINE(   8)		this->FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT = 36182;
HXLINE(   7)		this->RENDERBUFFER_SAMPLES_EXT = 36011;
HXLINE(   6)		this->FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT = 36204;
            	}

Dynamic EXT_multisampled_render_to_texture_obj::__CreateEmpty() { return new EXT_multisampled_render_to_texture_obj; }

void *EXT_multisampled_render_to_texture_obj::_hx_vtable = 0;

Dynamic EXT_multisampled_render_to_texture_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EXT_multisampled_render_to_texture_obj > _hx_result = new EXT_multisampled_render_to_texture_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EXT_multisampled_render_to_texture_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7d1168b2;
}


EXT_multisampled_render_to_texture_obj::EXT_multisampled_render_to_texture_obj()
{
}

::hx::Val EXT_multisampled_render_to_texture_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"MAX_SAMPLES_EXT") ) { return ::hx::Val( MAX_SAMPLES_EXT ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_SAMPLES_EXT") ) { return ::hx::Val( RENDERBUFFER_SAMPLES_EXT ); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT") ) { return ::hx::Val( FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT ); }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT") ) { return ::hx::Val( FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EXT_multisampled_render_to_texture_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"MAX_SAMPLES_EXT") ) { MAX_SAMPLES_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_SAMPLES_EXT") ) { RENDERBUFFER_SAMPLES_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT") ) { FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT") ) { FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_multisampled_render_to_texture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT",fd,36,3c,2d));
	outFields->push(HX_("RENDERBUFFER_SAMPLES_EXT",c2,ea,a3,7a));
	outFields->push(HX_("FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT",d6,77,43,27));
	outFields->push(HX_("MAX_SAMPLES_EXT",70,b9,8c,83));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EXT_multisampled_render_to_texture_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(EXT_multisampled_render_to_texture_obj,FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT),HX_("FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT",fd,36,3c,2d)},
	{::hx::fsInt,(int)offsetof(EXT_multisampled_render_to_texture_obj,RENDERBUFFER_SAMPLES_EXT),HX_("RENDERBUFFER_SAMPLES_EXT",c2,ea,a3,7a)},
	{::hx::fsInt,(int)offsetof(EXT_multisampled_render_to_texture_obj,FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT),HX_("FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT",d6,77,43,27)},
	{::hx::fsInt,(int)offsetof(EXT_multisampled_render_to_texture_obj,MAX_SAMPLES_EXT),HX_("MAX_SAMPLES_EXT",70,b9,8c,83)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EXT_multisampled_render_to_texture_obj_sStaticStorageInfo = 0;
#endif

static ::String EXT_multisampled_render_to_texture_obj_sMemberFields[] = {
	HX_("FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT",fd,36,3c,2d),
	HX_("RENDERBUFFER_SAMPLES_EXT",c2,ea,a3,7a),
	HX_("FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT",d6,77,43,27),
	HX_("MAX_SAMPLES_EXT",70,b9,8c,83),
	::String(null()) };

::hx::Class EXT_multisampled_render_to_texture_obj::__mClass;

void EXT_multisampled_render_to_texture_obj::__register()
{
	EXT_multisampled_render_to_texture_obj _hx_dummy;
	EXT_multisampled_render_to_texture_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.EXT_multisampled_render_to_texture",62,1d,81,ff);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EXT_multisampled_render_to_texture_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EXT_multisampled_render_to_texture_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EXT_multisampled_render_to_texture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EXT_multisampled_render_to_texture_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
