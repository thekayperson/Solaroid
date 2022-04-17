#ifndef INCLUDED_flixel_system_debug_watch_TrackerProfile
#define INCLUDED_flixel_system_debug_watch_TrackerProfile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,_hx_system,debug,watch,TrackerProfile)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace watch{


class HXCPP_CLASS_ATTRIBUTES TrackerProfile_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TrackerProfile_obj OBJ_;
		TrackerProfile_obj();

	public:
		enum { _hx_ClassId = 0x7ab81f28 };

		void __construct(::hx::Class ObjectClass,::Array< ::String > Variables,::Array< ::Dynamic> Extensions);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.watch.TrackerProfile")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.debug.watch.TrackerProfile"); }
		static ::hx::ObjectPtr< TrackerProfile_obj > __new(::hx::Class ObjectClass,::Array< ::String > Variables,::Array< ::Dynamic> Extensions);
		static ::hx::ObjectPtr< TrackerProfile_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Class ObjectClass,::Array< ::String > Variables,::Array< ::Dynamic> Extensions);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TrackerProfile_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TrackerProfile",71,0c,93,81); }

		::hx::Class objectClass;
		::Array< ::String > variables;
		::Array< ::Dynamic> extensions;
		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace watch

#endif /* INCLUDED_flixel_system_debug_watch_TrackerProfile */ 
