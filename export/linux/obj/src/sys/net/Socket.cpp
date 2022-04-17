#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_sys_net_Host
#include <sys/net/Host.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif
#ifndef INCLUDED_sys_net__Socket_SocketInput
#include <sys/net/_Socket/SocketInput.h>
#endif
#ifndef INCLUDED_sys_net__Socket_SocketOutput
#include <sys/net/_Socket/SocketOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_123d5468720475b0_115_new,"sys.net.Socket","new",0x202a8cf7,"sys.net.Socket.new","/usr/share/haxe/std/cpp/_std/sys/net/Socket.hx",115,0xb72d4153)
HX_LOCAL_STACK_FRAME(_hx_pos_123d5468720475b0_133_init,"sys.net.Socket","init",0x01c98299,"sys.net.Socket.init","/usr/share/haxe/std/cpp/_std/sys/net/Socket.hx",133,0xb72d4153)
HX_LOCAL_STACK_FRAME(_hx_pos_123d5468720475b0_145_close,"sys.net.Socket","close",0x18d3680f,"sys.net.Socket.close","/usr/share/haxe/std/cpp/_std/sys/net/Socket.hx",145,0xb72d4153)
HX_LOCAL_STACK_FRAME(_hx_pos_123d5468720475b0_170_connect,"sys.net.Socket","connect",0x1ee69001,"sys.net.Socket.connect","/usr/share/haxe/std/cpp/_std/sys/net/Socket.hx",170,0xb72d4153)
HX_LOCAL_STACK_FRAME(_hx_pos_123d5468720475b0_195_listen,"sys.net.Socket","listen",0x81cfc410,"sys.net.Socket.listen","/usr/share/haxe/std/cpp/_std/sys/net/Socket.hx",195,0xb72d4153)
HX_LOCAL_STACK_FRAME(_hx_pos_123d5468720475b0_203_bind,"sys.net.Socket","bind",0xfd253d46,"sys.net.Socket.bind","/usr/share/haxe/std/cpp/_std/sys/net/Socket.hx",203,0xb72d4153)
HX_LOCAL_STACK_FRAME(_hx_pos_123d5468720475b0_216_accept,"sys.net.Socket","accept",0x9cdc8ed1,"sys.net.Socket.accept","/usr/share/haxe/std/cpp/_std/sys/net/Socket.hx",216,0xb72d4153)
HX_LOCAL_STACK_FRAME(_hx_pos_123d5468720475b0_245_setTimeout,"sys.net.Socket","setTimeout",0x1b505368,"sys.net.Socket.setTimeout","/usr/share/haxe/std/cpp/_std/sys/net/Socket.hx",245,0xb72d4153)
HX_LOCAL_STACK_FRAME(_hx_pos_123d5468720475b0_254_setBlocking,"sys.net.Socket","setBlocking",0xe5689b0e,"sys.net.Socket.setBlocking","/usr/share/haxe/std/cpp/_std/sys/net/Socket.hx",254,0xb72d4153)
HX_LOCAL_STACK_FRAME(_hx_pos_123d5468720475b0_259_setFastSend,"sys.net.Socket","setFastSend",0x54236f5d,"sys.net.Socket.setFastSend","/usr/share/haxe/std/cpp/_std/sys/net/Socket.hx",259,0xb72d4153)
namespace sys{
namespace net{

void Socket_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_123d5468720475b0_115_new)
            	HX_STACK_THIS(this)
HXLINE( 115)
HXLINE( 123)		this->_hx___fastSend = false;
HXLINE( 122)		this->_hx___blocking = true;
HXLINE( 121)		this->_hx___timeout = ((Float)0.0);
HXLINE( 130)		this->init();
            	}

Dynamic Socket_obj::__CreateEmpty() { return new Socket_obj; }

void *Socket_obj::_hx_vtable = 0;

Dynamic Socket_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Socket_obj > _hx_result = new Socket_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Socket_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x70c71ec3;
}

