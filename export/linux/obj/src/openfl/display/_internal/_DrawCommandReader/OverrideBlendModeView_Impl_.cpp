#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__internal_DrawCommandBuffer
#include <openfl/display/_internal/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandReader
#include <openfl/display/_internal/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl_display__internal__DrawCommandReader_OverrideBlendModeView_Impl_
#include <openfl/display/_internal/_DrawCommandReader/OverrideBlendModeView_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_67c8a03ed406a336_990__new,"openfl.display._internal._DrawCommandReader.OverrideBlendModeView_Impl_","_new",0xb61c87c9,"openfl.display._internal._DrawCommandReader.OverrideBlendModeView_Impl_._new","openfl/display/_internal/DrawCommandReader.hx",990,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_67c8a03ed406a336_999_get_blendMode,"openfl.display._internal._DrawCommandReader.OverrideBlendModeView_Impl_","get_blendMode",0x56a0b8c3,"openfl.display._internal._DrawCommandReader.OverrideBlendModeView_Impl_.get_blendMode","openfl/display/_internal/DrawCommandReader.hx",999,0x29f77eb3)
namespace openfl{
namespace display{
namespace _internal{
namespace _DrawCommandReader{

void OverrideBlendModeView_Impl__obj::__construct() { }

Dynamic OverrideBlendModeView_Impl__obj::__CreateEmpty() { return new OverrideBlendModeView_Impl__obj; }

void *OverrideBlendModeView_Impl__obj::_hx_vtable = 0;

Dynamic OverrideBlendModeView_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OverrideBlendModeView_Impl__obj > _hx_result = new OverrideBlendModeView_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OverrideBlendModeView_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7c410928;
}

 ::openfl::display::_internal::DrawCommandReader OverrideBlendModeView_Impl__obj::_new( ::openfl::display::_internal::DrawCommandReader d){
            	HX_STACKFRAME(&_hx_pos_67c8a03ed406a336_990__new)
            	HX_STACK_ARG(d,"d")
HXLINE( 990)
HXDLIN( 990)		HX_VARI(  ::openfl::display::_internal::DrawCommandReader,this1) = d;
HXDLIN( 990)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OverrideBlendModeView_Impl__obj,_new,return )

 ::Dynamic OverrideBlendModeView_Impl__obj::get_blendMode( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_67c8a03ed406a336_999_get_blendMode)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 999)
HXDLIN( 999)		return this1->buffer->o->__get(this1->oPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OverrideBlendModeView_Impl__obj,get_blendMode,return )


OverrideBlendModeView_Impl__obj::OverrideBlendModeView_Impl__obj()
{
}

bool OverrideBlendModeView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_blendMode") ) { outValue = get_blendMode_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *OverrideBlendModeView_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *OverrideBlendModeView_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class OverrideBlendModeView_Impl__obj::__mClass;

static ::String OverrideBlendModeView_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get_blendMode",2b,b8,9b,cd),
	::String(null())
};

void OverrideBlendModeView_Impl__obj::__register()
{
	OverrideBlendModeView_Impl__obj _hx_dummy;
	OverrideBlendModeView_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal._DrawCommandReader.OverrideBlendModeView_Impl_",06,07,9c,15);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OverrideBlendModeView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(OverrideBlendModeView_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< OverrideBlendModeView_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OverrideBlendModeView_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OverrideBlendModeView_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
} // end namespace _DrawCommandReader
