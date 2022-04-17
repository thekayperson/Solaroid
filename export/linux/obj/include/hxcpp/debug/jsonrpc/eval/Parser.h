#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_Parser
#define INCLUDED_hxcpp_debug_jsonrpc_eval_Parser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,GenericStack_hxcpp_debug_jsonrpc_eval_Token)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS4(hxcpp,debug,jsonrpc,eval,CType)
HX_DECLARE_CLASS4(hxcpp,debug,jsonrpc,eval,Const)
HX_DECLARE_CLASS4(hxcpp,debug,jsonrpc,eval,Error)
HX_DECLARE_CLASS4(hxcpp,debug,jsonrpc,eval,Expr)
HX_DECLARE_CLASS4(hxcpp,debug,jsonrpc,eval,ModuleDecl)
HX_DECLARE_CLASS4(hxcpp,debug,jsonrpc,eval,Parser)
HX_DECLARE_CLASS4(hxcpp,debug,jsonrpc,eval,Token)

namespace hxcpp{
namespace debug{
namespace jsonrpc{
namespace eval{


class HXCPP_CLASS_ATTRIBUTES Parser_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Parser_obj OBJ_;
		Parser_obj();

	public:
		enum { _hx_ClassId = 0x6574d454 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxcpp.debug.jsonrpc.eval.Parser")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxcpp.debug.jsonrpc.eval.Parser"); }
		static ::hx::ObjectPtr< Parser_obj > __new();
		static ::hx::ObjectPtr< Parser_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Parser_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Parser",ff,10,1d,22); }

		static void __boot();
		static int p1;
		static int readPos;
		static int tokenMin;
		static int tokenMax;
		int line;
		::String opChars;
		::String identChars;
		 ::haxe::ds::StringMap opPriority;
		 ::haxe::ds::StringMap opRightAssoc;
		 ::haxe::ds::StringMap unops;
		 ::haxe::ds::StringMap preprocesorValues;
		bool allowJSON;
		bool allowTypes;
		bool allowMetadata;
		 ::haxe::io::Input input;
		int _hx_char;
		::Array< bool > ops;
		::Array< bool > idents;
		int uid;
		 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token tokens;
		void error( ::hxcpp::debug::jsonrpc::eval::Error err,int pmin,int pmax);
		::Dynamic error_dyn();

		void invalidChar(int c);
		::Dynamic invalidChar_dyn();

		void initParser(::String origin);
		::Dynamic initParser_dyn();

		 ::hxcpp::debug::jsonrpc::eval::Expr parseString(::String s,::String origin);
		::Dynamic parseString_dyn();

		 ::hxcpp::debug::jsonrpc::eval::Expr parse( ::haxe::io::Input s,::String origin);
		::Dynamic parse_dyn();

		 ::Dynamic unexpected( ::hxcpp::debug::jsonrpc::eval::Token tk);
		::Dynamic unexpected_dyn();

		void push( ::hxcpp::debug::jsonrpc::eval::Token tk);
		::Dynamic push_dyn();

		void ensure( ::hxcpp::debug::jsonrpc::eval::Token tk);
		::Dynamic ensure_dyn();

		void ensureToken( ::hxcpp::debug::jsonrpc::eval::Token tk);
		::Dynamic ensureToken_dyn();

		bool maybe( ::hxcpp::debug::jsonrpc::eval::Token tk);
		::Dynamic maybe_dyn();

		::String getIdent();
		::Dynamic getIdent_dyn();

		 ::hxcpp::debug::jsonrpc::eval::Expr expr( ::hxcpp::debug::jsonrpc::eval::Expr e);
		::Dynamic expr_dyn();

		int pmin( ::hxcpp::debug::jsonrpc::eval::Expr e);
		::Dynamic pmin_dyn();

		int pmax( ::hxcpp::debug::jsonrpc::eval::Expr e);
		::Dynamic pmax_dyn();

		 ::hxcpp::debug::jsonrpc::eval::Expr mk( ::hxcpp::debug::jsonrpc::eval::Expr e, ::Dynamic pmin, ::Dynamic pmax);
		::Dynamic mk_dyn();

		bool isBlock( ::hxcpp::debug::jsonrpc::eval::Expr e);
		::Dynamic isBlock_dyn();

		void parseFullExpr(::Array< ::Dynamic> exprs);
		::Dynamic parseFullExpr_dyn();

