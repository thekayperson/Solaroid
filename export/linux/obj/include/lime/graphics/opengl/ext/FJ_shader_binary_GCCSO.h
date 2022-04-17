#ifndef INCLUDED_lime_graphics_opengl_ext_FJ_shader_binary_GCCSO
#define INCLUDED_lime_graphics_opengl_ext_FJ_shader_binary_GCCSO

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_2eff1332e1dfb34e_6_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,FJ_shader_binary_GCCSO)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES FJ_shader_binary_GCCSO_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FJ_shader_binary_GCCSO_obj OBJ_;
		FJ_shader_binary_GCCSO_obj();

	public:
		enum { _hx_ClassId = 0x3c89d756 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.FJ_shader_binary_GCCSO")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.FJ_shader_binary_GCCSO"); }

		inline static ::hx::ObjectPtr< FJ_shader_binary_GCCSO_obj > __new() {
			::hx::ObjectPtr< FJ_shader_binary_GCCSO_obj > __this = new FJ_shader_binary_GCCSO_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FJ_shader_binary_GCCSO_obj > __alloc(::hx::Ctx *_hx_ctx) {
			FJ_shader_binary_GCCSO_obj *__this = (FJ_shader_binary_GCCSO_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FJ_shader_binary_GCCSO_obj), false, "lime.graphics.opengl.ext.FJ_shader_binary_GCCSO"));
			*(void **)__this = FJ_shader_binary_GCCSO_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_2eff1332e1dfb34e_6_new)
            	HX_STACK_THIS(__this)
HXLINE(   6)
HXDLIN(   6)		( ( ::lime::graphics::opengl::ext::FJ_shader_binary_GCCSO)(__this) )->GCCSO_SHADER_BINARY_FJ = 37472;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FJ_shader_binary_GCCSO_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FJ_shader_binary_GCCSO",e4,a3,c9,4b); }

		int GCCSO_SHADER_BINARY_FJ;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_FJ_shader_binary_GCCSO */ 
