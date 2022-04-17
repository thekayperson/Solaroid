#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_math__ARGB_ARGB_Impl_
#include <lime/math/_ARGB/ARGB_Impl_.h>
#endif
#ifndef INCLUDED_lime_math__RGBA_RGBA_Impl_
#include <lime/math/_RGBA/RGBA_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_36de0038cbbfa715_51__new,"lime.math._ARGB.ARGB_Impl_","_new",0xa527b873,"lime.math._ARGB.ARGB_Impl_._new","lime/math/ARGB.hx",51,0x89c2ece5)
HX_LOCAL_STACK_FRAME(_hx_pos_36de0038cbbfa715_65_create,"lime.math._ARGB.ARGB_Impl_","create",0xefd4728e,"lime.math._ARGB.ARGB_Impl_.create","lime/math/ARGB.hx",65,0x89c2ece5)
HX_LOCAL_STACK_FRAME(_hx_pos_36de0038cbbfa715_76_multiplyAlpha,"lime.math._ARGB.ARGB_Impl_","multiplyAlpha",0xf3a45d48,"lime.math._ARGB.ARGB_Impl_.multiplyAlpha","lime/math/ARGB.hx",76,0x89c2ece5)
HX_LOCAL_STACK_FRAME(_hx_pos_36de0038cbbfa715_95_readUInt8,"lime.math._ARGB.ARGB_Impl_","readUInt8",0x7a9297f6,"lime.math._ARGB.ARGB_Impl_.readUInt8","lime/math/ARGB.hx",95,0x89c2ece5)
HX_LOCAL_STACK_FRAME(_hx_pos_36de0038cbbfa715_123_set,"lime.math._ARGB.ARGB_Impl_","set",0xbe3780d0,"lime.math._ARGB.ARGB_Impl_.set","lime/math/ARGB.hx",123,0x89c2ece5)
HX_LOCAL_STACK_FRAME(_hx_pos_36de0038cbbfa715_131_unmultiplyAlpha,"lime.math._ARGB.ARGB_Impl_","unmultiplyAlpha",0x71d0bacf,"lime.math._ARGB.ARGB_Impl_.unmultiplyAlpha","lime/math/ARGB.hx",131,0x89c2ece5)
HX_LOCAL_STACK_FRAME(_hx_pos_36de0038cbbfa715_146_writeUInt8,"lime.math._ARGB.ARGB_Impl_","writeUInt8",0xd65f86b1,"lime.math._ARGB.ARGB_Impl_.writeUInt8","lime/math/ARGB.hx",146,0x89c2ece5)
HX_LOCAL_STACK_FRAME(_hx_pos_36de0038cbbfa715_176___fromBGRA,"lime.math._ARGB.ARGB_Impl_","__fromBGRA",0xf5288ed0,"lime.math._ARGB.ARGB_Impl_.__fromBGRA","lime/math/ARGB.hx",176,0x89c2ece5)
HX_LOCAL_STACK_FRAME(_hx_pos_36de0038cbbfa715_181___fromRGBA,"lime.math._ARGB.ARGB_Impl_","__fromRGBA",0xffbbead0,"lime.math._ARGB.ARGB_Impl_.__fromRGBA","lime/math/ARGB.hx",181,0x89c2ece5)
HX_LOCAL_STACK_FRAME(_hx_pos_36de0038cbbfa715_187_get_a,"lime.math._ARGB.ARGB_Impl_","get_a",0x72e6b1e6,"lime.math._ARGB.ARGB_Impl_.get_a","lime/math/ARGB.hx",187,0x89c2ece5)
HX_LOCAL_STACK_FRAME(_hx_pos_36de0038cbbfa715_191_set_a,"lime.math._ARGB.ARGB_Impl_","set_a",0x5bb5a7f2,"lime.math._ARGB.ARGB_Impl_.set_a","lime/math/ARGB.hx",191,0x89c2ece5)
HX_LOCAL_STACK_FRAME(_hx_pos_36de0038cbbfa715_198_get_b,"lime.math._ARGB.ARGB_Impl_","get_b",0x72e6b1e7,"lime.math._ARGB.ARGB_Impl_.get_b","lime/math/ARGB.hx",198,0x89c2ece5)
HX_LOCAL_STACK_FRAME(_hx_pos_36de0038cbbfa715_202_set_b,"lime.math._ARGB.ARGB_Impl_","set_b",0x5bb5a7f3,"lime.math._ARGB.ARGB_Impl_.set_b","lime/math/ARGB.hx",202,0x89c2ece5)
HX_LOCAL_STACK_FRAME(_hx_pos_36de0038cbbfa715_209_get_g,"lime.math._ARGB.ARGB_Impl_","get_g",0x72e6b1ec,"lime.math._ARGB.ARGB_Impl_.get_g","lime/math/ARGB.hx",209,0x89c2ece5)
HX_LOCAL_STACK_FRAME(_hx_pos_36de0038cbbfa715_213_set_g,"lime.math._ARGB.ARGB_Impl_","set_g",0x5bb5a7f8,"lime.math._ARGB.ARGB_Impl_.set_g","lime/math/ARGB.hx",213,0x89c2ece5)
HX_LOCAL_STACK_FRAME(_hx_pos_36de0038cbbfa715_220_get_r,"lime.math._ARGB.ARGB_Impl_","get_r",0x72e6b1f7,"lime.math._ARGB.ARGB_Impl_.get_r","lime/math/ARGB.hx",220,0x89c2ece5)
HX_LOCAL_STACK_FRAME(_hx_pos_36de0038cbbfa715_224_set_r,"lime.math._ARGB.ARGB_Impl_","set_r",0x5bb5a803,"lime.math._ARGB.ARGB_Impl_.set_r","lime/math/ARGB.hx",224,0x89c2ece5)
namespace lime{
namespace math{
namespace _ARGB{

void ARGB_Impl__obj::__construct() { }

Dynamic ARGB_Impl__obj::__CreateEmpty() { return new ARGB_Impl__obj; }

void *ARGB_Impl__obj::_hx_vtable = 0;

Dynamic ARGB_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ARGB_Impl__obj > _hx_result = new ARGB_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ARGB_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1ebd8a9a;
}

int ARGB_Impl__obj::a16;

Float ARGB_Impl__obj::unmult;

int ARGB_Impl__obj::_new(::hx::Null< int >  __o_argb){
            		int argb = __o_argb.Default(0);
            	HX_STACKFRAME(&_hx_pos_36de0038cbbfa715_51__new)
            	HX_STACK_ARG(argb,"argb")
HXLINE(  51)
HXDLIN(  51)		HX_VARI( int,this1) = argb;
HXDLIN(  51)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ARGB_Impl__obj,_new,return )

int ARGB_Impl__obj::create(int a,int r,int g,int b){
            	HX_STACKFRAME(&_hx_pos_36de0038cbbfa715_65_create)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(r,"r")
            	HX_STACK_ARG(g,"g")
            	HX_STACK_ARG(b,"b")
HXLINE(  65)
HXLINE(  66)		int this1 = 0;
HXDLIN(  66)		HX_VARI( int,argb) = this1;
HXLINE(  67)		argb = (((((a & 255) << 24) | ((r & 255) << 16)) | ((g & 255) << 8)) | (b & 255));
HXLINE(  68)		return argb;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ARGB_Impl__obj,create,return )

void ARGB_Impl__obj::multiplyAlpha(int this1){
            	HX_STACKFRAME(&_hx_pos_36de0038cbbfa715_76_multiplyAlpha)
            	HX_STACK_ARG(this1,"this1")
HXLINE(  76)
HXDLIN(  76)		if (((::hx::UShr(this1,24) & 255) == 0)) {
HXLINE(  78)			this1 = 0;
            		}
            		else {
HXLINE(  80)			if (((::hx::UShr(this1,24) & 255) != 255)) {
HXLINE(  82)				 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___alpha16;
HXDLIN(  82)				::lime::math::_ARGB::ARGB_Impl__obj::a16 = ( (int)( ::__hxcpp_memory_get_ui32(this2->buffer->b,(this2->byteOffset + ((::hx::UShr(this1,24) & 255) * 4)))) );
HXLINE(  83)				this1 = ((((((::hx::UShr(this1,24) & 255) & 255) << 24) | (((((::hx::UShr(this1,16) & 255) * ::lime::math::_ARGB::ARGB_Impl__obj::a16) >> 16) & 255) << 16)) | (((((::hx::UShr(this1,8) & 255) * ::lime::math::_ARGB::ARGB_Impl__obj::a16) >> 16) & 255) << 8)) | ((((this1 & 255) * ::lime::math::_ARGB::ARGB_Impl__obj::a16) >> 16) & 255));
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ARGB_Impl__obj,multiplyAlpha,(void))

void ARGB_Impl__obj::readUInt8(int this1, ::lime::utils::ArrayBufferView data,int offset,::hx::Null< int >  __o_format,::hx::Null< bool >  __o_premultiplied){
            		int format = __o_format.Default(0);
            		bool premultiplied = __o_premultiplied.Default(false);
            	HX_STACKFRAME(&_hx_pos_36de0038cbbfa715_95_readUInt8)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(data,"data")
            	HX_STACK_ARG(offset,"offset")
            	HX_STACK_ARG(format,"format")
            	HX_STACK_ARG(premultiplied,"premultiplied")
HXLINE(  95)
HXLINE(  96)		switch((int)(format)){
            			case (int)0: {
HXLINE( 102)				int a = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 1))) & 255)) );
HXDLIN( 102)				int r = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 2))) & 255)) );
HXDLIN( 102)				int g = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 3))) & 255)) );
HXDLIN( 102)				this1 = (((((a & 255) << 24) | ((r & 255) << 16)) | ((g & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset)) & 255)) ) & 255));
            			}
            			break;
            			case (int)1: {
HXLINE( 105)				int a = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 2))) & 255)) );
HXDLIN( 105)				int r = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 3))) & 255)) );
HXDLIN( 105)				int g = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset)) & 255)) );
HXDLIN( 105)				this1 = (((((a & 255) << 24) | ((r & 255) << 16)) | ((g & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 1))) & 255)) ) & 255));
            			}
            			break;
            			case (int)2: {
HXLINE(  99)				int a = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 1))) & 255)) );
HXDLIN(  99)				int r = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset)) & 255)) );
HXDLIN(  99)				int g = ( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 3))) & 255)) );
HXDLIN(  99)				this1 = (((((a & 255) << 24) | ((r & 255) << 16)) | ((g & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + (offset + 2))) & 255)) ) & 255));
            			}
            			break;
            		}
