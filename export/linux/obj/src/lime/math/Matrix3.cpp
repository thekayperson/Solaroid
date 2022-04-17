#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_math_Vector4
#include <lime/math/Vector4.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_21e31708d26ee405_68_new,"lime.math.Matrix3","new",0xb5a52a77,"lime.math.Matrix3.new","lime/math/Matrix3.hx",68,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_83_clone,"lime.math.Matrix3","clone",0xf8506134,"lime.math.Matrix3.clone","lime/math/Matrix3.hx",83,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_93_concat,"lime.math.Matrix3","concat",0x0786d75d,"lime.math.Matrix3.concat","lime/math/Matrix3.hx",93,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_116_copyColumnFrom,"lime.math.Matrix3","copyColumnFrom",0x89c156be,"lime.math.Matrix3.copyColumnFrom","lime/math/Matrix3.hx",116,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_145_copyColumnTo,"lime.math.Matrix3","copyColumnTo",0x045a59cf,"lime.math.Matrix3.copyColumnTo","lime/math/Matrix3.hx",145,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_175_copyFrom,"lime.math.Matrix3","copyFrom",0x7e1ebe48,"lime.math.Matrix3.copyFrom","lime/math/Matrix3.hx",175,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_192_copyRowFrom,"lime.math.Matrix3","copyRowFrom",0xb0770e86,"lime.math.Matrix3.copyRowFrom","lime/math/Matrix3.hx",192,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_218_copyRowTo,"lime.math.Matrix3","copyRowTo",0xc3a10f97,"lime.math.Matrix3.copyRowTo","lime/math/Matrix3.hx",218,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_252_createBox,"lime.math.Matrix3","createBox",0x9a1719c6,"lime.math.Matrix3.createBox","lime/math/Matrix3.hx",252,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_285_createGradientBox,"lime.math.Matrix3","createGradientBox",0xff9720b6,"lime.math.Matrix3.createGradientBox","lime/math/Matrix3.hx",285,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_316_equals,"lime.math.Matrix3","equals",0xffa9bc88,"lime.math.Matrix3.equals","lime/math/Matrix3.hx",316,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_326_deltaTransformVector,"lime.math.Matrix3","deltaTransformVector",0xcb1fde40,"lime.math.Matrix3.deltaTransformVector","lime/math/Matrix3.hx",326,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_337_identity,"lime.math.Matrix3","identity",0x6eecf7c7,"lime.math.Matrix3.identity","lime/math/Matrix3.hx",337,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_351_invert,"lime.math.Matrix3","invert",0xdf8fb55f,"lime.math.Matrix3.invert","lime/math/Matrix3.hx",351,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_388_rotate,"lime.math.Matrix3","rotate",0x0ad714a4,"lime.math.Matrix3.rotate","lime/math/Matrix3.hx",388,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_425_scale,"lime.math.Matrix3","scale",0x28bc1c61,"lime.math.Matrix3.scale","lime/math/Matrix3.hx",425,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_444_setRotation,"lime.math.Matrix3","setRotation",0xf9d2d017,"lime.math.Matrix3.setRotation","lime/math/Matrix3.hx",444,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_461_setTo,"lime.math.Matrix3","setTo",0x2a1cdf94,"lime.math.Matrix3.setTo","lime/math/Matrix3.hx",461,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_480_to3DString,"lime.math.Matrix3","to3DString",0x3565e3a6,"lime.math.Matrix3.to3DString","lime/math/Matrix3.hx",480,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_506_toString,"lime.math.Matrix3","toString",0xee2c8335,"lime.math.Matrix3.toString","lime/math/Matrix3.hx",506,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_518_transformRect,"lime.math.Matrix3","transformRect",0x23364987,"lime.math.Matrix3.transformRect","lime/math/Matrix3.hx",518,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_560_transformVector,"lime.math.Matrix3","transformVector",0xadeecbe6,"lime.math.Matrix3.transformVector","lime/math/Matrix3.hx",560,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_573_translate,"lime.math.Matrix3","translate",0x99be5ca5,"lime.math.Matrix3.translate","lime/math/Matrix3.hx",573,0xeabca539)
HX_LOCAL_STACK_FRAME(_hx_pos_21e31708d26ee405_56_boot,"lime.math.Matrix3","boot",0x32f8fe3b,"lime.math.Matrix3.boot","lime/math/Matrix3.hx",56,0xeabca539)
namespace lime{
namespace math{

void Matrix3_obj::__construct(::hx::Null< Float >  __o_a,::hx::Null< Float >  __o_b,::hx::Null< Float >  __o_c,::hx::Null< Float >  __o_d,::hx::Null< Float >  __o_tx,::hx::Null< Float >  __o_ty){
            		Float a = __o_a.Default(1);
            		Float b = __o_b.Default(0);
            		Float c = __o_c.Default(0);
            		Float d = __o_d.Default(1);
            		Float tx = __o_tx.Default(0);
            		Float ty = __o_ty.Default(0);
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_68_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
            	HX_STACK_ARG(c,"c")
            	HX_STACK_ARG(d,"d")
            	HX_STACK_ARG(tx,"tx")
            	HX_STACK_ARG(ty,"ty")
HXLINE(  68)
HXLINE(  69)		this->a = a;
HXLINE(  70)		this->b = b;
HXLINE(  71)		this->c = c;
HXLINE(  72)		this->d = d;
HXLINE(  73)		this->tx = tx;
HXLINE(  74)		this->ty = ty;
            	}

Dynamic Matrix3_obj::__CreateEmpty() { return new Matrix3_obj; }

void *Matrix3_obj::_hx_vtable = 0;

Dynamic Matrix3_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Matrix3_obj > _hx_result = new Matrix3_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool Matrix3_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x43302551;
}

