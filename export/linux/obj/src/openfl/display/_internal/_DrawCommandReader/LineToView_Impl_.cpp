#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__internal_DrawCommandBuffer
#include <openfl/display/_internal/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandReader
#include <openfl/display/_internal/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl_display__internal__DrawCommandReader_LineToView_Impl_
#include <openfl/display/_internal/_DrawCommandReader/LineToView_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_29dccb6eed6a8294_946__new,"openfl.display._internal._DrawCommandReader.LineToView_Impl_","_new",0x04dd3ad4,"openfl.display._internal._DrawCommandReader.LineToView_Impl_._new","openfl/display/_internal/DrawCommandReader.hx",946,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_29dccb6eed6a8294_955_get_x,"openfl.display._internal._DrawCommandReader.LineToView_Impl_","get_x",0xd203447c,"openfl.display._internal._DrawCommandReader.LineToView_Impl_.get_x","openfl/display/_internal/DrawCommandReader.hx",955,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_29dccb6eed6a8294_962_get_y,"openfl.display._internal._DrawCommandReader.LineToView_Impl_","get_y",0xd203447d,"openfl.display._internal._DrawCommandReader.LineToView_Impl_.get_y","openfl/display/_internal/DrawCommandReader.hx",962,0x29f77eb3)
namespace openfl{
namespace display{
namespace _internal{
namespace _DrawCommandReader{

void LineToView_Impl__obj::__construct() { }

Dynamic LineToView_Impl__obj::__CreateEmpty() { return new LineToView_Impl__obj; }

void *LineToView_Impl__obj::_hx_vtable = 0;

Dynamic LineToView_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LineToView_Impl__obj > _hx_result = new LineToView_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LineToView_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7d109515;
}

 ::openfl::display::_internal::DrawCommandReader LineToView_Impl__obj::_new( ::openfl::display::_internal::DrawCommandReader d){
            	HX_STACKFRAME(&_hx_pos_29dccb6eed6a8294_946__new)
            	HX_STACK_ARG(d,"d")
HXLINE( 946)
HXDLIN( 946)		HX_VARI(  ::openfl::display::_internal::DrawCommandReader,this1) = d;
HXDLIN( 946)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineToView_Impl__obj,_new,return )

Float LineToView_Impl__obj::get_x( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_29dccb6eed6a8294_955_get_x)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 955)
HXDLIN( 955)		return this1->buffer->f->__get(this1->fPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineToView_Impl__obj,get_x,return )

Float LineToView_Impl__obj::get_y( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_29dccb6eed6a8294_962_get_y)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 962)
HXDLIN( 962)		return this1->buffer->f->__get((this1->fPos + 1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineToView_Impl__obj,get_y,return )


LineToView_Impl__obj::LineToView_Impl__obj()
{
}

bool LineToView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *LineToView_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *LineToView_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class LineToView_Impl__obj::__mClass;

static ::String LineToView_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get_x",4f,a5,60,91),
	HX_("get_y",50,a5,60,91),
	::String(null())
};

void LineToView_Impl__obj::__register()
{
	LineToView_Impl__obj _hx_dummy;
	LineToView_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal._DrawCommandReader.LineToView_Impl_",db,2f,0e,da);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LineToView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LineToView_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< LineToView_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LineToView_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LineToView_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
} // end namespace _DrawCommandReader
