#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c8980fb157cd0afb_47_new,"lime.math.Vector2","new",0xaef3c434,"lime.math.Vector2.new","lime/math/Vector2.hx",47,0x7105521c)
HX_LOCAL_STACK_FRAME(_hx_pos_c8980fb157cd0afb_60_add,"lime.math.Vector2","add",0xaee9e5f5,"lime.math.Vector2.add","lime/math/Vector2.hx",60,0x7105521c)
HX_LOCAL_STACK_FRAME(_hx_pos_c8980fb157cd0afb_72_clone,"lime.math.Vector2","clone",0xd5c6a431,"lime.math.Vector2.clone","lime/math/Vector2.hx",72,0x7105521c)
HX_LOCAL_STACK_FRAME(_hx_pos_c8980fb157cd0afb_95_equals,"lime.math.Vector2","equals",0xe9ae16eb,"lime.math.Vector2.equals","lime/math/Vector2.hx",95,0x7105521c)
HX_LOCAL_STACK_FRAME(_hx_pos_c8980fb157cd0afb_119_normalize,"lime.math.Vector2","normalize",0xeaffc261,"lime.math.Vector2.normalize","lime/math/Vector2.hx",119,0x7105521c)
HX_LOCAL_STACK_FRAME(_hx_pos_c8980fb157cd0afb_137_offset,"lime.math.Vector2","offset",0x89fac03f,"lime.math.Vector2.offset","lime/math/Vector2.hx",137,0x7105521c)
HX_LOCAL_STACK_FRAME(_hx_pos_c8980fb157cd0afb_162_setTo,"lime.math.Vector2","setTo",0x07932291,"lime.math.Vector2.setTo","lime/math/Vector2.hx",162,0x7105521c)
HX_LOCAL_STACK_FRAME(_hx_pos_c8980fb157cd0afb_174_subtract,"lime.math.Vector2","subtract",0x656920c0,"lime.math.Vector2.subtract","lime/math/Vector2.hx",174,0x7105521c)
HX_LOCAL_STACK_FRAME(_hx_pos_c8980fb157cd0afb_185___toFlashPoint,"lime.math.Vector2","__toFlashPoint",0xf695b9a7,"lime.math.Vector2.__toFlashPoint","lime/math/Vector2.hx",185,0x7105521c)
HX_LOCAL_STACK_FRAME(_hx_pos_c8980fb157cd0afb_192_get_length,"lime.math.Vector2","get_length",0xc2e9f35b,"lime.math.Vector2.get_length","lime/math/Vector2.hx",192,0x7105521c)
HX_LOCAL_STACK_FRAME(_hx_pos_c8980fb157cd0afb_197_get_lengthSquared,"lime.math.Vector2","get_lengthSquared",0xdb98af0c,"lime.math.Vector2.get_lengthSquared","lime/math/Vector2.hx",197,0x7105521c)
HX_LOCAL_STACK_FRAME(_hx_pos_c8980fb157cd0afb_82_distance,"lime.math.Vector2","distance",0xd9513ee1,"lime.math.Vector2.distance","lime/math/Vector2.hx",82,0x7105521c)
HX_LOCAL_STACK_FRAME(_hx_pos_c8980fb157cd0afb_107_interpolate,"lime.math.Vector2","interpolate",0xdb68bc95,"lime.math.Vector2.interpolate","lime/math/Vector2.hx",107,0x7105521c)
HX_LOCAL_STACK_FRAME(_hx_pos_c8980fb157cd0afb_150_polar,"lime.math.Vector2","polar",0x53f58092,"lime.math.Vector2.polar","lime/math/Vector2.hx",150,0x7105521c)
namespace lime{
namespace math{

void Vector2_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_c8980fb157cd0afb_47_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
HXLINE(  47)
HXLINE(  48)		this->x = x;
HXLINE(  49)		this->y = y;
            	}

Dynamic Vector2_obj::__CreateEmpty() { return new Vector2_obj; }

void *Vector2_obj::_hx_vtable = 0;

Dynamic Vector2_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Vector2_obj > _hx_result = new Vector2_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Vector2_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x38fae9aa;
}

 ::lime::math::Vector2 Vector2_obj::add( ::lime::math::Vector2 v, ::lime::math::Vector2 result){
            	HX_GC_STACKFRAME(&_hx_pos_c8980fb157cd0afb_60_add)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(v,"v")
            	HX_STACK_ARG(result,"result")
HXLINE(  60)
HXLINE(  61)		if (::hx::IsNull( result )) {
HXLINE(  61)			result =  ::lime::math::Vector2_obj::__alloc( HX_CTX ,null(),null());
            		}
HXLINE(  62)		{
HXLINE(  62)			result->x = (v->x + this->x);
HXDLIN(  62)			result->y = (v->y + this->y);
            		}
HXLINE(  63)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Vector2_obj,add,return )

 ::lime::math::Vector2 Vector2_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_c8980fb157cd0afb_72_clone)
            	HX_STACK_THIS(this)
