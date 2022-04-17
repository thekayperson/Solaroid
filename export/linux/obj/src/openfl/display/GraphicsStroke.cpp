#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_openfl_display_GraphicsStroke
#include <openfl/display/GraphicsStroke.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsFill
#include <openfl/display/IGraphicsFill.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsStroke
#include <openfl/display/IGraphicsStroke.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_55614d7317440053_216_new,"openfl.display.GraphicsStroke","new",0x5684f03f,"openfl.display.GraphicsStroke.new","openfl/display/GraphicsStroke.hx",216,0x5e4870cf)
namespace openfl{
namespace display{

void GraphicsStroke_obj::__construct( ::Dynamic thickness,::hx::Null< bool >  __o_pixelHinting, ::Dynamic __o_scaleMode, ::Dynamic __o_caps, ::Dynamic __o_joints,::hx::Null< Float >  __o_miterLimit,::Dynamic fill){
            		bool pixelHinting = __o_pixelHinting.Default(false);
            		 ::Dynamic scaleMode = __o_scaleMode;
            		if (::hx::IsNull(__o_scaleMode)) scaleMode = 2;
            		 ::Dynamic caps = __o_caps;
            		if (::hx::IsNull(__o_caps)) caps = 0;
            		 ::Dynamic joints = __o_joints;
            		if (::hx::IsNull(__o_joints)) joints = 2;
            		Float miterLimit = __o_miterLimit.Default(3);
            	HX_STACKFRAME(&_hx_pos_55614d7317440053_216_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(thickness,"thickness")
            	HX_STACK_ARG(pixelHinting,"pixelHinting")
            	HX_STACK_ARG(scaleMode,"scaleMode")
            	HX_STACK_ARG(caps,"caps")
            	HX_STACK_ARG(joints,"joints")
            	HX_STACK_ARG(miterLimit,"miterLimit")
            	HX_STACK_ARG(fill,"fill")
HXLINE( 216)
HXLINE( 217)		if (::hx::IsNull( thickness )) {
HXLINE( 217)			thickness = ::Math_obj::NaN;
            		}
HXLINE( 219)		this->caps = caps;
HXLINE( 220)		this->fill = fill;
HXLINE( 221)		this->joints = joints;
HXLINE( 222)		this->miterLimit = miterLimit;
HXLINE( 223)		this->pixelHinting = pixelHinting;
HXLINE( 224)		this->scaleMode = scaleMode;
HXLINE( 225)		this->thickness = ( (Float)(thickness) );
HXLINE( 226)		this->_hx___graphicsDataType = 0;
            	}

Dynamic GraphicsStroke_obj::__CreateEmpty() { return new GraphicsStroke_obj; }

void *GraphicsStroke_obj::_hx_vtable = 0;

Dynamic GraphicsStroke_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicsStroke_obj > _hx_result = new GraphicsStroke_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool GraphicsStroke_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x13109a49;
}

static ::openfl::display::IGraphicsStroke_obj _hx_openfl_display_GraphicsStroke__hx_openfl_display_IGraphicsStroke= {
};

static ::openfl::display::IGraphicsData_obj _hx_openfl_display_GraphicsStroke__hx_openfl_display_IGraphicsData= {
};

void *GraphicsStroke_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xf088881a: return &_hx_openfl_display_GraphicsStroke__hx_openfl_display_IGraphicsStroke;
		case (int)0xc177ee0c: return &_hx_openfl_display_GraphicsStroke__hx_openfl_display_IGraphicsData;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}


::hx::ObjectPtr< GraphicsStroke_obj > GraphicsStroke_obj::__new( ::Dynamic thickness,::hx::Null< bool >  __o_pixelHinting, ::Dynamic __o_scaleMode, ::Dynamic __o_caps, ::Dynamic __o_joints,::hx::Null< Float >  __o_miterLimit,::Dynamic fill) {
	::hx::ObjectPtr< GraphicsStroke_obj > __this = new GraphicsStroke_obj();
	__this->__construct(thickness,__o_pixelHinting,__o_scaleMode,__o_caps,__o_joints,__o_miterLimit,fill);
	return __this;
}

::hx::ObjectPtr< GraphicsStroke_obj > GraphicsStroke_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic thickness,::hx::Null< bool >  __o_pixelHinting, ::Dynamic __o_scaleMode, ::Dynamic __o_caps, ::Dynamic __o_joints,::hx::Null< Float >  __o_miterLimit,::Dynamic fill) {
	GraphicsStroke_obj *__this = (GraphicsStroke_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicsStroke_obj), true, "openfl.display.GraphicsStroke"));
	*(void **)__this = GraphicsStroke_obj::_hx_vtable;
	__this->__construct(thickness,__o_pixelHinting,__o_scaleMode,__o_caps,__o_joints,__o_miterLimit,fill);
	return __this;
}

