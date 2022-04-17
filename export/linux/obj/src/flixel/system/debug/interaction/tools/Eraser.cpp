#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_Interaction
#include <flixel/system/debug/interaction/Interaction.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools_Eraser
#include <flixel/system/debug/interaction/tools/Eraser.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools_Tool
#include <flixel/system/debug/interaction/tools/Tool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_741757cec8ede88f_18_new,"flixel.system.debug.interaction.tools.Eraser","new",0xafc41bf5,"flixel.system.debug.interaction.tools.Eraser.new","flixel/system/debug/interaction/tools/Eraser.hx",18,0xa546bf98)
HX_LOCAL_STACK_FRAME(_hx_pos_741757cec8ede88f_21_init,"flixel.system.debug.interaction.tools.Eraser","init",0x188d11db,"flixel.system.debug.interaction.tools.Eraser.init","flixel/system/debug/interaction/tools/Eraser.hx",21,0xa546bf98)
HX_LOCAL_STACK_FRAME(_hx_pos_741757cec8ede88f_29_update,"flixel.system.debug.interaction.tools.Eraser","update",0x1312e594,"flixel.system.debug.interaction.tools.Eraser.update","flixel/system/debug/interaction/tools/Eraser.hx",29,0xa546bf98)
HX_LOCAL_STACK_FRAME(_hx_pos_741757cec8ede88f_34_activate,"flixel.system.debug.interaction.tools.Eraser","activate",0x9778b3fe,"flixel.system.debug.interaction.tools.Eraser.activate","flixel/system/debug/interaction/tools/Eraser.hx",34,0xa546bf98)
HX_LOCAL_STACK_FRAME(_hx_pos_741757cec8ede88f_42_doDeletion,"flixel.system.debug.interaction.tools.Eraser","doDeletion",0x007d62c4,"flixel.system.debug.interaction.tools.Eraser.doDeletion","flixel/system/debug/interaction/tools/Eraser.hx",42,0xa546bf98)
HX_LOCAL_STACK_FRAME(_hx_pos_741757cec8ede88f_53_findAndDelete,"flixel.system.debug.interaction.tools.Eraser","findAndDelete",0xc5f7a2be,"flixel.system.debug.interaction.tools.Eraser.findAndDelete","flixel/system/debug/interaction/tools/Eraser.hx",53,0xa546bf98)
HX_LOCAL_STACK_FRAME(_hx_pos_741757cec8ede88f_73_removeFromMemory,"flixel.system.debug.interaction.tools.Eraser","removeFromMemory",0x828b48ba,"flixel.system.debug.interaction.tools.Eraser.removeFromMemory","flixel/system/debug/interaction/tools/Eraser.hx",73,0xa546bf98)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace interaction{
namespace tools{

void Eraser_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_741757cec8ede88f_18_new)
            	HX_STACK_THIS(this)
HXLINE(  18)
HXDLIN(  18)		super::__construct();
            	}

Dynamic Eraser_obj::__CreateEmpty() { return new Eraser_obj; }

void *Eraser_obj::_hx_vtable = 0;

Dynamic Eraser_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Eraser_obj > _hx_result = new Eraser_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Eraser_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1361d5a9 || inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x6b353933) {
			return inClassId==(int)0x4af7dd8e || inClassId==(int)0x6b353933;
		} else {
			return inClassId==(int)0x717bcd95;
		}
	}
}

 ::flixel::_hx_system::debug::interaction::tools::Tool Eraser_obj::init( ::flixel::_hx_system::debug::interaction::Interaction Brain){
            	HX_STACKFRAME(&_hx_pos_741757cec8ede88f_21_init)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Brain,"Brain")
HXLINE(  21)
HXLINE(  22)		this->super::init(Brain);
HXLINE(  23)		this->_name = HX_("Eraser",ec,54,c3,7a);
HXLINE(  24)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


void Eraser_obj::update(){
            	HX_STACKFRAME(&_hx_pos_741757cec8ede88f_29_update)
            	HX_STACK_THIS(this)
HXLINE(  29)
HXDLIN(  29)		if (this->_brain->keyJustPressed(46)) {
HXLINE(  30)			this->doDeletion(this->_brain->keyPressed(16));
            		}
            	}


void Eraser_obj::activate(){
            	HX_STACKFRAME(&_hx_pos_741757cec8ede88f_34_activate)
            	HX_STACK_THIS(this)
HXLINE(  34)
HXLINE(  35)		this->doDeletion(this->_brain->keyPressed(16));
HXLINE(  38)		this->_brain->setActiveTool(null());
            	}


