#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Void
#include <lime/app/_Event_Int_Void.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_net_NetConnection
#include <openfl/net/NetConnection.h>
#endif
#ifndef INCLUDED_openfl_net_SharedObject
#include <openfl/net/SharedObject.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_Lib
#include <openfl/utils/_internal/Lib.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_io_FileOutput
#include <sys/io/FileOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1b14c676d7ad0011_305_new,"openfl.net.SharedObject","new",0x9a737b25,"openfl.net.SharedObject.new","openfl/net/SharedObject.hx",305,0x31b7bda9)
HX_LOCAL_STACK_FRAME(_hx_pos_1b14c676d7ad0011_325_clear,"openfl.net.SharedObject","clear",0x69cf1792,"openfl.net.SharedObject.clear","openfl/net/SharedObject.hx",325,0x31b7bda9)
HX_LOCAL_STACK_FRAME(_hx_pos_1b14c676d7ad0011_357_close,"openfl.net.SharedObject","close",0x69d6bdbd,"openfl.net.SharedObject.close","openfl/net/SharedObject.hx",357,0x31b7bda9)
HX_LOCAL_STACK_FRAME(_hx_pos_1b14c676d7ad0011_392_connect,"openfl.net.SharedObject","connect",0x37ad2d2f,"openfl.net.SharedObject.connect","openfl/net/SharedObject.hx",392,0x31b7bda9)
HX_LOCAL_STACK_FRAME(_hx_pos_1b14c676d7ad0011_455_flush,"openfl.net.SharedObject","flush",0x240f08c9,"openfl.net.SharedObject.flush","openfl/net/SharedObject.hx",455,0x31b7bda9)
HX_LOCAL_STACK_FRAME(_hx_pos_1b14c676d7ad0011_824_send,"openfl.net.SharedObject","send",0x8de64ee3,"openfl.net.SharedObject.send","openfl/net/SharedObject.hx",824,0x31b7bda9)
HX_LOCAL_STACK_FRAME(_hx_pos_1b14c676d7ad0011_844_setDirty,"openfl.net.SharedObject","setDirty",0xad2ae42b,"openfl.net.SharedObject.setDirty","openfl/net/SharedObject.hx",844,0x31b7bda9)
HX_LOCAL_STACK_FRAME(_hx_pos_1b14c676d7ad0011_872_setProperty,"openfl.net.SharedObject","setProperty",0xd13889dc,"openfl.net.SharedObject.setProperty","openfl/net/SharedObject.hx",872,0x31b7bda9)
HX_LOCAL_STACK_FRAME(_hx_pos_1b14c676d7ad0011_1010_get_size,"openfl.net.SharedObject","get_size",0x91348765,"openfl.net.SharedObject.get_size","openfl/net/SharedObject.hx",1010,0x31b7bda9)
HX_LOCAL_STACK_FRAME(_hx_pos_1b14c676d7ad0011_641_getLocal,"openfl.net.SharedObject","getLocal",0x9dee0410,"openfl.net.SharedObject.getLocal","openfl/net/SharedObject.hx",641,0x31b7bda9)
static const ::String _hx_array_data_0aac04b3_11[] = {
	HX_(" ",20,00,00,00),HX_("~",7e,00,00,00),HX_("%",25,00,00,00),HX_("&",26,00,00,00),HX_("\\",5c,00,00,00),HX_(";",3b,00,00,00),HX_(":",3a,00,00,00),HX_("\"",22,00,00,00),HX_("'",27,00,00,00),HX_(",",2c,00,00,00),HX_("<",3c,00,00,00),HX_(">",3e,00,00,00),HX_("?",3f,00,00,00),HX_("#",23,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_1b14c676d7ad0011_807_getRemote,"openfl.net.SharedObject","getRemote",0x3d1eb041,"openfl.net.SharedObject.getRemote","openfl/net/SharedObject.hx",807,0x31b7bda9)
HX_LOCAL_STACK_FRAME(_hx_pos_1b14c676d7ad0011_879___getPath,"openfl.net.SharedObject","__getPath",0x5a6272c0,"openfl.net.SharedObject.__getPath","openfl/net/SharedObject.hx",879,0x31b7bda9)
HX_LOCAL_STACK_FRAME(_hx_pos_1b14c676d7ad0011_916___mkdir,"openfl.net.SharedObject","__mkdir",0x963e96d4,"openfl.net.SharedObject.__mkdir","openfl/net/SharedObject.hx",916,0x31b7bda9)
HX_LOCAL_STACK_FRAME(_hx_pos_1b14c676d7ad0011_964___resolveClass,"openfl.net.SharedObject","__resolveClass",0x44fa3227,"openfl.net.SharedObject.__resolveClass","openfl/net/SharedObject.hx",964,0x31b7bda9)
HX_LOCAL_STACK_FRAME(_hx_pos_1b14c676d7ad0011_1001_application_onExit,"openfl.net.SharedObject","application_onExit",0x83beab07,"openfl.net.SharedObject.application_onExit","openfl/net/SharedObject.hx",1001,0x31b7bda9)
HX_LOCAL_STACK_FRAME(_hx_pos_1b14c676d7ad0011_192_boot,"openfl.net.SharedObject","boot",0x82b145cd,"openfl.net.SharedObject.boot","openfl/net/SharedObject.hx",192,0x31b7bda9)
namespace openfl{
namespace net{

void SharedObject_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_1b14c676d7ad0011_305_new)
            	HX_STACK_THIS(this)
HXLINE( 305)
HXLINE( 306)		super::__construct(null());
HXLINE( 308)		this->client = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 309)		this->objectEncoding = ::openfl::net::SharedObject_obj::defaultObjectEncoding;
            	}

