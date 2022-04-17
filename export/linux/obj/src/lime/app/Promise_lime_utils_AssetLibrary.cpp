#include <hxcpp.h>

#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise
#include <lime/app/Promise.h>
#endif
#ifndef INCLUDED_lime_app_Promise_lime_utils_AssetLibrary
#include <lime/app/Promise_lime_utils_AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fb3f90ed3afd7756_89_new,"lime.app.Promise_lime_utils_AssetLibrary","new",0x0f34710b,"lime.app.Promise_lime_utils_AssetLibrary.new","lime/app/Promise.hx",89,0x10ba4f0b)
HX_LOCAL_STACK_FRAME(_hx_pos_fb3f90ed3afd7756_98_complete,"lime.app.Promise_lime_utils_AssetLibrary","complete",0xfdaa142e,"lime.app.Promise_lime_utils_AssetLibrary.complete","lime/app/Promise.hx",98,0x10ba4f0b)
HX_LOCAL_STACK_FRAME(_hx_pos_fb3f90ed3afd7756_125_completeWith,"lime.app.Promise_lime_utils_AssetLibrary","completeWith",0xd4846554,"lime.app.Promise_lime_utils_AssetLibrary.completeWith","lime/app/Promise.hx",125,0x10ba4f0b)
HX_LOCAL_STACK_FRAME(_hx_pos_fb3f90ed3afd7756_139_error,"lime.app.Promise_lime_utils_AssetLibrary","error",0x73f42d33,"lime.app.Promise_lime_utils_AssetLibrary.error","lime/app/Promise.hx",139,0x10ba4f0b)
HX_LOCAL_STACK_FRAME(_hx_pos_fb3f90ed3afd7756_166_progress,"lime.app.Promise_lime_utils_AssetLibrary","progress",0x040d0b22,"lime.app.Promise_lime_utils_AssetLibrary.progress","lime/app/Promise.hx",166,0x10ba4f0b)
HX_LOCAL_STACK_FRAME(_hx_pos_fb3f90ed3afd7756_184_get_isComplete,"lime.app.Promise_lime_utils_AssetLibrary","get_isComplete",0x9cee3441,"lime.app.Promise_lime_utils_AssetLibrary.get_isComplete","lime/app/Promise.hx",184,0x10ba4f0b)
HX_LOCAL_STACK_FRAME(_hx_pos_fb3f90ed3afd7756_189_get_isError,"lime.app.Promise_lime_utils_AssetLibrary","get_isError",0x4d6b9340,"lime.app.Promise_lime_utils_AssetLibrary.get_isError","lime/app/Promise.hx",189,0x10ba4f0b)
namespace lime{
namespace app{

void Promise_lime_utils_AssetLibrary_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_fb3f90ed3afd7756_89_new)
            	HX_STACK_THIS(this)
HXLINE(  89)
HXDLIN(  89)		this->future =  ::lime::app::Future_obj::__alloc( HX_CTX ,null(),null());
            	}

Dynamic Promise_lime_utils_AssetLibrary_obj::__CreateEmpty() { return new Promise_lime_utils_AssetLibrary_obj; }

void *Promise_lime_utils_AssetLibrary_obj::_hx_vtable = 0;

