#include <hxcpp.h>

#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_CType
#include <hxcpp/debug/jsonrpc/eval/CType.h>
#endif
#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_Const
#include <hxcpp/debug/jsonrpc/eval/Const.h>
#endif
#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_Expr
#include <hxcpp/debug/jsonrpc/eval/Expr.h>
#endif
#ifndef INCLUDED_hxcpp_debug_jsonrpc_eval_Tools
#include <hxcpp/debug/jsonrpc/eval/Tools.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f5c8cd1fe4af8a1b_7_iter,"hxcpp.debug.jsonrpc.eval.Tools","iter",0x51009c96,"hxcpp.debug.jsonrpc.eval.Tools.iter","hxcpp/debug/jsonrpc/eval/Tools.hx",7,0x6239996c)
HX_LOCAL_STACK_FRAME(_hx_pos_f5c8cd1fe4af8a1b_88_map,"hxcpp.debug.jsonrpc.eval.Tools","map",0xea902cde,"hxcpp.debug.jsonrpc.eval.Tools.map","hxcpp/debug/jsonrpc/eval/Tools.hx",88,0x6239996c)
HX_LOCAL_STACK_FRAME(_hx_pos_f5c8cd1fe4af8a1b_125_expr,"hxcpp.debug.jsonrpc.eval.Tools","expr",0x4e5ed4b3,"hxcpp.debug.jsonrpc.eval.Tools.expr","hxcpp/debug/jsonrpc/eval/Tools.hx",125,0x6239996c)
HX_LOCAL_STACK_FRAME(_hx_pos_f5c8cd1fe4af8a1b_129_mk,"hxcpp.debug.jsonrpc.eval.Tools","mk",0x72b3bb5c,"hxcpp.debug.jsonrpc.eval.Tools.mk","hxcpp/debug/jsonrpc/eval/Tools.hx",129,0x6239996c)
namespace hxcpp{
namespace debug{
namespace jsonrpc{
namespace eval{

void Tools_obj::__construct() { }

Dynamic Tools_obj::__CreateEmpty() { return new Tools_obj; }

void *Tools_obj::_hx_vtable = 0;

Dynamic Tools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Tools_obj > _hx_result = new Tools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Tools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x39b6e50e;
}

void Tools_obj::iter( ::hxcpp::debug::jsonrpc::eval::Expr e, ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_f5c8cd1fe4af8a1b_7_iter)
            	HX_STACK_ARG(e,"e")
            	HX_STACK_ARG(f,"f")
HXLINE(   7)
HXDLIN(   7)		switch((int)(e->_hx_getIndex())){
            			case (int)0: {
HXLINE(   8)				 ::hxcpp::debug::jsonrpc::eval::Const _g = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Const >();
            			}
            			break;
            			case (int)1: {
HXLINE(   8)				::String _g = e->_hx_getString(0);
            			}
            			break;
            			case (int)2: {
HXLINE(   9)				::String _g = e->_hx_getString(0);
HXDLIN(   9)				 ::hxcpp::debug::jsonrpc::eval::CType _g1 = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::CType >();
HXDLIN(   9)				{
HXLINE(   9)					HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE(  10)					if (::hx::IsNotNull( e1 )) {
HXLINE(  11)						f(e1);
            					}
            				}
            			}
            			break;
            			case (int)3: {
HXLINE(  12)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE(  13)				f(e1);
            			}
            			break;
            			case (int)4: {
HXLINE(  14)				HX_VARI( ::Array< ::Dynamic>,el) = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE(  15)				{
HXLINE(  15)					int _g = 0;
HXDLIN(  15)					while((_g < el->length)){
HXLINE(  15)						HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e) = el->__get(_g).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  15)						_g = (_g + 1);
HXLINE(  16)						f(e);
            					}
            				}
            			}
            			break;
            			case (int)5: {
HXLINE(  17)				::String _g = e->_hx_getString(1);
HXDLIN(  17)				{
HXLINE(  17)					HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE(  18)					f(e1);
            				}
            			}
            			break;
            			case (int)6: {
HXLINE(  19)				::String _g = e->_hx_getString(0);
HXDLIN(  19)				{
HXLINE(  19)					HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  19)					HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e2) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  19)					{
HXLINE(  20)						f(e1);
HXLINE(  21)						f(e2);
            					}
            				}
            			}
            			break;
            			case (int)7: {
HXLINE(  22)				::String _g = e->_hx_getString(0);
HXDLIN(  22)				bool _g1 = e->_hx_getBool(1);
HXDLIN(  22)				{
HXLINE(  22)					HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE(  23)					f(e1);
            				}
            			}
            			break;
            			case (int)8: {
HXLINE(  24)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  24)				HX_VARI( ::Array< ::Dynamic>,args) = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  24)				{
HXLINE(  25)					f(e1);
HXLINE(  26)					{
HXLINE(  26)						int _g = 0;
HXDLIN(  26)						while((_g < args->length)){
HXLINE(  26)							HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,a) = args->__get(_g).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  26)							_g = (_g + 1);
HXLINE(  27)							f(a);
            						}
            					}
            				}
            			}
            			break;
            			case (int)9: {
HXLINE(  28)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,c) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  28)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  28)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e2) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  28)				{
HXLINE(  29)					f(c);
HXLINE(  30)					f(e1);
HXLINE(  31)					if (::hx::IsNotNull( e2 )) {
HXLINE(  32)						f(e2);
            					}
            				}
            			}
            			break;
            			case (int)10: {
HXLINE(  33)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,c) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  33)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  33)				{
HXLINE(  34)					f(c);
HXLINE(  35)					f(e1);
            				}
            			}
            			break;
            			case (int)11: {
HXLINE(  39)				::String _g = e->_hx_getString(0);
HXDLIN(  39)				{
HXLINE(  39)					HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,it) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  39)					HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  39)					{
HXLINE(  40)						f(it);
HXLINE(  41)						f(e1);
            					}
            				}
            			}
            			break;
            			case (int)12: case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE(  43)				::Array< ::Dynamic> _g = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  43)				::String _g1 = e->_hx_getString(2);
