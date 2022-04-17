#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_List
#include <haxe/ds/List.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ds__List_ListNode
#include <haxe/ds/_List/ListNode.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_zip_Reader
#include <haxe/zip/Reader.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_utils_AssetBundle
#include <lime/utils/AssetBundle.h>
#endif
#ifndef INCLUDED_lime_utils_CompressionAlgorithm
#include <lime/utils/CompressionAlgorithm.h>
#endif
#ifndef INCLUDED_lime_utils__Bytes_Bytes_Impl_
#include <lime/utils/_Bytes/Bytes_Impl_.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_io_FileInput
#include <sys/io/FileInput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1c6e87ef27a4e464_23_new,"lime.utils.AssetBundle","new",0x00bb2b0e,"lime.utils.AssetBundle.new","lime/utils/AssetBundle.hx",23,0xe7f27664)
HX_LOCAL_STACK_FRAME(_hx_pos_1c6e87ef27a4e464_30_fromBytes,"lime.utils.AssetBundle","fromBytes",0x091e83cf,"lime.utils.AssetBundle.fromBytes","lime/utils/AssetBundle.hx",30,0xe7f27664)
HX_LOCAL_STACK_FRAME(_hx_pos_1c6e87ef27a4e464_36_fromFile,"lime.utils.AssetBundle","fromFile",0x7c52cb98,"lime.utils.AssetBundle.fromFile","lime/utils/AssetBundle.hx",36,0xe7f27664)
HX_LOCAL_STACK_FRAME(_hx_pos_1c6e87ef27a4e464_47_loadFromBytes,"lime.utils.AssetBundle","loadFromBytes",0xe48f83c9,"lime.utils.AssetBundle.loadFromBytes","lime/utils/AssetBundle.hx",47,0xe7f27664)
HX_LOCAL_STACK_FRAME(_hx_pos_1c6e87ef27a4e464_52_loadFromFile,"lime.utils.AssetBundle","loadFromFile",0x766b68de,"lime.utils.AssetBundle.loadFromFile","lime/utils/AssetBundle.hx",52,0xe7f27664)
HX_LOCAL_STACK_FRAME(_hx_pos_1c6e87ef27a4e464_56___extractBundle,"lime.utils.AssetBundle","__extractBundle",0x6652e431,"lime.utils.AssetBundle.__extractBundle","lime/utils/AssetBundle.hx",56,0xe7f27664)
namespace lime{
namespace utils{

void AssetBundle_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_1c6e87ef27a4e464_23_new)
            	HX_STACK_THIS(this)
HXLINE(  23)
HXLINE(  25)		this->data =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  26)		this->paths = ::Array_obj< ::String >::__new();
            	}

Dynamic AssetBundle_obj::__CreateEmpty() { return new AssetBundle_obj; }

void *AssetBundle_obj::_hx_vtable = 0;

Dynamic AssetBundle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AssetBundle_obj > _hx_result = new AssetBundle_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AssetBundle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x348722f6;
}

 ::lime::utils::AssetBundle AssetBundle_obj::fromBytes( ::haxe::io::Bytes bytes){
            	HX_GC_STACKFRAME(&_hx_pos_1c6e87ef27a4e464_30_fromBytes)
            	HX_STACK_ARG(bytes,"bytes")
HXLINE(  30)
HXLINE(  31)		HX_VARI(  ::haxe::io::BytesInput,input) =  ::haxe::io::BytesInput_obj::__alloc( HX_CTX ,bytes,null(),null());
HXLINE(  32)		return ::lime::utils::AssetBundle_obj::_hx___extractBundle(input);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetBundle_obj,fromBytes,return )

 ::lime::utils::AssetBundle AssetBundle_obj::fromFile(::String path){
            	HX_STACKFRAME(&_hx_pos_1c6e87ef27a4e464_36_fromFile)
            	HX_STACK_ARG(path,"path")
HXLINE(  36)
HXLINE(  38)		HX_VARI(  ::sys::io::FileInput,input) = ::sys::io::File_obj::read(path,null());
HXLINE(  39)		return ::lime::utils::AssetBundle_obj::_hx___extractBundle(input);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetBundle_obj,fromFile,return )

 ::lime::app::Future AssetBundle_obj::loadFromBytes( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_1c6e87ef27a4e464_47_loadFromBytes)
            	HX_STACK_ARG(bytes,"bytes")
