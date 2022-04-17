#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_writeonly_rendering
#define INCLUDED_lime_graphics_opengl_ext_QCOM_writeonly_rendering

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_e1536ec9c60761cf_6_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,QCOM_writeonly_rendering)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES QCOM_writeonly_rendering_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef QCOM_writeonly_rendering_obj OBJ_;
		QCOM_writeonly_rendering_obj();

	public:
		enum { _hx_ClassId = 0x51ebb7fb };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.QCOM_writeonly_rendering")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.QCOM_writeonly_rendering"); }

		inline static ::hx::ObjectPtr< QCOM_writeonly_rendering_obj > __new() {
			::hx::ObjectPtr< QCOM_writeonly_rendering_obj > __this = new QCOM_writeonly_rendering_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< QCOM_writeonly_rendering_obj > __alloc(::hx::Ctx *_hx_ctx) {
			QCOM_writeonly_rendering_obj *__this = (QCOM_writeonly_rendering_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(QCOM_writeonly_rendering_obj), false, "lime.graphics.opengl.ext.QCOM_writeonly_rendering"));
			*(void **)__this = QCOM_writeonly_rendering_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_e1536ec9c60761cf_6_new)
            	HX_STACK_THIS(__this)
HXLINE(   6)
HXDLIN(   6)		( ( ::lime::graphics::opengl::ext::QCOM_writeonly_rendering)(__this) )->WRITEONLY_RENDERING_QCOM = 34851;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~QCOM_writeonly_rendering_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("QCOM_writeonly_rendering",09,44,22,8a); }

		int WRITEONLY_RENDERING_QCOM;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_QCOM_writeonly_rendering */ 
