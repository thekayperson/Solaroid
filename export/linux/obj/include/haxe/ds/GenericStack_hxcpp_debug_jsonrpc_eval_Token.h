#ifndef INCLUDED_haxe_ds_GenericStack_hxcpp_debug_jsonrpc_eval_Token
#define INCLUDED_haxe_ds_GenericStack_hxcpp_debug_jsonrpc_eval_Token

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,ds,GenericCell_hxcpp_debug_jsonrpc_eval_Token)
HX_DECLARE_CLASS2(haxe,ds,GenericStack_hxcpp_debug_jsonrpc_eval_Token)
HX_DECLARE_CLASS4(hxcpp,debug,jsonrpc,eval,Token)

namespace haxe{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj OBJ_;
		GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj();

	public:
		enum { _hx_ClassId = 0x7761ada9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ds.GenericStack_hxcpp_debug_jsonrpc_eval_Token")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ds.GenericStack_hxcpp_debug_jsonrpc_eval_Token"); }
		static ::hx::ObjectPtr< GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj > __new();
		static ::hx::ObjectPtr< GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GenericStack_hxcpp_debug_jsonrpc_eval_Token",be,05,2c,7f); }

		 ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token head;
		void add( ::hxcpp::debug::jsonrpc::eval::Token item);
		::Dynamic add_dyn();

		 ::hxcpp::debug::jsonrpc::eval::Token first();
		::Dynamic first_dyn();

		 ::hxcpp::debug::jsonrpc::eval::Token pop();
		::Dynamic pop_dyn();

		bool isEmpty();
		::Dynamic isEmpty_dyn();

		bool remove( ::hxcpp::debug::jsonrpc::eval::Token v);
		::Dynamic remove_dyn();

		 ::Dynamic iterator();
		::Dynamic iterator_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace haxe
} // end namespace ds

#endif /* INCLUDED_haxe_ds_GenericStack_hxcpp_debug_jsonrpc_eval_Token */ 
