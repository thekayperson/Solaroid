#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_net_curl_CURL
#include <lime/net/curl/CURL.h>
#endif
#ifndef INCLUDED_lime_net_curl_CURLMulti
#include <lime/net/curl/CURLMulti.h>
#endif
#ifndef INCLUDED_lime_net_curl_CURLMultiMessage
#include <lime/net/curl/CURLMultiMessage.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fb515ac759b1a1a7_25_new,"lime.net.curl.CURLMulti","new",0x3a305607,"lime.net.curl.CURLMulti.new","lime/net/curl/CURLMulti.hx",25,0x8b7d3e08)
HX_LOCAL_STACK_FRAME(_hx_pos_fb515ac759b1a1a7_44_addHandle,"lime.net.curl.CURLMulti","addHandle",0x3e307590,"lime.net.curl.CURLMulti.addHandle","lime/net/curl/CURLMulti.hx",44,0x8b7d3e08)
HX_LOCAL_STACK_FRAME(_hx_pos_fb515ac759b1a1a7_51_infoRead,"lime.net.curl.CURLMulti","infoRead",0x01861bdd,"lime.net.curl.CURLMulti.infoRead","lime/net/curl/CURLMulti.hx",51,0x8b7d3e08)
HX_LOCAL_STACK_FRAME(_hx_pos_fb515ac759b1a1a7_67_perform,"lime.net.curl.CURLMulti","perform",0x45cbcdc8,"lime.net.curl.CURLMulti.perform","lime/net/curl/CURLMulti.hx",67,0x8b7d3e08)
HX_LOCAL_STACK_FRAME(_hx_pos_fb515ac759b1a1a7_76_removeHandle,"lime.net.curl.CURLMulti","removeHandle",0xf2aa2c85,"lime.net.curl.CURLMulti.removeHandle","lime/net/curl/CURLMulti.hx",76,0x8b7d3e08)
HX_LOCAL_STACK_FRAME(_hx_pos_fb515ac759b1a1a7_85_setOption,"lime.net.curl.CURLMulti","setOption",0x5931059e,"lime.net.curl.CURLMulti.setOption","lime/net/curl/CURLMulti.hx",85,0x8b7d3e08)
HX_LOCAL_STACK_FRAME(_hx_pos_fb515ac759b1a1a7_94_wait,"lime.net.curl.CURLMulti","wait",0xb60ac6ee,"lime.net.curl.CURLMulti.wait","lime/net/curl/CURLMulti.hx",94,0x8b7d3e08)
HX_LOCAL_STACK_FRAME(_hx_pos_fb515ac759b1a1a7_104_get_runningHandles,"lime.net.curl.CURLMulti","get_runningHandles",0x99ba868e,"lime.net.curl.CURLMulti.get_runningHandles","lime/net/curl/CURLMulti.hx",104,0x8b7d3e08)
namespace lime{
namespace net{
namespace curl{

void CURLMulti_obj::__construct( ::Dynamic handle){
            	HX_STACKFRAME(&_hx_pos_fb515ac759b1a1a7_25_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(handle,"handle")
HXLINE(  25)
HXDLIN(  25)		if (::hx::IsNotNull( handle )) {
HXLINE(  27)			this->handle = handle;
            		}
            		else {
HXLINE(  32)			this->handle = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_multi_init()) );
            		}
            	}

Dynamic CURLMulti_obj::__CreateEmpty() { return new CURLMulti_obj; }

void *CURLMulti_obj::_hx_vtable = 0;

Dynamic CURLMulti_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CURLMulti_obj > _hx_result = new CURLMulti_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CURLMulti_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2bc8aa59;
}

int CURLMulti_obj::addHandle( ::lime::net::curl::CURL curl){
            	HX_STACKFRAME(&_hx_pos_fb515ac759b1a1a7_44_addHandle)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(curl,"curl")
HXLINE(  44)
HXDLIN(  44)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_multi_add_handle(::hx::DynamicPtr(this->handle),::hx::DynamicPtr(curl),::hx::DynamicPtr(curl->handle));
            	}


HX_DEFINE_DYNAMIC_FUNC1(CURLMulti_obj,addHandle,return )

 ::lime::net::curl::CURLMultiMessage CURLMulti_obj::infoRead(){
            	HX_GC_STACKFRAME(&_hx_pos_fb515ac759b1a1a7_51_infoRead)
            	HX_STACK_THIS(this)
HXLINE(  51)
HXLINE(  53)		HX_VARI(  ::Dynamic,msg) = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_multi_info_read(::hx::DynamicPtr(this->handle))) );
HXLINE(  55)		if (::hx::IsNotNull( msg )) {
HXLINE(  57)			return  ::lime::net::curl::CURLMultiMessage_obj::__alloc( HX_CTX ,( ( ::lime::net::curl::CURL)(msg->__Field(HX_("curl",ec,4a,c9,41),::hx::paccDynamic)) ),( (int)(msg->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic)) ));
            		}
