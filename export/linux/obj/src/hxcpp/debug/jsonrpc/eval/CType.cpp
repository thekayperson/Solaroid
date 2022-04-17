#include <hxcpp.h>

#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_CType
#include <hxcpp/debug/jsonrpc/eval/CType.h>
#endif
namespace hxcpp{
namespace debug{
namespace jsonrpc{
namespace eval{

::hxcpp::debug::jsonrpc::eval::CType CType_obj::CTAnon(::Array< ::Dynamic> fields)
{
	return ::hx::CreateEnum< CType_obj >(HX_("CTAnon",9d,9e,dc,52),2,1)->_hx_init(0,fields);
}

::hxcpp::debug::jsonrpc::eval::CType CType_obj::CTFun(::Array< ::Dynamic> args, ::hxcpp::debug::jsonrpc::eval::CType ret)
{
	return ::hx::CreateEnum< CType_obj >(HX_("CTFun",0e,4e,94,cb),1,2)->_hx_init(0,args)->_hx_init(1,ret);
}

::hxcpp::debug::jsonrpc::eval::CType CType_obj::CTNamed(::String n, ::hxcpp::debug::jsonrpc::eval::CType t)
{
	return ::hx::CreateEnum< CType_obj >(HX_("CTNamed",48,63,ca,a1),5,2)->_hx_init(0,n)->_hx_init(1,t);
}

::hxcpp::debug::jsonrpc::eval::CType CType_obj::CTOpt( ::hxcpp::debug::jsonrpc::eval::CType t)
{
	return ::hx::CreateEnum< CType_obj >(HX_("CTOpt",02,1e,9b,cb),4,1)->_hx_init(0,t);
}

::hxcpp::debug::jsonrpc::eval::CType CType_obj::CTParent( ::hxcpp::debug::jsonrpc::eval::CType t)
{
	return ::hx::CreateEnum< CType_obj >(HX_("CTParent",bb,4e,51,bf),3,1)->_hx_init(0,t);
}

::hxcpp::debug::jsonrpc::eval::CType CType_obj::CTPath(::Array< ::String > path,::Array< ::Dynamic> params)
{
	return ::hx::CreateEnum< CType_obj >(HX_("CTPath",f6,f8,bc,5c),0,2)->_hx_init(0,path)->_hx_init(1,params);
}

bool CType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CTAnon",9d,9e,dc,52)) { outValue = CType_obj::CTAnon_dyn(); return true; }
	if (inName==HX_("CTFun",0e,4e,94,cb)) { outValue = CType_obj::CTFun_dyn(); return true; }
	if (inName==HX_("CTNamed",48,63,ca,a1)) { outValue = CType_obj::CTNamed_dyn(); return true; }
	if (inName==HX_("CTOpt",02,1e,9b,cb)) { outValue = CType_obj::CTOpt_dyn(); return true; }
	if (inName==HX_("CTParent",bb,4e,51,bf)) { outValue = CType_obj::CTParent_dyn(); return true; }
	if (inName==HX_("CTPath",f6,f8,bc,5c)) { outValue = CType_obj::CTPath_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(CType_obj)

int CType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("CTAnon",9d,9e,dc,52)) return 2;
	if (inName==HX_("CTFun",0e,4e,94,cb)) return 1;
	if (inName==HX_("CTNamed",48,63,ca,a1)) return 5;
	if (inName==HX_("CTOpt",02,1e,9b,cb)) return 4;
	if (inName==HX_("CTParent",bb,4e,51,bf)) return 3;
	if (inName==HX_("CTPath",f6,f8,bc,5c)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(CType_obj,CTAnon,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(CType_obj,CTFun,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(CType_obj,CTNamed,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(CType_obj,CTOpt,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(CType_obj,CTParent,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(CType_obj,CTPath,return)

int CType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("CTAnon",9d,9e,dc,52)) return 1;
	if (inName==HX_("CTFun",0e,4e,94,cb)) return 2;
	if (inName==HX_("CTNamed",48,63,ca,a1)) return 2;
	if (inName==HX_("CTOpt",02,1e,9b,cb)) return 1;
	if (inName==HX_("CTParent",bb,4e,51,bf)) return 1;
	if (inName==HX_("CTPath",f6,f8,bc,5c)) return 2;
	return super::__FindArgCount(inName);
}

::hx::Val CType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CTAnon",9d,9e,dc,52)) return CTAnon_dyn();
	if (inName==HX_("CTFun",0e,4e,94,cb)) return CTFun_dyn();
	if (inName==HX_("CTNamed",48,63,ca,a1)) return CTNamed_dyn();
	if (inName==HX_("CTOpt",02,1e,9b,cb)) return CTOpt_dyn();
	if (inName==HX_("CTParent",bb,4e,51,bf)) return CTParent_dyn();
	if (inName==HX_("CTPath",f6,f8,bc,5c)) return CTPath_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String CType_obj_sStaticFields[] = {
	HX_("CTPath",f6,f8,bc,5c),
	HX_("CTFun",0e,4e,94,cb),
	HX_("CTAnon",9d,9e,dc,52),
	HX_("CTParent",bb,4e,51,bf),
	HX_("CTOpt",02,1e,9b,cb),
	HX_("CTNamed",48,63,ca,a1),
	::String(null())
};

::hx::Class CType_obj::__mClass;

Dynamic __Create_CType_obj() { return new CType_obj; }

void CType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxcpp.debug.jsonrpc.eval.CType",52,b4,5d,21), ::hx::TCanCast< CType_obj >,CType_obj_sStaticFields,0,
	&__Create_CType_obj, &__Create,
	&super::__SGetClass(), &CreateCType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &CType_obj::__GetStatic;
}

void CType_obj::__boot()
{
}


} // end namespace hxcpp
} // end namespace debug
} // end namespace jsonrpc
} // end namespace eval
