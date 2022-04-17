#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_system_debug_completion_CompletionListScrollBar
#include <flixel/system/debug/completion/CompletionListScrollBar.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_80093d47a78edb3b_16_new,"flixel.system.debug.completion.CompletionListScrollBar","new",0xf77443d4,"flixel.system.debug.completion.CompletionListScrollBar.new","flixel/system/debug/completion/CompletionListScrollBar.hx",16,0x884a099c)
HX_LOCAL_STACK_FRAME(_hx_pos_80093d47a78edb3b_28_updateHandle,"flixel.system.debug.completion.CompletionListScrollBar","updateHandle",0x7238a89d,"flixel.system.debug.completion.CompletionListScrollBar.updateHandle","flixel/system/debug/completion/CompletionListScrollBar.hx",28,0x884a099c)
HX_LOCAL_STACK_FRAME(_hx_pos_80093d47a78edb3b_10_boot,"flixel.system.debug.completion.CompletionListScrollBar","boot",0x8660163e,"flixel.system.debug.completion.CompletionListScrollBar.boot","flixel/system/debug/completion/CompletionListScrollBar.hx",10,0x884a099c)
HX_LOCAL_STACK_FRAME(_hx_pos_80093d47a78edb3b_11_boot,"flixel.system.debug.completion.CompletionListScrollBar","boot",0x8660163e,"flixel.system.debug.completion.CompletionListScrollBar.boot","flixel/system/debug/completion/CompletionListScrollBar.hx",11,0x884a099c)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace completion{

void CompletionListScrollBar_obj::__construct(int x,int y,int width,int height){
            	HX_GC_STACKFRAME(&_hx_pos_80093d47a78edb3b_16_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
HXLINE(  16)
HXLINE(  17)		super::__construct();
HXLINE(  19)		this->set_x(( (Float)(x) ));
HXLINE(  20)		this->set_y(( (Float)(y) ));
HXLINE(  22)		this->addChild( ::openfl::display::Bitmap_obj::__alloc( HX_CTX , ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,width,height,true,-12303292),null(),null()));
HXLINE(  23)		this->handle =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX , ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,width,1,true,-14540254),null(),null());
HXLINE(  24)		this->addChild(this->handle);
            	}

Dynamic CompletionListScrollBar_obj::__CreateEmpty() { return new CompletionListScrollBar_obj; }

void *CompletionListScrollBar_obj::_hx_vtable = 0;

Dynamic CompletionListScrollBar_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CompletionListScrollBar_obj > _hx_result = new CompletionListScrollBar_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool CompletionListScrollBar_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x6b353933) {
			return inClassId==(int)0x4af7dd8e || inClassId==(int)0x6b353933;
		} else {
			return inClassId==(int)0x7620b168;
		}
	}
}

void CompletionListScrollBar_obj::updateHandle(int lower,int items,int entries){
            	HX_STACKFRAME(&_hx_pos_80093d47a78edb3b_28_updateHandle)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(lower,"lower")
            	HX_STACK_ARG(items,"items")
            	HX_STACK_ARG(entries,"entries")
HXLINE(  28)
HXLINE(  29)		 ::openfl::display::Bitmap _hx_tmp = this->handle;
HXDLIN(  29)		Float _hx_tmp1 = ((this->get_height() / ( (Float)(items) )) * ( (Float)(entries) ));
HXDLIN(  29)		_hx_tmp->set_scaleY(::Math_obj::min(_hx_tmp1,this->get_height()));
HXLINE(  30)		 ::openfl::display::Bitmap _hx_tmp2 = this->handle;
HXDLIN(  30)		_hx_tmp2->set_y(((this->get_height() / ( (Float)(items) )) * ( (Float)(lower) )));
HXLINE(  31)		 ::openfl::display::Bitmap _hx_tmp3 = this->handle;
HXDLIN(  31)		Float Value = this->handle->get_y();
HXDLIN(  31)		Float Max = this->get_height();
HXDLIN(  31)		 ::Dynamic Max1 = (Max - this->handle->get_scaleY());
HXDLIN(  31)		Float lowerBound;
HXDLIN(  31)		if ((Value < 0)) {
HXLINE(  31)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE(  31)			lowerBound = Value;
            		}
HXDLIN(  31)		Float _hx_tmp4;
HXDLIN(  31)		bool _hx_tmp5;
HXDLIN(  31)		if (::hx::IsNotNull( Max1 )) {
HXLINE(  31)			_hx_tmp5 = ::hx::IsGreater( lowerBound,Max1 );
            		}
            		else {
HXLINE(  31)			_hx_tmp5 = false;
            		}
HXDLIN(  31)		if (_hx_tmp5) {
HXLINE(  31)			_hx_tmp4 = ( (Float)(Max1) );
            		}
            		else {
HXLINE(  31)			_hx_tmp4 = lowerBound;
            		}
HXDLIN(  31)		_hx_tmp3->set_y(_hx_tmp4);
            	}


