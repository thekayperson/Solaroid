#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl__GLTexture_GLTexture_Impl_
#include <lime/graphics/opengl/_GLTexture/GLTexture_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_58c1710013d07f8a_12_fromInt,"lime.graphics.opengl._GLTexture.GLTexture_Impl_","fromInt",0x91dae20b,"lime.graphics.opengl._GLTexture.GLTexture_Impl_.fromInt","lime/graphics/opengl/GLTexture.hx",12,0xaab4bc1e)
namespace lime{
namespace graphics{
namespace opengl{
namespace _GLTexture{

void GLTexture_Impl__obj::__construct() { }

Dynamic GLTexture_Impl__obj::__CreateEmpty() { return new GLTexture_Impl__obj; }

void *GLTexture_Impl__obj::_hx_vtable = 0;

Dynamic GLTexture_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GLTexture_Impl__obj > _hx_result = new GLTexture_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GLTexture_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x416835d0;
}

 ::lime::graphics::opengl::GLObject GLTexture_Impl__obj::fromInt(int id){
            	HX_STACKFRAME(&_hx_pos_58c1710013d07f8a_12_fromInt)
            	HX_STACK_ARG(id,"id")
HXLINE(  12)
HXDLIN(  12)		return ::lime::graphics::opengl::GLObject_obj::fromInt(4,id);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLTexture_Impl__obj,fromInt,return )


GLTexture_Impl__obj::GLTexture_Impl__obj()
{
}

bool GLTexture_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { outValue = fromInt_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GLTexture_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GLTexture_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class GLTexture_Impl__obj::__mClass;

static ::String GLTexture_Impl__obj_sStaticFields[] = {
	HX_("fromInt",a5,dd,fa,57),
	::String(null())
};

void GLTexture_Impl__obj::__register()
{
	GLTexture_Impl__obj _hx_dummy;
	GLTexture_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl._GLTexture.GLTexture_Impl_",d4,8e,a6,44);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLTexture_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GLTexture_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GLTexture_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLTexture_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLTexture_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace _GLTexture
