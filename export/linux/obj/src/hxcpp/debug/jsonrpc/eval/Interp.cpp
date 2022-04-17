#include <hxcpp.h>

#ifndef INCLUDED_IntIterator
#include <IntIterator.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_CType
#include <hxcpp/debug/jsonrpc/eval/CType.h>
#endif
#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_Const
#include <hxcpp/debug/jsonrpc/eval/Const.h>
#endif
#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_Error
#include <hxcpp/debug/jsonrpc/eval/Error.h>
#endif
#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_Expr
#include <hxcpp/debug/jsonrpc/eval/Expr.h>
#endif
#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_Interp
#include <hxcpp/debug/jsonrpc/eval/Interp.h>
#endif
#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval__Interp_Stop
#include <hxcpp/debug/jsonrpc/eval/_Interp/Stop.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_515bc5e2ef25e982_23_new,"hxcpp.debug.jsonrpc.eval.Interp","new",0xa8d4d111,"hxcpp.debug.jsonrpc.eval.Interp.new","hxcpp/debug/jsonrpc/eval/Interp.hx",23,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_37_initOps,"hxcpp.debug.jsonrpc.eval.Interp","initOps",0x32791033,"hxcpp.debug.jsonrpc.eval.Interp.initOps","hxcpp/debug/jsonrpc/eval/Interp.hx",37,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_38_initOps,"hxcpp.debug.jsonrpc.eval.Interp","initOps",0x32791033,"hxcpp.debug.jsonrpc.eval.Interp.initOps","hxcpp/debug/jsonrpc/eval/Interp.hx",38,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_39_initOps,"hxcpp.debug.jsonrpc.eval.Interp","initOps",0x32791033,"hxcpp.debug.jsonrpc.eval.Interp.initOps","hxcpp/debug/jsonrpc/eval/Interp.hx",39,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_40_initOps,"hxcpp.debug.jsonrpc.eval.Interp","initOps",0x32791033,"hxcpp.debug.jsonrpc.eval.Interp.initOps","hxcpp/debug/jsonrpc/eval/Interp.hx",40,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_41_initOps,"hxcpp.debug.jsonrpc.eval.Interp","initOps",0x32791033,"hxcpp.debug.jsonrpc.eval.Interp.initOps","hxcpp/debug/jsonrpc/eval/Interp.hx",41,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_42_initOps,"hxcpp.debug.jsonrpc.eval.Interp","initOps",0x32791033,"hxcpp.debug.jsonrpc.eval.Interp.initOps","hxcpp/debug/jsonrpc/eval/Interp.hx",42,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_43_initOps,"hxcpp.debug.jsonrpc.eval.Interp","initOps",0x32791033,"hxcpp.debug.jsonrpc.eval.Interp.initOps","hxcpp/debug/jsonrpc/eval/Interp.hx",43,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_44_initOps,"hxcpp.debug.jsonrpc.eval.Interp","initOps",0x32791033,"hxcpp.debug.jsonrpc.eval.Interp.initOps","hxcpp/debug/jsonrpc/eval/Interp.hx",44,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_45_initOps,"hxcpp.debug.jsonrpc.eval.Interp","initOps",0x32791033,"hxcpp.debug.jsonrpc.eval.Interp.initOps","hxcpp/debug/jsonrpc/eval/Interp.hx",45,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_46_initOps,"hxcpp.debug.jsonrpc.eval.Interp","initOps",0x32791033,"hxcpp.debug.jsonrpc.eval.Interp.initOps","hxcpp/debug/jsonrpc/eval/Interp.hx",46,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_47_initOps,"hxcpp.debug.jsonrpc.eval.Interp","initOps",0x32791033,"hxcpp.debug.jsonrpc.eval.Interp.initOps","hxcpp/debug/jsonrpc/eval/Interp.hx",47,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_48_initOps,"hxcpp.debug.jsonrpc.eval.Interp","initOps",0x32791033,"hxcpp.debug.jsonrpc.eval.Interp.initOps","hxcpp/debug/jsonrpc/eval/Interp.hx",48,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_49_initOps,"hxcpp.debug.jsonrpc.eval.Interp","initOps",0x32791033,"hxcpp.debug.jsonrpc.eval.Interp.initOps","hxcpp/debug/jsonrpc/eval/Interp.hx",49,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_50_initOps,"hxcpp.debug.jsonrpc.eval.Interp","initOps",0x32791033,"hxcpp.debug.jsonrpc.eval.Interp.initOps","hxcpp/debug/jsonrpc/eval/Interp.hx",50,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_51_initOps,"hxcpp.debug.jsonrpc.eval.Interp","initOps",0x32791033,"hxcpp.debug.jsonrpc.eval.Interp.initOps","hxcpp/debug/jsonrpc/eval/Interp.hx",51,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_52_initOps,"hxcpp.debug.jsonrpc.eval.Interp","initOps",0x32791033,"hxcpp.debug.jsonrpc.eval.Interp.initOps","hxcpp/debug/jsonrpc/eval/Interp.hx",52,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_53_initOps,"hxcpp.debug.jsonrpc.eval.Interp","initOps",0x32791033,"hxcpp.debug.jsonrpc.eval.Interp.initOps","hxcpp/debug/jsonrpc/eval/Interp.hx",53,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_54_initOps,"hxcpp.debug.jsonrpc.eval.Interp","initOps",0x32791033,"hxcpp.debug.jsonrpc.eval.Interp.initOps","hxcpp/debug/jsonrpc/eval/Interp.hx",54,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_55_initOps,"hxcpp.debug.jsonrpc.eval.Interp","initOps",0x32791033,"hxcpp.debug.jsonrpc.eval.Interp.initOps","hxcpp/debug/jsonrpc/eval/Interp.hx",55,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_57_initOps,"hxcpp.debug.jsonrpc.eval.Interp","initOps",0x32791033,"hxcpp.debug.jsonrpc.eval.Interp.initOps","hxcpp/debug/jsonrpc/eval/Interp.hx",57,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_58_initOps,"hxcpp.debug.jsonrpc.eval.Interp","initOps",0x32791033,"hxcpp.debug.jsonrpc.eval.Interp.initOps","hxcpp/debug/jsonrpc/eval/Interp.hx",58,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_59_initOps,"hxcpp.debug.jsonrpc.eval.Interp","initOps",0x32791033,"hxcpp.debug.jsonrpc.eval.Interp.initOps","hxcpp/debug/jsonrpc/eval/Interp.hx",59,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_60_initOps,"hxcpp.debug.jsonrpc.eval.Interp","initOps",0x32791033,"hxcpp.debug.jsonrpc.eval.Interp.initOps","hxcpp/debug/jsonrpc/eval/Interp.hx",60,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_61_initOps,"hxcpp.debug.jsonrpc.eval.Interp","initOps",0x32791033,"hxcpp.debug.jsonrpc.eval.Interp.initOps","hxcpp/debug/jsonrpc/eval/Interp.hx",61,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_62_initOps,"hxcpp.debug.jsonrpc.eval.Interp","initOps",0x32791033,"hxcpp.debug.jsonrpc.eval.Interp.initOps","hxcpp/debug/jsonrpc/eval/Interp.hx",62,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_63_initOps,"hxcpp.debug.jsonrpc.eval.Interp","initOps",0x32791033,"hxcpp.debug.jsonrpc.eval.Interp.initOps","hxcpp/debug/jsonrpc/eval/Interp.hx",63,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_64_initOps,"hxcpp.debug.jsonrpc.eval.Interp","initOps",0x32791033,"hxcpp.debug.jsonrpc.eval.Interp.initOps","hxcpp/debug/jsonrpc/eval/Interp.hx",64,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_65_initOps,"hxcpp.debug.jsonrpc.eval.Interp","initOps",0x32791033,"hxcpp.debug.jsonrpc.eval.Interp.initOps","hxcpp/debug/jsonrpc/eval/Interp.hx",65,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_66_initOps,"hxcpp.debug.jsonrpc.eval.Interp","initOps",0x32791033,"hxcpp.debug.jsonrpc.eval.Interp.initOps","hxcpp/debug/jsonrpc/eval/Interp.hx",66,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_67_initOps,"hxcpp.debug.jsonrpc.eval.Interp","initOps",0x32791033,"hxcpp.debug.jsonrpc.eval.Interp.initOps","hxcpp/debug/jsonrpc/eval/Interp.hx",67,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_68_initOps,"hxcpp.debug.jsonrpc.eval.Interp","initOps",0x32791033,"hxcpp.debug.jsonrpc.eval.Interp.initOps","hxcpp/debug/jsonrpc/eval/Interp.hx",68,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_33_initOps,"hxcpp.debug.jsonrpc.eval.Interp","initOps",0x32791033,"hxcpp.debug.jsonrpc.eval.Interp.initOps","hxcpp/debug/jsonrpc/eval/Interp.hx",33,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_71_assign,"hxcpp.debug.jsonrpc.eval.Interp","assign",0x9f240a1e,"hxcpp.debug.jsonrpc.eval.Interp.assign","hxcpp/debug/jsonrpc/eval/Interp.hx",71,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_99_assignOp,"hxcpp.debug.jsonrpc.eval.Interp","assignOp",0xb7d192df,"hxcpp.debug.jsonrpc.eval.Interp.assignOp","hxcpp/debug/jsonrpc/eval/Interp.hx",99,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_97_assignOp,"hxcpp.debug.jsonrpc.eval.Interp","assignOp",0xb7d192df,"hxcpp.debug.jsonrpc.eval.Interp.assignOp","hxcpp/debug/jsonrpc/eval/Interp.hx",97,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_102_evalAssignOp,"hxcpp.debug.jsonrpc.eval.Interp","evalAssignOp",0xcc70ba1b,"hxcpp.debug.jsonrpc.eval.Interp.evalAssignOp","hxcpp/debug/jsonrpc/eval/Interp.hx",102,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_133_increment,"hxcpp.debug.jsonrpc.eval.Interp","increment",0x719721a0,"hxcpp.debug.jsonrpc.eval.Interp.increment","hxcpp/debug/jsonrpc/eval/Interp.hx",133,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_183_execute,"hxcpp.debug.jsonrpc.eval.Interp","execute",0x32fab766,"hxcpp.debug.jsonrpc.eval.Interp.execute","hxcpp/debug/jsonrpc/eval/Interp.hx",183,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_191_exprReturn,"hxcpp.debug.jsonrpc.eval.Interp","exprReturn",0xec6d5334,"hxcpp.debug.jsonrpc.eval.Interp.exprReturn","hxcpp/debug/jsonrpc/eval/Interp.hx",191,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_208_duplicate,"hxcpp.debug.jsonrpc.eval.Interp","duplicate",0xe0af3cfc,"hxcpp.debug.jsonrpc.eval.Interp.duplicate","hxcpp/debug/jsonrpc/eval/Interp.hx",208,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_216_restore,"hxcpp.debug.jsonrpc.eval.Interp","restore",0xd19e147f,"hxcpp.debug.jsonrpc.eval.Interp.restore","hxcpp/debug/jsonrpc/eval/Interp.hx",216,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_223_error,"hxcpp.debug.jsonrpc.eval.Interp","error",0xfe711ab9,"hxcpp.debug.jsonrpc.eval.Interp.error","hxcpp/debug/jsonrpc/eval/Interp.hx",223,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_231_rethrow,"hxcpp.debug.jsonrpc.eval.Interp","rethrow",0x5d185dc4,"hxcpp.debug.jsonrpc.eval.Interp.rethrow","hxcpp/debug/jsonrpc/eval/Interp.hx",231,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_234_resolve,"hxcpp.debug.jsonrpc.eval.Interp","resolve",0xce4dc01d,"hxcpp.debug.jsonrpc.eval.Interp.resolve","hxcpp/debug/jsonrpc/eval/Interp.hx",234,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_247_expr,"hxcpp.debug.jsonrpc.eval.Interp","expr",0x0b7d9764,"hxcpp.debug.jsonrpc.eval.Interp.expr","hxcpp/debug/jsonrpc/eval/Interp.hx",247,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_332_expr,"hxcpp.debug.jsonrpc.eval.Interp","expr",0x0b7d9764,"hxcpp.debug.jsonrpc.eval.Interp.expr","hxcpp/debug/jsonrpc/eval/Interp.hx",332,0xe213eb61)
static const int _hx_array_data_6bd8f49f_62[] = {
	(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_504_doWhileLoop,"hxcpp.debug.jsonrpc.eval.Interp","doWhileLoop",0xa5019b5b,"hxcpp.debug.jsonrpc.eval.Interp.doWhileLoop","hxcpp/debug/jsonrpc/eval/Interp.hx",504,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_522_whileLoop,"hxcpp.debug.jsonrpc.eval.Interp","whileLoop",0x21305e26,"hxcpp.debug.jsonrpc.eval.Interp.whileLoop","hxcpp/debug/jsonrpc/eval/Interp.hx",522,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_540_makeIterator,"hxcpp.debug.jsonrpc.eval.Interp","makeIterator",0x8b4ebf2b,"hxcpp.debug.jsonrpc.eval.Interp.makeIterator","hxcpp/debug/jsonrpc/eval/Interp.hx",540,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_549_forLoop,"hxcpp.debug.jsonrpc.eval.Interp","forLoop",0x3056ff3e,"hxcpp.debug.jsonrpc.eval.Interp.forLoop","hxcpp/debug/jsonrpc/eval/Interp.hx",549,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_571_isMap,"hxcpp.debug.jsonrpc.eval.Interp","isMap",0x4c9883c3,"hxcpp.debug.jsonrpc.eval.Interp.isMap","hxcpp/debug/jsonrpc/eval/Interp.hx",571,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_575_getMapValue,"hxcpp.debug.jsonrpc.eval.Interp","getMapValue",0x39594b9c,"hxcpp.debug.jsonrpc.eval.Interp.getMapValue","hxcpp/debug/jsonrpc/eval/Interp.hx",575,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_579_setMapValue,"hxcpp.debug.jsonrpc.eval.Interp","setMapValue",0x43c652a8,"hxcpp.debug.jsonrpc.eval.Interp.setMapValue","hxcpp/debug/jsonrpc/eval/Interp.hx",579,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_582_get,"hxcpp.debug.jsonrpc.eval.Interp","get",0xa8cf8147,"hxcpp.debug.jsonrpc.eval.Interp.get","hxcpp/debug/jsonrpc/eval/Interp.hx",582,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_590_set,"hxcpp.debug.jsonrpc.eval.Interp","set",0xa8d89c53,"hxcpp.debug.jsonrpc.eval.Interp.set","hxcpp/debug/jsonrpc/eval/Interp.hx",590,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_598_fcall,"hxcpp.debug.jsonrpc.eval.Interp","fcall",0x87e092f5,"hxcpp.debug.jsonrpc.eval.Interp.fcall","hxcpp/debug/jsonrpc/eval/Interp.hx",598,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_602_call,"hxcpp.debug.jsonrpc.eval.Interp","call",0x0a19b2cd,"hxcpp.debug.jsonrpc.eval.Interp.call","hxcpp/debug/jsonrpc/eval/Interp.hx",602,0xe213eb61)
HX_LOCAL_STACK_FRAME(_hx_pos_515bc5e2ef25e982_605_cnew,"hxcpp.debug.jsonrpc.eval.Interp","cnew",0x0a238a0c,"hxcpp.debug.jsonrpc.eval.Interp.cnew","hxcpp/debug/jsonrpc/eval/Interp.hx",605,0xe213eb61)
namespace hxcpp{
namespace debug{
namespace jsonrpc{
namespace eval{

void Interp_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_515bc5e2ef25e982_23_new)
            	HX_STACK_THIS(this)
HXLINE(  23)
HXLINE(  24)		this->variables =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  25)		this->locals =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  26)		this->declared = ::Array_obj< ::Dynamic>::__new();
HXLINE(  27)		{
HXLINE(  27)			 ::Dynamic value = null();
HXDLIN(  27)			this->variables->set(HX_("null",87,9e,0e,49),value);
            		}
HXLINE(  28)		this->variables->set(HX_("true",4e,a7,03,4d),true);
HXLINE(  29)		this->variables->set(HX_("false",a3,35,4f,fb),false);
HXLINE(  30)		this->initOps();
            	}

Dynamic Interp_obj::__CreateEmpty() { return new Interp_obj; }

void *Interp_obj::_hx_vtable = 0;

Dynamic Interp_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Interp_obj > _hx_result = new Interp_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Interp_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7988ac2d;
}

