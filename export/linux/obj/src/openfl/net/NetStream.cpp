#include <hxcpp.h>

#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_NetStatusEvent
#include <openfl/events/NetStatusEvent.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif
#ifndef INCLUDED_openfl_net_NetConnection
#include <openfl/net/NetConnection.h>
#endif
#ifndef INCLUDED_openfl_net_NetStream
#include <openfl/net/NetStream.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2d6908cd6c18c638_1208_new,"openfl.net.NetStream","new",0xb09a57e0,"openfl.net.NetStream.new","openfl/net/NetStream.hx",1208,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_1445_close,"openfl.net.NetStream","close",0x7cfa7f38,"openfl.net.NetStream.close","openfl/net/NetStream.hx",1445,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_1466_dispose,"openfl.net.NetStream","dispose",0xd22cc81f,"openfl.net.NetStream.dispose","openfl/net/NetStream.hx",1466,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_1535_pause,"openfl.net.NetStream","pause",0xf1ef3e76,"openfl.net.NetStream.pause","openfl/net/NetStream.hx",1535,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_1618_play,"openfl.net.NetStream","play",0xd7ca3674,"openfl.net.NetStream.play","openfl/net/NetStream.hx",1618,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_1878_requestVideoStatus,"openfl.net.NetStream","requestVideoStatus",0xbba0537e,"openfl.net.NetStream.requestVideoStatus","openfl/net/NetStream.hx",1878,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_1909_resume,"openfl.net.NetStream","resume",0xd867922d,"openfl.net.NetStream.resume","openfl/net/NetStream.hx",1909,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_1991_seek,"openfl.net.NetStream","seek",0xd9c08df8,"openfl.net.NetStream.seek","openfl/net/NetStream.hx",1991,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_2106_togglePause,"openfl.net.NetStream","togglePause",0x12789642,"openfl.net.NetStream.togglePause","openfl/net/NetStream.hx",2106,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_2122___dispatchStatus,"openfl.net.NetStream","__dispatchStatus",0x4f35452c,"openfl.net.NetStream.__dispatchStatus","openfl/net/NetStream.hx",2122,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_2129___playStatus,"openfl.net.NetStream","__playStatus",0x66bf7be6,"openfl.net.NetStream.__playStatus","openfl/net/NetStream.hx",2129,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_2154_video_onCanPlay,"openfl.net.NetStream","video_onCanPlay",0x94edae41,"openfl.net.NetStream.video_onCanPlay","openfl/net/NetStream.hx",2154,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_2159_video_onCanPlayThrough,"openfl.net.NetStream","video_onCanPlayThrough",0x89a17c04,"openfl.net.NetStream.video_onCanPlayThrough","openfl/net/NetStream.hx",2159,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_2164_video_onDurationChanged,"openfl.net.NetStream","video_onDurationChanged",0xa779991d,"openfl.net.NetStream.video_onDurationChanged","openfl/net/NetStream.hx",2164,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_2168_video_onEnd,"openfl.net.NetStream","video_onEnd",0x9fb90978,"openfl.net.NetStream.video_onEnd","openfl/net/NetStream.hx",2168,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_2175_video_onError,"openfl.net.NetStream","video_onError",0xc9d832a5,"openfl.net.NetStream.video_onError","openfl/net/NetStream.hx",2175,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_2181_video_onLoadMetaData,"openfl.net.NetStream","video_onLoadMetaData",0x5972de98,"openfl.net.NetStream.video_onLoadMetaData","openfl/net/NetStream.hx",2181,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_2203_video_onLoadStart,"openfl.net.NetStream","video_onLoadStart",0x03aa59b9,"openfl.net.NetStream.video_onLoadStart","openfl/net/NetStream.hx",2203,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_2208_video_onPause,"openfl.net.NetStream","video_onPause",0x14063dd3,"openfl.net.NetStream.video_onPause","openfl/net/NetStream.hx",2208,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_2212_video_onPlaying,"openfl.net.NetStream","video_onPlaying",0xb653a78b,"openfl.net.NetStream.video_onPlaying","openfl/net/NetStream.hx",2212,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_2218_video_onSeeking,"openfl.net.NetStream","video_onSeeking",0xaaedda87,"openfl.net.NetStream.video_onSeeking","openfl/net/NetStream.hx",2218,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_2226_video_onStalled,"openfl.net.NetStream","video_onStalled",0x5d59679c,"openfl.net.NetStream.video_onStalled","openfl/net/NetStream.hx",2226,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_2237_video_onTimeUpdate,"openfl.net.NetStream","video_onTimeUpdate",0x9b0d65f9,"openfl.net.NetStream.video_onTimeUpdate","openfl/net/NetStream.hx",2237,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_2242_video_onWaiting,"openfl.net.NetStream","video_onWaiting",0x0b6381aa,"openfl.net.NetStream.video_onWaiting","openfl/net/NetStream.hx",2242,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_2248_get_soundTransform,"openfl.net.NetStream","get_soundTransform",0x4ab6b7e6,"openfl.net.NetStream.get_soundTransform","openfl/net/NetStream.hx",2248,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_2252_set_soundTransform,"openfl.net.NetStream","set_soundTransform",0x2765ea5a,"openfl.net.NetStream.set_soundTransform","openfl/net/NetStream.hx",2252,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_2274_get_speed,"openfl.net.NetStream","get_speed",0x8a341b5e,"openfl.net.NetStream.get_speed","openfl/net/NetStream.hx",2274,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_2283_set_speed,"openfl.net.NetStream","set_speed",0x6d85076a,"openfl.net.NetStream.set_speed","openfl/net/NetStream.hx",2283,0x9cb99312)
HX_LOCAL_STACK_FRAME(_hx_pos_2d6908cd6c18c638_515_boot,"openfl.net.NetStream","boot",0xce8b8cb2,"openfl.net.NetStream.boot","openfl/net/NetStream.hx",515,0x9cb99312)
namespace openfl{
namespace net{

void NetStream_obj::__construct( ::openfl::net::NetConnection connection,::String peerID){
            	HX_GC_STACKFRAME(&_hx_pos_2d6908cd6c18c638_1208_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(connection,"connection")
            	HX_STACK_ARG(peerID,"peerID")
HXLINE(1208)
HXLINE(1209)		super::__construct(null());
HXLINE(1211)		this->_hx___connection = connection;
HXLINE(1212)		this->_hx___soundTransform =  ::openfl::media::SoundTransform_obj::__alloc( HX_CTX ,null(),null());
            	}

Dynamic NetStream_obj::__CreateEmpty() { return new NetStream_obj; }

void *NetStream_obj::_hx_vtable = 0;

Dynamic NetStream_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NetStream_obj > _hx_result = new NetStream_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool NetStream_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x1d851db0;
	}
}

void NetStream_obj::close(){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_1445_close)
            	HX_STACK_THIS(this)
HXLINE(1445)
            	}


