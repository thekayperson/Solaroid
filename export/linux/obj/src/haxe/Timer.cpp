#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_102f69689d37b2bb_230_new,"haxe.Timer","new",0x4136b0cf,"haxe.Timer.new","haxe/Timer.hx",230,0x1a690682)
HX_LOCAL_STACK_FRAME(_hx_pos_102f69689d37b2bb_263___default_run,"haxe.Timer","__default_run",0xdc2b9b9c,"haxe.Timer.__default_run","haxe/Timer.hx",263,0x1a690682)
HX_LOCAL_STACK_FRAME(_hx_pos_102f69689d37b2bb_273_stop,"haxe.Timer","stop",0xd1fd70b3,"haxe.Timer.stop","haxe/Timer.hx",273,0x1a690682)
HX_LOCAL_STACK_FRAME(_hx_pos_102f69689d37b2bb_290___check,"haxe.Timer","__check",0xb5623597,"haxe.Timer.__check","haxe/Timer.hx",290,0x1a690682)
HX_LOCAL_STACK_FRAME(_hx_pos_102f69689d37b2bb_242_delay,"haxe.Timer","delay",0x3ed5f1b2,"haxe.Timer.delay","haxe/Timer.hx",242,0x1a690682)
HX_LOCAL_STACK_FRAME(_hx_pos_102f69689d37b2bb_238_delay,"haxe.Timer","delay",0x3ed5f1b2,"haxe.Timer.delay","haxe/Timer.hx",238,0x1a690682)
HX_LOCAL_STACK_FRAME(_hx_pos_102f69689d37b2bb_252_getMS,"haxe.Timer","getMS",0xf90fafab,"haxe.Timer.getMS","haxe/Timer.hx",252,0x1a690682)
HX_LOCAL_STACK_FRAME(_hx_pos_102f69689d37b2bb_256_measure,"haxe.Timer","measure",0x42373f4d,"haxe.Timer.measure","haxe/Timer.hx",256,0x1a690682)
HX_LOCAL_STACK_FRAME(_hx_pos_102f69689d37b2bb_266_stamp,"haxe.Timer","stamp",0xebba8a32,"haxe.Timer.stamp","haxe/Timer.hx",266,0x1a690682)
HX_LOCAL_STACK_FRAME(_hx_pos_102f69689d37b2bb_223_boot,"haxe.Timer","boot",0xc6bd04e3,"haxe.Timer.boot","haxe/Timer.hx",223,0x1a690682)
namespace haxe{

void Timer_obj::__construct(Float time){
            	HX_STACKFRAME(&_hx_pos_102f69689d37b2bb_230_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(time,"time")
HXLINE( 230)
HXLINE( 231)		this->mTime = time;
HXLINE( 232)		::haxe::Timer_obj::sRunningTimers->push(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 233)		Float _hx_tmp = ::haxe::Timer_obj::getMS();
HXDLIN( 233)		this->mFireAt = (_hx_tmp + this->mTime);
HXLINE( 234)		this->mRunning = true;
            	}

Dynamic Timer_obj::__CreateEmpty() { return new Timer_obj; }

void *Timer_obj::_hx_vtable = 0;

Dynamic Timer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Timer_obj > _hx_result = new Timer_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Timer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x04eaa0bb;
}

HX_BEGIN_DEFAULT_FUNC(__default_run,Timer_obj)
void _hx_run(){
            	HX_STACKFRAME(&_hx_pos_102f69689d37b2bb_263___default_run)
            	HX_STACK_THIS(__this)
HXLINE( 263)
            	}
HX_END_LOCAL_FUNC0((void))
HX_END_DEFAULT_FUNC

void Timer_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_102f69689d37b2bb_273_stop)
            	HX_STACK_THIS(this)
