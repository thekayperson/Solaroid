#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_color_buffer_float
#define INCLUDED_lime_graphics_opengl_ext_EXT_color_buffer_float

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_ecf68149cf78b389_6_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_color_buffer_float)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES EXT_color_buffer_float_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EXT_color_buffer_float_obj OBJ_;
		EXT_color_buffer_float_obj();

	public:
		enum { _hx_ClassId = 0x747a4a45 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_color_buffer_float")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.EXT_color_buffer_float"); }

		inline static ::hx::ObjectPtr< EXT_color_buffer_float_obj > __new() {
			::hx::ObjectPtr< EXT_color_buffer_float_obj > __this = new EXT_color_buffer_float_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< EXT_color_buffer_float_obj > __alloc(::hx::Ctx *_hx_ctx) {
			EXT_color_buffer_float_obj *__this = (EXT_color_buffer_float_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EXT_color_buffer_float_obj), false, "lime.graphics.opengl.ext.EXT_color_buffer_float"));
			*(void **)__this = EXT_color_buffer_float_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_ecf68149cf78b389_6_new)
            	HX_STACK_THIS(__this)
HXLINE(   6)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EXT_color_buffer_float_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EXT_color_buffer_float",b7,19,0b,dd); }

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_color_buffer_float */ 
