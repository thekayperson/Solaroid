#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_ARM_mali_program_binary
#include <lime/graphics/opengl/ext/ARM_mali_program_binary.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_15a8768f3739a6a3_6_new,"lime.graphics.opengl.ext.ARM_mali_program_binary","new",0xfa1b68d7,"lime.graphics.opengl.ext.ARM_mali_program_binary.new","lime/graphics/opengl/ext/ARM_mali_program_binary.hx",6,0xf7b2e99b)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void ARM_mali_program_binary_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_15a8768f3739a6a3_6_new)
            	HX_STACK_THIS(this)
HXLINE(   6)
HXDLIN(   6)		this->MALI_PROGRAM_BINARY_ARM = 36705;
            	}

Dynamic ARM_mali_program_binary_obj::__CreateEmpty() { return new ARM_mali_program_binary_obj; }

void *ARM_mali_program_binary_obj::_hx_vtable = 0;

Dynamic ARM_mali_program_binary_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ARM_mali_program_binary_obj > _hx_result = new ARM_mali_program_binary_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ARM_mali_program_binary_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4a630415;
}


ARM_mali_program_binary_obj::ARM_mali_program_binary_obj()
{
}

::hx::Val ARM_mali_program_binary_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 23:
		if (HX_FIELD_EQ(inName,"MALI_PROGRAM_BINARY_ARM") ) { return ::hx::Val( MALI_PROGRAM_BINARY_ARM ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ARM_mali_program_binary_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 23:
		if (HX_FIELD_EQ(inName,"MALI_PROGRAM_BINARY_ARM") ) { MALI_PROGRAM_BINARY_ARM=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ARM_mali_program_binary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("MALI_PROGRAM_BINARY_ARM",e7,44,59,db));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ARM_mali_program_binary_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ARM_mali_program_binary_obj,MALI_PROGRAM_BINARY_ARM),HX_("MALI_PROGRAM_BINARY_ARM",e7,44,59,db)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ARM_mali_program_binary_obj_sStaticStorageInfo = 0;
#endif

static ::String ARM_mali_program_binary_obj_sMemberFields[] = {
	HX_("MALI_PROGRAM_BINARY_ARM",e7,44,59,db),
	::String(null()) };

::hx::Class ARM_mali_program_binary_obj::__mClass;

void ARM_mali_program_binary_obj::__register()
{
	ARM_mali_program_binary_obj _hx_dummy;
	ARM_mali_program_binary_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.ARM_mali_program_binary",65,b1,3a,22);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ARM_mali_program_binary_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ARM_mali_program_binary_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ARM_mali_program_binary_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ARM_mali_program_binary_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
