#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_NativeAudioSource
#include <lime/_internal/backend/native/NativeAudioSource.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_math_Vector4
#include <lime/math/Vector4.h>
#endif
#ifndef INCLUDED_lime_media_AudioBuffer
#include <lime/media/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_media_AudioSource
#include <lime/media/AudioSource.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_12_new,"lime.media.AudioSource","new",0xf0422400,"lime.media.AudioSource.new","lime/media/AudioSource.hx",12,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_47_dispose,"lime.media.AudioSource","dispose",0x9c7d243f,"lime.media.AudioSource.dispose","lime/media/AudioSource.hx",47,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_52_init,"lime.media.AudioSource","init",0x46561370,"lime.media.AudioSource.init","lime/media/AudioSource.hx",52,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_57_play,"lime.media.AudioSource","play",0x4af50654,"lime.media.AudioSource.play","lime/media/AudioSource.hx",57,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_62_pause,"lime.media.AudioSource","pause",0x443a5296,"lime.media.AudioSource.pause","lime/media/AudioSource.hx",62,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_67_stop,"lime.media.AudioSource","stop",0x4cf6c862,"lime.media.AudioSource.stop","lime/media/AudioSource.hx",67,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_73_get_currentTime,"lime.media.AudioSource","get_currentTime",0x645da01d,"lime.media.AudioSource.get_currentTime","lime/media/AudioSource.hx",73,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_78_set_currentTime,"lime.media.AudioSource","set_currentTime",0x60291d29,"lime.media.AudioSource.set_currentTime","lime/media/AudioSource.hx",78,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_83_get_gain,"lime.media.AudioSource","get_gain",0xed783468,"lime.media.AudioSource.get_gain","lime/media/AudioSource.hx",83,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_88_set_gain,"lime.media.AudioSource","set_gain",0x9bd58ddc,"lime.media.AudioSource.set_gain","lime/media/AudioSource.hx",88,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_93_get_length,"lime.media.AudioSource","get_length",0xb3e8650f,"lime.media.AudioSource.get_length","lime/media/AudioSource.hx",93,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_98_set_length,"lime.media.AudioSource","set_length",0xb7660383,"lime.media.AudioSource.set_length","lime/media/AudioSource.hx",98,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_103_get_loops,"lime.media.AudioSource","get_loops",0xc5fc1986,"lime.media.AudioSource.get_loops","lime/media/AudioSource.hx",103,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_108_set_loops,"lime.media.AudioSource","set_loops",0xa94d0592,"lime.media.AudioSource.set_loops","lime/media/AudioSource.hx",108,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_113_get_position,"lime.media.AudioSource","get_position",0x75ce8d12,"lime.media.AudioSource.get_position","lime/media/AudioSource.hx",113,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_118_set_position,"lime.media.AudioSource","set_position",0x8ac7b086,"lime.media.AudioSource.set_position","lime/media/AudioSource.hx",118,0xae7961b2)
namespace lime{
namespace media{

void AudioSource_obj::__construct( ::lime::media::AudioBuffer buffer,::hx::Null< int >  __o_offset, ::Dynamic length,::hx::Null< int >  __o_loops){
            		int offset = __o_offset.Default(0);
            		int loops = __o_loops.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_12_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(offset,"offset")
            	HX_STACK_ARG(length,"length")
            	HX_STACK_ARG(loops,"loops")
HXLINE(  12)
HXLINE(  14)		this->onComplete =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
HXLINE(  27)		this->buffer = buffer;
HXLINE(  28)		this->offset = offset;
HXLINE(  30)		this->_hx___backend =  ::lime::_internal::backend::native::NativeAudioSource_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
HXLINE(  32)		bool _hx_tmp;
HXDLIN(  32)		if (::hx::IsNotNull( length )) {
HXLINE(  32)			_hx_tmp = ::hx::IsNotEq( length,0 );
            		}
            		else {
HXLINE(  32)			_hx_tmp = false;
            		}
HXDLIN(  32)		if (_hx_tmp) {
HXLINE(  34)			this->set_length(( (int)(length) ));
            		}
HXLINE(  37)		this->set_loops(loops);
HXLINE(  39)		if (::hx::IsNotNull( buffer )) {
HXLINE(  41)			this->init();
            		}
            	}

Dynamic AudioSource_obj::__CreateEmpty() { return new AudioSource_obj; }

void *AudioSource_obj::_hx_vtable = 0;

Dynamic AudioSource_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AudioSource_obj > _hx_result = new AudioSource_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool AudioSource_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x37add122;
}

void AudioSource_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_47_dispose)
            	HX_STACK_THIS(this)
