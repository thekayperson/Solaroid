#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_cpp_vm_Debugger
#include <cpp/vm/Debugger.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxcpp_debug_jsonrpc_Value
#include <hxcpp/debug/jsonrpc/Value.h>
#endif
#ifndef INCLUDED_hxcpp_debug_jsonrpc_VarType
#include <hxcpp/debug/jsonrpc/VarType.h>
#endif
#ifndef INCLUDED_hxcpp_debug_jsonrpc_VariablesPrinter
#include <hxcpp/debug/jsonrpc/VariablesPrinter.h>
#endif
#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_Expr
#include <hxcpp/debug/jsonrpc/eval/Expr.h>
#endif
#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_Interp
#include <hxcpp/debug/jsonrpc/eval/Interp.h>
#endif
#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_Parser
#include <hxcpp/debug/jsonrpc/eval/Parser.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_10055091cc7f5320_31_getInnerVariables,"hxcpp.debug.jsonrpc.VariablesPrinter","getInnerVariables",0xb1b70553,"hxcpp.debug.jsonrpc.VariablesPrinter.getInnerVariables","hxcpp/debug/jsonrpc/VariablesPrinter.hx",31,0xce4c68d1)
HX_LOCAL_STACK_FRAME(_hx_pos_10055091cc7f5320_81_resolveValue,"hxcpp.debug.jsonrpc.VariablesPrinter","resolveValue",0xad412a89,"hxcpp.debug.jsonrpc.VariablesPrinter.resolveValue","hxcpp/debug/jsonrpc/VariablesPrinter.hx",81,0xce4c68d1)
HX_LOCAL_STACK_FRAME(_hx_pos_10055091cc7f5320_129_resolveValue,"hxcpp.debug.jsonrpc.VariablesPrinter","resolveValue",0xad412a89,"hxcpp.debug.jsonrpc.VariablesPrinter.resolveValue","hxcpp/debug/jsonrpc/VariablesPrinter.hx",129,0xce4c68d1)
HX_LOCAL_STACK_FRAME(_hx_pos_10055091cc7f5320_133_evaluate,"hxcpp.debug.jsonrpc.VariablesPrinter","evaluate",0x847f23fd,"hxcpp.debug.jsonrpc.VariablesPrinter.evaluate","hxcpp/debug/jsonrpc/VariablesPrinter.hx",133,0xce4c68d1)
HX_LOCAL_STACK_FRAME(_hx_pos_10055091cc7f5320_149_initInterp,"hxcpp.debug.jsonrpc.VariablesPrinter","initInterp",0x61edc9a8,"hxcpp.debug.jsonrpc.VariablesPrinter.initInterp","hxcpp/debug/jsonrpc/VariablesPrinter.hx",149,0xce4c68d1)
HX_LOCAL_STACK_FRAME(_hx_pos_10055091cc7f5320_171_getClassProps,"hxcpp.debug.jsonrpc.VariablesPrinter","getClassProps",0xc815fa2a,"hxcpp.debug.jsonrpc.VariablesPrinter.getClassProps","hxcpp/debug/jsonrpc/VariablesPrinter.hx",171,0xce4c68d1)
HX_LOCAL_STACK_FRAME(_hx_pos_10055091cc7f5320_184_getProps,"hxcpp.debug.jsonrpc.VariablesPrinter","getProps",0xab95ba9e,"hxcpp.debug.jsonrpc.VariablesPrinter.getProps","hxcpp/debug/jsonrpc/VariablesPrinter.hx",184,0xce4c68d1)
HX_LOCAL_STACK_FRAME(_hx_pos_10055091cc7f5320_197_getType,"hxcpp.debug.jsonrpc.VariablesPrinter","getType",0xab0a1f4c,"hxcpp.debug.jsonrpc.VariablesPrinter.getType","hxcpp/debug/jsonrpc/VariablesPrinter.hx",197,0xce4c68d1)
HX_LOCAL_STACK_FRAME(_hx_pos_10055091cc7f5320_235_getClassName,"hxcpp.debug.jsonrpc.VariablesPrinter","getClassName",0x2e9794d1,"hxcpp.debug.jsonrpc.VariablesPrinter.getClassName","hxcpp/debug/jsonrpc/VariablesPrinter.hx",235,0xce4c68d1)
HX_LOCAL_STACK_FRAME(_hx_pos_10055091cc7f5320_247_toString,"hxcpp.debug.jsonrpc.VariablesPrinter","toString",0xbb9d9450,"hxcpp.debug.jsonrpc.VariablesPrinter.toString","hxcpp/debug/jsonrpc/VariablesPrinter.hx",247,0xce4c68d1)
HX_LOCAL_STACK_FRAME(_hx_pos_10055091cc7f5320_250_arrayGet,"hxcpp.debug.jsonrpc.VariablesPrinter","arrayGet",0x72995421,"hxcpp.debug.jsonrpc.VariablesPrinter.arrayGet","hxcpp/debug/jsonrpc/VariablesPrinter.hx",250,0xce4c68d1)
HX_LOCAL_STACK_FRAME(_hx_pos_10055091cc7f5320_255_propGet,"hxcpp.debug.jsonrpc.VariablesPrinter","propGet",0x854a158f,"hxcpp.debug.jsonrpc.VariablesPrinter.propGet","hxcpp/debug/jsonrpc/VariablesPrinter.hx",255,0xce4c68d1)
HX_LOCAL_STACK_FRAME(_hx_pos_10055091cc7f5320_267_propStaticGet,"hxcpp.debug.jsonrpc.VariablesPrinter","propStaticGet",0x55521241,"hxcpp.debug.jsonrpc.VariablesPrinter.propStaticGet","hxcpp/debug/jsonrpc/VariablesPrinter.hx",267,0xce4c68d1)
HX_LOCAL_STACK_FRAME(_hx_pos_10055091cc7f5320_282_stringMapGet,"hxcpp.debug.jsonrpc.VariablesPrinter","stringMapGet",0x935eacaf,"hxcpp.debug.jsonrpc.VariablesPrinter.stringMapGet","hxcpp/debug/jsonrpc/VariablesPrinter.hx",282,0xce4c68d1)
HX_LOCAL_STACK_FRAME(_hx_pos_10055091cc7f5320_287_intMapGet,"hxcpp.debug.jsonrpc.VariablesPrinter","intMapGet",0x23be8185,"hxcpp.debug.jsonrpc.VariablesPrinter.intMapGet","hxcpp/debug/jsonrpc/VariablesPrinter.hx",287,0xce4c68d1)
namespace hxcpp{
namespace debug{
namespace jsonrpc{

void VariablesPrinter_obj::__construct() { }

Dynamic VariablesPrinter_obj::__CreateEmpty() { return new VariablesPrinter_obj; }

void *VariablesPrinter_obj::_hx_vtable = 0;

Dynamic VariablesPrinter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VariablesPrinter_obj > _hx_result = new VariablesPrinter_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VariablesPrinter_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0990d57c;
}

::Array< ::Dynamic> VariablesPrinter_obj::getInnerVariables( ::hxcpp::debug::jsonrpc::Value value,::hx::Null< int >  __o_start,::hx::Null< int >  __o_count){
            		int start = __o_start.Default(0);
            		int count = __o_count.Default(-1);
            	HX_STACKFRAME(&_hx_pos_10055091cc7f5320_31_getInnerVariables)
            	HX_STACK_ARG(value,"value")
            	HX_STACK_ARG(start,"start")
            	HX_STACK_ARG(count,"count")
HXLINE(  31)
HXLINE(  32)		HX_VARI( ::Array< ::Dynamic>,result) = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  33)		switch((int)(value->_hx_getIndex())){
            			case (int)0: {
HXLINE(  74)				 ::Dynamic _g = value->_hx_getObject(0);
HXLINE(  75)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("not structured",be,aa,95,e9)));
            			}
            			break;
            			case (int)1: {
HXLINE(  62)				HX_VARI(  ::Dynamic,val) = value->_hx_getObject(0);
HXDLIN(  62)				HX_VARI( int,length) = value->_hx_getInt(1);
HXDLIN(  62)				HX_VARI(  ::Dynamic,fieldAccess) = value->_hx_getObject(2);
HXDLIN(  62)				{
HXLINE(  63)					if ((count < 0)) {
HXLINE(  64)						count = length;
            					}
HXLINE(  65)					{
HXLINE(  65)						int _g = start;
HXDLIN(  65)						int _g1 = (start + count);
HXDLIN(  65)						while((_g < _g1)){
HXLINE(  65)							_g = (_g + 1);
HXDLIN(  65)							HX_VARI( int,i) = (_g - 1);
HXLINE(  66)							HX_VARI(  ::Dynamic,value) = fieldAccess(val,i);
HXLINE(  69)							 ::hxcpp::debug::jsonrpc::Value _hx_tmp = ::hxcpp::debug::jsonrpc::VariablesPrinter_obj::resolveValue(value);
HXLINE(  67)							result->push( ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("value",71,7f,b8,31),_hx_tmp)
            								->setFixed(1,HX_("name",4b,72,ff,48),(HX_("",00,00,00,00) + i))
            								->setFixed(2,HX_("type",ba,f2,08,4d),::hxcpp::debug::jsonrpc::VariablesPrinter_obj::getType(value))));
            						}
            					}
            				}
            			}
            			break;
            			case (int)2: {
HXLINE(  49)				::String _g = value->_hx_getString(1);
HXDLIN(  49)				{
HXLINE(  49)					HX_VARI(  ::Dynamic,val) = value->_hx_getObject(0);
HXDLIN(  49)					HX_VARI( ::Array< ::String >,names) = value->_hx_getObject(2).StaticCast< ::Array< ::String > >();
HXDLIN(  49)					HX_VARI( bool,fieldsAsString) = value->_hx_getBool(3);
HXDLIN(  49)					HX_VARI(  ::Dynamic,fieldAccess) = value->_hx_getObject(4);
HXDLIN(  49)					{
HXLINE(  50)						if ((count < 0)) {
HXLINE(  51)							count = names->length;
            						}
HXLINE(  52)						HX_VARI( ::Array< ::String >,filteredNames) = names->slice(start,(start + count));
HXLINE(  53)						{
HXLINE(  53)							int _g1 = 0;
HXDLIN(  53)							while((_g1 < filteredNames->length)){
HXLINE(  53)								HX_VARI( ::String,n) = filteredNames->__get(_g1);
HXDLIN(  53)								_g1 = (_g1 + 1);
HXLINE(  54)								HX_VARI(  ::Dynamic,value) = fieldAccess(val,n);
HXLINE(  56)								::String _hx_tmp;
HXDLIN(  56)								if (fieldsAsString) {
HXLINE(  56)									_hx_tmp = ((HX_("\"",22,00,00,00) + n) + HX_("\"",22,00,00,00));
            								}
            								else {
HXLINE(  56)									_hx_tmp = n;
            								}
HXLINE(  57)								 ::hxcpp::debug::jsonrpc::Value _hx_tmp1 = ::hxcpp::debug::jsonrpc::VariablesPrinter_obj::resolveValue(value);
HXLINE(  55)								result->push( ::Dynamic(::hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("value",71,7f,b8,31),_hx_tmp1)
            									->setFixed(1,HX_("name",4b,72,ff,48),_hx_tmp)
            									->setFixed(2,HX_("type",ba,f2,08,4d),::hxcpp::debug::jsonrpc::VariablesPrinter_obj::getType(value))));
            							}
            						}
            					}
            				}
            			}
            			break;
            			case (int)3: {
HXLINE(  34)				HX_VARI( ::Array< ::String >,names) = value->_hx_getObject(0).StaticCast< ::Array< ::String > >();
HXDLIN(  34)				HX_VARI( ::cpp::VirtualArray,values) = value->_hx_getObject(1).StaticCast< ::cpp::VirtualArray >();
HXDLIN(  34)				{
HXLINE(  35)					if ((count < 0)) {
HXLINE(  36)						count = (names->length - start);
            					}
HXLINE(  37)					{
HXLINE(  37)						int _g = start;
HXDLIN(  37)						int _g1 = (start + count);
HXDLIN(  37)						while((_g < _g1)){
HXLINE(  37)							_g = (_g + 1);
HXDLIN(  37)							HX_VARI( int,i) = (_g - 1);
HXLINE(  38)							HX_VARI( ::String,name) = names->__get(i);
HXLINE(  39)							HX_VARI(  ::Dynamic,value) = values->__get(i);
HXLINE(  40)							if (::hx::IsNull( value )) {
HXLINE(  41)								continue;
            							}
HXLINE(  44)							 ::hxcpp::debug::jsonrpc::Value _hx_tmp = ::hxcpp::debug::jsonrpc::VariablesPrinter_obj::resolveValue(value);
HXLINE(  42)							result->push( ::Dynamic(::hx::Anon_obj::Create(3)
            								->setFixed(0,HX_("value",71,7f,b8,31),_hx_tmp)
            								->setFixed(1,HX_("name",4b,72,ff,48),name)
            								->setFixed(2,HX_("type",ba,f2,08,4d),::hxcpp::debug::jsonrpc::VariablesPrinter_obj::getType(value))));
            						}
            					}
            				}
            			}
            			break;
            		}
