#ifndef INCLUDED_lime_graphics_opengl_ext_APPLE_texture_format_BGRA8888
#define INCLUDED_lime_graphics_opengl_ext_APPLE_texture_format_BGRA8888

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_315ede9a8526b069_6_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,APPLE_texture_format_BGRA8888)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES APPLE_texture_format_BGRA8888_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef APPLE_texture_format_BGRA8888_obj OBJ_;
		APPLE_texture_format_BGRA8888_obj();

	public:
		enum { _hx_ClassId = 0x0efb88e1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.APPLE_texture_format_BGRA8888")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.APPLE_texture_format_BGRA8888"); }

		inline static ::hx::ObjectPtr< APPLE_texture_format_BGRA8888_obj > __new() {
			::hx::ObjectPtr< APPLE_texture_format_BGRA8888_obj > __this = new APPLE_texture_format_BGRA8888_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< APPLE_texture_format_BGRA8888_obj > __alloc(::hx::Ctx *_hx_ctx) {
			APPLE_texture_format_BGRA8888_obj *__this = (APPLE_texture_format_BGRA8888_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(APPLE_texture_format_BGRA8888_obj), false, "lime.graphics.opengl.ext.APPLE_texture_format_BGRA8888"));
			*(void **)__this = APPLE_texture_format_BGRA8888_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_315ede9a8526b069_6_new)
            	HX_STACK_THIS(__this)
HXLINE(   6)
HXDLIN(   6)		( ( ::lime::graphics::opengl::ext::APPLE_texture_format_BGRA8888)(__this) )->BGRA_EXT = 32993;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~APPLE_texture_format_BGRA8888_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("APPLE_texture_format_BGRA8888",13,8a,88,e2); }

		int BGRA_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_APPLE_texture_format_BGRA8888 */ 