HXLINE( 273)
HXDLIN( 273)		if (this->mRunning) {
HXLINE( 275)			this->mRunning = false;
HXLINE( 277)			{
HXLINE( 277)				int _g = 0;
HXDLIN( 277)				int _g1 = ::haxe::Timer_obj::sRunningTimers->length;
HXDLIN( 277)				while((_g < _g1)){
HXLINE( 277)					_g = (_g + 1);
HXDLIN( 277)					HX_VARI( int,i) = (_g - 1);
HXLINE( 279)					if (::hx::IsInstanceEq( ::haxe::Timer_obj::sRunningTimers->__get(i).StaticCast<  ::haxe::Timer >(),::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 281)						::haxe::Timer_obj::sRunningTimers[i] = null();
HXLINE( 282)						goto _hx_goto_2;
            					}
            				}
            				_hx_goto_2:;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,stop,(void))

void Timer_obj::_hx___check(Float inTime){
            	HX_STACKFRAME(&_hx_pos_102f69689d37b2bb_290___check)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(inTime,"inTime")
HXLINE( 290)
HXDLIN( 290)		if ((inTime >= this->mFireAt)) {
HXLINE( 292)			 ::haxe::Timer _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 292)			_hx_tmp->mFireAt = (_hx_tmp->mFireAt + this->mTime);
HXLINE( 293)			this->run();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Timer_obj,_hx___check,(void))

::Array< ::Dynamic> Timer_obj::sRunningTimers;

 ::haxe::Timer Timer_obj::delay( ::Dynamic f,int time){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f, ::haxe::Timer,t) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_102f69689d37b2bb_242_delay)
HXLINE( 242)
HXLINE( 243)			t->stop();
HXLINE( 244)			f();
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_102f69689d37b2bb_238_delay)
            	HX_STACK_ARG(f,"f")
            	HX_STACK_ARG(time,"time")
HXLINE( 238)
HXLINE( 239)		HX_VARI(  ::haxe::Timer,t) =  ::haxe::Timer_obj::__alloc( HX_CTX ,( (Float)(time) ));
HXLINE( 241)		t->run =  ::Dynamic(new _hx_Closure_0(f,t));
HXLINE( 247)		return t;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Timer_obj,delay,return )

Float Timer_obj::getMS(){
            	HX_STACKFRAME(&_hx_pos_102f69689d37b2bb_252_getMS)
HXLINE( 252)
HXDLIN( 252)		return ( (Float)(::lime::_hx_system::System_obj::getTimer()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,getMS,return )

 ::Dynamic Timer_obj::measure( ::Dynamic f, ::Dynamic pos){
            	HX_STACKFRAME(&_hx_pos_102f69689d37b2bb_256_measure)
            	HX_STACK_ARG(f,"f")
            	HX_STACK_ARG(pos,"pos")
HXLINE( 256)
HXLINE( 257)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN( 257)		HX_VAR( Float,t0);
HXDLIN( 257)		if ((timer > 0)) {
HXLINE( 257)			t0 = (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE( 257)			t0 = ( (Float)(0) );
            		}
HXLINE( 258)		HX_VARI(  ::Dynamic,r) = f();
HXLINE( 259)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 259)		int timer1 = ::lime::_hx_system::System_obj::getTimer();
HXDLIN( 259)		Float _hx_tmp1;
HXDLIN( 259)		if ((timer1 > 0)) {
HXLINE( 259)			_hx_tmp1 = (( (Float)(timer1) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE( 259)			_hx_tmp1 = ( (Float)(0) );
            		}
HXDLIN( 259)		_hx_tmp(((_hx_tmp1 - t0) + HX_("s",73,00,00,00)),pos);
HXLINE( 260)		return r;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Timer_obj,measure,return )

Float Timer_obj::stamp(){
            	HX_STACKFRAME(&_hx_pos_102f69689d37b2bb_266_stamp)
HXLINE( 266)
HXLINE( 267)		HX_VARI( int,timer) = ::lime::_hx_system::System_obj::getTimer();
HXLINE( 268)		if ((timer > 0)) {
HXLINE( 268)			return (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE( 268)			return ( (Float)(0) );
            		}
HXDLIN( 268)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,stamp,return )


void Timer_obj::__alloc_dynamic_functions(::hx::Ctx *_hx_ctx,Timer_obj *_hx_obj) {
	if (!_hx_obj->run.mPtr) _hx_obj->run = new __default_run(_hx_obj);
}
Timer_obj::Timer_obj()
{
	run = new __default_run(this);
}

void Timer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Timer);
	HX_MARK_MEMBER_NAME(mTime,"mTime");
	HX_MARK_MEMBER_NAME(mFireAt,"mFireAt");
	HX_MARK_MEMBER_NAME(mRunning,"mRunning");
	HX_MARK_MEMBER_NAME(run,"run");
	HX_MARK_END_CLASS();
}

void Timer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mTime,"mTime");
	HX_VISIT_MEMBER_NAME(mFireAt,"mFireAt");
	HX_VISIT_MEMBER_NAME(mRunning,"mRunning");
	HX_VISIT_MEMBER_NAME(run,"run");
}

::hx::Val Timer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return ::hx::Val( run ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mTime") ) { return ::hx::Val( mTime ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mFireAt") ) { return ::hx::Val( mFireAt ); }
		if (HX_FIELD_EQ(inName,"__check") ) { return ::hx::Val( _hx___check_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mRunning") ) { return ::hx::Val( mRunning ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Timer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { outValue = delay_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getMS") ) { outValue = getMS_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"stamp") ) { outValue = stamp_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"measure") ) { outValue = measure_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sRunningTimers") ) { outValue = ( sRunningTimers ); return true; }
	}
	return false;
}

