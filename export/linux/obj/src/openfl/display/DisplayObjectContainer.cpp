#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_RangeError
#include <openfl/errors/RangeError.h>
#endif
#ifndef INCLUDED_openfl_errors_TypeError
#include <openfl/errors/TypeError.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_d11618aadd936e00_113_new,"openfl.display.DisplayObjectContainer","new",0x4362e03c,"openfl.display.DisplayObjectContainer.new","openfl/display/DisplayObjectContainer.hx",113,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_155_addChild,"openfl.display.DisplayObjectContainer","addChild",0x5694c25f,"openfl.display.DisplayObjectContainer.addChild","openfl/display/DisplayObjectContainer.hx",155,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_190_addChildAt,"openfl.display.DisplayObjectContainer","addChildAt",0xb7119132,"openfl.display.DisplayObjectContainer.addChildAt","openfl/display/DisplayObjectContainer.hx",190,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_300_areInaccessibleObjectsUnderPoint,"openfl.display.DisplayObjectContainer","areInaccessibleObjectsUnderPoint",0x2380e0e1,"openfl.display.DisplayObjectContainer.areInaccessibleObjectsUnderPoint","openfl/display/DisplayObjectContainer.hx",300,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_316_contains,"openfl.display.DisplayObjectContainer","contains",0xc3f94cc3,"openfl.display.DisplayObjectContainer.contains","openfl/display/DisplayObjectContainer.hx",316,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_339_getChildAt,"openfl.display.DisplayObjectContainer","getChildAt",0x9ee8eb5d,"openfl.display.DisplayObjectContainer.getChildAt","openfl/display/DisplayObjectContainer.hx",339,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_367_getChildByName,"openfl.display.DisplayObjectContainer","getChildByName",0x64b33f2c,"openfl.display.DisplayObjectContainer.getChildByName","openfl/display/DisplayObjectContainer.hx",367,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_385_getChildIndex,"openfl.display.DisplayObjectContainer","getChildIndex",0xcc3e62e8,"openfl.display.DisplayObjectContainer.getChildIndex","openfl/display/DisplayObjectContainer.hx",385,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_414_getObjectsUnderPoint,"openfl.display.DisplayObjectContainer","getObjectsUnderPoint",0x85c6693a,"openfl.display.DisplayObjectContainer.getObjectsUnderPoint","openfl/display/DisplayObjectContainer.hx",414,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_441_removeChild,"openfl.display.DisplayObjectContainer","removeChild",0x1a99d294,"openfl.display.DisplayObjectContainer.removeChild","openfl/display/DisplayObjectContainer.hx",441,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_496_removeChildAt,"openfl.display.DisplayObjectContainer","removeChildAt",0x52a2d8a7,"openfl.display.DisplayObjectContainer.removeChildAt","openfl/display/DisplayObjectContainer.hx",496,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_517_removeChildren,"openfl.display.DisplayObjectContainer","removeChildren",0xfbffdb47,"openfl.display.DisplayObjectContainer.removeChildren","openfl/display/DisplayObjectContainer.hx",517,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_546_resolve,"openfl.display.DisplayObjectContainer","resolve",0x8cca40c8,"openfl.display.DisplayObjectContainer.resolve","openfl/display/DisplayObjectContainer.hx",546,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_598_setChildIndex,"openfl.display.DisplayObjectContainer","setChildIndex",0x114444f4,"openfl.display.DisplayObjectContainer.setChildIndex","openfl/display/DisplayObjectContainer.hx",598,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_616_stopAllMovieClips,"openfl.display.DisplayObjectContainer","stopAllMovieClips",0x46e0f9ce,"openfl.display.DisplayObjectContainer.stopAllMovieClips","openfl/display/DisplayObjectContainer.hx",616,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_631_swapChildren,"openfl.display.DisplayObjectContainer","swapChildren",0xe0695f96,"openfl.display.DisplayObjectContainer.swapChildren","openfl/display/DisplayObjectContainer.hx",631,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_653_swapChildrenAt,"openfl.display.DisplayObjectContainer","swapChildrenAt",0xd5312a29,"openfl.display.DisplayObjectContainer.swapChildrenAt","openfl/display/DisplayObjectContainer.hx",653,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_662___cleanup,"openfl.display.DisplayObjectContainer","__cleanup",0x2346b9e0,"openfl.display.DisplayObjectContainer.__cleanup","openfl/display/DisplayObjectContainer.hx",662,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_674___cleanupRemovedChildren,"openfl.display.DisplayObjectContainer","__cleanupRemovedChildren",0x4395feff,"openfl.display.DisplayObjectContainer.__cleanupRemovedChildren","openfl/display/DisplayObjectContainer.hx",674,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_688___dispatchChildren,"openfl.display.DisplayObjectContainer","__dispatchChildren",0x7a91a8dd,"openfl.display.DisplayObjectContainer.__dispatchChildren","openfl/display/DisplayObjectContainer.hx",688,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_706___enterFrame,"openfl.display.DisplayObjectContainer","__enterFrame",0x3af993b9,"openfl.display.DisplayObjectContainer.__enterFrame","openfl/display/DisplayObjectContainer.hx",706,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_713___getBounds,"openfl.display.DisplayObjectContainer","__getBounds",0xe74ca467,"openfl.display.DisplayObjectContainer.__getBounds","openfl/display/DisplayObjectContainer.hx",713,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_733___getFilterBounds,"openfl.display.DisplayObjectContainer","__getFilterBounds",0xbea2d3bf,"openfl.display.DisplayObjectContainer.__getFilterBounds","openfl/display/DisplayObjectContainer.hx",733,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_759___getRenderBounds,"openfl.display.DisplayObjectContainer","__getRenderBounds",0x21a0a9dd,"openfl.display.DisplayObjectContainer.__getRenderBounds","openfl/display/DisplayObjectContainer.hx",759,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_788___hitTest,"openfl.display.DisplayObjectContainer","__hitTest",0x5a840e01,"openfl.display.DisplayObjectContainer.__hitTest","openfl/display/DisplayObjectContainer.hx",788,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_877___hitTestMask,"openfl.display.DisplayObjectContainer","__hitTestMask",0x4f390f8d,"openfl.display.DisplayObjectContainer.__hitTestMask","openfl/display/DisplayObjectContainer.hx",877,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_892___readGraphicsData,"openfl.display.DisplayObjectContainer","__readGraphicsData",0x782e37cf,"openfl.display.DisplayObjectContainer.__readGraphicsData","openfl/display/DisplayObjectContainer.hx",892,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_905___setStageReference,"openfl.display.DisplayObjectContainer","__setStageReference",0x58cb6d2b,"openfl.display.DisplayObjectContainer.__setStageReference","openfl/display/DisplayObjectContainer.hx",905,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_919___setWorldTransformInvalid,"openfl.display.DisplayObjectContainer","__setWorldTransformInvalid",0xa8fd351f,"openfl.display.DisplayObjectContainer.__setWorldTransformInvalid","openfl/display/DisplayObjectContainer.hx",919,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_935___stopAllMovieClips,"openfl.display.DisplayObjectContainer","__stopAllMovieClips",0xb7ce11ae,"openfl.display.DisplayObjectContainer.__stopAllMovieClips","openfl/display/DisplayObjectContainer.hx",935,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_942___tabTest,"openfl.display.DisplayObjectContainer","__tabTest",0xbd744b03,"openfl.display.DisplayObjectContainer.__tabTest","openfl/display/DisplayObjectContainer.hx",942,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_963___update,"openfl.display.DisplayObjectContainer","__update",0xc6b2e3cd,"openfl.display.DisplayObjectContainer.__update","openfl/display/DisplayObjectContainer.hx",963,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_978_get_numChildren,"openfl.display.DisplayObjectContainer","get_numChildren",0x73b78b18,"openfl.display.DisplayObjectContainer.get_numChildren","openfl/display/DisplayObjectContainer.hx",978,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_983_get_tabChildren,"openfl.display.DisplayObjectContainer","get_tabChildren",0x62bd2e27,"openfl.display.DisplayObjectContainer.get_tabChildren","openfl/display/DisplayObjectContainer.hx",983,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_987_set_tabChildren,"openfl.display.DisplayObjectContainer","set_tabChildren",0x5e88ab33,"openfl.display.DisplayObjectContainer.set_tabChildren","openfl/display/DisplayObjectContainer.hx",987,0x5f4d3d72)
namespace openfl{
namespace display{

void DisplayObjectContainer_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_d11618aadd936e00_113_new)
            	HX_STACK_THIS(this)
HXLINE( 113)
HXLINE( 114)		super::__construct();
HXLINE( 116)		this->mouseChildren = true;
HXLINE( 117)		this->_hx___tabChildren = true;
HXLINE( 119)		this->_hx___children = ::Array_obj< ::Dynamic>::__new();
HXLINE( 120)		int length = null();
HXDLIN( 120)		bool fixed = null();
HXDLIN( 120)		::Array< ::Dynamic> array = null();
HXDLIN( 120)		this->_hx___removedChildren =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
            	}

