#ifndef INCLUDED_hxcpp_debug_jsonrpc_Server
#define INCLUDED_hxcpp_debug_jsonrpc_Server

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,vm,ThreadInfo)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(hxcpp,debug,jsonrpc,Server)
HX_DECLARE_CLASS4(hxcpp,debug,jsonrpc,_Server,References)
HX_DECLARE_CLASS4(hxcpp,debug,jsonrpc,eval,Expr)
HX_DECLARE_CLASS4(hxcpp,debug,jsonrpc,eval,Interp)
HX_DECLARE_CLASS4(hxcpp,debug,jsonrpc,eval,Parser)
HX_DECLARE_CLASS2(sys,net,Socket)
HX_DECLARE_CLASS2(sys,thread,Deque)
HX_DECLARE_CLASS2(sys,thread,Mutex)
HX_DECLARE_CLASS3(sys,thread,_Thread,HaxeThread)

namespace hxcpp{
namespace debug{
namespace jsonrpc{


class HXCPP_CLASS_ATTRIBUTES Server_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Server_obj OBJ_;
		Server_obj();

	public:
		enum { _hx_ClassId = 0x7b4cdf00 };

		void __construct(::String host,int port);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxcpp.debug.jsonrpc.Server")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxcpp.debug.jsonrpc.Server"); }
		static ::hx::ObjectPtr< Server_obj > __new(::String host,int port);
		static ::hx::ObjectPtr< Server_obj > __alloc(::hx::Ctx *_hx_ctx,::String host,int port);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Server_obj();

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
		::String __ToString() const { return HX_("Server",e3,be,cb,a2); }

		static void __boot();
		static  ::sys::thread::Deque startQueue;
		static  ::hxcpp::debug::jsonrpc::Server inst;
		static void log(::String message);
		static ::Dynamic log_dyn();

		::String host;
		int port;
		 ::sys::net::Socket listening;
		 ::sys::net::Socket socket;
		 ::sys::thread::Mutex stateMutex;
		 ::sys::thread::Mutex socketMutex;
		 ::cpp::vm::ThreadInfo currentThreadInfo;
		 ::haxe::ds::StringMap scopes;
		 ::haxe::ds::IntMap threads;
		 ::haxe::ds::StringMap breakpoints;
		 ::hxcpp::debug::jsonrpc::_Server::References references;
		bool started;
		 ::haxe::ds::StringMap path2file;
		 ::haxe::ds::StringMap file2path;
		 ::sys::thread::_Thread::HaxeThread mainThread;
		 ::hxcpp::debug::jsonrpc::eval::Interp interp;
		 ::hxcpp::debug::jsonrpc::eval::Parser parser;
		bool isWindows;
		bool connect();
		::Dynamic connect_dyn();

		void waitForAttach();
		::Dynamic waitForAttach_dyn();

		void createListeningSocket();
		::Dynamic createListeningSocket_dyn();

		void onDebuggerAttached();
		::Dynamic onDebuggerAttached_dyn();

		void onDebuggerDetached();
		::Dynamic onDebuggerDetached_dyn();

		void debuggerThreadMain();
		::Dynamic debuggerThreadMain_dyn();

		 ::Dynamic readMessage();
		::Dynamic readMessage_dyn();

		void sendResponse( ::Dynamic m);
		::Dynamic sendResponse_dyn();

		void processMessage( ::Dynamic m);
		::Dynamic processMessage_dyn();

		void sendEvent(::String event, ::Dynamic params);
		::Dynamic sendEvent_dyn();

		void handleThreadEvent(int threadNumber,int event,int stackFrame,::String className,::String functionName,::String fileName,int lineNumber);
		::Dynamic handleThreadEvent_dyn();

		bool isConditionPass( ::hxcpp::debug::jsonrpc::eval::Expr condition);
		::Dynamic isConditionPass_dyn();

		int getTopFrame();
		::Dynamic getTopFrame_dyn();

		void closeSocket();
		::Dynamic closeSocket_dyn();

		::String path2Key(::String path);
		::Dynamic path2Key_dyn();

};

} // end namespace hxcpp
} // end namespace debug
} // end namespace jsonrpc

#endif /* INCLUDED_hxcpp_debug_jsonrpc_Server */ 
