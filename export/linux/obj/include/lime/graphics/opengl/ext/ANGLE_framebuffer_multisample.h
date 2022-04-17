#ifndef INCLUDED_lime_graphics_opengl_ext_ANGLE_framebuffer_multisample
#define INCLUDED_lime_graphics_opengl_ext_ANGLE_framebuffer_multisample

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_6ff00ab511a94054_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,ANGLE_framebuffer_multisample)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES ANGLE_framebuffer_multisample_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ANGLE_framebuffer_multisample_obj OBJ_;
		ANGLE_framebuffer_multisample_obj();

	public:
		enum { _hx_ClassId = 0x0f9e64d3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.ANGLE_framebuffer_multisample")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.ANGLE_framebuffer_multisample"); }

		inline static ::hx::ObjectPtr< ANGLE_framebuffer_multisample_obj > __new() {
			::hx::ObjectPtr< ANGLE_framebuffer_multisample_obj > __this = new ANGLE_framebuffer_multisample_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ANGLE_framebuffer_multisample_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ANGLE_framebuffer_multisample_obj *__this = (ANGLE_framebuffer_multisample_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ANGLE_framebuffer_multisample_obj), false, "lime.graphics.opengl.ext.ANGLE_framebuffer_multisample"));
			*(void **)__this = ANGLE_framebuffer_multisample_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_6ff00ab511a94054_4_new)
            	HX_STACK_THIS(__this)
HXLINE(   4)
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::ANGLE_framebuffer_multisample)(__this) )->MAX_SAMPLES_ANGLE = 36183;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::ANGLE_framebuffer_multisample)(__this) )->FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE = 36182;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::ANGLE_framebuffer_multisample)(__this) )->RENDERBUFFER_SAMPLES_ANGLE = 36011;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ANGLE_framebuffer_multisample_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ANGLE_framebuffer_multisample",05,66,2b,e3); }

		int RENDERBUFFER_SAMPLES_ANGLE;
		int FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE;
		int MAX_SAMPLES_ANGLE;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_ANGLE_framebuffer_multisample */ 
