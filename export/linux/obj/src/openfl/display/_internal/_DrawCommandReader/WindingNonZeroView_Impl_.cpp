#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__internal_DrawCommandReader
#include <openfl/display/_internal/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl_display__internal__DrawCommandReader_WindingNonZeroView_Impl_
#include <openfl/display/_internal/_DrawCommandReader/WindingNonZeroView_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_72329a7b963b298a_1028__new,"openfl.display._internal._DrawCommandReader.WindingNonZeroView_Impl_","_new",0xf242e308,"openfl.display._internal._DrawCommandReader.WindingNonZeroView_Impl_._new","openfl/display/_internal/DrawCommandReader.hx",1028,0x29f77eb3)
namespace openfl{
namespace display{
namespace _internal{
namespace _DrawCommandReader{

void WindingNonZeroView_Impl__obj::__construct() { }

Dynamic WindingNonZeroView_Impl__obj::__CreateEmpty() { return new WindingNonZeroView_Impl__obj; }

void *WindingNonZeroView_Impl__obj::_hx_vtable = 0;

Dynamic WindingNonZeroView_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WindingNonZeroView_Impl__obj > _hx_result = new WindingNonZeroView_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool WindingNonZeroView_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f924d3d;
}

 ::openfl::display::_internal::DrawCommandReader WindingNonZeroView_Impl__obj::_new( ::openfl::display::_internal::DrawCommandReader d){
            	HX_STACKFRAME(&_hx_pos_72329a7b963b298a_1028__new)
            	HX_STACK_ARG(d,"d")
HXLINE(1028)
HXDLIN(1028)		HX_VARI(  ::openfl::display::_internal::DrawCommandReader,this1) = d;
HXDLIN(1028)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WindingNonZeroView_Impl__obj,_new,return )


WindingNonZeroView_Impl__obj::WindingNonZeroView_Impl__obj()
{
}

bool WindingNonZeroView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *WindingNonZeroView_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *WindingNonZeroView_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class WindingNonZeroView_Impl__obj::__mClass;

static ::String WindingNonZeroView_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	::String(null())
};

void WindingNonZeroView_Impl__obj::__register()
{
	WindingNonZeroView_Impl__obj _hx_dummy;
	WindingNonZeroView_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal._DrawCommandReader.WindingNonZeroView_Impl_",27,74,71,6d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &WindingNonZeroView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(WindingNonZeroView_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< WindingNonZeroView_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WindingNonZeroView_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WindingNonZeroView_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
} // end namespace _DrawCommandReader
