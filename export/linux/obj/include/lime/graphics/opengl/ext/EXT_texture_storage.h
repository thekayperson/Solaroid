#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_texture_storage
#define INCLUDED_lime_graphics_opengl_ext_EXT_texture_storage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_4a94eca10f0d89d1_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_texture_storage)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES EXT_texture_storage_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EXT_texture_storage_obj OBJ_;
		EXT_texture_storage_obj();

	public:
		enum { _hx_ClassId = 0x4eca9c4b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_texture_storage")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.EXT_texture_storage"); }

		inline static ::hx::ObjectPtr< EXT_texture_storage_obj > __new() {
			::hx::ObjectPtr< EXT_texture_storage_obj > __this = new EXT_texture_storage_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< EXT_texture_storage_obj > __alloc(::hx::Ctx *_hx_ctx) {
			EXT_texture_storage_obj *__this = (EXT_texture_storage_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EXT_texture_storage_obj), false, "lime.graphics.opengl.ext.EXT_texture_storage"));
			*(void **)__this = EXT_texture_storage_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_4a94eca10f0d89d1_4_new)
            	HX_STACK_THIS(__this)
HXLINE(   4)
HXLINE(  28)		( ( ::lime::graphics::opengl::ext::EXT_texture_storage)(__this) )->RG16F_EXT = 33327;
HXLINE(  27)		( ( ::lime::graphics::opengl::ext::EXT_texture_storage)(__this) )->R16F_EXT = 33325;
HXLINE(  26)		( ( ::lime::graphics::opengl::ext::EXT_texture_storage)(__this) )->RG32F_EXT = 33328;
HXLINE(  25)		( ( ::lime::graphics::opengl::ext::EXT_texture_storage)(__this) )->R32F_EXT = 33326;
HXLINE(  24)		( ( ::lime::graphics::opengl::ext::EXT_texture_storage)(__this) )->RG8_EXT = 33323;
HXLINE(  23)		( ( ::lime::graphics::opengl::ext::EXT_texture_storage)(__this) )->R8_EXT = 33321;
HXLINE(  22)		( ( ::lime::graphics::opengl::ext::EXT_texture_storage)(__this) )->BGRA8_EXT = 37793;
HXLINE(  21)		( ( ::lime::graphics::opengl::ext::EXT_texture_storage)(__this) )->RGB10_EXT = 32850;
HXLINE(  20)		( ( ::lime::graphics::opengl::ext::EXT_texture_storage)(__this) )->RGB10_A2_EXT = 32857;
HXLINE(  19)		( ( ::lime::graphics::opengl::ext::EXT_texture_storage)(__this) )->LUMINANCE_ALPHA16F_EXT = 34847;
HXLINE(  18)		( ( ::lime::graphics::opengl::ext::EXT_texture_storage)(__this) )->LUMINANCE16F_EXT = 34846;
HXLINE(  17)		( ( ::lime::graphics::opengl::ext::EXT_texture_storage)(__this) )->ALPHA16F_EXT = 34844;
HXLINE(  16)		( ( ::lime::graphics::opengl::ext::EXT_texture_storage)(__this) )->RGB16F_EXT = 34843;
HXLINE(  15)		( ( ::lime::graphics::opengl::ext::EXT_texture_storage)(__this) )->RGBA16F_EXT = 34842;
HXLINE(  14)		( ( ::lime::graphics::opengl::ext::EXT_texture_storage)(__this) )->LUMINANCE_ALPHA32F_EXT = 34841;
HXLINE(  13)		( ( ::lime::graphics::opengl::ext::EXT_texture_storage)(__this) )->LUMINANCE32F_EXT = 34840;
HXLINE(  12)		( ( ::lime::graphics::opengl::ext::EXT_texture_storage)(__this) )->ALPHA32F_EXT = 34838;
HXLINE(  11)		( ( ::lime::graphics::opengl::ext::EXT_texture_storage)(__this) )->RGB32F_EXT = 34837;
HXLINE(  10)		( ( ::lime::graphics::opengl::ext::EXT_texture_storage)(__this) )->RGBA32F_EXT = 34836;
HXLINE(   9)		( ( ::lime::graphics::opengl::ext::EXT_texture_storage)(__this) )->LUMINANCE8_ALPHA8_EXT = 32837;
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::EXT_texture_storage)(__this) )->LUMINANCE8_EXT = 32832;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::EXT_texture_storage)(__this) )->ALPHA8_EXT = 32828;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::EXT_texture_storage)(__this) )->TEXTURE_IMMUTABLE_FORMAT_EXT = 37167;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EXT_texture_storage_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EXT_texture_storage",99,91,8f,9d); }

		int TEXTURE_IMMUTABLE_FORMAT_EXT;
		int ALPHA8_EXT;
		int LUMINANCE8_EXT;
		int LUMINANCE8_ALPHA8_EXT;
		int RGBA32F_EXT;
		int RGB32F_EXT;
		int ALPHA32F_EXT;
		int LUMINANCE32F_EXT;
		int LUMINANCE_ALPHA32F_EXT;
		int RGBA16F_EXT;
		int RGB16F_EXT;
		int ALPHA16F_EXT;
		int LUMINANCE16F_EXT;
		int LUMINANCE_ALPHA16F_EXT;
		int RGB10_A2_EXT;
		int RGB10_EXT;
		int BGRA8_EXT;
		int R8_EXT;
		int RG8_EXT;
		int R32F_EXT;
		int RG32F_EXT;
		int R16F_EXT;
		int RG16F_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_texture_storage */ 