HX_DEFINE_DYNAMIC_FUNC0(NetStream_obj,close,(void))

void NetStream_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_1466_dispose)
            	HX_STACK_THIS(this)
HXLINE(1466)
            	}


HX_DEFINE_DYNAMIC_FUNC0(NetStream_obj,dispose,(void))

void NetStream_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_1535_pause)
            	HX_STACK_THIS(this)
HXLINE(1535)
            	}


HX_DEFINE_DYNAMIC_FUNC0(NetStream_obj,pause,(void))

void NetStream_obj::play(::String url, ::Dynamic p1, ::Dynamic p2, ::Dynamic p3, ::Dynamic p4, ::Dynamic p5){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_1618_play)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(url,"url")
            	HX_STACK_ARG(p1,"p1")
            	HX_STACK_ARG(p2,"p2")
            	HX_STACK_ARG(p3,"p3")
            	HX_STACK_ARG(p4,"p4")
            	HX_STACK_ARG(p5,"p5")
HXLINE(1618)
            	}


HX_DEFINE_DYNAMIC_FUNC6(NetStream_obj,play,(void))

void NetStream_obj::requestVideoStatus(){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_1878_requestVideoStatus)
            	HX_STACK_THIS(this)
HXLINE(1878)
            	}


HX_DEFINE_DYNAMIC_FUNC0(NetStream_obj,requestVideoStatus,(void))

void NetStream_obj::resume(){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_1909_resume)
            	HX_STACK_THIS(this)
HXLINE(1909)
            	}


HX_DEFINE_DYNAMIC_FUNC0(NetStream_obj,resume,(void))

void NetStream_obj::seek(Float time){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_1991_seek)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(time,"time")
HXLINE(1991)
            	}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,seek,(void))

