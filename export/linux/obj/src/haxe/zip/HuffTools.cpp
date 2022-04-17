#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_zip_HuffTools
#include <haxe/zip/HuffTools.h>
#endif
#ifndef INCLUDED_haxe_zip_Huffman
#include <haxe/zip/Huffman.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5d42cb1a506472e6_32_new,"haxe.zip.HuffTools","new",0x5263948b,"haxe.zip.HuffTools.new","/usr/share/haxe/std/haxe/zip/Huffman.hx",32,0xeaeaefad)
HX_LOCAL_STACK_FRAME(_hx_pos_5d42cb1a506472e6_35_treeDepth,"haxe.zip.HuffTools","treeDepth",0x748ac930,"haxe.zip.HuffTools.treeDepth","/usr/share/haxe/std/haxe/zip/Huffman.hx",35,0xeaeaefad)
HX_LOCAL_STACK_FRAME(_hx_pos_5d42cb1a506472e6_45_treeCompress,"haxe.zip.HuffTools","treeCompress",0x66340995,"haxe.zip.HuffTools.treeCompress","/usr/share/haxe/std/haxe/zip/Huffman.hx",45,0xeaeaefad)
HX_LOCAL_STACK_FRAME(_hx_pos_5d42cb1a506472e6_63_treeWalk,"haxe.zip.HuffTools","treeWalk",0x2e5c697c,"haxe.zip.HuffTools.treeWalk","/usr/share/haxe/std/haxe/zip/Huffman.hx",63,0xeaeaefad)
HX_LOCAL_STACK_FRAME(_hx_pos_5d42cb1a506472e6_75_treeMake,"haxe.zip.HuffTools","treeMake",0x27c04661,"haxe.zip.HuffTools.treeMake","/usr/share/haxe/std/haxe/zip/Huffman.hx",75,0xeaeaefad)
HX_LOCAL_STACK_FRAME(_hx_pos_5d42cb1a506472e6_86_make,"haxe.zip.HuffTools","make",0xc4121b63,"haxe.zip.HuffTools.make","/usr/share/haxe/std/haxe/zip/Huffman.hx",86,0xeaeaefad)
namespace haxe{
namespace zip{

void HuffTools_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_5d42cb1a506472e6_32_new)
            	HX_STACK_THIS(this)
HXLINE(  32)
            	}

Dynamic HuffTools_obj::__CreateEmpty() { return new HuffTools_obj; }

void *HuffTools_obj::_hx_vtable = 0;

Dynamic HuffTools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HuffTools_obj > _hx_result = new HuffTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HuffTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x06b6a8ff;
}

int HuffTools_obj::treeDepth( ::haxe::zip::Huffman t){
            	HX_STACKFRAME(&_hx_pos_5d42cb1a506472e6_35_treeDepth)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(t,"t")
HXLINE(  35)
HXDLIN(  35)		switch((int)(t->_hx_getIndex())){
            			case (int)0: {
HXLINE(  36)				int _g = t->_hx_getInt(0);
HXDLIN(  36)				return 0;
            			}
            			break;
            			case (int)1: {
HXLINE(  38)				HX_VARI(  ::haxe::zip::Huffman,a) = t->_hx_getObject(0).StaticCast<  ::haxe::zip::Huffman >();
HXDLIN(  38)				HX_VARI(  ::haxe::zip::Huffman,b) = t->_hx_getObject(1).StaticCast<  ::haxe::zip::Huffman >();
HXLINE(  39)				HX_VARI( int,da) = this->treeDepth(a);
HXLINE(  40)				HX_VARI( int,db) = this->treeDepth(b);
HXLINE(  41)				int _hx_tmp;
HXDLIN(  41)				if ((da < db)) {
HXLINE(  41)					_hx_tmp = da;
            				}
            				else {
HXLINE(  41)					_hx_tmp = db;
            				}
HXDLIN(  41)				return (1 + _hx_tmp);
            			}
            			break;
            			case (int)2: {
HXLINE(  37)				int _g = t->_hx_getInt(0);
HXDLIN(  37)				::Array< ::Dynamic> _g1 = t->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  37)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            			}
            			break;
            		}
HXLINE(  35)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HuffTools_obj,treeDepth,return )

 ::haxe::zip::Huffman HuffTools_obj::treeCompress( ::haxe::zip::Huffman t){
            	HX_STACKFRAME(&_hx_pos_5d42cb1a506472e6_45_treeCompress)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(t,"t")
HXLINE(  45)
HXLINE(  46)		HX_VARI( int,d) = this->treeDepth(t);
HXLINE(  47)		if ((d == 0)) {
HXLINE(  48)			return t;
            		}
HXLINE(  49)		if ((d == 1)) {
HXLINE(  50)			if ((t->_hx_getIndex() == 1)) {
HXLINE(  51)				HX_VARI(  ::haxe::zip::Huffman,a) = t->_hx_getObject(0).StaticCast<  ::haxe::zip::Huffman >();
HXDLIN(  51)				HX_VARI(  ::haxe::zip::Huffman,b) = t->_hx_getObject(1).StaticCast<  ::haxe::zip::Huffman >();
HXDLIN(  51)				 ::haxe::zip::Huffman _hx_tmp = this->treeCompress(a);
HXDLIN(  51)				return ::haxe::zip::Huffman_obj::NeedBit(_hx_tmp,this->treeCompress(b));
            			}
            			else {
HXLINE(  52)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("assert",c6,46,03,4c)));
            			}
            		}