Dynamic SharedObject_obj::__CreateEmpty() { return new SharedObject_obj; }

void *SharedObject_obj::_hx_vtable = 0;

Dynamic SharedObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SharedObject_obj > _hx_result = new SharedObject_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SharedObject_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x39ea9431;
	}
}

void SharedObject_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_1b14c676d7ad0011_325_clear)
            	HX_STACK_THIS(this)
HXLINE( 325)
HXLINE( 326)		this->data =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE( 328)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 338)			HX_VARI( ::String,path) = ::openfl::net::SharedObject_obj::_hx___getPath(this->_hx___localPath,this->_hx___name);
HXLINE( 340)			if (::sys::FileSystem_obj::exists(path)) {
HXLINE( 342)				::sys::FileSystem_obj::deleteFile(path);
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 346)				{
HXLINE( 346)					null();
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SharedObject_obj,clear,(void))

void SharedObject_obj::close(){
            	HX_STACKFRAME(&_hx_pos_1b14c676d7ad0011_357_close)
            	HX_STACK_THIS(this)
HXLINE( 357)
            	}


HX_DEFINE_DYNAMIC_FUNC0(SharedObject_obj,close,(void))

void SharedObject_obj::connect( ::openfl::net::NetConnection myConnection,::String params){
            	HX_STACKFRAME(&_hx_pos_1b14c676d7ad0011_392_connect)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(myConnection,"myConnection")
            	HX_STACK_ARG(params,"params")
HXLINE( 392)
HXDLIN( 392)		::openfl::utils::_internal::Lib_obj::notImplemented(::hx::SourceInfo(HX_("openfl/net/SharedObject.hx",a9,bd,b7,31),392,HX_("openfl.net.SharedObject",b3,04,ac,0a),HX_("connect",ea,3b,80,15)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(SharedObject_obj,connect,(void))

 ::Dynamic SharedObject_obj::flush(::hx::Null< int >  __o_minDiskSpace){
            		int minDiskSpace = __o_minDiskSpace.Default(0);
            	HX_STACKFRAME(&_hx_pos_1b14c676d7ad0011_455_flush)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(minDiskSpace,"minDiskSpace")
HXLINE( 455)
HXLINE( 456)		if ((::Reflect_obj::fields(this->data)->length == 0)) {
HXLINE( 458)			return 0;
            		}
HXLINE( 461)		HX_VARI( ::String,encodedData) = ::haxe::Serializer_obj::run(this->data);
HXLINE( 463)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 474)			HX_VARI( ::String,path) = ::openfl::net::SharedObject_obj::_hx___getPath(this->_hx___localPath,this->_hx___name);
HXLINE( 475)			HX_VARI( ::String,directory) = ::haxe::io::Path_obj::directory(path);
HXLINE( 477)			if (!(::sys::FileSystem_obj::exists(directory))) {
HXLINE( 479)				::openfl::net::SharedObject_obj::_hx___mkdir(directory);
            			}
HXLINE( 482)			HX_VARI(  ::sys::io::FileOutput,output) = ::sys::io::File_obj::write(path,false);
HXLINE( 483)			output->writeString(encodedData,null());
HXLINE( 484)			output->close();
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 487)				{
HXLINE( 487)					null();
            				}
HXLINE( 489)				return 1;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 492)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SharedObject_obj,flush,return )

