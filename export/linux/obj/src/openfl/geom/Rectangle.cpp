#include <hxcpp.h>

#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_45de901e99b61471_219_new,"openfl.geom.Rectangle","new",0xe1148d6d,"openfl.geom.Rectangle.new","openfl/geom/Rectangle.hx",219,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_237_clone,"openfl.geom.Rectangle","clone",0x6896edaa,"openfl.geom.Rectangle.clone","openfl/geom/Rectangle.hx",237,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_251_contains,"openfl.geom.Rectangle","contains",0x39912df2,"openfl.geom.Rectangle.contains","openfl/geom/Rectangle.hx",251,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_267_containsPoint,"openfl.geom.Rectangle","containsPoint",0xa42628fe,"openfl.geom.Rectangle.containsPoint","openfl/geom/Rectangle.hx",267,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_283_containsRect,"openfl.geom.Rectangle","containsRect",0x6ba48836,"openfl.geom.Rectangle.containsRect","openfl/geom/Rectangle.hx",283,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_300_copyFrom,"openfl.geom.Rectangle","copyFrom",0xd576df92,"openfl.geom.Rectangle.copyFrom","openfl/geom/Rectangle.hx",300,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_322_equals,"openfl.geom.Rectangle","equals",0xcd1e1752,"openfl.geom.Rectangle.equals","openfl/geom/Rectangle.hx",322,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_351_inflate,"openfl.geom.Rectangle","inflate",0x84b46414,"openfl.geom.Rectangle.inflate","openfl/geom/Rectangle.hx",351,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_381_inflatePoint,"openfl.geom.Rectangle","inflatePoint",0xf7c1779c,"openfl.geom.Rectangle.inflatePoint","openfl/geom/Rectangle.hx",381,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_401_intersection,"openfl.geom.Rectangle","intersection",0x4de95b9c,"openfl.geom.Rectangle.intersection","openfl/geom/Rectangle.hx",401,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_434_intersects,"openfl.geom.Rectangle","intersects",0xc0fc7147,"openfl.geom.Rectangle.intersects","openfl/geom/Rectangle.hx",434,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_457_isEmpty,"openfl.geom.Rectangle","isEmpty",0x84f8a5d0,"openfl.geom.Rectangle.isEmpty","openfl/geom/Rectangle.hx",457,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_468_offset,"openfl.geom.Rectangle","offset",0x6d6ac0a6,"openfl.geom.Rectangle.offset","openfl/geom/Rectangle.hx",468,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_481_offsetPoint,"openfl.geom.Rectangle","offsetPoint",0xf09849ca,"openfl.geom.Rectangle.offsetPoint","openfl/geom/Rectangle.hx",481,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_496_setEmpty,"openfl.geom.Rectangle","setEmpty",0x8b24775e,"openfl.geom.Rectangle.setEmpty","openfl/geom/Rectangle.hx",496,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_508_setTo,"openfl.geom.Rectangle","setTo",0x9a636c0a,"openfl.geom.Rectangle.setTo","openfl/geom/Rectangle.hx",508,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_517_toString,"openfl.geom.Rectangle","toString",0x4584a47f,"openfl.geom.Rectangle.toString","openfl/geom/Rectangle.hx",517,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_535_union,"openfl.geom.Rectangle","union",0xc71b3f5c,"openfl.geom.Rectangle.union","openfl/geom/Rectangle.hx",535,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_554___contract,"openfl.geom.Rectangle","__contract",0xb7fb00c5,"openfl.geom.Rectangle.__contract","openfl/geom/Rectangle.hx",554,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_577___expand,"openfl.geom.Rectangle","__expand",0x79b82d4d,"openfl.geom.Rectangle.__expand","openfl/geom/Rectangle.hx",577,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_606___toLimeRectangle,"openfl.geom.Rectangle","__toLimeRectangle",0x990c368c,"openfl.geom.Rectangle.__toLimeRectangle","openfl/geom/Rectangle.hx",606,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_618___transform,"openfl.geom.Rectangle","__transform",0x05478859,"openfl.geom.Rectangle.__transform","openfl/geom/Rectangle.hx",618,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_654_get_bottom,"openfl.geom.Rectangle","get_bottom",0x33110547,"openfl.geom.Rectangle.get_bottom","openfl/geom/Rectangle.hx",654,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_658_set_bottom,"openfl.geom.Rectangle","set_bottom",0x368ea3bb,"openfl.geom.Rectangle.set_bottom","openfl/geom/Rectangle.hx",658,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_665_get_bottomRight,"openfl.geom.Rectangle","get_bottomRight",0xb804f515,"openfl.geom.Rectangle.get_bottomRight","openfl/geom/Rectangle.hx",665,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_669_set_bottomRight,"openfl.geom.Rectangle","set_bottomRight",0xb3d07221,"openfl.geom.Rectangle.set_bottomRight","openfl/geom/Rectangle.hx",669,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_677_get_left,"openfl.geom.Rectangle","get_left",0xd4809763,"openfl.geom.Rectangle.get_left","openfl/geom/Rectangle.hx",677,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_681_set_left,"openfl.geom.Rectangle","set_left",0x82ddf0d7,"openfl.geom.Rectangle.set_left","openfl/geom/Rectangle.hx",681,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_689_get_right,"openfl.geom.Rectangle","get_right",0x9310ed00,"openfl.geom.Rectangle.get_right","openfl/geom/Rectangle.hx",689,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_693_set_right,"openfl.geom.Rectangle","set_right",0x7661d90c,"openfl.geom.Rectangle.set_right","openfl/geom/Rectangle.hx",693,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_700_get_size,"openfl.geom.Rectangle","get_size",0xd924301d,"openfl.geom.Rectangle.get_size","openfl/geom/Rectangle.hx",700,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_704_set_size,"openfl.geom.Rectangle","set_size",0x87818991,"openfl.geom.Rectangle.set_size","openfl/geom/Rectangle.hx",704,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_712_get_top,"openfl.geom.Rectangle","get_top",0x9f65f6b9,"openfl.geom.Rectangle.get_top","openfl/geom/Rectangle.hx",712,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_716_set_top,"openfl.geom.Rectangle","set_top",0x926787c5,"openfl.geom.Rectangle.set_top","openfl/geom/Rectangle.hx",716,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_724_get_topLeft,"openfl.geom.Rectangle","get_topLeft",0x00437b60,"openfl.geom.Rectangle.get_topLeft","openfl/geom/Rectangle.hx",724,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_728_set_topLeft,"openfl.geom.Rectangle","set_topLeft",0x0ab0826c,"openfl.geom.Rectangle.set_topLeft","openfl/geom/Rectangle.hx",728,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_62_boot,"openfl.geom.Rectangle","boot",0x09003285,"openfl.geom.Rectangle.boot","openfl/geom/Rectangle.hx",62,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_63_boot,"openfl.geom.Rectangle","boot",0x09003285,"openfl.geom.Rectangle.boot","openfl/geom/Rectangle.hx",63,0xf2fb2b03)
namespace openfl{
namespace geom{

void Rectangle_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            		Float width = __o_width.Default(0);
            		Float height = __o_height.Default(0);
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_219_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
HXLINE( 219)
HXLINE( 220)		this->x = x;
HXLINE( 221)		this->y = y;
HXLINE( 222)		this->width = width;
HXLINE( 223)		this->height = height;
            	}

Dynamic Rectangle_obj::__CreateEmpty() { return new Rectangle_obj; }

void *Rectangle_obj::_hx_vtable = 0;

Dynamic Rectangle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Rectangle_obj > _hx_result = new Rectangle_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Rectangle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2e421103;
}

 ::openfl::geom::Rectangle Rectangle_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_45de901e99b61471_237_clone)
            	HX_STACK_THIS(this)