HXLINE(  77)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(VariablesPrinter_obj,getInnerVariables,return )

 ::hxcpp::debug::jsonrpc::Value VariablesPrinter_obj::resolveValue( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_10055091cc7f5320_81_resolveValue)
            	HX_STACK_ARG(value,"value")
HXLINE(  81)
HXDLIN(  81)		 ::ValueType _g = ::Type_obj::_hx_typeof(value);
HXDLIN(  81)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: case (int)1: case (int)2: case (int)3: case (int)5: case (int)8: {
HXLINE(  83)				return ::hxcpp::debug::jsonrpc::Value_obj::Single(::Std_obj::string(value));
            			}
            			break;
            			case (int)4: {
HXLINE(  92)				::String _hx_tmp = ::Std_obj::string(value);
HXDLIN(  92)				return ::hxcpp::debug::jsonrpc::Value_obj::StringIndexed(value,_hx_tmp,::Reflect_obj::fields(value),false,::hxcpp::debug::jsonrpc::VariablesPrinter_obj::propGet_dyn());
            			}
            			break;
            			case (int)6: {
HXLINE( 108)				::hx::Class _g1 = _g->_hx_getObject(0).StaticCast< ::hx::Class >();
HXDLIN( 108)				::hx::Class _hx_switch_0 = _g1;
            				if (  (_hx_switch_0==::hx::ArrayBase::__mClass) ){
HXLINE(  95)					HX_VARI( ::cpp::VirtualArray,arr) = ( (::cpp::VirtualArray)(value) );
HXLINE(  96)					return ::hxcpp::debug::jsonrpc::Value_obj::IntIndexed(value,arr->get_length(),::hxcpp::debug::jsonrpc::VariablesPrinter_obj::arrayGet_dyn());
HXLINE(  94)					goto _hx_goto_5;
            				}
            				if (  (_hx_switch_0==::hx::ClassOf< ::String >()) ){
HXLINE(  86)					return ::hxcpp::debug::jsonrpc::Value_obj::Single(((HX_("\"",22,00,00,00) + ::Std_obj::string(value)) + HX_("\"",22,00,00,00)));
HXDLIN(  86)					goto _hx_goto_5;
            				}
            				if (  (_hx_switch_0==::hx::ClassOf< ::haxe::ds::IntMap >()) ){
HXLINE( 104)					HX_VARI(  ::haxe::ds::IntMap,map) = ( ( ::haxe::ds::IntMap)(value) );
HXLINE( 105)					::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN( 105)					{
HXLINE( 105)						HX_VARI(  ::Dynamic,k) = map->keys();
HXDLIN( 105)						while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 105)							HX_VARI( int,k1) = ( (int)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 105)							_g->push((HX_("",00,00,00,00) + k1));
            						}
            					}
