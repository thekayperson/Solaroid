#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_GenericCell_hxcpp_debug_jsonrpc_eval_Token
#include <haxe/ds/GenericCell_hxcpp_debug_jsonrpc_eval_Token.h>
#endif
#ifndef INCLUDED_haxe_ds__GenericStack_GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token
#include <haxe/ds/_GenericStack/GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token.h>
#endif
#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_Token
#include <hxcpp/debug/jsonrpc/eval/Token.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e0639ef7e0a7e08f_78_new,"haxe.ds._GenericStack.GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token","new",0xc74474cd,"haxe.ds._GenericStack.GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token.new","/usr/share/haxe/std/haxe/ds/GenericStack.hx",78,0x427260fb)
HX_LOCAL_STACK_FRAME(_hx_pos_e0639ef7e0a7e08f_68_hasNext,"haxe.ds._GenericStack.GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token","hasNext",0x9106845a,"haxe.ds._GenericStack.GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token.hasNext","/usr/share/haxe/std/haxe/ds/GenericStack.hx",68,0x427260fb)
HX_LOCAL_STACK_FRAME(_hx_pos_e0639ef7e0a7e08f_71_next,"haxe.ds._GenericStack.GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token","next",0x94a1bfe6,"haxe.ds._GenericStack.GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token.next","/usr/share/haxe/std/haxe/ds/GenericStack.hx",71,0x427260fb)
namespace haxe{
namespace ds{
namespace _GenericStack{

void GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj::__construct( ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token head){
            	HX_STACKFRAME(&_hx_pos_e0639ef7e0a7e08f_78_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(head,"head")
HXLINE(  78)
HXDLIN(  78)		this->current = head;
            	}

Dynamic GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj::__CreateEmpty() { return new GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj; }

void *GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj::_hx_vtable = 0;

Dynamic GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj > _hx_result = new GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1b9a7dd9;
}

bool GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_e0639ef7e0a7e08f_68_hasNext)
            	HX_STACK_THIS(this)
HXLINE(  68)
HXDLIN(  68)		return ::hx::IsNotNull( this->current );
            	}


 ::hxcpp::debug::jsonrpc::eval::Token GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj::next(){
            	HX_STACKFRAME(&_hx_pos_e0639ef7e0a7e08f_71_next)
            	HX_STACK_THIS(this)
HXLINE(  71)
HXLINE(  72)		HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,result) = this->current->elt;
HXLINE(  73)		this->current = this->current->next;
HXLINE(  74)		return result;
            	}



::hx::ObjectPtr< GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj > GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj::__new( ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token head) {
	::hx::ObjectPtr< GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj > __this = new GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj();
	__this->__construct(head);
	return __this;
}

::hx::ObjectPtr< GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj > GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token head) {
	GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj *__this = (GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj), true, "haxe.ds._GenericStack.GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token"));
	*(void **)__this = GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj::_hx_vtable;
	__this->__construct(head);
	return __this;
}

GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj::GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj()
{
}

void GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token);
	HX_MARK_MEMBER_NAME(current,"current");
	HX_MARK_END_CLASS();
}

void GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(current,"current");
}

::hx::Val GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { return ::hx::Val( current ); }
		if (HX_FIELD_EQ(inName,"hasNext") ) { return ::hx::Val( hasNext_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast<  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("current",39,9c,e3,cb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token */ ,(int)offsetof(GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj,current),HX_("current",39,9c,e3,cb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj_sStaticStorageInfo = 0;
#endif

static ::String GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj_sMemberFields[] = {
	HX_("current",39,9c,e3,cb),
	HX_("hasNext",6d,a5,46,18),
	HX_("next",f3,84,02,49),
	::String(null()) };

::hx::Class GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj::__mClass;

void GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj::__register()
{
	GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj _hx_dummy;
	GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ds._GenericStack.GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token",5b,0a,c5,fa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ds
} // end namespace _GenericStack