GraphicsStroke_obj::GraphicsStroke_obj()
{
}

void GraphicsStroke_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GraphicsStroke);
	HX_MARK_MEMBER_NAME(caps,"caps");
	HX_MARK_MEMBER_NAME(fill,"fill");
	HX_MARK_MEMBER_NAME(joints,"joints");
	HX_MARK_MEMBER_NAME(miterLimit,"miterLimit");
	HX_MARK_MEMBER_NAME(pixelHinting,"pixelHinting");
	HX_MARK_MEMBER_NAME(scaleMode,"scaleMode");
	HX_MARK_MEMBER_NAME(thickness,"thickness");
	HX_MARK_MEMBER_NAME(_hx___graphicsDataType,"__graphicsDataType");
	HX_MARK_END_CLASS();
}

void GraphicsStroke_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(caps,"caps");
	HX_VISIT_MEMBER_NAME(fill,"fill");
	HX_VISIT_MEMBER_NAME(joints,"joints");
	HX_VISIT_MEMBER_NAME(miterLimit,"miterLimit");
	HX_VISIT_MEMBER_NAME(pixelHinting,"pixelHinting");
	HX_VISIT_MEMBER_NAME(scaleMode,"scaleMode");
	HX_VISIT_MEMBER_NAME(thickness,"thickness");
	HX_VISIT_MEMBER_NAME(_hx___graphicsDataType,"__graphicsDataType");
}

::hx::Val GraphicsStroke_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"caps") ) { return ::hx::Val( caps ); }
		if (HX_FIELD_EQ(inName,"fill") ) { return ::hx::Val( fill ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"joints") ) { return ::hx::Val( joints ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scaleMode") ) { return ::hx::Val( scaleMode ); }
		if (HX_FIELD_EQ(inName,"thickness") ) { return ::hx::Val( thickness ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"miterLimit") ) { return ::hx::Val( miterLimit ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pixelHinting") ) { return ::hx::Val( pixelHinting ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { return ::hx::Val( _hx___graphicsDataType ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GraphicsStroke_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"caps") ) { caps=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fill") ) { fill=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"joints") ) { joints=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scaleMode") ) { scaleMode=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"thickness") ) { thickness=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"miterLimit") ) { miterLimit=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pixelHinting") ) { pixelHinting=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { _hx___graphicsDataType=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GraphicsStroke_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("caps",21,1c,ba,41));
	outFields->push(HX_("fill",83,ce,bb,43));
	outFields->push(HX_("joints",e9,e7,09,91));
	outFields->push(HX_("miterLimit",f6,5c,6a,54));
	outFields->push(HX_("pixelHinting",d5,9b,fb,6c));
	outFields->push(HX_("scaleMode",0d,db,d3,2b));
	outFields->push(HX_("thickness",74,f1,66,5a));
	outFields->push(HX_("__graphicsDataType",0f,5d,4d,46));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GraphicsStroke_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(GraphicsStroke_obj,caps),HX_("caps",21,1c,ba,41)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(GraphicsStroke_obj,fill),HX_("fill",83,ce,bb,43)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(GraphicsStroke_obj,joints),HX_("joints",e9,e7,09,91)},
	{::hx::fsFloat,(int)offsetof(GraphicsStroke_obj,miterLimit),HX_("miterLimit",f6,5c,6a,54)},
	{::hx::fsBool,(int)offsetof(GraphicsStroke_obj,pixelHinting),HX_("pixelHinting",d5,9b,fb,6c)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(GraphicsStroke_obj,scaleMode),HX_("scaleMode",0d,db,d3,2b)},
	{::hx::fsFloat,(int)offsetof(GraphicsStroke_obj,thickness),HX_("thickness",74,f1,66,5a)},
	{::hx::fsInt,(int)offsetof(GraphicsStroke_obj,_hx___graphicsDataType),HX_("__graphicsDataType",0f,5d,4d,46)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GraphicsStroke_obj_sStaticStorageInfo = 0;
#endif

static ::String GraphicsStroke_obj_sMemberFields[] = {
	HX_("caps",21,1c,ba,41),
	HX_("fill",83,ce,bb,43),
	HX_("joints",e9,e7,09,91),
	HX_("miterLimit",f6,5c,6a,54),
	HX_("pixelHinting",d5,9b,fb,6c),
	HX_("scaleMode",0d,db,d3,2b),
	HX_("thickness",74,f1,66,5a),
	HX_("__graphicsDataType",0f,5d,4d,46),
	::String(null()) };

::hx::Class GraphicsStroke_obj::__mClass;

void GraphicsStroke_obj::__register()
{
	GraphicsStroke_obj _hx_dummy;
	GraphicsStroke_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.GraphicsStroke",cd,64,a2,a3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GraphicsStroke_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GraphicsStroke_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicsStroke_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicsStroke_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
