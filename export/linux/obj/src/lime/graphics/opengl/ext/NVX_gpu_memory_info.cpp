#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_NVX_gpu_memory_info
#include <lime/graphics/opengl/ext/NVX_gpu_memory_info.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_beb86411f1650ca3_4_new,"lime.graphics.opengl.ext.NVX_gpu_memory_info","new",0xa06ec8fa,"lime.graphics.opengl.ext.NVX_gpu_memory_info.new","lime/graphics/opengl/ext/NVX_gpu_memory_info.hx",4,0x126d65d8)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void NVX_gpu_memory_info_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_beb86411f1650ca3_4_new)
            	HX_STACK_THIS(this)
HXLINE(   4)
HXLINE(  10)		this->GPU_MEMORY_INFO_EVICTED_MEMORY_NVX = 36939;
HXLINE(   9)		this->GPU_MEMORY_INFO_EVICTION_COUNT_NVX = 36938;
HXLINE(   8)		this->GPU_MEMORY_INFO_CURRENT_AVAILABLE_VIDMEM_NVX = 36937;
HXLINE(   7)		this->GPU_MEMORY_INFO_TOTAL_AVAILABLE_MEMORY_NVX = 36936;
HXLINE(   6)		this->GPU_MEMORY_INFO_DEDICATED_VIDMEM_NVX = 36935;
            	}

Dynamic NVX_gpu_memory_info_obj::__CreateEmpty() { return new NVX_gpu_memory_info_obj; }

void *NVX_gpu_memory_info_obj::_hx_vtable = 0;

Dynamic NVX_gpu_memory_info_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NVX_gpu_memory_info_obj > _hx_result = new NVX_gpu_memory_info_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NVX_gpu_memory_info_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2d69beb8;
}


NVX_gpu_memory_info_obj::NVX_gpu_memory_info_obj()
{
}

::hx::Val NVX_gpu_memory_info_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 34:
		if (HX_FIELD_EQ(inName,"GPU_MEMORY_INFO_EVICTION_COUNT_NVX") ) { return ::hx::Val( GPU_MEMORY_INFO_EVICTION_COUNT_NVX ); }
		if (HX_FIELD_EQ(inName,"GPU_MEMORY_INFO_EVICTED_MEMORY_NVX") ) { return ::hx::Val( GPU_MEMORY_INFO_EVICTED_MEMORY_NVX ); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"GPU_MEMORY_INFO_DEDICATED_VIDMEM_NVX") ) { return ::hx::Val( GPU_MEMORY_INFO_DEDICATED_VIDMEM_NVX ); }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"GPU_MEMORY_INFO_TOTAL_AVAILABLE_MEMORY_NVX") ) { return ::hx::Val( GPU_MEMORY_INFO_TOTAL_AVAILABLE_MEMORY_NVX ); }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"GPU_MEMORY_INFO_CURRENT_AVAILABLE_VIDMEM_NVX") ) { return ::hx::Val( GPU_MEMORY_INFO_CURRENT_AVAILABLE_VIDMEM_NVX ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val NVX_gpu_memory_info_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 34:
		if (HX_FIELD_EQ(inName,"GPU_MEMORY_INFO_EVICTION_COUNT_NVX") ) { GPU_MEMORY_INFO_EVICTION_COUNT_NVX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GPU_MEMORY_INFO_EVICTED_MEMORY_NVX") ) { GPU_MEMORY_INFO_EVICTED_MEMORY_NVX=inValue.Cast< int >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"GPU_MEMORY_INFO_DEDICATED_VIDMEM_NVX") ) { GPU_MEMORY_INFO_DEDICATED_VIDMEM_NVX=inValue.Cast< int >(); return inValue; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"GPU_MEMORY_INFO_TOTAL_AVAILABLE_MEMORY_NVX") ) { GPU_MEMORY_INFO_TOTAL_AVAILABLE_MEMORY_NVX=inValue.Cast< int >(); return inValue; }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"GPU_MEMORY_INFO_CURRENT_AVAILABLE_VIDMEM_NVX") ) { GPU_MEMORY_INFO_CURRENT_AVAILABLE_VIDMEM_NVX=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NVX_gpu_memory_info_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("GPU_MEMORY_INFO_DEDICATED_VIDMEM_NVX",2b,93,c6,01));
	outFields->push(HX_("GPU_MEMORY_INFO_TOTAL_AVAILABLE_MEMORY_NVX",69,8b,f2,8a));
	outFields->push(HX_("GPU_MEMORY_INFO_CURRENT_AVAILABLE_VIDMEM_NVX",b7,75,d8,0b));
	outFields->push(HX_("GPU_MEMORY_INFO_EVICTION_COUNT_NVX",a6,de,fb,3c));
	outFields->push(HX_("GPU_MEMORY_INFO_EVICTED_MEMORY_NVX",af,61,b4,10));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NVX_gpu_memory_info_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(NVX_gpu_memory_info_obj,GPU_MEMORY_INFO_DEDICATED_VIDMEM_NVX),HX_("GPU_MEMORY_INFO_DEDICATED_VIDMEM_NVX",2b,93,c6,01)},
	{::hx::fsInt,(int)offsetof(NVX_gpu_memory_info_obj,GPU_MEMORY_INFO_TOTAL_AVAILABLE_MEMORY_NVX),HX_("GPU_MEMORY_INFO_TOTAL_AVAILABLE_MEMORY_NVX",69,8b,f2,8a)},
	{::hx::fsInt,(int)offsetof(NVX_gpu_memory_info_obj,GPU_MEMORY_INFO_CURRENT_AVAILABLE_VIDMEM_NVX),HX_("GPU_MEMORY_INFO_CURRENT_AVAILABLE_VIDMEM_NVX",b7,75,d8,0b)},
	{::hx::fsInt,(int)offsetof(NVX_gpu_memory_info_obj,GPU_MEMORY_INFO_EVICTION_COUNT_NVX),HX_("GPU_MEMORY_INFO_EVICTION_COUNT_NVX",a6,de,fb,3c)},
	{::hx::fsInt,(int)offsetof(NVX_gpu_memory_info_obj,GPU_MEMORY_INFO_EVICTED_MEMORY_NVX),HX_("GPU_MEMORY_INFO_EVICTED_MEMORY_NVX",af,61,b4,10)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *NVX_gpu_memory_info_obj_sStaticStorageInfo = 0;
#endif

static ::String NVX_gpu_memory_info_obj_sMemberFields[] = {
	HX_("GPU_MEMORY_INFO_DEDICATED_VIDMEM_NVX",2b,93,c6,01),
	HX_("GPU_MEMORY_INFO_TOTAL_AVAILABLE_MEMORY_NVX",69,8b,f2,8a),
	HX_("GPU_MEMORY_INFO_CURRENT_AVAILABLE_VIDMEM_NVX",b7,75,d8,0b),
	HX_("GPU_MEMORY_INFO_EVICTION_COUNT_NVX",a6,de,fb,3c),
	HX_("GPU_MEMORY_INFO_EVICTED_MEMORY_NVX",af,61,b4,10),
	::String(null()) };

::hx::Class NVX_gpu_memory_info_obj::__mClass;

void NVX_gpu_memory_info_obj::__register()
{
	NVX_gpu_memory_info_obj _hx_dummy;
	NVX_gpu_memory_info_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.NVX_gpu_memory_info",08,84,ec,9b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NVX_gpu_memory_info_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NVX_gpu_memory_info_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NVX_gpu_memory_info_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NVX_gpu_memory_info_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