void Interp_obj::initOps(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::hxcpp::debug::jsonrpc::eval::Interp,me) HXARGC(2)
            		 ::Dynamic _hx_run( ::hxcpp::debug::jsonrpc::eval::Expr e1, ::hxcpp::debug::jsonrpc::eval::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_515bc5e2ef25e982_37_initOps)
            			HX_STACK_ARG(e1,"e1")
            			HX_STACK_ARG(e2,"e2")
HXLINE(  37)
HXLINE(  37)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN(  37)			return (_hx_tmp + me->expr(e2));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::hxcpp::debug::jsonrpc::eval::Interp,me) HXARGC(2)
            		Float _hx_run( ::hxcpp::debug::jsonrpc::eval::Expr e1, ::hxcpp::debug::jsonrpc::eval::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_515bc5e2ef25e982_38_initOps)
            			HX_STACK_ARG(e1,"e1")
            			HX_STACK_ARG(e2,"e2")
HXLINE(  38)
HXLINE(  38)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN(  38)			return (( (Float)(_hx_tmp) ) - ( (Float)(me->expr(e2)) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::hxcpp::debug::jsonrpc::eval::Interp,me) HXARGC(2)
            		Float _hx_run( ::hxcpp::debug::jsonrpc::eval::Expr e1, ::hxcpp::debug::jsonrpc::eval::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_515bc5e2ef25e982_39_initOps)
            			HX_STACK_ARG(e1,"e1")
            			HX_STACK_ARG(e2,"e2")
HXLINE(  39)
HXLINE(  39)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN(  39)			return (( (Float)(_hx_tmp) ) * ( (Float)(me->expr(e2)) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::hxcpp::debug::jsonrpc::eval::Interp,me) HXARGC(2)
            		Float _hx_run( ::hxcpp::debug::jsonrpc::eval::Expr e1, ::hxcpp::debug::jsonrpc::eval::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_515bc5e2ef25e982_40_initOps)
            			HX_STACK_ARG(e1,"e1")
            			HX_STACK_ARG(e2,"e2")
HXLINE(  40)
HXLINE(  40)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN(  40)			return (( (Float)(_hx_tmp) ) / ( (Float)(me->expr(e2)) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_4, ::hxcpp::debug::jsonrpc::eval::Interp,me) HXARGC(2)
            		Float _hx_run( ::hxcpp::debug::jsonrpc::eval::Expr e1, ::hxcpp::debug::jsonrpc::eval::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_515bc5e2ef25e982_41_initOps)
            			HX_STACK_ARG(e1,"e1")
            			HX_STACK_ARG(e2,"e2")
HXLINE(  41)
HXLINE(  41)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN(  41)			return ::hx::Mod(_hx_tmp,me->expr(e2));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_5, ::hxcpp::debug::jsonrpc::eval::Interp,me) HXARGC(2)
            		int _hx_run( ::hxcpp::debug::jsonrpc::eval::Expr e1, ::hxcpp::debug::jsonrpc::eval::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_515bc5e2ef25e982_42_initOps)
            			HX_STACK_ARG(e1,"e1")
            			HX_STACK_ARG(e2,"e2")
HXLINE(  42)
HXLINE(  42)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN(  42)			return (( (int)(_hx_tmp) ) & ( (int)(me->expr(e2)) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_6, ::hxcpp::debug::jsonrpc::eval::Interp,me) HXARGC(2)
            		int _hx_run( ::hxcpp::debug::jsonrpc::eval::Expr e1, ::hxcpp::debug::jsonrpc::eval::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_515bc5e2ef25e982_43_initOps)
            			HX_STACK_ARG(e1,"e1")
            			HX_STACK_ARG(e2,"e2")
HXLINE(  43)
HXLINE(  43)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN(  43)			return (( (int)(_hx_tmp) ) | ( (int)(me->expr(e2)) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_7, ::hxcpp::debug::jsonrpc::eval::Interp,me) HXARGC(2)
            		int _hx_run( ::hxcpp::debug::jsonrpc::eval::Expr e1, ::hxcpp::debug::jsonrpc::eval::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_515bc5e2ef25e982_44_initOps)
            			HX_STACK_ARG(e1,"e1")
            			HX_STACK_ARG(e2,"e2")
HXLINE(  44)
HXLINE(  44)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN(  44)			return (( (int)(_hx_tmp) ) ^ ( (int)(me->expr(e2)) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_8, ::hxcpp::debug::jsonrpc::eval::Interp,me) HXARGC(2)
            		int _hx_run( ::hxcpp::debug::jsonrpc::eval::Expr e1, ::hxcpp::debug::jsonrpc::eval::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_515bc5e2ef25e982_45_initOps)
            			HX_STACK_ARG(e1,"e1")
            			HX_STACK_ARG(e2,"e2")
HXLINE(  45)
HXLINE(  45)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN(  45)			return (( (int)(_hx_tmp) ) << ( (int)(me->expr(e2)) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_9, ::hxcpp::debug::jsonrpc::eval::Interp,me) HXARGC(2)
            		int _hx_run( ::hxcpp::debug::jsonrpc::eval::Expr e1, ::hxcpp::debug::jsonrpc::eval::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_515bc5e2ef25e982_46_initOps)
            			HX_STACK_ARG(e1,"e1")
            			HX_STACK_ARG(e2,"e2")
HXLINE(  46)
HXLINE(  46)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN(  46)			return (( (int)(_hx_tmp) ) >> ( (int)(me->expr(e2)) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_10, ::hxcpp::debug::jsonrpc::eval::Interp,me) HXARGC(2)
            		int _hx_run( ::hxcpp::debug::jsonrpc::eval::Expr e1, ::hxcpp::debug::jsonrpc::eval::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_515bc5e2ef25e982_47_initOps)
            			HX_STACK_ARG(e1,"e1")
            			HX_STACK_ARG(e2,"e2")
HXLINE(  47)
HXLINE(  47)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN(  47)			return ::hx::UShr(( (int)(_hx_tmp) ),( (int)(me->expr(e2)) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_11, ::hxcpp::debug::jsonrpc::eval::Interp,me) HXARGC(2)
            		bool _hx_run( ::hxcpp::debug::jsonrpc::eval::Expr e1, ::hxcpp::debug::jsonrpc::eval::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_515bc5e2ef25e982_48_initOps)
            			HX_STACK_ARG(e1,"e1")
            			HX_STACK_ARG(e2,"e2")
HXLINE(  48)
HXLINE(  48)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN(  48)			return ::hx::IsEq( _hx_tmp,me->expr(e2) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_12, ::hxcpp::debug::jsonrpc::eval::Interp,me) HXARGC(2)
            		bool _hx_run( ::hxcpp::debug::jsonrpc::eval::Expr e1, ::hxcpp::debug::jsonrpc::eval::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_515bc5e2ef25e982_49_initOps)
            			HX_STACK_ARG(e1,"e1")
            			HX_STACK_ARG(e2,"e2")
HXLINE(  49)
HXLINE(  49)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN(  49)			return ::hx::IsNotEq( _hx_tmp,me->expr(e2) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_13, ::hxcpp::debug::jsonrpc::eval::Interp,me) HXARGC(2)
            		bool _hx_run( ::hxcpp::debug::jsonrpc::eval::Expr e1, ::hxcpp::debug::jsonrpc::eval::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_515bc5e2ef25e982_50_initOps)
            			HX_STACK_ARG(e1,"e1")
            			HX_STACK_ARG(e2,"e2")
HXLINE(  50)
HXLINE(  50)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN(  50)			return ::hx::IsGreaterEq( _hx_tmp,me->expr(e2) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_14, ::hxcpp::debug::jsonrpc::eval::Interp,me) HXARGC(2)
            		bool _hx_run( ::hxcpp::debug::jsonrpc::eval::Expr e1, ::hxcpp::debug::jsonrpc::eval::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_515bc5e2ef25e982_51_initOps)
            			HX_STACK_ARG(e1,"e1")
            			HX_STACK_ARG(e2,"e2")
HXLINE(  51)
HXLINE(  51)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN(  51)			return ::hx::IsLessEq( _hx_tmp,me->expr(e2) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_15, ::hxcpp::debug::jsonrpc::eval::Interp,me) HXARGC(2)
            		bool _hx_run( ::hxcpp::debug::jsonrpc::eval::Expr e1, ::hxcpp::debug::jsonrpc::eval::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_515bc5e2ef25e982_52_initOps)
            			HX_STACK_ARG(e1,"e1")
            			HX_STACK_ARG(e2,"e2")
HXLINE(  52)
HXLINE(  52)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN(  52)			return ::hx::IsGreater( _hx_tmp,me->expr(e2) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_16, ::hxcpp::debug::jsonrpc::eval::Interp,me) HXARGC(2)
            		bool _hx_run( ::hxcpp::debug::jsonrpc::eval::Expr e1, ::hxcpp::debug::jsonrpc::eval::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_515bc5e2ef25e982_53_initOps)
            			HX_STACK_ARG(e1,"e1")
            			HX_STACK_ARG(e2,"e2")
HXLINE(  53)
HXLINE(  53)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN(  53)			return ::hx::IsLess( _hx_tmp,me->expr(e2) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_17, ::hxcpp::debug::jsonrpc::eval::Interp,me) HXARGC(2)
            		bool _hx_run( ::hxcpp::debug::jsonrpc::eval::Expr e1, ::hxcpp::debug::jsonrpc::eval::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_515bc5e2ef25e982_54_initOps)
            			HX_STACK_ARG(e1,"e1")
            			HX_STACK_ARG(e2,"e2")
HXLINE(  54)
HXLINE(  54)			if (::hx::IsNotEq( me->expr(e1),true )) {
HXLINE(  54)				return ::hx::IsEq( me->expr(e2),true );
            			}
            			else {
HXLINE(  54)				return true;
            			}
HXDLIN(  54)			return false;
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_18, ::hxcpp::debug::jsonrpc::eval::Interp,me) HXARGC(2)
            		bool _hx_run( ::hxcpp::debug::jsonrpc::eval::Expr e1, ::hxcpp::debug::jsonrpc::eval::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_515bc5e2ef25e982_55_initOps)
            			HX_STACK_ARG(e1,"e1")
            			HX_STACK_ARG(e2,"e2")
HXLINE(  55)
HXLINE(  55)			if (::hx::IsEq( me->expr(e1),true )) {
HXLINE(  55)				return ::hx::IsEq( me->expr(e2),true );
            			}
            			else {
HXLINE(  55)				return false;
            			}
HXDLIN(  55)			return false;
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_19, ::hxcpp::debug::jsonrpc::eval::Interp,me) HXARGC(2)
            		 ::IntIterator _hx_run( ::hxcpp::debug::jsonrpc::eval::Expr e1, ::hxcpp::debug::jsonrpc::eval::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_515bc5e2ef25e982_57_initOps)
            			HX_STACK_ARG(e1,"e1")
            			HX_STACK_ARG(e2,"e2")
HXLINE(  57)
HXLINE(  57)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN(  57)			return  ::IntIterator_obj::__alloc( HX_CTX ,( (int)(_hx_tmp) ),( (int)(me->expr(e2)) ));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_20) HXARGC(2)
            		 ::Dynamic _hx_run( ::Dynamic v1, ::Dynamic v2){
            			HX_GC_STACKFRAME(&_hx_pos_515bc5e2ef25e982_58_initOps)
            			HX_STACK_ARG(v1,"v1")
            			HX_STACK_ARG(v2,"v2")
HXLINE(  58)
HXLINE(  58)			return (v1 + v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_21) HXARGC(2)
            		Float _hx_run(Float v1,Float v2){
            			HX_GC_STACKFRAME(&_hx_pos_515bc5e2ef25e982_59_initOps)
            			HX_STACK_ARG(v1,"v1")
            			HX_STACK_ARG(v2,"v2")
HXLINE(  59)
HXLINE(  59)			return (v1 - v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_22) HXARGC(2)
            		Float _hx_run(Float v1,Float v2){
            			HX_GC_STACKFRAME(&_hx_pos_515bc5e2ef25e982_60_initOps)
            			HX_STACK_ARG(v1,"v1")
            			HX_STACK_ARG(v2,"v2")
HXLINE(  60)
HXLINE(  60)			return (v1 * v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_23) HXARGC(2)
            		Float _hx_run(Float v1,Float v2){
            			HX_GC_STACKFRAME(&_hx_pos_515bc5e2ef25e982_61_initOps)
            			HX_STACK_ARG(v1,"v1")
            			HX_STACK_ARG(v2,"v2")
HXLINE(  61)
HXLINE(  61)			return (v1 / v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_24) HXARGC(2)
            		Float _hx_run(Float v1,Float v2){
            			HX_GC_STACKFRAME(&_hx_pos_515bc5e2ef25e982_62_initOps)
            			HX_STACK_ARG(v1,"v1")
            			HX_STACK_ARG(v2,"v2")
HXLINE(  62)
HXLINE(  62)			return ::hx::Mod(v1,v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_25) HXARGC(2)
            		int _hx_run(int v1,int v2){
            			HX_GC_STACKFRAME(&_hx_pos_515bc5e2ef25e982_63_initOps)
            			HX_STACK_ARG(v1,"v1")
            			HX_STACK_ARG(v2,"v2")
HXLINE(  63)
HXLINE(  63)			return (v1 & v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_26) HXARGC(2)
            		int _hx_run(int v1,int v2){
            			HX_GC_STACKFRAME(&_hx_pos_515bc5e2ef25e982_64_initOps)
            			HX_STACK_ARG(v1,"v1")
            			HX_STACK_ARG(v2,"v2")
HXLINE(  64)
HXLINE(  64)			return (v1 | v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_27) HXARGC(2)
            		int _hx_run(int v1,int v2){
            			HX_GC_STACKFRAME(&_hx_pos_515bc5e2ef25e982_65_initOps)
            			HX_STACK_ARG(v1,"v1")
            			HX_STACK_ARG(v2,"v2")
HXLINE(  65)
HXLINE(  65)			return (v1 ^ v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_28) HXARGC(2)
            		int _hx_run(int v1,int v2){
            			HX_GC_STACKFRAME(&_hx_pos_515bc5e2ef25e982_66_initOps)
            			HX_STACK_ARG(v1,"v1")
            			HX_STACK_ARG(v2,"v2")
HXLINE(  66)
HXLINE(  66)			return (v1 << v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_29) HXARGC(2)
            		int _hx_run(int v1,int v2){
            			HX_GC_STACKFRAME(&_hx_pos_515bc5e2ef25e982_67_initOps)
            			HX_STACK_ARG(v1,"v1")
            			HX_STACK_ARG(v2,"v2")
HXLINE(  67)
HXLINE(  67)			return (v1 >> v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_30) HXARGC(2)
            		int _hx_run(int v1,int v2){
            			HX_GC_STACKFRAME(&_hx_pos_515bc5e2ef25e982_68_initOps)
            			HX_STACK_ARG(v1,"v1")
            			HX_STACK_ARG(v2,"v2")
HXLINE(  68)
HXLINE(  68)			return ::hx::UShr(v1,v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_GC_STACKFRAME(&_hx_pos_515bc5e2ef25e982_33_initOps)
            	HX_STACK_THIS(this)
HXLINE(  33)
HXLINE(  34)		HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Interp,me) = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  35)		this->binops =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  37)		this->binops->set(HX_("+",2b,00,00,00), ::Dynamic(new _hx_Closure_0(me)));
HXLINE(  38)		this->binops->set(HX_("-",2d,00,00,00), ::Dynamic(new _hx_Closure_1(me)));
HXLINE(  39)		this->binops->set(HX_("*",2a,00,00,00), ::Dynamic(new _hx_Closure_2(me)));
HXLINE(  40)		this->binops->set(HX_("/",2f,00,00,00), ::Dynamic(new _hx_Closure_3(me)));
HXLINE(  41)		this->binops->set(HX_("%",25,00,00,00), ::Dynamic(new _hx_Closure_4(me)));
HXLINE(  42)		this->binops->set(HX_("&",26,00,00,00), ::Dynamic(new _hx_Closure_5(me)));
HXLINE(  43)		this->binops->set(HX_("|",7c,00,00,00), ::Dynamic(new _hx_Closure_6(me)));
HXLINE(  44)		this->binops->set(HX_("^",5e,00,00,00), ::Dynamic(new _hx_Closure_7(me)));
HXLINE(  45)		this->binops->set(HX_("<<",80,34,00,00), ::Dynamic(new _hx_Closure_8(me)));
HXLINE(  46)		this->binops->set(HX_(">>",40,36,00,00), ::Dynamic(new _hx_Closure_9(me)));
HXLINE(  47)		this->binops->set(HX_(">>>",fe,41,2f,00), ::Dynamic(new _hx_Closure_10(me)));
HXLINE(  48)		this->binops->set(HX_("==",60,35,00,00), ::Dynamic(new _hx_Closure_11(me)));
HXLINE(  49)		this->binops->set(HX_("!=",fc,1c,00,00), ::Dynamic(new _hx_Closure_12(me)));
HXLINE(  50)		this->binops->set(HX_(">=",3f,36,00,00), ::Dynamic(new _hx_Closure_13(me)));
HXLINE(  51)		this->binops->set(HX_("<=",81,34,00,00), ::Dynamic(new _hx_Closure_14(me)));
HXLINE(  52)		this->binops->set(HX_(">",3e,00,00,00), ::Dynamic(new _hx_Closure_15(me)));
HXLINE(  53)		this->binops->set(HX_("<",3c,00,00,00), ::Dynamic(new _hx_Closure_16(me)));
HXLINE(  54)		this->binops->set(HX_("||",80,6c,00,00), ::Dynamic(new _hx_Closure_17(me)));
HXLINE(  55)		this->binops->set(HX_("&&",40,21,00,00), ::Dynamic(new _hx_Closure_18(me)));
HXLINE(  56)		this->binops->set(HX_("=",3d,00,00,00),this->assign_dyn());
HXLINE(  57)		this->binops->set(HX_("...",ee,0f,23,00), ::Dynamic(new _hx_Closure_19(me)));
HXLINE(  58)		this->assignOp(HX_("+=",b2,25,00,00), ::Dynamic(new _hx_Closure_20()));
HXLINE(  59)		this->assignOp(HX_("-=",70,27,00,00), ::Dynamic(new _hx_Closure_21()));
HXLINE(  60)		this->assignOp(HX_("*=",d3,24,00,00), ::Dynamic(new _hx_Closure_22()));
HXLINE(  61)		this->assignOp(HX_("/=",2e,29,00,00), ::Dynamic(new _hx_Closure_23()));
HXLINE(  62)		this->assignOp(HX_("%=",78,20,00,00), ::Dynamic(new _hx_Closure_24()));
HXLINE(  63)		this->assignOp(HX_("&=",57,21,00,00), ::Dynamic(new _hx_Closure_25()));
HXLINE(  64)		this->assignOp(HX_("|=",41,6c,00,00), ::Dynamic(new _hx_Closure_26()));
HXLINE(  65)		this->assignOp(HX_("^=",1f,52,00,00), ::Dynamic(new _hx_Closure_27()));
HXLINE(  66)		this->assignOp(HX_("<<=",bd,bb,2d,00), ::Dynamic(new _hx_Closure_28()));
HXLINE(  67)		this->assignOp(HX_(">>=",fd,41,2f,00), ::Dynamic(new _hx_Closure_29()));
HXLINE(  68)		this->assignOp(HX_(">>>=",7f,7c,2a,29), ::Dynamic(new _hx_Closure_30()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Interp_obj,initOps,(void))

 ::Dynamic Interp_obj::assign( ::hxcpp::debug::jsonrpc::eval::Expr e1, ::hxcpp::debug::jsonrpc::eval::Expr e2){
            	HX_STACKFRAME(&_hx_pos_515bc5e2ef25e982_71_assign)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(e1,"e1")
            	HX_STACK_ARG(e2,"e2")
HXLINE(  71)
HXLINE(  72)		HX_VARI(  ::Dynamic,v) = this->expr(e2);
HXLINE(  73)		switch((int)(e1->_hx_getIndex())){
            			case (int)1: {
HXLINE(  74)				HX_VARI( ::String,id) = e1->_hx_getString(0);
HXDLIN(  74)				{
HXLINE(  75)					HX_VARI(  ::Dynamic,l) = this->locals->get(id);
HXLINE(  76)					if (::hx::IsNull( l )) {
HXLINE(  77)						this->variables->set(id,v);
            					}
            					else {
HXLINE(  79)						l->__SetField(HX_("r",72,00,00,00),v,::hx::paccDynamic);
            					}
            				}
            			}
            			break;
            			case (int)5: {
HXLINE(  80)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e) = e1->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  80)				HX_VARI( ::String,f) = e1->_hx_getString(1);
HXLINE(  81)				v = this->set(this->expr(e),f,v);
            			}
            			break;
            			case (int)16: {
HXLINE(  82)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e) = e1->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  82)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,index) = e1->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  82)				{
HXLINE(  83)					HX_VARI(  ::Dynamic,arr) = this->expr(e);
HXLINE(  84)					HX_VARI(  ::Dynamic,index1) = this->expr(index);
HXLINE(  85)					if (::Std_obj::isOfType(arr,( ( ::Dynamic)(::hx::ClassOf< ::haxe::IMap >()) ))) {
HXLINE(  86)						::haxe::IMap_obj::set( ::hx::interface_check(arr,0x09c2bd39),index1,v);
            					}
            					else {
HXLINE(  88)						arr->__SetItem(( (int)(index1) ),v);
            					}
            				}
            			}
            			break;
            			default:{
HXLINE(  92)				 ::hxcpp::debug::jsonrpc::eval::Error e = ::hxcpp::debug::jsonrpc::eval::Error_obj::EInvalidOp(HX_("=",3d,00,00,00));
HXDLIN(  92)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            			}
            		}
HXLINE(  94)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,assign,return )

void Interp_obj::assignOp(::String op, ::Dynamic fop){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0,::String,op, ::hxcpp::debug::jsonrpc::eval::Interp,me, ::Dynamic,fop) HXARGC(2)
            		 ::Dynamic _hx_run( ::hxcpp::debug::jsonrpc::eval::Expr e1, ::hxcpp::debug::jsonrpc::eval::Expr e2){
            			HX_STACKFRAME(&_hx_pos_515bc5e2ef25e982_99_assignOp)
            			HX_STACK_ARG(e1,"e1")
            			HX_STACK_ARG(e2,"e2")
HXLINE(  99)
HXLINE(  99)			return me->evalAssignOp(op,fop,e1,e2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_515bc5e2ef25e982_97_assignOp)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(op,"op")
            	HX_STACK_ARG(fop,"fop")
HXLINE(  97)
HXLINE(  98)		HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Interp,me) = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  99)		this->binops->set(op, ::Dynamic(new _hx_Closure_0(op,me,fop)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,assignOp,(void))

 ::Dynamic Interp_obj::evalAssignOp(::String op, ::Dynamic fop, ::hxcpp::debug::jsonrpc::eval::Expr e1, ::hxcpp::debug::jsonrpc::eval::Expr e2){
            	HX_STACKFRAME(&_hx_pos_515bc5e2ef25e982_102_evalAssignOp)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(op,"op")
            	HX_STACK_ARG(fop,"fop")
            	HX_STACK_ARG(e1,"e1")
            	HX_STACK_ARG(e2,"e2")
HXLINE( 102)
HXLINE( 103)		HX_VAR(  ::Dynamic,v);
HXLINE( 104)		switch((int)(e1->_hx_getIndex())){
            			case (int)1: {
HXLINE( 105)				HX_VARI( ::String,id) = e1->_hx_getString(0);
HXDLIN( 105)				{
HXLINE( 106)					HX_VARI(  ::Dynamic,l) = this->locals->get(id);
HXLINE( 107)					 ::Dynamic v1 = this->expr(e1);
HXDLIN( 107)					v = fop(v1,this->expr(e2));
HXLINE( 108)					if (::hx::IsNull( l )) {
HXLINE( 109)						this->variables->set(id,v);
            					}
            					else {
HXLINE( 111)						l->__SetField(HX_("r",72,00,00,00),v,::hx::paccDynamic);
            					}
            				}
            			}
            			break;
            			case (int)5: {
HXLINE( 112)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e) = e1->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 112)				HX_VARI( ::String,f) = e1->_hx_getString(1);
HXDLIN( 112)				{
HXLINE( 113)					HX_VARI(  ::Dynamic,obj) = this->expr(e);
HXLINE( 114)					 ::Dynamic v1 = this->get(obj,f);
HXDLIN( 114)					v = fop(v1,this->expr(e2));
HXLINE( 115)					v = this->set(obj,f,v);
            				}
            			}
            			break;
            			case (int)16: {
HXLINE( 116)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e) = e1->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 116)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,index) = e1->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 116)				{
HXLINE( 117)					HX_VARI(  ::Dynamic,arr) = this->expr(e);
HXLINE( 118)					HX_VARI(  ::Dynamic,index1) = this->expr(index);
HXLINE( 119)					if (::Std_obj::isOfType(arr,( ( ::Dynamic)(::hx::ClassOf< ::haxe::IMap >()) ))) {
HXLINE( 120)						 ::Dynamic v1 = ::haxe::IMap_obj::get( ::hx::interface_check(arr,0x09c2bd39),index1);
HXDLIN( 120)						v = fop(v1,this->expr(e2));
HXLINE( 121)						::haxe::IMap_obj::set( ::hx::interface_check(arr,0x09c2bd39),index1,v);
            					}
            					else {
HXLINE( 123)						 ::Dynamic arr1 = arr->__GetItem(( (int)(index1) ));
HXDLIN( 123)						v = fop(arr1,this->expr(e2));
HXLINE( 124)						arr->__SetItem(( (int)(index1) ),v);
            					}
            				}
            			}
            			break;
            			default:{
HXLINE( 127)				 ::hxcpp::debug::jsonrpc::eval::Error e = ::hxcpp::debug::jsonrpc::eval::Error_obj::EInvalidOp(op);
HXDLIN( 127)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            			}
            		}
HXLINE( 129)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Interp_obj,evalAssignOp,return )

 ::Dynamic Interp_obj::increment( ::hxcpp::debug::jsonrpc::eval::Expr e,bool prefix,int delta){
            	HX_STACKFRAME(&_hx_pos_515bc5e2ef25e982_133_increment)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(e,"e")
            	HX_STACK_ARG(prefix,"prefix")
            	HX_STACK_ARG(delta,"delta")
HXLINE( 133)
HXDLIN( 133)		switch((int)(e->_hx_getIndex())){
            			case (int)1: {
HXLINE( 134)				HX_VARI( ::String,id) = e->_hx_getString(0);
HXLINE( 135)				HX_VARI(  ::Dynamic,l) = this->locals->get(id);
HXLINE( 136)				HX_VAR(  ::Dynamic,v);
HXDLIN( 136)				if (::hx::IsNull( l )) {
HXLINE( 136)					v = this->variables->get(id);
            				}
            				else {
HXLINE( 136)					v =  ::Dynamic(l->__Field(HX_("r",72,00,00,00),::hx::paccDynamic));
            				}
HXLINE( 137)				if (prefix) {
HXLINE( 138)					v = (v + delta);
HXLINE( 139)					if (::hx::IsNull( l )) {
HXLINE( 140)						this->variables->set(id,v);
            					}
            					else {
HXLINE( 142)						l->__SetField(HX_("r",72,00,00,00),v,::hx::paccDynamic);
            					}
            				}
            				else {
HXLINE( 143)					if (::hx::IsNull( l )) {
HXLINE( 144)						this->variables->set(id,(v + delta));
            					}
            					else {
HXLINE( 146)						l->__SetField(HX_("r",72,00,00,00),(v + delta),::hx::paccDynamic);
            					}
            				}
HXLINE( 147)				return v;
            			}
            			break;
            			case (int)5: {
HXLINE( 148)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 148)				HX_VARI( ::String,f) = e->_hx_getString(1);
HXLINE( 149)				HX_VARI(  ::Dynamic,obj) = this->expr(e1);
HXLINE( 150)				HX_VARI(  ::Dynamic,v) = this->get(obj,f);
HXLINE( 151)				if (prefix) {
HXLINE( 152)					v = (v + delta);
HXLINE( 153)					this->set(obj,f,v);
            				}
            				else {
HXLINE( 155)					this->set(obj,f,(v + delta));
            				}
HXLINE( 156)				return v;
            			}
            			break;
            			case (int)16: {
HXLINE( 157)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 157)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,index) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE( 158)				HX_VARI(  ::Dynamic,arr) = this->expr(e1);
HXLINE( 159)				HX_VARI(  ::Dynamic,index1) = this->expr(index);
HXLINE( 160)				if (::Std_obj::isOfType(arr,( ( ::Dynamic)(::hx::ClassOf< ::haxe::IMap >()) ))) {
HXLINE( 161)					HX_VARI( int,v) = ( (int)(::haxe::IMap_obj::get( ::hx::interface_check(arr,0x09c2bd39),index1)) );
HXLINE( 162)					if (prefix) {
HXLINE( 163)						v = (v + delta);
HXLINE( 164)						::haxe::IMap_obj::set( ::hx::interface_check(arr,0x09c2bd39),index1,v);
            					}
            					else {
HXLINE( 166)						::haxe::IMap_obj::set( ::hx::interface_check(arr,0x09c2bd39),index1,(v + delta));
            					}
HXLINE( 168)					return v;
            				}
            				else {
HXLINE( 170)					HX_VARI( int,v) = ( (int)(arr->__GetItem(( (int)(index1) ))) );
HXLINE( 171)					if (prefix) {
HXLINE( 172)						v = (v + delta);
HXLINE( 173)						arr->__SetItem(( (int)(index1) ),v);
            					}
            					else {
HXLINE( 175)						arr->__SetItem(( (int)(index1) ),(v + delta));
            					}
HXLINE( 176)					return v;
            				}
            			}
            			break;
            			default:{
HXLINE( 179)				::String e;
HXDLIN( 179)				if ((delta > 0)) {
HXLINE( 179)					e = HX_("++",a0,25,00,00);
            				}
            				else {
HXLINE( 179)					e = HX_("--",60,27,00,00);
            				}
HXDLIN( 179)				 ::hxcpp::debug::jsonrpc::eval::Error e1 = ::hxcpp::debug::jsonrpc::eval::Error_obj::EInvalidOp(e);
HXDLIN( 179)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e1));
            			}
            		}