HXLINE( 237)
HXDLIN( 237)		return  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,this->x,this->y,this->width,this->height);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,clone,return )

bool Rectangle_obj::contains(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_251_contains)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
HXLINE( 251)
HXDLIN( 251)		bool _hx_tmp;
HXDLIN( 251)		bool _hx_tmp1;
HXDLIN( 251)		if ((x >= this->x)) {
HXDLIN( 251)			_hx_tmp1 = (y >= this->y);
            		}
            		else {
HXDLIN( 251)			_hx_tmp1 = false;
            		}
HXDLIN( 251)		if (_hx_tmp1) {
HXDLIN( 251)			_hx_tmp = (x < this->get_right());
            		}
            		else {
HXDLIN( 251)			_hx_tmp = false;
            		}
HXDLIN( 251)		if (_hx_tmp) {
HXDLIN( 251)			return (y < this->get_bottom());
            		}
            		else {
HXDLIN( 251)			return false;
            		}
HXDLIN( 251)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,contains,return )

bool Rectangle_obj::containsPoint( ::openfl::geom::Point point){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_267_containsPoint)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(point,"point")
HXLINE( 267)
HXDLIN( 267)		return this->contains(point->x,point->y);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,containsPoint,return )

bool Rectangle_obj::containsRect( ::openfl::geom::Rectangle rect){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_283_containsRect)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rect,"rect")
HXLINE( 283)
HXDLIN( 283)		bool _hx_tmp;
HXDLIN( 283)		if (!((rect->width <= 0))) {
HXDLIN( 283)			_hx_tmp = (rect->height <= 0);
            		}
            		else {
HXDLIN( 283)			_hx_tmp = true;
            		}
HXDLIN( 283)		if (_hx_tmp) {
HXLINE( 285)			bool _hx_tmp;
HXDLIN( 285)			bool _hx_tmp1;
HXDLIN( 285)			if ((rect->x > this->x)) {
HXLINE( 285)				_hx_tmp1 = (rect->y > this->y);
            			}
            			else {
HXLINE( 285)				_hx_tmp1 = false;
            			}
HXDLIN( 285)			if (_hx_tmp1) {
HXLINE( 285)				Float _hx_tmp1 = rect->get_right();
HXDLIN( 285)				_hx_tmp = (_hx_tmp1 < this->get_right());
            			}
            			else {
HXLINE( 285)				_hx_tmp = false;
            			}
HXDLIN( 285)			if (_hx_tmp) {
HXLINE( 285)				Float _hx_tmp = rect->get_bottom();
HXDLIN( 285)				return (_hx_tmp < this->get_bottom());
            			}
            			else {
HXLINE( 285)				return false;
            			}
            		}
            		else {
HXLINE( 289)			bool _hx_tmp;
HXDLIN( 289)			bool _hx_tmp1;
HXDLIN( 289)			if ((rect->x >= this->x)) {
HXLINE( 289)				_hx_tmp1 = (rect->y >= this->y);
            			}
            			else {
HXLINE( 289)				_hx_tmp1 = false;
            			}
HXDLIN( 289)			if (_hx_tmp1) {
HXLINE( 289)				Float _hx_tmp1 = rect->get_right();
HXDLIN( 289)				_hx_tmp = (_hx_tmp1 <= this->get_right());
            			}
            			else {
HXLINE( 289)				_hx_tmp = false;
            			}
HXDLIN( 289)			if (_hx_tmp) {
HXLINE( 289)				Float _hx_tmp = rect->get_bottom();
HXDLIN( 289)				return (_hx_tmp <= this->get_bottom());
            			}
            			else {
HXLINE( 289)				return false;
            			}
            		}
