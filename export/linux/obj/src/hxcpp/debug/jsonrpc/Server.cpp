#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_cpp_vm_Debugger
#include <cpp/vm/Debugger.h>
#endif
#ifndef INCLUDED_cpp_vm_StackFrame
#include <cpp/vm/StackFrame.h>
#endif
#ifndef INCLUDED_cpp_vm_ThreadInfo
#include <cpp/vm/ThreadInfo.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_format_JsonPrinter
#include <haxe/format/JsonPrinter.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_hxcpp_debug_jsonrpc_Server
#include <hxcpp/debug/jsonrpc/Server.h>
#endif
#ifndef INCLUDED_hxcpp_debug_jsonrpc_Value
#include <hxcpp/debug/jsonrpc/Value.h>
#endif
#ifndef INCLUDED_hxcpp_debug_jsonrpc_VariablesPrinter
#include <hxcpp/debug/jsonrpc/VariablesPrinter.h>
#endif
#ifndef INCLUDED_hxcpp_debug_jsonrpc__Server_References
#include <hxcpp/debug/jsonrpc/_Server/References.h>
#endif
#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_Expr
#include <hxcpp/debug/jsonrpc/eval/Expr.h>
#endif
#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_Interp
#include <hxcpp/debug/jsonrpc/eval/Interp.h>
#endif
#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_Parser
#include <hxcpp/debug/jsonrpc/eval/Parser.h>
#endif
#ifndef INCLUDED_sys_net_Host
#include <sys/net/Host.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif
#ifndef INCLUDED_sys_thread_Deque
#include <sys/thread/Deque.h>
#endif
#ifndef INCLUDED_sys_thread_Mutex
#include <sys/thread/Mutex.h>
#endif
#ifndef INCLUDED_sys_thread__Thread_HaxeThread
#include <sys/thread/_Thread/HaxeThread.h>
#endif
#ifndef INCLUDED_sys_thread__Thread_Thread_Impl_
#include <sys/thread/_Thread/Thread_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f75d861e40f322f5_85_new,"hxcpp.debug.jsonrpc.Server","new",0xfa99235c,"hxcpp.debug.jsonrpc.Server.new","hxcpp/debug/jsonrpc/Server.hx",85,0xbce2c271)
HX_LOCAL_STACK_FRAME(_hx_pos_f75d861e40f322f5_113_connect,"hxcpp.debug.jsonrpc.Server","connect",0x0ad0bce6,"hxcpp.debug.jsonrpc.Server.connect","hxcpp/debug/jsonrpc/Server.hx",113,0xbce2c271)
HX_LOCAL_STACK_FRAME(_hx_pos_f75d861e40f322f5_137_waitForAttach,"hxcpp.debug.jsonrpc.Server","waitForAttach",0xe2e21875,"hxcpp.debug.jsonrpc.Server.waitForAttach","hxcpp/debug/jsonrpc/Server.hx",137,0xbce2c271)
HX_LOCAL_STACK_FRAME(_hx_pos_f75d861e40f322f5_135_waitForAttach,"hxcpp.debug.jsonrpc.Server","waitForAttach",0xe2e21875,"hxcpp.debug.jsonrpc.Server.waitForAttach","hxcpp/debug/jsonrpc/Server.hx",135,0xbce2c271)
HX_LOCAL_STACK_FRAME(_hx_pos_f75d861e40f322f5_146_createListeningSocket,"hxcpp.debug.jsonrpc.Server","createListeningSocket",0xa3ecf76e,"hxcpp.debug.jsonrpc.Server.createListeningSocket","hxcpp/debug/jsonrpc/Server.hx",146,0xbce2c271)
HX_LOCAL_STACK_FRAME(_hx_pos_f75d861e40f322f5_156_createListeningSocket,"hxcpp.debug.jsonrpc.Server","createListeningSocket",0xa3ecf76e,"hxcpp.debug.jsonrpc.Server.createListeningSocket","hxcpp/debug/jsonrpc/Server.hx",156,0xbce2c271)
HX_LOCAL_STACK_FRAME(_hx_pos_f75d861e40f322f5_164_onDebuggerAttached,"hxcpp.debug.jsonrpc.Server","onDebuggerAttached",0x265d0c68,"hxcpp.debug.jsonrpc.Server.onDebuggerAttached","hxcpp/debug/jsonrpc/Server.hx",164,0xbce2c271)
HX_LOCAL_STACK_FRAME(_hx_pos_f75d861e40f322f5_173_onDebuggerDetached,"hxcpp.debug.jsonrpc.Server","onDebuggerDetached",0x62326d76,"hxcpp.debug.jsonrpc.Server.onDebuggerDetached","hxcpp/debug/jsonrpc/Server.hx",173,0xbce2c271)
HX_LOCAL_STACK_FRAME(_hx_pos_f75d861e40f322f5_171_onDebuggerDetached,"hxcpp.debug.jsonrpc.Server","onDebuggerDetached",0x62326d76,"hxcpp.debug.jsonrpc.Server.onDebuggerDetached","hxcpp/debug/jsonrpc/Server.hx",171,0xbce2c271)
HX_LOCAL_STACK_FRAME(_hx_pos_f75d861e40f322f5_180_onDebuggerDetached,"hxcpp.debug.jsonrpc.Server","onDebuggerDetached",0x62326d76,"hxcpp.debug.jsonrpc.Server.onDebuggerDetached","hxcpp/debug/jsonrpc/Server.hx",180,0xbce2c271)
HX_LOCAL_STACK_FRAME(_hx_pos_f75d861e40f322f5_186_debuggerThreadMain,"hxcpp.debug.jsonrpc.Server","debuggerThreadMain",0xff2b7028,"hxcpp.debug.jsonrpc.Server.debuggerThreadMain","hxcpp/debug/jsonrpc/Server.hx",186,0xbce2c271)
HX_LOCAL_STACK_FRAME(_hx_pos_f75d861e40f322f5_251_readMessage,"hxcpp.debug.jsonrpc.Server","readMessage",0x2d87780d,"hxcpp.debug.jsonrpc.Server.readMessage","hxcpp/debug/jsonrpc/Server.hx",251,0xbce2c271)
HX_LOCAL_STACK_FRAME(_hx_pos_f75d861e40f322f5_261_sendResponse,"hxcpp.debug.jsonrpc.Server","sendResponse",0x1b97ed6d,"hxcpp.debug.jsonrpc.Server.sendResponse","hxcpp/debug/jsonrpc/Server.hx",261,0xbce2c271)
HX_LOCAL_STACK_FRAME(_hx_pos_f75d861e40f322f5_274_processMessage,"hxcpp.debug.jsonrpc.Server","processMessage",0x27d74d9c,"hxcpp.debug.jsonrpc.Server.processMessage","hxcpp/debug/jsonrpc/Server.hx",274,0xbce2c271)
HX_LOCAL_STACK_FRAME(_hx_pos_f75d861e40f322f5_503_sendEvent,"hxcpp.debug.jsonrpc.Server","sendEvent",0x81643dae,"hxcpp.debug.jsonrpc.Server.sendEvent","hxcpp/debug/jsonrpc/Server.hx",503,0xbce2c271)
HX_LOCAL_STACK_FRAME(_hx_pos_f75d861e40f322f5_514_handleThreadEvent,"hxcpp.debug.jsonrpc.Server","handleThreadEvent",0x91a55a24,"hxcpp.debug.jsonrpc.Server.handleThreadEvent","hxcpp/debug/jsonrpc/Server.hx",514,0xbce2c271)
HX_LOCAL_STACK_FRAME(_hx_pos_f75d861e40f322f5_566_isConditionPass,"hxcpp.debug.jsonrpc.Server","isConditionPass",0x59988abe,"hxcpp.debug.jsonrpc.Server.isConditionPass","hxcpp/debug/jsonrpc/Server.hx",566,0xbce2c271)
HX_LOCAL_STACK_FRAME(_hx_pos_f75d861e40f322f5_577_getTopFrame,"hxcpp.debug.jsonrpc.Server","getTopFrame",0xbad1f70a,"hxcpp.debug.jsonrpc.Server.getTopFrame","hxcpp/debug/jsonrpc/Server.hx",577,0xbce2c271)
HX_LOCAL_STACK_FRAME(_hx_pos_f75d861e40f322f5_581_closeSocket,"hxcpp.debug.jsonrpc.Server","closeSocket",0x21216087,"hxcpp.debug.jsonrpc.Server.closeSocket","hxcpp/debug/jsonrpc/Server.hx",581,0xbce2c271)
HX_LOCAL_STACK_FRAME(_hx_pos_f75d861e40f322f5_588_path2Key,"hxcpp.debug.jsonrpc.Server","path2Key",0xdd2c6436,"hxcpp.debug.jsonrpc.Server.path2Key","hxcpp/debug/jsonrpc/Server.hx",588,0xbce2c271)
HX_LOCAL_STACK_FRAME(_hx_pos_f75d861e40f322f5_592_log,"hxcpp.debug.jsonrpc.Server","log",0xfa97a780,"hxcpp.debug.jsonrpc.Server.log","hxcpp/debug/jsonrpc/Server.hx",592,0xbce2c271)
HX_LOCAL_STACK_FRAME(_hx_pos_f75d861e40f322f5_78_boot,"hxcpp.debug.jsonrpc.Server","boot",0x437ecdb6,"hxcpp.debug.jsonrpc.Server.boot","hxcpp/debug/jsonrpc/Server.hx",78,0xbce2c271)
HX_LOCAL_STACK_FRAME(_hx_pos_f75d861e40f322f5_79_boot,"hxcpp.debug.jsonrpc.Server","boot",0x437ecdb6,"hxcpp.debug.jsonrpc.Server.boot","hxcpp/debug/jsonrpc/Server.hx",79,0xbce2c271)
namespace hxcpp{
namespace debug{
namespace jsonrpc{

void Server_obj::__construct(::String host,int port){
            	HX_GC_STACKFRAME(&_hx_pos_f75d861e40f322f5_85_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(host,"host")
            	HX_STACK_ARG(port,"port")
HXLINE(  85)
HXLINE(  86)		::haxe::Log_obj::trace(HX_("Debug Server Started:",e9,54,65,f1),::hx::SourceInfo(HX_("/home/kay/.vscode/extensions/vshaxe.hxcpp-debugger-1.2.4/hxcpp-debug-server/./hxcpp/debug/jsonrpc/Server.hx",aa,a0,46,3d),86,HX_("hxcpp.debug.jsonrpc.Server",6a,85,bd,65),HX_("new",60,d0,53,00)));
HXLINE(  87)		this->host = host;
HXLINE(  88)		this->port = port;
HXLINE(  89)		this->stateMutex =  ::sys::thread::Mutex_obj::__alloc( HX_CTX );
HXLINE(  90)		this->socketMutex =  ::sys::thread::Mutex_obj::__alloc( HX_CTX );
HXLINE(  91)		this->scopes =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  92)		this->breakpoints =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  93)		this->references =  ::hxcpp::debug::jsonrpc::_Server::References_obj::__alloc( HX_CTX );
HXLINE(  94)		this->threads =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  95)		this->path2file =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  96)		this->file2path =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  97)		this->mainThread = ::sys::thread::_Thread::HaxeThread_obj::current();
HXLINE(  98)		this->parser =  ::hxcpp::debug::jsonrpc::eval::Parser_obj::__alloc( HX_CTX );
HXLINE(  99)		this->started = false;
HXLINE( 100)		this->isWindows = (::Sys_obj::systemName() == HX_("Windows",63,06,c6,b5));
HXLINE( 102)		::cpp::vm::Debugger_obj::enableCurrentThreadDebugging(false);
HXLINE( 103)		if (this->connect()) {
HXLINE( 104)			::sys::thread::_Thread::HaxeThread_obj::create(this->debuggerThreadMain_dyn(),false);
HXLINE( 105)			::hxcpp::debug::jsonrpc::Server_obj::startQueue->pop(true);
HXLINE( 106)			::cpp::vm::Debugger_obj::enableCurrentThreadDebugging(true);
HXLINE( 107)			::hxcpp::debug::jsonrpc::Server_obj::startQueue->pop(true);
            		}
            		else {
HXLINE( 109)			this->waitForAttach();
            		}
            	}

