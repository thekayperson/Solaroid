#include <hxcpp.h>

#ifndef INCLUDED_flixel_util__FlxSignal_Macro
#include <flixel/util/_FlxSignal/Macro.h>
#endif

namespace flixel{
namespace util{
namespace _FlxSignal{

void Macro_obj::__construct() { }

Dynamic Macro_obj::__CreateEmpty() { return new Macro_obj; }

void *Macro_obj::_hx_vtable = 0;

Dynamic Macro_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Macro_obj > _hx_result = new Macro_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Macro_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1b49bae7;
}


Macro_obj::Macro_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Macro_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Macro_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Macro_obj::__mClass;

void Macro_obj::__register()
{
	Macro_obj _hx_dummy;
	Macro_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util._FlxSignal.Macro",b3,29,a6,91);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Macro_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Macro_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Macro_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
} // end namespace _FlxSignal
