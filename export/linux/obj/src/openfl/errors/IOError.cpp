#include <hxcpp.h>

#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IOError
#include <openfl/errors/IOError.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f56cae0bb14fb04e_22_new,"openfl.errors.IOError","new",0xdfaba8cf,"openfl.errors.IOError.new","openfl/errors/IOError.hx",22,0x640bffa1)
namespace openfl{
namespace errors{

void IOError_obj::__construct(::String __o_message){
            		::String message = __o_message;
            		if (::hx::IsNull(__o_message)) message = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_f56cae0bb14fb04e_22_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(message,"message")
HXLINE(  22)
HXLINE(  23)		super::__construct(message,null());
HXLINE(  25)		this->name = HX_("IOError",02,9a,27,78);
            	}

Dynamic IOError_obj::__CreateEmpty() { return new IOError_obj; }

void *IOError_obj::_hx_vtable = 0;

Dynamic IOError_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< IOError_obj > _hx_result = new IOError_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool IOError_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2be3de43) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2be3de43;
	} else {
		return inClassId==(int)0x3495c9c5;
	}
}


::hx::ObjectPtr< IOError_obj > IOError_obj::__new(::String __o_message) {
	::hx::ObjectPtr< IOError_obj > __this = new IOError_obj();
	__this->__construct(__o_message);
	return __this;
}

::hx::ObjectPtr< IOError_obj > IOError_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o_message) {
	IOError_obj *__this = (IOError_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(IOError_obj), true, "openfl.errors.IOError"));
	*(void **)__this = IOError_obj::_hx_vtable;
	__this->__construct(__o_message);
	return __this;
}

IOError_obj::IOError_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *IOError_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *IOError_obj_sStaticStorageInfo = 0;
#endif

::hx::Class IOError_obj::__mClass;

void IOError_obj::__register()
{
	IOError_obj _hx_dummy;
	IOError_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.errors.IOError",5d,95,bd,5d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< IOError_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IOError_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IOError_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace errors
