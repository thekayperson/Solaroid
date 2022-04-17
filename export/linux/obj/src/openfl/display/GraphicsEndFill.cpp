#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_GraphicsEndFill
#include <openfl/display/GraphicsEndFill.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsFill
#include <openfl/display/IGraphicsFill.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_60eb5008390fcdf2_28_new,"openfl.display.GraphicsEndFill","new",0x1f8242bb,"openfl.display.GraphicsEndFill.new","openfl/display/GraphicsEndFill.hx",28,0x45937e97)
namespace openfl{
namespace display{

void GraphicsEndFill_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_60eb5008390fcdf2_28_new)
            	HX_STACK_THIS(this)
HXLINE(  28)
HXLINE(  29)		this->_hx___graphicsDataType = 5;
HXLINE(  30)		this->_hx___graphicsFillType = 3;
            	}

Dynamic GraphicsEndFill_obj::__CreateEmpty() { return new GraphicsEndFill_obj; }

void *GraphicsEndFill_obj::_hx_vtable = 0;

Dynamic GraphicsEndFill_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicsEndFill_obj > _hx_result = new GraphicsEndFill_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GraphicsEndFill_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x32fa8c21;
}

static ::openfl::display::IGraphicsData_obj _hx_openfl_display_GraphicsEndFill__hx_openfl_display_IGraphicsData= {
};

static ::openfl::display::IGraphicsFill_obj _hx_openfl_display_GraphicsEndFill__hx_openfl_display_IGraphicsFill= {
};

void *GraphicsEndFill_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xc177ee0c: return &_hx_openfl_display_GraphicsEndFill__hx_openfl_display_IGraphicsData;
		case (int)0xc2d06665: return &_hx_openfl_display_GraphicsEndFill__hx_openfl_display_IGraphicsFill;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}


::hx::ObjectPtr< GraphicsEndFill_obj > GraphicsEndFill_obj::__new() {
	::hx::ObjectPtr< GraphicsEndFill_obj > __this = new GraphicsEndFill_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< GraphicsEndFill_obj > GraphicsEndFill_obj::__alloc(::hx::Ctx *_hx_ctx) {
	GraphicsEndFill_obj *__this = (GraphicsEndFill_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicsEndFill_obj), false, "openfl.display.GraphicsEndFill"));
	*(void **)__this = GraphicsEndFill_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

GraphicsEndFill_obj::GraphicsEndFill_obj()
{
}

::hx::Val GraphicsEndFill_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { return ::hx::Val( _hx___graphicsDataType ); }
		if (HX_FIELD_EQ(inName,"__graphicsFillType") ) { return ::hx::Val( _hx___graphicsFillType ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GraphicsEndFill_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { _hx___graphicsDataType=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__graphicsFillType") ) { _hx___graphicsFillType=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GraphicsEndFill_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("__graphicsDataType",0f,5d,4d,46));
	outFields->push(HX_("__graphicsFillType",e8,75,eb,27));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GraphicsEndFill_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(GraphicsEndFill_obj,_hx___graphicsDataType),HX_("__graphicsDataType",0f,5d,4d,46)},
	{::hx::fsInt,(int)offsetof(GraphicsEndFill_obj,_hx___graphicsFillType),HX_("__graphicsFillType",e8,75,eb,27)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GraphicsEndFill_obj_sStaticStorageInfo = 0;
#endif

static ::String GraphicsEndFill_obj_sMemberFields[] = {
	HX_("__graphicsDataType",0f,5d,4d,46),
	HX_("__graphicsFillType",e8,75,eb,27),
	::String(null()) };

::hx::Class GraphicsEndFill_obj::__mClass;

void GraphicsEndFill_obj::__register()
{
	GraphicsEndFill_obj _hx_dummy;
	GraphicsEndFill_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.GraphicsEndFill",49,c9,6d,b3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GraphicsEndFill_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GraphicsEndFill_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicsEndFill_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicsEndFill_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