HXLINE( 133)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,increment,return )

 ::Dynamic Interp_obj::execute( ::hxcpp::debug::jsonrpc::eval::Expr expr){
            	HX_GC_STACKFRAME(&_hx_pos_515bc5e2ef25e982_183_execute)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(expr,"expr")
HXLINE( 183)
HXLINE( 184)		this->depth = 0;
HXLINE( 185)		this->locals =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 186)		this->declared = ::Array_obj< ::Dynamic>::__new();
HXLINE( 187)		return this->exprReturn(expr);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,execute,return )

 ::Dynamic Interp_obj::exprReturn( ::hxcpp::debug::jsonrpc::eval::Expr e){
            	HX_STACKFRAME(&_hx_pos_515bc5e2ef25e982_191_exprReturn)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(e,"e")
HXLINE( 191)
HXDLIN( 191)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 192)			return this->expr(e);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 193)				{
HXLINE( 193)					null();
            				}
HXDLIN( 193)				 ::Dynamic _g1 = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 191)				if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::hxcpp::debug::jsonrpc::eval::_Interp::Stop >())) {
HXLINE( 193)					HX_VARI(  ::hxcpp::debug::jsonrpc::eval::_Interp::Stop,e) = _g1;
HXLINE( 194)					switch((int)(e->_hx_getIndex())){
            						case (int)0: {
HXLINE( 196)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid break",b6,ee,24,9d)));
            						}
            						break;
            						case (int)1: {
HXLINE( 198)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid continue",d0,6a,b7,3f)));
            						}
            						break;
            						case (int)2: {
HXLINE( 200)							HX_VARI(  ::Dynamic,v) = this->returnValue;
HXLINE( 201)							this->returnValue = null();
HXLINE( 202)							return v;
            						}
            						break;
            					}
            				}
            				else {
HXDLIN( 191)					HX_STACK_DO_THROW(_g);
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXDLIN( 191)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,exprReturn,return )

 ::haxe::ds::StringMap Interp_obj::duplicate( ::haxe::ds::StringMap h){
            	HX_GC_STACKFRAME(&_hx_pos_515bc5e2ef25e982_208_duplicate)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(h,"h")
HXLINE( 208)
HXLINE( 209)		HX_VARI(  ::haxe::ds::StringMap,h2) =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 210)		{
HXLINE( 210)			HX_VARI(  ::Dynamic,k) = h->keys();
HXDLIN( 210)			while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 210)				HX_VARI( ::String,k1) = ( (::String)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 211)				h2->set(k1,h->get(k1));
            			}
            		}
