#include <hxcpp.h>

#ifndef INCLUDED_openfl_text_TextLineMetrics
#include <openfl/text/TextLineMetrics.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_769ce4a0cb4bebca_89_new,"openfl.text.TextLineMetrics","new",0x08194531,"openfl.text.TextLineMetrics.new","openfl/text/TextLineMetrics.hx",89,0x3c3b1fbf)
namespace openfl{
namespace text{

void TextLineMetrics_obj::__construct(Float x,Float width,Float height,Float ascent,Float descent,Float leading){
            	HX_STACKFRAME(&_hx_pos_769ce4a0cb4bebca_89_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	HX_STACK_ARG(ascent,"ascent")
            	HX_STACK_ARG(descent,"descent")
            	HX_STACK_ARG(leading,"leading")
HXLINE(  89)
HXLINE(  90)		this->x = x;
HXLINE(  91)		this->width = width;
HXLINE(  92)		this->height = height;
HXLINE(  93)		this->ascent = ascent;
HXLINE(  94)		this->descent = descent;
HXLINE(  95)		this->leading = leading;
            	}

Dynamic TextLineMetrics_obj::__CreateEmpty() { return new TextLineMetrics_obj; }

void *TextLineMetrics_obj::_hx_vtable = 0;

Dynamic TextLineMetrics_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextLineMetrics_obj > _hx_result = new TextLineMetrics_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool TextLineMetrics_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3ebfbfc5;
}


TextLineMetrics_obj::TextLineMetrics_obj()
{
}

::hx::Val TextLineMetrics_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ascent") ) { return ::hx::Val( ascent ); }
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"descent") ) { return ::hx::Val( descent ); }
		if (HX_FIELD_EQ(inName,"leading") ) { return ::hx::Val( leading ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TextLineMetrics_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ascent") ) { ascent=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"descent") ) { descent=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leading") ) { leading=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextLineMetrics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("ascent",5a,d9,6f,41));
	outFields->push(HX_("descent",3a,ae,3f,19));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("leading",c6,32,61,09));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("x",78,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TextLineMetrics_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(TextLineMetrics_obj,ascent),HX_("ascent",5a,d9,6f,41)},
	{::hx::fsFloat,(int)offsetof(TextLineMetrics_obj,descent),HX_("descent",3a,ae,3f,19)},
	{::hx::fsFloat,(int)offsetof(TextLineMetrics_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsFloat,(int)offsetof(TextLineMetrics_obj,leading),HX_("leading",c6,32,61,09)},
	{::hx::fsFloat,(int)offsetof(TextLineMetrics_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsFloat,(int)offsetof(TextLineMetrics_obj,x),HX_("x",78,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TextLineMetrics_obj_sStaticStorageInfo = 0;
#endif

static ::String TextLineMetrics_obj_sMemberFields[] = {
	HX_("ascent",5a,d9,6f,41),
	HX_("descent",3a,ae,3f,19),
	HX_("height",e7,07,4c,02),
	HX_("leading",c6,32,61,09),
	HX_("width",06,b6,62,ca),
	HX_("x",78,00,00,00),
	::String(null()) };

::hx::Class TextLineMetrics_obj::__mClass;

void TextLineMetrics_obj::__register()
{
	TextLineMetrics_obj _hx_dummy;
	TextLineMetrics_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.text.TextLineMetrics",bf,d8,88,7e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextLineMetrics_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextLineMetrics_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextLineMetrics_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextLineMetrics_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace text