Dynamic DisplayObjectContainer_obj::__CreateEmpty() { return new DisplayObjectContainer_obj; }

void *DisplayObjectContainer_obj::_hx_vtable = 0;

Dynamic DisplayObjectContainer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DisplayObjectContainer_obj > _hx_result = new DisplayObjectContainer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DisplayObjectContainer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x0330636f) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		return inClassId==(int)0x4af7dd8e || inClassId==(int)0x6b353933;
	}
}

 ::openfl::display::DisplayObject DisplayObjectContainer_obj::addChild( ::openfl::display::DisplayObject child){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_155_addChild)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(child,"child")
HXLINE( 155)
HXDLIN( 155)		return this->addChildAt(child,this->get_numChildren());
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,addChild,return )

 ::openfl::display::DisplayObject DisplayObjectContainer_obj::addChildAt( ::openfl::display::DisplayObject child,int index){
            	HX_GC_STACKFRAME(&_hx_pos_d11618aadd936e00_190_addChildAt)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(child,"child")
            	HX_STACK_ARG(index,"index")
HXLINE( 190)
HXLINE( 191)		if (::hx::IsNull( child )) {
HXLINE( 193)			HX_VARI(  ::openfl::errors::TypeError,error) =  ::openfl::errors::TypeError_obj::__alloc( HX_CTX ,HX_("Error #2007: Parameter child must be non-null.",30,5a,a7,aa));
HXLINE( 194)			error->errorID = 2007;
HXLINE( 195)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(error));
            		}
            		else {
HXLINE( 198)			if (::hx::IsInstanceEq( child->stage,child )) {
HXLINE( 200)				HX_VARI(  ::openfl::errors::ArgumentError,error) =  ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("Error #3783: A Stage object cannot be added as the child of another object.",fa,51,93,42));
HXLINE( 201)				error->errorID = 3783;
HXLINE( 202)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(error));
            			}
            		}
HXLINE( 206)		bool _hx_tmp;
HXDLIN( 206)		if ((index <= this->_hx___children->length)) {
HXLINE( 206)			_hx_tmp = (index < 0);
            		}
            		else {
HXLINE( 206)			_hx_tmp = true;
            		}
HXDLIN( 206)		if (_hx_tmp) {
HXLINE( 208)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid index position ",80,59,50,86) + index)));
            		}
HXLINE( 211)		if (::hx::IsInstanceEq( child->parent,::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 213)			if (::hx::IsInstanceNotEq( this->_hx___children->__get(index).StaticCast<  ::openfl::display::DisplayObject >(),child )) {
HXLINE( 215)				this->_hx___children->remove(child);
HXLINE( 216)				this->_hx___children->insert(index,child);
HXLINE( 218)				if (!(this->_hx___renderDirty)) {
HXLINE( 218)					this->_hx___renderDirty = true;
HXDLIN( 218)					this->_hx___setParentRenderDirty();
            				}
            			}
            		}
            		else {
HXLINE( 223)			if (::hx::IsNotNull( child->parent )) {
HXLINE( 225)				child->parent->removeChild(child);
            			}
HXLINE( 228)			this->_hx___children->insert(index,child);
HXLINE( 229)			child->parent = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 231)			HX_VAR( bool,addedToStage);
HXDLIN( 231)			if (::hx::IsNotNull( this->stage )) {
HXLINE( 231)				addedToStage = ::hx::IsNull( child->stage );
            			}
            			else {
HXLINE( 231)				addedToStage = false;
            			}
HXLINE( 233)			if (addedToStage) {
HXLINE( 235)				child->_hx___setStageReference(this->stage);
            			}
HXLINE( 238)			child->_hx___setTransformDirty();
HXLINE( 239)			if (!(child->_hx___renderDirty)) {
HXLINE( 239)				child->_hx___renderDirty = true;
HXDLIN( 239)				child->_hx___setParentRenderDirty();
            			}
HXLINE( 240)			if (!(this->_hx___renderDirty)) {
HXLINE( 240)				this->_hx___renderDirty = true;
HXDLIN( 240)				this->_hx___setParentRenderDirty();
            			}
HXLINE( 246)			HX_VARI(  ::openfl::events::Event,event) =  ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("added",c0,d4,43,1c),null(),null());
HXLINE( 248)			event->bubbles = true;
HXLINE( 250)			event->target = child;
HXLINE( 252)			child->_hx___dispatchWithCapture(event);
HXLINE( 258)			if (addedToStage) {
HXLINE( 263)				event =  ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("addedToStage",63,22,55,0c),false,false);
HXLINE( 266)				child->_hx___dispatchWithCapture(event);
HXLINE( 267)				child->_hx___dispatchChildren(event);
            			}
            		}
HXLINE( 275)		return child;
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,addChildAt,return )

bool DisplayObjectContainer_obj::areInaccessibleObjectsUnderPoint( ::openfl::geom::Point point){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_300_areInaccessibleObjectsUnderPoint)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(point,"point")
HXLINE( 300)
HXDLIN( 300)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,areInaccessibleObjectsUnderPoint,return )

bool DisplayObjectContainer_obj::contains( ::openfl::display::DisplayObject child){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_316_contains)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(child,"child")
HXLINE( 316)
HXLINE( 317)		while(true){
HXLINE( 317)			bool _hx_tmp;
HXDLIN( 317)			if (::hx::IsInstanceNotEq( child,::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 317)				_hx_tmp = ::hx::IsNotNull( child );
            			}
            			else {
HXLINE( 317)				_hx_tmp = false;
            			}
HXDLIN( 317)			if (!(_hx_tmp)) {
HXLINE( 317)				goto _hx_goto_4;
            			}
HXLINE( 319)			child = child->parent;
            		}
            		_hx_goto_4:;
HXLINE( 322)		return ::hx::IsInstanceEq( child,::hx::ObjectPtr<OBJ_>(this) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,contains,return )

 ::openfl::display::DisplayObject DisplayObjectContainer_obj::getChildAt(int index){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_339_getChildAt)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(index,"index")
