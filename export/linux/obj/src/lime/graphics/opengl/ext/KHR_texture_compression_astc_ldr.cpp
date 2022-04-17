#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_KHR_texture_compression_astc_ldr
#include <lime/graphics/opengl/ext/KHR_texture_compression_astc_ldr.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_34b59b2f01b3fbe6_4_new,"lime.graphics.opengl.ext.KHR_texture_compression_astc_ldr","new",0x09d08f77,"lime.graphics.opengl.ext.KHR_texture_compression_astc_ldr.new","lime/graphics/opengl/ext/KHR_texture_compression_astc_ldr.hx",4,0x3159ac77)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void KHR_texture_compression_astc_ldr_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_34b59b2f01b3fbe6_4_new)
            	HX_STACK_THIS(this)
HXLINE(   4)
HXLINE(  33)		this->COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR = 37853;
HXLINE(  32)		this->COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR = 37852;
HXLINE(  31)		this->COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR = 37851;
HXLINE(  30)		this->COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR = 37850;
HXLINE(  29)		this->COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR = 37849;
HXLINE(  28)		this->COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR = 37848;
HXLINE(  27)		this->COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR = 37847;
HXLINE(  26)		this->COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR = 37846;
HXLINE(  25)		this->COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR = 37845;
HXLINE(  24)		this->COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR = 37844;
HXLINE(  23)		this->COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR = 37843;
HXLINE(  22)		this->COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR = 37842;
HXLINE(  21)		this->COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR = 37841;
HXLINE(  20)		this->COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR = 37840;
HXLINE(  19)		this->COMPRESSED_RGBA_ASTC_12x12_KHR = 37821;
HXLINE(  18)		this->COMPRESSED_RGBA_ASTC_12x10_KHR = 37820;
HXLINE(  17)		this->COMPRESSED_RGBA_ASTC_10x10_KHR = 37819;
HXLINE(  16)		this->COMPRESSED_RGBA_ASTC_10x8_KHR = 37818;
HXLINE(  15)		this->COMPRESSED_RGBA_ASTC_10x6_KHR = 37817;
HXLINE(  14)		this->COMPRESSED_RGBA_ASTC_10x5_KHR = 37816;
HXLINE(  13)		this->COMPRESSED_RGBA_ASTC_8x8_KHR = 37815;
HXLINE(  12)		this->COMPRESSED_RGBA_ASTC_8x6_KHR = 37814;
HXLINE(  11)		this->COMPRESSED_RGBA_ASTC_8x5_KHR = 37813;
HXLINE(  10)		this->COMPRESSED_RGBA_ASTC_6x6_KHR = 37812;
HXLINE(   9)		this->COMPRESSED_RGBA_ASTC_6x5_KHR = 37811;
HXLINE(   8)		this->COMPRESSED_RGBA_ASTC_5x5_KHR = 37810;
HXLINE(   7)		this->COMPRESSED_RGBA_ASTC_5x4_KHR = 37809;
HXLINE(   6)		this->COMPRESSED_RGBA_ASTC_4x4_KHR = 37808;
            	}

Dynamic KHR_texture_compression_astc_ldr_obj::__CreateEmpty() { return new KHR_texture_compression_astc_ldr_obj; }

void *KHR_texture_compression_astc_ldr_obj::_hx_vtable = 0;

Dynamic KHR_texture_compression_astc_ldr_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< KHR_texture_compression_astc_ldr_obj > _hx_result = new KHR_texture_compression_astc_ldr_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool KHR_texture_compression_astc_ldr_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f6a8889;
}


KHR_texture_compression_astc_ldr_obj::KHR_texture_compression_astc_ldr_obj()
{
}

