#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_GameInputEvent
#include <openfl/events/GameInputEvent.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInputDevice
#include <openfl/ui/GameInputDevice.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a9944c00dfbe9396_40_new,"openfl.events.GameInputEvent","new",0x8065662b,"openfl.events.GameInputEvent.new","openfl/events/GameInputEvent.hx",40,0x5318f185)
HX_LOCAL_STACK_FRAME(_hx_pos_a9944c00dfbe9396_47_clone,"openfl.events.GameInputEvent","clone",0x205df1e8,"openfl.events.GameInputEvent.clone","openfl/events/GameInputEvent.hx",47,0x5318f185)
HX_LOCAL_STACK_FRAME(_hx_pos_a9944c00dfbe9396_57_toString,"openfl.events.GameInputEvent","toString",0x31f35b01,"openfl.events.GameInputEvent.toString","openfl/events/GameInputEvent.hx",57,0x5318f185)
static const ::String _hx_array_data_6a3e74b9_3[] = {
	HX_("type",ba,f2,08,4d),HX_("bubbles",67,bb,56,61),HX_("cancelable",14,a0,79,c4),HX_("device",96,dc,77,71),
};
HX_LOCAL_STACK_FRAME(_hx_pos_a9944c00dfbe9396_61___init,"openfl.events.GameInputEvent","__init",0x183b7945,"openfl.events.GameInputEvent.__init","openfl/events/GameInputEvent.hx",61,0x5318f185)
HX_LOCAL_STACK_FRAME(_hx_pos_a9944c00dfbe9396_19_boot,"openfl.events.GameInputEvent","boot",0xd06d0007,"openfl.events.GameInputEvent.boot","openfl/events/GameInputEvent.hx",19,0x5318f185)
HX_LOCAL_STACK_FRAME(_hx_pos_a9944c00dfbe9396_24_boot,"openfl.events.GameInputEvent","boot",0xd06d0007,"openfl.events.GameInputEvent.boot","openfl/events/GameInputEvent.hx",24,0x5318f185)
HX_LOCAL_STACK_FRAME(_hx_pos_a9944c00dfbe9396_29_boot,"openfl.events.GameInputEvent","boot",0xd06d0007,"openfl.events.GameInputEvent.boot","openfl/events/GameInputEvent.hx",29,0x5318f185)
namespace openfl{
namespace events{

void GameInputEvent_obj::__construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::openfl::ui::GameInputDevice device){
            		bool bubbles = __o_bubbles.Default(true);
            		bool cancelable = __o_cancelable.Default(false);
            	HX_STACKFRAME(&_hx_pos_a9944c00dfbe9396_40_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(bubbles,"bubbles")
            	HX_STACK_ARG(cancelable,"cancelable")
            	HX_STACK_ARG(device,"device")
HXLINE(  40)
HXLINE(  41)		super::__construct(type,bubbles,cancelable);
HXLINE(  43)		this->device = device;
            	}

Dynamic GameInputEvent_obj::__CreateEmpty() { return new GameInputEvent_obj; }

void *GameInputEvent_obj::_hx_vtable = 0;

Dynamic GameInputEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GameInputEvent_obj > _hx_result = new GameInputEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GameInputEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x7f176b4b;
	}
}

 ::openfl::events::Event GameInputEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_a9944c00dfbe9396_47_clone)
            	HX_STACK_THIS(this)
HXLINE(  47)
HXLINE(  48)		HX_VARI(  ::openfl::events::GameInputEvent,event) =  ::openfl::events::GameInputEvent_obj::__alloc( HX_CTX ,this->type,this->bubbles,this->cancelable,this->device);
HXLINE(  49)		event->target = this->target;
HXLINE(  50)		event->currentTarget = this->currentTarget;
HXLINE(  51)		event->eventPhase = this->eventPhase;
HXLINE(  52)		return event;
            	}


::String GameInputEvent_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_a9944c00dfbe9396_57_toString)
            	HX_STACK_THIS(this)
HXLINE(  57)
HXDLIN(  57)		return this->_hx___formatToString(HX_("GameInputEvent",62,3e,f4,2c),::Array_obj< ::String >::fromData( _hx_array_data_6a3e74b9_3,4));
            	}


