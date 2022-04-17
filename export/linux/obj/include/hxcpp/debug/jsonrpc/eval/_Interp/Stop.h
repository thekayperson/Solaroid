#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval__Interp_Stop
#define INCLUDED_hxcpp_debug_jsonrpc_eval__Interp_Stop

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(hxcpp,debug,jsonrpc,eval,_Interp,Stop)
namespace hxcpp{
namespace debug{
namespace jsonrpc{
namespace eval{
namespace _Interp{


class Stop_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Stop_obj OBJ_;

	public:
		Stop_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxcpp.debug.jsonrpc.eval._Interp.Stop",c8,4f,c8,ee); }
		::String __ToString() const { return HX_("Stop.",cc,81,43,17) + _hx_tag; }

		static ::hxcpp::debug::jsonrpc::eval::_Interp::Stop SBreak;
		static inline ::hxcpp::debug::jsonrpc::eval::_Interp::Stop SBreak_dyn() { return SBreak; }
		static ::hxcpp::debug::jsonrpc::eval::_Interp::Stop SContinue;
		static inline ::hxcpp::debug::jsonrpc::eval::_Interp::Stop SContinue_dyn() { return SContinue; }
		static ::hxcpp::debug::jsonrpc::eval::_Interp::Stop SReturn;
		static inline ::hxcpp::debug::jsonrpc::eval::_Interp::Stop SReturn_dyn() { return SReturn; }
};

} // end namespace hxcpp
} // end namespace debug
} // end namespace jsonrpc
} // end namespace eval
} // end namespace _Interp

#endif /* INCLUDED_hxcpp_debug_jsonrpc_eval__Interp_Stop */ 
