#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_GenericCell_hxcpp_debug_jsonrpc_eval_Token
#include <haxe/ds/GenericCell_hxcpp_debug_jsonrpc_eval_Token.h>
#endif
#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_Token
#include <hxcpp/debug/jsonrpc/eval/Token.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_36adcb03d81f1fa1_37_new,"haxe.ds.GenericCell_hxcpp_debug_jsonrpc_eval_Token","new",0xe7dc30ff,"haxe.ds.GenericCell_hxcpp_debug_jsonrpc_eval_Token.new","/usr/share/haxe/std/haxe/ds/GenericStack.hx",37,0x427260fb)
namespace haxe{
namespace ds{

void GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__construct( ::hxcpp::debug::jsonrpc::eval::Token elt, ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token next){
            	HX_STACKFRAME(&_hx_pos_36adcb03d81f1fa1_37_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(elt,"elt")
            	HX_STACK_ARG(next,"next")
HXLINE(  37)
HXLINE(  38)		this->elt = elt;
HXLINE(  39)		this->next = next;
            	}

Dynamic GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__CreateEmpty() { return new GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj; }

void *GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::_hx_vtable = 0;

Dynamic GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj > _hx_result = new GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1171132f;
}


::hx::ObjectPtr< GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj > GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__new( ::hxcpp::debug::jsonrpc::eval::Token elt, ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token next) {
	::hx::ObjectPtr< GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj > __this = new GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj();
	__this->__construct(elt,next);
	return __this;
}

::hx::ObjectPtr< GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj > GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc(::hx::Ctx *_hx_ctx, ::hxcpp::debug::jsonrpc::eval::Token elt, ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token next) {
	GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj *__this = (GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj), true, "haxe.ds.GenericCell_hxcpp_debug_jsonrpc_eval_Token"));
	*(void **)__this = GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::_hx_vtable;
	__this->__construct(elt,next);
	return __this;
}

GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj()
{
}

void GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GenericCell_hxcpp_debug_jsonrpc_eval_Token);
	HX_MARK_MEMBER_NAME(elt,"elt");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(elt,"elt");
	HX_VISIT_MEMBER_NAME(next,"next");
}

::hx::Val GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { return ::hx::Val( elt ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { elt=inValue.Cast<  ::hxcpp::debug::jsonrpc::eval::Token >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("elt",2d,02,4d,00));
	outFields->push(HX_("next",f3,84,02,49));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hxcpp::debug::jsonrpc::eval::Token */ ,(int)offsetof(GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj,elt),HX_("elt",2d,02,4d,00)},
	{::hx::fsObject /*  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token */ ,(int)offsetof(GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj,next),HX_("next",f3,84,02,49)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj_sStaticStorageInfo = 0;
#endif

static ::String GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj_sMemberFields[] = {
	HX_("elt",2d,02,4d,00),
	HX_("next",f3,84,02,49),
	::String(null()) };

::hx::Class GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__mClass;

void GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__register()
{
	GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj _hx_dummy;
	GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ds.GenericCell_hxcpp_debug_jsonrpc_eval_Token",8d,45,9a,9e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ds
