#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_iterators_ArrayIterator
#include <haxe/iterators/ArrayIterator.h>
#endif
#ifndef INCLUDED_haxe_iterators_MapKeyValueIterator
#include <haxe/iterators/MapKeyValueIterator.h>
#endif
#ifndef INCLUDED_openfl_utils__Dictionary_FloatMap
#include <openfl/utils/_Dictionary/FloatMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_292_new,"openfl.utils._Dictionary.FloatMap","new",0xa412a9a6,"openfl.utils._Dictionary.FloatMap.new","openfl/utils/Dictionary.hx",292,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_299_clear,"openfl.utils._Dictionary.FloatMap","clear",0x7c77a853,"openfl.utils._Dictionary.FloatMap.clear","openfl/utils/Dictionary.hx",299,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_307_copy,"openfl.utils._Dictionary.FloatMap","copy",0xe503ffaf,"openfl.utils._Dictionary.FloatMap.copy","openfl/utils/Dictionary.hx",307,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_317_exists,"openfl.utils._Dictionary.FloatMap","exists",0x2473d456,"openfl.utils._Dictionary.FloatMap.exists","openfl/utils/Dictionary.hx",317,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_321_get,"openfl.utils._Dictionary.FloatMap","get",0xa40d59dc,"openfl.utils._Dictionary.FloatMap.get","openfl/utils/Dictionary.hx",321,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_329_keyValueIterator,"openfl.utils._Dictionary.FloatMap","keyValueIterator",0xcf81205a,"openfl.utils._Dictionary.FloatMap.keyValueIterator","openfl/utils/Dictionary.hx",329,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_335_keys,"openfl.utils._Dictionary.FloatMap","keys",0xea4625ee,"openfl.utils._Dictionary.FloatMap.keys","openfl/utils/Dictionary.hx",335,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_340_iterator,"openfl.utils._Dictionary.FloatMap","iterator",0x0d6412e8,"openfl.utils._Dictionary.FloatMap.iterator","openfl/utils/Dictionary.hx",340,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_344_remove,"openfl.utils._Dictionary.FloatMap","remove",0x691c52be,"openfl.utils._Dictionary.FloatMap.remove","openfl/utils/Dictionary.hx",344,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_359_set,"openfl.utils._Dictionary.FloatMap","set",0xa41674e8,"openfl.utils._Dictionary.FloatMap.set","openfl/utils/Dictionary.hx",359,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_367_indexOf,"openfl.utils._Dictionary.FloatMap","indexOf",0x7d6b3d0f,"openfl.utils._Dictionary.FloatMap.indexOf","openfl/utils/Dictionary.hx",367,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_412_insertSorted,"openfl.utils._Dictionary.FloatMap","insertSorted",0x4f3fc950,"openfl.utils._Dictionary.FloatMap.insertSorted","openfl/utils/Dictionary.hx",412,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_462_toString,"openfl.utils._Dictionary.FloatMap","toString",0xb23899a6,"openfl.utils._Dictionary.FloatMap.toString","openfl/utils/Dictionary.hx",462,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_ea32ed7fa92041fa_286_boot,"openfl.utils._Dictionary.FloatMap","boot",0xe45ac82c,"openfl.utils._Dictionary.FloatMap.boot","openfl/utils/Dictionary.hx",286,0x5979b1eb)
namespace openfl{
namespace utils{
namespace _Dictionary{

void FloatMap_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_292_new)
            	HX_STACK_THIS(this)
HXLINE( 292)
HXLINE( 293)		this->floatKeys = ::cpp::VirtualArray_obj::__new();
HXLINE( 294)		this->values = ::cpp::VirtualArray_obj::__new();
            	}

Dynamic FloatMap_obj::__CreateEmpty() { return new FloatMap_obj; }

void *FloatMap_obj::_hx_vtable = 0;

Dynamic FloatMap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FloatMap_obj > _hx_result = new FloatMap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FloatMap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1b518c94;
}

static ::haxe::IMap_obj _hx_openfl_utils__Dictionary_FloatMap__hx_haxe_IMap= {
	(  ::Dynamic (::hx::Object::*)( ::Dynamic))&::openfl::utils::_Dictionary::FloatMap_obj::get,
	( void (::hx::Object::*)( ::Dynamic, ::Dynamic))&::openfl::utils::_Dictionary::FloatMap_obj::set_dca24b06,
	( bool (::hx::Object::*)( ::Dynamic))&::openfl::utils::_Dictionary::FloatMap_obj::exists,
	( bool (::hx::Object::*)( ::Dynamic))&::openfl::utils::_Dictionary::FloatMap_obj::remove,
	(  ::Dynamic (::hx::Object::*)())&::openfl::utils::_Dictionary::FloatMap_obj::keys,
	(  ::Dynamic (::hx::Object::*)())&::openfl::utils::_Dictionary::FloatMap_obj::iterator,
	(  ::Dynamic (::hx::Object::*)())&::openfl::utils::_Dictionary::FloatMap_obj::keyValueIterator,
};