HXLINE(  47)
HXDLIN(  47)		return ::lime::app::Future_obj::withValue(::lime::utils::AssetBundle_obj::fromBytes(bytes));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetBundle_obj,loadFromBytes,return )

 ::lime::app::Future AssetBundle_obj::loadFromFile(::String path){
            	HX_STACKFRAME(&_hx_pos_1c6e87ef27a4e464_52_loadFromFile)
            	HX_STACK_ARG(path,"path")
HXLINE(  52)
HXDLIN(  52)		return ::lime::utils::_Bytes::Bytes_Impl__obj::loadFromFile(path)->then(::lime::utils::AssetBundle_obj::loadFromBytes_dyn());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetBundle_obj,loadFromFile,return )

 ::lime::utils::AssetBundle AssetBundle_obj::_hx___extractBundle( ::haxe::io::Input input){
            	HX_GC_STACKFRAME(&_hx_pos_1c6e87ef27a4e464_56___extractBundle)
            	HX_STACK_ARG(input,"input")
HXLINE(  56)
HXLINE(  57)		HX_VARI(  ::haxe::ds::List,entries) = ::haxe::zip::Reader_obj::readZip(input);
HXLINE(  59)		HX_VARI(  ::lime::utils::AssetBundle,bundle) =  ::lime::utils::AssetBundle_obj::__alloc( HX_CTX );
HXLINE(  61)		{
HXLINE(  61)			 ::haxe::ds::_List::ListNode _g_head = entries->h;
HXDLIN(  61)			while(::hx::IsNotNull( _g_head )){
HXLINE(  61)				 ::Dynamic val = _g_head->item;
HXDLIN(  61)				_g_head = _g_head->next;
HXDLIN(  61)				HX_VARI(  ::Dynamic,entry) = val;
HXLINE(  63)				if (( (bool)(entry->__Field(HX_("compressed",81,4c,da,67),::hx::paccDynamic)) )) {
HXLINE(  65)					HX_VARI(  ::haxe::io::Bytes,bytes) = ( ( ::haxe::io::Bytes)(entry->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic)) );
HXLINE(  66)					{
HXLINE(  66)						::Dynamic this1 = bundle->data;
HXDLIN(  66)						::String key = ( (::String)(entry->__Field(HX_("fileName",e7,5a,43,62),::hx::paccDynamic)) );
HXDLIN(  66)						( ( ::haxe::ds::StringMap)(this1) )->set(key,::lime::utils::_Bytes::Bytes_Impl__obj::decompress(bytes,::lime::utils::CompressionAlgorithm_obj::DEFLATE_dyn()));
            					}
            				}
            				else {
HXLINE(  70)					bundle->data->set(( (::String)(entry->__Field(HX_("fileName",e7,5a,43,62),::hx::paccDynamic)) ), ::Dynamic(entry->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic)));
            				}
HXLINE(  72)				bundle->paths->push( ::Dynamic(entry->__Field(HX_("fileName",e7,5a,43,62),::hx::paccDynamic)));
            			}
            		}
HXLINE(  75)		return bundle;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetBundle_obj,_hx___extractBundle,return )


::hx::ObjectPtr< AssetBundle_obj > AssetBundle_obj::__new() {
	::hx::ObjectPtr< AssetBundle_obj > __this = new AssetBundle_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< AssetBundle_obj > AssetBundle_obj::__alloc(::hx::Ctx *_hx_ctx) {
	AssetBundle_obj *__this = (AssetBundle_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AssetBundle_obj), true, "lime.utils.AssetBundle"));
	*(void **)__this = AssetBundle_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AssetBundle_obj::AssetBundle_obj()
{
}

void AssetBundle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetBundle);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(paths,"paths");
	HX_MARK_END_CLASS();
}

void AssetBundle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(paths,"paths");
}

::hx::Val AssetBundle_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"paths") ) { return ::hx::Val( paths ); }
	}
	return super::__Field(inName,inCallProp);
}

bool AssetBundle_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadFromFile") ) { outValue = loadFromFile_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadFromBytes") ) { outValue = loadFromBytes_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__extractBundle") ) { outValue = _hx___extractBundle_dyn(); return true; }
	}
	return false;
}

::hx::Val AssetBundle_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"paths") ) { paths=inValue.Cast< ::Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetBundle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("paths",2e,0b,57,bd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AssetBundle_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(AssetBundle_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(AssetBundle_obj,paths),HX_("paths",2e,0b,57,bd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AssetBundle_obj_sStaticStorageInfo = 0;
#endif

static ::String AssetBundle_obj_sMemberFields[] = {
	HX_("data",2a,56,63,42),
	HX_("paths",2e,0b,57,bd),
	::String(null()) };

::hx::Class AssetBundle_obj::__mClass;

static ::String AssetBundle_obj_sStaticFields[] = {
	HX_("fromBytes",a1,f2,20,72),
	HX_("fromFile",06,9d,87,a1),
	HX_("loadFromBytes",9b,c3,86,f4),
	HX_("loadFromFile",4c,89,f0,5a),
	HX_("__extractBundle",83,3c,77,d2),
	::String(null())
};

void AssetBundle_obj::__register()
{
	AssetBundle_obj _hx_dummy;
	AssetBundle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.utils.AssetBundle",1c,4c,31,e2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AssetBundle_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AssetBundle_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AssetBundle_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AssetBundle_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AssetBundle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AssetBundle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace utils