HXLINE( 283)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,containsRect,return )

void Rectangle_obj::copyFrom( ::openfl::geom::Rectangle sourceRect){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_300_copyFrom)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(sourceRect,"sourceRect")
HXLINE( 300)
HXLINE( 301)		this->x = sourceRect->x;
HXLINE( 302)		this->y = sourceRect->y;
HXLINE( 303)		this->width = sourceRect->width;
HXLINE( 304)		this->height = sourceRect->height;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,copyFrom,(void))

bool Rectangle_obj::equals( ::openfl::geom::Rectangle toCompare){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_322_equals)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(toCompare,"toCompare")
HXLINE( 322)
HXDLIN( 322)		if (::hx::IsInstanceEq( toCompare,::hx::ObjectPtr<OBJ_>(this) )) {
HXDLIN( 322)			return true;
            		}
            		else {
HXLINE( 324)			bool _hx_tmp;
HXDLIN( 324)			bool _hx_tmp1;
HXDLIN( 324)			bool _hx_tmp2;
HXDLIN( 324)			if (::hx::IsNotNull( toCompare )) {
HXLINE( 324)				_hx_tmp2 = (this->x == toCompare->x);
            			}
            			else {
HXLINE( 324)				_hx_tmp2 = false;
            			}
HXDLIN( 324)			if (_hx_tmp2) {
HXLINE( 324)				_hx_tmp1 = (this->y == toCompare->y);
            			}
            			else {
HXLINE( 324)				_hx_tmp1 = false;
            			}
HXDLIN( 324)			if (_hx_tmp1) {
HXLINE( 324)				_hx_tmp = (this->width == toCompare->width);
            			}
            			else {
HXLINE( 324)				_hx_tmp = false;
            			}
HXDLIN( 324)			if (_hx_tmp) {
HXLINE( 324)				return (this->height == toCompare->height);
            			}
            			else {
HXLINE( 324)				return false;
            			}
            		}
HXLINE( 322)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,equals,return )

void Rectangle_obj::inflate(Float dx,Float dy){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_351_inflate)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(dx,"dx")
            	HX_STACK_ARG(dy,"dy")
HXLINE( 351)
HXLINE( 352)		 ::openfl::geom::Rectangle _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 352)		_hx_tmp->x = (_hx_tmp->x - dx);
HXLINE( 353)		 ::openfl::geom::Rectangle _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 353)		_hx_tmp1->width = (_hx_tmp1->width + (dx * ( (Float)(2) )));
HXLINE( 354)		 ::openfl::geom::Rectangle _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 354)		_hx_tmp2->y = (_hx_tmp2->y - dy);
HXLINE( 355)		 ::openfl::geom::Rectangle _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 355)		_hx_tmp3->height = (_hx_tmp3->height + (dy * ( (Float)(2) )));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,inflate,(void))

void Rectangle_obj::inflatePoint( ::openfl::geom::Point point){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_381_inflatePoint)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(point,"point")
HXLINE( 381)
HXDLIN( 381)		this->inflate(point->x,point->y);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,inflatePoint,(void))

 ::openfl::geom::Rectangle Rectangle_obj::intersection( ::openfl::geom::Rectangle toIntersect){
            	HX_GC_STACKFRAME(&_hx_pos_45de901e99b61471_401_intersection)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(toIntersect,"toIntersect")
HXLINE( 401)
HXLINE( 402)		HX_VAR( Float,x0);
HXDLIN( 402)		if ((this->x < toIntersect->x)) {
HXLINE( 402)			x0 = toIntersect->x;
            		}
            		else {
HXLINE( 402)			x0 = this->x;
            		}
HXLINE( 403)		HX_VAR( Float,x1);
HXDLIN( 403)		Float x11 = this->get_right();
HXDLIN( 403)		if ((x11 > toIntersect->get_right())) {
HXLINE( 403)			x1 = toIntersect->get_right();
            		}
            		else {
HXLINE( 403)			x1 = this->get_right();
            		}
HXLINE( 405)		if ((x1 <= x0)) {
HXLINE( 407)			return  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 410)		HX_VAR( Float,y0);
HXDLIN( 410)		if ((this->y < toIntersect->y)) {
HXLINE( 410)			y0 = toIntersect->y;
            		}
            		else {
HXLINE( 410)			y0 = this->y;
            		}
HXLINE( 411)		HX_VAR( Float,y1);
HXDLIN( 411)		Float y11 = this->get_bottom();
HXDLIN( 411)		if ((y11 > toIntersect->get_bottom())) {
HXLINE( 411)			y1 = toIntersect->get_bottom();
            		}
            		else {
HXLINE( 411)			y1 = this->get_bottom();
            		}
HXLINE( 413)		if ((y1 <= y0)) {
HXLINE( 415)			return  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 418)		return  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,x0,y0,(x1 - x0),(y1 - y0));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,intersection,return )

