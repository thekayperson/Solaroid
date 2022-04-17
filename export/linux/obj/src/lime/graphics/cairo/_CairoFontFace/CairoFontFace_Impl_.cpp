#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoFontFace_CairoFontFace_Impl_
#include <lime/graphics/cairo/_CairoFontFace/CairoFontFace_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_cd3761928c8426c6_10__new,"lime.graphics.cairo._CairoFontFace.CairoFontFace_Impl_","_new",0x1006fe04,"lime.graphics.cairo._CairoFontFace.CairoFontFace_Impl_._new","lime/graphics/cairo/CairoFontFace.hx",10,0xf163eb1b)
HX_LOCAL_STACK_FRAME(_hx_pos_cd3761928c8426c6_18_status,"lime.graphics.cairo._CairoFontFace.CairoFontFace_Impl_","status",0xcf297e95,"lime.graphics.cairo._CairoFontFace.CairoFontFace_Impl_.status","lime/graphics/cairo/CairoFontFace.hx",18,0xf163eb1b)
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoFontFace{

void CairoFontFace_Impl__obj::__construct() { }

Dynamic CairoFontFace_Impl__obj::__CreateEmpty() { return new CairoFontFace_Impl__obj; }

void *CairoFontFace_Impl__obj::_hx_vtable = 0;

Dynamic CairoFontFace_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CairoFontFace_Impl__obj > _hx_result = new CairoFontFace_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CairoFontFace_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x034e8697;
}

 ::Dynamic CairoFontFace_Impl__obj::_new(){
            	HX_STACKFRAME(&_hx_pos_cd3761928c8426c6_10__new)
HXLINE(  10)
HXDLIN(  10)		HX_VARI(  ::Dynamic,this1) = null();
HXDLIN(  10)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoFontFace_Impl__obj,_new,return )

int CairoFontFace_Impl__obj::status( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_cd3761928c8426c6_18_status)
            	HX_STACK_ARG(this1,"this1")
HXLINE(  18)
HXDLIN(  18)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_cairo_font_face_status(::hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoFontFace_Impl__obj,status,return )


CairoFontFace_Impl__obj::CairoFontFace_Impl__obj()
{
}

bool CairoFontFace_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { outValue = status_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CairoFontFace_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CairoFontFace_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class CairoFontFace_Impl__obj::__mClass;

static ::String CairoFontFace_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("status",32,e7,fb,05),
	::String(null())
};

void CairoFontFace_Impl__obj::__register()
{
	CairoFontFace_Impl__obj _hx_dummy;
	CairoFontFace_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.cairo._CairoFontFace.CairoFontFace_Impl_",ab,3a,9b,cb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoFontFace_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CairoFontFace_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CairoFontFace_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoFontFace_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoFontFace_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoFontFace
