#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInputControl
#include <openfl/ui/GameInputControl.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInputDevice
#include <openfl/ui/GameInputDevice.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ea5bdb6538331ec9_38_new,"openfl.ui.GameInputControl","new",0xeccd6093,"openfl.ui.GameInputControl.new","openfl/ui/GameInputControl.hx",38,0xb3fe7f9d)
namespace openfl{
namespace ui{

void GameInputControl_obj::__construct( ::openfl::ui::GameInputDevice device,::String id,Float minValue,Float maxValue,::hx::Null< Float >  __o_value){
            		Float value = __o_value.Default(0);
            	HX_STACKFRAME(&_hx_pos_ea5bdb6538331ec9_38_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(device,"device")
            	HX_STACK_ARG(id,"id")
            	HX_STACK_ARG(minValue,"minValue")
            	HX_STACK_ARG(maxValue,"maxValue")
            	HX_STACK_ARG(value,"value")
HXLINE(  38)
HXLINE(  39)		super::__construct(null());
HXLINE(  41)		this->device = device;
HXLINE(  42)		this->id = id;
HXLINE(  43)		this->minValue = minValue;
HXLINE(  44)		this->maxValue = maxValue;
HXLINE(  45)		this->value = value;
            	}

Dynamic GameInputControl_obj::__CreateEmpty() { return new GameInputControl_obj; }

void *GameInputControl_obj::_hx_vtable = 0;

Dynamic GameInputControl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GameInputControl_obj > _hx_result = new GameInputControl_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool GameInputControl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x7ecbb6c9;
	}
}


::hx::ObjectPtr< GameInputControl_obj > GameInputControl_obj::__new( ::openfl::ui::GameInputDevice device,::String id,Float minValue,Float maxValue,::hx::Null< Float >  __o_value) {
	::hx::ObjectPtr< GameInputControl_obj > __this = new GameInputControl_obj();
	__this->__construct(device,id,minValue,maxValue,__o_value);
	return __this;
}

::hx::ObjectPtr< GameInputControl_obj > GameInputControl_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::ui::GameInputDevice device,::String id,Float minValue,Float maxValue,::hx::Null< Float >  __o_value) {
	GameInputControl_obj *__this = (GameInputControl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GameInputControl_obj), true, "openfl.ui.GameInputControl"));
	*(void **)__this = GameInputControl_obj::_hx_vtable;
	__this->__construct(device,id,minValue,maxValue,__o_value);
	return __this;
}

GameInputControl_obj::GameInputControl_obj()
{
}

void GameInputControl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameInputControl);
	HX_MARK_MEMBER_NAME(device,"device");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(maxValue,"maxValue");
	HX_MARK_MEMBER_NAME(minValue,"minValue");
	HX_MARK_MEMBER_NAME(value,"value");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameInputControl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(device,"device");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(maxValue,"maxValue");
	HX_VISIT_MEMBER_NAME(minValue,"minValue");
	HX_VISIT_MEMBER_NAME(value,"value");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GameInputControl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return ::hx::Val( value ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { return ::hx::Val( device ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxValue") ) { return ::hx::Val( maxValue ); }
		if (HX_FIELD_EQ(inName,"minValue") ) { return ::hx::Val( minValue ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GameInputControl_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { device=inValue.Cast<  ::openfl::ui::GameInputDevice >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxValue") ) { maxValue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minValue") ) { minValue=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameInputControl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("device",96,dc,77,71));
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("maxValue",2d,d2,d5,db));
	outFields->push(HX_("minValue",7f,ec,ef,28));
	outFields->push(HX_("value",71,7f,b8,31));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GameInputControl_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::ui::GameInputDevice */ ,(int)offsetof(GameInputControl_obj,device),HX_("device",96,dc,77,71)},
	{::hx::fsString,(int)offsetof(GameInputControl_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsFloat,(int)offsetof(GameInputControl_obj,maxValue),HX_("maxValue",2d,d2,d5,db)},
	{::hx::fsFloat,(int)offsetof(GameInputControl_obj,minValue),HX_("minValue",7f,ec,ef,28)},
	{::hx::fsFloat,(int)offsetof(GameInputControl_obj,value),HX_("value",71,7f,b8,31)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GameInputControl_obj_sStaticStorageInfo = 0;
#endif

static ::String GameInputControl_obj_sMemberFields[] = {
	HX_("device",96,dc,77,71),
	HX_("id",db,5b,00,00),
	HX_("maxValue",2d,d2,d5,db),
	HX_("minValue",7f,ec,ef,28),
	HX_("value",71,7f,b8,31),
	::String(null()) };

::hx::Class GameInputControl_obj::__mClass;

void GameInputControl_obj::__register()
{
	GameInputControl_obj _hx_dummy;
	GameInputControl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.ui.GameInputControl",21,1b,af,78);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GameInputControl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GameInputControl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameInputControl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameInputControl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace ui
