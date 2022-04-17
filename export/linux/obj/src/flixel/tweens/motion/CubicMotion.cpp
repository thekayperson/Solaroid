#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTweenManager
#include <flixel/tweens/FlxTweenManager.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CubicMotion
#include <flixel/tweens/motion/CubicMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fcae3222e31e2270_6_new,"flixel.tweens.motion.CubicMotion","new",0x5990902e,"flixel.tweens.motion.CubicMotion.new","flixel/tweens/motion/CubicMotion.hx",6,0x44d248a3)
HX_LOCAL_STACK_FRAME(_hx_pos_fcae3222e31e2270_34_setMotion,"flixel.tweens.motion.CubicMotion","setMotion",0x132089c6,"flixel.tweens.motion.CubicMotion.setMotion","flixel/tweens/motion/CubicMotion.hx",34,0x44d248a3)
HX_LOCAL_STACK_FRAME(_hx_pos_fcae3222e31e2270_49_update,"flixel.tweens.motion.CubicMotion","update",0x63341afb,"flixel.tweens.motion.CubicMotion.update","flixel/tweens/motion/CubicMotion.hx",49,0x44d248a3)
namespace flixel{
namespace tweens{
namespace motion{

void CubicMotion_obj::__construct( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager){
            	HX_STACKFRAME(&_hx_pos_fcae3222e31e2270_6_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Options,"Options")
            	HX_STACK_ARG(manager,"manager")
HXLINE(   6)
HXLINE(  18)		this->_tt = ((Float)0);
HXLINE(  17)		this->_ttt = ((Float)0);
HXLINE(  16)		this->_bY = ((Float)0);
HXLINE(  15)		this->_bX = ((Float)0);
HXLINE(  14)		this->_aY = ((Float)0);
HXLINE(  13)		this->_aX = ((Float)0);
HXLINE(  12)		this->_toY = ((Float)0);
HXLINE(  11)		this->_toX = ((Float)0);
HXLINE(  10)		this->_fromY = ((Float)0);
HXLINE(   9)		this->_fromX = ((Float)0);
HXLINE(   6)		super::__construct(Options,manager);
            	}

Dynamic CubicMotion_obj::__CreateEmpty() { return new CubicMotion_obj; }

void *CubicMotion_obj::_hx_vtable = 0;

Dynamic CubicMotion_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CubicMotion_obj > _hx_result = new CubicMotion_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool CubicMotion_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x21dceb90) {
		if (inClassId<=(int)0x104846c5) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x104846c5;
		} else {
			return inClassId==(int)0x21dceb90;
		}
	} else {
		return inClassId==(int)0x648124a2;
	}
}

 ::flixel::tweens::motion::CubicMotion CubicMotion_obj::setMotion(Float fromX,Float fromY,Float aX,Float aY,Float bX,Float bY,Float toX,Float toY,Float duration){
            	HX_STACKFRAME(&_hx_pos_fcae3222e31e2270_34_setMotion)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(fromX,"fromX")
            	HX_STACK_ARG(fromY,"fromY")
            	HX_STACK_ARG(aX,"aX")
            	HX_STACK_ARG(aY,"aY")
            	HX_STACK_ARG(bX,"bX")
            	HX_STACK_ARG(bY,"bY")
            	HX_STACK_ARG(toX,"toX")
            	HX_STACK_ARG(toY,"toY")
            	HX_STACK_ARG(duration,"duration")
HXLINE(  34)
HXLINE(  35)		this->x = (this->_fromX = fromX);
HXLINE(  36)		this->y = (this->_fromY = fromY);
HXLINE(  37)		this->_aX = aX;
HXLINE(  38)		this->_aY = aY;
HXLINE(  39)		this->_bX = bX;
HXLINE(  40)		this->_bY = bY;
HXLINE(  41)		this->_toX = toX;
HXLINE(  42)		this->_toY = toY;
HXLINE(  43)		this->duration = duration;
HXLINE(  44)		this->start();
HXLINE(  45)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC9(CubicMotion_obj,setMotion,return )

void CubicMotion_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_fcae3222e31e2270_49_update)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(elapsed,"elapsed")
HXLINE(  49)
HXLINE(  50)		this->super::update(elapsed);
HXLINE(  51)		this->x = ((((((this->scale * this->scale) * this->scale) * ((this->_toX + (( (Float)(3) ) * (this->_aX - this->_bX))) - this->_fromX)) + (((( (Float)(3) ) * this->scale) * this->scale) * ((this->_fromX - (( (Float)(2) ) * this->_aX)) + this->_bX))) + ((( (Float)(3) ) * this->scale) * (this->_aX - this->_fromX))) + this->_fromX);
HXLINE(  55)		this->y = ((((((this->scale * this->scale) * this->scale) * ((this->_toY + (( (Float)(3) ) * (this->_aY - this->_bY))) - this->_fromY)) + (((( (Float)(3) ) * this->scale) * this->scale) * ((this->_fromY - (( (Float)(2) ) * this->_aY)) + this->_bY))) + ((( (Float)(3) ) * this->scale) * (this->_aY - this->_fromY))) + this->_fromY);
HXLINE(  59)		if (this->finished) {
HXLINE(  61)			this->postUpdate();
            		}
            	}



