#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D__internal_AGALConverter
#include <openfl/display3D/_internal/AGALConverter.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal__AGALConverter_DestRegister
#include <openfl/display3D/_internal/_AGALConverter/DestRegister.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal__AGALConverter_ProgramType
#include <openfl/display3D/_internal/_AGALConverter/ProgramType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6dbd7f0b2c3dcc1e_541_new,"openfl.display3D._internal._AGALConverter.DestRegister","new",0xe1484e6a,"openfl.display3D._internal._AGALConverter.DestRegister.new","openfl/display3D/_internal/AGALConverter.hx",541,0x4de1651d)
HX_LOCAL_STACK_FRAME(_hx_pos_6dbd7f0b2c3dcc1e_544_getWriteMask,"openfl.display3D._internal._AGALConverter.DestRegister","getWriteMask",0xead542ab,"openfl.display3D._internal._AGALConverter.DestRegister.getWriteMask","openfl/display3D/_internal/AGALConverter.hx",544,0x4de1651d)
HX_LOCAL_STACK_FRAME(_hx_pos_6dbd7f0b2c3dcc1e_564_toGLSL,"openfl.display3D._internal._AGALConverter.DestRegister","toGLSL",0xf912bd2f,"openfl.display3D._internal._AGALConverter.DestRegister.toGLSL","openfl/display3D/_internal/AGALConverter.hx",564,0x4de1651d)
HX_LOCAL_STACK_FRAME(_hx_pos_6dbd7f0b2c3dcc1e_554_parse,"openfl.display3D._internal._AGALConverter.DestRegister","parse",0x22ed24bd,"openfl.display3D._internal._AGALConverter.DestRegister.parse","openfl/display3D/_internal/AGALConverter.hx",554,0x4de1651d)
HX_LOCAL_STACK_FRAME(_hx_pos_6dbd7f0b2c3dcc1e_534_boot,"openfl.display3D._internal._AGALConverter.DestRegister","boot",0x36154ee8,"openfl.display3D._internal._AGALConverter.DestRegister.boot","openfl/display3D/_internal/AGALConverter.hx",534,0x4de1651d)
namespace openfl{
namespace display3D{
namespace _internal{
namespace _AGALConverter{

void DestRegister_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_6dbd7f0b2c3dcc1e_541_new)
            	HX_STACK_THIS(this)
HXLINE( 541)
            	}

Dynamic DestRegister_obj::__CreateEmpty() { return new DestRegister_obj; }

void *DestRegister_obj::_hx_vtable = 0;

Dynamic DestRegister_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DestRegister_obj > _hx_result = new DestRegister_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DestRegister_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x75b5d86e;
}

::String DestRegister_obj::getWriteMask(){
            	HX_STACKFRAME(&_hx_pos_6dbd7f0b2c3dcc1e_544_getWriteMask)
            	HX_STACK_THIS(this)
HXLINE( 544)
HXLINE( 545)		HX_VARI( ::String,str) = HX_(".",2e,00,00,00);
HXLINE( 546)		if (((this->mask & 1) != 0)) {
HXLINE( 546)			str = (str + HX_("x",78,00,00,00));
            		}
HXLINE( 547)		if (((this->mask & 2) != 0)) {
HXLINE( 547)			str = (str + HX_("y",79,00,00,00));
            		}
HXLINE( 548)		if (((this->mask & 4) != 0)) {
HXLINE( 548)			str = (str + HX_("z",7a,00,00,00));
            		}
HXLINE( 549)		if (((this->mask & 8) != 0)) {
HXLINE( 549)			str = (str + HX_("w",77,00,00,00));
            		}
HXLINE( 550)		return str;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DestRegister_obj,getWriteMask,return )

::String DestRegister_obj::toGLSL(::hx::Null< bool >  __o_useMask){
            		bool useMask = __o_useMask.Default(true);
            	HX_STACKFRAME(&_hx_pos_6dbd7f0b2c3dcc1e_564_toGLSL)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(useMask,"useMask")
HXLINE( 564)
HXLINE( 565)		HX_VAR( ::String,str);
HXLINE( 567)		if ((this->type == 3)) {
HXLINE( 569)			if (::hx::IsPointerEq( this->programType,::openfl::display3D::_internal::_AGALConverter::ProgramType_obj::VERTEX_dyn() )) {
HXLINE( 569)				str = HX_("gl_Position",63,0d,2a,e5);
            			}
            			else {
HXLINE( 569)				str = HX_("gl_FragColor",d7,68,e4,21);
            			}
            		}
            		else {
HXLINE( 573)			::String str1 = ::openfl::display3D::_internal::AGALConverter_obj::prefixFromType(this->type,this->programType);
HXDLIN( 573)			str = (str1 + this->n);
            		}
HXLINE( 576)		bool _hx_tmp;
HXDLIN( 576)		if (useMask) {
HXLINE( 576)			_hx_tmp = (this->mask != 15);
            		}
            		else {
HXLINE( 576)			_hx_tmp = false;
            		}
HXDLIN( 576)		if (_hx_tmp) {
HXLINE( 578)			str = (str + this->getWriteMask());
            		}
HXLINE( 581)		return str;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DestRegister_obj,toGLSL,return )

