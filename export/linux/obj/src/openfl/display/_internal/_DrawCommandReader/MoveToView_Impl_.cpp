#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__internal_DrawCommandBuffer
#include <openfl/display/_internal/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandReader
#include <openfl/display/_internal/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl_display__internal__DrawCommandReader_MoveToView_Impl_
#include <openfl/display/_internal/_DrawCommandReader/MoveToView_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_30f77dce503ebbb9_968__new,"openfl.display._internal._DrawCommandReader.MoveToView_Impl_","_new",0xc54d1f17,"openfl.display._internal._DrawCommandReader.MoveToView_Impl_._new","openfl/display/_internal/DrawCommandReader.hx",968,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_30f77dce503ebbb9_977_get_x,"openfl.display._internal._DrawCommandReader.MoveToView_Impl_","get_x",0x737b1ad9,"openfl.display._internal._DrawCommandReader.MoveToView_Impl_.get_x","openfl/display/_internal/DrawCommandReader.hx",977,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_30f77dce503ebbb9_984_get_y,"openfl.display._internal._DrawCommandReader.MoveToView_Impl_","get_y",0x737b1ada,"openfl.display._internal._DrawCommandReader.MoveToView_Impl_.get_y","openfl/display/_internal/DrawCommandReader.hx",984,0x29f77eb3)
namespace openfl{
namespace display{
namespace _internal{
namespace _DrawCommandReader{

void MoveToView_Impl__obj::__construct() { }

Dynamic MoveToView_Impl__obj::__CreateEmpty() { return new MoveToView_Impl__obj; }

void *MoveToView_Impl__obj::_hx_vtable = 0;

Dynamic MoveToView_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MoveToView_Impl__obj > _hx_result = new MoveToView_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MoveToView_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x46cd1386;
}

 ::openfl::display::_internal::DrawCommandReader MoveToView_Impl__obj::_new( ::openfl::display::_internal::DrawCommandReader d){
            	HX_STACKFRAME(&_hx_pos_30f77dce503ebbb9_968__new)
            	HX_STACK_ARG(d,"d")
HXLINE( 968)
HXDLIN( 968)		HX_VARI(  ::openfl::display::_internal::DrawCommandReader,this1) = d;
HXDLIN( 968)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MoveToView_Impl__obj,_new,return )

Float MoveToView_Impl__obj::get_x( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_30f77dce503ebbb9_977_get_x)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 977)
HXDLIN( 977)		return this1->buffer->f->__get(this1->fPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MoveToView_Impl__obj,get_x,return )

Float MoveToView_Impl__obj::get_y( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_30f77dce503ebbb9_984_get_y)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 984)
HXDLIN( 984)		return this1->buffer->f->__get((this1->fPos + 1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MoveToView_Impl__obj,get_y,return )


MoveToView_Impl__obj::MoveToView_Impl__obj()
{
}

bool MoveToView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { outValue = get_x_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_y") ) { outValue = get_y_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MoveToView_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *MoveToView_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class MoveToView_Impl__obj::__mClass;

static ::String MoveToView_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get_x",4f,a5,60,91),
	HX_("get_y",50,a5,60,91),
	::String(null())
};

void MoveToView_Impl__obj::__register()
{
	MoveToView_Impl__obj _hx_dummy;
	MoveToView_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal._DrawCommandReader.MoveToView_Impl_",78,b2,8e,34);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MoveToView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MoveToView_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< MoveToView_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MoveToView_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MoveToView_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
} // end namespace _DrawCommandReader
