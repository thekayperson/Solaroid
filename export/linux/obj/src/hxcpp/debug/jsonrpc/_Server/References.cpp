#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_hxcpp_debug_jsonrpc_Value
#include <hxcpp/debug/jsonrpc/Value.h>
#endif
#ifndef INCLUDED_hxcpp_debug_jsonrpc__Server_References
#include <hxcpp/debug/jsonrpc/_Server/References.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ee38e02474eb901f_38_new,"hxcpp.debug.jsonrpc._Server.References","new",0xf33e0e4d,"hxcpp.debug.jsonrpc._Server.References.new","hxcpp/debug/jsonrpc/Server.hx",38,0xbce2c271)
HX_LOCAL_STACK_FRAME(_hx_pos_ee38e02474eb901f_41_create,"hxcpp.debug.jsonrpc._Server.References","create",0xa610db2f,"hxcpp.debug.jsonrpc._Server.References.create","hxcpp/debug/jsonrpc/Server.hx",41,0xbce2c271)
HX_LOCAL_STACK_FRAME(_hx_pos_ee38e02474eb901f_49_get,"hxcpp.debug.jsonrpc._Server.References","get",0xf338be83,"hxcpp.debug.jsonrpc._Server.References.get","hxcpp/debug/jsonrpc/Server.hx",49,0xbce2c271)
HX_LOCAL_STACK_FRAME(_hx_pos_ee38e02474eb901f_53_clear,"hxcpp.debug.jsonrpc._Server.References","clear",0x78c2c4ba,"hxcpp.debug.jsonrpc._Server.References.clear","hxcpp/debug/jsonrpc/Server.hx",53,0xbce2c271)
HX_LOCAL_STACK_FRAME(_hx_pos_ee38e02474eb901f_33_boot,"hxcpp.debug.jsonrpc._Server.References","boot",0xdb2775a5,"hxcpp.debug.jsonrpc._Server.References.boot","hxcpp/debug/jsonrpc/Server.hx",33,0xbce2c271)
namespace hxcpp{
namespace debug{
namespace jsonrpc{
namespace _Server{

void References_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_ee38e02474eb901f_38_new)
            	HX_STACK_THIS(this)
HXLINE(  38)
HXDLIN(  38)		this->references =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            	}

Dynamic References_obj::__CreateEmpty() { return new References_obj; }

void *References_obj::_hx_vtable = 0;

Dynamic References_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< References_obj > _hx_result = new References_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool References_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3312e4d1;
}

int References_obj::create( ::hxcpp::debug::jsonrpc::Value ref){
            	HX_STACKFRAME(&_hx_pos_ee38e02474eb901f_41_create)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ref,"ref")
HXLINE(  41)
HXLINE(  42)		HX_VARI( int,id) = ::hxcpp::debug::jsonrpc::_Server::References_obj::lastId;
HXLINE(  43)		this->references->set(::hxcpp::debug::jsonrpc::_Server::References_obj::lastId,ref);
HXLINE(  44)		::hxcpp::debug::jsonrpc::_Server::References_obj::lastId++;
HXLINE(  45)		return id;
            	}


HX_DEFINE_DYNAMIC_FUNC1(References_obj,create,return )

 ::hxcpp::debug::jsonrpc::Value References_obj::get(int id){
            	HX_STACKFRAME(&_hx_pos_ee38e02474eb901f_49_get)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(id,"id")
HXLINE(  49)
HXDLIN(  49)		return this->references->get(id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(References_obj,get,return )

void References_obj::clear(){
            	HX_GC_STACKFRAME(&_hx_pos_ee38e02474eb901f_53_clear)
            	HX_STACK_THIS(this)
HXLINE(  53)
HXDLIN(  53)		this->references =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            	}


HX_DEFINE_DYNAMIC_FUNC0(References_obj,clear,(void))

int References_obj::lastId;


::hx::ObjectPtr< References_obj > References_obj::__new() {
	::hx::ObjectPtr< References_obj > __this = new References_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< References_obj > References_obj::__alloc(::hx::Ctx *_hx_ctx) {
	References_obj *__this = (References_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(References_obj), true, "hxcpp.debug.jsonrpc._Server.References"));
	*(void **)__this = References_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

References_obj::References_obj()
{
}

void References_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(References);
	HX_MARK_MEMBER_NAME(references,"references");
	HX_MARK_END_CLASS();
}

void References_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(references,"references");
}

::hx::Val References_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"references") ) { return ::hx::Val( references ); }
	}
	return super::__Field(inName,inCallProp);
}

bool References_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"lastId") ) { outValue = ( lastId ); return true; }
	}
	return false;
}

::hx::Val References_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"references") ) { references=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool References_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"lastId") ) { lastId=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void References_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("references",48,ca,a1,11));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo References_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(References_obj,references),HX_("references",48,ca,a1,11)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo References_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &References_obj::lastId,HX_("lastId",d1,0b,c5,54)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String References_obj_sMemberFields[] = {
	HX_("references",48,ca,a1,11),
	HX_("create",fc,66,0f,7c),
	HX_("get",96,80,4e,00),
	HX_("clear",8d,71,5b,48),
	::String(null()) };

static void References_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(References_obj::lastId,"lastId");
};

#ifdef HXCPP_VISIT_ALLOCS
static void References_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(References_obj::lastId,"lastId");
};

#endif

::hx::Class References_obj::__mClass;

static ::String References_obj_sStaticFields[] = {
	HX_("lastId",d1,0b,c5,54),
	::String(null())
};

void References_obj::__register()
{
	References_obj _hx_dummy;
	References_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxcpp.debug.jsonrpc._Server.References",db,e3,93,80);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &References_obj::__GetStatic;
	__mClass->mSetStaticField = &References_obj::__SetStatic;
	__mClass->mMarkFunc = References_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(References_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(References_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< References_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = References_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = References_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = References_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void References_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ee38e02474eb901f_33_boot)
HXDLIN(  33)		lastId = 1000;
            	}
}

} // end namespace hxcpp
} // end namespace debug
} // end namespace jsonrpc
} // end namespace _Server
