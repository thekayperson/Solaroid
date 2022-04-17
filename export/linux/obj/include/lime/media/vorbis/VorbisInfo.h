#ifndef INCLUDED_lime_media_vorbis_VorbisInfo
#define INCLUDED_lime_media_vorbis_VorbisInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_d9b59d7587cb992f_14_new)
HX_DECLARE_CLASS3(lime,media,vorbis,VorbisInfo)

namespace lime{
namespace media{
namespace vorbis{


class HXCPP_CLASS_ATTRIBUTES VorbisInfo_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef VorbisInfo_obj OBJ_;
		VorbisInfo_obj();

	public:
		enum { _hx_ClassId = 0x07bc4143 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.media.vorbis.VorbisInfo")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.media.vorbis.VorbisInfo"); }

		inline static ::hx::ObjectPtr< VorbisInfo_obj > __new() {
			::hx::ObjectPtr< VorbisInfo_obj > __this = new VorbisInfo_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< VorbisInfo_obj > __alloc(::hx::Ctx *_hx_ctx) {
			VorbisInfo_obj *__this = (VorbisInfo_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VorbisInfo_obj), false, "lime.media.vorbis.VorbisInfo"));
			*(void **)__this = VorbisInfo_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_d9b59d7587cb992f_14_new)
            	HX_STACK_THIS(__this)
HXLINE(  14)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VorbisInfo_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VorbisInfo",81,11,81,d6); }

		int bitrateLower;
		int bitrateNominal;
		int bitrateUpper;
		int channels;
		int rate;
		int version;
};

} // end namespace lime
} // end namespace media
} // end namespace vorbis

#endif /* INCLUDED_lime_media_vorbis_VorbisInfo */ 
