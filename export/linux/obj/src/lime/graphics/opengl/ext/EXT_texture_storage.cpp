#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_texture_storage
#include <lime/graphics/opengl/ext/EXT_texture_storage.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4a94eca10f0d89d1_4_new,"lime.graphics.opengl.ext.EXT_texture_storage","new",0xf17af0a9,"lime.graphics.opengl.ext.EXT_texture_storage.new","lime/graphics/opengl/ext/EXT_texture_storage.hx",4,0xdbb00909)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void EXT_texture_storage_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4a94eca10f0d89d1_4_new)
            	HX_STACK_THIS(this)
HXLINE(   4)
HXLINE(  28)		this->RG16F_EXT = 33327;
HXLINE(  27)		this->R16F_EXT = 33325;
HXLINE(  26)		this->RG32F_EXT = 33328;
HXLINE(  25)		this->R32F_EXT = 33326;
HXLINE(  24)		this->RG8_EXT = 33323;
HXLINE(  23)		this->R8_EXT = 33321;
HXLINE(  22)		this->BGRA8_EXT = 37793;
HXLINE(  21)		this->RGB10_EXT = 32850;
HXLINE(  20)		this->RGB10_A2_EXT = 32857;
HXLINE(  19)		this->LUMINANCE_ALPHA16F_EXT = 34847;
HXLINE(  18)		this->LUMINANCE16F_EXT = 34846;
HXLINE(  17)		this->ALPHA16F_EXT = 34844;
HXLINE(  16)		this->RGB16F_EXT = 34843;
HXLINE(  15)		this->RGBA16F_EXT = 34842;
HXLINE(  14)		this->LUMINANCE_ALPHA32F_EXT = 34841;
HXLINE(  13)		this->LUMINANCE32F_EXT = 34840;
HXLINE(  12)		this->ALPHA32F_EXT = 34838;
HXLINE(  11)		this->RGB32F_EXT = 34837;
HXLINE(  10)		this->RGBA32F_EXT = 34836;
HXLINE(   9)		this->LUMINANCE8_ALPHA8_EXT = 32837;
HXLINE(   8)		this->LUMINANCE8_EXT = 32832;
HXLINE(   7)		this->ALPHA8_EXT = 32828;
HXLINE(   6)		this->TEXTURE_IMMUTABLE_FORMAT_EXT = 37167;
            	}

Dynamic EXT_texture_storage_obj::__CreateEmpty() { return new EXT_texture_storage_obj; }

void *EXT_texture_storage_obj::_hx_vtable = 0;

Dynamic EXT_texture_storage_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EXT_texture_storage_obj > _hx_result = new EXT_texture_storage_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EXT_texture_storage_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4eca9c4b;
}


EXT_texture_storage_obj::EXT_texture_storage_obj()
{
}

