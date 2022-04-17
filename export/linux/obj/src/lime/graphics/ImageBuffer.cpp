#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_890299056ccc780d_110_new,"lime.graphics.ImageBuffer","new",0xb261c9e3,"lime.graphics.ImageBuffer.new","lime/graphics/ImageBuffer.hx",110,0x6475c2cd)
HX_LOCAL_STACK_FRAME(_hx_pos_890299056ccc780d_128_clone,"lime.graphics.ImageBuffer","clone",0x1504b3a0,"lime.graphics.ImageBuffer.clone","lime/graphics/ImageBuffer.hx",128,0x6475c2cd)
HX_LOCAL_STACK_FRAME(_hx_pos_890299056ccc780d_197_get_src,"lime.graphics.ImageBuffer","get_src",0x9748e67e,"lime.graphics.ImageBuffer.get_src","lime/graphics/ImageBuffer.hx",197,0x6475c2cd)
HX_LOCAL_STACK_FRAME(_hx_pos_890299056ccc780d_202_set_src,"lime.graphics.ImageBuffer","set_src",0x8a4a778a,"lime.graphics.ImageBuffer.set_src","lime/graphics/ImageBuffer.hx",202,0x6475c2cd)
HX_LOCAL_STACK_FRAME(_hx_pos_890299056ccc780d_224_get_stride,"lime.graphics.ImageBuffer","get_stride",0xb11b1cbf,"lime.graphics.ImageBuffer.get_stride","lime/graphics/ImageBuffer.hx",224,0x6475c2cd)
namespace lime{
namespace graphics{

void ImageBuffer_obj::__construct( ::lime::utils::ArrayBufferView data,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height,::hx::Null< int >  __o_bitsPerPixel, ::Dynamic format){
            		int width = __o_width.Default(0);
            		int height = __o_height.Default(0);
            		int bitsPerPixel = __o_bitsPerPixel.Default(32);
            	HX_STACKFRAME(&_hx_pos_890299056ccc780d_110_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(data,"data")
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	HX_STACK_ARG(bitsPerPixel,"bitsPerPixel")
            	HX_STACK_ARG(format,"format")
HXLINE( 110)
HXLINE( 111)		this->data = data;
HXLINE( 112)		this->width = width;
HXLINE( 113)		this->height = height;
HXLINE( 114)		this->bitsPerPixel = bitsPerPixel;
HXLINE( 115)		int _hx_tmp;
HXDLIN( 115)		if (::hx::IsNull( format )) {
HXLINE( 115)			_hx_tmp = 0;
            		}
            		else {
HXLINE( 115)			_hx_tmp = ( (int)(format) );
            		}
HXDLIN( 115)		this->format = _hx_tmp;
HXLINE( 116)		this->premultiplied = false;
HXLINE( 117)		this->transparent = true;
            	}

Dynamic ImageBuffer_obj::__CreateEmpty() { return new ImageBuffer_obj; }

void *ImageBuffer_obj::_hx_vtable = 0;

Dynamic ImageBuffer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ImageBuffer_obj > _hx_result = new ImageBuffer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool ImageBuffer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0cfba98f;
}