void SharedObject_obj::send(::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_1b14c676d7ad0011_824_send)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(args,"args")
HXLINE( 824)
HXDLIN( 824)		::openfl::utils::_internal::Lib_obj::notImplemented(::hx::SourceInfo(HX_("openfl/net/SharedObject.hx",a9,bd,b7,31),824,HX_("openfl.net.SharedObject",b3,04,ac,0a),HX_("send",48,8d,50,4c)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(SharedObject_obj,send,(void))

void SharedObject_obj::setDirty(::String propertyName){
            	HX_STACKFRAME(&_hx_pos_1b14c676d7ad0011_844_setDirty)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(propertyName,"propertyName")
HXLINE( 844)
            	}


HX_DEFINE_DYNAMIC_FUNC1(SharedObject_obj,setDirty,(void))

void SharedObject_obj::setProperty(::String propertyName, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_1b14c676d7ad0011_872_setProperty)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(propertyName,"propertyName")
            	HX_STACK_ARG(value,"value")
HXLINE( 872)
HXDLIN( 872)		if (::hx::IsNotNull( this->data )) {
HXLINE( 874)			::Reflect_obj::setField(this->data,propertyName,value);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(SharedObject_obj,setProperty,(void))

int SharedObject_obj::get_size(){
            	HX_STACKFRAME(&_hx_pos_1b14c676d7ad0011_1010_get_size)
            	HX_STACK_THIS(this)
HXLINE(1010)
HXDLIN(1010)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(1012)			HX_VARI( ::String,d) = ::haxe::Serializer_obj::run(this->data);
HXLINE(1013)			return ::haxe::io::Bytes_obj::ofString(d,null())->length;
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(1015)				{
HXLINE(1015)					null();
            				}
HXLINE(1017)				return 0;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(1010)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SharedObject_obj,get_size,return )

int SharedObject_obj::defaultObjectEncoding;

 ::haxe::ds::StringMap SharedObject_obj::_hx___sharedObjects;

 ::openfl::net::SharedObject SharedObject_obj::getLocal(::String name,::String localPath,::hx::Null< bool >  __o_secure){
            		bool secure = __o_secure.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_1b14c676d7ad0011_641_getLocal)
            	HX_STACK_ARG(name,"name")
            	HX_STACK_ARG(localPath,"localPath")
            	HX_STACK_ARG(secure,"secure")
HXLINE( 641)
HXLINE( 642)		HX_VARI( ::Array< ::String >,illegalValues) = ::Array_obj< ::String >::fromData( _hx_array_data_0aac04b3_11,14);
HXLINE( 643)		HX_VARI( bool,allowed) = true;
HXLINE( 645)		bool _hx_tmp;
HXDLIN( 645)		if (::hx::IsNotNull( name )) {
HXLINE( 645)			_hx_tmp = (name == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 645)			_hx_tmp = true;
            		}
HXDLIN( 645)		if (_hx_tmp) {
HXLINE( 647)			allowed = false;
            		}
            		else {
HXLINE( 651)			int _g = 0;
HXDLIN( 651)			while((_g < illegalValues->length)){
HXLINE( 651)				HX_VARI( ::String,value) = illegalValues->__get(_g);
HXDLIN( 651)				_g = (_g + 1);
HXLINE( 653)				if ((name.indexOf(value,null()) > -1)) {
HXLINE( 655)					allowed = false;
HXLINE( 656)					goto _hx_goto_9;
            				}
            			}
            			_hx_goto_9:;
            		}
HXLINE( 661)		if (!(allowed)) {
HXLINE( 663)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("Error #2134: Cannot create SharedObject.",32,71,4f,04),null())));
            		}
