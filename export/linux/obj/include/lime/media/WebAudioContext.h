#ifndef INCLUDED_lime_media_WebAudioContext
#define INCLUDED_lime_media_WebAudioContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_8f3cbf1fbb3e6ea9_14_new)
HX_DECLARE_CLASS2(lime,media,WebAudioContext)

namespace lime{
namespace media{


class HXCPP_CLASS_ATTRIBUTES WebAudioContext_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef WebAudioContext_obj OBJ_;
		WebAudioContext_obj();

	public:
		enum { _hx_ClassId = 0x5d2855be };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.media.WebAudioContext")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.media.WebAudioContext"); }

		inline static ::hx::ObjectPtr< WebAudioContext_obj > __new() {
			::hx::ObjectPtr< WebAudioContext_obj > __this = new WebAudioContext_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< WebAudioContext_obj > __alloc(::hx::Ctx *_hx_ctx) {
			WebAudioContext_obj *__this = (WebAudioContext_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WebAudioContext_obj), true, "lime.media.WebAudioContext"));
			*(void **)__this = WebAudioContext_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_8f3cbf1fbb3e6ea9_14_new)
            	HX_STACK_THIS(__this)
HXLINE(  14)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WebAudioContext_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("WebAudioContext",4d,32,9a,10); }

		int activeSourceCount;
		Float currentTime;
		 ::Dynamic destination;
		 ::Dynamic listener;
		 ::Dynamic oncomplete;
		Float sampleRate;
		 ::Dynamic createAnalyser();
		::Dynamic createAnalyser_dyn();

		 ::Dynamic createBiquadFilter();
		::Dynamic createBiquadFilter_dyn();

		 ::Dynamic createBuffer( ::Dynamic buffer,bool mixToMono);
		::Dynamic createBuffer_dyn();

		 ::Dynamic createBufferSource();
		::Dynamic createBufferSource_dyn();

		 ::Dynamic createChannelMerger( ::Dynamic numberOfInputs);
		::Dynamic createChannelMerger_dyn();

		 ::Dynamic createChannelSplitter( ::Dynamic numberOfOutputs);
		::Dynamic createChannelSplitter_dyn();

		 ::Dynamic createConvolver();
		::Dynamic createConvolver_dyn();

		 ::Dynamic createDelay( ::Dynamic maxDelayTime);
		::Dynamic createDelay_dyn();

		 ::Dynamic createDynamicsCompressor();
		::Dynamic createDynamicsCompressor_dyn();

		 ::Dynamic createGain();
		::Dynamic createGain_dyn();

		 ::Dynamic createMediaElementSource( ::Dynamic mediaElement);
		::Dynamic createMediaElementSource_dyn();

		 ::Dynamic createMediaStreamSource( ::Dynamic mediaStream);
		::Dynamic createMediaStreamSource_dyn();

		 ::Dynamic createOscillator();
		::Dynamic createOscillator_dyn();

		 ::Dynamic createPanner();
		::Dynamic createPanner_dyn();

		 ::Dynamic createScriptProcessor(int bufferSize, ::Dynamic numberOfInputChannels, ::Dynamic numberOfOutputChannels);
		::Dynamic createScriptProcessor_dyn();

		 ::Dynamic createWaveShaper();
		::Dynamic createWaveShaper_dyn();

		 ::Dynamic createWaveTable( ::Dynamic real, ::Dynamic imag);
		::Dynamic createWaveTable_dyn();

		void decodeAudioData( ::Dynamic audioData, ::Dynamic successCallback, ::Dynamic errorCallback);
		::Dynamic decodeAudioData_dyn();

		void startRendering();
		::Dynamic startRendering_dyn();

};

} // end namespace lime
} // end namespace media

#endif /* INCLUDED_lime_media_WebAudioContext */ 
