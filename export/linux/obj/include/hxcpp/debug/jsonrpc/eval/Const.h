#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_Const
#define INCLUDED_hxcpp_debug_jsonrpc_eval_Const

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(hxcpp,debug,jsonrpc,eval,Const)
namespace hxcpp{
namespace debug{
namespace jsonrpc{
namespace eval{


class Const_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Const_obj OBJ_;

	public:
		Const_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxcpp.debug.jsonrpc.eval.Const",f8,20,2e,33); }
		::String __ToString() const { return HX_("Const.",8b,b1,70,fc) + _hx_tag; }

		static ::hxcpp::debug::jsonrpc::eval::Const CFloat(Float f);
		static ::Dynamic CFloat_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Const CInt(int v);
		static ::Dynamic CInt_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Const CString(::String s);
		static ::Dynamic CString_dyn();
};

} // end namespace hxcpp
} // end namespace debug
} // end namespace jsonrpc
} // end namespace eval

#endif /* INCLUDED_hxcpp_debug_jsonrpc_eval_Const */ 
