#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5955daa7b9049940_12_new,"flixel.util.FlxPool","new",0x022eb226,"flixel.util.FlxPool.new","flixel/util/FlxPool.hx",12,0xdd4de86a)
HX_LOCAL_STACK_FRAME(_hx_pos_5955daa7b9049940_31_get,"flixel.util.FlxPool","get",0x0229625c,"flixel.util.FlxPool.get","flixel/util/FlxPool.hx",31,0xdd4de86a)
HX_LOCAL_STACK_FRAME(_hx_pos_5955daa7b9049940_42_put,"flixel.util.FlxPool","put",0x02304495,"flixel.util.FlxPool.put","flixel/util/FlxPool.hx",42,0xdd4de86a)
HX_LOCAL_STACK_FRAME(_hx_pos_5955daa7b9049940_56_putUnsafe,"flixel.util.FlxPool","putUnsafe",0x4c705a9b,"flixel.util.FlxPool.putUnsafe","flixel/util/FlxPool.hx",56,0xdd4de86a)
HX_LOCAL_STACK_FRAME(_hx_pos_5955daa7b9049940_65_preAllocate,"flixel.util.FlxPool","preAllocate",0x662e61c6,"flixel.util.FlxPool.preAllocate","flixel/util/FlxPool.hx",65,0xdd4de86a)
HX_LOCAL_STACK_FRAME(_hx_pos_5955daa7b9049940_72_clear,"flixel.util.FlxPool","clear",0xa006d0d3,"flixel.util.FlxPool.clear","flixel/util/FlxPool.hx",72,0xdd4de86a)
HX_LOCAL_STACK_FRAME(_hx_pos_5955daa7b9049940_81_get_length,"flixel.util.FlxPool","get_length",0x704687a9,"flixel.util.FlxPool.get_length","flixel/util/FlxPool.hx",81,0xdd4de86a)
namespace flixel{
namespace util{

void FlxPool_obj::__construct(::hx::Class classObj){
            	HX_STACKFRAME(&_hx_pos_5955daa7b9049940_12_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(classObj,"classObj")
HXLINE(  12)
HXLINE(  23)		this->_count = 0;
HXLINE(  16)		this->_pool = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  27)		this->_class = classObj;
            	}

Dynamic FlxPool_obj::__CreateEmpty() { return new FlxPool_obj; }

void *FlxPool_obj::_hx_vtable = 0;

Dynamic FlxPool_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxPool_obj > _hx_result = new FlxPool_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxPool_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x032e26f0;
}

static ::flixel::util::IFlxPool_obj _hx_flixel_util_FlxPool__hx_flixel_util_IFlxPool= {
	( void (::hx::Object::*)(int))&::flixel::util::FlxPool_obj::preAllocate,
	( ::cpp::VirtualArray (::hx::Object::*)())&::flixel::util::FlxPool_obj::clear,
};

void *FlxPool_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x5a90a383: return &_hx_flixel_util_FlxPool__hx_flixel_util_IFlxPool;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::Dynamic FlxPool_obj::get(){
            	HX_STACKFRAME(&_hx_pos_5955daa7b9049940_31_get)
            	HX_STACK_THIS(this)
HXLINE(  31)
HXLINE(  32)		if ((this->_count == 0)) {
HXLINE(  34)			return ::Type_obj::createInstance(this->_class,::cpp::VirtualArray_obj::__new(0));
            		}
HXLINE(  36)		return this->_pool->__get(--this->_count);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPool_obj,get,return )

void FlxPool_obj::put( ::Dynamic obj){
            	HX_STACKFRAME(&_hx_pos_5955daa7b9049940_42_put)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(obj,"obj")
HXLINE(  42)
HXDLIN(  42)		if (::hx::IsNotNull( obj )) {
HXLINE(  44)			HX_VARI( int,i) = this->_pool->indexOf(obj,null());
HXLINE(  46)			bool _hx_tmp;
HXDLIN(  46)			if ((i != -1)) {
HXLINE(  46)				_hx_tmp = (i >= this->_count);
            			}
            			else {
HXLINE(  46)				_hx_tmp = true;
            			}
HXDLIN(  46)			if (_hx_tmp) {
HXLINE(  48)				::flixel::util::IFlxDestroyable_obj::destroy(obj);
HXLINE(  49)				this->_pool->set(this->_count++,obj);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPool_obj,put,(void))

void FlxPool_obj::putUnsafe( ::Dynamic obj){
            	HX_STACKFRAME(&_hx_pos_5955daa7b9049940_56_putUnsafe)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(obj,"obj")
HXLINE(  56)
HXDLIN(  56)		if (::hx::IsNotNull( obj )) {
HXLINE(  58)			::flixel::util::IFlxDestroyable_obj::destroy(obj);
HXLINE(  59)			this->_pool->set(this->_count++,obj);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPool_obj,putUnsafe,(void))

void FlxPool_obj::preAllocate(int numObjects){
            	HX_STACKFRAME(&_hx_pos_5955daa7b9049940_65_preAllocate)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(numObjects,"numObjects")
HXLINE(  65)
HXDLIN(  65)		while(true){
HXDLIN(  65)			numObjects = (numObjects - 1);
HXDLIN(  65)			if (!(((numObjects + 1) > 0))) {
HXDLIN(  65)				goto _hx_goto_4;
            			}
HXLINE(  67)			this->_pool->set(this->_count++,::Type_obj::createInstance(this->_class,::cpp::VirtualArray_obj::__new(0)));
            		}
            		_hx_goto_4:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPool_obj,preAllocate,(void))

::cpp::VirtualArray FlxPool_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_5955daa7b9049940_72_clear)
            	HX_STACK_THIS(this)
HXLINE(  72)
HXLINE(  73)		this->_count = 0;
HXLINE(  74)		HX_VARI( ::cpp::VirtualArray,oldPool) = this->_pool;
HXLINE(  75)		this->_pool = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  76)		return oldPool;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPool_obj,clear,return )

int FlxPool_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_5955daa7b9049940_81_get_length)
            	HX_STACK_THIS(this)
