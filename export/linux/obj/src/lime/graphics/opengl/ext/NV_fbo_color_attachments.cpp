#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_NV_fbo_color_attachments
#include <lime/graphics/opengl/ext/NV_fbo_color_attachments.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a70c78690b87ad78_4_new,"lime.graphics.opengl.ext.NV_fbo_color_attachments","new",0xf66e66e5,"lime.graphics.opengl.ext.NV_fbo_color_attachments.new","lime/graphics/opengl/ext/NV_fbo_color_attachments.hx",4,0x2fbd4ec9)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void NV_fbo_color_attachments_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a70c78690b87ad78_4_new)
            	HX_STACK_THIS(this)
HXLINE(   4)
HXLINE(  22)		this->COLOR_ATTACHMENT15_NV = 36079;
HXLINE(  21)		this->COLOR_ATTACHMENT14_NV = 36078;
HXLINE(  20)		this->COLOR_ATTACHMENT13_NV = 36077;
HXLINE(  19)		this->COLOR_ATTACHMENT12_NV = 36076;
HXLINE(  18)		this->COLOR_ATTACHMENT11_NV = 36075;
HXLINE(  17)		this->COLOR_ATTACHMENT10_NV = 36074;
HXLINE(  16)		this->COLOR_ATTACHMENT9_NV = 36073;
HXLINE(  15)		this->COLOR_ATTACHMENT8_NV = 36072;
HXLINE(  14)		this->COLOR_ATTACHMENT7_NV = 36071;
HXLINE(  13)		this->COLOR_ATTACHMENT6_NV = 36070;
HXLINE(  12)		this->COLOR_ATTACHMENT5_NV = 36069;
HXLINE(  11)		this->COLOR_ATTACHMENT4_NV = 36068;
HXLINE(  10)		this->COLOR_ATTACHMENT3_NV = 36067;
HXLINE(   9)		this->COLOR_ATTACHMENT2_NV = 36066;
HXLINE(   8)		this->COLOR_ATTACHMENT1_NV = 36065;
HXLINE(   7)		this->COLOR_ATTACHMENT0_NV = 36064;
HXLINE(   6)		this->MAX_COLOR_ATTACHMENTS_NV = 36063;
            	}

Dynamic NV_fbo_color_attachments_obj::__CreateEmpty() { return new NV_fbo_color_attachments_obj; }

void *NV_fbo_color_attachments_obj::_hx_vtable = 0;

Dynamic NV_fbo_color_attachments_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NV_fbo_color_attachments_obj > _hx_result = new NV_fbo_color_attachments_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NV_fbo_color_attachments_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4f7617c3;
}


NV_fbo_color_attachments_obj::NV_fbo_color_attachments_obj()
{
}

