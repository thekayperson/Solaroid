#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput
#include <openfl/display/ShaderInput.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_362945d0bc3d9e06_141_new,"openfl.display.ShaderInput","new",0xa42758ed,"openfl.display.ShaderInput.new","openfl/display/ShaderInput.hx",141,0xcc724ba5)
HX_LOCAL_STACK_FRAME(_hx_pos_362945d0bc3d9e06_152___disableGL,"openfl.display.ShaderInput","__disableGL",0xd373987a,"openfl.display.ShaderInput.__disableGL","openfl/display/ShaderInput.hx",152,0xcc724ba5)
HX_LOCAL_STACK_FRAME(_hx_pos_362945d0bc3d9e06_159___updateGL,"openfl.display.ShaderInput","__updateGL",0x3528dea1,"openfl.display.ShaderInput.__updateGL","openfl/display/ShaderInput.hx",159,0xcc724ba5)
HX_LOCAL_STACK_FRAME(_hx_pos_362945d0bc3d9e06_60_boot,"openfl.display.ShaderInput","boot",0xf65f7705,"openfl.display.ShaderInput.boot","openfl/display/ShaderInput.hx",60,0xcc724ba5)
namespace openfl{
namespace display{

void ShaderInput_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_362945d0bc3d9e06_141_new)
            	HX_STACK_THIS(this)
HXLINE( 141)
HXLINE( 142)		this->channels = 0;
HXLINE( 143)		this->filter = 5;
HXLINE( 144)		this->height = 0;
HXLINE( 145)		this->index = 0;
HXLINE( 146)		this->mipFilter = 2;
HXLINE( 147)		this->width = 0;
HXLINE( 148)		this->wrap = 0;
            	}

Dynamic ShaderInput_obj::__CreateEmpty() { return new ShaderInput_obj; }

void *ShaderInput_obj::_hx_vtable = 0;

Dynamic ShaderInput_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShaderInput_obj > _hx_result = new ShaderInput_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ShaderInput_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1dc192e3;
}

void ShaderInput_obj::_hx___disableGL( ::openfl::display3D::Context3D context,int id){
            	HX_STACKFRAME(&_hx_pos_362945d0bc3d9e06_152___disableGL)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(context,"context")
            	HX_STACK_ARG(id,"id")
HXLINE( 152)
HXLINE( 153)		HX_VARI(  ::lime::_internal::backend::native::NativeOpenGLRenderContext,gl) = context->gl;
HXLINE( 154)		context->setTextureAt(id,null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShaderInput_obj,_hx___disableGL,(void))

void ShaderInput_obj::_hx___updateGL( ::openfl::display3D::Context3D context,int id, ::Dynamic overrideInput, ::Dynamic overrideFilter, ::Dynamic overrideMipFilter, ::Dynamic overrideWrap){
            	HX_STACKFRAME(&_hx_pos_362945d0bc3d9e06_159___updateGL)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(context,"context")
            	HX_STACK_ARG(id,"id")
            	HX_STACK_ARG(overrideInput,"overrideInput")
            	HX_STACK_ARG(overrideFilter,"overrideFilter")
            	HX_STACK_ARG(overrideMipFilter,"overrideMipFilter")
            	HX_STACK_ARG(overrideWrap,"overrideWrap")
HXLINE( 159)
HXLINE( 160)		HX_VARI(  ::lime::_internal::backend::native::NativeOpenGLRenderContext,gl) = context->gl;
HXLINE( 161)		HX_VAR(  ::Dynamic,input);
HXDLIN( 161)		if (::hx::IsNotNull( overrideInput )) {
HXLINE( 161)			input = overrideInput;
            		}
            		else {
HXLINE( 161)			input = this->input;
            		}
HXLINE( 162)		HX_VAR(  ::Dynamic,filter);
HXDLIN( 162)		if (::hx::IsNotNull( overrideFilter )) {
HXLINE( 162)			filter = overrideFilter;
            		}
            		else {
HXLINE( 162)			filter = this->filter;
            		}
HXLINE( 163)		HX_VAR(  ::Dynamic,mipFilter);
HXDLIN( 163)		if (::hx::IsNotNull( overrideMipFilter )) {
HXLINE( 163)			mipFilter = overrideMipFilter;
            		}
            		else {
HXLINE( 163)			mipFilter = this->mipFilter;
            		}
HXLINE( 164)		HX_VAR(  ::Dynamic,wrap);
HXDLIN( 164)		if (::hx::IsNotNull( overrideWrap )) {
HXLINE( 164)			wrap = overrideWrap;
            		}
            		else {
HXLINE( 164)			wrap = this->wrap;
            		}
HXLINE( 166)		if (::hx::IsNotNull( input )) {
HXLINE( 170)			HX_VARI(  ::openfl::display::BitmapData,bitmapData) = ( ( ::openfl::display::BitmapData)(input) );
HXLINE( 171)			context->setTextureAt(id,bitmapData->getTexture(context));
HXLINE( 172)			context->setSamplerStateAt(id,wrap,filter,mipFilter);
            		}
            		else {
HXLINE( 176)			context->setTextureAt(id,null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC6(ShaderInput_obj,_hx___updateGL,(void))


::hx::ObjectPtr< ShaderInput_obj > ShaderInput_obj::__new() {
	::hx::ObjectPtr< ShaderInput_obj > __this = new ShaderInput_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ShaderInput_obj > ShaderInput_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ShaderInput_obj *__this = (ShaderInput_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShaderInput_obj), true, "openfl.display.ShaderInput"));
	*(void **)__this = ShaderInput_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ShaderInput_obj::ShaderInput_obj()
{
}

void ShaderInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderInput);
	HX_MARK_MEMBER_NAME(channels,"channels");
	HX_MARK_MEMBER_NAME(filter,"filter");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(mipFilter,"mipFilter");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(wrap,"wrap");
	HX_MARK_MEMBER_NAME(_hx___isUniform,"__isUniform");
	HX_MARK_END_CLASS();
}

void ShaderInput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(channels,"channels");
	HX_VISIT_MEMBER_NAME(filter,"filter");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(mipFilter,"mipFilter");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(wrap,"wrap");
	HX_VISIT_MEMBER_NAME(_hx___isUniform,"__isUniform");
}

