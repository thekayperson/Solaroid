#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
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
#ifndef INCLUDED_haxe_ds_GenericCell_hxcpp_debug_jsonrpc_eval_Token
#include <haxe/ds/GenericCell_hxcpp_debug_jsonrpc_eval_Token.h>
#endif
#ifndef INCLUDED_haxe_ds_GenericStack_hxcpp_debug_jsonrpc_eval_Token
#include <haxe/ds/GenericStack_hxcpp_debug_jsonrpc_eval_Token.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_BytesOutput
#include <haxe/io/BytesOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_haxe_io_StringInput
#include <haxe/io/StringInput.h>
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
#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_FieldAccess
#include <hxcpp/debug/jsonrpc/eval/FieldAccess.h>
#endif
#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_FieldKind
#include <hxcpp/debug/jsonrpc/eval/FieldKind.h>
#endif
#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_ModuleDecl
#include <hxcpp/debug/jsonrpc/eval/ModuleDecl.h>
#endif
#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_Parser
#include <hxcpp/debug/jsonrpc/eval/Parser.h>
#endif
#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_Token
#include <hxcpp/debug/jsonrpc/eval/Token.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_25_new,"hxcpp.debug.jsonrpc.eval.Parser","new",0xfc8cd59c,"hxcpp.debug.jsonrpc.eval.Parser.new","hxcpp/debug/jsonrpc/eval/Parser.hx",25,0x8a0f0136)
static const ::String _hx_array_data_badb17aa_3[] = {
	HX_("%",25,00,00,00),
};
static const ::String _hx_array_data_badb17aa_4[] = {
	HX_("*",2a,00,00,00),HX_("/",2f,00,00,00),
};
static const ::String _hx_array_data_badb17aa_5[] = {
	HX_("+",2b,00,00,00),HX_("-",2d,00,00,00),
};
static const ::String _hx_array_data_badb17aa_6[] = {
	HX_("<<",80,34,00,00),HX_(">>",40,36,00,00),HX_(">>>",fe,41,2f,00),
};
static const ::String _hx_array_data_badb17aa_7[] = {
	HX_("|",7c,00,00,00),HX_("&",26,00,00,00),HX_("^",5e,00,00,00),
};
static const ::String _hx_array_data_badb17aa_8[] = {
	HX_("==",60,35,00,00),HX_("!=",fc,1c,00,00),HX_(">",3e,00,00,00),HX_("<",3c,00,00,00),HX_(">=",3f,36,00,00),HX_("<=",81,34,00,00),
};
static const ::String _hx_array_data_badb17aa_9[] = {
	HX_("...",ee,0f,23,00),
};
static const ::String _hx_array_data_badb17aa_10[] = {
	HX_("&&",40,21,00,00),
};
static const ::String _hx_array_data_badb17aa_11[] = {
	HX_("||",80,6c,00,00),
};
static const ::String _hx_array_data_badb17aa_12[] = {
	HX_("=",3d,00,00,00),HX_("+=",b2,25,00,00),HX_("-=",70,27,00,00),HX_("*=",d3,24,00,00),HX_("/=",2e,29,00,00),HX_("%=",78,20,00,00),HX_("<<=",bd,bb,2d,00),HX_(">>=",fd,41,2f,00),HX_(">>>=",7f,7c,2a,29),HX_("|=",41,6c,00,00),HX_("&=",57,21,00,00),HX_("^=",1f,52,00,00),HX_("=>",61,35,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_105_error,"hxcpp.debug.jsonrpc.eval.Parser","error",0xb39b9804,"hxcpp.debug.jsonrpc.eval.Parser.error","hxcpp/debug/jsonrpc/eval/Parser.hx",105,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_109_invalidChar,"hxcpp.debug.jsonrpc.eval.Parser","invalidChar",0x2ea94ea9,"hxcpp.debug.jsonrpc.eval.Parser.invalidChar","hxcpp/debug/jsonrpc/eval/Parser.hx",109,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_112_initParser,"hxcpp.debug.jsonrpc.eval.Parser","initParser",0x42c25253,"hxcpp.debug.jsonrpc.eval.Parser.initParser","hxcpp/debug/jsonrpc/eval/Parser.hx",112,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_131_parseString,"hxcpp.debug.jsonrpc.eval.Parser","parseString",0x114776a0,"hxcpp.debug.jsonrpc.eval.Parser.parseString","hxcpp/debug/jsonrpc/eval/Parser.hx",131,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_134_parse,"hxcpp.debug.jsonrpc.eval.Parser","parse",0xfdc75c6f,"hxcpp.debug.jsonrpc.eval.Parser.parse","hxcpp/debug/jsonrpc/eval/Parser.hx",134,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_149_unexpected,"hxcpp.debug.jsonrpc.eval.Parser","unexpected",0x16e87015,"hxcpp.debug.jsonrpc.eval.Parser.unexpected","hxcpp/debug/jsonrpc/eval/Parser.hx",149,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_154_push,"hxcpp.debug.jsonrpc.eval.Parser","push",0x000ca11e,"hxcpp.debug.jsonrpc.eval.Parser.push","hxcpp/debug/jsonrpc/eval/Parser.hx",154,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_157_ensure,"hxcpp.debug.jsonrpc.eval.Parser","ensure",0x279cde02,"hxcpp.debug.jsonrpc.eval.Parser.ensure","hxcpp/debug/jsonrpc/eval/Parser.hx",157,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_163_ensureToken,"hxcpp.debug.jsonrpc.eval.Parser","ensureToken",0x710e0d97,"hxcpp.debug.jsonrpc.eval.Parser.ensureToken","hxcpp/debug/jsonrpc/eval/Parser.hx",163,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_169_maybe,"hxcpp.debug.jsonrpc.eval.Parser","maybe",0x4398dfe4,"hxcpp.debug.jsonrpc.eval.Parser.maybe","hxcpp/debug/jsonrpc/eval/Parser.hx",169,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_177_getIdent,"hxcpp.debug.jsonrpc.eval.Parser","getIdent",0xf2aed3be,"hxcpp.debug.jsonrpc.eval.Parser.getIdent","hxcpp/debug/jsonrpc/eval/Parser.hx",177,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_189_expr,"hxcpp.debug.jsonrpc.eval.Parser","expr",0xf8c98c79,"hxcpp.debug.jsonrpc.eval.Parser.expr","hxcpp/debug/jsonrpc/eval/Parser.hx",189,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_193_pmin,"hxcpp.debug.jsonrpc.eval.Parser","pmin",0x00068666,"hxcpp.debug.jsonrpc.eval.Parser.pmin","hxcpp/debug/jsonrpc/eval/Parser.hx",193,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_197_pmax,"hxcpp.debug.jsonrpc.eval.Parser","pmax",0x00067f78,"hxcpp.debug.jsonrpc.eval.Parser.pmax","hxcpp/debug/jsonrpc/eval/Parser.hx",197,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_201_mk,"hxcpp.debug.jsonrpc.eval.Parser","mk",0xe46ed5a2,"hxcpp.debug.jsonrpc.eval.Parser.mk","hxcpp/debug/jsonrpc/eval/Parser.hx",201,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_205_isBlock,"hxcpp.debug.jsonrpc.eval.Parser","isBlock",0xeb2c6c3f,"hxcpp.debug.jsonrpc.eval.Parser.isBlock","hxcpp/debug/jsonrpc/eval/Parser.hx",205,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_222_parseFullExpr,"hxcpp.debug.jsonrpc.eval.Parser","parseFullExpr",0x061325f3,"hxcpp.debug.jsonrpc.eval.Parser.parseFullExpr","hxcpp/debug/jsonrpc/eval/Parser.hx",222,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_242_parseObject,"hxcpp.debug.jsonrpc.eval.Parser","parseObject",0x1556cc8e,"hxcpp.debug.jsonrpc.eval.Parser.parseObject","hxcpp/debug/jsonrpc/eval/Parser.hx",242,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_277_parseExpr,"hxcpp.debug.jsonrpc.eval.Parser","parseExpr",0xe216e944,"hxcpp.debug.jsonrpc.eval.Parser.parseExpr","hxcpp/debug/jsonrpc/eval/Parser.hx",277,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_402_parseLambda,"hxcpp.debug.jsonrpc.eval.Parser","parseLambda",0x50d780d6,"hxcpp.debug.jsonrpc.eval.Parser.parseLambda","hxcpp/debug/jsonrpc/eval/Parser.hx",402,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_421_parseMetaArgs,"hxcpp.debug.jsonrpc.eval.Parser","parseMetaArgs",0xd7e5ea51,"hxcpp.debug.jsonrpc.eval.Parser.parseMetaArgs","hxcpp/debug/jsonrpc/eval/Parser.hx",421,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_445_mapCompr,"hxcpp.debug.jsonrpc.eval.Parser","mapCompr",0x9cfe258b,"hxcpp.debug.jsonrpc.eval.Parser.mapCompr","hxcpp/debug/jsonrpc/eval/Parser.hx",445,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_466_makeUnop,"hxcpp.debug.jsonrpc.eval.Parser","makeUnop",0x1fa6460c,"hxcpp.debug.jsonrpc.eval.Parser.makeUnop","hxcpp/debug/jsonrpc/eval/Parser.hx",466,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_474_makeBinop,"hxcpp.debug.jsonrpc.eval.Parser","makeBinop",0x9deb2b16,"hxcpp.debug.jsonrpc.eval.Parser.makeBinop","hxcpp/debug/jsonrpc/eval/Parser.hx",474,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_491_parseStructure,"hxcpp.debug.jsonrpc.eval.Parser","parseStructure",0x9dd951c4,"hxcpp.debug.jsonrpc.eval.Parser.parseStructure","hxcpp/debug/jsonrpc/eval/Parser.hx",491,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_673_parseExprNext,"hxcpp.debug.jsonrpc.eval.Parser","parseExprNext",0x5d5a8c57,"hxcpp.debug.jsonrpc.eval.Parser.parseExprNext","hxcpp/debug/jsonrpc/eval/Parser.hx",673,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_722_parseFunctionArgs,"hxcpp.debug.jsonrpc.eval.Parser","parseFunctionArgs",0x6759e3a4,"hxcpp.debug.jsonrpc.eval.Parser.parseFunctionArgs","hxcpp/debug/jsonrpc/eval/Parser.hx",722,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_765_parseFunctionDecl,"hxcpp.debug.jsonrpc.eval.Parser","parseFunctionDecl",0x694ba6b1,"hxcpp.debug.jsonrpc.eval.Parser.parseFunctionDecl","hxcpp/debug/jsonrpc/eval/Parser.hx",765,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_779_parsePath,"hxcpp.debug.jsonrpc.eval.Parser","parsePath",0xe94ad1b4,"hxcpp.debug.jsonrpc.eval.Parser.parsePath","hxcpp/debug/jsonrpc/eval/Parser.hx",779,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_792_parseType,"hxcpp.debug.jsonrpc.eval.Parser","parseType",0xec01dec9,"hxcpp.debug.jsonrpc.eval.Parser.parseType","hxcpp/debug/jsonrpc/eval/Parser.hx",792,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_830_parseType,"hxcpp.debug.jsonrpc.eval.Parser","parseType",0xec01dec9,"hxcpp.debug.jsonrpc.eval.Parser.parseType","hxcpp/debug/jsonrpc/eval/Parser.hx",830,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_908_parseTypeNext,"hxcpp.debug.jsonrpc.eval.Parser","parseTypeNext",0x64af285c,"hxcpp.debug.jsonrpc.eval.Parser.parseTypeNext","hxcpp/debug/jsonrpc/eval/Parser.hx",908,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_930_parseExprList,"hxcpp.debug.jsonrpc.eval.Parser","parseExprList",0x5c0b23c2,"hxcpp.debug.jsonrpc.eval.Parser.parseExprList","hxcpp/debug/jsonrpc/eval/Parser.hx",930,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_951_parseModule,"hxcpp.debug.jsonrpc.eval.Parser","parseModule",0xc0ea827b,"hxcpp.debug.jsonrpc.eval.Parser.parseModule","hxcpp/debug/jsonrpc/eval/Parser.hx",951,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_967_parseMetadata,"hxcpp.debug.jsonrpc.eval.Parser","parseMetadata",0xeefb86fe,"hxcpp.debug.jsonrpc.eval.Parser.parseMetadata","hxcpp/debug/jsonrpc/eval/Parser.hx",967,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_982_parseParams,"hxcpp.debug.jsonrpc.eval.Parser","parseParams",0xed924915,"hxcpp.debug.jsonrpc.eval.Parser.parseParams","hxcpp/debug/jsonrpc/eval/Parser.hx",982,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_988_parseModuleDecl,"hxcpp.debug.jsonrpc.eval.Parser","parseModuleDecl",0x94dc5885,"hxcpp.debug.jsonrpc.eval.Parser.parseModuleDecl","hxcpp/debug/jsonrpc/eval/Parser.hx",988,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_1081_parseField,"hxcpp.debug.jsonrpc.eval.Parser","parseField",0x7b6935cb,"hxcpp.debug.jsonrpc.eval.Parser.parseField","hxcpp/debug/jsonrpc/eval/Parser.hx",1081,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_1153_incPos,"hxcpp.debug.jsonrpc.eval.Parser","incPos",0xb65acf9a,"hxcpp.debug.jsonrpc.eval.Parser.incPos","hxcpp/debug/jsonrpc/eval/Parser.hx",1153,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_1157_readChar,"hxcpp.debug.jsonrpc.eval.Parser","readChar",0x4515ba90,"hxcpp.debug.jsonrpc.eval.Parser.readChar","hxcpp/debug/jsonrpc/eval/Parser.hx",1157,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_1160_readString,"hxcpp.debug.jsonrpc.eval.Parser","readString",0x5ba0670b,"hxcpp.debug.jsonrpc.eval.Parser.readString","hxcpp/debug/jsonrpc/eval/Parser.hx",1160,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_1246_token,"hxcpp.debug.jsonrpc.eval.Parser","token",0x549d4f35,"hxcpp.debug.jsonrpc.eval.Parser.token","hxcpp/debug/jsonrpc/eval/Parser.hx",1246,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_1467_preprocValue,"hxcpp.debug.jsonrpc.eval.Parser","preprocValue",0xe2bd5ebc,"hxcpp.debug.jsonrpc.eval.Parser.preprocValue","hxcpp/debug/jsonrpc/eval/Parser.hx",1467,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_1472_parsePreproCond,"hxcpp.debug.jsonrpc.eval.Parser","parsePreproCond",0xdf5b7c3b,"hxcpp.debug.jsonrpc.eval.Parser.parsePreproCond","hxcpp/debug/jsonrpc/eval/Parser.hx",1472,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_1488_evalPreproCond,"hxcpp.debug.jsonrpc.eval.Parser","evalPreproCond",0xc2baf1ec,"hxcpp.debug.jsonrpc.eval.Parser.evalPreproCond","hxcpp/debug/jsonrpc/eval/Parser.hx",1488,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_1506_preprocess,"hxcpp.debug.jsonrpc.eval.Parser","preprocess",0xe33b36f0,"hxcpp.debug.jsonrpc.eval.Parser.preprocess","hxcpp/debug/jsonrpc/eval/Parser.hx",1506,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_1538_skipTokens,"hxcpp.debug.jsonrpc.eval.Parser","skipTokens",0x4adf657d,"hxcpp.debug.jsonrpc.eval.Parser.skipTokens","hxcpp/debug/jsonrpc/eval/Parser.hx",1538,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_1553_tokenComment,"hxcpp.debug.jsonrpc.eval.Parser","tokenComment",0xe06dd3aa,"hxcpp.debug.jsonrpc.eval.Parser.tokenComment","hxcpp/debug/jsonrpc/eval/Parser.hx",1553,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_1596_constString,"hxcpp.debug.jsonrpc.eval.Parser","constString",0x2e0ae3d0,"hxcpp.debug.jsonrpc.eval.Parser.constString","hxcpp/debug/jsonrpc/eval/Parser.hx",1596,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_1607_tokenString,"hxcpp.debug.jsonrpc.eval.Parser","tokenString",0x29b8c1e6,"hxcpp.debug.jsonrpc.eval.Parser.tokenString","hxcpp/debug/jsonrpc/eval/Parser.hx",1607,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_67_boot,"hxcpp.debug.jsonrpc.eval.Parser","boot",0xf6c71376,"hxcpp.debug.jsonrpc.eval.Parser.boot","hxcpp/debug/jsonrpc/eval/Parser.hx",67,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_68_boot,"hxcpp.debug.jsonrpc.eval.Parser","boot",0xf6c71376,"hxcpp.debug.jsonrpc.eval.Parser.boot","hxcpp/debug/jsonrpc/eval/Parser.hx",68,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_69_boot,"hxcpp.debug.jsonrpc.eval.Parser","boot",0xf6c71376,"hxcpp.debug.jsonrpc.eval.Parser.boot","hxcpp/debug/jsonrpc/eval/Parser.hx",69,0x8a0f0136)
HX_LOCAL_STACK_FRAME(_hx_pos_6bbb5c3f44bcbf21_70_boot,"hxcpp.debug.jsonrpc.eval.Parser","boot",0xf6c71376,"hxcpp.debug.jsonrpc.eval.Parser.boot","hxcpp/debug/jsonrpc/eval/Parser.hx",70,0x8a0f0136)
namespace hxcpp{
namespace debug{
namespace jsonrpc{
namespace eval{

void Parser_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_25_new)
            	HX_STACK_THIS(this)
HXLINE(  25)
HXLINE(  65)		this->uid = 0;
HXLINE(  43)		this->preprocesorValues =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  78)		this->line = 1;
HXLINE(  79)		this->opChars = HX_("+*/-=!><&|^%~",e2,ec,c4,dc);
HXLINE(  80)		this->identChars = HX_("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789_",e0,b5,3b,15);
HXLINE(  81)		HX_VARI( ::Array< ::Dynamic>,priorities) = ::Array_obj< ::Dynamic>::__new(10)->init(0,::Array_obj< ::String >::fromData( _hx_array_data_badb17aa_3,1))->init(1,::Array_obj< ::String >::fromData( _hx_array_data_badb17aa_4,2))->init(2,::Array_obj< ::String >::fromData( _hx_array_data_badb17aa_5,2))->init(3,::Array_obj< ::String >::fromData( _hx_array_data_badb17aa_6,3))->init(4,::Array_obj< ::String >::fromData( _hx_array_data_badb17aa_7,3))->init(5,::Array_obj< ::String >::fromData( _hx_array_data_badb17aa_8,6))->init(6,::Array_obj< ::String >::fromData( _hx_array_data_badb17aa_9,1))->init(7,::Array_obj< ::String >::fromData( _hx_array_data_badb17aa_10,1))->init(8,::Array_obj< ::String >::fromData( _hx_array_data_badb17aa_11,1))->init(9,::Array_obj< ::String >::fromData( _hx_array_data_badb17aa_12,13));
HXLINE(  86)		this->opPriority =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  87)		this->opRightAssoc =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  88)		this->unops =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  94)		{
HXLINE(  94)			int _g = 0;
HXDLIN(  94)			int _g1 = priorities->length;
HXDLIN(  94)			while((_g < _g1)){
HXLINE(  94)				_g = (_g + 1);
HXDLIN(  94)				HX_VARI( int,i) = (_g - 1);
HXLINE(  95)				{
HXLINE(  95)					int _g1 = 0;
HXDLIN(  95)					::Array< ::String > _g2 = priorities->__get(i).StaticCast< ::Array< ::String > >();
HXDLIN(  95)					while((_g1 < _g2->length)){
HXLINE(  95)						HX_VARI( ::String,x) = _g2->__get(_g1);
HXDLIN(  95)						_g1 = (_g1 + 1);
HXLINE(  96)						this->opPriority->set(x,i);
HXLINE(  97)						if ((i == 9)) {
HXLINE(  98)							this->opRightAssoc->set(x,true);
            						}
            					}
            				}
            			}
            		}
HXLINE( 100)		{
HXLINE( 100)			{
HXLINE( 100)				HX_VARI( ::String,x) = HX_("!",21,00,00,00);
HXLINE( 101)				{
HXLINE( 101)					bool _hx_tmp;
HXDLIN( 101)					if ((x != HX_("++",a0,25,00,00))) {
HXLINE( 101)						_hx_tmp = (x == HX_("--",60,27,00,00));
            					}
            					else {
HXLINE( 101)						_hx_tmp = true;
            					}
HXDLIN( 101)					this->unops->set(x,_hx_tmp);
            				}
            			}
HXLINE( 100)			{
HXLINE( 100)				HX_VARI( ::String,x1) = HX_("++",a0,25,00,00);
HXLINE( 101)				{
HXLINE( 101)					bool _hx_tmp1;
HXDLIN( 101)					if ((x1 != HX_("++",a0,25,00,00))) {
HXLINE( 101)						_hx_tmp1 = (x1 == HX_("--",60,27,00,00));
            					}
            					else {
HXLINE( 101)						_hx_tmp1 = true;
            					}
HXDLIN( 101)					this->unops->set(x1,_hx_tmp1);
            				}
            			}
HXLINE( 100)			{
HXLINE( 100)				HX_VARI( ::String,x2) = HX_("--",60,27,00,00);
HXLINE( 101)				{
HXLINE( 101)					bool _hx_tmp2;
HXDLIN( 101)					if ((x2 != HX_("++",a0,25,00,00))) {
HXLINE( 101)						_hx_tmp2 = (x2 == HX_("--",60,27,00,00));
            					}
            					else {
HXLINE( 101)						_hx_tmp2 = true;
            					}
HXDLIN( 101)					this->unops->set(x2,_hx_tmp2);
            				}
            			}
HXLINE( 100)			{
HXLINE( 100)				HX_VARI( ::String,x3) = HX_("-",2d,00,00,00);
HXLINE( 101)				{
HXLINE( 101)					bool _hx_tmp3;
HXDLIN( 101)					if ((x3 != HX_("++",a0,25,00,00))) {
HXLINE( 101)						_hx_tmp3 = (x3 == HX_("--",60,27,00,00));
            					}
            					else {
HXLINE( 101)						_hx_tmp3 = true;
            					}
HXDLIN( 101)					this->unops->set(x3,_hx_tmp3);
            				}
            			}
HXLINE( 100)			{
HXLINE( 100)				HX_VARI( ::String,x4) = HX_("~",7e,00,00,00);
HXLINE( 101)				{
HXLINE( 101)					bool _hx_tmp4;
HXDLIN( 101)					if ((x4 != HX_("++",a0,25,00,00))) {
HXLINE( 101)						_hx_tmp4 = (x4 == HX_("--",60,27,00,00));
            					}
            					else {
HXLINE( 101)						_hx_tmp4 = true;
            					}
HXDLIN( 101)					this->unops->set(x4,_hx_tmp4);
            				}
            			}
            		}
            	}

Dynamic Parser_obj::__CreateEmpty() { return new Parser_obj; }

void *Parser_obj::_hx_vtable = 0;

Dynamic Parser_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Parser_obj > _hx_result = new Parser_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Parser_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6574d454;
}

void Parser_obj::error( ::hxcpp::debug::jsonrpc::eval::Error err,int pmin,int pmax){
            	HX_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_105_error)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(err,"err")
            	HX_STACK_ARG(pmin,"pmin")
            	HX_STACK_ARG(pmax,"pmax")
HXLINE( 105)
HXDLIN( 105)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(err));
            	}


HX_DEFINE_DYNAMIC_FUNC3(Parser_obj,error,(void))

void Parser_obj::invalidChar(int c){
            	HX_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_109_invalidChar)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(c,"c")
HXLINE( 109)
HXDLIN( 109)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::hxcpp::debug::jsonrpc::eval::Error_obj::EInvalidChar(c)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,invalidChar,(void))

void Parser_obj::initParser(::String origin){
            	HX_GC_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_112_initParser)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(origin,"origin")
HXLINE( 112)
HXLINE( 114)		this->preprocStack = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 116)		this->tokens =  ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX );
HXLINE( 120)		this->_hx_char = -1;
HXLINE( 121)		this->ops = ::Array_obj< bool >::__new();
HXLINE( 122)		this->idents = ::Array_obj< bool >::__new();
HXLINE( 123)		this->uid = 0;
HXLINE( 124)		{
HXLINE( 124)			int _g = 0;
HXDLIN( 124)			int _g1 = this->opChars.length;
HXDLIN( 124)			while((_g < _g1)){
HXLINE( 124)				_g = (_g + 1);
HXDLIN( 124)				HX_VARI( int,i) = (_g - 1);
HXLINE( 125)				this->ops[( (int)(this->opChars.charCodeAt(i)) )] = true;
            			}
            		}
HXLINE( 126)		{
HXLINE( 126)			int _g2 = 0;
HXDLIN( 126)			int _g3 = this->identChars.length;
HXDLIN( 126)			while((_g2 < _g3)){
HXLINE( 126)				_g2 = (_g2 + 1);
HXDLIN( 126)				HX_VARI( int,i) = (_g2 - 1);
HXLINE( 127)				this->idents[( (int)(this->identChars.charCodeAt(i)) )] = true;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,initParser,(void))

 ::hxcpp::debug::jsonrpc::eval::Expr Parser_obj::parseString(::String s,::String __o_origin){
            		::String origin = __o_origin;
            		if (::hx::IsNull(__o_origin)) origin = HX_("hscript",73,8c,18,2c);
            	HX_GC_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_131_parseString)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(origin,"origin")
HXLINE( 131)
HXDLIN( 131)		return this->parse( ::haxe::io::StringInput_obj::__alloc( HX_CTX ,s),origin);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,parseString,return )

 ::hxcpp::debug::jsonrpc::eval::Expr Parser_obj::parse( ::haxe::io::Input s,::String __o_origin){
            		::String origin = __o_origin;
            		if (::hx::IsNull(__o_origin)) origin = HX_("hscript",73,8c,18,2c);
            	HX_GC_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_134_parse)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(origin,"origin")