Dynamic Server_obj::__CreateEmpty() { return new Server_obj; }

void *Server_obj::_hx_vtable = 0;

Dynamic Server_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Server_obj > _hx_result = new Server_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Server_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7b4cdf00;
}

bool Server_obj::connect(){
            	HX_GC_STACKFRAME(&_hx_pos_f75d861e40f322f5_113_connect)
            	HX_STACK_THIS(this)
HXLINE( 113)
HXLINE( 114)		HX_VARI(  ::sys::net::Socket,socket) =  ::sys::net::Socket_obj::__alloc( HX_CTX );
HXLINE( 115)		socket->input->set_bigEndian(false);
HXLINE( 116)		socket->output->set_bigEndian(false);
HXLINE( 118)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 119)			HX_VARI(  ::sys::net::Host,host) =  ::sys::net::Host_obj::__alloc( HX_CTX ,this->host);
HXLINE( 120)			if ((host->ip == 0)) {
HXLINE( 121)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Name lookup error.",d7,ab,8b,46)));
            			}
HXLINE( 123)			socket->connect(host,this->port);
HXLINE( 124)			::String _hx_tmp = ((HX_("Connected to vsc debugger server at ",67,2f,a6,e1) + ::Std_obj::string(host)) + HX_(":",3a,00,00,00));
HXDLIN( 124)			::hxcpp::debug::jsonrpc::Server_obj::log((_hx_tmp + this->port));
HXLINE( 126)			this->socket = socket;
HXLINE( 127)			return true;
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 128)				{
HXLINE( 128)					null();
            				}
HXLINE( 129)				::hxcpp::debug::jsonrpc::Server_obj::log((((HX_("Failed to connect to vsc debugger server at ",c8,ac,5a,13) + this->host) + HX_(":",3a,00,00,00)) + this->port));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 131)		this->closeSocket();
HXLINE( 132)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Server_obj,connect,return )

void Server_obj::waitForAttach(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_f75d861e40f322f5_137_waitForAttach)
HXLINE( 137)
HXLINE( 138)			HX_VARI(  ::Dynamic,callOnMainThread) = ::sys::thread::_Thread::Thread_Impl__obj::readMessage(false);
HXLINE( 139)			if (::hx::IsNull( callOnMainThread )) {
HXLINE( 140)				return;
            			}
HXLINE( 141)			callOnMainThread();
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_f75d861e40f322f5_135_waitForAttach)
            	HX_STACK_THIS(this)
HXLINE( 135)
HXLINE( 136)		HX_VARI(  ::haxe::Timer,onMainThread) =  ::haxe::Timer_obj::__alloc( HX_CTX ,( (Float)(500) ));
HXLINE( 137)		onMainThread->run =  ::Dynamic(new _hx_Closure_0());
HXLINE( 143)		::sys::thread::_Thread::HaxeThread_obj::create(this->createListeningSocket_dyn(),false);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Server_obj,waitForAttach,(void))

void Server_obj::createListeningSocket(){
            	HX_GC_STACKFRAME(&_hx_pos_f75d861e40f322f5_146_createListeningSocket)
            	HX_STACK_THIS(this)
HXLINE( 146)
HXDLIN( 146)		 ::hxcpp::debug::jsonrpc::Server _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 147)		if (::hx::IsNull( this->listening )) {
HXLINE( 148)			HX_VARI(  ::sys::net::Socket,socket) =  ::sys::net::Socket_obj::__alloc( HX_CTX );
HXLINE( 149)			socket->bind( ::sys::net::Host_obj::__alloc( HX_CTX ,HX_("localhost",53,2a,7c,1c)),6972);
HXLINE( 150)			socket->listen(1);
HXLINE( 151)			this->listening = socket;
            		}
