#include <hxcpp.h>

#ifndef INCLUDED_hxcpp_debug_jsonrpc__Protocol_NotificationMethod_Impl_
#include <hxcpp/debug/jsonrpc/_Protocol/NotificationMethod_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_8807478192b76c39_9__new,"hxcpp.debug.jsonrpc._Protocol.NotificationMethod_Impl_","_new",0xe421cbe5,"hxcpp.debug.jsonrpc._Protocol.NotificationMethod_Impl_._new","hxcpp/debug/jsonrpc/Protocol.hx",9,0x32d5b37c)
namespace hxcpp{
namespace debug{
namespace jsonrpc{
namespace _Protocol{

void NotificationMethod_Impl__obj::__construct() { }

Dynamic NotificationMethod_Impl__obj::__CreateEmpty() { return new NotificationMethod_Impl__obj; }

void *NotificationMethod_Impl__obj::_hx_vtable = 0;

Dynamic NotificationMethod_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NotificationMethod_Impl__obj > _hx_result = new NotificationMethod_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NotificationMethod_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x555a996a;
}

::String NotificationMethod_Impl__obj::_new(::String method){
            	HX_STACKFRAME(&_hx_pos_8807478192b76c39_9__new)
            	HX_STACK_ARG(method,"method")
HXLINE(   9)
HXDLIN(   9)		HX_VARI( ::String,this1) = method;
HXDLIN(   9)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NotificationMethod_Impl__obj,_new,return )


NotificationMethod_Impl__obj::NotificationMethod_Impl__obj()
{
}

bool NotificationMethod_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *NotificationMethod_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *NotificationMethod_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class NotificationMethod_Impl__obj::__mClass;

static ::String NotificationMethod_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	::String(null())
};

void NotificationMethod_Impl__obj::__register()
{
	NotificationMethod_Impl__obj _hx_dummy;
	NotificationMethod_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxcpp.debug.jsonrpc._Protocol.NotificationMethod_Impl_",6a,38,55,41);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NotificationMethod_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NotificationMethod_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< NotificationMethod_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NotificationMethod_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NotificationMethod_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxcpp
} // end namespace debug
} // end namespace jsonrpc
} // end namespace _Protocol