HXLINE( 339)
HXLINE( 340)		bool _hx_tmp;
HXDLIN( 340)		if ((index >= 0)) {
HXLINE( 340)			_hx_tmp = (index < this->_hx___children->length);
            		}
            		else {
HXLINE( 340)			_hx_tmp = false;
            		}
HXDLIN( 340)		if (_hx_tmp) {
HXLINE( 342)			return this->_hx___children->__get(index).StaticCast<  ::openfl::display::DisplayObject >();
            		}
HXLINE( 345)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildAt,return )

 ::openfl::display::DisplayObject DisplayObjectContainer_obj::getChildByName(::String name){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_367_getChildByName)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(name,"name")
HXLINE( 367)
HXLINE( 368)		{
HXLINE( 368)			int _g = 0;
HXDLIN( 368)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 368)			while((_g < _g1->length)){
HXLINE( 368)				HX_VARI(  ::openfl::display::DisplayObject,child) = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 368)				_g = (_g + 1);
HXLINE( 370)				if ((child->get_name() == name)) {
HXLINE( 370)					return child;
            				}
            			}
            		}
HXLINE( 373)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildByName,return )

int DisplayObjectContainer_obj::getChildIndex( ::openfl::display::DisplayObject child){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_385_getChildIndex)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(child,"child")
HXLINE( 385)
HXLINE( 386)		{
HXLINE( 386)			int _g = 0;
HXDLIN( 386)			int _g1 = this->_hx___children->length;
HXDLIN( 386)			while((_g < _g1)){
HXLINE( 386)				_g = (_g + 1);
HXDLIN( 386)				HX_VARI( int,i) = (_g - 1);
HXLINE( 388)				if (::hx::IsInstanceEq( this->_hx___children->__get(i).StaticCast<  ::openfl::display::DisplayObject >(),child )) {
HXLINE( 388)					return i;
            				}
            			}
            		}
HXLINE( 391)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildIndex,return )

::Array< ::Dynamic> DisplayObjectContainer_obj::getObjectsUnderPoint( ::openfl::geom::Point point){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_414_getObjectsUnderPoint)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(point,"point")
HXLINE( 414)
HXLINE( 415)		HX_VARI( ::Array< ::Dynamic>,stack) = ::Array_obj< ::Dynamic>::__new();
HXLINE( 416)		this->_hx___hitTest(point->x,point->y,false,stack,false,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 417)		stack->reverse();
HXLINE( 418)		return stack;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getObjectsUnderPoint,return )

 ::openfl::display::DisplayObject DisplayObjectContainer_obj::removeChild( ::openfl::display::DisplayObject child){
            	HX_GC_STACKFRAME(&_hx_pos_d11618aadd936e00_441_removeChild)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(child,"child")
HXLINE( 441)
HXLINE( 442)		bool _hx_tmp;
HXDLIN( 442)		if (::hx::IsNotNull( child )) {
HXLINE( 442)			_hx_tmp = ::hx::IsInstanceEq( child->parent,::hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXLINE( 442)			_hx_tmp = false;
            		}
HXDLIN( 442)		if (_hx_tmp) {
HXLINE( 444)			child->_hx___setTransformDirty();
HXLINE( 445)			if (!(child->_hx___renderDirty)) {
HXLINE( 445)				child->_hx___renderDirty = true;
HXDLIN( 445)				child->_hx___setParentRenderDirty();
            			}
HXLINE( 446)			if (!(this->_hx___renderDirty)) {
HXLINE( 446)				this->_hx___renderDirty = true;
HXDLIN( 446)				this->_hx___setParentRenderDirty();
            			}
HXLINE( 448)			HX_VARI(  ::openfl::events::Event,event) =  ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("removed",a0,1f,00,f3),true,null());
HXLINE( 449)			child->_hx___dispatchWithCapture(event);
HXLINE( 451)			if (::hx::IsNotNull( this->stage )) {
HXLINE( 453)				bool _hx_tmp;
HXDLIN( 453)				if (::hx::IsNotNull( child->stage )) {
HXLINE( 453)					_hx_tmp = ::hx::IsInstanceEq( this->stage->get_focus(),child );
            				}
            				else {
HXLINE( 453)					_hx_tmp = false;
            				}
HXDLIN( 453)				if (_hx_tmp) {
HXLINE( 455)					this->stage->set_focus(null());
            				}
HXLINE( 458)				HX_VARI(  ::openfl::events::Event,event) =  ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("removedFromStage",34,21,76,ba),false,false);
HXLINE( 459)				child->_hx___dispatchWithCapture(event);
HXLINE( 460)				child->_hx___dispatchChildren(event);
HXLINE( 461)				child->_hx___setStageReference(null());
            			}
HXLINE( 464)			child->parent = null();
HXLINE( 465)			this->_hx___children->remove(child);
HXLINE( 466)			this->_hx___removedChildren->push(child);
HXLINE( 467)			child->_hx___setTransformDirty();
            		}
HXLINE( 470)		return child;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChild,return )

 ::openfl::display::DisplayObject DisplayObjectContainer_obj::removeChildAt(int index){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_496_removeChildAt)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(index,"index")
HXLINE( 496)
HXLINE( 497)		bool _hx_tmp;
HXDLIN( 497)		if ((index >= 0)) {
HXLINE( 497)			_hx_tmp = (index < this->_hx___children->length);
            		}
            		else {
HXLINE( 497)			_hx_tmp = false;
            		}
HXDLIN( 497)		if (_hx_tmp) {
HXLINE( 499)			return this->removeChild(this->_hx___children->__get(index).StaticCast<  ::openfl::display::DisplayObject >());
            		}
HXLINE( 502)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChildAt,return )

void DisplayObjectContainer_obj::removeChildren(::hx::Null< int >  __o_beginIndex,::hx::Null< int >  __o_endIndex){
            		int beginIndex = __o_beginIndex.Default(0);
            		int endIndex = __o_endIndex.Default(2147483647);
            	HX_GC_STACKFRAME(&_hx_pos_d11618aadd936e00_517_removeChildren)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(beginIndex,"beginIndex")
            	HX_STACK_ARG(endIndex,"endIndex")
HXLINE( 517)
HXLINE( 518)		if ((endIndex == (int)2147483647)) {
HXLINE( 520)			endIndex = (this->_hx___children->length - 1);
HXLINE( 522)			if ((endIndex < 0)) {
HXLINE( 524)				return;
            			}
            		}
HXLINE( 528)		if ((beginIndex > (this->_hx___children->length - 1))) {
HXLINE( 530)			return;
            		}
            		else {
HXLINE( 532)			bool _hx_tmp;
HXDLIN( 532)			bool _hx_tmp1;
HXDLIN( 532)			if ((endIndex >= beginIndex)) {
HXLINE( 532)				_hx_tmp1 = (beginIndex < 0);
            			}
            			else {
HXLINE( 532)				_hx_tmp1 = true;
            			}
HXDLIN( 532)			if (!(_hx_tmp1)) {
HXLINE( 532)				_hx_tmp = (endIndex > this->_hx___children->length);
            			}
            			else {
HXLINE( 532)				_hx_tmp = true;
            			}
HXDLIN( 532)			if (_hx_tmp) {
HXLINE( 534)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::RangeError_obj::__alloc( HX_CTX ,HX_("The supplied index is out of bounds.",17,96,1b,51))));
            			}
            		}
