#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl__GLFramebuffer_GLFramebuffer_Impl_
#include <lime/graphics/opengl/_GLFramebuffer/GLFramebuffer_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_09e78a4290817425_12_fromInt,"lime.graphics.opengl._GLFramebuffer.GLFramebuffer_Impl_","fromInt",0xbb8569af,"lime.graphics.opengl._GLFramebuffer.GLFramebuffer_Impl_.fromInt","lime/graphics/opengl/GLFramebuffer.hx",12,0x2d1110cc)
namespace lime{
namespace graphics{
namespace opengl{
namespace _GLFramebuffer{

void GLFramebuffer_Impl__obj::__construct() { }

Dynamic GLFramebuffer_Impl__obj::__CreateEmpty() { return new GLFramebuffer_Impl__obj; }

void *GLFramebuffer_Impl__obj::_hx_vtable = 0;

Dynamic GLFramebuffer_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GLFramebuffer_Impl__obj > _hx_result = new GLFramebuffer_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GLFramebuffer_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4fda1710;
}

 ::lime::graphics::opengl::GLObject GLFramebuffer_Impl__obj::fromInt(int id){
            	HX_STACKFRAME(&_hx_pos_09e78a4290817425_12_fromInt)
            	HX_STACK_ARG(id,"id")
HXLINE(  12)
HXDLIN(  12)		return ::lime::graphics::opengl::GLObject_obj::fromInt(5,id);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLFramebuffer_Impl__obj,fromInt,return )


GLFramebuffer_Impl__obj::GLFramebuffer_Impl__obj()
{
}

bool GLFramebuffer_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { outValue = fromInt_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GLFramebuffer_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GLFramebuffer_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class GLFramebuffer_Impl__obj::__mClass;

static ::String GLFramebuffer_Impl__obj_sStaticFields[] = {
	HX_("fromInt",a5,dd,fa,57),
	::String(null())
};

void GLFramebuffer_Impl__obj::__register()
{
	GLFramebuffer_Impl__obj _hx_dummy;
	GLFramebuffer_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl._GLFramebuffer.GLFramebuffer_Impl_",78,d2,2e,55);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLFramebuffer_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GLFramebuffer_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GLFramebuffer_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLFramebuffer_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLFramebuffer_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace _GLFramebuffer
