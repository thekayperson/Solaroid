#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_ApplicationEventInfo
#include <lime/_internal/backend/native/ApplicationEventInfo.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1a94701d58bd3d3e_612_new,"lime._internal.backend.native.ApplicationEventInfo","new",0xb35cdd3c,"lime._internal.backend.native.ApplicationEventInfo.new","lime/_internal/backend/native/NativeApplication.hx",612,0xc1eba895)
HX_LOCAL_STACK_FRAME(_hx_pos_1a94701d58bd3d3e_619_clone,"lime._internal.backend.native.ApplicationEventInfo","clone",0x996e0f39,"lime._internal.backend.native.ApplicationEventInfo.clone","lime/_internal/backend/native/NativeApplication.hx",619,0xc1eba895)
namespace lime{
namespace _internal{
namespace backend{
namespace native{

void ApplicationEventInfo_obj::__construct( ::Dynamic type,::hx::Null< int >  __o_deltaTime){
            		int deltaTime = __o_deltaTime.Default(0);
            	HX_STACKFRAME(&_hx_pos_1a94701d58bd3d3e_612_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(deltaTime,"deltaTime")
HXLINE( 612)
HXLINE( 613)		this->type = ( (int)(type) );
HXLINE( 614)		this->deltaTime = deltaTime;
            	}

Dynamic ApplicationEventInfo_obj::__CreateEmpty() { return new ApplicationEventInfo_obj; }

void *ApplicationEventInfo_obj::_hx_vtable = 0;

Dynamic ApplicationEventInfo_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ApplicationEventInfo_obj > _hx_result = new ApplicationEventInfo_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ApplicationEventInfo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3afc4820;
}

 ::lime::_internal::backend::native::ApplicationEventInfo ApplicationEventInfo_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_1a94701d58bd3d3e_619_clone)
            	HX_STACK_THIS(this)
HXLINE( 619)
HXDLIN( 619)		return  ::lime::_internal::backend::native::ApplicationEventInfo_obj::__alloc( HX_CTX ,this->type,this->deltaTime);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ApplicationEventInfo_obj,clone,return )


ApplicationEventInfo_obj::ApplicationEventInfo_obj()
{
}

::hx::Val ApplicationEventInfo_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"deltaTime") ) { return ::hx::Val( deltaTime ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ApplicationEventInfo_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"deltaTime") ) { deltaTime=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ApplicationEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("deltaTime",25,3c,5c,f5));
	outFields->push(HX_("type",ba,f2,08,4d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ApplicationEventInfo_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ApplicationEventInfo_obj,deltaTime),HX_("deltaTime",25,3c,5c,f5)},
	{::hx::fsInt,(int)offsetof(ApplicationEventInfo_obj,type),HX_("type",ba,f2,08,4d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ApplicationEventInfo_obj_sStaticStorageInfo = 0;
#endif

static ::String ApplicationEventInfo_obj_sMemberFields[] = {
	HX_("deltaTime",25,3c,5c,f5),
	HX_("type",ba,f2,08,4d),
	HX_("clone",5d,13,63,48),
	::String(null()) };

::hx::Class ApplicationEventInfo_obj::__mClass;

void ApplicationEventInfo_obj::__register()
{
	ApplicationEventInfo_obj _hx_dummy;
	ApplicationEventInfo_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime._internal.backend.native.ApplicationEventInfo",4a,cf,e6,1b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ApplicationEventInfo_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ApplicationEventInfo_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ApplicationEventInfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ApplicationEventInfo_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native
