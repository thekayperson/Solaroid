#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D__Context3DWrapMode_Context3DWrapMode_Impl_
#include <openfl/display3D/_Context3DWrapMode/Context3DWrapMode_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_1915e7f9f11ba52c_40_fromString,"openfl.display3D._Context3DWrapMode.Context3DWrapMode_Impl_","fromString",0xa28ec483,"openfl.display3D._Context3DWrapMode.Context3DWrapMode_Impl_.fromString","openfl/display3D/Context3DWrapMode.hx",40,0x5bc49e6c)
HX_LOCAL_STACK_FRAME(_hx_pos_1915e7f9f11ba52c_52_toString,"openfl.display3D._Context3DWrapMode.Context3DWrapMode_Impl_","toString",0x61caed54,"openfl.display3D._Context3DWrapMode.Context3DWrapMode_Impl_.toString","openfl/display3D/Context3DWrapMode.hx",52,0x5bc49e6c)
HX_LOCAL_STACK_FRAME(_hx_pos_1915e7f9f11ba52c_19_boot,"openfl.display3D._Context3DWrapMode.Context3DWrapMode_Impl_","boot",0xdab22cda,"openfl.display3D._Context3DWrapMode.Context3DWrapMode_Impl_.boot","openfl/display3D/Context3DWrapMode.hx",19,0x5bc49e6c)
HX_LOCAL_STACK_FRAME(_hx_pos_1915e7f9f11ba52c_24_boot,"openfl.display3D._Context3DWrapMode.Context3DWrapMode_Impl_","boot",0xdab22cda,"openfl.display3D._Context3DWrapMode.Context3DWrapMode_Impl_.boot","openfl/display3D/Context3DWrapMode.hx",24,0x5bc49e6c)
HX_LOCAL_STACK_FRAME(_hx_pos_1915e7f9f11ba52c_31_boot,"openfl.display3D._Context3DWrapMode.Context3DWrapMode_Impl_","boot",0xdab22cda,"openfl.display3D._Context3DWrapMode.Context3DWrapMode_Impl_.boot","openfl/display3D/Context3DWrapMode.hx",31,0x5bc49e6c)
HX_LOCAL_STACK_FRAME(_hx_pos_1915e7f9f11ba52c_36_boot,"openfl.display3D._Context3DWrapMode.Context3DWrapMode_Impl_","boot",0xdab22cda,"openfl.display3D._Context3DWrapMode.Context3DWrapMode_Impl_.boot","openfl/display3D/Context3DWrapMode.hx",36,0x5bc49e6c)
namespace openfl{
namespace display3D{
namespace _Context3DWrapMode{

void Context3DWrapMode_Impl__obj::__construct() { }

Dynamic Context3DWrapMode_Impl__obj::__CreateEmpty() { return new Context3DWrapMode_Impl__obj; }

void *Context3DWrapMode_Impl__obj::_hx_vtable = 0;

Dynamic Context3DWrapMode_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Context3DWrapMode_Impl__obj > _hx_result = new Context3DWrapMode_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DWrapMode_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f2c45ec;
}

 ::Dynamic Context3DWrapMode_Impl__obj::CLAMP;

 ::Dynamic Context3DWrapMode_Impl__obj::CLAMP_U_REPEAT_V;

 ::Dynamic Context3DWrapMode_Impl__obj::REPEAT;

 ::Dynamic Context3DWrapMode_Impl__obj::REPEAT_U_CLAMP_V;

 ::Dynamic Context3DWrapMode_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_1915e7f9f11ba52c_40_fromString)
            	HX_STACK_ARG(value,"value")
HXLINE(  40)
HXDLIN(  40)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("clamp",fb,72,58,48)) ){
HXLINE(  42)			return 0;
HXDLIN(  42)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("clamp_u_repeat_v",a0,8d,a7,28)) ){
HXLINE(  43)			return 1;
HXDLIN(  43)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("repeat",5b,97,7c,06)) ){
HXLINE(  44)			return 2;
HXDLIN(  44)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("repeat_u_clamp_v",c4,04,17,dd)) ){
HXLINE(  45)			return 3;
HXDLIN(  45)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  46)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  40)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DWrapMode_Impl__obj,fromString,return )