 ::openfl::display3D::_internal::_AGALConverter::DestRegister DestRegister_obj::parse(int v, ::openfl::display3D::_internal::_AGALConverter::ProgramType programType){
            	HX_GC_STACKFRAME(&_hx_pos_6dbd7f0b2c3dcc1e_554_parse)
            	HX_STACK_ARG(v,"v")
            	HX_STACK_ARG(programType,"programType")
HXLINE( 554)
HXLINE( 555)		HX_VARI(  ::openfl::display3D::_internal::_AGALConverter::DestRegister,dr) =  ::openfl::display3D::_internal::_AGALConverter::DestRegister_obj::__alloc( HX_CTX );
HXLINE( 556)		dr->programType = programType;
HXLINE( 557)		dr->type = (::hx::UShr(v,24) & 15);
HXLINE( 558)		dr->mask = (::hx::UShr(v,16) & 15);
HXLINE( 559)		dr->n = (v & 65535);
HXLINE( 560)		return dr;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DestRegister_obj,parse,return )


::hx::ObjectPtr< DestRegister_obj > DestRegister_obj::__new() {
	::hx::ObjectPtr< DestRegister_obj > __this = new DestRegister_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DestRegister_obj > DestRegister_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DestRegister_obj *__this = (DestRegister_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DestRegister_obj), true, "openfl.display3D._internal._AGALConverter.DestRegister"));
	*(void **)__this = DestRegister_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DestRegister_obj::DestRegister_obj()
{
}

void DestRegister_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DestRegister);
	HX_MARK_MEMBER_NAME(mask,"mask");
	HX_MARK_MEMBER_NAME(n,"n");
	HX_MARK_MEMBER_NAME(programType,"programType");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void DestRegister_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mask,"mask");
	HX_VISIT_MEMBER_NAME(n,"n");
	HX_VISIT_MEMBER_NAME(programType,"programType");
	HX_VISIT_MEMBER_NAME(type,"type");
}

::hx::Val DestRegister_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"n") ) { return ::hx::Val( n ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { return ::hx::Val( mask ); }
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toGLSL") ) { return ::hx::Val( toGLSL_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programType") ) { return ::hx::Val( programType ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getWriteMask") ) { return ::hx::Val( getWriteMask_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool DestRegister_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
	}
	return false;
}

::hx::Val DestRegister_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"n") ) { n=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { mask=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programType") ) { programType=inValue.Cast<  ::openfl::display3D::_internal::_AGALConverter::ProgramType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DestRegister_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("mask",ec,40,56,48));
	outFields->push(HX_("n",6e,00,00,00));
	outFields->push(HX_("programType",5e,fb,2c,c4));
	outFields->push(HX_("type",ba,f2,08,4d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DestRegister_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(DestRegister_obj,mask),HX_("mask",ec,40,56,48)},
	{::hx::fsInt,(int)offsetof(DestRegister_obj,n),HX_("n",6e,00,00,00)},
	{::hx::fsObject /*  ::openfl::display3D::_internal::_AGALConverter::ProgramType */ ,(int)offsetof(DestRegister_obj,programType),HX_("programType",5e,fb,2c,c4)},
	{::hx::fsInt,(int)offsetof(DestRegister_obj,type),HX_("type",ba,f2,08,4d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DestRegister_obj_sStaticStorageInfo = 0;
#endif

static ::String DestRegister_obj_sMemberFields[] = {
	HX_("mask",ec,40,56,48),
	HX_("n",6e,00,00,00),
	HX_("programType",5e,fb,2c,c4),
	HX_("type",ba,f2,08,4d),
	HX_("getWriteMask",f5,d1,60,60),
	HX_("toGLSL",f9,58,08,7a),
	::String(null()) };

::hx::Class DestRegister_obj::__mClass;

static ::String DestRegister_obj_sStaticFields[] = {
	HX_("parse",33,90,55,bd),
	::String(null())
};

void DestRegister_obj::__register()
{
	DestRegister_obj _hx_dummy;
	DestRegister_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display3D._internal._AGALConverter.DestRegister",78,91,5a,db);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DestRegister_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DestRegister_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DestRegister_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DestRegister_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DestRegister_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DestRegister_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DestRegister_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_6dbd7f0b2c3dcc1e_534_boot)
HXDLIN( 534)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _internal
} // end namespace _AGALConverter