HXDLIN(  43)				 ::hxcpp::debug::jsonrpc::eval::CType _g2 = e->_hx_getObject(3).StaticCast<  ::hxcpp::debug::jsonrpc::eval::CType >();
HXDLIN(  43)				{
HXLINE(  43)					HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE(  44)					f(e1);
            				}
            			}
            			break;
            			case (int)15: {
HXLINE(  45)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE(  46)				if (::hx::IsNotNull( e1 )) {
HXLINE(  47)					f(e1);
            				}
            			}
            			break;
            			case (int)16: {
HXLINE(  48)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  48)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,i) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  48)				{
HXLINE(  49)					f(e1);
HXLINE(  50)					f(i);
            				}
            			}
            			break;
            			case (int)17: {
HXLINE(  51)				HX_VARI( ::Array< ::Dynamic>,el) = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE(  52)				{
HXLINE(  52)					int _g = 0;
HXDLIN(  52)					while((_g < el->length)){
HXLINE(  52)						HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e) = el->__get(_g).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  52)						_g = (_g + 1);
HXLINE(  53)						f(e);
            					}
            				}
            			}
            			break;
            			case (int)18: {
HXLINE(  54)				::String _g = e->_hx_getString(0);
HXDLIN(  54)				{
HXLINE(  54)					HX_VARI( ::Array< ::Dynamic>,el) = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXLINE(  55)					{
HXLINE(  55)						int _g1 = 0;
HXDLIN(  55)						while((_g1 < el->length)){
HXLINE(  55)							HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e) = el->__get(_g1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  55)							_g1 = (_g1 + 1);
HXLINE(  56)							f(e);
            						}
            					}
            				}
            			}
            			break;
            			case (int)19: {
HXLINE(  57)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE(  58)				f(e1);
            			}
            			break;
            			case (int)20: {
HXLINE(  59)				::String _g = e->_hx_getString(1);
HXDLIN(  59)				 ::hxcpp::debug::jsonrpc::eval::CType _g1 = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::CType >();
HXDLIN(  59)				{
HXLINE(  59)					HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  59)					HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,c) = e->_hx_getObject(3).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  59)					{
HXLINE(  60)						f(e1);
HXLINE(  61)						f(c);
            					}
            				}
            			}
            			break;
            			case (int)21: {
HXLINE(  62)				HX_VARI( ::Array< ::Dynamic>,fl) = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE(  63)				{
HXLINE(  63)					int _g = 0;
HXDLIN(  63)					while((_g < fl->length)){
HXLINE(  63)						HX_VARI(  ::Dynamic,fi) = fl->__get(_g);
HXDLIN(  63)						_g = (_g + 1);
HXLINE(  64)						f( ::Dynamic(fi->__Field(HX_("e",65,00,00,00),::hx::paccDynamic)));
            					}
            				}
            			}
            			break;
            			case (int)22: {
HXLINE(  65)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,c) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  65)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  65)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e2) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  65)				{
HXLINE(  66)					f(c);
HXLINE(  67)					f(e1);
HXLINE(  68)					f(e2);
            				}
            			}
            			break;
            			case (int)23: {
HXLINE(  69)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  69)				HX_VARI( ::Array< ::Dynamic>,cases) = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  69)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,def) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  69)				{
HXLINE(  70)					f(e1);
HXLINE(  71)					{
HXLINE(  71)						int _g = 0;
HXDLIN(  71)						while((_g < cases->length)){
HXLINE(  71)							HX_VARI(  ::Dynamic,c) = cases->__get(_g);
HXDLIN(  71)							_g = (_g + 1);
HXLINE(  72)							{
HXLINE(  72)								int _g1 = 0;
HXDLIN(  72)								::Array< ::Dynamic> _g2 = ( (::Array< ::Dynamic>)(c->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic)) );
HXDLIN(  72)								while((_g1 < _g2->length)){
HXLINE(  72)									HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,v) = _g2->__get(_g1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  72)									_g1 = (_g1 + 1);
HXLINE(  73)									f(v);
            								}
            							}
HXLINE(  74)							f( ::Dynamic(c->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic)));
            						}
            					}
