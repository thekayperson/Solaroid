#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_List
#include <haxe/ds/List.h>
#endif
#ifndef INCLUDED_haxe_ds__List_ListIterator
#include <haxe/ds/_List/ListIterator.h>
#endif
#ifndef INCLUDED_haxe_ds__List_ListNode
#include <haxe/ds/_List/ListNode.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_109688f3b41df45c_45_new,"haxe.ds.List","new",0x82be24e7,"haxe.ds.List.new","/usr/share/haxe/std/haxe/ds/List.hx",45,0xd0d1e26e)
HX_LOCAL_STACK_FRAME(_hx_pos_109688f3b41df45c_53_add,"haxe.ds.List","add",0x82b446a8,"haxe.ds.List.add","/usr/share/haxe/std/haxe/ds/List.hx",53,0xd0d1e26e)
HX_LOCAL_STACK_FRAME(_hx_pos_109688f3b41df45c_68_push,"haxe.ds.List","push",0xe500b373,"haxe.ds.List.push","/usr/share/haxe/std/haxe/ds/List.hx",68,0xd0d1e26e)
HX_LOCAL_STACK_FRAME(_hx_pos_109688f3b41df45c_99_pop,"haxe.ds.List","pop",0x82bfb218,"haxe.ds.List.pop","/usr/share/haxe/std/haxe/ds/List.hx",99,0xd0d1e26e)
HX_LOCAL_STACK_FRAME(_hx_pos_109688f3b41df45c_123_clear,"haxe.ds.List","clear",0xf96935d4,"haxe.ds.List.clear","/usr/share/haxe/std/haxe/ds/List.hx",123,0xd0d1e26e)
HX_LOCAL_STACK_FRAME(_hx_pos_109688f3b41df45c_137_remove,"haxe.ds.List","remove",0x3f86961d,"haxe.ds.List.remove","/usr/share/haxe/std/haxe/ds/List.hx",137,0xd0d1e26e)
HX_LOCAL_STACK_FRAME(_hx_pos_109688f3b41df45c_161_iterator,"haxe.ds.List","iterator",0x056d2c07,"haxe.ds.List.iterator","/usr/share/haxe/std/haxe/ds/List.hx",161,0xd0d1e26e)
namespace haxe{
namespace ds{

void List_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_109688f3b41df45c_45_new)
            	HX_STACK_THIS(this)
HXLINE(  45)
HXDLIN(  45)		this->length = 0;
            	}

Dynamic List_obj::__CreateEmpty() { return new List_obj; }

void *List_obj::_hx_vtable = 0;

Dynamic List_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< List_obj > _hx_result = new List_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool List_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x39a75d33;
}

void List_obj::add( ::Dynamic item){
            	HX_GC_STACKFRAME(&_hx_pos_109688f3b41df45c_53_add)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(item,"item")
HXLINE(  53)
HXLINE(  54)		 ::haxe::ds::_List::ListNode next = null();
HXDLIN(  54)		HX_VARI(  ::haxe::ds::_List::ListNode,x) =  ::haxe::ds::_List::ListNode_obj::__alloc( HX_CTX ,item,next);
HXLINE(  55)		if (::hx::IsNull( this->h )) {
HXLINE(  56)			this->h = x;
            		}
            		else {
HXLINE(  58)			this->q->next = x;
            		}
HXLINE(  59)		this->q = x;
HXLINE(  60)		this->length++;
            	}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,add,(void))

void List_obj::push( ::Dynamic item){
            	HX_GC_STACKFRAME(&_hx_pos_109688f3b41df45c_68_push)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(item,"item")
HXLINE(  68)
HXLINE(  69)		HX_VARI(  ::haxe::ds::_List::ListNode,x) =  ::haxe::ds::_List::ListNode_obj::__alloc( HX_CTX ,item,this->h);
HXLINE(  70)		this->h = x;
HXLINE(  71)		if (::hx::IsNull( this->q )) {
HXLINE(  72)			this->q = x;
            		}
HXLINE(  73)		this->length++;
            	}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,push,(void))

 ::Dynamic List_obj::pop(){
            	HX_STACKFRAME(&_hx_pos_109688f3b41df45c_99_pop)
            	HX_STACK_THIS(this)
HXLINE(  99)
HXLINE( 100)		if (::hx::IsNull( this->h )) {
HXLINE( 101)			return null();
            		}
HXLINE( 102)		HX_VARI(  ::Dynamic,x) = this->h->item;
HXLINE( 103)		this->h = this->h->next;
HXLINE( 104)		if (::hx::IsNull( this->h )) {
HXLINE( 105)			this->q = null();
            		}
HXLINE( 106)		this->length--;
HXLINE( 107)		return x;
            	}