HXLINE( 537)		HX_VARI( int,numRemovals) = (endIndex - beginIndex);
HXLINE( 538)		while((numRemovals >= 0)){
HXLINE( 540)			this->removeChildAt(beginIndex);
HXLINE( 541)			numRemovals = (numRemovals - 1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,removeChildren,(void))

 ::openfl::display::DisplayObject DisplayObjectContainer_obj::resolve(::String fieldName){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_546_resolve)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(fieldName,"fieldName")
HXLINE( 546)
HXLINE( 547)		if (::hx::IsNull( this->_hx___children )) {
HXLINE( 547)			return null();
            		}
HXLINE( 549)		{
HXLINE( 549)			int _g = 0;
HXDLIN( 549)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 549)			while((_g < _g1->length)){
HXLINE( 549)				HX_VARI(  ::openfl::display::DisplayObject,child) = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 549)				_g = (_g + 1);
HXLINE( 551)				if ((child->get_name() == fieldName)) {
HXLINE( 553)					return child;
            				}
            			}
            		}
HXLINE( 557)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,resolve,return )

void DisplayObjectContainer_obj::setChildIndex( ::openfl::display::DisplayObject child,int index){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_598_setChildIndex)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(child,"child")
            	HX_STACK_ARG(index,"index")
HXLINE( 598)
HXDLIN( 598)		bool _hx_tmp;
HXDLIN( 598)		bool _hx_tmp1;
HXDLIN( 598)		if ((index >= 0)) {
HXDLIN( 598)			_hx_tmp1 = (index <= this->_hx___children->length);
            		}
            		else {
HXDLIN( 598)			_hx_tmp1 = false;
            		}
HXDLIN( 598)		if (_hx_tmp1) {
HXDLIN( 598)			_hx_tmp = ::hx::IsInstanceEq( child->parent,::hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXDLIN( 598)			_hx_tmp = false;
            		}
HXDLIN( 598)		if (_hx_tmp) {
HXLINE( 600)			this->_hx___children->remove(child);
HXLINE( 601)			this->_hx___children->insert(index,child);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,setChildIndex,(void))

void DisplayObjectContainer_obj::stopAllMovieClips(){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_616_stopAllMovieClips)
            	HX_STACK_THIS(this)
HXLINE( 616)
HXDLIN( 616)		this->_hx___stopAllMovieClips();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,stopAllMovieClips,(void))

void DisplayObjectContainer_obj::swapChildren( ::openfl::display::DisplayObject child1, ::openfl::display::DisplayObject child2){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_631_swapChildren)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(child1,"child1")
            	HX_STACK_ARG(child2,"child2")
HXLINE( 631)
HXDLIN( 631)		bool _hx_tmp;
HXDLIN( 631)		if (::hx::IsInstanceEq( child1->parent,::hx::ObjectPtr<OBJ_>(this) )) {
HXDLIN( 631)			_hx_tmp = ::hx::IsInstanceEq( child2->parent,::hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXDLIN( 631)			_hx_tmp = false;
            		}
HXDLIN( 631)		if (_hx_tmp) {
HXLINE( 633)			HX_VARI( int,index1) = this->_hx___children->indexOf(child1,null());
HXLINE( 634)			HX_VARI( int,index2) = this->_hx___children->indexOf(child2,null());
HXLINE( 636)			this->_hx___children[index1] = child2;
HXLINE( 637)			this->_hx___children[index2] = child1;
HXLINE( 639)			if (!(this->_hx___renderDirty)) {
HXLINE( 639)				this->_hx___renderDirty = true;
HXDLIN( 639)				this->_hx___setParentRenderDirty();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildren,(void))

void DisplayObjectContainer_obj::swapChildrenAt(int index1,int index2){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_653_swapChildrenAt)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(index1,"index1")
            	HX_STACK_ARG(index2,"index2")
HXLINE( 653)
HXLINE( 654)		HX_VARI(  ::openfl::display::DisplayObject,swap) = this->_hx___children->__get(index1).StaticCast<  ::openfl::display::DisplayObject >();
HXLINE( 655)		this->_hx___children[index1] = this->_hx___children->__get(index2).StaticCast<  ::openfl::display::DisplayObject >();
HXLINE( 656)		this->_hx___children[index2] = swap;
HXLINE( 657)		swap = null();
HXLINE( 658)		if (!(this->_hx___renderDirty)) {
HXLINE( 658)			this->_hx___renderDirty = true;
HXDLIN( 658)			this->_hx___setParentRenderDirty();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildrenAt,(void))

void DisplayObjectContainer_obj::_hx___cleanup(){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_662___cleanup)
            	HX_STACK_THIS(this)
HXLINE( 662)
HXLINE( 663)		this->super::_hx___cleanup();
HXLINE( 665)		{
HXLINE( 665)			int _g = 0;
HXDLIN( 665)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 665)			while((_g < _g1->length)){
HXLINE( 665)				HX_VARI(  ::openfl::display::DisplayObject,child) = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 665)				_g = (_g + 1);
HXLINE( 667)				child->_hx___cleanup();
            			}
            		}
HXLINE( 670)		{
HXLINE( 670)			{
HXLINE( 670)				 ::Dynamic orphan = this->_hx___removedChildren->iterator();
HXDLIN( 670)				while(( (bool)(orphan->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 670)					 ::openfl::display::DisplayObject orphan1 = ( ( ::openfl::display::DisplayObject)(orphan->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 670)					if (::hx::IsNull( orphan1->stage )) {
HXLINE( 670)						orphan1->_hx___cleanup();
            					}
            				}
            			}
HXDLIN( 670)			this->_hx___removedChildren->set_length(0);
            		}
            	}


void DisplayObjectContainer_obj::_hx___cleanupRemovedChildren(){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_674___cleanupRemovedChildren)
            	HX_STACK_THIS(this)
HXLINE( 674)
HXLINE( 675)		{
HXLINE( 675)			HX_VARI(  ::Dynamic,orphan) = this->_hx___removedChildren->iterator();
HXDLIN( 675)			while(( (bool)(orphan->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 675)				HX_VARI(  ::openfl::display::DisplayObject,orphan1) = ( ( ::openfl::display::DisplayObject)(orphan->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 677)				if (::hx::IsNull( orphan1->stage )) {
HXLINE( 679)					orphan1->_hx___cleanup();
            				}
            			}
            		}
HXLINE( 683)		this->_hx___removedChildren->set_length(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,_hx___cleanupRemovedChildren,(void))

void DisplayObjectContainer_obj::_hx___dispatchChildren( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_688___dispatchChildren)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(event,"event")
HXLINE( 688)
HXDLIN( 688)		if (::hx::IsNotNull( this->_hx___children )) {
HXLINE( 690)			int _g = 0;
HXDLIN( 690)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 690)			while((_g < _g1->length)){
HXLINE( 690)				HX_VARI(  ::openfl::display::DisplayObject,child) = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 690)				_g = (_g + 1);
HXLINE( 692)				event->target = child;
HXLINE( 694)				if (!(child->_hx___dispatchWithCapture(event))) {
HXLINE( 696)					goto _hx_goto_27;
            				}
HXLINE( 699)				child->_hx___dispatchChildren(event);
            			}
            			_hx_goto_27:;
            		}
            	}


void DisplayObjectContainer_obj::_hx___enterFrame(int deltaTime){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_706___enterFrame)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(deltaTime,"deltaTime")
HXLINE( 706)
HXDLIN( 706)		int _g = 0;
HXDLIN( 706)		::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 706)		while((_g < _g1->length)){
HXDLIN( 706)			HX_VARI(  ::openfl::display::DisplayObject,child) = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 706)			_g = (_g + 1);
HXLINE( 708)			child->_hx___enterFrame(deltaTime);
            		}
            	}


