#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
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
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DOMTextField
#include <openfl/display/_internal/DOMTextField.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_737ece1df218ad42_26_clear,"openfl.display._internal.DOMTextField","clear",0x58a798c6,"openfl.display._internal.DOMTextField.clear","openfl/display/_internal/DOMTextField.hx",26,0xc7d4d214)
HX_LOCAL_STACK_FRAME(_hx_pos_737ece1df218ad42_43_measureText,"openfl.display._internal.DOMTextField","measureText",0xa92bd324,"openfl.display._internal.DOMTextField.measureText","openfl/display/_internal/DOMTextField.hx",43,0xc7d4d214)
HX_LOCAL_STACK_FRAME(_hx_pos_737ece1df218ad42_79_render,"openfl.display._internal.DOMTextField","render",0x377f95fd,"openfl.display._internal.DOMTextField.render","openfl/display/_internal/DOMTextField.hx",79,0xc7d4d214)
HX_LOCAL_STACK_FRAME(_hx_pos_737ece1df218ad42_346_renderDrawable,"openfl.display._internal.DOMTextField","renderDrawable",0x8cdc02bb,"openfl.display._internal.DOMTextField.renderDrawable","openfl/display/_internal/DOMTextField.hx",346,0xc7d4d214)
HX_LOCAL_STACK_FRAME(_hx_pos_737ece1df218ad42_384_renderDrawableClear,"openfl.display._internal.DOMTextField","renderDrawableClear",0xaca218d2,"openfl.display._internal.DOMTextField.renderDrawableClear","openfl/display/_internal/DOMTextField.hx",384,0xc7d4d214)
HX_LOCAL_STACK_FRAME(_hx_pos_737ece1df218ad42_389___getAttributeMatch,"openfl.display._internal.DOMTextField","__getAttributeMatch",0x43d53498,"openfl.display._internal.DOMTextField.__getAttributeMatch","openfl/display/_internal/DOMTextField.hx",389,0xc7d4d214)
HX_LOCAL_STACK_FRAME(_hx_pos_737ece1df218ad42_17_boot,"openfl.display._internal.DOMTextField","boot",0xe1e5e719,"openfl.display._internal.DOMTextField.boot","openfl/display/_internal/DOMTextField.hx",17,0xc7d4d214)
HX_LOCAL_STACK_FRAME(_hx_pos_737ece1df218ad42_19_boot,"openfl.display._internal.DOMTextField","boot",0xe1e5e719,"openfl.display._internal.DOMTextField.boot","openfl/display/_internal/DOMTextField.hx",19,0xc7d4d214)
HX_LOCAL_STACK_FRAME(_hx_pos_737ece1df218ad42_20_boot,"openfl.display._internal.DOMTextField","boot",0xe1e5e719,"openfl.display._internal.DOMTextField.boot","openfl/display/_internal/DOMTextField.hx",20,0xc7d4d214)
HX_LOCAL_STACK_FRAME(_hx_pos_737ece1df218ad42_21_boot,"openfl.display._internal.DOMTextField","boot",0xe1e5e719,"openfl.display._internal.DOMTextField.boot","openfl/display/_internal/DOMTextField.hx",21,0xc7d4d214)
HX_LOCAL_STACK_FRAME(_hx_pos_737ece1df218ad42_22_boot,"openfl.display._internal.DOMTextField","boot",0xe1e5e719,"openfl.display._internal.DOMTextField.boot","openfl/display/_internal/DOMTextField.hx",22,0xc7d4d214)
HX_LOCAL_STACK_FRAME(_hx_pos_737ece1df218ad42_23_boot,"openfl.display._internal.DOMTextField","boot",0xe1e5e719,"openfl.display._internal.DOMTextField.boot","openfl/display/_internal/DOMTextField.hx",23,0xc7d4d214)
namespace openfl{
namespace display{
namespace _internal{

void DOMTextField_obj::__construct() { }

Dynamic DOMTextField_obj::__CreateEmpty() { return new DOMTextField_obj; }

void *DOMTextField_obj::_hx_vtable = 0;

Dynamic DOMTextField_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DOMTextField_obj > _hx_result = new DOMTextField_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DOMTextField_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x43d09599;
}