HXLINE( 667)		if (::hx::IsNull( ::openfl::net::SharedObject_obj::_hx___sharedObjects )) {
HXLINE( 669)			::openfl::net::SharedObject_obj::_hx___sharedObjects =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 672)			if (::hx::IsNotNull( ::lime::app::Application_obj::current )) {
HXLINE( 674)				::lime::app::Application_obj::current->onExit->add(::openfl::net::SharedObject_obj::application_onExit_dyn(),null(),null());
            			}
            		}
HXLINE( 679)		HX_VARI( ::String,id) = ((localPath + HX_("/",2f,00,00,00)) + name);
HXLINE( 681)		if (!(::openfl::net::SharedObject_obj::_hx___sharedObjects->exists(id))) {
HXLINE( 683)			HX_VARI( ::String,encodedData) = null();
HXLINE( 685)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 707)				if (::hx::IsNull( localPath )) {
HXLINE( 707)					localPath = HX_("",00,00,00,00);
            				}
HXLINE( 709)				HX_VARI( ::String,path) = ::openfl::net::SharedObject_obj::_hx___getPath(localPath,name);
HXLINE( 711)				if (::sys::FileSystem_obj::exists(path)) {
HXLINE( 713)					encodedData = ::sys::io::File_obj::getContent(path);
            				}
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 717)					{
HXLINE( 717)						null();
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXLINE( 719)			HX_VARI(  ::openfl::net::SharedObject,sharedObject) =  ::openfl::net::SharedObject_obj::__alloc( HX_CTX );
HXLINE( 720)			sharedObject->data =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE( 721)			sharedObject->_hx___localPath = localPath;
HXLINE( 722)			sharedObject->_hx___name = name;
HXLINE( 724)			bool _hx_tmp;
HXDLIN( 724)			if (::hx::IsNotNull( encodedData )) {
HXLINE( 724)				_hx_tmp = (encodedData != HX_("",00,00,00,00));
            			}
            			else {
HXLINE( 724)				_hx_tmp = false;
            			}
HXDLIN( 724)			if (_hx_tmp) {
HXLINE( 726)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 728)					HX_VARI(  ::haxe::Unserializer,unserializer) =  ::haxe::Unserializer_obj::__alloc( HX_CTX ,encodedData);
HXLINE( 729)					unserializer->setResolver( ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("resolveClass",ac,bd,dd,80),::openfl::net::SharedObject_obj::_hx___resolveClass_dyn())
            						->setFixed(1,HX_("resolveEnum",0d,90,51,de),::Type_obj::resolveEnum_dyn())));
HXLINE( 730)					sharedObject->data = unserializer->unserialize();
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 732)						{
HXLINE( 732)							null();
            						}
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
            			}
HXLINE( 735)			::openfl::net::SharedObject_obj::_hx___sharedObjects->set(id,sharedObject);
            		}
