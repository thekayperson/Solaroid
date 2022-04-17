#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_FrameLabel
#include <openfl/display/FrameLabel.h>
#endif
#ifndef INCLUDED_openfl_display_Scene
#include <openfl/display/Scene.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4f3583535d08fb2f_15_new,"openfl.display.Scene","new",0x370a3e94,"openfl.display.Scene.new","openfl/display/Scene.hx",15,0x8c18ea5e)
namespace openfl{
namespace display{

void Scene_obj::__construct(::String name,::Array< ::Dynamic> labels,int numFrames){
            	HX_STACKFRAME(&_hx_pos_4f3583535d08fb2f_15_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(name,"name")
            	HX_STACK_ARG(labels,"labels")
            	HX_STACK_ARG(numFrames,"numFrames")
HXLINE(  15)
HXLINE(  16)		this->name = name;
HXLINE(  17)		this->labels = labels;
HXLINE(  18)		this->numFrames = numFrames;
            	}

Dynamic Scene_obj::__CreateEmpty() { return new Scene_obj; }

void *Scene_obj::_hx_vtable = 0;

Dynamic Scene_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Scene_obj > _hx_result = new Scene_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Scene_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x473af5de;
}


::hx::ObjectPtr< Scene_obj > Scene_obj::__new(::String name,::Array< ::Dynamic> labels,int numFrames) {
	::hx::ObjectPtr< Scene_obj > __this = new Scene_obj();
	__this->__construct(name,labels,numFrames);
	return __this;
}

::hx::ObjectPtr< Scene_obj > Scene_obj::__alloc(::hx::Ctx *_hx_ctx,::String name,::Array< ::Dynamic> labels,int numFrames) {
	Scene_obj *__this = (Scene_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Scene_obj), true, "openfl.display.Scene"));
	*(void **)__this = Scene_obj::_hx_vtable;
	__this->__construct(name,labels,numFrames);
	return __this;
}

Scene_obj::Scene_obj()
{
}

void Scene_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Scene);
	HX_MARK_MEMBER_NAME(labels,"labels");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(numFrames,"numFrames");
	HX_MARK_END_CLASS();
}

void Scene_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(labels,"labels");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(numFrames,"numFrames");
}

::hx::Val Scene_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"labels") ) { return ::hx::Val( labels ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"numFrames") ) { return ::hx::Val( numFrames ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Scene_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"labels") ) { labels=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"numFrames") ) { numFrames=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Scene_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("labels",ff,27,7d,49));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("numFrames",8c,fa,86,5d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Scene_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Scene_obj,labels),HX_("labels",ff,27,7d,49)},
	{::hx::fsString,(int)offsetof(Scene_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsInt,(int)offsetof(Scene_obj,numFrames),HX_("numFrames",8c,fa,86,5d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Scene_obj_sStaticStorageInfo = 0;
#endif

static ::String Scene_obj_sMemberFields[] = {
	HX_("labels",ff,27,7d,49),
	HX_("name",4b,72,ff,48),
	HX_("numFrames",8c,fa,86,5d),
	::String(null()) };

::hx::Class Scene_obj::__mClass;

void Scene_obj::__register()
{
	Scene_obj _hx_dummy;
	Scene_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.Scene",a2,a4,42,51);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Scene_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Scene_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Scene_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Scene_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