void Socket_obj::init(){
            	HX_GC_STACKFRAME(&_hx_pos_123d5468720475b0_133_init)
            	HX_STACK_THIS(this)
HXLINE( 133)
HXLINE( 134)		if (::hx::IsNull( this->__s )) {
HXLINE( 135)			this->__s = _hx_std_socket_new(false);
            		}
HXLINE( 138)		this->setTimeout(this->_hx___timeout);
HXLINE( 139)		this->setBlocking(this->_hx___blocking);
HXLINE( 140)		this->setFastSend(this->_hx___fastSend);
HXLINE( 141)		this->input =  ::sys::net::_Socket::SocketInput_obj::__alloc( HX_CTX ,this->__s);
HXLINE( 142)		this->output =  ::sys::net::_Socket::SocketOutput_obj::__alloc( HX_CTX ,this->__s);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Socket_obj,init,(void))

void Socket_obj::close(){
            	HX_STACKFRAME(&_hx_pos_123d5468720475b0_145_close)
            	HX_STACK_THIS(this)
HXLINE( 145)
HXLINE( 146)		_hx_std_socket_close(this->__s);
HXLINE( 147)		{
HXLINE( 148)			HX_VARI(  ::sys::net::_Socket::SocketInput,input) = ( ( ::sys::net::_Socket::SocketInput)(this->input) );
HXLINE( 149)			HX_VARI(  ::sys::net::_Socket::SocketOutput,output) = ( ( ::sys::net::_Socket::SocketOutput)(this->output) );
HXLINE( 150)			input->__s = null();
HXLINE( 151)			output->__s = null();
            		}
HXLINE( 153)		this->input->close();
HXLINE( 154)		this->output->close();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Socket_obj,close,(void))

void Socket_obj::connect( ::sys::net::Host host,int port){
            	HX_STACKFRAME(&_hx_pos_123d5468720475b0_170_connect)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(host,"host")
            	HX_STACK_ARG(port,"port")
HXLINE( 170)
HXDLIN( 170)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 171)			bool _hx_tmp;
HXDLIN( 171)			if ((host->ip == 0)) {
HXLINE( 171)				_hx_tmp = (host->host != HX_("0.0.0.0",76,1a,39,f2));
            			}
            			else {
HXLINE( 171)				_hx_tmp = false;
            			}
HXDLIN( 171)			if (_hx_tmp) {
HXLINE( 173)				HX_VARI( ::Array< unsigned char >,ipv6) = ( (::Array< unsigned char >)(::Reflect_obj::field(host,HX_("ipv6",a7,ca,bc,45))) );
HXLINE( 174)				if (::hx::IsNotNull( ipv6 )) {
HXLINE( 175)					this->close();
HXLINE( 176)					this->__s = _hx_std_socket_new(false,true);
HXLINE( 177)					this->init();
HXLINE( 178)					_hx_std_socket_connect_ipv6(this->__s,ipv6,port);
            				}
            				else {
HXLINE( 180)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Unresolved host",77,5e,1e,d3)));
            				}
            			}
            			else {
HXLINE( 182)				_hx_std_socket_connect(this->__s,host->ip,port);
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 183)				{
HXLINE( 183)					null();
            				}
HXDLIN( 183)				 ::Dynamic _g1 = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 170)				if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::String >())) {
HXLINE( 183)					HX_VARI( ::String,s) = ( (::String)(_g1) );
HXLINE( 184)					if ((s == HX_("Invalid socket handle",6c,15,f9,09))) {
HXLINE( 185)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((((HX_("Failed to connect on ",a9,2b,e3,45) + host->toString()) + HX_(":",3a,00,00,00)) + port)));
            					}
            					else {
HXLINE( 186)						if ((s != HX_("Blocking",d5,e1,61,f3))) {
HXLINE( 190)							HX_STACK_DO_RETHROW(s);
            						}
            					}
            				}
            				else {
HXDLIN( 170)					HX_STACK_DO_THROW(_g);
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Socket_obj,connect,(void))

void Socket_obj::listen(int connections){
            	HX_STACKFRAME(&_hx_pos_123d5468720475b0_195_listen)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(connections,"connections")
HXLINE( 195)
HXDLIN( 195)		_hx_std_socket_listen(this->__s,connections);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Socket_obj,listen,(void))