HXLINE( 108)		if (premultiplied) {
HXLINE( 110)			bool _hx_tmp;
HXDLIN( 110)			if (((::hx::UShr(this1,24) & 255) != 0)) {
HXLINE( 110)				_hx_tmp = ((::hx::UShr(this1,24) & 255) != 255);
            			}
            			else {
HXLINE( 110)				_hx_tmp = false;
            			}
HXDLIN( 110)			if (_hx_tmp) {
HXLINE( 110)				::lime::math::_ARGB::ARGB_Impl__obj::unmult = (((Float)255.0) / ( (Float)((::hx::UShr(this1,24) & 255)) ));
HXDLIN( 110)				{
HXLINE( 110)					 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 110)					int r = ( (int)(( ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::floor((( (Float)((::hx::UShr(this1,16) & 255)) ) * ::lime::math::_ARGB::ARGB_Impl__obj::unmult)))) & 255)) );
HXDLIN( 110)					 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 110)					int g = ( (int)(( ::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::floor((( (Float)((::hx::UShr(this1,8) & 255)) ) * ::lime::math::_ARGB::ARGB_Impl__obj::unmult)))) & 255)) );
HXDLIN( 110)					 ::lime::utils::ArrayBufferView this4 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 110)					this1 = ((((((::hx::UShr(this1,24) & 255) & 255) << 24) | ((r & 255) << 16)) | ((g & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(this4->buffer->b,(this4->byteOffset + ::Math_obj::floor((( (Float)((this1 & 255)) ) * ::lime::math::_ARGB::ARGB_Impl__obj::unmult)))) & 255)) ) & 255));
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ARGB_Impl__obj,readUInt8,(void))

