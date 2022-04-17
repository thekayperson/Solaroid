#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_haxe_NativeStackTrace
#include <haxe/NativeStackTrace.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_haxe__CallStack_CallStack_Impl_
#include <haxe/_CallStack/CallStack_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3b20f2b68eaa0619_52_callStack,"haxe._CallStack.CallStack_Impl_","callStack",0x30d63cab,"haxe._CallStack.CallStack_Impl_.callStack","/usr/share/haxe/std/haxe/CallStack.hx",52,0xe5f54202)
HX_LOCAL_STACK_FRAME(_hx_pos_3b20f2b68eaa0619_63_exceptionStack,"haxe._CallStack.CallStack_Impl_","exceptionStack",0x933cbdf8,"haxe._CallStack.CallStack_Impl_.exceptionStack","/usr/share/haxe/std/haxe/CallStack.hx",63,0xe5f54202)
HX_LOCAL_STACK_FRAME(_hx_pos_3b20f2b68eaa0619_71_toString,"haxe._CallStack.CallStack_Impl_","toString",0xaff80ceb,"haxe._CallStack.CallStack_Impl_.toString","/usr/share/haxe/std/haxe/CallStack.hx",71,0xe5f54202)
static const ::String _hx_array_data_baffa80f_4[] = {
	HX_("\nCalled from ",bd,26,6b,81),
};
HX_LOCAL_STACK_FRAME(_hx_pos_3b20f2b68eaa0619_84_subtract,"haxe._CallStack.CallStack_Impl_","subtract",0x6f9ab153,"haxe._CallStack.CallStack_Impl_.subtract","/usr/share/haxe/std/haxe/CallStack.hx",84,0xe5f54202)
HX_LOCAL_STACK_FRAME(_hx_pos_3b20f2b68eaa0619_120_equalItems,"haxe._CallStack.CallStack_Impl_","equalItems",0xbce5e9ab,"haxe._CallStack.CallStack_Impl_.equalItems","/usr/share/haxe/std/haxe/CallStack.hx",120,0xe5f54202)
HX_LOCAL_STACK_FRAME(_hx_pos_3b20f2b68eaa0619_156_itemToString,"haxe._CallStack.CallStack_Impl_","itemToString",0xddade49e,"haxe._CallStack.CallStack_Impl_.itemToString","/usr/share/haxe/std/haxe/CallStack.hx",156,0xe5f54202)
static const ::String _hx_array_data_baffa80f_10[] = {
	HX_("a C function",f4,1b,53,cb),
};
static const ::String _hx_array_data_baffa80f_11[] = {
	HX_("module ",f4,e1,fa,f7),
};
static const ::String _hx_array_data_baffa80f_12[] = {
	HX_(" (",08,1c,00,00),
};
static const ::String _hx_array_data_baffa80f_13[] = {
	HX_(" line ",8c,69,6d,40),
};
static const ::String _hx_array_data_baffa80f_14[] = {
	HX_(" column ",6a,f0,a7,19),
};
static const ::String _hx_array_data_baffa80f_15[] = {
	HX_(")",29,00,00,00),
};
static const ::String _hx_array_data_baffa80f_16[] = {
	HX_(".",2e,00,00,00),
};
static const ::String _hx_array_data_baffa80f_17[] = {
	HX_("local function #",b0,cd,97,ff),
};
namespace haxe{
namespace _CallStack{

void CallStack_Impl__obj::__construct() { }

Dynamic CallStack_Impl__obj::__CreateEmpty() { return new CallStack_Impl__obj; }

void *CallStack_Impl__obj::_hx_vtable = 0;

Dynamic CallStack_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CallStack_Impl__obj > _hx_result = new CallStack_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CallStack_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x29a173d9;
}

::Array< ::Dynamic> CallStack_Impl__obj::callStack(){
            	HX_STACKFRAME(&_hx_pos_3b20f2b68eaa0619_52_callStack)
HXLINE(  52)
HXDLIN(  52)		return ::haxe::NativeStackTrace_obj::toHaxe(::haxe::NativeStackTrace_obj::callStack(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CallStack_Impl__obj,callStack,return )

::Array< ::Dynamic> CallStack_Impl__obj::exceptionStack(::hx::Null< bool >  __o_fullStack){
            		bool fullStack = __o_fullStack.Default(false);
            	HX_STACKFRAME(&_hx_pos_3b20f2b68eaa0619_63_exceptionStack)
            	HX_STACK_ARG(fullStack,"fullStack")
HXLINE(  63)
HXLINE(  64)		HX_VARI( ::Array< ::Dynamic>,eStack) = ::haxe::NativeStackTrace_obj::toHaxe(::haxe::NativeStackTrace_obj::exceptionStack(),null());
HXLINE(  65)		::Array< ::Dynamic> this1;
HXDLIN(  65)		if (fullStack) {
HXLINE(  65)			this1 = eStack;
            		}
            		else {
HXLINE(  65)			this1 = ::haxe::_CallStack::CallStack_Impl__obj::subtract(eStack,::haxe::_CallStack::CallStack_Impl__obj::callStack());
            		}
HXDLIN(  65)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CallStack_Impl__obj,exceptionStack,return )

::String CallStack_Impl__obj::toString(::Array< ::Dynamic> stack){
            	HX_GC_STACKFRAME(&_hx_pos_3b20f2b68eaa0619_71_toString)
            	HX_STACK_ARG(stack,"stack")
HXLINE(  71)
HXLINE(  72)		HX_VARI(  ::StringBuf,b) =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE(  73)		{
HXLINE(  73)			int _g = 0;
HXDLIN(  73)			::Array< ::Dynamic> _g1 = stack;
HXDLIN(  73)			while((_g < _g1->length)){
HXLINE(  73)				HX_VARI(  ::haxe::StackItem,s) = _g1->__get(_g).StaticCast<  ::haxe::StackItem >();
HXDLIN(  73)				_g = (_g + 1);
HXLINE(  74)				{
HXLINE(  74)					if (::hx::IsNotNull( b->charBuf )) {
HXLINE(  74)						b->flush();
            					}
HXDLIN(  74)					if (::hx::IsNull( b->b )) {
HXLINE(  74)						b->b = ::Array_obj< ::String >::fromData( _hx_array_data_baffa80f_4,1);
            					}
            					else {
HXLINE(  74)						b->b->push(HX_("\nCalled from ",bd,26,6b,81));
            					}
            				}
HXLINE(  75)				::haxe::_CallStack::CallStack_Impl__obj::itemToString(b,s);
            			}
            		}
HXLINE(  77)		return b->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CallStack_Impl__obj,toString,return )

::Array< ::Dynamic> CallStack_Impl__obj::subtract(::Array< ::Dynamic> this1,::Array< ::Dynamic> stack){
            	HX_STACKFRAME(&_hx_pos_3b20f2b68eaa0619_84_subtract)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(stack,"stack")
HXLINE(  84)
HXLINE(  85)		HX_VARI( int,startIndex) = -1;
HXLINE(  86)		HX_VARI( int,i) = -1;
HXLINE(  87)		while(true){
HXLINE(  87)			i = (i + 1);
HXDLIN(  87)			if (!((i < this1->length))) {
HXLINE(  87)				goto _hx_goto_5;
            			}
HXLINE(  88)			{
HXLINE(  88)				int _g = 0;
HXDLIN(  88)				int _g1 = stack->length;
HXDLIN(  88)				while((_g < _g1)){
HXLINE(  88)					_g = (_g + 1);
HXDLIN(  88)					HX_VARI( int,j) = (_g - 1);
HXLINE(  89)					if (::haxe::_CallStack::CallStack_Impl__obj::equalItems(this1->__get(i).StaticCast<  ::haxe::StackItem >(),stack->__get(j).StaticCast<  ::haxe::StackItem >())) {
HXLINE(  90)						if ((startIndex < 0)) {
HXLINE(  91)							startIndex = i;
            						}
HXLINE(  93)						i = (i + 1);
HXLINE(  94)						if ((i >= this1->length)) {
HXLINE(  94)							goto _hx_goto_6;
            						}
            					}
            					else {
HXLINE(  96)						startIndex = -1;
            					}
            				}
            				_hx_goto_6:;
            			}
HXLINE(  99)			if ((startIndex >= 0)) {
HXLINE(  99)				goto _hx_goto_5;
            			}
            		}
            		_hx_goto_5:;
HXLINE( 101)		if ((startIndex >= 0)) {
HXLINE( 101)			return this1->slice(0,startIndex);
            		}
            		else {
HXLINE( 101)			return this1;
            		}
HXDLIN( 101)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CallStack_Impl__obj,subtract,return )

bool CallStack_Impl__obj::equalItems( ::haxe::StackItem item1, ::haxe::StackItem item2){
            	HX_STACKFRAME(&_hx_pos_3b20f2b68eaa0619_120_equalItems)
            	HX_STACK_ARG(item1,"item1")
            	HX_STACK_ARG(item2,"item2")
HXLINE( 120)
HXDLIN( 120)		if (::hx::IsNull( item1 )) {
HXLINE( 121)			if (::hx::IsNull( item2 )) {
HXLINE( 121)				return true;
            			}
            			else {
HXLINE( 131)				return false;
            			}
            		}
            		else {
HXDLIN( 120)			switch((int)(item1->_hx_getIndex())){
            				case (int)0: {
HXDLIN( 120)					if (::hx::IsNull( item2 )) {
HXLINE( 131)						return false;
            					}
            					else {
HXDLIN( 120)						if ((item2->_hx_getIndex() == 0)) {
HXLINE( 122)							return true;
            						}
            						else {
HXLINE( 131)							return false;
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXDLIN( 120)					if (::hx::IsNull( item2 )) {
HXLINE( 131)						return false;
            					}
            					else {
HXDLIN( 120)						if ((item2->_hx_getIndex() == 1)) {
HXLINE( 123)							HX_VARI( ::String,m2) = item2->_hx_getString(0);
HXDLIN( 123)							HX_VARI( ::String,m1) = item1->_hx_getString(0);
HXLINE( 124)							return (m1 == m2);
            						}
            						else {
HXLINE( 131)							return false;
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXDLIN( 120)					if (::hx::IsNull( item2 )) {
HXLINE( 131)						return false;
            					}
            					else {
HXDLIN( 120)						if ((item2->_hx_getIndex() == 2)) {
HXLINE( 125)							HX_VARI(  ::haxe::StackItem,item21) = item2->_hx_getObject(0).StaticCast<  ::haxe::StackItem >();
HXDLIN( 125)							HX_VARI( ::String,file2) = item2->_hx_getString(1);
HXDLIN( 125)							HX_VARI( int,line2) = item2->_hx_getInt(2);
HXDLIN( 125)							HX_VARI(  ::Dynamic,col2) = item2->_hx_getObject(3);
HXDLIN( 125)							HX_VARI(  ::Dynamic,col1) = item1->_hx_getObject(3);
HXDLIN( 125)							HX_VARI( int,line1) = item1->_hx_getInt(2);
HXDLIN( 125)							HX_VARI( ::String,file1) = item1->_hx_getString(1);
HXDLIN( 125)							HX_VARI(  ::haxe::StackItem,item11) = item1->_hx_getObject(0).StaticCast<  ::haxe::StackItem >();
HXLINE( 126)							bool _hx_tmp;
HXDLIN( 126)							bool _hx_tmp1;
HXDLIN( 126)							if ((file1 == file2)) {
HXLINE( 126)								_hx_tmp1 = (line1 == line2);
            							}
            							else {
HXLINE( 126)								_hx_tmp1 = false;
            							}
HXDLIN( 126)							if (_hx_tmp1) {
HXLINE( 126)								_hx_tmp = ::hx::IsEq( col1,col2 );
            							}
            							else {
HXLINE( 126)								_hx_tmp = false;
            							}
HXDLIN( 126)							if (_hx_tmp) {
HXLINE( 126)								return ::haxe::_CallStack::CallStack_Impl__obj::equalItems(item11,item21);
            							}
            							else {
HXLINE( 126)								return false;
            							}
            						}
            						else {
HXLINE( 131)							return false;
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXDLIN( 120)					if (::hx::IsNull( item2 )) {
HXLINE( 131)						return false;
            					}
            					else {
HXDLIN( 120)						if ((item2->_hx_getIndex() == 3)) {
HXLINE( 127)							HX_VARI( ::String,class2) = item2->_hx_getString(0);
HXDLIN( 127)							HX_VARI( ::String,method2) = item2->_hx_getString(1);
HXDLIN( 127)							HX_VARI( ::String,method1) = item1->_hx_getString(1);
HXDLIN( 127)							HX_VARI( ::String,class1) = item1->_hx_getString(0);
HXLINE( 128)							if ((class1 == class2)) {
HXLINE( 128)								return (method1 == method2);
            							}
            							else {
HXLINE( 128)								return false;
            							}
            						}
            						else {
HXLINE( 131)							return false;
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXDLIN( 120)					if (::hx::IsNull( item2 )) {
HXLINE( 131)						return false;
            					}
            					else {
HXDLIN( 120)						if ((item2->_hx_getIndex() == 4)) {
HXLINE( 129)							HX_VARI(  ::Dynamic,v2) = item2->_hx_getObject(0);
HXDLIN( 129)							HX_VARI(  ::Dynamic,v1) = item1->_hx_getObject(0);
HXLINE( 130)							return ::hx::IsEq( v1,v2 );
            						}
            						else {
HXLINE( 131)							return false;
            						}
            					}
            				}
            				break;
            			}
            		}
HXLINE( 120)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CallStack_Impl__obj,equalItems,return )

void CallStack_Impl__obj::itemToString( ::StringBuf b, ::haxe::StackItem s){
            	HX_STACKFRAME(&_hx_pos_3b20f2b68eaa0619_156_itemToString)
            	HX_STACK_ARG(b,"b")
            	HX_STACK_ARG(s,"s")
HXLINE( 156)
HXDLIN( 156)		switch((int)(s->_hx_getIndex())){
            			case (int)0: {
HXLINE( 158)				if (::hx::IsNotNull( b->charBuf )) {
HXLINE( 158)					b->flush();
            				}
HXDLIN( 158)				if (::hx::IsNull( b->b )) {
HXLINE( 158)					b->b = ::Array_obj< ::String >::fromData( _hx_array_data_baffa80f_10,1);
            				}
            				else {
HXLINE( 158)					b->b->push(HX_("a C function",f4,1b,53,cb));
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 159)				HX_VARI( ::String,m) = s->_hx_getString(0);
HXDLIN( 159)				{
HXLINE( 160)					{
HXLINE( 160)						if (::hx::IsNotNull( b->charBuf )) {
HXLINE( 160)							b->flush();
            						}
HXDLIN( 160)						if (::hx::IsNull( b->b )) {
HXLINE( 160)							b->b = ::Array_obj< ::String >::fromData( _hx_array_data_baffa80f_11,1);
            						}
            						else {
HXLINE( 160)							b->b->push(HX_("module ",f4,e1,fa,f7));
            						}
            					}
HXLINE( 161)					{
HXLINE( 161)						if (::hx::IsNotNull( b->charBuf )) {
HXLINE( 161)							b->flush();
            						}
HXDLIN( 161)						if (::hx::IsNull( b->b )) {
HXLINE( 161)							b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(m));
            						}
            						else {
HXLINE( 161)							::Array< ::String > b1 = b->b;
HXDLIN( 161)							b1->push(::Std_obj::string(m));
            						}
            					}
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 162)				HX_VARI(  ::haxe::StackItem,s1) = s->_hx_getObject(0).StaticCast<  ::haxe::StackItem >();
HXDLIN( 162)				HX_VARI( ::String,file) = s->_hx_getString(1);
HXDLIN( 162)				HX_VARI( int,line) = s->_hx_getInt(2);
HXDLIN( 162)				HX_VARI(  ::Dynamic,col) = s->_hx_getObject(3);
HXDLIN( 162)				{
HXLINE( 163)					if (::hx::IsNotNull( s1 )) {
HXLINE( 164)						::haxe::_CallStack::CallStack_Impl__obj::itemToString(b,s1);
HXLINE( 165)						{
HXLINE( 165)							if (::hx::IsNotNull( b->charBuf )) {
HXLINE( 165)								b->flush();
            							}
HXDLIN( 165)							if (::hx::IsNull( b->b )) {
HXLINE( 165)								b->b = ::Array_obj< ::String >::fromData( _hx_array_data_baffa80f_12,1);
            							}
            							else {
HXLINE( 165)								b->b->push(HX_(" (",08,1c,00,00));
            							}
            						}
            					}
HXLINE( 167)					{
HXLINE( 167)						if (::hx::IsNotNull( b->charBuf )) {
HXLINE( 167)							b->flush();
            						}
HXDLIN( 167)						if (::hx::IsNull( b->b )) {
HXLINE( 167)							b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(file));
            						}
            						else {
HXLINE( 167)							::Array< ::String > b1 = b->b;
HXDLIN( 167)							b1->push(::Std_obj::string(file));
            						}
            					}
HXLINE( 168)					{
HXLINE( 168)						if (::hx::IsNotNull( b->charBuf )) {
HXLINE( 168)							b->flush();
            						}
HXDLIN( 168)						if (::hx::IsNull( b->b )) {
HXLINE( 168)							b->b = ::Array_obj< ::String >::fromData( _hx_array_data_baffa80f_13,1);
            						}
            						else {
HXLINE( 168)							b->b->push(HX_(" line ",8c,69,6d,40));
            						}
            					}
HXLINE( 169)					{
HXLINE( 169)						if (::hx::IsNotNull( b->charBuf )) {
HXLINE( 169)							b->flush();
            						}
HXDLIN( 169)						if (::hx::IsNull( b->b )) {
HXLINE( 169)							b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(line));
            						}
            						else {
HXLINE( 169)							::Array< ::String > b1 = b->b;
HXDLIN( 169)							b1->push(::Std_obj::string(line));
            						}
            					}
HXLINE( 170)					if (::hx::IsNotNull( col )) {
HXLINE( 171)						{
HXLINE( 171)							if (::hx::IsNotNull( b->charBuf )) {
HXLINE( 171)								b->flush();
            							}
HXDLIN( 171)							if (::hx::IsNull( b->b )) {
HXLINE( 171)								b->b = ::Array_obj< ::String >::fromData( _hx_array_data_baffa80f_14,1);
            							}
            							else {
HXLINE( 171)								b->b->push(HX_(" column ",6a,f0,a7,19));
            							}
            						}
HXLINE( 172)						{
HXLINE( 172)							if (::hx::IsNotNull( b->charBuf )) {
HXLINE( 172)								b->flush();
            							}
HXDLIN( 172)							if (::hx::IsNull( b->b )) {
HXLINE( 172)								b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(col));
            							}
            							else {
HXLINE( 172)								::Array< ::String > b1 = b->b;
HXDLIN( 172)								b1->push(::Std_obj::string(col));
            							}
            						}
            					}
HXLINE( 174)					if (::hx::IsNotNull( s1 )) {
HXLINE( 175)						if (::hx::IsNotNull( b->charBuf )) {
HXLINE( 175)							b->flush();
            						}
HXDLIN( 175)						if (::hx::IsNull( b->b )) {
HXLINE( 175)							b->b = ::Array_obj< ::String >::fromData( _hx_array_data_baffa80f_15,1);
            						}
            						else {
HXLINE( 175)							b->b->push(HX_(")",29,00,00,00));
            						}
            					}
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 176)				HX_VARI( ::String,cname) = s->_hx_getString(0);
HXDLIN( 176)				HX_VARI( ::String,meth) = s->_hx_getString(1);
HXDLIN( 176)				{
HXLINE( 177)					{
HXLINE( 177)						::String x;
HXDLIN( 177)						if (::hx::IsNull( cname )) {
HXLINE( 177)							x = HX_("<unknown>",b0,91,d8,da);
            						}
            						else {
HXLINE( 177)							x = cname;
            						}
HXDLIN( 177)						if (::hx::IsNotNull( b->charBuf )) {
HXLINE( 177)							b->flush();
            						}
HXDLIN( 177)						if (::hx::IsNull( b->b )) {
HXLINE( 177)							b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE( 177)							::Array< ::String > b1 = b->b;
HXDLIN( 177)							b1->push(::Std_obj::string(x));
            						}
            					}
HXLINE( 178)					{
HXLINE( 178)						if (::hx::IsNotNull( b->charBuf )) {
HXLINE( 178)							b->flush();
            						}
HXDLIN( 178)						if (::hx::IsNull( b->b )) {
HXLINE( 178)							b->b = ::Array_obj< ::String >::fromData( _hx_array_data_baffa80f_16,1);
            						}
            						else {
HXLINE( 178)							b->b->push(HX_(".",2e,00,00,00));
            						}
            					}
HXLINE( 179)					{
HXLINE( 179)						if (::hx::IsNotNull( b->charBuf )) {
HXLINE( 179)							b->flush();
            						}
HXDLIN( 179)						if (::hx::IsNull( b->b )) {
HXLINE( 179)							b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(meth));
            						}
            						else {
HXLINE( 179)							::Array< ::String > b1 = b->b;
HXDLIN( 179)							b1->push(::Std_obj::string(meth));
            						}
            					}
            				}
            			}
            			break;
            			case (int)4: {
HXLINE( 180)				HX_VARI(  ::Dynamic,n) = s->_hx_getObject(0);
HXDLIN( 180)				{
HXLINE( 181)					{
HXLINE( 181)						if (::hx::IsNotNull( b->charBuf )) {
HXLINE( 181)							b->flush();
            						}
HXDLIN( 181)						if (::hx::IsNull( b->b )) {
HXLINE( 181)							b->b = ::Array_obj< ::String >::fromData( _hx_array_data_baffa80f_17,1);
            						}
            						else {
HXLINE( 181)							b->b->push(HX_("local function #",b0,cd,97,ff));
            						}
            					}
HXLINE( 182)					{
HXLINE( 182)						if (::hx::IsNotNull( b->charBuf )) {
HXLINE( 182)							b->flush();
            						}
HXDLIN( 182)						if (::hx::IsNull( b->b )) {
HXLINE( 182)							b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(n));
            						}
            						else {
HXLINE( 182)							::Array< ::String > b1 = b->b;
HXDLIN( 182)							b1->push(::Std_obj::string(n));
            						}
            					}
            				}
            			}
            			break;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CallStack_Impl__obj,itemToString,(void))


CallStack_Impl__obj::CallStack_Impl__obj()
{
}

bool CallStack_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"subtract") ) { outValue = subtract_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"callStack") ) { outValue = callStack_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"equalItems") ) { outValue = equalItems_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"itemToString") ) { outValue = itemToString_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"exceptionStack") ) { outValue = exceptionStack_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CallStack_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CallStack_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class CallStack_Impl__obj::__mClass;

static ::String CallStack_Impl__obj_sStaticFields[] = {
	HX_("callStack",ca,c1,4a,10),
	HX_("exceptionStack",79,48,56,0b),
	HX_("toString",ac,d0,6e,38),
	HX_("subtract",14,75,11,f8),
	HX_("equalItems",ac,df,65,63),
	HX_("itemToString",df,1c,98,1c),
	::String(null())
};

void CallStack_Impl__obj::__register()
{
	CallStack_Impl__obj _hx_dummy;
	CallStack_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe._CallStack.CallStack_Impl_",0f,a8,ff,ba);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CallStack_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CallStack_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CallStack_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CallStack_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CallStack_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace _CallStack
