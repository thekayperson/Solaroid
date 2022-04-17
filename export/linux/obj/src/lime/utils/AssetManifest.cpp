#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_format_JsonPrinter
#include <haxe/format/JsonPrinter.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_utils_AssetManifest
#include <lime/utils/AssetManifest.h>
#endif
#ifndef INCLUDED_lime_utils__Bytes_Bytes_Impl_
#include <lime/utils/_Bytes/Bytes_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8a07fa6861abdf37_26_new,"lime.utils.AssetManifest","new",0x762e683b,"lime.utils.AssetManifest.new","lime/utils/AssetManifest.hx",26,0x0cdd5257)
HX_LOCAL_STACK_FRAME(_hx_pos_8a07fa6861abdf37_132_serialize,"lime.utils.AssetManifest","serialize",0x0634cbfb,"lime.utils.AssetManifest.serialize","lime/utils/AssetManifest.hx",132,0x0cdd5257)
HX_LOCAL_STACK_FRAME(_hx_pos_8a07fa6861abdf37_34_fromBytes,"lime.utils.AssetManifest","fromBytes",0x836360bc,"lime.utils.AssetManifest.fromBytes","lime/utils/AssetManifest.hx",34,0x0cdd5257)
HX_LOCAL_STACK_FRAME(_hx_pos_8a07fa6861abdf37_45_fromFile,"lime.utils.AssetManifest","fromFile",0x2911ab4b,"lime.utils.AssetManifest.fromFile","lime/utils/AssetManifest.hx",45,0x0cdd5257)
HX_LOCAL_STACK_FRAME(_hx_pos_8a07fa6861abdf37_56_loadFromBytes,"lime.utils.AssetManifest","loadFromBytes",0x6e69db36,"lime.utils.AssetManifest.loadFromBytes","lime/utils/AssetManifest.hx",56,0x0cdd5257)
HX_LOCAL_STACK_FRAME(_hx_pos_8a07fa6861abdf37_68_loadFromFile,"lime.utils.AssetManifest","loadFromFile",0xc63f9e11,"lime.utils.AssetManifest.loadFromFile","lime/utils/AssetManifest.hx",68,0x0cdd5257)
HX_LOCAL_STACK_FRAME(_hx_pos_8a07fa6861abdf37_60_loadFromFile,"lime.utils.AssetManifest","loadFromFile",0xc63f9e11,"lime.utils.AssetManifest.loadFromFile","lime/utils/AssetManifest.hx",60,0x0cdd5257)
HX_LOCAL_STACK_FRAME(_hx_pos_8a07fa6861abdf37_73_parse,"lime.utils.AssetManifest","parse",0x50ea14ce,"lime.utils.AssetManifest.parse","lime/utils/AssetManifest.hx",73,0x0cdd5257)
HX_LOCAL_STACK_FRAME(_hx_pos_8a07fa6861abdf37_149___resolvePath,"lime.utils.AssetManifest","__resolvePath",0xa7e8632c,"lime.utils.AssetManifest.__resolvePath","lime/utils/AssetManifest.hx",149,0x0cdd5257)
HX_LOCAL_STACK_FRAME(_hx_pos_8a07fa6861abdf37_189___resolveRootPath,"lime.utils.AssetManifest","__resolveRootPath",0x93ba05ee,"lime.utils.AssetManifest.__resolveRootPath","lime/utils/AssetManifest.hx",189,0x0cdd5257)
namespace lime{
namespace utils{

void AssetManifest_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_8a07fa6861abdf37_26_new)
            	HX_STACK_THIS(this)
HXLINE(  26)
HXLINE(  27)		this->assets = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  28)		this->libraryArgs = ::Array_obj< ::String >::__new(0);
HXLINE(  29)		this->version = 2;
            	}

Dynamic AssetManifest_obj::__CreateEmpty() { return new AssetManifest_obj; }

void *AssetManifest_obj::_hx_vtable = 0;

Dynamic AssetManifest_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AssetManifest_obj > _hx_result = new AssetManifest_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AssetManifest_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x20b0fe87;
}

