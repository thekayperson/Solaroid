#ifndef INCLUDED_hxcpp_debug_jsonrpc_Protocol
#define INCLUDED_hxcpp_debug_jsonrpc_Protocol

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(hxcpp,debug,jsonrpc,Protocol)

namespace hxcpp{
namespace debug{
namespace jsonrpc{


class HXCPP_CLASS_ATTRIBUTES Protocol_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Protocol_obj OBJ_;
		Protocol_obj();

	public:
		enum { _hx_ClassId = 0x11bb0929 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxcpp.debug.jsonrpc.Protocol")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxcpp.debug.jsonrpc.Protocol"); }

		inline static ::hx::ObjectPtr< Protocol_obj > __new() {
			::hx::ObjectPtr< Protocol_obj > __this = new Protocol_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Protocol_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Protocol_obj *__this = (Protocol_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Protocol_obj), false, "hxcpp.debug.jsonrpc.Protocol"));
			*(void **)__this = Protocol_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Protocol_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Protocol",78,12,15,da); }

		static void __boot();
		static ::String Pause;
		static ::String Continue;
		static ::String StepIn;
		static ::String Next;
		static ::String StepOut;
		static ::String StackTrace;
		static ::String SetBreakpoints;
		static ::String SetBreakpoint;
		static ::String RemoveBreakpoint;
		static ::String SwitchFrame;
		static ::String GetScopes;
		static ::String GetVariables;
		static ::String SetVariable;
		static ::String Threads;
		static ::String Evaluate;
		static ::String Completions;
		static ::String SetExceptionOptions;
		static ::String BreakpointStop;
		static ::String ExceptionStop;
		static ::String PauseStop;
		static ::String ThreadStart;
		static ::String ThreadExit;
};

} // end namespace hxcpp
} // end namespace debug
} // end namespace jsonrpc

#endif /* INCLUDED_hxcpp_debug_jsonrpc_Protocol */ 
