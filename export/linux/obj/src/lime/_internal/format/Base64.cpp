#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_haxe_crypto_Base64
#include <haxe/crypto/Base64.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_format_Base64
#include <lime/_internal/format/Base64.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_26b81c39c19229fa_24_decode,"lime._internal.format.Base64","decode",0xdd48c0e1,"lime._internal.format.Base64.decode","lime/_internal/format/Base64.hx",24,0x72383064)
HX_LOCAL_STACK_FRAME(_hx_pos_26b81c39c19229fa_28_encode,"lime._internal.format.Base64","encode",0x723f55c9,"lime._internal.format.Base64.encode","lime/_internal/format/Base64.hx",28,0x72383064)
HX_LOCAL_STACK_FRAME(_hx_pos_26b81c39c19229fa_8_boot,"lime._internal.format.Base64","boot",0x79fe8525,"lime._internal.format.Base64.boot","lime/_internal/format/Base64.hx",8,0x72383064)
HX_LOCAL_STACK_FRAME(_hx_pos_26b81c39c19229fa_10_boot,"lime._internal.format.Base64","boot",0x79fe8525,"lime._internal.format.Base64.boot","lime/_internal/format/Base64.hx",10,0x72383064)
namespace lime{
namespace _internal{
namespace format{

void Base64_obj::__construct() { }

Dynamic Base64_obj::__CreateEmpty() { return new Base64_obj; }

void *Base64_obj::_hx_vtable = 0;

Dynamic Base64_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Base64_obj > _hx_result = new Base64_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Base64_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x13e2a8e1;
}

::Array< ::String > Base64_obj::DICTIONARY;

::Array< ::String > Base64_obj::EXTENDED_DICTIONARY;

 ::haxe::io::Bytes Base64_obj::decode(::String source){
            	HX_STACKFRAME(&_hx_pos_26b81c39c19229fa_24_decode)
            	HX_STACK_ARG(source,"source")
HXLINE(  24)
HXDLIN(  24)		return ::haxe::crypto::Base64_obj::decode(source,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Base64_obj,decode,return )

::String Base64_obj::encode( ::haxe::io::Bytes source){
            	HX_STACKFRAME(&_hx_pos_26b81c39c19229fa_28_encode)
            	HX_STACK_ARG(source,"source")
HXLINE(  28)
HXLINE(  29)		HX_VARI( ::Array< ::String >,result) = ::Array_obj< ::String >::__new();
HXLINE(  31)		HX_VARI( ::Array< ::String >,dictionary) = ::lime::_internal::format::Base64_obj::DICTIONARY;
HXLINE(  32)		HX_VARI( ::Array< ::String >,extendedDictionary) = ::lime::_internal::format::Base64_obj::EXTENDED_DICTIONARY;
HXLINE(  34)		HX_VARI( int,numBytes) = source->length;
HXLINE(  35)		HX_VARI( int,numInputTriplets) = ::Math_obj::floor((( (Float)(numBytes) ) / ( (Float)(3) )));
HXLINE(  36)		HX_VARI( int,numChunksToWrite) = (numInputTriplets * 2);
HXLINE(  39)		_hx_array_set_size_exact(result,(::Math_obj::ceil((( (Float)(numBytes) ) / ( (Float)(3) ))) * 2));
HXLINE(  44)		HX_VARI( int,numBytesRead) = 0;
HXLINE(  45)		HX_VARI( int,numChunksWritten) = 0;
HXLINE(  46)		HX_VAR( int,inputTriplet);
HXLINE(  48)		while((numChunksWritten < numChunksToWrite)){
HXLINE(  50)			inputTriplet = (((( (int)(source->b->__get(numBytesRead)) ) << 16) | (( (int)(source->b->__get((numBytesRead + 1))) ) << 8)) | ( (int)(source->b->__get((numBytesRead + 2))) ));
HXLINE(  51)			result[numChunksWritten] = extendedDictionary->__get(((inputTriplet >> 12) & 4095));
HXLINE(  52)			result[(numChunksWritten + 1)] = extendedDictionary->__get((inputTriplet & 4095));
HXLINE(  54)			numBytesRead = (numBytesRead + 3);
HXLINE(  55)			numChunksWritten = (numChunksWritten + 2);
            		}
HXLINE(  58)		switch((int)((numBytes - (numInputTriplets * 3)))){
            			case (int)1: {
HXLINE(  61)				inputTriplet = (( (int)(source->b->__get(numBytesRead)) ) << 16);
HXLINE(  62)				result[numChunksWritten] = extendedDictionary->__get(((inputTriplet >> 12) & 4095));
HXLINE(  63)				result[(numChunksWritten + 1)] = HX_("==",60,35,00,00);
            			}
            			break;
            			case (int)2: {
HXLINE(  65)				inputTriplet = ((( (int)(source->b->__get(numBytesRead)) ) << 16) | (( (int)(source->b->__get((numBytesRead + 1))) ) << 8));
HXLINE(  66)				result[numChunksWritten] = extendedDictionary->__get(((inputTriplet >> 12) & 4095));
HXLINE(  67)				result[(numChunksWritten + 1)] = (dictionary->__get(((inputTriplet >> 6) & 63)) + HX_("=",3d,00,00,00));
            			}
            			break;
            			default:{
            			}
            		}
HXLINE(  71)		return result->join(HX_("",00,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Base64_obj,encode,return )


Base64_obj::Base64_obj()
{
}

bool Base64_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"decode") ) { outValue = decode_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"encode") ) { outValue = encode_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"DICTIONARY") ) { outValue = ( DICTIONARY ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"EXTENDED_DICTIONARY") ) { outValue = ( EXTENDED_DICTIONARY ); return true; }
	}
	return false;
}

