#include <hxcpp.h>

#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsTrianglePath
#include <openfl/display/GraphicsTrianglePath.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsPath
#include <openfl/display/IGraphicsPath.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a26b1fc0d062e909_81_new,"openfl.display.GraphicsTrianglePath","new",0x6d94fd54,"openfl.display.GraphicsTrianglePath.new","openfl/display/GraphicsTrianglePath.hx",81,0x122c7fda)
namespace openfl{
namespace display{

void GraphicsTrianglePath_obj::__construct( ::openfl::_Vector::FloatVector vertices, ::openfl::_Vector::IntVector indices, ::openfl::_Vector::FloatVector uvtData, ::Dynamic __o_culling){
            		 ::Dynamic culling = __o_culling;
            		if (::hx::IsNull(__o_culling)) culling = 1;
            	HX_STACKFRAME(&_hx_pos_a26b1fc0d062e909_81_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(vertices,"vertices")
            	HX_STACK_ARG(indices,"indices")
            	HX_STACK_ARG(uvtData,"uvtData")
            	HX_STACK_ARG(culling,"culling")
HXLINE(  81)
HXLINE(  82)		this->vertices = vertices;
HXLINE(  83)		this->indices = indices;
HXLINE(  84)		this->uvtData = uvtData;
HXLINE(  85)		this->culling = culling;
HXLINE(  86)		this->_hx___graphicsDataType = 7;
            	}

Dynamic GraphicsTrianglePath_obj::__CreateEmpty() { return new GraphicsTrianglePath_obj; }

void *GraphicsTrianglePath_obj::_hx_vtable = 0;

Dynamic GraphicsTrianglePath_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicsTrianglePath_obj > _hx_result = new GraphicsTrianglePath_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicsTrianglePath_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7460f18a;
}

static ::openfl::display::IGraphicsData_obj _hx_openfl_display_GraphicsTrianglePath__hx_openfl_display_IGraphicsData= {
};

static ::openfl::display::IGraphicsPath_obj _hx_openfl_display_GraphicsTrianglePath__hx_openfl_display_IGraphicsPath= {
};

void *GraphicsTrianglePath_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xc177ee0c: return &_hx_openfl_display_GraphicsTrianglePath__hx_openfl_display_IGraphicsData;
		case (int)0xc9667d87: return &_hx_openfl_display_GraphicsTrianglePath__hx_openfl_display_IGraphicsPath;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}


::hx::ObjectPtr< GraphicsTrianglePath_obj > GraphicsTrianglePath_obj::__new( ::openfl::_Vector::FloatVector vertices, ::openfl::_Vector::IntVector indices, ::openfl::_Vector::FloatVector uvtData, ::Dynamic __o_culling) {
	::hx::ObjectPtr< GraphicsTrianglePath_obj > __this = new GraphicsTrianglePath_obj();
	__this->__construct(vertices,indices,uvtData,__o_culling);
	return __this;
}

::hx::ObjectPtr< GraphicsTrianglePath_obj > GraphicsTrianglePath_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::_Vector::FloatVector vertices, ::openfl::_Vector::IntVector indices, ::openfl::_Vector::FloatVector uvtData, ::Dynamic __o_culling) {
	GraphicsTrianglePath_obj *__this = (GraphicsTrianglePath_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicsTrianglePath_obj), true, "openfl.display.GraphicsTrianglePath"));
	*(void **)__this = GraphicsTrianglePath_obj::_hx_vtable;
	__this->__construct(vertices,indices,uvtData,__o_culling);
	return __this;
}

GraphicsTrianglePath_obj::GraphicsTrianglePath_obj()
{
}

void GraphicsTrianglePath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GraphicsTrianglePath);
	HX_MARK_MEMBER_NAME(culling,"culling");
	HX_MARK_MEMBER_NAME(indices,"indices");
	HX_MARK_MEMBER_NAME(uvtData,"uvtData");
	HX_MARK_MEMBER_NAME(vertices,"vertices");
	HX_MARK_MEMBER_NAME(_hx___graphicsDataType,"__graphicsDataType");
	HX_MARK_END_CLASS();
}

void GraphicsTrianglePath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(culling,"culling");
	HX_VISIT_MEMBER_NAME(indices,"indices");
	HX_VISIT_MEMBER_NAME(uvtData,"uvtData");
	HX_VISIT_MEMBER_NAME(vertices,"vertices");
	HX_VISIT_MEMBER_NAME(_hx___graphicsDataType,"__graphicsDataType");
}

::hx::Val GraphicsTrianglePath_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"culling") ) { return ::hx::Val( culling ); }
		if (HX_FIELD_EQ(inName,"indices") ) { return ::hx::Val( indices ); }
		if (HX_FIELD_EQ(inName,"uvtData") ) { return ::hx::Val( uvtData ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { return ::hx::Val( vertices ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { return ::hx::Val( _hx___graphicsDataType ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GraphicsTrianglePath_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"culling") ) { culling=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indices") ) { indices=inValue.Cast<  ::openfl::_Vector::IntVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uvtData") ) { uvtData=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { vertices=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { _hx___graphicsDataType=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GraphicsTrianglePath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("culling",70,e2,87,53));
	outFields->push(HX_("indices",27,47,54,e3));
	outFields->push(HX_("uvtData",bd,a6,23,27));
	outFields->push(HX_("vertices",f9,bf,15,6a));
	outFields->push(HX_("__graphicsDataType",0f,5d,4d,46));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GraphicsTrianglePath_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(GraphicsTrianglePath_obj,culling),HX_("culling",70,e2,87,53)},
	{::hx::fsObject /*  ::openfl::_Vector::IntVector */ ,(int)offsetof(GraphicsTrianglePath_obj,indices),HX_("indices",27,47,54,e3)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(GraphicsTrianglePath_obj,uvtData),HX_("uvtData",bd,a6,23,27)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(GraphicsTrianglePath_obj,vertices),HX_("vertices",f9,bf,15,6a)},
	{::hx::fsInt,(int)offsetof(GraphicsTrianglePath_obj,_hx___graphicsDataType),HX_("__graphicsDataType",0f,5d,4d,46)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GraphicsTrianglePath_obj_sStaticStorageInfo = 0;
#endif

static ::String GraphicsTrianglePath_obj_sMemberFields[] = {
	HX_("culling",70,e2,87,53),
	HX_("indices",27,47,54,e3),
	HX_("uvtData",bd,a6,23,27),
	HX_("vertices",f9,bf,15,6a),
	HX_("__graphicsDataType",0f,5d,4d,46),
	::String(null()) };

::hx::Class GraphicsTrianglePath_obj::__mClass;

void GraphicsTrianglePath_obj::__register()
{
	GraphicsTrianglePath_obj _hx_dummy;
	GraphicsTrianglePath_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.GraphicsTrianglePath",62,03,57,36);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GraphicsTrianglePath_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GraphicsTrianglePath_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicsTrianglePath_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicsTrianglePath_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
