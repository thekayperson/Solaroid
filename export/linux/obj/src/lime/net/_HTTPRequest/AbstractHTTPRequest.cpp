#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeHTTPRequest
#include <lime/_internal/backend/native/NativeHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_net_HTTPRequestHeader
#include <lime/net/HTTPRequestHeader.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest
#include <lime/net/_HTTPRequest/AbstractHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bc0cf2bf735ddd18_49_new,"lime.net._HTTPRequest.AbstractHTTPRequest","new",0x2f7ffcbb,"lime.net._HTTPRequest.AbstractHTTPRequest.new","lime/net/HTTPRequest.hx",49,0x339db723)
HX_LOCAL_STACK_FRAME(_hx_pos_bc0cf2bf735ddd18_70_cancel,"lime.net._HTTPRequest.AbstractHTTPRequest","cancel",0x9e11abff,"lime.net._HTTPRequest.AbstractHTTPRequest.cancel","lime/net/HTTPRequest.hx",70,0x339db723)
HX_LOCAL_STACK_FRAME(_hx_pos_bc0cf2bf735ddd18_76_load,"lime.net._HTTPRequest.AbstractHTTPRequest","load",0x5f323d6b,"lime.net._HTTPRequest.AbstractHTTPRequest.load","lime/net/HTTPRequest.hx",76,0x339db723)
namespace lime{
namespace net{
namespace _HTTPRequest{

void AbstractHTTPRequest_obj::__construct(::String uri){
            	HX_GC_STACKFRAME(&_hx_pos_bc0cf2bf735ddd18_49_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(uri,"uri")
HXLINE(  49)
HXLINE(  50)		this->uri = uri;
HXLINE(  52)		this->contentType = HX_("application/x-www-form-urlencoded",9e,61,91,fa);
HXLINE(  53)		this->followRedirects = true;
HXLINE(  54)		this->enableResponseHeaders = false;
HXLINE(  55)		this->formData =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  56)		this->headers = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  57)		this->method = HX_("GET",76,1c,36,00);
HXLINE(  58)		this->timeout = 30000;
HXLINE(  59)		this->withCredentials = false;
HXLINE(  62)		this->_hx___backend =  ::lime::_internal::backend::native::NativeHTTPRequest_obj::__alloc( HX_CTX );
HXLINE(  63)		this->_hx___backend->init(::hx::ObjectPtr<OBJ_>(this));
            	}

Dynamic AbstractHTTPRequest_obj::__CreateEmpty() { return new AbstractHTTPRequest_obj; }

void *AbstractHTTPRequest_obj::_hx_vtable = 0;

Dynamic AbstractHTTPRequest_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AbstractHTTPRequest_obj > _hx_result = new AbstractHTTPRequest_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool AbstractHTTPRequest_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x09b24b15;
}

static ::lime::net::_IHTTPRequest_obj _hx_lime_net__HTTPRequest_AbstractHTTPRequest__hx_lime_net__IHTTPRequest= {
	( void (::hx::Object::*)())&::lime::net::_HTTPRequest::AbstractHTTPRequest_obj::cancel,
};

void *AbstractHTTPRequest_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x154a91b5: return &_hx_lime_net__HTTPRequest_AbstractHTTPRequest__hx_lime_net__IHTTPRequest;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void AbstractHTTPRequest_obj::cancel(){
            	HX_STACKFRAME(&_hx_pos_bc0cf2bf735ddd18_70_cancel)
            	HX_STACK_THIS(this)
HXLINE(  70)
HXDLIN(  70)		this->_hx___backend->cancel();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AbstractHTTPRequest_obj,cancel,(void))

 ::lime::app::Future AbstractHTTPRequest_obj::load(::String uri){
            	HX_STACKFRAME(&_hx_pos_bc0cf2bf735ddd18_76_load)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(uri,"uri")
HXLINE(  76)
HXDLIN(  76)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AbstractHTTPRequest_obj,load,return )


::hx::ObjectPtr< AbstractHTTPRequest_obj > AbstractHTTPRequest_obj::__new(::String uri) {
	::hx::ObjectPtr< AbstractHTTPRequest_obj > __this = new AbstractHTTPRequest_obj();
	__this->__construct(uri);
	return __this;
}

::hx::ObjectPtr< AbstractHTTPRequest_obj > AbstractHTTPRequest_obj::__alloc(::hx::Ctx *_hx_ctx,::String uri) {
	AbstractHTTPRequest_obj *__this = (AbstractHTTPRequest_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AbstractHTTPRequest_obj), true, "lime.net._HTTPRequest.AbstractHTTPRequest"));
	*(void **)__this = AbstractHTTPRequest_obj::_hx_vtable;
	__this->__construct(uri);
	return __this;
}