HXLINE( 134)
HXLINE( 135)		this->initParser(origin);
HXLINE( 136)		this->input = s;
HXLINE( 137)		HX_VARI( ::Array< ::Dynamic>,a) = ::Array_obj< ::Dynamic>::__new();
HXLINE( 138)		while(true){
HXLINE( 139)			HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,tk) = this->token();
HXLINE( 140)			if (::hx::IsPointerEq( tk,::hxcpp::debug::jsonrpc::eval::Token_obj::TEof_dyn() )) {
HXLINE( 141)				goto _hx_goto_19;
            			}
HXLINE( 142)			{
HXLINE( 142)				 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 142)				_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            			}
HXLINE( 143)			this->parseFullExpr(a);
            		}
            		_hx_goto_19:;
HXLINE( 145)		if ((a->length == 1)) {
HXLINE( 145)			return a->__get(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
            		}
            		else {
HXLINE( 145)			return ::hxcpp::debug::jsonrpc::eval::Expr_obj::EBlock(a);
            		}
HXDLIN( 145)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,parse,return )

 ::Dynamic Parser_obj::unexpected( ::hxcpp::debug::jsonrpc::eval::Token tk){
            	HX_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_149_unexpected)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(tk,"tk")
HXLINE( 149)
HXDLIN( 149)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::hxcpp::debug::jsonrpc::eval::Error_obj::EUnexpected(this->tokenString(tk))));
HXDLIN( 149)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,unexpected,return )

void Parser_obj::push( ::hxcpp::debug::jsonrpc::eval::Token tk){
            	HX_GC_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_154_push)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(tk,"tk")
HXLINE( 154)
HXDLIN( 154)		 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 154)		_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,push,(void))

void Parser_obj::ensure( ::hxcpp::debug::jsonrpc::eval::Token tk){
            	HX_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_157_ensure)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(tk,"tk")
HXLINE( 157)
HXLINE( 158)		HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,t) = this->token();
HXLINE( 159)		if (::hx::IsPointerNotEq( t,tk )) {
HXLINE( 160)			this->unexpected(t);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,ensure,(void))

void Parser_obj::ensureToken( ::hxcpp::debug::jsonrpc::eval::Token tk){
            	HX_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_163_ensureToken)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(tk,"tk")
HXLINE( 163)
HXLINE( 164)		HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,t) = this->token();
HXLINE( 165)		if (!(__hxcpp_enum_eq(t,tk))) {
HXLINE( 166)			this->unexpected(t);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,ensureToken,(void))

bool Parser_obj::maybe( ::hxcpp::debug::jsonrpc::eval::Token tk){
            	HX_GC_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_169_maybe)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(tk,"tk")
HXLINE( 169)
HXLINE( 170)		HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,t) = this->token();
HXLINE( 171)		if (__hxcpp_enum_eq(t,tk)) {
HXLINE( 172)			return true;
            		}
HXLINE( 173)		{
HXLINE( 173)			 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 173)			_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,t,_this->head);
            		}
HXLINE( 174)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,maybe,return )

::String Parser_obj::getIdent(){
            	HX_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_177_getIdent)
            	HX_STACK_THIS(this)
HXLINE( 177)
HXLINE( 178)		HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,tk) = this->token();
HXLINE( 179)		if (::hx::IsNull( tk )) {
HXLINE( 183)			this->unexpected(tk);
HXLINE( 184)			return null();
            		}
            		else {
HXLINE( 179)			if ((tk->_hx_getIndex() == 2)) {
HXLINE( 180)				HX_VARI( ::String,id) = tk->_hx_getString(0);
HXLINE( 181)				return id;
            			}
            			else {
HXLINE( 183)				this->unexpected(tk);
HXLINE( 184)				return null();
            			}
            		}
HXLINE( 179)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,getIdent,return )

 ::hxcpp::debug::jsonrpc::eval::Expr Parser_obj::expr( ::hxcpp::debug::jsonrpc::eval::Expr e){
            	HX_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_189_expr)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(e,"e")
HXLINE( 189)
HXDLIN( 189)		return e;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,expr,return )

int Parser_obj::pmin( ::hxcpp::debug::jsonrpc::eval::Expr e){
            	HX_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_193_pmin)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(e,"e")
HXLINE( 193)
HXDLIN( 193)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,pmin,return )

int Parser_obj::pmax( ::hxcpp::debug::jsonrpc::eval::Expr e){
            	HX_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_197_pmax)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(e,"e")
HXLINE( 197)
HXDLIN( 197)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,pmax,return )

 ::hxcpp::debug::jsonrpc::eval::Expr Parser_obj::mk( ::hxcpp::debug::jsonrpc::eval::Expr e, ::Dynamic pmin, ::Dynamic pmax){
            	HX_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_201_mk)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(e,"e")
            	HX_STACK_ARG(pmin,"pmin")
            	HX_STACK_ARG(pmax,"pmax")
HXLINE( 201)
HXDLIN( 201)		return e;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Parser_obj,mk,return )

bool Parser_obj::isBlock( ::hxcpp::debug::jsonrpc::eval::Expr e){
            	HX_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_205_isBlock)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(e,"e")
HXLINE( 205)
HXDLIN( 205)		switch((int)(e->_hx_getIndex())){
            			case (int)2: {
HXLINE( 208)				::String _g = e->_hx_getString(0);
HXDLIN( 208)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::CType,t) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::CType >();
HXDLIN( 208)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 208)				if (::hx::IsNotNull( e1 )) {
HXLINE( 208)					return this->isBlock(e1);
            				}
            				else {
HXLINE( 208)					if (::hx::IsNotNull( t )) {
HXLINE( 208)						if (::hx::IsNull( t )) {
HXLINE( 208)							return false;
            						}
            						else {
HXLINE( 208)							if ((t->_hx_getIndex() == 2)) {
HXLINE( 208)								::Array< ::Dynamic> _g = t->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 208)								return true;
            							}
            							else {
HXLINE( 208)								return false;
            							}
            						}
            					}
            					else {
HXLINE( 208)						return false;
            					}
            				}
            			}
            			break;
            			case (int)4: {
HXLINE( 206)				::Array< ::Dynamic> _g = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 206)				return true;
            			}
            			break;
            			case (int)6: {
HXLINE( 210)				::String _g = e->_hx_getString(0);
HXDLIN( 210)				 ::hxcpp::debug::jsonrpc::eval::Expr _g1 = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 210)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 210)				return this->isBlock(e1);
            			}
            			break;
            			case (int)7: {
HXLINE( 211)				::String _g = e->_hx_getString(0);
HXDLIN( 211)				HX_VARI( bool,prefix) = e->_hx_getBool(1);
HXDLIN( 211)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 211)				if (!(prefix)) {
HXLINE( 211)					return this->isBlock(e1);
            				}
            				else {
HXLINE( 211)					return false;
            				}
            			}
            			break;
            			case (int)9: {
HXLINE( 209)				 ::hxcpp::debug::jsonrpc::eval::Expr _g = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 209)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 209)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e2) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 209)				if (::hx::IsNotNull( e2 )) {
HXLINE( 209)					return this->isBlock(e2);
            				}
            				else {
HXLINE( 209)					return this->isBlock(e1);
            				}
            			}
            			break;
            			case (int)10: {
HXLINE( 212)				 ::hxcpp::debug::jsonrpc::eval::Expr _g = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 212)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 212)				return this->isBlock(e1);
            			}
            			break;
            			case (int)11: {
HXLINE( 214)				::String _g = e->_hx_getString(0);
HXDLIN( 214)				 ::hxcpp::debug::jsonrpc::eval::Expr _g1 = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 214)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 214)				return this->isBlock(e1);
            			}
            			break;
            			case (int)14: {
HXLINE( 207)				::Array< ::Dynamic> _g = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 207)				::String _g1 = e->_hx_getString(2);
HXDLIN( 207)				 ::hxcpp::debug::jsonrpc::eval::CType _g2 = e->_hx_getObject(3).StaticCast<  ::hxcpp::debug::jsonrpc::eval::CType >();
HXDLIN( 207)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 207)				return this->isBlock(e1);
            			}
            			break;
            			case (int)15: {
HXLINE( 215)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 215)				if (::hx::IsNotNull( e1 )) {
HXLINE( 215)					return this->isBlock(e1);
            				}
            				else {
HXLINE( 215)					return false;
            				}
            			}
            			break;
            			case (int)20: {
HXLINE( 216)				 ::hxcpp::debug::jsonrpc::eval::Expr _g = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 216)				::String _g1 = e->_hx_getString(1);
HXDLIN( 216)				 ::hxcpp::debug::jsonrpc::eval::CType _g2 = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::CType >();
HXDLIN( 216)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(3).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 216)				return this->isBlock(e1);
            			}
            			break;
            			case (int)21: {
HXLINE( 206)				::Array< ::Dynamic> _g = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 206)				return true;
            			}
            			break;
            			case (int)23: {
HXLINE( 206)				 ::hxcpp::debug::jsonrpc::eval::Expr _g = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 206)				::Array< ::Dynamic> _g1 = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 206)				 ::hxcpp::debug::jsonrpc::eval::Expr _g2 = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 206)				return true;
            			}
            			break;
            			case (int)24: {
HXLINE( 213)				 ::hxcpp::debug::jsonrpc::eval::Expr _g = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 213)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 213)				return this->isBlock(e1);
            			}
            			break;
            			case (int)25: {
HXLINE( 217)				::String _g = e->_hx_getString(0);
HXDLIN( 217)				::Array< ::Dynamic> _g1 = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 217)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 217)				return this->isBlock(e1);
            			}
            			break;
            			default:{
HXLINE( 218)				return false;
            			}
            		}
HXLINE( 205)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,isBlock,return )

void Parser_obj::parseFullExpr(::Array< ::Dynamic> exprs){
            	HX_GC_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_222_parseFullExpr)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(exprs,"exprs")
HXLINE( 222)
HXLINE( 223)		HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e) = this->parseExpr();
HXLINE( 224)		exprs->push(e);
HXLINE( 226)		HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,tk) = this->token();
HXLINE( 228)		while(true){
HXLINE( 228)			bool _hx_tmp;
HXDLIN( 228)			if (::hx::IsPointerEq( tk,::hxcpp::debug::jsonrpc::eval::Token_obj::TComma_dyn() )) {
HXLINE( 228)				if ((e->_hx_getIndex() == 2)) {
HXLINE( 228)					::String _g = e->_hx_getString(0);
HXDLIN( 228)					 ::hxcpp::debug::jsonrpc::eval::CType _g1 = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::CType >();
HXDLIN( 228)					 ::hxcpp::debug::jsonrpc::eval::Expr _g2 = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 228)					_hx_tmp = true;
            				}
            				else {
HXLINE( 228)					_hx_tmp = false;
            				}
            			}
            			else {
HXLINE( 228)				_hx_tmp = false;
            			}
HXDLIN( 228)			if (!(_hx_tmp)) {
HXLINE( 228)				goto _hx_goto_32;
            			}
HXLINE( 229)			e = this->parseStructure(HX_("var",e7,de,59,00));
HXLINE( 230)			exprs->push(e);
HXLINE( 231)			tk = this->token();
            		}
            		_hx_goto_32:;
HXLINE( 234)		bool _hx_tmp;
HXDLIN( 234)		if (::hx::IsPointerNotEq( tk,::hxcpp::debug::jsonrpc::eval::Token_obj::TSemicolon_dyn() )) {
HXLINE( 234)			_hx_tmp = ::hx::IsPointerNotEq( tk,::hxcpp::debug::jsonrpc::eval::Token_obj::TEof_dyn() );
            		}
            		else {
HXLINE( 234)			_hx_tmp = false;
            		}
HXDLIN( 234)		if (_hx_tmp) {
HXLINE( 235)			if (this->isBlock(e)) {
HXLINE( 236)				 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 236)				_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            			}
            			else {
HXLINE( 238)				this->unexpected(tk);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseFullExpr,(void))

 ::hxcpp::debug::jsonrpc::eval::Expr Parser_obj::parseObject( ::Dynamic p1){
            	HX_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_242_parseObject)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(p1,"p1")
HXLINE( 242)
HXLINE( 244)		HX_VARI( ::Array< ::Dynamic>,fl) = ::Array_obj< ::Dynamic>::__new();
HXLINE( 245)		while(true){
HXLINE( 246)			HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,tk) = this->token();
HXLINE( 247)			HX_VARI( ::String,id) = null();
HXLINE( 248)			if (::hx::IsNull( tk )) {
HXLINE( 261)				this->unexpected(tk);
            			}
            			else {
HXLINE( 248)				switch((int)(tk->_hx_getIndex())){
            					case (int)1: {
HXLINE( 251)						HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Const,c) = tk->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Const >();
HXDLIN( 251)						{
HXLINE( 252)							if (!(this->allowJSON)) {
HXLINE( 253)								this->unexpected(tk);
            							}
HXLINE( 254)							if ((c->_hx_getIndex() == 2)) {
HXLINE( 255)								HX_VARI( ::String,s) = c->_hx_getString(0);
HXDLIN( 255)								id = s;
            							}
            							else {
HXLINE( 256)								this->unexpected(tk);
            							}
            						}
            					}
            					break;
            					case (int)2: {
HXLINE( 249)						HX_VARI( ::String,i) = tk->_hx_getString(0);
HXLINE( 250)						id = i;
            					}
            					break;
            					case (int)7: {
HXLINE( 259)						goto _hx_goto_34;
            					}
            					break;
            					default:{
HXLINE( 261)						this->unexpected(tk);
            					}
            				}
            			}
HXLINE( 263)			{
HXLINE( 263)				 ::hxcpp::debug::jsonrpc::eval::Token t = this->token();
HXDLIN( 263)				if (::hx::IsPointerNotEq( t,::hxcpp::debug::jsonrpc::eval::Token_obj::TDoubleDot_dyn() )) {
HXLINE( 263)					this->unexpected(t);
            				}
            			}
HXLINE( 264)			fl->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("e",65,00,00,00),this->parseExpr())
            				->setFixed(1,HX_("name",4b,72,ff,48),id)));
HXLINE( 265)			tk = this->token();
HXLINE( 266)			if (::hx::IsNull( tk )) {
HXLINE( 271)				this->unexpected(tk);
            			}
            			else {
HXLINE( 266)				switch((int)(tk->_hx_getIndex())){
            					case (int)7: {
HXLINE( 268)						goto _hx_goto_34;
            					}
            					break;
            					case (int)9: {
            					}
            					break;
            					default:{
HXLINE( 271)						this->unexpected(tk);
            					}
            				}
            			}
            		}
            		_hx_goto_34:;
HXLINE( 274)		return this->parseExprNext(::hxcpp::debug::jsonrpc::eval::Expr_obj::EObject(fl));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseObject,return )

 ::hxcpp::debug::jsonrpc::eval::Expr Parser_obj::parseExpr(){
            	HX_GC_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_277_parseExpr)
            	HX_STACK_THIS(this)
HXLINE( 277)
HXLINE( 278)		HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,tk) = this->token();
HXLINE( 279)		if (::hx::IsNull( tk )) {
HXLINE( 398)			return this->unexpected(tk);
            		}
            		else {
HXLINE( 279)			switch((int)(tk->_hx_getIndex())){
            				case (int)1: {
HXLINE( 285)					HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Const,c) = tk->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Const >();
HXLINE( 286)					return this->parseExprNext(::hxcpp::debug::jsonrpc::eval::Expr_obj::EConst(c));
            				}
            				break;
            				case (int)2: {
HXLINE( 280)					HX_VARI( ::String,id) = tk->_hx_getString(0);
HXLINE( 281)					HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e) = this->parseStructure(id);
HXLINE( 282)					if (::hx::IsNull( e )) {
HXLINE( 283)						e = ::hxcpp::debug::jsonrpc::eval::Expr_obj::EIdent(id);
            					}
HXLINE( 284)					return this->parseExprNext(e);
            				}
            				break;
            				case (int)3: {
HXLINE( 356)					HX_VARI( ::String,op) = tk->_hx_getString(0);
HXLINE( 357)					if (this->unops->exists(op)) {
HXLINE( 358)						HX_VARI( int,start) = 0;
HXLINE( 359)						HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e) = this->parseExpr();
HXLINE( 360)						if ((op == HX_("-",2d,00,00,00))) {
HXLINE( 361)							if ((e->_hx_getIndex() == 0)) {
HXLINE( 364)								 ::hxcpp::debug::jsonrpc::eval::Const _g = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Const >();
HXDLIN( 364)								switch((int)(_g->_hx_getIndex())){
            									case (int)0: {
HXLINE( 362)										HX_VARI( int,i) = _g->_hx_getInt(0);
HXLINE( 363)										return ::hxcpp::debug::jsonrpc::eval::Expr_obj::EConst(::hxcpp::debug::jsonrpc::eval::Const_obj::CInt(-(i)));
            									}
            									break;
            									case (int)1: {
HXLINE( 364)										HX_VARI( Float,f) = _g->_hx_getFloat(0);
HXLINE( 365)										return ::hxcpp::debug::jsonrpc::eval::Expr_obj::EConst(::hxcpp::debug::jsonrpc::eval::Const_obj::CFloat(-(f)));
            									}
            									break;
            									default:{
            									}
            								}
            							}
            						}
HXLINE( 368)						return this->makeUnop(op,e);
            					}
HXLINE( 370)					return this->unexpected(tk);
            				}
            				break;
            				case (int)4: {
HXLINE( 288)					HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e) = this->parseExpr();
HXLINE( 289)					tk = this->token();
HXLINE( 290)					if (::hx::IsNotNull( tk )) {
HXLINE( 290)						switch((int)(tk->_hx_getIndex())){
            							case (int)5: {
HXLINE( 292)								return this->parseExprNext(::hxcpp::debug::jsonrpc::eval::Expr_obj::EParent(e));
            							}
            							break;
            							case (int)9: {
HXLINE( 307)								if ((e->_hx_getIndex() == 1)) {
HXLINE( 308)									HX_VARI( ::String,v) = e->_hx_getString(0);
HXDLIN( 308)									return this->parseLambda(::Array_obj< ::Dynamic>::__new(1)->init(0, ::Dynamic(::hx::Anon_obj::Create(1)
            										->setFixed(0,HX_("name",4b,72,ff,48),v))),0);
            								}
            							}
            							break;
            							case (int)14: {
HXLINE( 294)								HX_VARI(  ::hxcpp::debug::jsonrpc::eval::CType,t) = this->parseType();
HXLINE( 295)								tk = this->token();
HXLINE( 296)								if (::hx::IsNotNull( tk )) {
HXLINE( 296)									switch((int)(tk->_hx_getIndex())){
            										case (int)5: {
HXLINE( 298)											return this->parseExprNext(::hxcpp::debug::jsonrpc::eval::Expr_obj::ECheckType(e,t));
            										}
            										break;
            										case (int)9: {
HXLINE( 300)											if ((e->_hx_getIndex() == 1)) {
HXLINE( 301)												HX_VARI( ::String,v) = e->_hx_getString(0);
HXDLIN( 301)												return this->parseLambda(::Array_obj< ::Dynamic>::__new(1)->init(0, ::Dynamic(::hx::Anon_obj::Create(2)
            													->setFixed(0,HX_("t",74,00,00,00),t)
            													->setFixed(1,HX_("name",4b,72,ff,48),v))),0);
            											}
            										}
            										break;
            										default:{
            										}
            									}
            								}
            							}
            							break;
            							default:{
            							}
            						}
            					}
HXLINE( 313)					return this->unexpected(tk);
            				}
            				break;
            				case (int)6: {
HXLINE( 315)					tk = this->token();
HXLINE( 316)					if (::hx::IsNull( tk )) {
HXLINE( 345)						 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 345)						_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            					}
            					else {
HXLINE( 316)						switch((int)(tk->_hx_getIndex())){
            							case (int)1: {
HXLINE( 328)								HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Const,c) = tk->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Const >();
HXLINE( 329)								if (this->allowJSON) {
HXLINE( 330)									if ((c->_hx_getIndex() == 2)) {
HXLINE( 331)										::String _g = c->_hx_getString(0);
HXDLIN( 331)										{
HXLINE( 332)											HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,tk2) = this->token();
HXLINE( 333)											{
HXLINE( 333)												 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 333)												_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk2,_this->head);
            											}
HXLINE( 334)											{
HXLINE( 334)												 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this1 = this->tokens;
HXDLIN( 334)												_this1->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this1->head);
            											}
HXLINE( 335)											if (::hx::IsNotNull( tk2 )) {
HXLINE( 335)												if ((tk2->_hx_getIndex() == 14)) {
HXLINE( 337)													return this->parseExprNext(this->parseObject(0));
            												}
            											}
            										}
            									}
            									else {
HXLINE( 341)										 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 341)										_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            									}
            								}
            								else {
HXLINE( 343)									 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 343)									_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 319)								::String _g = tk->_hx_getString(0);
HXDLIN( 319)								{
HXLINE( 320)									HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,tk2) = this->token();
HXLINE( 321)									{
HXLINE( 321)										 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 321)										_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk2,_this->head);
            									}
HXLINE( 322)									{
HXLINE( 322)										 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this1 = this->tokens;
HXDLIN( 322)										_this1->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this1->head);
            									}
HXLINE( 323)									if (::hx::IsNotNull( tk2 )) {
HXLINE( 323)										if ((tk2->_hx_getIndex() == 14)) {
HXLINE( 325)											return this->parseExprNext(this->parseObject(0));
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 318)								return this->parseExprNext(::hxcpp::debug::jsonrpc::eval::Expr_obj::EObject(::Array_obj< ::Dynamic>::__new(0)));
            							}
            							break;
            							default:{
HXLINE( 345)								 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 345)								_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            							}
            						}
            					}
HXLINE( 347)					HX_VARI( ::Array< ::Dynamic>,a) = ::Array_obj< ::Dynamic>::__new();
HXLINE( 348)					while(true){
HXLINE( 349)						this->parseFullExpr(a);
HXLINE( 350)						tk = this->token();
HXLINE( 351)						if (::hx::IsPointerEq( tk,::hxcpp::debug::jsonrpc::eval::Token_obj::TBrClose_dyn() )) {
HXLINE( 352)							goto _hx_goto_36;
            						}
HXLINE( 353)						{
HXLINE( 353)							 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 353)							_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            						}
            					}
            					_hx_goto_36:;
HXLINE( 355)					return ::hxcpp::debug::jsonrpc::eval::Expr_obj::EBlock(a);
            				}
            				break;
            				case (int)11: {
HXLINE( 372)					HX_VARI( ::Array< ::Dynamic>,a) = ::Array_obj< ::Dynamic>::__new();
HXLINE( 373)					tk = this->token();
HXLINE( 374)					while(::hx::IsPointerNotEq( tk,::hxcpp::debug::jsonrpc::eval::Token_obj::TBkClose_dyn() )){
HXLINE( 375)						{
HXLINE( 375)							 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 375)							_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            						}
HXLINE( 376)						a->push(this->parseExpr());
HXLINE( 377)						tk = this->token();
HXLINE( 378)						if (::hx::IsPointerEq( tk,::hxcpp::debug::jsonrpc::eval::Token_obj::TComma_dyn() )) {
HXLINE( 379)							tk = this->token();
            						}
            					}
