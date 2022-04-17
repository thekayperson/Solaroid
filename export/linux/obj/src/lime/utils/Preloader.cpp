#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Int_Void
#include <lime/app/_Event_Int_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_lime_utils_Preloader
#include <lime/utils/Preloader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e07f6fac014e5fdd_31_new,"lime.utils.Preloader","new",0x2d829572,"lime.utils.Preloader.new","lime/utils/Preloader.hx",31,0xe721f000)
HX_LOCAL_STACK_FRAME(_hx_pos_e07f6fac014e5fdd_109_addLibrary,"lime.utils.Preloader","addLibrary",0x72ea3408,"lime.utils.Preloader.addLibrary","lime/utils/Preloader.hx",109,0xe721f000)
HX_LOCAL_STACK_FRAME(_hx_pos_e07f6fac014e5fdd_114_addLibraryName,"lime.utils.Preloader","addLibraryName",0xd5217673,"lime.utils.Preloader.addLibraryName","lime/utils/Preloader.hx",114,0xe721f000)
HX_LOCAL_STACK_FRAME(_hx_pos_e07f6fac014e5fdd_121_load,"lime.utils.Preloader","load",0xa37544d4,"lime.utils.Preloader.load","lime/utils/Preloader.hx",121,0xe721f000)
HX_LOCAL_STACK_FRAME(_hx_pos_e07f6fac014e5fdd_136_load,"lime.utils.Preloader","load",0xa37544d4,"lime.utils.Preloader.load","lime/utils/Preloader.hx",136,0xe721f000)
HX_LOCAL_STACK_FRAME(_hx_pos_e07f6fac014e5fdd_154_load,"lime.utils.Preloader","load",0xa37544d4,"lime.utils.Preloader.load","lime/utils/Preloader.hx",154,0xe721f000)
HX_LOCAL_STACK_FRAME(_hx_pos_e07f6fac014e5fdd_168_load,"lime.utils.Preloader","load",0xa37544d4,"lime.utils.Preloader.load","lime/utils/Preloader.hx",168,0xe721f000)
HX_LOCAL_STACK_FRAME(_hx_pos_e07f6fac014e5fdd_185_loadedAssetLibrary,"lime.utils.Preloader","loadedAssetLibrary",0x526bc9be,"lime.utils.Preloader.loadedAssetLibrary","lime/utils/Preloader.hx",185,0xe721f000)
HX_LOCAL_STACK_FRAME(_hx_pos_e07f6fac014e5fdd_206_start,"lime.utils.Preloader","start",0x6e4321f4,"lime.utils.Preloader.start","lime/utils/Preloader.hx",206,0xe721f000)
HX_LOCAL_STACK_FRAME(_hx_pos_e07f6fac014e5fdd_221_update,"lime.utils.Preloader","update",0x8d85b837,"lime.utils.Preloader.update","lime/utils/Preloader.hx",221,0xe721f000)
HX_LOCAL_STACK_FRAME(_hx_pos_e07f6fac014e5fdd_224_updateProgress,"lime.utils.Preloader","updateProgress",0x4fb7fb04,"lime.utils.Preloader.updateProgress","lime/utils/Preloader.hx",224,0xe721f000)
HX_LOCAL_STACK_FRAME(_hx_pos_e07f6fac014e5fdd_241_updateProgress,"lime.utils.Preloader","updateProgress",0x4fb7fb04,"lime.utils.Preloader.updateProgress","lime/utils/Preloader.hx",241,0xe721f000)
HX_LOCAL_STACK_FRAME(_hx_pos_e07f6fac014e5fdd_269_updateProgress,"lime.utils.Preloader","updateProgress",0x4fb7fb04,"lime.utils.Preloader.updateProgress","lime/utils/Preloader.hx",269,0xe721f000)
HX_LOCAL_STACK_FRAME(_hx_pos_e07f6fac014e5fdd_290_updateProgress,"lime.utils.Preloader","updateProgress",0x4fb7fb04,"lime.utils.Preloader.updateProgress","lime/utils/Preloader.hx",290,0xe721f000)
namespace lime{
namespace utils{

void Preloader_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_e07f6fac014e5fdd_31_new)
            	HX_STACK_THIS(this)
HXLINE(  31)
HXLINE(  41)		this->bytesTotalCache =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  39)		this->bytesLoadedCache2 =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  38)		this->bytesLoadedCache =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE(  35)		this->onProgress =  ::lime::app::_Event_Int_Int_Void_obj::__alloc( HX_CTX );
HXLINE(  34)		this->onComplete =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
HXLINE(  59)		this->bytesLoaded = 0;
HXLINE(  60)		this->bytesTotal = 0;
HXLINE(  61)		this->libraries = ::Array_obj< ::Dynamic>::__new();
HXLINE(  62)		this->libraryNames = ::Array_obj< ::String >::__new();
HXLINE(  64)		this->onProgress->add(this->update_dyn(),null(),null());
            	}

