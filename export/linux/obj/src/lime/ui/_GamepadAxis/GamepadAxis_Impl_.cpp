#include <hxcpp.h>

#ifndef INCLUDED_lime_ui__GamepadAxis_GamepadAxis_Impl_
#include <lime/ui/_GamepadAxis/GamepadAxis_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e8365a7f99c92ace_14_toString,"lime.ui._GamepadAxis.GamepadAxis_Impl_","toString",0x829ca022,"lime.ui._GamepadAxis.GamepadAxis_Impl_.toString","lime/ui/GamepadAxis.hx",14,0x01182a1d)
HX_LOCAL_STACK_FRAME(_hx_pos_e8365a7f99c92ace_5_boot,"lime.ui._GamepadAxis.GamepadAxis_Impl_","boot",0xad22e0a8,"lime.ui._GamepadAxis.GamepadAxis_Impl_.boot","lime/ui/GamepadAxis.hx",5,0x01182a1d)
HX_LOCAL_STACK_FRAME(_hx_pos_e8365a7f99c92ace_6_boot,"lime.ui._GamepadAxis.GamepadAxis_Impl_","boot",0xad22e0a8,"lime.ui._GamepadAxis.GamepadAxis_Impl_.boot","lime/ui/GamepadAxis.hx",6,0x01182a1d)
HX_LOCAL_STACK_FRAME(_hx_pos_e8365a7f99c92ace_7_boot,"lime.ui._GamepadAxis.GamepadAxis_Impl_","boot",0xad22e0a8,"lime.ui._GamepadAxis.GamepadAxis_Impl_.boot","lime/ui/GamepadAxis.hx",7,0x01182a1d)
HX_LOCAL_STACK_FRAME(_hx_pos_e8365a7f99c92ace_8_boot,"lime.ui._GamepadAxis.GamepadAxis_Impl_","boot",0xad22e0a8,"lime.ui._GamepadAxis.GamepadAxis_Impl_.boot","lime/ui/GamepadAxis.hx",8,0x01182a1d)
HX_LOCAL_STACK_FRAME(_hx_pos_e8365a7f99c92ace_9_boot,"lime.ui._GamepadAxis.GamepadAxis_Impl_","boot",0xad22e0a8,"lime.ui._GamepadAxis.GamepadAxis_Impl_.boot","lime/ui/GamepadAxis.hx",9,0x01182a1d)
HX_LOCAL_STACK_FRAME(_hx_pos_e8365a7f99c92ace_10_boot,"lime.ui._GamepadAxis.GamepadAxis_Impl_","boot",0xad22e0a8,"lime.ui._GamepadAxis.GamepadAxis_Impl_.boot","lime/ui/GamepadAxis.hx",10,0x01182a1d)
namespace lime{
namespace ui{
namespace _GamepadAxis{

void GamepadAxis_Impl__obj::__construct() { }

Dynamic GamepadAxis_Impl__obj::__CreateEmpty() { return new GamepadAxis_Impl__obj; }

void *GamepadAxis_Impl__obj::_hx_vtable = 0;

Dynamic GamepadAxis_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GamepadAxis_Impl__obj > _hx_result = new GamepadAxis_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GamepadAxis_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3d90a2f6;
}

int GamepadAxis_Impl__obj::LEFT_X;

int GamepadAxis_Impl__obj::LEFT_Y;

int GamepadAxis_Impl__obj::RIGHT_X;

int GamepadAxis_Impl__obj::RIGHT_Y;

int GamepadAxis_Impl__obj::TRIGGER_LEFT;

int GamepadAxis_Impl__obj::TRIGGER_RIGHT;

::String GamepadAxis_Impl__obj::toString(int this1){
            	HX_STACKFRAME(&_hx_pos_e8365a7f99c92ace_14_toString)
            	HX_STACK_ARG(this1,"this1")
HXLINE(  14)
HXDLIN(  14)		switch((int)(this1)){
            			case (int)0: {
HXLINE(  16)				return HX_("LEFT_X",e0,72,4a,4c);
            			}
            			break;
            			case (int)1: {
HXLINE(  17)				return HX_("LEFT_Y",e1,72,4a,4c);
            			}
            			break;
            			case (int)2: {
HXLINE(  18)				return HX_("RIGHT_X",d5,fd,37,93);
            			}
            			break;
            			case (int)3: {
HXLINE(  19)				return HX_("RIGHT_Y",d6,fd,37,93);
            			}
            			break;
            			case (int)4: {
HXLINE(  20)				return HX_("TRIGGER_LEFT",ce,cb,4a,f1);
            			}
            			break;
            			case (int)5: {
HXLINE(  21)				return HX_("TRIGGER_RIGHT",15,96,34,a7);
            			}
            			break;
            			default:{
HXLINE(  22)				return ((HX_("UNKNOWN (",f2,41,8b,8c) + this1) + HX_(")",29,00,00,00));
            			}
            		}
HXLINE(  14)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GamepadAxis_Impl__obj,toString,return )


GamepadAxis_Impl__obj::GamepadAxis_Impl__obj()
{
}

bool GamepadAxis_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GamepadAxis_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo GamepadAxis_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &GamepadAxis_Impl__obj::LEFT_X,HX_("LEFT_X",e0,72,4a,4c)},
	{::hx::fsInt,(void *) &GamepadAxis_Impl__obj::LEFT_Y,HX_("LEFT_Y",e1,72,4a,4c)},
	{::hx::fsInt,(void *) &GamepadAxis_Impl__obj::RIGHT_X,HX_("RIGHT_X",d5,fd,37,93)},
	{::hx::fsInt,(void *) &GamepadAxis_Impl__obj::RIGHT_Y,HX_("RIGHT_Y",d6,fd,37,93)},
	{::hx::fsInt,(void *) &GamepadAxis_Impl__obj::TRIGGER_LEFT,HX_("TRIGGER_LEFT",ce,cb,4a,f1)},
	{::hx::fsInt,(void *) &GamepadAxis_Impl__obj::TRIGGER_RIGHT,HX_("TRIGGER_RIGHT",15,96,34,a7)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void GamepadAxis_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GamepadAxis_Impl__obj::LEFT_X,"LEFT_X");
	HX_MARK_MEMBER_NAME(GamepadAxis_Impl__obj::LEFT_Y,"LEFT_Y");
	HX_MARK_MEMBER_NAME(GamepadAxis_Impl__obj::RIGHT_X,"RIGHT_X");
	HX_MARK_MEMBER_NAME(GamepadAxis_Impl__obj::RIGHT_Y,"RIGHT_Y");
	HX_MARK_MEMBER_NAME(GamepadAxis_Impl__obj::TRIGGER_LEFT,"TRIGGER_LEFT");
	HX_MARK_MEMBER_NAME(GamepadAxis_Impl__obj::TRIGGER_RIGHT,"TRIGGER_RIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GamepadAxis_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GamepadAxis_Impl__obj::LEFT_X,"LEFT_X");
	HX_VISIT_MEMBER_NAME(GamepadAxis_Impl__obj::LEFT_Y,"LEFT_Y");
	HX_VISIT_MEMBER_NAME(GamepadAxis_Impl__obj::RIGHT_X,"RIGHT_X");
	HX_VISIT_MEMBER_NAME(GamepadAxis_Impl__obj::RIGHT_Y,"RIGHT_Y");
	HX_VISIT_MEMBER_NAME(GamepadAxis_Impl__obj::TRIGGER_LEFT,"TRIGGER_LEFT");
	HX_VISIT_MEMBER_NAME(GamepadAxis_Impl__obj::TRIGGER_RIGHT,"TRIGGER_RIGHT");
};

#endif

::hx::Class GamepadAxis_Impl__obj::__mClass;

static ::String GamepadAxis_Impl__obj_sStaticFields[] = {
	HX_("LEFT_X",e0,72,4a,4c),
	HX_("LEFT_Y",e1,72,4a,4c),
	HX_("RIGHT_X",d5,fd,37,93),
	HX_("RIGHT_Y",d6,fd,37,93),
	HX_("TRIGGER_LEFT",ce,cb,4a,f1),
	HX_("TRIGGER_RIGHT",15,96,34,a7),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void GamepadAxis_Impl__obj::__register()
{
	GamepadAxis_Impl__obj _hx_dummy;
	GamepadAxis_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.ui._GamepadAxis.GamepadAxis_Impl_",b8,57,b6,1a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GamepadAxis_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GamepadAxis_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GamepadAxis_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GamepadAxis_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GamepadAxis_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GamepadAxis_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GamepadAxis_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GamepadAxis_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e8365a7f99c92ace_5_boot)
HXDLIN(   5)		LEFT_X = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e8365a7f99c92ace_6_boot)
HXDLIN(   6)		LEFT_Y = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e8365a7f99c92ace_7_boot)
HXDLIN(   7)		RIGHT_X = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e8365a7f99c92ace_8_boot)
HXDLIN(   8)		RIGHT_Y = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e8365a7f99c92ace_9_boot)
HXDLIN(   9)		TRIGGER_LEFT = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e8365a7f99c92ace_10_boot)
HXDLIN(  10)		TRIGGER_RIGHT = 5;
            	}
}

} // end namespace lime
} // end namespace ui
} // end namespace _GamepadAxis