void FloatMap_obj::set_dca24b06( ::Dynamic k, ::Dynamic v) {
			set(k,v);
}
void *FloatMap_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x09c2bd39: return &_hx_openfl_utils__Dictionary_FloatMap__hx_haxe_IMap;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FloatMap_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_299_clear)
            	HX_STACK_THIS(this)
HXLINE( 299)
HXLINE( 300)		this->floatKeys = ::cpp::VirtualArray_obj::__new();
HXLINE( 301)		this->values = ::cpp::VirtualArray_obj::__new();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FloatMap_obj,clear,(void))

 ::openfl::utils::_Dictionary::FloatMap FloatMap_obj::copy(){
            	HX_GC_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_307_copy)
            	HX_STACK_THIS(this)
HXLINE( 307)
HXLINE( 308)		HX_VARI(  ::openfl::utils::_Dictionary::FloatMap,copied) =  ::openfl::utils::_Dictionary::FloatMap_obj::__alloc( HX_CTX );
HXLINE( 309)		{
HXLINE( 309)			HX_VARI(  ::Dynamic,key) = this->keys();
HXDLIN( 309)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 309)				HX_VARI(  ::Dynamic,key1) = key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 310)				copied->set(key1,this->get(key1));
            			}
            		}
HXLINE( 311)		return copied;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FloatMap_obj,copy,return )

bool FloatMap_obj::exists( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_317_exists)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(key,"key")
HXLINE( 317)
HXDLIN( 317)		return (this->indexOf(key) > -1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FloatMap_obj,exists,return )

 ::Dynamic FloatMap_obj::get( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_321_get)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(key,"key")
HXLINE( 321)
HXLINE( 322)		HX_VARI( int,ind) = this->indexOf(key);
HXLINE( 323)		if ((ind > -1)) {
HXLINE( 323)			return this->values->__get(ind);
            		}
            		else {
HXLINE( 323)			return null();
            		}
HXDLIN( 323)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FloatMap_obj,get,return )

 ::Dynamic FloatMap_obj::keyValueIterator(){
            	HX_GC_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_329_keyValueIterator)
            	HX_STACK_THIS(this)
HXLINE( 329)
HXDLIN( 329)		return  ::haxe::iterators::MapKeyValueIterator_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FloatMap_obj,keyValueIterator,return )

 ::Dynamic FloatMap_obj::keys(){
            	HX_GC_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_335_keys)
            	HX_STACK_THIS(this)
HXLINE( 335)
HXDLIN( 335)		return  ::haxe::iterators::ArrayIterator_obj::__alloc( HX_CTX ,this->floatKeys->copy());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FloatMap_obj,keys,return )

 ::Dynamic FloatMap_obj::iterator(){
            	HX_GC_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_340_iterator)
            	HX_STACK_THIS(this)
HXLINE( 340)
HXDLIN( 340)		return  ::haxe::iterators::ArrayIterator_obj::__alloc( HX_CTX ,this->values->copy());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FloatMap_obj,iterator,return )

bool FloatMap_obj::remove( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_344_remove)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(key,"key")
HXLINE( 344)
HXLINE( 345)		HX_VARI( int,ind) = this->indexOf(key);
HXLINE( 347)		if ((ind > -1)) {
HXLINE( 349)			this->floatKeys->splice(ind,1);
HXLINE( 350)			this->values->splice(ind,1);
HXLINE( 351)			return true;
            		}
HXLINE( 354)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FloatMap_obj,remove,return )

void FloatMap_obj::set( ::Dynamic key, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_359_set)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(key,"key")
            	HX_STACK_ARG(value,"value")
HXLINE( 359)
HXDLIN( 359)		this->insertSorted(key,value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FloatMap_obj,set,(void))

int FloatMap_obj::indexOf( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_367_indexOf)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(key,"key")
HXLINE( 367)
HXLINE( 368)		HX_VARI( int,len) = this->floatKeys->get_length();
HXLINE( 369)		HX_VARI( int,startIndex) = 0;
HXLINE( 370)		HX_VARI( int,endIndex) = (len - 1);
HXLINE( 372)		if ((len == 0)) {
HXLINE( 374)			return -1;
            		}
HXLINE( 377)		HX_VARI( int,midIndex) = 0;
HXLINE( 379)		while((startIndex < endIndex)){
HXLINE( 381)			midIndex = ::Math_obj::floor((( (Float)((startIndex + endIndex)) ) / ( (Float)(2) )));
HXLINE( 383)			if (::hx::IsEq( this->floatKeys->__get(midIndex),key )) {
HXLINE( 385)				return midIndex;
            			}
            			else {
HXLINE( 387)				if (::hx::IsGreater( this->floatKeys->__get(midIndex),key )) {
HXLINE( 389)					endIndex = (midIndex - 1);
            				}
            				else {
HXLINE( 393)					startIndex = (midIndex + 1);
            				}
            			}
            		}
HXLINE( 397)		if (::hx::IsEq( this->floatKeys->__get(startIndex),key )) {
HXLINE( 399)			return startIndex;
            		}
            		else {
HXLINE( 403)			return -1;
            		}
HXLINE( 397)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FloatMap_obj,indexOf,return )