AbstractHTTPRequest_obj::AbstractHTTPRequest_obj()
{
}

void AbstractHTTPRequest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AbstractHTTPRequest);
	HX_MARK_MEMBER_NAME(contentType,"contentType");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(enableResponseHeaders,"enableResponseHeaders");
	HX_MARK_MEMBER_NAME(followRedirects,"followRedirects");
	HX_MARK_MEMBER_NAME(formData,"formData");
	HX_MARK_MEMBER_NAME(headers,"headers");
	HX_MARK_MEMBER_NAME(method,"method");
	HX_MARK_MEMBER_NAME(responseData,"responseData");
	HX_MARK_MEMBER_NAME(responseHeaders,"responseHeaders");
	HX_MARK_MEMBER_NAME(responseStatus,"responseStatus");
	HX_MARK_MEMBER_NAME(timeout,"timeout");
	HX_MARK_MEMBER_NAME(uri,"uri");
	HX_MARK_MEMBER_NAME(userAgent,"userAgent");
	HX_MARK_MEMBER_NAME(withCredentials,"withCredentials");
	HX_MARK_MEMBER_NAME(_hx___backend,"__backend");
	HX_MARK_END_CLASS();
}

void AbstractHTTPRequest_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(contentType,"contentType");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(enableResponseHeaders,"enableResponseHeaders");
	HX_VISIT_MEMBER_NAME(followRedirects,"followRedirects");
	HX_VISIT_MEMBER_NAME(formData,"formData");
	HX_VISIT_MEMBER_NAME(headers,"headers");
	HX_VISIT_MEMBER_NAME(method,"method");
	HX_VISIT_MEMBER_NAME(responseData,"responseData");
	HX_VISIT_MEMBER_NAME(responseHeaders,"responseHeaders");
	HX_VISIT_MEMBER_NAME(responseStatus,"responseStatus");
	HX_VISIT_MEMBER_NAME(timeout,"timeout");
	HX_VISIT_MEMBER_NAME(uri,"uri");
	HX_VISIT_MEMBER_NAME(userAgent,"userAgent");
	HX_VISIT_MEMBER_NAME(withCredentials,"withCredentials");
	HX_VISIT_MEMBER_NAME(_hx___backend,"__backend");
}

