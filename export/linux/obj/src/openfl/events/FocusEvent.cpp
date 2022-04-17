#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_FocusEvent
#include <openfl/events/FocusEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_919c1dfcca12e2f6_168_new,"openfl.events.FocusEvent","new",0xf00a0d8b,"openfl.events.FocusEvent.new","openfl/events/FocusEvent.hx",168,0xe559e625)
HX_LOCAL_STACK_FRAME(_hx_pos_919c1dfcca12e2f6_177_clone,"openfl.events.FocusEvent","clone",0x40033148,"openfl.events.FocusEvent.clone","openfl/events/FocusEvent.hx",177,0xe559e625)
HX_LOCAL_STACK_FRAME(_hx_pos_919c1dfcca12e2f6_187_toString,"openfl.events.FocusEvent","toString",0x8b53f7a1,"openfl.events.FocusEvent.toString","openfl/events/FocusEvent.hx",187,0xe559e625)
static const ::String _hx_array_data_ade3ec19_3[] = {
	HX_("type",ba,f2,08,4d),HX_("bubbles",67,bb,56,61),HX_("cancelable",14,a0,79,c4),HX_("relatedObject",0a,bf,cb,e8),HX_("shiftKey",3d,92,9f,99),HX_("keyCode",6c,22,9e,9b),
};
HX_LOCAL_STACK_FRAME(_hx_pos_919c1dfcca12e2f6_191___init,"openfl.events.FocusEvent","__init",0xa92dade5,"openfl.events.FocusEvent.__init","openfl/events/FocusEvent.hx",191,0xe559e625)
HX_LOCAL_STACK_FRAME(_hx_pos_919c1dfcca12e2f6_38_boot,"openfl.events.FocusEvent","boot",0x10dacca7,"openfl.events.FocusEvent.boot","openfl/events/FocusEvent.hx",38,0xe559e625)
HX_LOCAL_STACK_FRAME(_hx_pos_919c1dfcca12e2f6_63_boot,"openfl.events.FocusEvent","boot",0x10dacca7,"openfl.events.FocusEvent.boot","openfl/events/FocusEvent.hx",63,0xe559e625)
HX_LOCAL_STACK_FRAME(_hx_pos_919c1dfcca12e2f6_80_boot,"openfl.events.FocusEvent","boot",0x10dacca7,"openfl.events.FocusEvent.boot","openfl/events/FocusEvent.hx",80,0xe559e625)
HX_LOCAL_STACK_FRAME(_hx_pos_919c1dfcca12e2f6_97_boot,"openfl.events.FocusEvent","boot",0x10dacca7,"openfl.events.FocusEvent.boot","openfl/events/FocusEvent.hx",97,0xe559e625)
namespace openfl{
namespace events{

void FocusEvent_obj::__construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::openfl::display::InteractiveObject relatedObject,::hx::Null< bool >  __o_shiftKey,::hx::Null< int >  __o_keyCode){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            		bool shiftKey = __o_shiftKey.Default(false);
            		int keyCode = __o_keyCode.Default(0);
            	HX_STACKFRAME(&_hx_pos_919c1dfcca12e2f6_168_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(bubbles,"bubbles")
            	HX_STACK_ARG(cancelable,"cancelable")
            	HX_STACK_ARG(relatedObject,"relatedObject")
            	HX_STACK_ARG(shiftKey,"shiftKey")
            	HX_STACK_ARG(keyCode,"keyCode")
HXLINE( 168)
HXLINE( 169)		super::__construct(type,bubbles,cancelable);
HXLINE( 171)		this->keyCode = keyCode;
HXLINE( 172)		this->shiftKey = shiftKey;
HXLINE( 173)		this->relatedObject = relatedObject;
            	}

Dynamic FocusEvent_obj::__CreateEmpty() { return new FocusEvent_obj; }

void *FocusEvent_obj::_hx_vtable = 0;

Dynamic FocusEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FocusEvent_obj > _hx_result = new FocusEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool FocusEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x2575b1ab;
	}
}

 ::openfl::events::Event FocusEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_919c1dfcca12e2f6_177_clone)
            	HX_STACK_THIS(this)