HXLINE( 381)					if ((a->length == 1)) {
HXLINE( 382)						 ::hxcpp::debug::jsonrpc::eval::Expr _g = a->__get(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 382)						switch((int)(_g->_hx_getIndex())){
            							case (int)10: {
HXLINE( 383)								 ::hxcpp::debug::jsonrpc::eval::Expr _g1 = _g->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 383)								 ::hxcpp::debug::jsonrpc::eval::Expr _g2 = _g->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE( 384)								HX_VARI( ::String,tmp) = (HX_("__a_",fe,af,13,3f) + this->uid++);
HXLINE( 385)								HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e) = ::hxcpp::debug::jsonrpc::eval::Expr_obj::EBlock(::Array_obj< ::Dynamic>::__new(3)->init(0,::hxcpp::debug::jsonrpc::eval::Expr_obj::EVar(tmp,null(),::hxcpp::debug::jsonrpc::eval::Expr_obj::EArrayDecl(::Array_obj< ::Dynamic>::__new(0))))->init(1,this->mapCompr(tmp,a->__get(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >()))->init(2,::hxcpp::debug::jsonrpc::eval::Expr_obj::EIdent(tmp)));
HXLINE( 390)								return this->parseExprNext(e);
            							}
            							break;
            							case (int)11: {
HXLINE( 383)								::String _g1 = _g->_hx_getString(0);
HXDLIN( 383)								 ::hxcpp::debug::jsonrpc::eval::Expr _g2 = _g->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 383)								 ::hxcpp::debug::jsonrpc::eval::Expr _g3 = _g->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE( 384)								HX_VARI( ::String,tmp) = (HX_("__a_",fe,af,13,3f) + this->uid++);
HXLINE( 385)								HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e) = ::hxcpp::debug::jsonrpc::eval::Expr_obj::EBlock(::Array_obj< ::Dynamic>::__new(3)->init(0,::hxcpp::debug::jsonrpc::eval::Expr_obj::EVar(tmp,null(),::hxcpp::debug::jsonrpc::eval::Expr_obj::EArrayDecl(::Array_obj< ::Dynamic>::__new(0))))->init(1,this->mapCompr(tmp,a->__get(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >()))->init(2,::hxcpp::debug::jsonrpc::eval::Expr_obj::EIdent(tmp)));
HXLINE( 390)								return this->parseExprNext(e);
            							}
            							break;
            							case (int)24: {
HXLINE( 383)								 ::hxcpp::debug::jsonrpc::eval::Expr _g1 = _g->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 383)								 ::hxcpp::debug::jsonrpc::eval::Expr _g2 = _g->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE( 384)								HX_VARI( ::String,tmp) = (HX_("__a_",fe,af,13,3f) + this->uid++);
HXLINE( 385)								HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e) = ::hxcpp::debug::jsonrpc::eval::Expr_obj::EBlock(::Array_obj< ::Dynamic>::__new(3)->init(0,::hxcpp::debug::jsonrpc::eval::Expr_obj::EVar(tmp,null(),::hxcpp::debug::jsonrpc::eval::Expr_obj::EArrayDecl(::Array_obj< ::Dynamic>::__new(0))))->init(1,this->mapCompr(tmp,a->__get(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >()))->init(2,::hxcpp::debug::jsonrpc::eval::Expr_obj::EIdent(tmp)));
HXLINE( 390)								return this->parseExprNext(e);
            							}
            							break;
            							default:{
            							}
            						}
            					}
HXLINE( 393)					return this->parseExprNext(::hxcpp::debug::jsonrpc::eval::Expr_obj::EArrayDecl(a));
            				}
            				break;
            				case (int)15: {
HXLINE( 394)					HX_VARI( ::String,id) = tk->_hx_getString(0);
HXDLIN( 394)					if (this->allowMetadata) {
HXLINE( 395)						HX_VARI( ::Array< ::Dynamic>,args) = this->parseMetaArgs();
HXLINE( 396)						return ::hxcpp::debug::jsonrpc::eval::Expr_obj::EMeta(id,args,this->parseExpr());
            					}
            					else {
HXLINE( 398)						return this->unexpected(tk);
            					}
            				}
            				break;
            				default:{
HXLINE( 398)					return this->unexpected(tk);
            				}
            			}
            		}
HXLINE( 279)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseExpr,return )

 ::hxcpp::debug::jsonrpc::eval::Expr Parser_obj::parseLambda(::Array< ::Dynamic> args, ::Dynamic pmin){
            	HX_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_402_parseLambda)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(args,"args")
            	HX_STACK_ARG(pmin,"pmin")
HXLINE( 402)
HXLINE( 403)		while(true){
HXLINE( 404)			HX_VARI( ::String,id) = this->getIdent();
HXLINE( 405)			HX_VAR(  ::hxcpp::debug::jsonrpc::eval::CType,t);
HXDLIN( 405)			if (this->maybe(::hxcpp::debug::jsonrpc::eval::Token_obj::TDoubleDot_dyn())) {
HXLINE( 405)				t = this->parseType();
            			}
            			else {
HXLINE( 405)				t = null();
            			}
HXLINE( 406)			args->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("t",74,00,00,00),t)
            				->setFixed(1,HX_("name",4b,72,ff,48),id)));
HXLINE( 407)			HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,tk) = this->token();
HXLINE( 408)			if (::hx::IsNull( tk )) {
HXLINE( 413)				this->unexpected(tk);
            			}
            			else {
HXLINE( 408)				switch((int)(tk->_hx_getIndex())){
            					case (int)5: {
HXLINE( 411)						goto _hx_goto_39;
            					}
            					break;
            					case (int)9: {
            					}
            					break;
            					default:{
HXLINE( 413)						this->unexpected(tk);
            					}
            				}
            			}
            		}
            		_hx_goto_39:;
HXLINE( 416)		{
HXLINE( 416)			 ::hxcpp::debug::jsonrpc::eval::Token t = this->token();
HXDLIN( 416)			if (!(__hxcpp_enum_eq(t,::hxcpp::debug::jsonrpc::eval::Token_obj::TOp(HX_("->",71,27,00,00))))) {
HXLINE( 416)				this->unexpected(t);
            			}
            		}
HXLINE( 417)		HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,eret) = this->parseExpr();
HXLINE( 418)		return ::hxcpp::debug::jsonrpc::eval::Expr_obj::EFunction(args,::hxcpp::debug::jsonrpc::eval::Expr_obj::EReturn(eret),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,parseLambda,return )

::Array< ::Dynamic> Parser_obj::parseMetaArgs(){
            	HX_GC_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_421_parseMetaArgs)
            	HX_STACK_THIS(this)
HXLINE( 421)
HXLINE( 422)		HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,tk) = this->token();
HXLINE( 423)		if (::hx::IsPointerNotEq( tk,::hxcpp::debug::jsonrpc::eval::Token_obj::TPOpen_dyn() )) {
HXLINE( 424)			{
HXLINE( 424)				 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 424)				_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            			}
HXLINE( 425)			return null();
            		}
HXLINE( 427)		HX_VARI( ::Array< ::Dynamic>,args) = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 428)		tk = this->token();
HXLINE( 429)		if (::hx::IsPointerNotEq( tk,::hxcpp::debug::jsonrpc::eval::Token_obj::TPClose_dyn() )) {
HXLINE( 430)			{
HXLINE( 430)				 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 430)				_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            			}
HXLINE( 431)			while(true){
HXLINE( 432)				args->push(this->parseExpr());
HXLINE( 433)				{
HXLINE( 433)					 ::hxcpp::debug::jsonrpc::eval::Token _g = this->token();
HXDLIN( 433)					if (::hx::IsNull( _g )) {
HXLINE( 437)						HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,tk) = _g;
HXLINE( 438)						this->unexpected(tk);
            					}
            					else {
HXLINE( 433)						switch((int)(_g->_hx_getIndex())){
            							case (int)5: {
HXLINE( 436)								goto _hx_goto_41;
            							}
            							break;
            							case (int)9: {
            							}
            							break;
            							default:{
HXLINE( 437)								HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,tk) = _g;
HXLINE( 438)								this->unexpected(tk);
            							}
            						}
            					}
            				}
            			}
            			_hx_goto_41:;
            		}
HXLINE( 442)		return args;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseMetaArgs,return )

 ::hxcpp::debug::jsonrpc::eval::Expr Parser_obj::mapCompr(::String tmp, ::hxcpp::debug::jsonrpc::eval::Expr e){
            	HX_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_445_mapCompr)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(tmp,"tmp")
            	HX_STACK_ARG(e,"e")
HXLINE( 445)
HXLINE( 446)		HX_VAR(  ::hxcpp::debug::jsonrpc::eval::Expr,edef);
HXDLIN( 446)		switch((int)(e->_hx_getIndex())){
            			case (int)3: {
HXLINE( 457)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e2) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE( 446)				edef = ::hxcpp::debug::jsonrpc::eval::Expr_obj::EParent(this->mapCompr(tmp,e2));
            			}
            			break;
            			case (int)4: {
HXLINE( 455)				::Array< ::Dynamic> _g = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 455)				if ((_g->length == 1)) {
HXLINE( 455)					HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e) = _g->__get(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE( 446)					edef = ::hxcpp::debug::jsonrpc::eval::Expr_obj::EBlock(::Array_obj< ::Dynamic>::__new(1)->init(0,this->mapCompr(tmp,e)));
            				}
            				else {
HXLINE( 446)					edef = ::hxcpp::debug::jsonrpc::eval::Expr_obj::ECall(::hxcpp::debug::jsonrpc::eval::Expr_obj::EField(::hxcpp::debug::jsonrpc::eval::Expr_obj::EIdent(tmp),HX_("push",da,11,61,4a)),::Array_obj< ::Dynamic>::__new(1)->init(0,e));
            				}
            			}
            			break;
            			case (int)9: {
HXLINE( 453)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,cond) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 453)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 453)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e2) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 453)				if (::hx::IsNull( e2 )) {
HXLINE( 446)					edef = ::hxcpp::debug::jsonrpc::eval::Expr_obj::EIf(cond,this->mapCompr(tmp,e1),null());
            				}
            				else {
HXLINE( 446)					edef = ::hxcpp::debug::jsonrpc::eval::Expr_obj::ECall(::hxcpp::debug::jsonrpc::eval::Expr_obj::EField(::hxcpp::debug::jsonrpc::eval::Expr_obj::EIdent(tmp),HX_("push",da,11,61,4a)),::Array_obj< ::Dynamic>::__new(1)->init(0,e));
            				}
            			}
            			break;
            			case (int)10: {
HXLINE( 449)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,cond) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 449)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e2) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE( 446)				edef = ::hxcpp::debug::jsonrpc::eval::Expr_obj::EWhile(cond,this->mapCompr(tmp,e2));
            			}
            			break;
            			case (int)11: {
HXLINE( 447)				HX_VARI( ::String,v) = e->_hx_getString(0);
HXDLIN( 447)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,it) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 447)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e2) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE( 446)				edef = ::hxcpp::debug::jsonrpc::eval::Expr_obj::EFor(v,it,this->mapCompr(tmp,e2));
            			}
            			break;
            			case (int)24: {
HXLINE( 451)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,cond) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 451)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e2) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE( 446)				edef = ::hxcpp::debug::jsonrpc::eval::Expr_obj::EDoWhile(cond,this->mapCompr(tmp,e2));
            			}
            			break;
            			default:{
HXLINE( 446)				edef = ::hxcpp::debug::jsonrpc::eval::Expr_obj::ECall(::hxcpp::debug::jsonrpc::eval::Expr_obj::EField(::hxcpp::debug::jsonrpc::eval::Expr_obj::EIdent(tmp),HX_("push",da,11,61,4a)),::Array_obj< ::Dynamic>::__new(1)->init(0,e));
            			}
            		}
HXLINE( 462)		return edef;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,mapCompr,return )

 ::hxcpp::debug::jsonrpc::eval::Expr Parser_obj::makeUnop(::String op, ::hxcpp::debug::jsonrpc::eval::Expr e){
            	HX_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_466_makeUnop)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(op,"op")
            	HX_STACK_ARG(e,"e")
HXLINE( 466)
HXDLIN( 466)		switch((int)(e->_hx_getIndex())){
            			case (int)6: {
HXLINE( 467)				HX_VARI( ::String,bop) = e->_hx_getString(0);
HXDLIN( 467)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 467)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e2) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 467)				return ::hxcpp::debug::jsonrpc::eval::Expr_obj::EBinop(bop,this->makeUnop(op,e1),e2);
            			}
            			break;
            			case (int)22: {
HXLINE( 468)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 468)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e2) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 468)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e3) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 468)				return ::hxcpp::debug::jsonrpc::eval::Expr_obj::ETernary(this->makeUnop(op,e1),e2,e3);
            			}
            			break;
            			default:{
HXLINE( 469)				return ::hxcpp::debug::jsonrpc::eval::Expr_obj::EUnop(op,true,e);
            			}
            		}
HXLINE( 466)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,makeUnop,return )

 ::hxcpp::debug::jsonrpc::eval::Expr Parser_obj::makeBinop(::String op, ::hxcpp::debug::jsonrpc::eval::Expr e1, ::hxcpp::debug::jsonrpc::eval::Expr e){
            	HX_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_474_makeBinop)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(op,"op")
            	HX_STACK_ARG(e1,"e1")
            	HX_STACK_ARG(e,"e")
HXLINE( 474)
HXDLIN( 474)		switch((int)(e->_hx_getIndex())){
            			case (int)6: {
HXLINE( 475)				HX_VARI( ::String,op2) = e->_hx_getString(0);
HXDLIN( 475)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e2) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 475)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e3) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE( 476)				bool _hx_tmp;
HXDLIN( 476)				 ::Dynamic _hx_tmp1 = this->opPriority->get(op);
HXDLIN( 476)				if (::hx::IsLessEq( _hx_tmp1,this->opPriority->get(op2) )) {
HXLINE( 476)					_hx_tmp = !(this->opRightAssoc->exists(op));
            				}
            				else {
HXLINE( 476)					_hx_tmp = false;
            				}
HXDLIN( 476)				if (_hx_tmp) {
HXLINE( 477)					return ::hxcpp::debug::jsonrpc::eval::Expr_obj::EBinop(op2,this->makeBinop(op,e1,e2),e3);
            				}
            				else {
HXLINE( 479)					return ::hxcpp::debug::jsonrpc::eval::Expr_obj::EBinop(op,e1,e);
            				}
            			}
            			break;
            			case (int)22: {
HXLINE( 480)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e2) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 480)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e3) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 480)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e4) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE( 481)				if (this->opRightAssoc->exists(op)) {
HXLINE( 482)					return ::hxcpp::debug::jsonrpc::eval::Expr_obj::EBinop(op,e1,e);
            				}
            				else {
HXLINE( 484)					return ::hxcpp::debug::jsonrpc::eval::Expr_obj::ETernary(this->makeBinop(op,e1,e2),e3,e4);
            				}
            			}
            			break;
            			default:{
HXLINE( 486)				return ::hxcpp::debug::jsonrpc::eval::Expr_obj::EBinop(op,e1,e);
            			}
            		}
HXLINE( 474)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(Parser_obj,makeBinop,return )

 ::hxcpp::debug::jsonrpc::eval::Expr Parser_obj::parseStructure(::String id){
            	HX_GC_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_491_parseStructure)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(id,"id")
HXLINE( 491)
HXDLIN( 491)		::String _hx_switch_0 = id;
            		if (  (_hx_switch_0==HX_("break",bf,24,ec,b8)) ){
HXLINE( 547)			return ::hxcpp::debug::jsonrpc::eval::Expr_obj::EBreak_dyn();
HXDLIN( 547)			goto _hx_goto_46;
            		}
            		if (  (_hx_switch_0==HX_("continue",67,e0,c8,31)) ){
HXLINE( 548)			return ::hxcpp::debug::jsonrpc::eval::Expr_obj::EContinue_dyn();
HXDLIN( 548)			goto _hx_goto_46;
            		}
            		if (  (_hx_switch_0==HX_("do",8b,57,00,00)) ){
HXLINE( 531)			HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e) = this->parseExpr();
HXLINE( 532)			HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,tk) = this->token();
HXLINE( 533)			if (::hx::IsNull( tk )) {
HXLINE( 535)				this->unexpected(tk);
            			}
            			else {
HXLINE( 533)				if ((tk->_hx_getIndex() == 2)) {
HXLINE( 534)					if ((tk->_hx_getString(0) != HX_("while",b1,43,bd,c9))) {
HXLINE( 535)						this->unexpected(tk);
            					}
            				}
            				else {
HXLINE( 535)					this->unexpected(tk);
            				}
            			}
HXLINE( 537)			HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,econd) = this->parseExpr();
HXLINE( 538)			return ::hxcpp::debug::jsonrpc::eval::Expr_obj::EDoWhile(econd,e);
HXLINE( 530)			goto _hx_goto_46;
            		}
            		if (  (_hx_switch_0==HX_("else",b9,e4,14,43)) ){
HXLINE( 549)			return this->unexpected(::hxcpp::debug::jsonrpc::eval::Token_obj::TId(id));
HXDLIN( 549)			goto _hx_goto_46;
            		}
            		if (  (_hx_switch_0==HX_("for",09,c7,4d,00)) ){
HXLINE( 540)			{
HXLINE( 540)				 ::hxcpp::debug::jsonrpc::eval::Token t = this->token();
HXDLIN( 540)				if (::hx::IsPointerNotEq( t,::hxcpp::debug::jsonrpc::eval::Token_obj::TPOpen_dyn() )) {
HXLINE( 540)					this->unexpected(t);
            				}
            			}
HXLINE( 541)			HX_VARI( ::String,vname) = this->getIdent();
HXLINE( 542)			{
HXLINE( 542)				 ::hxcpp::debug::jsonrpc::eval::Token t1 = this->token();
HXDLIN( 542)				if (!(__hxcpp_enum_eq(t1,::hxcpp::debug::jsonrpc::eval::Token_obj::TId(HX_("in",e5,5b,00,00))))) {
HXLINE( 542)					this->unexpected(t1);
            				}
            			}
HXLINE( 543)			HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,eiter) = this->parseExpr();
HXLINE( 544)			{
HXLINE( 544)				 ::hxcpp::debug::jsonrpc::eval::Token t2 = this->token();
HXDLIN( 544)				if (::hx::IsPointerNotEq( t2,::hxcpp::debug::jsonrpc::eval::Token_obj::TPClose_dyn() )) {
HXLINE( 544)					this->unexpected(t2);
            				}
            			}
HXLINE( 545)			HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e) = this->parseExpr();
HXLINE( 546)			return ::hxcpp::debug::jsonrpc::eval::Expr_obj::EFor(vname,eiter,e);
HXLINE( 539)			goto _hx_goto_46;
            		}
            		if (  (_hx_switch_0==HX_("function",18,ab,52,14)) ){
HXLINE( 554)			HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,tk) = this->token();
HXLINE( 555)			HX_VARI( ::String,name) = null();
HXLINE( 556)			if (::hx::IsNull( tk )) {
HXLINE( 558)				 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 558)				_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            			}
            			else {
HXLINE( 556)				if ((tk->_hx_getIndex() == 2)) {
HXLINE( 557)					HX_VARI( ::String,id) = tk->_hx_getString(0);
HXDLIN( 557)					name = id;
            				}
            				else {
HXLINE( 558)					 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 558)					_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            				}
            			}
HXLINE( 560)			HX_VARI(  ::Dynamic,inf) = this->parseFunctionDecl();
HXLINE( 561)			return ::hxcpp::debug::jsonrpc::eval::Expr_obj::EFunction( ::Dynamic(inf->__Field(HX_("args",5d,8d,74,40),::hx::paccDynamic)), ::Dynamic(inf->__Field(HX_("body",a2,7a,1b,41),::hx::paccDynamic)),name, ::Dynamic(inf->__Field(HX_("ret",61,d9,56,00),::hx::paccDynamic)));
HXLINE( 553)			goto _hx_goto_46;
            		}
            		if (  (_hx_switch_0==HX_("if",dd,5b,00,00)) ){
HXLINE( 493)			{
HXLINE( 493)				 ::hxcpp::debug::jsonrpc::eval::Token t = this->token();
HXDLIN( 493)				if (::hx::IsPointerNotEq( t,::hxcpp::debug::jsonrpc::eval::Token_obj::TPOpen_dyn() )) {
HXLINE( 493)					this->unexpected(t);
            				}
            			}
HXLINE( 494)			HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,cond) = this->parseExpr();
HXLINE( 495)			{
HXLINE( 495)				 ::hxcpp::debug::jsonrpc::eval::Token t1 = this->token();
HXDLIN( 495)				if (::hx::IsPointerNotEq( t1,::hxcpp::debug::jsonrpc::eval::Token_obj::TPClose_dyn() )) {
HXLINE( 495)					this->unexpected(t1);
            				}
            			}
HXLINE( 496)			HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = this->parseExpr();
HXLINE( 497)			HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e2) = null();
HXLINE( 498)			HX_VARI( bool,semic) = false;
HXLINE( 499)			HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,tk) = this->token();
HXLINE( 500)			if (::hx::IsPointerEq( tk,::hxcpp::debug::jsonrpc::eval::Token_obj::TSemicolon_dyn() )) {
HXLINE( 501)				semic = true;
HXLINE( 502)				tk = this->token();
            			}
HXLINE( 504)			if (__hxcpp_enum_eq(tk,::hxcpp::debug::jsonrpc::eval::Token_obj::TId(HX_("else",b9,e4,14,43)))) {
HXLINE( 505)				e2 = this->parseExpr();
            			}
            			else {
HXLINE( 507)				{
HXLINE( 507)					 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 507)					_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            				}
HXLINE( 508)				if (semic) {
HXLINE( 509)					 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 509)					_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,::hxcpp::debug::jsonrpc::eval::Token_obj::TSemicolon_dyn(),_this->head);
            				}
            			}
HXLINE( 511)			return ::hxcpp::debug::jsonrpc::eval::Expr_obj::EIf(cond,e1,e2);
HXLINE( 492)			goto _hx_goto_46;
            		}
            		if (  (_hx_switch_0==HX_("inline",59,ca,3f,99)) ){
HXLINE( 551)			if (!(this->maybe(::hxcpp::debug::jsonrpc::eval::Token_obj::TId(HX_("function",18,ab,52,14))))) {
HXLINE( 551)				this->unexpected(::hxcpp::debug::jsonrpc::eval::Token_obj::TId(HX_("inline",59,ca,3f,99)));
            			}
HXLINE( 552)			return this->parseStructure(HX_("function",18,ab,52,14));
HXLINE( 550)			goto _hx_goto_46;
            		}
            		if (  (_hx_switch_0==HX_("new",60,d0,53,00)) ){
HXLINE( 568)			HX_VARI( ::Array< ::String >,a) = ::Array_obj< ::String >::__new();
HXLINE( 569)			a->push(this->getIdent());
HXLINE( 570)			HX_VARI( bool,next) = true;
HXLINE( 571)			while(next){
HXLINE( 572)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,tk) = this->token();
HXLINE( 573)				if (::hx::IsNull( tk )) {
HXLINE( 579)					this->unexpected(tk);
            				}
            				else {
HXLINE( 573)					switch((int)(tk->_hx_getIndex())){
            						case (int)4: {
HXLINE( 577)							next = false;
            						}
            						break;
            						case (int)8: {
HXLINE( 575)							a->push(this->getIdent());
            						}
            						break;
            						default:{
HXLINE( 579)							this->unexpected(tk);
            						}
            					}
            				}
            			}
HXLINE( 582)			HX_VARI( ::Array< ::Dynamic>,args) = this->parseExprList(::hxcpp::debug::jsonrpc::eval::Token_obj::TPClose_dyn());
HXLINE( 583)			return ::hxcpp::debug::jsonrpc::eval::Expr_obj::ENew(a->join(HX_(".",2e,00,00,00)),args);
HXLINE( 567)			goto _hx_goto_46;
            		}
            		if (  (_hx_switch_0==HX_("return",b0,a4,2d,09)) ){
HXLINE( 563)			HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,tk) = this->token();
HXLINE( 564)			{
HXLINE( 564)				 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 564)				_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            			}
HXLINE( 565)			HX_VAR(  ::hxcpp::debug::jsonrpc::eval::Expr,e);
HXDLIN( 565)			if (::hx::IsPointerEq( tk,::hxcpp::debug::jsonrpc::eval::Token_obj::TSemicolon_dyn() )) {
HXLINE( 565)				e = null();
            			}
            			else {
HXLINE( 565)				e = this->parseExpr();
            			}
HXLINE( 566)			return ::hxcpp::debug::jsonrpc::eval::Expr_obj::EReturn(e);
HXLINE( 562)			goto _hx_goto_46;
            		}
            		if (  (_hx_switch_0==HX_("switch",f4,49,79,c5)) ){
HXLINE( 602)			HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e) = this->parseExpr();
HXLINE( 603)			HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,def) = null();
HXDLIN( 603)			HX_VARI( ::Array< ::Dynamic>,cases) = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 604)			{
HXLINE( 604)				 ::hxcpp::debug::jsonrpc::eval::Token t = this->token();
HXDLIN( 604)				if (::hx::IsPointerNotEq( t,::hxcpp::debug::jsonrpc::eval::Token_obj::TBrOpen_dyn() )) {
HXLINE( 604)					this->unexpected(t);
            				}
            			}
HXLINE( 605)			while(true){
HXLINE( 606)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,tk) = this->token();
HXLINE( 607)				if (::hx::IsNull( tk )) {
HXLINE( 664)					this->unexpected(tk);
            				}
            				else {
HXLINE( 607)					switch((int)(tk->_hx_getIndex())){
            						case (int)2: {
HXLINE( 641)							::String _hx_switch_1 = tk->_hx_getString(0);
            							if (  (_hx_switch_1==HX_("case",b0,1e,ba,41)) ){
HXLINE( 609)								HX_VARI(  ::Dynamic,c) =  ::Dynamic(::hx::Anon_obj::Create(2)
            									->setFixed(0,HX_("expr",35,fd,1d,43),null())
            									->setFixed(1,HX_("values",e2,03,b7,4f),::Array_obj< ::Dynamic>::__new(0)));
HXLINE( 610)								cases->push(c);
HXLINE( 611)								while(true){
HXLINE( 612)									HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e) = this->parseExpr();
HXLINE( 613)									( (::Array< ::Dynamic>)(c->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic)) )->push(e);
HXLINE( 614)									tk = this->token();
HXLINE( 615)									if (::hx::IsNull( tk )) {
HXLINE( 621)										this->unexpected(tk);
            									}
            									else {
HXLINE( 615)										switch((int)(tk->_hx_getIndex())){
            											case (int)9: {
            											}
            											break;
            											case (int)14: {
HXLINE( 619)												goto _hx_goto_50;
            											}
            											break;
            											default:{
HXLINE( 621)												this->unexpected(tk);
            											}
            										}
            									}
            								}
            								_hx_goto_50:;
HXLINE( 624)								HX_VARI( ::Array< ::Dynamic>,exprs) = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 625)								while(true){
HXLINE( 626)									tk = this->token();
HXLINE( 627)									{
HXLINE( 627)										 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 627)										_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            									}
HXLINE( 628)									if (::hx::IsNull( tk )) {
HXLINE( 632)										this->parseFullExpr(exprs);
            									}
            									else {
HXLINE( 628)										switch((int)(tk->_hx_getIndex())){
            											case (int)2: {
HXLINE( 629)												::String _hx_switch_2 = tk->_hx_getString(0);
            												if (  (_hx_switch_2==HX_("case",b0,1e,ba,41)) ||  (_hx_switch_2==HX_("default",c1,d8,c3,9b)) ){
HXLINE( 630)													goto _hx_goto_51;
HXDLIN( 630)													goto _hx_goto_52;
            												}
            												/* default */{
HXLINE( 632)													this->parseFullExpr(exprs);
            												}
            												_hx_goto_52:;
            											}
            											break;
            											case (int)7: {
HXLINE( 630)												goto _hx_goto_51;
            											}
            											break;
            											default:{
HXLINE( 632)												this->parseFullExpr(exprs);
            											}
            										}
            									}
            								}
            								_hx_goto_51:;