HXLINE(  47)
HXDLIN(  47)		this->_hx___backend->dispose();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,dispose,(void))

void AudioSource_obj::init(){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_52_init)
            	HX_STACK_THIS(this)
HXLINE(  52)
HXDLIN(  52)		this->_hx___backend->init();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,init,(void))

void AudioSource_obj::play(){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_57_play)
            	HX_STACK_THIS(this)
HXLINE(  57)
HXDLIN(  57)		this->_hx___backend->play();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,play,(void))

void AudioSource_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_62_pause)
            	HX_STACK_THIS(this)
HXLINE(  62)
HXDLIN(  62)		this->_hx___backend->pause();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,pause,(void))

void AudioSource_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_67_stop)
            	HX_STACK_THIS(this)
HXLINE(  67)
HXDLIN(  67)		this->_hx___backend->stop();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,stop,(void))

int AudioSource_obj::get_currentTime(){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_73_get_currentTime)
            	HX_STACK_THIS(this)
HXLINE(  73)
HXDLIN(  73)		return this->_hx___backend->getCurrentTime();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_currentTime,return )

int AudioSource_obj::set_currentTime(int value){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_78_set_currentTime)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE(  78)
HXDLIN(  78)		return this->_hx___backend->setCurrentTime(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_currentTime,return )

Float AudioSource_obj::get_gain(){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_83_get_gain)
            	HX_STACK_THIS(this)
HXLINE(  83)
HXDLIN(  83)		return this->_hx___backend->getGain();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_gain,return )

Float AudioSource_obj::set_gain(Float value){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_88_set_gain)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE(  88)
HXDLIN(  88)		return this->_hx___backend->setGain(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_gain,return )

int AudioSource_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_93_get_length)
            	HX_STACK_THIS(this)
HXLINE(  93)
HXDLIN(  93)		return this->_hx___backend->getLength();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_length,return )

int AudioSource_obj::set_length(int value){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_98_set_length)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE(  98)
HXDLIN(  98)		return this->_hx___backend->setLength(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_length,return )

int AudioSource_obj::get_loops(){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_103_get_loops)
            	HX_STACK_THIS(this)
HXLINE( 103)
HXDLIN( 103)		return this->_hx___backend->getLoops();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_loops,return )

int AudioSource_obj::set_loops(int value){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_108_set_loops)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 108)
HXDLIN( 108)		return this->_hx___backend->setLoops(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_loops,return )

 ::lime::math::Vector4 AudioSource_obj::get_position(){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_113_get_position)
            	HX_STACK_THIS(this)
HXLINE( 113)
HXDLIN( 113)		return this->_hx___backend->getPosition();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_position,return )

 ::lime::math::Vector4 AudioSource_obj::set_position( ::lime::math::Vector4 value){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_118_set_position)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 118)
HXDLIN( 118)		return this->_hx___backend->setPosition(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_position,return )


::hx::ObjectPtr< AudioSource_obj > AudioSource_obj::__new( ::lime::media::AudioBuffer buffer,::hx::Null< int >  __o_offset, ::Dynamic length,::hx::Null< int >  __o_loops) {
	::hx::ObjectPtr< AudioSource_obj > __this = new AudioSource_obj();
	__this->__construct(buffer,__o_offset,length,__o_loops);
	return __this;
}

::hx::ObjectPtr< AudioSource_obj > AudioSource_obj::__alloc(::hx::Ctx *_hx_ctx, ::lime::media::AudioBuffer buffer,::hx::Null< int >  __o_offset, ::Dynamic length,::hx::Null< int >  __o_loops) {
	AudioSource_obj *__this = (AudioSource_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AudioSource_obj), true, "lime.media.AudioSource"));
	*(void **)__this = AudioSource_obj::_hx_vtable;
	__this->__construct(buffer,__o_offset,length,__o_loops);
	return __this;
}

AudioSource_obj::AudioSource_obj()
{
}