void Eraser_obj::doDeletion(bool remove){
            	HX_STACKFRAME(&_hx_pos_741757cec8ede88f_42_doDeletion)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(remove,"remove")
HXLINE(  42)
HXLINE(  43)		HX_VARI(  ::flixel::group::FlxTypedGroup,selectedItems) = this->_brain->selectedItems;
HXLINE(  44)		if (::hx::IsNotNull( selectedItems )) {
HXLINE(  46)			this->findAndDelete(selectedItems,remove);
HXLINE(  47)			selectedItems->clear();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Eraser_obj,doDeletion,(void))

void Eraser_obj::findAndDelete( ::flixel::group::FlxTypedGroup items,::hx::Null< bool >  __o_remove){
            		bool remove = __o_remove.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_741757cec8ede88f_53_findAndDelete)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(items,"items")
            	HX_STACK_ARG(remove,"remove")
HXLINE(  53)
HXDLIN(  53)		 ::Dynamic filter = null();
HXDLIN(  53)		HX_VARI(  ::flixel::group::FlxTypedGroupIterator,member) =  ::flixel::group::FlxTypedGroupIterator_obj::__alloc( HX_CTX ,items->members,filter);
HXDLIN(  53)		while(member->hasNext()){
HXDLIN(  53)			HX_VARI(  ::flixel::FlxObject,member1) = member->next().StaticCast<  ::flixel::FlxObject >();
HXLINE(  55)			if (::hx::IsNull( member1 )) {
HXLINE(  56)				continue;
            			}
HXLINE(  58)			if (!(::Std_obj::isOfType(member1,::hx::ClassOf< ::flixel::group::FlxTypedGroup >()))) {
HXLINE(  64)				member1->kill();
HXLINE(  65)				if (remove) {
HXLINE(  66)					this->removeFromMemory(member1,::flixel::FlxG_obj::game->_state);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Eraser_obj,findAndDelete,(void))

void Eraser_obj::removeFromMemory( ::flixel::FlxBasic item, ::flixel::group::FlxTypedGroup parentGroup){
            	HX_STACKFRAME(&_hx_pos_741757cec8ede88f_73_removeFromMemory)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(item,"item")
            	HX_STACK_ARG(parentGroup,"parentGroup")
HXLINE(  73)
HXDLIN(  73)		int _g = 0;
HXDLIN(  73)		::Array< ::Dynamic> _g1 = parentGroup->members;
HXDLIN(  73)		while((_g < _g1->length)){
HXDLIN(  73)			HX_VARI(  ::flixel::FlxBasic,member) = _g1->__get(_g).StaticCast<  ::flixel::FlxBasic >();
HXDLIN(  73)			_g = (_g + 1);
HXLINE(  75)			if (::hx::IsNull( member )) {
HXLINE(  76)				continue;
            			}
HXLINE(  78)			if (::Std_obj::isOfType(member,::hx::ClassOf< ::flixel::group::FlxTypedGroup >())) {
HXLINE(  79)				this->removeFromMemory(item,( ( ::flixel::group::FlxTypedGroup)(member) ));
            			}
            			else {
HXLINE(  80)				if (::hx::IsInstanceEq( member,item )) {
HXLINE(  81)					parentGroup->remove(member,null()).StaticCast<  ::flixel::FlxBasic >();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Eraser_obj,removeFromMemory,(void))


::hx::ObjectPtr< Eraser_obj > Eraser_obj::__new() {
	::hx::ObjectPtr< Eraser_obj > __this = new Eraser_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Eraser_obj > Eraser_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Eraser_obj *__this = (Eraser_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Eraser_obj), true, "flixel.system.debug.interaction.tools.Eraser"));
	*(void **)__this = Eraser_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Eraser_obj::Eraser_obj()
{
}

::hx::Val Eraser_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"activate") ) { return ::hx::Val( activate_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"doDeletion") ) { return ::hx::Val( doDeletion_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"findAndDelete") ) { return ::hx::Val( findAndDelete_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removeFromMemory") ) { return ::hx::Val( removeFromMemory_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Eraser_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Eraser_obj_sStaticStorageInfo = 0;
#endif

static ::String Eraser_obj_sMemberFields[] = {
	HX_("init",10,3b,bb,45),
	HX_("update",09,86,05,87),
	HX_("activate",b3,1b,ac,e5),
	HX_("doDeletion",b9,e1,21,d0),
	HX_("findAndDelete",e9,2a,a7,3f),
	HX_("removeFromMemory",6f,ed,ac,01),
	::String(null()) };

::hx::Class Eraser_obj::__mClass;

void Eraser_obj::__register()
{
	Eraser_obj _hx_dummy;
	Eraser_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.interaction.tools.Eraser",83,fd,47,13);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Eraser_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Eraser_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Eraser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Eraser_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace interaction
} // end namespace tools