bool Rectangle_obj::intersects( ::openfl::geom::Rectangle toIntersect){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_434_intersects)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(toIntersect,"toIntersect")
HXLINE( 434)
HXLINE( 435)		HX_VAR( Float,x0);
HXDLIN( 435)		if ((this->x < toIntersect->x)) {
HXLINE( 435)			x0 = toIntersect->x;
            		}
            		else {
HXLINE( 435)			x0 = this->x;
            		}
HXLINE( 436)		HX_VAR( Float,x1);
HXDLIN( 436)		Float x11 = this->get_right();
HXDLIN( 436)		if ((x11 > toIntersect->get_right())) {
HXLINE( 436)			x1 = toIntersect->get_right();
            		}
            		else {
HXLINE( 436)			x1 = this->get_right();
            		}
HXLINE( 438)		if ((x1 <= x0)) {
HXLINE( 440)			return false;
            		}
HXLINE( 443)		HX_VAR( Float,y0);
HXDLIN( 443)		if ((this->y < toIntersect->y)) {
HXLINE( 443)			y0 = toIntersect->y;
            		}
            		else {
HXLINE( 443)			y0 = this->y;
            		}
HXLINE( 444)		HX_VAR( Float,y1);
HXDLIN( 444)		Float y11 = this->get_bottom();
HXDLIN( 444)		if ((y11 > toIntersect->get_bottom())) {
HXLINE( 444)			y1 = toIntersect->get_bottom();
            		}
            		else {
HXLINE( 444)			y1 = this->get_bottom();
            		}
HXLINE( 446)		return (y1 > y0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,intersects,return )

bool Rectangle_obj::isEmpty(){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_457_isEmpty)
            	HX_STACK_THIS(this)
HXLINE( 457)
HXDLIN( 457)		if (!((this->width <= 0))) {
HXDLIN( 457)			return (this->height <= 0);
            		}
            		else {
HXDLIN( 457)			return true;
            		}
HXDLIN( 457)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,isEmpty,return )

void Rectangle_obj::offset(Float dx,Float dy){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_468_offset)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(dx,"dx")
            	HX_STACK_ARG(dy,"dy")
HXLINE( 468)
HXLINE( 469)		 ::openfl::geom::Rectangle _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 469)		_hx_tmp->x = (_hx_tmp->x + dx);
HXLINE( 470)		 ::openfl::geom::Rectangle _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 470)		_hx_tmp1->y = (_hx_tmp1->y + dy);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,offset,(void))

void Rectangle_obj::offsetPoint( ::openfl::geom::Point point){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_481_offsetPoint)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(point,"point")
HXLINE( 481)
HXLINE( 482)		 ::openfl::geom::Rectangle _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 482)		_hx_tmp->x = (_hx_tmp->x + point->x);
HXLINE( 483)		 ::openfl::geom::Rectangle _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 483)		_hx_tmp1->y = (_hx_tmp1->y + point->y);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,offsetPoint,(void))

void Rectangle_obj::setEmpty(){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_496_setEmpty)
            	HX_STACK_THIS(this)
HXLINE( 496)
HXDLIN( 496)		this->x = (this->y = (this->width = (this->height = ( (Float)(0) ))));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,setEmpty,(void))

void Rectangle_obj::setTo(Float xa,Float ya,Float widtha,Float heighta){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_508_setTo)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(xa,"xa")
            	HX_STACK_ARG(ya,"ya")
            	HX_STACK_ARG(widtha,"widtha")
            	HX_STACK_ARG(heighta,"heighta")
HXLINE( 508)
HXLINE( 509)		this->x = xa;
HXLINE( 510)		this->y = ya;
HXLINE( 511)		this->width = widtha;
HXLINE( 512)		this->height = heighta;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Rectangle_obj,setTo,(void))

::String Rectangle_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_517_toString)
            	HX_STACK_THIS(this)