HXLINE( 635)								 ::hxcpp::debug::jsonrpc::eval::Expr _hx_tmp;
HXDLIN( 635)								if ((exprs->length == 1)) {
HXLINE( 635)									_hx_tmp = exprs->__get(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
            								}
            								else {
HXLINE( 637)									if ((exprs->length == 0)) {
HXLINE( 635)										_hx_tmp = ::hxcpp::debug::jsonrpc::eval::Expr_obj::EBlock(::Array_obj< ::Dynamic>::__new(0));
            									}
            									else {
HXLINE( 635)										_hx_tmp = ::hxcpp::debug::jsonrpc::eval::Expr_obj::EBlock(exprs);
            									}
            								}
HXDLIN( 635)								c->__SetField(HX_("expr",35,fd,1d,43),_hx_tmp,::hx::paccDynamic);
HXLINE( 608)								goto _hx_goto_49;
            							}
            							if (  (_hx_switch_1==HX_("default",c1,d8,c3,9b)) ){
HXLINE( 642)								if (::hx::IsNotNull( def )) {
HXLINE( 642)									this->unexpected(tk);
            								}
HXLINE( 643)								{
HXLINE( 643)									 ::hxcpp::debug::jsonrpc::eval::Token t = this->token();
HXDLIN( 643)									if (::hx::IsPointerNotEq( t,::hxcpp::debug::jsonrpc::eval::Token_obj::TDoubleDot_dyn() )) {
HXLINE( 643)										this->unexpected(t);
            									}
            								}
HXLINE( 644)								HX_VARI( ::Array< ::Dynamic>,exprs) = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 645)								while(true){
HXLINE( 646)									tk = this->token();
HXLINE( 647)									{
HXLINE( 647)										 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 647)										_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            									}
HXLINE( 648)									if (::hx::IsNull( tk )) {
HXLINE( 652)										this->parseFullExpr(exprs);
            									}
            									else {
HXLINE( 648)										switch((int)(tk->_hx_getIndex())){
            											case (int)2: {
HXLINE( 649)												::String _hx_switch_3 = tk->_hx_getString(0);
            												if (  (_hx_switch_3==HX_("case",b0,1e,ba,41)) ||  (_hx_switch_3==HX_("default",c1,d8,c3,9b)) ){
HXLINE( 650)													goto _hx_goto_53;
HXDLIN( 650)													goto _hx_goto_54;
            												}
            												/* default */{
HXLINE( 652)													this->parseFullExpr(exprs);
            												}
            												_hx_goto_54:;
            											}
            											break;
            											case (int)7: {
HXLINE( 650)												goto _hx_goto_53;
            											}
            											break;
            											default:{
HXLINE( 652)												this->parseFullExpr(exprs);
            											}
            										}
            									}
            								}
            								_hx_goto_53:;
HXLINE( 655)								if ((exprs->length == 1)) {
HXLINE( 656)									def = exprs->__get(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
            								}
            								else {
HXLINE( 657)									if ((exprs->length == 0)) {
HXLINE( 658)										def = ::hxcpp::debug::jsonrpc::eval::Expr_obj::EBlock(::Array_obj< ::Dynamic>::__new(0));
            									}
            									else {
HXLINE( 660)										def = ::hxcpp::debug::jsonrpc::eval::Expr_obj::EBlock(exprs);
            									}
            								}
HXLINE( 641)								goto _hx_goto_49;
            							}
            							/* default */{
HXLINE( 664)								this->unexpected(tk);
            							}
            							_hx_goto_49:;
            						}
            						break;
            						case (int)7: {
HXLINE( 662)							goto _hx_goto_48;
            						}
            						break;
            						default:{
HXLINE( 664)							this->unexpected(tk);
            						}
            					}
            				}
            			}
            			_hx_goto_48:;
HXLINE( 667)			return ::hxcpp::debug::jsonrpc::eval::Expr_obj::ESwitch(e,cases,def);
HXLINE( 601)			goto _hx_goto_46;
            		}
            		if (  (_hx_switch_0==HX_("throw",26,5d,90,0f)) ){
HXLINE( 585)			HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e) = this->parseExpr();
HXLINE( 586)			return ::hxcpp::debug::jsonrpc::eval::Expr_obj::EThrow(e);
HXLINE( 584)			goto _hx_goto_46;
            		}
            		if (  (_hx_switch_0==HX_("try",3b,69,58,00)) ){
HXLINE( 588)			HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e) = this->parseExpr();
HXLINE( 589)			{
HXLINE( 589)				 ::hxcpp::debug::jsonrpc::eval::Token t = this->token();
HXDLIN( 589)				if (!(__hxcpp_enum_eq(t,::hxcpp::debug::jsonrpc::eval::Token_obj::TId(HX_("catch",3b,7c,21,41))))) {
HXLINE( 589)					this->unexpected(t);
            				}
            			}
HXLINE( 590)			{
HXLINE( 590)				 ::hxcpp::debug::jsonrpc::eval::Token t1 = this->token();
HXDLIN( 590)				if (::hx::IsPointerNotEq( t1,::hxcpp::debug::jsonrpc::eval::Token_obj::TPOpen_dyn() )) {
HXLINE( 590)					this->unexpected(t1);
            				}
            			}
HXLINE( 591)			HX_VARI( ::String,vname) = this->getIdent();
HXLINE( 592)			{
HXLINE( 592)				 ::hxcpp::debug::jsonrpc::eval::Token t2 = this->token();
HXDLIN( 592)				if (::hx::IsPointerNotEq( t2,::hxcpp::debug::jsonrpc::eval::Token_obj::TDoubleDot_dyn() )) {
HXLINE( 592)					this->unexpected(t2);
            				}
            			}
HXLINE( 593)			HX_VARI(  ::hxcpp::debug::jsonrpc::eval::CType,t3) = null();
HXLINE( 594)			if (this->allowTypes) {
HXLINE( 595)				t3 = this->parseType();
            			}
            			else {
HXLINE( 597)				 ::hxcpp::debug::jsonrpc::eval::Token t = this->token();
HXDLIN( 597)				if (!(__hxcpp_enum_eq(t,::hxcpp::debug::jsonrpc::eval::Token_obj::TId(HX_("Dynamic",5f,c7,66,03))))) {
HXLINE( 597)					this->unexpected(t);
            				}
            			}
HXLINE( 598)			{
HXLINE( 598)				 ::hxcpp::debug::jsonrpc::eval::Token t4 = this->token();
HXDLIN( 598)				if (::hx::IsPointerNotEq( t4,::hxcpp::debug::jsonrpc::eval::Token_obj::TPClose_dyn() )) {
HXLINE( 598)					this->unexpected(t4);
            				}
            			}
HXLINE( 599)			HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,ec) = this->parseExpr();
HXLINE( 600)			return ::hxcpp::debug::jsonrpc::eval::Expr_obj::ETry(e,vname,t3,ec);
HXLINE( 587)			goto _hx_goto_46;
            		}
            		if (  (_hx_switch_0==HX_("var",e7,de,59,00)) ){
HXLINE( 513)			HX_VARI( ::String,ident) = this->getIdent();
HXLINE( 514)			HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,tk) = this->token();
HXLINE( 515)			HX_VARI(  ::hxcpp::debug::jsonrpc::eval::CType,t) = null();
HXLINE( 516)			bool _hx_tmp;
HXDLIN( 516)			if (::hx::IsPointerEq( tk,::hxcpp::debug::jsonrpc::eval::Token_obj::TDoubleDot_dyn() )) {
HXLINE( 516)				_hx_tmp = this->allowTypes;
            			}
            			else {
HXLINE( 516)				_hx_tmp = false;
            			}
HXDLIN( 516)			if (_hx_tmp) {
HXLINE( 517)				t = this->parseType();
HXLINE( 518)				tk = this->token();
            			}
HXLINE( 520)			HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e) = null();
HXLINE( 521)			if (__hxcpp_enum_eq(tk,::hxcpp::debug::jsonrpc::eval::Token_obj::TOp(HX_("=",3d,00,00,00)))) {
HXLINE( 522)				e = this->parseExpr();
            			}
            			else {
HXLINE( 524)				 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 524)				_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            			}
HXLINE( 525)			return ::hxcpp::debug::jsonrpc::eval::Expr_obj::EVar(ident,t,e);
HXLINE( 512)			goto _hx_goto_46;
            		}
            		if (  (_hx_switch_0==HX_("while",b1,43,bd,c9)) ){
HXLINE( 527)			HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,econd) = this->parseExpr();
HXLINE( 528)			HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e) = this->parseExpr();
HXLINE( 529)			return ::hxcpp::debug::jsonrpc::eval::Expr_obj::EWhile(econd,e);
HXLINE( 526)			goto _hx_goto_46;
            		}
            		/* default */{
HXLINE( 669)			return null();
            		}
            		_hx_goto_46:;
HXLINE( 491)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseStructure,return )

 ::hxcpp::debug::jsonrpc::eval::Expr Parser_obj::parseExprNext( ::hxcpp::debug::jsonrpc::eval::Expr e1){
            	HX_GC_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_673_parseExprNext)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(e1,"e1")
HXLINE( 673)
HXLINE( 674)		HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,tk) = this->token();
HXLINE( 675)		if (::hx::IsNull( tk )) {
HXLINE( 717)			{
HXLINE( 717)				 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 717)				_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            			}
HXLINE( 718)			return e1;
            		}
            		else {
HXLINE( 675)			switch((int)(tk->_hx_getIndex())){
            				case (int)3: {
HXLINE( 676)					HX_VARI( ::String,op) = tk->_hx_getString(0);
HXLINE( 677)					if ((op == HX_("->",71,27,00,00))) {
HXLINE( 679)						switch((int)(e1->_hx_getIndex())){
            							case (int)1: {
HXLINE( 680)								HX_VARI( ::String,i) = e1->_hx_getString(0);
HXLINE( 681)								HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,eret) = this->parseExpr();
HXLINE( 682)								return ::hxcpp::debug::jsonrpc::eval::Expr_obj::EFunction(::Array_obj< ::Dynamic>::__new(1)->init(0, ::Dynamic(::hx::Anon_obj::Create(1)
            									->setFixed(0,HX_("name",4b,72,ff,48),i))),::hxcpp::debug::jsonrpc::eval::Expr_obj::EReturn(eret),null(),null());
            							}
            							break;
            							case (int)3: {
HXLINE( 680)								 ::hxcpp::debug::jsonrpc::eval::Expr _hx_tmp = e1->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 680)								if ((_hx_tmp->_hx_getIndex() == 1)) {
HXLINE( 680)									HX_VARI( ::String,i) = _hx_tmp->_hx_getString(0);
HXLINE( 681)									HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,eret) = this->parseExpr();
HXLINE( 682)									return ::hxcpp::debug::jsonrpc::eval::Expr_obj::EFunction(::Array_obj< ::Dynamic>::__new(1)->init(0, ::Dynamic(::hx::Anon_obj::Create(1)
            										->setFixed(0,HX_("name",4b,72,ff,48),i))),::hxcpp::debug::jsonrpc::eval::Expr_obj::EReturn(eret),null(),null());
            								}
            							}
            							break;
            							case (int)26: {
HXLINE( 683)								 ::hxcpp::debug::jsonrpc::eval::Expr _hx_tmp = e1->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 683)								if ((_hx_tmp->_hx_getIndex() == 1)) {
HXLINE( 683)									HX_VARI( ::String,i) = _hx_tmp->_hx_getString(0);
HXDLIN( 683)									HX_VARI(  ::hxcpp::debug::jsonrpc::eval::CType,t) = e1->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::CType >();
HXLINE( 684)									HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,eret) = this->parseExpr();
HXLINE( 685)									return ::hxcpp::debug::jsonrpc::eval::Expr_obj::EFunction(::Array_obj< ::Dynamic>::__new(1)->init(0, ::Dynamic(::hx::Anon_obj::Create(2)
            										->setFixed(0,HX_("t",74,00,00,00),t)
            										->setFixed(1,HX_("name",4b,72,ff,48),i))),::hxcpp::debug::jsonrpc::eval::Expr_obj::EReturn(eret),null(),null());
            								}
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 688)						this->unexpected(tk);
            					}
HXLINE( 691)					if (this->unops->get_bool(op)) {
HXLINE( 692)						bool _hx_tmp;
HXDLIN( 692)						if (!(this->isBlock(e1))) {
HXLINE( 692)							if ((e1->_hx_getIndex() == 3)) {
HXLINE( 693)								 ::hxcpp::debug::jsonrpc::eval::Expr _g = e1->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE( 692)								_hx_tmp = true;
            							}
            							else {
HXLINE( 692)								_hx_tmp = false;
            							}
            						}
            						else {
HXLINE( 692)							_hx_tmp = true;
            						}
HXDLIN( 692)						if (_hx_tmp) {
HXLINE( 696)							{
HXLINE( 696)								 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 696)								_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            							}
HXLINE( 697)							return e1;
            						}
HXLINE( 699)						return this->parseExprNext(::hxcpp::debug::jsonrpc::eval::Expr_obj::EUnop(op,false,e1));
            					}
HXLINE( 701)					return this->makeBinop(op,e1,this->parseExpr());
            				}
            				break;
            				case (int)4: {
HXLINE( 706)					return this->parseExprNext(::hxcpp::debug::jsonrpc::eval::Expr_obj::ECall(e1,this->parseExprList(::hxcpp::debug::jsonrpc::eval::Token_obj::TPClose_dyn())));
            				}
            				break;
            				case (int)8: {
HXLINE( 703)					HX_VARI( ::String,field) = this->getIdent();
HXLINE( 704)					return this->parseExprNext(::hxcpp::debug::jsonrpc::eval::Expr_obj::EField(e1,field));
            				}
            				break;
            				case (int)11: {
HXLINE( 708)					HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e2) = this->parseExpr();
HXLINE( 709)					{
HXLINE( 709)						 ::hxcpp::debug::jsonrpc::eval::Token t = this->token();
HXDLIN( 709)						if (::hx::IsPointerNotEq( t,::hxcpp::debug::jsonrpc::eval::Token_obj::TBkClose_dyn() )) {
HXLINE( 709)							this->unexpected(t);
            						}
            					}
HXLINE( 710)					return this->parseExprNext(::hxcpp::debug::jsonrpc::eval::Expr_obj::EArray(e1,e2));
            				}
            				break;
            				case (int)13: {
HXLINE( 712)					HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e2) = this->parseExpr();
HXLINE( 713)					{
HXLINE( 713)						 ::hxcpp::debug::jsonrpc::eval::Token t = this->token();
HXDLIN( 713)						if (::hx::IsPointerNotEq( t,::hxcpp::debug::jsonrpc::eval::Token_obj::TDoubleDot_dyn() )) {
HXLINE( 713)							this->unexpected(t);
            						}
            					}
HXLINE( 714)					HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e3) = this->parseExpr();
HXLINE( 715)					return ::hxcpp::debug::jsonrpc::eval::Expr_obj::ETernary(e1,e2,e3);
            				}
            				break;
            				default:{
HXLINE( 717)					{
HXLINE( 717)						 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 717)						_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            					}
HXLINE( 718)					return e1;
            				}
            			}
            		}
HXLINE( 675)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseExprNext,return )

::Array< ::Dynamic> Parser_obj::parseFunctionArgs(){
            	HX_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_722_parseFunctionArgs)
            	HX_STACK_THIS(this)
HXLINE( 722)
HXLINE( 723)		HX_VARI( ::Array< ::Dynamic>,args) = ::Array_obj< ::Dynamic>::__new();
HXLINE( 724)		HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,tk) = this->token();
HXLINE( 725)		if (::hx::IsPointerNotEq( tk,::hxcpp::debug::jsonrpc::eval::Token_obj::TPClose_dyn() )) {
HXLINE( 726)			HX_VARI( bool,done) = false;
HXLINE( 727)			while(!(done)){
HXLINE( 728)				HX_VARI( ::String,name) = null();
HXDLIN( 728)				HX_VARI( bool,opt) = false;
HXLINE( 729)				if (::hx::IsNotNull( tk )) {
HXLINE( 729)					if ((tk->_hx_getIndex() == 13)) {
HXLINE( 731)						opt = true;
HXLINE( 732)						tk = this->token();
            					}
            				}
HXLINE( 735)				if (::hx::IsNull( tk )) {
HXLINE( 739)					this->unexpected(tk);
            				}
            				else {
HXLINE( 735)					if ((tk->_hx_getIndex() == 2)) {
HXLINE( 736)						HX_VARI( ::String,id) = tk->_hx_getString(0);
HXLINE( 737)						name = id;
            					}
            					else {
HXLINE( 739)						this->unexpected(tk);
            					}
            				}
HXLINE( 741)				HX_VARI(  ::Dynamic,arg) =  ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("name",4b,72,ff,48),name));
HXLINE( 742)				args->push(arg);
HXLINE( 743)				if (opt) {
HXLINE( 744)					arg->__SetField(HX_("opt",33,9c,54,00),true,::hx::paccDynamic);
            				}
HXLINE( 745)				if (this->allowTypes) {
HXLINE( 746)					if (this->maybe(::hxcpp::debug::jsonrpc::eval::Token_obj::TDoubleDot_dyn())) {
HXLINE( 747)						arg->__SetField(HX_("t",74,00,00,00),this->parseType(),::hx::paccDynamic);
            					}
HXLINE( 748)					if (this->maybe(::hxcpp::debug::jsonrpc::eval::Token_obj::TOp(HX_("=",3d,00,00,00)))) {
HXLINE( 749)						arg->__SetField(HX_("value",71,7f,b8,31),this->parseExpr(),::hx::paccDynamic);
            					}
            				}
HXLINE( 751)				tk = this->token();
HXLINE( 752)				if (::hx::IsNull( tk )) {
HXLINE( 758)					this->unexpected(tk);
            				}
            				else {
HXLINE( 752)					switch((int)(tk->_hx_getIndex())){
            						case (int)5: {
HXLINE( 756)							done = true;
            						}
            						break;
            						case (int)9: {
HXLINE( 754)							tk = this->token();
            						}
            						break;
            						default:{
HXLINE( 758)							this->unexpected(tk);
            						}
            					}
            				}
            			}
            		}
HXLINE( 762)		return args;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseFunctionArgs,return )

 ::Dynamic Parser_obj::parseFunctionDecl(){
            	HX_GC_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_765_parseFunctionDecl)
            	HX_STACK_THIS(this)
HXLINE( 765)
HXLINE( 766)		{
HXLINE( 766)			 ::hxcpp::debug::jsonrpc::eval::Token t = this->token();
HXDLIN( 766)			if (::hx::IsPointerNotEq( t,::hxcpp::debug::jsonrpc::eval::Token_obj::TPOpen_dyn() )) {
HXLINE( 766)				this->unexpected(t);
            			}
            		}
HXLINE( 767)		HX_VARI( ::Array< ::Dynamic>,args) = this->parseFunctionArgs();
HXLINE( 768)		HX_VARI(  ::hxcpp::debug::jsonrpc::eval::CType,ret) = null();
HXLINE( 769)		if (this->allowTypes) {
HXLINE( 770)			HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,tk) = this->token();
HXLINE( 771)			if (::hx::IsPointerNotEq( tk,::hxcpp::debug::jsonrpc::eval::Token_obj::TDoubleDot_dyn() )) {
HXLINE( 772)				 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 772)				_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            			}
            			else {
HXLINE( 774)				ret = this->parseType();
            			}
            		}
HXLINE( 776)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("ret",61,d9,56,00),ret)
            			->setFixed(1,HX_("args",5d,8d,74,40),args)
            			->setFixed(2,HX_("body",a2,7a,1b,41),this->parseExpr()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseFunctionDecl,return )

::Array< ::String > Parser_obj::parsePath(){
            	HX_GC_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_779_parsePath)
            	HX_STACK_THIS(this)
HXLINE( 779)
HXLINE( 780)		HX_VARI( ::Array< ::String >,path) = ::Array_obj< ::String >::__new(1)->init(0,this->getIdent());
HXLINE( 781)		while(true){
HXLINE( 782)			HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,t) = this->token();
HXLINE( 783)			if (::hx::IsPointerNotEq( t,::hxcpp::debug::jsonrpc::eval::Token_obj::TDot_dyn() )) {
HXLINE( 784)				{
HXLINE( 784)					 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 784)					_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,t,_this->head);
            				}
HXLINE( 785)				goto _hx_goto_60;
            			}
HXLINE( 787)			path->push(this->getIdent());
            		}
            		_hx_goto_60:;
HXLINE( 789)		return path;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parsePath,return )

 ::hxcpp::debug::jsonrpc::eval::CType Parser_obj::parseType(){
            	HX_GC_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_792_parseType)
            	HX_STACK_THIS(this)
HXLINE( 792)
HXDLIN( 792)		 ::hxcpp::debug::jsonrpc::eval::Parser _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 793)		HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,t) = this->token();
HXLINE( 794)		if (::hx::IsNull( t )) {
HXLINE( 904)			return this->unexpected(t);
            		}
            		else {
HXLINE( 794)			switch((int)(t->_hx_getIndex())){
            				case (int)2: {
HXLINE( 795)					HX_VARI( ::String,v) = t->_hx_getString(0);
HXLINE( 796)					{
HXLINE( 796)						 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 796)						_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,t,_this->head);
            					}
HXLINE( 797)					HX_VARI( ::Array< ::String >,path) = this->parsePath();
HXLINE( 798)					HX_VARI( ::Array< ::Dynamic>,params) = null();
HXLINE( 799)					t = this->token();
HXLINE( 800)					if (::hx::IsNull( t )) {
HXLINE( 821)						 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 821)						_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,t,_this->head);
            					}
            					else {
HXLINE( 800)						if ((t->_hx_getIndex() == 3)) {
HXLINE( 801)							HX_VARI( ::String,op) = t->_hx_getString(0);
HXLINE( 802)							if ((op == HX_("<",3c,00,00,00))) {
HXLINE( 803)								params = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 804)								while(true){
HXLINE( 805)									params->push(this->parseType());
HXLINE( 806)									t = this->token();
HXLINE( 807)									if (::hx::IsNotNull( t )) {
HXLINE( 807)										switch((int)(t->_hx_getIndex())){
            											case (int)3: {
HXLINE( 809)												HX_VARI( ::String,op) = t->_hx_getString(0);
HXDLIN( 809)												{
HXLINE( 810)													if ((op == HX_(">",3e,00,00,00))) {
HXLINE( 810)														goto _hx_goto_62;
            													}
HXLINE( 811)													if (::hx::IsEq( op.charCodeAt(0),62 )) {
HXLINE( 812)														{
HXLINE( 812)															 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 812)															 ::hxcpp::debug::jsonrpc::eval::Token item = ::hxcpp::debug::jsonrpc::eval::Token_obj::TOp(op.substr(1,null()));
HXDLIN( 812)															_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,item,_this->head);
            														}
HXLINE( 813)														goto _hx_goto_62;
            													}
            												}
            											}
            											break;
            											case (int)9: {
HXLINE( 808)												continue;
            											}
            											break;
            											default:{
            											}
            										}
            									}
HXLINE( 817)									this->unexpected(t);
            								}
            								_hx_goto_62:;
            							}
            							else {
HXLINE( 819)								 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 819)								_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,t,_this->head);
            							}
            						}
            						else {
HXLINE( 821)							 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 821)							_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,t,_this->head);
            						}
            					}
HXLINE( 823)					return this->parseTypeNext(::hxcpp::debug::jsonrpc::eval::CType_obj::CTPath(path,params));
            				}
            				break;
            				case (int)4: {
            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::hxcpp::debug::jsonrpc::eval::Parser,_gthis) HXARGC(1)
            					 ::hxcpp::debug::jsonrpc::eval::CType _hx_run(::Array< ::Dynamic> args){
            						HX_GC_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_830_parseType)
            						HX_STACK_ARG(args,"args")