void DisplayObjectContainer_obj::_hx___getBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_713___getBounds)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rect,"rect")
            	HX_STACK_ARG(matrix,"matrix")
HXLINE( 713)
HXLINE( 714)		this->super::_hx___getBounds(rect,matrix);
HXLINE( 716)		if ((this->_hx___children->length == 0)) {
HXLINE( 716)			return;
            		}
HXLINE( 718)		HX_VARI(  ::openfl::geom::Matrix,childWorldTransform) = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE( 720)		{
HXLINE( 720)			int _g = 0;
HXDLIN( 720)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 720)			while((_g < _g1->length)){
HXLINE( 720)				HX_VARI(  ::openfl::display::DisplayObject,child) = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 720)				_g = (_g + 1);
HXLINE( 722)				bool _hx_tmp;
HXDLIN( 722)				if ((child->_hx___scaleX != 0)) {
HXLINE( 722)					_hx_tmp = (child->_hx___scaleY == 0);
            				}
            				else {
HXLINE( 722)					_hx_tmp = true;
            				}
HXDLIN( 722)				if (_hx_tmp) {
HXLINE( 722)					continue;
            				}
HXLINE( 724)				{
HXLINE( 724)					 ::openfl::geom::Matrix local = child->_hx___transform;
HXDLIN( 724)					childWorldTransform->a = ((local->a * matrix->a) + (local->b * matrix->c));
HXDLIN( 724)					childWorldTransform->b = ((local->a * matrix->b) + (local->b * matrix->d));
HXDLIN( 724)					childWorldTransform->c = ((local->c * matrix->a) + (local->d * matrix->c));
HXDLIN( 724)					childWorldTransform->d = ((local->c * matrix->b) + (local->d * matrix->d));
HXDLIN( 724)					childWorldTransform->tx = (((local->tx * matrix->a) + (local->ty * matrix->c)) + matrix->tx);
HXDLIN( 724)					childWorldTransform->ty = (((local->tx * matrix->b) + (local->ty * matrix->d)) + matrix->ty);
            				}
HXLINE( 726)				child->_hx___getBounds(rect,childWorldTransform);
            			}
            		}
HXLINE( 729)		::openfl::geom::Matrix_obj::_hx___pool->release(childWorldTransform);
            	}


void DisplayObjectContainer_obj::_hx___getFilterBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_733___getFilterBounds)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rect,"rect")
            	HX_STACK_ARG(matrix,"matrix")
HXLINE( 733)
HXLINE( 734)		this->super::_hx___getFilterBounds(rect,matrix);
HXLINE( 735)		if (::hx::IsNotNull( this->_hx___scrollRect )) {
HXLINE( 735)			return;
            		}
HXLINE( 737)		if ((this->_hx___children->length == 0)) {
HXLINE( 737)			return;
            		}
HXLINE( 739)		HX_VARI(  ::openfl::geom::Matrix,childWorldTransform) = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE( 741)		{
HXLINE( 741)			int _g = 0;
HXDLIN( 741)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 741)			while((_g < _g1->length)){
HXLINE( 741)				HX_VARI(  ::openfl::display::DisplayObject,child) = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 741)				_g = (_g + 1);
HXLINE( 743)				bool _hx_tmp;
HXDLIN( 743)				bool _hx_tmp1;
HXDLIN( 743)				if ((child->_hx___scaleX != 0)) {
HXLINE( 743)					_hx_tmp1 = (child->_hx___scaleY == 0);
            				}
            				else {
HXLINE( 743)					_hx_tmp1 = true;
            				}
HXDLIN( 743)				if (!(_hx_tmp1)) {
HXLINE( 743)					_hx_tmp = child->_hx___isMask;
            				}
            				else {
HXLINE( 743)					_hx_tmp = true;
            				}
HXDLIN( 743)				if (_hx_tmp) {
HXLINE( 743)					continue;
            				}
HXLINE( 745)				{
HXLINE( 745)					 ::openfl::geom::Matrix local = child->_hx___transform;
HXDLIN( 745)					childWorldTransform->a = ((local->a * matrix->a) + (local->b * matrix->c));
HXDLIN( 745)					childWorldTransform->b = ((local->a * matrix->b) + (local->b * matrix->d));
HXDLIN( 745)					childWorldTransform->c = ((local->c * matrix->a) + (local->d * matrix->c));
HXDLIN( 745)					childWorldTransform->d = ((local->c * matrix->b) + (local->d * matrix->d));
HXDLIN( 745)					childWorldTransform->tx = (((local->tx * matrix->a) + (local->ty * matrix->c)) + matrix->tx);
HXDLIN( 745)					childWorldTransform->ty = (((local->tx * matrix->b) + (local->ty * matrix->d)) + matrix->ty);
            				}
HXLINE( 747)				HX_VARI(  ::openfl::geom::Rectangle,childRect) = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE( 749)				child->_hx___getFilterBounds(childRect,childWorldTransform);
HXLINE( 750)				rect->_hx___expand(childRect->x,childRect->y,childRect->width,childRect->height);
HXLINE( 752)				::openfl::geom::Rectangle_obj::_hx___pool->release(childRect);
            			}
            		}
HXLINE( 755)		::openfl::geom::Matrix_obj::_hx___pool->release(childWorldTransform);
            	}


void DisplayObjectContainer_obj::_hx___getRenderBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_759___getRenderBounds)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rect,"rect")
            	HX_STACK_ARG(matrix,"matrix")
HXLINE( 759)
HXLINE( 760)		if (::hx::IsNotNull( this->_hx___scrollRect )) {
HXLINE( 762)			this->super::_hx___getRenderBounds(rect,matrix);
HXLINE( 763)			return;
            		}
            		else {
HXLINE( 767)			this->super::_hx___getBounds(rect,matrix);
            		}
HXLINE( 770)		if ((this->_hx___children->length == 0)) {
HXLINE( 770)			return;
            		}
HXLINE( 772)		HX_VARI(  ::openfl::geom::Matrix,childWorldTransform) = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE( 774)		{
HXLINE( 774)			int _g = 0;
HXDLIN( 774)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 774)			while((_g < _g1->length)){
HXLINE( 774)				HX_VARI(  ::openfl::display::DisplayObject,child) = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 774)				_g = (_g + 1);
HXLINE( 776)				bool _hx_tmp;
HXDLIN( 776)				bool _hx_tmp1;
HXDLIN( 776)				if ((child->_hx___scaleX != 0)) {
HXLINE( 776)					_hx_tmp1 = (child->_hx___scaleY == 0);
            				}
            				else {
HXLINE( 776)					_hx_tmp1 = true;
            				}
HXDLIN( 776)				if (!(_hx_tmp1)) {
HXLINE( 776)					_hx_tmp = child->_hx___isMask;
            				}
            				else {
HXLINE( 776)					_hx_tmp = true;
            				}
HXDLIN( 776)				if (_hx_tmp) {
HXLINE( 776)					continue;
            				}
HXLINE( 778)				{
HXLINE( 778)					 ::openfl::geom::Matrix local = child->_hx___transform;
HXDLIN( 778)					childWorldTransform->a = ((local->a * matrix->a) + (local->b * matrix->c));
HXDLIN( 778)					childWorldTransform->b = ((local->a * matrix->b) + (local->b * matrix->d));
HXDLIN( 778)					childWorldTransform->c = ((local->c * matrix->a) + (local->d * matrix->c));
HXDLIN( 778)					childWorldTransform->d = ((local->c * matrix->b) + (local->d * matrix->d));
HXDLIN( 778)					childWorldTransform->tx = (((local->tx * matrix->a) + (local->ty * matrix->c)) + matrix->tx);
HXDLIN( 778)					childWorldTransform->ty = (((local->tx * matrix->b) + (local->ty * matrix->d)) + matrix->ty);
            				}