 ::lime::graphics::ImageBuffer ImageBuffer_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_890299056ccc780d_128_clone)
            	HX_STACK_THIS(this)
HXLINE( 128)
HXLINE( 129)		HX_VARI(  ::lime::graphics::ImageBuffer,buffer) =  ::lime::graphics::ImageBuffer_obj::__alloc( HX_CTX ,this->data,this->width,this->height,this->bitsPerPixel,null());
HXLINE( 173)		if (::hx::IsNotNull( this->data )) {
HXLINE( 175)			HX_VARI(  ::haxe::io::Bytes,bytes) = ::haxe::io::Bytes_obj::alloc(this->data->byteLength);
HXLINE( 176)			bytes->blit(0,buffer->data->buffer,0,this->data->byteLength);
HXLINE( 177)			 ::Dynamic elements = null();
HXDLIN( 177)			::cpp::VirtualArray array = null();
HXDLIN( 177)			 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 177)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 177)			 ::Dynamic len = null();
HXDLIN( 177)			 ::lime::utils::ArrayBufferView this1;
HXDLIN( 177)			if (::hx::IsNotNull( elements )) {
HXLINE( 177)				this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            			}
            			else {
HXLINE( 177)				if (::hx::IsNotNull( array )) {
HXLINE( 177)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 177)					_this->byteOffset = 0;
HXDLIN( 177)					_this->length = array->get_length();
HXDLIN( 177)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 177)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 177)					_this->buffer = this2;
HXDLIN( 177)					_this->copyFromArray(array,null());
HXDLIN( 177)					this1 = _this;
            				}
            				else {
HXLINE( 177)					if (::hx::IsNotNull( vector )) {
HXLINE( 177)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 177)						::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 177)						_this->byteOffset = 0;
HXDLIN( 177)						_this->length = array->get_length();
HXDLIN( 177)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 177)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 177)						_this->buffer = this2;
HXDLIN( 177)						_this->copyFromArray(array,null());
HXDLIN( 177)						this1 = _this;
            					}
            					else {
HXLINE( 177)						if (::hx::IsNotNull( view )) {
HXLINE( 177)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 177)							 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 177)							int srcLength = view->length;
HXDLIN( 177)							int srcByteOffset = view->byteOffset;
HXDLIN( 177)							int srcElementSize = view->bytesPerElement;
HXDLIN( 177)							int elementSize = _this->bytesPerElement;
HXDLIN( 177)							if ((view->type == _this->type)) {
HXLINE( 177)								int srcLength = srcData->length;
HXDLIN( 177)								int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 177)								 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 177)								_this->buffer = this1;
HXDLIN( 177)								_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            							}
            							else {
HXLINE( 177)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            							}
HXDLIN( 177)							_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 177)							_this->byteOffset = 0;
HXDLIN( 177)							_this->length = srcLength;
HXDLIN( 177)							this1 = _this;
            						}
            						else {
HXLINE( 177)							if (::hx::IsNotNull( bytes )) {
HXLINE( 177)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 177)								int in_byteOffset = 0;
HXDLIN( 177)								if ((in_byteOffset < 0)) {
HXLINE( 177)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 177)								if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 177)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 177)								int bufferByteLength = bytes->length;
HXDLIN( 177)								int elementSize = _this->bytesPerElement;
HXDLIN( 177)								int newByteLength = bufferByteLength;
HXDLIN( 177)								if (::hx::IsNull( len )) {
HXLINE( 177)									newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 177)									if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 177)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 177)									if ((newByteLength < 0)) {
HXLINE( 177)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
            								else {
HXLINE( 177)									newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 177)									int newRange = (in_byteOffset + newByteLength);
HXDLIN( 177)									if ((newRange > bufferByteLength)) {
HXLINE( 177)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
HXDLIN( 177)								_this->buffer = bytes;
HXDLIN( 177)								_this->byteOffset = in_byteOffset;
HXDLIN( 177)								_this->byteLength = newByteLength;
HXDLIN( 177)								_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 177)								this1 = _this;
            							}
            							else {
HXLINE( 177)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            							}
            						}
            					}
            				}
            			}
HXDLIN( 177)			buffer->data = this1;
            		}
HXLINE( 181)		buffer->bitsPerPixel = this->bitsPerPixel;
HXLINE( 182)		buffer->format = this->format;
HXLINE( 183)		buffer->premultiplied = this->premultiplied;
HXLINE( 184)		buffer->transparent = this->transparent;
HXLINE( 185)		return buffer;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageBuffer_obj,clone,return )

 ::Dynamic ImageBuffer_obj::get_src(){
            	HX_STACKFRAME(&_hx_pos_890299056ccc780d_197_get_src)
            	HX_STACK_THIS(this)
HXLINE( 197)
HXDLIN( 197)		return this->_hx___srcCustom;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageBuffer_obj,get_src,return )

 ::Dynamic ImageBuffer_obj::set_src( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_890299056ccc780d_202_set_src)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 202)
HXLINE( 216)		this->_hx___srcCustom = value;
HXLINE( 219)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ImageBuffer_obj,set_src,return )

