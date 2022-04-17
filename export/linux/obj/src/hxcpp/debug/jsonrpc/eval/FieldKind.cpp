#include <hxcpp.h>

#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_FieldKind
#include <hxcpp/debug/jsonrpc/eval/FieldKind.h>
#endif
namespace hxcpp{
namespace debug{
namespace jsonrpc{
namespace eval{

::hxcpp::debug::jsonrpc::eval::FieldKind FieldKind_obj::KFunction( ::Dynamic f)
{
	return ::hx::CreateEnum< FieldKind_obj >(HX_("KFunction",83,2a,be,ba),0,1)->_hx_init(0,f);
}

::hxcpp::debug::jsonrpc::eval::FieldKind FieldKind_obj::KVar( ::Dynamic v)
{
	return ::hx::CreateEnum< FieldKind_obj >(HX_("KVar",5c,97,d4,31),1,1)->_hx_init(0,v);
}

bool FieldKind_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("KFunction",83,2a,be,ba)) { outValue = FieldKind_obj::KFunction_dyn(); return true; }
	if (inName==HX_("KVar",5c,97,d4,31)) { outValue = FieldKind_obj::KVar_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FieldKind_obj)

int FieldKind_obj::__FindIndex(::String inName)
{
	if (inName==HX_("KFunction",83,2a,be,ba)) return 0;
	if (inName==HX_("KVar",5c,97,d4,31)) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FieldKind_obj,KFunction,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FieldKind_obj,KVar,return)

int FieldKind_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("KFunction",83,2a,be,ba)) return 1;
	if (inName==HX_("KVar",5c,97,d4,31)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val FieldKind_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("KFunction",83,2a,be,ba)) return KFunction_dyn();
	if (inName==HX_("KVar",5c,97,d4,31)) return KVar_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String FieldKind_obj_sStaticFields[] = {
	HX_("KFunction",83,2a,be,ba),
	HX_("KVar",5c,97,d4,31),
	::String(null())
};

::hx::Class FieldKind_obj::__mClass;

Dynamic __Create_FieldKind_obj() { return new FieldKind_obj; }

void FieldKind_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxcpp.debug.jsonrpc.eval.FieldKind",43,9d,7c,da), ::hx::TCanCast< FieldKind_obj >,FieldKind_obj_sStaticFields,0,
	&__Create_FieldKind_obj, &__Create,
	&super::__SGetClass(), &CreateFieldKind_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FieldKind_obj::__GetStatic;
}

void FieldKind_obj::__boot()
{
}


} // end namespace hxcpp
} // end namespace debug
} // end namespace jsonrpc
} // end namespace eval
