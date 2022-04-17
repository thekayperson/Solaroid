#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_openfl_text__internal_CacheMeasurement
#include <openfl/text/_internal/CacheMeasurement.h>
#endif
#ifndef INCLUDED_openfl_text__internal_GlyphPosition
#include <openfl/text/_internal/GlyphPosition.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dc9064273ab91ee7_18_new,"openfl.text._internal.CacheMeasurement","new",0x1a9e32c1,"openfl.text._internal.CacheMeasurement.new","openfl/text/_internal/CacheMeasurement.hx",18,0xf3426c0e)
HX_LOCAL_STACK_FRAME(_hx_pos_dc9064273ab91ee7_28_set,"openfl.text._internal.CacheMeasurement","set",0x1aa1fe03,"openfl.text._internal.CacheMeasurement.set","openfl/text/_internal/CacheMeasurement.hx",28,0xf3426c0e)
HX_LOCAL_STACK_FRAME(_hx_pos_dc9064273ab91ee7_32_get,"openfl.text._internal.CacheMeasurement","get",0x1a98e2f7,"openfl.text._internal.CacheMeasurement.get","openfl/text/_internal/CacheMeasurement.hx",32,0xf3426c0e)
HX_LOCAL_STACK_FRAME(_hx_pos_dc9064273ab91ee7_44___addCollision,"openfl.text._internal.CacheMeasurement","__addCollision",0x02c4b470,"openfl.text._internal.CacheMeasurement.__addCollision","openfl/text/_internal/CacheMeasurement.hx",44,0xf3426c0e)
HX_LOCAL_STACK_FRAME(_hx_pos_dc9064273ab91ee7_51_exists,"openfl.text._internal.CacheMeasurement","exists",0xb6dcae1b,"openfl.text._internal.CacheMeasurement.exists","openfl/text/_internal/CacheMeasurement.hx",51,0xf3426c0e)
HX_LOCAL_STACK_FRAME(_hx_pos_dc9064273ab91ee7_10_boot,"openfl.text._internal.CacheMeasurement","boot",0x27e736b1,"openfl.text._internal.CacheMeasurement.boot","openfl/text/_internal/CacheMeasurement.hx",10,0xf3426c0e)
namespace openfl{
namespace text{
namespace _internal{

void CacheMeasurement_obj::__construct(::String wordKey,::Array< ::Dynamic> positions){
            	HX_GC_STACKFRAME(&_hx_pos_dc9064273ab91ee7_18_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(wordKey,"wordKey")
            	HX_STACK_ARG(positions,"positions")
HXLINE(  18)
HXLINE(  20)		this->_hx___collisions = ::Array_obj< ::String >::__new(0);
HXLINE(  21)		this->_hx___wordMap =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  23)		this->set(wordKey,positions);
            	}

Dynamic CacheMeasurement_obj::__CreateEmpty() { return new CacheMeasurement_obj; }

void *CacheMeasurement_obj::_hx_vtable = 0;

Dynamic CacheMeasurement_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CacheMeasurement_obj > _hx_result = new CacheMeasurement_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool CacheMeasurement_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2d9a58f1;
}

void CacheMeasurement_obj::set(::String wordKey,::Array< ::Dynamic> positions){
            	HX_STACKFRAME(&_hx_pos_dc9064273ab91ee7_28_set)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(wordKey,"wordKey")
            	HX_STACK_ARG(positions,"positions")
HXLINE(  28)
HXDLIN(  28)		this->_hx___addCollision(wordKey,positions);
            	}


HX_DEFINE_DYNAMIC_FUNC2(CacheMeasurement_obj,set,(void))

::Array< ::Dynamic> CacheMeasurement_obj::get(::String wordKey){
            	HX_STACKFRAME(&_hx_pos_dc9064273ab91ee7_32_get)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(wordKey,"wordKey")
HXLINE(  32)
HXLINE(  34)		if ((this->_hx___collisions->length > 1)) {
HXLINE(  36)			 ::haxe::ds::IntMap _hx_tmp = this->_hx___wordMap;
HXDLIN(  36)			return ( (::Array< ::Dynamic>)(_hx_tmp->get(this->_hx___collisions->indexOf(wordKey,null()))) );
            		}
HXLINE(  38)		return ( (::Array< ::Dynamic>)(this->_hx___wordMap->get(0)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(CacheMeasurement_obj,get,return )

void CacheMeasurement_obj::_hx___addCollision(::String wordKey,::Array< ::Dynamic> positions){
            	HX_STACKFRAME(&_hx_pos_dc9064273ab91ee7_44___addCollision)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(wordKey,"wordKey")
            	HX_STACK_ARG(positions,"positions")
HXLINE(  44)
HXDLIN(  44)		if (!(this->exists(wordKey))) {
HXLINE(  46)			 ::haxe::ds::IntMap _hx_tmp = this->_hx___wordMap;
HXDLIN(  46)			_hx_tmp->set((this->_hx___collisions->push(wordKey) - 1),positions);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(CacheMeasurement_obj,_hx___addCollision,(void))

bool CacheMeasurement_obj::exists(::String wordKey){
            	HX_STACKFRAME(&_hx_pos_dc9064273ab91ee7_51_exists)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(wordKey,"wordKey")
HXLINE(  51)
HXLINE(  52)		if ((this->_hx___collisions->length == 0)) {
HXLINE(  54)			return false;
            		}
HXLINE(  56)		return (this->_hx___collisions->indexOf(wordKey,null()) > -1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CacheMeasurement_obj,exists,return )


::hx::ObjectPtr< CacheMeasurement_obj > CacheMeasurement_obj::__new(::String wordKey,::Array< ::Dynamic> positions) {
	::hx::ObjectPtr< CacheMeasurement_obj > __this = new CacheMeasurement_obj();
	__this->__construct(wordKey,positions);
	return __this;
}

::hx::ObjectPtr< CacheMeasurement_obj > CacheMeasurement_obj::__alloc(::hx::Ctx *_hx_ctx,::String wordKey,::Array< ::Dynamic> positions) {
	CacheMeasurement_obj *__this = (CacheMeasurement_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CacheMeasurement_obj), true, "openfl.text._internal.CacheMeasurement"));
	*(void **)__this = CacheMeasurement_obj::_hx_vtable;
	__this->__construct(wordKey,positions);
	return __this;
}

CacheMeasurement_obj::CacheMeasurement_obj()
{
}

void CacheMeasurement_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CacheMeasurement);
	HX_MARK_MEMBER_NAME(_hx___collisions,"__collisions");
	HX_MARK_MEMBER_NAME(_hx___wordMap,"__wordMap");
	HX_MARK_MEMBER_NAME(hash,"hash");
	HX_MARK_END_CLASS();
}

void CacheMeasurement_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___collisions,"__collisions");
	HX_VISIT_MEMBER_NAME(_hx___wordMap,"__wordMap");
	HX_VISIT_MEMBER_NAME(hash,"hash");
}

::hx::Val CacheMeasurement_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"hash") ) { return ::hx::Val( hash ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__wordMap") ) { return ::hx::Val( _hx___wordMap ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__collisions") ) { return ::hx::Val( _hx___collisions ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__addCollision") ) { return ::hx::Val( _hx___addCollision_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CacheMeasurement_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hash") ) { hash=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__wordMap") ) { _hx___wordMap=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__collisions") ) { _hx___collisions=inValue.Cast< ::Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CacheMeasurement_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("__collisions",e1,36,ac,30));
	outFields->push(HX_("__wordMap",d2,cb,67,1d));
	outFields->push(HX_("hash",ce,2f,08,45));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CacheMeasurement_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(CacheMeasurement_obj,_hx___collisions),HX_("__collisions",e1,36,ac,30)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(CacheMeasurement_obj,_hx___wordMap),HX_("__wordMap",d2,cb,67,1d)},
	{::hx::fsInt,(int)offsetof(CacheMeasurement_obj,hash),HX_("hash",ce,2f,08,45)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CacheMeasurement_obj_sStaticStorageInfo = 0;
#endif

static ::String CacheMeasurement_obj_sMemberFields[] = {
	HX_("__collisions",e1,36,ac,30),
	HX_("__wordMap",d2,cb,67,1d),
	HX_("hash",ce,2f,08,45),
	HX_("set",a2,9b,57,00),
	HX_("get",96,80,4e,00),
	HX_("__addCollision",31,4d,4f,fb),
	HX_("exists",dc,1d,e0,bf),
	::String(null()) };

::hx::Class CacheMeasurement_obj::__mClass;

void CacheMeasurement_obj::__register()
{
	CacheMeasurement_obj _hx_dummy;
	CacheMeasurement_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.text._internal.CacheMeasurement",4f,be,83,df);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CacheMeasurement_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CacheMeasurement_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CacheMeasurement_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CacheMeasurement_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CacheMeasurement_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_dc9064273ab91ee7_10_boot)
HXDLIN(  10)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace text
} // end namespace _internal