 ::lime::math::Matrix3 Matrix3_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_21e31708d26ee405_83_clone)
            	HX_STACK_THIS(this)
HXLINE(  83)
HXDLIN(  83)		return  ::lime::math::Matrix3_obj::__alloc( HX_CTX ,this->a,this->b,this->c,this->d,this->tx,this->ty);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3_obj,clone,return )

void Matrix3_obj::concat( ::lime::math::Matrix3 m){
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_93_concat)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(m,"m")
HXLINE(  93)
HXLINE(  94)		HX_VARI( Float,a1) = ((this->a * m->a) + (this->b * m->c));
HXLINE(  95)		this->b = ((this->a * m->b) + (this->b * m->d));
HXLINE(  96)		this->a = a1;
HXLINE(  98)		HX_VARI( Float,c1) = ((this->c * m->a) + (this->d * m->c));
HXLINE(  99)		this->d = ((this->c * m->b) + (this->d * m->d));
HXLINE( 100)		this->c = c1;
HXLINE( 102)		HX_VARI( Float,tx1) = (((this->tx * m->a) + (this->ty * m->c)) + m->tx);
HXLINE( 103)		this->ty = (((this->tx * m->b) + (this->ty * m->d)) + m->ty);
HXLINE( 104)		this->tx = tx1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,concat,(void))

void Matrix3_obj::copyColumnFrom(int column, ::lime::math::Vector4 vector4){
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_116_copyColumnFrom)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(column,"column")
            	HX_STACK_ARG(vector4,"vector4")