HXLINE( 153)		while(true){
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::hxcpp::debug::jsonrpc::Server,_gthis, ::sys::net::Socket,connectedSocket) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_f75d861e40f322f5_156_createListeningSocket)
HXLINE( 156)
HXLINE( 156)				if (::hx::IsNull( _gthis->socket )) {
HXLINE( 157)					_gthis->socket = connectedSocket;
HXLINE( 158)					_gthis->onDebuggerAttached();
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE( 154)			HX_VARI(  ::sys::net::Socket,connectedSocket) = this->listening->accept();
HXLINE( 155)			this->mainThread->messages->add( ::Dynamic(new _hx_Closure_0(_gthis,connectedSocket)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Server_obj,createListeningSocket,(void))

void Server_obj::onDebuggerAttached(){
            	HX_STACKFRAME(&_hx_pos_f75d861e40f322f5_164_onDebuggerAttached)
            	HX_STACK_THIS(this)
HXLINE( 164)
HXLINE( 165)		::cpp::vm::Debugger_obj::enableCurrentThreadDebugging(false);
HXLINE( 166)		::sys::thread::_Thread::HaxeThread_obj::create(this->debuggerThreadMain_dyn(),false);
HXLINE( 167)		::hxcpp::debug::jsonrpc::Server_obj::startQueue->pop(true);
HXLINE( 168)		::cpp::vm::Debugger_obj::enableCurrentThreadDebugging(true);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Server_obj,onDebuggerAttached,(void))

void Server_obj::onDebuggerDetached(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(7)
            		void _hx_run(int _,int _1,int _2,::String _3,::String _4,::String _5,int _6){
            			HX_STACKFRAME(&_hx_pos_f75d861e40f322f5_173_onDebuggerDetached)
            			HX_STACK_ARG(_,"_")
            			HX_STACK_ARG(_1,"_1")
            			HX_STACK_ARG(_2,"_2")
            			HX_STACK_ARG(_3,"_3")
            			HX_STACK_ARG(_4,"_4")
            			HX_STACK_ARG(_5,"_5")
            			HX_STACK_ARG(_6,"_6")
HXLINE( 173)
            		}
            		HX_END_LOCAL_FUNC7((void))

            	HX_STACKFRAME(&_hx_pos_f75d861e40f322f5_171_onDebuggerDetached)
            	HX_STACK_THIS(this)
HXLINE( 171)
HXLINE( 172)		this->closeSocket();
HXLINE( 173)		::cpp::vm::Debugger_obj::setEventNotificationHandler( ::Dynamic(new _hx_Closure_0()));
HXLINE( 174)		this->stateMutex->acquire();
HXLINE( 175)		if (::hx::IsNotNull( this->currentThreadInfo )) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(0)
            			void _hx_run(){
            				HX_STACKFRAME(&_hx_pos_f75d861e40f322f5_180_onDebuggerDetached)
HXLINE( 180)
HXLINE( 180)				::cpp::vm::Debugger_obj::enableCurrentThreadDebugging(false);
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE( 176)			HX_VARI( int,threadId) = this->currentThreadInfo->number;
HXLINE( 177)			this->currentThreadInfo = null();
HXLINE( 178)			::cpp::vm::Debugger_obj::continueThreads(threadId,1);
HXLINE( 179)			this->mainThread->messages->add( ::Dynamic(new _hx_Closure_1()));
            		}
HXLINE( 183)		this->stateMutex->release();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Server_obj,onDebuggerDetached,(void))

void Server_obj::debuggerThreadMain(){
            	HX_GC_STACKFRAME(&_hx_pos_f75d861e40f322f5_186_debuggerThreadMain)
            	HX_STACK_THIS(this)
HXLINE( 186)
HXLINE( 187)		::cpp::vm::Debugger_obj::setEventNotificationHandler(this->handleThreadEvent_dyn());
HXLINE( 188)		::cpp::vm::Debugger_obj::enableCurrentThreadDebugging(false);
HXLINE( 189)		::cpp::vm::Debugger_obj::breakNow(true);
HXLINE( 191)		HX_VARI( ::Array< ::String >,fullPathes) = ::cpp::vm::Debugger_obj::getFilesFullPath();
HXLINE( 192)		HX_VARI( ::Array< ::String >,files) = ::cpp::vm::Debugger_obj::getFiles();
HXLINE( 193)		{
HXLINE( 193)			int _g = 0;
HXDLIN( 193)			int _g1 = files->length;
HXDLIN( 193)			while((_g < _g1)){
HXLINE( 193)				_g = (_g + 1);
HXDLIN( 193)				HX_VARI( int,i) = (_g - 1);
HXLINE( 194)				HX_VARI( ::String,file) = files->__get(i);
HXLINE( 195)				HX_VARI( ::String,path) = fullPathes->__get(i);
HXLINE( 196)				{
HXLINE( 196)					::Dynamic this1 = this->path2file;
HXDLIN( 196)					( ( ::haxe::ds::StringMap)(this1) )->set(this->path2Key(path),file);
            				}
HXLINE( 197)				{
HXLINE( 197)					::Dynamic this2 = this->file2path;
HXDLIN( 197)					( ( ::haxe::ds::StringMap)(this2) )->set(this->path2Key(file),path);
            				}
            			}
            		}
HXLINE( 200)		HX_VARI( ::Array< ::String >,classes) = ::cpp::vm::Debugger_obj::getClasses();
HXLINE( 201)		::hxcpp::debug::jsonrpc::eval::Interp_obj::globals =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 203)		::hxcpp::debug::jsonrpc::eval::Interp_obj::globals->set(HX_("Math",e8,6d,2f,33),( ( ::Dynamic)(::hx::ClassOf< ::Math >()) ));
HXLINE( 204)		::hxcpp::debug::jsonrpc::eval::Interp_obj::globals->set(HX_("String",f1,9c,c4,45),( ( ::Dynamic)(::hx::ClassOf< ::String >()) ));
HXLINE( 206)		HX_VARI(  ::Dynamic,appStructure) =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE( 207)		{
HXLINE( 207)			int _g2 = 0;
HXDLIN( 207)			while((_g2 < classes->length)){
HXLINE( 207)				HX_VARI( ::String,c) = classes->__get(_g2);
HXDLIN( 207)				_g2 = (_g2 + 1);
HXLINE( 208)				HX_VARI( ::Array< ::String >,pack) = c.split(HX_(".",2e,00,00,00));
HXLINE( 209)				HX_VARI( ::hx::Class,klass) = ::Type_obj::resolveClass(c);
HXLINE( 210)				HX_VARI( ::hx::Class,globalValue) = klass;
HXLINE( 211)				HX_VARI(  ::Dynamic,currentNode) = appStructure;
HXLINE( 213)				HX_VARI( ::String,globalName) = ( (::String)(pack->pop()) );
HXLINE( 214)				while((pack->length > 0)){
HXLINE( 215)					HX_VARI( ::String,pathPart) = ( (::String)(pack->shift()) );
HXLINE( 216)					if (!(::Reflect_obj::hasField(currentNode,pathPart))) {
HXLINE( 217)						::Reflect_obj::setField(currentNode,pathPart, ::Dynamic(::hx::Anon_obj::Create(0)));
            					}
HXLINE( 219)					currentNode = ::Reflect_obj::field(currentNode,pathPart);
            				}
HXLINE( 221)				::Reflect_obj::setField(currentNode,globalName,globalValue);
            			}
            		}
HXLINE( 224)		{
HXLINE( 224)			int _g3 = 0;
HXDLIN( 224)			::Array< ::String > _g4 = ::Reflect_obj::fields(appStructure);
HXDLIN( 224)			while((_g3 < _g4->length)){
HXLINE( 224)				HX_VARI( ::String,key) = _g4->__get(_g3);
HXDLIN( 224)				_g3 = (_g3 + 1);
HXLINE( 225)				HX_VARI(  ::Dynamic,value) = ::Reflect_obj::field(appStructure,key);
HXLINE( 226)				::hxcpp::debug::jsonrpc::eval::Interp_obj::globals->set(key,value);
            			}
            		}
HXLINE( 229)		::hxcpp::debug::jsonrpc::Server_obj::startQueue->push(true);
HXLINE( 230)		while(true){
HXLINE( 231)			HX_VAR(  ::Dynamic,m);
HXDLIN( 231)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 231)				m = this->readMessage();
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 233)					{
HXLINE( 233)						null();
            					}
HXLINE( 234)					this->onDebuggerDetached();
HXLINE( 235)					return;
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXLINE( 237)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 238)				this->processMessage(m);
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 239)					{
HXLINE( 239)						null();
            					}
HXDLIN( 239)					HX_VARI(  ::Dynamic,e) = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 240)					m->__SetField(HX_("error",c8,cb,29,73), ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("message",c7,35,11,9a),::Std_obj::string(e))
            						->setFixed(1,HX_("code",2d,b1,c4,41),500)),::hx::paccDynamic);
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXLINE( 242)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 243)				this->sendResponse(m);
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 244)					{
HXLINE( 244)						null();
            					}
HXLINE( 245)					this->onDebuggerDetached();
HXLINE( 246)					return;
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Server_obj,debuggerThreadMain,(void))

 ::Dynamic Server_obj::readMessage(){
            	HX_GC_STACKFRAME(&_hx_pos_f75d861e40f322f5_251_readMessage)
            	HX_STACK_THIS(this)
HXLINE( 251)
HXLINE( 252)		if (::hx::IsNull( this->socket )) {
HXLINE( 253)			return null();
            		}
HXLINE( 255)		HX_VARI( int,length) = this->socket->input->readInt32();
HXLINE( 257)		HX_VARI( ::String,rawString) = this->socket->input->readString(length,null());
HXLINE( 258)		return  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,rawString)->doParse();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Server_obj,readMessage,return )

void Server_obj::sendResponse( ::Dynamic m){
            	HX_STACKFRAME(&_hx_pos_f75d861e40f322f5_261_sendResponse)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(m,"m")
HXLINE( 261)
HXLINE( 262)		if (::hx::IsNull( this->socket )) {
HXLINE( 263)			return;
            		}
HXLINE( 265)		this->socketMutex->acquire();
HXLINE( 266)		 ::Dynamic replacer = null();
HXDLIN( 266)		::String space = null();
HXDLIN( 266)		HX_VARI( ::String,serialized) = ::haxe::format::JsonPrinter_obj::print(m,replacer,space);
HXLINE( 267)		this->socket->output->writeInt32(serialized.length);
HXLINE( 268)		this->socket->output->writeString(serialized,null());
HXLINE( 270)		this->socketMutex->release();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Server_obj,sendResponse,(void))

void Server_obj::processMessage( ::Dynamic m){
            	HX_GC_STACKFRAME(&_hx_pos_f75d861e40f322f5_274_processMessage)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(m,"m")
HXLINE( 274)
HXDLIN( 274)		::String _hx_switch_0 = ( (::String)(m->__Field(HX_("method",e1,f6,5a,09),::hx::paccDynamic)) );
            		if (  (_hx_switch_0==HX_("completions",d7,ed,79,0a)) ){
HXLINE( 413)			if (::hx::IsNotNull( this->currentThreadInfo )) {
HXLINE( 414)				this->stateMutex->acquire();
HXLINE( 415)				HX_VARI( int,frameId) = this->getTopFrame();
HXLINE( 416)				HX_VARI( ::Array< ::Dynamic>,completions) = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 417)				HX_VARI( ::Array< ::String >,variables) = ::cpp::vm::Debugger_obj::getStackVariables(this->currentThreadInfo->number,frameId,false);
HXLINE( 418)				{
HXLINE( 418)					int _g = 0;
HXDLIN( 418)					while((_g < variables->length)){
HXLINE( 418)						HX_VARI( ::String,variable) = variables->__get(_g);
HXDLIN( 418)						_g = (_g + 1);
HXLINE( 419)						completions->push( ::Dynamic(::hx::Anon_obj::Create(1)
            							->setFixed(0,HX_("label",f4,0d,af,6f),variable)));
            					}
            				}
HXLINE( 428)				m->__SetField(HX_("result",dd,68,84,08),completions,::hx::paccDynamic);
HXLINE( 429)				this->stateMutex->release();
            			}
HXLINE( 413)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("continue",67,e0,c8,31)) ){
HXLINE( 306)			::cpp::vm::Debugger_obj::continueThreads(( (int)( ::Dynamic(m->__Field(HX_("params",46,fb,7a,ed),::hx::paccDynamic))->__Field(HX_("threadId",45,81,25,cc),::hx::paccDynamic)) ),1);
HXLINE( 307)			if (!(this->started)) {
HXLINE( 308)				this->started = true;
HXLINE( 309)				::hxcpp::debug::jsonrpc::Server_obj::startQueue->push(true);
            			}
HXLINE( 305)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("evaluate",59,60,50,01)) ){
HXLINE( 432)			HX_VARI( ::String,expr) = ( (::String)( ::Dynamic(m->__Field(HX_("params",46,fb,7a,ed),::hx::paccDynamic))->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic)) );
HXLINE( 433)			m->__SetField(HX_("result",dd,68,84,08), ::Dynamic(::hx::Anon_obj::Create(4)
            				->setFixed(0,HX_("value",71,7f,b8,31),HX_("",00,00,00,00))
            				->setFixed(1,HX_("name",4b,72,ff,48),expr)
            				->setFixed(2,HX_("type",ba,f2,08,4d),HX_("",00,00,00,00))
            				->setFixed(3,HX_("variablesReference",14,76,04,51),0)),::hx::paccDynamic);