void AudioSource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AudioSource);
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(_hx___backend,"__backend");
	HX_MARK_END_CLASS();
}

void AudioSource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(_hx___backend,"__backend");
}

::hx::Val AudioSource_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"gain") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_gain() ); }
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		if (HX_FIELD_EQ(inName,"play") ) { return ::hx::Val( play_dyn() ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"loops") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_loops() ); }
		if (HX_FIELD_EQ(inName,"pause") ) { return ::hx::Val( pause_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return ::hx::Val( buffer ); }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_length() ); }
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_position() ); }
		if (HX_FIELD_EQ(inName,"get_gain") ) { return ::hx::Val( get_gain_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_gain") ) { return ::hx::Val( set_gain_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__backend") ) { return ::hx::Val( _hx___backend ); }
		if (HX_FIELD_EQ(inName,"get_loops") ) { return ::hx::Val( get_loops_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_loops") ) { return ::hx::Val( set_loops_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return ::hx::Val( onComplete ); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return ::hx::Val( get_length_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return ::hx::Val( set_length_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentTime") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_currentTime() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_position") ) { return ::hx::Val( get_position_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return ::hx::Val( set_position_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_currentTime") ) { return ::hx::Val( get_currentTime_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_currentTime") ) { return ::hx::Val( set_currentTime_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AudioSource_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"gain") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_gain(inValue.Cast< Float >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"loops") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_loops(inValue.Cast< int >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast<  ::lime::media::AudioBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_length(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_position(inValue.Cast<  ::lime::math::Vector4 >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__backend") ) { _hx___backend=inValue.Cast<  ::lime::_internal::backend::native::NativeAudioSource >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentTime") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_currentTime(inValue.Cast< int >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AudioSource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("onComplete",f8,d4,7e,5d));
	outFields->push(HX_("buffer",00,bd,94,d0));
	outFields->push(HX_("currentTime",e6,a4,8e,85));
	outFields->push(HX_("gain",7f,f0,5e,44));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("loops",8f,f1,f9,78));
	outFields->push(HX_("offset",93,97,3f,60));
	outFields->push(HX_("position",a9,a0,fa,ca));
	outFields->push(HX_("__backend",f4,0c,d6,7c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AudioSource_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::lime::app::_Event_Void_Void */ ,(int)offsetof(AudioSource_obj,onComplete),HX_("onComplete",f8,d4,7e,5d)},
	{::hx::fsObject /*  ::lime::media::AudioBuffer */ ,(int)offsetof(AudioSource_obj,buffer),HX_("buffer",00,bd,94,d0)},
	{::hx::fsInt,(int)offsetof(AudioSource_obj,offset),HX_("offset",93,97,3f,60)},
	{::hx::fsObject /*  ::lime::_internal::backend::native::NativeAudioSource */ ,(int)offsetof(AudioSource_obj,_hx___backend),HX_("__backend",f4,0c,d6,7c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AudioSource_obj_sStaticStorageInfo = 0;
#endif

static ::String AudioSource_obj_sMemberFields[] = {
	HX_("onComplete",f8,d4,7e,5d),
	HX_("buffer",00,bd,94,d0),
	HX_("offset",93,97,3f,60),
	HX_("__backend",f4,0c,d6,7c),
	HX_("dispose",9f,80,4c,bb),
	HX_("init",10,3b,bb,45),
	HX_("play",f4,2d,5a,4a),
	HX_("pause",f6,d6,57,bd),
	HX_("stop",02,f0,5b,4c),
	HX_("get_currentTime",7d,5c,70,46),
	HX_("set_currentTime",89,d9,3b,42),
	HX_("get_gain",08,ac,19,c4),
	HX_("set_gain",7c,05,77,72),
	HX_("get_length",af,04,8f,8f),
	HX_("set_length",23,a3,0c,93),
	HX_("get_loops",e6,4d,a3,bc),
	HX_("set_loops",f2,39,f4,9f),
	HX_("get_position",b2,54,14,80),
	HX_("set_position",26,78,0d,95),
	::String(null()) };

::hx::Class AudioSource_obj::__mClass;

void AudioSource_obj::__register()
{
	AudioSource_obj _hx_dummy;
	AudioSource_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.media.AudioSource",0e,64,e8,9b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AudioSource_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AudioSource_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AudioSource_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AudioSource_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace media