void ARGB_Impl__obj::set(int this1,int a,int r,int g,int b){
            	HX_STACKFRAME(&_hx_pos_36de0038cbbfa715_123_set)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(r,"r")
            	HX_STACK_ARG(g,"g")
            	HX_STACK_ARG(b,"b")
HXLINE( 123)
HXDLIN( 123)		this1 = (((((a & 255) << 24) | ((r & 255) << 16)) | ((g & 255) << 8)) | (b & 255));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ARGB_Impl__obj,set,(void))

void ARGB_Impl__obj::unmultiplyAlpha(int this1){
            	HX_STACKFRAME(&_hx_pos_36de0038cbbfa715_131_unmultiplyAlpha)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 131)
HXDLIN( 131)		bool _hx_tmp;
HXDLIN( 131)		if (((::hx::UShr(this1,24) & 255) != 0)) {
HXDLIN( 131)			_hx_tmp = ((::hx::UShr(this1,24) & 255) != 255);
            		}
            		else {
HXDLIN( 131)			_hx_tmp = false;
            		}
HXDLIN( 131)		if (_hx_tmp) {
HXLINE( 133)			::lime::math::_ARGB::ARGB_Impl__obj::unmult = (((Float)255.0) / ( (Float)((::hx::UShr(this1,24) & 255)) ));
HXLINE( 134)			{
HXLINE( 134)				 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 134)				int r = ( (int)(( ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::floor((( (Float)((::hx::UShr(this1,16) & 255)) ) * ::lime::math::_ARGB::ARGB_Impl__obj::unmult)))) & 255)) );
HXDLIN( 134)				 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 134)				int g = ( (int)(( ::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::floor((( (Float)((::hx::UShr(this1,8) & 255)) ) * ::lime::math::_ARGB::ARGB_Impl__obj::unmult)))) & 255)) );
HXDLIN( 134)				 ::lime::utils::ArrayBufferView this4 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 134)				this1 = ((((((::hx::UShr(this1,24) & 255) & 255) << 24) | ((r & 255) << 16)) | ((g & 255) << 8)) | (( (int)(( ::__hxcpp_memory_get_byte(this4->buffer->b,(this4->byteOffset + ::Math_obj::floor((( (Float)((this1 & 255)) ) * ::lime::math::_ARGB::ARGB_Impl__obj::unmult)))) & 255)) ) & 255));
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ARGB_Impl__obj,unmultiplyAlpha,(void))