HXLINE( 439)			this->stateMutex->acquire();
HXLINE( 440)			if (::hx::IsNotNull( this->currentThreadInfo )) {
HXLINE( 441)				HX_VARI( int,threadId) = this->currentThreadInfo->number;
HXLINE( 442)				HX_VARI( int,frameId) = ( (int)( ::Dynamic(m->__Field(HX_("params",46,fb,7a,ed),::hx::paccDynamic))->__Field(HX_("frameId",68,dd,73,48),::hx::paccDynamic)) );
HXLINE( 443)				HX_VARI(  ::Dynamic,v) = ::hxcpp::debug::jsonrpc::VariablesPrinter_obj::evaluate(this->parser,expr,threadId,frameId);
HXLINE( 445)				if (::hx::IsNotNull( v )) {
HXLINE( 446)					 ::Dynamic(m->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__SetField(HX_("type",ba,f2,08,4d),v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic),::hx::paccDynamic);
HXLINE( 447)					{
HXLINE( 447)						 ::hxcpp::debug::jsonrpc::Value _g = v->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic);
HXDLIN( 447)						switch((int)(_g->_hx_getIndex())){
            							case (int)0: {
HXLINE( 463)								HX_VARI(  ::Dynamic,value) = _g->_hx_getObject(0);
HXLINE( 464)								 ::Dynamic(m->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__SetField(HX_("value",71,7f,b8,31),value,::hx::paccDynamic);
            							}
            							break;
            							case (int)1: {
HXLINE( 451)								 ::Dynamic _g1 = _g->_hx_getObject(2);
HXDLIN( 451)								{
HXLINE( 451)									HX_VARI(  ::Dynamic,value) = _g->_hx_getObject(0);
HXDLIN( 451)									HX_VARI( int,length) = _g->_hx_getInt(1);
HXDLIN( 451)									{
HXLINE( 452)										HX_VARI( int,refId) = this->references->create(v->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic));
HXLINE( 453)										 ::Dynamic(m->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__SetField(HX_("variablesReference",14,76,04,51),refId,::hx::paccDynamic);
HXLINE( 454)										 ::Dynamic(m->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__SetField(HX_("indexedVariables",86,e0,4d,32),length,::hx::paccDynamic);
HXLINE( 455)										 ::Dynamic(m->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__SetField(HX_("value",71,7f,b8,31),::Std_obj::string(value),::hx::paccDynamic);
            									}
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 457)								bool _g1 = _g->_hx_getBool(3);
HXDLIN( 457)								 ::Dynamic _g2 = _g->_hx_getObject(4);
HXDLIN( 457)								{
HXLINE( 457)									HX_VARI(  ::Dynamic,value) = _g->_hx_getObject(0);
HXDLIN( 457)									HX_VARI( ::String,printedValue) = _g->_hx_getString(1);
HXDLIN( 457)									HX_VARI( ::Array< ::String >,names) = _g->_hx_getObject(2).StaticCast< ::Array< ::String > >();
HXDLIN( 457)									{
HXLINE( 458)										HX_VARI( int,refId) = this->references->create(v->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic));
HXLINE( 459)										 ::Dynamic(m->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__SetField(HX_("variablesReference",14,76,04,51),refId,::hx::paccDynamic);
HXLINE( 460)										 ::Dynamic(m->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__SetField(HX_("namedVariables",be,f3,f7,2b),names->length,::hx::paccDynamic);
HXLINE( 461)										 ::Dynamic(m->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__SetField(HX_("value",71,7f,b8,31),printedValue,::hx::paccDynamic);
            									}
            								}
            							}
            							break;
            							case (int)3: {
HXLINE( 448)								HX_VARI( ::Array< ::String >,names) = _g->_hx_getObject(0).StaticCast< ::Array< ::String > >();
HXDLIN( 448)								HX_VARI( ::cpp::VirtualArray,values) = _g->_hx_getObject(1).StaticCast< ::cpp::VirtualArray >();
HXLINE( 449)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("impossible",55,a2,06,35)));
            							}
            							break;
            						}
            					}
            				}
            			}
HXLINE( 468)			this->stateMutex->release();
HXLINE( 431)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("getScopes",95,79,c0,c1)) ){
HXLINE( 321)			m->__SetField(HX_("result",dd,68,84,08),::cpp::VirtualArray_obj::__new(0),::hx::paccDynamic);
HXLINE( 323)			this->stateMutex->acquire();
HXLINE( 324)			if (::hx::IsNotNull( this->currentThreadInfo )) {
HXLINE( 325)				HX_VARI( int,threadId) = this->currentThreadInfo->number;
HXLINE( 326)				HX_VARI( int,frameId) = ( (int)( ::Dynamic(m->__Field(HX_("params",46,fb,7a,ed),::hx::paccDynamic))->__Field(HX_("frameId",68,dd,73,48),::hx::paccDynamic)) );
HXLINE( 328)				HX_VARI( ::Array< ::String >,stackVariables) = ::cpp::vm::Debugger_obj::getStackVariables(threadId,frameId,false);
HXLINE( 329)				HX_VARI( int,localsId) = 0;
HXLINE( 330)				HX_VARI( ::Array< ::String >,localsNames) = ::Array_obj< ::String >::__new(0);
HXLINE( 331)				HX_VARI( ::cpp::VirtualArray,localsVals) = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 332)				{
HXLINE( 332)					int _g = 0;
HXDLIN( 332)					while((_g < stackVariables->length)){
HXLINE( 332)						HX_VARI( ::String,varName) = stackVariables->__get(_g);
HXDLIN( 332)						_g = (_g + 1);
HXLINE( 333)						if ((varName == HX_("this",5e,06,fc,4c))) {
HXLINE( 334)							HX_VARI(  ::Dynamic,value) = ::cpp::vm::Debugger_obj::getStackVariableValue(threadId,frameId,HX_("this",5e,06,fc,4c),false);
HXLINE( 335)							 ::hxcpp::debug::jsonrpc::_Server::References id = this->references;
HXDLIN( 335)							HX_VARI( int,id1) = id->create(::hxcpp::debug::jsonrpc::VariablesPrinter_obj::resolveValue(value));
HXLINE( 336)							 ::Dynamic(m->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__Field(HX_("push",da,11,61,4a),::hx::paccDynamic)( ::Dynamic(::hx::Anon_obj::Create(2)
            								->setFixed(0,HX_("id",db,5b,00,00),id1)
            								->setFixed(1,HX_("name",4b,72,ff,48),HX_("Members",b9,54,c1,e7))));
            						}
            						else {
HXLINE( 338)							if ((localsId == 0)) {
HXLINE( 339)								localsId = this->references->create(::hxcpp::debug::jsonrpc::Value_obj::NameValueList(localsNames,localsVals));
HXLINE( 340)								 ::Dynamic(m->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__Field(HX_("push",da,11,61,4a),::hx::paccDynamic)( ::Dynamic(::hx::Anon_obj::Create(2)
            									->setFixed(0,HX_("id",db,5b,00,00),localsId)
            									->setFixed(1,HX_("name",4b,72,ff,48),HX_("Locals",c8,e8,53,8e))));
            							}
HXLINE( 342)							localsNames->push(varName);
HXLINE( 343)							localsVals->push(::cpp::vm::Debugger_obj::getStackVariableValue(threadId,frameId,varName,false));
            						}
            					}
            				}
            			}
HXLINE( 347)			this->stateMutex->release();
HXLINE( 320)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("getVariables",41,7f,b9,91)) ){
HXLINE( 350)			m->__SetField(HX_("result",dd,68,84,08),::cpp::VirtualArray_obj::__new(0),::hx::paccDynamic);
HXLINE( 352)			this->stateMutex->acquire();
HXLINE( 354)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 355)				if (::hx::IsNotNull( this->currentThreadInfo )) {
HXLINE( 356)					HX_VARI( int,refId) = ( (int)( ::Dynamic(m->__Field(HX_("params",46,fb,7a,ed),::hx::paccDynamic))->__Field(HX_("variablesReference",14,76,04,51),::hx::paccDynamic)) );
HXLINE( 357)					HX_VARI(  ::hxcpp::debug::jsonrpc::Value,value) = this->references->get(refId);
HXLINE( 358)					HX_VARI( ::Array< ::Dynamic>,vars) = ::hxcpp::debug::jsonrpc::VariablesPrinter_obj::getInnerVariables(value, ::Dynamic(m->__Field(HX_("params",46,fb,7a,ed),::hx::paccDynamic))->__Field(HX_("start",62,74,0b,84),::hx::paccDynamic), ::Dynamic(m->__Field(HX_("params",46,fb,7a,ed),::hx::paccDynamic))->__Field(HX_("count",cf,44,63,4a),::hx::paccDynamic));
HXLINE( 360)					{
HXLINE( 360)						int _g = 0;
HXDLIN( 360)						while((_g < vars->length)){
HXLINE( 360)							HX_VARI(  ::Dynamic,v) = vars->__get(_g);
HXDLIN( 360)							_g = (_g + 1);
HXLINE( 361)							HX_VARI(  ::Dynamic,varInfo) =  ::Dynamic(::hx::Anon_obj::Create(4)
            								->setFixed(0,HX_("value",71,7f,b8,31),HX_("",00,00,00,00))
            								->setFixed(1,HX_("name",4b,72,ff,48), ::Dynamic(v->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)))
            								->setFixed(2,HX_("type",ba,f2,08,4d), ::Dynamic(v->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)))
            								->setFixed(3,HX_("variablesReference",14,76,04,51),0));
HXLINE( 367)							{
HXLINE( 367)								 ::hxcpp::debug::jsonrpc::Value _g1 = v->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic);
HXDLIN( 367)								switch((int)(_g1->_hx_getIndex())){
            									case (int)0: {
HXLINE( 383)										HX_VARI(  ::Dynamic,value) = _g1->_hx_getObject(0);
HXLINE( 384)										varInfo->__SetField(HX_("value",71,7f,b8,31),value,::hx::paccDynamic);
            									}
            									break;
            									case (int)1: {
HXLINE( 371)										 ::Dynamic _g = _g1->_hx_getObject(2);
HXDLIN( 371)										{
HXLINE( 371)											HX_VARI(  ::Dynamic,value) = _g1->_hx_getObject(0);
HXDLIN( 371)											HX_VARI( int,length) = _g1->_hx_getInt(1);
HXDLIN( 371)											{
HXLINE( 372)												HX_VARI( int,refId) = this->references->create(v->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic));
HXLINE( 373)												varInfo->__SetField(HX_("variablesReference",14,76,04,51),refId,::hx::paccDynamic);
HXLINE( 374)												varInfo->__SetField(HX_("indexedVariables",86,e0,4d,32),length,::hx::paccDynamic);
HXLINE( 375)												varInfo->__SetField(HX_("value",71,7f,b8,31),::Std_obj::string(value),::hx::paccDynamic);
            											}
            										}
            									}
            									break;
            									case (int)2: {
HXLINE( 377)										bool _g = _g1->_hx_getBool(3);
HXDLIN( 377)										 ::Dynamic _g2 = _g1->_hx_getObject(4);
HXDLIN( 377)										{
HXLINE( 377)											HX_VARI(  ::Dynamic,value) = _g1->_hx_getObject(0);
HXDLIN( 377)											HX_VARI( ::String,printedValue) = _g1->_hx_getString(1);
HXDLIN( 377)											HX_VARI( ::Array< ::String >,names) = _g1->_hx_getObject(2).StaticCast< ::Array< ::String > >();
HXDLIN( 377)											{
HXLINE( 378)												HX_VARI( int,refId) = this->references->create(v->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic));
HXLINE( 379)												varInfo->__SetField(HX_("variablesReference",14,76,04,51),refId,::hx::paccDynamic);
HXLINE( 380)												varInfo->__SetField(HX_("namedVariables",be,f3,f7,2b),names->length,::hx::paccDynamic);
HXLINE( 381)												varInfo->__SetField(HX_("value",71,7f,b8,31),printedValue,::hx::paccDynamic);
            											}
            										}
            									}
            									break;
            									case (int)3: {
HXLINE( 368)										HX_VARI( ::Array< ::String >,names) = _g1->_hx_getObject(0).StaticCast< ::Array< ::String > >();
HXDLIN( 368)										HX_VARI( ::cpp::VirtualArray,values) = _g1->_hx_getObject(1).StaticCast< ::cpp::VirtualArray >();
HXLINE( 369)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("impossible",55,a2,06,35)));
            									}
            									break;
            								}
            							}
