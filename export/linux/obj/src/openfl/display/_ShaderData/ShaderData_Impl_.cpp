#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_display__ShaderData_ShaderData_Impl_
#include <openfl/display/_ShaderData/ShaderData_Impl_.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d4a02bef177fd982_103__new,"openfl.display._ShaderData.ShaderData_Impl_","_new",0xf95c2d76,"openfl.display._ShaderData.ShaderData_Impl_._new","openfl/display/ShaderData.hx",103,0xa8261943)
namespace openfl{
namespace display{
namespace _ShaderData{

void ShaderData_Impl__obj::__construct() { }

Dynamic ShaderData_Impl__obj::__CreateEmpty() { return new ShaderData_Impl__obj; }

void *ShaderData_Impl__obj::_hx_vtable = 0;

Dynamic ShaderData_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShaderData_Impl__obj > _hx_result = new ShaderData_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ShaderData_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x64f2a7ab;
}

 ::Dynamic ShaderData_Impl__obj::_new( ::openfl::utils::ByteArrayData byteArray){
            	HX_STACKFRAME(&_hx_pos_d4a02bef177fd982_103__new)
            	HX_STACK_ARG(byteArray,"byteArray")
HXLINE( 103)
HXDLIN( 103)		HX_VARI(  ::Dynamic,this1) =  ::Dynamic(::hx::Anon_obj::Create(0));
HXDLIN( 103)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ShaderData_Impl__obj,_new,return )


ShaderData_Impl__obj::ShaderData_Impl__obj()
{
}

bool ShaderData_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ShaderData_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ShaderData_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class ShaderData_Impl__obj::__mClass;

static ::String ShaderData_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	::String(null())
};

void ShaderData_Impl__obj::__register()
{
	ShaderData_Impl__obj _hx_dummy;
	ShaderData_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._ShaderData.ShaderData_Impl_",79,40,78,e7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ShaderData_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ShaderData_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ShaderData_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShaderData_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShaderData_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
} // end namespace _ShaderData