void NetStream_obj::togglePause(){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_2106_togglePause)
            	HX_STACK_THIS(this)
HXLINE(2106)
            	}


HX_DEFINE_DYNAMIC_FUNC0(NetStream_obj,togglePause,(void))

void NetStream_obj::_hx___dispatchStatus(::String code){
            	HX_GC_STACKFRAME(&_hx_pos_2d6908cd6c18c638_2122___dispatchStatus)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(code,"code")
HXLINE(2122)
HXLINE(2123)		HX_VARI(  ::openfl::events::NetStatusEvent,event) =  ::openfl::events::NetStatusEvent_obj::__alloc( HX_CTX ,HX_("netStatus",6f,4f,ec,46),false,false, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("code",2d,b1,c4,41),code)));
HXLINE(2124)		this->_hx___connection->dispatchEvent(event);
HXLINE(2125)		this->dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,_hx___dispatchStatus,(void))

void NetStream_obj::_hx___playStatus(::String code){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_2129___playStatus)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(code,"code")
HXLINE(2129)
            	}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,_hx___playStatus,(void))

void NetStream_obj::video_onCanPlay( ::Dynamic event){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_2154_video_onCanPlay)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(event,"event")
HXLINE(2154)
HXDLIN(2154)		this->_hx___playStatus(HX_("NetStream.Play.canplay",1b,cc,cb,cb));
            	}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onCanPlay,(void))

void NetStream_obj::video_onCanPlayThrough( ::Dynamic event){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_2159_video_onCanPlayThrough)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(event,"event")
HXLINE(2159)
HXDLIN(2159)		this->_hx___playStatus(HX_("NetStream.Play.canplaythrough",8a,05,15,a9));
            	}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onCanPlayThrough,(void))

void NetStream_obj::video_onDurationChanged( ::Dynamic event){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_2164_video_onDurationChanged)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(event,"event")
HXLINE(2164)
HXDLIN(2164)		this->_hx___playStatus(HX_("NetStream.Play.durationchanged",37,45,91,e1));
            	}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onDurationChanged,(void))

void NetStream_obj::video_onEnd( ::Dynamic event){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_2168_video_onEnd)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(event,"event")
HXLINE(2168)
HXLINE(2169)		this->_hx___dispatchStatus(HX_("NetStream.Play.Stop",ab,15,72,a7));
HXLINE(2170)		this->_hx___dispatchStatus(HX_("NetStream.Play.Complete",e2,ae,0c,40));
HXLINE(2171)		this->_hx___playStatus(HX_("NetStream.Play.Complete",e2,ae,0c,40));
            	}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onEnd,(void))

void NetStream_obj::video_onError( ::Dynamic event){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_2175_video_onError)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(event,"event")
HXLINE(2175)
HXLINE(2176)		this->_hx___dispatchStatus(HX_("NetStream.Play.Stop",ab,15,72,a7));
HXLINE(2177)		this->_hx___playStatus(HX_("NetStream.Play.error",1f,2a,47,38));
            	}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onError,(void))

void NetStream_obj::video_onLoadMetaData( ::Dynamic event){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_2181_video_onLoadMetaData)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(event,"event")
HXLINE(2181)
            	}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onLoadMetaData,(void))

void NetStream_obj::video_onLoadStart( ::Dynamic event){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_2203_video_onLoadStart)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(event,"event")
HXLINE(2203)
HXDLIN(2203)		this->_hx___playStatus(HX_("NetStream.Play.loadstart",53,26,16,e6));
            	}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onLoadStart,(void))

void NetStream_obj::video_onPause( ::Dynamic event){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_2208_video_onPause)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(event,"event")
HXLINE(2208)
HXDLIN(2208)		this->_hx___playStatus(HX_("NetStream.Play.pause",4d,35,75,82));
            	}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onPause,(void))

void NetStream_obj::video_onPlaying( ::Dynamic event){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_2212_video_onPlaying)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(event,"event")
HXLINE(2212)
HXLINE(2213)		this->_hx___dispatchStatus(HX_("NetStream.Play.Start",99,42,56,dc));
HXLINE(2214)		this->_hx___playStatus(HX_("NetStream.Play.playing",85,f1,0a,d8));
            	}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onPlaying,(void))