HXLINE( 116)
HXDLIN( 116)		if ((column > 2)) {
HXLINE( 118)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Column ",6a,d4,aa,c0) + column) + HX_(" out of bounds (2)",eb,c3,f0,de))));
            		}
            		else {
HXLINE( 120)			if ((column == 0)) {
HXLINE( 122)				this->a = vector4->x;
HXLINE( 123)				this->b = vector4->y;
            			}
            			else {
HXLINE( 125)				if ((column == 1)) {
HXLINE( 127)					this->c = vector4->x;
HXLINE( 128)					this->d = vector4->y;
            				}
            				else {
HXLINE( 132)					this->tx = vector4->x;
HXLINE( 133)					this->ty = vector4->y;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,copyColumnFrom,(void))

void Matrix3_obj::copyColumnTo(int column, ::lime::math::Vector4 vector4){
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_145_copyColumnTo)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(column,"column")
            	HX_STACK_ARG(vector4,"vector4")
HXLINE( 145)
HXDLIN( 145)		if ((column > 2)) {
HXLINE( 147)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Column ",6a,d4,aa,c0) + column) + HX_(" out of bounds (2)",eb,c3,f0,de))));
            		}
            		else {
HXLINE( 149)			if ((column == 0)) {
HXLINE( 151)				vector4->x = this->a;
HXLINE( 152)				vector4->y = this->b;
HXLINE( 153)				vector4->z = ( (Float)(0) );
            			}
            			else {
HXLINE( 155)				if ((column == 1)) {
HXLINE( 157)					vector4->x = this->c;
HXLINE( 158)					vector4->y = this->d;
HXLINE( 159)					vector4->z = ( (Float)(0) );
            				}
            				else {
HXLINE( 163)					vector4->x = this->tx;
HXLINE( 164)					vector4->y = this->ty;
HXLINE( 165)					vector4->z = ( (Float)(1) );
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,copyColumnTo,(void))

void Matrix3_obj::copyFrom( ::lime::math::Matrix3 sourceMatrix3){
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_175_copyFrom)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(sourceMatrix3,"sourceMatrix3")
HXLINE( 175)
HXLINE( 176)		this->a = sourceMatrix3->a;
HXLINE( 177)		this->b = sourceMatrix3->b;
HXLINE( 178)		this->c = sourceMatrix3->c;
HXLINE( 179)		this->d = sourceMatrix3->d;
HXLINE( 180)		this->tx = sourceMatrix3->tx;
HXLINE( 181)		this->ty = sourceMatrix3->ty;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,copyFrom,(void))

void Matrix3_obj::copyRowFrom(int row, ::lime::math::Vector4 vector4){
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_192_copyRowFrom)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(row,"row")
            	HX_STACK_ARG(vector4,"vector4")
HXLINE( 192)
HXDLIN( 192)		if ((row > 2)) {
HXLINE( 194)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Row ",e6,20,88,36) + row) + HX_(" out of bounds (2)",eb,c3,f0,de))));
            		}
            		else {
HXLINE( 196)			if ((row == 0)) {
HXLINE( 198)				this->a = vector4->x;
HXLINE( 199)				this->c = vector4->y;
HXLINE( 200)				this->tx = vector4->z;
            			}
            			else {
HXLINE( 202)				if ((row == 1)) {
HXLINE( 204)					this->b = vector4->x;
HXLINE( 205)					this->d = vector4->y;
HXLINE( 206)					this->ty = vector4->z;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,copyRowFrom,(void))

void Matrix3_obj::copyRowTo(int row, ::lime::math::Vector4 vector4){
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_218_copyRowTo)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(row,"row")
            	HX_STACK_ARG(vector4,"vector4")
HXLINE( 218)
HXDLIN( 218)		if ((row > 2)) {
HXLINE( 220)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Row ",e6,20,88,36) + row) + HX_(" out of bounds (2)",eb,c3,f0,de))));
            		}
            		else {
HXLINE( 222)			if ((row == 0)) {
HXLINE( 224)				vector4->x = this->a;
HXLINE( 225)				vector4->y = this->c;
HXLINE( 226)				vector4->z = this->tx;
            			}
            			else {
HXLINE( 228)				if ((row == 1)) {
HXLINE( 230)					vector4->x = this->b;
HXLINE( 231)					vector4->y = this->d;
HXLINE( 232)					vector4->z = this->ty;
            				}
            				else {
HXLINE( 236)					vector4->x = ( (Float)(0) );
HXDLIN( 236)					vector4->y = ( (Float)(0) );
HXDLIN( 236)					vector4->z = ( (Float)(1) );
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,copyRowTo,(void))

void Matrix3_obj::createBox(Float scaleX,Float scaleY,::hx::Null< Float >  __o_rotation,::hx::Null< Float >  __o_tx,::hx::Null< Float >  __o_ty){
            		Float rotation = __o_rotation.Default(0);
            		Float tx = __o_tx.Default(0);
            		Float ty = __o_ty.Default(0);
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_252_createBox)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(scaleX,"scaleX")
            	HX_STACK_ARG(scaleY,"scaleY")
            	HX_STACK_ARG(rotation,"rotation")
            	HX_STACK_ARG(tx,"tx")
            	HX_STACK_ARG(ty,"ty")
HXLINE( 252)
HXLINE( 253)		if ((rotation != 0)) {
HXLINE( 255)			HX_VARI( Float,cos) = ::Math_obj::cos(rotation);
HXLINE( 256)			HX_VARI( Float,sin) = ::Math_obj::sin(rotation);
HXLINE( 258)			this->a = (cos * scaleX);
HXLINE( 259)			this->b = (sin * scaleY);
HXLINE( 260)			this->c = (-(sin) * scaleX);
HXLINE( 261)			this->d = (cos * scaleY);
            		}
            		else {
HXLINE( 265)			this->a = scaleX;
HXLINE( 266)			this->b = ( (Float)(0) );
HXLINE( 267)			this->c = ( (Float)(0) );
HXLINE( 268)			this->d = scaleY;
            		}
HXLINE( 271)		this->tx = tx;
HXLINE( 272)		this->ty = ty;
            	}


HX_DEFINE_DYNAMIC_FUNC5(Matrix3_obj,createBox,(void))

void Matrix3_obj::createGradientBox(Float width,Float height,::hx::Null< Float >  __o_rotation,::hx::Null< Float >  __o_tx,::hx::Null< Float >  __o_ty){
            		Float rotation = __o_rotation.Default(0);
            		Float tx = __o_tx.Default(0);
            		Float ty = __o_ty.Default(0);
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_285_createGradientBox)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	HX_STACK_ARG(rotation,"rotation")
            	HX_STACK_ARG(tx,"tx")
            	HX_STACK_ARG(ty,"ty")
HXLINE( 285)
HXLINE( 286)		this->a = (width / ((Float)1638.4));
HXLINE( 287)		this->d = (height / ((Float)1638.4));
HXLINE( 290)		if ((rotation != 0)) {
HXLINE( 292)			HX_VARI( Float,cos) = ::Math_obj::cos(rotation);
HXLINE( 293)			HX_VARI( Float,sin) = ::Math_obj::sin(rotation);
HXLINE( 295)			this->b = (sin * this->d);
HXLINE( 296)			this->c = (-(sin) * this->a);
HXLINE( 297)			 ::lime::math::Matrix3 _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 297)			_hx_tmp->a = (_hx_tmp->a * cos);
HXLINE( 298)			 ::lime::math::Matrix3 _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 298)			_hx_tmp1->d = (_hx_tmp1->d * cos);
            		}
            		else {
HXLINE( 302)			this->b = ( (Float)(0) );
HXLINE( 303)			this->c = ( (Float)(0) );
            		}
HXLINE( 306)		this->tx = (tx + (width / ( (Float)(2) )));
HXLINE( 307)		this->ty = (ty + (height / ( (Float)(2) )));
            	}


HX_DEFINE_DYNAMIC_FUNC5(Matrix3_obj,createGradientBox,(void))

bool Matrix3_obj::equals( ::lime::math::Matrix3 matrix3){
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_316_equals)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(matrix3,"matrix3")
HXLINE( 316)
HXDLIN( 316)		bool _hx_tmp;
HXDLIN( 316)		bool _hx_tmp1;
HXDLIN( 316)		bool _hx_tmp2;
HXDLIN( 316)		bool _hx_tmp3;
HXDLIN( 316)		bool _hx_tmp4;
HXDLIN( 316)		if (::hx::IsNotNull( matrix3 )) {
HXDLIN( 316)			_hx_tmp4 = (this->tx == matrix3->tx);
            		}
            		else {
HXDLIN( 316)			_hx_tmp4 = false;
            		}
HXDLIN( 316)		if (_hx_tmp4) {
HXDLIN( 316)			_hx_tmp3 = (this->ty == matrix3->ty);
            		}
            		else {
HXDLIN( 316)			_hx_tmp3 = false;
            		}
HXDLIN( 316)		if (_hx_tmp3) {
HXDLIN( 316)			_hx_tmp2 = (this->a == matrix3->a);
            		}
            		else {
HXDLIN( 316)			_hx_tmp2 = false;
            		}
HXDLIN( 316)		if (_hx_tmp2) {
HXDLIN( 316)			_hx_tmp1 = (this->b == matrix3->b);
            		}
            		else {
HXDLIN( 316)			_hx_tmp1 = false;
            		}
HXDLIN( 316)		if (_hx_tmp1) {
HXDLIN( 316)			_hx_tmp = (this->c == matrix3->c);
            		}
            		else {
HXDLIN( 316)			_hx_tmp = false;
            		}
HXDLIN( 316)		if (_hx_tmp) {
HXDLIN( 316)			return (this->d == matrix3->d);
            		}
            		else {
HXDLIN( 316)			return false;
            		}
HXDLIN( 316)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,equals,return )

 ::lime::math::Vector2 Matrix3_obj::deltaTransformVector( ::lime::math::Vector2 Vector2, ::lime::math::Vector2 result){
            	HX_GC_STACKFRAME(&_hx_pos_21e31708d26ee405_326_deltaTransformVector)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Vector2,"Vector2")
            	HX_STACK_ARG(result,"result")
HXLINE( 326)
HXLINE( 327)		if (::hx::IsNull( result )) {
HXLINE( 327)			result =  ::lime::math::Vector2_obj::__alloc( HX_CTX ,null(),null());
            		}
HXLINE( 328)		result->x = ((Vector2->x * this->a) + (Vector2->y * this->c));
HXLINE( 329)		result->y = ((Vector2->x * this->b) + (Vector2->y * this->d));
HXLINE( 330)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,deltaTransformVector,return )

void Matrix3_obj::identity(){
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_337_identity)
            	HX_STACK_THIS(this)
HXLINE( 337)
HXLINE( 338)		this->a = ( (Float)(1) );
HXLINE( 339)		this->b = ( (Float)(0) );
HXLINE( 340)		this->c = ( (Float)(0) );
HXLINE( 341)		this->d = ( (Float)(1) );
HXLINE( 342)		this->tx = ( (Float)(0) );
HXLINE( 343)		this->ty = ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3_obj,identity,(void))

 ::lime::math::Matrix3 Matrix3_obj::invert(){
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_351_invert)
            	HX_STACK_THIS(this)