HXDLIN( 105)					HX_VARI( ::Array< ::String >,keys) = _g;
HXLINE( 106)					return ::hxcpp::debug::jsonrpc::Value_obj::StringIndexed(value,::Std_obj::string(value),keys,false,::hxcpp::debug::jsonrpc::VariablesPrinter_obj::intMapGet_dyn());
HXLINE( 103)					goto _hx_goto_5;
            				}
            				if (  (_hx_switch_0==::hx::ClassOf< ::haxe::ds::StringMap >()) ){
HXLINE(  99)					HX_VARI(  ::haxe::ds::StringMap,map) = ( ( ::haxe::ds::StringMap)(value) );
HXLINE( 100)					::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN( 100)					{
HXLINE( 100)						HX_VARI(  ::Dynamic,k) = map->keys();
HXDLIN( 100)						while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 100)							HX_VARI( ::String,k1) = ( (::String)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 100)							_g->push((HX_("",00,00,00,00) + k1));
            						}
            					}
HXDLIN( 100)					HX_VARI( ::Array< ::String >,keys) = _g;
HXLINE( 101)					return ::hxcpp::debug::jsonrpc::Value_obj::StringIndexed(value,::Std_obj::string(value),keys,true,::hxcpp::debug::jsonrpc::VariablesPrinter_obj::stringMapGet_dyn());
HXLINE(  98)					goto _hx_goto_5;
            				}
            				/* default */{
            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::hx::Class,klass1) HXARGC(2)
            					 ::Dynamic _hx_run( ::Dynamic value,::String key){
            						HX_STACKFRAME(&_hx_pos_10055091cc7f5320_129_resolveValue)
HXLINE( 129)
HXLINE( 129)						return ::hxcpp::debug::jsonrpc::VariablesPrinter_obj::propStaticGet(klass1,value,key);
            					}
            					HX_END_LOCAL_FUNC2(return)

