#ifndef INCLUDED_lime_graphics_opengl_ext_IMG_multisampled_render_to_texture
#define INCLUDED_lime_graphics_opengl_ext_IMG_multisampled_render_to_texture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_ebcce84ebca33b42_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,IMG_multisampled_render_to_texture)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES IMG_multisampled_render_to_texture_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef IMG_multisampled_render_to_texture_obj OBJ_;
		IMG_multisampled_render_to_texture_obj();

	public:
		enum { _hx_ClassId = 0x6b4991c8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.IMG_multisampled_render_to_texture")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.IMG_multisampled_render_to_texture"); }

		inline static ::hx::ObjectPtr< IMG_multisampled_render_to_texture_obj > __new() {
			::hx::ObjectPtr< IMG_multisampled_render_to_texture_obj > __this = new IMG_multisampled_render_to_texture_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< IMG_multisampled_render_to_texture_obj > __alloc(::hx::Ctx *_hx_ctx) {
			IMG_multisampled_render_to_texture_obj *__this = (IMG_multisampled_render_to_texture_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(IMG_multisampled_render_to_texture_obj), false, "lime.graphics.opengl.ext.IMG_multisampled_render_to_texture"));
			*(void **)__this = IMG_multisampled_render_to_texture_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_ebcce84ebca33b42_4_new)
            	HX_STACK_THIS(__this)
HXLINE(   4)
HXLINE(   9)		( ( ::lime::graphics::opengl::ext::IMG_multisampled_render_to_texture)(__this) )->TEXTURE_SAMPLES_IMG = 37174;
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::IMG_multisampled_render_to_texture)(__this) )->MAX_SAMPLES_IMG = 37173;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::IMG_multisampled_render_to_texture)(__this) )->FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG = 37172;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::IMG_multisampled_render_to_texture)(__this) )->RENDERBUFFER_SAMPLES_IMG = 37171;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~IMG_multisampled_render_to_texture_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("IMG_multisampled_render_to_texture",1e,8d,48,50); }

		int RENDERBUFFER_SAMPLES_IMG;
		int FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG;
		int MAX_SAMPLES_IMG;
		int TEXTURE_SAMPLES_IMG;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_IMG_multisampled_render_to_texture */ 