void ARGB_Impl__obj::writeUInt8(int this1, ::lime::utils::ArrayBufferView data,int offset,::hx::Null< int >  __o_format,::hx::Null< bool >  __o_premultiplied){
            		int format = __o_format.Default(0);
            		bool premultiplied = __o_premultiplied.Default(false);
            	HX_STACKFRAME(&_hx_pos_36de0038cbbfa715_146_writeUInt8)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(data,"data")
            	HX_STACK_ARG(offset,"offset")
            	HX_STACK_ARG(format,"format")
            	HX_STACK_ARG(premultiplied,"premultiplied")
HXLINE( 146)
HXLINE( 147)		if (premultiplied) {
HXLINE( 149)			if (((::hx::UShr(this1,24) & 255) == 0)) {
HXLINE( 149)				this1 = 0;
            			}
            			else {
HXLINE( 149)				if (((::hx::UShr(this1,24) & 255) != 255)) {
HXLINE( 149)					 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___alpha16;
HXDLIN( 149)					::lime::math::_ARGB::ARGB_Impl__obj::a16 = ( (int)( ::__hxcpp_memory_get_ui32(this2->buffer->b,(this2->byteOffset + ((::hx::UShr(this1,24) & 255) * 4)))) );
HXDLIN( 149)					this1 = ((((((::hx::UShr(this1,24) & 255) & 255) << 24) | (((((::hx::UShr(this1,16) & 255) * ::lime::math::_ARGB::ARGB_Impl__obj::a16) >> 16) & 255) << 16)) | (((((::hx::UShr(this1,8) & 255) * ::lime::math::_ARGB::ARGB_Impl__obj::a16) >> 16) & 255) << 8)) | ((((this1 & 255) * ::lime::math::_ARGB::ARGB_Impl__obj::a16) >> 16) & 255));
            				}
            			}
            		}
HXLINE( 152)		switch((int)(format)){
            			case (int)0: {
HXLINE( 161)				{
HXLINE( 161)					int val = (::hx::UShr(this1,16) & 255);
HXDLIN( 161)					 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
            				}
HXLINE( 162)				{
HXLINE( 162)					int val1 = (::hx::UShr(this1,8) & 255);
HXDLIN( 162)					 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 1)),val1);
            				}
HXLINE( 163)				{
HXLINE( 163)					int val2 = (this1 & 255);
HXDLIN( 163)					 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 2)),val2);
            				}
HXLINE( 164)				{
HXLINE( 164)					int val3 = (::hx::UShr(this1,24) & 255);
HXDLIN( 164)					 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 3)),val3);
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 167)				{
HXLINE( 167)					int val = (::hx::UShr(this1,24) & 255);
HXDLIN( 167)					 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
            				}
HXLINE( 168)				{
HXLINE( 168)					int val1 = (::hx::UShr(this1,16) & 255);
HXDLIN( 168)					 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 1)),val1);
            				}
