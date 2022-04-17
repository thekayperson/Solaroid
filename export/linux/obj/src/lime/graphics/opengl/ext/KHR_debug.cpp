#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_KHR_debug
#include <lime/graphics/opengl/ext/KHR_debug.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e7ead9e1a8712dad_4_new,"lime.graphics.opengl.ext.KHR_debug","new",0xa09f74f9,"lime.graphics.opengl.ext.KHR_debug.new","lime/graphics/opengl/ext/KHR_debug.hx",4,0x748ce039)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void KHR_debug_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e7ead9e1a8712dad_4_new)
            	HX_STACK_THIS(this)
HXLINE(   4)
HXLINE(  43)		this->STACK_UNDERFLOW = 1284;
HXLINE(  42)		this->STACK_OVERFLOW = 1283;
HXLINE(  41)		this->CONTEXT_FLAG_DEBUG_BIT = 2;
HXLINE(  40)		this->DEBUG_OUTPUT = 37600;
HXLINE(  39)		this->DEBUG_SEVERITY_LOW = 37192;
HXLINE(  38)		this->DEBUG_SEVERITY_MEDIUM = 37191;
HXLINE(  37)		this->DEBUG_SEVERITY_HIGH = 37190;
HXLINE(  36)		this->DEBUG_LOGGED_MESSAGES = 37189;
HXLINE(  35)		this->MAX_DEBUG_LOGGED_MESSAGES = 37188;
HXLINE(  34)		this->MAX_DEBUG_MESSAGE_LENGTH = 37187;
HXLINE(  33)		this->MAX_LABEL_LENGTH = 33512;
HXLINE(  32)		this->SAMPLER = 33510;
HXLINE(  31)		this->QUERY = 33507;
HXLINE(  30)		this->PROGRAM = 33506;
HXLINE(  29)		this->SHADER = 33505;
HXLINE(  28)		this->BUFFER = 33504;
HXLINE(  27)		this->DEBUG_GROUP_STACK_DEPTH = 33389;
HXLINE(  26)		this->MAX_DEBUG_GROUP_STACK_DEPTH = 33388;
HXLINE(  25)		this->DEBUG_SEVERITY_NOTIFICATION = 33387;
HXLINE(  24)		this->DEBUG_TYPE_POP_GROUP = 33386;
HXLINE(  23)		this->DEBUG_TYPE_PUSH_GROUP = 33385;
HXLINE(  22)		this->DEBUG_TYPE_MARKER = 33384;
HXLINE(  21)		this->DEBUG_TYPE_OTHER = 33361;
HXLINE(  20)		this->DEBUG_TYPE_PERFORMANCE = 33360;
HXLINE(  19)		this->DEBUG_TYPE_PORTABILITY = 33359;
HXLINE(  18)		this->DEBUG_TYPE_UNDEFINED_BEHAVIOR = 33358;
HXLINE(  17)		this->DEBUG_TYPE_DEPRECATED_BEHAVIOR = 33357;
HXLINE(  16)		this->DEBUG_TYPE_ERROR = 33356;
HXLINE(  15)		this->DEBUG_SOURCE_OTHER = 33355;
HXLINE(  14)		this->DEBUG_SOURCE_APPLICATION = 33354;
HXLINE(  13)		this->DEBUG_SOURCE_THIRD_PARTY = 33353;
HXLINE(  12)		this->DEBUG_SOURCE_SHADER_COMPILER = 33352;
HXLINE(  11)		this->DEBUG_SOURCE_WINDOW_SYSTEM = 33351;
HXLINE(  10)		this->DEBUG_SOURCE_API = 33350;
HXLINE(   9)		this->DEBUG_CALLBACK_USER_PARAM = 33349;
HXLINE(   8)		this->DEBUG_CALLBACK_FUNCTION = 33348;
HXLINE(   7)		this->DEBUG_NEXT_LOGGED_MESSAGE_LENGTH = 33347;
HXLINE(   6)		this->DEBUG_OUTPUT_SYNCHRONOUS = 33346;
            	}

Dynamic KHR_debug_obj::__CreateEmpty() { return new KHR_debug_obj; }

void *KHR_debug_obj::_hx_vtable = 0;

Dynamic KHR_debug_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< KHR_debug_obj > _hx_result = new KHR_debug_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool KHR_debug_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2275abff;
}


KHR_debug_obj::KHR_debug_obj()
{
}

