#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_85c2c6c527e56776_32_formatTicks,"flixel.util.FlxStringUtil","formatTicks",0xe4bb609c,"flixel.util.FlxStringUtil.formatTicks","flixel/util/FlxStringUtil.hx",32,0x4e012e33)
HX_LOCAL_STACK_FRAME(_hx_pos_85c2c6c527e56776_43_formatTime,"flixel.util.FlxStringUtil","formatTime",0xcfa9a0a7,"flixel.util.FlxStringUtil.formatTime","flixel/util/FlxStringUtil.hx",43,0x4e012e33)
HX_LOCAL_STACK_FRAME(_hx_pos_85c2c6c527e56776_73_formatArray,"flixel.util.FlxStringUtil","formatArray",0xfa1c9fbf,"flixel.util.FlxStringUtil.formatArray","flixel/util/FlxStringUtil.hx",73,0x4e012e33)
HX_LOCAL_STACK_FRAME(_hx_pos_85c2c6c527e56776_95_formatStringMap,"flixel.util.FlxStringUtil","formatStringMap",0x51016f71,"flixel.util.FlxStringUtil.formatStringMap","flixel/util/FlxStringUtil.hx",95,0x4e012e33)
HX_LOCAL_STACK_FRAME(_hx_pos_85c2c6c527e56776_118_formatMoney,"flixel.util.FlxStringUtil","formatMoney",0xe0ecec66,"flixel.util.FlxStringUtil.formatMoney","flixel/util/FlxStringUtil.hx",118,0x4e012e33)
HX_LOCAL_STACK_FRAME(_hx_pos_85c2c6c527e56776_165_formatBytes,"flixel.util.FlxStringUtil","formatBytes",0x92253a91,"flixel.util.FlxStringUtil.formatBytes","flixel/util/FlxStringUtil.hx",165,0x4e012e33)
static const ::String _hx_array_data_03bd21cb_10[] = {
	HX_("Bytes",4b,78,c5,50),HX_("kB",77,5d,00,00),HX_("MB",55,43,00,00),HX_("GB",1b,3e,00,00),HX_("TB",6e,49,00,00),HX_("PB",f2,45,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_85c2c6c527e56776_183_filterDigits,"flixel.util.FlxStringUtil","filterDigits",0xab6a2081,"flixel.util.FlxStringUtil.filterDigits","flixel/util/FlxStringUtil.hx",183,0x4e012e33)
HX_LOCAL_STACK_FRAME(_hx_pos_85c2c6c527e56776_210_htmlFormat,"flixel.util.FlxStringUtil","htmlFormat",0x8e97acc5,"flixel.util.FlxStringUtil.htmlFormat","flixel/util/FlxStringUtil.hx",210,0x4e012e33)
HX_LOCAL_STACK_FRAME(_hx_pos_85c2c6c527e56776_241_getClassName,"flixel.util.FlxStringUtil","getClassName",0xd57e17b0,"flixel.util.FlxStringUtil.getClassName","flixel/util/FlxStringUtil.hx",241,0x4e012e33)
HX_LOCAL_STACK_FRAME(_hx_pos_85c2c6c527e56776_260_getEnumName,"flixel.util.FlxStringUtil","getEnumName",0x6eceb97f,"flixel.util.FlxStringUtil.getEnumName","flixel/util/FlxStringUtil.hx",260,0x4e012e33)
HX_LOCAL_STACK_FRAME(_hx_pos_85c2c6c527e56776_271_formatPackage,"flixel.util.FlxStringUtil","formatPackage",0x398bb32c,"flixel.util.FlxStringUtil.formatPackage","flixel/util/FlxStringUtil.hx",271,0x4e012e33)
HX_LOCAL_STACK_FRAME(_hx_pos_85c2c6c527e56776_290_getHost,"flixel.util.FlxStringUtil","getHost",0x4b5a657b,"flixel.util.FlxStringUtil.getHost","flixel/util/FlxStringUtil.hx",290,0x4e012e33)
HX_LOCAL_STACK_FRAME(_hx_pos_85c2c6c527e56776_309_getDomain,"flixel.util.FlxStringUtil","getDomain",0x05683217,"flixel.util.FlxStringUtil.getDomain","flixel/util/FlxStringUtil.hx",309,0x4e012e33)
HX_LOCAL_STACK_FRAME(_hx_pos_85c2c6c527e56776_333_sameClassName,"flixel.util.FlxStringUtil","sameClassName",0x3be7dc7a,"flixel.util.FlxStringUtil.sameClassName","flixel/util/FlxStringUtil.hx",333,0x4e012e33)
HX_LOCAL_STACK_FRAME(_hx_pos_85c2c6c527e56776_343_toIntArray,"flixel.util.FlxStringUtil","toIntArray",0xa370d488,"flixel.util.FlxStringUtil.toIntArray","flixel/util/FlxStringUtil.hx",343,0x4e012e33)
HX_LOCAL_STACK_FRAME(_hx_pos_85c2c6c527e56776_364_toFloatArray,"flixel.util.FlxStringUtil","toFloatArray",0xcff15c3b,"flixel.util.FlxStringUtil.toFloatArray","flixel/util/FlxStringUtil.hx",364,0x4e012e33)
HX_LOCAL_STACK_FRAME(_hx_pos_85c2c6c527e56776_387_arrayToCSV,"flixel.util.FlxStringUtil","arrayToCSV",0xd181e275,"flixel.util.FlxStringUtil.arrayToCSV","flixel/util/FlxStringUtil.hx",387,0x4e012e33)
HX_LOCAL_STACK_FRAME(_hx_pos_85c2c6c527e56776_452_bitmapToCSV,"flixel.util.FlxStringUtil","bitmapToCSV",0x6fd72f79,"flixel.util.FlxStringUtil.bitmapToCSV","flixel/util/FlxStringUtil.hx",452,0x4e012e33)
HX_LOCAL_STACK_FRAME(_hx_pos_85c2c6c527e56776_566_imageToCSV,"flixel.util.FlxStringUtil","imageToCSV",0xe3229173,"flixel.util.FlxStringUtil.imageToCSV","flixel/util/FlxStringUtil.hx",566,0x4e012e33)
HX_LOCAL_STACK_FRAME(_hx_pos_85c2c6c527e56776_588_getDebugString,"flixel.util.FlxStringUtil","getDebugString",0x47d891d1,"flixel.util.FlxStringUtil.getDebugString","flixel/util/FlxStringUtil.hx",588,0x4e012e33)
HX_LOCAL_STACK_FRAME(_hx_pos_85c2c6c527e56776_608_contains,"flixel.util.FlxStringUtil","contains",0x45000522,"flixel.util.FlxStringUtil.contains","flixel/util/FlxStringUtil.hx",608,0x4e012e33)
HX_LOCAL_STACK_FRAME(_hx_pos_85c2c6c527e56776_616_remove,"flixel.util.FlxStringUtil","remove",0xf6fd7087,"flixel.util.FlxStringUtil.remove","flixel/util/FlxStringUtil.hx",616,0x4e012e33)
HX_LOCAL_STACK_FRAME(_hx_pos_85c2c6c527e56776_624_insert,"flixel.util.FlxStringUtil","insert",0x9052177c,"flixel.util.FlxStringUtil.insert","flixel/util/FlxStringUtil.hx",624,0x4e012e33)
HX_LOCAL_STACK_FRAME(_hx_pos_85c2c6c527e56776_630_sortAlphabetically,"flixel.util.FlxStringUtil","sortAlphabetically",0xf5002ac6,"flixel.util.FlxStringUtil.sortAlphabetically","flixel/util/FlxStringUtil.hx",630,0x4e012e33)
HX_LOCAL_STACK_FRAME(_hx_pos_85c2c6c527e56776_628_sortAlphabetically,"flixel.util.FlxStringUtil","sortAlphabetically",0xf5002ac6,"flixel.util.FlxStringUtil.sortAlphabetically","flixel/util/FlxStringUtil.hx",628,0x4e012e33)
HX_LOCAL_STACK_FRAME(_hx_pos_85c2c6c527e56776_648_isNullOrEmpty,"flixel.util.FlxStringUtil","isNullOrEmpty",0x99779cf6,"flixel.util.FlxStringUtil.isNullOrEmpty","flixel/util/FlxStringUtil.hx",648,0x4e012e33)
namespace flixel{
namespace util{

void FlxStringUtil_obj::__construct() { }

Dynamic FlxStringUtil_obj::__CreateEmpty() { return new FlxStringUtil_obj; }

void *FlxStringUtil_obj::_hx_vtable = 0;

Dynamic FlxStringUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxStringUtil_obj > _hx_result = new FlxStringUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxStringUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x168d68bf;
}

::String FlxStringUtil_obj::formatTicks(int StartTicks,int EndTicks){
            	HX_STACKFRAME(&_hx_pos_85c2c6c527e56776_32_formatTicks)
            	HX_STACK_ARG(StartTicks,"StartTicks")
            	HX_STACK_ARG(EndTicks,"EndTicks")
HXLINE(  32)
HXDLIN(  32)		return ((::Math_obj::abs(( (Float)((EndTicks - StartTicks)) )) / ( (Float)(1000) )) + HX_("s",73,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxStringUtil_obj,formatTicks,return )

::String FlxStringUtil_obj::formatTime(Float Seconds,::hx::Null< bool >  __o_ShowMS){
            		bool ShowMS = __o_ShowMS.Default(false);
            	HX_STACKFRAME(&_hx_pos_85c2c6c527e56776_43_formatTime)
            	HX_STACK_ARG(Seconds,"Seconds")
            	HX_STACK_ARG(ShowMS,"ShowMS")
HXLINE(  43)
HXLINE(  44)		HX_VARI( ::String,timeString) = (::Std_obj::_hx_int((Seconds / ( (Float)(60) ))) + HX_(":",3a,00,00,00));
HXLINE(  45)		HX_VARI( int,timeStringHelper) = ::hx::Mod(::Std_obj::_hx_int(Seconds),60);
HXLINE(  46)		if ((timeStringHelper < 10)) {
HXLINE(  48)			timeString = (timeString + HX_("0",30,00,00,00));
            		}
HXLINE(  50)		timeString = (timeString + timeStringHelper);
HXLINE(  51)		if (ShowMS) {
HXLINE(  53)			timeString = (timeString + HX_(".",2e,00,00,00));
HXLINE(  54)			timeStringHelper = ::Std_obj::_hx_int(((Seconds - ( (Float)(::Std_obj::_hx_int(Seconds)) )) * ( (Float)(100) )));
HXLINE(  55)			if ((timeStringHelper < 10)) {
HXLINE(  57)				timeString = (timeString + HX_("0",30,00,00,00));
            			}
HXLINE(  59)			timeString = (timeString + timeStringHelper);
            		}
HXLINE(  62)		return timeString;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxStringUtil_obj,formatTime,return )

::String FlxStringUtil_obj::formatArray(::cpp::VirtualArray AnyArray){
            	HX_STACKFRAME(&_hx_pos_85c2c6c527e56776_73_formatArray)
            	HX_STACK_ARG(AnyArray,"AnyArray")
HXLINE(  73)
HXLINE(  74)		HX_VARI( ::String,string) = HX_("",00,00,00,00);
HXLINE(  75)		bool _hx_tmp;
HXDLIN(  75)		if (::hx::IsNotNull( AnyArray )) {
HXLINE(  75)			_hx_tmp = (AnyArray->get_length() > 0);
            		}
            		else {
HXLINE(  75)			_hx_tmp = false;
            		}
HXDLIN(  75)		if (_hx_tmp) {
HXLINE(  77)			string = ::Std_obj::string(AnyArray->__get(0));
HXLINE(  78)			HX_VARI( int,i) = 1;
HXLINE(  79)			HX_VARI( int,l) = AnyArray->get_length();
HXLINE(  80)			while((i < l)){
HXLINE(  82)				i = (i + 1);
HXDLIN(  82)				string = (string + (HX_(", ",74,26,00,00) + ::Std_obj::string(AnyArray->__get((i - 1)))));
            			}
            		}
HXLINE(  85)		return string;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,formatArray,return )

::String FlxStringUtil_obj::formatStringMap( ::haxe::ds::StringMap AnyMap){
            	HX_STACKFRAME(&_hx_pos_85c2c6c527e56776_95_formatStringMap)
            	HX_STACK_ARG(AnyMap,"AnyMap")
HXLINE(  95)
HXLINE(  96)		HX_VARI( ::String,string) = HX_("",00,00,00,00);
HXLINE(  97)		{
HXLINE(  97)			HX_VARI(  ::Dynamic,key) = AnyMap->keys();
HXDLIN(  97)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  97)				HX_VARI( ::String,key1) = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  99)				string = (string + ::Std_obj::string(key1));
HXLINE( 100)				string = (string + HX_(", ",74,26,00,00));
            			}
            		}
HXLINE( 103)		return string.substring(0,(string.length - 2));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,formatStringMap,return )

::String FlxStringUtil_obj::formatMoney(Float Amount,::hx::Null< bool >  __o_ShowDecimal,::hx::Null< bool >  __o_EnglishStyle){
            		bool ShowDecimal = __o_ShowDecimal.Default(true);
            		bool EnglishStyle = __o_EnglishStyle.Default(true);
            	HX_STACKFRAME(&_hx_pos_85c2c6c527e56776_118_formatMoney)
            	HX_STACK_ARG(Amount,"Amount")
            	HX_STACK_ARG(ShowDecimal,"ShowDecimal")
            	HX_STACK_ARG(EnglishStyle,"EnglishStyle")
HXLINE( 118)
HXLINE( 119)		HX_VARI( bool,isNegative) = (Amount < 0);
HXLINE( 120)		Amount = ::Math_obj::abs(Amount);
HXLINE( 122)		HX_VARI( ::String,string) = HX_("",00,00,00,00);
HXLINE( 123)		HX_VARI( ::String,comma) = HX_("",00,00,00,00);
HXLINE( 124)		HX_VARI( Float,amount) = ::Math_obj::ffloor(Amount);
HXLINE( 125)		while((amount > 0)){
HXLINE( 127)			bool _hx_tmp;
HXDLIN( 127)			if ((string.length > 0)) {
HXLINE( 127)				_hx_tmp = (comma.length <= 0);
            			}
            			else {
HXLINE( 127)				_hx_tmp = false;
            			}
HXDLIN( 127)			if (_hx_tmp) {
HXLINE( 128)				if (EnglishStyle) {
HXLINE( 128)					comma = HX_(",",2c,00,00,00);
            				}
            				else {
HXLINE( 128)					comma = HX_(".",2e,00,00,00);
            				}
            			}
HXLINE( 130)			HX_VARI( ::String,zeroes) = HX_("",00,00,00,00);
HXLINE( 131)			HX_VARI( Float,helper) = (amount - (::Math_obj::ffloor((amount / ( (Float)(1000) ))) * ( (Float)(1000) )));
HXLINE( 132)			amount = ::Math_obj::ffloor((amount / ( (Float)(1000) )));
HXLINE( 133)			if ((amount > 0)) {
HXLINE( 135)				if ((helper < 100)) {
HXLINE( 136)					zeroes = (zeroes + HX_("0",30,00,00,00));
            				}
HXLINE( 137)				if ((helper < 10)) {
HXLINE( 138)					zeroes = (zeroes + HX_("0",30,00,00,00));
            				}
            			}
HXLINE( 140)			string = (((zeroes + helper) + comma) + string);
            		}
HXLINE( 143)		if ((string == HX_("",00,00,00,00))) {
HXLINE( 144)			string = HX_("0",30,00,00,00);
            		}
HXLINE( 146)		if (ShowDecimal) {
HXLINE( 148)			amount = (::Math_obj::ffloor((Amount * ( (Float)(100) ))) - (::Math_obj::ffloor(Amount) * ( (Float)(100) )));
HXLINE( 149)			::String string1;
HXDLIN( 149)			if (EnglishStyle) {
HXLINE( 149)				string1 = HX_(".",2e,00,00,00);
            			}
            			else {
HXLINE( 149)				string1 = HX_(",",2c,00,00,00);
            			}
HXDLIN( 149)			string = (string + string1);
HXLINE( 150)			if ((amount < 10)) {
HXLINE( 151)				string = (string + HX_("0",30,00,00,00));
            			}
HXLINE( 152)			string = (string + amount);
            		}
HXLINE( 155)		if (isNegative) {
HXLINE( 156)			string = (HX_("-",2d,00,00,00) + string);
            		}
HXLINE( 157)		return string;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxStringUtil_obj,formatMoney,return )

::String FlxStringUtil_obj::formatBytes(Float Bytes,::hx::Null< int >  __o_Precision){
            		int Precision = __o_Precision.Default(2);
            	HX_STACKFRAME(&_hx_pos_85c2c6c527e56776_165_formatBytes)
            	HX_STACK_ARG(Bytes,"Bytes")
            	HX_STACK_ARG(Precision,"Precision")
HXLINE( 165)
HXLINE( 166)		HX_VARI( ::Array< ::String >,units) = ::Array_obj< ::String >::fromData( _hx_array_data_03bd21cb_10,6);
HXLINE( 167)		HX_VARI( int,curUnit) = 0;
HXLINE( 168)		while(true){
HXLINE( 168)			bool _hx_tmp;
HXDLIN( 168)			if ((Bytes >= 1024)) {
HXLINE( 168)				_hx_tmp = (curUnit < (units->length - 1));
            			}
            			else {
HXLINE( 168)				_hx_tmp = false;
            			}
HXDLIN( 168)			if (!(_hx_tmp)) {
HXLINE( 168)				goto _hx_goto_8;
            			}
HXLINE( 170)			Bytes = (Bytes / ( (Float)(1024) ));
HXLINE( 171)			curUnit = (curUnit + 1);
            		}
            		_hx_goto_8:;
HXLINE( 173)		Float _hx_tmp = ::flixel::math::FlxMath_obj::roundDecimal(Bytes,Precision);
HXDLIN( 173)		return (_hx_tmp + units->__get(curUnit));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxStringUtil_obj,formatBytes,return )

::String FlxStringUtil_obj::filterDigits(::String Input){
            	HX_GC_STACKFRAME(&_hx_pos_85c2c6c527e56776_183_filterDigits)
            	HX_STACK_ARG(Input,"Input")
HXLINE( 183)
HXLINE( 184)		HX_VARI(  ::StringBuf,output) =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 185)		{
HXLINE( 185)			int _g = 0;
HXDLIN( 185)			int _g1 = Input.length;
HXDLIN( 185)			while((_g < _g1)){
HXLINE( 185)				_g = (_g + 1);
HXDLIN( 185)				HX_VARI( int,i) = (_g - 1);
HXLINE( 187)				HX_VARI(  ::Dynamic,c) = Input.charCodeAt(i);
HXLINE( 188)				bool _hx_tmp;
HXDLIN( 188)				if (::hx::IsGreaterEq( c,48 )) {
HXLINE( 188)					_hx_tmp = ::hx::IsLessEq( c,57 );
            				}
            				else {
HXLINE( 188)					_hx_tmp = false;
            				}
HXDLIN( 188)				if (_hx_tmp) {
HXLINE( 190)					int c1 = ( (int)(c) );
HXDLIN( 190)					if ((c1 >= 127)) {
HXLINE( 190)						::String x = ::String::fromCharCode(c1);
HXDLIN( 190)						if (::hx::IsNotNull( output->charBuf )) {
HXLINE( 190)							output->flush();
            						}
HXDLIN( 190)						if (::hx::IsNull( output->b )) {
HXLINE( 190)							output->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE( 190)							::Array< ::String > output1 = output->b;
HXDLIN( 190)							output1->push(::Std_obj::string(x));
            						}
            					}
            					else {
HXLINE( 190)						if (::hx::IsNull( output->charBuf )) {
HXLINE( 190)							output->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN( 190)						output->charBuf->push(c1);
            					}
            				}
            			}
            		}
HXLINE( 193)		return output->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,filterDigits,return )

::String FlxStringUtil_obj::htmlFormat(::String Text,::hx::Null< int >  __o_Size,::String __o_Color,::hx::Null< bool >  __o_Bold,::hx::Null< bool >  __o_Italic,::hx::Null< bool >  __o_Underlined){
            		int Size = __o_Size.Default(12);
            		::String Color = __o_Color;
            		if (::hx::IsNull(__o_Color)) Color = HX_("FFFFFF",c0,27,82,79);
            		bool Bold = __o_Bold.Default(false);
            		bool Italic = __o_Italic.Default(false);
            		bool Underlined = __o_Underlined.Default(false);
            	HX_STACKFRAME(&_hx_pos_85c2c6c527e56776_210_htmlFormat)
            	HX_STACK_ARG(Text,"Text")
            	HX_STACK_ARG(Size,"Size")
            	HX_STACK_ARG(Color,"Color")
            	HX_STACK_ARG(Bold,"Bold")
            	HX_STACK_ARG(Italic,"Italic")
            	HX_STACK_ARG(Underlined,"Underlined")
HXLINE( 210)
HXLINE( 211)		HX_VARI( ::String,prefix) = ((((HX_("<font size='",c0,5b,1a,a4) + Size) + HX_("' color='#",2f,1d,64,33)) + Color) + HX_("'>",37,22,00,00));
HXLINE( 212)		HX_VARI( ::String,suffix) = HX_("</font>",3c,82,5f,8e);
HXLINE( 214)		if (Bold) {
HXLINE( 216)			prefix = (HX_("<b>",d8,dc,2d,00) + prefix);
HXLINE( 217)			suffix = (suffix + HX_("</b>",cf,cc,cc,27));
            		}
HXLINE( 219)		if (Italic) {
HXLINE( 221)			prefix = (HX_("<i>",f1,e2,2d,00) + prefix);
HXLINE( 222)			suffix = (suffix + HX_("</i>",e8,d2,cc,27));
            		}
HXLINE( 224)		if (Underlined) {
HXLINE( 226)			prefix = (HX_("<u>",65,ed,2d,00) + prefix);
HXLINE( 227)			suffix = (suffix + HX_("</u>",5c,dd,cc,27));
            		}
HXLINE( 230)		return ((prefix + Text) + suffix);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxStringUtil_obj,htmlFormat,return )

::String FlxStringUtil_obj::getClassName( ::Dynamic objectOrClass,::hx::Null< bool >  __o_simple){
            		bool simple = __o_simple.Default(false);
            	HX_STACKFRAME(&_hx_pos_85c2c6c527e56776_241_getClassName)
            	HX_STACK_ARG(objectOrClass,"objectOrClass")
            	HX_STACK_ARG(simple,"simple")
HXLINE( 241)
HXLINE( 242)		HX_VAR( ::hx::Class,cl);
HXLINE( 243)		if (::Std_obj::isOfType(objectOrClass,::hx::ClassOf< ::hx::Class >())) {
HXLINE( 244)			cl = objectOrClass;
            		}
            		else {
HXLINE( 246)			cl = ::Type_obj::getClass(objectOrClass);
            		}
HXLINE( 248)		return ::flixel::util::FlxStringUtil_obj::formatPackage(::Type_obj::getClassName(cl),simple);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxStringUtil_obj,getClassName,return )

::String FlxStringUtil_obj::getEnumName( ::Dynamic enumValueOrEnum,::hx::Null< bool >  __o_simple){
            		bool simple = __o_simple.Default(false);
            	HX_STACKFRAME(&_hx_pos_85c2c6c527e56776_260_getEnumName)
            	HX_STACK_ARG(enumValueOrEnum,"enumValueOrEnum")
            	HX_STACK_ARG(simple,"simple")
HXLINE( 260)
HXLINE( 261)		HX_VAR( ::hx::Class,e);
HXLINE( 262)		if (::Std_obj::isOfType(enumValueOrEnum,::hx::ClassOf< ::Enum >())) {
HXLINE( 263)			e = enumValueOrEnum;
            		}
            		else {
HXLINE( 265)			e = ::Type_obj::getEnum(enumValueOrEnum);
            		}
HXLINE( 267)		return ::flixel::util::FlxStringUtil_obj::formatPackage(::Type_obj::getEnumName(e),simple);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxStringUtil_obj,getEnumName,return )

::String FlxStringUtil_obj::formatPackage(::String s,bool simple){
            	HX_STACKFRAME(&_hx_pos_85c2c6c527e56776_271_formatPackage)
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(simple,"simple")
HXLINE( 271)
HXLINE( 272)		if (::hx::IsNull( s )) {
HXLINE( 273)			return null();
            		}
HXLINE( 275)		s = ::StringTools_obj::replace(s,HX_("::",c0,32,00,00),HX_(".",2e,00,00,00));
HXLINE( 276)		if (simple) {
HXLINE( 277)			s = s.substr((s.lastIndexOf(HX_(".",2e,00,00,00),null()) + 1),null());
            		}
HXLINE( 278)		return s;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxStringUtil_obj,formatPackage,return )

::String FlxStringUtil_obj::getHost(::String url){
            	HX_GC_STACKFRAME(&_hx_pos_85c2c6c527e56776_290_getHost)
            	HX_STACK_ARG(url,"url")
HXLINE( 290)
HXLINE( 291)		HX_VARI(  ::EReg,hostFromURL) =  ::EReg_obj::__alloc( HX_CTX ,HX_("^(?:[a-z][a-z0-9+\\-.]*://)?(?:[a-z0-9\\-._~%!$&'()*+,;=]+@)?([a-z0-9\\-._~%]{3,}|\\[[a-f0-9:.]+\\])?(?::[0-9]+)?",f7,89,6d,75),HX_("i",69,00,00,00));
HXLINE( 292)		if (hostFromURL->match(url)) {
HXLINE( 294)			HX_VARI( ::String,host) = hostFromURL->matched(1);
HXLINE( 295)			if (::hx::IsNotNull( host )) {
HXLINE( 295)				return ::StringTools_obj::urlDecode(host).toLowerCase();
            			}
            			else {
HXLINE( 295)				return HX_("",00,00,00,00);
            			}
            		}
HXLINE( 298)		return HX_("",00,00,00,00);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,getHost,return )

::String FlxStringUtil_obj::getDomain(::String url){
            	HX_GC_STACKFRAME(&_hx_pos_85c2c6c527e56776_309_getDomain)
            	HX_STACK_ARG(url,"url")
HXLINE( 309)
HXLINE( 310)		HX_VARI( ::String,host) = ::flixel::util::FlxStringUtil_obj::getHost(url);
HXLINE( 312)		HX_VARI(  ::EReg,isLocalhostOrIpAddress) =  ::EReg_obj::__alloc( HX_CTX ,HX_("^(localhost|[0-9.]+|\\[[a-f0-9:.]+\\])$",88,fe,57,f1),HX_("i",69,00,00,00));
HXLINE( 313)		HX_VARI(  ::EReg,domainFromHost) =  ::EReg_obj::__alloc( HX_CTX ,HX_("^(?:[a-z0-9\\-]+\\.)*([a-z0-9\\-]+\\.[a-z0-9\\-]+)$",9b,e9,08,2b),HX_("i",69,00,00,00));
HXLINE( 314)		bool _hx_tmp;
HXDLIN( 314)		if (!(isLocalhostOrIpAddress->match(host))) {
HXLINE( 314)			_hx_tmp = domainFromHost->match(host);
            		}
            		else {
HXLINE( 314)			_hx_tmp = false;
            		}
HXDLIN( 314)		if (_hx_tmp) {
HXLINE( 316)			HX_VARI( ::String,domain) = domainFromHost->matched(1);
HXLINE( 317)			if (::hx::IsNotNull( domain )) {
HXLINE( 317)				return domain.toLowerCase();
            			}
            			else {
HXLINE( 317)				return HX_("",00,00,00,00);
            			}
            		}
HXLINE( 320)		return HX_("",00,00,00,00);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,getDomain,return )

bool FlxStringUtil_obj::sameClassName( ::Dynamic Obj1, ::Dynamic Obj2,::hx::Null< bool >  __o_Simple){
            		bool Simple = __o_Simple.Default(true);
            	HX_STACKFRAME(&_hx_pos_85c2c6c527e56776_333_sameClassName)
            	HX_STACK_ARG(Obj1,"Obj1")
            	HX_STACK_ARG(Obj2,"Obj2")
            	HX_STACK_ARG(Simple,"Simple")
HXLINE( 333)
HXDLIN( 333)		::String _hx_tmp = ::flixel::util::FlxStringUtil_obj::getClassName(Obj1,Simple);
HXDLIN( 333)		return (_hx_tmp == ::flixel::util::FlxStringUtil_obj::getClassName(Obj2,Simple));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxStringUtil_obj,sameClassName,return )

::Array< int > FlxStringUtil_obj::toIntArray(::String Data){
            	HX_STACKFRAME(&_hx_pos_85c2c6c527e56776_343_toIntArray)
            	HX_STACK_ARG(Data,"Data")
HXLINE( 343)
HXLINE( 344)		bool _hx_tmp;
HXDLIN( 344)		if (::hx::IsNotNull( Data )) {
HXLINE( 344)			_hx_tmp = (Data != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 344)			_hx_tmp = false;
            		}
HXDLIN( 344)		if (_hx_tmp) {
HXLINE( 346)			HX_VARI( ::Array< ::String >,strArray) = Data.split(HX_(",",2c,00,00,00));
HXLINE( 347)			HX_VARI( ::Array< int >,iArray) = ::Array_obj< int >::__new();
HXLINE( 348)			{
HXLINE( 348)				int _g = 0;
HXDLIN( 348)				while((_g < strArray->length)){
HXLINE( 348)					HX_VARI( ::String,str) = strArray->__get(_g);
HXDLIN( 348)					_g = (_g + 1);
HXLINE( 350)					iArray->push(::Std_obj::parseInt(str));
            				}
            			}
HXLINE( 352)			return iArray;
            		}
HXLINE( 354)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,toIntArray,return )

::Array< Float > FlxStringUtil_obj::toFloatArray(::String Data){
            	HX_STACKFRAME(&_hx_pos_85c2c6c527e56776_364_toFloatArray)
            	HX_STACK_ARG(Data,"Data")
HXLINE( 364)
HXLINE( 365)		bool _hx_tmp;
HXDLIN( 365)		if (::hx::IsNotNull( Data )) {
HXLINE( 365)			_hx_tmp = (Data != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 365)			_hx_tmp = false;
            		}
HXDLIN( 365)		if (_hx_tmp) {
HXLINE( 367)			HX_VARI( ::Array< ::String >,strArray) = Data.split(HX_(",",2c,00,00,00));
HXLINE( 368)			HX_VARI( ::Array< Float >,fArray) = ::Array_obj< Float >::__new();
HXLINE( 369)			{
HXLINE( 369)				int _g = 0;
HXDLIN( 369)				while((_g < strArray->length)){
HXLINE( 369)					HX_VARI( ::String,str) = strArray->__get(_g);
HXDLIN( 369)					_g = (_g + 1);
HXLINE( 371)					fArray->push(::Std_obj::parseFloat(str));
            				}
            			}
HXLINE( 373)			return fArray;
            		}
HXLINE( 375)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,toFloatArray,return )

::String FlxStringUtil_obj::arrayToCSV(::Array< int > Data,int Width,::hx::Null< bool >  __o_Invert){
            		bool Invert = __o_Invert.Default(false);
            	HX_STACKFRAME(&_hx_pos_85c2c6c527e56776_387_arrayToCSV)
            	HX_STACK_ARG(Data,"Data")
            	HX_STACK_ARG(Width,"Width")
            	HX_STACK_ARG(Invert,"Invert")
HXLINE( 387)
HXLINE( 388)		HX_VARI( int,row) = 0;
HXLINE( 389)		HX_VAR( int,column);
HXLINE( 390)		HX_VARI( ::String,csv) = HX_("",00,00,00,00);
HXLINE( 391)		HX_VARI( int,height) = ::Std_obj::_hx_int((( (Float)(Data->length) ) / ( (Float)(Width) )));
HXLINE( 392)		HX_VAR( int,index);
HXLINE( 393)		HX_VARI( int,offset) = 0;
HXLINE( 395)		while((row < height)){
HXLINE( 397)			column = 0;
HXLINE( 399)			while((column < Width)){
HXLINE( 401)				index = Data->__get(offset);
HXLINE( 403)				if (Invert) {
HXLINE( 405)					if ((index == 0)) {
HXLINE( 407)						index = 1;
            					}
            					else {
HXLINE( 409)						if ((index == 1)) {
HXLINE( 411)							index = 0;
            						}
            					}
            				}
HXLINE( 415)				if ((column == 0)) {
HXLINE( 417)					if ((row == 0)) {
HXLINE( 419)						csv = (csv + index);
            					}
            					else {
HXLINE( 423)						csv = (csv + (HX_("\n",0a,00,00,00) + index));
            					}
            				}
            				else {
HXLINE( 428)					csv = (csv + (HX_(", ",74,26,00,00) + index));
            				}
HXLINE( 431)				column = (column + 1);
HXLINE( 432)				offset = (offset + 1);
            			}
HXLINE( 435)			row = (row + 1);
            		}
HXLINE( 438)		return csv;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxStringUtil_obj,arrayToCSV,return )

::String FlxStringUtil_obj::bitmapToCSV( ::openfl::display::BitmapData Bitmap,::hx::Null< bool >  __o_Invert,::hx::Null< int >  __o_Scale,::Array< int > ColorMap){
            		bool Invert = __o_Invert.Default(false);
            		int Scale = __o_Scale.Default(1);
            	HX_GC_STACKFRAME(&_hx_pos_85c2c6c527e56776_452_bitmapToCSV)
            	HX_STACK_ARG(Bitmap,"Bitmap")
            	HX_STACK_ARG(Invert,"Invert")
            	HX_STACK_ARG(Scale,"Scale")
            	HX_STACK_ARG(ColorMap,"ColorMap")
HXLINE( 452)
HXLINE( 453)		if ((Scale < 1)) {
HXLINE( 455)			Scale = 1;
            		}
HXLINE( 459)		if ((Scale > 1)) {
HXLINE( 461)			HX_VARI(  ::openfl::display::BitmapData,bd) = Bitmap;
HXLINE( 462)			Bitmap =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,(Bitmap->width * Scale),(Bitmap->height * Scale),null(),null());
HXLINE( 465)			HX_VARI( int,bdW) = bd->width;
HXLINE( 466)			HX_VARI( int,bdH) = bd->height;
HXLINE( 467)			HX_VARI( int,pCol) = 0;
HXLINE( 469)			{
HXLINE( 469)				int _g = 0;
HXDLIN( 469)				int _g1 = bdW;
HXDLIN( 469)				while((_g < _g1)){
HXLINE( 469)					_g = (_g + 1);
HXDLIN( 469)					HX_VARI( int,i) = (_g - 1);
HXLINE( 471)					{
HXLINE( 471)						int _g1 = 0;
HXDLIN( 471)						int _g2 = bdH;
HXDLIN( 471)						while((_g1 < _g2)){
HXLINE( 471)							_g1 = (_g1 + 1);
HXDLIN( 471)							HX_VARI( int,j) = (_g1 - 1);
HXLINE( 473)							pCol = bd->getPixel(i,j);
HXLINE( 475)							{
HXLINE( 475)								int _g = 0;
HXDLIN( 475)								int _g2 = Scale;
HXDLIN( 475)								while((_g < _g2)){
HXLINE( 475)									_g = (_g + 1);
HXDLIN( 475)									HX_VARI( int,k) = (_g - 1);
HXLINE( 477)									{
HXLINE( 477)										int _g1 = 0;
HXDLIN( 477)										int _g2 = Scale;
HXDLIN( 477)										while((_g1 < _g2)){
HXLINE( 477)											_g1 = (_g1 + 1);
HXDLIN( 477)											HX_VARI( int,m) = (_g1 - 1);
HXLINE( 479)											Bitmap->setPixel(((i * Scale) + k),((j * Scale) + m),pCol);
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 491)		if (::hx::IsNotNull( ColorMap )) {
HXLINE( 493)			int _g = 0;
HXDLIN( 493)			int _g1 = ColorMap->length;
HXDLIN( 493)			while((_g < _g1)){
HXLINE( 493)				_g = (_g + 1);
HXDLIN( 493)				HX_VARI( int,i) = (_g - 1);
HXLINE( 495)				ColorMap[i] = (ColorMap->__get(i) & 16777215);
            			}
            		}
HXLINE( 500)		HX_VARI( int,row) = 0;
HXLINE( 501)		HX_VAR( int,column);
HXLINE( 502)		HX_VAR( int,pixel);
HXLINE( 503)		HX_VARI( ::String,csv) = HX_("",00,00,00,00);
HXLINE( 504)		HX_VARI( int,bitmapWidth) = Bitmap->width;
HXLINE( 505)		HX_VARI( int,bitmapHeight) = Bitmap->height;
HXLINE( 507)		while((row < bitmapHeight)){
HXLINE( 509)			column = 0;
HXLINE( 511)			while((column < bitmapWidth)){
HXLINE( 514)				pixel = Bitmap->getPixel(column,row);
HXLINE( 516)				if (::hx::IsNotNull( ColorMap )) {
HXLINE( 518)					pixel = ColorMap->indexOf(pixel,null());
            				}
            				else {
HXLINE( 520)					bool _hx_tmp;
HXDLIN( 520)					bool _hx_tmp1;
HXDLIN( 520)					if (Invert) {
HXLINE( 520)						_hx_tmp1 = (pixel > 0);
            					}
            					else {
HXLINE( 520)						_hx_tmp1 = false;
            					}
HXDLIN( 520)					if (!(_hx_tmp1)) {
HXLINE( 520)						if (!(Invert)) {
HXLINE( 520)							_hx_tmp = (pixel == 0);
            						}
            						else {
HXLINE( 520)							_hx_tmp = false;
            						}
            					}
            					else {
HXLINE( 520)						_hx_tmp = true;
            					}
HXDLIN( 520)					if (_hx_tmp) {
HXLINE( 522)						pixel = 1;
            					}
            					else {
HXLINE( 526)						pixel = 0;
            					}
            				}
HXLINE( 530)				if ((column == 0)) {
HXLINE( 532)					if ((row == 0)) {
HXLINE( 534)						csv = (csv + pixel);
            					}
            					else {
HXLINE( 538)						csv = (csv + (HX_("\n",0a,00,00,00) + pixel));
            					}
            				}
            				else {
HXLINE( 543)					csv = (csv + (HX_(", ",74,26,00,00) + pixel));
            				}
HXLINE( 546)				column = (column + 1);
            			}
HXLINE( 549)			row = (row + 1);
            		}
HXLINE( 552)		return csv;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxStringUtil_obj,bitmapToCSV,return )

::String FlxStringUtil_obj::imageToCSV( ::Dynamic ImageFile,::hx::Null< bool >  __o_Invert,::hx::Null< int >  __o_Scale,::Array< int > ColorMap){
            		bool Invert = __o_Invert.Default(false);
            		int Scale = __o_Scale.Default(1);
            	HX_STACKFRAME(&_hx_pos_85c2c6c527e56776_566_imageToCSV)
            	HX_STACK_ARG(ImageFile,"ImageFile")
            	HX_STACK_ARG(Invert,"Invert")
            	HX_STACK_ARG(Scale,"Scale")
            	HX_STACK_ARG(ColorMap,"ColorMap")
HXLINE( 566)
HXLINE( 567)		HX_VAR(  ::openfl::display::BitmapData,tempBitmapData);
HXLINE( 569)		if (::Std_obj::isOfType(ImageFile,::hx::ClassOf< ::String >())) {
HXLINE( 571)			::String id = ( (::String)(ImageFile) );
HXDLIN( 571)			if (::openfl::utils::Assets_obj::exists(id,null())) {
HXLINE( 571)				tempBitmapData = ::openfl::utils::Assets_obj::getBitmapData(id,false);
            			}
            			else {
HXLINE( 571)				::flixel::FlxG_obj::log->advanced(((HX_("Could not find a BitmapData asset with ID '",5f,79,a9,21) + id) + HX_("'.",27,22,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
HXDLIN( 571)				tempBitmapData = null();
            			}
            		}
            		else {
HXLINE( 575)			tempBitmapData = ( ( ::openfl::display::BitmapData)(::Type_obj::createInstance(ImageFile,::cpp::VirtualArray_obj::__new(0))->__Field(HX_("bitmapData",b9,b5,c0,33),::hx::paccDynamic)) );
            		}
HXLINE( 578)		return ::flixel::util::FlxStringUtil_obj::bitmapToCSV(tempBitmapData,Invert,Scale,ColorMap);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxStringUtil_obj,imageToCSV,return )

::String FlxStringUtil_obj::getDebugString(::Array< ::Dynamic> LabelValuePairs){
            	HX_STACKFRAME(&_hx_pos_85c2c6c527e56776_588_getDebugString)
            	HX_STACK_ARG(LabelValuePairs,"LabelValuePairs")
HXLINE( 588)
HXLINE( 589)		HX_VARI( ::String,output) = HX_("(",28,00,00,00);
HXLINE( 590)		{
HXLINE( 590)			int _g = 0;
HXDLIN( 590)			while((_g < LabelValuePairs->length)){
HXLINE( 590)				HX_VARI(  ::flixel::util::LabelValuePair,pair) = LabelValuePairs->__get(_g).StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN( 590)				_g = (_g + 1);
HXLINE( 592)				output = (output + (pair->label + HX_(": ",a6,32,00,00)));
HXLINE( 593)				HX_VARI(  ::Dynamic,value) = pair->value;
HXLINE( 594)				if (::Std_obj::isOfType(value,::hx::ClassOf< ::Float >())) {
HXLINE( 596)					value = ::flixel::math::FlxMath_obj::roundDecimal(( (Float)(value) ),::flixel::FlxG_obj::debugger->precision);
            				}
HXLINE( 598)				output = (output + (::Std_obj::string(value) + HX_(" | ",44,b4,18,00)));
HXLINE( 599)				::flixel::util::LabelValuePair_obj::_pool->put(pair);
            			}
            		}
HXLINE( 602)		output = ::StringTools_obj::trim(output.substr(0,(output.length - 2)));
HXLINE( 603)		return (output + HX_(")",29,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,getDebugString,return )

bool FlxStringUtil_obj::contains(::String s,::String str){
            	HX_STACKFRAME(&_hx_pos_85c2c6c527e56776_608_contains)
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(str,"str")
HXLINE( 608)
HXDLIN( 608)		return (s.indexOf(str,null()) != -1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxStringUtil_obj,contains,return )

::String FlxStringUtil_obj::remove(::String s,::String sub){
            	HX_STACKFRAME(&_hx_pos_85c2c6c527e56776_616_remove)
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(sub,"sub")
HXLINE( 616)
HXDLIN( 616)		return ::StringTools_obj::replace(s,sub,HX_("",00,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxStringUtil_obj,remove,return )

::String FlxStringUtil_obj::insert(::String s,int pos,::String insertion){
            	HX_STACKFRAME(&_hx_pos_85c2c6c527e56776_624_insert)
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(pos,"pos")
            	HX_STACK_ARG(insertion,"insertion")
HXLINE( 624)
HXDLIN( 624)		::String _hx_tmp = (s.substring(0,pos) + insertion);
HXDLIN( 624)		return (_hx_tmp + s.substr(pos,null()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxStringUtil_obj,insert,return )

::Array< ::String > FlxStringUtil_obj::sortAlphabetically(::Array< ::String > list){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		int _hx_run(::String a,::String b){
            			HX_STACKFRAME(&_hx_pos_85c2c6c527e56776_630_sortAlphabetically)
            			HX_STACK_ARG(a,"a")
            			HX_STACK_ARG(b,"b")
HXLINE( 630)
HXLINE( 631)			a = a.toLowerCase();
HXLINE( 632)			b = b.toLowerCase();
HXLINE( 633)			if ((a < b)) {
HXLINE( 634)				return -1;
            			}
HXLINE( 635)			if ((a > b)) {
HXLINE( 636)				return 1;
            			}
HXLINE( 637)			return 0;
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_85c2c6c527e56776_628_sortAlphabetically)
            	HX_STACK_ARG(list,"list")
HXLINE( 628)
HXLINE( 629)		list->sort( ::Dynamic(new _hx_Closure_0()));
HXLINE( 639)		return list;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,sortAlphabetically,return )

bool FlxStringUtil_obj::isNullOrEmpty(::String s){
            	HX_STACKFRAME(&_hx_pos_85c2c6c527e56776_648_isNullOrEmpty)
            	HX_STACK_ARG(s,"s")
HXLINE( 648)
HXDLIN( 648)		if (::hx::IsNotNull( s )) {
HXDLIN( 648)			return (s.length == 0);
            		}
            		else {
HXDLIN( 648)			return true;
            		}
HXDLIN( 648)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,isNullOrEmpty,return )


FlxStringUtil_obj::FlxStringUtil_obj()
{
}

bool FlxStringUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { outValue = remove_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"insert") ) { outValue = insert_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getHost") ) { outValue = getHost_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { outValue = contains_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getDomain") ) { outValue = getDomain_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"formatTime") ) { outValue = formatTime_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"htmlFormat") ) { outValue = htmlFormat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toIntArray") ) { outValue = toIntArray_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"arrayToCSV") ) { outValue = arrayToCSV_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"imageToCSV") ) { outValue = imageToCSV_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"formatTicks") ) { outValue = formatTicks_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"formatArray") ) { outValue = formatArray_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"formatMoney") ) { outValue = formatMoney_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"formatBytes") ) { outValue = formatBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getEnumName") ) { outValue = getEnumName_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"bitmapToCSV") ) { outValue = bitmapToCSV_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"filterDigits") ) { outValue = filterDigits_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getClassName") ) { outValue = getClassName_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toFloatArray") ) { outValue = toFloatArray_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"formatPackage") ) { outValue = formatPackage_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sameClassName") ) { outValue = sameClassName_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isNullOrEmpty") ) { outValue = isNullOrEmpty_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getDebugString") ) { outValue = getDebugString_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"formatStringMap") ) { outValue = formatStringMap_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"sortAlphabetically") ) { outValue = sortAlphabetically_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxStringUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxStringUtil_obj_sStaticStorageInfo = 0;
#endif

::hx::Class FlxStringUtil_obj::__mClass;

static ::String FlxStringUtil_obj_sStaticFields[] = {
	HX_("formatTicks",bf,87,47,c9),
	HX_("formatTime",e4,ee,61,0c),
	HX_("formatArray",e2,c6,a8,de),
	HX_("formatStringMap",14,64,33,33),
	HX_("formatMoney",89,13,79,c5),
	HX_("formatBytes",b4,61,b1,76),
	HX_("filterDigits",fe,37,80,c1),
	HX_("htmlFormat",02,fb,4f,cb),
	HX_("getClassName",2d,2f,94,eb),
	HX_("getEnumName",a2,e0,5a,53),
	HX_("formatPackage",0f,29,ca,76),
	HX_("getHost",1e,7f,95,17),
	HX_("getDomain",7a,3a,d7,a9),
	HX_("sameClassName",5d,52,26,79),
	HX_("toIntArray",c5,22,29,e0),
	HX_("toFloatArray",b8,73,07,e6),
	HX_("arrayToCSV",b2,30,3a,0e),
	HX_("bitmapToCSV",9c,56,63,54),
	HX_("imageToCSV",b0,df,da,1f),
	HX_("getDebugString",8e,42,41,a1),
	HX_("contains",1f,5a,7b,2c),
	HX_("remove",44,9c,88,04),
	HX_("insert",39,43,dd,9d),
	HX_("sortAlphabetically",03,7e,3c,7b),
	HX_("isNullOrEmpty",d9,12,b6,d6),
	::String(null())
};

void FlxStringUtil_obj::__register()
{
	FlxStringUtil_obj _hx_dummy;
	FlxStringUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util.FlxStringUtil",cb,21,bd,03);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxStringUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxStringUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxStringUtil_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxStringUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxStringUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
