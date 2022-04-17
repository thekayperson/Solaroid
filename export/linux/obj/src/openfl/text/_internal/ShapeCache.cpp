#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text__internal_CacheMeasurement
#include <openfl/text/_internal/CacheMeasurement.h>
#endif
#ifndef INCLUDED_openfl_text__internal_GlyphPosition
#include <openfl/text/_internal/GlyphPosition.h>
#endif
#ifndef INCLUDED_openfl_text__internal_ShapeCache
#include <openfl/text/_internal/ShapeCache.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextFormatRange
#include <openfl/text/_internal/TextFormatRange.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextLayout
#include <openfl/text/_internal/TextLayout.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_92049ab54864885e_18_new,"openfl.text._internal.ShapeCache","new",0xb090d308,"openfl.text._internal.ShapeCache.new","openfl/text/_internal/ShapeCache.hx",18,0x915de867)
HX_LOCAL_STACK_FRAME(_hx_pos_92049ab54864885e_36_cache,"openfl.text._internal.ShapeCache","cache",0x3c9596ea,"openfl.text._internal.ShapeCache.cache","openfl/text/_internal/ShapeCache.hx",36,0x915de867)
HX_LOCAL_STACK_FRAME(_hx_pos_92049ab54864885e_53___cacheShortWord,"openfl.text._internal.ShapeCache","__cacheShortWord",0x1b958d3c,"openfl.text._internal.ShapeCache.__cacheShortWord","openfl/text/_internal/ShapeCache.hx",53,0x915de867)
HX_LOCAL_STACK_FRAME(_hx_pos_92049ab54864885e_76___cacheLongWord,"openfl.text._internal.ShapeCache","__cacheLongWord",0xfd5e4150,"openfl.text._internal.ShapeCache.__cacheLongWord","openfl/text/_internal/ShapeCache.hx",76,0x915de867)
HX_LOCAL_STACK_FRAME(_hx_pos_92049ab54864885e_24_hashFunction,"openfl.text._internal.ShapeCache","hashFunction",0x31877d5e,"openfl.text._internal.ShapeCache.hashFunction","openfl/text/_internal/ShapeCache.hx",24,0x915de867)
HX_LOCAL_STACK_FRAME(_hx_pos_92049ab54864885e_12_boot,"openfl.text._internal.ShapeCache","boot",0xc640d48a,"openfl.text._internal.ShapeCache.boot","openfl/text/_internal/ShapeCache.hx",12,0x915de867)
namespace openfl{
namespace text{
namespace _internal{

void ShapeCache_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_92049ab54864885e_18_new)
            	HX_STACK_THIS(this)
HXLINE(  18)
HXLINE(  19)		this->_hx___shortWordMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  20)		this->_hx___longWordMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic ShapeCache_obj::__CreateEmpty() { return new ShapeCache_obj; }

void *ShapeCache_obj::_hx_vtable = 0;

Dynamic ShapeCache_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShapeCache_obj > _hx_result = new ShapeCache_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ShapeCache_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x21b5ff1c;
}

::Array< ::Dynamic> ShapeCache_obj::cache( ::openfl::text::_internal::TextFormatRange formatRange, ::openfl::text::_internal::TextLayout getPositions){
            	HX_STACKFRAME(&_hx_pos_92049ab54864885e_36_cache)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(formatRange,"formatRange")
            	HX_STACK_ARG(getPositions,"getPositions")
HXLINE(  36)
HXLINE(  37)		HX_VARI( ::String,formatKey) = formatRange->format->_hx___cacheKey;
HXLINE(  39)		HX_VARI( ::String,wordKey) = getPositions->text;
HXLINE(  41)		if ((wordKey.length > 15)) {
HXLINE(  43)			return this->_hx___cacheLongWord(wordKey,formatKey,getPositions);
            		}
            		else {
HXLINE(  47)			return this->_hx___cacheShortWord(wordKey,formatKey,getPositions);
            		}
HXLINE(  41)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShapeCache_obj,cache,return )