HXLINE( 738)		return ( ( ::openfl::net::SharedObject)(::openfl::net::SharedObject_obj::_hx___sharedObjects->get(id)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SharedObject_obj,getLocal,return )

 ::openfl::net::SharedObject SharedObject_obj::getRemote(::String name,::String remotePath, ::Dynamic __o_persistence,::hx::Null< bool >  __o_secure){
            		 ::Dynamic persistence = __o_persistence;
            		if (::hx::IsNull(__o_persistence)) persistence = false;
            		bool secure = __o_secure.Default(false);
            	HX_STACKFRAME(&_hx_pos_1b14c676d7ad0011_807_getRemote)
            	HX_STACK_ARG(name,"name")
            	HX_STACK_ARG(remotePath,"remotePath")
            	HX_STACK_ARG(persistence,"persistence")
            	HX_STACK_ARG(secure,"secure")
HXLINE( 807)
HXLINE( 808)		::openfl::utils::_internal::Lib_obj::notImplemented(::hx::SourceInfo(HX_("openfl/net/SharedObject.hx",a9,bd,b7,31),808,HX_("openfl.net.SharedObject",b3,04,ac,0a),HX_("getRemote",bc,23,df,80)));
HXLINE( 810)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(SharedObject_obj,getRemote,return )

::String SharedObject_obj::_hx___getPath(::String localPath,::String name){
            	HX_STACKFRAME(&_hx_pos_1b14c676d7ad0011_879___getPath)
            	HX_STACK_ARG(localPath,"localPath")
            	HX_STACK_ARG(name,"name")
HXLINE( 879)
HXLINE( 881)		HX_VARI( ::String,path) = (((::lime::_hx_system::System_obj::get_applicationStorageDirectory() + HX_("/",2f,00,00,00)) + localPath) + HX_("/",2f,00,00,00));
HXLINE( 883)		name = ::StringTools_obj::replace(name,HX_("//",20,29,00,00),HX_("/",2f,00,00,00));
HXLINE( 884)		name = ::StringTools_obj::replace(name,HX_("//",20,29,00,00),HX_("/",2f,00,00,00));
HXLINE( 886)		if (::StringTools_obj::startsWith(name,HX_("/",2f,00,00,00))) {
HXLINE( 888)			name = name.substr(1,null());
            		}
HXLINE( 891)		if (::StringTools_obj::endsWith(name,HX_("/",2f,00,00,00))) {
HXLINE( 893)			name = name.substring(0,(name.length - 1));
            		}
HXLINE( 896)		if ((name.indexOf(HX_("/",2f,00,00,00),null()) > -1)) {
HXLINE( 898)			HX_VARI( ::Array< ::String >,split) = name.split(HX_("/",2f,00,00,00));
HXLINE( 899)			name = HX_("",00,00,00,00);
HXLINE( 901)			{
HXLINE( 901)				int _g = 0;
HXDLIN( 901)				int _g1 = (split->length - 1);
HXDLIN( 901)				while((_g < _g1)){
HXLINE( 901)					_g = (_g + 1);
HXDLIN( 901)					HX_VARI( int,i) = (_g - 1);
HXLINE( 903)					name = (name + ((HX_("#",23,00,00,00) + split->__get(i)) + HX_("/",2f,00,00,00)));
            				}
            			}
HXLINE( 906)			name = (name + split->__get((split->length - 1)));
            		}
HXLINE( 909)		return ((path + name) + HX_(".sol",e2,74,bf,1e));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SharedObject_obj,_hx___getPath,return )

void SharedObject_obj::_hx___mkdir(::String directory){
            	HX_STACKFRAME(&_hx_pos_1b14c676d7ad0011_916___mkdir)
            	HX_STACK_ARG(directory,"directory")
HXLINE( 916)
HXLINE( 920)		directory = ::StringTools_obj::replace(directory,HX_("\\",5c,00,00,00),HX_("/",2f,00,00,00));
HXLINE( 921)		HX_VARI( ::String,total) = HX_("",00,00,00,00);
HXLINE( 923)		if ((directory.substr(0,1) == HX_("/",2f,00,00,00))) {
HXLINE( 925)			total = HX_("/",2f,00,00,00);
            		}
HXLINE( 928)		HX_VARI( ::Array< ::String >,parts) = directory.split(HX_("/",2f,00,00,00));
HXLINE( 929)		HX_VARI( ::String,oldPath) = HX_("",00,00,00,00);
HXLINE( 931)		bool _hx_tmp;
HXDLIN( 931)		if ((parts->length > 0)) {
HXLINE( 931)			_hx_tmp = (parts->__get(0).indexOf(HX_(":",3a,00,00,00),null()) > -1);
            		}
            		else {
HXLINE( 931)			_hx_tmp = false;
            		}
HXDLIN( 931)		if (_hx_tmp) {
HXLINE( 933)			oldPath = ::Sys_obj::getCwd();
HXLINE( 934)			::Sys_obj::setCwd((parts->__get(0) + HX_("\\",5c,00,00,00)));
HXLINE( 935)			parts->shift();
            		}
HXLINE( 938)		{
HXLINE( 938)			int _g = 0;
HXDLIN( 938)			while((_g < parts->length)){
HXLINE( 938)				HX_VARI( ::String,part) = parts->__get(_g);
HXDLIN( 938)				_g = (_g + 1);
HXLINE( 940)				bool _hx_tmp;
HXDLIN( 940)				if ((part != HX_(".",2e,00,00,00))) {
HXLINE( 940)					_hx_tmp = (part != HX_("",00,00,00,00));
            				}
            				else {
HXLINE( 940)					_hx_tmp = false;
            				}
HXDLIN( 940)				if (_hx_tmp) {
HXLINE( 942)					bool _hx_tmp;
HXDLIN( 942)					if ((total != HX_("",00,00,00,00))) {
HXLINE( 942)						_hx_tmp = (total != HX_("/",2f,00,00,00));
            					}
            					else {
HXLINE( 942)						_hx_tmp = false;
            					}
HXDLIN( 942)					if (_hx_tmp) {
HXLINE( 944)						total = (total + HX_("/",2f,00,00,00));
            					}
HXLINE( 947)					total = (total + part);
HXLINE( 949)					if (!(::sys::FileSystem_obj::exists(total))) {
HXLINE( 951)						::sys::FileSystem_obj::createDirectory(total);
            					}
            				}
            			}
            		}
HXLINE( 956)		if ((oldPath != HX_("",00,00,00,00))) {
HXLINE( 958)			::Sys_obj::setCwd(oldPath);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SharedObject_obj,_hx___mkdir,(void))

::hx::Class SharedObject_obj::_hx___resolveClass(::String name){
            	HX_STACKFRAME(&_hx_pos_1b14c676d7ad0011_964___resolveClass)
            	HX_STACK_ARG(name,"name")
HXLINE( 964)
HXLINE( 965)		if (::hx::IsNotNull( name )) {
HXLINE( 967)			if (::StringTools_obj::startsWith(name,HX_("neash.",ef,97,2f,63))) {
HXLINE( 969)				name = ::StringTools_obj::replace(name,HX_("neash.",ef,97,2f,63),HX_("openfl.",9e,ba,42,40));
            			}
HXLINE( 972)			if (::StringTools_obj::startsWith(name,HX_("native.",b7,9a,13,b7))) {
HXLINE( 974)				name = ::StringTools_obj::replace(name,HX_("native.",b7,9a,13,b7),HX_("openfl.",9e,ba,42,40));
            			}
HXLINE( 977)			if (::StringTools_obj::startsWith(name,HX_("flash.",7e,c4,22,38))) {
HXLINE( 979)				name = ::StringTools_obj::replace(name,HX_("flash.",7e,c4,22,38),HX_("openfl.",9e,ba,42,40));
            			}
HXLINE( 982)			if (::StringTools_obj::startsWith(name,HX_("openfl._v2.",51,5c,9c,49))) {
HXLINE( 984)				name = ::StringTools_obj::replace(name,HX_("openfl._v2.",51,5c,9c,49),HX_("openfl.",9e,ba,42,40));
            			}
HXLINE( 987)			if (::StringTools_obj::startsWith(name,HX_("openfl._legacy.",e4,67,0c,9f))) {
HXLINE( 989)				name = ::StringTools_obj::replace(name,HX_("openfl._legacy.",e4,67,0c,9f),HX_("openfl.",9e,ba,42,40));
            			}
HXLINE( 992)			return ::Type_obj::resolveClass(name);
            		}
HXLINE( 995)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SharedObject_obj,_hx___resolveClass,return )

void SharedObject_obj::application_onExit(int _){
            	HX_STACKFRAME(&_hx_pos_1b14c676d7ad0011_1001_application_onExit)
            	HX_STACK_ARG(_,"_")
HXLINE(1001)
HXDLIN(1001)		HX_VARI(  ::Dynamic,sharedObject) = ::openfl::net::SharedObject_obj::_hx___sharedObjects->iterator();
HXDLIN(1001)		while(( (bool)(sharedObject->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN(1001)			HX_VARI(  ::openfl::net::SharedObject,sharedObject1) = ( ( ::openfl::net::SharedObject)(sharedObject->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(1003)			sharedObject1->flush(null());
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SharedObject_obj,application_onExit,(void))


::hx::ObjectPtr< SharedObject_obj > SharedObject_obj::__new() {
	::hx::ObjectPtr< SharedObject_obj > __this = new SharedObject_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< SharedObject_obj > SharedObject_obj::__alloc(::hx::Ctx *_hx_ctx) {
	SharedObject_obj *__this = (SharedObject_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SharedObject_obj), true, "openfl.net.SharedObject"));
	*(void **)__this = SharedObject_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SharedObject_obj::SharedObject_obj()
{
}

void SharedObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SharedObject);
	HX_MARK_MEMBER_NAME(client,"client");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(fps,"fps");
	HX_MARK_MEMBER_NAME(objectEncoding,"objectEncoding");
	HX_MARK_MEMBER_NAME(_hx___localPath,"__localPath");
	HX_MARK_MEMBER_NAME(_hx___name,"__name");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SharedObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(client,"client");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(fps,"fps");
	HX_VISIT_MEMBER_NAME(objectEncoding,"objectEncoding");
	HX_VISIT_MEMBER_NAME(_hx___localPath,"__localPath");
	HX_VISIT_MEMBER_NAME(_hx___name,"__name");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SharedObject_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"fps") ) { return ::hx::Val( fps ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_size() ); }
		if (HX_FIELD_EQ(inName,"send") ) { return ::hx::Val( send_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		if (HX_FIELD_EQ(inName,"close") ) { return ::hx::Val( close_dyn() ); }
		if (HX_FIELD_EQ(inName,"flush") ) { return ::hx::Val( flush_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"client") ) { return ::hx::Val( client ); }
		if (HX_FIELD_EQ(inName,"__name") ) { return ::hx::Val( _hx___name ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"connect") ) { return ::hx::Val( connect_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setDirty") ) { return ::hx::Val( setDirty_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return ::hx::Val( get_size_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__localPath") ) { return ::hx::Val( _hx___localPath ); }
		if (HX_FIELD_EQ(inName,"setProperty") ) { return ::hx::Val( setProperty_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"objectEncoding") ) { return ::hx::Val( objectEncoding ); }
	}
	return super::__Field(inName,inCallProp);
}

bool SharedObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__mkdir") ) { outValue = _hx___mkdir_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getLocal") ) { outValue = getLocal_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getRemote") ) { outValue = getRemote_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__getPath") ) { outValue = _hx___getPath_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__resolveClass") ) { outValue = _hx___resolveClass_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__sharedObjects") ) { outValue = ( _hx___sharedObjects ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"application_onExit") ) { outValue = application_onExit_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"defaultObjectEncoding") ) { outValue = ( defaultObjectEncoding ); return true; }
	}
	return false;
}

