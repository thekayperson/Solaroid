#ifndef INCLUDED_hxcpp_debug_jsonrpc__Protocol_NotificationMethod_Impl_
#define INCLUDED_hxcpp_debug_jsonrpc__Protocol_NotificationMethod_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(hxcpp,debug,jsonrpc,_Protocol,NotificationMethod_Impl_)

namespace hxcpp{
namespace debug{
namespace jsonrpc{
namespace _Protocol{


class HXCPP_CLASS_ATTRIBUTES NotificationMethod_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NotificationMethod_Impl__obj OBJ_;
		NotificationMethod_Impl__obj();

	public:
		enum { _hx_ClassId = 0x555a996a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxcpp.debug.jsonrpc._Protocol.NotificationMethod_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxcpp.debug.jsonrpc._Protocol.NotificationMethod_Impl_"); }

		inline static ::hx::ObjectPtr< NotificationMethod_Impl__obj > __new() {
			::hx::ObjectPtr< NotificationMethod_Impl__obj > __this = new NotificationMethod_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< NotificationMethod_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			NotificationMethod_Impl__obj *__this = (NotificationMethod_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NotificationMethod_Impl__obj), false, "hxcpp.debug.jsonrpc._Protocol.NotificationMethod_Impl_"));
			*(void **)__this = NotificationMethod_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NotificationMethod_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NotificationMethod_Impl_",ec,85,ab,85); }

		static ::String _new(::String method);
		static ::Dynamic _new_dyn();

};

} // end namespace hxcpp
} // end namespace debug
} // end namespace jsonrpc
} // end namespace _Protocol

#endif /* INCLUDED_hxcpp_debug_jsonrpc__Protocol_NotificationMethod_Impl_ */ 