HXLINE( 108)					HX_VARI( ::hx::Class,c) = _g1;
HXLINE( 109)					HX_VARI( ::Array< ::String >,fields) = ::hxcpp::debug::jsonrpc::VariablesPrinter_obj::getProps(c);
HXLINE( 110)					HX_VARI( ::Array< ::String >,staticFields) = ::Array_obj< ::String >::__new(0);
HXLINE( 111)					HX_VARI( ::hx::Class,klass) = ::Type_obj::getClass(value);
HXLINE( 112)					HX_VARI( ::String,className) = HX_("Unknown",6a,4b,cc,ae);
HXLINE( 113)					if (::hx::IsNotNull( klass )) {
HXLINE( 114)						HX_VARI( ::hx::Class,superKlass) = ::Type_obj::getSuperClass(klass);
HXLINE( 115)						className = ::Type_obj::getClassName(klass);
HXLINE( 116)						if (::hx::IsPointerNotEq( klass,superKlass )) {
HXLINE( 117)							staticFields = ::hxcpp::debug::jsonrpc::VariablesPrinter_obj::getClassProps(c);
            						}
HXLINE( 119)						HX_VARI( int,dotIndex) = className.lastIndexOf(HX_(".",2e,00,00,00),null());
HXLINE( 120)						if ((dotIndex != -1)) {
HXLINE( 121)							className = className.substr((dotIndex + 1),null());
            						}
            					}