int ImageBuffer_obj::get_stride(){
            	HX_STACKFRAME(&_hx_pos_890299056ccc780d_224_get_stride)
            	HX_STACK_THIS(this)
HXLINE( 224)
HXDLIN( 224)		int _hx_tmp = this->width;
HXDLIN( 224)		return (_hx_tmp * ::Std_obj::_hx_int((( (Float)(this->bitsPerPixel) ) / ( (Float)(8) ))));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageBuffer_obj,get_stride,return )


::hx::ObjectPtr< ImageBuffer_obj > ImageBuffer_obj::__new( ::lime::utils::ArrayBufferView data,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height,::hx::Null< int >  __o_bitsPerPixel, ::Dynamic format) {
	::hx::ObjectPtr< ImageBuffer_obj > __this = new ImageBuffer_obj();
	__this->__construct(data,__o_width,__o_height,__o_bitsPerPixel,format);
	return __this;
}

::hx::ObjectPtr< ImageBuffer_obj > ImageBuffer_obj::__alloc(::hx::Ctx *_hx_ctx, ::lime::utils::ArrayBufferView data,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height,::hx::Null< int >  __o_bitsPerPixel, ::Dynamic format) {
	ImageBuffer_obj *__this = (ImageBuffer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ImageBuffer_obj), true, "lime.graphics.ImageBuffer"));
	*(void **)__this = ImageBuffer_obj::_hx_vtable;
	__this->__construct(data,__o_width,__o_height,__o_bitsPerPixel,format);
	return __this;
}

ImageBuffer_obj::ImageBuffer_obj()
{
}

void ImageBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ImageBuffer);
	HX_MARK_MEMBER_NAME(bitsPerPixel,"bitsPerPixel");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(premultiplied,"premultiplied");
	HX_MARK_MEMBER_NAME(transparent,"transparent");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(_hx___srcBitmapData,"__srcBitmapData");
	HX_MARK_MEMBER_NAME(_hx___srcCanvas,"__srcCanvas");
	HX_MARK_MEMBER_NAME(_hx___srcContext,"__srcContext");
	HX_MARK_MEMBER_NAME(_hx___srcCustom,"__srcCustom");
	HX_MARK_MEMBER_NAME(_hx___srcImage,"__srcImage");
	HX_MARK_MEMBER_NAME(_hx___srcImageData,"__srcImageData");
	HX_MARK_END_CLASS();
}

void ImageBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitsPerPixel,"bitsPerPixel");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(premultiplied,"premultiplied");
	HX_VISIT_MEMBER_NAME(transparent,"transparent");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(_hx___srcBitmapData,"__srcBitmapData");
	HX_VISIT_MEMBER_NAME(_hx___srcCanvas,"__srcCanvas");
	HX_VISIT_MEMBER_NAME(_hx___srcContext,"__srcContext");
	HX_VISIT_MEMBER_NAME(_hx___srcCustom,"__srcCustom");
	HX_VISIT_MEMBER_NAME(_hx___srcImage,"__srcImage");
	HX_VISIT_MEMBER_NAME(_hx___srcImageData,"__srcImageData");
}