HXLINE( 386)							 ::Dynamic(m->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__Field(HX_("push",da,11,61,4a),::hx::paccDynamic)(varInfo);
            						}
            					}
            				}
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 389)					{
HXLINE( 389)						null();
            					}
HXDLIN( 389)					HX_VARI(  ::Dynamic,e) = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 390)					this->stateMutex->release();
HXLINE( 391)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXLINE( 393)			this->stateMutex->release();
HXLINE( 349)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("next",f3,84,02,49)) ){
HXLINE( 493)			::cpp::vm::Debugger_obj::stepThread(0,2,1);
HXDLIN( 493)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("pause",f6,d6,57,bd)) ){
HXLINE( 303)			::cpp::vm::Debugger_obj::breakNow(true);
HXDLIN( 303)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("setBreakpoints",a0,0b,0f,dc)) ){
HXLINE( 276)			HX_VARI(  ::Dynamic,params) = m->__Field(HX_("params",46,fb,7a,ed),::hx::paccDynamic);
HXLINE( 277)			HX_VARI( ::Array< ::Dynamic>,result) = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 279)			::Dynamic this1 = this->breakpoints;
HXDLIN( 279)			if (!(( ( ::haxe::ds::StringMap)(this1) )->exists(this->path2Key(( (::String)(params->__Field(HX_("file",7c,ce,bb,43),::hx::paccDynamic)) ))))) {
HXLINE( 280)				::Dynamic this1 = this->breakpoints;
HXDLIN( 280)				::Array< ::Dynamic> v = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 280)				( ( ::haxe::ds::StringMap)(this1) )->set(this->path2Key(( (::String)(params->__Field(HX_("file",7c,ce,bb,43),::hx::paccDynamic)) )),v);
            			}
HXLINE( 282)			{
HXLINE( 282)				int _g = 0;
HXDLIN( 282)				::Dynamic this2 = this->breakpoints;
HXDLIN( 282)				::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(( ( ::haxe::ds::StringMap)(this2) )->get(this->path2Key(( (::String)(params->__Field(HX_("file",7c,ce,bb,43),::hx::paccDynamic)) )))) );
HXDLIN( 282)				while((_g < _g1->length)){
HXLINE( 282)					HX_VARI(  ::Dynamic,rm) = _g1->__get(_g);
HXDLIN( 282)					_g = (_g + 1);
HXLINE( 283)					::cpp::vm::Debugger_obj::deleteBreakpoint(rm->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic));
            				}
            			}
HXLINE( 285)			{
HXLINE( 285)				int _g2 = 0;
HXDLIN( 285)				::Array< ::Dynamic> _g3 = ( (::Array< ::Dynamic>)(params->__Field(HX_("breakpoints",22,d0,50,34),::hx::paccDynamic)) );
HXDLIN( 285)				while((_g2 < _g3->length)){
HXLINE( 285)					HX_VARI(  ::Dynamic,b) = _g3->__get(_g2);
HXDLIN( 285)					_g2 = (_g2 + 1);
HXLINE( 286)					HX_VARI(  ::Dynamic,bInfo) =  ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("id",db,5b,00,00),0)
            						->setFixed(1,HX_("line",f4,17,b3,47), ::Dynamic(b->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic))));
HXLINE( 287)					if (::hx::IsNotNull( b->__Field(HX_("condition",9b,e9,33,fc),::hx::paccDynamic) )) {
HXLINE( 288)						try {
            							HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 289)							HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,ast) = this->parser->parseString(( (::String)(b->__Field(HX_("condition",9b,e9,33,fc),::hx::paccDynamic)) ),null());
HXLINE( 290)							bInfo->__SetField(HX_("condition",9b,e9,33,fc),ast,::hx::paccDynamic);
            						} catch( ::Dynamic _hx_e) {
            							if (_hx_e.IsClass<  ::Dynamic >() ){
            								HX_STACK_BEGIN_CATCH
            								 ::Dynamic _g = _hx_e;
HXLINE( 291)								{
HXLINE( 291)									null();
            								}
HXLINE( 292)								m->__SetField(HX_("error",c8,cb,29,73), ::Dynamic(::hx::Anon_obj::Create(2)
            									->setFixed(0,HX_("message",c7,35,11,9a),HX_("can't parse condition",cb,3b,7f,9e))
            									->setFixed(1,HX_("code",2d,b1,c4,41),422)),::hx::paccDynamic);
HXLINE( 293)								continue;
            							}
            							else {
            								HX_STACK_DO_THROW(_hx_e);
            							}
            						}
            					}
HXLINE( 296)					::Dynamic this1 = this->path2file;
HXDLIN( 296)					::String _hx_tmp = ( ( ::haxe::ds::StringMap)(this1) )->get_string(this->path2Key(( (::String)(params->__Field(HX_("file",7c,ce,bb,43),::hx::paccDynamic)) )));
HXDLIN( 296)					bInfo->__SetField(HX_("id",db,5b,00,00),::cpp::vm::Debugger_obj::addFileLineBreakpoint(_hx_tmp,( (int)(bInfo->__Field(HX_("line",f4,17,b3,47),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 297)					result->push(bInfo);
            				}
            			}
HXLINE( 299)			{
HXLINE( 299)				::Dynamic this3 = this->breakpoints;
HXDLIN( 299)				( ( ::haxe::ds::StringMap)(this3) )->set(this->path2Key(( (::String)(params->__Field(HX_("file",7c,ce,bb,43),::hx::paccDynamic)) )),result);
            			}
HXLINE( 300)			::cpp::VirtualArray _g4 = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 300)			{
HXLINE( 300)				int _g5 = 0;
HXDLIN( 300)				while((_g5 < result->length)){
HXLINE( 300)					HX_VARI(  ::Dynamic,b) = result->__get(_g5);
HXDLIN( 300)					_g5 = (_g5 + 1);
HXDLIN( 300)					_g4->push( ::Dynamic(b->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)));
            				}
            			}
HXDLIN( 300)			m->__SetField(HX_("result",dd,68,84,08),_g4,::hx::paccDynamic);
HXLINE( 275)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("setVariable",fe,db,6d,99)) ){
HXLINE( 395)			if (::hx::IsNotNull( this->currentThreadInfo )) {
HXLINE( 396)				this->stateMutex->acquire();
HXLINE( 397)				HX_VARI( ::String,name) = ( (::String)( ::Dynamic(m->__Field(HX_("params",46,fb,7a,ed),::hx::paccDynamic))->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic)) );
HXLINE( 398)				HX_VARI( ::String,value) = ( (::String)( ::Dynamic(m->__Field(HX_("params",46,fb,7a,ed),::hx::paccDynamic))->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic)) );
HXLINE( 399)				HX_VARI(  ::EReg,stringPattern) =  ::EReg_obj::__alloc( HX_CTX ,HX_("\"(.*?)\"",96,cb,81,1c),HX_("",00,00,00,00));
HXLINE( 400)				if (stringPattern->match(value)) {
HXLINE( 401)					value = stringPattern->matched(1);
            				}