HXLINE( 124)					HX_VARI( ::String,printedValue) = ((className + HX_(", ",74,26,00,00)) + ::Std_obj::string(value));
HXLINE( 125)					HX_VARI( ::Array< ::String >,all) = fields->concat(staticFields);
HXLINE( 126)					::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXLINE( 127)					{
HXLINE( 127)						int _g2 = 0;
HXDLIN( 127)						while((_g2 < all->length)){
HXLINE( 127)							HX_VARI( ::String,f) = all->__get(_g2);
HXDLIN( 127)							_g2 = (_g2 + 1);
HXLINE( 128)							if (!(::Reflect_obj::isFunction(::hxcpp::debug::jsonrpc::VariablesPrinter_obj::propStaticGet(c,value,f)))) {
HXLINE( 129)								_g->push(f);
            							}
            						}
            					}
HXDLIN( 129)					::hx::Class klass1 = c;
HXLINE( 126)					return ::hxcpp::debug::jsonrpc::Value_obj::StringIndexed(value,printedValue,_g,false, ::Dynamic(new _hx_Closure_0(klass1)));
            				}
            				_hx_goto_5:;
            			}
            			break;
            			case (int)7: {
HXLINE(  88)				HX_VARI( ::hx::Class,e) = _g->_hx_getObject(0).StaticCast< ::hx::Class >();
HXLINE(  89)				return ::hxcpp::debug::jsonrpc::Value_obj::Single(::Std_obj::string(value));
            			}
            			break;
            		}
HXLINE(  81)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(VariablesPrinter_obj,resolveValue,return )

 ::Dynamic VariablesPrinter_obj::evaluate( ::hxcpp::debug::jsonrpc::eval::Parser parser,::String expression,int threadId,int frameId){
            	HX_STACKFRAME(&_hx_pos_10055091cc7f5320_133_evaluate)
            	HX_STACK_ARG(parser,"parser")
            	HX_STACK_ARG(expression,"expression")
            	HX_STACK_ARG(threadId,"threadId")
            	HX_STACK_ARG(frameId,"frameId")
HXLINE( 133)
HXLINE( 134)		HX_VARI(  ::Dynamic,result) = null();
HXLINE( 135)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 136)			HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Interp,interp) = ::hxcpp::debug::jsonrpc::VariablesPrinter_obj::initInterp(threadId,frameId,true);
HXLINE( 137)			HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,ast) = parser->parseString(expression,null());
HXLINE( 138)			HX_VARI(  ::Dynamic,evalRes) = interp->execute(ast);
HXLINE( 141)			 ::hxcpp::debug::jsonrpc::Value result1 = ::hxcpp::debug::jsonrpc::VariablesPrinter_obj::resolveValue(evalRes);
HXLINE( 139)			result =  ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("value",71,7f,b8,31),result1)
            				->setFixed(1,HX_("name",4b,72,ff,48),expression)
            				->setFixed(2,HX_("type",ba,f2,08,4d),::hxcpp::debug::jsonrpc::VariablesPrinter_obj::getType(evalRes)));
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 144)				{
HXLINE( 144)					null();
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 146)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(VariablesPrinter_obj,evaluate,return )

 ::hxcpp::debug::jsonrpc::eval::Interp VariablesPrinter_obj::initInterp(int threadId,int frameId,::hx::Null< bool >  __o_exposeMembers){
            		bool exposeMembers = __o_exposeMembers.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_10055091cc7f5320_149_initInterp)
            	HX_STACK_ARG(threadId,"threadId")
            	HX_STACK_ARG(frameId,"frameId")
            	HX_STACK_ARG(exposeMembers,"exposeMembers")
HXLINE( 149)
HXLINE( 150)		HX_VARI( ::Array< ::String >,stackVariables) = ::cpp::vm::Debugger_obj::getStackVariables(threadId,frameId,false);
HXLINE( 151)		HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Interp,interp) =  ::hxcpp::debug::jsonrpc::eval::Interp_obj::__alloc( HX_CTX );
HXLINE( 152)		{
HXLINE( 152)			int _g = 0;
HXDLIN( 152)			while((_g < stackVariables->length)){
HXLINE( 152)				HX_VARI( ::String,vName) = stackVariables->__get(_g);
HXDLIN( 152)				_g = (_g + 1);
HXLINE( 153)				HX_VARI(  ::Dynamic,value) = ::cpp::vm::Debugger_obj::getStackVariableValue(threadId,frameId,vName,false);
HXLINE( 154)				HX_VARI( ::hx::Class,klass) = ::Type_obj::getClass(value);
HXLINE( 155)				{
HXLINE( 155)					::Dynamic this1 = interp->variables;
HXDLIN( 155)					( ( ::haxe::ds::StringMap)(this1) )->set(::Type_obj::getClassName(klass),( ( ::Dynamic)(klass) ));
            				}
HXLINE( 156)				if (exposeMembers) {
HXLINE( 157)					if ((vName == HX_("this",5e,06,fc,4c))) {
HXLINE( 158)						HX_VARI( ::Array< ::String >,members) = ::Reflect_obj::fields(value);
HXLINE( 159)						{
HXLINE( 159)							int _g = 0;
HXDLIN( 159)							while((_g < members->length)){
HXLINE( 159)								HX_VARI( ::String,mName) = members->__get(_g);
HXDLIN( 159)								_g = (_g + 1);
HXLINE( 160)								HX_VARI(  ::Dynamic,mValue) = ::hxcpp::debug::jsonrpc::VariablesPrinter_obj::propGet(value,mName);
HXLINE( 161)								interp->variables->set(mName,mValue);
            							}
            						}
            					}
            				}
HXLINE( 165)				interp->variables->set(vName,value);
            			}
            		}
