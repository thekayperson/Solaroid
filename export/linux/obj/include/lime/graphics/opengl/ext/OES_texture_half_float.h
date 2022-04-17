#ifndef INCLUDED_lime_graphics_opengl_ext_OES_texture_half_float
#define INCLUDED_lime_graphics_opengl_ext_OES_texture_half_float

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_e7d829e633ebb4ac_7_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,OES_texture_half_float)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES OES_texture_half_float_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef OES_texture_half_float_obj OBJ_;
		OES_texture_half_float_obj();

	public:
		enum { _hx_ClassId = 0x31137060 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.OES_texture_half_float")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.OES_texture_half_float"); }

		inline static ::hx::ObjectPtr< OES_texture_half_float_obj > __new() {
			::hx::ObjectPtr< OES_texture_half_float_obj > __this = new OES_texture_half_float_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< OES_texture_half_float_obj > __alloc(::hx::Ctx *_hx_ctx) {
			OES_texture_half_float_obj *__this = (OES_texture_half_float_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OES_texture_half_float_obj), false, "lime.graphics.opengl.ext.OES_texture_half_float"));
			*(void **)__this = OES_texture_half_float_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_e7d829e633ebb4ac_7_new)
            	HX_STACK_THIS(__this)
HXLINE(   7)
HXDLIN(   7)		( ( ::lime::graphics::opengl::ext::OES_texture_half_float)(__this) )->HALF_FLOAT_OES = 36193;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OES_texture_half_float_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OES_texture_half_float",b6,42,f5,f2); }

		int HALF_FLOAT_OES;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_OES_texture_half_float */ 
