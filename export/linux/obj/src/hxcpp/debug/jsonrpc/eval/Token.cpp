#include <hxcpp.h>

#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_Const
#include <hxcpp/debug/jsonrpc/eval/Const.h>
#endif
#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_Token
#include <hxcpp/debug/jsonrpc/eval/Token.h>
#endif
namespace hxcpp{
namespace debug{
namespace jsonrpc{
namespace eval{

::hxcpp::debug::jsonrpc::eval::Token Token_obj::TBkClose;

::hxcpp::debug::jsonrpc::eval::Token Token_obj::TBkOpen;

::hxcpp::debug::jsonrpc::eval::Token Token_obj::TBrClose;

::hxcpp::debug::jsonrpc::eval::Token Token_obj::TBrOpen;

::hxcpp::debug::jsonrpc::eval::Token Token_obj::TComma;

::hxcpp::debug::jsonrpc::eval::Token Token_obj::TConst( ::hxcpp::debug::jsonrpc::eval::Const c)
{
	return ::hx::CreateEnum< Token_obj >(HX_("TConst",6f,b8,85,73),1,1)->_hx_init(0,c);
}

::hxcpp::debug::jsonrpc::eval::Token Token_obj::TDot;

::hxcpp::debug::jsonrpc::eval::Token Token_obj::TDoubleDot;

::hxcpp::debug::jsonrpc::eval::Token Token_obj::TEof;

::hxcpp::debug::jsonrpc::eval::Token Token_obj::TId(::String s)
{
	return ::hx::CreateEnum< Token_obj >(HX_("TId",4f,fd,3f,00),2,1)->_hx_init(0,s);
}

::hxcpp::debug::jsonrpc::eval::Token Token_obj::TMeta(::String s)
{
	return ::hx::CreateEnum< Token_obj >(HX_("TMeta",39,31,db,90),15,1)->_hx_init(0,s);
}

::hxcpp::debug::jsonrpc::eval::Token Token_obj::TOp(::String s)
{
	return ::hx::CreateEnum< Token_obj >(HX_("TOp",95,02,40,00),3,1)->_hx_init(0,s);
}

::hxcpp::debug::jsonrpc::eval::Token Token_obj::TPClose;

::hxcpp::debug::jsonrpc::eval::Token Token_obj::TPOpen;

::hxcpp::debug::jsonrpc::eval::Token Token_obj::TPrepro(::String s)
{
	return ::hx::CreateEnum< Token_obj >(HX_("TPrepro",5e,e3,5d,88),16,1)->_hx_init(0,s);
}

::hxcpp::debug::jsonrpc::eval::Token Token_obj::TQuestion;

::hxcpp::debug::jsonrpc::eval::Token Token_obj::TSemicolon;

bool Token_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("TBkClose",3b,33,d6,20)) { outValue = Token_obj::TBkClose; return true; }
	if (inName==HX_("TBkOpen",a7,09,06,d9)) { outValue = Token_obj::TBkOpen; return true; }
	if (inName==HX_("TBrClose",d4,b9,55,ed)) { outValue = Token_obj::TBrClose; return true; }
	if (inName==HX_("TBrOpen",2e,19,d4,e0)) { outValue = Token_obj::TBrOpen; return true; }
	if (inName==HX_("TComma",e1,f0,84,73)) { outValue = Token_obj::TComma; return true; }
	if (inName==HX_("TConst",6f,b8,85,73)) { outValue = Token_obj::TConst_dyn(); return true; }
	if (inName==HX_("TDot",95,e6,b9,37)) { outValue = Token_obj::TDot; return true; }
	if (inName==HX_("TDoubleDot",04,85,f4,8f)) { outValue = Token_obj::TDoubleDot; return true; }
	if (inName==HX_("TEof",c8,a8,ba,37)) { outValue = Token_obj::TEof; return true; }
	if (inName==HX_("TId",4f,fd,3f,00)) { outValue = Token_obj::TId_dyn(); return true; }
	if (inName==HX_("TMeta",39,31,db,90)) { outValue = Token_obj::TMeta_dyn(); return true; }
	if (inName==HX_("TOp",95,02,40,00)) { outValue = Token_obj::TOp_dyn(); return true; }
	if (inName==HX_("TPClose",9c,5c,28,7d)) { outValue = Token_obj::TPClose; return true; }
	if (inName==HX_("TPOpen",66,e7,95,da)) { outValue = Token_obj::TPOpen; return true; }
	if (inName==HX_("TPrepro",5e,e3,5d,88)) { outValue = Token_obj::TPrepro_dyn(); return true; }
	if (inName==HX_("TQuestion",9a,cb,98,37)) { outValue = Token_obj::TQuestion; return true; }
	if (inName==HX_("TSemicolon",3d,4b,14,08)) { outValue = Token_obj::TSemicolon; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Token_obj)

int Token_obj::__FindIndex(::String inName)
{
	if (inName==HX_("TBkClose",3b,33,d6,20)) return 12;
	if (inName==HX_("TBkOpen",a7,09,06,d9)) return 11;
	if (inName==HX_("TBrClose",d4,b9,55,ed)) return 7;
	if (inName==HX_("TBrOpen",2e,19,d4,e0)) return 6;
	if (inName==HX_("TComma",e1,f0,84,73)) return 9;
	if (inName==HX_("TConst",6f,b8,85,73)) return 1;
	if (inName==HX_("TDot",95,e6,b9,37)) return 8;
	if (inName==HX_("TDoubleDot",04,85,f4,8f)) return 14;
	if (inName==HX_("TEof",c8,a8,ba,37)) return 0;
	if (inName==HX_("TId",4f,fd,3f,00)) return 2;
	if (inName==HX_("TMeta",39,31,db,90)) return 15;
	if (inName==HX_("TOp",95,02,40,00)) return 3;
	if (inName==HX_("TPClose",9c,5c,28,7d)) return 5;
	if (inName==HX_("TPOpen",66,e7,95,da)) return 4;
	if (inName==HX_("TPrepro",5e,e3,5d,88)) return 16;
	if (inName==HX_("TQuestion",9a,cb,98,37)) return 13;
	if (inName==HX_("TSemicolon",3d,4b,14,08)) return 10;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Token_obj,TConst,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Token_obj,TId,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Token_obj,TMeta,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Token_obj,TOp,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Token_obj,TPrepro,return)

int Token_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("TBkClose",3b,33,d6,20)) return 0;
	if (inName==HX_("TBkOpen",a7,09,06,d9)) return 0;
	if (inName==HX_("TBrClose",d4,b9,55,ed)) return 0;
	if (inName==HX_("TBrOpen",2e,19,d4,e0)) return 0;
	if (inName==HX_("TComma",e1,f0,84,73)) return 0;
	if (inName==HX_("TConst",6f,b8,85,73)) return 1;
	if (inName==HX_("TDot",95,e6,b9,37)) return 0;
	if (inName==HX_("TDoubleDot",04,85,f4,8f)) return 0;
	if (inName==HX_("TEof",c8,a8,ba,37)) return 0;
	if (inName==HX_("TId",4f,fd,3f,00)) return 1;
	if (inName==HX_("TMeta",39,31,db,90)) return 1;
	if (inName==HX_("TOp",95,02,40,00)) return 1;
	if (inName==HX_("TPClose",9c,5c,28,7d)) return 0;
	if (inName==HX_("TPOpen",66,e7,95,da)) return 0;
	if (inName==HX_("TPrepro",5e,e3,5d,88)) return 1;
	if (inName==HX_("TQuestion",9a,cb,98,37)) return 0;
	if (inName==HX_("TSemicolon",3d,4b,14,08)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Token_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("TBkClose",3b,33,d6,20)) return TBkClose;
	if (inName==HX_("TBkOpen",a7,09,06,d9)) return TBkOpen;
	if (inName==HX_("TBrClose",d4,b9,55,ed)) return TBrClose;
	if (inName==HX_("TBrOpen",2e,19,d4,e0)) return TBrOpen;
	if (inName==HX_("TComma",e1,f0,84,73)) return TComma;
	if (inName==HX_("TConst",6f,b8,85,73)) return TConst_dyn();
	if (inName==HX_("TDot",95,e6,b9,37)) return TDot;
	if (inName==HX_("TDoubleDot",04,85,f4,8f)) return TDoubleDot;
	if (inName==HX_("TEof",c8,a8,ba,37)) return TEof;
	if (inName==HX_("TId",4f,fd,3f,00)) return TId_dyn();
	if (inName==HX_("TMeta",39,31,db,90)) return TMeta_dyn();
	if (inName==HX_("TOp",95,02,40,00)) return TOp_dyn();
	if (inName==HX_("TPClose",9c,5c,28,7d)) return TPClose;
	if (inName==HX_("TPOpen",66,e7,95,da)) return TPOpen;
	if (inName==HX_("TPrepro",5e,e3,5d,88)) return TPrepro_dyn();
	if (inName==HX_("TQuestion",9a,cb,98,37)) return TQuestion;
	if (inName==HX_("TSemicolon",3d,4b,14,08)) return TSemicolon;
	return super::__Field(inName,inCallProp);
}

static ::String Token_obj_sStaticFields[] = {
	HX_("TEof",c8,a8,ba,37),
	HX_("TConst",6f,b8,85,73),
	HX_("TId",4f,fd,3f,00),
	HX_("TOp",95,02,40,00),
	HX_("TPOpen",66,e7,95,da),
	HX_("TPClose",9c,5c,28,7d),
	HX_("TBrOpen",2e,19,d4,e0),
	HX_("TBrClose",d4,b9,55,ed),
	HX_("TDot",95,e6,b9,37),
	HX_("TComma",e1,f0,84,73),
	HX_("TSemicolon",3d,4b,14,08),
	HX_("TBkOpen",a7,09,06,d9),
	HX_("TBkClose",3b,33,d6,20),
	HX_("TQuestion",9a,cb,98,37),
	HX_("TDoubleDot",04,85,f4,8f),
	HX_("TMeta",39,31,db,90),
	HX_("TPrepro",5e,e3,5d,88),
	::String(null())
};

::hx::Class Token_obj::__mClass;

Dynamic __Create_Token_obj() { return new Token_obj; }

void Token_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxcpp.debug.jsonrpc.eval.Token",8e,aa,fb,fc), ::hx::TCanCast< Token_obj >,Token_obj_sStaticFields,0,
	&__Create_Token_obj, &__Create,
	&super::__SGetClass(), &CreateToken_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Token_obj::__GetStatic;
}