::hx::Val KHR_debug_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"QUERY") ) { return ::hx::Val( QUERY ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BUFFER") ) { return ::hx::Val( BUFFER ); }
		if (HX_FIELD_EQ(inName,"SHADER") ) { return ::hx::Val( SHADER ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"PROGRAM") ) { return ::hx::Val( PROGRAM ); }
		if (HX_FIELD_EQ(inName,"SAMPLER") ) { return ::hx::Val( SAMPLER ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"DEBUG_OUTPUT") ) { return ::hx::Val( DEBUG_OUTPUT ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"STACK_OVERFLOW") ) { return ::hx::Val( STACK_OVERFLOW ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"STACK_UNDERFLOW") ) { return ::hx::Val( STACK_UNDERFLOW ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"DEBUG_SOURCE_API") ) { return ::hx::Val( DEBUG_SOURCE_API ); }
		if (HX_FIELD_EQ(inName,"DEBUG_TYPE_ERROR") ) { return ::hx::Val( DEBUG_TYPE_ERROR ); }
		if (HX_FIELD_EQ(inName,"DEBUG_TYPE_OTHER") ) { return ::hx::Val( DEBUG_TYPE_OTHER ); }
		if (HX_FIELD_EQ(inName,"MAX_LABEL_LENGTH") ) { return ::hx::Val( MAX_LABEL_LENGTH ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"DEBUG_TYPE_MARKER") ) { return ::hx::Val( DEBUG_TYPE_MARKER ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"DEBUG_SOURCE_OTHER") ) { return ::hx::Val( DEBUG_SOURCE_OTHER ); }
		if (HX_FIELD_EQ(inName,"DEBUG_SEVERITY_LOW") ) { return ::hx::Val( DEBUG_SEVERITY_LOW ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"DEBUG_SEVERITY_HIGH") ) { return ::hx::Val( DEBUG_SEVERITY_HIGH ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"DEBUG_TYPE_POP_GROUP") ) { return ::hx::Val( DEBUG_TYPE_POP_GROUP ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"DEBUG_TYPE_PUSH_GROUP") ) { return ::hx::Val( DEBUG_TYPE_PUSH_GROUP ); }
		if (HX_FIELD_EQ(inName,"DEBUG_LOGGED_MESSAGES") ) { return ::hx::Val( DEBUG_LOGGED_MESSAGES ); }
		if (HX_FIELD_EQ(inName,"DEBUG_SEVERITY_MEDIUM") ) { return ::hx::Val( DEBUG_SEVERITY_MEDIUM ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"DEBUG_TYPE_PORTABILITY") ) { return ::hx::Val( DEBUG_TYPE_PORTABILITY ); }
		if (HX_FIELD_EQ(inName,"DEBUG_TYPE_PERFORMANCE") ) { return ::hx::Val( DEBUG_TYPE_PERFORMANCE ); }
		if (HX_FIELD_EQ(inName,"CONTEXT_FLAG_DEBUG_BIT") ) { return ::hx::Val( CONTEXT_FLAG_DEBUG_BIT ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"DEBUG_CALLBACK_FUNCTION") ) { return ::hx::Val( DEBUG_CALLBACK_FUNCTION ); }
		if (HX_FIELD_EQ(inName,"DEBUG_GROUP_STACK_DEPTH") ) { return ::hx::Val( DEBUG_GROUP_STACK_DEPTH ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"DEBUG_OUTPUT_SYNCHRONOUS") ) { return ::hx::Val( DEBUG_OUTPUT_SYNCHRONOUS ); }
		if (HX_FIELD_EQ(inName,"DEBUG_SOURCE_THIRD_PARTY") ) { return ::hx::Val( DEBUG_SOURCE_THIRD_PARTY ); }
		if (HX_FIELD_EQ(inName,"DEBUG_SOURCE_APPLICATION") ) { return ::hx::Val( DEBUG_SOURCE_APPLICATION ); }
		if (HX_FIELD_EQ(inName,"MAX_DEBUG_MESSAGE_LENGTH") ) { return ::hx::Val( MAX_DEBUG_MESSAGE_LENGTH ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"DEBUG_CALLBACK_USER_PARAM") ) { return ::hx::Val( DEBUG_CALLBACK_USER_PARAM ); }
		if (HX_FIELD_EQ(inName,"MAX_DEBUG_LOGGED_MESSAGES") ) { return ::hx::Val( MAX_DEBUG_LOGGED_MESSAGES ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"DEBUG_SOURCE_WINDOW_SYSTEM") ) { return ::hx::Val( DEBUG_SOURCE_WINDOW_SYSTEM ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"DEBUG_SEVERITY_NOTIFICATION") ) { return ::hx::Val( DEBUG_SEVERITY_NOTIFICATION ); }
		if (HX_FIELD_EQ(inName,"MAX_DEBUG_GROUP_STACK_DEPTH") ) { return ::hx::Val( MAX_DEBUG_GROUP_STACK_DEPTH ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"DEBUG_SOURCE_SHADER_COMPILER") ) { return ::hx::Val( DEBUG_SOURCE_SHADER_COMPILER ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"DEBUG_TYPE_UNDEFINED_BEHAVIOR") ) { return ::hx::Val( DEBUG_TYPE_UNDEFINED_BEHAVIOR ); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"DEBUG_TYPE_DEPRECATED_BEHAVIOR") ) { return ::hx::Val( DEBUG_TYPE_DEPRECATED_BEHAVIOR ); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"DEBUG_NEXT_LOGGED_MESSAGE_LENGTH") ) { return ::hx::Val( DEBUG_NEXT_LOGGED_MESSAGE_LENGTH ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val KHR_debug_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"QUERY") ) { QUERY=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BUFFER") ) { BUFFER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SHADER") ) { SHADER=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"PROGRAM") ) { PROGRAM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLER") ) { SAMPLER=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"DEBUG_OUTPUT") ) { DEBUG_OUTPUT=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"STACK_OVERFLOW") ) { STACK_OVERFLOW=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"STACK_UNDERFLOW") ) { STACK_UNDERFLOW=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"DEBUG_SOURCE_API") ) { DEBUG_SOURCE_API=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEBUG_TYPE_ERROR") ) { DEBUG_TYPE_ERROR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEBUG_TYPE_OTHER") ) { DEBUG_TYPE_OTHER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_LABEL_LENGTH") ) { MAX_LABEL_LENGTH=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"DEBUG_TYPE_MARKER") ) { DEBUG_TYPE_MARKER=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"DEBUG_SOURCE_OTHER") ) { DEBUG_SOURCE_OTHER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEBUG_SEVERITY_LOW") ) { DEBUG_SEVERITY_LOW=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"DEBUG_SEVERITY_HIGH") ) { DEBUG_SEVERITY_HIGH=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"DEBUG_TYPE_POP_GROUP") ) { DEBUG_TYPE_POP_GROUP=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"DEBUG_TYPE_PUSH_GROUP") ) { DEBUG_TYPE_PUSH_GROUP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEBUG_LOGGED_MESSAGES") ) { DEBUG_LOGGED_MESSAGES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEBUG_SEVERITY_MEDIUM") ) { DEBUG_SEVERITY_MEDIUM=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"DEBUG_TYPE_PORTABILITY") ) { DEBUG_TYPE_PORTABILITY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEBUG_TYPE_PERFORMANCE") ) { DEBUG_TYPE_PERFORMANCE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CONTEXT_FLAG_DEBUG_BIT") ) { CONTEXT_FLAG_DEBUG_BIT=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"DEBUG_CALLBACK_FUNCTION") ) { DEBUG_CALLBACK_FUNCTION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEBUG_GROUP_STACK_DEPTH") ) { DEBUG_GROUP_STACK_DEPTH=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"DEBUG_OUTPUT_SYNCHRONOUS") ) { DEBUG_OUTPUT_SYNCHRONOUS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEBUG_SOURCE_THIRD_PARTY") ) { DEBUG_SOURCE_THIRD_PARTY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEBUG_SOURCE_APPLICATION") ) { DEBUG_SOURCE_APPLICATION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_DEBUG_MESSAGE_LENGTH") ) { MAX_DEBUG_MESSAGE_LENGTH=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"DEBUG_CALLBACK_USER_PARAM") ) { DEBUG_CALLBACK_USER_PARAM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_DEBUG_LOGGED_MESSAGES") ) { MAX_DEBUG_LOGGED_MESSAGES=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"DEBUG_SOURCE_WINDOW_SYSTEM") ) { DEBUG_SOURCE_WINDOW_SYSTEM=inValue.Cast< int >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"DEBUG_SEVERITY_NOTIFICATION") ) { DEBUG_SEVERITY_NOTIFICATION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_DEBUG_GROUP_STACK_DEPTH") ) { MAX_DEBUG_GROUP_STACK_DEPTH=inValue.Cast< int >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"DEBUG_SOURCE_SHADER_COMPILER") ) { DEBUG_SOURCE_SHADER_COMPILER=inValue.Cast< int >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"DEBUG_TYPE_UNDEFINED_BEHAVIOR") ) { DEBUG_TYPE_UNDEFINED_BEHAVIOR=inValue.Cast< int >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"DEBUG_TYPE_DEPRECATED_BEHAVIOR") ) { DEBUG_TYPE_DEPRECATED_BEHAVIOR=inValue.Cast< int >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"DEBUG_NEXT_LOGGED_MESSAGE_LENGTH") ) { DEBUG_NEXT_LOGGED_MESSAGE_LENGTH=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void KHR_debug_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("DEBUG_OUTPUT_SYNCHRONOUS",b7,6c,34,b8));
	outFields->push(HX_("DEBUG_NEXT_LOGGED_MESSAGE_LENGTH",5b,ea,d6,b8));
	outFields->push(HX_("DEBUG_CALLBACK_FUNCTION",c6,df,cb,cf));
	outFields->push(HX_("DEBUG_CALLBACK_USER_PARAM",67,50,4b,b2));
	outFields->push(HX_("DEBUG_SOURCE_API",a2,9d,a7,fc));
	outFields->push(HX_("DEBUG_SOURCE_WINDOW_SYSTEM",c6,f9,dc,4e));
	outFields->push(HX_("DEBUG_SOURCE_SHADER_COMPILER",61,d0,c4,2b));
	outFields->push(HX_("DEBUG_SOURCE_THIRD_PARTY",f6,6f,06,29));
	outFields->push(HX_("DEBUG_SOURCE_APPLICATION",58,24,b6,0f));
	outFields->push(HX_("DEBUG_SOURCE_OTHER",d8,3d,44,3e));
	outFields->push(HX_("DEBUG_TYPE_ERROR",ef,26,40,e9));
	outFields->push(HX_("DEBUG_TYPE_DEPRECATED_BEHAVIOR",a5,cf,17,8c));
	outFields->push(HX_("DEBUG_TYPE_UNDEFINED_BEHAVIOR",da,37,6a,74));
	outFields->push(HX_("DEBUG_TYPE_PORTABILITY",b0,1e,6b,9d));
	outFields->push(HX_("DEBUG_TYPE_PERFORMANCE",57,2c,fb,eb));
	outFields->push(HX_("DEBUG_TYPE_OTHER",f7,c1,8c,ac));
	outFields->push(HX_("DEBUG_TYPE_MARKER",93,dc,e9,97));
	outFields->push(HX_("DEBUG_TYPE_PUSH_GROUP",13,87,6b,ca));
	outFields->push(HX_("DEBUG_TYPE_POP_GROUP",58,29,6a,b8));
	outFields->push(HX_("DEBUG_SEVERITY_NOTIFICATION",a1,b3,a6,11));
	outFields->push(HX_("MAX_DEBUG_GROUP_STACK_DEPTH",a5,1e,fc,f4));
	outFields->push(HX_("DEBUG_GROUP_STACK_DEPTH",a0,e0,2d,54));
	outFields->push(HX_("BUFFER",00,69,17,83));
	outFields->push(HX_("SHADER",25,6b,a3,cf));
	outFields->push(HX_("PROGRAM",64,1e,cd,73));
	outFields->push(HX_("QUERY",e8,c2,d8,db));
	outFields->push(HX_("SAMPLER",e8,98,9d,03));
	outFields->push(HX_("MAX_LABEL_LENGTH",0c,59,f0,f1));
	outFields->push(HX_("MAX_DEBUG_MESSAGE_LENGTH",65,08,17,87));
	outFields->push(HX_("MAX_DEBUG_LOGGED_MESSAGES",e2,62,56,d5));
	outFields->push(HX_("DEBUG_LOGGED_MESSAGES",1d,20,32,f8));
	outFields->push(HX_("DEBUG_SEVERITY_HIGH",18,be,8d,35));
	outFields->push(HX_("DEBUG_SEVERITY_MEDIUM",ab,58,3f,b3));
	outFields->push(HX_("DEBUG_SEVERITY_LOW",7e,fa,43,a3));
	outFields->push(HX_("DEBUG_OUTPUT",cd,3e,9f,da));
	outFields->push(HX_("CONTEXT_FLAG_DEBUG_BIT",7e,17,c3,b0));
	outFields->push(HX_("STACK_OVERFLOW",79,a6,54,a5));
	outFields->push(HX_("STACK_UNDERFLOW",cf,21,6e,b5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo KHR_debug_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_OUTPUT_SYNCHRONOUS),HX_("DEBUG_OUTPUT_SYNCHRONOUS",b7,6c,34,b8)},
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_NEXT_LOGGED_MESSAGE_LENGTH),HX_("DEBUG_NEXT_LOGGED_MESSAGE_LENGTH",5b,ea,d6,b8)},
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_CALLBACK_FUNCTION),HX_("DEBUG_CALLBACK_FUNCTION",c6,df,cb,cf)},
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_CALLBACK_USER_PARAM),HX_("DEBUG_CALLBACK_USER_PARAM",67,50,4b,b2)},
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_SOURCE_API),HX_("DEBUG_SOURCE_API",a2,9d,a7,fc)},
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_SOURCE_WINDOW_SYSTEM),HX_("DEBUG_SOURCE_WINDOW_SYSTEM",c6,f9,dc,4e)},
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_SOURCE_SHADER_COMPILER),HX_("DEBUG_SOURCE_SHADER_COMPILER",61,d0,c4,2b)},
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_SOURCE_THIRD_PARTY),HX_("DEBUG_SOURCE_THIRD_PARTY",f6,6f,06,29)},
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_SOURCE_APPLICATION),HX_("DEBUG_SOURCE_APPLICATION",58,24,b6,0f)},
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_SOURCE_OTHER),HX_("DEBUG_SOURCE_OTHER",d8,3d,44,3e)},
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_TYPE_ERROR),HX_("DEBUG_TYPE_ERROR",ef,26,40,e9)},
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_TYPE_DEPRECATED_BEHAVIOR),HX_("DEBUG_TYPE_DEPRECATED_BEHAVIOR",a5,cf,17,8c)},
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_TYPE_UNDEFINED_BEHAVIOR),HX_("DEBUG_TYPE_UNDEFINED_BEHAVIOR",da,37,6a,74)},
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_TYPE_PORTABILITY),HX_("DEBUG_TYPE_PORTABILITY",b0,1e,6b,9d)},
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_TYPE_PERFORMANCE),HX_("DEBUG_TYPE_PERFORMANCE",57,2c,fb,eb)},
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_TYPE_OTHER),HX_("DEBUG_TYPE_OTHER",f7,c1,8c,ac)},
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_TYPE_MARKER),HX_("DEBUG_TYPE_MARKER",93,dc,e9,97)},
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_TYPE_PUSH_GROUP),HX_("DEBUG_TYPE_PUSH_GROUP",13,87,6b,ca)},
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_TYPE_POP_GROUP),HX_("DEBUG_TYPE_POP_GROUP",58,29,6a,b8)},
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_SEVERITY_NOTIFICATION),HX_("DEBUG_SEVERITY_NOTIFICATION",a1,b3,a6,11)},
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,MAX_DEBUG_GROUP_STACK_DEPTH),HX_("MAX_DEBUG_GROUP_STACK_DEPTH",a5,1e,fc,f4)},
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_GROUP_STACK_DEPTH),HX_("DEBUG_GROUP_STACK_DEPTH",a0,e0,2d,54)},
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,BUFFER),HX_("BUFFER",00,69,17,83)},
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,SHADER),HX_("SHADER",25,6b,a3,cf)},
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,PROGRAM),HX_("PROGRAM",64,1e,cd,73)},
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,QUERY),HX_("QUERY",e8,c2,d8,db)},
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,SAMPLER),HX_("SAMPLER",e8,98,9d,03)},
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,MAX_LABEL_LENGTH),HX_("MAX_LABEL_LENGTH",0c,59,f0,f1)},
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,MAX_DEBUG_MESSAGE_LENGTH),HX_("MAX_DEBUG_MESSAGE_LENGTH",65,08,17,87)},
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,MAX_DEBUG_LOGGED_MESSAGES),HX_("MAX_DEBUG_LOGGED_MESSAGES",e2,62,56,d5)},
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_LOGGED_MESSAGES),HX_("DEBUG_LOGGED_MESSAGES",1d,20,32,f8)},
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_SEVERITY_HIGH),HX_("DEBUG_SEVERITY_HIGH",18,be,8d,35)},
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_SEVERITY_MEDIUM),HX_("DEBUG_SEVERITY_MEDIUM",ab,58,3f,b3)},
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_SEVERITY_LOW),HX_("DEBUG_SEVERITY_LOW",7e,fa,43,a3)},
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,DEBUG_OUTPUT),HX_("DEBUG_OUTPUT",cd,3e,9f,da)},
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,CONTEXT_FLAG_DEBUG_BIT),HX_("CONTEXT_FLAG_DEBUG_BIT",7e,17,c3,b0)},
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,STACK_OVERFLOW),HX_("STACK_OVERFLOW",79,a6,54,a5)},
	{::hx::fsInt,(int)offsetof(KHR_debug_obj,STACK_UNDERFLOW),HX_("STACK_UNDERFLOW",cf,21,6e,b5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *KHR_debug_obj_sStaticStorageInfo = 0;
#endif

static ::String KHR_debug_obj_sMemberFields[] = {
	HX_("DEBUG_OUTPUT_SYNCHRONOUS",b7,6c,34,b8),
	HX_("DEBUG_NEXT_LOGGED_MESSAGE_LENGTH",5b,ea,d6,b8),
	HX_("DEBUG_CALLBACK_FUNCTION",c6,df,cb,cf),
	HX_("DEBUG_CALLBACK_USER_PARAM",67,50,4b,b2),
	HX_("DEBUG_SOURCE_API",a2,9d,a7,fc),
	HX_("DEBUG_SOURCE_WINDOW_SYSTEM",c6,f9,dc,4e),
	HX_("DEBUG_SOURCE_SHADER_COMPILER",61,d0,c4,2b),
	HX_("DEBUG_SOURCE_THIRD_PARTY",f6,6f,06,29),
	HX_("DEBUG_SOURCE_APPLICATION",58,24,b6,0f),
	HX_("DEBUG_SOURCE_OTHER",d8,3d,44,3e),
	HX_("DEBUG_TYPE_ERROR",ef,26,40,e9),
	HX_("DEBUG_TYPE_DEPRECATED_BEHAVIOR",a5,cf,17,8c),
	HX_("DEBUG_TYPE_UNDEFINED_BEHAVIOR",da,37,6a,74),
	HX_("DEBUG_TYPE_PORTABILITY",b0,1e,6b,9d),
	HX_("DEBUG_TYPE_PERFORMANCE",57,2c,fb,eb),
	HX_("DEBUG_TYPE_OTHER",f7,c1,8c,ac),
	HX_("DEBUG_TYPE_MARKER",93,dc,e9,97),
	HX_("DEBUG_TYPE_PUSH_GROUP",13,87,6b,ca),
	HX_("DEBUG_TYPE_POP_GROUP",58,29,6a,b8),
	HX_("DEBUG_SEVERITY_NOTIFICATION",a1,b3,a6,11),
	HX_("MAX_DEBUG_GROUP_STACK_DEPTH",a5,1e,fc,f4),
	HX_("DEBUG_GROUP_STACK_DEPTH",a0,e0,2d,54),
	HX_("BUFFER",00,69,17,83),
	HX_("SHADER",25,6b,a3,cf),
	HX_("PROGRAM",64,1e,cd,73),
	HX_("QUERY",e8,c2,d8,db),
	HX_("SAMPLER",e8,98,9d,03),
	HX_("MAX_LABEL_LENGTH",0c,59,f0,f1),
	HX_("MAX_DEBUG_MESSAGE_LENGTH",65,08,17,87),
	HX_("MAX_DEBUG_LOGGED_MESSAGES",e2,62,56,d5),
	HX_("DEBUG_LOGGED_MESSAGES",1d,20,32,f8),
	HX_("DEBUG_SEVERITY_HIGH",18,be,8d,35),
	HX_("DEBUG_SEVERITY_MEDIUM",ab,58,3f,b3),
	HX_("DEBUG_SEVERITY_LOW",7e,fa,43,a3),
	HX_("DEBUG_OUTPUT",cd,3e,9f,da),
	HX_("CONTEXT_FLAG_DEBUG_BIT",7e,17,c3,b0),
	HX_("STACK_OVERFLOW",79,a6,54,a5),
	HX_("STACK_UNDERFLOW",cf,21,6e,b5),
	::String(null()) };

::hx::Class KHR_debug_obj::__mClass;

void KHR_debug_obj::__register()
{
	KHR_debug_obj _hx_dummy;
	KHR_debug_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.KHR_debug",87,84,b9,11);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(KHR_debug_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< KHR_debug_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = KHR_debug_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = KHR_debug_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
