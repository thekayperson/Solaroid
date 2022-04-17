#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_NativeStackTrace
#include <haxe/NativeStackTrace.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_92118109ac299797_12_saveStack,"haxe.NativeStackTrace","saveStack",0x471b27d9,"haxe.NativeStackTrace.saveStack","/usr/share/haxe/std/cpp/_std/haxe/NativeStackTrace.hx",12,0x826068a5)
HX_LOCAL_STACK_FRAME(_hx_pos_92118109ac299797_25_toHaxe,"haxe.NativeStackTrace","toHaxe",0x6b36d173,"haxe.NativeStackTrace.toHaxe","/usr/share/haxe/std/cpp/_std/haxe/NativeStackTrace.hx",25,0x826068a5)
namespace haxe{

void NativeStackTrace_obj::__construct() { }

Dynamic NativeStackTrace_obj::__CreateEmpty() { return new NativeStackTrace_obj; }

void *NativeStackTrace_obj::_hx_vtable = 0;

Dynamic NativeStackTrace_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NativeStackTrace_obj > _hx_result = new NativeStackTrace_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NativeStackTrace_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3984963e;
}

void NativeStackTrace_obj::saveStack( ::Dynamic exception){
            	HX_STACKFRAME(&_hx_pos_92118109ac299797_12_saveStack)
            	HX_STACK_ARG(exception,"exception")
HXLINE(  12)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeStackTrace_obj,saveStack,(void))

::Array< ::String > NativeStackTrace_obj::callStack(){
	return  ::__hxcpp_get_call_stack(true);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeStackTrace_obj,callStack,return )

::Array< ::String > NativeStackTrace_obj::exceptionStack(){
	return  ::__hxcpp_get_exception_stack();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeStackTrace_obj,exceptionStack,return )

::Array< ::Dynamic> NativeStackTrace_obj::toHaxe(::Array< ::String > native,::hx::Null< int >  __o_skip){
            		int skip = __o_skip.Default(0);
            	HX_STACKFRAME(&_hx_pos_92118109ac299797_25_toHaxe)
            	HX_STACK_ARG(native,"native")
            	HX_STACK_ARG(skip,"skip")
HXLINE(  25)
HXLINE(  26)		HX_VARI( ::Array< ::String >,stack) = native;
HXLINE(  27)		HX_VARI( ::Array< ::Dynamic>,m) = ::Array_obj< ::Dynamic>::__new();
HXLINE(  28)		{
HXLINE(  28)			int _g = 0;
HXDLIN(  28)			int _g1 = stack->length;
HXDLIN(  28)			while((_g < _g1)){
HXLINE(  28)				_g = (_g + 1);
HXDLIN(  28)				HX_VARI( int,i) = (_g - 1);
HXLINE(  29)				if ((skip > i)) {
HXLINE(  30)					continue;
            				}
HXLINE(  32)				HX_VARI( ::Array< ::String >,words) = stack->__get(i).split(HX_("::",c0,32,00,00));
HXLINE(  33)				if ((words->length == 0)) {
HXLINE(  34)					m->push(::haxe::StackItem_obj::CFunction_dyn());
            				}
            				else {
HXLINE(  35)					if ((words->length == 2)) {
HXLINE(  36)						m->push(::haxe::StackItem_obj::Method(words->__get(0),words->__get(1)));
            					}
            					else {
HXLINE(  37)						if ((words->length == 4)) {
HXLINE(  38)							 ::haxe::StackItem _hx_tmp = ::haxe::StackItem_obj::Method(words->__get(0),words->__get(1));
HXDLIN(  38)							::String words1 = words->__get(2);
HXDLIN(  38)							m->push(::haxe::StackItem_obj::FilePos(_hx_tmp,words1,::Std_obj::parseInt(words->__get(3)),null()));
            						}
            					}
            				}
            			}
            		}
HXLINE(  40)		return m;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeStackTrace_obj,toHaxe,return )


NativeStackTrace_obj::NativeStackTrace_obj()
{
}

bool NativeStackTrace_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"toHaxe") ) { outValue = toHaxe_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"saveStack") ) { outValue = saveStack_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"callStack") ) { outValue = callStack_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"exceptionStack") ) { outValue = exceptionStack_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *NativeStackTrace_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *NativeStackTrace_obj_sStaticStorageInfo = 0;
#endif

::hx::Class NativeStackTrace_obj::__mClass;

static ::String NativeStackTrace_obj_sStaticFields[] = {
	HX_("saveStack",cb,6e,b8,12),
	HX_("callStack",ca,c1,4a,10),
	HX_("exceptionStack",79,48,56,0b),
	HX_("toHaxe",41,9f,c1,7a),
	::String(null())
};

void NativeStackTrace_obj::__register()
{
	NativeStackTrace_obj _hx_dummy;
	NativeStackTrace_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.NativeStackTrace",fc,db,8f,5d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NativeStackTrace_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NativeStackTrace_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< NativeStackTrace_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NativeStackTrace_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NativeStackTrace_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
