#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_NV_fence
#include <lime/graphics/opengl/ext/NV_fence.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9db5615dca29a616_4_new,"lime.graphics.opengl.ext.NV_fence","new",0xb5233fce,"lime.graphics.opengl.ext.NV_fence.new","lime/graphics/opengl/ext/NV_fence.hx",4,0x47c92a00)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void NV_fence_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_9db5615dca29a616_4_new)
            	HX_STACK_THIS(this)
HXLINE(   4)
HXLINE(   8)		this->FENCE_CONDITION_NV = 34036;
HXLINE(   7)		this->FENCE_STATUS_NV = 34035;
HXLINE(   6)		this->ALL_COMPLETED_NV = 34034;
            	}

Dynamic NV_fence_obj::__CreateEmpty() { return new NV_fence_obj; }

void *NV_fence_obj::_hx_vtable = 0;

Dynamic NV_fence_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NV_fence_obj > _hx_result = new NV_fence_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NV_fence_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0efaec48;
}


NV_fence_obj::NV_fence_obj()
{
}

::hx::Val NV_fence_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"FENCE_STATUS_NV") ) { return ::hx::Val( FENCE_STATUS_NV ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ALL_COMPLETED_NV") ) { return ::hx::Val( ALL_COMPLETED_NV ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"FENCE_CONDITION_NV") ) { return ::hx::Val( FENCE_CONDITION_NV ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val NV_fence_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"FENCE_STATUS_NV") ) { FENCE_STATUS_NV=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ALL_COMPLETED_NV") ) { ALL_COMPLETED_NV=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"FENCE_CONDITION_NV") ) { FENCE_CONDITION_NV=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NV_fence_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("ALL_COMPLETED_NV",1a,ef,82,e5));
	outFields->push(HX_("FENCE_STATUS_NV",07,cc,ce,38));
	outFields->push(HX_("FENCE_CONDITION_NV",7a,2d,3f,ca));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NV_fence_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(NV_fence_obj,ALL_COMPLETED_NV),HX_("ALL_COMPLETED_NV",1a,ef,82,e5)},
	{::hx::fsInt,(int)offsetof(NV_fence_obj,FENCE_STATUS_NV),HX_("FENCE_STATUS_NV",07,cc,ce,38)},
	{::hx::fsInt,(int)offsetof(NV_fence_obj,FENCE_CONDITION_NV),HX_("FENCE_CONDITION_NV",7a,2d,3f,ca)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *NV_fence_obj_sStaticStorageInfo = 0;
#endif

static ::String NV_fence_obj_sMemberFields[] = {
	HX_("ALL_COMPLETED_NV",1a,ef,82,e5),
	HX_("FENCE_STATUS_NV",07,cc,ce,38),
	HX_("FENCE_CONDITION_NV",7a,2d,3f,ca),
	::String(null()) };

::hx::Class NV_fence_obj::__mClass;

void NV_fence_obj::__register()
{
	NV_fence_obj _hx_dummy;
	NV_fence_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.NV_fence",dc,00,40,ca);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NV_fence_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NV_fence_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NV_fence_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NV_fence_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