HX_DEFINE_DYNAMIC_FUNC3(CompletionListScrollBar_obj,updateHandle,(void))

int CompletionListScrollBar_obj::BG_COLOR;

int CompletionListScrollBar_obj::HANDLE_COLOR;


::hx::ObjectPtr< CompletionListScrollBar_obj > CompletionListScrollBar_obj::__new(int x,int y,int width,int height) {
	::hx::ObjectPtr< CompletionListScrollBar_obj > __this = new CompletionListScrollBar_obj();
	__this->__construct(x,y,width,height);
	return __this;
}

::hx::ObjectPtr< CompletionListScrollBar_obj > CompletionListScrollBar_obj::__alloc(::hx::Ctx *_hx_ctx,int x,int y,int width,int height) {
	CompletionListScrollBar_obj *__this = (CompletionListScrollBar_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CompletionListScrollBar_obj), true, "flixel.system.debug.completion.CompletionListScrollBar"));
	*(void **)__this = CompletionListScrollBar_obj::_hx_vtable;
	__this->__construct(x,y,width,height);
	return __this;
}

CompletionListScrollBar_obj::CompletionListScrollBar_obj()
{
}

void CompletionListScrollBar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CompletionListScrollBar);
	HX_MARK_MEMBER_NAME(handle,"handle");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CompletionListScrollBar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handle,"handle");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CompletionListScrollBar_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return ::hx::Val( handle ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateHandle") ) { return ::hx::Val( updateHandle_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CompletionListScrollBar_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast<  ::openfl::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CompletionListScrollBar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("handle",a8,83,fd,b7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CompletionListScrollBar_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::Bitmap */ ,(int)offsetof(CompletionListScrollBar_obj,handle),HX_("handle",a8,83,fd,b7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo CompletionListScrollBar_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &CompletionListScrollBar_obj::BG_COLOR,HX_("BG_COLOR",09,4c,a7,0b)},
	{::hx::fsInt,(void *) &CompletionListScrollBar_obj::HANDLE_COLOR,HX_("HANDLE_COLOR",2c,4e,95,c9)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String CompletionListScrollBar_obj_sMemberFields[] = {
	HX_("handle",a8,83,fd,b7),
	HX_("updateHandle",91,2a,c1,b7),
	::String(null()) };

static void CompletionListScrollBar_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CompletionListScrollBar_obj::BG_COLOR,"BG_COLOR");
	HX_MARK_MEMBER_NAME(CompletionListScrollBar_obj::HANDLE_COLOR,"HANDLE_COLOR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CompletionListScrollBar_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CompletionListScrollBar_obj::BG_COLOR,"BG_COLOR");
	HX_VISIT_MEMBER_NAME(CompletionListScrollBar_obj::HANDLE_COLOR,"HANDLE_COLOR");
};

#endif

::hx::Class CompletionListScrollBar_obj::__mClass;

static ::String CompletionListScrollBar_obj_sStaticFields[] = {
	HX_("BG_COLOR",09,4c,a7,0b),
	HX_("HANDLE_COLOR",2c,4e,95,c9),
	::String(null())
};

void CompletionListScrollBar_obj::__register()
{
	CompletionListScrollBar_obj _hx_dummy;
	CompletionListScrollBar_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.completion.CompletionListScrollBar",e2,09,71,90);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CompletionListScrollBar_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CompletionListScrollBar_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CompletionListScrollBar_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CompletionListScrollBar_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CompletionListScrollBar_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CompletionListScrollBar_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CompletionListScrollBar_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CompletionListScrollBar_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_80093d47a78edb3b_10_boot)
HXDLIN(  10)		BG_COLOR = -12303292;
            	}
{
            	HX_STACKFRAME(&_hx_pos_80093d47a78edb3b_11_boot)
HXDLIN(  11)		HANDLE_COLOR = -14540254;
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace completion
