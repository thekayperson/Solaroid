#ifndef INCLUDED_hxcpp_debug_jsonrpc_VariablesPrinter
#define INCLUDED_hxcpp_debug_jsonrpc_VariablesPrinter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(hxcpp,debug,jsonrpc,Value)
HX_DECLARE_CLASS3(hxcpp,debug,jsonrpc,VarType)
HX_DECLARE_CLASS3(hxcpp,debug,jsonrpc,VariablesPrinter)
HX_DECLARE_CLASS4(hxcpp,debug,jsonrpc,eval,Interp)
HX_DECLARE_CLASS4(hxcpp,debug,jsonrpc,eval,Parser)

namespace hxcpp{
namespace debug{
namespace jsonrpc{


class HXCPP_CLASS_ATTRIBUTES VariablesPrinter_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef VariablesPrinter_obj OBJ_;
		VariablesPrinter_obj();

	public:
		enum { _hx_ClassId = 0x0990d57c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxcpp.debug.jsonrpc.VariablesPrinter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxcpp.debug.jsonrpc.VariablesPrinter"); }

		inline static ::hx::ObjectPtr< VariablesPrinter_obj > __new() {
			::hx::ObjectPtr< VariablesPrinter_obj > __this = new VariablesPrinter_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< VariablesPrinter_obj > __alloc(::hx::Ctx *_hx_ctx) {
			VariablesPrinter_obj *__this = (VariablesPrinter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VariablesPrinter_obj), false, "hxcpp.debug.jsonrpc.VariablesPrinter"));
			*(void **)__this = VariablesPrinter_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VariablesPrinter_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VariablesPrinter",03,cc,2c,45); }

		static ::Array< ::Dynamic> getInnerVariables( ::hxcpp::debug::jsonrpc::Value value,::hx::Null< int >  start,::hx::Null< int >  count);
		static ::Dynamic getInnerVariables_dyn();

		static  ::hxcpp::debug::jsonrpc::Value resolveValue( ::Dynamic value);
		static ::Dynamic resolveValue_dyn();

		static  ::Dynamic evaluate( ::hxcpp::debug::jsonrpc::eval::Parser parser,::String expression,int threadId,int frameId);
		static ::Dynamic evaluate_dyn();

		static  ::hxcpp::debug::jsonrpc::eval::Interp initInterp(int threadId,int frameId,::hx::Null< bool >  exposeMembers);
		static ::Dynamic initInterp_dyn();

		static ::Array< ::String > getClassProps(::hx::Class c);
		static ::Dynamic getClassProps_dyn();

		static ::Array< ::String > getProps(::hx::Class c);
		static ::Dynamic getProps_dyn();

		static ::String getType( ::Dynamic value);
		static ::Dynamic getType_dyn();

		static ::String getClassName(::hx::Class klass);
		static ::Dynamic getClassName_dyn();

		static ::String toString( ::hxcpp::debug::jsonrpc::VarType varType);
		static ::Dynamic toString_dyn();

		static  ::Dynamic arrayGet( ::Dynamic value,int index);
		static ::Dynamic arrayGet_dyn();

		static  ::Dynamic propGet( ::Dynamic value,::String key);
		static ::Dynamic propGet_dyn();

		static  ::Dynamic propStaticGet(::hx::Class klass, ::Dynamic value,::String key);
		static ::Dynamic propStaticGet_dyn();

		static  ::Dynamic stringMapGet( ::Dynamic value,::String key);
		static ::Dynamic stringMapGet_dyn();

		static  ::Dynamic intMapGet( ::Dynamic value,::String key);
		static ::Dynamic intMapGet_dyn();

};

} // end namespace hxcpp
} // end namespace debug
} // end namespace jsonrpc

#endif /* INCLUDED_hxcpp_debug_jsonrpc_VariablesPrinter */ 