HXLINE( 212)		return h2;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,duplicate,return )

void Interp_obj::restore(int old){
            	HX_STACKFRAME(&_hx_pos_515bc5e2ef25e982_216_restore)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(old,"old")
HXLINE( 216)
HXDLIN( 216)		while((this->declared->length > old)){
HXLINE( 217)			HX_VARI(  ::Dynamic,d) = this->declared->pop();
HXLINE( 218)			this->locals->set(( (::String)(d->__Field(HX_("n",6e,00,00,00),::hx::paccDynamic)) ), ::Dynamic(d->__Field(HX_("old",a7,98,54,00),::hx::paccDynamic)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,restore,(void))

 ::Dynamic Interp_obj::error( ::hxcpp::debug::jsonrpc::eval::Error e,::hx::Null< bool >  __o_rethrow){
            		bool rethrow = __o_rethrow.Default(false);
            	HX_STACKFRAME(&_hx_pos_515bc5e2ef25e982_223_error)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(e,"e")
            	HX_STACK_ARG(rethrow,"rethrow")
HXLINE( 223)
HXDLIN( 223)		if (rethrow) {
HXLINE( 224)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            		}
            		else {
HXLINE( 226)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            		}
HXLINE( 223)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,error,return )

void Interp_obj::rethrow( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_515bc5e2ef25e982_231_rethrow)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(e,"e")
HXLINE( 231)
HXDLIN( 231)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,rethrow,(void))

 ::Dynamic Interp_obj::resolve(::String id){
            	HX_STACKFRAME(&_hx_pos_515bc5e2ef25e982_234_resolve)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(id,"id")
HXLINE( 234)
HXLINE( 235)		HX_VARI(  ::Dynamic,l) = this->locals->get(id);
HXLINE( 236)		if (::hx::IsNotNull( l )) {
HXLINE( 237)			return  ::Dynamic(l->__Field(HX_("r",72,00,00,00),::hx::paccDynamic));
            		}
HXLINE( 238)		HX_VARI(  ::Dynamic,v) = this->variables->get(id);
HXLINE( 239)		bool _hx_tmp;
HXDLIN( 239)		if (::hx::IsNull( v )) {
HXLINE( 239)			_hx_tmp = !(this->variables->exists(id));
            		}
            		else {
HXLINE( 239)			_hx_tmp = false;
            		}
HXDLIN( 239)		if (_hx_tmp) {
HXLINE( 240)			v = ::hxcpp::debug::jsonrpc::eval::Interp_obj::globals->get(id);
            		}
            		else {
HXLINE( 241)			if (::hx::IsNull( v )) {
HXLINE( 242)				 ::hxcpp::debug::jsonrpc::eval::Error e = ::hxcpp::debug::jsonrpc::eval::Error_obj::EUnknownVariable(id);
HXDLIN( 242)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            			}
            		}
HXLINE( 244)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,resolve,return )

 ::Dynamic Interp_obj::expr( ::hxcpp::debug::jsonrpc::eval::Expr e){
            	HX_GC_STACKFRAME(&_hx_pos_515bc5e2ef25e982_247_expr)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(e,"e")
HXLINE( 247)
HXDLIN( 247)		 ::hxcpp::debug::jsonrpc::eval::Interp _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 248)		switch((int)(e->_hx_getIndex())){
            			case (int)0: {
HXLINE( 249)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Const,c) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Const >();
HXLINE( 250)				switch((int)(c->_hx_getIndex())){
            					case (int)0: {
HXLINE( 251)						HX_VARI( int,v) = c->_hx_getInt(0);
HXDLIN( 251)						return v;
            					}
            					break;
            					case (int)1: {
HXLINE( 252)						HX_VARI( Float,f) = c->_hx_getFloat(0);
HXDLIN( 252)						return f;
            					}
            					break;
            					case (int)2: {
HXLINE( 253)						HX_VARI( ::String,s) = c->_hx_getString(0);
HXDLIN( 253)						return s;
            					}
            					break;
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 255)				HX_VARI( ::String,id) = e->_hx_getString(0);
HXLINE( 256)				return this->resolve(id);
            			}
            			break;
            			case (int)2: {
HXLINE( 257)				 ::hxcpp::debug::jsonrpc::eval::CType _g = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::CType >();
HXDLIN( 257)				HX_VARI( ::String,n) = e->_hx_getString(0);
HXDLIN( 257)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE( 258)				::Array< ::Dynamic> _hx_tmp = this->declared;
HXDLIN( 258)				_hx_tmp->push( ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("n",6e,00,00,00),n)
            					->setFixed(1,HX_("old",a7,98,54,00),this->locals->get(n))));
HXLINE( 259)				{
HXLINE( 259)					::Dynamic this1 = this->locals;
HXDLIN( 259)					 ::Dynamic value;
HXDLIN( 259)					if (::hx::IsNull( e1 )) {
HXLINE( 259)						value = null();
            					}
            					else {
HXLINE( 259)						value = this->expr(e1);
            					}
HXDLIN( 259)					( ( ::haxe::ds::StringMap)(this1) )->set(n, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("r",72,00,00,00),value)));
            				}
