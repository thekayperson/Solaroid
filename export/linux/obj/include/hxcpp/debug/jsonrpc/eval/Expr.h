#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_Expr
#define INCLUDED_hxcpp_debug_jsonrpc_eval_Expr

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(hxcpp,debug,jsonrpc,eval,CType)
HX_DECLARE_CLASS4(hxcpp,debug,jsonrpc,eval,Const)
HX_DECLARE_CLASS4(hxcpp,debug,jsonrpc,eval,Expr)
namespace hxcpp{
namespace debug{
namespace jsonrpc{
namespace eval{


class Expr_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Expr_obj OBJ_;

	public:
		Expr_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxcpp.debug.jsonrpc.eval.Expr",40,9f,3b,54); }
		::String __ToString() const { return HX_("Expr.",39,01,4d,0a) + _hx_tag; }

		static ::hxcpp::debug::jsonrpc::eval::Expr EArray( ::hxcpp::debug::jsonrpc::eval::Expr e, ::hxcpp::debug::jsonrpc::eval::Expr index);
		static ::Dynamic EArray_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Expr EArrayDecl(::Array< ::Dynamic> e);
		static ::Dynamic EArrayDecl_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Expr EBinop(::String op, ::hxcpp::debug::jsonrpc::eval::Expr e1, ::hxcpp::debug::jsonrpc::eval::Expr e2);
		static ::Dynamic EBinop_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Expr EBlock(::Array< ::Dynamic> e);
		static ::Dynamic EBlock_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Expr EBreak;
		static inline ::hxcpp::debug::jsonrpc::eval::Expr EBreak_dyn() { return EBreak; }
		static ::hxcpp::debug::jsonrpc::eval::Expr ECall( ::hxcpp::debug::jsonrpc::eval::Expr e,::Array< ::Dynamic> params);
		static ::Dynamic ECall_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Expr ECheckType( ::hxcpp::debug::jsonrpc::eval::Expr e, ::hxcpp::debug::jsonrpc::eval::CType t);
		static ::Dynamic ECheckType_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Expr EConst( ::hxcpp::debug::jsonrpc::eval::Const c);
		static ::Dynamic EConst_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Expr EContinue;
		static inline ::hxcpp::debug::jsonrpc::eval::Expr EContinue_dyn() { return EContinue; }
		static ::hxcpp::debug::jsonrpc::eval::Expr EDoWhile( ::hxcpp::debug::jsonrpc::eval::Expr cond, ::hxcpp::debug::jsonrpc::eval::Expr e);
		static ::Dynamic EDoWhile_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Expr EField( ::hxcpp::debug::jsonrpc::eval::Expr e,::String f);
		static ::Dynamic EField_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Expr EFor(::String v, ::hxcpp::debug::jsonrpc::eval::Expr it, ::hxcpp::debug::jsonrpc::eval::Expr e);
		static ::Dynamic EFor_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Expr EFunction(::Array< ::Dynamic> args, ::hxcpp::debug::jsonrpc::eval::Expr e,::String name, ::hxcpp::debug::jsonrpc::eval::CType ret);
		static ::Dynamic EFunction_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Expr EIdent(::String v);
		static ::Dynamic EIdent_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Expr EIf( ::hxcpp::debug::jsonrpc::eval::Expr cond, ::hxcpp::debug::jsonrpc::eval::Expr e1, ::hxcpp::debug::jsonrpc::eval::Expr e2);
		static ::Dynamic EIf_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Expr EMeta(::String name,::Array< ::Dynamic> args, ::hxcpp::debug::jsonrpc::eval::Expr e);
		static ::Dynamic EMeta_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Expr ENew(::String cl,::Array< ::Dynamic> params);
		static ::Dynamic ENew_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Expr EObject(::Array< ::Dynamic> fl);
		static ::Dynamic EObject_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Expr EParent( ::hxcpp::debug::jsonrpc::eval::Expr e);
		static ::Dynamic EParent_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Expr EReturn( ::hxcpp::debug::jsonrpc::eval::Expr e);
		static ::Dynamic EReturn_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Expr ESwitch( ::hxcpp::debug::jsonrpc::eval::Expr e,::Array< ::Dynamic> cases, ::hxcpp::debug::jsonrpc::eval::Expr defaultExpr);
		static ::Dynamic ESwitch_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Expr ETernary( ::hxcpp::debug::jsonrpc::eval::Expr cond, ::hxcpp::debug::jsonrpc::eval::Expr e1, ::hxcpp::debug::jsonrpc::eval::Expr e2);
		static ::Dynamic ETernary_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Expr EThrow( ::hxcpp::debug::jsonrpc::eval::Expr e);
		static ::Dynamic EThrow_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Expr ETry( ::hxcpp::debug::jsonrpc::eval::Expr e,::String v, ::hxcpp::debug::jsonrpc::eval::CType t, ::hxcpp::debug::jsonrpc::eval::Expr ecatch);
		static ::Dynamic ETry_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Expr EUnop(::String op,bool prefix, ::hxcpp::debug::jsonrpc::eval::Expr e);
		static ::Dynamic EUnop_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Expr EVar(::String n, ::hxcpp::debug::jsonrpc::eval::CType t, ::hxcpp::debug::jsonrpc::eval::Expr e);
		static ::Dynamic EVar_dyn();
		static ::hxcpp::debug::jsonrpc::eval::Expr EWhile( ::hxcpp::debug::jsonrpc::eval::Expr cond, ::hxcpp::debug::jsonrpc::eval::Expr e);
		static ::Dynamic EWhile_dyn();
};

} // end namespace hxcpp
} // end namespace debug
} // end namespace jsonrpc
} // end namespace eval

#endif /* INCLUDED_hxcpp_debug_jsonrpc_eval_Expr */ 
