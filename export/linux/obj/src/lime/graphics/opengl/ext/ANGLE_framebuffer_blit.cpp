#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_ANGLE_framebuffer_blit
#include <lime/graphics/opengl/ext/ANGLE_framebuffer_blit.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7378ebc94440c0ad_4_new,"lime.graphics.opengl.ext.ANGLE_framebuffer_blit","new",0x6745fce7,"lime.graphics.opengl.ext.ANGLE_framebuffer_blit.new","lime/graphics/opengl/ext/ANGLE_framebuffer_blit.hx",4,0xfaf96b87)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void ANGLE_framebuffer_blit_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7378ebc94440c0ad_4_new)
            	HX_STACK_THIS(this)
HXLINE(   4)
HXLINE(   9)		this->READ_FRAMEBUFFER_BINDING_ANGLE = 36010;
HXLINE(   8)		this->DRAW_FRAMEBUFFER_BINDING_ANGLE = 36006;
HXLINE(   7)		this->DRAW_FRAMEBUFFER_ANGLE = 36009;
HXLINE(   6)		this->READ_FRAMEBUFFER_ANGLE = 36008;
            	}

Dynamic ANGLE_framebuffer_blit_obj::__CreateEmpty() { return new ANGLE_framebuffer_blit_obj; }

void *ANGLE_framebuffer_blit_obj::_hx_vtable = 0;

Dynamic ANGLE_framebuffer_blit_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ANGLE_framebuffer_blit_obj > _hx_result = new ANGLE_framebuffer_blit_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ANGLE_framebuffer_blit_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x461c8afd;
}


ANGLE_framebuffer_blit_obj::ANGLE_framebuffer_blit_obj()
{
}

::hx::Val ANGLE_framebuffer_blit_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"READ_FRAMEBUFFER_ANGLE") ) { return ::hx::Val( READ_FRAMEBUFFER_ANGLE ); }
		if (HX_FIELD_EQ(inName,"DRAW_FRAMEBUFFER_ANGLE") ) { return ::hx::Val( DRAW_FRAMEBUFFER_ANGLE ); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"DRAW_FRAMEBUFFER_BINDING_ANGLE") ) { return ::hx::Val( DRAW_FRAMEBUFFER_BINDING_ANGLE ); }
		if (HX_FIELD_EQ(inName,"READ_FRAMEBUFFER_BINDING_ANGLE") ) { return ::hx::Val( READ_FRAMEBUFFER_BINDING_ANGLE ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ANGLE_framebuffer_blit_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"READ_FRAMEBUFFER_ANGLE") ) { READ_FRAMEBUFFER_ANGLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_FRAMEBUFFER_ANGLE") ) { DRAW_FRAMEBUFFER_ANGLE=inValue.Cast< int >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"DRAW_FRAMEBUFFER_BINDING_ANGLE") ) { DRAW_FRAMEBUFFER_BINDING_ANGLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"READ_FRAMEBUFFER_BINDING_ANGLE") ) { READ_FRAMEBUFFER_BINDING_ANGLE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ANGLE_framebuffer_blit_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("READ_FRAMEBUFFER_ANGLE",18,41,27,92));
	outFields->push(HX_("DRAW_FRAMEBUFFER_ANGLE",46,e5,8b,bb));
	outFields->push(HX_("DRAW_FRAMEBUFFER_BINDING_ANGLE",6c,40,90,be));
	outFields->push(HX_("READ_FRAMEBUFFER_BINDING_ANGLE",3e,be,86,02));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ANGLE_framebuffer_blit_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ANGLE_framebuffer_blit_obj,READ_FRAMEBUFFER_ANGLE),HX_("READ_FRAMEBUFFER_ANGLE",18,41,27,92)},
	{::hx::fsInt,(int)offsetof(ANGLE_framebuffer_blit_obj,DRAW_FRAMEBUFFER_ANGLE),HX_("DRAW_FRAMEBUFFER_ANGLE",46,e5,8b,bb)},
	{::hx::fsInt,(int)offsetof(ANGLE_framebuffer_blit_obj,DRAW_FRAMEBUFFER_BINDING_ANGLE),HX_("DRAW_FRAMEBUFFER_BINDING_ANGLE",6c,40,90,be)},
	{::hx::fsInt,(int)offsetof(ANGLE_framebuffer_blit_obj,READ_FRAMEBUFFER_BINDING_ANGLE),HX_("READ_FRAMEBUFFER_BINDING_ANGLE",3e,be,86,02)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ANGLE_framebuffer_blit_obj_sStaticStorageInfo = 0;
#endif

static ::String ANGLE_framebuffer_blit_obj_sMemberFields[] = {
	HX_("READ_FRAMEBUFFER_ANGLE",18,41,27,92),
	HX_("DRAW_FRAMEBUFFER_ANGLE",46,e5,8b,bb),
	HX_("DRAW_FRAMEBUFFER_BINDING_ANGLE",6c,40,90,be),
	HX_("READ_FRAMEBUFFER_BINDING_ANGLE",3e,be,86,02),
	::String(null()) };

::hx::Class ANGLE_framebuffer_blit_obj::__mClass;

void ANGLE_framebuffer_blit_obj::__register()
{
	ANGLE_framebuffer_blit_obj _hx_dummy;
	ANGLE_framebuffer_blit_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.ANGLE_framebuffer_blit",75,fd,65,73);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ANGLE_framebuffer_blit_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ANGLE_framebuffer_blit_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ANGLE_framebuffer_blit_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ANGLE_framebuffer_blit_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