HXLINE( 780)				child->_hx___getRenderBounds(rect,childWorldTransform);
            			}
            		}
HXLINE( 783)		::openfl::geom::Matrix_obj::_hx___pool->release(childWorldTransform);
            	}


bool DisplayObjectContainer_obj::_hx___hitTest(Float x,Float y,bool shapeFlag,::Array< ::Dynamic> stack,bool interactiveOnly, ::openfl::display::DisplayObject hitObject){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_788___hitTest)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
            	HX_STACK_ARG(shapeFlag,"shapeFlag")
            	HX_STACK_ARG(stack,"stack")
            	HX_STACK_ARG(interactiveOnly,"interactiveOnly")
            	HX_STACK_ARG(hitObject,"hitObject")
HXLINE( 788)
HXLINE( 789)		bool _hx_tmp;
HXDLIN( 789)		bool _hx_tmp1;
HXDLIN( 789)		if (hitObject->get_visible()) {
HXLINE( 789)			_hx_tmp1 = this->_hx___isMask;
            		}
            		else {
HXLINE( 789)			_hx_tmp1 = true;
            		}
HXDLIN( 789)		if (!(_hx_tmp1)) {
HXLINE( 789)			bool _hx_tmp1;
HXDLIN( 789)			if (interactiveOnly) {
HXLINE( 789)				_hx_tmp1 = !(this->mouseEnabled);
            			}
            			else {
HXLINE( 789)				_hx_tmp1 = false;
            			}
HXDLIN( 789)			if (_hx_tmp1) {
HXLINE( 789)				_hx_tmp = !(this->mouseChildren);
            			}
            			else {
HXLINE( 789)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 789)			_hx_tmp = true;
            		}
HXDLIN( 789)		if (_hx_tmp) {
HXLINE( 789)			return false;
            		}
HXLINE( 790)		bool _hx_tmp2;
HXDLIN( 790)		if (::hx::IsNotNull( this->get_mask() )) {
HXLINE( 790)			_hx_tmp2 = !(this->get_mask()->_hx___hitTestMask(x,y));
            		}
            		else {
HXLINE( 790)			_hx_tmp2 = false;
            		}
HXDLIN( 790)		if (_hx_tmp2) {
HXLINE( 790)			return false;
            		}
HXLINE( 792)		if (::hx::IsNotNull( this->_hx___scrollRect )) {
HXLINE( 794)			HX_VARI(  ::openfl::geom::Point,point) = ::openfl::geom::Point_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Point >();
HXLINE( 795)			point->setTo(x,y);
HXLINE( 796)			{
HXLINE( 796)				 ::openfl::geom::Matrix _this = this->_hx___getRenderTransform();
HXDLIN( 796)				Float norm = ((_this->a * _this->d) - (_this->b * _this->c));
HXDLIN( 796)				if ((norm == 0)) {
HXLINE( 796)					point->x = -(_this->tx);
HXDLIN( 796)					point->y = -(_this->ty);
            				}
            				else {
HXLINE( 796)					Float px = ((((Float)1.0) / norm) * ((_this->c * (_this->ty - point->y)) + (_this->d * (point->x - _this->tx))));
HXDLIN( 796)					point->y = ((((Float)1.0) / norm) * ((_this->a * (point->y - _this->ty)) + (_this->b * (_this->tx - point->x))));
HXDLIN( 796)					point->x = px;
            				}
            			}
HXLINE( 798)			if (!(this->_hx___scrollRect->containsPoint(point))) {
HXLINE( 800)				::openfl::geom::Point_obj::_hx___pool->release(point);
HXLINE( 801)				return false;
            			}
HXLINE( 804)			::openfl::geom::Point_obj::_hx___pool->release(point);
            		}
HXLINE( 807)		HX_VARI( int,i) = this->_hx___children->length;
HXLINE( 808)		if (interactiveOnly) {
HXLINE( 810)			bool _hx_tmp;
HXDLIN( 810)			if (::hx::IsNotNull( stack )) {
HXLINE( 810)				_hx_tmp = !(this->mouseChildren);
            			}
            			else {
HXLINE( 810)				_hx_tmp = true;
            			}
HXDLIN( 810)			if (_hx_tmp) {
HXLINE( 812)				while(true){
HXLINE( 812)					i = (i - 1);
HXDLIN( 812)					if (!((i >= 0))) {
HXLINE( 812)						goto _hx_goto_37;
            					}
HXLINE( 814)					if (this->_hx___children->__get(i).StaticCast<  ::openfl::display::DisplayObject >()->_hx___hitTest(x,y,shapeFlag,null(),true,this->_hx___children->__get(i).StaticCast<  ::openfl::display::DisplayObject >())) {
HXLINE( 816)						if (::hx::IsNotNull( stack )) {
HXLINE( 818)							stack->push(hitObject);
            						}
HXLINE( 821)						return true;
            					}
            				}
            				_hx_goto_37:;
            			}
            			else {
HXLINE( 825)				if (::hx::IsNotNull( stack )) {
HXLINE( 827)					HX_VARI( int,length) = stack->length;
HXLINE( 829)					HX_VARI( bool,interactive) = false;
HXLINE( 830)					HX_VARI( bool,hitTest) = false;
HXLINE( 832)					while(true){
HXLINE( 832)						i = (i - 1);
HXDLIN( 832)						if (!((i >= 0))) {
HXLINE( 832)							goto _hx_goto_38;
            						}
HXLINE( 834)						interactive = this->_hx___children->__get(i).StaticCast<  ::openfl::display::DisplayObject >()->_hx___getInteractive(null());
HXLINE( 836)						bool _hx_tmp;
HXDLIN( 836)						if (!(interactive)) {
HXLINE( 836)							if (this->mouseEnabled) {
HXLINE( 836)								_hx_tmp = !(hitTest);
            							}
            							else {
HXLINE( 836)								_hx_tmp = false;
            							}
            						}
            						else {
HXLINE( 836)							_hx_tmp = true;
            						}
HXDLIN( 836)						if (_hx_tmp) {
HXLINE( 838)							if (this->_hx___children->__get(i).StaticCast<  ::openfl::display::DisplayObject >()->_hx___hitTest(x,y,shapeFlag,stack,true,this->_hx___children->__get(i).StaticCast<  ::openfl::display::DisplayObject >())) {
HXLINE( 840)								hitTest = true;
HXLINE( 842)								bool _hx_tmp;
HXDLIN( 842)								if (interactive) {
HXLINE( 842)									_hx_tmp = (stack->length > length);
            								}
            								else {
HXLINE( 842)									_hx_tmp = false;
            								}
HXDLIN( 842)								if (_hx_tmp) {
HXLINE( 844)									goto _hx_goto_38;
            								}
            							}
            						}
            					}
            					_hx_goto_38:;
HXLINE( 850)					if (hitTest) {
HXLINE( 852)						stack->insert(length,hitObject);
HXLINE( 853)						return true;
            					}
            				}
            			}
            		}
            		else {
HXLINE( 859)			HX_VARI( bool,hitTest) = false;
HXLINE( 861)			while(true){
HXLINE( 861)				i = (i - 1);
HXDLIN( 861)				if (!((i >= 0))) {
HXLINE( 861)					goto _hx_goto_39;
            				}
HXLINE( 863)				if (this->_hx___children->__get(i).StaticCast<  ::openfl::display::DisplayObject >()->_hx___hitTest(x,y,shapeFlag,stack,false,this->_hx___children->__get(i).StaticCast<  ::openfl::display::DisplayObject >())) {
HXLINE( 865)					hitTest = true;
HXLINE( 866)					if (::hx::IsNull( stack )) {
HXLINE( 866)						goto _hx_goto_39;
            					}
            				}
            			}
            			_hx_goto_39:;
HXLINE( 870)			return hitTest;
            		}
