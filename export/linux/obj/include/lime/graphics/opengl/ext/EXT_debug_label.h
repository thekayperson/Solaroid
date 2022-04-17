#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_debug_label
#define INCLUDED_lime_graphics_opengl_ext_EXT_debug_label

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_7a3489e7f3921050_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_debug_label)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES EXT_debug_label_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EXT_debug_label_obj OBJ_;
		EXT_debug_label_obj();

	public:
		enum { _hx_ClassId = 0x7c5ec938 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_debug_label")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.EXT_debug_label"); }

		inline static ::hx::ObjectPtr< EXT_debug_label_obj > __new() {
			::hx::ObjectPtr< EXT_debug_label_obj > __this = new EXT_debug_label_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< EXT_debug_label_obj > __alloc(::hx::Ctx *_hx_ctx) {
			EXT_debug_label_obj *__this = (EXT_debug_label_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EXT_debug_label_obj), false, "lime.graphics.opengl.ext.EXT_debug_label"));
			*(void **)__this = EXT_debug_label_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_7a3489e7f3921050_4_new)
            	HX_STACK_THIS(__this)
HXLINE(   4)
HXLINE(  11)		( ( ::lime::graphics::opengl::ext::EXT_debug_label)(__this) )->VERTEX_ARRAY_OBJECT_EXT = 37204;
HXLINE(  10)		( ( ::lime::graphics::opengl::ext::EXT_debug_label)(__this) )->QUERY_OBJECT_EXT = 37203;
HXLINE(   9)		( ( ::lime::graphics::opengl::ext::EXT_debug_label)(__this) )->BUFFER_OBJECT_EXT = 37201;
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::EXT_debug_label)(__this) )->SHADER_OBJECT_EXT = 35656;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::EXT_debug_label)(__this) )->PROGRAM_OBJECT_EXT = 35648;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::EXT_debug_label)(__this) )->PROGRAM_PIPELINE_OBJECT_EXT = 35407;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EXT_debug_label_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EXT_debug_label",ca,3b,0e,9c); }

		int PROGRAM_PIPELINE_OBJECT_EXT;
		int PROGRAM_OBJECT_EXT;
		int SHADER_OBJECT_EXT;
		int BUFFER_OBJECT_EXT;
		int QUERY_OBJECT_EXT;
		int VERTEX_ARRAY_OBJECT_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_debug_label */ 