 ::EReg DOMTextField_obj::_hx___regexColor;

 ::EReg DOMTextField_obj::_hx___regexFace;

 ::EReg DOMTextField_obj::_hx___regexFont;

 ::EReg DOMTextField_obj::_hx___regexCloseFont;

 ::EReg DOMTextField_obj::_hx___regexSize;

void DOMTextField_obj::clear( ::openfl::text::TextField textField, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_737ece1df218ad42_26_clear)
            	HX_STACK_ARG(textField,"textField")
            	HX_STACK_ARG(renderer,"renderer")
HXLINE(  26)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMTextField_obj,clear,(void))

void DOMTextField_obj::measureText( ::openfl::text::TextField textField){
            	HX_STACKFRAME(&_hx_pos_737ece1df218ad42_43_measureText)
            	HX_STACK_ARG(textField,"textField")
HXLINE(  43)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DOMTextField_obj,measureText,(void))

void DOMTextField_obj::render( ::openfl::text::TextField textField, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_737ece1df218ad42_79_render)
            	HX_STACK_ARG(textField,"textField")
            	HX_STACK_ARG(renderer,"renderer")
HXLINE(  79)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMTextField_obj,render,(void))

void DOMTextField_obj::renderDrawable( ::openfl::text::TextField textField, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_737ece1df218ad42_346_renderDrawable)
            	HX_STACK_ARG(textField,"textField")
            	HX_STACK_ARG(renderer,"renderer")
HXLINE( 346)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMTextField_obj,renderDrawable,(void))

void DOMTextField_obj::renderDrawableClear( ::openfl::text::TextField textField, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_737ece1df218ad42_384_renderDrawableClear)
            	HX_STACK_ARG(textField,"textField")
            	HX_STACK_ARG(renderer,"renderer")
HXLINE( 384)
HXDLIN( 384)		::openfl::display::_internal::DOMTextField_obj::clear(textField,renderer);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMTextField_obj,renderDrawableClear,(void))

::String DOMTextField_obj::_hx___getAttributeMatch( ::EReg regex){
            	HX_STACKFRAME(&_hx_pos_737ece1df218ad42_389___getAttributeMatch)
            	HX_STACK_ARG(regex,"regex")
HXLINE( 389)
HXDLIN( 389)		if (::hx::IsNotNull( regex->matched(2) )) {
HXDLIN( 389)			return regex->matched(2);
            		}
            		else {
HXDLIN( 389)			return regex->matched(3);
            		}
HXDLIN( 389)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DOMTextField_obj,_hx___getAttributeMatch,return )


DOMTextField_obj::DOMTextField_obj()
{
}

bool DOMTextField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { outValue = clear_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__regexFace") ) { outValue = ( _hx___regexFace ); return true; }
		if (HX_FIELD_EQ(inName,"__regexFont") ) { outValue = ( _hx___regexFont ); return true; }
		if (HX_FIELD_EQ(inName,"__regexSize") ) { outValue = ( _hx___regexSize ); return true; }
		if (HX_FIELD_EQ(inName,"measureText") ) { outValue = measureText_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__regexColor") ) { outValue = ( _hx___regexColor ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"renderDrawable") ) { outValue = renderDrawable_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__regexCloseFont") ) { outValue = ( _hx___regexCloseFont ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"renderDrawableClear") ) { outValue = renderDrawableClear_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__getAttributeMatch") ) { outValue = _hx___getAttributeMatch_dyn(); return true; }
	}
	return false;
}