HXLINE( 260)				return null();
            			}
            			break;
            			case (int)3: {
HXLINE( 261)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE( 262)				return this->expr(e1);
            			}
            			break;
            			case (int)4: {
HXLINE( 263)				HX_VARI( ::Array< ::Dynamic>,exprs) = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 264)				HX_VARI( int,old) = this->declared->length;
HXLINE( 265)				HX_VARI(  ::Dynamic,v) = null();
HXLINE( 266)				{
HXLINE( 266)					int _g = 0;
HXDLIN( 266)					while((_g < exprs->length)){
HXLINE( 266)						HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e) = exprs->__get(_g).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 266)						_g = (_g + 1);
HXLINE( 267)						v = this->expr(e);
            					}
            				}
HXLINE( 268)				this->restore(old);
HXLINE( 269)				return v;
            			}
            			break;
            			case (int)5: {
HXLINE( 270)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 270)				HX_VARI( ::String,f) = e->_hx_getString(1);
HXLINE( 271)				return this->get(this->expr(e1),f);
            			}
            			break;
            			case (int)6: {
HXLINE( 272)				HX_VARI( ::String,op) = e->_hx_getString(0);
HXDLIN( 272)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 272)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e2) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE( 273)				HX_VARI(  ::Dynamic,fop) = this->binops->get(op);
HXLINE( 274)				if (::hx::IsNull( fop )) {
HXLINE( 275)					 ::hxcpp::debug::jsonrpc::eval::Error e = ::hxcpp::debug::jsonrpc::eval::Error_obj::EInvalidOp(op);
HXDLIN( 275)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            				}
HXLINE( 276)				return fop(e1,e2);
            			}
            			break;
            			case (int)7: {
HXLINE( 277)				HX_VARI( ::String,op) = e->_hx_getString(0);
HXDLIN( 277)				HX_VARI( bool,prefix) = e->_hx_getBool(1);
HXDLIN( 277)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE( 278)				::String _hx_switch_0 = op;
            				if (  (_hx_switch_0==HX_("!",21,00,00,00)) ){
HXLINE( 280)					return ::hx::IsNotEq( this->expr(e1),true );
HXDLIN( 280)					goto _hx_goto_48;
            				}
            				if (  (_hx_switch_0==HX_("++",a0,25,00,00)) ){
HXLINE( 284)					return this->increment(e1,prefix,1);
HXDLIN( 284)					goto _hx_goto_48;
            				}
            				if (  (_hx_switch_0==HX_("-",2d,00,00,00)) ){
HXLINE( 282)					return -(this->expr(e1));
HXDLIN( 282)					goto _hx_goto_48;
            				}
            				if (  (_hx_switch_0==HX_("--",60,27,00,00)) ){
HXLINE( 286)					return this->increment(e1,prefix,-1);
HXDLIN( 286)					goto _hx_goto_48;
            				}
            				if (  (_hx_switch_0==HX_("~",7e,00,00,00)) ){
HXLINE( 288)					return ~(( (int)(this->expr(e1)) ));
HXDLIN( 288)					goto _hx_goto_48;
            				}
            				/* default */{
HXLINE( 290)					 ::hxcpp::debug::jsonrpc::eval::Error e = ::hxcpp::debug::jsonrpc::eval::Error_obj::EInvalidOp(op);
HXDLIN( 290)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            				}
            				_hx_goto_48:;
            			}
            			break;
            			case (int)8: {
HXLINE( 292)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 292)				HX_VARI( ::Array< ::Dynamic>,params) = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 293)				HX_VARI( ::cpp::VirtualArray,args) = ::cpp::VirtualArray_obj::__new();
HXLINE( 294)				{
HXLINE( 294)					int _g = 0;
HXDLIN( 294)					while((_g < params->length)){
HXLINE( 294)						HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,p) = params->__get(_g).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 294)						_g = (_g + 1);
HXLINE( 295)						args->push(this->expr(p));
            					}
            				}
HXLINE( 297)				if ((e1->_hx_getIndex() == 5)) {
HXLINE( 298)					HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e) = e1->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 298)					HX_VARI( ::String,f) = e1->_hx_getString(1);
HXLINE( 299)					HX_VARI(  ::Dynamic,obj) = this->expr(e);
HXLINE( 300)					if (::hx::IsNull( obj )) {
HXLINE( 300)						 ::hxcpp::debug::jsonrpc::eval::Error e = ::hxcpp::debug::jsonrpc::eval::Error_obj::EInvalidAccess(f);
HXDLIN( 300)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            					}
HXLINE( 301)					return this->fcall(obj,f,args);
            				}
            				else {
HXLINE( 303)					return this->call(null(),this->expr(e1),args);
            				}
            			}
            			break;
            			case (int)9: {
HXLINE( 305)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,econd) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 305)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 305)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e2) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE( 306)				if (::hx::IsEq( this->expr(econd),true )) {
HXLINE( 306)					return this->expr(e1);
            				}
            				else {
HXLINE( 306)					if (::hx::IsNull( e2 )) {
HXLINE( 306)						return null();
            					}
            					else {
HXLINE( 306)						return this->expr(e2);
            					}
            				}
            			}
            			break;
            			case (int)10: {
HXLINE( 307)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,econd) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 307)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE( 308)				this->whileLoop(econd,e1);
HXLINE( 309)				return null();
            			}
            			break;
            			case (int)11: {
HXLINE( 313)				HX_VARI( ::String,v) = e->_hx_getString(0);
HXDLIN( 313)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,it) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 313)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE( 314)				this->forLoop(v,it,e1);
HXLINE( 315)				return null();
            			}
            			break;
            			case (int)12: {
HXLINE( 317)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::hxcpp::debug::jsonrpc::eval::_Interp::Stop_obj::SBreak_dyn()));
            			}
            			break;
            			case (int)13: {
HXLINE( 319)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::hxcpp::debug::jsonrpc::eval::_Interp::Stop_obj::SContinue_dyn()));
            			}
            			break;
            			case (int)14: {
            				HX_BEGIN_LOCAL_FUNC_S7(::hx::LocalFunc,_hx_Closure_0,::String,name, ::hxcpp::debug::jsonrpc::eval::Expr,fexpr, ::hxcpp::debug::jsonrpc::eval::Interp,_gthis,::Array< int >,minParams, ::hxcpp::debug::jsonrpc::eval::Interp,me,::Array< ::Dynamic>,params, ::haxe::ds::StringMap,capturedLocals) HXARGC(1)
            				 ::Dynamic _hx_run(::cpp::VirtualArray args){
            					HX_STACKFRAME(&_hx_pos_515bc5e2ef25e982_332_expr)
            					HX_STACK_ARG(args,"args")
HXLINE( 332)
HXLINE( 333)					if ((args->get_length() != params->length)) {
HXLINE( 334)						if ((args->get_length() < minParams->__get(0))) {
HXLINE( 335)							HX_VARI( ::String,str) = (((HX_("Invalid number of parameters. Got ",cb,2b,d9,b1) + args->get_length()) + HX_(", required ",ed,0c,66,93)) + minParams->__get(0));
HXLINE( 336)							if (::hx::IsNotNull( name )) {
HXLINE( 337)								str = (str + ((HX_(" for function '",f6,90,ab,a0) + name) + HX_("'",27,00,00,00)));
            							}
HXLINE( 338)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(str));
            						}
HXLINE( 341)						HX_VARI( ::cpp::VirtualArray,args2) = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 342)						HX_VARI( int,extraParams) = (args->get_length() - minParams->__get(0));
HXLINE( 343)						HX_VARI( int,pos) = 0;
HXLINE( 344)						{
HXLINE( 344)							int _g = 0;
HXDLIN( 344)							while((_g < params->length)){
HXLINE( 344)								HX_VARI(  ::Dynamic,p) = params->__get(_g);
HXDLIN( 344)								_g = (_g + 1);
HXLINE( 345)								if (( (bool)(p->__Field(HX_("opt",33,9c,54,00),::hx::paccDynamic)) )) {
HXLINE( 346)									if ((extraParams > 0)) {
HXLINE( 347)										pos = (pos + 1);
HXDLIN( 347)										args2->push(args->__get((pos - 1)));
HXLINE( 348)										extraParams = (extraParams - 1);
            									}
            									else {
HXLINE( 350)										args2->push(null());
            									}
            								}
            								else {
HXLINE( 352)									pos = (pos + 1);
HXDLIN( 352)									args2->push(args->__get((pos - 1)));
            								}
            							}
            						}
HXLINE( 353)						args = args2;
            					}
