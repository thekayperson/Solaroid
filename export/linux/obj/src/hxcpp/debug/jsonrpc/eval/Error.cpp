#include <hxcpp.h>

#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_Error
#include <hxcpp/debug/jsonrpc/eval/Error.h>
#endif
namespace hxcpp{
namespace debug{
namespace jsonrpc{
namespace eval{

::hxcpp::debug::jsonrpc::eval::Error Error_obj::ECustom(::String msg)
{
	return ::hx::CreateEnum< Error_obj >(HX_("ECustom",d6,fd,6f,a9),9,1)->_hx_init(0,msg);
}

::hxcpp::debug::jsonrpc::eval::Error Error_obj::EInvalidAccess(::String f)
{
	return ::hx::CreateEnum< Error_obj >(HX_("EInvalidAccess",76,c0,1f,d1),8,1)->_hx_init(0,f);
}

::hxcpp::debug::jsonrpc::eval::Error Error_obj::EInvalidChar(int c)
{
	return ::hx::CreateEnum< Error_obj >(HX_("EInvalidChar",28,d1,99,46),0,1)->_hx_init(0,c);
}

::hxcpp::debug::jsonrpc::eval::Error Error_obj::EInvalidIterator(::String v)
{
	return ::hx::CreateEnum< Error_obj >(HX_("EInvalidIterator",40,4d,71,f2),6,1)->_hx_init(0,v);
}

::hxcpp::debug::jsonrpc::eval::Error Error_obj::EInvalidOp(::String op)
{
	return ::hx::CreateEnum< Error_obj >(HX_("EInvalidOp",f3,3a,13,f7),7,1)->_hx_init(0,op);
}

::hxcpp::debug::jsonrpc::eval::Error Error_obj::EInvalidPreprocessor(::String msg)
{
	return ::hx::CreateEnum< Error_obj >(HX_("EInvalidPreprocessor",21,d5,28,58),4,1)->_hx_init(0,msg);
}

::hxcpp::debug::jsonrpc::eval::Error Error_obj::EUnexpected(::String s)
{
	return ::hx::CreateEnum< Error_obj >(HX_("EUnexpected",76,02,98,78),1,1)->_hx_init(0,s);
}

::hxcpp::debug::jsonrpc::eval::Error Error_obj::EUnknownVariable(::String v)
{
	return ::hx::CreateEnum< Error_obj >(HX_("EUnknownVariable",21,a9,3e,5f),5,1)->_hx_init(0,v);
}

::hxcpp::debug::jsonrpc::eval::Error Error_obj::EUnterminatedComment;

::hxcpp::debug::jsonrpc::eval::Error Error_obj::EUnterminatedString;

bool Error_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ECustom",d6,fd,6f,a9)) { outValue = Error_obj::ECustom_dyn(); return true; }
	if (inName==HX_("EInvalidAccess",76,c0,1f,d1)) { outValue = Error_obj::EInvalidAccess_dyn(); return true; }
	if (inName==HX_("EInvalidChar",28,d1,99,46)) { outValue = Error_obj::EInvalidChar_dyn(); return true; }
	if (inName==HX_("EInvalidIterator",40,4d,71,f2)) { outValue = Error_obj::EInvalidIterator_dyn(); return true; }
	if (inName==HX_("EInvalidOp",f3,3a,13,f7)) { outValue = Error_obj::EInvalidOp_dyn(); return true; }
	if (inName==HX_("EInvalidPreprocessor",21,d5,28,58)) { outValue = Error_obj::EInvalidPreprocessor_dyn(); return true; }
	if (inName==HX_("EUnexpected",76,02,98,78)) { outValue = Error_obj::EUnexpected_dyn(); return true; }
	if (inName==HX_("EUnknownVariable",21,a9,3e,5f)) { outValue = Error_obj::EUnknownVariable_dyn(); return true; }
	if (inName==HX_("EUnterminatedComment",fe,ed,ab,07)) { outValue = Error_obj::EUnterminatedComment; return true; }
	if (inName==HX_("EUnterminatedString",12,4e,75,07)) { outValue = Error_obj::EUnterminatedString; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Error_obj)

int Error_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ECustom",d6,fd,6f,a9)) return 9;
	if (inName==HX_("EInvalidAccess",76,c0,1f,d1)) return 8;
	if (inName==HX_("EInvalidChar",28,d1,99,46)) return 0;
	if (inName==HX_("EInvalidIterator",40,4d,71,f2)) return 6;
	if (inName==HX_("EInvalidOp",f3,3a,13,f7)) return 7;
	if (inName==HX_("EInvalidPreprocessor",21,d5,28,58)) return 4;
	if (inName==HX_("EUnexpected",76,02,98,78)) return 1;
	if (inName==HX_("EUnknownVariable",21,a9,3e,5f)) return 5;
	if (inName==HX_("EUnterminatedComment",fe,ed,ab,07)) return 3;
	if (inName==HX_("EUnterminatedString",12,4e,75,07)) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Error_obj,ECustom,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Error_obj,EInvalidAccess,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Error_obj,EInvalidChar,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Error_obj,EInvalidIterator,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Error_obj,EInvalidOp,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Error_obj,EInvalidPreprocessor,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Error_obj,EUnexpected,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Error_obj,EUnknownVariable,return)

int Error_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ECustom",d6,fd,6f,a9)) return 1;
	if (inName==HX_("EInvalidAccess",76,c0,1f,d1)) return 1;
	if (inName==HX_("EInvalidChar",28,d1,99,46)) return 1;
	if (inName==HX_("EInvalidIterator",40,4d,71,f2)) return 1;
	if (inName==HX_("EInvalidOp",f3,3a,13,f7)) return 1;
	if (inName==HX_("EInvalidPreprocessor",21,d5,28,58)) return 1;
	if (inName==HX_("EUnexpected",76,02,98,78)) return 1;
	if (inName==HX_("EUnknownVariable",21,a9,3e,5f)) return 1;
	if (inName==HX_("EUnterminatedComment",fe,ed,ab,07)) return 0;
	if (inName==HX_("EUnterminatedString",12,4e,75,07)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Error_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ECustom",d6,fd,6f,a9)) return ECustom_dyn();
	if (inName==HX_("EInvalidAccess",76,c0,1f,d1)) return EInvalidAccess_dyn();
	if (inName==HX_("EInvalidChar",28,d1,99,46)) return EInvalidChar_dyn();
	if (inName==HX_("EInvalidIterator",40,4d,71,f2)) return EInvalidIterator_dyn();
	if (inName==HX_("EInvalidOp",f3,3a,13,f7)) return EInvalidOp_dyn();
	if (inName==HX_("EInvalidPreprocessor",21,d5,28,58)) return EInvalidPreprocessor_dyn();
	if (inName==HX_("EUnexpected",76,02,98,78)) return EUnexpected_dyn();
	if (inName==HX_("EUnknownVariable",21,a9,3e,5f)) return EUnknownVariable_dyn();
	if (inName==HX_("EUnterminatedComment",fe,ed,ab,07)) return EUnterminatedComment;
	if (inName==HX_("EUnterminatedString",12,4e,75,07)) return EUnterminatedString;
	return super::__Field(inName,inCallProp);
}

static ::String Error_obj_sStaticFields[] = {
	HX_("EInvalidChar",28,d1,99,46),
	HX_("EUnexpected",76,02,98,78),
	HX_("EUnterminatedString",12,4e,75,07),
	HX_("EUnterminatedComment",fe,ed,ab,07),
	HX_("EInvalidPreprocessor",21,d5,28,58),
	HX_("EUnknownVariable",21,a9,3e,5f),
	HX_("EInvalidIterator",40,4d,71,f2),
	HX_("EInvalidOp",f3,3a,13,f7),
	HX_("EInvalidAccess",76,c0,1f,d1),
	HX_("ECustom",d6,fd,6f,a9),
	::String(null())
};

::hx::Class Error_obj::__mClass;

Dynamic __Create_Error_obj() { return new Error_obj; }

void Error_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxcpp.debug.jsonrpc.eval.Error",5d,f3,f9,5b), ::hx::TCanCast< Error_obj >,Error_obj_sStaticFields,0,
	&__Create_Error_obj, &__Create,
	&super::__SGetClass(), &CreateError_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Error_obj::__GetStatic;
}

void Error_obj::__boot()
{
EUnterminatedComment = ::hx::CreateConstEnum< Error_obj >(HX_("EUnterminatedComment",fe,ed,ab,07),3);
EUnterminatedString = ::hx::CreateConstEnum< Error_obj >(HX_("EUnterminatedString",12,4e,75,07),2);
}


} // end namespace hxcpp
} // end namespace debug
} // end namespace jsonrpc
} // end namespace eval
