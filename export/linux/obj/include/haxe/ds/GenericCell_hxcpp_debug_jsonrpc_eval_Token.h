#ifndef INCLUDED_haxe_ds_GenericCell_hxcpp_debug_jsonrpc_eval_Token
#define INCLUDED_haxe_ds_GenericCell_hxcpp_debug_jsonrpc_eval_Token

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,ds,GenericCell_hxcpp_debug_jsonrpc_eval_Token)
HX_DECLARE_CLASS4(hxcpp,debug,jsonrpc,eval,Token)

namespace haxe{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj OBJ_;
		GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj();

	public:
		enum { _hx_ClassId = 0x1171132f };

		void __construct( ::hxcpp::debug::jsonrpc::eval::Token elt, ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token next);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ds.GenericCell_hxcpp_debug_jsonrpc_eval_Token")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ds.GenericCell_hxcpp_debug_jsonrpc_eval_Token"); }
		static ::hx::ObjectPtr< GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj > __new( ::hxcpp::debug::jsonrpc::eval::Token elt, ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token next);
		static ::hx::ObjectPtr< GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj > __alloc(::hx::Ctx *_hx_ctx, ::hxcpp::debug::jsonrpc::eval::Token elt, ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token next);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GenericCell_hxcpp_debug_jsonrpc_eval_Token",56,99,59,a3); }

		 ::hxcpp::debug::jsonrpc::eval::Token elt;
		 ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token next;
};

} // end namespace haxe
} // end namespace ds

#endif /* INCLUDED_haxe_ds_GenericCell_hxcpp_debug_jsonrpc_eval_Token */ 
