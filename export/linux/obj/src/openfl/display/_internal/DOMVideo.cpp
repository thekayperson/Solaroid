#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_DOMRenderer
#include <openfl/display/DOMRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DOMDisplayObject
#include <openfl/display/_internal/DOMDisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DOMVideo
#include <openfl/display/_internal/DOMVideo.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Video
#include <openfl/media/Video.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_b5919670cea5e831_12_clear,"openfl.display._internal.DOMVideo","clear",0x14b329f4,"openfl.display._internal.DOMVideo.clear","openfl/display/_internal/DOMVideo.hx",12,0x240265a6)
HX_LOCAL_STACK_FRAME(_hx_pos_b5919670cea5e831_23_render,"openfl.display._internal.DOMVideo","render",0x05930d0f,"openfl.display._internal.DOMVideo.render","openfl/display/_internal/DOMVideo.hx",23,0x240265a6)
HX_LOCAL_STACK_FRAME(_hx_pos_b5919670cea5e831_52_renderDrawable,"openfl.display._internal.DOMVideo","renderDrawable",0x32b7dbcd,"openfl.display._internal.DOMVideo.renderDrawable","openfl/display/_internal/DOMVideo.hx",52,0x240265a6)
HX_LOCAL_STACK_FRAME(_hx_pos_b5919670cea5e831_59_renderDrawableClear,"openfl.display._internal.DOMVideo","renderDrawableClear",0x90a01e80,"openfl.display._internal.DOMVideo.renderDrawableClear","openfl/display/_internal/DOMVideo.hx",59,0x240265a6)
HX_LOCAL_STACK_FRAME(_hx_pos_b5919670cea5e831_9_boot,"openfl.display._internal.DOMVideo","boot",0x736315ab,"openfl.display._internal.DOMVideo.boot","openfl/display/_internal/DOMVideo.hx",9,0x240265a6)
namespace openfl{
namespace display{
namespace _internal{

void DOMVideo_obj::__construct() { }

Dynamic DOMVideo_obj::__CreateEmpty() { return new DOMVideo_obj; }

void *DOMVideo_obj::_hx_vtable = 0;

Dynamic DOMVideo_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DOMVideo_obj > _hx_result = new DOMVideo_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DOMVideo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4252a2ab;
}

void DOMVideo_obj::clear( ::openfl::media::Video video, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_b5919670cea5e831_12_clear)
            	HX_STACK_ARG(video,"video")
            	HX_STACK_ARG(renderer,"renderer")
HXLINE(  12)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMVideo_obj,clear,(void))

void DOMVideo_obj::render( ::openfl::media::Video video, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_b5919670cea5e831_23_render)
            	HX_STACK_ARG(video,"video")
            	HX_STACK_ARG(renderer,"renderer")
HXLINE(  23)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMVideo_obj,render,(void))

void DOMVideo_obj::renderDrawable( ::openfl::media::Video video, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_b5919670cea5e831_52_renderDrawable)
            	HX_STACK_ARG(video,"video")
            	HX_STACK_ARG(renderer,"renderer")
HXLINE(  52)
HXLINE(  53)		::openfl::display::_internal::DOMVideo_obj::render(video,renderer);
HXLINE(  54)		renderer->_hx___renderEvent(video);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMVideo_obj,renderDrawable,(void))

void DOMVideo_obj::renderDrawableClear( ::openfl::media::Video video, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_b5919670cea5e831_59_renderDrawableClear)
            	HX_STACK_ARG(video,"video")
            	HX_STACK_ARG(renderer,"renderer")
HXLINE(  59)
HXDLIN(  59)		::openfl::display::_internal::DOMDisplayObject_obj::renderDrawableClear(video,renderer);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMVideo_obj,renderDrawableClear,(void))


DOMVideo_obj::DOMVideo_obj()
{
}

bool DOMVideo_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { outValue = clear_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"renderDrawable") ) { outValue = renderDrawable_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"renderDrawableClear") ) { outValue = renderDrawableClear_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DOMVideo_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DOMVideo_obj_sStaticStorageInfo = 0;
#endif

::hx::Class DOMVideo_obj::__mClass;

static ::String DOMVideo_obj_sStaticFields[] = {
	HX_("clear",8d,71,5b,48),
	HX_("render",56,6b,29,05),
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableClear",d9,1f,f9,ad),
	::String(null())
};

void DOMVideo_obj::__register()
{
	DOMVideo_obj _hx_dummy;
	DOMVideo_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.DOMVideo",95,41,c8,fa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DOMVideo_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DOMVideo_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DOMVideo_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DOMVideo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DOMVideo_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DOMVideo_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b5919670cea5e831_9_boot)
HXDLIN(   9)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