HXLINE( 830)
HXLINE( 831)						{
HXLINE( 831)							 ::hxcpp::debug::jsonrpc::eval::Token _g = _gthis->token();
HXDLIN( 831)							if (::hx::IsNull( _g )) {
HXLINE( 833)								HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,t) = _g;
HXLINE( 834)								_gthis->unexpected(t);
            							}
            							else {
HXLINE( 831)								if ((_g->_hx_getIndex() == 3)) {
HXLINE( 832)									if ((_g->_hx_getString(0) != HX_("->",71,27,00,00))) {
HXLINE( 833)										HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,t) = _g;
HXLINE( 834)										_gthis->unexpected(t);
            									}
            								}
            								else {
HXLINE( 833)									HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,t) = _g;
HXLINE( 834)									_gthis->unexpected(t);
            								}
            							}
            						}
HXLINE( 837)						return ::hxcpp::debug::jsonrpc::eval::CType_obj::CTFun(args,_gthis->parseType());
            					}
            					HX_END_LOCAL_FUNC1(return)

HXLINE( 825)					HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,a) = this->token();
HXDLIN( 825)					HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,b) = this->token();
HXLINE( 827)					{
HXLINE( 827)						 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 827)						_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,b,_this->head);
            					}
HXLINE( 828)					{
HXLINE( 828)						 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this1 = this->tokens;
HXDLIN( 828)						_this1->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,a,_this1->head);
            					}
HXLINE( 830)					HX_VARI(  ::Dynamic,withReturn) =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE( 840)					if (::hx::IsNull( a )) {
HXLINE( 856)						HX_VARI(  ::hxcpp::debug::jsonrpc::eval::CType,t) = this->parseType();
HXLINE( 857)						 ::hxcpp::debug::jsonrpc::eval::Token _g = this->token();
HXDLIN( 857)						if (::hx::IsNull( _g )) {
HXLINE( 870)							HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,t) = _g;
HXDLIN( 870)							return this->unexpected(t);
            						}
            						else {
HXLINE( 857)							switch((int)(_g->_hx_getIndex())){
            								case (int)5: {
HXLINE( 869)									return this->parseTypeNext(::hxcpp::debug::jsonrpc::eval::CType_obj::CTParent(t));
            								}
            								break;
            								case (int)9: {
HXLINE( 859)									HX_VARI( ::Array< ::Dynamic>,args) = ::Array_obj< ::Dynamic>::__new(1)->init(0,t);
HXLINE( 861)									while(true){
HXLINE( 862)										args->push(this->parseType());
HXLINE( 863)										if (!(this->maybe(::hxcpp::debug::jsonrpc::eval::Token_obj::TComma_dyn()))) {
HXLINE( 864)											goto _hx_goto_63;
            										}
            									}
            									_hx_goto_63:;
HXLINE( 866)									{
HXLINE( 866)										 ::hxcpp::debug::jsonrpc::eval::Token t1 = this->token();
HXDLIN( 866)										if (::hx::IsPointerNotEq( t1,::hxcpp::debug::jsonrpc::eval::Token_obj::TPClose_dyn() )) {
HXLINE( 866)											this->unexpected(t1);
            										}
            									}
HXLINE( 867)									return withReturn(args);
            								}
            								break;
            								default:{
HXLINE( 870)									HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,t) = _g;
HXDLIN( 870)									return this->unexpected(t);
            								}
            							}
            						}
            					}
            					else {
HXLINE( 840)						switch((int)(a->_hx_getIndex())){
            							case (int)2: {
HXLINE( 841)								::String _g = a->_hx_getString(0);
HXLINE( 840)								if (::hx::IsNull( b )) {
HXLINE( 856)									HX_VARI(  ::hxcpp::debug::jsonrpc::eval::CType,t) = this->parseType();
HXLINE( 857)									 ::hxcpp::debug::jsonrpc::eval::Token _g = this->token();
HXDLIN( 857)									if (::hx::IsNull( _g )) {
HXLINE( 870)										HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,t) = _g;
HXDLIN( 870)										return this->unexpected(t);
            									}
            									else {
HXLINE( 857)										switch((int)(_g->_hx_getIndex())){
            											case (int)5: {
HXLINE( 869)												return this->parseTypeNext(::hxcpp::debug::jsonrpc::eval::CType_obj::CTParent(t));
            											}
            											break;
            											case (int)9: {
HXLINE( 859)												HX_VARI( ::Array< ::Dynamic>,args) = ::Array_obj< ::Dynamic>::__new(1)->init(0,t);
HXLINE( 861)												while(true){
HXLINE( 862)													args->push(this->parseType());
HXLINE( 863)													if (!(this->maybe(::hxcpp::debug::jsonrpc::eval::Token_obj::TComma_dyn()))) {
HXLINE( 864)														goto _hx_goto_65;
            													}
            												}
            												_hx_goto_65:;
HXLINE( 866)												{
HXLINE( 866)													 ::hxcpp::debug::jsonrpc::eval::Token t1 = this->token();
HXDLIN( 866)													if (::hx::IsPointerNotEq( t1,::hxcpp::debug::jsonrpc::eval::Token_obj::TPClose_dyn() )) {
HXLINE( 866)														this->unexpected(t1);
            													}
            												}
HXLINE( 867)												return withReturn(args);
            											}
            											break;
            											default:{
HXLINE( 870)												HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,t) = _g;
HXDLIN( 870)												return this->unexpected(t);
            											}
            										}
            									}
            								}
            								else {
HXLINE( 840)									if ((b->_hx_getIndex() == 14)) {
HXLINE( 842)										::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 843)										{
HXLINE( 843)											int _g1 = 0;
HXDLIN( 843)											::Array< ::Dynamic> _g2 = this->parseFunctionArgs();
HXDLIN( 843)											while((_g1 < _g2->length)){
HXLINE( 843)												HX_VARI(  ::Dynamic,arg) = _g2->__get(_g1);
HXDLIN( 843)												_g1 = (_g1 + 1);
HXLINE( 844)												{
HXLINE( 844)													 ::hxcpp::debug::jsonrpc::eval::Expr _g3 = arg->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic);
HXLINE( 845)													if (::hx::IsNotNull( _g3 )) {
HXLINE( 846)														HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,v) = _g3;
HXLINE( 847)														HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::hxcpp::debug::jsonrpc::eval::Error_obj::ECustom(HX_("Default values not allowed in function types",28,46,7a,e6))));
            													}
            												}
HXLINE( 850)												 ::hxcpp::debug::jsonrpc::eval::CType _hx_tmp;
HXDLIN( 850)												if (( (bool)(arg->__Field(HX_("opt",33,9c,54,00),::hx::paccDynamic)) )) {
HXLINE( 850)													_hx_tmp = ::hxcpp::debug::jsonrpc::eval::CType_obj::CTOpt( ::Dynamic(arg->__Field(HX_("t",74,00,00,00),::hx::paccDynamic)));
            												}
            												else {
HXLINE( 850)													_hx_tmp = arg->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
            												}
HXDLIN( 850)												_g->push(::hxcpp::debug::jsonrpc::eval::CType_obj::CTNamed( ::Dynamic(arg->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)),_hx_tmp));
            											}
            										}
HXLINE( 842)										HX_VARI( ::Array< ::Dynamic>,args) = _g;
HXLINE( 854)										return withReturn(args);
            									}
            									else {
HXLINE( 856)										HX_VARI(  ::hxcpp::debug::jsonrpc::eval::CType,t) = this->parseType();
HXLINE( 857)										 ::hxcpp::debug::jsonrpc::eval::Token _g = this->token();
HXDLIN( 857)										if (::hx::IsNull( _g )) {
HXLINE( 870)											HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,t) = _g;
HXDLIN( 870)											return this->unexpected(t);
            										}
            										else {
HXLINE( 857)											switch((int)(_g->_hx_getIndex())){
            												case (int)5: {
HXLINE( 869)													return this->parseTypeNext(::hxcpp::debug::jsonrpc::eval::CType_obj::CTParent(t));
            												}
            												break;
            												case (int)9: {
HXLINE( 859)													HX_VARI( ::Array< ::Dynamic>,args) = ::Array_obj< ::Dynamic>::__new(1)->init(0,t);
HXLINE( 861)													while(true){
HXLINE( 862)														args->push(this->parseType());
HXLINE( 863)														if (!(this->maybe(::hxcpp::debug::jsonrpc::eval::Token_obj::TComma_dyn()))) {
HXLINE( 864)															goto _hx_goto_67;
            														}
            													}
            													_hx_goto_67:;
HXLINE( 866)													{
HXLINE( 866)														 ::hxcpp::debug::jsonrpc::eval::Token t1 = this->token();
HXDLIN( 866)														if (::hx::IsPointerNotEq( t1,::hxcpp::debug::jsonrpc::eval::Token_obj::TPClose_dyn() )) {
HXLINE( 866)															this->unexpected(t1);
            														}
            													}
HXLINE( 867)													return withReturn(args);
            												}
            												break;
            												default:{
HXLINE( 870)													HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,t) = _g;
HXDLIN( 870)													return this->unexpected(t);
            												}
            											}
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 842)								::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 843)								{
HXLINE( 843)									int _g1 = 0;
HXDLIN( 843)									::Array< ::Dynamic> _g2 = this->parseFunctionArgs();
HXDLIN( 843)									while((_g1 < _g2->length)){
HXLINE( 843)										HX_VARI(  ::Dynamic,arg) = _g2->__get(_g1);
HXDLIN( 843)										_g1 = (_g1 + 1);
HXLINE( 844)										{
HXLINE( 844)											 ::hxcpp::debug::jsonrpc::eval::Expr _g3 = arg->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic);
HXLINE( 845)											if (::hx::IsNotNull( _g3 )) {
HXLINE( 846)												HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,v) = _g3;
HXLINE( 847)												HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::hxcpp::debug::jsonrpc::eval::Error_obj::ECustom(HX_("Default values not allowed in function types",28,46,7a,e6))));
            											}
            										}
HXLINE( 850)										 ::hxcpp::debug::jsonrpc::eval::CType _hx_tmp;
HXDLIN( 850)										if (( (bool)(arg->__Field(HX_("opt",33,9c,54,00),::hx::paccDynamic)) )) {
HXLINE( 850)											_hx_tmp = ::hxcpp::debug::jsonrpc::eval::CType_obj::CTOpt( ::Dynamic(arg->__Field(HX_("t",74,00,00,00),::hx::paccDynamic)));
            										}
            										else {
HXLINE( 850)											_hx_tmp = arg->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
            										}
HXDLIN( 850)										_g->push(::hxcpp::debug::jsonrpc::eval::CType_obj::CTNamed( ::Dynamic(arg->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)),_hx_tmp));
            									}
            								}
HXLINE( 842)								HX_VARI( ::Array< ::Dynamic>,args) = _g;
HXLINE( 854)								return withReturn(args);
            							}
            							break;
            							default:{
HXLINE( 856)								HX_VARI(  ::hxcpp::debug::jsonrpc::eval::CType,t) = this->parseType();
HXLINE( 857)								 ::hxcpp::debug::jsonrpc::eval::Token _g = this->token();
HXDLIN( 857)								if (::hx::IsNull( _g )) {
HXLINE( 870)									HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,t) = _g;
HXDLIN( 870)									return this->unexpected(t);
            								}
            								else {
HXLINE( 857)									switch((int)(_g->_hx_getIndex())){
            										case (int)5: {
HXLINE( 869)											return this->parseTypeNext(::hxcpp::debug::jsonrpc::eval::CType_obj::CTParent(t));
            										}
            										break;
            										case (int)9: {
HXLINE( 859)											HX_VARI( ::Array< ::Dynamic>,args) = ::Array_obj< ::Dynamic>::__new(1)->init(0,t);
HXLINE( 861)											while(true){
HXLINE( 862)												args->push(this->parseType());
HXLINE( 863)												if (!(this->maybe(::hxcpp::debug::jsonrpc::eval::Token_obj::TComma_dyn()))) {
HXLINE( 864)													goto _hx_goto_64;
            												}
            											}
            											_hx_goto_64:;
HXLINE( 866)											{
HXLINE( 866)												 ::hxcpp::debug::jsonrpc::eval::Token t1 = this->token();
HXDLIN( 866)												if (::hx::IsPointerNotEq( t1,::hxcpp::debug::jsonrpc::eval::Token_obj::TPClose_dyn() )) {
HXLINE( 866)													this->unexpected(t1);
            												}
            											}
HXLINE( 867)											return withReturn(args);
            										}
            										break;
            										default:{
HXLINE( 870)											HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,t) = _g;
HXDLIN( 870)											return this->unexpected(t);
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 874)					HX_VARI( ::Array< ::Dynamic>,fields) = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 875)					HX_VARI( ::Array< ::Dynamic>,meta) = null();
HXLINE( 876)					while(true){
HXLINE( 877)						t = this->token();
HXLINE( 878)						if (::hx::IsNull( t )) {
HXLINE( 899)							this->unexpected(t);
            						}
            						else {
HXLINE( 878)							switch((int)(t->_hx_getIndex())){
            								case (int)2: {
HXLINE( 886)									::String _g = t->_hx_getString(0);
HXDLIN( 886)									if ((_g == HX_("var",e7,de,59,00))) {
HXLINE( 881)										HX_VARI( ::String,name) = this->getIdent();
HXLINE( 882)										{
HXLINE( 882)											 ::hxcpp::debug::jsonrpc::eval::Token t = this->token();
HXDLIN( 882)											if (::hx::IsPointerNotEq( t,::hxcpp::debug::jsonrpc::eval::Token_obj::TDoubleDot_dyn() )) {
HXLINE( 882)												this->unexpected(t);
            											}
            										}
HXLINE( 883)										fields->push( ::Dynamic(::hx::Anon_obj::Create(3)
            											->setFixed(0,HX_("t",74,00,00,00),this->parseType())
            											->setFixed(1,HX_("meta",c5,4a,59,48),meta)
            											->setFixed(2,HX_("name",4b,72,ff,48),name)));
HXLINE( 884)										meta = null();
HXLINE( 885)										{
HXLINE( 885)											 ::hxcpp::debug::jsonrpc::eval::Token t1 = this->token();
HXDLIN( 885)											if (::hx::IsPointerNotEq( t1,::hxcpp::debug::jsonrpc::eval::Token_obj::TSemicolon_dyn() )) {
HXLINE( 885)												this->unexpected(t1);
            											}
            										}
            									}
            									else {
HXLINE( 886)										HX_VARI( ::String,name) = _g;
HXDLIN( 886)										{
HXLINE( 887)											{
HXLINE( 887)												 ::hxcpp::debug::jsonrpc::eval::Token t1 = this->token();
HXDLIN( 887)												if (::hx::IsPointerNotEq( t1,::hxcpp::debug::jsonrpc::eval::Token_obj::TDoubleDot_dyn() )) {
HXLINE( 887)													this->unexpected(t1);
            												}
            											}
HXLINE( 888)											fields->push( ::Dynamic(::hx::Anon_obj::Create(3)
            												->setFixed(0,HX_("t",74,00,00,00),this->parseType())
            												->setFixed(1,HX_("meta",c5,4a,59,48),meta)
            												->setFixed(2,HX_("name",4b,72,ff,48),name)));
HXLINE( 889)											t = this->token();
HXLINE( 890)											if (::hx::IsNull( t )) {
HXLINE( 893)												this->unexpected(t);
            											}
            											else {
HXLINE( 890)												switch((int)(t->_hx_getIndex())){
            													case (int)7: {
HXLINE( 892)														goto _hx_goto_69;
            													}
            													break;
            													case (int)9: {
            													}
            													break;
            													default:{
HXLINE( 893)														this->unexpected(t);
            													}
            												}
            											}
            										}
            									}
            								}
            								break;
            								case (int)7: {
HXLINE( 879)									goto _hx_goto_69;
            								}
            								break;
            								case (int)15: {
HXLINE( 895)									HX_VARI( ::String,name) = t->_hx_getString(0);
HXDLIN( 895)									{
HXLINE( 896)										if (::hx::IsNull( meta )) {
HXLINE( 896)											meta = ::Array_obj< ::Dynamic>::__new(0);
            										}
HXLINE( 897)										meta->push( ::Dynamic(::hx::Anon_obj::Create(2)
            											->setFixed(0,HX_("params",46,fb,7a,ed),this->parseMetaArgs())
            											->setFixed(1,HX_("name",4b,72,ff,48),name)));
            									}
            								}
            								break;
            								default:{
HXLINE( 899)									this->unexpected(t);
            								}
            							}
            						}
            					}
            					_hx_goto_69:;
HXLINE( 902)					return this->parseTypeNext(::hxcpp::debug::jsonrpc::eval::CType_obj::CTAnon(fields));
            				}
            				break;
            				default:{
HXLINE( 904)					return this->unexpected(t);
            				}
            			}
            		}
HXLINE( 794)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseType,return )

 ::hxcpp::debug::jsonrpc::eval::CType Parser_obj::parseTypeNext( ::hxcpp::debug::jsonrpc::eval::CType t){
            	HX_GC_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_908_parseTypeNext)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(t,"t")
HXLINE( 908)
HXLINE( 909)		HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,tk) = this->token();
HXLINE( 910)		if (::hx::IsNull( tk )) {
HXLINE( 917)			{
HXLINE( 917)				 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 917)				_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            			}
HXLINE( 918)			return t;
            		}
            		else {
HXLINE( 910)			if ((tk->_hx_getIndex() == 3)) {
HXLINE( 911)				HX_VARI( ::String,op) = tk->_hx_getString(0);
HXLINE( 912)				if ((op != HX_("->",71,27,00,00))) {
HXLINE( 913)					{
HXLINE( 913)						 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 913)						_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            					}
HXLINE( 914)					return t;
            				}
            			}
            			else {
HXLINE( 917)				{
HXLINE( 917)					 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 917)					_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            				}
HXLINE( 918)				return t;
            			}
            		}
HXLINE( 920)		HX_VARI(  ::hxcpp::debug::jsonrpc::eval::CType,t2) = this->parseType();
HXLINE( 921)		if ((t2->_hx_getIndex() == 1)) {
HXLINE( 922)			 ::hxcpp::debug::jsonrpc::eval::CType _g = t2->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::CType >();
HXDLIN( 922)			HX_VARI( ::Array< ::Dynamic>,args) = t2->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 923)			args->unshift(t);
HXLINE( 924)			return t2;
            		}
            		else {
HXLINE( 926)			return ::hxcpp::debug::jsonrpc::eval::CType_obj::CTFun(::Array_obj< ::Dynamic>::__new(1)->init(0,t),t2);
            		}
HXLINE( 921)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseTypeNext,return )

::Array< ::Dynamic> Parser_obj::parseExprList( ::hxcpp::debug::jsonrpc::eval::Token etk){
            	HX_GC_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_930_parseExprList)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(etk,"etk")
HXLINE( 930)
HXLINE( 931)		HX_VARI( ::Array< ::Dynamic>,args) = ::Array_obj< ::Dynamic>::__new();
HXLINE( 932)		HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,tk) = this->token();
HXLINE( 933)		if (::hx::IsPointerEq( tk,etk )) {
HXLINE( 934)			return args;
            		}
HXLINE( 935)		{
HXLINE( 935)			 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 935)			_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            		}
HXLINE( 936)		while(true){
HXLINE( 937)			args->push(this->parseExpr());
HXLINE( 938)			tk = this->token();
HXLINE( 939)			if (::hx::IsNull( tk )) {
HXLINE( 942)				if (::hx::IsPointerEq( tk,etk )) {
HXLINE( 943)					goto _hx_goto_73;
            				}
HXLINE( 944)				this->unexpected(tk);
            			}
            			else {
HXLINE( 939)				if ((tk->_hx_getIndex() != 9)) {
HXLINE( 942)					if (::hx::IsPointerEq( tk,etk )) {
HXLINE( 943)						goto _hx_goto_73;
            					}
HXLINE( 944)					this->unexpected(tk);
            				}
            			}
            		}
            		_hx_goto_73:;
HXLINE( 947)		return args;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseExprList,return )

::Array< ::Dynamic> Parser_obj::parseModule(::String content,::String __o_origin){
            		::String origin = __o_origin;
            		if (::hx::IsNull(__o_origin)) origin = HX_("hscript",73,8c,18,2c);
            	HX_GC_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_951_parseModule)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(content,"content")
            	HX_STACK_ARG(origin,"origin")
HXLINE( 951)
HXLINE( 952)		this->initParser(origin);
HXLINE( 953)		this->input =  ::haxe::io::StringInput_obj::__alloc( HX_CTX ,content);
HXLINE( 954)		this->allowTypes = true;
HXLINE( 955)		this->allowMetadata = true;
HXLINE( 956)		HX_VARI( ::Array< ::Dynamic>,decls) = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 957)		while(true){
HXLINE( 958)			HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,tk) = this->token();
HXLINE( 959)			if (::hx::IsPointerEq( tk,::hxcpp::debug::jsonrpc::eval::Token_obj::TEof_dyn() )) {
HXLINE( 960)				goto _hx_goto_75;
            			}
HXLINE( 961)			{
HXLINE( 961)				 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 961)				_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            			}
HXLINE( 962)			decls->push(this->parseModuleDecl());
            		}
            		_hx_goto_75:;
HXLINE( 964)		return decls;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,parseModule,return )

::Array< ::Dynamic> Parser_obj::parseMetadata(){
            	HX_GC_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_967_parseMetadata)
            	HX_STACK_THIS(this)
HXLINE( 967)
HXLINE( 968)		HX_VARI( ::Array< ::Dynamic>,meta) = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 969)		while(true){
HXLINE( 970)			HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,tk) = this->token();
HXLINE( 971)			if (::hx::IsNull( tk )) {
HXLINE( 975)				{
HXLINE( 975)					 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 975)					_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            				}
HXLINE( 976)				goto _hx_goto_77;
            			}
            			else {
HXLINE( 971)				if ((tk->_hx_getIndex() == 15)) {
HXLINE( 972)					HX_VARI( ::String,name) = tk->_hx_getString(0);
HXLINE( 973)					meta->push( ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("params",46,fb,7a,ed),this->parseMetaArgs())
            						->setFixed(1,HX_("name",4b,72,ff,48),name)));
            				}
            				else {
HXLINE( 975)					{
HXLINE( 975)						 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN( 975)						_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            					}
HXLINE( 976)					goto _hx_goto_77;
            				}
            			}
            		}
            		_hx_goto_77:;
HXLINE( 979)		return meta;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseMetadata,return )

 ::Dynamic Parser_obj::parseParams(){
            	HX_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_982_parseParams)
            	HX_STACK_THIS(this)
HXLINE( 982)
HXLINE( 983)		if (this->maybe(::hxcpp::debug::jsonrpc::eval::Token_obj::TOp(HX_("<",3c,00,00,00)))) {
HXLINE( 984)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::hxcpp::debug::jsonrpc::eval::Error_obj::EInvalidOp(HX_("Unsupported class type parameters",9d,ae,a3,50))));
            		}
HXLINE( 985)		return  ::Dynamic(::hx::Anon_obj::Create(0));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseParams,return )

 ::hxcpp::debug::jsonrpc::eval::ModuleDecl Parser_obj::parseModuleDecl(){
            	HX_GC_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_988_parseModuleDecl)
            	HX_STACK_THIS(this)
HXLINE( 988)
HXLINE( 989)		HX_VARI( ::Array< ::Dynamic>,meta) = this->parseMetadata();
HXLINE( 990)		HX_VARI( ::String,ident) = this->getIdent();
HXLINE( 991)		HX_VARI( bool,isPrivate) = false;
HXDLIN( 991)		HX_VARI( bool,isExtern) = false;
HXLINE( 992)		while(true){
HXLINE( 993)			::String _hx_switch_0 = ident;
            			if (  (_hx_switch_0==HX_("extern",60,d5,1a,c7)) ){
HXLINE( 997)				isExtern = true;
HXDLIN( 997)				goto _hx_goto_81;
            			}
            			if (  (_hx_switch_0==HX_("private",03,2d,6f,89)) ){
HXLINE( 995)				isPrivate = true;
HXDLIN( 995)				goto _hx_goto_81;
            			}
            			/* default */{
HXLINE( 999)				goto _hx_goto_80;
            			}
            			_hx_goto_81:;
HXLINE(1001)			ident = this->getIdent();
            		}
            		_hx_goto_80:;
HXLINE(1003)		::String _hx_switch_1 = ident;
            		if (  (_hx_switch_1==HX_("class",38,78,58,48)) ){
HXLINE(1030)			HX_VARI( ::String,name) = this->getIdent();
HXLINE(1031)			HX_VARI(  ::Dynamic,params) = this->parseParams();
HXLINE(1032)			HX_VARI(  ::hxcpp::debug::jsonrpc::eval::CType,extend) = null();
HXLINE(1033)			HX_VARI( ::Array< ::Dynamic>,implement) = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1035)			while(true){
HXLINE(1036)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,t) = this->token();
HXLINE(1037)				if (::hx::IsNull( t )) {
HXLINE(1043)					{
HXLINE(1043)						 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN(1043)						_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,t,_this->head);
            					}
HXLINE(1044)					goto _hx_goto_83;
            				}
            				else {
HXLINE(1037)					if ((t->_hx_getIndex() == 2)) {
HXLINE(1040)						::String _hx_switch_2 = t->_hx_getString(0);
            						if (  (_hx_switch_2==HX_("extends",59,cd,5c,70)) ){
HXLINE(1039)							extend = this->parseType();
HXDLIN(1039)							goto _hx_goto_84;
            						}
            						if (  (_hx_switch_2==HX_("implements",70,fd,43,a8)) ){
HXLINE(1041)							implement->push(this->parseType());
HXDLIN(1041)							goto _hx_goto_84;
            						}
            						/* default */{
HXLINE(1043)							{
HXLINE(1043)								 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN(1043)								_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,t,_this->head);
            							}
HXLINE(1044)							goto _hx_goto_83;
            						}
            						_hx_goto_84:;
            					}
            					else {
HXLINE(1043)						{
HXLINE(1043)							 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN(1043)							_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,t,_this->head);
            						}