HXLINE(  72)
HXDLIN(  72)		return  ::lime::math::Vector2_obj::__alloc( HX_CTX ,this->x,this->y);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,clone,return )

bool Vector2_obj::equals( ::lime::math::Vector2 toCompare){
            	HX_STACKFRAME(&_hx_pos_c8980fb157cd0afb_95_equals)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(toCompare,"toCompare")
HXLINE(  95)
HXDLIN(  95)		bool _hx_tmp;
HXDLIN(  95)		if (::hx::IsNotNull( toCompare )) {
HXDLIN(  95)			_hx_tmp = (toCompare->x == this->x);
            		}
            		else {
HXDLIN(  95)			_hx_tmp = false;
            		}
HXDLIN(  95)		if (_hx_tmp) {
HXDLIN(  95)			return (toCompare->y == this->y);
            		}
            		else {
HXDLIN(  95)			return false;
            		}
HXDLIN(  95)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,equals,return )

void Vector2_obj::normalize(Float thickness){
            	HX_STACKFRAME(&_hx_pos_c8980fb157cd0afb_119_normalize)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(thickness,"thickness")
HXLINE( 119)
HXDLIN( 119)		bool _hx_tmp;
HXDLIN( 119)		if ((this->x == 0)) {
HXDLIN( 119)			_hx_tmp = (this->y == 0);
            		}
            		else {
HXDLIN( 119)			_hx_tmp = false;
            		}
HXDLIN( 119)		if (_hx_tmp) {
HXLINE( 121)			return;
            		}
            		else {
HXLINE( 125)			HX_VARI( Float,norm) = (thickness / ::Math_obj::sqrt(((this->x * this->x) + (this->y * this->y))));
HXLINE( 126)			 ::lime::math::Vector2 _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 126)			_hx_tmp->x = (_hx_tmp->x * norm);
HXLINE( 127)			 ::lime::math::Vector2 _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 127)			_hx_tmp1->y = (_hx_tmp1->y * norm);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,normalize,(void))

void Vector2_obj::offset(Float dx,Float dy){
            	HX_STACKFRAME(&_hx_pos_c8980fb157cd0afb_137_offset)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(dx,"dx")
            	HX_STACK_ARG(dy,"dy")
HXLINE( 137)
HXLINE( 138)		 ::lime::math::Vector2 _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 138)		_hx_tmp->x = (_hx_tmp->x + dx);
HXLINE( 139)		 ::lime::math::Vector2 _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 139)		_hx_tmp1->y = (_hx_tmp1->y + dy);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Vector2_obj,offset,(void))

void Vector2_obj::setTo(Float xa,Float ya){
            	HX_STACKFRAME(&_hx_pos_c8980fb157cd0afb_162_setTo)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(xa,"xa")
            	HX_STACK_ARG(ya,"ya")
HXLINE( 162)
HXLINE( 163)		this->x = xa;
HXLINE( 164)		this->y = ya;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Vector2_obj,setTo,(void))

 ::lime::math::Vector2 Vector2_obj::subtract( ::lime::math::Vector2 v, ::lime::math::Vector2 result){
            	HX_GC_STACKFRAME(&_hx_pos_c8980fb157cd0afb_174_subtract)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(v,"v")
            	HX_STACK_ARG(result,"result")
HXLINE( 174)
HXLINE( 175)		if (::hx::IsNull( result )) {
HXLINE( 175)			result =  ::lime::math::Vector2_obj::__alloc( HX_CTX ,null(),null());
            		}
HXLINE( 176)		{
HXLINE( 176)			result->x = (this->x - v->x);
HXDLIN( 176)			result->y = (this->y - v->y);
            		}
HXLINE( 177)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Vector2_obj,subtract,return )

 ::Dynamic Vector2_obj::_hx___toFlashPoint(){
            	HX_STACKFRAME(&_hx_pos_c8980fb157cd0afb_185___toFlashPoint)
            	HX_STACK_THIS(this)
HXLINE( 185)
HXDLIN( 185)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,_hx___toFlashPoint,return )

Float Vector2_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_c8980fb157cd0afb_192_get_length)
            	HX_STACK_THIS(this)