HXLINE( 351)
HXLINE( 352)		HX_VARI( Float,norm) = ((this->a * this->d) - (this->b * this->c));
HXLINE( 354)		if ((norm == 0)) {
HXLINE( 356)			this->a = (this->b = (this->c = (this->d = ( (Float)(0) ))));
HXLINE( 357)			this->tx = -(this->tx);
HXLINE( 358)			this->ty = -(this->ty);
            		}
            		else {
HXLINE( 362)			norm = (((Float)1.0) / norm);
HXLINE( 363)			HX_VARI( Float,a1) = (this->d * norm);
HXLINE( 364)			this->d = (this->a * norm);
HXLINE( 365)			this->a = a1;
HXLINE( 366)			 ::lime::math::Matrix3 _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 366)			_hx_tmp->b = (_hx_tmp->b * -(norm));
HXLINE( 367)			 ::lime::math::Matrix3 _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 367)			_hx_tmp1->c = (_hx_tmp1->c * -(norm));
HXLINE( 369)			HX_VARI( Float,tx1) = ((-(this->a) * this->tx) - (this->c * this->ty));
HXLINE( 370)			this->ty = ((-(this->b) * this->tx) - (this->d * this->ty));
HXLINE( 371)			this->tx = tx1;
            		}
HXLINE( 374)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3_obj,invert,return )

