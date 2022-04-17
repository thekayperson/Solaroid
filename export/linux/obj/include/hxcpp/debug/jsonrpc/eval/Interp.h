#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_Interp
#define INCLUDED_hxcpp_debug_jsonrpc_eval_Interp

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(hxcpp,debug,jsonrpc,eval,Error)
HX_DECLARE_CLASS4(hxcpp,debug,jsonrpc,eval,Expr)
HX_DECLARE_CLASS4(hxcpp,debug,jsonrpc,eval,Interp)

namespace hxcpp{
namespace debug{
namespace jsonrpc{
namespace eval{


class HXCPP_CLASS_ATTRIBUTES Interp_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Interp_obj OBJ_;
		Interp_obj();

	public:
		enum { _hx_ClassId = 0x7988ac2d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxcpp.debug.jsonrpc.eval.Interp")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxcpp.debug.jsonrpc.eval.Interp"); }
		static ::hx::ObjectPtr< Interp_obj > __new();
		static ::hx::ObjectPtr< Interp_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Interp_obj();

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
		::String __ToString() const { return HX_("Interp",f4,ed,1a,d3); }

		static  ::haxe::ds::StringMap globals;
		 ::haxe::ds::StringMap variables;
		 ::haxe::ds::StringMap locals;
		 ::haxe::ds::StringMap binops;
		int depth;
		bool inTry;
		::Array< ::Dynamic> declared;
		 ::Dynamic returnValue;
		void initOps();
		::Dynamic initOps_dyn();

		 ::Dynamic assign( ::hxcpp::debug::jsonrpc::eval::Expr e1, ::hxcpp::debug::jsonrpc::eval::Expr e2);
		::Dynamic assign_dyn();

		void assignOp(::String op, ::Dynamic fop);
		::Dynamic assignOp_dyn();

		 ::Dynamic evalAssignOp(::String op, ::Dynamic fop, ::hxcpp::debug::jsonrpc::eval::Expr e1, ::hxcpp::debug::jsonrpc::eval::Expr e2);
		::Dynamic evalAssignOp_dyn();

		 ::Dynamic increment( ::hxcpp::debug::jsonrpc::eval::Expr e,bool prefix,int delta);
		::Dynamic increment_dyn();

		 ::Dynamic execute( ::hxcpp::debug::jsonrpc::eval::Expr expr);
		::Dynamic execute_dyn();

		 ::Dynamic exprReturn( ::hxcpp::debug::jsonrpc::eval::Expr e);
		::Dynamic exprReturn_dyn();

		 ::haxe::ds::StringMap duplicate( ::haxe::ds::StringMap h);
		::Dynamic duplicate_dyn();

		void restore(int old);
		::Dynamic restore_dyn();

		 ::Dynamic error( ::hxcpp::debug::jsonrpc::eval::Error e,::hx::Null< bool >  rethrow);
		::Dynamic error_dyn();

		void rethrow( ::Dynamic e);
		::Dynamic rethrow_dyn();

		 ::Dynamic resolve(::String id);
		::Dynamic resolve_dyn();

		 ::Dynamic expr( ::hxcpp::debug::jsonrpc::eval::Expr e);
		::Dynamic expr_dyn();

		void doWhileLoop( ::hxcpp::debug::jsonrpc::eval::Expr econd, ::hxcpp::debug::jsonrpc::eval::Expr e);
		::Dynamic doWhileLoop_dyn();

		void whileLoop( ::hxcpp::debug::jsonrpc::eval::Expr econd, ::hxcpp::debug::jsonrpc::eval::Expr e);
		::Dynamic whileLoop_dyn();

		 ::Dynamic makeIterator( ::Dynamic v);
		::Dynamic makeIterator_dyn();

		void forLoop(::String n, ::hxcpp::debug::jsonrpc::eval::Expr it, ::hxcpp::debug::jsonrpc::eval::Expr e);
		::Dynamic forLoop_dyn();

		bool isMap( ::Dynamic o);
		::Dynamic isMap_dyn();

		 ::Dynamic getMapValue( ::Dynamic map, ::Dynamic key);
		::Dynamic getMapValue_dyn();

		void setMapValue( ::Dynamic map, ::Dynamic key, ::Dynamic value);
		::Dynamic setMapValue_dyn();

		 ::Dynamic get( ::Dynamic o,::String f);
		::Dynamic get_dyn();

		 ::Dynamic set( ::Dynamic o,::String f, ::Dynamic v);
		::Dynamic set_dyn();

		 ::Dynamic fcall( ::Dynamic o,::String f,::cpp::VirtualArray args);
		::Dynamic fcall_dyn();

		 ::Dynamic call( ::Dynamic o, ::Dynamic f,::cpp::VirtualArray args);
		::Dynamic call_dyn();

		 ::Dynamic cnew(::String cl,::cpp::VirtualArray args);
		::Dynamic cnew_dyn();

};

} // end namespace hxcpp
} // end namespace debug
} // end namespace jsonrpc
} // end namespace eval

#endif /* INCLUDED_hxcpp_debug_jsonrpc_eval_Interp */ 
