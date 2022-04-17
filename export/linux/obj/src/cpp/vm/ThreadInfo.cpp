#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_StackFrame
#include <cpp/vm/StackFrame.h>
#endif
#ifndef INCLUDED_cpp_vm_ThreadInfo
#include <cpp/vm/ThreadInfo.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8a8b4efcfba556a1_83_new,"cpp.vm.ThreadInfo","new",0x0ce7c2b6,"cpp.vm.ThreadInfo.new","/usr/share/haxe/std/cpp/vm/Debugger.hx",83,0x0e83362c)
namespace cpp{
namespace vm{

void ThreadInfo_obj::__construct(int number,int status,::hx::Null< int >  __o_breakpoint,::String criticalErrorDescription){
            		int breakpoint = __o_breakpoint.Default(-1);
            	HX_STACKFRAME(&_hx_pos_8a8b4efcfba556a1_83_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(number,"number")
            	HX_STACK_ARG(status,"status")
            	HX_STACK_ARG(breakpoint,"breakpoint")
            	HX_STACK_ARG(criticalErrorDescription,"criticalErrorDescription")
HXLINE(  83)
HXLINE(  84)		this->number = number;
HXLINE(  85)		this->status = status;
HXLINE(  86)		this->breakpoint = breakpoint;
HXLINE(  87)		this->criticalErrorDescription = criticalErrorDescription;
HXLINE(  88)		this->stack = ::Array_obj< ::Dynamic>::__new();
            	}

Dynamic ThreadInfo_obj::__CreateEmpty() { return new ThreadInfo_obj; }

void *ThreadInfo_obj::_hx_vtable = 0;

Dynamic ThreadInfo_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ThreadInfo_obj > _hx_result = new ThreadInfo_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool ThreadInfo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5ed35012;
}


::hx::ObjectPtr< ThreadInfo_obj > ThreadInfo_obj::__new(int number,int status,::hx::Null< int >  __o_breakpoint,::String criticalErrorDescription) {
	::hx::ObjectPtr< ThreadInfo_obj > __this = new ThreadInfo_obj();
	__this->__construct(number,status,__o_breakpoint,criticalErrorDescription);
	return __this;
}

::hx::ObjectPtr< ThreadInfo_obj > ThreadInfo_obj::__alloc(::hx::Ctx *_hx_ctx,int number,int status,::hx::Null< int >  __o_breakpoint,::String criticalErrorDescription) {
	ThreadInfo_obj *__this = (ThreadInfo_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ThreadInfo_obj), true, "cpp.vm.ThreadInfo"));
	*(void **)__this = ThreadInfo_obj::_hx_vtable;
	__this->__construct(number,status,__o_breakpoint,criticalErrorDescription);
	return __this;
}

ThreadInfo_obj::ThreadInfo_obj()
{
}

void ThreadInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ThreadInfo);
	HX_MARK_MEMBER_NAME(number,"number");
	HX_MARK_MEMBER_NAME(status,"status");
	HX_MARK_MEMBER_NAME(breakpoint,"breakpoint");
	HX_MARK_MEMBER_NAME(criticalErrorDescription,"criticalErrorDescription");
	HX_MARK_MEMBER_NAME(stack,"stack");
	HX_MARK_END_CLASS();
}

void ThreadInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(number,"number");
	HX_VISIT_MEMBER_NAME(status,"status");
	HX_VISIT_MEMBER_NAME(breakpoint,"breakpoint");
	HX_VISIT_MEMBER_NAME(criticalErrorDescription,"criticalErrorDescription");
	HX_VISIT_MEMBER_NAME(stack,"stack");
}

::hx::Val ThreadInfo_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"stack") ) { return ::hx::Val( stack ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"number") ) { return ::hx::Val( number ); }
		if (HX_FIELD_EQ(inName,"status") ) { return ::hx::Val( status ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"breakpoint") ) { return ::hx::Val( breakpoint ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"criticalErrorDescription") ) { return ::hx::Val( criticalErrorDescription ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ThreadInfo_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"stack") ) { stack=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"number") ) { number=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"status") ) { status=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"breakpoint") ) { breakpoint=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"criticalErrorDescription") ) { criticalErrorDescription=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ThreadInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("number",c9,86,7a,a1));
	outFields->push(HX_("status",32,e7,fb,05));
	outFields->push(HX_("breakpoint",31,fb,4a,6d));
	outFields->push(HX_("criticalErrorDescription",d3,b0,3b,e4));
	outFields->push(HX_("stack",48,67,0b,84));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ThreadInfo_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ThreadInfo_obj,number),HX_("number",c9,86,7a,a1)},
	{::hx::fsInt,(int)offsetof(ThreadInfo_obj,status),HX_("status",32,e7,fb,05)},
	{::hx::fsInt,(int)offsetof(ThreadInfo_obj,breakpoint),HX_("breakpoint",31,fb,4a,6d)},
	{::hx::fsString,(int)offsetof(ThreadInfo_obj,criticalErrorDescription),HX_("criticalErrorDescription",d3,b0,3b,e4)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ThreadInfo_obj,stack),HX_("stack",48,67,0b,84)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ThreadInfo_obj_sStaticStorageInfo = 0;
#endif

static ::String ThreadInfo_obj_sMemberFields[] = {
	HX_("number",c9,86,7a,a1),
	HX_("status",32,e7,fb,05),
	HX_("breakpoint",31,fb,4a,6d),
	HX_("criticalErrorDescription",d3,b0,3b,e4),
	HX_("stack",48,67,0b,84),
	::String(null()) };

::hx::Class ThreadInfo_obj::__mClass;

void ThreadInfo_obj::__register()
{
	ThreadInfo_obj _hx_dummy;
	ThreadInfo_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("cpp.vm.ThreadInfo",c4,ef,fe,77);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ThreadInfo_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ThreadInfo_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ThreadInfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ThreadInfo_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace cpp
} // end namespace vm
