#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_texture_half_float
#include <lime/graphics/opengl/ext/OES_texture_half_float.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e7d829e633ebb4ac_7_new,"lime.graphics.opengl.ext.OES_texture_half_float","new",0xc8becfca,"lime.graphics.opengl.ext.OES_texture_half_float.new","lime/graphics/opengl/ext/OES_texture_half_float.hx",7,0x6d0fc604)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void OES_texture_half_float_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e7d829e633ebb4ac_7_new)
            	HX_STACK_THIS(this)
HXLINE(   7)
HXDLIN(   7)		this->HALF_FLOAT_OES = 36193;
            	}

Dynamic OES_texture_half_float_obj::__CreateEmpty() { return new OES_texture_half_float_obj; }

void *OES_texture_half_float_obj::_hx_vtable = 0;

Dynamic OES_texture_half_float_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OES_texture_half_float_obj > _hx_result = new OES_texture_half_float_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OES_texture_half_float_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x31137060;
}


OES_texture_half_float_obj::OES_texture_half_float_obj()
{
}

::hx::Val OES_texture_half_float_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"HALF_FLOAT_OES") ) { return ::hx::Val( HALF_FLOAT_OES ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val OES_texture_half_float_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"HALF_FLOAT_OES") ) { HALF_FLOAT_OES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OES_texture_half_float_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("HALF_FLOAT_OES",2e,8a,e6,ab));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OES_texture_half_float_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(OES_texture_half_float_obj,HALF_FLOAT_OES),HX_("HALF_FLOAT_OES",2e,8a,e6,ab)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *OES_texture_half_float_obj_sStaticStorageInfo = 0;
#endif

static ::String OES_texture_half_float_obj_sMemberFields[] = {
	HX_("HALF_FLOAT_OES",2e,8a,e6,ab),
	::String(null()) };

::hx::Class OES_texture_half_float_obj::__mClass;

void OES_texture_half_float_obj::__register()
{
	OES_texture_half_float_obj _hx_dummy;
	OES_texture_half_float_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.OES_texture_half_float",d8,e2,5c,5e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OES_texture_half_float_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OES_texture_half_float_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OES_texture_half_float_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OES_texture_half_float_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