HXLINE( 517)
HXDLIN( 517)		return ((((((((HX_("(x=",ed,c2,1e,00) + this->x) + HX_(", y=",18,15,2e,1d)) + this->y) + HX_(", width=",eb,04,57,53)) + this->width) + HX_(", height=",82,32,07,68)) + this->height) + HX_(")",29,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,toString,return )

 ::openfl::geom::Rectangle Rectangle_obj::_hx_union( ::openfl::geom::Rectangle toUnion){
            	HX_GC_STACKFRAME(&_hx_pos_45de901e99b61471_535_union)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(toUnion,"toUnion")
HXLINE( 535)
HXLINE( 536)		bool _hx_tmp;
HXDLIN( 536)		if ((this->width != 0)) {
HXLINE( 536)			_hx_tmp = (this->height == 0);
            		}
            		else {
HXLINE( 536)			_hx_tmp = true;
            		}
HXDLIN( 536)		if (_hx_tmp) {
HXLINE( 538)			return toUnion->clone();
            		}
            		else {
HXLINE( 540)			bool _hx_tmp;
HXDLIN( 540)			if ((toUnion->width != 0)) {
HXLINE( 540)				_hx_tmp = (toUnion->height == 0);
            			}
            			else {
HXLINE( 540)				_hx_tmp = true;
            			}
HXDLIN( 540)			if (_hx_tmp) {
HXLINE( 542)				return this->clone();
            			}
            		}
HXLINE( 545)		HX_VAR( Float,x0);
HXDLIN( 545)		if ((this->x > toUnion->x)) {
HXLINE( 545)			x0 = toUnion->x;
            		}
            		else {
HXLINE( 545)			x0 = this->x;
            		}
HXLINE( 546)		HX_VAR( Float,x1);
HXDLIN( 546)		Float x11 = this->get_right();
HXDLIN( 546)		if ((x11 < toUnion->get_right())) {
HXLINE( 546)			x1 = toUnion->get_right();
            		}
            		else {
HXLINE( 546)			x1 = this->get_right();
            		}
HXLINE( 547)		HX_VAR( Float,y0);
HXDLIN( 547)		if ((this->y > toUnion->y)) {
HXLINE( 547)			y0 = toUnion->y;
            		}
            		else {
HXLINE( 547)			y0 = this->y;
            		}
HXLINE( 548)		HX_VAR( Float,y1);
HXDLIN( 548)		Float y11 = this->get_bottom();
HXDLIN( 548)		if ((y11 < toUnion->get_bottom())) {
HXLINE( 548)			y1 = toUnion->get_bottom();
            		}
            		else {
HXLINE( 548)			y1 = this->get_bottom();
            		}
HXLINE( 550)		return  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,x0,y0,(x1 - x0),(y1 - y0));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,_hx_union,return )

void Rectangle_obj::_hx___contract(Float x,Float y,Float width,Float height){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_554___contract)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
HXLINE( 554)
HXLINE( 555)		bool _hx_tmp;
HXDLIN( 555)		if ((this->width == 0)) {
HXLINE( 555)			_hx_tmp = (this->height == 0);
            		}
            		else {
HXLINE( 555)			_hx_tmp = false;
            		}
HXDLIN( 555)		if (_hx_tmp) {
HXLINE( 557)			return;
            		}
HXLINE( 560)		HX_VARI( Float,offsetX) = ((Float)0.0);
HXLINE( 561)		HX_VARI( Float,offsetY) = ((Float)0.0);
HXLINE( 562)		HX_VARI( Float,offsetRight) = ((Float)0.0);
HXLINE( 563)		HX_VARI( Float,offsetBottom) = ((Float)0.0);
HXLINE( 565)		if ((this->x < x)) {
HXLINE( 565)			offsetX = (x - this->x);
            		}
HXLINE( 566)		if ((this->y < y)) {
HXLINE( 566)			offsetY = (y - this->y);
            		}
HXLINE( 567)		if ((this->get_right() > (x + width))) {
HXLINE( 567)			offsetRight = ((x + width) - this->get_right());
            		}
HXLINE( 568)		if ((this->get_bottom() > (y + height))) {
HXLINE( 568)			offsetBottom = ((y + height) - this->get_bottom());
            		}
HXLINE( 570)		 ::openfl::geom::Rectangle _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 570)		_hx_tmp1->x = (_hx_tmp1->x + offsetX);
HXLINE( 571)		 ::openfl::geom::Rectangle _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 571)		_hx_tmp2->y = (_hx_tmp2->y + offsetY);
HXLINE( 572)		 ::openfl::geom::Rectangle _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 572)		_hx_tmp3->width = (_hx_tmp3->width + (offsetRight - offsetX));
HXLINE( 573)		 ::openfl::geom::Rectangle _hx_tmp4 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 573)		_hx_tmp4->height = (_hx_tmp4->height + (offsetBottom - offsetY));
            	}


HX_DEFINE_DYNAMIC_FUNC4(Rectangle_obj,_hx___contract,(void))

void Rectangle_obj::_hx___expand(Float x,Float y,Float width,Float height){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_577___expand)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
HXLINE( 577)
HXLINE( 578)		bool _hx_tmp;
HXDLIN( 578)		if ((this->width == 0)) {
HXLINE( 578)			_hx_tmp = (this->height == 0);
            		}
            		else {
HXLINE( 578)			_hx_tmp = false;
            		}
HXDLIN( 578)		if (_hx_tmp) {
HXLINE( 580)			this->x = x;
HXLINE( 581)			this->y = y;
HXLINE( 582)			this->width = width;
HXLINE( 583)			this->height = height;
HXLINE( 584)			return;
            		}
HXLINE( 587)		HX_VARI( Float,cacheRight) = this->get_right();
HXLINE( 588)		HX_VARI( Float,cacheBottom) = this->get_bottom();
HXLINE( 590)		if ((this->x > x)) {
HXLINE( 592)			this->x = x;
HXLINE( 593)			this->width = (cacheRight - x);
            		}
HXLINE( 595)		if ((this->y > y)) {
HXLINE( 597)			this->y = y;
HXLINE( 598)			this->height = (cacheBottom - y);
            		}
HXLINE( 600)		if ((cacheRight < (x + width))) {
HXLINE( 600)			this->width = ((x + width) - this->x);
            		}
