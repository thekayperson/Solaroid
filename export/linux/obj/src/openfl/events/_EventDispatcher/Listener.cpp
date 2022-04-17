#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_openfl_events__EventDispatcher_Listener
#include <openfl/events/_EventDispatcher/Listener.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4056b9d72619ced0_544_new,"openfl.events._EventDispatcher.Listener","new",0x63be323b,"openfl.events._EventDispatcher.Listener.new","openfl/events/EventDispatcher.hx",544,0xe2270714)
HX_LOCAL_STACK_FRAME(_hx_pos_4056b9d72619ced0_556_match,"openfl.events._EventDispatcher.Listener","match",0xdf4e17e0,"openfl.events._EventDispatcher.Listener.match","openfl/events/EventDispatcher.hx",556,0xe2270714)
HX_LOCAL_STACK_FRAME(_hx_pos_4056b9d72619ced0_537_boot,"openfl.events._EventDispatcher.Listener","boot",0xdac6c1f7,"openfl.events._EventDispatcher.Listener.boot","openfl/events/EventDispatcher.hx",537,0xe2270714)
namespace openfl{
namespace events{
namespace _EventDispatcher{

void Listener_obj::__construct( ::Dynamic callback,bool useCapture,int priority){
            	HX_STACKFRAME(&_hx_pos_4056b9d72619ced0_544_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(callback,"callback")
            	HX_STACK_ARG(useCapture,"useCapture")
            	HX_STACK_ARG(priority,"priority")
HXLINE( 544)
HXLINE( 545)		this->callback = callback;
HXLINE( 546)		this->useCapture = useCapture;
HXLINE( 547)		this->priority = priority;
            	}

Dynamic Listener_obj::__CreateEmpty() { return new Listener_obj; }

void *Listener_obj::_hx_vtable = 0;

Dynamic Listener_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Listener_obj > _hx_result = new Listener_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Listener_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0e5e3763;
}

bool Listener_obj::match( ::Dynamic callback,bool useCapture){
            	HX_STACKFRAME(&_hx_pos_4056b9d72619ced0_556_match)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(callback,"callback")
            	HX_STACK_ARG(useCapture,"useCapture")
HXLINE( 556)
HXDLIN( 556)		if (::Reflect_obj::compareMethods(this->callback,callback)) {
HXDLIN( 556)			return (this->useCapture == useCapture);
            		}
            		else {
HXDLIN( 556)			return false;
            		}
HXDLIN( 556)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Listener_obj,match,return )


::hx::ObjectPtr< Listener_obj > Listener_obj::__new( ::Dynamic callback,bool useCapture,int priority) {
	::hx::ObjectPtr< Listener_obj > __this = new Listener_obj();
	__this->__construct(callback,useCapture,priority);
	return __this;
}

::hx::ObjectPtr< Listener_obj > Listener_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic callback,bool useCapture,int priority) {
	Listener_obj *__this = (Listener_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Listener_obj), true, "openfl.events._EventDispatcher.Listener"));
	*(void **)__this = Listener_obj::_hx_vtable;
	__this->__construct(callback,useCapture,priority);
	return __this;
}

Listener_obj::Listener_obj()
{
}

void Listener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Listener);
	HX_MARK_MEMBER_NAME(callback,"callback");
	HX_MARK_MEMBER_NAME(priority,"priority");
	HX_MARK_MEMBER_NAME(useCapture,"useCapture");
	HX_MARK_END_CLASS();
}

void Listener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(callback,"callback");
	HX_VISIT_MEMBER_NAME(priority,"priority");
	HX_VISIT_MEMBER_NAME(useCapture,"useCapture");
}

::hx::Val Listener_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"match") ) { return ::hx::Val( match_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { return ::hx::Val( callback ); }
		if (HX_FIELD_EQ(inName,"priority") ) { return ::hx::Val( priority ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"useCapture") ) { return ::hx::Val( useCapture ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Listener_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"priority") ) { priority=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"useCapture") ) { useCapture=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Listener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("priority",64,7b,3e,bb));
	outFields->push(HX_("useCapture",ff,f2,04,aa));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Listener_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Listener_obj,callback),HX_("callback",c5,99,06,7f)},
	{::hx::fsInt,(int)offsetof(Listener_obj,priority),HX_("priority",64,7b,3e,bb)},
	{::hx::fsBool,(int)offsetof(Listener_obj,useCapture),HX_("useCapture",ff,f2,04,aa)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Listener_obj_sStaticStorageInfo = 0;
#endif

static ::String Listener_obj_sMemberFields[] = {
	HX_("callback",c5,99,06,7f),
	HX_("priority",64,7b,3e,bb),
	HX_("useCapture",ff,f2,04,aa),
	HX_("match",45,49,23,03),
	::String(null()) };

::hx::Class Listener_obj::__mClass;

void Listener_obj::__register()
{
	Listener_obj _hx_dummy;
	Listener_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.events._EventDispatcher.Listener",c9,f8,1b,80);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Listener_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Listener_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Listener_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Listener_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Listener_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_4056b9d72619ced0_537_boot)
HXDLIN( 537)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace events
} // end namespace _EventDispatcher
