#include <hxcpp.h>

#ifndef INCLUDED_hxcpp_debug_jsonrpc__Protocol_RequestMethod_Impl_
#include <hxcpp/debug/jsonrpc/_Protocol/RequestMethod_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_1bcc3766a8495ee3_4__new,"hxcpp.debug.jsonrpc._Protocol.RequestMethod_Impl_","_new",0x951b4cfd,"hxcpp.debug.jsonrpc._Protocol.RequestMethod_Impl_._new","hxcpp/debug/jsonrpc/Protocol.hx",4,0x32d5b37c)
namespace hxcpp{
namespace debug{
namespace jsonrpc{
namespace _Protocol{

void RequestMethod_Impl__obj::__construct() { }

Dynamic RequestMethod_Impl__obj::__CreateEmpty() { return new RequestMethod_Impl__obj; }

void *RequestMethod_Impl__obj::_hx_vtable = 0;

Dynamic RequestMethod_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RequestMethod_Impl__obj > _hx_result = new RequestMethod_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool RequestMethod_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x55b41136;
}

::String RequestMethod_Impl__obj::_new(::String method){
            	HX_STACKFRAME(&_hx_pos_1bcc3766a8495ee3_4__new)
            	HX_STACK_ARG(method,"method")
HXLINE(   4)
HXDLIN(   4)		HX_VARI( ::String,this1) = method;
HXDLIN(   4)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RequestMethod_Impl__obj,_new,return )


RequestMethod_Impl__obj::RequestMethod_Impl__obj()
{
}

bool RequestMethod_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *RequestMethod_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *RequestMethod_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class RequestMethod_Impl__obj::__mClass;

static ::String RequestMethod_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	::String(null())
};

void RequestMethod_Impl__obj::__register()
{
	RequestMethod_Impl__obj _hx_dummy;
	RequestMethod_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxcpp.debug.jsonrpc._Protocol.RequestMethod_Impl_",52,4e,fb,f7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &RequestMethod_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(RequestMethod_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< RequestMethod_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RequestMethod_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RequestMethod_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxcpp
} // end namespace debug
} // end namespace jsonrpc
} // end namespace _Protocol
