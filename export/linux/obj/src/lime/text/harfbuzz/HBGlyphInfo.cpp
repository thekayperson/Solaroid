#include <hxcpp.h>

#ifndef INCLUDED_lime_text_harfbuzz_HBGlyphInfo
#include <lime/text/harfbuzz/HBGlyphInfo.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_24b4250effd3403c_10_new,"lime.text.harfbuzz.HBGlyphInfo","new",0x936863ec,"lime.text.harfbuzz.HBGlyphInfo.new","lime/text/harfbuzz/HBGlyphInfo.hx",10,0x4a494c65)
namespace lime{
namespace text{
namespace harfbuzz{

void HBGlyphInfo_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_24b4250effd3403c_10_new)
            	HX_STACK_THIS(this)
HXLINE(  10)
            	}

Dynamic HBGlyphInfo_obj::__CreateEmpty() { return new HBGlyphInfo_obj; }

void *HBGlyphInfo_obj::_hx_vtable = 0;

Dynamic HBGlyphInfo_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HBGlyphInfo_obj > _hx_result = new HBGlyphInfo_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HBGlyphInfo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x392fc6fa;
}


HBGlyphInfo_obj::HBGlyphInfo_obj()
{
}

::hx::Val HBGlyphInfo_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { return ::hx::Val( mask ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cluster") ) { return ::hx::Val( cluster ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"codepoint") ) { return ::hx::Val( codepoint ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HBGlyphInfo_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { mask=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cluster") ) { cluster=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"codepoint") ) { codepoint=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HBGlyphInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("codepoint",03,a0,38,c7));
	outFields->push(HX_("mask",ec,40,56,48));
	outFields->push(HX_("cluster",fa,aa,95,ed));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HBGlyphInfo_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(HBGlyphInfo_obj,codepoint),HX_("codepoint",03,a0,38,c7)},
	{::hx::fsInt,(int)offsetof(HBGlyphInfo_obj,mask),HX_("mask",ec,40,56,48)},
	{::hx::fsInt,(int)offsetof(HBGlyphInfo_obj,cluster),HX_("cluster",fa,aa,95,ed)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HBGlyphInfo_obj_sStaticStorageInfo = 0;
#endif

static ::String HBGlyphInfo_obj_sMemberFields[] = {
	HX_("codepoint",03,a0,38,c7),
	HX_("mask",ec,40,56,48),
	HX_("cluster",fa,aa,95,ed),
	::String(null()) };

::hx::Class HBGlyphInfo_obj::__mClass;

void HBGlyphInfo_obj::__register()
{
	HBGlyphInfo_obj _hx_dummy;
	HBGlyphInfo_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.text.harfbuzz.HBGlyphInfo",fa,3d,9d,fe);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HBGlyphInfo_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HBGlyphInfo_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HBGlyphInfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HBGlyphInfo_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace text
} // end namespace harfbuzz