HXLINE( 169)				{
HXLINE( 169)					int val2 = (::hx::UShr(this1,8) & 255);
HXDLIN( 169)					 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 2)),val2);
            				}
HXLINE( 170)				{
HXLINE( 170)					int val3 = (this1 & 255);
HXDLIN( 170)					 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 3)),val3);
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 155)				{
HXLINE( 155)					int val = (this1 & 255);
HXDLIN( 155)					 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
            				}
HXLINE( 156)				{
HXLINE( 156)					int val1 = (::hx::UShr(this1,8) & 255);
HXDLIN( 156)					 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 1)),val1);
            				}
HXLINE( 157)				{
HXLINE( 157)					int val2 = (::hx::UShr(this1,16) & 255);
HXDLIN( 157)					 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 2)),val2);
            				}
HXLINE( 158)				{
HXLINE( 158)					int val3 = (::hx::UShr(this1,24) & 255);
HXDLIN( 158)					 ::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (offset + 3)),val3);
            				}
            			}
            			break;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ARGB_Impl__obj,writeUInt8,(void))

int ARGB_Impl__obj::_hx___fromBGRA(int bgra){
            	HX_STACKFRAME(&_hx_pos_36de0038cbbfa715_176___fromBGRA)
            	HX_STACK_ARG(bgra,"bgra")
HXLINE( 176)
HXDLIN( 176)		int this1 = 0;
HXDLIN( 176)		int argb = this1;
HXDLIN( 176)		argb = ((((((bgra & 255) & 255) << 24) | (((::hx::UShr(bgra,8) & 255) & 255) << 16)) | (((::hx::UShr(bgra,16) & 255) & 255) << 8)) | ((::hx::UShr(bgra,24) & 255) & 255));
HXDLIN( 176)		return argb;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ARGB_Impl__obj,_hx___fromBGRA,return )

int ARGB_Impl__obj::_hx___fromRGBA(int rgba){
            	HX_STACKFRAME(&_hx_pos_36de0038cbbfa715_181___fromRGBA)
            	HX_STACK_ARG(rgba,"rgba")
HXLINE( 181)
HXDLIN( 181)		int this1 = 0;
HXDLIN( 181)		int argb = this1;
HXDLIN( 181)		argb = ((((((rgba & 255) & 255) << 24) | (((::hx::UShr(rgba,24) & 255) & 255) << 16)) | (((::hx::UShr(rgba,16) & 255) & 255) << 8)) | ((::hx::UShr(rgba,8) & 255) & 255));
HXDLIN( 181)		return argb;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ARGB_Impl__obj,_hx___fromRGBA,return )

int ARGB_Impl__obj::get_a(int this1){
            	HX_STACKFRAME(&_hx_pos_36de0038cbbfa715_187_get_a)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 187)
HXDLIN( 187)		return (::hx::UShr(this1,24) & 255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ARGB_Impl__obj,get_a,return )

int ARGB_Impl__obj::set_a(int this1,int value){
            	HX_STACKFRAME(&_hx_pos_36de0038cbbfa715_191_set_a)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(value,"value")
HXLINE( 191)
HXLINE( 192)		this1 = (((((value & 255) << 24) | (((::hx::UShr(this1,16) & 255) & 255) << 16)) | (((::hx::UShr(this1,8) & 255) & 255) << 8)) | ((this1 & 255) & 255));
HXLINE( 193)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ARGB_Impl__obj,set_a,return )

int ARGB_Impl__obj::get_b(int this1){
            	HX_STACKFRAME(&_hx_pos_36de0038cbbfa715_198_get_b)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 198)
HXDLIN( 198)		return (this1 & 255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ARGB_Impl__obj,get_b,return )

int ARGB_Impl__obj::set_b(int this1,int value){
            	HX_STACKFRAME(&_hx_pos_36de0038cbbfa715_202_set_b)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(value,"value")
HXLINE( 202)
HXLINE( 203)		this1 = ((((((::hx::UShr(this1,24) & 255) & 255) << 24) | (((::hx::UShr(this1,16) & 255) & 255) << 16)) | (((::hx::UShr(this1,8) & 255) & 255) << 8)) | (value & 255));
HXLINE( 204)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ARGB_Impl__obj,set_b,return )

int ARGB_Impl__obj::get_g(int this1){
            	HX_STACKFRAME(&_hx_pos_36de0038cbbfa715_209_get_g)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 209)
