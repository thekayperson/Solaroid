#ifndef INCLUDED_hxcpp_debug_jsonrpc_VarType
#define INCLUDED_hxcpp_debug_jsonrpc_VarType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(hxcpp,debug,jsonrpc,VarType)
namespace hxcpp{
namespace debug{
namespace jsonrpc{


class VarType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef VarType_obj OBJ_;

	public:
		VarType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxcpp.debug.jsonrpc.VarType",ba,14,00,6d); }
		::String __ToString() const { return HX_("VarType.",ed,57,3c,3b) + _hx_tag; }

		static ::hxcpp::debug::jsonrpc::VarType TypeAnonymous(int fieldsCount);
		static ::Dynamic TypeAnonymous_dyn();
		static ::hxcpp::debug::jsonrpc::VarType TypeBool;
		static inline ::hxcpp::debug::jsonrpc::VarType TypeBool_dyn() { return TypeBool; }
		static ::hxcpp::debug::jsonrpc::VarType TypeClass(::String name);
		static ::Dynamic TypeClass_dyn();
		static ::hxcpp::debug::jsonrpc::VarType TypeEnum(::String name);
		static ::Dynamic TypeEnum_dyn();
		static ::hxcpp::debug::jsonrpc::VarType TypeFloat;
		static inline ::hxcpp::debug::jsonrpc::VarType TypeFloat_dyn() { return TypeFloat; }
		static ::hxcpp::debug::jsonrpc::VarType TypeFunction;
		static inline ::hxcpp::debug::jsonrpc::VarType TypeFunction_dyn() { return TypeFunction; }
		static ::hxcpp::debug::jsonrpc::VarType TypeInt;
		static inline ::hxcpp::debug::jsonrpc::VarType TypeInt_dyn() { return TypeInt; }
		static ::hxcpp::debug::jsonrpc::VarType TypeNull;
		static inline ::hxcpp::debug::jsonrpc::VarType TypeNull_dyn() { return TypeNull; }
};

} // end namespace hxcpp
} // end namespace debug
} // end namespace jsonrpc

#endif /* INCLUDED_hxcpp_debug_jsonrpc_VarType */ 
