#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console__ConsoleUtil_Interp
#include <flixel/system/debug/console/_ConsoleUtil/Interp.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hscript_Error
#include <hscript/Error.h>
#endif
#ifndef INCLUDED_hscript_Interp
#include <hscript/Interp.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_87978f3c8c973553_168_new,"flixel.system.debug.console._ConsoleUtil.Interp","new",0x56cfaa5b,"flixel.system.debug.console._ConsoleUtil.Interp.new","flixel/system/debug/console/ConsoleUtil.hx",168,0x2e8bcde6)
HX_LOCAL_STACK_FRAME(_hx_pos_87978f3c8c973553_172_getGlobals,"flixel.system.debug.console._ConsoleUtil.Interp","getGlobals",0x79b1b71f,"flixel.system.debug.console._ConsoleUtil.Interp.getGlobals","flixel/system/debug/console/ConsoleUtil.hx",172,0x2e8bcde6)
HX_LOCAL_STACK_FRAME(_hx_pos_87978f3c8c973553_176_toArray,"flixel.system.debug.console._ConsoleUtil.Interp","toArray",0x1b83ad99,"flixel.system.debug.console._ConsoleUtil.Interp.toArray","flixel/system/debug/console/ConsoleUtil.hx",176,0x2e8bcde6)
HX_LOCAL_STACK_FRAME(_hx_pos_87978f3c8c973553_184_get,"flixel.system.debug.console._ConsoleUtil.Interp","get",0x56ca5a91,"flixel.system.debug.console._ConsoleUtil.Interp.get","flixel/system/debug/console/ConsoleUtil.hx",184,0x2e8bcde6)
HX_LOCAL_STACK_FRAME(_hx_pos_87978f3c8c973553_191_set,"flixel.system.debug.console._ConsoleUtil.Interp","set",0x56d3759d,"flixel.system.debug.console._ConsoleUtil.Interp.set","flixel/system/debug/console/ConsoleUtil.hx",191,0x2e8bcde6)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace console{
namespace _ConsoleUtil{

void Interp_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_87978f3c8c973553_168_new)
            	HX_STACK_THIS(this)
HXLINE( 168)
HXDLIN( 168)		super::__construct();
            	}

Dynamic Interp_obj::__CreateEmpty() { return new Interp_obj; }

void *Interp_obj::_hx_vtable = 0;

Dynamic Interp_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Interp_obj > _hx_result = new Interp_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Interp_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2a95eb9f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2a95eb9f;
	} else {
		return inClassId==(int)0x2b8e6061;
	}
}

::Array< ::String > Interp_obj::getGlobals(){
            	HX_STACKFRAME(&_hx_pos_87978f3c8c973553_172_getGlobals)
            	HX_STACK_THIS(this)
HXLINE( 172)
HXDLIN( 172)		::Array< ::String > _hx_tmp = this->toArray(this->locals->keys());
HXDLIN( 172)		return _hx_tmp->concat(this->toArray(this->variables->keys()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Interp_obj,getGlobals,return )

::cpp::VirtualArray Interp_obj::toArray( ::Dynamic iterator){
            	HX_STACKFRAME(&_hx_pos_87978f3c8c973553_176_toArray)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(iterator,"iterator")
HXLINE( 176)
HXLINE( 177)		HX_VARI( ::cpp::VirtualArray,array) = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 178)		{
HXLINE( 178)			HX_VARI(  ::Dynamic,element) = iterator;
HXDLIN( 178)			while(( (bool)(element->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 178)				HX_VARI(  ::Dynamic,element1) = element->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 179)				array->push(element1);
            			}
            		}
HXLINE( 180)		return array;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,toArray,return )

 ::Dynamic Interp_obj::get( ::Dynamic o,::String f){
            	HX_STACKFRAME(&_hx_pos_87978f3c8c973553_184_get)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(o,"o")
            	HX_STACK_ARG(f,"f")
HXLINE( 184)
HXLINE( 185)		if (::hx::IsNull( o )) {
HXLINE( 186)			 ::hscript::Error e = ::hscript::Error_obj::EInvalidAccess(f);
HXDLIN( 186)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            		}
HXLINE( 187)		return ::Reflect_obj::getProperty(o,f);
            	}


 ::Dynamic Interp_obj::set( ::Dynamic o,::String f, ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_87978f3c8c973553_191_set)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(o,"o")
            	HX_STACK_ARG(f,"f")
            	HX_STACK_ARG(v,"v")
HXLINE( 191)
HXLINE( 192)		if (::hx::IsNull( o )) {
HXLINE( 193)			 ::hscript::Error e = ::hscript::Error_obj::EInvalidAccess(f);
HXDLIN( 193)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            		}
HXLINE( 194)		::Reflect_obj::setProperty(o,f,v);
HXLINE( 195)		return v;
            	}



::hx::ObjectPtr< Interp_obj > Interp_obj::__new() {
	::hx::ObjectPtr< Interp_obj > __this = new Interp_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Interp_obj > Interp_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Interp_obj *__this = (Interp_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Interp_obj), true, "flixel.system.debug.console._ConsoleUtil.Interp"));
	*(void **)__this = Interp_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Interp_obj::Interp_obj()
{
}

::hx::Val Interp_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toArray") ) { return ::hx::Val( toArray_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getGlobals") ) { return ::hx::Val( getGlobals_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Interp_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Interp_obj_sStaticStorageInfo = 0;
#endif

static ::String Interp_obj_sMemberFields[] = {
	HX_("getGlobals",ba,8b,9a,63),
	HX_("toArray",1e,ba,13,f2),
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	::String(null()) };

::hx::Class Interp_obj::__mClass;

void Interp_obj::__register()
{
	Interp_obj _hx_dummy;
	Interp_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.console._ConsoleUtil.Interp",e9,e0,c6,72);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Interp_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Interp_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Interp_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Interp_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace console
} // end namespace _ConsoleUtil