::String AssetManifest_obj::serialize(){
            	HX_STACKFRAME(&_hx_pos_8a07fa6861abdf37_132_serialize)
            	HX_STACK_THIS(this)
HXLINE( 132)
HXLINE( 134)		HX_VARI(  ::Dynamic,manifestData) =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE( 135)		manifestData->__SetField(HX_("version",18,e7,f1,7c),this->version,::hx::paccDynamic);
HXLINE( 136)		manifestData->__SetField(HX_("libraryType",55,df,f0,ae),this->libraryType,::hx::paccDynamic);
HXLINE( 137)		manifestData->__SetField(HX_("libraryArgs",f8,79,5c,a2),this->libraryArgs,::hx::paccDynamic);
HXLINE( 138)		manifestData->__SetField(HX_("name",4b,72,ff,48),this->name,::hx::paccDynamic);
HXLINE( 139)		manifestData->__SetField(HX_("assets",83,48,03,4c),::haxe::Serializer_obj::run(this->assets),::hx::paccDynamic);
HXLINE( 140)		manifestData->__SetField(HX_("rootPath",e7,b8,88,e1),this->rootPath,::hx::paccDynamic);
HXLINE( 142)		 ::Dynamic replacer = null();
HXDLIN( 142)		::String space = null();
HXDLIN( 142)		return ::haxe::format::JsonPrinter_obj::print(manifestData,replacer,space);
            	}


HX_DEFINE_DYNAMIC_FUNC0(AssetManifest_obj,serialize,return )

 ::lime::utils::AssetManifest AssetManifest_obj::fromBytes( ::haxe::io::Bytes bytes,::String rootPath){
            	HX_STACKFRAME(&_hx_pos_8a07fa6861abdf37_34_fromBytes)
            	HX_STACK_ARG(bytes,"bytes")
            	HX_STACK_ARG(rootPath,"rootPath")
HXLINE(  34)
HXDLIN(  34)		if (::hx::IsNotNull( bytes )) {
HXLINE(  36)			return ::lime::utils::AssetManifest_obj::parse(bytes->getString(0,bytes->length,null()),rootPath);
            		}
            		else {
HXLINE(  40)			return null();
            		}
HXLINE(  34)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetManifest_obj,fromBytes,return )

 ::lime::utils::AssetManifest AssetManifest_obj::fromFile(::String path,::String rootPath){
            	HX_STACKFRAME(&_hx_pos_8a07fa6861abdf37_45_fromFile)
            	HX_STACK_ARG(path,"path")
            	HX_STACK_ARG(rootPath,"rootPath")
HXLINE(  45)
HXLINE(  46)		path = ::lime::utils::AssetManifest_obj::_hx___resolvePath(path);
HXLINE(  47)		rootPath = ::lime::utils::AssetManifest_obj::_hx___resolveRootPath(rootPath,path);
HXLINE(  49)		if (::hx::IsNull( path )) {
HXLINE(  49)			return null();
            		}
HXLINE(  51)		return ::lime::utils::AssetManifest_obj::fromBytes(::lime::utils::_Bytes::Bytes_Impl__obj::fromFile(path),rootPath);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetManifest_obj,fromFile,return )

 ::lime::app::Future AssetManifest_obj::loadFromBytes( ::haxe::io::Bytes bytes,::String rootPath){
            	HX_STACKFRAME(&_hx_pos_8a07fa6861abdf37_56_loadFromBytes)
            	HX_STACK_ARG(bytes,"bytes")
            	HX_STACK_ARG(rootPath,"rootPath")
HXLINE(  56)
HXDLIN(  56)		return ::lime::app::Future_obj::withValue(::lime::utils::AssetManifest_obj::fromBytes(bytes,rootPath));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetManifest_obj,loadFromBytes,return )

 ::lime::app::Future AssetManifest_obj::loadFromFile(::String path,::String rootPath){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::Array< ::String >,rootPath1) HXARGC(1)
            		 ::lime::app::Future _hx_run( ::haxe::io::Bytes bytes){
            			HX_STACKFRAME(&_hx_pos_8a07fa6861abdf37_68_loadFromFile)
            			HX_STACK_ARG(bytes,"bytes")
HXLINE(  68)
HXLINE(  68)			return ::lime::app::Future_obj::withValue(::lime::utils::AssetManifest_obj::fromBytes(bytes,rootPath1->__get(0)));
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_8a07fa6861abdf37_60_loadFromFile)
            	HX_STACK_ARG(path,"path")
            	HX_STACK_ARG(rootPath,"rootPath")