bool DOMTextField_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"__regexFace") ) { _hx___regexFace=ioValue.Cast<  ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexFont") ) { _hx___regexFont=ioValue.Cast<  ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexSize") ) { _hx___regexSize=ioValue.Cast<  ::EReg >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__regexColor") ) { _hx___regexColor=ioValue.Cast<  ::EReg >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__regexCloseFont") ) { _hx___regexCloseFont=ioValue.Cast<  ::EReg >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DOMTextField_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo DOMTextField_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::EReg */ ,(void *) &DOMTextField_obj::_hx___regexColor,HX_("__regexColor",3c,3c,9c,56)},
	{::hx::fsObject /*  ::EReg */ ,(void *) &DOMTextField_obj::_hx___regexFace,HX_("__regexFace",e4,c7,66,12)},
	{::hx::fsObject /*  ::EReg */ ,(void *) &DOMTextField_obj::_hx___regexFont,HX_("__regexFont",16,71,71,12)},
	{::hx::fsObject /*  ::EReg */ ,(void *) &DOMTextField_obj::_hx___regexCloseFont,HX_("__regexCloseFont",00,89,6f,88)},
	{::hx::fsObject /*  ::EReg */ ,(void *) &DOMTextField_obj::_hx___regexSize,HX_("__regexSize",08,b4,04,1b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void DOMTextField_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DOMTextField_obj::_hx___regexColor,"__regexColor");
	HX_MARK_MEMBER_NAME(DOMTextField_obj::_hx___regexFace,"__regexFace");
	HX_MARK_MEMBER_NAME(DOMTextField_obj::_hx___regexFont,"__regexFont");
	HX_MARK_MEMBER_NAME(DOMTextField_obj::_hx___regexCloseFont,"__regexCloseFont");
	HX_MARK_MEMBER_NAME(DOMTextField_obj::_hx___regexSize,"__regexSize");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DOMTextField_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DOMTextField_obj::_hx___regexColor,"__regexColor");
	HX_VISIT_MEMBER_NAME(DOMTextField_obj::_hx___regexFace,"__regexFace");
	HX_VISIT_MEMBER_NAME(DOMTextField_obj::_hx___regexFont,"__regexFont");
	HX_VISIT_MEMBER_NAME(DOMTextField_obj::_hx___regexCloseFont,"__regexCloseFont");
	HX_VISIT_MEMBER_NAME(DOMTextField_obj::_hx___regexSize,"__regexSize");
};

#endif

::hx::Class DOMTextField_obj::__mClass;

static ::String DOMTextField_obj_sStaticFields[] = {
	HX_("__regexColor",3c,3c,9c,56),
	HX_("__regexFace",e4,c7,66,12),
	HX_("__regexFont",16,71,71,12),
	HX_("__regexCloseFont",00,89,6f,88),
	HX_("__regexSize",08,b4,04,1b),
	HX_("clear",8d,71,5b,48),
	HX_("measureText",2b,fb,80,50),
	HX_("render",56,6b,29,05),
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableClear",d9,1f,f9,ad),
	HX_("__getAttributeMatch",9f,3b,2c,45),
	::String(null())
};

void DOMTextField_obj::__register()
{
	DOMTextField_obj _hx_dummy;
	DOMTextField_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.DOMTextField",e7,e6,d2,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DOMTextField_obj::__GetStatic;
	__mClass->mSetStaticField = &DOMTextField_obj::__SetStatic;
	__mClass->mMarkFunc = DOMTextField_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DOMTextField_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DOMTextField_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DOMTextField_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DOMTextField_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DOMTextField_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DOMTextField_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_737ece1df218ad42_17_boot)
HXDLIN(  17)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_737ece1df218ad42_19_boot)
HXDLIN(  19)		_hx___regexColor =  ::EReg_obj::__alloc( HX_CTX ,HX_("color=(\"#([^\"]+)\"|'#([^']+)')",36,15,0f,76),HX_("i",69,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_737ece1df218ad42_20_boot)
HXDLIN(  20)		_hx___regexFace =  ::EReg_obj::__alloc( HX_CTX ,HX_("face=(\"([^\"]+)\"|'([^']+)')",1e,00,2b,89),HX_("i",69,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_737ece1df218ad42_21_boot)
HXDLIN(  21)		_hx___regexFont =  ::EReg_obj::__alloc( HX_CTX ,HX_("<font ([^>]+)>",eb,24,d0,0a),HX_("gi",22,5a,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_737ece1df218ad42_22_boot)
HXDLIN(  22)		_hx___regexCloseFont =  ::EReg_obj::__alloc( HX_CTX ,HX_("</font>",3c,82,5f,8e),HX_("gi",22,5a,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_737ece1df218ad42_23_boot)
HXDLIN(  23)		_hx___regexSize =  ::EReg_obj::__alloc( HX_CTX ,HX_("size=(\"([^\"]+)\"|'([^']+)')",42,27,be,87),HX_("i",69,00,00,00));
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
