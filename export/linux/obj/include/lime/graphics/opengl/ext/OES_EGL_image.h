#ifndef INCLUDED_lime_graphics_opengl_ext_OES_EGL_image
#define INCLUDED_lime_graphics_opengl_ext_OES_EGL_image

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_8d0895ed1f8ffb08_5_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,OES_EGL_image)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES OES_EGL_image_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef OES_EGL_image_obj OBJ_;
		OES_EGL_image_obj();

	public:
		enum { _hx_ClassId = 0x19192712 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.OES_EGL_image")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.OES_EGL_image"); }

		inline static ::hx::ObjectPtr< OES_EGL_image_obj > __new() {
			::hx::ObjectPtr< OES_EGL_image_obj > __this = new OES_EGL_image_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< OES_EGL_image_obj > __alloc(::hx::Ctx *_hx_ctx) {
			OES_EGL_image_obj *__this = (OES_EGL_image_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OES_EGL_image_obj), false, "lime.graphics.opengl.ext.OES_EGL_image"));
			*(void **)__this = OES_EGL_image_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_8d0895ed1f8ffb08_5_new)
            	HX_STACK_THIS(__this)
HXLINE(   5)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OES_EGL_image_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OES_EGL_image",44,24,7d,2c); }

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_OES_EGL_image */ 