HXLINE( 355)					HX_VARI(  ::haxe::ds::StringMap,old) = me->locals;
HXDLIN( 355)					HX_VARI( int,depth) = me->depth;
HXLINE( 356)					me->depth++;
HXLINE( 357)					me->locals = me->duplicate(capturedLocals);
HXLINE( 358)					{
HXLINE( 358)						int _g = 0;
HXDLIN( 358)						int _g1 = params->length;
HXDLIN( 358)						while((_g < _g1)){
HXLINE( 358)							_g = (_g + 1);
HXDLIN( 358)							HX_VARI( int,i) = (_g - 1);
HXLINE( 359)							me->locals->set(( (::String)(params->__get(i)->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) ), ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("r",72,00,00,00),args->__get(i))));
            						}
            					}
HXLINE( 360)					HX_VARI(  ::Dynamic,r) = null();
HXLINE( 361)					if (_gthis->inTry) {
HXLINE( 362)						try {
            							HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 363)							r = me->exprReturn(fexpr);
            						} catch( ::Dynamic _hx_e) {
            							if (_hx_e.IsClass<  ::Dynamic >() ){
            								HX_STACK_BEGIN_CATCH
            								 ::Dynamic _g = _hx_e;
HXLINE( 364)								{
HXLINE( 364)									null();
            								}
HXDLIN( 364)								HX_VARI(  ::Dynamic,e) = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 365)								me->locals = old;
HXLINE( 366)								me->depth = depth;
HXLINE( 367)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            							}
            							else {
            								HX_STACK_DO_THROW(_hx_e);
            							}
            						}
            					}
            					else {
HXLINE( 369)						r = me->exprReturn(fexpr);
            					}
HXLINE( 370)					me->locals = old;
HXLINE( 371)					me->depth = depth;
HXLINE( 372)					return r;
            				}
            				HX_END_LOCAL_FUNC1(return)

HXLINE( 323)				 ::hxcpp::debug::jsonrpc::eval::CType _g = e->_hx_getObject(3).StaticCast<  ::hxcpp::debug::jsonrpc::eval::CType >();
HXDLIN( 323)				HX_VARI( ::Array< ::Dynamic>,params) = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 323)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,fexpr) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 323)				HX_VARI( ::String,name) = e->_hx_getString(2);
HXLINE( 324)				HX_VARI(  ::haxe::ds::StringMap,capturedLocals) = this->duplicate(this->locals);
HXLINE( 325)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Interp,me) = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 326)				HX_VARI( bool,hasOpt) = false;
HXDLIN( 326)				HX_VARI( ::Array< int >,minParams) = ::Array_obj< int >::fromData( _hx_array_data_6bd8f49f_62,1);
HXLINE( 327)				{
HXLINE( 327)					int _g1 = 0;
HXDLIN( 327)					while((_g1 < params->length)){
HXLINE( 327)						HX_VARI(  ::Dynamic,p) = params->__get(_g1);
HXDLIN( 327)						_g1 = (_g1 + 1);
HXLINE( 328)						if (( (bool)(p->__Field(HX_("opt",33,9c,54,00),::hx::paccDynamic)) )) {
HXLINE( 329)							hasOpt = true;
            						}
            						else {
HXLINE( 331)							minParams[0]++;
            						}
            					}
            				}
HXLINE( 332)				HX_VARI(  ::Dynamic,f) =  ::Dynamic(new _hx_Closure_0(name,fexpr,_gthis,minParams,me,params,capturedLocals));
HXLINE( 374)				HX_VARI(  ::Dynamic,f1) = ::Reflect_obj::makeVarArgs(f);
HXLINE( 375)				if (::hx::IsNotNull( name )) {
HXLINE( 376)					if ((this->depth == 0)) {
HXLINE( 378)						this->variables->set(name,f1);
            					}
            					else {
HXLINE( 381)						::Array< ::Dynamic> _hx_tmp = this->declared;
HXDLIN( 381)						::String name1 = name;
HXDLIN( 381)						_hx_tmp->push( ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("n",6e,00,00,00),name1)
            							->setFixed(1,HX_("old",a7,98,54,00),this->locals->get(name))));
HXLINE( 382)						HX_VARI(  ::Dynamic,ref) =  ::Dynamic(::hx::Anon_obj::Create(1)
            							->setFixed(0,HX_("r",72,00,00,00),f1));
HXLINE( 383)						this->locals->set(name,ref);
HXLINE( 384)						capturedLocals->set(name,ref);
            					}
            				}
HXLINE( 387)				return f1;
            			}
            			break;
            			case (int)15: {
HXLINE( 320)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE( 321)				 ::Dynamic _hx_tmp;
HXDLIN( 321)				if (::hx::IsNull( e1 )) {
HXLINE( 321)					_hx_tmp = null();
            				}
            				else {
HXLINE( 321)					_hx_tmp = this->expr(e1);
            				}
HXDLIN( 321)				this->returnValue = _hx_tmp;
HXLINE( 322)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::hxcpp::debug::jsonrpc::eval::_Interp::Stop_obj::SReturn_dyn()));
            			}
            			break;
            			case (int)16: {
HXLINE( 434)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 434)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,index) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE( 435)				HX_VARI(  ::Dynamic,arr) = this->expr(e1);
HXLINE( 436)				HX_VARI(  ::Dynamic,index1) = this->expr(index);
HXLINE( 437)				if (::Std_obj::isOfType(arr,( ( ::Dynamic)(::hx::ClassOf< ::haxe::IMap >()) ))) {
HXLINE( 438)					return ::haxe::IMap_obj::get( ::hx::interface_check(arr,0x09c2bd39),index1);
            				}
            				else {
HXLINE( 440)					return arr->__GetItem(( (int)(index1) ));
            				}
            			}
            			break;
            			case (int)17: {
HXLINE( 388)				HX_VARI( ::Array< ::Dynamic>,arr) = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 389)				bool _hx_tmp;
HXDLIN( 389)				if ((arr->length > 0)) {
HXLINE( 389)					 ::hxcpp::debug::jsonrpc::eval::Expr _g = arr->__get(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 389)					if ((_g->_hx_getIndex() == 6)) {
HXLINE( 389)						 ::hxcpp::debug::jsonrpc::eval::Expr _g1 = _g->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 389)						 ::hxcpp::debug::jsonrpc::eval::Expr _g2 = _g->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 389)						if ((_g->_hx_getString(0) == HX_("=>",61,35,00,00))) {
HXLINE( 389)							_hx_tmp = true;
            						}
            						else {
HXLINE( 389)							_hx_tmp = false;
            						}
            					}
            					else {
HXLINE( 389)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 389)					_hx_tmp = false;
            				}
HXDLIN( 389)				if (_hx_tmp) {
HXLINE( 390)					HX_VARI( bool,isAllString) = true;
HXLINE( 391)					HX_VARI( bool,isAllInt) = true;
HXLINE( 392)					HX_VARI( bool,isAllObject) = true;
HXLINE( 393)					HX_VARI( bool,isAllEnum) = true;
HXLINE( 394)					HX_VARI( ::cpp::VirtualArray,keys) = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 395)					HX_VARI( ::cpp::VirtualArray,values) = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 396)					{
HXLINE( 396)						int _g = 0;
HXDLIN( 396)						while((_g < arr->length)){
HXLINE( 396)							HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e) = arr->__get(_g).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 396)							_g = (_g + 1);
HXLINE( 397)							if ((e->_hx_getIndex() == 6)) {
HXLINE( 398)								if ((e->_hx_getString(0) == HX_("=>",61,35,00,00))) {
HXLINE( 398)									HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,eKey) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 398)									HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,eValue) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 398)									{
HXLINE( 399)										HX_VARI(  ::Dynamic,key) = this->expr(eKey);
HXLINE( 400)										HX_VARI(  ::Dynamic,value) = this->expr(eValue);
HXLINE( 401)										if (isAllString) {
HXLINE( 401)											isAllString = ::Std_obj::isOfType(key,( ( ::Dynamic)(::hx::ClassOf< ::String >()) ));
            										}
            										else {
HXLINE( 401)											isAllString = false;
            										}
HXLINE( 402)										if (isAllInt) {
HXLINE( 402)											isAllInt = ::Std_obj::isOfType(key,( ( ::Dynamic)(::hx::ClassOf< int >()) ));
            										}
            										else {
HXLINE( 402)											isAllInt = false;
            										}
HXLINE( 403)										if (isAllObject) {
HXLINE( 403)											isAllObject = ::Reflect_obj::isObject(key);
            										}
            										else {
HXLINE( 403)											isAllObject = false;
            										}
HXLINE( 404)										if (isAllEnum) {
HXLINE( 404)											isAllEnum = ::Reflect_obj::isEnumValue(key);
            										}
            										else {
HXLINE( 404)											isAllEnum = false;
            										}
HXLINE( 405)										keys->push(key);
HXLINE( 406)										values->push(value);
            									}
            								}
            								else {
HXLINE( 408)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("=> expected",17,e5,65,e5)));
            								}
            							}
            							else {
HXLINE( 408)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("=> expected",17,e5,65,e5)));
            							}
            						}
            					}
HXLINE( 411)					HX_VAR(  ::Dynamic,map);
HXLINE( 412)					if (isAllInt) {
HXLINE( 411)						map =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            					}
            					else {
HXLINE( 414)						if (isAllString) {
HXLINE( 411)							map =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            						}
            						else {
HXLINE( 416)							if (isAllEnum) {
HXLINE( 411)								map =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
            							}
            							else {
HXLINE( 418)								if (isAllObject) {
HXLINE( 411)									map =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
            								}
            								else {
HXLINE( 421)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Inconsistent key types",af,4f,50,a9)));
            								}
            							}
            						}
            					}
HXLINE( 423)					{
HXLINE( 423)						int _g1 = 0;
HXDLIN( 423)						int _g2 = keys->get_length();
HXDLIN( 423)						while((_g1 < _g2)){
HXLINE( 423)							_g1 = (_g1 + 1);
HXDLIN( 423)							HX_VARI( int,n) = (_g1 - 1);
HXLINE( 424)							::haxe::IMap_obj::set( ::hx::interface_check(map,0x09c2bd39),keys->__get(n),values->__get(n));
            						}
            					}
