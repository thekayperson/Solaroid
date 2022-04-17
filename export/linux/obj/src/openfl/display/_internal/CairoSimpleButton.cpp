#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_CairoRenderer
#include <openfl/display/CairoRenderer.h>
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
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_SimpleButton
#include <openfl/display/SimpleButton.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoSimpleButton
#include <openfl/display/_internal/CairoSimpleButton.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_8213b8275afd3eb5_11_renderDrawable,"openfl.display._internal.CairoSimpleButton","renderDrawable",0xce0881d2,"openfl.display._internal.CairoSimpleButton.renderDrawable","openfl/display/_internal/CairoSimpleButton.hx",11,0x901d51d1)
HX_LOCAL_STACK_FRAME(_hx_pos_8213b8275afd3eb5_23_renderDrawableMask,"openfl.display._internal.CairoSimpleButton","renderDrawableMask",0x40323fde,"openfl.display._internal.CairoSimpleButton.renderDrawableMask","openfl/display/_internal/CairoSimpleButton.hx",23,0x901d51d1)
namespace openfl{
namespace display{
namespace _internal{

void CairoSimpleButton_obj::__construct() { }

Dynamic CairoSimpleButton_obj::__CreateEmpty() { return new CairoSimpleButton_obj; }

void *CairoSimpleButton_obj::_hx_vtable = 0;

Dynamic CairoSimpleButton_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CairoSimpleButton_obj > _hx_result = new CairoSimpleButton_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CairoSimpleButton_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x074905e2;
}

void CairoSimpleButton_obj::renderDrawable( ::openfl::display::SimpleButton simpleButton, ::openfl::display::CairoRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_8213b8275afd3eb5_11_renderDrawable)
            	HX_STACK_ARG(simpleButton,"simpleButton")
            	HX_STACK_ARG(renderer,"renderer")
HXLINE(  11)
HXLINE(  12)		bool _hx_tmp;
HXDLIN(  12)		bool _hx_tmp1;
HXDLIN(  12)		if (simpleButton->_hx___renderable) {
HXLINE(  12)			_hx_tmp1 = (simpleButton->_hx___worldAlpha <= 0);
            		}
            		else {
HXLINE(  12)			_hx_tmp1 = true;
            		}
HXDLIN(  12)		if (!(_hx_tmp1)) {
HXLINE(  12)			_hx_tmp = ::hx::IsNull( simpleButton->_hx___currentState );
            		}
            		else {
HXLINE(  12)			_hx_tmp = true;
            		}
HXDLIN(  12)		if (_hx_tmp) {
HXLINE(  12)			return;
            		}
HXLINE(  14)		renderer->_hx___pushMaskObject(simpleButton,null());
HXLINE(  15)		renderer->_hx___renderDrawable(simpleButton->_hx___currentState);
HXLINE(  16)		renderer->_hx___popMaskObject(simpleButton,null());
HXLINE(  18)		renderer->_hx___renderEvent(simpleButton);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoSimpleButton_obj,renderDrawable,(void))

void CairoSimpleButton_obj::renderDrawableMask( ::openfl::display::SimpleButton simpleButton, ::openfl::display::CairoRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_8213b8275afd3eb5_23_renderDrawableMask)
            	HX_STACK_ARG(simpleButton,"simpleButton")
            	HX_STACK_ARG(renderer,"renderer")
HXLINE(  23)
HXDLIN(  23)		renderer->_hx___renderDrawableMask(simpleButton->_hx___currentState);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoSimpleButton_obj,renderDrawableMask,(void))


CairoSimpleButton_obj::CairoSimpleButton_obj()
{
}

bool CairoSimpleButton_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *CairoSimpleButton_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CairoSimpleButton_obj_sStaticStorageInfo = 0;
#endif

::hx::Class CairoSimpleButton_obj::__mClass;

static ::String CairoSimpleButton_obj_sStaticFields[] = {
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableMask",20,e0,a3,66),
	::String(null())
};

void CairoSimpleButton_obj::__register()
{
	CairoSimpleButton_obj _hx_dummy;
	CairoSimpleButton_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.CairoSimpleButton",f0,39,ed,fd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoSimpleButton_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CairoSimpleButton_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CairoSimpleButton_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoSimpleButton_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoSimpleButton_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