void NetStream_obj::video_onSeeking( ::Dynamic event){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_2218_video_onSeeking)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(event,"event")
HXLINE(2218)
HXLINE(2219)		this->_hx___playStatus(HX_("NetStream.Play.seeking",81,24,a5,cc));
HXLINE(2221)		this->_hx___dispatchStatus(HX_("NetStream.Seek.Complete",de,46,79,c4));
            	}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onSeeking,(void))

void NetStream_obj::video_onStalled( ::Dynamic event){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_2226_video_onStalled)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(event,"event")
HXLINE(2226)
HXDLIN(2226)		this->_hx___playStatus(HX_("NetStream.Play.stalled",96,b1,10,7f));
            	}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onStalled,(void))

void NetStream_obj::video_onTimeUpdate( ::Dynamic event){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_2237_video_onTimeUpdate)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(event,"event")
HXLINE(2237)
HXDLIN(2237)		this->_hx___playStatus(HX_("NetStream.Play.timeupdate",1f,a0,f4,d6));
            	}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onTimeUpdate,(void))

void NetStream_obj::video_onWaiting( ::Dynamic event){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_2242_video_onWaiting)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(event,"event")
HXLINE(2242)
HXDLIN(2242)		this->_hx___playStatus(HX_("NetStream.Play.waiting",a4,cb,1a,2d));
            	}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,video_onWaiting,(void))

 ::openfl::media::SoundTransform NetStream_obj::get_soundTransform(){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_2248_get_soundTransform)
            	HX_STACK_THIS(this)
HXLINE(2248)
HXDLIN(2248)		return this->_hx___soundTransform->clone();
            	}


HX_DEFINE_DYNAMIC_FUNC0(NetStream_obj,get_soundTransform,return )

 ::openfl::media::SoundTransform NetStream_obj::set_soundTransform( ::openfl::media::SoundTransform value){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_2252_set_soundTransform)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE(2252)
HXLINE(2253)		if (::hx::IsNotNull( value )) {
HXLINE(2255)			this->_hx___soundTransform->pan = value->pan;
HXLINE(2256)			this->_hx___soundTransform->volume = value->volume;
            		}
HXLINE(2266)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,set_soundTransform,return )

Float NetStream_obj::get_speed(){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_2274_get_speed)
            	HX_STACK_THIS(this)
HXLINE(2274)
HXDLIN(2274)		return ( (Float)(1) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(NetStream_obj,get_speed,return )

Float NetStream_obj::set_speed(Float value){
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_2283_set_speed)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE(2283)
HXDLIN(2283)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,set_speed,return )


::hx::ObjectPtr< NetStream_obj > NetStream_obj::__new( ::openfl::net::NetConnection connection,::String peerID) {
	::hx::ObjectPtr< NetStream_obj > __this = new NetStream_obj();
	__this->__construct(connection,peerID);
	return __this;
}

::hx::ObjectPtr< NetStream_obj > NetStream_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::net::NetConnection connection,::String peerID) {
	NetStream_obj *__this = (NetStream_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NetStream_obj), true, "openfl.net.NetStream"));
	*(void **)__this = NetStream_obj::_hx_vtable;
	__this->__construct(connection,peerID);
	return __this;
}

NetStream_obj::NetStream_obj()
{
}

