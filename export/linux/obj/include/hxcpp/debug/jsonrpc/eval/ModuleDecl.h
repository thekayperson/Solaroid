#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_ModuleDecl
#define INCLUDED_hxcpp_debug_jsonrpc_eval_ModuleDecl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(hxcpp,debug,jsonrpc,eval,ModuleDecl)
namespace hxcpp{
namespace debug{
namespace jsonrpc{
namespace eval{


class ModuleDecl_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ModuleDecl_obj OBJ_;

	public:
		ModuleDecl_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxcpp.debug.jsonrpc.eval.ModuleDecl",81,b3,17,d6); }
		::String __ToString() const { return HX_("ModuleDecl.",18,70,f2,04) + _hx_tag; }

		static ::hxcpp::debug::jsonrpc::eval::ModuleDecl DClass( ::Dynamic c);
		static ::Dynamic DClass_dyn();
		static ::hxcpp::debug::jsonrpc::eval::ModuleDecl DImport(::Array< ::String > path, ::Dynamic everything);
		static ::Dynamic DImport_dyn();
		static ::hxcpp::debug::jsonrpc::eval::ModuleDecl DPackage(::Array< ::String > path);
		static ::Dynamic DPackage_dyn();
		static ::hxcpp::debug::jsonrpc::eval::ModuleDecl DTypedef( ::Dynamic c);
		static ::Dynamic DTypedef_dyn();
};

} // end namespace hxcpp
} // end namespace debug
} // end namespace jsonrpc
} // end namespace eval

#endif /* INCLUDED_hxcpp_debug_jsonrpc_eval_ModuleDecl */ 