HXLINE(1044)						goto _hx_goto_83;
            					}
            				}
            			}
            			_hx_goto_83:;
HXLINE(1048)			HX_VARI( ::Array< ::Dynamic>,fields) = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1049)			{
HXLINE(1049)				 ::hxcpp::debug::jsonrpc::eval::Token t = this->token();
HXDLIN(1049)				if (::hx::IsPointerNotEq( t,::hxcpp::debug::jsonrpc::eval::Token_obj::TBrOpen_dyn() )) {
HXLINE(1049)					this->unexpected(t);
            				}
            			}
HXLINE(1050)			while(!(this->maybe(::hxcpp::debug::jsonrpc::eval::Token_obj::TBrClose_dyn()))){
HXLINE(1051)				fields->push(this->parseField());
            			}
HXLINE(1053)			return ::hxcpp::debug::jsonrpc::eval::ModuleDecl_obj::DClass( ::Dynamic(::hx::Anon_obj::Create(8)
            				->setFixed(0,HX_("fields",79,8e,8e,80),fields)
            				->setFixed(1,HX_("isPrivate",39,aa,6d,8d),isPrivate)
            				->setFixed(2,HX_("implement",a3,71,3f,af),implement)
            				->setFixed(3,HX_("extend",da,d1,1a,c7),extend)
            				->setFixed(4,HX_("params",46,fb,7a,ed),params)
            				->setFixed(5,HX_("isExtern",ea,70,84,1f),isExtern)
            				->setFixed(6,HX_("meta",c5,4a,59,48),meta)
            				->setFixed(7,HX_("name",4b,72,ff,48),name)));
HXLINE(1029)			goto _hx_goto_82;
            		}
            		if (  (_hx_switch_1==HX_("import",65,a1,82,08)) ){
HXLINE(1009)			HX_VARI( ::Array< ::String >,path) = ::Array_obj< ::String >::__new(1)->init(0,this->getIdent());
HXLINE(1010)			HX_VARI( bool,star) = false;
HXLINE(1011)			while(true){
HXLINE(1012)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,t) = this->token();
HXLINE(1013)				if (::hx::IsPointerNotEq( t,::hxcpp::debug::jsonrpc::eval::Token_obj::TDot_dyn() )) {
HXLINE(1014)					{
HXLINE(1014)						 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN(1014)						_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,t,_this->head);
            					}
HXLINE(1015)					goto _hx_goto_86;
            				}
HXLINE(1017)				t = this->token();
HXLINE(1018)				if (::hx::IsNull( t )) {
HXLINE(1024)					this->unexpected(t);
            				}
            				else {
HXLINE(1018)					switch((int)(t->_hx_getIndex())){
            						case (int)2: {
HXLINE(1019)							HX_VARI( ::String,id) = t->_hx_getString(0);
HXLINE(1020)							path->push(id);
            						}
            						break;
            						case (int)3: {
HXLINE(1021)							if ((t->_hx_getString(0) == HX_("*",2a,00,00,00))) {
HXLINE(1022)								star = true;
            							}
            							else {
HXLINE(1024)								this->unexpected(t);
            							}
            						}
            						break;
            						default:{
HXLINE(1024)							this->unexpected(t);
            						}
            					}
            				}
            			}
            			_hx_goto_86:;
HXLINE(1027)			{
HXLINE(1027)				 ::hxcpp::debug::jsonrpc::eval::Token t = this->token();
HXDLIN(1027)				if (::hx::IsPointerNotEq( t,::hxcpp::debug::jsonrpc::eval::Token_obj::TSemicolon_dyn() )) {
HXLINE(1027)					this->unexpected(t);
            				}
            			}
HXLINE(1028)			return ::hxcpp::debug::jsonrpc::eval::ModuleDecl_obj::DImport(path,star);
HXLINE(1008)			goto _hx_goto_82;
            		}
            		if (  (_hx_switch_1==HX_("package",86,2b,b1,41)) ){
HXLINE(1005)			HX_VARI( ::Array< ::String >,path) = this->parsePath();
HXLINE(1006)			{
HXLINE(1006)				 ::hxcpp::debug::jsonrpc::eval::Token t = this->token();
HXDLIN(1006)				if (::hx::IsPointerNotEq( t,::hxcpp::debug::jsonrpc::eval::Token_obj::TSemicolon_dyn() )) {
HXLINE(1006)					this->unexpected(t);
            				}
            			}
HXLINE(1007)			return ::hxcpp::debug::jsonrpc::eval::ModuleDecl_obj::DPackage(path);
HXLINE(1004)			goto _hx_goto_82;
            		}
            		if (  (_hx_switch_1==HX_("typedef",4b,37,d8,f8)) ){
HXLINE(1064)			HX_VARI( ::String,name) = this->getIdent();
HXLINE(1065)			HX_VARI(  ::Dynamic,params) = this->parseParams();
HXLINE(1066)			{
HXLINE(1066)				 ::hxcpp::debug::jsonrpc::eval::Token t = this->token();
HXDLIN(1066)				if (!(__hxcpp_enum_eq(t,::hxcpp::debug::jsonrpc::eval::Token_obj::TOp(HX_("=",3d,00,00,00))))) {
HXLINE(1066)					this->unexpected(t);
            				}
            			}
HXLINE(1067)			HX_VARI(  ::hxcpp::debug::jsonrpc::eval::CType,t1) = this->parseType();
HXLINE(1068)			return ::hxcpp::debug::jsonrpc::eval::ModuleDecl_obj::DTypedef( ::Dynamic(::hx::Anon_obj::Create(5)
            				->setFixed(0,HX_("isPrivate",39,aa,6d,8d),isPrivate)
            				->setFixed(1,HX_("params",46,fb,7a,ed),params)
            				->setFixed(2,HX_("t",74,00,00,00),t1)
            				->setFixed(3,HX_("meta",c5,4a,59,48),meta)
            				->setFixed(4,HX_("name",4b,72,ff,48),name)));
HXLINE(1063)			goto _hx_goto_82;
            		}
            		/* default */{
HXLINE(1076)			this->unexpected(::hxcpp::debug::jsonrpc::eval::Token_obj::TId(ident));
            		}
            		_hx_goto_82:;
HXLINE(1078)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseModuleDecl,return )

 ::Dynamic Parser_obj::parseField(){
            	HX_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_1081_parseField)
            	HX_STACK_THIS(this)
HXLINE(1081)
HXLINE(1082)		HX_VARI( ::Array< ::Dynamic>,meta) = this->parseMetadata();
HXLINE(1083)		HX_VARI( ::Array< ::Dynamic>,access) = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1084)		while(true){
HXLINE(1085)			HX_VARI( ::String,id) = this->getIdent();
HXLINE(1086)			::String _hx_switch_0 = id;
            			if (  (_hx_switch_0==HX_("function",18,ab,52,14)) ){
HXLINE(1100)				HX_VARI( ::String,name) = this->getIdent();
HXLINE(1101)				HX_VARI(  ::Dynamic,inf) = this->parseFunctionDecl();
HXLINE(1102)				return  ::Dynamic(::hx::Anon_obj::Create(4)
            					->setFixed(0,HX_("access",a4,95,06,0b),access)
            					->setFixed(1,HX_("kind",54,e1,09,47),::hxcpp::debug::jsonrpc::eval::FieldKind_obj::KFunction( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("ret",61,d9,56,00), ::Dynamic(inf->__Field(HX_("ret",61,d9,56,00),::hx::paccDynamic)))
            						->setFixed(1,HX_("args",5d,8d,74,40), ::Dynamic(inf->__Field(HX_("args",5d,8d,74,40),::hx::paccDynamic)))
            						->setFixed(2,HX_("expr",35,fd,1d,43), ::Dynamic(inf->__Field(HX_("body",a2,7a,1b,41),::hx::paccDynamic))))))
            					->setFixed(2,HX_("meta",c5,4a,59,48),meta)
            					->setFixed(3,HX_("name",4b,72,ff,48),name));
HXLINE(1099)				goto _hx_goto_89;
            			}
            			if (  (_hx_switch_0==HX_("inline",59,ca,3f,99)) ){
HXLINE(1094)				access->push(::hxcpp::debug::jsonrpc::eval::FieldAccess_obj::AInline_dyn());
HXDLIN(1094)				goto _hx_goto_89;
            			}
            			if (  (_hx_switch_0==HX_("macro",0c,70,16,03)) ){
HXLINE(1098)				access->push(::hxcpp::debug::jsonrpc::eval::FieldAccess_obj::AMacro_dyn());
HXDLIN(1098)				goto _hx_goto_89;
            			}
            			if (  (_hx_switch_0==HX_("override",4c,22,28,49)) ){
HXLINE(1088)				access->push(::hxcpp::debug::jsonrpc::eval::FieldAccess_obj::AOverride_dyn());
HXDLIN(1088)				goto _hx_goto_89;
            			}
            			if (  (_hx_switch_0==HX_("private",03,2d,6f,89)) ){
HXLINE(1092)				access->push(::hxcpp::debug::jsonrpc::eval::FieldAccess_obj::APrivate_dyn());
HXDLIN(1092)				goto _hx_goto_89;
            			}
            			if (  (_hx_switch_0==HX_("public",a9,80,f3,66)) ){
HXLINE(1090)				access->push(::hxcpp::debug::jsonrpc::eval::FieldAccess_obj::APublic_dyn());
HXDLIN(1090)				goto _hx_goto_89;
            			}
            			if (  (_hx_switch_0==HX_("static",ae,dc,fb,05)) ){
HXLINE(1096)				access->push(::hxcpp::debug::jsonrpc::eval::FieldAccess_obj::AStatic_dyn());
HXDLIN(1096)				goto _hx_goto_89;
            			}
            			if (  (_hx_switch_0==HX_("var",e7,de,59,00)) ){
HXLINE(1113)				HX_VARI( ::String,name) = this->getIdent();
HXLINE(1114)				HX_VARI( ::String,get) = null();
HXDLIN(1114)				HX_VARI( ::String,set) = null();
HXLINE(1115)				if (this->maybe(::hxcpp::debug::jsonrpc::eval::Token_obj::TPOpen_dyn())) {
HXLINE(1116)					get = this->getIdent();
HXLINE(1117)					{
HXLINE(1117)						 ::hxcpp::debug::jsonrpc::eval::Token t = this->token();
HXDLIN(1117)						if (::hx::IsPointerNotEq( t,::hxcpp::debug::jsonrpc::eval::Token_obj::TComma_dyn() )) {
HXLINE(1117)							this->unexpected(t);
            						}
            					}
HXLINE(1118)					set = this->getIdent();
HXLINE(1119)					{
HXLINE(1119)						 ::hxcpp::debug::jsonrpc::eval::Token t1 = this->token();
HXDLIN(1119)						if (::hx::IsPointerNotEq( t1,::hxcpp::debug::jsonrpc::eval::Token_obj::TPClose_dyn() )) {
HXLINE(1119)							this->unexpected(t1);
            						}
            					}
            				}
HXLINE(1121)				HX_VAR(  ::hxcpp::debug::jsonrpc::eval::CType,type);
HXDLIN(1121)				if (this->maybe(::hxcpp::debug::jsonrpc::eval::Token_obj::TDoubleDot_dyn())) {
HXLINE(1121)					type = this->parseType();
            				}
            				else {
HXLINE(1121)					type = null();
            				}
HXLINE(1122)				HX_VAR(  ::hxcpp::debug::jsonrpc::eval::Expr,expr);
HXDLIN(1122)				if (this->maybe(::hxcpp::debug::jsonrpc::eval::Token_obj::TOp(HX_("=",3d,00,00,00)))) {
HXLINE(1122)					expr = this->parseExpr();
            				}
            				else {
HXLINE(1122)					expr = null();
            				}
HXLINE(1124)				if (::hx::IsNotNull( expr )) {
HXLINE(1125)					if (this->isBlock(expr)) {
HXLINE(1126)						this->maybe(::hxcpp::debug::jsonrpc::eval::Token_obj::TSemicolon_dyn());
            					}
            					else {
HXLINE(1128)						 ::hxcpp::debug::jsonrpc::eval::Token t = this->token();
HXDLIN(1128)						if (::hx::IsPointerNotEq( t,::hxcpp::debug::jsonrpc::eval::Token_obj::TSemicolon_dyn() )) {
HXLINE(1128)							this->unexpected(t);
            						}
            					}
            				}
            				else {
HXLINE(1129)					bool _hx_tmp;
HXDLIN(1129)					if (::hx::IsNotNull( type )) {
HXLINE(1129)						if (::hx::IsNull( type )) {
HXLINE(1129)							_hx_tmp = false;
            						}
            						else {
HXLINE(1129)							if ((type->_hx_getIndex() == 2)) {
HXLINE(1129)								::Array< ::Dynamic> _g = type->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(1129)								_hx_tmp = true;
            							}
            							else {
HXLINE(1129)								_hx_tmp = false;
            							}
            						}
            					}
            					else {
HXLINE(1129)						_hx_tmp = false;
            					}
HXDLIN(1129)					if (_hx_tmp) {
HXLINE(1130)						this->maybe(::hxcpp::debug::jsonrpc::eval::Token_obj::TSemicolon_dyn());
            					}
            					else {
HXLINE(1132)						 ::hxcpp::debug::jsonrpc::eval::Token t = this->token();
HXDLIN(1132)						if (::hx::IsPointerNotEq( t,::hxcpp::debug::jsonrpc::eval::Token_obj::TSemicolon_dyn() )) {
HXLINE(1132)							this->unexpected(t);
            						}
            					}
            				}
HXLINE(1134)				return  ::Dynamic(::hx::Anon_obj::Create(4)
            					->setFixed(0,HX_("access",a4,95,06,0b),access)
            					->setFixed(1,HX_("kind",54,e1,09,47),::hxcpp::debug::jsonrpc::eval::FieldKind_obj::KVar( ::Dynamic(::hx::Anon_obj::Create(4)
            						->setFixed(0,HX_("get",96,80,4e,00),get)
            						->setFixed(1,HX_("set",a2,9b,57,00),set)
            						->setFixed(2,HX_("expr",35,fd,1d,43),expr)
            						->setFixed(3,HX_("type",ba,f2,08,4d),type))))
            					->setFixed(2,HX_("meta",c5,4a,59,48),meta)
            					->setFixed(3,HX_("name",4b,72,ff,48),name));
HXLINE(1112)				goto _hx_goto_89;
            			}
            			/* default */{
HXLINE(1146)				this->unexpected(::hxcpp::debug::jsonrpc::eval::Token_obj::TId(id));
            			}
            			_hx_goto_89:;
            		}
HXLINE(1084)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseField,return )

void Parser_obj::incPos(){
            	HX_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_1153_incPos)
            	HX_STACK_THIS(this)
HXLINE(1153)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,incPos,(void))

int Parser_obj::readChar(){
            	HX_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_1157_readChar)
            	HX_STACK_THIS(this)
HXLINE(1157)
HXDLIN(1157)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXDLIN(1157)			return this->input->readByte();
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXDLIN(1157)				{
HXDLIN(1157)					null();
            				}
HXDLIN(1157)				return 0;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXDLIN(1157)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,readChar,return )

::String Parser_obj::readString(int until){
            	HX_GC_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_1160_readString)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(until,"until")
HXLINE(1160)
HXLINE(1161)		HX_VARI( int,c) = 0;
HXLINE(1162)		HX_VARI(  ::haxe::io::BytesOutput,b) =  ::haxe::io::BytesOutput_obj::__alloc( HX_CTX );
HXLINE(1163)		HX_VARI( bool,esc) = false;
HXLINE(1164)		HX_VARI( int,old) = this->line;
HXLINE(1165)		HX_VARI(  ::haxe::io::Input,s) = this->input;
HXLINE(1166)		while(true){
HXLINE(1167)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(1169)				c = s->readByte();
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE(1170)					{
HXLINE(1170)						null();
            					}
HXLINE(1171)					this->line = old;
HXLINE(1172)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::hxcpp::debug::jsonrpc::eval::Error_obj::EUnterminatedString_dyn()));
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXLINE(1174)			if (esc) {
HXLINE(1175)				esc = false;
HXLINE(1176)				switch((int)(c)){
            					case (int)34: case (int)39: case (int)92: {
HXLINE(1184)						b->writeByte(c);
            					}
            					break;
            					case (int)47: {
HXLINE(1186)						if (this->allowJSON) {
HXLINE(1187)							b->writeByte(c);
            						}
            						else {
HXLINE(1189)							this->invalidChar(c);
            						}
            					}
            					break;
            					case (int)110: {
HXLINE(1178)						b->writeByte(10);
            					}
            					break;
            					case (int)114: {
HXLINE(1180)						b->writeByte(13);
            					}
            					break;
            					case (int)116: {
HXLINE(1182)						b->writeByte(9);
            					}
            					break;
            					case (int)117: {
HXLINE(1191)						if (!(this->allowJSON)) {
HXLINE(1192)							this->invalidChar(c);
            						}
HXLINE(1193)						HX_VARI( ::String,code) = null();
HXLINE(1194)						try {
            							HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(1199)							code = s->readString(4,null());
            						} catch( ::Dynamic _hx_e) {
            							if (_hx_e.IsClass<  ::Dynamic >() ){
            								HX_STACK_BEGIN_CATCH
            								 ::Dynamic _g = _hx_e;
HXLINE(1200)								{
HXLINE(1200)									null();
            								}
HXLINE(1201)								this->line = old;
HXLINE(1202)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::hxcpp::debug::jsonrpc::eval::Error_obj::EUnterminatedString_dyn()));
            							}
            							else {
            								HX_STACK_DO_THROW(_hx_e);
            							}
            						}
HXLINE(1204)						HX_VARI( int,k) = 0;
HXLINE(1205)						{
HXLINE(1205)							{
HXLINE(1206)								k = (k << 4);
HXLINE(1207)								HX_VARI_NAME(  ::Dynamic,_hx_char,"char") = code.charCodeAt(0);
HXLINE(1208)								if (::hx::IsNull( _hx_char )) {
HXLINE(1216)									this->invalidChar(( (int)(_hx_char) ));
            								}
            								else {
HXLINE(1208)									 ::Dynamic _hx_switch_0 = _hx_char;
            									if (  (_hx_switch_0==48) ||  (_hx_switch_0==49) ||  (_hx_switch_0==50) ||  (_hx_switch_0==51) ||  (_hx_switch_0==52) ||  (_hx_switch_0==53) ||  (_hx_switch_0==54) ||  (_hx_switch_0==55) ||  (_hx_switch_0==56) ||  (_hx_switch_0==57) ){
HXLINE(1210)										k = (k + (( (int)(_hx_char) ) - 48));
HXDLIN(1210)										goto _hx_goto_94;
            									}
            									if (  (_hx_switch_0==65) ||  (_hx_switch_0==66) ||  (_hx_switch_0==67) ||  (_hx_switch_0==68) ||  (_hx_switch_0==69) ||  (_hx_switch_0==70) ){
HXLINE(1212)										k = (k + (( (int)(_hx_char) ) - 55));
HXDLIN(1212)										goto _hx_goto_94;
            									}
            									if (  (_hx_switch_0==97) ||  (_hx_switch_0==98) ||  (_hx_switch_0==99) ||  (_hx_switch_0==100) ||  (_hx_switch_0==101) ||  (_hx_switch_0==102) ){
HXLINE(1214)										k = (k + (( (int)(_hx_char) ) - 87));
HXDLIN(1214)										goto _hx_goto_94;
            									}
            									/* default */{
HXLINE(1216)										this->invalidChar(( (int)(_hx_char) ));
            									}
            									_hx_goto_94:;
            								}
            							}
HXLINE(1205)							{
HXLINE(1206)								k = (k << 4);
HXLINE(1207)								HX_VARI(  ::Dynamic,char1) = code.charCodeAt(1);
HXLINE(1208)								if (::hx::IsNull( char1 )) {
HXLINE(1216)									this->invalidChar(( (int)(char1) ));
            								}
            								else {
HXLINE(1208)									 ::Dynamic _hx_switch_1 = char1;
            									if (  (_hx_switch_1==48) ||  (_hx_switch_1==49) ||  (_hx_switch_1==50) ||  (_hx_switch_1==51) ||  (_hx_switch_1==52) ||  (_hx_switch_1==53) ||  (_hx_switch_1==54) ||  (_hx_switch_1==55) ||  (_hx_switch_1==56) ||  (_hx_switch_1==57) ){
HXLINE(1210)										k = (k + (( (int)(char1) ) - 48));
HXDLIN(1210)										goto _hx_goto_95;
            									}
            									if (  (_hx_switch_1==65) ||  (_hx_switch_1==66) ||  (_hx_switch_1==67) ||  (_hx_switch_1==68) ||  (_hx_switch_1==69) ||  (_hx_switch_1==70) ){
HXLINE(1212)										k = (k + (( (int)(char1) ) - 55));
HXDLIN(1212)										goto _hx_goto_95;
            									}
            									if (  (_hx_switch_1==97) ||  (_hx_switch_1==98) ||  (_hx_switch_1==99) ||  (_hx_switch_1==100) ||  (_hx_switch_1==101) ||  (_hx_switch_1==102) ){
HXLINE(1214)										k = (k + (( (int)(char1) ) - 87));
HXDLIN(1214)										goto _hx_goto_95;
            									}
            									/* default */{
HXLINE(1216)										this->invalidChar(( (int)(char1) ));
            									}
            									_hx_goto_95:;
            								}
            							}
HXLINE(1205)							{
HXLINE(1206)								k = (k << 4);
HXLINE(1207)								HX_VARI(  ::Dynamic,char2) = code.charCodeAt(2);
HXLINE(1208)								if (::hx::IsNull( char2 )) {
HXLINE(1216)									this->invalidChar(( (int)(char2) ));
            								}
            								else {
HXLINE(1208)									 ::Dynamic _hx_switch_2 = char2;
            									if (  (_hx_switch_2==48) ||  (_hx_switch_2==49) ||  (_hx_switch_2==50) ||  (_hx_switch_2==51) ||  (_hx_switch_2==52) ||  (_hx_switch_2==53) ||  (_hx_switch_2==54) ||  (_hx_switch_2==55) ||  (_hx_switch_2==56) ||  (_hx_switch_2==57) ){
HXLINE(1210)										k = (k + (( (int)(char2) ) - 48));
HXDLIN(1210)										goto _hx_goto_96;
            									}
            									if (  (_hx_switch_2==65) ||  (_hx_switch_2==66) ||  (_hx_switch_2==67) ||  (_hx_switch_2==68) ||  (_hx_switch_2==69) ||  (_hx_switch_2==70) ){
HXLINE(1212)										k = (k + (( (int)(char2) ) - 55));
HXDLIN(1212)										goto _hx_goto_96;
            									}
            									if (  (_hx_switch_2==97) ||  (_hx_switch_2==98) ||  (_hx_switch_2==99) ||  (_hx_switch_2==100) ||  (_hx_switch_2==101) ||  (_hx_switch_2==102) ){
HXLINE(1214)										k = (k + (( (int)(char2) ) - 87));
HXDLIN(1214)										goto _hx_goto_96;
            									}
            									/* default */{
HXLINE(1216)										this->invalidChar(( (int)(char2) ));
            									}
            									_hx_goto_96:;
            								}
            							}
HXLINE(1205)							{
HXLINE(1206)								k = (k << 4);
HXLINE(1207)								HX_VARI(  ::Dynamic,char3) = code.charCodeAt(3);
HXLINE(1208)								if (::hx::IsNull( char3 )) {
HXLINE(1216)									this->invalidChar(( (int)(char3) ));
            								}
            								else {
HXLINE(1208)									 ::Dynamic _hx_switch_3 = char3;
            									if (  (_hx_switch_3==48) ||  (_hx_switch_3==49) ||  (_hx_switch_3==50) ||  (_hx_switch_3==51) ||  (_hx_switch_3==52) ||  (_hx_switch_3==53) ||  (_hx_switch_3==54) ||  (_hx_switch_3==55) ||  (_hx_switch_3==56) ||  (_hx_switch_3==57) ){
HXLINE(1210)										k = (k + (( (int)(char3) ) - 48));
HXDLIN(1210)										goto _hx_goto_97;
            									}
            									if (  (_hx_switch_3==65) ||  (_hx_switch_3==66) ||  (_hx_switch_3==67) ||  (_hx_switch_3==68) ||  (_hx_switch_3==69) ||  (_hx_switch_3==70) ){
HXLINE(1212)										k = (k + (( (int)(char3) ) - 55));
HXDLIN(1212)										goto _hx_goto_97;
            									}
            									if (  (_hx_switch_3==97) ||  (_hx_switch_3==98) ||  (_hx_switch_3==99) ||  (_hx_switch_3==100) ||  (_hx_switch_3==101) ||  (_hx_switch_3==102) ){
HXLINE(1214)										k = (k + (( (int)(char3) ) - 87));
HXDLIN(1214)										goto _hx_goto_97;
            									}
            									/* default */{
HXLINE(1216)										this->invalidChar(( (int)(char3) ));
            									}
            									_hx_goto_97:;
            								}
            							}
            						}
HXLINE(1220)						if ((k <= 127)) {
HXLINE(1221)							b->writeByte(k);
            						}
            						else {
HXLINE(1222)							if ((k <= 2047)) {
HXLINE(1223)								b->writeByte((192 | (k >> 6)));
HXLINE(1224)								b->writeByte((128 | (k & 63)));
            							}
            							else {
HXLINE(1226)								b->writeByte((224 | (k >> 12)));
HXLINE(1227)								b->writeByte((128 | ((k >> 6) & 63)));
HXLINE(1228)								b->writeByte((128 | (k & 63)));
            							}
            						}
            					}
            					break;
            					default:{
HXLINE(1231)						this->invalidChar(c);
            					}
            				}
            			}
            			else {
HXLINE(1233)				if ((c == 92)) {
HXLINE(1234)					esc = true;
            				}
            				else {
HXLINE(1235)					if ((c == until)) {
HXLINE(1236)						goto _hx_goto_93;
            					}
            					else {
HXLINE(1238)						if ((c == 10)) {
HXLINE(1239)							this->line++;
            						}
HXLINE(1240)						b->writeByte(c);
            					}
            				}
            			}
            		}
            		_hx_goto_93:;
