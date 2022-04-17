#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_Token
#define INCLUDED_hxcpp_debug_jsonrpc_eval_Token

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(hxcpp,debug,jsonrpc,eval,Const)
HX_DECLARE_CLASS4(hxcpp,debug,jsonrpc,eval,Token)
namespace hxcpp{
namespace debug{
namespace jsonrpc{
namespace eval{


class Token_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Token_obj OBJ_;

	public:
		Token_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxcpp.debug.jsonrpc.eval.Token",8e,aa,fb,fc); }
		::String __ToString() const { return HX_("Token.",35,8b,7b,c6) + _hx_tag; }

		static ::hxcpp::debug::jsonrpc::eval::Token TBkClose;
		static inline ::hxcpp::debug::jsonrpc::eval::Token TBkClose_dyn() { return TBkClose; }
		static ::hxcpp::debug::jsonrpc::eval::Token TBkOpen;
		static inline ::hxcpp::debug::jsonrpc::eval::Token TBkOpen_dyn() { return TBkOpen; }
		static ::hxcpp::debug::jsonrpc::eval::Token TBrClose;
		static inline ::hxcpp::debug::jsonrpc::eval::Token TBrClose_dyn() { return TBrClose; }
		static ::hxcpp::debug::jsonrpc::eval::Token TBrOpen;
		static inline ::hxcpp::debug::jsonrpc::eval::Token TBrOpen_dyn() { return TBrOpen; }
		static ::hxcpp::debug::jsonrpc::eval::Token TComma;
		static inline ::hxcpp::debug::jsonrpc::eval::Token TComma_dyn() { return TComma; }
		static ::hxcpp::debug::jsonrpc::eval::Token TConst( ::hxcpp::debug::jsonrpc::eval::Const c);
		static ::Dynamic TConst_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Token TDot;
		static inline ::hxcpp::debug::jsonrpc::eval::Token TDot_dyn() { return TDot; }
		static ::hxcpp::debug::jsonrpc::eval::Token TDoubleDot;
		static inline ::hxcpp::debug::jsonrpc::eval::Token TDoubleDot_dyn() { return TDoubleDot; }
		static ::hxcpp::debug::jsonrpc::eval::Token TEof;
		static inline ::hxcpp::debug::jsonrpc::eval::Token TEof_dyn() { return TEof; }
		static ::hxcpp::debug::jsonrpc::eval::Token TId(::String s);
		static ::Dynamic TId_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Token TMeta(::String s);
		static ::Dynamic TMeta_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Token TOp(::String s);
		static ::Dynamic TOp_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Token TPClose;
		static inline ::hxcpp::debug::jsonrpc::eval::Token TPClose_dyn() { return TPClose; }
		static ::hxcpp::debug::jsonrpc::eval::Token TPOpen;
		static inline ::hxcpp::debug::jsonrpc::eval::Token TPOpen_dyn() { return TPOpen; }
		static ::hxcpp::debug::jsonrpc::eval::Token TPrepro(::String s);
		static ::Dynamic TPrepro_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Token TQuestion;
		static inline ::hxcpp::debug::jsonrpc::eval::Token TQuestion_dyn() { return TQuestion; }
		static ::hxcpp::debug::jsonrpc::eval::Token TSemicolon;
		static inline ::hxcpp::debug::jsonrpc::eval::Token TSemicolon_dyn() { return TSemicolon; }
};

} // end namespace hxcpp
} // end namespace debug
} // end namespace jsonrpc
} // end namespace eval

#endif /* INCLUDED_hxcpp_debug_jsonrpc_eval_Token */ 