void FloatMap_obj::insertSorted( ::Dynamic key, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_412_insertSorted)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(key,"key")
            	HX_STACK_ARG(value,"value")
HXLINE( 412)
HXLINE( 413)		HX_VARI( int,len) = this->floatKeys->get_length();
HXLINE( 414)		HX_VARI( int,startIndex) = 0;
HXLINE( 415)		HX_VARI( int,endIndex) = (len - 1);
HXLINE( 417)		if ((len == 0)) {
HXLINE( 419)			this->floatKeys->push(key);
HXLINE( 420)			this->values->push(value);
HXLINE( 421)			return;
            		}
HXLINE( 424)		HX_VARI( int,midIndex) = 0;
HXLINE( 425)		while((startIndex < endIndex)){
HXLINE( 427)			midIndex = ::Math_obj::floor((( (Float)((startIndex + endIndex)) ) / ( (Float)(2) )));
HXLINE( 429)			if (::hx::IsEq( this->floatKeys->__get(midIndex),key )) {
HXLINE( 431)				this->values->set(midIndex,value);
HXLINE( 432)				return;
            			}
            			else {
HXLINE( 434)				if (::hx::IsGreater( this->floatKeys->__get(midIndex),key )) {
HXLINE( 436)					endIndex = (midIndex - 1);
            				}
            				else {
HXLINE( 440)					startIndex = (midIndex + 1);
            				}
            			}
            		}
HXLINE( 444)		if (::hx::IsGreater( this->floatKeys->__get(startIndex),key )) {
HXLINE( 446)			this->floatKeys->insert(startIndex,key);
HXLINE( 447)			this->values->insert(startIndex,value);
            		}
            		else {
HXLINE( 449)			if (::hx::IsLess( this->floatKeys->__get(startIndex),key )) {
HXLINE( 451)				this->floatKeys->insert((startIndex + 1),key);
HXLINE( 452)				this->values->insert((startIndex + 1),value);
            			}
            			else {
HXLINE( 456)				this->values->set(startIndex,value);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FloatMap_obj,insertSorted,(void))

::String FloatMap_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_462_toString)
            	HX_STACK_THIS(this)
HXLINE( 462)
HXDLIN( 462)		return this->values->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FloatMap_obj,toString,return )


::hx::ObjectPtr< FloatMap_obj > FloatMap_obj::__new() {
	::hx::ObjectPtr< FloatMap_obj > __this = new FloatMap_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FloatMap_obj > FloatMap_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FloatMap_obj *__this = (FloatMap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FloatMap_obj), true, "openfl.utils._Dictionary.FloatMap"));
	*(void **)__this = FloatMap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FloatMap_obj::FloatMap_obj()
{
}

void FloatMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FloatMap);
	HX_MARK_MEMBER_NAME(floatKeys,"floatKeys");
	HX_MARK_MEMBER_NAME(values,"values");
	HX_MARK_END_CLASS();
}

void FloatMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(floatKeys,"floatKeys");
	HX_VISIT_MEMBER_NAME(values,"values");
}

::hx::Val FloatMap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return ::hx::Val( copy_dyn() ); }
		if (HX_FIELD_EQ(inName,"keys") ) { return ::hx::Val( keys_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"values") ) { return ::hx::Val( values ); }
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indexOf") ) { return ::hx::Val( indexOf_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return ::hx::Val( iterator_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"floatKeys") ) { return ::hx::Val( floatKeys ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"insertSorted") ) { return ::hx::Val( insertSorted_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"keyValueIterator") ) { return ::hx::Val( keyValueIterator_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FloatMap_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"values") ) { values=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"floatKeys") ) { floatKeys=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FloatMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("floatKeys",b0,d1,3f,fa));
	outFields->push(HX_("values",e2,03,b7,4f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FloatMap_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(FloatMap_obj,floatKeys),HX_("floatKeys",b0,d1,3f,fa)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(FloatMap_obj,values),HX_("values",e2,03,b7,4f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FloatMap_obj_sStaticStorageInfo = 0;
#endif

static ::String FloatMap_obj_sMemberFields[] = {
	HX_("floatKeys",b0,d1,3f,fa),
	HX_("values",e2,03,b7,4f),
	HX_("clear",8d,71,5b,48),
	HX_("copy",b5,bb,c4,41),
	HX_("exists",dc,1d,e0,bf),
	HX_("get",96,80,4e,00),
	HX_("keyValueIterator",60,cd,ee,4a),
	HX_("keys",f4,e1,06,47),
	HX_("iterator",ee,49,9a,93),
	HX_("remove",44,9c,88,04),
	HX_("set",a2,9b,57,00),
	HX_("indexOf",c9,48,bf,e0),
	HX_("insertSorted",56,fb,c4,a6),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class FloatMap_obj::__mClass;

void FloatMap_obj::__register()
{
	FloatMap_obj _hx_dummy;
	FloatMap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.utils._Dictionary.FloatMap",b4,9e,0f,de);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FloatMap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FloatMap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FloatMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FloatMap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FloatMap_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ea32ed7fa92041fa_286_boot)
HXDLIN( 286)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace utils
} // end namespace _Dictionary