HXLINE( 873)		return false;
            	}


bool DisplayObjectContainer_obj::_hx___hitTestMask(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_877___hitTestMask)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
HXLINE( 877)
HXLINE( 878)		HX_VARI( int,i) = this->_hx___children->length;
HXLINE( 880)		while(true){
HXLINE( 880)			i = (i - 1);
HXDLIN( 880)			if (!((i >= 0))) {
HXLINE( 880)				goto _hx_goto_41;
            			}
HXLINE( 882)			if (this->_hx___children->__get(i).StaticCast<  ::openfl::display::DisplayObject >()->_hx___hitTestMask(x,y)) {
HXLINE( 884)				return true;
            			}
            		}
            		_hx_goto_41:;
HXLINE( 888)		return false;
            	}


void DisplayObjectContainer_obj::_hx___readGraphicsData( ::openfl::_Vector::ObjectVector graphicsData,bool recurse){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_892___readGraphicsData)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(graphicsData,"graphicsData")
            	HX_STACK_ARG(recurse,"recurse")
HXLINE( 892)
HXLINE( 893)		this->super::_hx___readGraphicsData(graphicsData,recurse);
HXLINE( 895)		if (recurse) {
HXLINE( 897)			int _g = 0;
HXDLIN( 897)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 897)			while((_g < _g1->length)){
HXLINE( 897)				HX_VARI(  ::openfl::display::DisplayObject,child) = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 897)				_g = (_g + 1);
HXLINE( 899)				child->_hx___readGraphicsData(graphicsData,recurse);
            			}
            		}
            	}


void DisplayObjectContainer_obj::_hx___setStageReference( ::openfl::display::Stage stage){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_905___setStageReference)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(stage,"stage")
HXLINE( 905)
HXLINE( 906)		this->super::_hx___setStageReference(stage);
HXLINE( 908)		if (::hx::IsNotNull( this->_hx___children )) {
HXLINE( 910)			int _g = 0;
HXDLIN( 910)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 910)			while((_g < _g1->length)){
HXLINE( 910)				HX_VARI(  ::openfl::display::DisplayObject,child) = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 910)				_g = (_g + 1);
HXLINE( 912)				child->_hx___setStageReference(stage);
            			}
            		}
            	}


void DisplayObjectContainer_obj::_hx___setWorldTransformInvalid(){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_919___setWorldTransformInvalid)
            	HX_STACK_THIS(this)
HXLINE( 919)
HXDLIN( 919)		if (!(this->_hx___worldTransformInvalid)) {
HXLINE( 921)			this->_hx___worldTransformInvalid = true;
HXLINE( 923)			if (::hx::IsNotNull( this->_hx___children )) {
HXLINE( 925)				int _g = 0;
HXDLIN( 925)				::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 925)				while((_g < _g1->length)){
HXLINE( 925)					HX_VARI(  ::openfl::display::DisplayObject,child) = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 925)					_g = (_g + 1);
HXLINE( 927)					child->_hx___setWorldTransformInvalid();
            				}
            			}
            		}
            	}


void DisplayObjectContainer_obj::_hx___stopAllMovieClips(){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_935___stopAllMovieClips)
            	HX_STACK_THIS(this)
HXLINE( 935)
HXDLIN( 935)		int _g = 0;
HXDLIN( 935)		::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 935)		while((_g < _g1->length)){
HXDLIN( 935)			HX_VARI(  ::openfl::display::DisplayObject,child) = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 935)			_g = (_g + 1);
HXLINE( 937)			child->_hx___stopAllMovieClips();
            		}
            	}


void DisplayObjectContainer_obj::_hx___tabTest(::Array< ::Dynamic> stack){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_942___tabTest)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(stack,"stack")
HXLINE( 942)
HXLINE( 943)		this->super::_hx___tabTest(stack);
HXLINE( 945)		if (!(this->get_tabChildren())) {
HXLINE( 945)			return;
            		}
HXLINE( 947)		HX_VARI( bool,interactive) = false;
HXLINE( 948)		HX_VARI(  ::openfl::display::InteractiveObject,interactiveObject) = null();
HXLINE( 950)		{
HXLINE( 950)			int _g = 0;
HXDLIN( 950)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 950)			while((_g < _g1->length)){
HXLINE( 950)				HX_VARI(  ::openfl::display::DisplayObject,child) = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 950)				_g = (_g + 1);
HXLINE( 952)				interactive = child->_hx___getInteractive(null());
HXLINE( 954)				if (interactive) {
HXLINE( 956)					interactiveObject = ( ( ::openfl::display::InteractiveObject)(child) );
HXLINE( 957)					interactiveObject->_hx___tabTest(stack);
            				}
            			}
            		}
            	}


void DisplayObjectContainer_obj::_hx___update(bool transformOnly,bool updateChildren){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_963___update)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(transformOnly,"transformOnly")
            	HX_STACK_ARG(updateChildren,"updateChildren")
HXLINE( 963)
HXLINE( 964)		this->super::_hx___update(transformOnly,updateChildren);
HXLINE( 966)		if (updateChildren) {
HXLINE( 968)			int _g = 0;
HXDLIN( 968)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 968)			while((_g < _g1->length)){
HXLINE( 968)				HX_VARI(  ::openfl::display::DisplayObject,child) = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 968)				_g = (_g + 1);
HXLINE( 970)				child->_hx___update(transformOnly,true);
            			}
            		}
            	}


int DisplayObjectContainer_obj::get_numChildren(){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_978_get_numChildren)
            	HX_STACK_THIS(this)
HXLINE( 978)
HXDLIN( 978)		return this->_hx___children->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_numChildren,return )

bool DisplayObjectContainer_obj::get_tabChildren(){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_983_get_tabChildren)
            	HX_STACK_THIS(this)
HXLINE( 983)
HXDLIN( 983)		return this->_hx___tabChildren;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_tabChildren,return )

bool DisplayObjectContainer_obj::set_tabChildren(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_d11618aadd936e00_987_set_tabChildren)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 987)
HXLINE( 988)		if ((this->_hx___tabChildren != value)) {
HXLINE( 990)			this->_hx___tabChildren = value;
HXLINE( 992)			this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("tabChildrenChange",44,91,b5,de),true,false));
            		}
HXLINE( 995)		return this->_hx___tabChildren;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,set_tabChildren,return )


::hx::ObjectPtr< DisplayObjectContainer_obj > DisplayObjectContainer_obj::__new() {
	::hx::ObjectPtr< DisplayObjectContainer_obj > __this = new DisplayObjectContainer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DisplayObjectContainer_obj > DisplayObjectContainer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DisplayObjectContainer_obj *__this = (DisplayObjectContainer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DisplayObjectContainer_obj), true, "openfl.display.DisplayObjectContainer"));
	*(void **)__this = DisplayObjectContainer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DisplayObjectContainer_obj::DisplayObjectContainer_obj()
{
}