Dynamic Preloader_obj::__CreateEmpty() { return new Preloader_obj; }

void *Preloader_obj::_hx_vtable = 0;

Dynamic Preloader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Preloader_obj > _hx_result = new Preloader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Preloader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x773c4d3e;
}

void Preloader_obj::addLibrary( ::lime::utils::AssetLibrary library){
            	HX_STACKFRAME(&_hx_pos_e07f6fac014e5fdd_109_addLibrary)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(library,"library")
HXLINE( 109)
HXDLIN( 109)		this->libraries->push(library);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Preloader_obj,addLibrary,(void))

void Preloader_obj::addLibraryName(::String name){
            	HX_STACKFRAME(&_hx_pos_e07f6fac014e5fdd_114_addLibraryName)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(name,"name")
HXLINE( 114)
HXDLIN( 114)		if ((this->libraryNames->indexOf(name,null()) == -1)) {
HXLINE( 116)			this->libraryNames->push(name);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Preloader_obj,addLibraryName,(void))

void Preloader_obj::load(){
            	HX_STACKFRAME(&_hx_pos_e07f6fac014e5fdd_121_load)
            	HX_STACK_THIS(this)
HXLINE( 121)
HXDLIN( 121)		 ::lime::utils::Preloader _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 122)		{
HXLINE( 122)			int _g = 0;
HXDLIN( 122)			::Array< ::Dynamic> _g1 = this->libraries;
HXDLIN( 122)			while((_g < _g1->length)){
HXLINE( 122)				HX_VARI(  ::lime::utils::AssetLibrary,library) = _g1->__get(_g).StaticCast<  ::lime::utils::AssetLibrary >();
HXDLIN( 122)				_g = (_g + 1);
HXLINE( 124)				 ::lime::utils::Preloader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 124)				_hx_tmp->bytesTotal = (_hx_tmp->bytesTotal + library->bytesTotal);
            			}
            		}