void Token_obj::__boot()
{
TBkClose = ::hx::CreateConstEnum< Token_obj >(HX_("TBkClose",3b,33,d6,20),12);
TBkOpen = ::hx::CreateConstEnum< Token_obj >(HX_("TBkOpen",a7,09,06,d9),11);
TBrClose = ::hx::CreateConstEnum< Token_obj >(HX_("TBrClose",d4,b9,55,ed),7);
TBrOpen = ::hx::CreateConstEnum< Token_obj >(HX_("TBrOpen",2e,19,d4,e0),6);
TComma = ::hx::CreateConstEnum< Token_obj >(HX_("TComma",e1,f0,84,73),9);
TDot = ::hx::CreateConstEnum< Token_obj >(HX_("TDot",95,e6,b9,37),8);
TDoubleDot = ::hx::CreateConstEnum< Token_obj >(HX_("TDoubleDot",04,85,f4,8f),14);
TEof = ::hx::CreateConstEnum< Token_obj >(HX_("TEof",c8,a8,ba,37),0);
TPClose = ::hx::CreateConstEnum< Token_obj >(HX_("TPClose",9c,5c,28,7d),5);
TPOpen = ::hx::CreateConstEnum< Token_obj >(HX_("TPOpen",66,e7,95,da),4);
TQuestion = ::hx::CreateConstEnum< Token_obj >(HX_("TQuestion",9a,cb,98,37),13);
TSemicolon = ::hx::CreateConstEnum< Token_obj >(HX_("TSemicolon",3d,4b,14,08),10);
}


} // end namespace hxcpp
} // end namespace debug
} // end namespace jsonrpc
} // end namespace eval
