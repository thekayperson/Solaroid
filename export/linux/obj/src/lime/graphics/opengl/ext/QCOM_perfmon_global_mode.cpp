#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_perfmon_global_mode
#include <lime/graphics/opengl/ext/QCOM_perfmon_global_mode.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8723c151069cfd66_6_new,"lime.graphics.opengl.ext.QCOM_perfmon_global_mode","new",0x76e54308,"lime.graphics.opengl.ext.QCOM_perfmon_global_mode.new","lime/graphics/opengl/ext/QCOM_perfmon_global_mode.hx",6,0x1f188806)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void QCOM_perfmon_global_mode_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_8723c151069cfd66_6_new)
            	HX_STACK_THIS(this)
HXLINE(   6)
HXDLIN(   6)		this->PERFMON_GLOBAL_MODE_QCOM = 36768;
            	}

Dynamic QCOM_perfmon_global_mode_obj::__CreateEmpty() { return new QCOM_perfmon_global_mode_obj; }

void *QCOM_perfmon_global_mode_obj::_hx_vtable = 0;

Dynamic QCOM_perfmon_global_mode_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< QCOM_perfmon_global_mode_obj > _hx_result = new QCOM_perfmon_global_mode_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool QCOM_perfmon_global_mode_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x74dd6666;
}


QCOM_perfmon_global_mode_obj::QCOM_perfmon_global_mode_obj()
{
}

::hx::Val QCOM_perfmon_global_mode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 24:
		if (HX_FIELD_EQ(inName,"PERFMON_GLOBAL_MODE_QCOM") ) { return ::hx::Val( PERFMON_GLOBAL_MODE_QCOM ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val QCOM_perfmon_global_mode_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 24:
		if (HX_FIELD_EQ(inName,"PERFMON_GLOBAL_MODE_QCOM") ) { PERFMON_GLOBAL_MODE_QCOM=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void QCOM_perfmon_global_mode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("PERFMON_GLOBAL_MODE_QCOM",8c,4a,a5,e0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo QCOM_perfmon_global_mode_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(QCOM_perfmon_global_mode_obj,PERFMON_GLOBAL_MODE_QCOM),HX_("PERFMON_GLOBAL_MODE_QCOM",8c,4a,a5,e0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *QCOM_perfmon_global_mode_obj_sStaticStorageInfo = 0;
#endif

static ::String QCOM_perfmon_global_mode_obj_sMemberFields[] = {
	HX_("PERFMON_GLOBAL_MODE_QCOM",8c,4a,a5,e0),
	::String(null()) };

::hx::Class QCOM_perfmon_global_mode_obj::__mClass;

void QCOM_perfmon_global_mode_obj::__register()
{
	QCOM_perfmon_global_mode_obj _hx_dummy;
	QCOM_perfmon_global_mode_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.QCOM_perfmon_global_mode",16,5f,bd,79);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(QCOM_perfmon_global_mode_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< QCOM_perfmon_global_mode_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = QCOM_perfmon_global_mode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = QCOM_perfmon_global_mode_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
