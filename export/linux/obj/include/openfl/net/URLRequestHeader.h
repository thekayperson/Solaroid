#ifndef INCLUDED_openfl_net_URLRequestHeader
#define INCLUDED_openfl_net_URLRequestHeader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_8cde7e51a6201b8b_100_new)
HX_DECLARE_CLASS2(openfl,net,URLRequestHeader)

namespace openfl{
namespace net{


class HXCPP_CLASS_ATTRIBUTES URLRequestHeader_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef URLRequestHeader_obj OBJ_;
		URLRequestHeader_obj();

	public:
		enum { _hx_ClassId = 0x7f232c46 };

		void __construct(::String __o_name,::String __o_value);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.net.URLRequestHeader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.net.URLRequestHeader"); }

		inline static ::hx::ObjectPtr< URLRequestHeader_obj > __new(::String __o_name,::String __o_value) {
			::hx::ObjectPtr< URLRequestHeader_obj > __this = new URLRequestHeader_obj();
			__this->__construct(__o_name,__o_value);
			return __this;
		}

		inline static ::hx::ObjectPtr< URLRequestHeader_obj > __alloc(::hx::Ctx *_hx_ctx,::String __o_name,::String __o_value) {
			URLRequestHeader_obj *__this = (URLRequestHeader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(URLRequestHeader_obj), true, "openfl.net.URLRequestHeader"));
			*(void **)__this = URLRequestHeader_obj::_hx_vtable;
{
            		::String name = __o_name;
            		if (::hx::IsNull(__o_name)) name = HX_("",00,00,00,00);
            		::String value = __o_value;
            		if (::hx::IsNull(__o_value)) value = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_8cde7e51a6201b8b_100_new)
            	HX_STACK_THIS(__this)
            	HX_STACK_ARG(name,"name")
            	HX_STACK_ARG(value,"value")
HXLINE( 100)
HXLINE( 101)		( ( ::openfl::net::URLRequestHeader)(__this) )->name = name;
HXLINE( 102)		( ( ::openfl::net::URLRequestHeader)(__this) )->value = value;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~URLRequestHeader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("URLRequestHeader",6d,25,a6,a7); }

		::String name;
		::String value;
};

} // end namespace openfl
} // end namespace net

#endif /* INCLUDED_openfl_net_URLRequestHeader */ 