HXLINE(  81)
HXDLIN(  81)		return this->_count;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPool_obj,get_length,return )


::hx::ObjectPtr< FlxPool_obj > FlxPool_obj::__new(::hx::Class classObj) {
	::hx::ObjectPtr< FlxPool_obj > __this = new FlxPool_obj();
	__this->__construct(classObj);
	return __this;
}

::hx::ObjectPtr< FlxPool_obj > FlxPool_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Class classObj) {
	FlxPool_obj *__this = (FlxPool_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxPool_obj), true, "flixel.util.FlxPool"));
	*(void **)__this = FlxPool_obj::_hx_vtable;
	__this->__construct(classObj);
	return __this;
}

FlxPool_obj::FlxPool_obj()
{
}

void FlxPool_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxPool);
	HX_MARK_MEMBER_NAME(_pool,"_pool");
	HX_MARK_MEMBER_NAME(_class,"_class");
	HX_MARK_MEMBER_NAME(_count,"_count");
	HX_MARK_END_CLASS();
}

void FlxPool_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_pool,"_pool");
	HX_VISIT_MEMBER_NAME(_class,"_class");
	HX_VISIT_MEMBER_NAME(_count,"_count");
}

::hx::Val FlxPool_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"put") ) { return ::hx::Val( put_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { return ::hx::Val( _pool ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_length() ); }
		if (HX_FIELD_EQ(inName,"_class") ) { return ::hx::Val( _class ); }
		if (HX_FIELD_EQ(inName,"_count") ) { return ::hx::Val( _count ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"putUnsafe") ) { return ::hx::Val( putUnsafe_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return ::hx::Val( get_length_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"preAllocate") ) { return ::hx::Val( preAllocate_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxPool_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_class") ) { _class=inValue.Cast< ::hx::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_count") ) { _count=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxPool_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("_pool",bb,9c,6d,fd));
	outFields->push(HX_("_class",79,bf,3f,44));
	outFields->push(HX_("_count",10,8c,4a,46));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxPool_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(FlxPool_obj,_pool),HX_("_pool",bb,9c,6d,fd)},
	{::hx::fsObject /* ::hx::Class */ ,(int)offsetof(FlxPool_obj,_class),HX_("_class",79,bf,3f,44)},
	{::hx::fsInt,(int)offsetof(FlxPool_obj,_count),HX_("_count",10,8c,4a,46)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxPool_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxPool_obj_sMemberFields[] = {
	HX_("_pool",bb,9c,6d,fd),
	HX_("_class",79,bf,3f,44),
	HX_("_count",10,8c,4a,46),
	HX_("get",96,80,4e,00),
	HX_("put",cf,62,55,00),
	HX_("putUnsafe",55,e0,1c,e4),
	HX_("preAllocate",00,4a,53,a6),
	HX_("clear",8d,71,5b,48),
	HX_("get_length",af,04,8f,8f),
	::String(null()) };

::hx::Class FlxPool_obj::__mClass;

void FlxPool_obj::__register()
{
	FlxPool_obj _hx_dummy;
	FlxPool_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util.FlxPool",34,67,5d,ba);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxPool_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxPool_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxPool_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxPool_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
