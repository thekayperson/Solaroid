#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_vertex_half_float
#include <lime/graphics/opengl/ext/OES_vertex_half_float.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2b1d0dc1acb0da8b_6_new,"lime.graphics.opengl.ext.OES_vertex_half_float","new",0x752d1419,"lime.graphics.opengl.ext.OES_vertex_half_float.new","lime/graphics/opengl/ext/OES_vertex_half_float.hx",6,0xaf8f7019)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void OES_vertex_half_float_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_2b1d0dc1acb0da8b_6_new)
            	HX_STACK_THIS(this)
HXLINE(   6)
HXDLIN(   6)		this->HALF_FLOAT_OES = 36193;
            	}

Dynamic OES_vertex_half_float_obj::__CreateEmpty() { return new OES_vertex_half_float_obj; }

void *OES_vertex_half_float_obj::_hx_vtable = 0;

Dynamic OES_vertex_half_float_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OES_vertex_half_float_obj > _hx_result = new OES_vertex_half_float_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OES_vertex_half_float_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x54465a57;
}


OES_vertex_half_float_obj::OES_vertex_half_float_obj()
{
}

::hx::Val OES_vertex_half_float_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"HALF_FLOAT_OES") ) { return ::hx::Val( HALF_FLOAT_OES ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val OES_vertex_half_float_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"HALF_FLOAT_OES") ) { HALF_FLOAT_OES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OES_vertex_half_float_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("HALF_FLOAT_OES",2e,8a,e6,ab));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OES_vertex_half_float_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(OES_vertex_half_float_obj,HALF_FLOAT_OES),HX_("HALF_FLOAT_OES",2e,8a,e6,ab)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *OES_vertex_half_float_obj_sStaticStorageInfo = 0;
#endif

static ::String OES_vertex_half_float_obj_sMemberFields[] = {
	HX_("HALF_FLOAT_OES",2e,8a,e6,ab),
	::String(null()) };

::hx::Class OES_vertex_half_float_obj::__mClass;

void OES_vertex_half_float_obj::__register()
{
	OES_vertex_half_float_obj _hx_dummy;
	OES_vertex_half_float_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.OES_vertex_half_float",a7,13,01,7d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OES_vertex_half_float_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OES_vertex_half_float_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OES_vertex_half_float_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OES_vertex_half_float_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