HXLINE(  76)					if (::hx::IsNotNull( def )) {
HXLINE(  77)						f(def);
            					}
            				}
            			}
            			break;
            			case (int)24: {
HXLINE(  36)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,c) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  36)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  36)				{
HXLINE(  37)					f(c);
HXLINE(  38)					f(e1);
            				}
            			}
            			break;
            			case (int)25: {
HXLINE(  78)				HX_VARI( ::String,name) = e->_hx_getString(0);
HXDLIN(  78)				HX_VARI( ::Array< ::Dynamic>,args) = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  78)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  78)				{
HXLINE(  79)					if (::hx::IsNotNull( args )) {
HXLINE(  80)						int _g = 0;
HXDLIN(  80)						while((_g < args->length)){
HXLINE(  80)							HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,a) = args->__get(_g).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  80)							_g = (_g + 1);
HXLINE(  81)							f(a);
            						}
            					}
HXLINE(  82)					f(e1);
            				}
            			}
            			break;
            			case (int)26: {
HXLINE(  83)				 ::hxcpp::debug::jsonrpc::eval::CType _g = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::CType >();
HXDLIN(  83)				{
HXLINE(  83)					HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE(  84)					f(e1);
            				}
            			}
            			break;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,iter,(void))

 ::hxcpp::debug::jsonrpc::eval::Expr Tools_obj::map( ::hxcpp::debug::jsonrpc::eval::Expr e, ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_f5c8cd1fe4af8a1b_88_map)
            	HX_STACK_ARG(e,"e")
            	HX_STACK_ARG(f,"f")
