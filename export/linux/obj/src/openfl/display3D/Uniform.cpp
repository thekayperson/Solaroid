#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_BytePointerData
#include <lime/utils/BytePointerData.h>
#endif
#ifndef INCLUDED_lime_utils__BytePointer_BytePointer_Impl_
#include <lime/utils/_BytePointer/BytePointer_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Uniform
#include <openfl/display3D/Uniform.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2880df2f01d21cf0_949_new,"openfl.display3D.Uniform","new",0x27a38f2d,"openfl.display3D.Uniform.new","openfl/display3D/Program3D.hx",949,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_2880df2f01d21cf0_960_flush,"openfl.display3D.Uniform","flush",0x6c722ed1,"openfl.display3D.Uniform.flush","openfl/display3D/Program3D.hx",960,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_2880df2f01d21cf0_1013___getUniformRegisters,"openfl.display3D.Uniform","__getUniformRegisters",0xe23bc87f,"openfl.display3D.Uniform.__getUniformRegisters","openfl/display3D/Program3D.hx",1013,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_2880df2f01d21cf0_933_boot,"openfl.display3D.Uniform","boot",0x7f92b8c5,"openfl.display3D.Uniform.boot","openfl/display3D/Program3D.hx",933,0x0a985b04)
namespace openfl{
namespace display3D{

void Uniform_obj::__construct( ::openfl::display3D::Context3D context){
            	HX_GC_STACKFRAME(&_hx_pos_2880df2f01d21cf0_949_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(context,"context")
HXLINE( 949)
HXLINE( 950)		this->context = context;
HXLINE( 952)		this->isDirty = true;
HXLINE( 955)		 ::haxe::io::Bytes bytes = null();
HXDLIN( 955)		 ::lime::utils::BytePointerData this1 =  ::lime::utils::BytePointerData_obj::__alloc( HX_CTX ,bytes,0);
HXDLIN( 955)		this->regDataPointer = this1;
            	}

Dynamic Uniform_obj::__CreateEmpty() { return new Uniform_obj; }

void *Uniform_obj::_hx_vtable = 0;

Dynamic Uniform_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Uniform_obj > _hx_result = new Uniform_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Uniform_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4e22ad91;
}

void Uniform_obj::flush(){
            	HX_STACKFRAME(&_hx_pos_2880df2f01d21cf0_960_flush)
            	HX_STACK_THIS(this)
HXLINE( 960)
HXLINE( 965)		HX_VARI(  ::lime::_internal::backend::native::NativeOpenGLRenderContext,gl) = this->context->_hx___context->gles2;
HXLINE( 968)		HX_VARI( int,index) = (this->regIndex * 4);
HXLINE( 969)		switch((int)(this->type)){
            			case (int)35664: {
HXLINE( 994)				int location = this->location;
HXDLIN( 994)				int count = this->regCount;
HXDLIN( 994)				int size = (this->regCount * 2);
HXDLIN( 994)				::lime::utils::_BytePointer::BytePointer_Impl__obj::set(this->regDataPointer,null(),this->regData,null(),(index * 4));
HXDLIN( 994)				gl->uniform2fv(location,count,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(this->regDataPointer));
            			}
            			break;
            			case (int)35665: {
HXLINE( 996)				int location = this->location;
HXDLIN( 996)				int count = this->regCount;
HXDLIN( 996)				int size = (this->regCount * 3);
HXDLIN( 996)				::lime::utils::_BytePointer::BytePointer_Impl__obj::set(this->regDataPointer,null(),this->regData,null(),(index * 4));
HXDLIN( 996)				gl->uniform3fv(location,count,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(this->regDataPointer));
            			}
            			break;
            			case (int)35666: {
HXLINE( 998)				int location = this->location;
HXDLIN( 998)				int count = this->regCount;
HXDLIN( 998)				int size = (this->regCount * 4);
HXDLIN( 998)				::lime::utils::_BytePointer::BytePointer_Impl__obj::set(this->regDataPointer,null(),this->regData,null(),(index * 4));
HXDLIN( 998)				gl->uniform4fv(location,count,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(this->regDataPointer));
            			}
            			break;
            			case (int)35674: {
HXLINE( 988)				int location = this->location;
HXDLIN( 988)				int count = this->size;
HXDLIN( 988)				int size = ((this->size * 2) * 2);
HXDLIN( 988)				::lime::utils::_BytePointer::BytePointer_Impl__obj::set(this->regDataPointer,null(),this->regData,null(),(index * 4));
HXDLIN( 988)				gl->uniformMatrix2fv(location,count,false,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(this->regDataPointer));
            			}
            			break;
            			case (int)35675: {
HXLINE( 990)				int location = this->location;
HXDLIN( 990)				int count = this->size;
HXDLIN( 990)				int size = ((this->size * 3) * 3);
HXDLIN( 990)				::lime::utils::_BytePointer::BytePointer_Impl__obj::set(this->regDataPointer,null(),this->regData,null(),(index * 4));
HXDLIN( 990)				gl->uniformMatrix3fv(location,count,false,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(this->regDataPointer));
            			}
            			break;
            			case (int)35676: {
HXLINE( 992)				int location = this->location;
HXDLIN( 992)				int count = this->size;
HXDLIN( 992)				int size = ((this->size * 4) * 4);
HXDLIN( 992)				::lime::utils::_BytePointer::BytePointer_Impl__obj::set(this->regDataPointer,null(),this->regData,null(),(index * 4));
HXDLIN( 992)				gl->uniformMatrix4fv(location,count,false,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(this->regDataPointer));
            			}
            			break;
            			default:{
HXLINE(1000)				int location = this->location;
HXDLIN(1000)				int count = this->regCount;
HXDLIN(1000)				int size = (this->regCount * 4);
HXDLIN(1000)				::lime::utils::_BytePointer::BytePointer_Impl__obj::set(this->regDataPointer,null(),this->regData,null(),(index * 4));
HXDLIN(1000)				gl->uniform4fv(location,count,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(this->regDataPointer));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Uniform_obj,flush,(void))

 ::lime::utils::BytePointerData Uniform_obj::_hx___getUniformRegisters(int index,int size){
            	HX_STACKFRAME(&_hx_pos_2880df2f01d21cf0_1013___getUniformRegisters)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(index,"index")
            	HX_STACK_ARG(size,"size")
HXLINE(1013)
HXLINE(1014)		::lime::utils::_BytePointer::BytePointer_Impl__obj::set(this->regDataPointer,null(),this->regData,null(),(index * 4));
HXLINE(1015)		return this->regDataPointer;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Uniform_obj,_hx___getUniformRegisters,return )


::hx::ObjectPtr< Uniform_obj > Uniform_obj::__new( ::openfl::display3D::Context3D context) {
	::hx::ObjectPtr< Uniform_obj > __this = new Uniform_obj();
	__this->__construct(context);
	return __this;
}

::hx::ObjectPtr< Uniform_obj > Uniform_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context) {
	Uniform_obj *__this = (Uniform_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Uniform_obj), true, "openfl.display3D.Uniform"));
	*(void **)__this = Uniform_obj::_hx_vtable;
	__this->__construct(context);
	return __this;
}

Uniform_obj::Uniform_obj()
{
}

void Uniform_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Uniform);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(location,"location");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(regData,"regData");
	HX_MARK_MEMBER_NAME(regIndex,"regIndex");
	HX_MARK_MEMBER_NAME(regCount,"regCount");
	HX_MARK_MEMBER_NAME(isDirty,"isDirty");
	HX_MARK_MEMBER_NAME(context,"context");
	HX_MARK_MEMBER_NAME(regDataPointer,"regDataPointer");
	HX_MARK_END_CLASS();
}