HXLINE(1243)		return b->getBytes()->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,readString,return )

 ::hxcpp::debug::jsonrpc::eval::Token Parser_obj::token(){
            	HX_GC_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_1246_token)
            	HX_STACK_THIS(this)
HXLINE(1246)
HXLINE(1247)		if (::hx::IsNotNull( this->tokens->head )) {
HXLINE(1248)			 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN(1248)			 ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token k = _this->head;
HXDLIN(1248)			if (::hx::IsNull( k )) {
HXLINE(1248)				return null();
            			}
            			else {
HXLINE(1248)				_this->head = k->next;
HXDLIN(1248)				return k->elt;
            			}
            		}
HXLINE(1250)		HX_VAR_NAME( int,_hx_char,"char");
HXLINE(1251)		if ((this->_hx_char < 0)) {
HXLINE(1252)			_hx_char = this->readChar();
            		}
            		else {
HXLINE(1254)			_hx_char = this->_hx_char;
HXLINE(1255)			this->_hx_char = -1;
            		}
HXLINE(1257)		while(true){
HXLINE(1258)			switch((int)(_hx_char)){
            				case (int)0: {
HXLINE(1260)					return ::hxcpp::debug::jsonrpc::eval::Token_obj::TEof_dyn();
            				}
            				break;
            				case (int)10: {
HXLINE(1263)					this->line++;
            				}
            				break;
            				case (int)9: case (int)13: case (int)32: {
            				}
            				break;
            				case (int)35: {
HXLINE(1419)					_hx_char = this->readChar();
HXLINE(1420)					if (this->idents->__get(_hx_char)) {
HXLINE(1421)						HX_VARI( ::String,id) = ::String::fromCharCode(_hx_char);
HXLINE(1422)						while(true){
HXLINE(1423)							_hx_char = this->readChar();
HXLINE(1424)							if (!(this->idents->__get(_hx_char))) {
HXLINE(1425)								this->_hx_char = _hx_char;
HXLINE(1426)								return this->preprocess(id);
            							}
HXLINE(1428)							id = (id + ::String::fromCharCode(_hx_char));
            						}
            					}
HXLINE(1431)					this->invalidChar(_hx_char);
            				}
            				break;
            				case (int)34: case (int)39: {
HXLINE(1391)					return ::hxcpp::debug::jsonrpc::eval::Token_obj::TConst(::hxcpp::debug::jsonrpc::eval::Const_obj::CString(this->readString(_hx_char)));
            				}
            				break;
            				case (int)40: {
HXLINE(1351)					return ::hxcpp::debug::jsonrpc::eval::Token_obj::TPOpen_dyn();
            				}
            				break;
            				case (int)41: {
HXLINE(1353)					return ::hxcpp::debug::jsonrpc::eval::Token_obj::TPClose_dyn();
            				}
            				break;
            				case (int)44: {
HXLINE(1355)					return ::hxcpp::debug::jsonrpc::eval::Token_obj::TComma_dyn();
            				}
            				break;
            				case (int)46: {
HXLINE(1357)					_hx_char = this->readChar();
HXLINE(1358)					switch((int)(_hx_char)){
            						case (int)46: {
HXLINE(1374)							_hx_char = this->readChar();
HXLINE(1375)							if ((_hx_char != 46)) {
HXLINE(1376)								this->invalidChar(_hx_char);
            							}
HXLINE(1377)							return ::hxcpp::debug::jsonrpc::eval::Token_obj::TOp(HX_("...",ee,0f,23,00));
            						}
            						break;
            						case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
HXLINE(1360)							HX_VARI( int,n) = (_hx_char - 48);
HXLINE(1361)							HX_VARI( int,exp) = 1;
HXLINE(1362)							while(true){
HXLINE(1363)								_hx_char = this->readChar();
HXLINE(1364)								exp = (exp * 10);
HXLINE(1365)								switch((int)(_hx_char)){
            									case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
HXLINE(1367)										n = ((n * 10) + (_hx_char - 48));
            									}
            									break;
            									default:{
HXLINE(1369)										this->_hx_char = _hx_char;
HXLINE(1370)										return ::hxcpp::debug::jsonrpc::eval::Token_obj::TConst(::hxcpp::debug::jsonrpc::eval::Const_obj::CFloat((( (Float)(n) ) / ( (Float)(exp) ))));
            									}
            								}
            							}
            						}
            						break;
            						default:{
HXLINE(1379)							this->_hx_char = _hx_char;
HXLINE(1380)							return ::hxcpp::debug::jsonrpc::eval::Token_obj::TDot_dyn();
            						}
            					}
            				}
            				break;
            				case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
HXLINE(1265)					HX_VARI( Float,n) = (( (Float)((_hx_char - 48)) ) * ((Float)1.0));
HXLINE(1266)					HX_VARI( Float,exp) = ((Float)0.);
HXLINE(1267)					while(true){
HXLINE(1268)						_hx_char = this->readChar();
HXLINE(1269)						exp = (exp * ( (Float)(10) ));
HXLINE(1270)						switch((int)(_hx_char)){
            							case (int)46: {
HXLINE(1291)								if ((exp > 0)) {
HXLINE(1293)									bool _hx_tmp;
HXDLIN(1293)									if ((exp == 10)) {
HXLINE(1293)										_hx_tmp = (this->readChar() == 46);
            									}
            									else {
HXLINE(1293)										_hx_tmp = false;
            									}
HXDLIN(1293)									if (_hx_tmp) {
HXLINE(1294)										{
HXLINE(1294)											 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN(1294)											_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,::hxcpp::debug::jsonrpc::eval::Token_obj::TOp(HX_("...",ee,0f,23,00)),_this->head);
            										}
HXLINE(1295)										HX_VARI( int,i) = ::Std_obj::_hx_int(n);
HXLINE(1296)										 ::hxcpp::debug::jsonrpc::eval::Const _hx_tmp;
HXDLIN(1296)										if ((i == n)) {
HXLINE(1296)											_hx_tmp = ::hxcpp::debug::jsonrpc::eval::Const_obj::CInt(i);
            										}
            										else {
HXLINE(1296)											_hx_tmp = ::hxcpp::debug::jsonrpc::eval::Const_obj::CFloat(n);
            										}
HXDLIN(1296)										return ::hxcpp::debug::jsonrpc::eval::Token_obj::TConst(_hx_tmp);
            									}
HXLINE(1298)									this->invalidChar(_hx_char);
            								}
HXLINE(1300)								exp = ((Float)1.);
            							}
            							break;
            							case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
HXLINE(1272)								n = ((n * ( (Float)(10) )) + (_hx_char - 48));
            							}
            							break;
            							case (int)69: case (int)101: {
HXLINE(1274)								HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,tk) = this->token();
HXLINE(1275)								HX_VARI(  ::Dynamic,pow) = null();
HXLINE(1276)								if (::hx::IsNull( tk )) {
HXLINE(1285)									 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN(1285)									_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            								}
            								else {
HXLINE(1276)									switch((int)(tk->_hx_getIndex())){
            										case (int)1: {
HXLINE(1277)											 ::hxcpp::debug::jsonrpc::eval::Const _g = tk->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Const >();
HXDLIN(1277)											if ((_g->_hx_getIndex() == 0)) {
HXLINE(1277)												HX_VARI( int,e) = _g->_hx_getInt(0);
HXDLIN(1277)												pow = e;
            											}
            											else {
HXLINE(1285)												 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN(1285)												_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            											}
            										}
            										break;
            										case (int)3: {
HXLINE(1278)											if ((tk->_hx_getString(0) == HX_("-",2d,00,00,00))) {
HXLINE(1279)												tk = this->token();
HXLINE(1280)												if (::hx::IsNull( tk )) {
HXLINE(1282)													 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN(1282)													_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            												}
            												else {
HXLINE(1280)													if ((tk->_hx_getIndex() == 1)) {
HXLINE(1281)														 ::hxcpp::debug::jsonrpc::eval::Const _g = tk->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Const >();
HXDLIN(1281)														if ((_g->_hx_getIndex() == 0)) {
HXLINE(1281)															HX_VARI( int,e) = _g->_hx_getInt(0);
HXDLIN(1281)															pow = -(e);
            														}
            														else {
HXLINE(1282)															 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN(1282)															_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            														}
            													}
            													else {
HXLINE(1282)														 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN(1282)														_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            													}
            												}
            											}
            											else {
HXLINE(1285)												 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN(1285)												_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            											}
            										}
            										break;
            										default:{
HXLINE(1285)											 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN(1285)											_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            										}
            									}
            								}
HXLINE(1287)								if (::hx::IsNull( pow )) {
HXLINE(1288)									this->invalidChar(_hx_char);
            								}
HXLINE(1289)								return ::hxcpp::debug::jsonrpc::eval::Token_obj::TConst(::hxcpp::debug::jsonrpc::eval::Const_obj::CFloat((((::Math_obj::pow(( (Float)(10) ),( (Float)(pow) )) / exp) * n) * ( (Float)(10) ))));
            							}
            							break;
            							case (int)120: {
HXLINE(1302)								bool _hx_tmp;
HXDLIN(1302)								if (!((n > 0))) {
HXLINE(1302)									_hx_tmp = (exp > 0);
            								}
            								else {
HXLINE(1302)									_hx_tmp = true;
            								}
HXDLIN(1302)								if (_hx_tmp) {
HXLINE(1303)									this->invalidChar(_hx_char);
            								}
HXLINE(1306)								HX_VARI( int,n1) = 0;
HXLINE(1307)								while(true){
HXLINE(1308)									_hx_char = this->readChar();
HXLINE(1309)									switch((int)(_hx_char)){
            										case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
HXLINE(1311)											n1 = (((n1 << 4) + _hx_char) - 48);
            										}
            										break;
            										case (int)65: case (int)66: case (int)67: case (int)68: case (int)69: case (int)70: {
HXLINE(1313)											n1 = ((n1 << 4) + (_hx_char - 55));
            										}
            										break;
            										case (int)97: case (int)98: case (int)99: case (int)100: case (int)101: case (int)102: {
HXLINE(1315)											n1 = ((n1 << 4) + (_hx_char - 87));
            										}
            										break;
            										default:{
HXLINE(1317)											this->_hx_char = _hx_char;
HXLINE(1318)											return ::hxcpp::debug::jsonrpc::eval::Token_obj::TConst(::hxcpp::debug::jsonrpc::eval::Const_obj::CInt(n1));
            										}
            									}
            								}
            							}
            							break;
            							default:{
HXLINE(1343)								this->_hx_char = _hx_char;
HXLINE(1344)								HX_VARI( int,i) = ::Std_obj::_hx_int(n);
HXLINE(1345)								 ::hxcpp::debug::jsonrpc::eval::Const _hx_tmp;
HXDLIN(1345)								if ((exp > 0)) {
HXLINE(1345)									_hx_tmp = ::hxcpp::debug::jsonrpc::eval::Const_obj::CFloat(((n * ( (Float)(10) )) / exp));
            								}
            								else {
HXLINE(1345)									if ((i == n)) {
HXLINE(1345)										_hx_tmp = ::hxcpp::debug::jsonrpc::eval::Const_obj::CInt(i);
            									}
            									else {
HXLINE(1345)										_hx_tmp = ::hxcpp::debug::jsonrpc::eval::Const_obj::CFloat(n);
            									}
            								}
HXDLIN(1345)								return ::hxcpp::debug::jsonrpc::eval::Token_obj::TConst(_hx_tmp);
            							}
            						}
            					}
            				}
            				break;
            				case (int)58: {
HXLINE(1395)					return ::hxcpp::debug::jsonrpc::eval::Token_obj::TDoubleDot_dyn();
            				}
            				break;
            				case (int)59: {
HXLINE(1349)					return ::hxcpp::debug::jsonrpc::eval::Token_obj::TSemicolon_dyn();
            				}
            				break;
            				case (int)61: {
HXLINE(1397)					_hx_char = this->readChar();
HXLINE(1398)					if ((_hx_char == 61)) {
HXLINE(1399)						return ::hxcpp::debug::jsonrpc::eval::Token_obj::TOp(HX_("==",60,35,00,00));
            					}
            					else {
HXLINE(1400)						if ((_hx_char == 62)) {
HXLINE(1401)							return ::hxcpp::debug::jsonrpc::eval::Token_obj::TOp(HX_("=>",61,35,00,00));
            						}
            					}
HXLINE(1402)					this->_hx_char = _hx_char;
HXLINE(1403)					return ::hxcpp::debug::jsonrpc::eval::Token_obj::TOp(HX_("=",3d,00,00,00));
            				}
            				break;
            				case (int)63: {
HXLINE(1393)					return ::hxcpp::debug::jsonrpc::eval::Token_obj::TQuestion_dyn();
            				}
            				break;
            				case (int)64: {
HXLINE(1405)					_hx_char = this->readChar();
HXLINE(1406)					bool _hx_tmp;
HXDLIN(1406)					if (!(this->idents->__get(_hx_char))) {
HXLINE(1406)						_hx_tmp = (_hx_char == 58);
            					}
            					else {
HXLINE(1406)						_hx_tmp = true;
            					}
HXDLIN(1406)					if (_hx_tmp) {
HXLINE(1407)						HX_VARI( ::String,id) = ::String::fromCharCode(_hx_char);
HXLINE(1408)						while(true){
HXLINE(1409)							_hx_char = this->readChar();
HXLINE(1410)							if (!(this->idents->__get(_hx_char))) {
HXLINE(1411)								this->_hx_char = _hx_char;
HXLINE(1412)								return ::hxcpp::debug::jsonrpc::eval::Token_obj::TMeta(id);
            							}
HXLINE(1414)							id = (id + ::String::fromCharCode(_hx_char));
            						}
            					}
HXLINE(1417)					this->invalidChar(_hx_char);
            				}
            				break;
            				case (int)91: {
HXLINE(1387)					return ::hxcpp::debug::jsonrpc::eval::Token_obj::TBkOpen_dyn();
            				}
            				break;
            				case (int)93: {
HXLINE(1389)					return ::hxcpp::debug::jsonrpc::eval::Token_obj::TBkClose_dyn();
            				}
            				break;
            				case (int)123: {
HXLINE(1383)					return ::hxcpp::debug::jsonrpc::eval::Token_obj::TBrOpen_dyn();
            				}
            				break;
            				case (int)125: {
HXLINE(1385)					return ::hxcpp::debug::jsonrpc::eval::Token_obj::TBrClose_dyn();
            				}
            				break;
            				default:{
HXLINE(1433)					if (this->ops->__get(_hx_char)) {
HXLINE(1434)						HX_VARI( ::String,op) = ::String::fromCharCode(_hx_char);
HXLINE(1435)						HX_VARI( int,prev) = -1;
HXLINE(1436)						while(true){
HXLINE(1437)							_hx_char = this->readChar();
HXLINE(1438)							bool _hx_tmp;
HXDLIN(1438)							if (this->ops->__get(_hx_char)) {
HXLINE(1438)								_hx_tmp = (prev == 61);
            							}
            							else {
HXLINE(1438)								_hx_tmp = true;
            							}
HXDLIN(1438)							if (_hx_tmp) {
HXLINE(1439)								if (::hx::IsEq( op.charCodeAt(0),47 )) {
HXLINE(1440)									return this->tokenComment(op,_hx_char);
            								}
HXLINE(1441)								this->_hx_char = _hx_char;
HXLINE(1442)								return ::hxcpp::debug::jsonrpc::eval::Token_obj::TOp(op);
            							}
HXLINE(1444)							prev = _hx_char;
HXLINE(1445)							op = (op + ::String::fromCharCode(_hx_char));
            						}
            					}
HXLINE(1448)					if (this->idents->__get(_hx_char)) {
HXLINE(1449)						HX_VARI( ::String,id) = ::String::fromCharCode(_hx_char);
HXLINE(1450)						while(true){
HXLINE(1451)							_hx_char = this->readChar();
HXLINE(1452)							if (!(this->idents->__get(_hx_char))) {
HXLINE(1453)								this->_hx_char = _hx_char;
HXLINE(1454)								return ::hxcpp::debug::jsonrpc::eval::Token_obj::TId(id);
            							}
HXLINE(1456)							id = (id + ::String::fromCharCode(_hx_char));
            						}
            					}
HXLINE(1459)					this->invalidChar(_hx_char);
            				}
            			}
HXLINE(1461)			_hx_char = this->readChar();
            		}
HXLINE(1257)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,token,return )

 ::Dynamic Parser_obj::preprocValue(::String id){
            	HX_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_1467_preprocValue)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(id,"id")
HXLINE(1467)
HXDLIN(1467)		return this->preprocesorValues->get(id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,preprocValue,return )

 ::hxcpp::debug::jsonrpc::eval::Expr Parser_obj::parsePreproCond(){
            	HX_GC_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_1472_parsePreproCond)
            	HX_STACK_THIS(this)
HXLINE(1472)
HXLINE(1473)		HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,tk) = this->token();
HXLINE(1474)		if (::hx::IsNull( tk )) {
HXLINE(1483)			return this->unexpected(tk);
            		}
            		else {
HXLINE(1474)			switch((int)(tk->_hx_getIndex())){
            				case (int)2: {
HXLINE(1478)					HX_VARI( ::String,id) = tk->_hx_getString(0);
HXLINE(1479)					return ::hxcpp::debug::jsonrpc::eval::Expr_obj::EIdent(id);
            				}
            				break;
            				case (int)3: {
HXLINE(1480)					if ((tk->_hx_getString(0) == HX_("!",21,00,00,00))) {
HXLINE(1481)						return ::hxcpp::debug::jsonrpc::eval::Expr_obj::EUnop(HX_("!",21,00,00,00),true,this->parsePreproCond());
            					}
            					else {
HXLINE(1483)						return this->unexpected(tk);
            					}
            				}
            				break;
            				case (int)4: {
HXLINE(1476)					{
HXLINE(1476)						 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN(1476)						_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,::hxcpp::debug::jsonrpc::eval::Token_obj::TPOpen_dyn(),_this->head);
            					}
HXLINE(1477)					return this->parseExpr();
            				}
            				break;
            				default:{
HXLINE(1483)					return this->unexpected(tk);
            				}
            			}
            		}
HXLINE(1474)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parsePreproCond,return )

bool Parser_obj::evalPreproCond( ::hxcpp::debug::jsonrpc::eval::Expr e){
            	HX_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_1488_evalPreproCond)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(e,"e")
HXLINE(1488)
HXDLIN(1488)		switch((int)(e->_hx_getIndex())){
            			case (int)1: {
HXLINE(1489)				HX_VARI( ::String,id) = e->_hx_getString(0);
HXLINE(1490)				return ::hx::IsNotNull( this->preprocValue(id) );
            			}
            			break;
            			case (int)3: {
HXLINE(1493)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE(1494)				return this->evalPreproCond(e1);
            			}
            			break;
            			case (int)6: {
HXLINE(1497)				 ::hxcpp::debug::jsonrpc::eval::Expr _g = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(1497)				 ::hxcpp::debug::jsonrpc::eval::Expr _g1 = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(1497)				::String _hx_switch_0 = e->_hx_getString(0);
            				if (  (_hx_switch_0==HX_("&&",40,21,00,00)) ){
HXLINE(1495)					HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = _g;
HXDLIN(1495)					HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e2) = _g1;
HXLINE(1496)					if (this->evalPreproCond(e1)) {
HXLINE(1496)						return this->evalPreproCond(e2);
            					}
            					else {
HXLINE(1496)						return false;
            					}
HXLINE(1495)					goto _hx_goto_110;
            				}
            				if (  (_hx_switch_0==HX_("||",80,6c,00,00)) ){
HXLINE(1497)					HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = _g;
HXDLIN(1497)					HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e2) = _g1;
HXLINE(1498)					if (!(this->evalPreproCond(e1))) {
HXLINE(1498)						return this->evalPreproCond(e2);
            					}
            					else {
HXLINE(1498)						return true;
            					}
HXLINE(1497)					goto _hx_goto_110;
            				}
            				/* default */{
HXLINE(1500)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::hxcpp::debug::jsonrpc::eval::Error_obj::EInvalidPreprocessor((HX_("Can't eval ",01,17,bf,09) + ::Type_obj::enumConstructor(e)))));
            				}
            				_hx_goto_110:;
            			}
            			break;
            			case (int)7: {
HXLINE(1491)				bool _g = e->_hx_getBool(1);
HXDLIN(1491)				if ((e->_hx_getString(0) == HX_("!",21,00,00,00))) {
HXLINE(1491)					HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE(1492)					return !(this->evalPreproCond(e1));
            				}
            				else {
HXLINE(1500)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::hxcpp::debug::jsonrpc::eval::Error_obj::EInvalidPreprocessor((HX_("Can't eval ",01,17,bf,09) + ::Type_obj::enumConstructor(e)))));
            				}
            			}
            			break;
            			default:{
HXLINE(1500)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::hxcpp::debug::jsonrpc::eval::Error_obj::EInvalidPreprocessor((HX_("Can't eval ",01,17,bf,09) + ::Type_obj::enumConstructor(e)))));
            			}
            		}
HXLINE(1488)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,evalPreproCond,return )

 ::hxcpp::debug::jsonrpc::eval::Token Parser_obj::preprocess(::String id){
            	HX_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_1506_preprocess)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(id,"id")
HXLINE(1506)
HXDLIN(1506)		::String _hx_switch_0 = id;
            		if (  (_hx_switch_0==HX_("else",b9,e4,14,43)) ||  (_hx_switch_0==HX_("elseif",d6,a0,a2,dd)) ){
HXLINE(1516)			if ((this->preprocStack->length > 0)) {
HXLINE(1517)				if (( (bool)(this->preprocStack->__get((this->preprocStack->length - 1))->__Field(HX_("r",72,00,00,00),::hx::paccDynamic)) )) {
HXLINE(1518)					this->preprocStack->__get((this->preprocStack->length - 1))->__SetField(HX_("r",72,00,00,00),false,::hx::paccDynamic);
HXLINE(1519)					this->skipTokens();
HXLINE(1520)					return this->token();
            				}
            				else {
HXLINE(1521)					if ((id == HX_("else",b9,e4,14,43))) {
HXLINE(1522)						this->preprocStack->pop();
HXLINE(1523)						this->preprocStack->push( ::Dynamic(::hx::Anon_obj::Create(1)
            							->setFixed(0,HX_("r",72,00,00,00),true)));
HXLINE(1524)						return this->token();
            					}
            					else {
HXLINE(1527)						this->preprocStack->pop();
HXLINE(1528)						return this->preprocess(HX_("if",dd,5b,00,00));
            					}
            				}
            			}
            			else {
HXLINE(1534)				return ::hxcpp::debug::jsonrpc::eval::Token_obj::TPrepro(id);
            			}
HXLINE(1516)			goto _hx_goto_112;
            		}
            		if (  (_hx_switch_0==HX_("end",db,03,4d,00)) ){
HXLINE(1530)			if ((this->preprocStack->length > 0)) {
HXLINE(1531)				this->preprocStack->pop();
HXLINE(1532)				return this->token();
            			}
            			else {
HXLINE(1534)				return ::hxcpp::debug::jsonrpc::eval::Token_obj::TPrepro(id);
            			}
HXLINE(1530)			goto _hx_goto_112;
            		}
            		if (  (_hx_switch_0==HX_("if",dd,5b,00,00)) ){
HXLINE(1508)			HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e) = this->parsePreproCond();
HXLINE(1509)			if (this->evalPreproCond(e)) {
HXLINE(1510)				this->preprocStack->push( ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("r",72,00,00,00),true)));
HXLINE(1511)				return this->token();
            			}
HXLINE(1513)			this->preprocStack->push( ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("r",72,00,00,00),false)));
HXLINE(1514)			this->skipTokens();
HXLINE(1515)			return this->token();
HXLINE(1507)			goto _hx_goto_112;
            		}
            		/* default */{
HXLINE(1534)			return ::hxcpp::debug::jsonrpc::eval::Token_obj::TPrepro(id);
            		}
            		_hx_goto_112:;
HXLINE(1506)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,preprocess,return )