HXLINE( 601)		if ((cacheBottom < (y + height))) {
HXLINE( 601)			this->height = ((y + height) - this->y);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Rectangle_obj,_hx___expand,(void))

 ::lime::math::Rectangle Rectangle_obj::_hx___toLimeRectangle(){
            	HX_GC_STACKFRAME(&_hx_pos_45de901e99b61471_606___toLimeRectangle)
            	HX_STACK_THIS(this)
HXLINE( 606)
HXLINE( 607)		if (::hx::IsNull( ::openfl::geom::Rectangle_obj::_hx___limeRectangle )) {
HXLINE( 609)			::openfl::geom::Rectangle_obj::_hx___limeRectangle =  ::lime::math::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 612)		::openfl::geom::Rectangle_obj::_hx___limeRectangle->setTo(this->x,this->y,this->width,this->height);
HXLINE( 613)		return ::openfl::geom::Rectangle_obj::_hx___limeRectangle;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,_hx___toLimeRectangle,return )

void Rectangle_obj::_hx___transform( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix m){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_618___transform)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rect,"rect")
            	HX_STACK_ARG(m,"m")
HXLINE( 618)
HXLINE( 619)		HX_VARI( Float,tx0) = ((m->a * this->x) + (m->c * this->y));
HXLINE( 620)		HX_VARI( Float,tx1) = tx0;
HXLINE( 621)		HX_VARI( Float,ty0) = ((m->b * this->x) + (m->d * this->y));
HXLINE( 622)		HX_VARI( Float,ty1) = ty0;
HXLINE( 624)		HX_VARI( Float,tx) = ((m->a * (this->x + this->width)) + (m->c * this->y));
HXLINE( 625)		HX_VARI( Float,ty) = ((m->b * (this->x + this->width)) + (m->d * this->y));
HXLINE( 627)		if ((tx < tx0)) {
HXLINE( 627)			tx0 = tx;
            		}
HXLINE( 628)		if ((ty < ty0)) {
HXLINE( 628)			ty0 = ty;
            		}
HXLINE( 629)		if ((tx > tx1)) {
HXLINE( 629)			tx1 = tx;
            		}
HXLINE( 630)		if ((ty > ty1)) {
HXLINE( 630)			ty1 = ty;
            		}
HXLINE( 632)		tx = ((m->a * (this->x + this->width)) + (m->c * (this->y + this->height)));
HXLINE( 633)		ty = ((m->b * (this->x + this->width)) + (m->d * (this->y + this->height)));
HXLINE( 635)		if ((tx < tx0)) {
HXLINE( 635)			tx0 = tx;
            		}
HXLINE( 636)		if ((ty < ty0)) {
HXLINE( 636)			ty0 = ty;
            		}
HXLINE( 637)		if ((tx > tx1)) {
HXLINE( 637)			tx1 = tx;
            		}
HXLINE( 638)		if ((ty > ty1)) {
HXLINE( 638)			ty1 = ty;
            		}
HXLINE( 640)		tx = ((m->a * this->x) + (m->c * (this->y + this->height)));
HXLINE( 641)		ty = ((m->b * this->x) + (m->d * (this->y + this->height)));
HXLINE( 643)		if ((tx < tx0)) {
HXLINE( 643)			tx0 = tx;
            		}
HXLINE( 644)		if ((ty < ty0)) {
HXLINE( 644)			ty0 = ty;
            		}
HXLINE( 645)		if ((tx > tx1)) {
HXLINE( 645)			tx1 = tx;
            		}
HXLINE( 646)		if ((ty > ty1)) {
HXLINE( 646)			ty1 = ty;
            		}
HXLINE( 648)		rect->setTo((tx0 + m->tx),(ty0 + m->ty),(tx1 - tx0),(ty1 - ty0));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,_hx___transform,(void))

Float Rectangle_obj::get_bottom(){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_654_get_bottom)
            	HX_STACK_THIS(this)
HXLINE( 654)
HXDLIN( 654)		return (this->y + this->height);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_bottom,return )

Float Rectangle_obj::set_bottom(Float b){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_658_set_bottom)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(b,"b")
HXLINE( 658)
HXLINE( 659)		this->height = (b - this->y);
HXLINE( 660)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_bottom,return )

 ::openfl::geom::Point Rectangle_obj::get_bottomRight(){
            	HX_GC_STACKFRAME(&_hx_pos_45de901e99b61471_665_get_bottomRight)
            	HX_STACK_THIS(this)
HXLINE( 665)
HXDLIN( 665)		return  ::openfl::geom::Point_obj::__alloc( HX_CTX ,(this->x + this->width),(this->y + this->height));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_bottomRight,return )

 ::openfl::geom::Point Rectangle_obj::set_bottomRight( ::openfl::geom::Point p){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_669_set_bottomRight)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(p,"p")
HXLINE( 669)
HXLINE( 670)		this->width = (p->x - this->x);
HXLINE( 671)		this->height = (p->y - this->y);
HXLINE( 672)		return p->clone();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_bottomRight,return )

Float Rectangle_obj::get_left(){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_677_get_left)
            	HX_STACK_THIS(this)
HXLINE( 677)
HXDLIN( 677)		return this->x;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_left,return )

Float Rectangle_obj::set_left(Float l){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_681_set_left)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(l,"l")
HXLINE( 681)
HXLINE( 682)		 ::openfl::geom::Rectangle _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 682)		_hx_tmp->width = (_hx_tmp->width - (l - this->x));
HXLINE( 683)		this->x = l;
HXLINE( 684)		return l;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_left,return )

Float Rectangle_obj::get_right(){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_689_get_right)
            	HX_STACK_THIS(this)
HXLINE( 689)
HXDLIN( 689)		return (this->x + this->width);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_right,return )

