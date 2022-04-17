#include <hxcpp.h>

#ifndef INCLUDED_lime_media_AudioContext
#include <lime/media/AudioContext.h>
#endif
#ifndef INCLUDED_lime_media_FlashAudioContext
#include <lime/media/FlashAudioContext.h>
#endif
#ifndef INCLUDED_lime_media_HTML5AudioContext
#include <lime/media/HTML5AudioContext.h>
#endif
#ifndef INCLUDED_lime_media_OpenALAudioContext
#include <lime/media/OpenALAudioContext.h>
#endif
#ifndef INCLUDED_lime_media_WebAudioContext
#include <lime/media/WebAudioContext.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6bf3b860440ffc5d_26_new,"lime.media.AudioContext","new",0xf93a2e4e,"lime.media.AudioContext.new","lime/media/AudioContext.hx",26,0xa54b0860)
namespace lime{
namespace media{

void AudioContext_obj::__construct(::String type){
            	HX_GC_STACKFRAME(&_hx_pos_6bf3b860440ffc5d_26_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(type,"type")
HXLINE(  26)
HXDLIN(  26)		if ((type != HX_("custom",b1,87,92,3f))) {
HXLINE(  49)			this->openal =  ::lime::media::OpenALAudioContext_obj::__alloc( HX_CTX );
HXLINE(  50)			this->type = HX_("openal",35,5f,94,21);
            		}
            		else {
HXLINE(  55)			this->type = HX_("custom",b1,87,92,3f);
            		}
            	}

Dynamic AudioContext_obj::__CreateEmpty() { return new AudioContext_obj; }

void *AudioContext_obj::_hx_vtable = 0;

Dynamic AudioContext_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AudioContext_obj > _hx_result = new AudioContext_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool AudioContext_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x504d7de4;
}


::hx::ObjectPtr< AudioContext_obj > AudioContext_obj::__new(::String type) {
	::hx::ObjectPtr< AudioContext_obj > __this = new AudioContext_obj();
	__this->__construct(type);
	return __this;
}

::hx::ObjectPtr< AudioContext_obj > AudioContext_obj::__alloc(::hx::Ctx *_hx_ctx,::String type) {
	AudioContext_obj *__this = (AudioContext_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AudioContext_obj), true, "lime.media.AudioContext"));
	*(void **)__this = AudioContext_obj::_hx_vtable;
	__this->__construct(type);
	return __this;
}

AudioContext_obj::AudioContext_obj()
{
}

void AudioContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AudioContext);
	HX_MARK_MEMBER_NAME(custom,"custom");
	HX_MARK_MEMBER_NAME(flash,"flash");
	HX_MARK_MEMBER_NAME(html5,"html5");
	HX_MARK_MEMBER_NAME(openal,"openal");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(web,"web");
	HX_MARK_END_CLASS();
}

void AudioContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(custom,"custom");
	HX_VISIT_MEMBER_NAME(flash,"flash");
	HX_VISIT_MEMBER_NAME(html5,"html5");
	HX_VISIT_MEMBER_NAME(openal,"openal");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(web,"web");
}

::hx::Val AudioContext_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"web") ) { return ::hx::Val( web ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flash") ) { return ::hx::Val( flash ); }
		if (HX_FIELD_EQ(inName,"html5") ) { return ::hx::Val( html5 ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"custom") ) { return ::hx::Val( custom ); }
		if (HX_FIELD_EQ(inName,"openal") ) { return ::hx::Val( openal ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AudioContext_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"web") ) { web=inValue.Cast<  ::lime::media::WebAudioContext >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flash") ) { flash=inValue.Cast<  ::lime::media::FlashAudioContext >(); return inValue; }
		if (HX_FIELD_EQ(inName,"html5") ) { html5=inValue.Cast<  ::lime::media::HTML5AudioContext >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"custom") ) { custom=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"openal") ) { openal=inValue.Cast<  ::lime::media::OpenALAudioContext >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AudioContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("custom",b1,87,92,3f));
	outFields->push(HX_("flash",b0,35,8c,02));
	outFields->push(HX_("html5",6a,28,ac,2e));
	outFields->push(HX_("openal",35,5f,94,21));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("web",94,a4,5a,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AudioContext_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AudioContext_obj,custom),HX_("custom",b1,87,92,3f)},
	{::hx::fsObject /*  ::lime::media::FlashAudioContext */ ,(int)offsetof(AudioContext_obj,flash),HX_("flash",b0,35,8c,02)},
	{::hx::fsObject /*  ::lime::media::HTML5AudioContext */ ,(int)offsetof(AudioContext_obj,html5),HX_("html5",6a,28,ac,2e)},
	{::hx::fsObject /*  ::lime::media::OpenALAudioContext */ ,(int)offsetof(AudioContext_obj,openal),HX_("openal",35,5f,94,21)},
	{::hx::fsString,(int)offsetof(AudioContext_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsObject /*  ::lime::media::WebAudioContext */ ,(int)offsetof(AudioContext_obj,web),HX_("web",94,a4,5a,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AudioContext_obj_sStaticStorageInfo = 0;
#endif

static ::String AudioContext_obj_sMemberFields[] = {
	HX_("custom",b1,87,92,3f),
	HX_("flash",b0,35,8c,02),
	HX_("html5",6a,28,ac,2e),
	HX_("openal",35,5f,94,21),
	HX_("type",ba,f2,08,4d),
	HX_("web",94,a4,5a,00),
	::String(null()) };

::hx::Class AudioContext_obj::__mClass;

void AudioContext_obj::__register()
{
	AudioContext_obj _hx_dummy;
	AudioContext_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.media.AudioContext",5c,af,9d,2f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AudioContext_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AudioContext_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AudioContext_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AudioContext_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace media