HXLINE(  61)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(CURLMulti_obj,infoRead,return )

int CURLMulti_obj::perform(){
            	HX_STACKFRAME(&_hx_pos_fb515ac759b1a1a7_67_perform)
            	HX_STACK_THIS(this)
HXLINE(  67)
HXDLIN(  67)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_multi_perform(::hx::DynamicPtr(this->handle));
            	}


HX_DEFINE_DYNAMIC_FUNC0(CURLMulti_obj,perform,return )

int CURLMulti_obj::removeHandle( ::lime::net::curl::CURL curl){
            	HX_STACKFRAME(&_hx_pos_fb515ac759b1a1a7_76_removeHandle)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(curl,"curl")
HXLINE(  76)
HXDLIN(  76)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_multi_remove_handle(::hx::DynamicPtr(this->handle),::hx::DynamicPtr(curl->handle));
            	}


HX_DEFINE_DYNAMIC_FUNC1(CURLMulti_obj,removeHandle,return )

int CURLMulti_obj::setOption(int option, ::Dynamic parameter){
            	HX_STACKFRAME(&_hx_pos_fb515ac759b1a1a7_85_setOption)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(option,"option")
            	HX_STACK_ARG(parameter,"parameter")
HXLINE(  85)
HXDLIN(  85)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_multi_setopt(::hx::DynamicPtr(this->handle),option,::hx::DynamicPtr(parameter));
            	}


HX_DEFINE_DYNAMIC_FUNC2(CURLMulti_obj,setOption,return )

int CURLMulti_obj::wait(int timeoutMS){
            	HX_STACKFRAME(&_hx_pos_fb515ac759b1a1a7_94_wait)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(timeoutMS,"timeoutMS")
HXLINE(  94)
HXDLIN(  94)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_multi_wait(::hx::DynamicPtr(this->handle),timeoutMS);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CURLMulti_obj,wait,return )

int CURLMulti_obj::get_runningHandles(){
            	HX_STACKFRAME(&_hx_pos_fb515ac759b1a1a7_104_get_runningHandles)
            	HX_STACK_THIS(this)
HXLINE( 104)
HXDLIN( 104)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_curl_multi_get_running_handles(::hx::DynamicPtr(this->handle));
            	}


HX_DEFINE_DYNAMIC_FUNC0(CURLMulti_obj,get_runningHandles,return )


::hx::ObjectPtr< CURLMulti_obj > CURLMulti_obj::__new( ::Dynamic handle) {
	::hx::ObjectPtr< CURLMulti_obj > __this = new CURLMulti_obj();
	__this->__construct(handle);
	return __this;
}

::hx::ObjectPtr< CURLMulti_obj > CURLMulti_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic handle) {
	CURLMulti_obj *__this = (CURLMulti_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CURLMulti_obj), true, "lime.net.curl.CURLMulti"));
	*(void **)__this = CURLMulti_obj::_hx_vtable;
	__this->__construct(handle);
	return __this;
}

CURLMulti_obj::CURLMulti_obj()
{
}

void CURLMulti_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CURLMulti);
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_END_CLASS();
}

void CURLMulti_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handle,"handle");
}

::hx::Val CURLMulti_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"wait") ) { return ::hx::Val( wait_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return ::hx::Val( handle ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"perform") ) { return ::hx::Val( perform_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"infoRead") ) { return ::hx::Val( infoRead_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addHandle") ) { return ::hx::Val( addHandle_dyn() ); }
		if (HX_FIELD_EQ(inName,"setOption") ) { return ::hx::Val( setOption_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"removeHandle") ) { return ::hx::Val( removeHandle_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"runningHandles") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_runningHandles() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_runningHandles") ) { return ::hx::Val( get_runningHandles_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CURLMulti_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CURLMulti_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("runningHandles",8c,b7,b4,ca));
	outFields->push(HX_("handle",a8,83,fd,b7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CURLMulti_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(CURLMulti_obj,handle),HX_("handle",a8,83,fd,b7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CURLMulti_obj_sStaticStorageInfo = 0;
#endif

static ::String CURLMulti_obj_sMemberFields[] = {
	HX_("handle",a8,83,fd,b7),
	HX_("addHandle",a9,b8,21,70),
	HX_("infoRead",e4,7e,4b,3c),
	HX_("perform",a1,e8,dd,7a),
	HX_("removeHandle",0c,1f,2b,27),
	HX_("setOption",b7,48,22,8b),
	HX_("wait",75,5a,f2,4e),
	HX_("get_runningHandles",55,98,4e,66),
	::String(null()) };

::hx::Class CURLMulti_obj::__mClass;

void CURLMulti_obj::__register()
{
	CURLMulti_obj _hx_dummy;
	CURLMulti_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.net.curl.CURLMulti",95,46,a5,0d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CURLMulti_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CURLMulti_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CURLMulti_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CURLMulti_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace net
} // end namespace curl