void Socket_obj::bind( ::sys::net::Host host,int port){
            	HX_STACKFRAME(&_hx_pos_123d5468720475b0_203_bind)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(host,"host")
            	HX_STACK_ARG(port,"port")
HXLINE( 203)
HXDLIN( 203)		bool _hx_tmp;
HXDLIN( 203)		if ((host->ip == 0)) {
HXDLIN( 203)			_hx_tmp = (host->host != HX_("0.0.0.0",76,1a,39,f2));
            		}
            		else {
HXDLIN( 203)			_hx_tmp = false;
            		}
HXDLIN( 203)		if (_hx_tmp) {
HXLINE( 204)			HX_VARI( ::Array< unsigned char >,ipv6) = ( (::Array< unsigned char >)(::Reflect_obj::field(host,HX_("ipv6",a7,ca,bc,45))) );
HXLINE( 205)			if (::hx::IsNotNull( ipv6 )) {
HXLINE( 206)				this->close();
HXLINE( 207)				this->__s = _hx_std_socket_new(false,true);
HXLINE( 208)				this->init();
HXLINE( 209)				_hx_std_socket_bind_ipv6(this->__s,ipv6,port);
            			}
            			else {
HXLINE( 211)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Unresolved host",77,5e,1e,d3)));
            			}
            		}
            		else {
HXLINE( 213)			_hx_std_socket_bind(this->__s,host->ip,port);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Socket_obj,bind,(void))

 ::sys::net::Socket Socket_obj::accept(){
            	HX_GC_STACKFRAME(&_hx_pos_123d5468720475b0_216_accept)
            	HX_STACK_THIS(this)
HXLINE( 216)
HXLINE( 217)		HX_VARI(  ::Dynamic,c) = _hx_std_socket_accept(this->__s);
HXLINE( 218)		HX_VARI(  ::sys::net::Socket,s) = ( ( ::sys::net::Socket)(::Type_obj::createEmptyInstance(::hx::ClassOf< ::sys::net::Socket >())) );
HXLINE( 219)		s->__s = c;
HXLINE( 220)		s->input =  ::sys::net::_Socket::SocketInput_obj::__alloc( HX_CTX ,c);
HXLINE( 221)		s->output =  ::sys::net::_Socket::SocketOutput_obj::__alloc( HX_CTX ,c);
HXLINE( 222)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Socket_obj,accept,return )

void Socket_obj::setTimeout(Float timeout){
            	HX_STACKFRAME(&_hx_pos_123d5468720475b0_245_setTimeout)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(timeout,"timeout")
HXLINE( 245)
HXLINE( 246)		this->_hx___timeout = timeout;
HXLINE( 247)		_hx_std_socket_set_timeout(this->__s,timeout);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Socket_obj,setTimeout,(void))

void Socket_obj::setBlocking(bool b){
            	HX_STACKFRAME(&_hx_pos_123d5468720475b0_254_setBlocking)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(b,"b")
HXLINE( 254)
HXLINE( 255)		this->_hx___blocking = b;
HXLINE( 256)		_hx_std_socket_set_blocking(this->__s,b);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Socket_obj,setBlocking,(void))

void Socket_obj::setFastSend(bool b){
            	HX_STACKFRAME(&_hx_pos_123d5468720475b0_259_setFastSend)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(b,"b")
HXLINE( 259)
HXLINE( 260)		this->_hx___fastSend = b;
HXLINE( 261)		_hx_std_socket_set_fast_send(this->__s,b);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Socket_obj,setFastSend,(void))


::hx::ObjectPtr< Socket_obj > Socket_obj::__new() {
	::hx::ObjectPtr< Socket_obj > __this = new Socket_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Socket_obj > Socket_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Socket_obj *__this = (Socket_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Socket_obj), true, "sys.net.Socket"));
	*(void **)__this = Socket_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Socket_obj::Socket_obj()
{
}

void Socket_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Socket);
	HX_MARK_MEMBER_NAME(__s,"__s");
	HX_MARK_MEMBER_NAME(_hx___timeout,"__timeout");
	HX_MARK_MEMBER_NAME(_hx___blocking,"__blocking");
	HX_MARK_MEMBER_NAME(_hx___fastSend,"__fastSend");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(output,"output");
	HX_MARK_END_CLASS();
}