HXLINE( 403)				HX_VARI( int,frameId) = (this->currentThreadInfo->stack->length - 3);
HXLINE( 404)				HX_VARI(  ::Dynamic,result) = ::cpp::vm::Debugger_obj::setStackVariableValue(this->currentThreadInfo->number,frameId,name,value,false);
HXLINE( 406)				 ::hxcpp::debug::jsonrpc::Value _g = ::hxcpp::debug::jsonrpc::VariablesPrinter_obj::resolveValue(result);
HXDLIN( 406)				::String _hx_tmp;
HXDLIN( 406)				if ((_g->_hx_getIndex() == 0)) {
HXLINE( 407)					HX_VARI(  ::Dynamic,val) = _g->_hx_getObject(0);
HXLINE( 406)					_hx_tmp = ( (::String)(val) );
            				}
            				else {
HXLINE( 406)					_hx_tmp = ::Std_obj::string(result);
            				}
HXLINE( 405)				m->__SetField(HX_("result",dd,68,84,08), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("value",71,7f,b8,31),_hx_tmp)),::hx::paccDynamic);
HXLINE( 411)				this->stateMutex->release();
            			}
HXLINE( 395)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("stackTrace",1d,32,3e,29)) ){
HXLINE( 471)			m->__SetField(HX_("result",dd,68,84,08),::cpp::VirtualArray_obj::__new(0),::hx::paccDynamic);
HXLINE( 473)			this->stateMutex->acquire();
HXLINE( 474)			if (::hx::IsNotNull( this->currentThreadInfo )) {
HXLINE( 475)				HX_VARI( int,i) = 0;
HXLINE( 476)				{
HXLINE( 476)					int _g = 0;
HXDLIN( 476)					::Array< ::Dynamic> _g1 = this->currentThreadInfo->stack;
HXDLIN( 476)					while((_g < _g1->length)){
HXLINE( 476)						HX_VARI(  ::cpp::vm::StackFrame,s) = _g1->__get(_g).StaticCast<  ::cpp::vm::StackFrame >();
HXDLIN( 476)						_g = (_g + 1);
HXLINE( 477)						if ((s->fileName == HX_("hxcpp/debug/jsonrpc/Server.hx",71,c2,e2,bc))) {
HXLINE( 478)							goto _hx_goto_26;
            						}
HXLINE( 480)						 ::Dynamic m1 =  ::Dynamic( ::Dynamic(m->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__Field(HX_("unshift",89,e3,b3,78),::hx::paccDynamic));
HXLINE( 481)						i = (i + 1);
HXLINE( 482)						::String _hx_tmp = (((HX_("",00,00,00,00) + s->className) + HX_(".",2e,00,00,00)) + s->functionName);
HXLINE( 483)						::Dynamic this1 = this->file2path;
HXDLIN( 483)						::String _hx_tmp1 = ( ( ::haxe::ds::StringMap)(this1) )->get_string(this->path2Key(s->fileName));
HXLINE( 480)						m1( ::Dynamic(::hx::Anon_obj::Create(6)
            							->setFixed(0,HX_("column",d6,4e,8b,c6),0)
            							->setFixed(1,HX_("id",db,5b,00,00),(i - 1))
            							->setFixed(2,HX_("source",db,b0,31,32),_hx_tmp1)
            							->setFixed(3,HX_("artificial",fa,70,1b,44),false)
            							->setFixed(4,HX_("line",f4,17,b3,47),s->lineNumber)
            							->setFixed(5,HX_("name",4b,72,ff,48),_hx_tmp)));
            					}
            					_hx_goto_26:;
            				}
            			}
HXLINE( 490)			this->stateMutex->release();
HXLINE( 470)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("stepIn",51,92,9d,08)) ){
HXLINE( 496)			::cpp::vm::Debugger_obj::stepThread(0,1,1);
HXDLIN( 496)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("stepOut",a2,08,47,81)) ){
HXLINE( 499)			::cpp::vm::Debugger_obj::stepThread(0,3,1);
HXDLIN( 499)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("threads",69,f6,91,53)) ){
HXLINE( 313)			this->stateMutex->acquire();
HXLINE( 314)			::cpp::VirtualArray _g = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 315)			{
HXLINE( 315)				HX_VARI(  ::Dynamic,tid) = this->threads->keys();
HXDLIN( 315)				while(( (bool)(tid->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 315)					HX_VARI( int,tid1) = ( (int)(tid->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 316)					_g->push( ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("id",db,5b,00,00),tid1)
            						->setFixed(1,HX_("name",4b,72,ff,48),this->threads->get(tid1))));
            				}
            			}
HXLINE( 314)			m->__SetField(HX_("result",dd,68,84,08),_g,::hx::paccDynamic);
HXLINE( 318)			this->stateMutex->release();
HXLINE( 312)			goto _hx_goto_19;
            		}
            		_hx_goto_19:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Server_obj,processMessage,(void))

void Server_obj::sendEvent(::String event, ::Dynamic params){
            	HX_STACKFRAME(&_hx_pos_f75d861e40f322f5_503_sendEvent)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(event,"event")
            	HX_STACK_ARG(params,"params")
HXLINE( 503)
HXLINE( 504)		HX_VARI(  ::Dynamic,m) =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("params",46,fb,7a,ed),params)
            			->setFixed(1,HX_("method",e1,f6,5a,09),event));
HXLINE( 508)		this->sendResponse(m);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Server_obj,sendEvent,(void))

void Server_obj::handleThreadEvent(int threadNumber,int event,int stackFrame,::String className,::String functionName,::String fileName,int lineNumber){
            	HX_STACKFRAME(&_hx_pos_f75d861e40f322f5_514_handleThreadEvent)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(threadNumber,"threadNumber")
            	HX_STACK_ARG(event,"event")
            	HX_STACK_ARG(stackFrame,"stackFrame")
            	HX_STACK_ARG(className,"className")
            	HX_STACK_ARG(functionName,"functionName")
            	HX_STACK_ARG(fileName,"fileName")
            	HX_STACK_ARG(lineNumber,"lineNumber")
HXLINE( 514)
HXDLIN( 514)		switch((int)(event)){
            			case (int)1: case (int)3: {
HXLINE( 525)				this->stateMutex->acquire();
HXLINE( 526)				this->threads->set(threadNumber,(HX_("Thread",ea,ee,4d,c3) + threadNumber));
HXLINE( 527)				bool _hx_tmp;
HXDLIN( 527)				if (::hx::IsNotNull( this->currentThreadInfo )) {
HXLINE( 527)					_hx_tmp = (threadNumber == this->currentThreadInfo->number);
            				}
            				else {
HXLINE( 527)					_hx_tmp = false;
            				}
HXDLIN( 527)				if (_hx_tmp) {
HXLINE( 528)					this->currentThreadInfo = null();
            				}
HXLINE( 530)				this->stateMutex->release();
HXLINE( 531)				this->sendEvent(HX_("threadStart",38,0d,fc,d7), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("threadId",45,81,25,cc),threadNumber)));
            			}
            			break;
            			case (int)2: {
HXLINE( 516)				this->stateMutex->acquire();
HXLINE( 517)				this->threads->remove(threadNumber);
HXLINE( 518)				bool _hx_tmp;
HXDLIN( 518)				if (::hx::IsNotNull( this->currentThreadInfo )) {
HXLINE( 518)					_hx_tmp = (threadNumber == this->currentThreadInfo->number);
            				}
            				else {
HXLINE( 518)					_hx_tmp = false;
            				}
HXDLIN( 518)				if (_hx_tmp) {
HXLINE( 519)					this->currentThreadInfo = null();
            				}
HXLINE( 521)				this->stateMutex->release();
HXLINE( 522)				this->sendEvent(HX_("ThreadExit",28,cf,97,35), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("threadId",45,81,25,cc),threadNumber)));
            			}
            			break;
            			case (int)4: {
HXLINE( 534)				this->stateMutex->acquire();
HXLINE( 535)				this->currentThreadInfo = ::cpp::vm::Debugger_obj::getThreadInfo(threadNumber,false);
HXLINE( 536)				this->references->clear();
HXLINE( 537)				this->stateMutex->release();
HXLINE( 539)				if ((this->currentThreadInfo->status == 2)) {
HXLINE( 540)					this->sendEvent(HX_("pauseStop",18,a6,c2,50), ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("threadId",45,81,25,cc),threadNumber)));
            				}
            				else {
HXLINE( 541)					if ((this->currentThreadInfo->status == 3)) {
HXLINE( 542)						HX_VARI( int,bId) = this->currentThreadInfo->breakpoint;
HXLINE( 543)						::Dynamic this1 = this->file2path;
HXDLIN( 543)						HX_VARI( ::String,path) = ( ( ::haxe::ds::StringMap)(this1) )->get_string(this->path2Key(fileName));
HXLINE( 544)						::Dynamic this2 = this->breakpoints;
HXDLIN( 544)						HX_VARI( ::Array< ::Dynamic>,thisFileBreakpoints) = ( (::Array< ::Dynamic>)(( ( ::haxe::ds::StringMap)(this2) )->get(this->path2Key(path))) );
HXLINE( 545)						{
HXLINE( 545)							int _g = 0;
HXDLIN( 545)							while((_g < thisFileBreakpoints->length)){
HXLINE( 545)								HX_VARI(  ::Dynamic,b) = thisFileBreakpoints->__get(_g);
HXDLIN( 545)								_g = (_g + 1);
HXLINE( 546)								if (::hx::IsNotEq( b->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic),bId )) {
HXLINE( 547)									continue;
            								}
HXLINE( 549)								this->interp = ::hxcpp::debug::jsonrpc::VariablesPrinter_obj::initInterp(threadNumber,this->getTopFrame(),true);
HXLINE( 550)								if (::hx::IsNotNull( b->__Field(HX_("condition",9b,e9,33,fc),::hx::paccDynamic) )) {
HXLINE( 551)									if (!(this->isConditionPass(b->__Field(HX_("condition",9b,e9,33,fc),::hx::paccDynamic)))) {
HXLINE( 552)										::cpp::vm::Debugger_obj::continueThreads(threadNumber,1);
HXLINE( 553)										return;
            									}
            								}
            							}
            						}
HXLINE( 557)						this->sendEvent(HX_("breakpointStop",d3,03,bc,db), ::Dynamic(::hx::Anon_obj::Create(1)
            							->setFixed(0,HX_("threadId",45,81,25,cc),threadNumber)));
            					}
            					else {
HXLINE( 559)						this->sendEvent(HX_("exceptionStop",f1,ff,be,3b), ::Dynamic(::hx::Anon_obj::Create(1)
            							->setFixed(0,HX_("text",ad,cc,f9,4c),this->currentThreadInfo->criticalErrorDescription)));
            					}
            				}
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC7(Server_obj,handleThreadEvent,(void))