HXLINE(  60)
HXDLIN(  60)		HX_VARI( ::Array< ::String >,rootPath1) = ::Array_obj< ::String >::__new(1)->init(0,rootPath);
HXLINE(  61)		path = ::lime::utils::AssetManifest_obj::_hx___resolvePath(path);
HXLINE(  62)		rootPath1[0] = ::lime::utils::AssetManifest_obj::_hx___resolveRootPath(rootPath1->__get(0),path);
HXLINE(  64)		if (::hx::IsNull( path )) {
HXLINE(  64)			return null();
            		}
HXLINE(  66)		return ::lime::utils::_Bytes::Bytes_Impl__obj::loadFromFile(path)->then( ::Dynamic(new _hx_Closure_0(rootPath1)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetManifest_obj,loadFromFile,return )

 ::lime::utils::AssetManifest AssetManifest_obj::parse(::String data,::String rootPath){
            	HX_GC_STACKFRAME(&_hx_pos_8a07fa6861abdf37_73_parse)
            	HX_STACK_ARG(data,"data")
            	HX_STACK_ARG(rootPath,"rootPath")
HXLINE(  73)
HXLINE(  74)		bool _hx_tmp;
HXDLIN(  74)		if (::hx::IsNotNull( data )) {
HXLINE(  74)			_hx_tmp = (data == HX_("",00,00,00,00));
            		}
            		else {
HXLINE(  74)			_hx_tmp = true;
            		}
HXDLIN(  74)		if (_hx_tmp) {
HXLINE(  74)			return null();
            		}
HXLINE(  77)		HX_VARI(  ::Dynamic,manifestData) =  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,data)->doParse();
HXLINE(  78)		HX_VARI(  ::lime::utils::AssetManifest,manifest) =  ::lime::utils::AssetManifest_obj::__alloc( HX_CTX );
HXLINE(  80)		if (::Reflect_obj::hasField(manifestData,HX_("name",4b,72,ff,48))) {
HXLINE(  82)			manifest->name = ( (::String)(manifestData->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
            		}
HXLINE(  85)		if (::Reflect_obj::hasField(manifestData,HX_("libraryType",55,df,f0,ae))) {
HXLINE(  87)			manifest->libraryType = ( (::String)(manifestData->__Field(HX_("libraryType",55,df,f0,ae),::hx::paccDynamic)) );
            		}
HXLINE(  90)		if (::Reflect_obj::hasField(manifestData,HX_("libraryArgs",f8,79,5c,a2))) {
HXLINE(  92)			manifest->libraryArgs = ( (::Array< ::String >)(manifestData->__Field(HX_("libraryArgs",f8,79,5c,a2),::hx::paccDynamic)) );
            		}
HXLINE(  95)		if (::Reflect_obj::hasField(manifestData,HX_("assets",83,48,03,4c))) {
HXLINE(  97)			HX_VARI(  ::Dynamic,assets) =  ::Dynamic(manifestData->__Field(HX_("assets",83,48,03,4c),::hx::paccDynamic));
HXLINE(  98)			bool _hx_tmp;
HXDLIN(  98)			if (::Reflect_obj::hasField(manifestData,HX_("version",18,e7,f1,7c))) {
HXLINE(  98)				_hx_tmp = ::hx::IsLessEq( manifestData->__Field(HX_("version",18,e7,f1,7c),::hx::paccDynamic),2 );
            			}
            			else {
HXLINE(  98)				_hx_tmp = false;
            			}
HXDLIN(  98)			if (_hx_tmp) {
HXLINE( 100)				manifest->assets = ( (::cpp::VirtualArray)(::haxe::Unserializer_obj::run(( (::String)(assets) ))) );
            			}
            			else {
HXLINE( 104)				manifest->assets = ( (::cpp::VirtualArray)(assets) );
            			}
            		}
HXLINE( 108)		if (::Reflect_obj::hasField(manifestData,HX_("rootPath",e7,b8,88,e1))) {
HXLINE( 110)			manifest->rootPath = ( (::String)(manifestData->__Field(HX_("rootPath",e7,b8,88,e1),::hx::paccDynamic)) );
            		}
HXLINE( 113)		bool _hx_tmp1;
HXDLIN( 113)		if (::hx::IsNotNull( rootPath )) {
HXLINE( 113)			_hx_tmp1 = (rootPath != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 113)			_hx_tmp1 = false;
            		}
HXDLIN( 113)		if (_hx_tmp1) {
HXLINE( 115)			bool _hx_tmp;
HXDLIN( 115)			if (::hx::IsNotNull( manifest->rootPath )) {
HXLINE( 115)				_hx_tmp = (manifest->rootPath == HX_("",00,00,00,00));
            			}
            			else {
HXLINE( 115)				_hx_tmp = true;
            			}
HXDLIN( 115)			if (_hx_tmp) {
HXLINE( 117)				manifest->rootPath = rootPath;
            			}
            			else {
HXLINE( 121)				manifest->rootPath = ((rootPath + HX_("/",2f,00,00,00)) + manifest->rootPath);
            			}
            		}
HXLINE( 125)		return manifest;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetManifest_obj,parse,return )

::String AssetManifest_obj::_hx___resolvePath(::String path){
            	HX_STACKFRAME(&_hx_pos_8a07fa6861abdf37_149___resolvePath)
            	HX_STACK_ARG(path,"path")
HXLINE( 149)
HXLINE( 150)		if (::hx::IsNull( path )) {
HXLINE( 150)			return null();
            		}
HXLINE( 152)		HX_VARI( int,queryIndex) = path.indexOf(HX_("?",3f,00,00,00),null());
HXLINE( 153)		HX_VAR( ::String,basePath);
HXLINE( 155)		if ((queryIndex > -1)) {
HXLINE( 157)			basePath = path.substr(0,queryIndex);
            		}
            		else {
HXLINE( 161)			basePath = path;
            		}
HXLINE( 164)		basePath = ::StringTools_obj::replace(basePath,HX_("\\",5c,00,00,00),HX_("/",2f,00,00,00));
HXLINE( 166)		while(::StringTools_obj::endsWith(basePath,HX_("/",2f,00,00,00))){
HXLINE( 168)			basePath = basePath.substr(0,(basePath.length - 1));
            		}
HXLINE( 171)		if (::StringTools_obj::endsWith(basePath,HX_(".bundle",30,4a,b8,4e))) {
HXLINE( 173)			if ((queryIndex > -1)) {
HXLINE( 175)				return ((basePath + HX_("/library.json",2a,a7,07,47)) + path.substr(queryIndex,null()));
            			}
            			else {
HXLINE( 179)				return (basePath + HX_("/library.json",2a,a7,07,47));
            			}
            		}
            		else {
HXLINE( 184)			return path;
            		}
HXLINE( 171)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetManifest_obj,_hx___resolvePath,return )

::String AssetManifest_obj::_hx___resolveRootPath(::String rootPath,::String path){
            	HX_STACKFRAME(&_hx_pos_8a07fa6861abdf37_189___resolveRootPath)
            	HX_STACK_ARG(rootPath,"rootPath")
            	HX_STACK_ARG(path,"path")
HXLINE( 189)
HXLINE( 190)		if (::hx::IsNotNull( rootPath )) {
HXLINE( 190)			return rootPath;
            		}
HXLINE( 192)		HX_VARI( int,queryIndex) = path.indexOf(HX_("?",3f,00,00,00),null());
HXLINE( 194)		if ((queryIndex > -1)) {
HXLINE( 196)			rootPath = path.substr(0,queryIndex);
            		}
            		else {
HXLINE( 200)			rootPath = path;
            		}
HXLINE( 203)		rootPath = ::StringTools_obj::replace(rootPath,HX_("\\",5c,00,00,00),HX_("/",2f,00,00,00));
HXLINE( 205)		while(::StringTools_obj::endsWith(rootPath,HX_("/",2f,00,00,00))){
HXLINE( 207)			if ((rootPath == HX_("/",2f,00,00,00))) {
HXLINE( 207)				return rootPath;
            			}
HXLINE( 208)			rootPath = rootPath.substr(0,(rootPath.length - 1));
            		}
HXLINE( 211)		if (::StringTools_obj::endsWith(rootPath,HX_(".bundle",30,4a,b8,4e))) {
HXLINE( 213)			return rootPath;
            		}
            		else {
HXLINE( 217)			return ::haxe::io::Path_obj::directory(rootPath);
            		}
HXLINE( 211)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetManifest_obj,_hx___resolveRootPath,return )


::hx::ObjectPtr< AssetManifest_obj > AssetManifest_obj::__new() {
	::hx::ObjectPtr< AssetManifest_obj > __this = new AssetManifest_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< AssetManifest_obj > AssetManifest_obj::__alloc(::hx::Ctx *_hx_ctx) {
	AssetManifest_obj *__this = (AssetManifest_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AssetManifest_obj), true, "lime.utils.AssetManifest"));
	*(void **)__this = AssetManifest_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AssetManifest_obj::AssetManifest_obj()
{
}

void AssetManifest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetManifest);
	HX_MARK_MEMBER_NAME(assets,"assets");
	HX_MARK_MEMBER_NAME(libraryArgs,"libraryArgs");
	HX_MARK_MEMBER_NAME(libraryType,"libraryType");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(rootPath,"rootPath");
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_END_CLASS();
}

