#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_GenericCell_hxcpp_debug_jsonrpc_eval_Token
#include <haxe/ds/GenericCell_hxcpp_debug_jsonrpc_eval_Token.h>
#endif
#ifndef INCLUDED_haxe_ds_GenericStack_hxcpp_debug_jsonrpc_eval_Token
#include <haxe/ds/GenericStack_hxcpp_debug_jsonrpc_eval_Token.h>
#endif
#ifndef INCLUDED_haxe_ds__GenericStack_GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token
#include <haxe/ds/_GenericStack/GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token.h>
#endif
#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_Token
#include <hxcpp/debug/jsonrpc/eval/Token.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8d846d36fc5f8c04_107_new,"haxe.ds.GenericStack_hxcpp_debug_jsonrpc_eval_Token","new",0xa7610a19,"haxe.ds.GenericStack_hxcpp_debug_jsonrpc_eval_Token.new","/usr/share/haxe/std/haxe/ds/GenericStack.hx",107,0x427260fb)
HX_LOCAL_STACK_FRAME(_hx_pos_8d846d36fc5f8c04_113_add,"haxe.ds.GenericStack_hxcpp_debug_jsonrpc_eval_Token","add",0xa7572bda,"haxe.ds.GenericStack_hxcpp_debug_jsonrpc_eval_Token.add","/usr/share/haxe/std/haxe/ds/GenericStack.hx",113,0x427260fb)
HX_LOCAL_STACK_FRAME(_hx_pos_8d846d36fc5f8c04_122_first,"haxe.ds.GenericStack_hxcpp_debug_jsonrpc_eval_Token","first",0x70b75229,"haxe.ds.GenericStack_hxcpp_debug_jsonrpc_eval_Token.first","/usr/share/haxe/std/haxe/ds/GenericStack.hx",122,0x427260fb)
HX_LOCAL_STACK_FRAME(_hx_pos_8d846d36fc5f8c04_130_pop,"haxe.ds.GenericStack_hxcpp_debug_jsonrpc_eval_Token","pop",0xa762974a,"haxe.ds.GenericStack_hxcpp_debug_jsonrpc_eval_Token.pop","/usr/share/haxe/std/haxe/ds/GenericStack.hx",130,0x427260fb)
HX_LOCAL_STACK_FRAME(_hx_pos_8d846d36fc5f8c04_144_isEmpty,"haxe.ds.GenericStack_hxcpp_debug_jsonrpc_eval_Token","isEmpty",0x1a1ee87c,"haxe.ds.GenericStack_hxcpp_debug_jsonrpc_eval_Token.isEmpty","/usr/share/haxe/std/haxe/ds/GenericStack.hx",144,0x427260fb)
HX_LOCAL_STACK_FRAME(_hx_pos_8d846d36fc5f8c04_156_remove,"haxe.ds.GenericStack_hxcpp_debug_jsonrpc_eval_Token","remove",0xab0d7c2b,"haxe.ds.GenericStack_hxcpp_debug_jsonrpc_eval_Token.remove","/usr/share/haxe/std/haxe/ds/GenericStack.hx",156,0x427260fb)
HX_LOCAL_STACK_FRAME(_hx_pos_8d846d36fc5f8c04_178_iterator,"haxe.ds.GenericStack_hxcpp_debug_jsonrpc_eval_Token","iterator",0x8d043195,"haxe.ds.GenericStack_hxcpp_debug_jsonrpc_eval_Token.iterator","/usr/share/haxe/std/haxe/ds/GenericStack.hx",178,0x427260fb)
HX_LOCAL_STACK_FRAME(_hx_pos_8d846d36fc5f8c04_203_toString,"haxe.ds.GenericStack_hxcpp_debug_jsonrpc_eval_Token","toString",0x31d8b853,"haxe.ds.GenericStack_hxcpp_debug_jsonrpc_eval_Token.toString","/usr/share/haxe/std/haxe/ds/GenericStack.hx",203,0x427260fb)
namespace haxe{
namespace ds{

void GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_8d846d36fc5f8c04_107_new)
            	HX_STACK_THIS(this)
HXLINE( 107)
            	}

Dynamic GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj::__CreateEmpty() { return new GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj; }

void *GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj::_hx_vtable = 0;

Dynamic GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj > _hx_result = new GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7761ada9;
}

void GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj::add( ::hxcpp::debug::jsonrpc::eval::Token item){
            	HX_GC_STACKFRAME(&_hx_pos_8d846d36fc5f8c04_113_add)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(item,"item")
HXLINE( 113)
HXDLIN( 113)		this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,item,this->head);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj,add,(void))

 ::hxcpp::debug::jsonrpc::eval::Token GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj::first(){
            	HX_STACKFRAME(&_hx_pos_8d846d36fc5f8c04_122_first)
            	HX_STACK_THIS(this)
HXLINE( 122)
HXDLIN( 122)		if (::hx::IsNull( this->head )) {
HXDLIN( 122)			return null();
            		}
            		else {
HXDLIN( 122)			return this->head->elt;
            		}
HXDLIN( 122)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj,first,return )

 ::hxcpp::debug::jsonrpc::eval::Token GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj::pop(){
            	HX_STACKFRAME(&_hx_pos_8d846d36fc5f8c04_130_pop)
            	HX_STACK_THIS(this)
HXLINE( 130)
HXLINE( 131)		HX_VARI(  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token,k) = this->head;
HXLINE( 132)		if (::hx::IsNull( k )) {
HXLINE( 133)			return null();
            		}
            		else {
HXLINE( 135)			this->head = k->next;
HXLINE( 136)			return k->elt;
            		}
HXLINE( 132)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj,pop,return )

bool GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj::isEmpty(){
            	HX_STACKFRAME(&_hx_pos_8d846d36fc5f8c04_144_isEmpty)
            	HX_STACK_THIS(this)
HXLINE( 144)
HXDLIN( 144)		return ::hx::IsNull( this->head );
            	}


HX_DEFINE_DYNAMIC_FUNC0(GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj,isEmpty,return )

bool GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj::remove( ::hxcpp::debug::jsonrpc::eval::Token v){
            	HX_STACKFRAME(&_hx_pos_8d846d36fc5f8c04_156_remove)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(v,"v")
HXLINE( 156)
HXLINE( 157)		HX_VARI(  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token,prev) = null();
HXLINE( 158)		HX_VARI(  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token,l) = this->head;
HXLINE( 159)		while(::hx::IsNotNull( l )){
HXLINE( 160)			if (::hx::IsPointerEq( l->elt,v )) {
HXLINE( 161)				if (::hx::IsNull( prev )) {
HXLINE( 162)					this->head = l->next;
            				}
            				else {
HXLINE( 164)					prev->next = l->next;
            				}
HXLINE( 165)				goto _hx_goto_5;
            			}
HXLINE( 167)			prev = l;
HXLINE( 168)			l = l->next;
            		}
            		_hx_goto_5:;
HXLINE( 170)		return ::hx::IsNotNull( l );
            	}


HX_DEFINE_DYNAMIC_FUNC1(GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj,remove,return )

 ::Dynamic GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj::iterator(){
            	HX_GC_STACKFRAME(&_hx_pos_8d846d36fc5f8c04_178_iterator)
            	HX_STACK_THIS(this)
HXLINE( 178)
HXDLIN( 178)		return  ::haxe::ds::_GenericStack::GenericStackIterator_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,this->head);
            	}


HX_DEFINE_DYNAMIC_FUNC0(GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj,iterator,return )

::String GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_8d846d36fc5f8c04_203_toString)
            	HX_STACK_THIS(this)
HXLINE( 203)
HXLINE( 204)		HX_VARI( ::Array< ::Dynamic>,a) = ::Array_obj< ::Dynamic>::__new();
HXLINE( 205)		HX_VARI(  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token,l) = this->head;
HXLINE( 206)		while(::hx::IsNotNull( l )){
HXLINE( 207)			a->push(l->elt);
HXLINE( 208)			l = l->next;
            		}
HXLINE( 210)		return ((HX_("{",7b,00,00,00) + a->join(HX_(",",2c,00,00,00))) + HX_("}",7d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj,toString,return )


::hx::ObjectPtr< GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj > GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj::__new() {
	::hx::ObjectPtr< GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj > __this = new GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj > GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc(::hx::Ctx *_hx_ctx) {
	GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj *__this = (GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj), true, "haxe.ds.GenericStack_hxcpp_debug_jsonrpc_eval_Token"));
	*(void **)__this = GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj::GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj()
{
}

void GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GenericStack_hxcpp_debug_jsonrpc_eval_Token);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
}

::hx::Val GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"pop") ) { return ::hx::Val( pop_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { return ::hx::Val( head ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"first") ) { return ::hx::Val( first_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return ::hx::Val( isEmpty_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return ::hx::Val( iterator_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast<  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("head",20,29,0b,45));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token */ ,(int)offsetof(GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj,head),HX_("head",20,29,0b,45)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj_sStaticStorageInfo = 0;
#endif

static ::String GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj_sMemberFields[] = {
	HX_("head",20,29,0b,45),
	HX_("add",21,f2,49,00),
	HX_("first",30,78,9d,00),
	HX_("pop",91,5d,55,00),
	HX_("isEmpty",43,de,5f,0c),
	HX_("remove",44,9c,88,04),
	HX_("iterator",ee,49,9a,93),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj::__mClass;

void GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj::__register()
{
	GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj _hx_dummy;
	GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ds.GenericStack_hxcpp_debug_jsonrpc_eval_Token",a7,09,82,5c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ds
