#ifndef INCLUDED_haxe_ds__GenericStack_GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token
#define INCLUDED_haxe_ds__GenericStack_GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_cpp_FastIterator
#include <cpp/FastIterator.h>
#endif
HX_DECLARE_CLASS2(haxe,ds,GenericCell_hxcpp_debug_jsonrpc_eval_Token)
HX_DECLARE_CLASS3(haxe,ds,_GenericStack,GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token)
HX_DECLARE_CLASS4(hxcpp,debug,jsonrpc,eval,Token)

namespace haxe{
namespace ds{
namespace _GenericStack{


class HXCPP_CLASS_ATTRIBUTES GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj : public ::cpp::FastIterator_obj<  ::hxcpp::debug::jsonrpc::eval::Token >
{
	public:
		typedef ::cpp::FastIterator_obj<  ::hxcpp::debug::jsonrpc::eval::Token > super;
		typedef GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj OBJ_;
		GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj();

	public:
		enum { _hx_ClassId = 0x1b9a7dd9 };

		void __construct( ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token head);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ds._GenericStack.GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ds._GenericStack.GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token"); }
		static ::hx::ObjectPtr< GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj > __new( ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token head);
		static ::hx::ObjectPtr< GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token head);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token",70,6a,bd,4e); }

		 ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token current;
		bool hasNext();

		 ::hxcpp::debug::jsonrpc::eval::Token next();

};

} // end namespace haxe
} // end namespace ds
} // end namespace _GenericStack

#endif /* INCLUDED_haxe_ds__GenericStack_GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token */ 