HXLINE(  88)
HXLINE(  89)		HX_VAR(  ::hxcpp::debug::jsonrpc::eval::Expr,edef);
HXDLIN(  89)		switch((int)(e->_hx_getIndex())){
            			case (int)0: {
HXLINE(  90)				 ::hxcpp::debug::jsonrpc::eval::Const _g = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Const >();
HXLINE(  89)				edef = e;
            			}
            			break;
            			case (int)1: {
HXLINE(  90)				::String _g = e->_hx_getString(0);
HXLINE(  89)				edef = e;
            			}
            			break;
            			case (int)2: {
HXLINE(  91)				HX_VARI( ::String,n) = e->_hx_getString(0);
HXDLIN(  91)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::CType,t) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::CType >();
HXDLIN(  91)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  91)				 ::hxcpp::debug::jsonrpc::eval::Expr edef1;
HXDLIN(  91)				if (::hx::IsNotNull( e1 )) {
HXLINE(  91)					edef1 = f(e1);
            				}
            				else {
HXLINE(  91)					edef1 = null();
            				}
HXLINE(  89)				edef = ::hxcpp::debug::jsonrpc::eval::Expr_obj::EVar(n,t,edef1);
            			}
            			break;
            			case (int)3: {
HXLINE(  92)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE(  89)				edef = ::hxcpp::debug::jsonrpc::eval::Expr_obj::EParent(f(e1));
            			}
            			break;
            			case (int)4: {
HXLINE(  93)				HX_VARI( ::Array< ::Dynamic>,el) = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  93)				::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  93)				{
HXLINE(  93)					int _g1 = 0;
HXDLIN(  93)					while((_g1 < el->length)){
HXLINE(  93)						HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e) = el->__get(_g1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  93)						_g1 = (_g1 + 1);
HXDLIN(  93)						_g->push(f(e));
            					}
            				}
HXLINE(  89)				edef = ::hxcpp::debug::jsonrpc::eval::Expr_obj::EBlock(_g);
            			}
            			break;
            			case (int)5: {
HXLINE(  94)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  94)				HX_VARI( ::String,fi) = e->_hx_getString(1);
HXLINE(  89)				edef = ::hxcpp::debug::jsonrpc::eval::Expr_obj::EField(f(e1),fi);
            			}
            			break;
            			case (int)6: {
HXLINE(  95)				HX_VARI( ::String,op) = e->_hx_getString(0);
HXDLIN(  95)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  95)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e2) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  95)				 ::hxcpp::debug::jsonrpc::eval::Expr edef1 = f(e1);
HXLINE(  89)				edef = ::hxcpp::debug::jsonrpc::eval::Expr_obj::EBinop(op,edef1,f(e2));
            			}
            			break;
            			case (int)7: {
HXLINE(  96)				HX_VARI( ::String,op) = e->_hx_getString(0);
HXDLIN(  96)				HX_VARI( bool,pre) = e->_hx_getBool(1);
HXDLIN(  96)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE(  89)				edef = ::hxcpp::debug::jsonrpc::eval::Expr_obj::EUnop(op,pre,f(e1));
            			}
            			break;
            			case (int)8: {
HXLINE(  97)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  97)				HX_VARI( ::Array< ::Dynamic>,args) = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  97)				 ::hxcpp::debug::jsonrpc::eval::Expr edef1 = f(e1);
HXDLIN(  97)				::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  97)				{
HXLINE(  97)					int _g1 = 0;
HXDLIN(  97)					while((_g1 < args->length)){
HXLINE(  97)						HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,a) = args->__get(_g1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  97)						_g1 = (_g1 + 1);
HXDLIN(  97)						_g->push(f(a));
            					}
            				}