::hx::Val EXT_texture_storage_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"R8_EXT") ) { return ::hx::Val( R8_EXT ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"RG8_EXT") ) { return ::hx::Val( RG8_EXT ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"R32F_EXT") ) { return ::hx::Val( R32F_EXT ); }
		if (HX_FIELD_EQ(inName,"R16F_EXT") ) { return ::hx::Val( R16F_EXT ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RGB10_EXT") ) { return ::hx::Val( RGB10_EXT ); }
		if (HX_FIELD_EQ(inName,"BGRA8_EXT") ) { return ::hx::Val( BGRA8_EXT ); }
		if (HX_FIELD_EQ(inName,"RG32F_EXT") ) { return ::hx::Val( RG32F_EXT ); }
		if (HX_FIELD_EQ(inName,"RG16F_EXT") ) { return ::hx::Val( RG16F_EXT ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ALPHA8_EXT") ) { return ::hx::Val( ALPHA8_EXT ); }
		if (HX_FIELD_EQ(inName,"RGB32F_EXT") ) { return ::hx::Val( RGB32F_EXT ); }
		if (HX_FIELD_EQ(inName,"RGB16F_EXT") ) { return ::hx::Val( RGB16F_EXT ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"RGBA32F_EXT") ) { return ::hx::Val( RGBA32F_EXT ); }
		if (HX_FIELD_EQ(inName,"RGBA16F_EXT") ) { return ::hx::Val( RGBA16F_EXT ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ALPHA32F_EXT") ) { return ::hx::Val( ALPHA32F_EXT ); }
		if (HX_FIELD_EQ(inName,"ALPHA16F_EXT") ) { return ::hx::Val( ALPHA16F_EXT ); }
		if (HX_FIELD_EQ(inName,"RGB10_A2_EXT") ) { return ::hx::Val( RGB10_A2_EXT ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"LUMINANCE8_EXT") ) { return ::hx::Val( LUMINANCE8_EXT ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"LUMINANCE32F_EXT") ) { return ::hx::Val( LUMINANCE32F_EXT ); }
		if (HX_FIELD_EQ(inName,"LUMINANCE16F_EXT") ) { return ::hx::Val( LUMINANCE16F_EXT ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"LUMINANCE8_ALPHA8_EXT") ) { return ::hx::Val( LUMINANCE8_ALPHA8_EXT ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"LUMINANCE_ALPHA32F_EXT") ) { return ::hx::Val( LUMINANCE_ALPHA32F_EXT ); }
		if (HX_FIELD_EQ(inName,"LUMINANCE_ALPHA16F_EXT") ) { return ::hx::Val( LUMINANCE_ALPHA16F_EXT ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"TEXTURE_IMMUTABLE_FORMAT_EXT") ) { return ::hx::Val( TEXTURE_IMMUTABLE_FORMAT_EXT ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EXT_texture_storage_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"R8_EXT") ) { R8_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"RG8_EXT") ) { RG8_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"R32F_EXT") ) { R32F_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"R16F_EXT") ) { R16F_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RGB10_EXT") ) { RGB10_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BGRA8_EXT") ) { BGRA8_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RG32F_EXT") ) { RG32F_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RG16F_EXT") ) { RG16F_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ALPHA8_EXT") ) { ALPHA8_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB32F_EXT") ) { RGB32F_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB16F_EXT") ) { RGB16F_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"RGBA32F_EXT") ) { RGBA32F_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGBA16F_EXT") ) { RGBA16F_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ALPHA32F_EXT") ) { ALPHA32F_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALPHA16F_EXT") ) { ALPHA16F_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB10_A2_EXT") ) { RGB10_A2_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"LUMINANCE8_EXT") ) { LUMINANCE8_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"LUMINANCE32F_EXT") ) { LUMINANCE32F_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LUMINANCE16F_EXT") ) { LUMINANCE16F_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"LUMINANCE8_ALPHA8_EXT") ) { LUMINANCE8_ALPHA8_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"LUMINANCE_ALPHA32F_EXT") ) { LUMINANCE_ALPHA32F_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LUMINANCE_ALPHA16F_EXT") ) { LUMINANCE_ALPHA16F_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"TEXTURE_IMMUTABLE_FORMAT_EXT") ) { TEXTURE_IMMUTABLE_FORMAT_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_texture_storage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("TEXTURE_IMMUTABLE_FORMAT_EXT",ba,95,0b,ec));
	outFields->push(HX_("ALPHA8_EXT",bc,89,03,7f));
	outFields->push(HX_("LUMINANCE8_EXT",e2,52,e8,03));
	outFields->push(HX_("LUMINANCE8_ALPHA8_EXT",7b,5d,96,d3));
	outFields->push(HX_("RGBA32F_EXT",95,e1,9c,57));
	outFields->push(HX_("RGB32F_EXT",7c,2c,7b,ab));
	outFields->push(HX_("ALPHA32F_EXT",4b,e0,47,b8));
	outFields->push(HX_("LUMINANCE32F_EXT",f1,be,cd,d6));
	outFields->push(HX_("LUMINANCE_ALPHA32F_EXT",52,c4,77,9e));
	outFields->push(HX_("RGBA16F_EXT",8f,65,df,9d));
	outFields->push(HX_("RGB16F_EXT",76,b0,bd,f1));
	outFields->push(HX_("ALPHA16F_EXT",45,64,8a,fe));
	outFields->push(HX_("LUMINANCE16F_EXT",eb,42,10,1d));
	outFields->push(HX_("LUMINANCE_ALPHA16F_EXT",4c,48,ba,e4));
	outFields->push(HX_("RGB10_A2_EXT",e6,b6,90,ee));
	outFields->push(HX_("RGB10_EXT",8e,5a,92,a0));
	outFields->push(HX_("BGRA8_EXT",86,a0,bd,0b));
	outFields->push(HX_("R8_EXT",28,00,b4,46));
	outFields->push(HX_("RG8_EXT",e5,11,a7,32));
	outFields->push(HX_("R32F_EXT",b7,c9,d3,25));
	outFields->push(HX_("RG32F_EXT",b4,84,fc,41));
	outFields->push(HX_("R16F_EXT",b1,4d,16,6c));
	outFields->push(HX_("RG16F_EXT",ae,08,3f,88));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EXT_texture_storage_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(EXT_texture_storage_obj,TEXTURE_IMMUTABLE_FORMAT_EXT),HX_("TEXTURE_IMMUTABLE_FORMAT_EXT",ba,95,0b,ec)},
	{::hx::fsInt,(int)offsetof(EXT_texture_storage_obj,ALPHA8_EXT),HX_("ALPHA8_EXT",bc,89,03,7f)},
	{::hx::fsInt,(int)offsetof(EXT_texture_storage_obj,LUMINANCE8_EXT),HX_("LUMINANCE8_EXT",e2,52,e8,03)},
	{::hx::fsInt,(int)offsetof(EXT_texture_storage_obj,LUMINANCE8_ALPHA8_EXT),HX_("LUMINANCE8_ALPHA8_EXT",7b,5d,96,d3)},
	{::hx::fsInt,(int)offsetof(EXT_texture_storage_obj,RGBA32F_EXT),HX_("RGBA32F_EXT",95,e1,9c,57)},
	{::hx::fsInt,(int)offsetof(EXT_texture_storage_obj,RGB32F_EXT),HX_("RGB32F_EXT",7c,2c,7b,ab)},
	{::hx::fsInt,(int)offsetof(EXT_texture_storage_obj,ALPHA32F_EXT),HX_("ALPHA32F_EXT",4b,e0,47,b8)},
	{::hx::fsInt,(int)offsetof(EXT_texture_storage_obj,LUMINANCE32F_EXT),HX_("LUMINANCE32F_EXT",f1,be,cd,d6)},
	{::hx::fsInt,(int)offsetof(EXT_texture_storage_obj,LUMINANCE_ALPHA32F_EXT),HX_("LUMINANCE_ALPHA32F_EXT",52,c4,77,9e)},
	{::hx::fsInt,(int)offsetof(EXT_texture_storage_obj,RGBA16F_EXT),HX_("RGBA16F_EXT",8f,65,df,9d)},
	{::hx::fsInt,(int)offsetof(EXT_texture_storage_obj,RGB16F_EXT),HX_("RGB16F_EXT",76,b0,bd,f1)},
	{::hx::fsInt,(int)offsetof(EXT_texture_storage_obj,ALPHA16F_EXT),HX_("ALPHA16F_EXT",45,64,8a,fe)},
	{::hx::fsInt,(int)offsetof(EXT_texture_storage_obj,LUMINANCE16F_EXT),HX_("LUMINANCE16F_EXT",eb,42,10,1d)},
	{::hx::fsInt,(int)offsetof(EXT_texture_storage_obj,LUMINANCE_ALPHA16F_EXT),HX_("LUMINANCE_ALPHA16F_EXT",4c,48,ba,e4)},
	{::hx::fsInt,(int)offsetof(EXT_texture_storage_obj,RGB10_A2_EXT),HX_("RGB10_A2_EXT",e6,b6,90,ee)},
	{::hx::fsInt,(int)offsetof(EXT_texture_storage_obj,RGB10_EXT),HX_("RGB10_EXT",8e,5a,92,a0)},
	{::hx::fsInt,(int)offsetof(EXT_texture_storage_obj,BGRA8_EXT),HX_("BGRA8_EXT",86,a0,bd,0b)},
	{::hx::fsInt,(int)offsetof(EXT_texture_storage_obj,R8_EXT),HX_("R8_EXT",28,00,b4,46)},
	{::hx::fsInt,(int)offsetof(EXT_texture_storage_obj,RG8_EXT),HX_("RG8_EXT",e5,11,a7,32)},
	{::hx::fsInt,(int)offsetof(EXT_texture_storage_obj,R32F_EXT),HX_("R32F_EXT",b7,c9,d3,25)},
	{::hx::fsInt,(int)offsetof(EXT_texture_storage_obj,RG32F_EXT),HX_("RG32F_EXT",b4,84,fc,41)},
	{::hx::fsInt,(int)offsetof(EXT_texture_storage_obj,R16F_EXT),HX_("R16F_EXT",b1,4d,16,6c)},
	{::hx::fsInt,(int)offsetof(EXT_texture_storage_obj,RG16F_EXT),HX_("RG16F_EXT",ae,08,3f,88)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EXT_texture_storage_obj_sStaticStorageInfo = 0;
#endif

static ::String EXT_texture_storage_obj_sMemberFields[] = {
	HX_("TEXTURE_IMMUTABLE_FORMAT_EXT",ba,95,0b,ec),
	HX_("ALPHA8_EXT",bc,89,03,7f),
	HX_("LUMINANCE8_EXT",e2,52,e8,03),
	HX_("LUMINANCE8_ALPHA8_EXT",7b,5d,96,d3),
	HX_("RGBA32F_EXT",95,e1,9c,57),
	HX_("RGB32F_EXT",7c,2c,7b,ab),
	HX_("ALPHA32F_EXT",4b,e0,47,b8),
	HX_("LUMINANCE32F_EXT",f1,be,cd,d6),
	HX_("LUMINANCE_ALPHA32F_EXT",52,c4,77,9e),
	HX_("RGBA16F_EXT",8f,65,df,9d),
	HX_("RGB16F_EXT",76,b0,bd,f1),
	HX_("ALPHA16F_EXT",45,64,8a,fe),
	HX_("LUMINANCE16F_EXT",eb,42,10,1d),
	HX_("LUMINANCE_ALPHA16F_EXT",4c,48,ba,e4),
	HX_("RGB10_A2_EXT",e6,b6,90,ee),
	HX_("RGB10_EXT",8e,5a,92,a0),
	HX_("BGRA8_EXT",86,a0,bd,0b),
	HX_("R8_EXT",28,00,b4,46),
	HX_("RG8_EXT",e5,11,a7,32),
	HX_("R32F_EXT",b7,c9,d3,25),
	HX_("RG32F_EXT",b4,84,fc,41),
	HX_("R16F_EXT",b1,4d,16,6c),
	HX_("RG16F_EXT",ae,08,3f,88),
	::String(null()) };

::hx::Class EXT_texture_storage_obj::__mClass;

void EXT_texture_storage_obj::__register()
{
	EXT_texture_storage_obj _hx_dummy;
	EXT_texture_storage_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.EXT_texture_storage",37,68,e1,f6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EXT_texture_storage_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EXT_texture_storage_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EXT_texture_storage_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EXT_texture_storage_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