::hx::Val SharedObject_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"fps") ) { fps=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"client") ) { client=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__name") ) { _hx___name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__localPath") ) { _hx___localPath=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"objectEncoding") ) { objectEncoding=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SharedObject_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"__sharedObjects") ) { _hx___sharedObjects=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"defaultObjectEncoding") ) { defaultObjectEncoding=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void SharedObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("client",4b,ca,4f,0a));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("fps",e9,c7,4d,00));
	outFields->push(HX_("objectEncoding",b2,1e,15,2a));
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("__localPath",90,b5,c0,3a));
	outFields->push(HX_("__name",6b,d5,f7,f7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SharedObject_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(SharedObject_obj,client),HX_("client",4b,ca,4f,0a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(SharedObject_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsFloat,(int)offsetof(SharedObject_obj,fps),HX_("fps",e9,c7,4d,00)},
	{::hx::fsInt,(int)offsetof(SharedObject_obj,objectEncoding),HX_("objectEncoding",b2,1e,15,2a)},
	{::hx::fsString,(int)offsetof(SharedObject_obj,_hx___localPath),HX_("__localPath",90,b5,c0,3a)},
	{::hx::fsString,(int)offsetof(SharedObject_obj,_hx___name),HX_("__name",6b,d5,f7,f7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo SharedObject_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &SharedObject_obj::defaultObjectEncoding,HX_("defaultObjectEncoding",53,fb,eb,ff)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &SharedObject_obj::_hx___sharedObjects,HX_("__sharedObjects",8f,b9,f2,e8)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String SharedObject_obj_sMemberFields[] = {
	HX_("client",4b,ca,4f,0a),
	HX_("data",2a,56,63,42),
	HX_("fps",e9,c7,4d,00),
	HX_("objectEncoding",b2,1e,15,2a),
	HX_("__localPath",90,b5,c0,3a),
	HX_("__name",6b,d5,f7,f7),
	HX_("clear",8d,71,5b,48),
	HX_("close",b8,17,63,48),
	HX_("connect",ea,3b,80,15),
	HX_("flush",c4,62,9b,02),
	HX_("send",48,8d,50,4c),
	HX_("setDirty",10,b9,04,e8),
	HX_("setProperty",17,12,99,dc),
	HX_("get_size",4a,5c,0e,cc),
	::String(null()) };

static void SharedObject_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SharedObject_obj::defaultObjectEncoding,"defaultObjectEncoding");
	HX_MARK_MEMBER_NAME(SharedObject_obj::_hx___sharedObjects,"__sharedObjects");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SharedObject_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SharedObject_obj::defaultObjectEncoding,"defaultObjectEncoding");
	HX_VISIT_MEMBER_NAME(SharedObject_obj::_hx___sharedObjects,"__sharedObjects");
};

#endif

::hx::Class SharedObject_obj::__mClass;

static ::String SharedObject_obj_sStaticFields[] = {
	HX_("defaultObjectEncoding",53,fb,eb,ff),
	HX_("__sharedObjects",8f,b9,f2,e8),
	HX_("getLocal",f5,d8,c7,d8),
	HX_("getRemote",bc,23,df,80),
	HX_("__getPath",3b,e6,22,9e),
	HX_("__mkdir",8f,a5,11,74),
	HX_("__resolveClass",cc,40,9e,a1),
	HX_("application_onExit",2c,70,9f,9f),
	::String(null())
};

void SharedObject_obj::__register()
{
	SharedObject_obj _hx_dummy;
	SharedObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.net.SharedObject",b3,04,ac,0a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SharedObject_obj::__GetStatic;
	__mClass->mSetStaticField = &SharedObject_obj::__SetStatic;
	__mClass->mMarkFunc = SharedObject_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SharedObject_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SharedObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SharedObject_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SharedObject_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SharedObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SharedObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SharedObject_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_1b14c676d7ad0011_192_boot)
HXDLIN( 192)		defaultObjectEncoding = 10;
            	}
}

} // end namespace openfl
} // end namespace net
