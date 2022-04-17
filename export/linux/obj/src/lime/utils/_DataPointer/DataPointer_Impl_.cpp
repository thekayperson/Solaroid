#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_system__CFFIPointer_CFFIPointer_Impl_
#include <lime/system/_CFFIPointer/CFFIPointer_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_BytePointerData
#include <lime/utils/BytePointerData.h>
#endif
#ifndef INCLUDED_lime_utils__Bytes_Bytes_Impl_
#include <lime/utils/_Bytes/Bytes_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ac34df134646625a_21__new,"lime.utils._DataPointer.DataPointer_Impl_","_new",0x3b176380,"lime.utils._DataPointer.DataPointer_Impl_._new","lime/utils/DataPointer.hx",21,0x48d01ae3)
HX_LOCAL_STACK_FRAME(_hx_pos_ac34df134646625a_28_fromInt,"lime.utils._DataPointer.DataPointer_Impl_","fromInt",0xca24ece6,"lime.utils._DataPointer.DataPointer_Impl_.fromInt","lime/utils/DataPointer.hx",28,0x48d01ae3)
HX_LOCAL_STACK_FRAME(_hx_pos_ac34df134646625a_63_fromBytesPointer,"lime.utils._DataPointer.DataPointer_Impl_","fromBytesPointer",0x01727cbb,"lime.utils._DataPointer.DataPointer_Impl_.fromBytesPointer","lime/utils/DataPointer.hx",63,0x48d01ae3)
HX_LOCAL_STACK_FRAME(_hx_pos_ac34df134646625a_77_fromArrayBufferView,"lime.utils._DataPointer.DataPointer_Impl_","fromArrayBufferView",0xced8dcf5,"lime.utils._DataPointer.DataPointer_Impl_.fromArrayBufferView","lime/utils/DataPointer.hx",77,0x48d01ae3)
HX_LOCAL_STACK_FRAME(_hx_pos_ac34df134646625a_91_fromArrayBuffer,"lime.utils._DataPointer.DataPointer_Impl_","fromArrayBuffer",0x4d148670,"lime.utils._DataPointer.DataPointer_Impl_.fromArrayBuffer","lime/utils/DataPointer.hx",91,0x48d01ae3)
HX_LOCAL_STACK_FRAME(_hx_pos_ac34df134646625a_101_fromBytes,"lime.utils._DataPointer.DataPointer_Impl_","fromBytes",0x4e5e1422,"lime.utils._DataPointer.DataPointer_Impl_.fromBytes","lime/utils/DataPointer.hx",101,0x48d01ae3)
HX_LOCAL_STACK_FRAME(_hx_pos_ac34df134646625a_115_fromBytesData,"lime.utils._DataPointer.DataPointer_Impl_","fromBytesData",0x99d44f6c,"lime.utils._DataPointer.DataPointer_Impl_.fromBytesData","lime/utils/DataPointer.hx",115,0x48d01ae3)
HX_LOCAL_STACK_FRAME(_hx_pos_ac34df134646625a_126_fromLimeBytes,"lime.utils._DataPointer.DataPointer_Impl_","fromLimeBytes",0x0d79484d,"lime.utils._DataPointer.DataPointer_Impl_.fromLimeBytes","lime/utils/DataPointer.hx",126,0x48d01ae3)
HX_LOCAL_STACK_FRAME(_hx_pos_ac34df134646625a_131_fromCFFIPointer,"lime.utils._DataPointer.DataPointer_Impl_","fromCFFIPointer",0x157099ce,"lime.utils._DataPointer.DataPointer_Impl_.fromCFFIPointer","lime/utils/DataPointer.hx",131,0x48d01ae3)
HX_LOCAL_STACK_FRAME(_hx_pos_ac34df134646625a_144_fromFile,"lime.utils._DataPointer.DataPointer_Impl_","fromFile",0x142ae6a5,"lime.utils._DataPointer.DataPointer_Impl_.fromFile","lime/utils/DataPointer.hx",144,0x48d01ae3)
HX_LOCAL_STACK_FRAME(_hx_pos_ac34df134646625a_151___withOffset,"lime.utils._DataPointer.DataPointer_Impl_","__withOffset",0x51cf4a78,"lime.utils._DataPointer.DataPointer_Impl_.__withOffset","lime/utils/DataPointer.hx",151,0x48d01ae3)
HX_LOCAL_STACK_FRAME(_hx_pos_ac34df134646625a_163_equals,"lime.utils._DataPointer.DataPointer_Impl_","equals",0xe532421e,"lime.utils._DataPointer.DataPointer_Impl_.equals","lime/utils/DataPointer.hx",163,0x48d01ae3)
HX_LOCAL_STACK_FRAME(_hx_pos_ac34df134646625a_168_equalsPointer,"lime.utils._DataPointer.DataPointer_Impl_","equalsPointer",0xd8d6463f,"lime.utils._DataPointer.DataPointer_Impl_.equalsPointer","lime/utils/DataPointer.hx",168,0x48d01ae3)
HX_LOCAL_STACK_FRAME(_hx_pos_ac34df134646625a_173_greaterThan,"lime.utils._DataPointer.DataPointer_Impl_","greaterThan",0xb434053c,"lime.utils._DataPointer.DataPointer_Impl_.greaterThan","lime/utils/DataPointer.hx",173,0x48d01ae3)
HX_LOCAL_STACK_FRAME(_hx_pos_ac34df134646625a_179_greaterThanPointer,"lime.utils._DataPointer.DataPointer_Impl_","greaterThanPointer",0x7ccc42e1,"lime.utils._DataPointer.DataPointer_Impl_.greaterThanPointer","lime/utils/DataPointer.hx",179,0x48d01ae3)
HX_LOCAL_STACK_FRAME(_hx_pos_ac34df134646625a_185_greaterThanOrEqual,"lime.utils._DataPointer.DataPointer_Impl_","greaterThanOrEqual",0xcdd861b5,"lime.utils._DataPointer.DataPointer_Impl_.greaterThanOrEqual","lime/utils/DataPointer.hx",185,0x48d01ae3)
HX_LOCAL_STACK_FRAME(_hx_pos_ac34df134646625a_191_greaterThanOrEqualPointer,"lime.utils._DataPointer.DataPointer_Impl_","greaterThanOrEqualPointer",0xc9835788,"lime.utils._DataPointer.DataPointer_Impl_.greaterThanOrEqualPointer","lime/utils/DataPointer.hx",191,0x48d01ae3)
HX_LOCAL_STACK_FRAME(_hx_pos_ac34df134646625a_197_lessThan,"lime.utils._DataPointer.DataPointer_Impl_","lessThan",0x65d7a8f9,"lime.utils._DataPointer.DataPointer_Impl_.lessThan","lime/utils/DataPointer.hx",197,0x48d01ae3)
HX_LOCAL_STACK_FRAME(_hx_pos_ac34df134646625a_203_lessThanPointer,"lime.utils._DataPointer.DataPointer_Impl_","lessThanPointer",0xee7140c4,"lime.utils._DataPointer.DataPointer_Impl_.lessThanPointer","lime/utils/DataPointer.hx",203,0x48d01ae3)
HX_LOCAL_STACK_FRAME(_hx_pos_ac34df134646625a_209_lessThanOrEqual,"lime.utils._DataPointer.DataPointer_Impl_","lessThanOrEqual",0x3f7d5f98,"lime.utils._DataPointer.DataPointer_Impl_.lessThanOrEqual","lime/utils/DataPointer.hx",209,0x48d01ae3)
HX_LOCAL_STACK_FRAME(_hx_pos_ac34df134646625a_215_lessThanOrEqualPointer,"lime.utils._DataPointer.DataPointer_Impl_","lessThanOrEqualPointer",0x26e32c05,"lime.utils._DataPointer.DataPointer_Impl_.lessThanOrEqualPointer","lime/utils/DataPointer.hx",215,0x48d01ae3)
HX_LOCAL_STACK_FRAME(_hx_pos_ac34df134646625a_221_notEquals,"lime.utils._DataPointer.DataPointer_Impl_","notEquals",0x1918ed33,"lime.utils._DataPointer.DataPointer_Impl_.notEquals","lime/utils/DataPointer.hx",221,0x48d01ae3)
HX_LOCAL_STACK_FRAME(_hx_pos_ac34df134646625a_226_notEqualsPointer,"lime.utils._DataPointer.DataPointer_Impl_","notEqualsPointer",0xf10e57ca,"lime.utils._DataPointer.DataPointer_Impl_.notEqualsPointer","lime/utils/DataPointer.hx",226,0x48d01ae3)
HX_LOCAL_STACK_FRAME(_hx_pos_ac34df134646625a_231_plus,"lime.utils._DataPointer.DataPointer_Impl_","plus",0x46528d79,"lime.utils._DataPointer.DataPointer_Impl_.plus","lime/utils/DataPointer.hx",231,0x48d01ae3)
HX_LOCAL_STACK_FRAME(_hx_pos_ac34df134646625a_236_plusPointer,"lime.utils._DataPointer.DataPointer_Impl_","plusPointer",0xf813ec44,"lime.utils._DataPointer.DataPointer_Impl_.plusPointer","lime/utils/DataPointer.hx",236,0x48d01ae3)
HX_LOCAL_STACK_FRAME(_hx_pos_ac34df134646625a_241_minus,"lime.utils._DataPointer.DataPointer_Impl_","minus",0x85b48d71,"lime.utils._DataPointer.DataPointer_Impl_.minus","lime/utils/DataPointer.hx",241,0x48d01ae3)
HX_LOCAL_STACK_FRAME(_hx_pos_ac34df134646625a_246_minusPointer,"lime.utils._DataPointer.DataPointer_Impl_","minusPointer",0x7f5e5b4c,"lime.utils._DataPointer.DataPointer_Impl_.minusPointer","lime/utils/DataPointer.hx",246,0x48d01ae3)
namespace lime{
namespace utils{
namespace _DataPointer{

void DataPointer_Impl__obj::__construct() { }

Dynamic DataPointer_Impl__obj::__CreateEmpty() { return new DataPointer_Impl__obj; }

void *DataPointer_Impl__obj::_hx_vtable = 0;

Dynamic DataPointer_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DataPointer_Impl__obj > _hx_result = new DataPointer_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DataPointer_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7552d517;
}

Float DataPointer_Impl__obj::_new(Float data){
            	HX_STACKFRAME(&_hx_pos_ac34df134646625a_21__new)
            	HX_STACK_ARG(data,"data")
HXLINE(  21)
HXDLIN(  21)		HX_VARI( Float,this1) = data;
HXDLIN(  21)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DataPointer_Impl__obj,_new,return )

Float DataPointer_Impl__obj::fromInt(int value){
            	HX_STACKFRAME(&_hx_pos_ac34df134646625a_28_fromInt)
            	HX_STACK_ARG(value,"value")
HXLINE(  28)
HXLINE(  30)		HX_VARI_NAME( Float,_hx_float,"float") = ( (Float)(value) );
HXLINE(  31)		return ::lime::utils::_DataPointer::DataPointer_Impl__obj::_new(_hx_float);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DataPointer_Impl__obj,fromInt,return )

Float DataPointer_Impl__obj::fromBytesPointer( ::lime::utils::BytePointerData pointer){
            	HX_STACKFRAME(&_hx_pos_ac34df134646625a_63_fromBytesPointer)
            	HX_STACK_ARG(pointer,"pointer")
HXLINE(  63)
HXLINE(  65)		bool _hx_tmp;
HXDLIN(  65)		if (::hx::IsNotNull( pointer )) {
HXLINE(  65)			_hx_tmp = ::hx::IsNull( pointer->bytes );
            		}
            		else {
HXLINE(  65)			_hx_tmp = true;
            		}
HXDLIN(  65)		if (_hx_tmp) {
HXLINE(  65)			return ( (Float)(0) );
            		}
HXLINE(  66)		::cpp::Pointer< unsigned char > pointer1 = ( (::cpp::Pointer< unsigned char >)(::cpp::Pointer_obj::arrayElem(pointer->bytes->b,0)) );
HXDLIN(  66)		::cpp::Pointer< unsigned char > pointer2 = pointer1->add(pointer->offset);
HXDLIN(  66)		return (uintptr_t)pointer2->ptr;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DataPointer_Impl__obj,fromBytesPointer,return )

Float DataPointer_Impl__obj::fromArrayBufferView( ::lime::utils::ArrayBufferView arrayBufferView){
            	HX_STACKFRAME(&_hx_pos_ac34df134646625a_77_fromArrayBufferView)
            	HX_STACK_ARG(arrayBufferView,"arrayBufferView")
HXLINE(  77)
HXLINE(  79)		if (::hx::IsNull( arrayBufferView )) {
HXLINE(  79)			return ( (Float)(0) );
            		}
HXLINE(  80)		::cpp::Pointer< unsigned char > pointer = ( (::cpp::Pointer< unsigned char >)(::cpp::Pointer_obj::arrayElem(arrayBufferView->buffer->b,0)) );
HXDLIN(  80)		::cpp::Pointer< unsigned char > pointer1 = pointer->add(arrayBufferView->byteOffset);
HXDLIN(  80)		return (uintptr_t)pointer1->ptr;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DataPointer_Impl__obj,fromArrayBufferView,return )

Float DataPointer_Impl__obj::fromArrayBuffer( ::haxe::io::Bytes buffer){
            	HX_STACKFRAME(&_hx_pos_ac34df134646625a_91_fromArrayBuffer)
            	HX_STACK_ARG(buffer,"buffer")
HXLINE(  91)
HXLINE(  93)		if (::hx::IsNull( buffer )) {
HXLINE(  93)			return ( (Float)(0) );
            		}
HXLINE(  94)		return ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytes(buffer);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DataPointer_Impl__obj,fromArrayBuffer,return )

Float DataPointer_Impl__obj::fromBytes( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_ac34df134646625a_101_fromBytes)
            	HX_STACK_ARG(bytes,"bytes")
HXLINE( 101)
HXLINE( 103)		if (::hx::IsNull( bytes )) {
HXLINE( 103)			return ( (Float)(0) );
            		}
HXLINE( 104)		::cpp::Pointer< unsigned char > pointer = ( (::cpp::Pointer< unsigned char >)(::cpp::Pointer_obj::arrayElem(bytes->b,0)) );
HXDLIN( 104)		return (uintptr_t)pointer->ptr;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DataPointer_Impl__obj,fromBytes,return )

Float DataPointer_Impl__obj::fromBytesData(::Array< unsigned char > bytesData){
            	HX_STACKFRAME(&_hx_pos_ac34df134646625a_115_fromBytesData)
            	HX_STACK_ARG(bytesData,"bytesData")
HXLINE( 115)
HXLINE( 117)		if (::hx::IsNull( bytesData )) {
HXLINE( 117)			return ( (Float)(0) );
            		}
HXLINE( 118)		return ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytes(::haxe::io::Bytes_obj::ofData(bytesData));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DataPointer_Impl__obj,fromBytesData,return )

Float DataPointer_Impl__obj::fromLimeBytes( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_ac34df134646625a_126_fromLimeBytes)
            	HX_STACK_ARG(bytes,"bytes")
HXLINE( 126)
HXDLIN( 126)		return ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytes(bytes);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DataPointer_Impl__obj,fromLimeBytes,return )

