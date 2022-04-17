#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_Error
#define INCLUDED_hxcpp_debug_jsonrpc_eval_Error

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(hxcpp,debug,jsonrpc,eval,Error)
namespace hxcpp{
namespace debug{
namespace jsonrpc{
namespace eval{


class Error_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Error_obj OBJ_;

	public:
		Error_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxcpp.debug.jsonrpc.eval.Error",5d,f3,f9,5b); }
		::String __ToString() const { return HX_("Error.",86,f7,fc,85) + _hx_tag; }

		static ::hxcpp::debug::jsonrpc::eval::Error ECustom(::String msg);
		static ::Dynamic ECustom_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Error EInvalidAccess(::String f);
		static ::Dynamic EInvalidAccess_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Error EInvalidChar(int c);
		static ::Dynamic EInvalidChar_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Error EInvalidIterator(::String v);
		static ::Dynamic EInvalidIterator_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Error EInvalidOp(::String op);
		static ::Dynamic EInvalidOp_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Error EInvalidPreprocessor(::String msg);
		static ::Dynamic EInvalidPreprocessor_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Error EUnexpected(::String s);
		static ::Dynamic EUnexpected_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Error EUnknownVariable(::String v);
		static ::Dynamic EUnknownVariable_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Error EUnterminatedComment;
		static inline ::hxcpp::debug::jsonrpc::eval::Error EUnterminatedComment_dyn() { return EUnterminatedComment; }
		static ::hxcpp::debug::jsonrpc::eval::Error EUnterminatedString;
		static inline ::hxcpp::debug::jsonrpc::eval::Error EUnterminatedString_dyn() { return EUnterminatedString; }
};

} // end namespace hxcpp
} // end namespace debug
} // end namespace jsonrpc
} // end namespace eval

#endif /* INCLUDED_hxcpp_debug_jsonrpc_eval_Error */ 
