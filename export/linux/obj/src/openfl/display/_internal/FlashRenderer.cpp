#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display__internal_FlashRenderer
#include <openfl/display/_internal/FlashRenderer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_IDisplayObject
#include <openfl/display/_internal/IDisplayObject.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_utils__Dictionary_Dictionary_Impl_
#include <openfl/utils/_Dictionary/Dictionary_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_7a456a482f2d6066_13_register,"openfl.display._internal.FlashRenderer","register",0xca761f1a,"openfl.display._internal.FlashRenderer.register","openfl/display/_internal/FlashRenderer.hx",13,0x8708d60a)
HX_LOCAL_STACK_FRAME(_hx_pos_7a456a482f2d6066_26_render,"openfl.display._internal.FlashRenderer","render",0xf529784d,"openfl.display._internal.FlashRenderer.render","openfl/display/_internal/FlashRenderer.hx",26,0x8708d60a)
HX_LOCAL_STACK_FRAME(_hx_pos_7a456a482f2d6066_8_boot,"openfl.display._internal.FlashRenderer","boot",0x880b9569,"openfl.display._internal.FlashRenderer.boot","openfl/display/_internal/FlashRenderer.hx",8,0x8708d60a)
namespace openfl{
namespace display{
namespace _internal{

void FlashRenderer_obj::__construct() { }

Dynamic FlashRenderer_obj::__CreateEmpty() { return new FlashRenderer_obj; }

void *FlashRenderer_obj::_hx_vtable = 0;

Dynamic FlashRenderer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlashRenderer_obj > _hx_result = new FlashRenderer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlashRenderer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x74124589;
}

 ::haxe::ds::ObjectMap FlashRenderer_obj::instances;

void FlashRenderer_obj::_hx_register(::Dynamic renderObject){
            	HX_STACKFRAME(&_hx_pos_7a456a482f2d6066_13_register)
            	HX_STACK_ARG(renderObject,"renderObject")
HXLINE(  13)
HXLINE(  14)		if (::hx::IsNull( ::openfl::display::_internal::FlashRenderer_obj::instances )) {
HXLINE(  16)			::openfl::display::_internal::FlashRenderer_obj::instances = ::openfl::utils::_Dictionary::Dictionary_Impl__obj::toObjectMap(null(),true);
HXLINE(  18)			::openfl::Lib_obj::get_current()->stage->addEventListener(HX_("enterFrame",f5,03,50,02),::openfl::display::_internal::FlashRenderer_obj::render_dyn(),false,(int)-2147483648,null());
            		}
HXLINE(  21)		::openfl::display::_internal::FlashRenderer_obj::instances->set(renderObject,true);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlashRenderer_obj,_hx_register,(void))

void FlashRenderer_obj::render( ::openfl::events::Event _){
            	HX_STACKFRAME(&_hx_pos_7a456a482f2d6066_26_render)
            	HX_STACK_ARG(_,"_")
HXLINE(  26)
HXDLIN(  26)		HX_VARI(  ::Dynamic,instance) = ::openfl::display::_internal::FlashRenderer_obj::instances->keys();
HXDLIN(  26)		while(( (bool)(instance->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN(  26)			HX_VARI( ::Dynamic,instance1) = instance->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE(  28)			::openfl::display::_internal::IDisplayObject_obj::_hx___renderFlash(instance1);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlashRenderer_obj,render,(void))


FlashRenderer_obj::FlashRenderer_obj()
{
}

bool FlashRenderer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"register") ) { outValue = _hx_register_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"instances") ) { outValue = ( instances ); return true; }
	}
	return false;
}

bool FlashRenderer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"instances") ) { instances=ioValue.Cast<  ::haxe::ds::ObjectMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlashRenderer_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FlashRenderer_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(void *) &FlashRenderer_obj::instances,HX_("instances",3e,83,1a,4b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void FlashRenderer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlashRenderer_obj::instances,"instances");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlashRenderer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlashRenderer_obj::instances,"instances");
};

#endif

::hx::Class FlashRenderer_obj::__mClass;

static ::String FlashRenderer_obj_sStaticFields[] = {
	HX_("instances",3e,83,1a,4b),
	HX_("register",63,a6,9f,d0),
	HX_("render",56,6b,29,05),
	::String(null())
};

void FlashRenderer_obj::__register()
{
	FlashRenderer_obj _hx_dummy;
	FlashRenderer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.FlashRenderer",97,da,2b,26);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlashRenderer_obj::__GetStatic;
	__mClass->mSetStaticField = &FlashRenderer_obj::__SetStatic;
	__mClass->mMarkFunc = FlashRenderer_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlashRenderer_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlashRenderer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlashRenderer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlashRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlashRenderer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlashRenderer_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7a456a482f2d6066_8_boot)
HXDLIN(   8)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
