#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_texture_filter_anisotropic
#define INCLUDED_lime_graphics_opengl_ext_EXT_texture_filter_anisotropic

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_d977a03d893e508f_5_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_texture_filter_anisotropic)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES EXT_texture_filter_anisotropic_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EXT_texture_filter_anisotropic_obj OBJ_;
		EXT_texture_filter_anisotropic_obj();

	public:
		enum { _hx_ClassId = 0x4d1533f6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_texture_filter_anisotropic")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.EXT_texture_filter_anisotropic"); }

		inline static ::hx::ObjectPtr< EXT_texture_filter_anisotropic_obj > __new() {
			::hx::ObjectPtr< EXT_texture_filter_anisotropic_obj > __this = new EXT_texture_filter_anisotropic_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< EXT_texture_filter_anisotropic_obj > __alloc(::hx::Ctx *_hx_ctx) {
			EXT_texture_filter_anisotropic_obj *__this = (EXT_texture_filter_anisotropic_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EXT_texture_filter_anisotropic_obj), false, "lime.graphics.opengl.ext.EXT_texture_filter_anisotropic"));
			*(void **)__this = EXT_texture_filter_anisotropic_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_d977a03d893e508f_5_new)
            	HX_STACK_THIS(__this)
HXLINE(   5)
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::EXT_texture_filter_anisotropic)(__this) )->MAX_TEXTURE_MAX_ANISOTROPY_EXT = 34047;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::EXT_texture_filter_anisotropic)(__this) )->TEXTURE_MAX_ANISOTROPY_EXT = 34046;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EXT_texture_filter_anisotropic_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EXT_texture_filter_anisotropic",4c,4c,32,3d); }

		int TEXTURE_MAX_ANISOTROPY_EXT;
		int MAX_TEXTURE_MAX_ANISOTROPY_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_texture_filter_anisotropic */ 