::hx::ObjectPtr< CubicMotion_obj > CubicMotion_obj::__new( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager) {
	::hx::ObjectPtr< CubicMotion_obj > __this = new CubicMotion_obj();
	__this->__construct(Options,manager);
	return __this;
}

::hx::ObjectPtr< CubicMotion_obj > CubicMotion_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager) {
	CubicMotion_obj *__this = (CubicMotion_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CubicMotion_obj), true, "flixel.tweens.motion.CubicMotion"));
	*(void **)__this = CubicMotion_obj::_hx_vtable;
	__this->__construct(Options,manager);
	return __this;
}

CubicMotion_obj::CubicMotion_obj()
{
}

::hx::Val CubicMotion_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_aX") ) { return ::hx::Val( _aX ); }
		if (HX_FIELD_EQ(inName,"_aY") ) { return ::hx::Val( _aY ); }
		if (HX_FIELD_EQ(inName,"_bX") ) { return ::hx::Val( _bX ); }
		if (HX_FIELD_EQ(inName,"_bY") ) { return ::hx::Val( _bY ); }
		if (HX_FIELD_EQ(inName,"_tt") ) { return ::hx::Val( _tt ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_toX") ) { return ::hx::Val( _toX ); }
		if (HX_FIELD_EQ(inName,"_toY") ) { return ::hx::Val( _toY ); }
		if (HX_FIELD_EQ(inName,"_ttt") ) { return ::hx::Val( _ttt ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_fromX") ) { return ::hx::Val( _fromX ); }
		if (HX_FIELD_EQ(inName,"_fromY") ) { return ::hx::Val( _fromY ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setMotion") ) { return ::hx::Val( setMotion_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CubicMotion_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_aX") ) { _aX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_aY") ) { _aY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bX") ) { _bX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bY") ) { _bY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tt") ) { _tt=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_toX") ) { _toX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_toY") ) { _toY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ttt") ) { _ttt=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_fromX") ) { _fromX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fromY") ) { _fromY=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CubicMotion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_fromX",ef,5e,75,02));
	outFields->push(HX_("_fromY",f0,5e,75,02));
	outFields->push(HX_("_toX",7e,ab,23,3f));
	outFields->push(HX_("_toY",7f,ab,23,3f));
	outFields->push(HX_("_aX",f6,6a,48,00));
	outFields->push(HX_("_aY",f7,6a,48,00));
	outFields->push(HX_("_bX",d5,6b,48,00));
	outFields->push(HX_("_bY",d6,6b,48,00));
	outFields->push(HX_("_ttt",f5,af,23,3f));
	outFields->push(HX_("_tt",9f,7b,48,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CubicMotion_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(CubicMotion_obj,_fromX),HX_("_fromX",ef,5e,75,02)},
	{::hx::fsFloat,(int)offsetof(CubicMotion_obj,_fromY),HX_("_fromY",f0,5e,75,02)},
	{::hx::fsFloat,(int)offsetof(CubicMotion_obj,_toX),HX_("_toX",7e,ab,23,3f)},
	{::hx::fsFloat,(int)offsetof(CubicMotion_obj,_toY),HX_("_toY",7f,ab,23,3f)},
	{::hx::fsFloat,(int)offsetof(CubicMotion_obj,_aX),HX_("_aX",f6,6a,48,00)},
	{::hx::fsFloat,(int)offsetof(CubicMotion_obj,_aY),HX_("_aY",f7,6a,48,00)},
	{::hx::fsFloat,(int)offsetof(CubicMotion_obj,_bX),HX_("_bX",d5,6b,48,00)},
	{::hx::fsFloat,(int)offsetof(CubicMotion_obj,_bY),HX_("_bY",d6,6b,48,00)},
	{::hx::fsFloat,(int)offsetof(CubicMotion_obj,_ttt),HX_("_ttt",f5,af,23,3f)},
	{::hx::fsFloat,(int)offsetof(CubicMotion_obj,_tt),HX_("_tt",9f,7b,48,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CubicMotion_obj_sStaticStorageInfo = 0;
#endif

static ::String CubicMotion_obj_sMemberFields[] = {
	HX_("_fromX",ef,5e,75,02),
	HX_("_fromY",f0,5e,75,02),
	HX_("_toX",7e,ab,23,3f),
	HX_("_toY",7f,ab,23,3f),
	HX_("_aX",f6,6a,48,00),
	HX_("_aY",f7,6a,48,00),
	HX_("_bX",d5,6b,48,00),
	HX_("_bY",d6,6b,48,00),
	HX_("_ttt",f5,af,23,3f),
	HX_("_tt",9f,7b,48,00),
	HX_("setMotion",78,fb,04,2b),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class CubicMotion_obj::__mClass;

void CubicMotion_obj::__register()
{
	CubicMotion_obj _hx_dummy;
	CubicMotion_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.tweens.motion.CubicMotion",3c,a1,e5,54);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CubicMotion_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CubicMotion_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CubicMotion_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CubicMotion_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace tweens
} // end namespace motion
