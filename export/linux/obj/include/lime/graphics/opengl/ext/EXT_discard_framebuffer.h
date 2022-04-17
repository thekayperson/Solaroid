#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_discard_framebuffer
#define INCLUDED_lime_graphics_opengl_ext_EXT_discard_framebuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_6c4caec69cb80b91_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_discard_framebuffer)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES EXT_discard_framebuffer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EXT_discard_framebuffer_obj OBJ_;
		EXT_discard_framebuffer_obj();

	public:
		enum { _hx_ClassId = 0x13c3bf24 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_discard_framebuffer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.EXT_discard_framebuffer"); }

		inline static ::hx::ObjectPtr< EXT_discard_framebuffer_obj > __new() {
			::hx::ObjectPtr< EXT_discard_framebuffer_obj > __this = new EXT_discard_framebuffer_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< EXT_discard_framebuffer_obj > __alloc(::hx::Ctx *_hx_ctx) {
			EXT_discard_framebuffer_obj *__this = (EXT_discard_framebuffer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EXT_discard_framebuffer_obj), false, "lime.graphics.opengl.ext.EXT_discard_framebuffer"));
			*(void **)__this = EXT_discard_framebuffer_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_6c4caec69cb80b91_4_new)
            	HX_STACK_THIS(__this)
HXLINE(   4)
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::EXT_discard_framebuffer)(__this) )->STENCIL_EXT = 6146;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::EXT_discard_framebuffer)(__this) )->DEPTH_EXT = 6145;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::EXT_discard_framebuffer)(__this) )->COLOR_EXT = 6144;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EXT_discard_framebuffer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EXT_discard_framebuffer",0e,f8,79,f7); }

		int COLOR_EXT;
		int DEPTH_EXT;
		int STENCIL_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_discard_framebuffer */ 