HXLINE( 168)		return interp;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(VariablesPrinter_obj,initInterp,return )

::Array< ::String > VariablesPrinter_obj::getClassProps(::hx::Class c){
            	HX_STACKFRAME(&_hx_pos_10055091cc7f5320_171_getClassProps)
            	HX_STACK_ARG(c,"c")
HXLINE( 171)
HXLINE( 172)		HX_VARI( ::Array< ::String >,fields) = ::Array_obj< ::String >::__new(0);
HXLINE( 173)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 174)			HX_VARI( ::Array< ::String >,sflds) = ::Type_obj::getClassFields(c);
HXLINE( 175)			{
HXLINE( 175)				int _g = 0;
HXDLIN( 175)				while((_g < sflds->length)){
HXLINE( 175)					HX_VARI( ::String,f) = sflds->__get(_g);
HXDLIN( 175)					_g = (_g + 1);
HXLINE( 176)					fields->push((HX_("static ",b2,3b,65,36) + f));
            				}
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 178)				{
HXLINE( 178)					null();
            				}
HXDLIN( 178)				HX_VARI(  ::Dynamic,e) = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 179)				{
HXLINE( 179)					 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 179)					::String _hx_tmp1 = (HX_("error:",72,83,68,51) + ::Std_obj::string(e));
HXDLIN( 179)					_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("/home/kay/.vscode/extensions/vshaxe.hxcpp-debugger-1.2.4/hxcpp-debug-server/./hxcpp/debug/jsonrpc/VariablesPrinter.hx",4a,a8,f7,5a),179,HX_("hxcpp.debug.jsonrpc.VariablesPrinter",4a,a1,9c,7b),HX_("getClassProps",4e,70,20,68)));
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 181)		return fields;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(VariablesPrinter_obj,getClassProps,return )

::Array< ::String > VariablesPrinter_obj::getProps(::hx::Class c){
            	HX_STACKFRAME(&_hx_pos_10055091cc7f5320_184_getProps)
            	HX_STACK_ARG(c,"c")
HXLINE( 184)
HXLINE( 185)		HX_VARI( ::Array< ::String >,fields) = ::Array_obj< ::String >::__new(0);
HXLINE( 186)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 187)			HX_VARI( ::Array< ::String >,flds) = ::Type_obj::getInstanceFields(c);
HXLINE( 188)			{
HXLINE( 188)				int _g = 0;
HXDLIN( 188)				while((_g < flds->length)){
HXLINE( 188)					HX_VARI( ::String,f) = flds->__get(_g);
HXDLIN( 188)					_g = (_g + 1);
HXLINE( 189)					fields->push(f);
            				}
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 191)				{
HXLINE( 191)					null();
            				}
HXDLIN( 191)				HX_VARI(  ::Dynamic,e) = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 192)				{
HXLINE( 192)					 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 192)					::String _hx_tmp1 = (HX_("error:",72,83,68,51) + ::Std_obj::string(e));
HXDLIN( 192)					_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("/home/kay/.vscode/extensions/vshaxe.hxcpp-debugger-1.2.4/hxcpp-debug-server/./hxcpp/debug/jsonrpc/VariablesPrinter.hx",4a,a8,f7,5a),192,HX_("hxcpp.debug.jsonrpc.VariablesPrinter",4a,a1,9c,7b),HX_("getProps",fa,f6,66,28)));
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 194)		return fields;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(VariablesPrinter_obj,getProps,return )

::String VariablesPrinter_obj::getType( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_10055091cc7f5320_197_getType)
            	HX_STACK_ARG(value,"value")