HXLINE(  54)		HX_VARI( int,size) = (1 << d);
HXLINE(  55)		HX_VARI( ::Array< ::Dynamic>,table) = ::Array_obj< ::Dynamic>::__new();
HXLINE(  56)		{
HXLINE(  56)			int _g = 0;
HXDLIN(  56)			int _g1 = size;
HXDLIN(  56)			while((_g < _g1)){
HXLINE(  56)				_g = (_g + 1);
HXDLIN(  56)				HX_VARI( int,i) = (_g - 1);
HXLINE(  57)				table->push(::haxe::zip::Huffman_obj::Found(-1));
            			}
            		}
HXLINE(  58)		this->treeWalk(table,0,0,d,t);
HXLINE(  59)		return ::haxe::zip::Huffman_obj::NeedBits(d,table);
            	}


HX_DEFINE_DYNAMIC_FUNC1(HuffTools_obj,treeCompress,return )

void HuffTools_obj::treeWalk(::Array< ::Dynamic> table,int p,int cd,int d, ::haxe::zip::Huffman t){
            	HX_STACKFRAME(&_hx_pos_5d42cb1a506472e6_63_treeWalk)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(table,"table")
            	HX_STACK_ARG(p,"p")
            	HX_STACK_ARG(cd,"cd")
            	HX_STACK_ARG(d,"d")
            	HX_STACK_ARG(t,"t")
HXLINE(  63)
HXDLIN(  63)		if ((t->_hx_getIndex() == 1)) {
HXLINE(  64)			HX_VARI(  ::haxe::zip::Huffman,a) = t->_hx_getObject(0).StaticCast<  ::haxe::zip::Huffman >();
HXDLIN(  64)			HX_VARI(  ::haxe::zip::Huffman,b) = t->_hx_getObject(1).StaticCast<  ::haxe::zip::Huffman >();
HXLINE(  65)			if ((d > 0)) {
HXLINE(  66)				this->treeWalk(table,p,(cd + 1),(d - 1),a);
HXLINE(  67)				this->treeWalk(table,(p | (1 << cd)),(cd + 1),(d - 1),b);
            			}
            			else {
HXLINE(  69)				table[p] = this->treeCompress(t);
            			}
            		}
            		else {
HXLINE(  71)			table[p] = this->treeCompress(t);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(HuffTools_obj,treeWalk,(void))

 ::haxe::zip::Huffman HuffTools_obj::treeMake( ::haxe::ds::IntMap bits,int maxbits,int v,int len){
            	HX_STACKFRAME(&_hx_pos_5d42cb1a506472e6_75_treeMake)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(bits,"bits")
            	HX_STACK_ARG(maxbits,"maxbits")
            	HX_STACK_ARG(v,"v")
            	HX_STACK_ARG(len,"len")
HXLINE(  75)
HXLINE(  76)		if ((len > maxbits)) {
HXLINE(  77)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid huffman",e4,e4,8f,a6)));
            		}
HXLINE(  78)		HX_VARI( int,idx) = ((v << 5) | len);
HXLINE(  79)		if (bits->exists(idx)) {
HXLINE(  80)			return ::haxe::zip::Huffman_obj::Found(bits->get(idx));
            		}
HXLINE(  81)		v = (v << 1);
HXLINE(  82)		len = (len + 1);
HXLINE(  83)		 ::haxe::zip::Huffman _hx_tmp = this->treeMake(bits,maxbits,v,len);
HXDLIN(  83)		return ::haxe::zip::Huffman_obj::NeedBit(_hx_tmp,this->treeMake(bits,maxbits,(v | 1),len));
            	}


HX_DEFINE_DYNAMIC_FUNC4(HuffTools_obj,treeMake,return )

 ::haxe::zip::Huffman HuffTools_obj::make(::Array< int > lengths,int pos,int nlengths,int maxbits){
            	HX_GC_STACKFRAME(&_hx_pos_5d42cb1a506472e6_86_make)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(lengths,"lengths")
            	HX_STACK_ARG(pos,"pos")
            	HX_STACK_ARG(nlengths,"nlengths")
            	HX_STACK_ARG(maxbits,"maxbits")
HXLINE(  86)
HXLINE(  87)		if ((nlengths == 1)) {
HXLINE(  88)			return ::haxe::zip::Huffman_obj::NeedBit(::haxe::zip::Huffman_obj::Found(0),::haxe::zip::Huffman_obj::Found(0));
            		}
HXLINE(  90)		HX_VARI( ::Array< int >,counts) = ::Array_obj< int >::__new();
HXLINE(  91)		HX_VARI( ::Array< int >,tmp) = ::Array_obj< int >::__new();
HXLINE(  92)		if ((maxbits > 32)) {
HXLINE(  93)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid huffman",e4,e4,8f,a6)));
            		}
HXLINE(  94)		{
HXLINE(  94)			int _g = 0;
HXDLIN(  94)			int _g1 = maxbits;
HXDLIN(  94)			while((_g < _g1)){
HXLINE(  94)				_g = (_g + 1);
HXDLIN(  94)				HX_VARI( int,i) = (_g - 1);
HXLINE(  95)				counts->push(0);
HXLINE(  96)				tmp->push(0);
            			}
            		}
HXLINE(  98)		{
HXLINE(  98)			int _g2 = 0;
HXDLIN(  98)			int _g3 = nlengths;
HXDLIN(  98)			while((_g2 < _g3)){
HXLINE(  98)				_g2 = (_g2 + 1);
HXDLIN(  98)				HX_VARI( int,i) = (_g2 - 1);
HXLINE(  99)				HX_VARI( int,p) = lengths->__get((i + pos));
HXLINE( 100)				if ((p >= maxbits)) {
HXLINE( 101)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid huffman",e4,e4,8f,a6)));
            				}
HXLINE( 102)				counts[p]++;
            			}
            		}
HXLINE( 104)		HX_VARI( int,code) = 0;
HXLINE( 105)		{
HXLINE( 105)			int _g4 = 1;
HXDLIN( 105)			int _g5 = (maxbits - 1);
HXDLIN( 105)			while((_g4 < _g5)){
HXLINE( 105)				_g4 = (_g4 + 1);
HXDLIN( 105)				HX_VARI( int,i) = (_g4 - 1);
HXLINE( 106)				code = ((code + counts->__get(i)) << 1);
HXLINE( 107)				tmp[i] = code;
            			}
            		}
HXLINE( 109)		HX_VARI(  ::haxe::ds::IntMap,bits) =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 110)		{
HXLINE( 110)			int _g6 = 0;
HXDLIN( 110)			int _g7 = nlengths;
HXDLIN( 110)			while((_g6 < _g7)){
HXLINE( 110)				_g6 = (_g6 + 1);
HXDLIN( 110)				HX_VARI( int,i) = (_g6 - 1);
HXLINE( 111)				HX_VARI( int,l) = lengths->__get((i + pos));
HXLINE( 112)				if ((l != 0)) {
HXLINE( 113)					HX_VARI( int,n) = tmp->__get((l - 1));
HXLINE( 114)					tmp[(l - 1)] = (n + 1);
HXLINE( 115)					bits->set(((n << 5) | l),i);
            				}
            			}
            		}
HXLINE( 118)		 ::haxe::zip::Huffman _hx_tmp = this->treeMake(bits,maxbits,0,1);
HXDLIN( 118)		return this->treeCompress(::haxe::zip::Huffman_obj::NeedBit(_hx_tmp,this->treeMake(bits,maxbits,1,1)));
            	}


HX_DEFINE_DYNAMIC_FUNC4(HuffTools_obj,make,return )


::hx::ObjectPtr< HuffTools_obj > HuffTools_obj::__new() {
	::hx::ObjectPtr< HuffTools_obj > __this = new HuffTools_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< HuffTools_obj > HuffTools_obj::__alloc(::hx::Ctx *_hx_ctx) {
	HuffTools_obj *__this = (HuffTools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HuffTools_obj), false, "haxe.zip.HuffTools"));
	*(void **)__this = HuffTools_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HuffTools_obj::HuffTools_obj()
{
}

::hx::Val HuffTools_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return ::hx::Val( make_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"treeWalk") ) { return ::hx::Val( treeWalk_dyn() ); }
		if (HX_FIELD_EQ(inName,"treeMake") ) { return ::hx::Val( treeMake_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"treeDepth") ) { return ::hx::Val( treeDepth_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"treeCompress") ) { return ::hx::Val( treeCompress_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *HuffTools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *HuffTools_obj_sStaticStorageInfo = 0;
#endif

static ::String HuffTools_obj_sMemberFields[] = {
	HX_("treeDepth",c5,12,35,42),
	HX_("treeCompress",20,2b,da,a1),
	HX_("treeWalk",87,29,ba,32),
	HX_("treeMake",6c,06,1e,2c),
	HX_("make",ee,39,56,48),
	::String(null()) };

::hx::Class HuffTools_obj::__mClass;

void HuffTools_obj::__register()
{
	HuffTools_obj _hx_dummy;
	HuffTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.zip.HuffTools",19,f3,2d,d5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HuffTools_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HuffTools_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HuffTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HuffTools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace zip