HXLINE( 127)		this->loadedLibraries = -1;
HXLINE( 128)		this->preloadStarted = false;
HXLINE( 130)		{
HXLINE( 130)			int _g2 = 0;
HXDLIN( 130)			::Array< ::Dynamic> _g3 = this->libraries;
HXDLIN( 130)			while((_g2 < _g3->length)){
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::lime::utils::Preloader,_gthis, ::lime::utils::AssetLibrary,library) HXARGC(2)
            				void _hx_run(int loaded,int total){
            					HX_STACKFRAME(&_hx_pos_e07f6fac014e5fdd_136_load)
            					HX_STACK_ARG(loaded,"loaded")
            					HX_STACK_ARG(total,"total")
HXLINE( 136)
HXLINE( 137)					if (!(_gthis->bytesLoadedCache->exists(library))) {
HXLINE( 139)						 ::lime::utils::Preloader _gthis1 = _gthis;
HXDLIN( 139)						_gthis1->bytesLoaded = (_gthis1->bytesLoaded + loaded);
            					}
            					else {
HXLINE( 143)						 ::lime::utils::Preloader _gthis1 = _gthis;
HXDLIN( 143)						int _gthis2 = _gthis1->bytesLoaded;
HXDLIN( 143)						_gthis1->bytesLoaded = (_gthis2 + (loaded - _gthis->bytesLoadedCache->get_int(library)));
            					}
HXLINE( 146)					_gthis->bytesLoadedCache->set(library,loaded);
HXLINE( 148)					if (!(_gthis->simulateProgress)) {
HXLINE( 150)						_gthis->onProgress->dispatch(_gthis->bytesLoaded,_gthis->bytesTotal);
            					}
            				}
            				HX_END_LOCAL_FUNC2((void))

            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::lime::utils::Preloader,_gthis, ::lime::utils::AssetLibrary,library) HXARGC(1)
            				void _hx_run( ::lime::utils::AssetLibrary _){
            					HX_STACKFRAME(&_hx_pos_e07f6fac014e5fdd_154_load)
            					HX_STACK_ARG(_,"_")
HXLINE( 154)
HXLINE( 155)					if (!(_gthis->bytesLoadedCache->exists(library))) {
HXLINE( 157)						 ::lime::utils::Preloader _gthis1 = _gthis;
HXDLIN( 157)						_gthis1->bytesLoaded = (_gthis1->bytesLoaded + library->bytesTotal);
            					}
            					else {
HXLINE( 161)						 ::lime::utils::Preloader _gthis1 = _gthis;
HXDLIN( 161)						int _gthis2 = _gthis1->bytesLoaded;
HXDLIN( 161)						int library1 = library->bytesTotal;
HXDLIN( 161)						_gthis1->bytesLoaded = (_gthis2 + (library1 - _gthis->bytesLoadedCache->get_int(library)));
            					}
HXLINE( 164)					_gthis->loadedAssetLibrary(null());
            				}
            				HX_END_LOCAL_FUNC1((void))

            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            				void _hx_run( ::Dynamic e){
            					HX_STACKFRAME(&_hx_pos_e07f6fac014e5fdd_168_load)
            					HX_STACK_ARG(e,"e")
HXLINE( 168)
HXLINE( 168)					::lime::utils::Log_obj::error(e,::hx::SourceInfo(HX_("lime/utils/Preloader.hx",00,f0,21,e7),168,HX_("lime.utils.Preloader",80,b4,12,ca),HX_("load",26,9a,b7,47)));
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 130)				HX_VARI(  ::lime::utils::AssetLibrary,library) = _g3->__get(_g2).StaticCast<  ::lime::utils::AssetLibrary >();
HXDLIN( 130)				_g2 = (_g2 + 1);
HXLINE( 132)				::lime::utils::Log_obj::verbose(HX_("Preloading asset library",44,27,6d,96),::hx::SourceInfo(HX_("lime/utils/Preloader.hx",00,f0,21,e7),132,HX_("lime.utils.Preloader",80,b4,12,ca),HX_("load",26,9a,b7,47)));
HXLINE( 134)				library->load()->onProgress( ::Dynamic(new _hx_Closure_0(_gthis,library)))->onComplete( ::Dynamic(new _hx_Closure_1(_gthis,library)))->onError( ::Dynamic(new _hx_Closure_2()));
            			}
            		}
HXLINE( 174)		{
HXLINE( 174)			int _g4 = 0;
HXDLIN( 174)			::Array< ::String > _g5 = this->libraryNames;
HXDLIN( 174)			while((_g4 < _g5->length)){
HXLINE( 174)				HX_VARI( ::String,name) = _g5->__get(_g4);
HXDLIN( 174)				_g4 = (_g4 + 1);
HXLINE( 176)				 ::lime::utils::Preloader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 176)				_hx_tmp->bytesTotal = (_hx_tmp->bytesTotal + 200);
            			}
            		}
HXLINE( 179)		this->loadedLibraries++;
HXLINE( 180)		this->preloadStarted = true;
HXLINE( 181)		this->updateProgress();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Preloader_obj,load,(void))