::hx::Val ImageBuffer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_src() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return ::hx::Val( format ); }
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"stride") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_stride() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_src") ) { return ::hx::Val( get_src_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_src") ) { return ::hx::Val( set_src_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__srcImage") ) { return ::hx::Val( _hx___srcImage ); }
		if (HX_FIELD_EQ(inName,"get_stride") ) { return ::hx::Val( get_stride_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { return ::hx::Val( transparent ); }
		if (HX_FIELD_EQ(inName,"__srcCanvas") ) { return ::hx::Val( _hx___srcCanvas ); }
		if (HX_FIELD_EQ(inName,"__srcCustom") ) { return ::hx::Val( _hx___srcCustom ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitsPerPixel") ) { return ::hx::Val( bitsPerPixel ); }
		if (HX_FIELD_EQ(inName,"__srcContext") ) { return ::hx::Val( _hx___srcContext ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"premultiplied") ) { return ::hx::Val( premultiplied ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__srcImageData") ) { return ::hx::Val( _hx___srcImageData ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__srcBitmapData") ) { return ::hx::Val( _hx___srcBitmapData ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ImageBuffer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_src(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__srcImage") ) { _hx___srcImage=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { transparent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__srcCanvas") ) { _hx___srcCanvas=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__srcCustom") ) { _hx___srcCustom=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitsPerPixel") ) { bitsPerPixel=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__srcContext") ) { _hx___srcContext=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"premultiplied") ) { premultiplied=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__srcImageData") ) { _hx___srcImageData=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__srcBitmapData") ) { _hx___srcBitmapData=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ImageBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bitsPerPixel",8f,4d,ee,1c));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("format",37,8f,8e,fd));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("premultiplied",56,f1,4e,a4));
	outFields->push(HX_("src",e4,a6,57,00));
	outFields->push(HX_("stride",19,20,30,11));
	outFields->push(HX_("transparent",52,2b,ba,22));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("__srcBitmapData",9d,9e,de,24));
	outFields->push(HX_("__srcCanvas",bc,fb,b8,6a));
	outFields->push(HX_("__srcContext",8b,f6,d2,8e));
	outFields->push(HX_("__srcCustom",95,2e,09,f2));
	outFields->push(HX_("__srcImage",f7,e0,5b,bf));
	outFields->push(HX_("__srcImageData",c1,aa,01,30));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ImageBuffer_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ImageBuffer_obj,bitsPerPixel),HX_("bitsPerPixel",8f,4d,ee,1c)},
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(int)offsetof(ImageBuffer_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsInt,(int)offsetof(ImageBuffer_obj,format),HX_("format",37,8f,8e,fd)},
	{::hx::fsInt,(int)offsetof(ImageBuffer_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsBool,(int)offsetof(ImageBuffer_obj,premultiplied),HX_("premultiplied",56,f1,4e,a4)},
	{::hx::fsBool,(int)offsetof(ImageBuffer_obj,transparent),HX_("transparent",52,2b,ba,22)},
	{::hx::fsInt,(int)offsetof(ImageBuffer_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ImageBuffer_obj,_hx___srcBitmapData),HX_("__srcBitmapData",9d,9e,de,24)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ImageBuffer_obj,_hx___srcCanvas),HX_("__srcCanvas",bc,fb,b8,6a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ImageBuffer_obj,_hx___srcContext),HX_("__srcContext",8b,f6,d2,8e)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ImageBuffer_obj,_hx___srcCustom),HX_("__srcCustom",95,2e,09,f2)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ImageBuffer_obj,_hx___srcImage),HX_("__srcImage",f7,e0,5b,bf)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ImageBuffer_obj,_hx___srcImageData),HX_("__srcImageData",c1,aa,01,30)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ImageBuffer_obj_sStaticStorageInfo = 0;
#endif

static ::String ImageBuffer_obj_sMemberFields[] = {
	HX_("bitsPerPixel",8f,4d,ee,1c),
	HX_("data",2a,56,63,42),
	HX_("format",37,8f,8e,fd),
	HX_("height",e7,07,4c,02),
	HX_("premultiplied",56,f1,4e,a4),
	HX_("transparent",52,2b,ba,22),
	HX_("width",06,b6,62,ca),
	HX_("__srcBitmapData",9d,9e,de,24),
	HX_("__srcCanvas",bc,fb,b8,6a),
	HX_("__srcContext",8b,f6,d2,8e),
	HX_("__srcCustom",95,2e,09,f2),
	HX_("__srcImage",f7,e0,5b,bf),
	HX_("__srcImageData",c1,aa,01,30),
	HX_("clone",5d,13,63,48),
	HX_("get_src",7b,6f,cc,26),
	HX_("set_src",87,00,ce,19),
	HX_("get_stride",e2,8f,b7,01),
	::String(null()) };

::hx::Class ImageBuffer_obj::__mClass;

void ImageBuffer_obj::__register()
{
	ImageBuffer_obj _hx_dummy;
	ImageBuffer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.ImageBuffer",71,9c,e0,10);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ImageBuffer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ImageBuffer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImageBuffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImageBuffer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
