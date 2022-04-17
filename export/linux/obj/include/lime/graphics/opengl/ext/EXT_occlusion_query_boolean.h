#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_occlusion_query_boolean
#define INCLUDED_lime_graphics_opengl_ext_EXT_occlusion_query_boolean

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_f43e8bd3fec2f24b_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_occlusion_query_boolean)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES EXT_occlusion_query_boolean_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EXT_occlusion_query_boolean_obj OBJ_;
		EXT_occlusion_query_boolean_obj();

	public:
		enum { _hx_ClassId = 0x5ceab6cf };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_occlusion_query_boolean")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.EXT_occlusion_query_boolean"); }

		inline static ::hx::ObjectPtr< EXT_occlusion_query_boolean_obj > __new() {
			::hx::ObjectPtr< EXT_occlusion_query_boolean_obj > __this = new EXT_occlusion_query_boolean_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< EXT_occlusion_query_boolean_obj > __alloc(::hx::Ctx *_hx_ctx) {
			EXT_occlusion_query_boolean_obj *__this = (EXT_occlusion_query_boolean_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EXT_occlusion_query_boolean_obj), false, "lime.graphics.opengl.ext.EXT_occlusion_query_boolean"));
			*(void **)__this = EXT_occlusion_query_boolean_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_f43e8bd3fec2f24b_4_new)
            	HX_STACK_THIS(__this)
HXLINE(   4)
HXLINE(  10)		( ( ::lime::graphics::opengl::ext::EXT_occlusion_query_boolean)(__this) )->QUERY_RESULT_AVAILABLE_EXT = 34919;
HXLINE(   9)		( ( ::lime::graphics::opengl::ext::EXT_occlusion_query_boolean)(__this) )->QUERY_RESULT_EXT = 34918;
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::EXT_occlusion_query_boolean)(__this) )->CURRENT_QUERY_EXT = 34917;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::EXT_occlusion_query_boolean)(__this) )->ANY_SAMPLES_PASSED_CONSERVATIVE_EXT = 36202;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::EXT_occlusion_query_boolean)(__this) )->ANY_SAMPLES_PASSED_EXT = 35887;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EXT_occlusion_query_boolean_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EXT_occlusion_query_boolean",81,a7,94,3d); }

		int ANY_SAMPLES_PASSED_EXT;
		int ANY_SAMPLES_PASSED_CONSERVATIVE_EXT;
		int CURRENT_QUERY_EXT;
		int QUERY_RESULT_EXT;
		int QUERY_RESULT_AVAILABLE_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_occlusion_query_boolean */ 
