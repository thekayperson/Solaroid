#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_FieldKind
#define INCLUDED_hxcpp_debug_jsonrpc_eval_FieldKind

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(hxcpp,debug,jsonrpc,eval,FieldKind)
namespace hxcpp{
namespace debug{
namespace jsonrpc{
namespace eval{


class FieldKind_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FieldKind_obj OBJ_;

	public:
		FieldKind_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxcpp.debug.jsonrpc.eval.FieldKind",43,9d,7c,da); }
		::String __ToString() const { return HX_("FieldKind.",60,c5,ce,a5) + _hx_tag; }

		static ::hxcpp::debug::jsonrpc::eval::FieldKind KFunction( ::Dynamic f);
		static ::Dynamic KFunction_dyn();
		static ::hxcpp::debug::jsonrpc::eval::FieldKind KVar( ::Dynamic v);
		static ::Dynamic KVar_dyn();
};

} // end namespace hxcpp
} // end namespace debug
} // end namespace jsonrpc
} // end namespace eval

#endif /* INCLUDED_hxcpp_debug_jsonrpc_eval_FieldKind */ 