HX_DEFINE_DYNAMIC_FUNC0(List_obj,pop,return )

void List_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_109688f3b41df45c_123_clear)
            	HX_STACK_THIS(this)
HXLINE( 123)
HXLINE( 124)		this->h = null();
HXLINE( 125)		this->q = null();
HXLINE( 126)		this->length = 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(List_obj,clear,(void))

bool List_obj::remove( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_109688f3b41df45c_137_remove)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(v,"v")
HXLINE( 137)
HXLINE( 138)		HX_VARI(  ::haxe::ds::_List::ListNode,prev) = null();
HXLINE( 139)		HX_VARI(  ::haxe::ds::_List::ListNode,l) = this->h;
HXLINE( 140)		while(::hx::IsNotNull( l )){
HXLINE( 141)			if (::hx::IsEq( l->item,v )) {
HXLINE( 142)				if (::hx::IsNull( prev )) {
HXLINE( 143)					this->h = l->next;
            				}
            				else {
HXLINE( 145)					prev->next = l->next;
            				}
HXLINE( 146)				if (::hx::IsInstanceEq( this->q,l )) {
HXLINE( 147)					this->q = prev;
            				}
HXLINE( 148)				this->length--;
HXLINE( 149)				return true;
            			}
HXLINE( 151)			prev = l;
HXLINE( 152)			l = l->next;
            		}
HXLINE( 154)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,remove,return )

 ::haxe::ds::_List::ListIterator List_obj::iterator(){
            	HX_GC_STACKFRAME(&_hx_pos_109688f3b41df45c_161_iterator)
            	HX_STACK_THIS(this)
HXLINE( 161)
HXDLIN( 161)		return  ::haxe::ds::_List::ListIterator_obj::__alloc( HX_CTX ,this->h);
            	}


HX_DEFINE_DYNAMIC_FUNC0(List_obj,iterator,return )


::hx::ObjectPtr< List_obj > List_obj::__new() {
	::hx::ObjectPtr< List_obj > __this = new List_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< List_obj > List_obj::__alloc(::hx::Ctx *_hx_ctx) {
	List_obj *__this = (List_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(List_obj), true, "haxe.ds.List"));
	*(void **)__this = List_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

List_obj::List_obj()
{
}

void List_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(List);
	HX_MARK_MEMBER_NAME(h,"h");
	HX_MARK_MEMBER_NAME(q,"q");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void List_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(h,"h");
	HX_VISIT_MEMBER_NAME(q,"q");
	HX_VISIT_MEMBER_NAME(length,"length");
}

::hx::Val List_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { return ::hx::Val( h ); }
		if (HX_FIELD_EQ(inName,"q") ) { return ::hx::Val( q ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"pop") ) { return ::hx::Val( pop_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"push") ) { return ::hx::Val( push_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( length ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return ::hx::Val( iterator_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val List_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { h=inValue.Cast<  ::haxe::ds::_List::ListNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"q") ) { q=inValue.Cast<  ::haxe::ds::_List::ListNode >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void List_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("h",68,00,00,00));
	outFields->push(HX_("q",71,00,00,00));
	outFields->push(HX_("length",e6,94,07,9f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo List_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::_List::ListNode */ ,(int)offsetof(List_obj,h),HX_("h",68,00,00,00)},
	{::hx::fsObject /*  ::haxe::ds::_List::ListNode */ ,(int)offsetof(List_obj,q),HX_("q",71,00,00,00)},
	{::hx::fsInt,(int)offsetof(List_obj,length),HX_("length",e6,94,07,9f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *List_obj_sStaticStorageInfo = 0;
#endif

static ::String List_obj_sMemberFields[] = {
	HX_("h",68,00,00,00),
	HX_("q",71,00,00,00),
	HX_("length",e6,94,07,9f),
	HX_("add",21,f2,49,00),
	HX_("push",da,11,61,4a),
	HX_("pop",91,5d,55,00),
	HX_("clear",8d,71,5b,48),
	HX_("remove",44,9c,88,04),
	HX_("iterator",ee,49,9a,93),
	::String(null()) };

::hx::Class List_obj::__mClass;

void List_obj::__register()
{
	List_obj _hx_dummy;
	List_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ds.List",75,25,aa,15);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(List_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< List_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = List_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = List_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ds
