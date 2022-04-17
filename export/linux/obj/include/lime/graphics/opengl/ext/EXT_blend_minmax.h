#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_blend_minmax
#define INCLUDED_lime_graphics_opengl_ext_EXT_blend_minmax

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_60db2844fe3361da_5_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_blend_minmax)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES EXT_blend_minmax_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EXT_blend_minmax_obj OBJ_;
		EXT_blend_minmax_obj();

	public:
		enum { _hx_ClassId = 0x07ae2618 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_blend_minmax")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.EXT_blend_minmax"); }

		inline static ::hx::ObjectPtr< EXT_blend_minmax_obj > __new() {
			::hx::ObjectPtr< EXT_blend_minmax_obj > __this = new EXT_blend_minmax_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< EXT_blend_minmax_obj > __alloc(::hx::Ctx *_hx_ctx) {
			EXT_blend_minmax_obj *__this = (EXT_blend_minmax_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EXT_blend_minmax_obj), false, "lime.graphics.opengl.ext.EXT_blend_minmax"));
			*(void **)__this = EXT_blend_minmax_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_60db2844fe3361da_5_new)
            	HX_STACK_THIS(__this)
HXLINE(   5)
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::EXT_blend_minmax)(__this) )->MAX_EXT = 32776;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::EXT_blend_minmax)(__this) )->MIN_EXT = 32775;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EXT_blend_minmax_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EXT_blend_minmax",7e,f3,2e,cd); }

		int MIN_EXT;
		int MAX_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_blend_minmax */ 