::hx::Val Timer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { run=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mTime") ) { mTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mFireAt") ) { mFireAt=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mRunning") ) { mRunning=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Timer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"sRunningTimers") ) { sRunningTimers=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
	}
	return false;
}

void Timer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("mTime",1a,33,83,fa));
	outFields->push(HX_("mFireAt",96,ea,58,72));
	outFields->push(HX_("mRunning",12,2d,35,13));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Timer_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Timer_obj,mTime),HX_("mTime",1a,33,83,fa)},
	{::hx::fsFloat,(int)offsetof(Timer_obj,mFireAt),HX_("mFireAt",96,ea,58,72)},
	{::hx::fsBool,(int)offsetof(Timer_obj,mRunning),HX_("mRunning",12,2d,35,13)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Timer_obj,run),HX_("run",4b,e7,56,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Timer_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &Timer_obj::sRunningTimers,HX_("sRunningTimers",fa,bb,cd,fe)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Timer_obj_sMemberFields[] = {
	HX_("mTime",1a,33,83,fa),
	HX_("mFireAt",96,ea,58,72),
	HX_("mRunning",12,2d,35,13),
	HX_("run",4b,e7,56,00),
	HX_("stop",02,f0,5b,4c),
	HX_("__check",a8,f1,14,b0),
	::String(null()) };

static void Timer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Timer_obj::sRunningTimers,"sRunningTimers");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Timer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Timer_obj::sRunningTimers,"sRunningTimers");
};

#endif

::hx::Class Timer_obj::__mClass;

static ::String Timer_obj_sStaticFields[] = {
	HX_("sRunningTimers",fa,bb,cd,fe),
	HX_("delay",83,d7,26,d7),
	HX_("getMS",7c,95,60,91),
	HX_("measure",5e,fb,e9,3c),
	HX_("stamp",03,70,0b,84),
	::String(null())
};

void Timer_obj::__register()
{
	Timer_obj _hx_dummy;
	Timer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.Timer",5d,9d,24,4b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Timer_obj::__GetStatic;
	__mClass->mSetStaticField = &Timer_obj::__SetStatic;
	__mClass->mMarkFunc = Timer_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Timer_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Timer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Timer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Timer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Timer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Timer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Timer_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_102f69689d37b2bb_223_boot)
HXDLIN( 223)		sRunningTimers = ::Array_obj< ::Dynamic>::__new(0);
            	}
}

} // end namespace haxe
