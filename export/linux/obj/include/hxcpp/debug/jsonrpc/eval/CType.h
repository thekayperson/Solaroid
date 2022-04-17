#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_CType
#define INCLUDED_hxcpp_debug_jsonrpc_eval_CType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(hxcpp,debug,jsonrpc,eval,CType)
namespace hxcpp{
namespace debug{
namespace jsonrpc{
namespace eval{


class CType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef CType_obj OBJ_;

	public:
		CType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxcpp.debug.jsonrpc.eval.CType",52,b4,5d,21); }
		::String __ToString() const { return HX_("CType.",f1,0c,e2,77) + _hx_tag; }

		static ::hxcpp::debug::jsonrpc::eval::CType CTAnon(::Array< ::Dynamic> fields);
		static ::Dynamic CTAnon_dyn();
		static ::hxcpp::debug::jsonrpc::eval::CType CTFun(::Array< ::Dynamic> args, ::hxcpp::debug::jsonrpc::eval::CType ret);
		static ::Dynamic CTFun_dyn();
		static ::hxcpp::debug::jsonrpc::eval::CType CTNamed(::String n, ::hxcpp::debug::jsonrpc::eval::CType t);
		static ::Dynamic CTNamed_dyn();
		static ::hxcpp::debug::jsonrpc::eval::CType CTOpt( ::hxcpp::debug::jsonrpc::eval::CType t);
		static ::Dynamic CTOpt_dyn();
		static ::hxcpp::debug::jsonrpc::eval::CType CTParent( ::hxcpp::debug::jsonrpc::eval::CType t);
		static ::Dynamic CTParent_dyn();
		static ::hxcpp::debug::jsonrpc::eval::CType CTPath(::Array< ::String > path,::Array< ::Dynamic> params);
		static ::Dynamic CTPath_dyn();
};

} // end namespace hxcpp
} // end namespace debug
} // end namespace jsonrpc
} // end namespace eval

#endif /* INCLUDED_hxcpp_debug_jsonrpc_eval_CType */ 
