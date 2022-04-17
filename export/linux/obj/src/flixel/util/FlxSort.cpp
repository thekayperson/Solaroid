#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSort
#include <flixel/util/FlxSort.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_408840f213d59887_18_byY,"flixel.util.FlxSort","byY",0x7c03b7ea,"flixel.util.FlxSort.byY","flixel/util/FlxSort.hx",18,0x198bbf28)
HX_LOCAL_STACK_FRAME(_hx_pos_408840f213d59887_25_byValues,"flixel.util.FlxSort","byValues",0xe62fb2d1,"flixel.util.FlxSort.byValues","flixel/util/FlxSort.hx",25,0x198bbf28)
HX_LOCAL_STACK_FRAME(_hx_pos_408840f213d59887_10_boot,"flixel.util.FlxSort","boot",0x0735b1ea,"flixel.util.FlxSort.boot","flixel/util/FlxSort.hx",10,0x198bbf28)
HX_LOCAL_STACK_FRAME(_hx_pos_408840f213d59887_11_boot,"flixel.util.FlxSort","boot",0x0735b1ea,"flixel.util.FlxSort.boot","flixel/util/FlxSort.hx",11,0x198bbf28)
namespace flixel{
namespace util{

void FlxSort_obj::__construct() { }

Dynamic FlxSort_obj::__CreateEmpty() { return new FlxSort_obj; }

void *FlxSort_obj::_hx_vtable = 0;

Dynamic FlxSort_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxSort_obj > _hx_result = new FlxSort_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxSort_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0529cd72;
}

int FlxSort_obj::ASCENDING;

int FlxSort_obj::DESCENDING;

int FlxSort_obj::byY(int Order, ::flixel::FlxObject Obj1, ::flixel::FlxObject Obj2){
            	HX_STACKFRAME(&_hx_pos_408840f213d59887_18_byY)
            	HX_STACK_ARG(Order,"Order")
            	HX_STACK_ARG(Obj1,"Obj1")
            	HX_STACK_ARG(Obj2,"Obj2")
HXLINE(  18)
HXDLIN(  18)		Float Value1 = Obj1->y;
HXDLIN(  18)		Float Value2 = Obj2->y;
HXDLIN(  18)		int result = 0;
HXDLIN(  18)		if ((Value1 < Value2)) {
HXDLIN(  18)			result = Order;
            		}
            		else {
HXDLIN(  18)			if ((Value1 > Value2)) {
HXDLIN(  18)				result = -(Order);
            			}
            		}
HXDLIN(  18)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxSort_obj,byY,return )

int FlxSort_obj::byValues(int Order,Float Value1,Float Value2){
            	HX_STACKFRAME(&_hx_pos_408840f213d59887_25_byValues)
            	HX_STACK_ARG(Order,"Order")
            	HX_STACK_ARG(Value1,"Value1")
            	HX_STACK_ARG(Value2,"Value2")
HXLINE(  25)
HXLINE(  26)		HX_VARI( int,result) = 0;
HXLINE(  28)		if ((Value1 < Value2)) {
HXLINE(  30)			result = Order;
            		}
            		else {
HXLINE(  32)			if ((Value1 > Value2)) {
HXLINE(  34)				result = -(Order);
            			}
            		}
HXLINE(  37)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxSort_obj,byValues,return )


FlxSort_obj::FlxSort_obj()
{
}

bool FlxSort_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"byY") ) { outValue = byY_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"byValues") ) { outValue = byValues_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxSort_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FlxSort_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FlxSort_obj::ASCENDING,HX_("ASCENDING",b8,0d,d0,a9)},
	{::hx::fsInt,(void *) &FlxSort_obj::DESCENDING,HX_("DESCENDING",f8,88,5d,09)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void FlxSort_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSort_obj::ASCENDING,"ASCENDING");
	HX_MARK_MEMBER_NAME(FlxSort_obj::DESCENDING,"DESCENDING");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxSort_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSort_obj::ASCENDING,"ASCENDING");
	HX_VISIT_MEMBER_NAME(FlxSort_obj::DESCENDING,"DESCENDING");
};

#endif

::hx::Class FlxSort_obj::__mClass;

static ::String FlxSort_obj_sStaticFields[] = {
	HX_("ASCENDING",b8,0d,d0,a9),
	HX_("DESCENDING",f8,88,5d,09),
	HX_("byY",a2,c6,4a,00),
	HX_("byValues",19,49,40,11),
	::String(null())
};

void FlxSort_obj::__register()
{
	FlxSort_obj _hx_dummy;
	FlxSort_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util.FlxSort",b6,0d,59,bc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxSort_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxSort_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxSort_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxSort_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxSort_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxSort_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxSort_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxSort_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_408840f213d59887_10_boot)
HXDLIN(  10)		ASCENDING = -1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_408840f213d59887_11_boot)
HXDLIN(  11)		DESCENDING = 1;
            	}
}

} // end namespace flixel
} // end namespace util