void Matrix3_obj::rotate(Float theta){
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_388_rotate)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(theta,"theta")
HXLINE( 388)
HXLINE( 403)		HX_VARI( Float,cos) = ::Math_obj::cos(theta);
HXLINE( 404)		HX_VARI( Float,sin) = ::Math_obj::sin(theta);
HXLINE( 406)		HX_VARI( Float,a1) = ((this->a * cos) - (this->b * sin));
HXLINE( 407)		this->b = ((this->a * sin) + (this->b * cos));
HXLINE( 408)		this->a = a1;
HXLINE( 410)		HX_VARI( Float,c1) = ((this->c * cos) - (this->d * sin));
HXLINE( 411)		this->d = ((this->c * sin) + (this->d * cos));
HXLINE( 412)		this->c = c1;
HXLINE( 414)		HX_VARI( Float,tx1) = ((this->tx * cos) - (this->ty * sin));
HXLINE( 415)		this->ty = ((this->tx * sin) + (this->ty * cos));
HXLINE( 416)		this->tx = tx1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,rotate,(void))

void Matrix3_obj::scale(Float sx,Float sy){
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_425_scale)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(sx,"sx")
            	HX_STACK_ARG(sy,"sy")
HXLINE( 425)
HXLINE( 435)		 ::lime::math::Matrix3 _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 435)		_hx_tmp->a = (_hx_tmp->a * sx);
HXLINE( 436)		 ::lime::math::Matrix3 _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 436)		_hx_tmp1->b = (_hx_tmp1->b * sy);
HXLINE( 437)		 ::lime::math::Matrix3 _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 437)		_hx_tmp2->c = (_hx_tmp2->c * sx);
HXLINE( 438)		 ::lime::math::Matrix3 _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 438)		_hx_tmp3->d = (_hx_tmp3->d * sy);
HXLINE( 439)		 ::lime::math::Matrix3 _hx_tmp4 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 439)		_hx_tmp4->tx = (_hx_tmp4->tx * sx);
HXLINE( 440)		 ::lime::math::Matrix3 _hx_tmp5 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 440)		_hx_tmp5->ty = (_hx_tmp5->ty * sy);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,scale,(void))

void Matrix3_obj::setRotation(Float theta,::hx::Null< Float >  __o_scale){
            		Float scale = __o_scale.Default(1);
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_444_setRotation)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(theta,"theta")
            	HX_STACK_ARG(scale,"scale")
HXLINE( 444)
HXLINE( 445)		this->a = (::Math_obj::cos(theta) * scale);
HXLINE( 446)		this->c = (::Math_obj::sin(theta) * scale);
HXLINE( 447)		this->b = -(this->c);
HXLINE( 448)		this->d = this->a;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,setRotation,(void))

void Matrix3_obj::setTo(Float a,Float b,Float c,Float d,Float tx,Float ty){
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_461_setTo)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
            	HX_STACK_ARG(c,"c")
            	HX_STACK_ARG(d,"d")
            	HX_STACK_ARG(tx,"tx")
            	HX_STACK_ARG(ty,"ty")
HXLINE( 461)
HXLINE( 462)		this->a = a;
HXLINE( 463)		this->b = b;
HXLINE( 464)		this->c = c;
HXLINE( 465)		this->d = d;
HXLINE( 466)		this->tx = tx;
HXLINE( 467)		this->ty = ty;
            	}


