#ifndef INCLUDED_lime_graphics_opengl_ext_NV_read_buffer_front
#define INCLUDED_lime_graphics_opengl_ext_NV_read_buffer_front

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_5337d949f43690c9_5_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,NV_read_buffer_front)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES NV_read_buffer_front_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NV_read_buffer_front_obj OBJ_;
		NV_read_buffer_front_obj();

	public:
		enum { _hx_ClassId = 0x5d48f4ae };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.NV_read_buffer_front")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.NV_read_buffer_front"); }

		inline static ::hx::ObjectPtr< NV_read_buffer_front_obj > __new() {
			::hx::ObjectPtr< NV_read_buffer_front_obj > __this = new NV_read_buffer_front_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< NV_read_buffer_front_obj > __alloc(::hx::Ctx *_hx_ctx) {
			NV_read_buffer_front_obj *__this = (NV_read_buffer_front_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NV_read_buffer_front_obj), false, "lime.graphics.opengl.ext.NV_read_buffer_front"));
			*(void **)__this = NV_read_buffer_front_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_5337d949f43690c9_5_new)
            	HX_STACK_THIS(__this)
HXLINE(   5)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NV_read_buffer_front_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NV_read_buffer_front",bc,e1,e8,d2); }

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_NV_read_buffer_front */ 
