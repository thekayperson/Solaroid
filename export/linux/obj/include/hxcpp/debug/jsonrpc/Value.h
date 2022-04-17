#ifndef INCLUDED_hxcpp_debug_jsonrpc_Value
#define INCLUDED_hxcpp_debug_jsonrpc_Value

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(hxcpp,debug,jsonrpc,Value)
namespace hxcpp{
namespace debug{
namespace jsonrpc{


class Value_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Value_obj OBJ_;

	public:
		Value_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxcpp.debug.jsonrpc.Value",aa,96,86,6e); }
		::String __ToString() const { return HX_("Value.",bd,77,4b,84) + _hx_tag; }

		static ::hxcpp::debug::jsonrpc::Value IntIndexed( ::Dynamic val,int length, ::Dynamic fieldAccess);
		static ::Dynamic IntIndexed_dyn();
		static ::hxcpp::debug::jsonrpc::Value NameValueList(::Array< ::String > names,::cpp::VirtualArray values);
		static ::Dynamic NameValueList_dyn();
		static ::hxcpp::debug::jsonrpc::Value Single( ::Dynamic val);
		static ::Dynamic Single_dyn();
		static ::hxcpp::debug::jsonrpc::Value StringIndexed( ::Dynamic val,::String printedValue,::Array< ::String > names,bool fieldsAsString, ::Dynamic fieldAccess);
		static ::Dynamic StringIndexed_dyn();
};

} // end namespace hxcpp
} // end namespace debug
} // end namespace jsonrpc

#endif /* INCLUDED_hxcpp_debug_jsonrpc_Value */ 