HXLINE( 426)					return map;
            				}
            				else {
HXLINE( 428)					HX_VARI( ::cpp::VirtualArray,a) = ::cpp::VirtualArray_obj::__new();
HXLINE( 429)					{
HXLINE( 429)						int _g = 0;
HXDLIN( 429)						while((_g < arr->length)){
HXLINE( 429)							HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e) = arr->__get(_g).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 429)							_g = (_g + 1);
HXLINE( 430)							a->push(this->expr(e));
            						}
            					}
HXLINE( 432)					return a;
            				}
            			}
            			break;
            			case (int)18: {
HXLINE( 442)				HX_VARI( ::String,cl) = e->_hx_getString(0);
HXDLIN( 442)				HX_VARI( ::Array< ::Dynamic>,params) = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 443)				HX_VARI( ::cpp::VirtualArray,a) = ::cpp::VirtualArray_obj::__new();
HXLINE( 444)				{
HXLINE( 444)					int _g = 0;
HXDLIN( 444)					while((_g < params->length)){
HXLINE( 444)						HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e) = params->__get(_g).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 444)						_g = (_g + 1);
HXLINE( 445)						a->push(this->expr(e));
            					}
            				}
HXLINE( 446)				return this->cnew(cl,a);
            			}
            			break;
            			case (int)19: {
HXLINE( 447)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE( 448)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(this->expr(e1)));
            			}
            			break;
            			case (int)20: {
HXLINE( 449)				 ::hxcpp::debug::jsonrpc::eval::CType _g = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::CType >();
HXDLIN( 449)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 449)				HX_VARI( ::String,n) = e->_hx_getString(1);
HXDLIN( 449)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,ecatch) = e->_hx_getObject(3).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE( 450)				HX_VARI( int,old) = this->declared->length;
HXLINE( 451)				HX_VARI( bool,oldTry) = this->inTry;
HXLINE( 452)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 453)					this->inTry = true;
HXLINE( 454)					HX_VARI(  ::Dynamic,v) = this->expr(e1);
HXLINE( 455)					this->restore(old);
HXLINE( 456)					this->inTry = oldTry;
HXLINE( 457)					return v;
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 458)						{
HXLINE( 458)							null();
            						}
HXDLIN( 458)						 ::Dynamic _g1 = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 452)						if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::hxcpp::debug::jsonrpc::eval::_Interp::Stop >())) {
HXLINE( 458)							HX_VARI(  ::hxcpp::debug::jsonrpc::eval::_Interp::Stop,err) = _g1;
HXLINE( 459)							this->inTry = oldTry;
HXLINE( 460)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(err));
            						}
            						else {
HXLINE( 461)							HX_VARI(  ::Dynamic,err) = _g1;
HXLINE( 463)							this->restore(old);
HXLINE( 464)							this->inTry = oldTry;
HXLINE( 466)							::Array< ::Dynamic> _hx_tmp = this->declared;
HXDLIN( 466)							_hx_tmp->push( ::Dynamic(::hx::Anon_obj::Create(2)
            								->setFixed(0,HX_("n",6e,00,00,00),n)
            								->setFixed(1,HX_("old",a7,98,54,00),this->locals->get(n))));
HXLINE( 467)							this->locals->set(n, ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("r",72,00,00,00),err)));
HXLINE( 468)							HX_VARI(  ::Dynamic,v) = this->expr(ecatch);
HXLINE( 469)							this->restore(old);
HXLINE( 470)							return v;
            						}
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
            			}
            			break;
            			case (int)21: {
HXLINE( 472)				HX_VARI( ::Array< ::Dynamic>,fl) = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 473)				HX_VARI(  ::Dynamic,o) =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE( 474)				{
HXLINE( 474)					int _g = 0;
HXDLIN( 474)					while((_g < fl->length)){
HXLINE( 474)						HX_VARI(  ::Dynamic,f) = fl->__get(_g);
HXDLIN( 474)						_g = (_g + 1);
HXLINE( 475)						::String f1 = ( (::String)(f->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
HXDLIN( 475)						this->set(o,f1,this->expr(f->__Field(HX_("e",65,00,00,00),::hx::paccDynamic)));
            					}
            				}
HXLINE( 476)				return o;
            			}
            			break;
            			case (int)22: {
HXLINE( 477)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,econd) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 477)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 477)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e2) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE( 478)				if (::hx::IsEq( this->expr(econd),true )) {
HXLINE( 478)					return this->expr(e1);
            				}
            				else {
HXLINE( 478)					return this->expr(e2);
            				}
            			}
            			break;
            			case (int)23: {
HXLINE( 479)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 479)				HX_VARI( ::Array< ::Dynamic>,cases) = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 479)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,def) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE( 480)				HX_VARI(  ::Dynamic,val) = this->expr(e1);
HXLINE( 481)				HX_VARI( bool,match) = false;
HXLINE( 482)				{
HXLINE( 482)					int _g = 0;
HXDLIN( 482)					while((_g < cases->length)){
HXLINE( 482)						HX_VARI(  ::Dynamic,c) = cases->__get(_g);
HXDLIN( 482)						_g = (_g + 1);
HXLINE( 483)						{
HXLINE( 483)							int _g1 = 0;
HXDLIN( 483)							::Array< ::Dynamic> _g2 = ( (::Array< ::Dynamic>)(c->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic)) );
HXDLIN( 483)							while((_g1 < _g2->length)){
HXLINE( 483)								HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,v) = _g2->__get(_g1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 483)								_g1 = (_g1 + 1);
HXLINE( 484)								if (::hx::IsEq( this->expr(v),val )) {
HXLINE( 485)									match = true;
HXLINE( 486)									goto _hx_goto_59;
            								}
            							}
            							_hx_goto_59:;
            						}
HXLINE( 488)						if (match) {
HXLINE( 489)							val = this->expr(c->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic));
HXLINE( 490)							goto _hx_goto_58;
            						}
            					}
            					_hx_goto_58:;
            				}
HXLINE( 493)				if (!(match)) {
HXLINE( 494)					if (::hx::IsNull( def )) {
HXLINE( 494)						val = null();
            					}
            					else {
HXLINE( 494)						val = this->expr(def);
            					}
            				}
HXLINE( 495)				return val;
            			}
            			break;
            			case (int)24: {
HXLINE( 310)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,econd) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 310)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE( 311)				this->doWhileLoop(econd,e1);
HXLINE( 312)				return null();
            			}
            			break;
            			case (int)25: {
HXLINE( 496)				::String _g = e->_hx_getString(0);
HXDLIN( 496)				::Array< ::Dynamic> _g1 = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 496)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE( 497)				return this->expr(e1);
            			}
            			break;
            			case (int)26: {
HXLINE( 498)				 ::hxcpp::debug::jsonrpc::eval::CType _g = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::CType >();
HXDLIN( 498)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE( 499)				return this->expr(e1);
            			}
            			break;
            		}
HXLINE( 248)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,expr,return )

void Interp_obj::doWhileLoop( ::hxcpp::debug::jsonrpc::eval::Expr econd, ::hxcpp::debug::jsonrpc::eval::Expr e){
            	HX_STACKFRAME(&_hx_pos_515bc5e2ef25e982_504_doWhileLoop)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(econd,"econd")
            	HX_STACK_ARG(e,"e")
HXLINE( 504)
HXLINE( 505)		HX_VARI( int,old) = this->declared->length;
HXLINE( 506)		while(true){
HXLINE( 507)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 508)				this->expr(e);
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 509)					{
HXLINE( 509)						null();
            					}
HXDLIN( 509)					 ::Dynamic _g1 = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 507)					if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::hxcpp::debug::jsonrpc::eval::_Interp::Stop >())) {
HXLINE( 509)						HX_VARI(  ::hxcpp::debug::jsonrpc::eval::_Interp::Stop,err) = _g1;
HXLINE( 510)						switch((int)(err->_hx_getIndex())){
            							case (int)0: {
HXLINE( 513)								goto _hx_goto_63;
            							}
            							break;
            							case (int)1: {
            							}
            							break;
            							case (int)2: {
HXLINE( 515)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(err));
            							}
            							break;
            						}
            					}
            					else {
HXLINE( 507)						HX_STACK_DO_THROW(_g);
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXLINE( 506)			if (!(::hx::IsEq( this->expr(econd),true ))) {
HXLINE( 506)				goto _hx_goto_63;
            			}
            		}
            		_hx_goto_63:;
HXLINE( 519)		this->restore(old);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,doWhileLoop,(void))

void Interp_obj::whileLoop( ::hxcpp::debug::jsonrpc::eval::Expr econd, ::hxcpp::debug::jsonrpc::eval::Expr e){
            	HX_STACKFRAME(&_hx_pos_515bc5e2ef25e982_522_whileLoop)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(econd,"econd")
            	HX_STACK_ARG(e,"e")
HXLINE( 522)
HXLINE( 523)		HX_VARI( int,old) = this->declared->length;
HXLINE( 524)		while(::hx::IsEq( this->expr(econd),true )){
HXLINE( 525)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 526)				this->expr(e);
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 527)					{
HXLINE( 527)						null();
            					}
HXDLIN( 527)					 ::Dynamic _g1 = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 525)					if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::hxcpp::debug::jsonrpc::eval::_Interp::Stop >())) {
HXLINE( 527)						HX_VARI(  ::hxcpp::debug::jsonrpc::eval::_Interp::Stop,err) = _g1;
HXLINE( 528)						switch((int)(err->_hx_getIndex())){
            							case (int)0: {
HXLINE( 531)								goto _hx_goto_65;
            							}
            							break;
            							case (int)1: {
            							}
            							break;
            							case (int)2: {
HXLINE( 533)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(err));
            							}
            							break;
            						}
            					}
            					else {
HXLINE( 525)						HX_STACK_DO_THROW(_g);
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
            		_hx_goto_65:;
HXLINE( 537)		this->restore(old);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,whileLoop,(void))

 ::Dynamic Interp_obj::makeIterator( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_515bc5e2ef25e982_540_makeIterator)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(v,"v")
HXLINE( 540)
HXLINE( 541)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 542)			v = v->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 543)				{
HXLINE( 543)					null();
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 544)		bool _hx_tmp;
HXDLIN( 544)		if (::hx::IsNotNull( v->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic) )) {
HXLINE( 544)			_hx_tmp = ::hx::IsNull( v->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic) );
            		}
            		else {
HXLINE( 544)			_hx_tmp = true;
            		}
HXDLIN( 544)		if (_hx_tmp) {
HXLINE( 545)			 ::hxcpp::debug::jsonrpc::eval::Error e = ::hxcpp::debug::jsonrpc::eval::Error_obj::EInvalidIterator(v);
HXDLIN( 545)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            		}
HXLINE( 546)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,makeIterator,return )

void Interp_obj::forLoop(::String n, ::hxcpp::debug::jsonrpc::eval::Expr it, ::hxcpp::debug::jsonrpc::eval::Expr e){
            	HX_STACKFRAME(&_hx_pos_515bc5e2ef25e982_549_forLoop)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(n,"n")
            	HX_STACK_ARG(it,"it")
            	HX_STACK_ARG(e,"e")
HXLINE( 549)
HXLINE( 550)		HX_VARI( int,old) = this->declared->length;
HXLINE( 551)		::Array< ::Dynamic> _hx_tmp = this->declared;
HXDLIN( 551)		_hx_tmp->push( ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("n",6e,00,00,00),n)
            			->setFixed(1,HX_("old",a7,98,54,00),this->locals->get(n))));
HXLINE( 552)		HX_VARI(  ::Dynamic,it1) = this->makeIterator(this->expr(it));
HXLINE( 553)		while(( (bool)(it1->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 554)			{
HXLINE( 554)				::Dynamic this1 = this->locals;
HXDLIN( 554)				( ( ::haxe::ds::StringMap)(this1) )->set(n, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("r",72,00,00,00),it1->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)())));
            			}
HXLINE( 555)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 556)				this->expr(e);
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 557)					{
HXLINE( 557)						null();
            					}