HXLINE( 192)
HXDLIN( 192)		return ::Math_obj::sqrt(((this->x * this->x) + (this->y * this->y)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,get_length,return )

Float Vector2_obj::get_lengthSquared(){
            	HX_STACKFRAME(&_hx_pos_c8980fb157cd0afb_197_get_lengthSquared)
            	HX_STACK_THIS(this)
HXLINE( 197)
HXDLIN( 197)		return ((this->x * this->x) + (this->y * this->y));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,get_lengthSquared,return )

Float Vector2_obj::distance( ::lime::math::Vector2 pt1, ::lime::math::Vector2 pt2){
            	HX_STACKFRAME(&_hx_pos_c8980fb157cd0afb_82_distance)
            	HX_STACK_ARG(pt1,"pt1")
            	HX_STACK_ARG(pt2,"pt2")
HXLINE(  82)
HXLINE(  83)		HX_VARI( Float,dx) = (pt1->x - pt2->x);
HXLINE(  84)		HX_VARI( Float,dy) = (pt1->y - pt2->y);
HXLINE(  85)		return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector2_obj,distance,return )

 ::lime::math::Vector2 Vector2_obj::interpolate( ::lime::math::Vector2 pt1, ::lime::math::Vector2 pt2,Float f, ::lime::math::Vector2 result){
            	HX_GC_STACKFRAME(&_hx_pos_c8980fb157cd0afb_107_interpolate)
            	HX_STACK_ARG(pt1,"pt1")
            	HX_STACK_ARG(pt2,"pt2")
            	HX_STACK_ARG(f,"f")
            	HX_STACK_ARG(result,"result")
HXLINE( 107)
HXLINE( 108)		if (::hx::IsNull( result )) {
HXLINE( 108)			result =  ::lime::math::Vector2_obj::__alloc( HX_CTX ,null(),null());
            		}
HXLINE( 109)		{
HXLINE( 109)			result->x = (pt2->x + (f * (pt1->x - pt2->x)));
HXDLIN( 109)			result->y = (pt2->y + (f * (pt1->y - pt2->y)));
            		}
HXLINE( 110)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Vector2_obj,interpolate,return )

 ::lime::math::Vector2 Vector2_obj::polar(Float len,Float angle, ::lime::math::Vector2 result){
            	HX_GC_STACKFRAME(&_hx_pos_c8980fb157cd0afb_150_polar)
            	HX_STACK_ARG(len,"len")
            	HX_STACK_ARG(angle,"angle")
            	HX_STACK_ARG(result,"result")
HXLINE( 150)
HXLINE( 151)		if (::hx::IsNull( result )) {
HXLINE( 151)			result =  ::lime::math::Vector2_obj::__alloc( HX_CTX ,null(),null());
            		}
HXLINE( 152)		{
HXLINE( 152)			Float ya = (len * ::Math_obj::sin(angle));
HXDLIN( 152)			result->x = (len * ::Math_obj::cos(angle));
HXDLIN( 152)			result->y = ya;
            		}
HXLINE( 153)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector2_obj,polar,return )


::hx::ObjectPtr< Vector2_obj > Vector2_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
	::hx::ObjectPtr< Vector2_obj > __this = new Vector2_obj();
	__this->__construct(__o_x,__o_y);
	return __this;
}

::hx::ObjectPtr< Vector2_obj > Vector2_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
	Vector2_obj *__this = (Vector2_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Vector2_obj), false, "lime.math.Vector2"));
	*(void **)__this = Vector2_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y);
	return __this;
}

Vector2_obj::Vector2_obj()
{
}

::hx::Val Vector2_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTo") ) { return ::hx::Val( setTo_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_length() ); }
		if (HX_FIELD_EQ(inName,"equals") ) { return ::hx::Val( equals_dyn() ); }
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subtract") ) { return ::hx::Val( subtract_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalize") ) { return ::hx::Val( normalize_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return ::hx::Val( get_length_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lengthSquared") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_lengthSquared() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__toFlashPoint") ) { return ::hx::Val( _hx___toFlashPoint_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_lengthSquared") ) { return ::hx::Val( get_lengthSquared_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Vector2_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"polar") ) { outValue = polar_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { outValue = distance_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interpolate") ) { outValue = interpolate_dyn(); return true; }
	}
	return false;
}

::hx::Val Vector2_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Vector2_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("lengthSquared",e1,24,45,35));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Vector2_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Vector2_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Vector2_obj,y),HX_("y",79,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Vector2_obj_sStaticStorageInfo = 0;
#endif

static ::String Vector2_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("add",21,f2,49,00),
	HX_("clone",5d,13,63,48),
	HX_("equals",3f,ee,f2,bf),
	HX_("normalize",8d,37,a1,ab),
	HX_("offset",93,97,3f,60),
	HX_("setTo",bd,91,2f,7a),
	HX_("subtract",14,75,11,f8),
	HX_("__toFlashPoint",fb,04,40,a7),
	HX_("get_length",af,04,8f,8f),
	HX_("get_lengthSquared",38,30,b5,3b),
	::String(null()) };

::hx::Class Vector2_obj::__mClass;

static ::String Vector2_obj_sStaticFields[] = {
	HX_("distance",35,93,f9,6b),
	HX_("interpolate",c1,d4,32,1f),
	HX_("polar",be,ef,91,c6),
	::String(null())
};

void Vector2_obj::__register()
{
	Vector2_obj _hx_dummy;
	Vector2_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.math.Vector2",42,da,50,4d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Vector2_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Vector2_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Vector2_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Vector2_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Vector2_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Vector2_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace math