Float Rectangle_obj::set_right(Float r){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_693_set_right)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(r,"r")
HXLINE( 693)
HXLINE( 694)		this->width = (r - this->x);
HXLINE( 695)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_right,return )

 ::openfl::geom::Point Rectangle_obj::get_size(){
            	HX_GC_STACKFRAME(&_hx_pos_45de901e99b61471_700_get_size)
            	HX_STACK_THIS(this)
HXLINE( 700)
HXDLIN( 700)		return  ::openfl::geom::Point_obj::__alloc( HX_CTX ,this->width,this->height);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_size,return )

 ::openfl::geom::Point Rectangle_obj::set_size( ::openfl::geom::Point p){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_704_set_size)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(p,"p")
HXLINE( 704)
HXLINE( 705)		this->width = p->x;
HXLINE( 706)		this->height = p->y;
HXLINE( 707)		return p->clone();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_size,return )

Float Rectangle_obj::get_top(){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_712_get_top)
            	HX_STACK_THIS(this)
HXLINE( 712)
HXDLIN( 712)		return this->y;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_top,return )

Float Rectangle_obj::set_top(Float t){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_716_set_top)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(t,"t")
HXLINE( 716)
HXLINE( 717)		 ::openfl::geom::Rectangle _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 717)		_hx_tmp->height = (_hx_tmp->height - (t - this->y));
HXLINE( 718)		this->y = t;
HXLINE( 719)		return t;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_top,return )

 ::openfl::geom::Point Rectangle_obj::get_topLeft(){
            	HX_GC_STACKFRAME(&_hx_pos_45de901e99b61471_724_get_topLeft)
            	HX_STACK_THIS(this)
HXLINE( 724)
HXDLIN( 724)		return  ::openfl::geom::Point_obj::__alloc( HX_CTX ,this->x,this->y);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_topLeft,return )

 ::openfl::geom::Point Rectangle_obj::set_topLeft( ::openfl::geom::Point p){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_728_set_topLeft)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(p,"p")
HXLINE( 728)
HXLINE( 729)		this->x = p->x;
HXLINE( 730)		this->y = p->y;
HXLINE( 731)		return p->clone();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_topLeft,return )

 ::lime::math::Rectangle Rectangle_obj::_hx___limeRectangle;

 ::lime::utils::ObjectPool Rectangle_obj::_hx___pool;


::hx::ObjectPtr< Rectangle_obj > Rectangle_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height) {
	::hx::ObjectPtr< Rectangle_obj > __this = new Rectangle_obj();
	__this->__construct(__o_x,__o_y,__o_width,__o_height);
	return __this;
}

::hx::ObjectPtr< Rectangle_obj > Rectangle_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height) {
	Rectangle_obj *__this = (Rectangle_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Rectangle_obj), false, "openfl.geom.Rectangle"));
	*(void **)__this = Rectangle_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,__o_width,__o_height);
	return __this;
}

Rectangle_obj::Rectangle_obj()
{
}

