#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
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
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CairoRenderer
#include <openfl/display/CairoRenderer.h>
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
#ifndef INCLUDED_openfl_display__internal_CairoDisplayObject
#include <openfl/display/_internal/CairoDisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoDisplayObjectContainer
#include <openfl/display/_internal/CairoDisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoGraphics
#include <openfl/display/_internal/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2b4194a35432a9fb_12_renderDrawable,"openfl.display._internal.CairoDisplayObjectContainer","renderDrawable",0x8c0c8fb6,"openfl.display._internal.CairoDisplayObjectContainer.renderDrawable","openfl/display/_internal/CairoDisplayObjectContainer.hx",12,0xc2ec1b75)
HX_LOCAL_STACK_FRAME(_hx_pos_2b4194a35432a9fb_47_renderDrawableMask,"openfl.display._internal.CairoDisplayObjectContainer","renderDrawableMask",0xcd1d0fc2,"openfl.display._internal.CairoDisplayObjectContainer.renderDrawableMask","openfl/display/_internal/CairoDisplayObjectContainer.hx",47,0xc2ec1b75)
namespace openfl{
namespace display{
namespace _internal{

void CairoDisplayObjectContainer_obj::__construct() { }

Dynamic CairoDisplayObjectContainer_obj::__CreateEmpty() { return new CairoDisplayObjectContainer_obj; }

void *CairoDisplayObjectContainer_obj::_hx_vtable = 0;

Dynamic CairoDisplayObjectContainer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CairoDisplayObjectContainer_obj > _hx_result = new CairoDisplayObjectContainer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CairoDisplayObjectContainer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f3849fe;
}

void CairoDisplayObjectContainer_obj::renderDrawable( ::openfl::display::DisplayObjectContainer displayObjectContainer, ::openfl::display::CairoRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_2b4194a35432a9fb_12_renderDrawable)
            	HX_STACK_ARG(displayObjectContainer,"displayObjectContainer")
            	HX_STACK_ARG(renderer,"renderer")
HXLINE(  12)
HXLINE(  14)		{
HXLINE(  14)			{
HXLINE(  14)				 ::Dynamic orphan = displayObjectContainer->_hx___removedChildren->iterator();
HXDLIN(  14)				while(( (bool)(orphan->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  14)					 ::openfl::display::DisplayObject orphan1 = ( ( ::openfl::display::DisplayObject)(orphan->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  14)					if (::hx::IsNull( orphan1->stage )) {
HXLINE(  14)						orphan1->_hx___cleanup();
            					}
            				}
            			}
HXDLIN(  14)			displayObjectContainer->_hx___removedChildren->set_length(0);
            		}
HXLINE(  16)		bool _hx_tmp;
HXDLIN(  16)		if (displayObjectContainer->_hx___renderable) {
HXLINE(  16)			_hx_tmp = (displayObjectContainer->_hx___worldAlpha <= 0);
            		}
            		else {
HXLINE(  16)			_hx_tmp = true;
            		}
HXDLIN(  16)		if (_hx_tmp) {
HXLINE(  16)			return;
            		}
HXLINE(  18)		{
HXLINE(  18)			renderer->_hx___updateCacheBitmap(displayObjectContainer,false);
HXDLIN(  18)			bool _hx_tmp1;
HXDLIN(  18)			if (::hx::IsNotNull( displayObjectContainer->_hx___cacheBitmap )) {
HXLINE(  18)				_hx_tmp1 = !(displayObjectContainer->_hx___isCacheBitmapRender);
            			}
            			else {
HXLINE(  18)				_hx_tmp1 = false;
            			}
HXDLIN(  18)			if (_hx_tmp1) {
HXLINE(  18)				 ::openfl::display::Bitmap bitmap = displayObjectContainer->_hx___cacheBitmap;
HXDLIN(  18)				if (bitmap->_hx___renderable) {
HXLINE(  18)					Float alpha = renderer->_hx___getAlpha(bitmap->_hx___worldAlpha);
HXDLIN(  18)					bool _hx_tmp;
HXDLIN(  18)					bool _hx_tmp1;
HXDLIN(  18)					if ((alpha > 0)) {
HXLINE(  18)						_hx_tmp1 = ::hx::IsNotNull( bitmap->_hx___bitmapData );
            					}
            					else {
HXLINE(  18)						_hx_tmp1 = false;
            					}
HXDLIN(  18)					if (_hx_tmp1) {
HXLINE(  18)						_hx_tmp = bitmap->_hx___bitmapData->_hx___isValid;
            					}
            					else {
HXLINE(  18)						_hx_tmp = false;
            					}
HXDLIN(  18)					if (_hx_tmp) {
HXLINE(  18)						 ::lime::graphics::cairo::Cairo cairo = renderer->cairo;
HXDLIN(  18)						renderer->_hx___setBlendMode(bitmap->_hx___worldBlendMode);
HXDLIN(  18)						renderer->_hx___pushMaskObject(bitmap,null());
HXDLIN(  18)						renderer->applyMatrix(bitmap->_hx___renderTransform,cairo);
HXDLIN(  18)						 ::Dynamic surface = bitmap->_hx___bitmapData->getSurface();
HXDLIN(  18)						if (::hx::IsNotNull( surface )) {
HXLINE(  18)							 ::Dynamic pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(surface);
HXDLIN(  18)							int _hx_tmp;
HXDLIN(  18)							bool _hx_tmp1;
HXDLIN(  18)							if (renderer->_hx___allowSmoothing) {
HXLINE(  18)								_hx_tmp1 = bitmap->smoothing;
            							}
            							else {
HXLINE(  18)								_hx_tmp1 = false;
            							}
HXDLIN(  18)							if (_hx_tmp1) {
HXLINE(  18)								_hx_tmp = 1;
            							}
            							else {
HXLINE(  18)								_hx_tmp = 3;
            							}
HXDLIN(  18)							::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern,_hx_tmp);
HXDLIN(  18)							cairo->set_source(pattern);
HXDLIN(  18)							if ((alpha == 1)) {
HXLINE(  18)								cairo->paint();
            							}
            							else {
HXLINE(  18)								cairo->paintWithAlpha(alpha);
            							}
            						}
HXDLIN(  18)						renderer->_hx___popMaskObject(bitmap,null());
HXDLIN(  18)						renderer->_hx___setBlendMode(10);
            					}
            				}
            			}
            			else {
HXLINE(  18)				::openfl::display::_internal::CairoDisplayObject_obj::render(displayObjectContainer,renderer);
            			}
HXDLIN(  18)			renderer->_hx___renderEvent(displayObjectContainer);
            		}
HXLINE(  20)		bool _hx_tmp2;
HXDLIN(  20)		if (::hx::IsNotNull( displayObjectContainer->_hx___cacheBitmap )) {
HXLINE(  20)			_hx_tmp2 = !(displayObjectContainer->_hx___isCacheBitmapRender);
            		}
            		else {
HXLINE(  20)			_hx_tmp2 = false;
            		}
HXDLIN(  20)		if (_hx_tmp2) {
HXLINE(  20)			return;
            		}
HXLINE(  22)		renderer->_hx___pushMaskObject(displayObjectContainer,null());
HXLINE(  24)		if (::hx::IsNotNull( renderer->_hx___stage )) {
HXLINE(  26)			{
HXLINE(  26)				int _g = 0;
HXDLIN(  26)				::Array< ::Dynamic> _g1 = displayObjectContainer->_hx___children;
HXDLIN(  26)				while((_g < _g1->length)){
HXLINE(  26)					HX_VARI(  ::openfl::display::DisplayObject,child) = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN(  26)					_g = (_g + 1);
HXLINE(  28)					renderer->_hx___renderDrawable(child);
HXLINE(  29)					child->_hx___renderDirty = false;
            				}
            			}
HXLINE(  32)			displayObjectContainer->_hx___renderDirty = false;
            		}
            		else {
HXLINE(  36)			int _g = 0;
HXDLIN(  36)			::Array< ::Dynamic> _g1 = displayObjectContainer->_hx___children;
HXDLIN(  36)			while((_g < _g1->length)){
HXLINE(  36)				HX_VARI(  ::openfl::display::DisplayObject,child) = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN(  36)				_g = (_g + 1);
HXLINE(  38)				renderer->_hx___renderDrawable(child);
            			}
            		}
HXLINE(  42)		renderer->_hx___popMaskObject(displayObjectContainer,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoDisplayObjectContainer_obj,renderDrawable,(void))

void CairoDisplayObjectContainer_obj::renderDrawableMask( ::openfl::display::DisplayObjectContainer displayObjectContainer, ::openfl::display::CairoRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_2b4194a35432a9fb_47_renderDrawableMask)
            	HX_STACK_ARG(displayObjectContainer,"displayObjectContainer")
            	HX_STACK_ARG(renderer,"renderer")
HXLINE(  47)
HXLINE(  49)		{
HXLINE(  49)			{
HXLINE(  49)				 ::Dynamic orphan = displayObjectContainer->_hx___removedChildren->iterator();
HXDLIN(  49)				while(( (bool)(orphan->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  49)					 ::openfl::display::DisplayObject orphan1 = ( ( ::openfl::display::DisplayObject)(orphan->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  49)					if (::hx::IsNull( orphan1->stage )) {
HXLINE(  49)						orphan1->_hx___cleanup();
            					}
            				}
            			}
HXDLIN(  49)			displayObjectContainer->_hx___removedChildren->set_length(0);
            		}
HXLINE(  51)		if (::hx::IsNotNull( displayObjectContainer->_hx___graphics )) {
HXLINE(  53)			::openfl::display::_internal::CairoGraphics_obj::renderMask(displayObjectContainer->_hx___graphics,renderer);
            		}
HXLINE(  56)		{
HXLINE(  56)			int _g = 0;
HXDLIN(  56)			::Array< ::Dynamic> _g1 = displayObjectContainer->_hx___children;
HXDLIN(  56)			while((_g < _g1->length)){
HXLINE(  56)				HX_VARI(  ::openfl::display::DisplayObject,child) = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN(  56)				_g = (_g + 1);
HXLINE(  58)				renderer->_hx___renderDrawableMask(child);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoDisplayObjectContainer_obj,renderDrawableMask,(void))


CairoDisplayObjectContainer_obj::CairoDisplayObjectContainer_obj()
{
}

bool CairoDisplayObjectContainer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *CairoDisplayObjectContainer_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CairoDisplayObjectContainer_obj_sStaticStorageInfo = 0;
#endif

::hx::Class CairoDisplayObjectContainer_obj::__mClass;

static ::String CairoDisplayObjectContainer_obj_sStaticFields[] = {
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableMask",20,e0,a3,66),
	::String(null())
};

void CairoDisplayObjectContainer_obj::__register()
{
	CairoDisplayObjectContainer_obj _hx_dummy;
	CairoDisplayObjectContainer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.CairoDisplayObjectContainer",8c,5b,cf,e4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoDisplayObjectContainer_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CairoDisplayObjectContainer_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CairoDisplayObjectContainer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoDisplayObjectContainer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoDisplayObjectContainer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