bool Server_obj::isConditionPass( ::hxcpp::debug::jsonrpc::eval::Expr condition){
            	HX_STACKFRAME(&_hx_pos_f75d861e40f322f5_566_isConditionPass)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(condition,"condition")
HXLINE( 566)
HXLINE( 567)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 568)			HX_VARI( bool,evalRes) = ( (bool)(this->interp->execute(condition)) );
HXLINE( 569)			return evalRes;
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 570)				{
HXLINE( 570)					null();
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 572)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Server_obj,isConditionPass,return )

int Server_obj::getTopFrame(){
            	HX_STACKFRAME(&_hx_pos_f75d861e40f322f5_577_getTopFrame)
            	HX_STACK_THIS(this)
HXLINE( 577)
HXDLIN( 577)		if (::hx::IsNotNull( this->currentThreadInfo )) {
HXDLIN( 577)			return (this->currentThreadInfo->stack->length - 3);
            		}
            		else {
HXDLIN( 577)			return -1;
            		}
HXDLIN( 577)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Server_obj,getTopFrame,return )

void Server_obj::closeSocket(){
            	HX_STACKFRAME(&_hx_pos_f75d861e40f322f5_581_closeSocket)
            	HX_STACK_THIS(this)
HXLINE( 581)
HXDLIN( 581)		if (::hx::IsNotNull( this->socket )) {
HXLINE( 582)			this->socket->close();
HXLINE( 583)			this->socket = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Server_obj,closeSocket,(void))

::String Server_obj::path2Key(::String path){
            	HX_STACKFRAME(&_hx_pos_f75d861e40f322f5_588_path2Key)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(path,"path")
HXLINE( 588)
HXDLIN( 588)		if (this->isWindows) {
HXDLIN( 588)			return path.toUpperCase();
            		}
            		else {
HXDLIN( 588)			return path;
            		}
HXDLIN( 588)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Server_obj,path2Key,return )

 ::sys::thread::Deque Server_obj::startQueue;

 ::hxcpp::debug::jsonrpc::Server Server_obj::inst;

void Server_obj::log(::String message){
            	HX_STACKFRAME(&_hx_pos_f75d861e40f322f5_592_log)
            	HX_STACK_ARG(message,"message")
HXLINE( 592)
HXDLIN( 592)		::haxe::Log_obj::trace(message,::hx::SourceInfo(HX_("/home/kay/.vscode/extensions/vshaxe.hxcpp-debugger-1.2.4/hxcpp-debug-server/./hxcpp/debug/jsonrpc/Server.hx",aa,a0,46,3d),592,HX_("hxcpp.debug.jsonrpc.Server",6a,85,bd,65),HX_("log",84,54,52,00)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Server_obj,log,(void))


::hx::ObjectPtr< Server_obj > Server_obj::__new(::String host,int port) {
	::hx::ObjectPtr< Server_obj > __this = new Server_obj();
	__this->__construct(host,port);
	return __this;
}

::hx::ObjectPtr< Server_obj > Server_obj::__alloc(::hx::Ctx *_hx_ctx,::String host,int port) {
	Server_obj *__this = (Server_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Server_obj), true, "hxcpp.debug.jsonrpc.Server"));
	*(void **)__this = Server_obj::_hx_vtable;
	__this->__construct(host,port);
	return __this;
}

Server_obj::Server_obj()
{
}

void Server_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Server);
	HX_MARK_MEMBER_NAME(host,"host");
	HX_MARK_MEMBER_NAME(port,"port");
	HX_MARK_MEMBER_NAME(listening,"listening");
	HX_MARK_MEMBER_NAME(socket,"socket");
	HX_MARK_MEMBER_NAME(stateMutex,"stateMutex");
	HX_MARK_MEMBER_NAME(socketMutex,"socketMutex");
	HX_MARK_MEMBER_NAME(currentThreadInfo,"currentThreadInfo");
	HX_MARK_MEMBER_NAME(scopes,"scopes");
	HX_MARK_MEMBER_NAME(threads,"threads");
	HX_MARK_MEMBER_NAME(breakpoints,"breakpoints");
	HX_MARK_MEMBER_NAME(references,"references");
	HX_MARK_MEMBER_NAME(started,"started");
	HX_MARK_MEMBER_NAME(path2file,"path2file");
	HX_MARK_MEMBER_NAME(file2path,"file2path");
	HX_MARK_MEMBER_NAME(mainThread,"mainThread");
	HX_MARK_MEMBER_NAME(interp,"interp");
	HX_MARK_MEMBER_NAME(parser,"parser");
	HX_MARK_MEMBER_NAME(isWindows,"isWindows");
	HX_MARK_END_CLASS();
}

void Server_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(host,"host");
	HX_VISIT_MEMBER_NAME(port,"port");
	HX_VISIT_MEMBER_NAME(listening,"listening");
	HX_VISIT_MEMBER_NAME(socket,"socket");
	HX_VISIT_MEMBER_NAME(stateMutex,"stateMutex");
	HX_VISIT_MEMBER_NAME(socketMutex,"socketMutex");
	HX_VISIT_MEMBER_NAME(currentThreadInfo,"currentThreadInfo");
	HX_VISIT_MEMBER_NAME(scopes,"scopes");
	HX_VISIT_MEMBER_NAME(threads,"threads");
	HX_VISIT_MEMBER_NAME(breakpoints,"breakpoints");
	HX_VISIT_MEMBER_NAME(references,"references");
	HX_VISIT_MEMBER_NAME(started,"started");
	HX_VISIT_MEMBER_NAME(path2file,"path2file");
	HX_VISIT_MEMBER_NAME(file2path,"file2path");
	HX_VISIT_MEMBER_NAME(mainThread,"mainThread");
	HX_VISIT_MEMBER_NAME(interp,"interp");
	HX_VISIT_MEMBER_NAME(parser,"parser");
	HX_VISIT_MEMBER_NAME(isWindows,"isWindows");
}

::hx::Val Server_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"host") ) { return ::hx::Val( host ); }
		if (HX_FIELD_EQ(inName,"port") ) { return ::hx::Val( port ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"socket") ) { return ::hx::Val( socket ); }
		if (HX_FIELD_EQ(inName,"scopes") ) { return ::hx::Val( scopes ); }
		if (HX_FIELD_EQ(inName,"interp") ) { return ::hx::Val( interp ); }
		if (HX_FIELD_EQ(inName,"parser") ) { return ::hx::Val( parser ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"threads") ) { return ::hx::Val( threads ); }
		if (HX_FIELD_EQ(inName,"started") ) { return ::hx::Val( started ); }
		if (HX_FIELD_EQ(inName,"connect") ) { return ::hx::Val( connect_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"path2Key") ) { return ::hx::Val( path2Key_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"listening") ) { return ::hx::Val( listening ); }
		if (HX_FIELD_EQ(inName,"path2file") ) { return ::hx::Val( path2file ); }
		if (HX_FIELD_EQ(inName,"file2path") ) { return ::hx::Val( file2path ); }
		if (HX_FIELD_EQ(inName,"isWindows") ) { return ::hx::Val( isWindows ); }
		if (HX_FIELD_EQ(inName,"sendEvent") ) { return ::hx::Val( sendEvent_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stateMutex") ) { return ::hx::Val( stateMutex ); }
		if (HX_FIELD_EQ(inName,"references") ) { return ::hx::Val( references ); }
		if (HX_FIELD_EQ(inName,"mainThread") ) { return ::hx::Val( mainThread ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"socketMutex") ) { return ::hx::Val( socketMutex ); }
		if (HX_FIELD_EQ(inName,"breakpoints") ) { return ::hx::Val( breakpoints ); }
		if (HX_FIELD_EQ(inName,"readMessage") ) { return ::hx::Val( readMessage_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTopFrame") ) { return ::hx::Val( getTopFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"closeSocket") ) { return ::hx::Val( closeSocket_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sendResponse") ) { return ::hx::Val( sendResponse_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"waitForAttach") ) { return ::hx::Val( waitForAttach_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"processMessage") ) { return ::hx::Val( processMessage_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"isConditionPass") ) { return ::hx::Val( isConditionPass_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentThreadInfo") ) { return ::hx::Val( currentThreadInfo ); }
		if (HX_FIELD_EQ(inName,"handleThreadEvent") ) { return ::hx::Val( handleThreadEvent_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onDebuggerAttached") ) { return ::hx::Val( onDebuggerAttached_dyn() ); }
		if (HX_FIELD_EQ(inName,"onDebuggerDetached") ) { return ::hx::Val( onDebuggerDetached_dyn() ); }
		if (HX_FIELD_EQ(inName,"debuggerThreadMain") ) { return ::hx::Val( debuggerThreadMain_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createListeningSocket") ) { return ::hx::Val( createListeningSocket_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Server_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { outValue = log_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"inst") ) { outValue = ( inst ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startQueue") ) { outValue = ( startQueue ); return true; }
	}
	return false;
}

::hx::Val Server_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"host") ) { host=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"port") ) { port=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"socket") ) { socket=inValue.Cast<  ::sys::net::Socket >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scopes") ) { scopes=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"interp") ) { interp=inValue.Cast<  ::hxcpp::debug::jsonrpc::eval::Interp >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parser") ) { parser=inValue.Cast<  ::hxcpp::debug::jsonrpc::eval::Parser >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"threads") ) { threads=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"started") ) { started=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"listening") ) { listening=inValue.Cast<  ::sys::net::Socket >(); return inValue; }
		if (HX_FIELD_EQ(inName,"path2file") ) { path2file=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"file2path") ) { file2path=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isWindows") ) { isWindows=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stateMutex") ) { stateMutex=inValue.Cast<  ::sys::thread::Mutex >(); return inValue; }
		if (HX_FIELD_EQ(inName,"references") ) { references=inValue.Cast<  ::hxcpp::debug::jsonrpc::_Server::References >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mainThread") ) { mainThread=inValue.Cast<  ::sys::thread::_Thread::HaxeThread >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"socketMutex") ) { socketMutex=inValue.Cast<  ::sys::thread::Mutex >(); return inValue; }
		if (HX_FIELD_EQ(inName,"breakpoints") ) { breakpoints=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentThreadInfo") ) { currentThreadInfo=inValue.Cast<  ::cpp::vm::ThreadInfo >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Server_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"inst") ) { inst=ioValue.Cast<  ::hxcpp::debug::jsonrpc::Server >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startQueue") ) { startQueue=ioValue.Cast<  ::sys::thread::Deque >(); return true; }
	}
	return false;
}

