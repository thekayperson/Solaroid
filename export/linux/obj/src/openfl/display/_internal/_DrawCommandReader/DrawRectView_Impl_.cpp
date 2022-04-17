#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__internal_DrawCommandBuffer
#include <openfl/display/_internal/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandReader
#include <openfl/display/_internal/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl_display__internal__DrawCommandReader_DrawRectView_Impl_
#include <openfl/display/_internal/_DrawCommandReader/DrawRectView_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_9f1d40122943ef17_652__new,"openfl.display._internal._DrawCommandReader.DrawRectView_Impl_","_new",0xf7c4b27b,"openfl.display._internal._DrawCommandReader.DrawRectView_Impl_._new","openfl/display/_internal/DrawCommandReader.hx",652,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_9f1d40122943ef17_661_get_x,"openfl.display._internal._DrawCommandReader.DrawRectView_Impl_","get_x",0x69a47ef5,"openfl.display._internal._DrawCommandReader.DrawRectView_Impl_.get_x","openfl/display/_internal/DrawCommandReader.hx",661,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_9f1d40122943ef17_668_get_y,"openfl.display._internal._DrawCommandReader.DrawRectView_Impl_","get_y",0x69a47ef6,"openfl.display._internal._DrawCommandReader.DrawRectView_Impl_.get_y","openfl/display/_internal/DrawCommandReader.hx",668,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_9f1d40122943ef17_675_get_width,"openfl.display._internal._DrawCommandReader.DrawRectView_Impl_","get_width",0x4c34b703,"openfl.display._internal._DrawCommandReader.DrawRectView_Impl_.get_width","openfl/display/_internal/DrawCommandReader.hx",675,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_9f1d40122943ef17_682_get_height,"openfl.display._internal._DrawCommandReader.DrawRectView_Impl_","get_height",0x183ae44a,"openfl.display._internal._DrawCommandReader.DrawRectView_Impl_.get_height","openfl/display/_internal/DrawCommandReader.hx",682,0x29f77eb3)
namespace openfl{
namespace display{
namespace _internal{
namespace _DrawCommandReader{

void DrawRectView_Impl__obj::__construct() { }

Dynamic DrawRectView_Impl__obj::__CreateEmpty() { return new DrawRectView_Impl__obj; }

void *DrawRectView_Impl__obj::_hx_vtable = 0;

Dynamic DrawRectView_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DrawRectView_Impl__obj > _hx_result = new DrawRectView_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DrawRectView_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6ee53c86;
}

 ::openfl::display::_internal::DrawCommandReader DrawRectView_Impl__obj::_new( ::openfl::display::_internal::DrawCommandReader d){
            	HX_STACKFRAME(&_hx_pos_9f1d40122943ef17_652__new)
            	HX_STACK_ARG(d,"d")
HXLINE( 652)
HXDLIN( 652)		HX_VARI(  ::openfl::display::_internal::DrawCommandReader,this1) = d;
HXDLIN( 652)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawRectView_Impl__obj,_new,return )

Float DrawRectView_Impl__obj::get_x( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_9f1d40122943ef17_661_get_x)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 661)
HXDLIN( 661)		return this1->buffer->f->__get(this1->fPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawRectView_Impl__obj,get_x,return )

Float DrawRectView_Impl__obj::get_y( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_9f1d40122943ef17_668_get_y)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 668)
HXDLIN( 668)		return this1->buffer->f->__get((this1->fPos + 1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawRectView_Impl__obj,get_y,return )

Float DrawRectView_Impl__obj::get_width( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_9f1d40122943ef17_675_get_width)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 675)
HXDLIN( 675)		return this1->buffer->f->__get((this1->fPos + 2));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawRectView_Impl__obj,get_width,return )

Float DrawRectView_Impl__obj::get_height( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_9f1d40122943ef17_682_get_height)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 682)
HXDLIN( 682)		return this1->buffer->f->__get((this1->fPos + 3));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawRectView_Impl__obj,get_height,return )


DrawRectView_Impl__obj::DrawRectView_Impl__obj()
{
}

bool DrawRectView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { outValue = get_x_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_y") ) { outValue = get_y_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { outValue = get_width_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { outValue = get_height_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DrawRectView_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DrawRectView_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class DrawRectView_Impl__obj::__mClass;

static ::String DrawRectView_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get_x",4f,a5,60,91),
	HX_("get_y",50,a5,60,91),
	HX_("get_width",5d,12,0c,0e),
	HX_("get_height",b0,77,d3,f2),
	::String(null())
};

void DrawRectView_Impl__obj::__register()
{
	DrawRectView_Impl__obj _hx_dummy;
	DrawRectView_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal._DrawCommandReader.DrawRectView_Impl_",94,d9,87,18);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DrawRectView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DrawRectView_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DrawRectView_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DrawRectView_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DrawRectView_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
} // end namespace _DrawCommandReader