void Preloader_obj::loadedAssetLibrary(::String name){
            	HX_STACKFRAME(&_hx_pos_e07f6fac014e5fdd_185_loadedAssetLibrary)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(name,"name")
HXLINE( 185)
HXLINE( 186)		this->loadedLibraries++;
HXLINE( 188)		HX_VARI( int,current) = this->loadedLibraries;
HXLINE( 189)		if (!(this->preloadStarted)) {
HXLINE( 189)			current = (current + 1);
            		}
HXLINE( 191)		HX_VARI( int,totalLibraries) = (this->libraries->length + this->libraryNames->length);
HXLINE( 193)		if (::hx::IsNotNull( name )) {
HXLINE( 195)			::lime::utils::Log_obj::verbose(((((((HX_("Loaded asset library: ",36,ba,cc,98) + name) + HX_(" [",3b,1c,00,00)) + current) + HX_("/",2f,00,00,00)) + totalLibraries) + HX_("]",5d,00,00,00)),::hx::SourceInfo(HX_("lime/utils/Preloader.hx",00,f0,21,e7),195,HX_("lime.utils.Preloader",80,b4,12,ca),HX_("loadedAssetLibrary",90,0a,d2,6a)));
            		}
            		else {
HXLINE( 199)			::lime::utils::Log_obj::verbose(((((HX_("Loaded asset library [",cb,a3,cc,98) + current) + HX_("/",2f,00,00,00)) + totalLibraries) + HX_("]",5d,00,00,00)),::hx::SourceInfo(HX_("lime/utils/Preloader.hx",00,f0,21,e7),199,HX_("lime.utils.Preloader",80,b4,12,ca),HX_("loadedAssetLibrary",90,0a,d2,6a)));
            		}
HXLINE( 202)		this->updateProgress();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Preloader_obj,loadedAssetLibrary,(void))

void Preloader_obj::start(){
            	HX_STACKFRAME(&_hx_pos_e07f6fac014e5fdd_206_start)
            	HX_STACK_THIS(this)
HXLINE( 206)
HXLINE( 207)		bool _hx_tmp;
HXDLIN( 207)		bool _hx_tmp1;
HXDLIN( 207)		if (!(this->complete)) {
HXLINE( 207)			_hx_tmp1 = this->simulateProgress;
            		}
            		else {
HXLINE( 207)			_hx_tmp1 = true;
            		}
HXDLIN( 207)		if (!(_hx_tmp1)) {
HXLINE( 207)			_hx_tmp = !(this->preloadComplete);
            		}
            		else {
HXLINE( 207)			_hx_tmp = true;
            		}
HXDLIN( 207)		if (_hx_tmp) {
HXLINE( 207)			return;
            		}
HXLINE( 209)		this->complete = true;
HXLINE( 218)		this->onComplete->dispatch();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Preloader_obj,start,(void))

void Preloader_obj::update(int loaded,int total){
            	HX_STACKFRAME(&_hx_pos_e07f6fac014e5fdd_221_update)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(loaded,"loaded")
            	HX_STACK_ARG(total,"total")
HXLINE( 221)
            	}


HX_DEFINE_DYNAMIC_FUNC2(Preloader_obj,update,(void))

void Preloader_obj::updateProgress(){
            	HX_STACKFRAME(&_hx_pos_e07f6fac014e5fdd_224_updateProgress)
            	HX_STACK_THIS(this)
HXLINE( 224)
HXDLIN( 224)		 ::lime::utils::Preloader _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 225)		if (!(this->simulateProgress)) {
HXLINE( 227)			this->onProgress->dispatch(this->bytesLoaded,this->bytesTotal);
            		}
HXLINE( 230)		bool _hx_tmp;
HXDLIN( 230)		if ((this->loadedLibraries == this->libraries->length)) {
HXLINE( 230)			_hx_tmp = !(this->initLibraryNames);
            		}
            		else {
HXLINE( 230)			_hx_tmp = false;
            		}
