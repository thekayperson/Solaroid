#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils__ArrayBuffer_ArrayBuffer_Impl_
#include <lime/utils/_ArrayBuffer/ArrayBuffer_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0c0adae4738ab368_18_get_byteLength,"lime.utils._ArrayBuffer.ArrayBuffer_Impl_","get_byteLength",0xeec1f52a,"lime.utils._ArrayBuffer.ArrayBuffer_Impl_.get_byteLength","lime/utils/ArrayBuffer.hx",18,0x9f41eedd)
HX_LOCAL_STACK_FRAME(_hx_pos_0c0adae4738ab368_21__new,"lime.utils._ArrayBuffer.ArrayBuffer_Impl_","_new",0x3fa42e74,"lime.utils._ArrayBuffer.ArrayBuffer_Impl_._new","lime/utils/ArrayBuffer.hx",21,0x9f41eedd)
HX_LOCAL_STACK_FRAME(_hx_pos_0c0adae4738ab368_28_isView,"lime.utils._ArrayBuffer.ArrayBuffer_Impl_","isView",0x6a81bb42,"lime.utils._ArrayBuffer.ArrayBuffer_Impl_.isView","lime/utils/ArrayBuffer.hx",28,0x9f41eedd)
HX_LOCAL_STACK_FRAME(_hx_pos_0c0adae4738ab368_32_slice,"lime.utils._ArrayBuffer.ArrayBuffer_Impl_","slice",0xf2b89bdf,"lime.utils._ArrayBuffer.ArrayBuffer_Impl_.slice","lime/utils/ArrayBuffer.hx",32,0x9f41eedd)
namespace lime{
namespace utils{
namespace _ArrayBuffer{

void ArrayBuffer_Impl__obj::__construct() { }

Dynamic ArrayBuffer_Impl__obj::__CreateEmpty() { return new ArrayBuffer_Impl__obj; }

void *ArrayBuffer_Impl__obj::_hx_vtable = 0;

Dynamic ArrayBuffer_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ArrayBuffer_Impl__obj > _hx_result = new ArrayBuffer_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ArrayBuffer_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3dcccc63;
}

int ArrayBuffer_Impl__obj::get_byteLength( ::haxe::io::Bytes this1){
            	HX_STACKFRAME(&_hx_pos_0c0adae4738ab368_18_get_byteLength)
            	HX_STACK_ARG(this1,"this1")
HXLINE(  18)
HXDLIN(  18)		return this1->length;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayBuffer_Impl__obj,get_byteLength,return )

 ::haxe::io::Bytes ArrayBuffer_Impl__obj::_new(int byteLength){
            	HX_STACKFRAME(&_hx_pos_0c0adae4738ab368_21__new)
            	HX_STACK_ARG(byteLength,"byteLength")
HXLINE(  21)
HXDLIN(  21)		HX_VARI(  ::haxe::io::Bytes,this1) = ::haxe::io::Bytes_obj::alloc(byteLength);
HXDLIN(  21)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayBuffer_Impl__obj,_new,return )

bool ArrayBuffer_Impl__obj::isView( ::Dynamic arg){
            	HX_STACKFRAME(&_hx_pos_0c0adae4738ab368_28_isView)
            	HX_STACK_ARG(arg,"arg")
HXLINE(  28)
HXDLIN(  28)		if (::hx::IsNotNull( arg )) {
HXDLIN(  28)			return ::Std_obj::isOfType(arg,::hx::ClassOf< ::lime::utils::ArrayBufferView >());
            		}
            		else {
HXDLIN(  28)			return false;
            		}
HXDLIN(  28)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayBuffer_Impl__obj,isView,return )

 ::haxe::io::Bytes ArrayBuffer_Impl__obj::slice( ::haxe::io::Bytes this1,int begin, ::Dynamic end){
            	HX_STACKFRAME(&_hx_pos_0c0adae4738ab368_32_slice)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(begin,"begin")
            	HX_STACK_ARG(end,"end")
HXLINE(  32)
HXLINE(  33)		if (::hx::IsNull( end )) {
HXLINE(  33)			end = this1->length;
            		}
HXLINE(  34)		if ((begin < 0)) {
HXLINE(  34)			begin = 0;
            		}
HXLINE(  35)		if (::hx::IsGreater( end,this1->length )) {
HXLINE(  35)			end = this1->length;
            		}
HXLINE(  36)		HX_VARI( int,length) = (( (int)(end) ) - begin);
HXLINE(  37)		bool _hx_tmp;
HXDLIN(  37)		if ((begin >= 0)) {
HXLINE(  37)			_hx_tmp = (length <= 0);
            		}
            		else {
HXLINE(  37)			_hx_tmp = true;
            		}
HXDLIN(  37)		if (_hx_tmp) {
HXLINE(  39)			 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(0);
HXDLIN(  39)			return this1;
            		}
            		else {
HXLINE(  43)			HX_VARI(  ::haxe::io::Bytes,bytes) = ::haxe::io::Bytes_obj::alloc(length);
HXLINE(  44)			bytes->blit(0,this1,begin,length);
HXLINE(  45)			return bytes;
            		}
HXLINE(  37)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayBuffer_Impl__obj,slice,return )


ArrayBuffer_Impl__obj::ArrayBuffer_Impl__obj()
{
}

bool ArrayBuffer_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"slice") ) { outValue = slice_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isView") ) { outValue = isView_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_byteLength") ) { outValue = get_byteLength_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ArrayBuffer_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ArrayBuffer_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class ArrayBuffer_Impl__obj::__mClass;

static ::String ArrayBuffer_Impl__obj_sStaticFields[] = {
	HX_("get_byteLength",57,a6,01,ed),
	HX_("_new",61,15,1f,3f),
	HX_("isView",6f,f7,b5,6b),
	HX_("slice",52,c4,c7,7e),
	::String(null())
};

void ArrayBuffer_Impl__obj::__register()
{
	ArrayBuffer_Impl__obj _hx_dummy;
	ArrayBuffer_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.utils._ArrayBuffer.ArrayBuffer_Impl_",3b,e0,eb,6f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ArrayBuffer_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ArrayBuffer_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ArrayBuffer_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArrayBuffer_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArrayBuffer_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace utils
} // end namespace _ArrayBuffer