void NetStream_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NetStream);
	HX_MARK_MEMBER_NAME(audioCodec,"audioCodec");
	HX_MARK_MEMBER_NAME(bufferLength,"bufferLength");
	HX_MARK_MEMBER_NAME(bufferTime,"bufferTime");
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(checkPolicyFile,"checkPolicyFile");
	HX_MARK_MEMBER_NAME(client,"client");
	HX_MARK_MEMBER_NAME(currentFPS,"currentFPS");
	HX_MARK_MEMBER_NAME(decodedFrames,"decodedFrames");
	HX_MARK_MEMBER_NAME(liveDelay,"liveDelay");
	HX_MARK_MEMBER_NAME(objectEncoding,"objectEncoding");
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(videoCode,"videoCode");
	HX_MARK_MEMBER_NAME(_hx___closed,"__closed");
	HX_MARK_MEMBER_NAME(_hx___connection,"__connection");
	HX_MARK_MEMBER_NAME(_hx___soundTransform,"__soundTransform");
	HX_MARK_MEMBER_NAME(_hx___timer,"__timer");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NetStream_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(audioCodec,"audioCodec");
	HX_VISIT_MEMBER_NAME(bufferLength,"bufferLength");
	HX_VISIT_MEMBER_NAME(bufferTime,"bufferTime");
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(checkPolicyFile,"checkPolicyFile");
	HX_VISIT_MEMBER_NAME(client,"client");
	HX_VISIT_MEMBER_NAME(currentFPS,"currentFPS");
	HX_VISIT_MEMBER_NAME(decodedFrames,"decodedFrames");
	HX_VISIT_MEMBER_NAME(liveDelay,"liveDelay");
	HX_VISIT_MEMBER_NAME(objectEncoding,"objectEncoding");
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(videoCode,"videoCode");
	HX_VISIT_MEMBER_NAME(_hx___closed,"__closed");
	HX_VISIT_MEMBER_NAME(_hx___connection,"__connection");
	HX_VISIT_MEMBER_NAME(_hx___soundTransform,"__soundTransform");
	HX_VISIT_MEMBER_NAME(_hx___timer,"__timer");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val NetStream_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return ::hx::Val( time ); }
		if (HX_FIELD_EQ(inName,"play") ) { return ::hx::Val( play_dyn() ); }
		if (HX_FIELD_EQ(inName,"seek") ) { return ::hx::Val( seek_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_speed() ); }
		if (HX_FIELD_EQ(inName,"close") ) { return ::hx::Val( close_dyn() ); }
		if (HX_FIELD_EQ(inName,"pause") ) { return ::hx::Val( pause_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"client") ) { return ::hx::Val( client ); }
		if (HX_FIELD_EQ(inName,"resume") ) { return ::hx::Val( resume_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__timer") ) { return ::hx::Val( _hx___timer ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__closed") ) { return ::hx::Val( _hx___closed ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"liveDelay") ) { return ::hx::Val( liveDelay ); }
		if (HX_FIELD_EQ(inName,"videoCode") ) { return ::hx::Val( videoCode ); }
		if (HX_FIELD_EQ(inName,"get_speed") ) { return ::hx::Val( get_speed_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_speed") ) { return ::hx::Val( set_speed_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"audioCodec") ) { return ::hx::Val( audioCodec ); }
		if (HX_FIELD_EQ(inName,"bufferTime") ) { return ::hx::Val( bufferTime ); }
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return ::hx::Val( bytesTotal ); }
		if (HX_FIELD_EQ(inName,"currentFPS") ) { return ::hx::Val( currentFPS ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return ::hx::Val( bytesLoaded ); }
		if (HX_FIELD_EQ(inName,"togglePause") ) { return ::hx::Val( togglePause_dyn() ); }
		if (HX_FIELD_EQ(inName,"video_onEnd") ) { return ::hx::Val( video_onEnd_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bufferLength") ) { return ::hx::Val( bufferLength ); }
		if (HX_FIELD_EQ(inName,"__connection") ) { return ::hx::Val( _hx___connection ); }
		if (HX_FIELD_EQ(inName,"__playStatus") ) { return ::hx::Val( _hx___playStatus_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"decodedFrames") ) { return ::hx::Val( decodedFrames ); }
		if (HX_FIELD_EQ(inName,"video_onError") ) { return ::hx::Val( video_onError_dyn() ); }
		if (HX_FIELD_EQ(inName,"video_onPause") ) { return ::hx::Val( video_onPause_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"objectEncoding") ) { return ::hx::Val( objectEncoding ); }
		if (HX_FIELD_EQ(inName,"soundTransform") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_soundTransform() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"checkPolicyFile") ) { return ::hx::Val( checkPolicyFile ); }
		if (HX_FIELD_EQ(inName,"video_onCanPlay") ) { return ::hx::Val( video_onCanPlay_dyn() ); }
		if (HX_FIELD_EQ(inName,"video_onPlaying") ) { return ::hx::Val( video_onPlaying_dyn() ); }
		if (HX_FIELD_EQ(inName,"video_onSeeking") ) { return ::hx::Val( video_onSeeking_dyn() ); }
		if (HX_FIELD_EQ(inName,"video_onStalled") ) { return ::hx::Val( video_onStalled_dyn() ); }
		if (HX_FIELD_EQ(inName,"video_onWaiting") ) { return ::hx::Val( video_onWaiting_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__soundTransform") ) { return ::hx::Val( _hx___soundTransform ); }
		if (HX_FIELD_EQ(inName,"__dispatchStatus") ) { return ::hx::Val( _hx___dispatchStatus_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"video_onLoadStart") ) { return ::hx::Val( video_onLoadStart_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"requestVideoStatus") ) { return ::hx::Val( requestVideoStatus_dyn() ); }
		if (HX_FIELD_EQ(inName,"video_onTimeUpdate") ) { return ::hx::Val( video_onTimeUpdate_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_soundTransform") ) { return ::hx::Val( get_soundTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_soundTransform") ) { return ::hx::Val( set_soundTransform_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"video_onLoadMetaData") ) { return ::hx::Val( video_onLoadMetaData_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"video_onCanPlayThrough") ) { return ::hx::Val( video_onCanPlayThrough_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"video_onDurationChanged") ) { return ::hx::Val( video_onDurationChanged_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val NetStream_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_speed(inValue.Cast< Float >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"client") ) { client=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__timer") ) { _hx___timer=inValue.Cast<  ::haxe::Timer >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__closed") ) { _hx___closed=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"liveDelay") ) { liveDelay=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"videoCode") ) { videoCode=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"audioCodec") ) { audioCodec=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bufferTime") ) { bufferTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentFPS") ) { currentFPS=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bufferLength") ) { bufferLength=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__connection") ) { _hx___connection=inValue.Cast<  ::openfl::net::NetConnection >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"decodedFrames") ) { decodedFrames=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"objectEncoding") ) { objectEncoding=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"soundTransform") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_soundTransform(inValue.Cast<  ::openfl::media::SoundTransform >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"checkPolicyFile") ) { checkPolicyFile=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__soundTransform") ) { _hx___soundTransform=inValue.Cast<  ::openfl::media::SoundTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NetStream_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("audioCodec",e0,85,af,e9));
	outFields->push(HX_("bufferLength",06,86,dc,a3));
	outFields->push(HX_("bufferTime",2d,35,0d,9e));
	outFields->push(HX_("bytesLoaded",d0,66,ca,99));
	outFields->push(HX_("bytesTotal",59,57,da,45));
	outFields->push(HX_("checkPolicyFile",76,1e,96,af));
	outFields->push(HX_("client",4b,ca,4f,0a));
	outFields->push(HX_("currentFPS",30,71,28,c7));
	outFields->push(HX_("decodedFrames",bc,4b,b5,7c));
	outFields->push(HX_("liveDelay",f7,90,cd,6a));
	outFields->push(HX_("objectEncoding",b2,1e,15,2a));
	outFields->push(HX_("soundTransform",9d,ee,de,22));
	outFields->push(HX_("speed",87,97,69,81));
	outFields->push(HX_("time",0d,cc,fc,4c));
	outFields->push(HX_("videoCode",48,4b,7d,67));
	outFields->push(HX_("__closed",cc,14,81,b6));
	outFields->push(HX_("__connection",3e,1b,a6,2d));
	outFields->push(HX_("__soundTransform",bd,79,1e,57));
	outFields->push(HX_("__timer",a5,18,94,7a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NetStream_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(NetStream_obj,audioCodec),HX_("audioCodec",e0,85,af,e9)},
	{::hx::fsFloat,(int)offsetof(NetStream_obj,bufferLength),HX_("bufferLength",06,86,dc,a3)},
	{::hx::fsFloat,(int)offsetof(NetStream_obj,bufferTime),HX_("bufferTime",2d,35,0d,9e)},
	{::hx::fsInt,(int)offsetof(NetStream_obj,bytesLoaded),HX_("bytesLoaded",d0,66,ca,99)},
	{::hx::fsInt,(int)offsetof(NetStream_obj,bytesTotal),HX_("bytesTotal",59,57,da,45)},
	{::hx::fsBool,(int)offsetof(NetStream_obj,checkPolicyFile),HX_("checkPolicyFile",76,1e,96,af)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(NetStream_obj,client),HX_("client",4b,ca,4f,0a)},
	{::hx::fsFloat,(int)offsetof(NetStream_obj,currentFPS),HX_("currentFPS",30,71,28,c7)},
	{::hx::fsInt,(int)offsetof(NetStream_obj,decodedFrames),HX_("decodedFrames",bc,4b,b5,7c)},
	{::hx::fsFloat,(int)offsetof(NetStream_obj,liveDelay),HX_("liveDelay",f7,90,cd,6a)},
	{::hx::fsInt,(int)offsetof(NetStream_obj,objectEncoding),HX_("objectEncoding",b2,1e,15,2a)},
	{::hx::fsFloat,(int)offsetof(NetStream_obj,time),HX_("time",0d,cc,fc,4c)},
	{::hx::fsInt,(int)offsetof(NetStream_obj,videoCode),HX_("videoCode",48,4b,7d,67)},
	{::hx::fsBool,(int)offsetof(NetStream_obj,_hx___closed),HX_("__closed",cc,14,81,b6)},
	{::hx::fsObject /*  ::openfl::net::NetConnection */ ,(int)offsetof(NetStream_obj,_hx___connection),HX_("__connection",3e,1b,a6,2d)},
	{::hx::fsObject /*  ::openfl::media::SoundTransform */ ,(int)offsetof(NetStream_obj,_hx___soundTransform),HX_("__soundTransform",bd,79,1e,57)},
	{::hx::fsObject /*  ::haxe::Timer */ ,(int)offsetof(NetStream_obj,_hx___timer),HX_("__timer",a5,18,94,7a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *NetStream_obj_sStaticStorageInfo = 0;
#endif

static ::String NetStream_obj_sMemberFields[] = {
	HX_("audioCodec",e0,85,af,e9),
	HX_("bufferLength",06,86,dc,a3),
	HX_("bufferTime",2d,35,0d,9e),
	HX_("bytesLoaded",d0,66,ca,99),
	HX_("bytesTotal",59,57,da,45),
	HX_("checkPolicyFile",76,1e,96,af),
	HX_("client",4b,ca,4f,0a),
	HX_("currentFPS",30,71,28,c7),
	HX_("decodedFrames",bc,4b,b5,7c),
	HX_("liveDelay",f7,90,cd,6a),
	HX_("objectEncoding",b2,1e,15,2a),
	HX_("time",0d,cc,fc,4c),
	HX_("videoCode",48,4b,7d,67),
	HX_("__closed",cc,14,81,b6),
	HX_("__connection",3e,1b,a6,2d),
	HX_("__soundTransform",bd,79,1e,57),
	HX_("__timer",a5,18,94,7a),
	HX_("close",b8,17,63,48),
	HX_("dispose",9f,80,4c,bb),
	HX_("pause",f6,d6,57,bd),
	HX_("play",f4,2d,5a,4a),
	HX_("requestVideoStatus",fe,6a,62,2f),
	HX_("resume",ad,69,84,08),
	HX_("seek",78,85,50,4c),
	HX_("togglePause",c2,8e,1e,e5),
	HX_("__dispatchStatus",ac,7c,9a,75),
	HX_("__playStatus",66,f3,52,e5),
	HX_("video_onCanPlay",c1,e6,39,31),
	HX_("video_onCanPlayThrough",84,53,05,f1),
	HX_("video_onDurationChanged",9d,51,72,b7),
	HX_("video_onEnd",f8,01,5f,72),
	HX_("video_onError",25,4b,4d,0c),
	HX_("video_onLoadMetaData",18,d6,89,d3),
	HX_("video_onLoadStart",39,b2,d5,75),
	HX_("video_onPause",53,56,7b,56),
	HX_("video_onPlaying",0b,e0,9f,52),
	HX_("video_onSeeking",07,13,3a,47),
	HX_("video_onStalled",1c,a0,a5,f9),
	HX_("video_onTimeUpdate",79,7d,cf,0e),
	HX_("video_onWaiting",2a,ba,af,a7),
	HX_("get_soundTransform",66,cf,78,be),
	HX_("set_soundTransform",da,01,28,9b),
	HX_("get_speed",de,f3,12,c5),
	HX_("set_speed",ea,df,63,a8),
	::String(null()) };

::hx::Class NetStream_obj::__mClass;

void NetStream_obj::__register()
{
	NetStream_obj _hx_dummy;
	NetStream_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.net.NetStream",ee,27,61,23);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NetStream_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NetStream_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NetStream_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NetStream_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void NetStream_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2d6908cd6c18c638_515_boot)
HXDLIN( 515)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(4)
            				->setFixed(0,HX_("speed",87,97,69,81), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20)))))
            				->setFixed(1,HX_("audioCodec",e0,85,af,e9), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20)))))
            				->setFixed(2,HX_("requestVideoStatus",fe,6a,62,2f), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20)))))
            				->setFixed(3,HX_("decodedFrames",bc,4b,b5,7c), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))))));
            	}
}

} // end namespace openfl
} // end namespace net