void DisplayObjectContainer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObjectContainer);
	HX_MARK_MEMBER_NAME(mouseChildren,"mouseChildren");
	HX_MARK_MEMBER_NAME(_hx___removedChildren,"__removedChildren");
	HX_MARK_MEMBER_NAME(_hx___tabChildren,"__tabChildren");
	 ::openfl::display::InteractiveObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObjectContainer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mouseChildren,"mouseChildren");
	HX_VISIT_MEMBER_NAME(_hx___removedChildren,"__removedChildren");
	HX_VISIT_MEMBER_NAME(_hx___tabChildren,"__tabChildren");
	 ::openfl::display::InteractiveObject_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DisplayObjectContainer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return ::hx::Val( resolve_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addChild") ) { return ::hx::Val( addChild_dyn() ); }
		if (HX_FIELD_EQ(inName,"contains") ) { return ::hx::Val( contains_dyn() ); }
		if (HX_FIELD_EQ(inName,"__update") ) { return ::hx::Val( _hx___update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__cleanup") ) { return ::hx::Val( _hx___cleanup_dyn() ); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return ::hx::Val( _hx___hitTest_dyn() ); }
		if (HX_FIELD_EQ(inName,"__tabTest") ) { return ::hx::Val( _hx___tabTest_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return ::hx::Val( addChildAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getChildAt") ) { return ::hx::Val( getChildAt_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numChildren() ); }
		if (HX_FIELD_EQ(inName,"tabChildren") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_tabChildren() ); }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return ::hx::Val( removeChild_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return ::hx::Val( _hx___getBounds_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"swapChildren") ) { return ::hx::Val( swapChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"__enterFrame") ) { return ::hx::Val( _hx___enterFrame_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { return ::hx::Val( mouseChildren ); }
		if (HX_FIELD_EQ(inName,"__tabChildren") ) { return ::hx::Val( _hx___tabChildren ); }
		if (HX_FIELD_EQ(inName,"getChildIndex") ) { return ::hx::Val( getChildIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return ::hx::Val( removeChildAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"setChildIndex") ) { return ::hx::Val( setChildIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return ::hx::Val( _hx___hitTestMask_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getChildByName") ) { return ::hx::Val( getChildByName_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeChildren") ) { return ::hx::Val( removeChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"swapChildrenAt") ) { return ::hx::Val( swapChildrenAt_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numChildren") ) { return ::hx::Val( get_numChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_tabChildren") ) { return ::hx::Val( get_tabChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_tabChildren") ) { return ::hx::Val( set_tabChildren_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__removedChildren") ) { return ::hx::Val( _hx___removedChildren ); }
		if (HX_FIELD_EQ(inName,"stopAllMovieClips") ) { return ::hx::Val( stopAllMovieClips_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getFilterBounds") ) { return ::hx::Val( _hx___getFilterBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getRenderBounds") ) { return ::hx::Val( _hx___getRenderBounds_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__dispatchChildren") ) { return ::hx::Val( _hx___dispatchChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"__readGraphicsData") ) { return ::hx::Val( _hx___readGraphicsData_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__setStageReference") ) { return ::hx::Val( _hx___setStageReference_dyn() ); }
		if (HX_FIELD_EQ(inName,"__stopAllMovieClips") ) { return ::hx::Val( _hx___stopAllMovieClips_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getObjectsUnderPoint") ) { return ::hx::Val( getObjectsUnderPoint_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"__cleanupRemovedChildren") ) { return ::hx::Val( _hx___cleanupRemovedChildren_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__setWorldTransformInvalid") ) { return ::hx::Val( _hx___setWorldTransformInvalid_dyn() ); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"areInaccessibleObjectsUnderPoint") ) { return ::hx::Val( areInaccessibleObjectsUnderPoint_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DisplayObjectContainer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"tabChildren") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_tabChildren(inValue.Cast< bool >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { mouseChildren=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__tabChildren") ) { _hx___tabChildren=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__removedChildren") ) { _hx___removedChildren=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DisplayObjectContainer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("mouseChildren",84,18,6b,ff));
	outFields->push(HX_("numChildren",a5,69,80,5c));
	outFields->push(HX_("tabChildren",b4,0c,86,4b));
	outFields->push(HX_("__removedChildren",df,c5,0e,d3));
	outFields->push(HX_("__tabChildren",94,4d,fe,93));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DisplayObjectContainer_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(DisplayObjectContainer_obj,mouseChildren),HX_("mouseChildren",84,18,6b,ff)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(DisplayObjectContainer_obj,_hx___removedChildren),HX_("__removedChildren",df,c5,0e,d3)},
	{::hx::fsBool,(int)offsetof(DisplayObjectContainer_obj,_hx___tabChildren),HX_("__tabChildren",94,4d,fe,93)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DisplayObjectContainer_obj_sStaticStorageInfo = 0;
#endif

static ::String DisplayObjectContainer_obj_sMemberFields[] = {
	HX_("mouseChildren",84,18,6b,ff),
	HX_("__removedChildren",df,c5,0e,d3),
	HX_("__tabChildren",94,4d,fe,93),
	HX_("addChild",bb,cf,16,bf),
	HX_("addChildAt",8e,ad,36,ce),
	HX_("areInaccessibleObjectsUnderPoint",3d,22,9b,1e),
	HX_("contains",1f,5a,7b,2c),
	HX_("getChildAt",b9,07,0e,b6),
	HX_("getChildByName",88,b9,73,a3),
	HX_("getChildIndex",0c,68,02,b9),
	HX_("getObjectsUnderPoint",96,10,d5,80),
	HX_("removeChild",b8,86,ed,43),
	HX_("removeChildAt",cb,dd,66,3f),
	HX_("removeChildren",a3,55,c0,3a),
	HX_("resolve",ec,12,60,67),
	HX_("setChildIndex",18,4a,08,fe),
	HX_("stopAllMovieClips",f2,60,f8,a0),
	HX_("swapChildren",f2,4a,53,e0),
	HX_("swapChildrenAt",85,a4,f1,13),
	HX_("__cleanup",04,5d,90,2c),
	HX_("__cleanupRemovedChildren",5b,84,61,c1),
	HX_("__dispatchChildren",39,81,f4,f4),
	HX_("__enterFrame",15,7f,e3,3a),
	HX_("__getBounds",8b,58,a0,10),
	HX_("__getFilterBounds",e3,3a,ba,18),
	HX_("__getRenderBounds",01,11,b8,7b),
	HX_("__hitTest",25,b1,cd,63),
	HX_("__hitTestMask",b1,14,fd,3b),
	HX_("__readGraphicsData",2b,10,91,f2),
	HX_("__setStageReference",4f,e5,e5,f4),
	HX_("__setWorldTransformInvalid",7b,c9,b9,d4),
	HX_("__stopAllMovieClips",d2,89,e8,53),
	HX_("__tabTest",27,ee,bd,c6),
	HX_("__update",29,f1,34,2f),
	HX_("get_numChildren",3c,21,62,1d),
	HX_("get_tabChildren",4b,c4,67,0c),
	HX_("set_tabChildren",57,41,33,08),
	::String(null()) };

::hx::Class DisplayObjectContainer_obj::__mClass;

void DisplayObjectContainer_obj::__register()
{
	DisplayObjectContainer_obj _hx_dummy;
	DisplayObjectContainer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.DisplayObjectContainer",4a,52,ef,89);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DisplayObjectContainer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DisplayObjectContainer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DisplayObjectContainer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DisplayObjectContainer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