HX_DEFINE_DYNAMIC_FUNC6(Matrix3_obj,setTo,(void))

::String Matrix3_obj::to3DString(::hx::Null< bool >  __o_roundPixels){
            		bool roundPixels = __o_roundPixels.Default(false);
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_480_to3DString)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(roundPixels,"roundPixels")
HXLINE( 480)
HXDLIN( 480)		if (roundPixels) {
HXLINE( 482)			::String _hx_tmp = ((((((((((HX_("matrix3d(",96,72,db,ad) + this->a) + HX_(", ",74,26,00,00)) + this->b) + HX_(", ",74,26,00,00)) + HX_("0, 0, ",80,3e,0e,9c)) + this->c) + HX_(", ",74,26,00,00)) + this->d) + HX_(", ",74,26,00,00)) + HX_("0, 0, 0, 0, 1, 0, ",df,b7,27,12));
HXDLIN( 482)			::String _hx_tmp1 = ((_hx_tmp + ::Std_obj::_hx_int(this->tx)) + HX_(", ",74,26,00,00));
HXDLIN( 482)			return ((_hx_tmp1 + ::Std_obj::_hx_int(this->ty)) + HX_(", 0, 1)",88,a3,85,b1));
            		}
            		else {
HXLINE( 500)			return ((((((((((((((HX_("matrix3d(",96,72,db,ad) + this->a) + HX_(", ",74,26,00,00)) + this->b) + HX_(", ",74,26,00,00)) + HX_("0, 0, ",80,3e,0e,9c)) + this->c) + HX_(", ",74,26,00,00)) + this->d) + HX_(", ",74,26,00,00)) + HX_("0, 0, 0, 0, 1, 0, ",df,b7,27,12)) + this->tx) + HX_(", ",74,26,00,00)) + this->ty) + HX_(", 0, 1)",88,a3,85,b1));
            		}
HXLINE( 480)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,to3DString,return )

::String Matrix3_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_506_toString)
            	HX_STACK_THIS(this)
HXLINE( 506)
HXDLIN( 506)		return ((((((((((((HX_("matrix(",c7,42,67,93) + this->a) + HX_(", ",74,26,00,00)) + this->b) + HX_(", ",74,26,00,00)) + this->c) + HX_(", ",74,26,00,00)) + this->d) + HX_(", ",74,26,00,00)) + this->tx) + HX_(", ",74,26,00,00)) + this->ty) + HX_(")",29,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3_obj,toString,return )

 ::lime::math::Rectangle Matrix3_obj::transformRect( ::lime::math::Rectangle rect, ::lime::math::Rectangle result){
            	HX_GC_STACKFRAME(&_hx_pos_21e31708d26ee405_518_transformRect)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rect,"rect")
            	HX_STACK_ARG(result,"result")
HXLINE( 518)
HXLINE( 519)		if (::hx::IsNull( result )) {
HXLINE( 519)			result =  ::lime::math::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 521)		HX_VARI( Float,tx0) = ((this->a * rect->x) + (this->c * rect->y));
HXLINE( 522)		HX_VARI( Float,tx1) = tx0;
HXLINE( 523)		HX_VARI( Float,ty0) = ((this->b * rect->x) + (this->d * rect->y));
HXLINE( 524)		HX_VARI( Float,ty1) = ty0;
HXLINE( 526)		HX_VARI( Float,tx) = ((this->a * (rect->x + rect->width)) + (this->c * rect->y));
HXLINE( 527)		HX_VARI( Float,ty) = ((this->b * (rect->x + rect->width)) + (this->d * rect->y));
HXLINE( 529)		if ((tx < tx0)) {
HXLINE( 529)			tx0 = tx;
            		}
HXLINE( 530)		if ((ty < ty0)) {
HXLINE( 530)			ty0 = ty;
            		}
HXLINE( 531)		if ((tx > tx1)) {
HXLINE( 531)			tx1 = tx;
            		}
HXLINE( 532)		if ((ty > ty1)) {
HXLINE( 532)			ty1 = ty;
            		}
HXLINE( 534)		tx = ((this->a * (rect->x + rect->width)) + (this->c * (rect->y + rect->height)));
HXLINE( 535)		ty = ((this->b * (rect->x + rect->width)) + (this->d * (rect->y + rect->height)));
HXLINE( 537)		if ((tx < tx0)) {
HXLINE( 537)			tx0 = tx;
            		}
HXLINE( 538)		if ((ty < ty0)) {
HXLINE( 538)			ty0 = ty;
            		}
HXLINE( 539)		if ((tx > tx1)) {
HXLINE( 539)			tx1 = tx;
            		}
HXLINE( 540)		if ((ty > ty1)) {
HXLINE( 540)			ty1 = ty;
            		}
HXLINE( 542)		tx = ((this->a * rect->x) + (this->c * (rect->y + rect->height)));
HXLINE( 543)		ty = ((this->b * rect->x) + (this->d * (rect->y + rect->height)));
HXLINE( 545)		if ((tx < tx0)) {
HXLINE( 545)			tx0 = tx;
            		}
HXLINE( 546)		if ((ty < ty0)) {
HXLINE( 546)			ty0 = ty;
            		}
HXLINE( 547)		if ((tx > tx1)) {
HXLINE( 547)			tx1 = tx;
            		}
HXLINE( 548)		if ((ty > ty1)) {
HXLINE( 548)			ty1 = ty;
            		}
HXLINE( 550)		result->setTo((tx0 + tx),(ty0 + ty),(tx1 - tx0),(ty1 - ty0));
HXLINE( 551)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,transformRect,return )

 ::lime::math::Vector2 Matrix3_obj::transformVector( ::lime::math::Vector2 pos, ::lime::math::Vector2 result){
            	HX_GC_STACKFRAME(&_hx_pos_21e31708d26ee405_560_transformVector)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(pos,"pos")
            	HX_STACK_ARG(result,"result")
HXLINE( 560)
HXLINE( 561)		if (::hx::IsNull( result )) {
HXLINE( 561)			result =  ::lime::math::Vector2_obj::__alloc( HX_CTX ,null(),null());
            		}
HXLINE( 562)		result->x = (((pos->x * this->a) + (pos->y * this->c)) + this->tx);
HXLINE( 563)		result->y = (((pos->x * this->b) + (pos->y * this->d)) + this->ty);
HXLINE( 564)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,transformVector,return )