void AssetManifest_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(assets,"assets");
	HX_VISIT_MEMBER_NAME(libraryArgs,"libraryArgs");
	HX_VISIT_MEMBER_NAME(libraryType,"libraryType");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(rootPath,"rootPath");
	HX_VISIT_MEMBER_NAME(version,"version");
}

::hx::Val AssetManifest_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"assets") ) { return ::hx::Val( assets ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return ::hx::Val( version ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rootPath") ) { return ::hx::Val( rootPath ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"serialize") ) { return ::hx::Val( serialize_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"libraryArgs") ) { return ::hx::Val( libraryArgs ); }
		if (HX_FIELD_EQ(inName,"libraryType") ) { return ::hx::Val( libraryType ); }
	}
	return super::__Field(inName,inCallProp);
}

bool AssetManifest_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
		break;
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
		if (HX_FIELD_EQ(inName,"__resolvePath") ) { outValue = _hx___resolvePath_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__resolveRootPath") ) { outValue = _hx___resolveRootPath_dyn(); return true; }
	}
	return false;
}

::hx::Val AssetManifest_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"assets") ) { assets=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rootPath") ) { rootPath=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"libraryArgs") ) { libraryArgs=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"libraryType") ) { libraryType=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetManifest_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("assets",83,48,03,4c));
	outFields->push(HX_("libraryArgs",f8,79,5c,a2));
	outFields->push(HX_("libraryType",55,df,f0,ae));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("rootPath",e7,b8,88,e1));
	outFields->push(HX_("version",18,e7,f1,7c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AssetManifest_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(AssetManifest_obj,assets),HX_("assets",83,48,03,4c)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(AssetManifest_obj,libraryArgs),HX_("libraryArgs",f8,79,5c,a2)},
	{::hx::fsString,(int)offsetof(AssetManifest_obj,libraryType),HX_("libraryType",55,df,f0,ae)},
	{::hx::fsString,(int)offsetof(AssetManifest_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsString,(int)offsetof(AssetManifest_obj,rootPath),HX_("rootPath",e7,b8,88,e1)},
	{::hx::fsInt,(int)offsetof(AssetManifest_obj,version),HX_("version",18,e7,f1,7c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AssetManifest_obj_sStaticStorageInfo = 0;
#endif

static ::String AssetManifest_obj_sMemberFields[] = {
	HX_("assets",83,48,03,4c),
	HX_("libraryArgs",f8,79,5c,a2),
	HX_("libraryType",55,df,f0,ae),
	HX_("name",4b,72,ff,48),
	HX_("rootPath",e7,b8,88,e1),
	HX_("version",18,e7,f1,7c),
	HX_("serialize",e0,5d,f2,f4),
	::String(null()) };

::hx::Class AssetManifest_obj::__mClass;

static ::String AssetManifest_obj_sStaticFields[] = {
	HX_("fromBytes",a1,f2,20,72),
	HX_("fromFile",06,9d,87,a1),
	HX_("loadFromBytes",9b,c3,86,f4),
	HX_("loadFromFile",4c,89,f0,5a),
	HX_("parse",33,90,55,bd),
	HX_("__resolvePath",91,4b,05,2e),
	HX_("__resolveRootPath",d3,84,e3,75),
	::String(null())
};

void AssetManifest_obj::__register()
{
	AssetManifest_obj _hx_dummy;
	AssetManifest_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.utils.AssetManifest",c9,2e,b9,dc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AssetManifest_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AssetManifest_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AssetManifest_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AssetManifest_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AssetManifest_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AssetManifest_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace utils
