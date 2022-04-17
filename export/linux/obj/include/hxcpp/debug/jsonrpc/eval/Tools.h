#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_Tools
#define INCLUDED_hxcpp_debug_jsonrpc_eval_Tools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(hxcpp,debug,jsonrpc,eval,Expr)
HX_DECLARE_CLASS4(hxcpp,debug,jsonrpc,eval,Tools)

namespace hxcpp{
namespace debug{
namespace jsonrpc{
namespace eval{


class HXCPP_CLASS_ATTRIBUTES Tools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Tools_obj OBJ_;
		Tools_obj();

	public:
		enum { _hx_ClassId = 0x39b6e50e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxcpp.debug.jsonrpc.eval.Tools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxcpp.debug.jsonrpc.eval.Tools"); }

		inline static ::hx::ObjectPtr< Tools_obj > __new() {
			::hx::ObjectPtr< Tools_obj > __this = new Tools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Tools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Tools_obj *__this = (Tools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Tools_obj), false, "hxcpp.debug.jsonrpc.eval.Tools"));
			*(void **)__this = Tools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Tools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Tools",fb,01,5c,a7); }

		static void iter( ::hxcpp::debug::jsonrpc::eval::Expr e, ::Dynamic f);
		static ::Dynamic iter_dyn();

		static  ::hxcpp::debug::jsonrpc::eval::Expr map( ::hxcpp::debug::jsonrpc::eval::Expr e, ::Dynamic f);
		static ::Dynamic map_dyn();

		static  ::hxcpp::debug::jsonrpc::eval::Expr expr( ::hxcpp::debug::jsonrpc::eval::Expr e);
		static ::Dynamic expr_dyn();

		static  ::hxcpp::debug::jsonrpc::eval::Expr mk( ::hxcpp::debug::jsonrpc::eval::Expr e, ::hxcpp::debug::jsonrpc::eval::Expr p);
		static ::Dynamic mk_dyn();

};

} // end namespace hxcpp
} // end namespace debug
} // end namespace jsonrpc
} // end namespace eval

#endif /* INCLUDED_hxcpp_debug_jsonrpc_eval_Tools */ 