::hx::Val NV_fbo_color_attachments_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 20:
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT0_NV") ) { return ::hx::Val( COLOR_ATTACHMENT0_NV ); }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT1_NV") ) { return ::hx::Val( COLOR_ATTACHMENT1_NV ); }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT2_NV") ) { return ::hx::Val( COLOR_ATTACHMENT2_NV ); }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT3_NV") ) { return ::hx::Val( COLOR_ATTACHMENT3_NV ); }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT4_NV") ) { return ::hx::Val( COLOR_ATTACHMENT4_NV ); }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT5_NV") ) { return ::hx::Val( COLOR_ATTACHMENT5_NV ); }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT6_NV") ) { return ::hx::Val( COLOR_ATTACHMENT6_NV ); }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT7_NV") ) { return ::hx::Val( COLOR_ATTACHMENT7_NV ); }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT8_NV") ) { return ::hx::Val( COLOR_ATTACHMENT8_NV ); }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT9_NV") ) { return ::hx::Val( COLOR_ATTACHMENT9_NV ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT10_NV") ) { return ::hx::Val( COLOR_ATTACHMENT10_NV ); }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT11_NV") ) { return ::hx::Val( COLOR_ATTACHMENT11_NV ); }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT12_NV") ) { return ::hx::Val( COLOR_ATTACHMENT12_NV ); }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT13_NV") ) { return ::hx::Val( COLOR_ATTACHMENT13_NV ); }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT14_NV") ) { return ::hx::Val( COLOR_ATTACHMENT14_NV ); }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT15_NV") ) { return ::hx::Val( COLOR_ATTACHMENT15_NV ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"MAX_COLOR_ATTACHMENTS_NV") ) { return ::hx::Val( MAX_COLOR_ATTACHMENTS_NV ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val NV_fbo_color_attachments_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 20:
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT0_NV") ) { COLOR_ATTACHMENT0_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT1_NV") ) { COLOR_ATTACHMENT1_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT2_NV") ) { COLOR_ATTACHMENT2_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT3_NV") ) { COLOR_ATTACHMENT3_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT4_NV") ) { COLOR_ATTACHMENT4_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT5_NV") ) { COLOR_ATTACHMENT5_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT6_NV") ) { COLOR_ATTACHMENT6_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT7_NV") ) { COLOR_ATTACHMENT7_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT8_NV") ) { COLOR_ATTACHMENT8_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT9_NV") ) { COLOR_ATTACHMENT9_NV=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT10_NV") ) { COLOR_ATTACHMENT10_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT11_NV") ) { COLOR_ATTACHMENT11_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT12_NV") ) { COLOR_ATTACHMENT12_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT13_NV") ) { COLOR_ATTACHMENT13_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT14_NV") ) { COLOR_ATTACHMENT14_NV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT15_NV") ) { COLOR_ATTACHMENT15_NV=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"MAX_COLOR_ATTACHMENTS_NV") ) { MAX_COLOR_ATTACHMENTS_NV=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NV_fbo_color_attachments_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("MAX_COLOR_ATTACHMENTS_NV",ee,38,c0,07));
	outFields->push(HX_("COLOR_ATTACHMENT0_NV",56,c4,e4,ab));
	outFields->push(HX_("COLOR_ATTACHMENT1_NV",f5,fa,8d,ac));
	outFields->push(HX_("COLOR_ATTACHMENT2_NV",94,31,37,ad));
	outFields->push(HX_("COLOR_ATTACHMENT3_NV",33,68,e0,ad));
	outFields->push(HX_("COLOR_ATTACHMENT4_NV",d2,9e,89,ae));
	outFields->push(HX_("COLOR_ATTACHMENT5_NV",71,d5,32,af));
	outFields->push(HX_("COLOR_ATTACHMENT6_NV",10,0c,dc,af));
	outFields->push(HX_("COLOR_ATTACHMENT7_NV",af,42,85,b0));
	outFields->push(HX_("COLOR_ATTACHMENT8_NV",4e,79,2e,b1));
	outFields->push(HX_("COLOR_ATTACHMENT9_NV",ed,af,d7,b1));
	outFields->push(HX_("COLOR_ATTACHMENT10_NV",e9,73,a9,30));
	outFields->push(HX_("COLOR_ATTACHMENT11_NV",88,aa,52,31));
	outFields->push(HX_("COLOR_ATTACHMENT12_NV",27,e1,fb,31));
	outFields->push(HX_("COLOR_ATTACHMENT13_NV",c6,17,a5,32));
	outFields->push(HX_("COLOR_ATTACHMENT14_NV",65,4e,4e,33));
	outFields->push(HX_("COLOR_ATTACHMENT15_NV",04,85,f7,33));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NV_fbo_color_attachments_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(NV_fbo_color_attachments_obj,MAX_COLOR_ATTACHMENTS_NV),HX_("MAX_COLOR_ATTACHMENTS_NV",ee,38,c0,07)},
	{::hx::fsInt,(int)offsetof(NV_fbo_color_attachments_obj,COLOR_ATTACHMENT0_NV),HX_("COLOR_ATTACHMENT0_NV",56,c4,e4,ab)},
	{::hx::fsInt,(int)offsetof(NV_fbo_color_attachments_obj,COLOR_ATTACHMENT1_NV),HX_("COLOR_ATTACHMENT1_NV",f5,fa,8d,ac)},
	{::hx::fsInt,(int)offsetof(NV_fbo_color_attachments_obj,COLOR_ATTACHMENT2_NV),HX_("COLOR_ATTACHMENT2_NV",94,31,37,ad)},
	{::hx::fsInt,(int)offsetof(NV_fbo_color_attachments_obj,COLOR_ATTACHMENT3_NV),HX_("COLOR_ATTACHMENT3_NV",33,68,e0,ad)},
	{::hx::fsInt,(int)offsetof(NV_fbo_color_attachments_obj,COLOR_ATTACHMENT4_NV),HX_("COLOR_ATTACHMENT4_NV",d2,9e,89,ae)},
	{::hx::fsInt,(int)offsetof(NV_fbo_color_attachments_obj,COLOR_ATTACHMENT5_NV),HX_("COLOR_ATTACHMENT5_NV",71,d5,32,af)},
	{::hx::fsInt,(int)offsetof(NV_fbo_color_attachments_obj,COLOR_ATTACHMENT6_NV),HX_("COLOR_ATTACHMENT6_NV",10,0c,dc,af)},
	{::hx::fsInt,(int)offsetof(NV_fbo_color_attachments_obj,COLOR_ATTACHMENT7_NV),HX_("COLOR_ATTACHMENT7_NV",af,42,85,b0)},
	{::hx::fsInt,(int)offsetof(NV_fbo_color_attachments_obj,COLOR_ATTACHMENT8_NV),HX_("COLOR_ATTACHMENT8_NV",4e,79,2e,b1)},
	{::hx::fsInt,(int)offsetof(NV_fbo_color_attachments_obj,COLOR_ATTACHMENT9_NV),HX_("COLOR_ATTACHMENT9_NV",ed,af,d7,b1)},
	{::hx::fsInt,(int)offsetof(NV_fbo_color_attachments_obj,COLOR_ATTACHMENT10_NV),HX_("COLOR_ATTACHMENT10_NV",e9,73,a9,30)},
	{::hx::fsInt,(int)offsetof(NV_fbo_color_attachments_obj,COLOR_ATTACHMENT11_NV),HX_("COLOR_ATTACHMENT11_NV",88,aa,52,31)},
	{::hx::fsInt,(int)offsetof(NV_fbo_color_attachments_obj,COLOR_ATTACHMENT12_NV),HX_("COLOR_ATTACHMENT12_NV",27,e1,fb,31)},
	{::hx::fsInt,(int)offsetof(NV_fbo_color_attachments_obj,COLOR_ATTACHMENT13_NV),HX_("COLOR_ATTACHMENT13_NV",c6,17,a5,32)},
	{::hx::fsInt,(int)offsetof(NV_fbo_color_attachments_obj,COLOR_ATTACHMENT14_NV),HX_("COLOR_ATTACHMENT14_NV",65,4e,4e,33)},
	{::hx::fsInt,(int)offsetof(NV_fbo_color_attachments_obj,COLOR_ATTACHMENT15_NV),HX_("COLOR_ATTACHMENT15_NV",04,85,f7,33)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *NV_fbo_color_attachments_obj_sStaticStorageInfo = 0;
#endif

static ::String NV_fbo_color_attachments_obj_sMemberFields[] = {
	HX_("MAX_COLOR_ATTACHMENTS_NV",ee,38,c0,07),
	HX_("COLOR_ATTACHMENT0_NV",56,c4,e4,ab),
	HX_("COLOR_ATTACHMENT1_NV",f5,fa,8d,ac),
	HX_("COLOR_ATTACHMENT2_NV",94,31,37,ad),
	HX_("COLOR_ATTACHMENT3_NV",33,68,e0,ad),
	HX_("COLOR_ATTACHMENT4_NV",d2,9e,89,ae),
	HX_("COLOR_ATTACHMENT5_NV",71,d5,32,af),
	HX_("COLOR_ATTACHMENT6_NV",10,0c,dc,af),
	HX_("COLOR_ATTACHMENT7_NV",af,42,85,b0),
	HX_("COLOR_ATTACHMENT8_NV",4e,79,2e,b1),
	HX_("COLOR_ATTACHMENT9_NV",ed,af,d7,b1),
	HX_("COLOR_ATTACHMENT10_NV",e9,73,a9,30),
	HX_("COLOR_ATTACHMENT11_NV",88,aa,52,31),
	HX_("COLOR_ATTACHMENT12_NV",27,e1,fb,31),
	HX_("COLOR_ATTACHMENT13_NV",c6,17,a5,32),
	HX_("COLOR_ATTACHMENT14_NV",65,4e,4e,33),
	HX_("COLOR_ATTACHMENT15_NV",04,85,f7,33),
	::String(null()) };

::hx::Class NV_fbo_color_attachments_obj::__mClass;

void NV_fbo_color_attachments_obj::__register()
{
	NV_fbo_color_attachments_obj _hx_dummy;
	NV_fbo_color_attachments_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.NV_fbo_color_attachments",73,10,56,54);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NV_fbo_color_attachments_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NV_fbo_color_attachments_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NV_fbo_color_attachments_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NV_fbo_color_attachments_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
