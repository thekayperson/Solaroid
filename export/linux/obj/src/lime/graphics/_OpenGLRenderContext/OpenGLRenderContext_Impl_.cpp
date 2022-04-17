#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics__OpenGLRenderContext_OpenGLRenderContext_Impl_
#include <lime/graphics/_OpenGLRenderContext/OpenGLRenderContext_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0cee4d67e8e0740c_41_fromRenderContext,"lime.graphics._OpenGLRenderContext.OpenGLRenderContext_Impl_","fromRenderContext",0xc98e9ef2,"lime.graphics._OpenGLRenderContext.OpenGLRenderContext_Impl_.fromRenderContext","lime/graphics/OpenGLRenderContext.hx",41,0x007bcf9e)
namespace lime{
namespace graphics{
namespace _OpenGLRenderContext{

void OpenGLRenderContext_Impl__obj::__construct() { }

Dynamic OpenGLRenderContext_Impl__obj::__CreateEmpty() { return new OpenGLRenderContext_Impl__obj; }

void *OpenGLRenderContext_Impl__obj::_hx_vtable = 0;

Dynamic OpenGLRenderContext_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OpenGLRenderContext_Impl__obj > _hx_result = new OpenGLRenderContext_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OpenGLRenderContext_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1501f9df;
}

 ::lime::_internal::backend::native::NativeOpenGLRenderContext OpenGLRenderContext_Impl__obj::fromRenderContext( ::lime::graphics::RenderContext context){
            	HX_STACKFRAME(&_hx_pos_0cee4d67e8e0740c_41_fromRenderContext)
            	HX_STACK_ARG(context,"context")
HXLINE(  41)
HXDLIN(  41)		return context->gl;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenGLRenderContext_Impl__obj,fromRenderContext,return )


OpenGLRenderContext_Impl__obj::OpenGLRenderContext_Impl__obj()
{
}

bool OpenGLRenderContext_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"fromRenderContext") ) { outValue = fromRenderContext_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *OpenGLRenderContext_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *OpenGLRenderContext_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class OpenGLRenderContext_Impl__obj::__mClass;

static ::String OpenGLRenderContext_Impl__obj_sStaticFields[] = {
	HX_("fromRenderContext",6f,19,d4,ba),
	::String(null())
};

void OpenGLRenderContext_Impl__obj::__register()
{
	OpenGLRenderContext_Impl__obj _hx_dummy;
	OpenGLRenderContext_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics._OpenGLRenderContext.OpenGLRenderContext_Impl_",31,79,32,26);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OpenGLRenderContext_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(OpenGLRenderContext_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< OpenGLRenderContext_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OpenGLRenderContext_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OpenGLRenderContext_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace _OpenGLRenderContext