bool Base64_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"DICTIONARY") ) { DICTIONARY=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"EXTENDED_DICTIONARY") ) { EXTENDED_DICTIONARY=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Base64_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Base64_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &Base64_obj::DICTIONARY,HX_("DICTIONARY",96,07,53,b8)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &Base64_obj::EXTENDED_DICTIONARY,HX_("EXTENDED_DICTIONARY",9c,28,29,40)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Base64_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Base64_obj::DICTIONARY,"DICTIONARY");
	HX_MARK_MEMBER_NAME(Base64_obj::EXTENDED_DICTIONARY,"EXTENDED_DICTIONARY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Base64_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Base64_obj::DICTIONARY,"DICTIONARY");
	HX_VISIT_MEMBER_NAME(Base64_obj::EXTENDED_DICTIONARY,"EXTENDED_DICTIONARY");
};

#endif

::hx::Class Base64_obj::__mClass;

static ::String Base64_obj_sStaticFields[] = {
	HX_("DICTIONARY",96,07,53,b8),
	HX_("EXTENDED_DICTIONARY",9c,28,29,40),
	HX_("decode",2e,5d,ed,64),
	HX_("encode",16,f2,e3,f9),
	::String(null())
};

void Base64_obj::__register()
{
	Base64_obj _hx_dummy;
	Base64_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime._internal.format.Base64",5b,04,17,60);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Base64_obj::__GetStatic;
	__mClass->mSetStaticField = &Base64_obj::__SetStatic;
	__mClass->mMarkFunc = Base64_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Base64_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Base64_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Base64_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Base64_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Base64_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Base64_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_26b81c39c19229fa_8_boot)
HXDLIN(   8)		DICTIONARY = HX_("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/",03,41,03,7f).split(HX_("",00,00,00,00));
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		::Array< ::String > _hx_run(){
            			HX_STACKFRAME(&_hx_pos_26b81c39c19229fa_10_boot)
HXLINE(  10)
HXLINE(  11)			HX_VARI( ::Array< ::String >,result) = ::Array_obj< ::String >::__new();
HXLINE(  12)			{
HXLINE(  12)				int _g = 0;
HXDLIN(  12)				::Array< ::String > _g1 = ::lime::_internal::format::Base64_obj::DICTIONARY;
HXDLIN(  12)				while((_g < _g1->length)){
HXLINE(  12)					HX_VARI( ::String,a) = _g1->__get(_g);
HXDLIN(  12)					_g = (_g + 1);
HXLINE(  14)					{
HXLINE(  14)						int _g2 = 0;
HXDLIN(  14)						::Array< ::String > _g3 = ::lime::_internal::format::Base64_obj::DICTIONARY;
HXDLIN(  14)						while((_g2 < _g3->length)){
HXLINE(  14)							HX_VARI( ::String,b) = _g3->__get(_g2);
HXDLIN(  14)							_g2 = (_g2 + 1);
HXLINE(  16)							result->push((a + b));
            						}
            					}
            				}
            			}
HXLINE(  19)			return result;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_26b81c39c19229fa_10_boot)
HXDLIN(  10)		EXTENDED_DICTIONARY = ( (::Array< ::String >)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

} // end namespace lime
} // end namespace _internal
} // end namespace format