::String Context3DWrapMode_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_1915e7f9f11ba52c_52_toString)
            	HX_STACK_ARG(this1,"this1")
HXLINE(  52)
HXDLIN(  52)		 ::Dynamic _hx_switch_0 = this1;
            		if (  (_hx_switch_0==0) ){
HXLINE(  54)			return HX_("clamp",fb,72,58,48);
HXDLIN(  54)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(  55)			return HX_("clamp_u_repeat_v",a0,8d,a7,28);
HXDLIN(  55)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==2) ){
HXLINE(  56)			return HX_("repeat",5b,97,7c,06);
HXDLIN(  56)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==3) ){
HXLINE(  57)			return HX_("repeat_u_clamp_v",c4,04,17,dd);
HXDLIN(  57)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(  58)			return null();
            		}
            		_hx_goto_2:;
HXLINE(  52)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DWrapMode_Impl__obj,toString,return )


Context3DWrapMode_Impl__obj::Context3DWrapMode_Impl__obj()
{
}

bool Context3DWrapMode_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Context3DWrapMode_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Context3DWrapMode_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DWrapMode_Impl__obj::CLAMP,HX_("CLAMP",db,aa,46,c6)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DWrapMode_Impl__obj::CLAMP_U_REPEAT_V,HX_("CLAMP_U_REPEAT_V",c0,51,bd,ad)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DWrapMode_Impl__obj::REPEAT,HX_("REPEAT",5b,43,ff,b8)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DWrapMode_Impl__obj::REPEAT_U_CLAMP_V,HX_("REPEAT_U_CLAMP_V",64,80,cf,17)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Context3DWrapMode_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DWrapMode_Impl__obj::CLAMP,"CLAMP");
	HX_MARK_MEMBER_NAME(Context3DWrapMode_Impl__obj::CLAMP_U_REPEAT_V,"CLAMP_U_REPEAT_V");
	HX_MARK_MEMBER_NAME(Context3DWrapMode_Impl__obj::REPEAT,"REPEAT");
	HX_MARK_MEMBER_NAME(Context3DWrapMode_Impl__obj::REPEAT_U_CLAMP_V,"REPEAT_U_CLAMP_V");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Context3DWrapMode_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DWrapMode_Impl__obj::CLAMP,"CLAMP");
	HX_VISIT_MEMBER_NAME(Context3DWrapMode_Impl__obj::CLAMP_U_REPEAT_V,"CLAMP_U_REPEAT_V");
	HX_VISIT_MEMBER_NAME(Context3DWrapMode_Impl__obj::REPEAT,"REPEAT");
	HX_VISIT_MEMBER_NAME(Context3DWrapMode_Impl__obj::REPEAT_U_CLAMP_V,"REPEAT_U_CLAMP_V");
};

#endif

::hx::Class Context3DWrapMode_Impl__obj::__mClass;

static ::String Context3DWrapMode_Impl__obj_sStaticFields[] = {
	HX_("CLAMP",db,aa,46,c6),
	HX_("CLAMP_U_REPEAT_V",c0,51,bd,ad),
	HX_("REPEAT",5b,43,ff,b8),
	HX_("REPEAT_U_CLAMP_V",64,80,cf,17),
	HX_("fromString",db,2d,74,54),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void Context3DWrapMode_Impl__obj::__register()
{
	Context3DWrapMode_Impl__obj _hx_dummy;
	Context3DWrapMode_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display3D._Context3DWrapMode.Context3DWrapMode_Impl_",c6,78,0e,2e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DWrapMode_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Context3DWrapMode_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Context3DWrapMode_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Context3DWrapMode_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Context3DWrapMode_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DWrapMode_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DWrapMode_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Context3DWrapMode_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_1915e7f9f11ba52c_19_boot)
HXDLIN(  19)		CLAMP = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1915e7f9f11ba52c_24_boot)
HXDLIN(  24)		CLAMP_U_REPEAT_V = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1915e7f9f11ba52c_31_boot)
HXDLIN(  31)		REPEAT = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1915e7f9f11ba52c_36_boot)
HXDLIN(  36)		REPEAT_U_CLAMP_V = 3;
            	}
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DWrapMode
