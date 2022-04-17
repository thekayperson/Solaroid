#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void
#include <lime/app/_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_56b65ef141dbb467_42_new,"lime.app._Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void","new",0xf84a4b82,"lime.app._Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void.new","lime/app/Event.hx",42,0xbda45bec)
HX_LOCAL_STACK_FRAME(_hx_pos_56b65ef141dbb467_58_add,"lime.app._Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void","add",0xf8406d43,"lime.app._Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void.add","lime/app/Event.hx",58,0xbda45bec)
HX_LOCAL_STACK_FRAME(_hx_pos_56b65ef141dbb467_82_cancel,"lime.app._Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void","cancel",0x01b59398,"lime.app._Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void.cancel","lime/app/Event.hx",82,0xbda45bec)
HX_LOCAL_STACK_FRAME(_hx_pos_56b65ef141dbb467_127_has,"lime.app._Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void","has",0xf845ba7c,"lime.app._Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void.has","lime/app/Event.hx",127,0xbda45bec)
HX_LOCAL_STACK_FRAME(_hx_pos_56b65ef141dbb467_143_remove,"lime.app._Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void","remove",0x4e0a4262,"lime.app._Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void.remove","lime/app/Event.hx",143,0xbda45bec)
HX_LOCAL_STACK_FRAME(_hx_pos_56b65ef141dbb467_163_removeAll,"lime.app._Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void","removeAll",0x754397df,"lime.app._Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void.removeAll","lime/app/Event.hx",163,0xbda45bec)
HX_LOCAL_STACK_FRAME(_hx_pos_19b40f96506a069b_82_dispatch,"lime.app._Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void","dispatch",0x0831b858,"lime.app._Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void.dispatch","lime/_internal/macros/EventMacro.hx",82,0xc5a10671)
namespace lime{
namespace app{

void _Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_56b65ef141dbb467_42_new)
            	HX_STACK_THIS(this)
HXLINE(  42)
HXLINE(  44)		this->canceled = false;
HXLINE(  45)		this->_hx___listeners = ::Array_obj< ::Dynamic>::__new();
HXLINE(  46)		this->_hx___priorities = ::Array_obj< int >::__new();
HXLINE(  47)		this->_hx___repeat = ::Array_obj< bool >::__new();
            	}

Dynamic _Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj::__CreateEmpty() { return new _Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj; }

void *_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj::_hx_vtable = 0;

Dynamic _Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< _Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj > _hx_result = new _Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool _Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x577c6c0a;
}

void _Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj::add( ::Dynamic listener,::hx::Null< bool >  __o_once,::hx::Null< int >  __o_priority){
            		bool once = __o_once.Default(false);
            		int priority = __o_priority.Default(0);
            	HX_STACKFRAME(&_hx_pos_56b65ef141dbb467_58_add)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(listener,"listener")
            	HX_STACK_ARG(once,"once")
            	HX_STACK_ARG(priority,"priority")
HXLINE(  58)
HXLINE(  60)		{
HXLINE(  60)			int _g = 0;
HXDLIN(  60)			int _g1 = this->_hx___priorities->length;
HXDLIN(  60)			while((_g < _g1)){
HXLINE(  60)				_g = (_g + 1);
HXDLIN(  60)				HX_VARI( int,i) = (_g - 1);
HXLINE(  62)				if ((priority > this->_hx___priorities->__get(i))) {
HXLINE(  64)					this->_hx___listeners->insert(i,listener);
HXLINE(  65)					this->_hx___priorities->insert(i,priority);
HXLINE(  66)					this->_hx___repeat->insert(i,!(once));
HXLINE(  67)					return;
            				}
            			}
            		}
HXLINE(  71)		this->_hx___listeners->push(listener);
HXLINE(  72)		this->_hx___priorities->push(priority);
HXLINE(  73)		this->_hx___repeat->push(!(once));
            	}


HX_DEFINE_DYNAMIC_FUNC3(_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj,add,(void))

void _Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj::cancel(){
            	HX_STACKFRAME(&_hx_pos_56b65ef141dbb467_82_cancel)
            	HX_STACK_THIS(this)
HXLINE(  82)
HXDLIN(  82)		this->canceled = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj,cancel,(void))

bool _Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj::has( ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_56b65ef141dbb467_127_has)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(listener,"listener")
HXLINE( 127)
HXLINE( 129)		{
HXLINE( 129)			int _g = 0;
HXDLIN( 129)			::Array< ::Dynamic> _g1 = this->_hx___listeners;
HXDLIN( 129)			while((_g < _g1->length)){
HXLINE( 129)				HX_VARI(  ::Dynamic,l) = _g1->__get(_g);
HXDLIN( 129)				_g = (_g + 1);
HXLINE( 131)				if (::Reflect_obj::compareMethods(l,listener)) {
HXLINE( 131)					return true;
            				}
            			}
            		}
HXLINE( 135)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj,has,return )

void _Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj::remove( ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_56b65ef141dbb467_143_remove)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(listener,"listener")
HXLINE( 143)
HXLINE( 145)		HX_VARI( int,i) = this->_hx___listeners->length;
HXLINE( 147)		while(true){
HXLINE( 147)			i = (i - 1);
HXDLIN( 147)			if (!((i >= 0))) {
HXLINE( 147)				goto _hx_goto_6;
            			}
HXLINE( 149)			if (::Reflect_obj::compareMethods(this->_hx___listeners->__get(i),listener)) {
HXLINE( 151)				this->_hx___listeners->removeRange(i,1);
HXLINE( 152)				this->_hx___priorities->removeRange(i,1);
HXLINE( 153)				this->_hx___repeat->removeRange(i,1);
            			}
            		}
            		_hx_goto_6:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj,remove,(void))

