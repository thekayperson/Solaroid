#include <hxcpp.h>

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
#ifndef INCLUDED_haxe_SysTools
#include <haxe/SysTools.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_63558c8e1f72d6c3_18_quoteUnixArg,"haxe.SysTools","quoteUnixArg",0xb3a0810a,"haxe.SysTools.quoteUnixArg","/usr/share/haxe/std/haxe/SysTools.hx",18,0x9dcfbea2)
HX_LOCAL_STACK_FRAME(_hx_pos_63558c8e1f72d6c3_46_quoteWinArg,"haxe.SysTools","quoteWinArg",0x08e9f6be,"haxe.SysTools.quoteWinArg","/usr/share/haxe/std/haxe/SysTools.hx",46,0x9dcfbea2)
static const ::String _hx_array_data_42269736_5[] = {
	HX_("\"",22,00,00,00),
};
static const ::String _hx_array_data_42269736_6[] = {
	HX_("\\\"",46,50,00,00),
};
static const ::String _hx_array_data_42269736_7[] = {
	HX_("\\",5c,00,00,00),
};
static const ::String _hx_array_data_42269736_8[] = {
	HX_("\"",22,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_63558c8e1f72d6c3_9_boot,"haxe.SysTools","boot",0x6c65b86a,"haxe.SysTools.boot","/usr/share/haxe/std/haxe/SysTools.hx",9,0x9dcfbea2)
static const int _hx_array_data_42269736_10[] = {
	(int)32,(int)40,(int)41,(int)37,(int)33,(int)94,(int)34,(int)60,(int)62,(int)38,(int)124,(int)10,(int)13,(int)44,(int)59,
};
namespace haxe{

void SysTools_obj::__construct() { }

Dynamic SysTools_obj::__CreateEmpty() { return new SysTools_obj; }

void *SysTools_obj::_hx_vtable = 0;

Dynamic SysTools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SysTools_obj > _hx_result = new SysTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SysTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x40b83714;
}

::Array< int > SysTools_obj::winMetaCharacters;

::String SysTools_obj::quoteUnixArg(::String argument){
            	HX_GC_STACKFRAME(&_hx_pos_63558c8e1f72d6c3_18_quoteUnixArg)
            	HX_STACK_ARG(argument,"argument")
HXLINE(  18)
HXLINE(  22)		if ((argument == HX_("",00,00,00,00))) {
HXLINE(  23)			return HX_("''",20,22,00,00);
            		}
HXLINE(  25)		if (!( ::EReg_obj::__alloc( HX_CTX ,HX_("[^a-zA-Z0-9_@%+=:,./-]",80,28,a0,8d),HX_("",00,00,00,00))->match(argument))) {
HXLINE(  26)			return argument;
            		}
HXLINE(  30)		return ((HX_("'",27,00,00,00) + ::StringTools_obj::replace(argument,HX_("'",27,00,00,00),HX_("'\"'\"'",71,96,37,8b))) + HX_("'",27,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SysTools_obj,quoteUnixArg,return )

::String SysTools_obj::quoteWinArg(::String argument,bool escapeMetaCharacters){
            	HX_GC_STACKFRAME(&_hx_pos_63558c8e1f72d6c3_46_quoteWinArg)
            	HX_STACK_ARG(argument,"argument")
            	HX_STACK_ARG(escapeMetaCharacters,"escapeMetaCharacters")
HXLINE(  46)
HXLINE(  48)		if (!( ::EReg_obj::__alloc( HX_CTX ,HX_("^[^ \t\\\\\"]+$",fe,85,ca,95),HX_("",00,00,00,00))->match(argument))) {
HXLINE(  52)			HX_VARI(  ::StringBuf,result) =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE(  53)			HX_VAR( bool,needquote);
HXDLIN(  53)			bool needquote1;
HXDLIN(  53)			if ((argument.indexOf(HX_(" ",20,00,00,00),null()) == -1)) {
HXLINE(  53)				needquote1 = (argument.indexOf(HX_("\t",09,00,00,00),null()) != -1);
            			}
            			else {
HXLINE(  53)				needquote1 = true;
            			}
HXDLIN(  53)			if (!(needquote1)) {
HXLINE(  53)				needquote = (argument == HX_("",00,00,00,00));
            			}
            			else {
HXLINE(  53)				needquote = true;
            			}
HXLINE(  55)			if (needquote) {
HXLINE(  56)				if (::hx::IsNotNull( result->charBuf )) {
HXLINE(  56)					result->flush();
            				}
HXDLIN(  56)				if (::hx::IsNull( result->b )) {
HXLINE(  56)					result->b = ::Array_obj< ::String >::fromData( _hx_array_data_42269736_5,1);
            				}
            				else {
HXLINE(  56)					result->b->push(HX_("\"",22,00,00,00));
            				}
            			}
HXLINE(  58)			HX_VARI(  ::StringBuf,bs_buf) =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE(  59)			{
HXLINE(  59)				int _g = 0;
HXDLIN(  59)				int _g1 = argument.length;
HXDLIN(  59)				while((_g < _g1)){
HXLINE(  59)					_g = (_g + 1);
HXDLIN(  59)					HX_VARI( int,i) = (_g - 1);
HXLINE(  60)					{
HXLINE(  60)						 ::Dynamic _g1 = argument.charCodeAt(i);
HXDLIN(  60)						if (::hx::IsNull( _g1 )) {
HXLINE(  71)							HX_VARI(  ::Dynamic,c) = _g1;
HXDLIN(  71)							{
HXLINE(  73)								if ((bs_buf->get_length() > 0)) {
HXLINE(  74)									{
HXLINE(  74)										::String x = bs_buf->toString();
HXDLIN(  74)										if (::hx::IsNotNull( result->charBuf )) {
HXLINE(  74)											result->flush();
            										}
HXDLIN(  74)										if (::hx::IsNull( result->b )) {
HXLINE(  74)											result->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            										}
            										else {
HXLINE(  74)											::Array< ::String > result1 = result->b;
HXDLIN(  74)											result1->push(::Std_obj::string(x));
            										}
            									}
HXLINE(  75)									bs_buf =  ::StringBuf_obj::__alloc( HX_CTX );
            								}
HXLINE(  77)								{
HXLINE(  77)									int c1 = ( (int)(c) );
HXDLIN(  77)									if ((c1 >= 127)) {
HXLINE(  77)										::String x = ::String::fromCharCode(c1);
HXDLIN(  77)										if (::hx::IsNotNull( result->charBuf )) {
HXLINE(  77)											result->flush();
            										}
HXDLIN(  77)										if (::hx::IsNull( result->b )) {
HXLINE(  77)											result->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            										}
            										else {
HXLINE(  77)											::Array< ::String > result1 = result->b;
HXDLIN(  77)											result1->push(::Std_obj::string(x));
            										}
            									}
            									else {
HXLINE(  77)										if (::hx::IsNull( result->charBuf )) {
HXLINE(  77)											result->charBuf = ::Array_obj< char >::__new();
            										}
HXDLIN(  77)										result->charBuf->push(c1);
            									}
            								}
            							}
            						}
            						else {
HXLINE(  60)							 ::Dynamic _hx_switch_0 = _g1;
            							if (  (_hx_switch_0==34) ){
HXLINE(  66)								HX_VARI( ::String,bs) = bs_buf->toString();
HXLINE(  67)								{
HXLINE(  67)									if (::hx::IsNotNull( result->charBuf )) {
HXLINE(  67)										result->flush();
            									}
HXDLIN(  67)									if (::hx::IsNull( result->b )) {
HXLINE(  67)										result->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(bs));
            									}
            									else {
HXLINE(  67)										::Array< ::String > result1 = result->b;
HXDLIN(  67)										result1->push(::Std_obj::string(bs));
            									}
            								}
HXLINE(  68)								{
HXLINE(  68)									if (::hx::IsNotNull( result->charBuf )) {
HXLINE(  68)										result->flush();
            									}
HXDLIN(  68)									if (::hx::IsNull( result->b )) {
HXLINE(  68)										result->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(bs));
            									}
            									else {
HXLINE(  68)										::Array< ::String > result1 = result->b;
HXDLIN(  68)										result1->push(::Std_obj::string(bs));
            									}
            								}
HXLINE(  69)								bs_buf =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE(  70)								{
HXLINE(  70)									if (::hx::IsNotNull( result->charBuf )) {
HXLINE(  70)										result->flush();
            									}
HXDLIN(  70)									if (::hx::IsNull( result->b )) {
HXLINE(  70)										result->b = ::Array_obj< ::String >::fromData( _hx_array_data_42269736_6,1);
            									}
            									else {
HXLINE(  70)										result->b->push(HX_("\\\"",46,50,00,00));
            									}
            								}
HXLINE(  64)								goto _hx_goto_2;
            							}
            							if (  (_hx_switch_0==92) ){
HXLINE(  63)								if (::hx::IsNotNull( bs_buf->charBuf )) {
HXLINE(  63)									bs_buf->flush();
            								}
HXDLIN(  63)								if (::hx::IsNull( bs_buf->b )) {
HXLINE(  63)									bs_buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_42269736_7,1);
            								}
            								else {
HXLINE(  63)									bs_buf->b->push(HX_("\\",5c,00,00,00));
            								}
HXDLIN(  63)								goto _hx_goto_2;
            							}
            							/* default */{
HXLINE(  71)								HX_VARI(  ::Dynamic,c) = _g1;
HXDLIN(  71)								{
HXLINE(  73)									if ((bs_buf->get_length() > 0)) {
HXLINE(  74)										{
HXLINE(  74)											::String x = bs_buf->toString();
HXDLIN(  74)											if (::hx::IsNotNull( result->charBuf )) {
HXLINE(  74)												result->flush();
            											}
HXDLIN(  74)											if (::hx::IsNull( result->b )) {
HXLINE(  74)												result->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            											}
            											else {
HXLINE(  74)												::Array< ::String > result1 = result->b;
HXDLIN(  74)												result1->push(::Std_obj::string(x));
            											}
            										}
HXLINE(  75)										bs_buf =  ::StringBuf_obj::__alloc( HX_CTX );
            									}
HXLINE(  77)									{
HXLINE(  77)										int c1 = ( (int)(c) );
HXDLIN(  77)										if ((c1 >= 127)) {
HXLINE(  77)											::String x = ::String::fromCharCode(c1);
HXDLIN(  77)											if (::hx::IsNotNull( result->charBuf )) {
HXLINE(  77)												result->flush();
            											}
HXDLIN(  77)											if (::hx::IsNull( result->b )) {
HXLINE(  77)												result->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            											}
            											else {
HXLINE(  77)												::Array< ::String > result1 = result->b;
HXDLIN(  77)												result1->push(::Std_obj::string(x));
            											}
            										}
            										else {
HXLINE(  77)											if (::hx::IsNull( result->charBuf )) {
HXLINE(  77)												result->charBuf = ::Array_obj< char >::__new();
            											}
HXDLIN(  77)											result->charBuf->push(c1);
            										}
            									}
            								}
            							}
            							_hx_goto_2:;
            						}
            					}
            				}
            			}
HXLINE(  82)			{
HXLINE(  82)				::String x = bs_buf->toString();
HXDLIN(  82)				if (::hx::IsNotNull( result->charBuf )) {
HXLINE(  82)					result->flush();
            				}
HXDLIN(  82)				if (::hx::IsNull( result->b )) {
HXLINE(  82)					result->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            				}
            				else {
HXLINE(  82)					::Array< ::String > result1 = result->b;
HXDLIN(  82)					result1->push(::Std_obj::string(x));
            				}
            			}
HXLINE(  84)			if (needquote) {
HXLINE(  85)				{
HXLINE(  85)					::String x = bs_buf->toString();
HXDLIN(  85)					if (::hx::IsNotNull( result->charBuf )) {
HXLINE(  85)						result->flush();
            					}
HXDLIN(  85)					if (::hx::IsNull( result->b )) {
HXLINE(  85)						result->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            					}
            					else {
HXLINE(  85)						::Array< ::String > result1 = result->b;
HXDLIN(  85)						result1->push(::Std_obj::string(x));
            					}
            				}
HXLINE(  86)				{
HXLINE(  86)					if (::hx::IsNotNull( result->charBuf )) {
HXLINE(  86)						result->flush();
            					}
HXDLIN(  86)					if (::hx::IsNull( result->b )) {
HXLINE(  86)						result->b = ::Array_obj< ::String >::fromData( _hx_array_data_42269736_8,1);
            					}
            					else {
HXLINE(  86)						result->b->push(HX_("\"",22,00,00,00));
            					}
            				}
            			}
HXLINE(  89)			argument = result->toString();
            		}
HXLINE(  92)		if (escapeMetaCharacters) {
HXLINE(  93)			HX_VARI(  ::StringBuf,result) =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE(  94)			{
HXLINE(  94)				int _g = 0;
HXDLIN(  94)				int _g1 = argument.length;
HXDLIN(  94)				while((_g < _g1)){
HXLINE(  94)					_g = (_g + 1);
HXDLIN(  94)					HX_VARI( int,i) = (_g - 1);
HXLINE(  95)					HX_VARI(  ::Dynamic,c) = argument.charCodeAt(i);
HXLINE(  96)					if ((::haxe::SysTools_obj::winMetaCharacters->indexOf(c,null()) >= 0)) {
HXLINE(  97)						if (::hx::IsNull( result->charBuf )) {
HXLINE(  97)							result->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN(  97)						result->charBuf->push(94);
            					}
HXLINE(  99)					{
HXLINE(  99)						int c1 = ( (int)(c) );
HXDLIN(  99)						if ((c1 >= 127)) {
HXLINE(  99)							::String x = ::String::fromCharCode(c1);
HXDLIN(  99)							if (::hx::IsNotNull( result->charBuf )) {
HXLINE(  99)								result->flush();
            							}
HXDLIN(  99)							if (::hx::IsNull( result->b )) {
HXLINE(  99)								result->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            							}
            							else {
HXLINE(  99)								::Array< ::String > result1 = result->b;
HXDLIN(  99)								result1->push(::Std_obj::string(x));
            							}
            						}
            						else {
HXLINE(  99)							if (::hx::IsNull( result->charBuf )) {
HXLINE(  99)								result->charBuf = ::Array_obj< char >::__new();
            							}
HXDLIN(  99)							result->charBuf->push(c1);
            						}
            					}
            				}
            			}
HXLINE( 101)			return result->toString();
            		}
            		else {
HXLINE( 103)			return argument;
            		}
HXLINE(  92)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SysTools_obj,quoteWinArg,return )


SysTools_obj::SysTools_obj()
{
}

bool SysTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"quoteWinArg") ) { outValue = quoteWinArg_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"quoteUnixArg") ) { outValue = quoteUnixArg_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"winMetaCharacters") ) { outValue = ( winMetaCharacters ); return true; }
	}
	return false;
}

