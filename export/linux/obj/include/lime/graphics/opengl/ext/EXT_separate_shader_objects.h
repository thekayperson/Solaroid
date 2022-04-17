#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_separate_shader_objects
#define INCLUDED_lime_graphics_opengl_ext_EXT_separate_shader_objects

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_daff336b6d887460_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_separate_shader_objects)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES EXT_separate_shader_objects_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EXT_separate_shader_objects_obj OBJ_;
		EXT_separate_shader_objects_obj();

	public:
		enum { _hx_ClassId = 0x63413d66 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_separate_shader_objects")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.EXT_separate_shader_objects"); }

		inline static ::hx::ObjectPtr< EXT_separate_shader_objects_obj > __new() {
			::hx::ObjectPtr< EXT_separate_shader_objects_obj > __this = new EXT_separate_shader_objects_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< EXT_separate_shader_objects_obj > __alloc(::hx::Ctx *_hx_ctx) {
			EXT_separate_shader_objects_obj *__this = (EXT_separate_shader_objects_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EXT_separate_shader_objects_obj), false, "lime.graphics.opengl.ext.EXT_separate_shader_objects"));
			*(void **)__this = EXT_separate_shader_objects_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_daff336b6d887460_4_new)
            	HX_STACK_THIS(__this)
HXLINE(   4)
HXLINE(  11)		( ( ::lime::graphics::opengl::ext::EXT_separate_shader_objects)(__this) )->PROGRAM_PIPELINE_BINDING_EXT = 33370;
HXLINE(  10)		( ( ::lime::graphics::opengl::ext::EXT_separate_shader_objects)(__this) )->ACTIVE_PROGRAM_EXT = 33369;
HXLINE(   9)		( ( ::lime::graphics::opengl::ext::EXT_separate_shader_objects)(__this) )->PROGRAM_SEPARABLE_EXT = 33368;
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::EXT_separate_shader_objects)(__this) )->ALL_SHADER_BITS_EXT = -1;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::EXT_separate_shader_objects)(__this) )->FRAGMENT_SHADER_BIT_EXT = 2;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::EXT_separate_shader_objects)(__this) )->VERTEX_SHADER_BIT_EXT = 1;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EXT_separate_shader_objects_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EXT_separate_shader_objects",18,2e,eb,43); }

		int VERTEX_SHADER_BIT_EXT;
		int FRAGMENT_SHADER_BIT_EXT;
		int ALL_SHADER_BITS_EXT;
		int PROGRAM_SEPARABLE_EXT;
		int ACTIVE_PROGRAM_EXT;
		int PROGRAM_PIPELINE_BINDING_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_separate_shader_objects */ 
