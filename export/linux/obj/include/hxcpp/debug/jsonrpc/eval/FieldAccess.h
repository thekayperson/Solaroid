#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_FieldAccess
#define INCLUDED_hxcpp_debug_jsonrpc_eval_FieldAccess

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(hxcpp,debug,jsonrpc,eval,FieldAccess)
namespace hxcpp{
namespace debug{
namespace jsonrpc{
namespace eval{


class FieldAccess_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FieldAccess_obj OBJ_;

	public:
		FieldAccess_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxcpp.debug.jsonrpc.eval.FieldAccess",53,6b,93,6d); }
		::String __ToString() const { return HX_("FieldAccess.",90,a4,8d,70) + _hx_tag; }

		static ::hxcpp::debug::jsonrpc::eval::FieldAccess AInline;
		static inline ::hxcpp::debug::jsonrpc::eval::FieldAccess AInline_dyn() { return AInline; }
		static ::hxcpp::debug::jsonrpc::eval::FieldAccess AMacro;
		static inline ::hxcpp::debug::jsonrpc::eval::FieldAccess AMacro_dyn() { return AMacro; }
		static ::hxcpp::debug::jsonrpc::eval::FieldAccess AOverride;
		static inline ::hxcpp::debug::jsonrpc::eval::FieldAccess AOverride_dyn() { return AOverride; }
		static ::hxcpp::debug::jsonrpc::eval::FieldAccess APrivate;
		static inline ::hxcpp::debug::jsonrpc::eval::FieldAccess APrivate_dyn() { return APrivate; }
		static ::hxcpp::debug::jsonrpc::eval::FieldAccess APublic;
		static inline ::hxcpp::debug::jsonrpc::eval::FieldAccess APublic_dyn() { return APublic; }
		static ::hxcpp::debug::jsonrpc::eval::FieldAccess AStatic;
		static inline ::hxcpp::debug::jsonrpc::eval::FieldAccess AStatic_dyn() { return AStatic; }
};

} // end namespace hxcpp
} // end namespace debug
} // end namespace jsonrpc
} // end namespace eval

#endif /* INCLUDED_hxcpp_debug_jsonrpc_eval_FieldAccess */ 