HXLINE(  89)				edef = ::hxcpp::debug::jsonrpc::eval::Expr_obj::ECall(edef1,_g);
            			}
            			break;
            			case (int)9: {
HXLINE(  98)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,c) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  98)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  98)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e2) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  98)				 ::hxcpp::debug::jsonrpc::eval::Expr edef1 = f(c);
HXDLIN(  98)				 ::hxcpp::debug::jsonrpc::eval::Expr edef2 = f(e1);
HXDLIN(  98)				 ::hxcpp::debug::jsonrpc::eval::Expr edef3;
HXDLIN(  98)				if (::hx::IsNotNull( e2 )) {
HXLINE(  98)					edef3 = f(e2);
            				}
            				else {
HXLINE(  98)					edef3 = null();
            				}
HXLINE(  89)				edef = ::hxcpp::debug::jsonrpc::eval::Expr_obj::EIf(edef1,edef2,edef3);
            			}
            			break;
            			case (int)10: {
HXLINE(  99)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,c) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  99)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN(  99)				 ::hxcpp::debug::jsonrpc::eval::Expr edef1 = f(c);
HXLINE(  89)				edef = ::hxcpp::debug::jsonrpc::eval::Expr_obj::EWhile(edef1,f(e1));
            			}
            			break;
            			case (int)11: {
HXLINE( 101)				HX_VARI( ::String,v) = e->_hx_getString(0);
HXDLIN( 101)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,it) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 101)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 101)				 ::hxcpp::debug::jsonrpc::eval::Expr edef1 = f(it);
HXLINE(  89)				edef = ::hxcpp::debug::jsonrpc::eval::Expr_obj::EFor(v,edef1,f(e1));
            			}
            			break;
            			case (int)12: case (int)13: {
HXLINE(  89)				edef = e;
            			}
            			break;
            			case (int)14: {
HXLINE( 102)				HX_VARI( ::Array< ::Dynamic>,args) = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 102)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 102)				HX_VARI( ::String,name) = e->_hx_getString(2);
HXDLIN( 102)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::CType,t) = e->_hx_getObject(3).StaticCast<  ::hxcpp::debug::jsonrpc::eval::CType >();
HXLINE(  89)				edef = ::hxcpp::debug::jsonrpc::eval::Expr_obj::EFunction(args,f(e1),name,t);
            			}
            			break;
            			case (int)15: {
HXLINE( 103)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 103)				 ::hxcpp::debug::jsonrpc::eval::Expr edef1;
HXDLIN( 103)				if (::hx::IsNotNull( e1 )) {
HXLINE( 103)					edef1 = f(e1);
            				}
            				else {
HXLINE( 103)					edef1 = null();
            				}
HXLINE(  89)				edef = ::hxcpp::debug::jsonrpc::eval::Expr_obj::EReturn(edef1);
            			}
            			break;
            			case (int)16: {
HXLINE( 104)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 104)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,i) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 104)				 ::hxcpp::debug::jsonrpc::eval::Expr edef1 = f(e1);
HXLINE(  89)				edef = ::hxcpp::debug::jsonrpc::eval::Expr_obj::EArray(edef1,f(i));
            			}
            			break;
            			case (int)17: {
HXLINE( 105)				HX_VARI( ::Array< ::Dynamic>,el) = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 105)				::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 105)				{
HXLINE( 105)					int _g1 = 0;
HXDLIN( 105)					while((_g1 < el->length)){
HXLINE( 105)						HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e) = el->__get(_g1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 105)						_g1 = (_g1 + 1);
HXDLIN( 105)						_g->push(f(e));
            					}
            				}
HXLINE(  89)				edef = ::hxcpp::debug::jsonrpc::eval::Expr_obj::EArrayDecl(_g);
            			}
            			break;
            			case (int)18: {
HXLINE( 106)				HX_VARI( ::String,cl) = e->_hx_getString(0);
HXDLIN( 106)				HX_VARI( ::Array< ::Dynamic>,el) = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 106)				::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 106)				{
HXLINE( 106)					int _g1 = 0;
HXDLIN( 106)					while((_g1 < el->length)){
HXLINE( 106)						HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e) = el->__get(_g1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 106)						_g1 = (_g1 + 1);
HXDLIN( 106)						_g->push(f(e));
            					}
            				}
