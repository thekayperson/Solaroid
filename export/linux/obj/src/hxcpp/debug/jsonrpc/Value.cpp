#include <hxcpp.h>

#ifndef INCLUDED_hxcpp_debug_jsonrpc_Value
#include <hxcpp/debug/jsonrpc/Value.h>
#endif
namespace hxcpp{
namespace debug{
namespace jsonrpc{

::hxcpp::debug::jsonrpc::Value Value_obj::IntIndexed( ::Dynamic val,int length, ::Dynamic fieldAccess)
{
	return ::hx::CreateEnum< Value_obj >(HX_("IntIndexed",e2,86,e3,11),1,3)->_hx_init(0,val)->_hx_init(1,length)->_hx_init(2,fieldAccess);
}

::hxcpp::debug::jsonrpc::Value Value_obj::NameValueList(::Array< ::String > names,::cpp::VirtualArray values)
{
	return ::hx::CreateEnum< Value_obj >(HX_("NameValueList",84,70,4e,1c),3,2)->_hx_init(0,names)->_hx_init(1,values);
}

::hxcpp::debug::jsonrpc::Value Value_obj::Single( ::Dynamic val)
{
	return ::hx::CreateEnum< Value_obj >(HX_("Single",a8,da,b5,ed),0,1)->_hx_init(0,val);
}

::hxcpp::debug::jsonrpc::Value Value_obj::StringIndexed( ::Dynamic val,::String printedValue,::Array< ::String > names,bool fieldsAsString, ::Dynamic fieldAccess)
{
	return ::hx::CreateEnum< Value_obj >(HX_("StringIndexed",00,d7,d4,fe),2,5)->_hx_init(0,val)->_hx_init(1,printedValue)->_hx_init(2,names)->_hx_init(3,fieldsAsString)->_hx_init(4,fieldAccess);
}

bool Value_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("IntIndexed",e2,86,e3,11)) { outValue = Value_obj::IntIndexed_dyn(); return true; }
	if (inName==HX_("NameValueList",84,70,4e,1c)) { outValue = Value_obj::NameValueList_dyn(); return true; }
	if (inName==HX_("Single",a8,da,b5,ed)) { outValue = Value_obj::Single_dyn(); return true; }
	if (inName==HX_("StringIndexed",00,d7,d4,fe)) { outValue = Value_obj::StringIndexed_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Value_obj)

int Value_obj::__FindIndex(::String inName)
{
	if (inName==HX_("IntIndexed",e2,86,e3,11)) return 1;
	if (inName==HX_("NameValueList",84,70,4e,1c)) return 3;
	if (inName==HX_("Single",a8,da,b5,ed)) return 0;
	if (inName==HX_("StringIndexed",00,d7,d4,fe)) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC3(Value_obj,IntIndexed,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Value_obj,NameValueList,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Value_obj,Single,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC5(Value_obj,StringIndexed,return)

int Value_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("IntIndexed",e2,86,e3,11)) return 3;
	if (inName==HX_("NameValueList",84,70,4e,1c)) return 2;
	if (inName==HX_("Single",a8,da,b5,ed)) return 1;
	if (inName==HX_("StringIndexed",00,d7,d4,fe)) return 5;
	return super::__FindArgCount(inName);
}

::hx::Val Value_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("IntIndexed",e2,86,e3,11)) return IntIndexed_dyn();
	if (inName==HX_("NameValueList",84,70,4e,1c)) return NameValueList_dyn();
	if (inName==HX_("Single",a8,da,b5,ed)) return Single_dyn();
	if (inName==HX_("StringIndexed",00,d7,d4,fe)) return StringIndexed_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String Value_obj_sStaticFields[] = {
	HX_("Single",a8,da,b5,ed),
	HX_("IntIndexed",e2,86,e3,11),
	HX_("StringIndexed",00,d7,d4,fe),
	HX_("NameValueList",84,70,4e,1c),
	::String(null())
};

::hx::Class Value_obj::__mClass;

Dynamic __Create_Value_obj() { return new Value_obj; }

void Value_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxcpp.debug.jsonrpc.Value",aa,96,86,6e), ::hx::TCanCast< Value_obj >,Value_obj_sStaticFields,0,
	&__Create_Value_obj, &__Create,
	&super::__SGetClass(), &CreateValue_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Value_obj::__GetStatic;
}

void Value_obj::__boot()
{
}


} // end namespace hxcpp
} // end namespace debug
} // end namespace jsonrpc