HXDLIN( 230)		if (_hx_tmp) {
HXLINE( 232)			this->initLibraryNames = true;
HXLINE( 234)			{
HXLINE( 234)				int _g = 0;
HXDLIN( 234)				::Array< ::String > _g1 = this->libraryNames;
HXDLIN( 234)				while((_g < _g1->length)){
            					HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::String,name, ::lime::utils::Preloader,_gthis) HXARGC(2)
            					void _hx_run(int loaded,int total){
            						HX_STACKFRAME(&_hx_pos_e07f6fac014e5fdd_241_updateProgress)
            						HX_STACK_ARG(loaded,"loaded")
            						HX_STACK_ARG(total,"total")
HXLINE( 241)
HXLINE( 241)						if ((total > 0)) {
HXLINE( 243)							if (!(_gthis->bytesTotalCache->exists(name))) {
HXLINE( 245)								_gthis->bytesTotalCache->set(name,total);
HXLINE( 246)								 ::lime::utils::Preloader _gthis1 = _gthis;
HXDLIN( 246)								_gthis1->bytesTotal = (_gthis1->bytesTotal + (total - 200));
            							}
HXLINE( 249)							if ((loaded > total)) {
HXLINE( 249)								loaded = total;
            							}
HXLINE( 251)							if (!(_gthis->bytesLoadedCache2->exists(name))) {
HXLINE( 253)								 ::lime::utils::Preloader _gthis1 = _gthis;
HXDLIN( 253)								_gthis1->bytesLoaded = (_gthis1->bytesLoaded + loaded);
            							}
            							else {
HXLINE( 257)								 ::lime::utils::Preloader _gthis1 = _gthis;
HXDLIN( 257)								int _gthis2 = _gthis1->bytesLoaded;
HXDLIN( 257)								_gthis1->bytesLoaded = (_gthis2 + (loaded - _gthis->bytesLoadedCache2->get_int(name)));
            							}
HXLINE( 260)							_gthis->bytesLoadedCache2->set(name,loaded);
HXLINE( 262)							if (!(_gthis->simulateProgress)) {
HXLINE( 264)								_gthis->onProgress->dispatch(_gthis->bytesLoaded,_gthis->bytesTotal);
            							}
            						}
            					}
            					HX_END_LOCAL_FUNC2((void))

            					HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1,::String,name, ::lime::utils::Preloader,_gthis) HXARGC(1)
            					void _hx_run( ::lime::utils::AssetLibrary library){
            						HX_STACKFRAME(&_hx_pos_e07f6fac014e5fdd_269_updateProgress)
            						HX_STACK_ARG(library,"library")
HXLINE( 269)
HXLINE( 270)						HX_VARI( int,total) = 200;
HXLINE( 272)						if (_gthis->bytesTotalCache->exists(name)) {
HXLINE( 274)							total = _gthis->bytesTotalCache->get_int(name);
            						}
HXLINE( 277)						if (!(_gthis->bytesLoadedCache2->exists(name))) {
HXLINE( 279)							 ::lime::utils::Preloader _gthis1 = _gthis;
HXDLIN( 279)							_gthis1->bytesLoaded = (_gthis1->bytesLoaded + total);
            						}
            						else {
HXLINE( 283)							 ::lime::utils::Preloader _gthis1 = _gthis;
HXDLIN( 283)							int _gthis2 = _gthis1->bytesLoaded;
HXDLIN( 283)							_gthis1->bytesLoaded = (_gthis2 + (total - _gthis->bytesLoadedCache2->get_int(name)));
            						}
HXLINE( 286)						_gthis->loadedAssetLibrary(name);
            					}
            					HX_END_LOCAL_FUNC1((void))

            					HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            					void _hx_run( ::Dynamic e){
            						HX_STACKFRAME(&_hx_pos_e07f6fac014e5fdd_290_updateProgress)
            						HX_STACK_ARG(e,"e")
HXLINE( 290)
HXLINE( 290)						::lime::utils::Log_obj::error(e,::hx::SourceInfo(HX_("lime/utils/Preloader.hx",00,f0,21,e7),290,HX_("lime.utils.Preloader",80,b4,12,ca),HX_("updateProgress",d6,ea,54,bb)));
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE( 234)					HX_VARI( ::String,name) = _g1->__get(_g);
HXDLIN( 234)					_g = (_g + 1);
HXLINE( 236)					::lime::utils::Log_obj::verbose((HX_("Preloading asset library: ",ea,b2,78,e9) + name),::hx::SourceInfo(HX_("lime/utils/Preloader.hx",00,f0,21,e7),236,HX_("lime.utils.Preloader",80,b4,12,ca),HX_("updateProgress",d6,ea,54,bb)));
HXLINE( 238)					::lime::utils::Assets_obj::loadLibrary(name)->onProgress( ::Dynamic(new _hx_Closure_0(name,_gthis)))->onComplete( ::Dynamic(new _hx_Closure_1(name,_gthis)))->onError( ::Dynamic(new _hx_Closure_2()));
            				}
            			}
            		}