		 ::hxcpp::debug::jsonrpc::eval::Expr parseObject( ::Dynamic p1);
		::Dynamic parseObject_dyn();

		 ::hxcpp::debug::jsonrpc::eval::Expr parseExpr();
		::Dynamic parseExpr_dyn();

		 ::hxcpp::debug::jsonrpc::eval::Expr parseLambda(::Array< ::Dynamic> args, ::Dynamic pmin);
		::Dynamic parseLambda_dyn();

		::Array< ::Dynamic> parseMetaArgs();
		::Dynamic parseMetaArgs_dyn();

		 ::hxcpp::debug::jsonrpc::eval::Expr mapCompr(::String tmp, ::hxcpp::debug::jsonrpc::eval::Expr e);
		::Dynamic mapCompr_dyn();

		 ::hxcpp::debug::jsonrpc::eval::Expr makeUnop(::String op, ::hxcpp::debug::jsonrpc::eval::Expr e);
		::Dynamic makeUnop_dyn();

		 ::hxcpp::debug::jsonrpc::eval::Expr makeBinop(::String op, ::hxcpp::debug::jsonrpc::eval::Expr e1, ::hxcpp::debug::jsonrpc::eval::Expr e);
		::Dynamic makeBinop_dyn();

		 ::hxcpp::debug::jsonrpc::eval::Expr parseStructure(::String id);
		::Dynamic parseStructure_dyn();

		 ::hxcpp::debug::jsonrpc::eval::Expr parseExprNext( ::hxcpp::debug::jsonrpc::eval::Expr e1);
		::Dynamic parseExprNext_dyn();

		::Array< ::Dynamic> parseFunctionArgs();
		::Dynamic parseFunctionArgs_dyn();

		 ::Dynamic parseFunctionDecl();
		::Dynamic parseFunctionDecl_dyn();

		::Array< ::String > parsePath();
		::Dynamic parsePath_dyn();

		 ::hxcpp::debug::jsonrpc::eval::CType parseType();
		::Dynamic parseType_dyn();

		 ::hxcpp::debug::jsonrpc::eval::CType parseTypeNext( ::hxcpp::debug::jsonrpc::eval::CType t);
		::Dynamic parseTypeNext_dyn();

		::Array< ::Dynamic> parseExprList( ::hxcpp::debug::jsonrpc::eval::Token etk);
		::Dynamic parseExprList_dyn();

		::Array< ::Dynamic> parseModule(::String content,::String origin);
		::Dynamic parseModule_dyn();

		::Array< ::Dynamic> parseMetadata();
		::Dynamic parseMetadata_dyn();

		 ::Dynamic parseParams();
		::Dynamic parseParams_dyn();

		 ::hxcpp::debug::jsonrpc::eval::ModuleDecl parseModuleDecl();
		::Dynamic parseModuleDecl_dyn();

		 ::Dynamic parseField();
		::Dynamic parseField_dyn();

		void incPos();
		::Dynamic incPos_dyn();

		int readChar();
		::Dynamic readChar_dyn();

		::String readString(int until);
		::Dynamic readString_dyn();

		 ::hxcpp::debug::jsonrpc::eval::Token token();
		::Dynamic token_dyn();

		 ::Dynamic preprocValue(::String id);
		::Dynamic preprocValue_dyn();

		::Array< ::Dynamic> preprocStack;
		 ::hxcpp::debug::jsonrpc::eval::Expr parsePreproCond();
		::Dynamic parsePreproCond_dyn();

		bool evalPreproCond( ::hxcpp::debug::jsonrpc::eval::Expr e);
		::Dynamic evalPreproCond_dyn();

		 ::hxcpp::debug::jsonrpc::eval::Token preprocess(::String id);
		::Dynamic preprocess_dyn();

		void skipTokens();
		::Dynamic skipTokens_dyn();

		 ::hxcpp::debug::jsonrpc::eval::Token tokenComment(::String op,int _hx_char);
		::Dynamic tokenComment_dyn();

		::String constString( ::hxcpp::debug::jsonrpc::eval::Const c);
		::Dynamic constString_dyn();

		::String tokenString( ::hxcpp::debug::jsonrpc::eval::Token t);
		::Dynamic tokenString_dyn();

};

} // end namespace hxcpp
} // end namespace debug
} // end namespace jsonrpc
} // end namespace eval

#endif /* INCLUDED_hxcpp_debug_jsonrpc_eval_Parser */ 