void Socket_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__s,"__s");
	HX_VISIT_MEMBER_NAME(_hx___timeout,"__timeout");
	HX_VISIT_MEMBER_NAME(_hx___blocking,"__blocking");
	HX_VISIT_MEMBER_NAME(_hx___fastSend,"__fastSend");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(output,"output");
}

::hx::Val Socket_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__s") ) { return ::hx::Val( __s ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		if (HX_FIELD_EQ(inName,"bind") ) { return ::hx::Val( bind_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { return ::hx::Val( input ); }
		if (HX_FIELD_EQ(inName,"close") ) { return ::hx::Val( close_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"output") ) { return ::hx::Val( output ); }
		if (HX_FIELD_EQ(inName,"listen") ) { return ::hx::Val( listen_dyn() ); }
		if (HX_FIELD_EQ(inName,"accept") ) { return ::hx::Val( accept_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"connect") ) { return ::hx::Val( connect_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__timeout") ) { return ::hx::Val( _hx___timeout ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__blocking") ) { return ::hx::Val( _hx___blocking ); }
		if (HX_FIELD_EQ(inName,"__fastSend") ) { return ::hx::Val( _hx___fastSend ); }
		if (HX_FIELD_EQ(inName,"setTimeout") ) { return ::hx::Val( setTimeout_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setBlocking") ) { return ::hx::Val( setBlocking_dyn() ); }
		if (HX_FIELD_EQ(inName,"setFastSend") ) { return ::hx::Val( setFastSend_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Socket_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__s") ) { __s=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast<  ::haxe::io::Input >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"output") ) { output=inValue.Cast<  ::haxe::io::Output >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__timeout") ) { _hx___timeout=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__blocking") ) { _hx___blocking=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__fastSend") ) { _hx___fastSend=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Socket_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("__s",53,69,48,00));
	outFields->push(HX_("__timeout",81,6b,45,5a));
	outFields->push(HX_("__blocking",d5,98,e8,bc));
	outFields->push(HX_("__fastSend",24,6d,a3,2b));
	outFields->push(HX_("input",0a,c4,1d,be));
	outFields->push(HX_("output",01,0f,81,0c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Socket_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Socket_obj,__s),HX_("__s",53,69,48,00)},
	{::hx::fsFloat,(int)offsetof(Socket_obj,_hx___timeout),HX_("__timeout",81,6b,45,5a)},
	{::hx::fsBool,(int)offsetof(Socket_obj,_hx___blocking),HX_("__blocking",d5,98,e8,bc)},
	{::hx::fsBool,(int)offsetof(Socket_obj,_hx___fastSend),HX_("__fastSend",24,6d,a3,2b)},
	{::hx::fsObject /*  ::haxe::io::Input */ ,(int)offsetof(Socket_obj,input),HX_("input",0a,c4,1d,be)},
	{::hx::fsObject /*  ::haxe::io::Output */ ,(int)offsetof(Socket_obj,output),HX_("output",01,0f,81,0c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Socket_obj_sStaticStorageInfo = 0;
#endif

static ::String Socket_obj_sMemberFields[] = {
	HX_("__s",53,69,48,00),
	HX_("__timeout",81,6b,45,5a),
	HX_("__blocking",d5,98,e8,bc),
	HX_("__fastSend",24,6d,a3,2b),
	HX_("input",0a,c4,1d,be),
	HX_("output",01,0f,81,0c),
	HX_("init",10,3b,bb,45),
	HX_("close",b8,17,63,48),
	HX_("connect",ea,3b,80,15),
	HX_("listen",47,c8,f9,ef),
	HX_("bind",bd,f5,16,41),
	HX_("accept",08,93,06,0b),
	HX_("setTimeout",1f,3f,d6,2b),
	HX_("setBlocking",77,ef,10,4a),
	HX_("setFastSend",c6,c3,cb,b8),
	::String(null()) };

::hx::Class Socket_obj::__mClass;

void Socket_obj::__register()
{
	Socket_obj _hx_dummy;
	Socket_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("sys.net.Socket",85,45,9d,b4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Socket_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Socket_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Socket_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Socket_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sys
} // end namespace net
