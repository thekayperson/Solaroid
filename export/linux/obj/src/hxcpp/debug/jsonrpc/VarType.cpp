#include <hxcpp.h>

#ifndef INCLUDED_hxcpp_debug_jsonrpc_VarType
#include <hxcpp/debug/jsonrpc/VarType.h>
#endif
namespace hxcpp{
namespace debug{
namespace jsonrpc{

::hxcpp::debug::jsonrpc::VarType VarType_obj::TypeAnonymous(int fieldsCount)
{
	return ::hx::CreateEnum< VarType_obj >(HX_("TypeAnonymous",33,2a,3a,4f),5,1)->_hx_init(0,fieldsCount);
}

::hxcpp::debug::jsonrpc::VarType VarType_obj::TypeBool;

::hxcpp::debug::jsonrpc::VarType VarType_obj::TypeClass(::String name)
{
	return ::hx::CreateEnum< VarType_obj >(HX_("TypeClass",fe,b2,03,af),4,1)->_hx_init(0,name);
}

::hxcpp::debug::jsonrpc::VarType VarType_obj::TypeEnum(::String name)
{
	return ::hx::CreateEnum< VarType_obj >(HX_("TypeEnum",fb,2a,93,89),7,1)->_hx_init(0,name);
}

::hxcpp::debug::jsonrpc::VarType VarType_obj::TypeFloat;

::hxcpp::debug::jsonrpc::VarType VarType_obj::TypeFunction;

::hxcpp::debug::jsonrpc::VarType VarType_obj::TypeInt;

::hxcpp::debug::jsonrpc::VarType VarType_obj::TypeNull;

bool VarType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("TypeAnonymous",33,2a,3a,4f)) { outValue = VarType_obj::TypeAnonymous_dyn(); return true; }
	if (inName==HX_("TypeBool",24,44,98,87)) { outValue = VarType_obj::TypeBool; return true; }
	if (inName==HX_("TypeClass",fe,b2,03,af)) { outValue = VarType_obj::TypeClass_dyn(); return true; }
	if (inName==HX_("TypeEnum",fb,2a,93,89)) { outValue = VarType_obj::TypeEnum_dyn(); return true; }
	if (inName==HX_("TypeFloat",62,00,42,69)) { outValue = VarType_obj::TypeFloat; return true; }
	if (inName==HX_("TypeFunction",12,f0,c7,c3)) { outValue = VarType_obj::TypeFunction; return true; }
	if (inName==HX_("TypeInt",35,ea,14,c6)) { outValue = VarType_obj::TypeInt; return true; }
	if (inName==HX_("TypeNull",81,5e,8b,8f)) { outValue = VarType_obj::TypeNull; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(VarType_obj)

int VarType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("TypeAnonymous",33,2a,3a,4f)) return 5;
	if (inName==HX_("TypeBool",24,44,98,87)) return 3;
	if (inName==HX_("TypeClass",fe,b2,03,af)) return 4;
	if (inName==HX_("TypeEnum",fb,2a,93,89)) return 7;
	if (inName==HX_("TypeFloat",62,00,42,69)) return 2;
	if (inName==HX_("TypeFunction",12,f0,c7,c3)) return 6;
	if (inName==HX_("TypeInt",35,ea,14,c6)) return 1;
	if (inName==HX_("TypeNull",81,5e,8b,8f)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(VarType_obj,TypeAnonymous,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(VarType_obj,TypeClass,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(VarType_obj,TypeEnum,return)

int VarType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("TypeAnonymous",33,2a,3a,4f)) return 1;
	if (inName==HX_("TypeBool",24,44,98,87)) return 0;
	if (inName==HX_("TypeClass",fe,b2,03,af)) return 1;
	if (inName==HX_("TypeEnum",fb,2a,93,89)) return 1;
	if (inName==HX_("TypeFloat",62,00,42,69)) return 0;
	if (inName==HX_("TypeFunction",12,f0,c7,c3)) return 0;
	if (inName==HX_("TypeInt",35,ea,14,c6)) return 0;
	if (inName==HX_("TypeNull",81,5e,8b,8f)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val VarType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("TypeAnonymous",33,2a,3a,4f)) return TypeAnonymous_dyn();
	if (inName==HX_("TypeBool",24,44,98,87)) return TypeBool;
	if (inName==HX_("TypeClass",fe,b2,03,af)) return TypeClass_dyn();
	if (inName==HX_("TypeEnum",fb,2a,93,89)) return TypeEnum_dyn();
	if (inName==HX_("TypeFloat",62,00,42,69)) return TypeFloat;
	if (inName==HX_("TypeFunction",12,f0,c7,c3)) return TypeFunction;
	if (inName==HX_("TypeInt",35,ea,14,c6)) return TypeInt;
	if (inName==HX_("TypeNull",81,5e,8b,8f)) return TypeNull;
	return super::__Field(inName,inCallProp);
}

static ::String VarType_obj_sStaticFields[] = {
	HX_("TypeNull",81,5e,8b,8f),
	HX_("TypeInt",35,ea,14,c6),
	HX_("TypeFloat",62,00,42,69),
	HX_("TypeBool",24,44,98,87),
	HX_("TypeClass",fe,b2,03,af),
	HX_("TypeAnonymous",33,2a,3a,4f),
	HX_("TypeFunction",12,f0,c7,c3),
	HX_("TypeEnum",fb,2a,93,89),
	::String(null())
};

::hx::Class VarType_obj::__mClass;

Dynamic __Create_VarType_obj() { return new VarType_obj; }

void VarType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxcpp.debug.jsonrpc.VarType",ba,14,00,6d), ::hx::TCanCast< VarType_obj >,VarType_obj_sStaticFields,0,
	&__Create_VarType_obj, &__Create,
	&super::__SGetClass(), &CreateVarType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &VarType_obj::__GetStatic;
}

void VarType_obj::__boot()
{
TypeBool = ::hx::CreateConstEnum< VarType_obj >(HX_("TypeBool",24,44,98,87),3);
TypeFloat = ::hx::CreateConstEnum< VarType_obj >(HX_("TypeFloat",62,00,42,69),2);
TypeFunction = ::hx::CreateConstEnum< VarType_obj >(HX_("TypeFunction",12,f0,c7,c3),6);
TypeInt = ::hx::CreateConstEnum< VarType_obj >(HX_("TypeInt",35,ea,14,c6),1);
TypeNull = ::hx::CreateConstEnum< VarType_obj >(HX_("TypeNull",81,5e,8b,8f),0);
}


} // end namespace hxcpp
} // end namespace debug
} // end namespace jsonrpc