void GameInputEvent_obj::_hx___init(){
            	HX_STACKFRAME(&_hx_pos_a9944c00dfbe9396_61___init)
            	HX_STACK_THIS(this)
HXLINE(  61)
HXLINE(  62)		this->super::_hx___init();
HXLINE(  63)		this->device = null();
            	}


::String GameInputEvent_obj::DEVICE_ADDED;

::String GameInputEvent_obj::DEVICE_REMOVED;

::String GameInputEvent_obj::DEVICE_UNUSABLE;


::hx::ObjectPtr< GameInputEvent_obj > GameInputEvent_obj::__new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::openfl::ui::GameInputDevice device) {
	::hx::ObjectPtr< GameInputEvent_obj > __this = new GameInputEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable,device);
	return __this;
}

::hx::ObjectPtr< GameInputEvent_obj > GameInputEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::openfl::ui::GameInputDevice device) {
	GameInputEvent_obj *__this = (GameInputEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GameInputEvent_obj), true, "openfl.events.GameInputEvent"));
	*(void **)__this = GameInputEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable,device);
	return __this;
}

GameInputEvent_obj::GameInputEvent_obj()
{
}

void GameInputEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameInputEvent);
	HX_MARK_MEMBER_NAME(device,"device");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameInputEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(device,"device");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GameInputEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { return ::hx::Val( device ); }
		if (HX_FIELD_EQ(inName,"__init") ) { return ::hx::Val( _hx___init_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GameInputEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { device=inValue.Cast<  ::openfl::ui::GameInputDevice >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameInputEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("device",96,dc,77,71));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GameInputEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::ui::GameInputDevice */ ,(int)offsetof(GameInputEvent_obj,device),HX_("device",96,dc,77,71)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo GameInputEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &GameInputEvent_obj::DEVICE_ADDED,HX_("DEVICE_ADDED",f7,70,3d,b6)},
	{::hx::fsString,(void *) &GameInputEvent_obj::DEVICE_REMOVED,HX_("DEVICE_REMOVED",97,5b,c2,33)},
	{::hx::fsString,(void *) &GameInputEvent_obj::DEVICE_UNUSABLE,HX_("DEVICE_UNUSABLE",1a,c6,b7,aa)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String GameInputEvent_obj_sMemberFields[] = {
	HX_("device",96,dc,77,71),
	HX_("clone",5d,13,63,48),
	HX_("toString",ac,d0,6e,38),
	HX_("__init",30,9e,b3,f4),
	::String(null()) };

static void GameInputEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameInputEvent_obj::DEVICE_ADDED,"DEVICE_ADDED");
	HX_MARK_MEMBER_NAME(GameInputEvent_obj::DEVICE_REMOVED,"DEVICE_REMOVED");
	HX_MARK_MEMBER_NAME(GameInputEvent_obj::DEVICE_UNUSABLE,"DEVICE_UNUSABLE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GameInputEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameInputEvent_obj::DEVICE_ADDED,"DEVICE_ADDED");
	HX_VISIT_MEMBER_NAME(GameInputEvent_obj::DEVICE_REMOVED,"DEVICE_REMOVED");
	HX_VISIT_MEMBER_NAME(GameInputEvent_obj::DEVICE_UNUSABLE,"DEVICE_UNUSABLE");
};

#endif

::hx::Class GameInputEvent_obj::__mClass;

static ::String GameInputEvent_obj_sStaticFields[] = {
	HX_("DEVICE_ADDED",f7,70,3d,b6),
	HX_("DEVICE_REMOVED",97,5b,c2,33),
	HX_("DEVICE_UNUSABLE",1a,c6,b7,aa),
	::String(null())
};

void GameInputEvent_obj::__register()
{
	GameInputEvent_obj _hx_dummy;
	GameInputEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.events.GameInputEvent",b9,74,3e,6a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GameInputEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GameInputEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GameInputEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GameInputEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GameInputEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameInputEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameInputEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GameInputEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a9944c00dfbe9396_19_boot)
HXDLIN(  19)		DEVICE_ADDED = HX_("deviceAdded",4a,08,84,0b);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9944c00dfbe9396_24_boot)
HXDLIN(  24)		DEVICE_REMOVED = HX_("deviceRemoved",aa,c9,5b,59);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a9944c00dfbe9396_29_boot)
HXDLIN(  29)		DEVICE_UNUSABLE = HX_("deviceUnusable",c7,a8,5e,6b);
            	}
}

} // end namespace openfl
} // end namespace events
