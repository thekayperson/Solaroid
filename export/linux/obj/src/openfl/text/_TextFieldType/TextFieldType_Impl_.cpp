#include <hxcpp.h>

#ifndef INCLUDED_openfl_text__TextFieldType_TextFieldType_Impl_
#include <openfl/text/_TextFieldType/TextFieldType_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_923930f61aa169d2_24_fromString,"openfl.text._TextFieldType.TextFieldType_Impl_","fromString",0x3beed305,"openfl.text._TextFieldType.TextFieldType_Impl_.fromString","openfl/text/TextFieldType.hx",24,0xaebfe8fa)
HX_LOCAL_STACK_FRAME(_hx_pos_923930f61aa169d2_34_toString,"openfl.text._TextFieldType.TextFieldType_Impl_","toString",0x7192f756,"openfl.text._TextFieldType.TextFieldType_Impl_.toString","openfl/text/TextFieldType.hx",34,0xaebfe8fa)
HX_LOCAL_STACK_FRAME(_hx_pos_923930f61aa169d2_15_boot,"openfl.text._TextFieldType.TextFieldType_Impl_","boot",0xd2688ddc,"openfl.text._TextFieldType.TextFieldType_Impl_.boot","openfl/text/TextFieldType.hx",15,0xaebfe8fa)
HX_LOCAL_STACK_FRAME(_hx_pos_923930f61aa169d2_20_boot,"openfl.text._TextFieldType.TextFieldType_Impl_","boot",0xd2688ddc,"openfl.text._TextFieldType.TextFieldType_Impl_.boot","openfl/text/TextFieldType.hx",20,0xaebfe8fa)
namespace openfl{
namespace text{
namespace _TextFieldType{

void TextFieldType_Impl__obj::__construct() { }

Dynamic TextFieldType_Impl__obj::__CreateEmpty() { return new TextFieldType_Impl__obj; }

void *TextFieldType_Impl__obj::_hx_vtable = 0;

Dynamic TextFieldType_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextFieldType_Impl__obj > _hx_result = new TextFieldType_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextFieldType_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x76221a7a;
}

 ::Dynamic TextFieldType_Impl__obj::DYNAMIC;

 ::Dynamic TextFieldType_Impl__obj::INPUT;

 ::Dynamic TextFieldType_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_923930f61aa169d2_24_fromString)
            	HX_STACK_ARG(value,"value")
HXLINE(  24)
HXDLIN(  24)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("dynamic",7f,9f,15,36)) ){
HXLINE(  26)			return 0;
HXDLIN(  26)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("input",0a,c4,1d,be)) ){
HXLINE(  27)			return 1;
HXDLIN(  27)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  28)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  24)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextFieldType_Impl__obj,fromString,return )

::String TextFieldType_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_923930f61aa169d2_34_toString)
            	HX_STACK_ARG(this1,"this1")
HXLINE(  34)
HXDLIN(  34)		 ::Dynamic _hx_switch_0 = this1;
            		if (  (_hx_switch_0==0) ){
HXLINE(  36)			return HX_("dynamic",7f,9f,15,36);
HXDLIN(  36)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(  37)			return HX_("input",0a,c4,1d,be);
HXDLIN(  37)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(  38)			return null();
            		}
            		_hx_goto_2:;
HXLINE(  34)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextFieldType_Impl__obj,toString,return )


TextFieldType_Impl__obj::TextFieldType_Impl__obj()
{
}

bool TextFieldType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *TextFieldType_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo TextFieldType_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &TextFieldType_Impl__obj::DYNAMIC,HX_("DYNAMIC",5f,73,e9,b5)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &TextFieldType_Impl__obj::INPUT,HX_("INPUT",ea,fb,0b,3c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void TextFieldType_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextFieldType_Impl__obj::DYNAMIC,"DYNAMIC");
	HX_MARK_MEMBER_NAME(TextFieldType_Impl__obj::INPUT,"INPUT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextFieldType_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextFieldType_Impl__obj::DYNAMIC,"DYNAMIC");
	HX_VISIT_MEMBER_NAME(TextFieldType_Impl__obj::INPUT,"INPUT");
};

#endif

::hx::Class TextFieldType_Impl__obj::__mClass;

static ::String TextFieldType_Impl__obj_sStaticFields[] = {
	HX_("DYNAMIC",5f,73,e9,b5),
	HX_("INPUT",ea,fb,0b,3c),
	HX_("fromString",db,2d,74,54),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void TextFieldType_Impl__obj::__register()
{
	TextFieldType_Impl__obj _hx_dummy;
	TextFieldType_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.text._TextFieldType.TextFieldType_Impl_",04,b7,37,2c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextFieldType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TextFieldType_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TextFieldType_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< TextFieldType_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextFieldType_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextFieldType_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextFieldType_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TextFieldType_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_923930f61aa169d2_15_boot)
HXDLIN(  15)		DYNAMIC = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_923930f61aa169d2_20_boot)
HXDLIN(  20)		INPUT = 1;
            	}
}

} // end namespace openfl
} // end namespace text
} // end namespace _TextFieldType
