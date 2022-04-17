#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_graphics_BlurStack
#include <lime/_internal/graphics/BlurStack.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_03d4cd0e01152a25_248_new,"lime._internal.graphics.BlurStack","new",0xf9e2749b,"lime._internal.graphics.BlurStack.new","lime/_internal/graphics/StackBlur.hx",248,0x80163c06)
namespace lime{
namespace _internal{
namespace graphics{

void BlurStack_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_03d4cd0e01152a25_248_new)
            	HX_STACK_THIS(this)
HXLINE( 248)
HXLINE( 249)		this->r = 0;
HXLINE( 250)		this->g = 0;
HXLINE( 251)		this->b = 0;
HXLINE( 252)		this->a = 0;
HXLINE( 253)		this->n = null();
            	}

Dynamic BlurStack_obj::__CreateEmpty() { return new BlurStack_obj; }

void *BlurStack_obj::_hx_vtable = 0;

Dynamic BlurStack_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BlurStack_obj > _hx_result = new BlurStack_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BlurStack_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x336aa1d7;
}


BlurStack_obj::BlurStack_obj()
{
}

void BlurStack_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BlurStack);
	HX_MARK_MEMBER_NAME(r,"r");
	HX_MARK_MEMBER_NAME(g,"g");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_MEMBER_NAME(n,"n");
	HX_MARK_END_CLASS();
}

void BlurStack_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(r,"r");
	HX_VISIT_MEMBER_NAME(g,"g");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(a,"a");
	HX_VISIT_MEMBER_NAME(n,"n");
}

::hx::Val BlurStack_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return ::hx::Val( r ); }
		if (HX_FIELD_EQ(inName,"g") ) { return ::hx::Val( g ); }
		if (HX_FIELD_EQ(inName,"b") ) { return ::hx::Val( b ); }
		if (HX_FIELD_EQ(inName,"a") ) { return ::hx::Val( a ); }
		if (HX_FIELD_EQ(inName,"n") ) { return ::hx::Val( n ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BlurStack_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g") ) { g=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"n") ) { n=inValue.Cast<  ::lime::_internal::graphics::BlurStack >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BlurStack_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("r",72,00,00,00));
	outFields->push(HX_("g",67,00,00,00));
	outFields->push(HX_("b",62,00,00,00));
	outFields->push(HX_("a",61,00,00,00));
	outFields->push(HX_("n",6e,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BlurStack_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(BlurStack_obj,r),HX_("r",72,00,00,00)},
	{::hx::fsInt,(int)offsetof(BlurStack_obj,g),HX_("g",67,00,00,00)},
	{::hx::fsInt,(int)offsetof(BlurStack_obj,b),HX_("b",62,00,00,00)},
	{::hx::fsInt,(int)offsetof(BlurStack_obj,a),HX_("a",61,00,00,00)},
	{::hx::fsObject /*  ::lime::_internal::graphics::BlurStack */ ,(int)offsetof(BlurStack_obj,n),HX_("n",6e,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BlurStack_obj_sStaticStorageInfo = 0;
#endif

static ::String BlurStack_obj_sMemberFields[] = {
	HX_("r",72,00,00,00),
	HX_("g",67,00,00,00),
	HX_("b",62,00,00,00),
	HX_("a",61,00,00,00),
	HX_("n",6e,00,00,00),
	::String(null()) };

::hx::Class BlurStack_obj::__mClass;

void BlurStack_obj::__register()
{
	BlurStack_obj _hx_dummy;
	BlurStack_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime._internal.graphics.BlurStack",29,8b,97,75);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BlurStack_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BlurStack_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BlurStack_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BlurStack_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _internal
} // end namespace graphics