bool SysTools_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"winMetaCharacters") ) { winMetaCharacters=ioValue.Cast< ::Array< int > >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SysTools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo SysTools_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< int > */ ,(void *) &SysTools_obj::winMetaCharacters,HX_("winMetaCharacters",0b,65,cd,94)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void SysTools_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SysTools_obj::winMetaCharacters,"winMetaCharacters");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SysTools_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SysTools_obj::winMetaCharacters,"winMetaCharacters");
};

#endif

::hx::Class SysTools_obj::__mClass;

static ::String SysTools_obj_sStaticFields[] = {
	HX_("winMetaCharacters",0b,65,cd,94),
	HX_("quoteUnixArg",d2,54,33,00),
	HX_("quoteWinArg",f6,b3,bc,14),
	::String(null())
};

void SysTools_obj::__register()
{
	SysTools_obj _hx_dummy;
	SysTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.SysTools",36,97,26,42);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SysTools_obj::__GetStatic;
	__mClass->mSetStaticField = &SysTools_obj::__SetStatic;
	__mClass->mMarkFunc = SysTools_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SysTools_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< SysTools_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SysTools_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SysTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SysTools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SysTools_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_63558c8e1f72d6c3_9_boot)
HXDLIN(   9)		winMetaCharacters = ::Array_obj< int >::fromData( _hx_array_data_42269736_10,15);
            	}
}

} // end namespace haxe
