#ifndef INCLUDED_hxcpp_debug_jsonrpc__Server_References
#define INCLUDED_hxcpp_debug_jsonrpc__Server_References

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS3(hxcpp,debug,jsonrpc,Value)
HX_DECLARE_CLASS4(hxcpp,debug,jsonrpc,_Server,References)

namespace hxcpp{
namespace debug{
namespace jsonrpc{
namespace _Server{


class HXCPP_CLASS_ATTRIBUTES References_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef References_obj OBJ_;
		References_obj();

	public:
		enum { _hx_ClassId = 0x3312e4d1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxcpp.debug.jsonrpc._Server.References")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxcpp.debug.jsonrpc._Server.References"); }
		static ::hx::ObjectPtr< References_obj > __new();
		static ::hx::ObjectPtr< References_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~References_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("References",68,ce,52,08); }

		static void __boot();
		static int lastId;
		 ::haxe::ds::IntMap references;
		int create( ::hxcpp::debug::jsonrpc::Value ref);
		::Dynamic create_dyn();

		 ::hxcpp::debug::jsonrpc::Value get(int id);
		::Dynamic get_dyn();

		void clear();
		::Dynamic clear_dyn();

};

} // end namespace hxcpp
} // end namespace debug
} // end namespace jsonrpc
} // end namespace _Server

#endif /* INCLUDED_hxcpp_debug_jsonrpc__Server_References */ 