HXLINE(  89)				edef = ::hxcpp::debug::jsonrpc::eval::Expr_obj::ENew(cl,_g);
            			}
            			break;
            			case (int)19: {
HXLINE( 107)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXLINE(  89)				edef = ::hxcpp::debug::jsonrpc::eval::Expr_obj::EThrow(f(e1));
            			}
            			break;
            			case (int)20: {
HXLINE( 108)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 108)				HX_VARI( ::String,v) = e->_hx_getString(1);
HXDLIN( 108)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::CType,t) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::CType >();
HXDLIN( 108)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,c) = e->_hx_getObject(3).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 108)				 ::hxcpp::debug::jsonrpc::eval::Expr edef1 = f(e1);
HXLINE(  89)				edef = ::hxcpp::debug::jsonrpc::eval::Expr_obj::ETry(edef1,v,t,f(c));
            			}
            			break;
            			case (int)21: {
HXLINE( 109)				HX_VARI( ::Array< ::Dynamic>,fl) = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 109)				::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 110)				{
HXLINE( 110)					int _g1 = 0;
HXDLIN( 110)					while((_g1 < fl->length)){
HXLINE( 110)						HX_VARI(  ::Dynamic,fi) = fl->__get(_g1);
HXDLIN( 110)						_g1 = (_g1 + 1);
HXLINE( 111)						::String fi1 = ( (::String)(fi->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
HXDLIN( 111)						_g->push( ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("e",65,00,00,00),f( ::Dynamic(fi->__Field(HX_("e",65,00,00,00),::hx::paccDynamic))))
            							->setFixed(1,HX_("name",4b,72,ff,48),fi1)));
            					}
            				}
HXLINE(  89)				edef = ::hxcpp::debug::jsonrpc::eval::Expr_obj::EObject(_g);
            			}
            			break;
            			case (int)22: {
HXLINE( 113)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,c) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 113)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 113)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e2) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 113)				 ::hxcpp::debug::jsonrpc::eval::Expr edef1 = f(c);
HXDLIN( 113)				 ::hxcpp::debug::jsonrpc::eval::Expr edef2 = f(e1);
HXLINE(  89)				edef = ::hxcpp::debug::jsonrpc::eval::Expr_obj::ETernary(edef1,edef2,f(e2));
            			}
            			break;
            			case (int)23: {
HXLINE( 114)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 114)				HX_VARI( ::Array< ::Dynamic>,cases) = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 114)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,def) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 114)				 ::hxcpp::debug::jsonrpc::eval::Expr edef1 = f(e1);
HXDLIN( 114)				::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 115)				{
HXLINE( 115)					int _g1 = 0;
HXDLIN( 115)					while((_g1 < cases->length)){
HXLINE( 115)						HX_VARI(  ::Dynamic,c) = cases->__get(_g1);
HXDLIN( 115)						_g1 = (_g1 + 1);
HXLINE( 116)						::Array< ::Dynamic> _g2 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 116)						{
HXLINE( 116)							int _g3 = 0;
HXDLIN( 116)							::Array< ::Dynamic> _g4 = ( (::Array< ::Dynamic>)(c->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic)) );
HXDLIN( 116)							while((_g3 < _g4->length)){
HXLINE( 116)								HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,v) = _g4->__get(_g3).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 116)								_g3 = (_g3 + 1);
HXDLIN( 116)								_g2->push(f(v));
            							}
            						}
HXDLIN( 116)						_g->push( ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("expr",35,fd,1d,43),f( ::Dynamic(c->__Field(HX_("expr",35,fd,1d,43),::hx::paccDynamic))))
            							->setFixed(1,HX_("values",e2,03,b7,4f),_g2)));
            					}
            				}
HXLINE( 117)				 ::hxcpp::debug::jsonrpc::eval::Expr edef2;
HXDLIN( 117)				if (::hx::IsNull( def )) {
HXLINE( 117)					edef2 = null();
            				}
            				else {
HXLINE( 117)					edef2 = f(def);
            				}
