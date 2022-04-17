#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_CanvasRenderer
#include <openfl/display/CanvasRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CanvasDisplayObject
#include <openfl/display/_internal/CanvasDisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CanvasDisplayObjectContainer
#include <openfl/display/_internal/CanvasDisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CanvasGraphics
#include <openfl/display/_internal/CanvasGraphics.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_5780dbf24c19fab4_8_renderDrawable,"openfl.display._internal.CanvasDisplayObjectContainer","renderDrawable",0x084281ee,"openfl.display._internal.CanvasDisplayObjectContainer.renderDrawable","openfl/display/_internal/CanvasDisplayObjectContainer.hx",8,0xfc40dac7)
HX_LOCAL_STACK_FRAME(_hx_pos_5780dbf24c19fab4_46_renderDrawableMask,"openfl.display._internal.CanvasDisplayObjectContainer","renderDrawableMask",0x3ea47dfa,"openfl.display._internal.CanvasDisplayObjectContainer.renderDrawableMask","openfl/display/_internal/CanvasDisplayObjectContainer.hx",46,0xfc40dac7)
namespace openfl{
namespace display{
namespace _internal{

void CanvasDisplayObjectContainer_obj::__construct() { }

Dynamic CanvasDisplayObjectContainer_obj::__CreateEmpty() { return new CanvasDisplayObjectContainer_obj; }

void *CanvasDisplayObjectContainer_obj::_hx_vtable = 0;

Dynamic CanvasDisplayObjectContainer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CanvasDisplayObjectContainer_obj > _hx_result = new CanvasDisplayObjectContainer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CanvasDisplayObjectContainer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x037cffa2;
}

void CanvasDisplayObjectContainer_obj::renderDrawable( ::openfl::display::DisplayObjectContainer displayObjectContainer, ::openfl::display::CanvasRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_5780dbf24c19fab4_8_renderDrawable)
            	HX_STACK_ARG(displayObjectContainer,"displayObjectContainer")
            	HX_STACK_ARG(renderer,"renderer")
HXLINE(   8)
HXLINE(   9)		{
HXLINE(   9)			{
HXLINE(   9)				 ::Dynamic orphan = displayObjectContainer->_hx___removedChildren->iterator();
HXDLIN(   9)				while(( (bool)(orphan->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(   9)					 ::openfl::display::DisplayObject orphan1 = ( ( ::openfl::display::DisplayObject)(orphan->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(   9)					if (::hx::IsNull( orphan1->stage )) {
HXLINE(   9)						orphan1->_hx___cleanup();
            					}
            				}
            			}
HXDLIN(   9)			displayObjectContainer->_hx___removedChildren->set_length(0);
            		}
HXLINE(  11)		bool _hx_tmp;
HXDLIN(  11)		bool _hx_tmp1;
HXDLIN(  11)		if (displayObjectContainer->_hx___renderable) {
HXLINE(  11)			_hx_tmp1 = (displayObjectContainer->_hx___worldAlpha <= 0);
            		}
            		else {
HXLINE(  11)			_hx_tmp1 = true;
            		}
HXDLIN(  11)		if (!(_hx_tmp1)) {
HXLINE(  13)			if (::hx::IsNotNull( displayObjectContainer->get_mask() )) {
HXLINE(  14)				if (!((displayObjectContainer->get_mask()->get_width() <= 0))) {
HXLINE(  11)					_hx_tmp = (displayObjectContainer->get_mask()->get_height() <= 0);
            				}
            				else {
HXLINE(  11)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE(  11)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE(  11)			_hx_tmp = true;
            		}
HXDLIN(  11)		if (_hx_tmp) {
HXLINE(  14)			return;
            		}
HXLINE(  17)		::openfl::display::_internal::CanvasDisplayObject_obj::renderDrawable(displayObjectContainer,renderer);
HXLINE(  19)		bool _hx_tmp2;
HXDLIN(  19)		if (::hx::IsNotNull( displayObjectContainer->_hx___cacheBitmap )) {
HXLINE(  19)			_hx_tmp2 = !(displayObjectContainer->_hx___isCacheBitmapRender);
            		}
            		else {
HXLINE(  19)			_hx_tmp2 = false;
            		}
HXDLIN(  19)		if (_hx_tmp2) {
HXLINE(  19)			return;
            		}
HXLINE(  21)		renderer->_hx___pushMaskObject(displayObjectContainer,null());
HXLINE(  23)		if (::hx::IsNotNull( renderer->_hx___stage )) {
HXLINE(  25)			{
HXLINE(  25)				int _g = 0;
HXDLIN(  25)				::Array< ::Dynamic> _g1 = displayObjectContainer->_hx___children;
HXDLIN(  25)				while((_g < _g1->length)){
HXLINE(  25)					HX_VARI(  ::openfl::display::DisplayObject,child) = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN(  25)					_g = (_g + 1);
HXLINE(  27)					renderer->_hx___renderDrawable(child);
HXLINE(  28)					child->_hx___renderDirty = false;
            				}
            			}
HXLINE(  31)			displayObjectContainer->_hx___renderDirty = false;
            		}
            		else {
HXLINE(  35)			int _g = 0;
HXDLIN(  35)			::Array< ::Dynamic> _g1 = displayObjectContainer->_hx___children;
HXDLIN(  35)			while((_g < _g1->length)){
HXLINE(  35)				HX_VARI(  ::openfl::display::DisplayObject,child) = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN(  35)				_g = (_g + 1);
HXLINE(  37)				renderer->_hx___renderDrawable(child);
            			}
            		}
HXLINE(  41)		renderer->_hx___popMaskObject(displayObjectContainer,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasDisplayObjectContainer_obj,renderDrawable,(void))

void CanvasDisplayObjectContainer_obj::renderDrawableMask( ::openfl::display::DisplayObjectContainer displayObjectContainer, ::openfl::display::CanvasRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_5780dbf24c19fab4_46_renderDrawableMask)
            	HX_STACK_ARG(displayObjectContainer,"displayObjectContainer")
            	HX_STACK_ARG(renderer,"renderer")
HXLINE(  46)
HXLINE(  47)		{
HXLINE(  47)			{
HXLINE(  47)				 ::Dynamic orphan = displayObjectContainer->_hx___removedChildren->iterator();
HXDLIN(  47)				while(( (bool)(orphan->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  47)					 ::openfl::display::DisplayObject orphan1 = ( ( ::openfl::display::DisplayObject)(orphan->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  47)					if (::hx::IsNull( orphan1->stage )) {
HXLINE(  47)						orphan1->_hx___cleanup();
            					}
            				}
            			}
HXDLIN(  47)			displayObjectContainer->_hx___removedChildren->set_length(0);
            		}
HXLINE(  49)		if (::hx::IsNotNull( displayObjectContainer->_hx___graphics )) {
HXLINE(  51)			::openfl::display::_internal::CanvasGraphics_obj::renderMask(displayObjectContainer->_hx___graphics,renderer);
            		}
HXLINE(  54)		{
HXLINE(  54)			int _g = 0;
HXDLIN(  54)			::Array< ::Dynamic> _g1 = displayObjectContainer->_hx___children;
HXDLIN(  54)			while((_g < _g1->length)){
HXLINE(  54)				HX_VARI(  ::openfl::display::DisplayObject,child) = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN(  54)				_g = (_g + 1);
HXLINE(  56)				renderer->_hx___renderDrawableMask(child);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasDisplayObjectContainer_obj,renderDrawableMask,(void))


CanvasDisplayObjectContainer_obj::CanvasDisplayObjectContainer_obj()
{
}

bool CanvasDisplayObjectContainer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"renderDrawable") ) { outValue = renderDrawable_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"renderDrawableMask") ) { outValue = renderDrawableMask_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CanvasDisplayObjectContainer_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CanvasDisplayObjectContainer_obj_sStaticStorageInfo = 0;
#endif

::hx::Class CanvasDisplayObjectContainer_obj::__mClass;

static ::String CanvasDisplayObjectContainer_obj_sStaticFields[] = {
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableMask",20,e0,a3,66),
	::String(null())
};

void CanvasDisplayObjectContainer_obj::__register()
{
	CanvasDisplayObjectContainer_obj _hx_dummy;
	CanvasDisplayObjectContainer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.CanvasDisplayObjectContainer",54,4a,15,82);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CanvasDisplayObjectContainer_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CanvasDisplayObjectContainer_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CanvasDisplayObjectContainer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CanvasDisplayObjectContainer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CanvasDisplayObjectContainer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