::Array< ::Dynamic> ShapeCache_obj::_hx___cacheShortWord(::String wordKey,::String formatKey, ::openfl::text::_internal::TextLayout getPositions){
            	HX_GC_STACKFRAME(&_hx_pos_92049ab54864885e_53___cacheShortWord)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(wordKey,"wordKey")
            	HX_STACK_ARG(formatKey,"formatKey")
            	HX_STACK_ARG(getPositions,"getPositions")
HXLINE(  53)
HXLINE(  54)		if (this->_hx___shortWordMap->exists(formatKey)) {
HXLINE(  56)			HX_VARI(  ::haxe::ds::StringMap,formatMap) = ( ( ::haxe::ds::StringMap)(this->_hx___shortWordMap->get(formatKey)) );
HXLINE(  57)			if (formatMap->exists(wordKey)) {
HXLINE(  59)				return ( (::Array< ::Dynamic>)(formatMap->get(wordKey)) );
            			}
            			else {
HXLINE(  63)				formatMap->set(wordKey,getPositions->get_positions());
            			}
            		}
            		else {
HXLINE(  68)			HX_VARI(  ::haxe::ds::StringMap,formatMap) =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  69)			formatMap->set(wordKey,getPositions->get_positions());
HXLINE(  70)			this->_hx___shortWordMap->set(formatKey,formatMap);
            		}
HXLINE(  72)		return getPositions->get_positions();
            	}


HX_DEFINE_DYNAMIC_FUNC3(ShapeCache_obj,_hx___cacheShortWord,return )

::Array< ::Dynamic> ShapeCache_obj::_hx___cacheLongWord(::String wordKey,::String formatKey, ::openfl::text::_internal::TextLayout getPositions){
            	HX_GC_STACKFRAME(&_hx_pos_92049ab54864885e_76___cacheLongWord)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(wordKey,"wordKey")
            	HX_STACK_ARG(formatKey,"formatKey")
            	HX_STACK_ARG(getPositions,"getPositions")
HXLINE(  76)
HXLINE(  77)		HX_VARI( int,hash) = ::openfl::text::_internal::ShapeCache_obj::hashFunction(wordKey);
HXLINE(  78)		if (this->_hx___longWordMap->exists(formatKey)) {
HXLINE(  80)			HX_VARI(  ::haxe::ds::IntMap,formatMap) = ( ( ::haxe::ds::IntMap)(this->_hx___longWordMap->get(formatKey)) );
HXLINE(  81)			if (formatMap->exists(hash)) {
HXLINE(  83)				HX_VARI(  ::openfl::text::_internal::CacheMeasurement,measurement) = ( ( ::openfl::text::_internal::CacheMeasurement)(formatMap->get(hash)) );
HXLINE(  84)				if (measurement->exists(wordKey)) {
HXLINE(  86)					return measurement->get(wordKey);
            				}
            				else {
HXLINE(  90)					measurement->set(wordKey,getPositions->get_positions());
            				}
            			}
            			else {
HXLINE(  95)				HX_VARI(  ::openfl::text::_internal::CacheMeasurement,measurement) =  ::openfl::text::_internal::CacheMeasurement_obj::__alloc( HX_CTX ,wordKey,getPositions->get_positions());
HXLINE(  96)				formatMap->set(hash,measurement);
            			}
            		}
            		else {
HXLINE( 101)			HX_VARI(  ::haxe::ds::IntMap,formatMap) =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 102)			HX_VARI(  ::openfl::text::_internal::CacheMeasurement,measurement) =  ::openfl::text::_internal::CacheMeasurement_obj::__alloc( HX_CTX ,wordKey,getPositions->get_positions());
HXLINE( 103)			measurement->hash = hash;
HXLINE( 104)			formatMap->set(hash,measurement);
HXLINE( 105)			this->_hx___longWordMap->set(formatKey,formatMap);
            		}
HXLINE( 107)		return getPositions->get_positions();
            	}


HX_DEFINE_DYNAMIC_FUNC3(ShapeCache_obj,_hx___cacheLongWord,return )