HXLINE(  89)				edef = ::hxcpp::debug::jsonrpc::eval::Expr_obj::ESwitch(edef1,_g,edef2);
            			}
            			break;
            			case (int)24: {
HXLINE( 100)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,c) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 100)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 100)				 ::hxcpp::debug::jsonrpc::eval::Expr edef1 = f(c);
HXLINE(  89)				edef = ::hxcpp::debug::jsonrpc::eval::Expr_obj::EDoWhile(edef1,f(e1));
            			}
            			break;
            			case (int)25: {
HXLINE( 118)				HX_VARI( ::String,name) = e->_hx_getString(0);
HXDLIN( 118)				HX_VARI( ::Array< ::Dynamic>,args) = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 118)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(2).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 118)				::Array< ::Dynamic> edef1;
HXDLIN( 118)				if (::hx::IsNull( args )) {
HXLINE( 118)					edef1 = null();
            				}
            				else {
HXLINE( 118)					::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 118)					{
HXLINE( 118)						int _g1 = 0;
HXDLIN( 118)						while((_g1 < args->length)){
HXLINE( 118)							HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,a) = args->__get(_g1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 118)							_g1 = (_g1 + 1);
HXDLIN( 118)							_g->push(f(a));
            						}
            					}
HXDLIN( 118)					edef1 = _g;
            				}
HXLINE(  89)				edef = ::hxcpp::debug::jsonrpc::eval::Expr_obj::EMeta(name,edef1,f(e1));
            			}
            			break;
            			case (int)26: {
HXLINE( 119)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::Expr,e1) = e->_hx_getObject(0).StaticCast<  ::hxcpp::debug::jsonrpc::eval::Expr >();
HXDLIN( 119)				HX_VARI(  ::hxcpp::debug::jsonrpc::eval::CType,t) = e->_hx_getObject(1).StaticCast<  ::hxcpp::debug::jsonrpc::eval::CType >();
HXLINE(  89)				edef = ::hxcpp::debug::jsonrpc::eval::Expr_obj::ECheckType(f(e1),t);
            			}
            			break;
            		}
HXLINE( 121)		return edef;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,map,return )

 ::hxcpp::debug::jsonrpc::eval::Expr Tools_obj::expr( ::hxcpp::debug::jsonrpc::eval::Expr e){
            	HX_STACKFRAME(&_hx_pos_f5c8cd1fe4af8a1b_125_expr)
            	HX_STACK_ARG(e,"e")
HXLINE( 125)
HXDLIN( 125)		return e;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,expr,return )

 ::hxcpp::debug::jsonrpc::eval::Expr Tools_obj::mk( ::hxcpp::debug::jsonrpc::eval::Expr e, ::hxcpp::debug::jsonrpc::eval::Expr p){
            	HX_STACKFRAME(&_hx_pos_f5c8cd1fe4af8a1b_129_mk)
            	HX_STACK_ARG(e,"e")
            	HX_STACK_ARG(p,"p")
HXLINE( 129)
HXDLIN( 129)		return e;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,mk,return )


Tools_obj::Tools_obj()
{
}

bool Tools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"mk") ) { outValue = mk_dyn(); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { outValue = map_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"iter") ) { outValue = iter_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"expr") ) { outValue = expr_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Tools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Tools_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Tools_obj::__mClass;

static ::String Tools_obj_sStaticFields[] = {
	HX_("iter",18,c5,bf,45),
	HX_("map",9c,0a,53,00),
	HX_("expr",35,fd,1d,43),
	HX_("mk",5e,5f,00,00),
	::String(null())
};

void Tools_obj::__register()
{
	Tools_obj _hx_dummy;
	Tools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxcpp.debug.jsonrpc.eval.Tools",b0,b9,fe,fc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Tools_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Tools_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Tools_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Tools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Tools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxcpp
} // end namespace debug
} // end namespace jsonrpc
} // end namespace eval