HXLINE( 177)
HXLINE( 178)		HX_VARI(  ::openfl::events::FocusEvent,event) =  ::openfl::events::FocusEvent_obj::__alloc( HX_CTX ,this->type,this->bubbles,this->cancelable,this->relatedObject,this->shiftKey,this->keyCode);
HXLINE( 179)		event->target = this->target;
HXLINE( 180)		event->currentTarget = this->currentTarget;
HXLINE( 181)		event->eventPhase = this->eventPhase;
HXLINE( 182)		return event;
            	}


::String FocusEvent_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_919c1dfcca12e2f6_187_toString)
            	HX_STACK_THIS(this)
HXLINE( 187)
HXDLIN( 187)		return this->_hx___formatToString(HX_("FocusEvent",42,6d,d7,2e),::Array_obj< ::String >::fromData( _hx_array_data_ade3ec19_3,6));
            	}


void FocusEvent_obj::_hx___init(){
            	HX_STACKFRAME(&_hx_pos_919c1dfcca12e2f6_191___init)
            	HX_STACK_THIS(this)
HXLINE( 191)
HXLINE( 192)		this->super::_hx___init();
HXLINE( 193)		this->keyCode = 0;
HXLINE( 194)		this->shiftKey = false;
HXLINE( 195)		this->relatedObject = null();
            	}


::String FocusEvent_obj::FOCUS_IN;

::String FocusEvent_obj::FOCUS_OUT;

::String FocusEvent_obj::KEY_FOCUS_CHANGE;

::String FocusEvent_obj::MOUSE_FOCUS_CHANGE;


::hx::ObjectPtr< FocusEvent_obj > FocusEvent_obj::__new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::openfl::display::InteractiveObject relatedObject,::hx::Null< bool >  __o_shiftKey,::hx::Null< int >  __o_keyCode) {
	::hx::ObjectPtr< FocusEvent_obj > __this = new FocusEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable,relatedObject,__o_shiftKey,__o_keyCode);
	return __this;
}

::hx::ObjectPtr< FocusEvent_obj > FocusEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::openfl::display::InteractiveObject relatedObject,::hx::Null< bool >  __o_shiftKey,::hx::Null< int >  __o_keyCode) {
	FocusEvent_obj *__this = (FocusEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FocusEvent_obj), true, "openfl.events.FocusEvent"));
	*(void **)__this = FocusEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable,relatedObject,__o_shiftKey,__o_keyCode);
	return __this;
}

FocusEvent_obj::FocusEvent_obj()
{
}

void FocusEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FocusEvent);
	HX_MARK_MEMBER_NAME(keyCode,"keyCode");
	HX_MARK_MEMBER_NAME(relatedObject,"relatedObject");
	HX_MARK_MEMBER_NAME(shiftKey,"shiftKey");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FocusEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(keyCode,"keyCode");
	HX_VISIT_MEMBER_NAME(relatedObject,"relatedObject");
	HX_VISIT_MEMBER_NAME(shiftKey,"shiftKey");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FocusEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__init") ) { return ::hx::Val( _hx___init_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keyCode") ) { return ::hx::Val( keyCode ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shiftKey") ) { return ::hx::Val( shiftKey ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"relatedObject") ) { return ::hx::Val( relatedObject ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FocusEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"keyCode") ) { keyCode=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shiftKey") ) { shiftKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"relatedObject") ) { relatedObject=inValue.Cast<  ::openfl::display::InteractiveObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FocusEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("keyCode",6c,22,9e,9b));
	outFields->push(HX_("relatedObject",0a,bf,cb,e8));
	outFields->push(HX_("shiftKey",3d,92,9f,99));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FocusEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FocusEvent_obj,keyCode),HX_("keyCode",6c,22,9e,9b)},
	{::hx::fsObject /*  ::openfl::display::InteractiveObject */ ,(int)offsetof(FocusEvent_obj,relatedObject),HX_("relatedObject",0a,bf,cb,e8)},
	{::hx::fsBool,(int)offsetof(FocusEvent_obj,shiftKey),HX_("shiftKey",3d,92,9f,99)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FocusEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &FocusEvent_obj::FOCUS_IN,HX_("FOCUS_IN",4c,61,08,6b)},
	{::hx::fsString,(void *) &FocusEvent_obj::FOCUS_OUT,HX_("FOCUS_OUT",27,55,51,3c)},
	{::hx::fsString,(void *) &FocusEvent_obj::KEY_FOCUS_CHANGE,HX_("KEY_FOCUS_CHANGE",57,48,06,94)},
	{::hx::fsString,(void *) &FocusEvent_obj::MOUSE_FOCUS_CHANGE,HX_("MOUSE_FOCUS_CHANGE",11,c4,6c,3d)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FocusEvent_obj_sMemberFields[] = {
	HX_("keyCode",6c,22,9e,9b),
	HX_("relatedObject",0a,bf,cb,e8),
	HX_("shiftKey",3d,92,9f,99),
	HX_("clone",5d,13,63,48),
	HX_("toString",ac,d0,6e,38),
	HX_("__init",30,9e,b3,f4),
	::String(null()) };

static void FocusEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FocusEvent_obj::FOCUS_IN,"FOCUS_IN");
	HX_MARK_MEMBER_NAME(FocusEvent_obj::FOCUS_OUT,"FOCUS_OUT");
	HX_MARK_MEMBER_NAME(FocusEvent_obj::KEY_FOCUS_CHANGE,"KEY_FOCUS_CHANGE");
	HX_MARK_MEMBER_NAME(FocusEvent_obj::MOUSE_FOCUS_CHANGE,"MOUSE_FOCUS_CHANGE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FocusEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FocusEvent_obj::FOCUS_IN,"FOCUS_IN");
	HX_VISIT_MEMBER_NAME(FocusEvent_obj::FOCUS_OUT,"FOCUS_OUT");
	HX_VISIT_MEMBER_NAME(FocusEvent_obj::KEY_FOCUS_CHANGE,"KEY_FOCUS_CHANGE");
	HX_VISIT_MEMBER_NAME(FocusEvent_obj::MOUSE_FOCUS_CHANGE,"MOUSE_FOCUS_CHANGE");
};

#endif

::hx::Class FocusEvent_obj::__mClass;

static ::String FocusEvent_obj_sStaticFields[] = {
	HX_("FOCUS_IN",4c,61,08,6b),
	HX_("FOCUS_OUT",27,55,51,3c),
	HX_("KEY_FOCUS_CHANGE",57,48,06,94),
	HX_("MOUSE_FOCUS_CHANGE",11,c4,6c,3d),
	::String(null())
};

void FocusEvent_obj::__register()
{
	FocusEvent_obj _hx_dummy;
	FocusEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.events.FocusEvent",19,ec,e3,ad);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FocusEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FocusEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FocusEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FocusEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FocusEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FocusEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FocusEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FocusEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_919c1dfcca12e2f6_38_boot)
HXDLIN(  38)		FOCUS_IN = HX_("focusIn",dd,45,83,41);
            	}
{
            	HX_STACKFRAME(&_hx_pos_919c1dfcca12e2f6_63_boot)
HXDLIN(  63)		FOCUS_OUT = HX_("focusOut",96,6f,5e,11);
            	}
{
            	HX_STACKFRAME(&_hx_pos_919c1dfcca12e2f6_80_boot)
HXDLIN(  80)		KEY_FOCUS_CHANGE = HX_("keyFocusChange",09,9c,8e,e5);
            	}
{
            	HX_STACKFRAME(&_hx_pos_919c1dfcca12e2f6_97_boot)
HXDLIN(  97)		MOUSE_FOCUS_CHANGE = HX_("mouseFocusChange",43,f1,81,96);
            	}
}

} // end namespace openfl
} // end namespace events