Dynamic Promise_lime_utils_AssetLibrary_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Promise_lime_utils_AssetLibrary_obj > _hx_result = new Promise_lime_utils_AssetLibrary_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Promise_lime_utils_AssetLibrary_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4bf9db77;
}

 ::lime::app::Promise_lime_utils_AssetLibrary Promise_lime_utils_AssetLibrary_obj::complete( ::lime::utils::AssetLibrary data){
            	HX_STACKFRAME(&_hx_pos_fb3f90ed3afd7756_98_complete)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(data,"data")
HXLINE(  98)
HXLINE(  99)		if (!(this->future->isError)) {
HXLINE( 101)			this->future->isComplete = true;
HXLINE( 102)			this->future->value = data;
HXLINE( 104)			if (::hx::IsNotNull( this->future->_hx___completeListeners )) {
HXLINE( 106)				{
HXLINE( 106)					int _g = 0;
HXDLIN( 106)					::Array< ::Dynamic> _g1 = this->future->_hx___completeListeners;
HXDLIN( 106)					while((_g < _g1->length)){
HXLINE( 106)						HX_VARI(  ::Dynamic,listener) = _g1->__get(_g);
HXDLIN( 106)						_g = (_g + 1);
HXLINE( 108)						listener(data);
            					}
            				}
HXLINE( 111)				this->future->_hx___completeListeners = null();
            			}
            		}
HXLINE( 115)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Promise_lime_utils_AssetLibrary_obj,complete,return )

 ::lime::app::Promise_lime_utils_AssetLibrary Promise_lime_utils_AssetLibrary_obj::completeWith( ::lime::app::Future future){
            	HX_STACKFRAME(&_hx_pos_fb3f90ed3afd7756_125_completeWith)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(future,"future")
HXLINE( 125)
HXLINE( 126)		future->onComplete(this->complete_dyn());
HXLINE( 127)		future->onError(this->error_dyn());
HXLINE( 128)		future->onProgress(this->progress_dyn());
HXLINE( 130)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Promise_lime_utils_AssetLibrary_obj,completeWith,return )

 ::lime::app::Promise_lime_utils_AssetLibrary Promise_lime_utils_AssetLibrary_obj::error( ::Dynamic msg){
            	HX_STACKFRAME(&_hx_pos_fb3f90ed3afd7756_139_error)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(msg,"msg")
HXLINE( 139)
HXLINE( 140)		if (!(this->future->isComplete)) {
HXLINE( 142)			this->future->isError = true;
HXLINE( 143)			this->future->error = msg;
HXLINE( 145)			if (::hx::IsNotNull( this->future->_hx___errorListeners )) {
HXLINE( 147)				{
HXLINE( 147)					int _g = 0;
HXDLIN( 147)					::Array< ::Dynamic> _g1 = this->future->_hx___errorListeners;
HXDLIN( 147)					while((_g < _g1->length)){
HXLINE( 147)						HX_VARI(  ::Dynamic,listener) = _g1->__get(_g);
HXDLIN( 147)						_g = (_g + 1);
HXLINE( 149)						listener(msg);
            					}
            				}
HXLINE( 152)				this->future->_hx___errorListeners = null();
            			}
            		}
HXLINE( 156)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Promise_lime_utils_AssetLibrary_obj,error,return )

 ::lime::app::Promise_lime_utils_AssetLibrary Promise_lime_utils_AssetLibrary_obj::progress(int progress,int total){
            	HX_STACKFRAME(&_hx_pos_fb3f90ed3afd7756_166_progress)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(progress,"progress")
            	HX_STACK_ARG(total,"total")
HXLINE( 166)
HXLINE( 167)		bool _hx_tmp;
HXDLIN( 167)		if (!(this->future->isError)) {
HXLINE( 167)			_hx_tmp = !(this->future->isComplete);
            		}
            		else {
HXLINE( 167)			_hx_tmp = false;
            		}
HXDLIN( 167)		if (_hx_tmp) {
HXLINE( 169)			if (::hx::IsNotNull( this->future->_hx___progressListeners )) {
HXLINE( 171)				int _g = 0;
HXDLIN( 171)				::Array< ::Dynamic> _g1 = this->future->_hx___progressListeners;
HXDLIN( 171)				while((_g < _g1->length)){
HXLINE( 171)					HX_VARI(  ::Dynamic,listener) = _g1->__get(_g);
HXDLIN( 171)					_g = (_g + 1);
HXLINE( 173)					listener(progress,total);
            				}
            			}
            		}
HXLINE( 178)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Promise_lime_utils_AssetLibrary_obj,progress,return )

bool Promise_lime_utils_AssetLibrary_obj::get_isComplete(){
            	HX_STACKFRAME(&_hx_pos_fb3f90ed3afd7756_184_get_isComplete)
            	HX_STACK_THIS(this)
HXLINE( 184)
HXDLIN( 184)		return this->future->isComplete;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Promise_lime_utils_AssetLibrary_obj,get_isComplete,return )

bool Promise_lime_utils_AssetLibrary_obj::get_isError(){
            	HX_STACKFRAME(&_hx_pos_fb3f90ed3afd7756_189_get_isError)
            	HX_STACK_THIS(this)
HXLINE( 189)
HXDLIN( 189)		return this->future->isError;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Promise_lime_utils_AssetLibrary_obj,get_isError,return )