HXDLIN( 557)					 ::Dynamic _g1 = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 555)					if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::hxcpp::debug::jsonrpc::eval::_Interp::Stop >())) {
HXLINE( 557)						HX_VARI(  ::hxcpp::debug::jsonrpc::eval::_Interp::Stop,err) = _g1;
HXLINE( 558)						switch((int)(err->_hx_getIndex())){
            							case (int)0: {
HXLINE( 561)								goto _hx_goto_68;
            							}
            							break;
            							case (int)1: {
            							}
            							break;
            							case (int)2: {
HXLINE( 563)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(err));
            							}
            							break;
            						}
            					}
            					else {
HXLINE( 555)						HX_STACK_DO_THROW(_g);
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
            		_hx_goto_68:;
HXLINE( 567)		this->restore(old);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,forLoop,(void))

bool Interp_obj::isMap( ::Dynamic o){
            	HX_STACKFRAME(&_hx_pos_515bc5e2ef25e982_571_isMap)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(o,"o")
HXLINE( 571)
HXDLIN( 571)		return ::Std_obj::isOfType(o,( ( ::Dynamic)(::hx::ClassOf< ::haxe::IMap >()) ));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,isMap,return )

 ::Dynamic Interp_obj::getMapValue( ::Dynamic map, ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_515bc5e2ef25e982_575_getMapValue)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(map,"map")
            	HX_STACK_ARG(key,"key")
HXLINE( 575)
HXDLIN( 575)		return ::haxe::IMap_obj::get( ::hx::interface_check(map,0x09c2bd39),key);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,getMapValue,return )

void Interp_obj::setMapValue( ::Dynamic map, ::Dynamic key, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_515bc5e2ef25e982_579_setMapValue)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(map,"map")
            	HX_STACK_ARG(key,"key")
            	HX_STACK_ARG(value,"value")
HXLINE( 579)
HXDLIN( 579)		::haxe::IMap_obj::set( ::hx::interface_check(map,0x09c2bd39),key,value);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,setMapValue,(void))

 ::Dynamic Interp_obj::get( ::Dynamic o,::String f){
            	HX_STACKFRAME(&_hx_pos_515bc5e2ef25e982_582_get)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(o,"o")
            	HX_STACK_ARG(f,"f")
HXLINE( 582)
HXLINE( 583)		if (::hx::IsNull( o )) {
HXLINE( 584)			 ::hxcpp::debug::jsonrpc::eval::Error e = ::hxcpp::debug::jsonrpc::eval::Error_obj::EInvalidAccess(f);
HXDLIN( 584)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            		}
HXLINE( 585)		return ::Reflect_obj::getProperty(o,f);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,get,return )

 ::Dynamic Interp_obj::set( ::Dynamic o,::String f, ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_515bc5e2ef25e982_590_set)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(o,"o")
            	HX_STACK_ARG(f,"f")
            	HX_STACK_ARG(v,"v")
HXLINE( 590)
HXLINE( 591)		if (::hx::IsNull( o )) {
HXLINE( 592)			 ::hxcpp::debug::jsonrpc::eval::Error e = ::hxcpp::debug::jsonrpc::eval::Error_obj::EInvalidAccess(f);
HXDLIN( 592)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            		}
HXLINE( 593)		::Reflect_obj::setProperty(o,f,v);
HXLINE( 594)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,set,return )

 ::Dynamic Interp_obj::fcall( ::Dynamic o,::String f,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_515bc5e2ef25e982_598_fcall)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(o,"o")
            	HX_STACK_ARG(f,"f")
            	HX_STACK_ARG(args,"args")
HXLINE( 598)
HXDLIN( 598)		return this->call(o,this->get(o,f),args);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,fcall,return )

 ::Dynamic Interp_obj::call( ::Dynamic o, ::Dynamic f,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_515bc5e2ef25e982_602_call)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(o,"o")
            	HX_STACK_ARG(f,"f")
            	HX_STACK_ARG(args,"args")
HXLINE( 602)
HXDLIN( 602)		return ::Reflect_obj::callMethod(o,f,args);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,call,return )

 ::Dynamic Interp_obj::cnew(::String cl,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_515bc5e2ef25e982_605_cnew)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(cl,"cl")
            	HX_STACK_ARG(args,"args")
HXLINE( 605)
HXLINE( 606)		HX_VARI( ::hx::Class,c) = ::Type_obj::resolveClass(cl);
HXLINE( 607)		if (::hx::IsNull( c )) {
HXLINE( 608)			c = this->resolve(cl);
            		}
HXLINE( 609)		return ::Type_obj::createInstance(c,args);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,cnew,return )

 ::haxe::ds::StringMap Interp_obj::globals;


::hx::ObjectPtr< Interp_obj > Interp_obj::__new() {
	::hx::ObjectPtr< Interp_obj > __this = new Interp_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Interp_obj > Interp_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Interp_obj *__this = (Interp_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Interp_obj), true, "hxcpp.debug.jsonrpc.eval.Interp"));
	*(void **)__this = Interp_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Interp_obj::Interp_obj()
{
}

void Interp_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Interp);
	HX_MARK_MEMBER_NAME(variables,"variables");
	HX_MARK_MEMBER_NAME(locals,"locals");
	HX_MARK_MEMBER_NAME(binops,"binops");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(inTry,"inTry");
	HX_MARK_MEMBER_NAME(declared,"declared");
	HX_MARK_MEMBER_NAME(returnValue,"returnValue");
	HX_MARK_END_CLASS();
}

void Interp_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(variables,"variables");
	HX_VISIT_MEMBER_NAME(locals,"locals");
	HX_VISIT_MEMBER_NAME(binops,"binops");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(inTry,"inTry");
	HX_VISIT_MEMBER_NAME(declared,"declared");
	HX_VISIT_MEMBER_NAME(returnValue,"returnValue");
}

::hx::Val Interp_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"expr") ) { return ::hx::Val( expr_dyn() ); }
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
		if (HX_FIELD_EQ(inName,"cnew") ) { return ::hx::Val( cnew_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { return ::hx::Val( depth ); }
		if (HX_FIELD_EQ(inName,"inTry") ) { return ::hx::Val( inTry ); }
		if (HX_FIELD_EQ(inName,"error") ) { return ::hx::Val( error_dyn() ); }
		if (HX_FIELD_EQ(inName,"isMap") ) { return ::hx::Val( isMap_dyn() ); }
		if (HX_FIELD_EQ(inName,"fcall") ) { return ::hx::Val( fcall_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"locals") ) { return ::hx::Val( locals ); }
		if (HX_FIELD_EQ(inName,"binops") ) { return ::hx::Val( binops ); }
		if (HX_FIELD_EQ(inName,"assign") ) { return ::hx::Val( assign_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"initOps") ) { return ::hx::Val( initOps_dyn() ); }
		if (HX_FIELD_EQ(inName,"execute") ) { return ::hx::Val( execute_dyn() ); }
		if (HX_FIELD_EQ(inName,"restore") ) { return ::hx::Val( restore_dyn() ); }
		if (HX_FIELD_EQ(inName,"rethrow") ) { return ::hx::Val( rethrow_dyn() ); }
		if (HX_FIELD_EQ(inName,"resolve") ) { return ::hx::Val( resolve_dyn() ); }
		if (HX_FIELD_EQ(inName,"forLoop") ) { return ::hx::Val( forLoop_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"declared") ) { return ::hx::Val( declared ); }
		if (HX_FIELD_EQ(inName,"assignOp") ) { return ::hx::Val( assignOp_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"variables") ) { return ::hx::Val( variables ); }
		if (HX_FIELD_EQ(inName,"increment") ) { return ::hx::Val( increment_dyn() ); }
		if (HX_FIELD_EQ(inName,"duplicate") ) { return ::hx::Val( duplicate_dyn() ); }
		if (HX_FIELD_EQ(inName,"whileLoop") ) { return ::hx::Val( whileLoop_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"exprReturn") ) { return ::hx::Val( exprReturn_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"returnValue") ) { return ::hx::Val( returnValue ); }
		if (HX_FIELD_EQ(inName,"doWhileLoop") ) { return ::hx::Val( doWhileLoop_dyn() ); }
		if (HX_FIELD_EQ(inName,"getMapValue") ) { return ::hx::Val( getMapValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"setMapValue") ) { return ::hx::Val( setMapValue_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"evalAssignOp") ) { return ::hx::Val( evalAssignOp_dyn() ); }
		if (HX_FIELD_EQ(inName,"makeIterator") ) { return ::hx::Val( makeIterator_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Interp_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"globals") ) { outValue = ( globals ); return true; }
	}
	return false;
}

::hx::Val Interp_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { depth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inTry") ) { inTry=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"locals") ) { locals=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"binops") ) { binops=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"declared") ) { declared=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"variables") ) { variables=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"returnValue") ) { returnValue=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Interp_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"globals") ) { globals=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void Interp_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("variables",b7,e2,62,82));
	outFields->push(HX_("locals",a8,74,bf,59));
	outFields->push(HX_("binops",cb,59,16,ed));
	outFields->push(HX_("depth",03,f1,29,d7));
	outFields->push(HX_("inTry",56,82,08,be));
	outFields->push(HX_("declared",fa,58,bc,c4));
	outFields->push(HX_("returnValue",a1,4c,95,3e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Interp_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Interp_obj,variables),HX_("variables",b7,e2,62,82)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Interp_obj,locals),HX_("locals",a8,74,bf,59)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Interp_obj,binops),HX_("binops",cb,59,16,ed)},
	{::hx::fsInt,(int)offsetof(Interp_obj,depth),HX_("depth",03,f1,29,d7)},
	{::hx::fsBool,(int)offsetof(Interp_obj,inTry),HX_("inTry",56,82,08,be)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Interp_obj,declared),HX_("declared",fa,58,bc,c4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Interp_obj,returnValue),HX_("returnValue",a1,4c,95,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Interp_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Interp_obj::globals,HX_("globals",b0,05,39,14)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Interp_obj_sMemberFields[] = {
	HX_("variables",b7,e2,62,82),
	HX_("locals",a8,74,bf,59),
	HX_("binops",cb,59,16,ed),
	HX_("depth",03,f1,29,d7),
	HX_("inTry",56,82,08,be),
	HX_("declared",fa,58,bc,c4),
	HX_("returnValue",a1,4c,95,3e),
	HX_("initOps",02,63,8b,cb),
	HX_("assign",2f,46,06,4c),
	HX_("assignOp",30,b5,c7,0e),
	HX_("evalAssignOp",ec,d8,94,19),
	HX_("increment",2f,06,ff,31),
	HX_("execute",35,0a,0d,cc),
	HX_("exprReturn",c5,6b,ed,86),
	HX_("duplicate",8b,21,17,a1),
	HX_("restore",4e,67,b0,6a),
	HX_("error",c8,cb,29,73),
	HX_("rethrow",93,b0,2a,f6),
	HX_("resolve",ec,12,60,67),
	HX_("expr",35,fd,1d,43),
	HX_("doWhileLoop",aa,01,97,3a),
	HX_("whileLoop",b5,42,98,e1),
	HX_("makeIterator",fc,dd,72,d8),
	HX_("forLoop",0d,52,69,c9),
	HX_("isMap",d2,34,51,c1),
	HX_("getMapValue",eb,b1,ee,ce),
	HX_("setMapValue",f7,b8,5b,d9),
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	HX_("fcall",04,44,99,fc),
	HX_("call",9e,18,ba,41),
	HX_("cnew",dd,ef,c3,41),
	::String(null()) };

static void Interp_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Interp_obj::globals,"globals");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Interp_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Interp_obj::globals,"globals");
};

#endif

::hx::Class Interp_obj::__mClass;

static ::String Interp_obj_sStaticFields[] = {
	HX_("globals",b0,05,39,14),
	::String(null())
};

void Interp_obj::__register()
{
	Interp_obj _hx_dummy;
	Interp_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxcpp.debug.jsonrpc.eval.Interp",9f,f4,d8,6b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Interp_obj::__GetStatic;
	__mClass->mSetStaticField = &Interp_obj::__SetStatic;
	__mClass->mMarkFunc = Interp_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Interp_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Interp_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Interp_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Interp_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Interp_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Interp_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxcpp
} // end namespace debug
} // end namespace jsonrpc
} // end namespace eval