int ShapeCache_obj::hashFunction(::String key){
            	HX_STACKFRAME(&_hx_pos_92049ab54864885e_24_hashFunction)
            	HX_STACK_ARG(key,"key")
HXLINE(  24)
HXLINE(  25)		HX_VARI( int,hash) = 0;
HXDLIN(  25)		HX_VAR(  ::Dynamic,i);
HXDLIN(  25)		HX_VAR(  ::Dynamic,chr);
HXLINE(  26)		{
HXLINE(  26)			int _g = 0;
HXDLIN(  26)			int _g1 = key.length;
HXDLIN(  26)			while((_g < _g1)){
HXLINE(  26)				_g = (_g + 1);
HXDLIN(  26)				HX_VARI( int,i) = (_g - 1);
HXLINE(  28)				chr = key.charCodeAt(i);
HXLINE(  29)				hash = (((hash << 5) - hash) + chr);
HXLINE(  30)				hash = (hash | 0);
            			}
            		}
HXLINE(  32)		return hash;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ShapeCache_obj,hashFunction,return )


::hx::ObjectPtr< ShapeCache_obj > ShapeCache_obj::__new() {
	::hx::ObjectPtr< ShapeCache_obj > __this = new ShapeCache_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ShapeCache_obj > ShapeCache_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ShapeCache_obj *__this = (ShapeCache_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShapeCache_obj), true, "openfl.text._internal.ShapeCache"));
	*(void **)__this = ShapeCache_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ShapeCache_obj::ShapeCache_obj()
{
}

void ShapeCache_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShapeCache);
	HX_MARK_MEMBER_NAME(_hx___shortWordMap,"__shortWordMap");
	HX_MARK_MEMBER_NAME(_hx___longWordMap,"__longWordMap");
	HX_MARK_END_CLASS();
}

void ShapeCache_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___shortWordMap,"__shortWordMap");
	HX_VISIT_MEMBER_NAME(_hx___longWordMap,"__longWordMap");
}

::hx::Val ShapeCache_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { return ::hx::Val( cache_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__longWordMap") ) { return ::hx::Val( _hx___longWordMap ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__shortWordMap") ) { return ::hx::Val( _hx___shortWordMap ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__cacheLongWord") ) { return ::hx::Val( _hx___cacheLongWord_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__cacheShortWord") ) { return ::hx::Val( _hx___cacheShortWord_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ShapeCache_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"hashFunction") ) { outValue = hashFunction_dyn(); return true; }
	}
	return false;
}

::hx::Val ShapeCache_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"__longWordMap") ) { _hx___longWordMap=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__shortWordMap") ) { _hx___shortWordMap=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShapeCache_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("__shortWordMap",f6,68,2b,a8));
	outFields->push(HX_("__longWordMap",b6,25,09,17));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ShapeCache_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ShapeCache_obj,_hx___shortWordMap),HX_("__shortWordMap",f6,68,2b,a8)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ShapeCache_obj,_hx___longWordMap),HX_("__longWordMap",b6,25,09,17)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ShapeCache_obj_sStaticStorageInfo = 0;
#endif

static ::String ShapeCache_obj_sMemberFields[] = {
	HX_("__shortWordMap",f6,68,2b,a8),
	HX_("__longWordMap",b6,25,09,17),
	HX_("cache",42,9a,14,41),
	HX_("__cacheShortWord",e4,18,8d,d1),
	HX_("__cacheLongWord",a8,e2,53,1e),
	::String(null()) };

::hx::Class ShapeCache_obj::__mClass;

static ::String ShapeCache_obj_sStaticFields[] = {
	HX_("hashFunction",06,15,96,8b),
	::String(null())
};

void ShapeCache_obj::__register()
{
	ShapeCache_obj _hx_dummy;
	ShapeCache_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.text._internal.ShapeCache",16,ef,60,72);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ShapeCache_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ShapeCache_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShapeCache_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShapeCache_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShapeCache_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShapeCache_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ShapeCache_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_92049ab54864885e_12_boot)
HXDLIN(  12)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace text
} // end namespace _internal