void Parser_obj::skipTokens(){
            	HX_GC_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_1538_skipTokens)
            	HX_STACK_THIS(this)
HXLINE(1538)
HXLINE(1539)		HX_VARI( int,spos) = (this->preprocStack->length - 1);
HXLINE(1540)		HX_VARI(  ::Dynamic,obj) = this->preprocStack->__get(spos);
HXLINE(1541)		HX_VARI( int,pos) = 0;
HXLINE(1542)		while(true){
HXLINE(1543)			HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Token,tk) = this->token();
HXLINE(1544)			if (::hx::IsPointerEq( tk,::hxcpp::debug::jsonrpc::eval::Token_obj::TEof_dyn() )) {
HXLINE(1545)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::hxcpp::debug::jsonrpc::eval::Error_obj::EInvalidPreprocessor(HX_("Unclosed",e5,94,4a,ea))));
            			}
HXLINE(1546)			if (::hx::IsNotEq( this->preprocStack->__get(spos),obj )) {
HXLINE(1547)				{
HXLINE(1547)					 ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token _this = this->tokens;
HXDLIN(1547)					_this->head =  ::haxe::ds::GenericCell_hxcpp_debug_jsonrpc_eval_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            				}
HXLINE(1548)				goto _hx_goto_114;
            			}
            		}
            		_hx_goto_114:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,skipTokens,(void))

 ::hxcpp::debug::jsonrpc::eval::Token Parser_obj::tokenComment(::String op,int _hx_char){
            	HX_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_1553_tokenComment)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(op,"op")
            	HX_STACK_ARG(_hx_char,"char")
HXLINE(1553)
HXLINE(1554)		HX_VARI(  ::Dynamic,c) = op.charCodeAt(1);
HXLINE(1555)		HX_VARI(  ::haxe::io::Input,s) = this->input;
HXLINE(1556)		if (::hx::IsEq( c,47 )) {
HXLINE(1557)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(1558)				while(true){
HXLINE(1558)					bool _hx_tmp;
HXDLIN(1558)					if ((_hx_char != 13)) {
HXLINE(1558)						_hx_tmp = (_hx_char != 10);
            					}
            					else {
HXLINE(1558)						_hx_tmp = false;
            					}
HXDLIN(1558)					if (!(_hx_tmp)) {
HXLINE(1558)						goto _hx_goto_116;
            					}
HXLINE(1560)					_hx_char = s->readByte();
            				}
            				_hx_goto_116:;
HXLINE(1562)				this->_hx_char = _hx_char;
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE(1563)					{
HXLINE(1563)						null();
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXLINE(1564)			return this->token();
            		}
HXLINE(1566)		if (::hx::IsEq( c,42 )) {
HXLINE(1567)			HX_VARI( int,old) = this->line;
HXLINE(1568)			if ((op == HX_("/**/",a0,0a,31,1f))) {
HXLINE(1569)				this->_hx_char = _hx_char;
HXLINE(1570)				return this->token();
            			}
HXLINE(1572)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(1573)				while(true){
HXLINE(1574)					while((_hx_char != 42)){
HXLINE(1575)						if ((_hx_char == 10)) {
HXLINE(1576)							this->line++;
            						}
HXLINE(1578)						_hx_char = s->readByte();
            					}
HXLINE(1581)					_hx_char = s->readByte();
HXLINE(1582)					if ((_hx_char == 47)) {
HXLINE(1583)						goto _hx_goto_117;
            					}
            				}
            				_hx_goto_117:;
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE(1585)					{
HXLINE(1585)						null();
            					}
HXLINE(1586)					this->line = old;
HXLINE(1587)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::hxcpp::debug::jsonrpc::eval::Error_obj::EUnterminatedComment_dyn()));
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXLINE(1589)			return this->token();
            		}
HXLINE(1591)		this->_hx_char = _hx_char;
HXLINE(1592)		return ::hxcpp::debug::jsonrpc::eval::Token_obj::TOp(op);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,tokenComment,return )

::String Parser_obj::constString( ::hxcpp::debug::jsonrpc::eval::Const c){
            	HX_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_1596_constString)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(c,"c")
HXLINE(1596)
HXDLIN(1596)		switch((int)(c->_hx_getIndex())){
            			case (int)0: {
HXLINE(1597)				HX_VARI( int,v) = c->_hx_getInt(0);
HXDLIN(1597)				return ::Std_obj::string(v);
            			}
            			break;
            			case (int)1: {
HXLINE(1598)				HX_VARI( Float,f) = c->_hx_getFloat(0);
HXDLIN(1598)				return ::Std_obj::string(f);
            			}
            			break;
            			case (int)2: {
HXLINE(1599)				HX_VARI( ::String,s) = c->_hx_getString(0);
HXDLIN(1599)				return s;
            			}
            			break;
            		}
HXLINE(1596)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,constString,return )

::String Parser_obj::tokenString( ::hxcpp::debug::jsonrpc::eval::Token t){
            	HX_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_1607_tokenString)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(t,"t")
HXLINE(1607)
HXDLIN(1607)		switch((int)(t->_hx_getIndex())){
            			case (int)0: {
HXLINE(1608)				return HX_("<eof>",3e,ee,21,cf);
            			}
            			break;
            			case (int)1: {
HXLINE(1609)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Const,c) = t->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Const >();
HXDLIN(1609)				return this->constString(c);
            			}
            			break;
            			case (int)2: {
HXLINE(1610)				HX_VARI( ::String,s) = t->_hx_getString(0);
HXDLIN(1610)				return s;
            			}
            			break;
            			case (int)3: {
HXLINE(1611)				HX_VARI( ::String,s) = t->_hx_getString(0);
HXDLIN(1611)				return s;
            			}
            			break;
            			case (int)4: {
HXLINE(1612)				return HX_("(",28,00,00,00);
            			}
            			break;
            			case (int)5: {
HXLINE(1613)				return HX_(")",29,00,00,00);
            			}
            			break;
            			case (int)6: {
HXLINE(1614)				return HX_("{",7b,00,00,00);
            			}
            			break;
            			case (int)7: {
HXLINE(1615)				return HX_("}",7d,00,00,00);
            			}
            			break;
            			case (int)8: {
HXLINE(1616)				return HX_(".",2e,00,00,00);
            			}
            			break;
            			case (int)9: {
HXLINE(1617)				return HX_(",",2c,00,00,00);
            			}
            			break;
            			case (int)10: {
HXLINE(1618)				return HX_(";",3b,00,00,00);
            			}
            			break;
            			case (int)11: {
HXLINE(1619)				return HX_("[",5b,00,00,00);
            			}
            			break;
            			case (int)12: {
HXLINE(1620)				return HX_("]",5d,00,00,00);
            			}
            			break;
            			case (int)13: {
HXLINE(1621)				return HX_("?",3f,00,00,00);
            			}
            			break;
            			case (int)14: {
HXLINE(1622)				return HX_(":",3a,00,00,00);
            			}
            			break;
            			case (int)15: {
HXLINE(1623)				HX_VARI( ::String,id) = t->_hx_getString(0);
HXDLIN(1623)				return (HX_("@",40,00,00,00) + id);
            			}
            			break;
            			case (int)16: {
HXLINE(1624)				HX_VARI( ::String,id) = t->_hx_getString(0);
HXDLIN(1624)				return (HX_("#",23,00,00,00) + id);
            			}
            			break;
            		}
HXLINE(1607)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,tokenString,return )

int Parser_obj::p1;

int Parser_obj::readPos;

int Parser_obj::tokenMin;

int Parser_obj::tokenMax;


::hx::ObjectPtr< Parser_obj > Parser_obj::__new() {
	::hx::ObjectPtr< Parser_obj > __this = new Parser_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Parser_obj > Parser_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Parser_obj *__this = (Parser_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Parser_obj), true, "hxcpp.debug.jsonrpc.eval.Parser"));
	*(void **)__this = Parser_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Parser_obj::Parser_obj()
{
}

void Parser_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Parser);
	HX_MARK_MEMBER_NAME(line,"line");
	HX_MARK_MEMBER_NAME(opChars,"opChars");
	HX_MARK_MEMBER_NAME(identChars,"identChars");
	HX_MARK_MEMBER_NAME(opPriority,"opPriority");
	HX_MARK_MEMBER_NAME(opRightAssoc,"opRightAssoc");
	HX_MARK_MEMBER_NAME(unops,"unops");
	HX_MARK_MEMBER_NAME(preprocesorValues,"preprocesorValues");
	HX_MARK_MEMBER_NAME(allowJSON,"allowJSON");
	HX_MARK_MEMBER_NAME(allowTypes,"allowTypes");
	HX_MARK_MEMBER_NAME(allowMetadata,"allowMetadata");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(_hx_char,"char");
	HX_MARK_MEMBER_NAME(ops,"ops");
	HX_MARK_MEMBER_NAME(idents,"idents");
	HX_MARK_MEMBER_NAME(uid,"uid");
	HX_MARK_MEMBER_NAME(tokens,"tokens");
	HX_MARK_MEMBER_NAME(preprocStack,"preprocStack");
	HX_MARK_END_CLASS();
}

void Parser_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(line,"line");
	HX_VISIT_MEMBER_NAME(opChars,"opChars");
	HX_VISIT_MEMBER_NAME(identChars,"identChars");
	HX_VISIT_MEMBER_NAME(opPriority,"opPriority");
	HX_VISIT_MEMBER_NAME(opRightAssoc,"opRightAssoc");
	HX_VISIT_MEMBER_NAME(unops,"unops");
	HX_VISIT_MEMBER_NAME(preprocesorValues,"preprocesorValues");
	HX_VISIT_MEMBER_NAME(allowJSON,"allowJSON");
	HX_VISIT_MEMBER_NAME(allowTypes,"allowTypes");
	HX_VISIT_MEMBER_NAME(allowMetadata,"allowMetadata");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(_hx_char,"char");
	HX_VISIT_MEMBER_NAME(ops,"ops");
	HX_VISIT_MEMBER_NAME(idents,"idents");
	HX_VISIT_MEMBER_NAME(uid,"uid");
	HX_VISIT_MEMBER_NAME(tokens,"tokens");
	HX_VISIT_MEMBER_NAME(preprocStack,"preprocStack");
}

::hx::Val Parser_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"mk") ) { return ::hx::Val( mk_dyn() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ops") ) { return ::hx::Val( ops ); }
		if (HX_FIELD_EQ(inName,"uid") ) { return ::hx::Val( uid ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { return ::hx::Val( line ); }
		if (HX_FIELD_EQ(inName,"char") ) { return ::hx::Val( _hx_char ); }
		if (HX_FIELD_EQ(inName,"push") ) { return ::hx::Val( push_dyn() ); }
		if (HX_FIELD_EQ(inName,"expr") ) { return ::hx::Val( expr_dyn() ); }
		if (HX_FIELD_EQ(inName,"pmin") ) { return ::hx::Val( pmin_dyn() ); }
		if (HX_FIELD_EQ(inName,"pmax") ) { return ::hx::Val( pmax_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"unops") ) { return ::hx::Val( unops ); }
		if (HX_FIELD_EQ(inName,"input") ) { return ::hx::Val( input ); }
		if (HX_FIELD_EQ(inName,"error") ) { return ::hx::Val( error_dyn() ); }
		if (HX_FIELD_EQ(inName,"parse") ) { return ::hx::Val( parse_dyn() ); }
		if (HX_FIELD_EQ(inName,"maybe") ) { return ::hx::Val( maybe_dyn() ); }
		if (HX_FIELD_EQ(inName,"token") ) { return ::hx::Val( token_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"idents") ) { return ::hx::Val( idents ); }
		if (HX_FIELD_EQ(inName,"tokens") ) { return ::hx::Val( tokens ); }
		if (HX_FIELD_EQ(inName,"ensure") ) { return ::hx::Val( ensure_dyn() ); }
		if (HX_FIELD_EQ(inName,"incPos") ) { return ::hx::Val( incPos_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opChars") ) { return ::hx::Val( opChars ); }
		if (HX_FIELD_EQ(inName,"isBlock") ) { return ::hx::Val( isBlock_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getIdent") ) { return ::hx::Val( getIdent_dyn() ); }
		if (HX_FIELD_EQ(inName,"mapCompr") ) { return ::hx::Val( mapCompr_dyn() ); }
		if (HX_FIELD_EQ(inName,"makeUnop") ) { return ::hx::Val( makeUnop_dyn() ); }
		if (HX_FIELD_EQ(inName,"readChar") ) { return ::hx::Val( readChar_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allowJSON") ) { return ::hx::Val( allowJSON ); }
		if (HX_FIELD_EQ(inName,"parseExpr") ) { return ::hx::Val( parseExpr_dyn() ); }
		if (HX_FIELD_EQ(inName,"makeBinop") ) { return ::hx::Val( makeBinop_dyn() ); }
		if (HX_FIELD_EQ(inName,"parsePath") ) { return ::hx::Val( parsePath_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseType") ) { return ::hx::Val( parseType_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"identChars") ) { return ::hx::Val( identChars ); }
		if (HX_FIELD_EQ(inName,"opPriority") ) { return ::hx::Val( opPriority ); }
		if (HX_FIELD_EQ(inName,"allowTypes") ) { return ::hx::Val( allowTypes ); }
		if (HX_FIELD_EQ(inName,"initParser") ) { return ::hx::Val( initParser_dyn() ); }
		if (HX_FIELD_EQ(inName,"unexpected") ) { return ::hx::Val( unexpected_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseField") ) { return ::hx::Val( parseField_dyn() ); }
		if (HX_FIELD_EQ(inName,"readString") ) { return ::hx::Val( readString_dyn() ); }
		if (HX_FIELD_EQ(inName,"preprocess") ) { return ::hx::Val( preprocess_dyn() ); }
		if (HX_FIELD_EQ(inName,"skipTokens") ) { return ::hx::Val( skipTokens_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"invalidChar") ) { return ::hx::Val( invalidChar_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseString") ) { return ::hx::Val( parseString_dyn() ); }
		if (HX_FIELD_EQ(inName,"ensureToken") ) { return ::hx::Val( ensureToken_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseObject") ) { return ::hx::Val( parseObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseLambda") ) { return ::hx::Val( parseLambda_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseModule") ) { return ::hx::Val( parseModule_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseParams") ) { return ::hx::Val( parseParams_dyn() ); }
		if (HX_FIELD_EQ(inName,"constString") ) { return ::hx::Val( constString_dyn() ); }
		if (HX_FIELD_EQ(inName,"tokenString") ) { return ::hx::Val( tokenString_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"opRightAssoc") ) { return ::hx::Val( opRightAssoc ); }
		if (HX_FIELD_EQ(inName,"preprocValue") ) { return ::hx::Val( preprocValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"preprocStack") ) { return ::hx::Val( preprocStack ); }
		if (HX_FIELD_EQ(inName,"tokenComment") ) { return ::hx::Val( tokenComment_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"allowMetadata") ) { return ::hx::Val( allowMetadata ); }
		if (HX_FIELD_EQ(inName,"parseFullExpr") ) { return ::hx::Val( parseFullExpr_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseMetaArgs") ) { return ::hx::Val( parseMetaArgs_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseExprNext") ) { return ::hx::Val( parseExprNext_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseTypeNext") ) { return ::hx::Val( parseTypeNext_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseExprList") ) { return ::hx::Val( parseExprList_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseMetadata") ) { return ::hx::Val( parseMetadata_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"parseStructure") ) { return ::hx::Val( parseStructure_dyn() ); }
		if (HX_FIELD_EQ(inName,"evalPreproCond") ) { return ::hx::Val( evalPreproCond_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"parseModuleDecl") ) { return ::hx::Val( parseModuleDecl_dyn() ); }
		if (HX_FIELD_EQ(inName,"parsePreproCond") ) { return ::hx::Val( parsePreproCond_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"preprocesorValues") ) { return ::hx::Val( preprocesorValues ); }
		if (HX_FIELD_EQ(inName,"parseFunctionArgs") ) { return ::hx::Val( parseFunctionArgs_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseFunctionDecl") ) { return ::hx::Val( parseFunctionDecl_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Parser_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ops") ) { ops=inValue.Cast< ::Array< bool > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uid") ) { uid=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { line=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"char") ) { _hx_char=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"unops") ) { unops=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast<  ::haxe::io::Input >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"idents") ) { idents=inValue.Cast< ::Array< bool > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tokens") ) { tokens=inValue.Cast<  ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opChars") ) { opChars=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allowJSON") ) { allowJSON=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"identChars") ) { identChars=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"opPriority") ) { opPriority=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowTypes") ) { allowTypes=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"opRightAssoc") ) { opRightAssoc=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"preprocStack") ) { preprocStack=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"allowMetadata") ) { allowMetadata=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"preprocesorValues") ) { preprocesorValues=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Parser_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("line",f4,17,b3,47));
	outFields->push(HX_("opChars",fc,f3,a7,a8));
	outFields->push(HX_("identChars",cd,23,3f,ee));
	outFields->push(HX_("opPriority",a5,21,d8,3e));
	outFields->push(HX_("opRightAssoc",9a,d1,fe,02));
	outFields->push(HX_("unops",79,f3,eb,a6));
	outFields->push(HX_("preprocesorValues",4c,e2,81,ce));
	outFields->push(HX_("allowJSON",31,27,44,b1));
	outFields->push(HX_("allowTypes",30,2b,97,45));
	outFields->push(HX_("allowMetadata",18,79,d4,10));
	outFields->push(HX_("input",0a,c4,1d,be));
	outFields->push(HX_("char",d6,5e,bf,41));
	outFields->push(HX_("ops",32,9c,54,00));
	outFields->push(HX_("idents",83,4f,a1,d2));
	outFields->push(HX_("uid",90,23,59,00));
	outFields->push(HX_("tokens",5a,17,e7,91));
	outFields->push(HX_("preprocStack",4f,d3,9d,7a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Parser_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Parser_obj,line),HX_("line",f4,17,b3,47)},
	{::hx::fsString,(int)offsetof(Parser_obj,opChars),HX_("opChars",fc,f3,a7,a8)},
	{::hx::fsString,(int)offsetof(Parser_obj,identChars),HX_("identChars",cd,23,3f,ee)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Parser_obj,opPriority),HX_("opPriority",a5,21,d8,3e)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Parser_obj,opRightAssoc),HX_("opRightAssoc",9a,d1,fe,02)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Parser_obj,unops),HX_("unops",79,f3,eb,a6)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Parser_obj,preprocesorValues),HX_("preprocesorValues",4c,e2,81,ce)},
	{::hx::fsBool,(int)offsetof(Parser_obj,allowJSON),HX_("allowJSON",31,27,44,b1)},
	{::hx::fsBool,(int)offsetof(Parser_obj,allowTypes),HX_("allowTypes",30,2b,97,45)},
	{::hx::fsBool,(int)offsetof(Parser_obj,allowMetadata),HX_("allowMetadata",18,79,d4,10)},
	{::hx::fsObject /*  ::haxe::io::Input */ ,(int)offsetof(Parser_obj,input),HX_("input",0a,c4,1d,be)},
	{::hx::fsInt,(int)offsetof(Parser_obj,_hx_char),HX_("char",d6,5e,bf,41)},
	{::hx::fsObject /* ::Array< bool > */ ,(int)offsetof(Parser_obj,ops),HX_("ops",32,9c,54,00)},
	{::hx::fsObject /* ::Array< bool > */ ,(int)offsetof(Parser_obj,idents),HX_("idents",83,4f,a1,d2)},
	{::hx::fsInt,(int)offsetof(Parser_obj,uid),HX_("uid",90,23,59,00)},
	{::hx::fsObject /*  ::haxe::ds::GenericStack_hxcpp_debug_jsonrpc_eval_Token */ ,(int)offsetof(Parser_obj,tokens),HX_("tokens",5a,17,e7,91)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Parser_obj,preprocStack),HX_("preprocStack",4f,d3,9d,7a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Parser_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Parser_obj::p1,HX_("p1",c1,61,00,00)},
	{::hx::fsInt,(void *) &Parser_obj::readPos,HX_("readPos",de,03,cf,02)},
	{::hx::fsInt,(void *) &Parser_obj::tokenMin,HX_("tokenMin",19,a8,42,2b)},
	{::hx::fsInt,(void *) &Parser_obj::tokenMax,HX_("tokenMax",2b,a1,42,2b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Parser_obj_sMemberFields[] = {
	HX_("line",f4,17,b3,47),
	HX_("opChars",fc,f3,a7,a8),
	HX_("identChars",cd,23,3f,ee),
	HX_("opPriority",a5,21,d8,3e),
	HX_("opRightAssoc",9a,d1,fe,02),
	HX_("unops",79,f3,eb,a6),
	HX_("preprocesorValues",4c,e2,81,ce),
	HX_("allowJSON",31,27,44,b1),
	HX_("allowTypes",30,2b,97,45),
	HX_("allowMetadata",18,79,d4,10),
	HX_("input",0a,c4,1d,be),
	HX_("char",d6,5e,bf,41),
	HX_("ops",32,9c,54,00),
	HX_("idents",83,4f,a1,d2),
	HX_("uid",90,23,59,00),
	HX_("tokens",5a,17,e7,91),
	HX_("error",c8,cb,29,73),
	HX_("invalidChar",6d,ad,ce,a9),
	HX_("initParser",0f,f8,cd,f1),
	HX_("parseString",64,d5,6c,8c),
	HX_("parse",33,90,55,bd),
	HX_("unexpected",d1,15,f4,c5),
	HX_("push",da,11,61,4a),
	HX_("ensure",be,f5,7b,04),
	HX_("ensureToken",5b,6c,33,ec),
	HX_("maybe",a8,13,27,03),
	HX_("getIdent",7a,52,50,17),
	HX_("expr",35,fd,1d,43),
	HX_("pmin",22,f7,5a,4a),
	HX_("pmax",34,f0,5a,4a),
	HX_("mk",5e,5f,00,00),
	HX_("isBlock",03,19,82,51),
	HX_("parseFullExpr",b7,bd,60,9c),
	HX_("parseObject",52,2b,7c,90),
	HX_("parseExpr",08,4f,c4,ca),
	HX_("parseLambda",9a,df,fc,cb),
	HX_("parseMetaArgs",15,82,33,6e),
	HX_("mapCompr",47,a4,9f,c1),
	HX_("makeUnop",c8,c4,47,44),
	HX_("makeBinop",da,90,98,86),
	HX_("parseStructure",80,85,70,8b),
	HX_("parseExprNext",1b,24,a8,f3),
	HX_("parseFunctionArgs",68,ad,48,04),
	HX_("parseFunctionDecl",75,70,3a,06),
	HX_("parsePath",78,37,f8,d1),
	HX_("parseType",8d,44,af,d4),
	HX_("parseTypeNext",20,c0,fc,fa),
	HX_("parseExprList",86,bb,58,f2),
	HX_("parseModule",3f,e1,0f,3c),
	HX_("parseMetadata",c2,1e,49,85),
	HX_("parseParams",d9,a7,b7,68),
	HX_("parseModuleDecl",49,69,92,8b),
	HX_("parseField",87,db,74,2a),
	HX_("incPos",56,e7,39,93),
	HX_("readChar",4c,39,b7,69),
	HX_("readString",c7,0c,ac,0a),
	HX_("token",f9,82,2b,14),
	HX_("preprocValue",78,eb,4a,28),
	HX_("preprocStack",4f,d3,9d,7a),
	HX_("parsePreproCond",ff,8c,11,d6),
	HX_("evalPreproCond",a8,25,52,b0),
	HX_("preprocess",ac,dc,46,92),
	HX_("skipTokens",39,0b,eb,f9),
	HX_("tokenComment",66,60,fb,25),
	HX_("constString",94,42,30,a9),
	HX_("tokenString",aa,20,de,a4),
	::String(null()) };

static void Parser_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Parser_obj::p1,"p1");
	HX_MARK_MEMBER_NAME(Parser_obj::readPos,"readPos");
	HX_MARK_MEMBER_NAME(Parser_obj::tokenMin,"tokenMin");
	HX_MARK_MEMBER_NAME(Parser_obj::tokenMax,"tokenMax");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Parser_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Parser_obj::p1,"p1");
	HX_VISIT_MEMBER_NAME(Parser_obj::readPos,"readPos");
	HX_VISIT_MEMBER_NAME(Parser_obj::tokenMin,"tokenMin");
	HX_VISIT_MEMBER_NAME(Parser_obj::tokenMax,"tokenMax");
};

#endif

::hx::Class Parser_obj::__mClass;

static ::String Parser_obj_sStaticFields[] = {
	HX_("p1",c1,61,00,00),
	HX_("readPos",de,03,cf,02),
	HX_("tokenMin",19,a8,42,2b),
	HX_("tokenMax",2b,a1,42,2b),
	::String(null())
};

void Parser_obj::__register()
{
	Parser_obj _hx_dummy;
	Parser_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxcpp.debug.jsonrpc.eval.Parser",aa,17,db,ba);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Parser_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Parser_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Parser_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Parser_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Parser_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Parser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Parser_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Parser_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_67_boot)
HXDLIN(  67)		p1 = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_68_boot)
HXDLIN(  68)		readPos = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_69_boot)
HXDLIN(  69)		tokenMin = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_6bbb5c3f44bcbf21_70_boot)
HXDLIN(  70)		tokenMax = 0;
            	}
}

} // end namespace hxcpp
} // end namespace debug
} // end namespace jsonrpc
} // end namespace eval