::hx::Val ShaderInput_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"wrap") ) { return ::hx::Val( wrap ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return ::hx::Val( index ); }
		if (HX_FIELD_EQ(inName,"input") ) { return ::hx::Val( input ); }
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { return ::hx::Val( filter ); }
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { return ::hx::Val( channels ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mipFilter") ) { return ::hx::Val( mipFilter ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__updateGL") ) { return ::hx::Val( _hx___updateGL_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__isUniform") ) { return ::hx::Val( _hx___isUniform ); }
		if (HX_FIELD_EQ(inName,"__disableGL") ) { return ::hx::Val( _hx___disableGL_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ShaderInput_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap") ) { wrap=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { filter=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { channels=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mipFilter") ) { mipFilter=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__isUniform") ) { _hx___isUniform=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShaderInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("channels",50,aa,ee,6a));
	outFields->push(HX_("filter",b8,1f,35,85));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("index",12,9b,14,be));
	outFields->push(HX_("input",0a,c4,1d,be));
	outFields->push(HX_("mipFilter",6c,0c,a8,31));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("wrap",ca,39,ff,4e));
	outFields->push(HX_("__isUniform",4a,07,8f,e7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ShaderInput_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ShaderInput_obj,channels),HX_("channels",50,aa,ee,6a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ShaderInput_obj,filter),HX_("filter",b8,1f,35,85)},
	{::hx::fsInt,(int)offsetof(ShaderInput_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ShaderInput_obj,index),HX_("index",12,9b,14,be)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ShaderInput_obj,input),HX_("input",0a,c4,1d,be)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ShaderInput_obj,mipFilter),HX_("mipFilter",6c,0c,a8,31)},
	{::hx::fsString,(int)offsetof(ShaderInput_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsInt,(int)offsetof(ShaderInput_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ShaderInput_obj,wrap),HX_("wrap",ca,39,ff,4e)},
	{::hx::fsBool,(int)offsetof(ShaderInput_obj,_hx___isUniform),HX_("__isUniform",4a,07,8f,e7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ShaderInput_obj_sStaticStorageInfo = 0;
#endif

static ::String ShaderInput_obj_sMemberFields[] = {
	HX_("channels",50,aa,ee,6a),
	HX_("filter",b8,1f,35,85),
	HX_("height",e7,07,4c,02),
	HX_("index",12,9b,14,be),
	HX_("input",0a,c4,1d,be),
	HX_("mipFilter",6c,0c,a8,31),
	HX_("name",4b,72,ff,48),
	HX_("width",06,b6,62,ca),
	HX_("wrap",ca,39,ff,4e),
	HX_("__isUniform",4a,07,8f,e7),
	HX_("__disableGL",ed,3a,e1,35),
	HX_("__updateGL",8e,8b,32,1b),
	::String(null()) };

::hx::Class ShaderInput_obj::__mClass;

void ShaderInput_obj::__register()
{
	ShaderInput_obj _hx_dummy;
	ShaderInput_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.ShaderInput",7b,5e,1b,df);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShaderInput_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShaderInput_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShaderInput_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShaderInput_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ShaderInput_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_362945d0bc3d9e06_60_boot)
HXDLIN(  60)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("index",12,9b,14,be), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))
            				->setFixed(1,HX_("name",4b,72,ff,48), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))))));
            	}
}

} // end namespace openfl
} // end namespace display