HXLINE( 295)		bool _hx_tmp1;
HXDLIN( 295)		if (!(this->simulateProgress)) {
HXLINE( 295)			_hx_tmp1 = (this->loadedLibraries == (this->libraries->length + this->libraryNames->length));
            		}
            		else {
HXLINE( 295)			_hx_tmp1 = false;
            		}
HXDLIN( 295)		if (_hx_tmp1) {
HXLINE( 297)			if (!(this->preloadComplete)) {
HXLINE( 299)				this->preloadComplete = true;
HXLINE( 301)				::lime::utils::Log_obj::verbose(HX_("Preload complete",10,f4,03,24),::hx::SourceInfo(HX_("lime/utils/Preloader.hx",00,f0,21,e7),301,HX_("lime.utils.Preloader",80,b4,12,ca),HX_("updateProgress",d6,ea,54,bb)));
            			}
HXLINE( 304)			this->start();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Preloader_obj,updateProgress,(void))


::hx::ObjectPtr< Preloader_obj > Preloader_obj::__new() {
	::hx::ObjectPtr< Preloader_obj > __this = new Preloader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Preloader_obj > Preloader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Preloader_obj *__this = (Preloader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Preloader_obj), true, "lime.utils.Preloader"));
	*(void **)__this = Preloader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Preloader_obj::Preloader_obj()
{
}

void Preloader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Preloader);
	HX_MARK_MEMBER_NAME(complete,"complete");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(onProgress,"onProgress");
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(bytesLoadedCache,"bytesLoadedCache");
	HX_MARK_MEMBER_NAME(bytesLoadedCache2,"bytesLoadedCache2");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(bytesTotalCache,"bytesTotalCache");
	HX_MARK_MEMBER_NAME(initLibraryNames,"initLibraryNames");
	HX_MARK_MEMBER_NAME(libraries,"libraries");
	HX_MARK_MEMBER_NAME(libraryNames,"libraryNames");
	HX_MARK_MEMBER_NAME(loadedLibraries,"loadedLibraries");
	HX_MARK_MEMBER_NAME(loadedStage,"loadedStage");
	HX_MARK_MEMBER_NAME(preloadComplete,"preloadComplete");
	HX_MARK_MEMBER_NAME(preloadStarted,"preloadStarted");
	HX_MARK_MEMBER_NAME(simulateProgress,"simulateProgress");
	HX_MARK_END_CLASS();
}

void Preloader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(complete,"complete");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(onProgress,"onProgress");
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_VISIT_MEMBER_NAME(bytesLoadedCache,"bytesLoadedCache");
	HX_VISIT_MEMBER_NAME(bytesLoadedCache2,"bytesLoadedCache2");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(bytesTotalCache,"bytesTotalCache");
	HX_VISIT_MEMBER_NAME(initLibraryNames,"initLibraryNames");
	HX_VISIT_MEMBER_NAME(libraries,"libraries");
	HX_VISIT_MEMBER_NAME(libraryNames,"libraryNames");
	HX_VISIT_MEMBER_NAME(loadedLibraries,"loadedLibraries");
	HX_VISIT_MEMBER_NAME(loadedStage,"loadedStage");
	HX_VISIT_MEMBER_NAME(preloadComplete,"preloadComplete");
	HX_VISIT_MEMBER_NAME(preloadStarted,"preloadStarted");
	HX_VISIT_MEMBER_NAME(simulateProgress,"simulateProgress");
}