HXLINE( 197)
HXLINE( 198)		 ::ValueType _g = ::Type_obj::_hx_typeof(value);
HXDLIN( 198)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: case (int)8: {
HXLINE( 200)				return HX_("Unknown",6a,4b,cc,ae);
            			}
            			break;
            			case (int)1: {
HXLINE( 203)				return HX_("Int",cf,c4,37,00);
            			}
            			break;
            			case (int)2: {
HXLINE( 206)				return HX_("Float",7c,35,c4,95);
            			}
            			break;
            			case (int)3: {
HXLINE( 209)				return HX_("Bool",4a,b0,f4,2b);
            			}
            			break;
            			case (int)4: {
HXLINE( 212)				if (::Std_obj::isOfType(value,( ( ::Dynamic)(::hx::ClassOf< ::hx::Class >()) ))) {
HXLINE( 213)					return ::hxcpp::debug::jsonrpc::VariablesPrinter_obj::getClassName(value);
            				}
HXLINE( 215)				return HX_("Anonymous",4d,f4,e5,19);
            			}
            			break;
            			case (int)5: {
HXLINE( 218)				return HX_("Function",38,67,04,ee);
            			}
            			break;
            			case (int)6: {
HXLINE( 229)				::hx::Class _g1 = _g->_hx_getObject(0).StaticCast< ::hx::Class >();
HXDLIN( 229)				::hx::Class _hx_switch_0 = _g1;
            				if (  (_hx_switch_0==::hx::ArrayBase::__mClass) ){
HXLINE( 227)					return HX_("Array",79,dd,bc,b8);
HXDLIN( 227)					goto _hx_goto_18;
            				}
            				if (  (_hx_switch_0==::hx::ClassOf< ::String >()) ){
HXLINE( 224)					return HX_("String",f1,9c,c4,45);
HXDLIN( 224)					goto _hx_goto_18;
            				}
            				/* default */{
HXLINE( 229)					HX_VARI( ::hx::Class,c) = _g1;
HXLINE( 230)					return ::hxcpp::debug::jsonrpc::VariablesPrinter_obj::getClassName(c);
            				}
            				_hx_goto_18:;
            			}
            			break;
            			case (int)7: {
HXLINE( 220)				HX_VARI( ::hx::Class,e) = _g->_hx_getObject(0).StaticCast< ::hx::Class >();
HXLINE( 221)				return ::Type_obj::getEnumName(e);
            			}
            			break;
            		}
HXLINE( 198)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(VariablesPrinter_obj,getType,return )