void Matrix3_obj::translate(Float dx,Float dy){
            	HX_STACKFRAME(&_hx_pos_21e31708d26ee405_573_translate)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(dx,"dx")
            	HX_STACK_ARG(dy,"dy")
HXLINE( 573)
HXLINE( 574)		 ::lime::math::Matrix3 _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 574)		_hx_tmp->tx = (_hx_tmp->tx + dx);
HXLINE( 575)		 ::lime::math::Matrix3 _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 575)		_hx_tmp1->ty = (_hx_tmp1->ty + dy);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,translate,(void))

 ::lime::math::Matrix3 Matrix3_obj::_hx___identity;


::hx::ObjectPtr< Matrix3_obj > Matrix3_obj::__new(::hx::Null< Float >  __o_a,::hx::Null< Float >  __o_b,::hx::Null< Float >  __o_c,::hx::Null< Float >  __o_d,::hx::Null< Float >  __o_tx,::hx::Null< Float >  __o_ty) {
	::hx::ObjectPtr< Matrix3_obj > __this = new Matrix3_obj();
	__this->__construct(__o_a,__o_b,__o_c,__o_d,__o_tx,__o_ty);
	return __this;
}

::hx::ObjectPtr< Matrix3_obj > Matrix3_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_a,::hx::Null< Float >  __o_b,::hx::Null< Float >  __o_c,::hx::Null< Float >  __o_d,::hx::Null< Float >  __o_tx,::hx::Null< Float >  __o_ty) {
	Matrix3_obj *__this = (Matrix3_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Matrix3_obj), false, "lime.math.Matrix3"));
	*(void **)__this = Matrix3_obj::_hx_vtable;
	__this->__construct(__o_a,__o_b,__o_c,__o_d,__o_tx,__o_ty);
	return __this;
}

Matrix3_obj::Matrix3_obj()
{
}