::hx::Val KHR_texture_compression_astc_ldr_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 28:
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_4x4_KHR") ) { return ::hx::Val( COMPRESSED_RGBA_ASTC_4x4_KHR ); }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_5x4_KHR") ) { return ::hx::Val( COMPRESSED_RGBA_ASTC_5x4_KHR ); }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_5x5_KHR") ) { return ::hx::Val( COMPRESSED_RGBA_ASTC_5x5_KHR ); }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_6x5_KHR") ) { return ::hx::Val( COMPRESSED_RGBA_ASTC_6x5_KHR ); }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_6x6_KHR") ) { return ::hx::Val( COMPRESSED_RGBA_ASTC_6x6_KHR ); }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_8x5_KHR") ) { return ::hx::Val( COMPRESSED_RGBA_ASTC_8x5_KHR ); }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_8x6_KHR") ) { return ::hx::Val( COMPRESSED_RGBA_ASTC_8x6_KHR ); }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_8x8_KHR") ) { return ::hx::Val( COMPRESSED_RGBA_ASTC_8x8_KHR ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_10x5_KHR") ) { return ::hx::Val( COMPRESSED_RGBA_ASTC_10x5_KHR ); }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_10x6_KHR") ) { return ::hx::Val( COMPRESSED_RGBA_ASTC_10x6_KHR ); }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_10x8_KHR") ) { return ::hx::Val( COMPRESSED_RGBA_ASTC_10x8_KHR ); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_10x10_KHR") ) { return ::hx::Val( COMPRESSED_RGBA_ASTC_10x10_KHR ); }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_12x10_KHR") ) { return ::hx::Val( COMPRESSED_RGBA_ASTC_12x10_KHR ); }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_12x12_KHR") ) { return ::hx::Val( COMPRESSED_RGBA_ASTC_12x12_KHR ); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR") ) { return ::hx::Val( COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR ); }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR") ) { return ::hx::Val( COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR ); }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR") ) { return ::hx::Val( COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR ); }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR") ) { return ::hx::Val( COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR ); }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR") ) { return ::hx::Val( COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR ); }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR") ) { return ::hx::Val( COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR ); }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR") ) { return ::hx::Val( COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR ); }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR") ) { return ::hx::Val( COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR ); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR") ) { return ::hx::Val( COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR ); }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR") ) { return ::hx::Val( COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR ); }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR") ) { return ::hx::Val( COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR ); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR") ) { return ::hx::Val( COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR ); }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR") ) { return ::hx::Val( COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR ); }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR") ) { return ::hx::Val( COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val KHR_texture_compression_astc_ldr_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 28:
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_4x4_KHR") ) { COMPRESSED_RGBA_ASTC_4x4_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_5x4_KHR") ) { COMPRESSED_RGBA_ASTC_5x4_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_5x5_KHR") ) { COMPRESSED_RGBA_ASTC_5x5_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_6x5_KHR") ) { COMPRESSED_RGBA_ASTC_6x5_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_6x6_KHR") ) { COMPRESSED_RGBA_ASTC_6x6_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_8x5_KHR") ) { COMPRESSED_RGBA_ASTC_8x5_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_8x6_KHR") ) { COMPRESSED_RGBA_ASTC_8x6_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_8x8_KHR") ) { COMPRESSED_RGBA_ASTC_8x8_KHR=inValue.Cast< int >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_10x5_KHR") ) { COMPRESSED_RGBA_ASTC_10x5_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_10x6_KHR") ) { COMPRESSED_RGBA_ASTC_10x6_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_10x8_KHR") ) { COMPRESSED_RGBA_ASTC_10x8_KHR=inValue.Cast< int >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_10x10_KHR") ) { COMPRESSED_RGBA_ASTC_10x10_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_12x10_KHR") ) { COMPRESSED_RGBA_ASTC_12x10_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_ASTC_12x12_KHR") ) { COMPRESSED_RGBA_ASTC_12x12_KHR=inValue.Cast< int >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR") ) { COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR") ) { COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR") ) { COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR") ) { COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR") ) { COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR") ) { COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR") ) { COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR") ) { COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR=inValue.Cast< int >(); return inValue; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR") ) { COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR") ) { COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR") ) { COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR=inValue.Cast< int >(); return inValue; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR") ) { COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR") ) { COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR") ) { COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void KHR_texture_compression_astc_ldr_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("COMPRESSED_RGBA_ASTC_4x4_KHR",95,fb,5c,44));
	outFields->push(HX_("COMPRESSED_RGBA_ASTC_5x4_KHR",56,72,f2,6d));
	outFields->push(HX_("COMPRESSED_RGBA_ASTC_5x5_KHR",d7,06,59,01));
	outFields->push(HX_("COMPRESSED_RGBA_ASTC_6x5_KHR",98,7d,ee,2a));
	outFields->push(HX_("COMPRESSED_RGBA_ASTC_6x6_KHR",19,12,55,be));
	outFields->push(HX_("COMPRESSED_RGBA_ASTC_8x5_KHR",1a,6b,19,7e));
	outFields->push(HX_("COMPRESSED_RGBA_ASTC_8x6_KHR",9b,ff,7f,11));
	outFields->push(HX_("COMPRESSED_RGBA_ASTC_8x8_KHR",9d,28,4d,38));
	outFields->push(HX_("COMPRESSED_RGBA_ASTC_10x5_KHR",03,19,09,3e));
	outFields->push(HX_("COMPRESSED_RGBA_ASTC_10x6_KHR",84,ad,6f,d1));
	outFields->push(HX_("COMPRESSED_RGBA_ASTC_10x8_KHR",86,d6,3c,f8));
	outFields->push(HX_("COMPRESSED_RGBA_ASTC_10x10_KHR",3d,97,e4,6d));
	outFields->push(HX_("COMPRESSED_RGBA_ASTC_12x10_KHR",7b,7b,49,e0));
	outFields->push(HX_("COMPRESSED_RGBA_ASTC_12x12_KHR",7d,a4,16,07));
	outFields->push(HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR",ce,9b,db,5c));
	outFields->push(HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR",8f,12,71,86));
	outFields->push(HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR",10,a7,d7,19));
	outFields->push(HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR",d1,1d,6d,43));
	outFields->push(HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR",52,b2,d3,d6));
	outFields->push(HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR",53,0b,98,96));
	outFields->push(HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR",d4,9f,fe,29));
	outFields->push(HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR",d6,c8,cb,50));
	outFields->push(HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR",aa,aa,56,94));
	outFields->push(HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR",2b,3f,bd,27));
	outFields->push(HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR",2d,68,8a,4e));
	outFields->push(HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR",b6,77,76,9b));
	outFields->push(HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR",f4,5b,db,0d));
	outFields->push(HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR",f6,84,a8,34));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo KHR_texture_compression_astc_ldr_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_RGBA_ASTC_4x4_KHR),HX_("COMPRESSED_RGBA_ASTC_4x4_KHR",95,fb,5c,44)},
	{::hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_RGBA_ASTC_5x4_KHR),HX_("COMPRESSED_RGBA_ASTC_5x4_KHR",56,72,f2,6d)},
	{::hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_RGBA_ASTC_5x5_KHR),HX_("COMPRESSED_RGBA_ASTC_5x5_KHR",d7,06,59,01)},
	{::hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_RGBA_ASTC_6x5_KHR),HX_("COMPRESSED_RGBA_ASTC_6x5_KHR",98,7d,ee,2a)},
	{::hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_RGBA_ASTC_6x6_KHR),HX_("COMPRESSED_RGBA_ASTC_6x6_KHR",19,12,55,be)},
	{::hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_RGBA_ASTC_8x5_KHR),HX_("COMPRESSED_RGBA_ASTC_8x5_KHR",1a,6b,19,7e)},
	{::hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_RGBA_ASTC_8x6_KHR),HX_("COMPRESSED_RGBA_ASTC_8x6_KHR",9b,ff,7f,11)},
	{::hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_RGBA_ASTC_8x8_KHR),HX_("COMPRESSED_RGBA_ASTC_8x8_KHR",9d,28,4d,38)},
	{::hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_RGBA_ASTC_10x5_KHR),HX_("COMPRESSED_RGBA_ASTC_10x5_KHR",03,19,09,3e)},
	{::hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_RGBA_ASTC_10x6_KHR),HX_("COMPRESSED_RGBA_ASTC_10x6_KHR",84,ad,6f,d1)},
	{::hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_RGBA_ASTC_10x8_KHR),HX_("COMPRESSED_RGBA_ASTC_10x8_KHR",86,d6,3c,f8)},
	{::hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_RGBA_ASTC_10x10_KHR),HX_("COMPRESSED_RGBA_ASTC_10x10_KHR",3d,97,e4,6d)},
	{::hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_RGBA_ASTC_12x10_KHR),HX_("COMPRESSED_RGBA_ASTC_12x10_KHR",7b,7b,49,e0)},
	{::hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_RGBA_ASTC_12x12_KHR),HX_("COMPRESSED_RGBA_ASTC_12x12_KHR",7d,a4,16,07)},
	{::hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR),HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR",ce,9b,db,5c)},
	{::hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR),HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR",8f,12,71,86)},
	{::hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR),HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR",10,a7,d7,19)},
	{::hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR),HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR",d1,1d,6d,43)},
	{::hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR),HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR",52,b2,d3,d6)},
	{::hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR),HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR",53,0b,98,96)},
	{::hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR),HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR",d4,9f,fe,29)},
	{::hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR),HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR",d6,c8,cb,50)},
	{::hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR),HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR",aa,aa,56,94)},
	{::hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR),HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR",2b,3f,bd,27)},
	{::hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR),HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR",2d,68,8a,4e)},
	{::hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR),HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR",b6,77,76,9b)},
	{::hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR),HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR",f4,5b,db,0d)},
	{::hx::fsInt,(int)offsetof(KHR_texture_compression_astc_ldr_obj,COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR),HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR",f6,84,a8,34)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *KHR_texture_compression_astc_ldr_obj_sStaticStorageInfo = 0;
#endif

static ::String KHR_texture_compression_astc_ldr_obj_sMemberFields[] = {
	HX_("COMPRESSED_RGBA_ASTC_4x4_KHR",95,fb,5c,44),
	HX_("COMPRESSED_RGBA_ASTC_5x4_KHR",56,72,f2,6d),
	HX_("COMPRESSED_RGBA_ASTC_5x5_KHR",d7,06,59,01),
	HX_("COMPRESSED_RGBA_ASTC_6x5_KHR",98,7d,ee,2a),
	HX_("COMPRESSED_RGBA_ASTC_6x6_KHR",19,12,55,be),
	HX_("COMPRESSED_RGBA_ASTC_8x5_KHR",1a,6b,19,7e),
	HX_("COMPRESSED_RGBA_ASTC_8x6_KHR",9b,ff,7f,11),
	HX_("COMPRESSED_RGBA_ASTC_8x8_KHR",9d,28,4d,38),
	HX_("COMPRESSED_RGBA_ASTC_10x5_KHR",03,19,09,3e),
	HX_("COMPRESSED_RGBA_ASTC_10x6_KHR",84,ad,6f,d1),
	HX_("COMPRESSED_RGBA_ASTC_10x8_KHR",86,d6,3c,f8),
	HX_("COMPRESSED_RGBA_ASTC_10x10_KHR",3d,97,e4,6d),
	HX_("COMPRESSED_RGBA_ASTC_12x10_KHR",7b,7b,49,e0),
	HX_("COMPRESSED_RGBA_ASTC_12x12_KHR",7d,a4,16,07),
	HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR",ce,9b,db,5c),
	HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR",8f,12,71,86),
	HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR",10,a7,d7,19),
	HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR",d1,1d,6d,43),
	HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR",52,b2,d3,d6),
	HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR",53,0b,98,96),
	HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR",d4,9f,fe,29),
	HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR",d6,c8,cb,50),
	HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR",aa,aa,56,94),
	HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR",2b,3f,bd,27),
	HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR",2d,68,8a,4e),
	HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR",b6,77,76,9b),
	HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR",f4,5b,db,0d),
	HX_("COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR",f6,84,a8,34),
	::String(null()) };

::hx::Class KHR_texture_compression_astc_ldr_obj::__mClass;

void KHR_texture_compression_astc_ldr_obj::__register()
{
	KHR_texture_compression_astc_ldr_obj _hx_dummy;
	KHR_texture_compression_astc_ldr_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.KHR_texture_compression_astc_ldr",05,08,70,5d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(KHR_texture_compression_astc_ldr_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< KHR_texture_compression_astc_ldr_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = KHR_texture_compression_astc_ldr_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = KHR_texture_compression_astc_ldr_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
