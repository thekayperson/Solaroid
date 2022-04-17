#ifndef INCLUDED_lime_graphics_opengl_ext_ARM_rgba8
#define INCLUDED_lime_graphics_opengl_ext_ARM_rgba8

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_e0775cc2fd58ee3f_5_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,ARM_rgba8)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES ARM_rgba8_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ARM_rgba8_obj OBJ_;
		ARM_rgba8_obj();

	public:
		enum { _hx_ClassId = 0x301a1bb3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.ARM_rgba8")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.ARM_rgba8"); }

		inline static ::hx::ObjectPtr< ARM_rgba8_obj > __new() {
			::hx::ObjectPtr< ARM_rgba8_obj > __this = new ARM_rgba8_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ARM_rgba8_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ARM_rgba8_obj *__this = (ARM_rgba8_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ARM_rgba8_obj), false, "lime.graphics.opengl.ext.ARM_rgba8"));
			*(void **)__this = ARM_rgba8_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_e0775cc2fd58ee3f_5_new)
            	HX_STACK_THIS(__this)
HXLINE(   5)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ARM_rgba8_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ARM_rgba8",81,03,5e,47); }

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_ARM_rgba8 */ 