::hx::Val Matrix3_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return ::hx::Val( a ); }
		if (HX_FIELD_EQ(inName,"b") ) { return ::hx::Val( b ); }
		if (HX_FIELD_EQ(inName,"c") ) { return ::hx::Val( c ); }
		if (HX_FIELD_EQ(inName,"d") ) { return ::hx::Val( d ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { return ::hx::Val( tx ); }
		if (HX_FIELD_EQ(inName,"ty") ) { return ::hx::Val( ty ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"scale") ) { return ::hx::Val( scale_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTo") ) { return ::hx::Val( setTo_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { return ::hx::Val( concat_dyn() ); }
		if (HX_FIELD_EQ(inName,"equals") ) { return ::hx::Val( equals_dyn() ); }
		if (HX_FIELD_EQ(inName,"invert") ) { return ::hx::Val( invert_dyn() ); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return ::hx::Val( rotate_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return ::hx::Val( copyFrom_dyn() ); }
		if (HX_FIELD_EQ(inName,"identity") ) { return ::hx::Val( identity_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copyRowTo") ) { return ::hx::Val( copyRowTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"createBox") ) { return ::hx::Val( createBox_dyn() ); }
		if (HX_FIELD_EQ(inName,"translate") ) { return ::hx::Val( translate_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"to3DString") ) { return ::hx::Val( to3DString_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyRowFrom") ) { return ::hx::Val( copyRowFrom_dyn() ); }
		if (HX_FIELD_EQ(inName,"setRotation") ) { return ::hx::Val( setRotation_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"copyColumnTo") ) { return ::hx::Val( copyColumnTo_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transformRect") ) { return ::hx::Val( transformRect_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"copyColumnFrom") ) { return ::hx::Val( copyColumnFrom_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"transformVector") ) { return ::hx::Val( transformVector_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createGradientBox") ) { return ::hx::Val( createGradientBox_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"deltaTransformVector") ) { return ::hx::Val( deltaTransformVector_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Matrix3_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"__identity") ) { outValue = ( _hx___identity ); return true; }
	}
	return false;
}

::hx::Val Matrix3_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c") ) { c=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { tx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ty") ) { ty=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Matrix3_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"__identity") ) { _hx___identity=ioValue.Cast<  ::lime::math::Matrix3 >(); return true; }
	}
	return false;
}

void Matrix3_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("a",61,00,00,00));
	outFields->push(HX_("b",62,00,00,00));
	outFields->push(HX_("c",63,00,00,00));
	outFields->push(HX_("d",64,00,00,00));
	outFields->push(HX_("tx",84,65,00,00));
	outFields->push(HX_("ty",85,65,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Matrix3_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Matrix3_obj,a),HX_("a",61,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Matrix3_obj,b),HX_("b",62,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Matrix3_obj,c),HX_("c",63,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Matrix3_obj,d),HX_("d",64,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Matrix3_obj,tx),HX_("tx",84,65,00,00)},
	{::hx::fsFloat,(int)offsetof(Matrix3_obj,ty),HX_("ty",85,65,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Matrix3_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::lime::math::Matrix3 */ ,(void *) &Matrix3_obj::_hx___identity,HX_("__identity",5e,b8,67,5c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Matrix3_obj_sMemberFields[] = {
	HX_("a",61,00,00,00),
	HX_("b",62,00,00,00),
	HX_("c",63,00,00,00),
	HX_("d",64,00,00,00),
	HX_("tx",84,65,00,00),
	HX_("ty",85,65,00,00),
	HX_("clone",5d,13,63,48),
	HX_("concat",14,09,d0,c7),
	HX_("copyColumnFrom",75,97,b5,3a),
	HX_("copyColumnTo",c6,2e,f6,f6),
	HX_("copyFrom",bf,0b,61,c8),
	HX_("copyRowFrom",6f,45,8b,ef),
	HX_("copyRowTo",40,8a,62,73),
	HX_("createBox",6f,94,d8,49),
	HX_("createGradientBox",5f,ec,c0,25),
	HX_("equals",3f,ee,f2,bf),
	HX_("deltaTransformVector",37,02,9c,c2),
	HX_("identity",3e,45,2f,b9),
	HX_("invert",16,e7,d8,9f),
	HX_("rotate",5b,46,20,cb),
	HX_("scale",8a,ce,ce,78),
	HX_("setRotation",00,07,e7,38),
	HX_("setTo",bd,91,2f,7a),
	HX_("to3DString",dd,bc,ef,4e),
	HX_("toString",ac,d0,6e,38),
	HX_("transformRect",b0,cc,f4,78),
	HX_("transformVector",4f,2b,b3,d2),
	HX_("translate",4e,d7,7f,49),
	::String(null()) };

static void Matrix3_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix3_obj::_hx___identity,"__identity");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Matrix3_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix3_obj::_hx___identity,"__identity");
};

#endif

::hx::Class Matrix3_obj::__mClass;

static ::String Matrix3_obj_sStaticFields[] = {
	HX_("__identity",5e,b8,67,5c),
	::String(null())
};

void Matrix3_obj::__register()
{
	Matrix3_obj _hx_dummy;
	Matrix3_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.math.Matrix3",05,23,1b,06);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Matrix3_obj::__GetStatic;
	__mClass->mSetStaticField = &Matrix3_obj::__SetStatic;
	__mClass->mMarkFunc = Matrix3_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Matrix3_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Matrix3_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Matrix3_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Matrix3_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Matrix3_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Matrix3_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Matrix3_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_21e31708d26ee405_56_boot)
HXDLIN(  56)		_hx___identity =  ::lime::math::Matrix3_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            	}
}

} // end namespace lime
} // end namespace math