void Server_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("host",68,cf,12,45));
	outFields->push(HX_("port",81,83,5c,4a));
	outFields->push(HX_("listening",fb,6a,91,f3));
	outFields->push(HX_("socket",b3,8b,46,26));
	outFields->push(HX_("stateMutex",ae,eb,42,80));
	outFields->push(HX_("socketMutex",cc,2a,8c,2c));
	outFields->push(HX_("currentThreadInfo",f1,8d,b9,18));
	outFields->push(HX_("scopes",5f,f0,69,45));
	outFields->push(HX_("threads",69,f6,91,53));
	outFields->push(HX_("breakpoints",22,d0,50,34));
	outFields->push(HX_("references",48,ca,a1,11));
	outFields->push(HX_("started",41,29,1b,35));
	outFields->push(HX_("path2file",e9,53,57,70));
	outFields->push(HX_("file2path",db,16,55,83));
	outFields->push(HX_("mainThread",e3,97,65,e4));
	outFields->push(HX_("interp",d4,79,86,9e));
	outFields->push(HX_("parser",df,9c,88,ed));
	outFields->push(HX_("isWindows",b9,5b,73,ec));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Server_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Server_obj,host),HX_("host",68,cf,12,45)},
	{::hx::fsInt,(int)offsetof(Server_obj,port),HX_("port",81,83,5c,4a)},
	{::hx::fsObject /*  ::sys::net::Socket */ ,(int)offsetof(Server_obj,listening),HX_("listening",fb,6a,91,f3)},
	{::hx::fsObject /*  ::sys::net::Socket */ ,(int)offsetof(Server_obj,socket),HX_("socket",b3,8b,46,26)},
	{::hx::fsObject /*  ::sys::thread::Mutex */ ,(int)offsetof(Server_obj,stateMutex),HX_("stateMutex",ae,eb,42,80)},
	{::hx::fsObject /*  ::sys::thread::Mutex */ ,(int)offsetof(Server_obj,socketMutex),HX_("socketMutex",cc,2a,8c,2c)},
	{::hx::fsObject /*  ::cpp::vm::ThreadInfo */ ,(int)offsetof(Server_obj,currentThreadInfo),HX_("currentThreadInfo",f1,8d,b9,18)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Server_obj,scopes),HX_("scopes",5f,f0,69,45)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(Server_obj,threads),HX_("threads",69,f6,91,53)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Server_obj,breakpoints),HX_("breakpoints",22,d0,50,34)},
	{::hx::fsObject /*  ::hxcpp::debug::jsonrpc::_Server::References */ ,(int)offsetof(Server_obj,references),HX_("references",48,ca,a1,11)},
	{::hx::fsBool,(int)offsetof(Server_obj,started),HX_("started",41,29,1b,35)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Server_obj,path2file),HX_("path2file",e9,53,57,70)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Server_obj,file2path),HX_("file2path",db,16,55,83)},
	{::hx::fsObject /*  ::sys::thread::_Thread::HaxeThread */ ,(int)offsetof(Server_obj,mainThread),HX_("mainThread",e3,97,65,e4)},
	{::hx::fsObject /*  ::hxcpp::debug::jsonrpc::eval::Interp */ ,(int)offsetof(Server_obj,interp),HX_("interp",d4,79,86,9e)},
	{::hx::fsObject /*  ::hxcpp::debug::jsonrpc::eval::Parser */ ,(int)offsetof(Server_obj,parser),HX_("parser",df,9c,88,ed)},
	{::hx::fsBool,(int)offsetof(Server_obj,isWindows),HX_("isWindows",b9,5b,73,ec)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Server_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::sys::thread::Deque */ ,(void *) &Server_obj::startQueue,HX_("startQueue",cf,65,01,7a)},
	{::hx::fsObject /*  ::hxcpp::debug::jsonrpc::Server */ ,(void *) &Server_obj::inst,HX_("inst",c6,43,bb,45)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Server_obj_sMemberFields[] = {
	HX_("host",68,cf,12,45),
	HX_("port",81,83,5c,4a),
	HX_("listening",fb,6a,91,f3),
	HX_("socket",b3,8b,46,26),
	HX_("stateMutex",ae,eb,42,80),
	HX_("socketMutex",cc,2a,8c,2c),
	HX_("currentThreadInfo",f1,8d,b9,18),
	HX_("scopes",5f,f0,69,45),
	HX_("threads",69,f6,91,53),
	HX_("breakpoints",22,d0,50,34),
	HX_("references",48,ca,a1,11),
	HX_("started",41,29,1b,35),
	HX_("path2file",e9,53,57,70),
	HX_("file2path",db,16,55,83),
	HX_("mainThread",e3,97,65,e4),
	HX_("interp",d4,79,86,9e),
	HX_("parser",df,9c,88,ed),
	HX_("isWindows",b9,5b,73,ec),
	HX_("connect",ea,3b,80,15),
	HX_("waitForAttach",79,b2,10,67),
	HX_("createListeningSocket",72,35,0b,8b),
	HX_("onDebuggerAttached",e4,a3,6d,4a),
	HX_("onDebuggerDetached",f2,04,43,86),
	HX_("debuggerThreadMain",a4,07,3c,23),
	HX_("readMessage",11,c9,fc,ec),
	HX_("sendResponse",e9,7f,c9,e2),
	HX_("processMessage",18,77,6f,4c),
	HX_("sendEvent",b2,85,34,36),
	HX_("handleThreadEvent",28,46,c3,c7),
	HX_("isConditionPass",c2,ad,24,3a),
	HX_("getTopFrame",0e,48,47,7a),
	HX_("closeSocket",8b,b1,96,e0),
	HX_("path2Key",b2,08,0c,2c),
	::String(null()) };

static void Server_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Server_obj::startQueue,"startQueue");
	HX_MARK_MEMBER_NAME(Server_obj::inst,"inst");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Server_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Server_obj::startQueue,"startQueue");
	HX_VISIT_MEMBER_NAME(Server_obj::inst,"inst");
};

#endif

::hx::Class Server_obj::__mClass;

static ::String Server_obj_sStaticFields[] = {
	HX_("startQueue",cf,65,01,7a),
	HX_("inst",c6,43,bb,45),
	HX_("log",84,54,52,00),
	::String(null())
};

void Server_obj::__register()
{
	Server_obj _hx_dummy;
	Server_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxcpp.debug.jsonrpc.Server",6a,85,bd,65);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Server_obj::__GetStatic;
	__mClass->mSetStaticField = &Server_obj::__SetStatic;
	__mClass->mMarkFunc = Server_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Server_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Server_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Server_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Server_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Server_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Server_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Server_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_f75d861e40f322f5_78_boot)
HXDLIN(  78)		startQueue =  ::sys::thread::Deque_obj::__alloc( HX_CTX );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::hxcpp::debug::jsonrpc::Server _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_f75d861e40f322f5_79_boot)
HXLINE(  79)
HXLINE(  80)			HX_VARI( ::String,host) = HX_("127.0.0.1",fd,bc,5e,a1);
HXLINE(  81)			HX_VARI( int,port) = ( (int)(::Std_obj::parseInt(HX_("6972",1e,f6,dc,23))) );
HXLINE(  82)			return  ::hxcpp::debug::jsonrpc::Server_obj::__alloc( HX_CTX ,host,port);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_f75d861e40f322f5_79_boot)
HXDLIN(  79)		inst = ( ( ::hxcpp::debug::jsonrpc::Server)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

} // end namespace hxcpp
} // end namespace debug
} // end namespace jsonrpc