::hx::ObjectPtr< Promise_lime_utils_AssetLibrary_obj > Promise_lime_utils_AssetLibrary_obj::__new() {
	::hx::ObjectPtr< Promise_lime_utils_AssetLibrary_obj > __this = new Promise_lime_utils_AssetLibrary_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Promise_lime_utils_AssetLibrary_obj > Promise_lime_utils_AssetLibrary_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Promise_lime_utils_AssetLibrary_obj *__this = (Promise_lime_utils_AssetLibrary_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Promise_lime_utils_AssetLibrary_obj), true, "lime.app.Promise_lime_utils_AssetLibrary"));
	*(void **)__this = Promise_lime_utils_AssetLibrary_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Promise_lime_utils_AssetLibrary_obj::Promise_lime_utils_AssetLibrary_obj()
{
}

void Promise_lime_utils_AssetLibrary_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Promise_lime_utils_AssetLibrary);
	HX_MARK_MEMBER_NAME(future,"future");
	HX_MARK_MEMBER_NAME(isComplete,"isComplete");
	HX_MARK_MEMBER_NAME(isError,"isError");
	HX_MARK_END_CLASS();
}

void Promise_lime_utils_AssetLibrary_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(future,"future");
	HX_VISIT_MEMBER_NAME(isComplete,"isComplete");
	HX_VISIT_MEMBER_NAME(isError,"isError");
}

::hx::Val Promise_lime_utils_AssetLibrary_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { return ::hx::Val( error_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"future") ) { return ::hx::Val( future ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isError") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isError() : isError ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { return ::hx::Val( complete_dyn() ); }
		if (HX_FIELD_EQ(inName,"progress") ) { return ::hx::Val( progress_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isComplete") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isComplete() : isComplete ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_isError") ) { return ::hx::Val( get_isError_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"completeWith") ) { return ::hx::Val( completeWith_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_isComplete") ) { return ::hx::Val( get_isComplete_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Promise_lime_utils_AssetLibrary_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"future") ) { future=inValue.Cast<  ::lime::app::Future >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isError") ) { isError=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isComplete") ) { isComplete=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Promise_lime_utils_AssetLibrary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("future",43,98,4e,73));
	outFields->push(HX_("isComplete",c3,12,77,fa));
	outFields->push(HX_("isError",7e,6f,af,0f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Promise_lime_utils_AssetLibrary_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::lime::app::Future */ ,(int)offsetof(Promise_lime_utils_AssetLibrary_obj,future),HX_("future",43,98,4e,73)},
	{::hx::fsBool,(int)offsetof(Promise_lime_utils_AssetLibrary_obj,isComplete),HX_("isComplete",c3,12,77,fa)},
	{::hx::fsBool,(int)offsetof(Promise_lime_utils_AssetLibrary_obj,isError),HX_("isError",7e,6f,af,0f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Promise_lime_utils_AssetLibrary_obj_sStaticStorageInfo = 0;
#endif

static ::String Promise_lime_utils_AssetLibrary_obj_sMemberFields[] = {
	HX_("future",43,98,4e,73),
	HX_("isComplete",c3,12,77,fa),
	HX_("isError",7e,6f,af,0f),
	HX_("complete",b9,00,c8,7f),
	HX_("completeWith",5f,f3,ba,c2),
	HX_("error",c8,cb,29,73),
	HX_("progress",ad,f7,2a,86),
	HX_("get_isComplete",0c,9b,6c,70),
	HX_("get_isError",95,cf,a9,95),
	::String(null()) };

::hx::Class Promise_lime_utils_AssetLibrary_obj::__mClass;

void Promise_lime_utils_AssetLibrary_obj::__register()
{
	Promise_lime_utils_AssetLibrary_obj _hx_dummy;
	Promise_lime_utils_AssetLibrary_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.app.Promise_lime_utils_AssetLibrary",99,8f,36,38);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Promise_lime_utils_AssetLibrary_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Promise_lime_utils_AssetLibrary_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Promise_lime_utils_AssetLibrary_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Promise_lime_utils_AssetLibrary_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace app