Float DataPointer_Impl__obj::fromCFFIPointer( ::Dynamic pointer){
            	HX_STACKFRAME(&_hx_pos_ac34df134646625a_131_fromCFFIPointer)
            	HX_STACK_ARG(pointer,"pointer")
HXLINE( 131)
HXLINE( 133)		if (::hx::IsNull( pointer )) {
HXLINE( 133)			return ( (Float)(0) );
            		}
HXLINE( 134)		return ::lime::utils::_DataPointer::DataPointer_Impl__obj::_new(::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(pointer));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DataPointer_Impl__obj,fromCFFIPointer,return )

Float DataPointer_Impl__obj::fromFile(::String path){
            	HX_STACKFRAME(&_hx_pos_ac34df134646625a_144_fromFile)
            	HX_STACK_ARG(path,"path")
HXLINE( 144)
HXDLIN( 144)		return ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytes(::lime::utils::_Bytes::Bytes_Impl__obj::fromFile(path));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DataPointer_Impl__obj,fromFile,return )

Float DataPointer_Impl__obj::_hx___withOffset(Float data,int offset){
            	HX_STACKFRAME(&_hx_pos_ac34df134646625a_151___withOffset)
            	HX_STACK_ARG(data,"data")
            	HX_STACK_ARG(offset,"offset")
HXLINE( 151)
HXLINE( 153)		if ((data == 0)) {
HXLINE( 153)			return ( (Float)(0) );
            		}
HXLINE( 154)		HX_VARI( Float,data1) = ::lime::_internal::backend::native::NativeCFFI_obj::lime_data_pointer_offset(data,offset);
HXLINE( 155)		return ::lime::utils::_DataPointer::DataPointer_Impl__obj::_new(data1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataPointer_Impl__obj,_hx___withOffset,return )

bool DataPointer_Impl__obj::equals(Float a,int b){
            	HX_STACKFRAME(&_hx_pos_ac34df134646625a_163_equals)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE( 163)
HXDLIN( 163)		return (a == b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataPointer_Impl__obj,equals,return )

bool DataPointer_Impl__obj::equalsPointer(Float a,Float b){
            	HX_STACKFRAME(&_hx_pos_ac34df134646625a_168_equalsPointer)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE( 168)
HXDLIN( 168)		return (a == b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataPointer_Impl__obj,equalsPointer,return )

bool DataPointer_Impl__obj::greaterThan(Float a,int b){
            	HX_STACKFRAME(&_hx_pos_ac34df134646625a_173_greaterThan)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE( 173)
HXDLIN( 173)		return (a > b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataPointer_Impl__obj,greaterThan,return )

bool DataPointer_Impl__obj::greaterThanPointer(Float a, ::Dynamic b){
            	HX_STACKFRAME(&_hx_pos_ac34df134646625a_179_greaterThanPointer)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE( 179)
HXDLIN( 179)		Float _hx_tmp = ::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(a);
HXDLIN( 179)		return (_hx_tmp > ::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(b));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataPointer_Impl__obj,greaterThanPointer,return )

bool DataPointer_Impl__obj::greaterThanOrEqual(Float a,int b){
            	HX_STACKFRAME(&_hx_pos_ac34df134646625a_185_greaterThanOrEqual)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE( 185)
HXDLIN( 185)		return (a >= b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataPointer_Impl__obj,greaterThanOrEqual,return )

bool DataPointer_Impl__obj::greaterThanOrEqualPointer(Float a, ::Dynamic b){
            	HX_STACKFRAME(&_hx_pos_ac34df134646625a_191_greaterThanOrEqualPointer)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE( 191)
HXDLIN( 191)		Float _hx_tmp = ::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(a);
HXDLIN( 191)		return (_hx_tmp >= ::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(b));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataPointer_Impl__obj,greaterThanOrEqualPointer,return )

bool DataPointer_Impl__obj::lessThan(Float a,int b){
            	HX_STACKFRAME(&_hx_pos_ac34df134646625a_197_lessThan)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE( 197)
HXDLIN( 197)		return (a < b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataPointer_Impl__obj,lessThan,return )

bool DataPointer_Impl__obj::lessThanPointer(Float a, ::Dynamic b){
            	HX_STACKFRAME(&_hx_pos_ac34df134646625a_203_lessThanPointer)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE( 203)
HXDLIN( 203)		Float _hx_tmp = ::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(a);
HXDLIN( 203)		return (_hx_tmp < ::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(b));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataPointer_Impl__obj,lessThanPointer,return )

bool DataPointer_Impl__obj::lessThanOrEqual(Float a,int b){
            	HX_STACKFRAME(&_hx_pos_ac34df134646625a_209_lessThanOrEqual)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE( 209)
HXDLIN( 209)		return (a <= b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataPointer_Impl__obj,lessThanOrEqual,return )

bool DataPointer_Impl__obj::lessThanOrEqualPointer(Float a, ::Dynamic b){
            	HX_STACKFRAME(&_hx_pos_ac34df134646625a_215_lessThanOrEqualPointer)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE( 215)
HXDLIN( 215)		Float _hx_tmp = ::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(a);
HXDLIN( 215)		return (_hx_tmp <= ::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(b));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataPointer_Impl__obj,lessThanOrEqualPointer,return )

bool DataPointer_Impl__obj::notEquals(Float a,int b){
            	HX_STACKFRAME(&_hx_pos_ac34df134646625a_221_notEquals)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE( 221)
HXDLIN( 221)		return (a != b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataPointer_Impl__obj,notEquals,return )

bool DataPointer_Impl__obj::notEqualsPointer(Float a,Float b){
            	HX_STACKFRAME(&_hx_pos_ac34df134646625a_226_notEqualsPointer)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE( 226)
HXDLIN( 226)		return (a != b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataPointer_Impl__obj,notEqualsPointer,return )

Float DataPointer_Impl__obj::plus(Float a,int b){
            	HX_STACKFRAME(&_hx_pos_ac34df134646625a_231_plus)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE( 231)
HXDLIN( 231)		return ::lime::utils::_DataPointer::DataPointer_Impl__obj::_hx___withOffset(a,b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataPointer_Impl__obj,plus,return )

Float DataPointer_Impl__obj::plusPointer(Float a,Float b){
            	HX_STACKFRAME(&_hx_pos_ac34df134646625a_236_plusPointer)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE( 236)
HXDLIN( 236)		return ::lime::utils::_DataPointer::DataPointer_Impl__obj::_hx___withOffset(a,::Std_obj::_hx_int(b));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataPointer_Impl__obj,plusPointer,return )

Float DataPointer_Impl__obj::minus(Float a,int b){
            	HX_STACKFRAME(&_hx_pos_ac34df134646625a_241_minus)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE( 241)
HXDLIN( 241)		return ::lime::utils::_DataPointer::DataPointer_Impl__obj::_hx___withOffset(a,-(b));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataPointer_Impl__obj,minus,return )

Float DataPointer_Impl__obj::minusPointer(Float a,Float b){
            	HX_STACKFRAME(&_hx_pos_ac34df134646625a_246_minusPointer)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE( 246)
HXDLIN( 246)		return ::lime::utils::_DataPointer::DataPointer_Impl__obj::_hx___withOffset(a,-(::Std_obj::_hx_int(b)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataPointer_Impl__obj,minusPointer,return )


DataPointer_Impl__obj::DataPointer_Impl__obj()
{
}

bool DataPointer_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"plus") ) { outValue = plus_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"minus") ) { outValue = minus_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"equals") ) { outValue = equals_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { outValue = fromInt_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lessThan") ) { outValue = lessThan_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"notEquals") ) { outValue = notEquals_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"greaterThan") ) { outValue = greaterThan_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"plusPointer") ) { outValue = plusPointer_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__withOffset") ) { outValue = _hx___withOffset_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"minusPointer") ) { outValue = minusPointer_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromBytesData") ) { outValue = fromBytesData_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromLimeBytes") ) { outValue = fromLimeBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"equalsPointer") ) { outValue = equalsPointer_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fromArrayBuffer") ) { outValue = fromArrayBuffer_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromCFFIPointer") ) { outValue = fromCFFIPointer_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lessThanPointer") ) { outValue = lessThanPointer_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lessThanOrEqual") ) { outValue = lessThanOrEqual_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fromBytesPointer") ) { outValue = fromBytesPointer_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"notEqualsPointer") ) { outValue = notEqualsPointer_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"greaterThanPointer") ) { outValue = greaterThanPointer_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"greaterThanOrEqual") ) { outValue = greaterThanOrEqual_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"fromArrayBufferView") ) { outValue = fromArrayBufferView_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lessThanOrEqualPointer") ) { outValue = lessThanOrEqualPointer_dyn(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"greaterThanOrEqualPointer") ) { outValue = greaterThanOrEqualPointer_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DataPointer_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DataPointer_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class DataPointer_Impl__obj::__mClass;

static ::String DataPointer_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("fromInt",a5,dd,fa,57),
	HX_("fromBytesPointer",1c,fc,ed,d8),
	HX_("fromArrayBufferView",34,70,74,c8),
	HX_("fromArrayBuffer",2f,ce,77,ec),
	HX_("fromBytes",a1,f2,20,72),
	HX_("fromBytesData",6b,d9,41,db),
	HX_("fromLimeBytes",4c,d2,e6,4e),
	HX_("fromCFFIPointer",8d,e1,d3,b4),
	HX_("fromFile",06,9d,87,a1),
	HX_("__withOffset",59,45,9d,84),
	HX_("equals",3f,ee,f2,bf),
	HX_("equalsPointer",3e,d0,43,1a),
	HX_("greaterThan",7b,c1,4a,75),
	HX_("greaterThanPointer",82,1c,af,c9),
	HX_("greaterThanOrEqual",56,3b,bb,1a),
	HX_("greaterThanOrEqualPointer",07,64,57,78),
	HX_("lessThan",5a,5f,34,f3),
	HX_("lessThanPointer",83,88,d4,8d),
	HX_("lessThanOrEqual",57,a7,e0,de),
	HX_("lessThanOrEqualPointer",26,ea,29,34),
	HX_("notEquals",b2,cb,db,3c),
	HX_("notEqualsPointer",2b,d7,89,c8),
	HX_("plus",5a,3f,5a,4a),
	HX_("plusPointer",83,a8,2a,b9),
	HX_("minus",70,80,68,08),
	HX_("minusPointer",2d,56,2c,b2),
	::String(null())
};

void DataPointer_Impl__obj::__register()
{
	DataPointer_Impl__obj _hx_dummy;
	DataPointer_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.utils._DataPointer.DataPointer_Impl_",af,c6,dc,04);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DataPointer_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DataPointer_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DataPointer_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DataPointer_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DataPointer_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace utils
} // end namespace _DataPointer