::hx::Val AbstractHTTPRequest_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"uri") ) { return ::hx::Val( uri ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { return ::hx::Val( method ); }
		if (HX_FIELD_EQ(inName,"cancel") ) { return ::hx::Val( cancel_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"headers") ) { return ::hx::Val( headers ); }
		if (HX_FIELD_EQ(inName,"timeout") ) { return ::hx::Val( timeout ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"formData") ) { return ::hx::Val( formData ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"userAgent") ) { return ::hx::Val( userAgent ); }
		if (HX_FIELD_EQ(inName,"__backend") ) { return ::hx::Val( _hx___backend ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"contentType") ) { return ::hx::Val( contentType ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"responseData") ) { return ::hx::Val( responseData ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"responseStatus") ) { return ::hx::Val( responseStatus ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"followRedirects") ) { return ::hx::Val( followRedirects ); }
		if (HX_FIELD_EQ(inName,"responseHeaders") ) { return ::hx::Val( responseHeaders ); }
		if (HX_FIELD_EQ(inName,"withCredentials") ) { return ::hx::Val( withCredentials ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"enableResponseHeaders") ) { return ::hx::Val( enableResponseHeaders ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AbstractHTTPRequest_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"uri") ) { uri=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { method=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"headers") ) { headers=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timeout") ) { timeout=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"formData") ) { formData=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"userAgent") ) { userAgent=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__backend") ) { _hx___backend=inValue.Cast<  ::lime::_internal::backend::native::NativeHTTPRequest >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"contentType") ) { contentType=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"responseData") ) { responseData=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"responseStatus") ) { responseStatus=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"followRedirects") ) { followRedirects=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"responseHeaders") ) { responseHeaders=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"withCredentials") ) { withCredentials=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"enableResponseHeaders") ) { enableResponseHeaders=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AbstractHTTPRequest_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("contentType",93,3c,7b,2a));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("enableResponseHeaders",82,32,47,05));
	outFields->push(HX_("followRedirects",26,5a,40,75));
	outFields->push(HX_("formData",8e,d5,80,56));
	outFields->push(HX_("headers",46,52,08,63));
	outFields->push(HX_("method",e1,f6,5a,09));
	outFields->push(HX_("responseData",4b,05,e9,c4));
	outFields->push(HX_("responseHeaders",c5,0d,ca,43));
	outFields->push(HX_("responseStatus",93,60,a4,78));
	outFields->push(HX_("timeout",a1,1a,f7,d8));
	outFields->push(HX_("uri",6c,2b,59,00));
	outFields->push(HX_("userAgent",7a,f0,12,c8));
	outFields->push(HX_("withCredentials",56,86,c4,ca));
	outFields->push(HX_("__backend",f4,0c,d6,7c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AbstractHTTPRequest_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(AbstractHTTPRequest_obj,contentType),HX_("contentType",93,3c,7b,2a)},
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(AbstractHTTPRequest_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsBool,(int)offsetof(AbstractHTTPRequest_obj,enableResponseHeaders),HX_("enableResponseHeaders",82,32,47,05)},
	{::hx::fsBool,(int)offsetof(AbstractHTTPRequest_obj,followRedirects),HX_("followRedirects",26,5a,40,75)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(AbstractHTTPRequest_obj,formData),HX_("formData",8e,d5,80,56)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(AbstractHTTPRequest_obj,headers),HX_("headers",46,52,08,63)},
	{::hx::fsString,(int)offsetof(AbstractHTTPRequest_obj,method),HX_("method",e1,f6,5a,09)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AbstractHTTPRequest_obj,responseData),HX_("responseData",4b,05,e9,c4)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(AbstractHTTPRequest_obj,responseHeaders),HX_("responseHeaders",c5,0d,ca,43)},
	{::hx::fsInt,(int)offsetof(AbstractHTTPRequest_obj,responseStatus),HX_("responseStatus",93,60,a4,78)},
	{::hx::fsInt,(int)offsetof(AbstractHTTPRequest_obj,timeout),HX_("timeout",a1,1a,f7,d8)},
	{::hx::fsString,(int)offsetof(AbstractHTTPRequest_obj,uri),HX_("uri",6c,2b,59,00)},
	{::hx::fsString,(int)offsetof(AbstractHTTPRequest_obj,userAgent),HX_("userAgent",7a,f0,12,c8)},
	{::hx::fsBool,(int)offsetof(AbstractHTTPRequest_obj,withCredentials),HX_("withCredentials",56,86,c4,ca)},
	{::hx::fsObject /*  ::lime::_internal::backend::native::NativeHTTPRequest */ ,(int)offsetof(AbstractHTTPRequest_obj,_hx___backend),HX_("__backend",f4,0c,d6,7c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AbstractHTTPRequest_obj_sStaticStorageInfo = 0;
#endif

static ::String AbstractHTTPRequest_obj_sMemberFields[] = {
	HX_("contentType",93,3c,7b,2a),
	HX_("data",2a,56,63,42),
	HX_("enableResponseHeaders",82,32,47,05),
	HX_("followRedirects",26,5a,40,75),
	HX_("formData",8e,d5,80,56),
	HX_("headers",46,52,08,63),
	HX_("method",e1,f6,5a,09),
	HX_("responseData",4b,05,e9,c4),
	HX_("responseHeaders",c5,0d,ca,43),
	HX_("responseStatus",93,60,a4,78),
	HX_("timeout",a1,1a,f7,d8),
	HX_("uri",6c,2b,59,00),
	HX_("userAgent",7a,f0,12,c8),
	HX_("withCredentials",56,86,c4,ca),
	HX_("__backend",f4,0c,d6,7c),
	HX_("cancel",7a,ed,33,b8),
	HX_("load",26,9a,b7,47),
	::String(null()) };

::hx::Class AbstractHTTPRequest_obj::__mClass;

void AbstractHTTPRequest_obj::__register()
{
	AbstractHTTPRequest_obj _hx_dummy;
	AbstractHTTPRequest_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.net._HTTPRequest.AbstractHTTPRequest",49,83,86,4f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AbstractHTTPRequest_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AbstractHTTPRequest_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AbstractHTTPRequest_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AbstractHTTPRequest_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace net
} // end namespace _HTTPRequest