::hx::Val Preloader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { return ::hx::Val( complete ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"libraries") ) { return ::hx::Val( libraries ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return ::hx::Val( onComplete ); }
		if (HX_FIELD_EQ(inName,"onProgress") ) { return ::hx::Val( onProgress ); }
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return ::hx::Val( bytesTotal ); }
		if (HX_FIELD_EQ(inName,"addLibrary") ) { return ::hx::Val( addLibrary_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return ::hx::Val( bytesLoaded ); }
		if (HX_FIELD_EQ(inName,"loadedStage") ) { return ::hx::Val( loadedStage ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"libraryNames") ) { return ::hx::Val( libraryNames ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"preloadStarted") ) { return ::hx::Val( preloadStarted ); }
		if (HX_FIELD_EQ(inName,"addLibraryName") ) { return ::hx::Val( addLibraryName_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateProgress") ) { return ::hx::Val( updateProgress_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bytesTotalCache") ) { return ::hx::Val( bytesTotalCache ); }
		if (HX_FIELD_EQ(inName,"loadedLibraries") ) { return ::hx::Val( loadedLibraries ); }
		if (HX_FIELD_EQ(inName,"preloadComplete") ) { return ::hx::Val( preloadComplete ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bytesLoadedCache") ) { return ::hx::Val( bytesLoadedCache ); }
		if (HX_FIELD_EQ(inName,"initLibraryNames") ) { return ::hx::Val( initLibraryNames ); }
		if (HX_FIELD_EQ(inName,"simulateProgress") ) { return ::hx::Val( simulateProgress ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"bytesLoadedCache2") ) { return ::hx::Val( bytesLoadedCache2 ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loadedAssetLibrary") ) { return ::hx::Val( loadedAssetLibrary_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Preloader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { complete=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"libraries") ) { libraries=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onProgress") ) { onProgress=inValue.Cast<  ::lime::app::_Event_Int_Int_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loadedStage") ) { loadedStage=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"libraryNames") ) { libraryNames=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"preloadStarted") ) { preloadStarted=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bytesTotalCache") ) { bytesTotalCache=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loadedLibraries") ) { loadedLibraries=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"preloadComplete") ) { preloadComplete=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bytesLoadedCache") ) { bytesLoadedCache=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"initLibraryNames") ) { initLibraryNames=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"simulateProgress") ) { simulateProgress=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"bytesLoadedCache2") ) { bytesLoadedCache2=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Preloader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("complete",b9,00,c8,7f));
	outFields->push(HX_("onComplete",f8,d4,7e,5d));
	outFields->push(HX_("onProgress",ec,cb,e1,63));
	outFields->push(HX_("bytesLoaded",d0,66,ca,99));
	outFields->push(HX_("bytesLoadedCache",52,f1,40,0f));
	outFields->push(HX_("bytesLoadedCache2",a0,36,92,49));
	outFields->push(HX_("bytesTotal",59,57,da,45));
	outFields->push(HX_("bytesTotalCache",29,70,4f,ba));
	outFields->push(HX_("initLibraryNames",fd,89,cd,d2));
	outFields->push(HX_("libraries",19,50,f8,18));
	outFields->push(HX_("libraryNames",cd,aa,8b,df));
	outFields->push(HX_("loadedLibraries",54,3f,a7,0f));
	outFields->push(HX_("loadedStage",79,60,2d,7e));
	outFields->push(HX_("preloadComplete",a2,75,67,9d));
	outFields->push(HX_("preloadStarted",78,84,cb,31));
	outFields->push(HX_("simulateProgress",71,2f,7f,a6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Preloader_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(Preloader_obj,complete),HX_("complete",b9,00,c8,7f)},
	{::hx::fsObject /*  ::lime::app::_Event_Void_Void */ ,(int)offsetof(Preloader_obj,onComplete),HX_("onComplete",f8,d4,7e,5d)},
	{::hx::fsObject /*  ::lime::app::_Event_Int_Int_Void */ ,(int)offsetof(Preloader_obj,onProgress),HX_("onProgress",ec,cb,e1,63)},
	{::hx::fsInt,(int)offsetof(Preloader_obj,bytesLoaded),HX_("bytesLoaded",d0,66,ca,99)},
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(int)offsetof(Preloader_obj,bytesLoadedCache),HX_("bytesLoadedCache",52,f1,40,0f)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Preloader_obj,bytesLoadedCache2),HX_("bytesLoadedCache2",a0,36,92,49)},
	{::hx::fsInt,(int)offsetof(Preloader_obj,bytesTotal),HX_("bytesTotal",59,57,da,45)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Preloader_obj,bytesTotalCache),HX_("bytesTotalCache",29,70,4f,ba)},
	{::hx::fsBool,(int)offsetof(Preloader_obj,initLibraryNames),HX_("initLibraryNames",fd,89,cd,d2)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Preloader_obj,libraries),HX_("libraries",19,50,f8,18)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Preloader_obj,libraryNames),HX_("libraryNames",cd,aa,8b,df)},
	{::hx::fsInt,(int)offsetof(Preloader_obj,loadedLibraries),HX_("loadedLibraries",54,3f,a7,0f)},
	{::hx::fsBool,(int)offsetof(Preloader_obj,loadedStage),HX_("loadedStage",79,60,2d,7e)},
	{::hx::fsBool,(int)offsetof(Preloader_obj,preloadComplete),HX_("preloadComplete",a2,75,67,9d)},
	{::hx::fsBool,(int)offsetof(Preloader_obj,preloadStarted),HX_("preloadStarted",78,84,cb,31)},
	{::hx::fsBool,(int)offsetof(Preloader_obj,simulateProgress),HX_("simulateProgress",71,2f,7f,a6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Preloader_obj_sStaticStorageInfo = 0;
#endif

static ::String Preloader_obj_sMemberFields[] = {
	HX_("complete",b9,00,c8,7f),
	HX_("onComplete",f8,d4,7e,5d),
	HX_("onProgress",ec,cb,e1,63),
	HX_("bytesLoaded",d0,66,ca,99),
	HX_("bytesLoadedCache",52,f1,40,0f),
	HX_("bytesLoadedCache2",a0,36,92,49),
	HX_("bytesTotal",59,57,da,45),
	HX_("bytesTotalCache",29,70,4f,ba),
	HX_("initLibraryNames",fd,89,cd,d2),
	HX_("libraries",19,50,f8,18),
	HX_("libraryNames",cd,aa,8b,df),
	HX_("loadedLibraries",54,3f,a7,0f),
	HX_("loadedStage",79,60,2d,7e),
	HX_("preloadComplete",a2,75,67,9d),
	HX_("preloadStarted",78,84,cb,31),
	HX_("simulateProgress",71,2f,7f,a6),
	HX_("addLibrary",da,52,fa,a6),
	HX_("addLibraryName",45,66,be,40),
	HX_("load",26,9a,b7,47),
	HX_("loadedAssetLibrary",90,0a,d2,6a),
	HX_("start",62,74,0b,84),
	HX_("update",09,86,05,87),
	HX_("updateProgress",d6,ea,54,bb),
	::String(null()) };

::hx::Class Preloader_obj::__mClass;

void Preloader_obj::__register()
{
	Preloader_obj _hx_dummy;
	Preloader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.utils.Preloader",80,b4,12,ca);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Preloader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Preloader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Preloader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Preloader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace utils