HXDLIN( 209)		return (::hx::UShr(this1,8) & 255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ARGB_Impl__obj,get_g,return )

int ARGB_Impl__obj::set_g(int this1,int value){
            	HX_STACKFRAME(&_hx_pos_36de0038cbbfa715_213_set_g)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(value,"value")
HXLINE( 213)
HXLINE( 214)		this1 = ((((((::hx::UShr(this1,24) & 255) & 255) << 24) | (((::hx::UShr(this1,16) & 255) & 255) << 16)) | ((value & 255) << 8)) | ((this1 & 255) & 255));
HXLINE( 215)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ARGB_Impl__obj,set_g,return )

int ARGB_Impl__obj::get_r(int this1){
            	HX_STACKFRAME(&_hx_pos_36de0038cbbfa715_220_get_r)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 220)
HXDLIN( 220)		return (::hx::UShr(this1,16) & 255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ARGB_Impl__obj,get_r,return )

int ARGB_Impl__obj::set_r(int this1,int value){
            	HX_STACKFRAME(&_hx_pos_36de0038cbbfa715_224_set_r)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(value,"value")
HXLINE( 224)
HXLINE( 225)		this1 = ((((((::hx::UShr(this1,24) & 255) & 255) << 24) | ((value & 255) << 16)) | (((::hx::UShr(this1,8) & 255) & 255) << 8)) | ((this1 & 255) & 255));
HXLINE( 226)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ARGB_Impl__obj,set_r,return )


ARGB_Impl__obj::ARGB_Impl__obj()
{
}

bool ARGB_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_a") ) { outValue = get_a_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_a") ) { outValue = set_a_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_b") ) { outValue = get_b_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_b") ) { outValue = set_b_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_g") ) { outValue = get_g_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_g") ) { outValue = set_g_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_r") ) { outValue = get_r_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_r") ) { outValue = set_r_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readUInt8") ) { outValue = readUInt8_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writeUInt8") ) { outValue = writeUInt8_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__fromBGRA") ) { outValue = _hx___fromBGRA_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__fromRGBA") ) { outValue = _hx___fromRGBA_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"multiplyAlpha") ) { outValue = multiplyAlpha_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"unmultiplyAlpha") ) { outValue = unmultiplyAlpha_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ARGB_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ARGB_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &ARGB_Impl__obj::a16,HX_("a16",86,c5,49,00)},
	{::hx::fsFloat,(void *) &ARGB_Impl__obj::unmult,HX_("unmult",c9,6e,3a,66)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void ARGB_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ARGB_Impl__obj::a16,"a16");
	HX_MARK_MEMBER_NAME(ARGB_Impl__obj::unmult,"unmult");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ARGB_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ARGB_Impl__obj::a16,"a16");
	HX_VISIT_MEMBER_NAME(ARGB_Impl__obj::unmult,"unmult");
};

#endif

::hx::Class ARGB_Impl__obj::__mClass;

static ::String ARGB_Impl__obj_sStaticFields[] = {
	HX_("a16",86,c5,49,00),
	HX_("unmult",c9,6e,3a,66),
	HX_("_new",61,15,1f,3f),
	HX_("create",fc,66,0f,7c),
	HX_("multiplyAlpha",9a,f2,1c,6b),
	HX_("readUInt8",48,9c,5d,5f),
	HX_("set",a2,9b,57,00),
	HX_("unmultiplyAlpha",a1,c8,96,28),
	HX_("writeUInt8",1f,4a,38,23),
	HX_("__fromBGRA",3e,52,01,42),
	HX_("__fromRGBA",3e,ae,94,4c),
	HX_("get_a",38,a5,60,91),
	HX_("set_a",44,9b,2f,7a),
	HX_("get_b",39,a5,60,91),
	HX_("set_b",45,9b,2f,7a),
	HX_("get_g",3e,a5,60,91),
	HX_("set_g",4a,9b,2f,7a),
	HX_("get_r",49,a5,60,91),
	HX_("set_r",55,9b,2f,7a),
	::String(null())
};

void ARGB_Impl__obj::__register()
{
	ARGB_Impl__obj _hx_dummy;
	ARGB_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.math._ARGB.ARGB_Impl_",9c,96,f2,50);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ARGB_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ARGB_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ARGB_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ARGB_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ARGB_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ARGB_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ARGB_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace math
} // end namespace _ARGB