::hx::Val Rectangle_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_top() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_left() ); }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_size() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_right() ); }
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTo") ) { return ::hx::Val( setTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"union") ) { return ::hx::Val( _hx_union_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bottom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_bottom() ); }
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"equals") ) { return ::hx::Val( equals_dyn() ); }
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"topLeft") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_topLeft() ); }
		if (HX_FIELD_EQ(inName,"inflate") ) { return ::hx::Val( inflate_dyn() ); }
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return ::hx::Val( isEmpty_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_top") ) { return ::hx::Val( get_top_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_top") ) { return ::hx::Val( set_top_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { return ::hx::Val( contains_dyn() ); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return ::hx::Val( copyFrom_dyn() ); }
		if (HX_FIELD_EQ(inName,"setEmpty") ) { return ::hx::Val( setEmpty_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		if (HX_FIELD_EQ(inName,"__expand") ) { return ::hx::Val( _hx___expand_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_left") ) { return ::hx::Val( get_left_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_left") ) { return ::hx::Val( set_left_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return ::hx::Val( get_size_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return ::hx::Val( set_size_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_right") ) { return ::hx::Val( get_right_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_right") ) { return ::hx::Val( set_right_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"intersects") ) { return ::hx::Val( intersects_dyn() ); }
		if (HX_FIELD_EQ(inName,"__contract") ) { return ::hx::Val( _hx___contract_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_bottom") ) { return ::hx::Val( get_bottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bottom") ) { return ::hx::Val( set_bottom_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bottomRight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_bottomRight() ); }
		if (HX_FIELD_EQ(inName,"offsetPoint") ) { return ::hx::Val( offsetPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"__transform") ) { return ::hx::Val( _hx___transform_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_topLeft") ) { return ::hx::Val( get_topLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_topLeft") ) { return ::hx::Val( set_topLeft_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"containsRect") ) { return ::hx::Val( containsRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"inflatePoint") ) { return ::hx::Val( inflatePoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"intersection") ) { return ::hx::Val( intersection_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"containsPoint") ) { return ::hx::Val( containsPoint_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_bottomRight") ) { return ::hx::Val( get_bottomRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bottomRight") ) { return ::hx::Val( set_bottomRight_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__toLimeRectangle") ) { return ::hx::Val( _hx___toLimeRectangle_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Rectangle_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { outValue = ( _hx___pool ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__limeRectangle") ) { outValue = ( _hx___limeRectangle ); return true; }
	}
	return false;
}

::hx::Val Rectangle_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_top(inValue.Cast< Float >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_left(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_size(inValue.Cast<  ::openfl::geom::Point >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_right(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bottom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_bottom(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"topLeft") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_topLeft(inValue.Cast<  ::openfl::geom::Point >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bottomRight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_bottomRight(inValue.Cast<  ::openfl::geom::Point >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Rectangle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { _hx___pool=ioValue.Cast<  ::lime::utils::ObjectPool >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__limeRectangle") ) { _hx___limeRectangle=ioValue.Cast<  ::lime::math::Rectangle >(); return true; }
	}
	return false;
}

void Rectangle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bottom",eb,e6,78,65));
	outFields->push(HX_("bottomRight",f1,a0,f4,4e));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("left",07,08,b0,47));
	outFields->push(HX_("right",dc,0b,64,e9));
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("top",95,66,58,00));
	outFields->push(HX_("topLeft",3c,09,c1,e8));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Rectangle_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Rectangle_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsFloat,(int)offsetof(Rectangle_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsFloat,(int)offsetof(Rectangle_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Rectangle_obj,y),HX_("y",79,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Rectangle_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::lime::math::Rectangle */ ,(void *) &Rectangle_obj::_hx___limeRectangle,HX_("__limeRectangle",3a,cb,cf,63)},
	{::hx::fsObject /*  ::lime::utils::ObjectPool */ ,(void *) &Rectangle_obj::_hx___pool,HX_("__pool",fc,e3,54,f9)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Rectangle_obj_sMemberFields[] = {
	HX_("height",e7,07,4c,02),
	HX_("width",06,b6,62,ca),
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("clone",5d,13,63,48),
	HX_("contains",1f,5a,7b,2c),
	HX_("containsPoint",b1,b9,eb,92),
	HX_("containsRect",e3,ce,1c,a6),
	HX_("copyFrom",bf,0b,61,c8),
	HX_("equals",3f,ee,f2,bf),
	HX_("inflate",87,9c,1b,0c),
	HX_("inflatePoint",49,be,39,32),
	HX_("intersection",49,a2,61,88),
	HX_("intersects",b4,c2,eb,e3),
	HX_("isEmpty",43,de,5f,0c),
	HX_("offset",93,97,3f,60),
	HX_("offsetPoint",bd,37,10,5f),
	HX_("setEmpty",8b,a3,0e,7e),
	HX_("setTo",bd,91,2f,7a),
	HX_("toString",ac,d0,6e,38),
	HX_("union",0f,65,e7,a6),
	HX_("__contract",32,52,ea,da),
	HX_("__expand",7a,59,a2,6c),
	HX_("__toLimeRectangle",bf,9c,93,92),
	HX_("__transform",4c,76,bf,73),
	HX_("get_bottom",b4,56,00,56),
	HX_("set_bottom",28,f5,7d,59),
	HX_("get_bottomRight",88,58,d6,0f),
	HX_("set_bottomRight",94,d5,a1,0b),
	HX_("get_left",90,c3,6a,c7),
	HX_("set_left",04,1d,c8,75),
	HX_("get_right",33,68,0d,2d),
	HX_("set_right",3f,54,5e,10),
	HX_("get_size",4a,5c,0e,cc),
	HX_("set_size",be,b5,6b,7a),
	HX_("get_top",2c,2f,cd,26),
	HX_("set_top",38,c0,ce,19),
	HX_("get_topLeft",53,69,bb,6e),
	HX_("set_topLeft",5f,70,28,79),
	::String(null()) };

static void Rectangle_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Rectangle_obj::_hx___limeRectangle,"__limeRectangle");
	HX_MARK_MEMBER_NAME(Rectangle_obj::_hx___pool,"__pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Rectangle_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Rectangle_obj::_hx___limeRectangle,"__limeRectangle");
	HX_VISIT_MEMBER_NAME(Rectangle_obj::_hx___pool,"__pool");
};

#endif

::hx::Class Rectangle_obj::__mClass;

static ::String Rectangle_obj_sStaticFields[] = {
	HX_("__limeRectangle",3a,cb,cf,63),
	HX_("__pool",fc,e3,54,f9),
	::String(null())
};

void Rectangle_obj::__register()
{
	Rectangle_obj _hx_dummy;
	Rectangle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.geom.Rectangle",fb,52,34,b7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Rectangle_obj::__GetStatic;
	__mClass->mSetStaticField = &Rectangle_obj::__SetStatic;
	__mClass->mMarkFunc = Rectangle_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Rectangle_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Rectangle_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Rectangle_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Rectangle_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Rectangle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Rectangle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Rectangle_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::openfl::geom::Rectangle _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_45de901e99b61471_62_boot)
HXLINE(  62)
HXDLIN(  62)			return  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
            		HX_END_LOCAL_FUNC0(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		void _hx_run( ::openfl::geom::Rectangle r){
            			HX_STACKFRAME(&_hx_pos_45de901e99b61471_63_boot)
            			HX_STACK_ARG(r,"r")
HXLINE(  63)
HXLINE(  63)			r->setTo(( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_45de901e99b61471_62_boot)
HXDLIN(  62)		_hx___pool =  ::lime::utils::ObjectPool_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0()), ::Dynamic(new _hx_Closure_1()),null());
            	}
}

} // end namespace openfl
} // end namespace geom
