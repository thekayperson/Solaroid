#ifndef INCLUDED_lime_graphics_opengl_ext_AMD_performance_monitor
#define INCLUDED_lime_graphics_opengl_ext_AMD_performance_monitor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_86b53c0d4ece9a1b_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,AMD_performance_monitor)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES AMD_performance_monitor_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AMD_performance_monitor_obj OBJ_;
		AMD_performance_monitor_obj();

	public:
		enum { _hx_ClassId = 0x2047c696 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.AMD_performance_monitor")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.AMD_performance_monitor"); }

		inline static ::hx::ObjectPtr< AMD_performance_monitor_obj > __new() {
			::hx::ObjectPtr< AMD_performance_monitor_obj > __this = new AMD_performance_monitor_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< AMD_performance_monitor_obj > __alloc(::hx::Ctx *_hx_ctx) {
			AMD_performance_monitor_obj *__this = (AMD_performance_monitor_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AMD_performance_monitor_obj), false, "lime.graphics.opengl.ext.AMD_performance_monitor"));
			*(void **)__this = AMD_performance_monitor_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_86b53c0d4ece9a1b_4_new)
            	HX_STACK_THIS(__this)
HXLINE(   4)
HXLINE(  12)		( ( ::lime::graphics::opengl::ext::AMD_performance_monitor)(__this) )->PERFMON_RESULT_AMD = 35782;
HXLINE(  11)		( ( ::lime::graphics::opengl::ext::AMD_performance_monitor)(__this) )->PERFMON_RESULT_SIZE_AMD = 35781;
HXLINE(  10)		( ( ::lime::graphics::opengl::ext::AMD_performance_monitor)(__this) )->PERFMON_RESULT_AVAILABLE_AMD = 35780;
HXLINE(   9)		( ( ::lime::graphics::opengl::ext::AMD_performance_monitor)(__this) )->PERCENTAGE_AMD = 35779;
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::AMD_performance_monitor)(__this) )->UNSIGNED_INT64_AMD = 35778;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::AMD_performance_monitor)(__this) )->COUNTER_RANGE_AMD = 35777;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::AMD_performance_monitor)(__this) )->COUNTER_TYPE_AMD = 35776;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AMD_performance_monitor_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AMD_performance_monitor",e4,7a,6c,36); }

		int COUNTER_TYPE_AMD;
		int COUNTER_RANGE_AMD;
		int UNSIGNED_INT64_AMD;
		int PERCENTAGE_AMD;
		int PERFMON_RESULT_AVAILABLE_AMD;
		int PERFMON_RESULT_SIZE_AMD;
		int PERFMON_RESULT_AMD;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_AMD_performance_monitor */ 