void Uniform_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(location,"location");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(regData,"regData");
	HX_VISIT_MEMBER_NAME(regIndex,"regIndex");
	HX_VISIT_MEMBER_NAME(regCount,"regCount");
	HX_VISIT_MEMBER_NAME(isDirty,"isDirty");
	HX_VISIT_MEMBER_NAME(context,"context");
	HX_VISIT_MEMBER_NAME(regDataPointer,"regDataPointer");
}

::hx::Val Uniform_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		if (HX_FIELD_EQ(inName,"size") ) { return ::hx::Val( size ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flush") ) { return ::hx::Val( flush_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"regData") ) { return ::hx::Val( regData ); }
		if (HX_FIELD_EQ(inName,"isDirty") ) { return ::hx::Val( isDirty ); }
		if (HX_FIELD_EQ(inName,"context") ) { return ::hx::Val( context ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"location") ) { return ::hx::Val( location ); }
		if (HX_FIELD_EQ(inName,"regIndex") ) { return ::hx::Val( regIndex ); }
		if (HX_FIELD_EQ(inName,"regCount") ) { return ::hx::Val( regCount ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"regDataPointer") ) { return ::hx::Val( regDataPointer ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__getUniformRegisters") ) { return ::hx::Val( _hx___getUniformRegisters_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Uniform_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"regData") ) { regData=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isDirty") ) { isDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast<  ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"location") ) { location=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"regIndex") ) { regIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"regCount") ) { regCount=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"regDataPointer") ) { regDataPointer=inValue.Cast<  ::lime::utils::BytePointerData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Uniform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("location",35,6e,46,e5));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("regData",9e,95,1c,62));
	outFields->push(HX_("regIndex",1e,e1,72,60));
	outFields->push(HX_("regCount",db,8a,c1,ec));
	outFields->push(HX_("isDirty",c8,f3,55,76));
	outFields->push(HX_("context",ef,95,77,19));
	outFields->push(HX_("regDataPointer",bf,62,65,21));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Uniform_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Uniform_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsInt,(int)offsetof(Uniform_obj,location),HX_("location",35,6e,46,e5)},
	{::hx::fsInt,(int)offsetof(Uniform_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsInt,(int)offsetof(Uniform_obj,size),HX_("size",c1,a0,53,4c)},
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(int)offsetof(Uniform_obj,regData),HX_("regData",9e,95,1c,62)},
	{::hx::fsInt,(int)offsetof(Uniform_obj,regIndex),HX_("regIndex",1e,e1,72,60)},
	{::hx::fsInt,(int)offsetof(Uniform_obj,regCount),HX_("regCount",db,8a,c1,ec)},
	{::hx::fsBool,(int)offsetof(Uniform_obj,isDirty),HX_("isDirty",c8,f3,55,76)},
	{::hx::fsObject /*  ::openfl::display3D::Context3D */ ,(int)offsetof(Uniform_obj,context),HX_("context",ef,95,77,19)},
	{::hx::fsObject /*  ::lime::utils::BytePointerData */ ,(int)offsetof(Uniform_obj,regDataPointer),HX_("regDataPointer",bf,62,65,21)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Uniform_obj_sStaticStorageInfo = 0;
#endif

static ::String Uniform_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("location",35,6e,46,e5),
	HX_("type",ba,f2,08,4d),
	HX_("size",c1,a0,53,4c),
	HX_("regData",9e,95,1c,62),
	HX_("regIndex",1e,e1,72,60),
	HX_("regCount",db,8a,c1,ec),
	HX_("isDirty",c8,f3,55,76),
	HX_("context",ef,95,77,19),
	HX_("regDataPointer",bf,62,65,21),
	HX_("flush",c4,62,9b,02),
	HX_("__getUniformRegisters",72,52,ab,fa),
	::String(null()) };

::hx::Class Uniform_obj::__mClass;

void Uniform_obj::__register()
{
	Uniform_obj _hx_dummy;
	Uniform_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display3D.Uniform",bb,74,2f,9e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Uniform_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Uniform_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Uniform_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Uniform_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Uniform_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2880df2f01d21cf0_933_boot)
HXDLIN( 933)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display3D