::String VariablesPrinter_obj::getClassName(::hx::Class klass){
            	HX_STACKFRAME(&_hx_pos_10055091cc7f5320_235_getClassName)
            	HX_STACK_ARG(klass,"klass")
HXLINE( 235)
HXLINE( 236)		HX_VARI( ::String,className) = HX_("<unknown class name>",59,21,10,75);
HXLINE( 237)		if (::hx::IsNotNull( klass )) {
HXLINE( 238)			HX_VARI( ::String,klassName) = ::Type_obj::getClassName(klass);
HXLINE( 239)			bool _hx_tmp;
HXDLIN( 239)			if (::hx::IsNotNull( klassName )) {
HXLINE( 239)				_hx_tmp = (0 != klassName.length);
            			}
            			else {
HXLINE( 239)				_hx_tmp = false;
            			}
HXDLIN( 239)			if (_hx_tmp) {
HXLINE( 240)				className = klassName;
            			}
            		}
HXLINE( 243)		return className;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(VariablesPrinter_obj,getClassName,return )

::String VariablesPrinter_obj::toString( ::hxcpp::debug::jsonrpc::VarType varType){
            	HX_STACKFRAME(&_hx_pos_10055091cc7f5320_247_toString)
            	HX_STACK_ARG(varType,"varType")
HXLINE( 247)
HXDLIN( 247)		return HX_("",00,00,00,00);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(VariablesPrinter_obj,toString,return )

 ::Dynamic VariablesPrinter_obj::arrayGet( ::Dynamic value,int index){
            	HX_STACKFRAME(&_hx_pos_10055091cc7f5320_250_arrayGet)
            	HX_STACK_ARG(value,"value")
            	HX_STACK_ARG(index,"index")
HXLINE( 250)
HXLINE( 251)		HX_VARI( ::cpp::VirtualArray,arr) = ( (::cpp::VirtualArray)(value) );
HXLINE( 252)		return arr->__get(index);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(VariablesPrinter_obj,arrayGet,return )

 ::Dynamic VariablesPrinter_obj::propGet( ::Dynamic value,::String key){
            	HX_STACKFRAME(&_hx_pos_10055091cc7f5320_255_propGet)
            	HX_STACK_ARG(value,"value")
            	HX_STACK_ARG(key,"key")
HXLINE( 255)
HXLINE( 256)		HX_VARI(  ::Dynamic,propVal) = null();
HXLINE( 257)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 258)			propVal = ::Reflect_obj::getProperty(value,key);
HXLINE( 259)			if (::hx::IsNull( propVal )) {
HXLINE( 260)				propVal = ::Reflect_obj::field(value,key);
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 261)				{
HXLINE( 261)					null();
            				}
HXDLIN( 261)				HX_VARI(  ::Dynamic,e) = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 262)				::haxe::Log_obj::trace(e,::hx::SourceInfo(HX_("/home/kay/.vscode/extensions/vshaxe.hxcpp-debugger-1.2.4/hxcpp-debug-server/./hxcpp/debug/jsonrpc/VariablesPrinter.hx",4a,a8,f7,5a),262,HX_("hxcpp.debug.jsonrpc.VariablesPrinter",4a,a1,9c,7b),HX_("propGet",b3,98,cb,f9)));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 264)		return propVal;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(VariablesPrinter_obj,propGet,return )

 ::Dynamic VariablesPrinter_obj::propStaticGet(::hx::Class klass, ::Dynamic value,::String key){
            	HX_STACKFRAME(&_hx_pos_10055091cc7f5320_267_propStaticGet)
            	HX_STACK_ARG(klass,"klass")
            	HX_STACK_ARG(value,"value")
            	HX_STACK_ARG(key,"key")
HXLINE( 267)
HXLINE( 268)		HX_VARI(  ::Dynamic,propVal) = null();
HXLINE( 269)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 270)			HX_VARI( ::Array< ::String >,parts) = key.split(HX_(" ",20,00,00,00));
HXLINE( 271)			key = parts->__get((parts->length - 1));
HXLINE( 272)			propVal = ::Reflect_obj::getProperty(klass,key);
HXLINE( 273)			if (::hx::IsNull( propVal )) {
HXLINE( 274)				propVal = ::hxcpp::debug::jsonrpc::VariablesPrinter_obj::propGet(value,key);
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 276)				{
HXLINE( 276)					null();
            				}
HXDLIN( 276)				HX_VARI(  ::Dynamic,e) = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 277)				::haxe::Log_obj::trace(e,::hx::SourceInfo(HX_("/home/kay/.vscode/extensions/vshaxe.hxcpp-debugger-1.2.4/hxcpp-debug-server/./hxcpp/debug/jsonrpc/VariablesPrinter.hx",4a,a8,f7,5a),277,HX_("hxcpp.debug.jsonrpc.VariablesPrinter",4a,a1,9c,7b),HX_("propStaticGet",65,88,5c,f5)));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 279)		return propVal;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(VariablesPrinter_obj,propStaticGet,return )

 ::Dynamic VariablesPrinter_obj::stringMapGet( ::Dynamic value,::String key){
            	HX_STACKFRAME(&_hx_pos_10055091cc7f5320_282_stringMapGet)
            	HX_STACK_ARG(value,"value")
            	HX_STACK_ARG(key,"key")
HXLINE( 282)
HXLINE( 283)		HX_VARI(  ::haxe::ds::StringMap,map) = ( ( ::haxe::ds::StringMap)(value) );
HXLINE( 284)		return map->get(key);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(VariablesPrinter_obj,stringMapGet,return )

 ::Dynamic VariablesPrinter_obj::intMapGet( ::Dynamic value,::String key){
            	HX_STACKFRAME(&_hx_pos_10055091cc7f5320_287_intMapGet)
            	HX_STACK_ARG(value,"value")
            	HX_STACK_ARG(key,"key")
HXLINE( 287)
HXLINE( 288)		HX_VARI(  ::haxe::ds::IntMap,map) = ( ( ::haxe::ds::IntMap)(value) );
HXLINE( 289)		return map->get(( (int)(::Std_obj::parseInt(key)) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(VariablesPrinter_obj,intMapGet,return )


VariablesPrinter_obj::VariablesPrinter_obj()
{
}

bool VariablesPrinter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { outValue = getType_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"propGet") ) { outValue = propGet_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"evaluate") ) { outValue = evaluate_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getProps") ) { outValue = getProps_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"arrayGet") ) { outValue = arrayGet_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"intMapGet") ) { outValue = intMapGet_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initInterp") ) { outValue = initInterp_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resolveValue") ) { outValue = resolveValue_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getClassName") ) { outValue = getClassName_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"stringMapGet") ) { outValue = stringMapGet_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getClassProps") ) { outValue = getClassProps_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"propStaticGet") ) { outValue = propStaticGet_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getInnerVariables") ) { outValue = getInnerVariables_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *VariablesPrinter_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *VariablesPrinter_obj_sStaticStorageInfo = 0;
#endif

::hx::Class VariablesPrinter_obj::__mClass;

static ::String VariablesPrinter_obj_sStaticFields[] = {
	HX_("getInnerVariables",77,5d,a1,21),
	HX_("resolveValue",e5,c4,3d,6a),
	HX_("evaluate",59,60,50,01),
	HX_("initInterp",04,d5,cb,a2),
	HX_("getClassProps",4e,70,20,68),
	HX_("getProps",fa,f6,66,28),
	HX_("getType",70,a2,8b,1f),
	HX_("getClassName",2d,2f,94,eb),
	HX_("toString",ac,d0,6e,38),
	HX_("arrayGet",7d,90,6a,ef),
	HX_("propGet",b3,98,cb,f9),
	HX_("propStaticGet",65,88,5c,f5),
	HX_("stringMapGet",0b,47,5b,50),
	HX_("intMapGet",a9,15,02,de),
	::String(null())
};

void VariablesPrinter_obj::__register()
{
	VariablesPrinter_obj _hx_dummy;
	VariablesPrinter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxcpp.debug.jsonrpc.VariablesPrinter",4a,a1,9c,7b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &VariablesPrinter_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(VariablesPrinter_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< VariablesPrinter_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VariablesPrinter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VariablesPrinter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxcpp
} // end namespace debug
} // end namespace jsonrpc