void _Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj::removeAll(){
            	HX_STACKFRAME(&_hx_pos_56b65ef141dbb467_163_removeAll)
            	HX_STACK_THIS(this)
HXLINE( 163)
HXLINE( 165)		HX_VARI( int,len) = this->_hx___listeners->length;
HXLINE( 167)		this->_hx___listeners->removeRange(0,len);
HXLINE( 168)		this->_hx___priorities->removeRange(0,len);
HXLINE( 169)		this->_hx___repeat->removeRange(0,len);
            	}


HX_DEFINE_DYNAMIC_FUNC0(_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj,removeAll,(void))

void _Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj::dispatch(int a,int a1){
            	HX_STACKFRAME(&_hx_pos_19b40f96506a069b_82_dispatch)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(a1,"a1")
HXLINE(  82)
HXLINE(  83)		this->canceled = false;
HXLINE(  85)		HX_VARI( ::Array< ::Dynamic>,listeners) = this->_hx___listeners;
HXLINE(  86)		HX_VARI( ::Array< bool >,repeat) = this->_hx___repeat;
HXLINE(  87)		HX_VARI( int,i) = 0;
HXLINE(  89)		while((i < listeners->length)){
HXLINE(  91)			listeners->__get(i)(a,a1);
HXLINE(  93)			if (!(repeat->__get(i))) {
HXLINE(  95)				this->remove(listeners->__get(i));
            			}
            			else {
HXLINE(  99)				i = (i + 1);
            			}
HXLINE( 102)			if (this->canceled) {
HXLINE( 104)				goto _hx_goto_9;
            			}
            		}
            		_hx_goto_9:;
            	}


HX_DEFINE_DYNAMIC_FUNC2(_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj,dispatch,(void))


::hx::ObjectPtr< _Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj > _Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj::__new() {
	::hx::ObjectPtr< _Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj > __this = new _Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< _Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj > _Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj::__alloc(::hx::Ctx *_hx_ctx) {
	_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj *__this = (_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj), true, "lime.app._Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void"));
	*(void **)__this = _Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj::_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj()
{
}

void _Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void);
	HX_MARK_MEMBER_NAME(canceled,"canceled");
	HX_MARK_MEMBER_NAME(_hx___repeat,"__repeat");
	HX_MARK_MEMBER_NAME(_hx___priorities,"__priorities");
	HX_MARK_MEMBER_NAME(_hx___listeners,"__listeners");
	HX_MARK_END_CLASS();
}

void _Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(canceled,"canceled");
	HX_VISIT_MEMBER_NAME(_hx___repeat,"__repeat");
	HX_VISIT_MEMBER_NAME(_hx___priorities,"__priorities");
	HX_VISIT_MEMBER_NAME(_hx___listeners,"__listeners");
}

::hx::Val _Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"has") ) { return ::hx::Val( has_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cancel") ) { return ::hx::Val( cancel_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"canceled") ) { return ::hx::Val( canceled ); }
		if (HX_FIELD_EQ(inName,"__repeat") ) { return ::hx::Val( _hx___repeat ); }
		if (HX_FIELD_EQ(inName,"dispatch") ) { return ::hx::Val( dispatch_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"removeAll") ) { return ::hx::Val( removeAll_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__listeners") ) { return ::hx::Val( _hx___listeners ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__priorities") ) { return ::hx::Val( _hx___priorities ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val _Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"canceled") ) { canceled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__repeat") ) { _hx___repeat=inValue.Cast< ::Array< bool > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__listeners") ) { _hx___listeners=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__priorities") ) { _hx___priorities=inValue.Cast< ::Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void _Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("canceled",59,18,26,1f));
	outFields->push(HX_("__repeat",7b,02,ac,ae));
	outFields->push(HX_("__priorities",e2,cb,e6,1c));
	outFields->push(HX_("__listeners",5f,ae,ba,21));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo _Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj,canceled),HX_("canceled",59,18,26,1f)},
	{::hx::fsObject /* ::Array< bool > */ ,(int)offsetof(_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj,_hx___repeat),HX_("__repeat",7b,02,ac,ae)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj,_hx___priorities),HX_("__priorities",e2,cb,e6,1c)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj,_hx___listeners),HX_("__listeners",5f,ae,ba,21)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj_sStaticStorageInfo = 0;
#endif

static ::String _Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj_sMemberFields[] = {
	HX_("canceled",59,18,26,1f),
	HX_("__repeat",7b,02,ac,ae),
	HX_("__priorities",e2,cb,e6,1c),
	HX_("add",21,f2,49,00),
	HX_("cancel",7a,ed,33,b8),
	HX_("has",5a,3f,4f,00),
	HX_("remove",44,9c,88,04),
	HX_("removeAll",3d,17,e5,ca),
	HX_("__listeners",5f,ae,ba,21),
	HX_("dispatch",ba,ce,63,1e),
	::String(null()) };

::hx::Class _Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj::__mClass;

void _Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj::__register()
{
	_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj _hx_dummy;
	_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.app._Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void",90,22,22,17);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< _Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = _Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = _Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace app
