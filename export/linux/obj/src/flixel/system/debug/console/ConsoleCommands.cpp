#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebuggerLayout
#include <flixel/system/debug/FlxDebuggerLayout.h>
#endif
#ifndef INCLUDED_flixel_system_debug_VCR
#include <flixel/system/debug/VCR.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_Console
#include <flixel/system/debug/console/Console.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_ConsoleCommands
#include <flixel/system/debug/console/ConsoleCommands.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_ConsoleHistory
#include <flixel/system/debug/console/ConsoleHistory.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_ConsoleUtil
#include <flixel/system/debug/console/ConsoleUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Watch
#include <flixel/system/debug/watch/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_WatchEntryData
#include <flixel/system/debug/watch/WatchEntryData.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapLogFrontEnd
#include <flixel/system/frontEnds/BitmapLogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_VCRFrontEnd
#include <flixel/system/frontEnds/VCRFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_WatchFrontEnd
#include <flixel/system/frontEnds/WatchFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_d0e94f52257718c0_16_new,"flixel.system.debug.console.ConsoleCommands","new",0xbec7c572,"flixel.system.debug.console.ConsoleCommands.new","flixel/system/debug/console/ConsoleCommands.hx",16,0x8e0df1e0)
HX_LOCAL_STACK_FRAME(_hx_pos_d0e94f52257718c0_81_help,"flixel.system.debug.console.ConsoleCommands","help",0x2c0dad6f,"flixel.system.debug.console.ConsoleCommands.help","flixel/system/debug/console/ConsoleCommands.hx",81,0x8e0df1e0)
HX_LOCAL_STACK_FRAME(_hx_pos_d0e94f52257718c0_110_close,"flixel.system.debug.console.ConsoleCommands","close",0x838bf54a,"flixel.system.debug.console.ConsoleCommands.close","flixel/system/debug/console/ConsoleCommands.hx",110,0x8e0df1e0)
HX_LOCAL_STACK_FRAME(_hx_pos_d0e94f52257718c0_114_create,"flixel.system.debug.console.ConsoleCommands","create",0x04a8692a,"flixel.system.debug.console.ConsoleCommands.create","flixel/system/debug/console/ConsoleCommands.hx",114,0x8e0df1e0)
HX_LOCAL_STACK_FRAME(_hx_pos_d0e94f52257718c0_146_fields,"flixel.system.debug.console.ConsoleCommands","fields",0x092790a7,"flixel.system.debug.console.ConsoleCommands.fields","flixel/system/debug/console/ConsoleCommands.hx",146,0x8e0df1e0)
HX_LOCAL_STACK_FRAME(_hx_pos_d0e94f52257718c0_151_listObjects,"flixel.system.debug.console.ConsoleCommands","listObjects",0x01393328,"flixel.system.debug.console.ConsoleCommands.listObjects","flixel/system/debug/console/ConsoleCommands.hx",151,0x8e0df1e0)
HX_LOCAL_STACK_FRAME(_hx_pos_d0e94f52257718c0_156_listFunctions,"flixel.system.debug.console.ConsoleCommands","listFunctions",0x18b311af,"flixel.system.debug.console.ConsoleCommands.listFunctions","flixel/system/debug/console/ConsoleCommands.hx",156,0x8e0df1e0)
HX_LOCAL_STACK_FRAME(_hx_pos_d0e94f52257718c0_160_watchMouse,"flixel.system.debug.console.ConsoleCommands","watchMouse",0x171fe284,"flixel.system.debug.console.ConsoleCommands.watchMouse","flixel/system/debug/console/ConsoleCommands.hx",160,0x8e0df1e0)
HX_LOCAL_STACK_FRAME(_hx_pos_d0e94f52257718c0_177_pause,"flixel.system.debug.console.ConsoleCommands","pause",0xf880b488,"flixel.system.debug.console.ConsoleCommands.pause","flixel/system/debug/console/ConsoleCommands.hx",177,0x8e0df1e0)
HX_LOCAL_STACK_FRAME(_hx_pos_d0e94f52257718c0_191_step,"flixel.system.debug.console.ConsoleCommands","step",0x335e61fa,"flixel.system.debug.console.ConsoleCommands.step","flixel/system/debug/console/ConsoleCommands.hx",191,0x8e0df1e0)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace console{

void ConsoleCommands_obj::__construct( ::flixel::_hx_system::debug::console::Console console){
            	HX_STACKFRAME(&_hx_pos_d0e94f52257718c0_16_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(console,"console")
HXLINE(  16)
HXLINE(  23)		this->_watchingMouse = false;
HXLINE(  27)		this->_console = console;
HXLINE(  29)		console->registerFunction(HX_("help",c1,32,0b,45),this->help_dyn(),HX_("Displays the help text of a registered object or function. See \"help\".",74,09,e6,6d));
HXLINE(  30)		console->registerFunction(HX_("close",b8,17,63,48),this->close_dyn(),HX_("Closes the debugger overlay.",09,dd,14,da));
HXLINE(  32)		console->registerFunction(HX_("clearHistory",47,e7,c5,3f),this->_console->history->clear_dyn(),HX_("Closes the debugger overlay.",09,dd,14,da));
HXLINE(  33)		console->registerFunction(HX_("clearLog",f7,50,0e,31),::flixel::FlxG_obj::log->clear_dyn(),HX_("Clears the command history.",58,c6,e5,46));
HXLINE(  35)		console->registerFunction(HX_("fields",79,8e,8e,80),this->fields_dyn(),HX_("Lists the fields of a class or instance",6f,dd,83,14));
HXLINE(  37)		console->registerFunction(HX_("listObjects",16,dc,4e,39),this->listObjects_dyn(),HX_("Lists the aliases of all registered objects.",6c,4a,89,e2));
HXLINE(  38)		console->registerFunction(HX_("listFunctions",1d,52,37,c0),this->listFunctions_dyn(),HX_("Lists the aliases of all registered functions.",85,07,62,7a));
HXLINE(  40)		console->registerFunction(HX_("step",4c,e7,5b,4c),this->step_dyn(),HX_("Steps the game forward one frame if currently paused. No effect if unpaused.",e3,b2,6b,29));
HXLINE(  41)		console->registerFunction(HX_("pause",f6,d6,57,bd),this->pause_dyn(),HX_("Toggles the game between paused and unpaused.",42,15,b4,fb));
HXLINE(  43)		console->registerFunction(HX_("clearBitmapLog",88,b0,e0,84),::flixel::FlxG_obj::bitmapLog->clear_dyn(),HX_("Clears the bitmapLog window.",4a,2e,fa,ed));
HXLINE(  44)		console->registerFunction(HX_("viewCache",9d,09,a9,81),::flixel::FlxG_obj::bitmapLog->viewCache_dyn(),HX_("Adds the cache to the bitmapLog window.",9a,4b,f4,ec));
HXLINE(  46)		console->registerFunction(HX_("create",fc,66,0f,7c),this->create_dyn(),HX_("Creates a new FlxObject and registers it - by default at the mouse position. \"create(ObjClass:Class<T>, PlaceAtMouse:Bool, ExtraParams:Array<Dynamic>)\" Ex: \"create(FlxSprite, false, [100, 100])\"",e1,71,2c,4a));
HXLINE(  49)		console->registerFunction(HX_("watch",4f,16,25,c5),::flixel::FlxG_obj::watch->add_dyn(),HX_("Adds the specified field of an object to the watch window.",3d,3d,b8,00));
HXLINE(  50)		console->registerFunction(HX_("watchExpression",c7,c4,8f,8c),::flixel::FlxG_obj::watch->addExpression_dyn(),HX_("Adds the specified expression to the watch window. Be sure any objects, functions, and classes used are registered!",28,72,30,fe));
HXLINE(  52)		console->registerFunction(HX_("watchMouse",56,31,6f,84),this->watchMouse_dyn(),HX_("Adds the mouse coordinates to the watch window.",16,85,0c,85));
HXLINE(  53)		console->registerFunction(HX_("track",8b,8e,1f,16),::flixel::FlxG_obj::debugger->track_dyn(),HX_("Adds a tracker window for the specified object or class.",a3,a1,e4,47));
HXLINE(  56)		{
HXLINE(  56)			::hx::Class cl = ::hx::ClassOf< ::Math >();
HXDLIN(  56)			console->registerObject(::flixel::util::FlxStringUtil_obj::getClassName(cl,true),cl);
            		}
HXLINE(  57)		{
HXLINE(  57)			::hx::Class cl1 = ::hx::ClassOf< ::Reflect >();
HXDLIN(  57)			console->registerObject(::flixel::util::FlxStringUtil_obj::getClassName(cl1,true),cl1);
            		}
HXLINE(  58)		{
HXLINE(  58)			::hx::Class cl2 = ::hx::ClassOf< ::Std >();
HXDLIN(  58)			console->registerObject(::flixel::util::FlxStringUtil_obj::getClassName(cl2,true),cl2);
            		}
HXLINE(  59)		{
HXLINE(  59)			::hx::Class cl3 = ::hx::ClassOf< ::StringTools >();
HXDLIN(  59)			console->registerObject(::flixel::util::FlxStringUtil_obj::getClassName(cl3,true),cl3);
            		}
HXLINE(  61)		{
HXLINE(  61)			::hx::Class cl4 = ::hx::ClassOf< ::Sys >();
HXDLIN(  61)			console->registerObject(::flixel::util::FlxStringUtil_obj::getClassName(cl4,true),cl4);
            		}
HXLINE(  63)		{
HXLINE(  63)			::hx::Class cl5 = ::hx::ClassOf< ::Type >();
HXDLIN(  63)			console->registerObject(::flixel::util::FlxStringUtil_obj::getClassName(cl5,true),cl5);
            		}
HXLINE(  65)		{
HXLINE(  65)			::hx::Class cl6 = ::hx::ClassOf< ::flixel::FlxG >();
HXDLIN(  65)			console->registerObject(::flixel::util::FlxStringUtil_obj::getClassName(cl6,true),cl6);
            		}
HXLINE(  66)		{
HXLINE(  66)			::hx::Class cl7 = ::hx::ClassOf< ::flixel::FlxObject >();
HXDLIN(  66)			console->registerObject(::flixel::util::FlxStringUtil_obj::getClassName(cl7,true),cl7);
            		}
HXLINE(  67)		{
HXLINE(  67)			::hx::Class cl8 = ::hx::ClassOf< ::flixel::FlxSprite >();
HXDLIN(  67)			console->registerObject(::flixel::util::FlxStringUtil_obj::getClassName(cl8,true),cl8);
            		}
HXLINE(  68)		{
HXLINE(  68)			::hx::Class cl9 = ::hx::ClassOf< ::flixel::math::FlxMath >();
HXDLIN(  68)			console->registerObject(::flixel::util::FlxStringUtil_obj::getClassName(cl9,true),cl9);
            		}
HXLINE(  69)		{
HXLINE(  69)			::hx::Class cl10 = ::hx::ClassOf< ::flixel::tweens::FlxTween >();
HXDLIN(  69)			console->registerObject(::flixel::util::FlxStringUtil_obj::getClassName(cl10,true),cl10);
            		}
HXLINE(  70)		{
HXLINE(  70)			::hx::Class cl11 = ::hx::ClassOf< ::flixel::FlxCamera >();
HXDLIN(  70)			console->registerObject(::flixel::util::FlxStringUtil_obj::getClassName(cl11,true),cl11);
            		}
HXLINE(  71)		{
HXLINE(  71)			::hx::Class cl12 = ::hx::ClassOf< ::flixel::math::FlxPoint >();
HXDLIN(  71)			console->registerObject(::flixel::util::FlxStringUtil_obj::getClassName(cl12,true),cl12);
            		}
HXLINE(  72)		{
HXLINE(  72)			::hx::Class cl13 = ::hx::ClassOf< ::flixel::math::FlxRect >();
HXDLIN(  72)			console->registerObject(::flixel::util::FlxStringUtil_obj::getClassName(cl13,true),cl13);
            		}
HXLINE(  74)		{
HXLINE(  74)			::hx::Class e = ::hx::ClassOf< ::flixel::_hx_system::debug::FlxDebuggerLayout >();
HXDLIN(  74)			console->registerObject(::flixel::util::FlxStringUtil_obj::getEnumName(e,true),e);
            		}
HXLINE(  76)		console->registerObject(HX_("selection",4c,f8,1a,8e),null());
            	}

Dynamic ConsoleCommands_obj::__CreateEmpty() { return new ConsoleCommands_obj; }

void *ConsoleCommands_obj::_hx_vtable = 0;

Dynamic ConsoleCommands_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ConsoleCommands_obj > _hx_result = new ConsoleCommands_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ConsoleCommands_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3982272c;
}

::String ConsoleCommands_obj::help(::String Alias){
            	HX_STACKFRAME(&_hx_pos_d0e94f52257718c0_81_help)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Alias,"Alias")
HXLINE(  81)
HXDLIN(  81)		bool _hx_tmp;
HXDLIN(  81)		if (::hx::IsNotNull( Alias )) {
HXDLIN(  81)			_hx_tmp = (Alias.length == 0);
            		}
            		else {
HXDLIN(  81)			_hx_tmp = true;
            		}
HXDLIN(  81)		if (_hx_tmp) {
HXLINE(  83)			HX_VARI( ::String,output) = HX_("System classes and commands: ",42,07,6a,e4);
HXLINE(  84)			{
HXLINE(  84)				HX_VARI(  ::Dynamic,obj) = this->_console->registeredObjects->keys();
HXDLIN(  84)				while(( (bool)(obj->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  84)					HX_VARI( ::String,obj1) = ( (::String)(obj->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  86)					output = (output + (obj1 + HX_(", ",74,26,00,00)));
            				}
            			}
HXLINE(  88)			{
HXLINE(  88)				HX_VARI(  ::Dynamic,func) = this->_console->registeredFunctions->keys();
HXDLIN(  88)				while(( (bool)(func->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  88)					HX_VARI( ::String,func1) = ( (::String)(func->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  90)					output = (output + (func1 + HX_("(), ",b5,cb,8f,1a)));
            				}
            			}
HXLINE(  92)			return (output + HX_("\nTry 'help(\"command\")' for more information about a specific command.",cf,42,2c,8a));
            		}
            		else {
HXLINE(  96)			if (this->_console->registeredHelp->exists(Alias)) {
HXLINE(  98)				::String _hx_tmp;
HXDLIN(  98)				if (this->_console->registeredFunctions->exists(Alias)) {
HXLINE(  98)					_hx_tmp = HX_("()",01,23,00,00);
            				}
            				else {
HXLINE(  98)					_hx_tmp = HX_("",00,00,00,00);
            				}
HXDLIN(  98)				return (((Alias + _hx_tmp) + HX_(": ",a6,32,00,00)) + this->_console->registeredHelp->get(Alias));
            			}
            			else {
HXLINE( 102)				::flixel::FlxG_obj::log->advanced(((HX_("Help: The command '",5c,dd,57,6e) + Alias) + HX_("' does not have help text.",1f,16,65,26)),::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
HXLINE( 103)				return null();
            			}
            		}
HXLINE(  81)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleCommands_obj,help,return )

void ConsoleCommands_obj::close(){
            	HX_STACKFRAME(&_hx_pos_d0e94f52257718c0_110_close)
            	HX_STACK_THIS(this)
HXLINE( 110)
HXDLIN( 110)		::flixel::FlxG_obj::debugger->set_visible(false);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,close,(void))

void ConsoleCommands_obj::create(::hx::Class ObjClass,::hx::Null< bool >  __o_MousePos,::cpp::VirtualArray Params){
            		bool MousePos = __o_MousePos.Default(true);
            	HX_STACKFRAME(&_hx_pos_d0e94f52257718c0_114_create)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ObjClass,"ObjClass")
            	HX_STACK_ARG(MousePos,"MousePos")
            	HX_STACK_ARG(Params,"Params")
HXLINE( 114)
HXLINE( 115)		if (::hx::IsNull( Params )) {
HXLINE( 116)			Params = ::cpp::VirtualArray_obj::__new(0);
            		}
HXLINE( 118)		HX_VARI(  ::flixel::FlxObject,obj) = ( ( ::flixel::FlxObject)(::Type_obj::createInstance(ObjClass,Params)) );
HXLINE( 120)		if (::hx::IsNull( obj )) {
HXLINE( 121)			return;
            		}
HXLINE( 123)		if (MousePos) {
HXLINE( 125)			obj->set_x(::flixel::FlxG_obj::game->get_mouseX());
HXLINE( 126)			obj->set_y(::flixel::FlxG_obj::game->get_mouseY());
            		}
HXLINE( 129)		::flixel::FlxG_obj::game->_state->add(obj).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 131)		if ((Params->get_length() == 0)) {
HXLINE( 132)			::String Text = ((HX_("create: New ",82,f9,21,bf) + ::Std_obj::string(ObjClass)) + HX_(" created at X = ",00,f4,df,3b));
HXDLIN( 132)			::flixel::FlxG_obj::log->advanced(::cpp::VirtualArray_obj::__new(1)->init(0,(((Text + obj->x) + HX_(" Y = ",ca,0a,bf,a7)) + obj->y)),::flixel::_hx_system::debug::log::LogStyle_obj::CONSOLE,null());
            		}
            		else {
HXLINE( 134)			::String Text = ((HX_("create: New ",82,f9,21,bf) + ::Std_obj::string(ObjClass)) + HX_(" created at X = ",00,f4,df,3b));
HXDLIN( 134)			::String Text1 = ((((Text + obj->x) + HX_(" Y = ",ca,0a,bf,a7)) + obj->y) + HX_(" with params ",20,c2,85,fb));
HXDLIN( 134)			 ::Dynamic Text2 = (Text1 + ::Std_obj::string(Params));
HXDLIN( 134)			::flixel::FlxG_obj::log->advanced(::cpp::VirtualArray_obj::__new(1)->init(0,Text2),::flixel::_hx_system::debug::log::LogStyle_obj::CONSOLE,null());
            		}
HXLINE( 136)		this->_console->objectStack->push(obj);
HXLINE( 138)		HX_VARI( ::String,name) = (HX_("Object_",a0,90,a0,4f) + this->_console->objectStack->length);
HXLINE( 139)		this->_console->registerObject(name,obj);
HXLINE( 141)		{
HXLINE( 141)			 ::Dynamic Text = ((((HX_("create: ",a2,50,f4,2b) + ::Std_obj::string(ObjClass)) + HX_(" registered as '",b7,f0,b7,dc)) + name) + HX_("'",27,00,00,00));
HXDLIN( 141)			::flixel::FlxG_obj::log->advanced(::cpp::VirtualArray_obj::__new(1)->init(0,Text),::flixel::_hx_system::debug::log::LogStyle_obj::CONSOLE,null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(ConsoleCommands_obj,create,(void))

::String ConsoleCommands_obj::fields( ::Dynamic Object){
            	HX_STACKFRAME(&_hx_pos_d0e94f52257718c0_146_fields)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Object,"Object")
HXLINE( 146)
HXDLIN( 146)		::String _hx_tmp = ((HX_("Fields of ",22,2a,96,7d) + ::Type_obj::getClassName(Object)) + HX_(":\n",90,32,00,00));
HXDLIN( 146)		return (_hx_tmp + ::StringTools_obj::trim(::flixel::_hx_system::debug::console::ConsoleUtil_obj::getFields(Object)->join(HX_("\n",0a,00,00,00))));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleCommands_obj,fields,return )

void ConsoleCommands_obj::listObjects(){
            	HX_STACKFRAME(&_hx_pos_d0e94f52257718c0_151_listObjects)
            	HX_STACK_THIS(this)
HXLINE( 151)
HXDLIN( 151)		 ::Dynamic Text = (HX_("Objects registered: \n",f6,ad,0c,d4) + ::flixel::util::FlxStringUtil_obj::formatStringMap(this->_console->registeredObjects));
HXDLIN( 151)		::flixel::FlxG_obj::log->advanced(::cpp::VirtualArray_obj::__new(1)->init(0,Text),::flixel::_hx_system::debug::log::LogStyle_obj::CONSOLE,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,listObjects,(void))

void ConsoleCommands_obj::listFunctions(){
            	HX_STACKFRAME(&_hx_pos_d0e94f52257718c0_156_listFunctions)
            	HX_STACK_THIS(this)
HXLINE( 156)
HXDLIN( 156)		 ::Dynamic Text = (HX_("Functions registered: \n",bd,05,3d,78) + ::flixel::util::FlxStringUtil_obj::formatStringMap(this->_console->registeredFunctions));
HXDLIN( 156)		::flixel::FlxG_obj::log->advanced(::cpp::VirtualArray_obj::__new(1)->init(0,Text),::flixel::_hx_system::debug::log::LogStyle_obj::CONSOLE,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,listFunctions,(void))

void ConsoleCommands_obj::watchMouse(){
            	HX_STACKFRAME(&_hx_pos_d0e94f52257718c0_160_watchMouse)
            	HX_STACK_THIS(this)
HXLINE( 160)
HXLINE( 161)		if (!(this->_watchingMouse)) {
HXLINE( 163)			{
HXLINE( 163)				 ::flixel::_hx_system::frontEnds::WatchFrontEnd _this = ::flixel::FlxG_obj::watch;
HXDLIN( 163)				::flixel::FlxG_obj::game->debugger->watch->add(HX_("Mouse Position",44,8e,3a,9d),::flixel::_hx_system::debug::watch::WatchEntryData_obj::FIELD(( ( ::Dynamic)(::hx::ClassOf< ::flixel::FlxG >()) ),HX_("mouse",25,16,65,0c)));
            			}
HXLINE( 164)			::flixel::FlxG_obj::log->advanced(::cpp::VirtualArray_obj::__new(1)->init(0,HX_("watchMouse: Mouse position added to watch window",86,9c,f8,24)),::flixel::_hx_system::debug::log::LogStyle_obj::CONSOLE,null());
            		}
            		else {
HXLINE( 168)			{
HXLINE( 168)				 ::flixel::_hx_system::frontEnds::WatchFrontEnd _this = ::flixel::FlxG_obj::watch;
HXDLIN( 168)				::flixel::FlxG_obj::game->debugger->watch->remove(null(),::flixel::_hx_system::debug::watch::WatchEntryData_obj::FIELD(( ( ::Dynamic)(::hx::ClassOf< ::flixel::FlxG >()) ),HX_("mouse",25,16,65,0c)));
            			}
HXLINE( 169)			::flixel::FlxG_obj::log->advanced(::cpp::VirtualArray_obj::__new(1)->init(0,HX_("watchMouse: Mouse position removed from watch window",17,fe,23,1d)),::flixel::_hx_system::debug::log::LogStyle_obj::CONSOLE,null());
            		}
HXLINE( 172)		this->_watchingMouse = !(this->_watchingMouse);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,watchMouse,(void))

void ConsoleCommands_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_d0e94f52257718c0_177_pause)
            	HX_STACK_THIS(this)
HXLINE( 177)
HXDLIN( 177)		if (::flixel::FlxG_obj::vcr->paused) {
HXLINE( 179)			::flixel::FlxG_obj::vcr->resume();
HXLINE( 180)			::flixel::FlxG_obj::log->advanced(::cpp::VirtualArray_obj::__new(1)->init(0,HX_("pause: Game unpaused",f9,e8,d5,eb)),::flixel::_hx_system::debug::log::LogStyle_obj::CONSOLE,null());
            		}
            		else {
HXLINE( 184)			::flixel::FlxG_obj::vcr->pause();
HXLINE( 185)			::flixel::FlxG_obj::log->advanced(::cpp::VirtualArray_obj::__new(1)->init(0,HX_("pause: Game paused",60,a9,dd,91)),::flixel::_hx_system::debug::log::LogStyle_obj::CONSOLE,null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,pause,(void))

void ConsoleCommands_obj::step(){
            	HX_STACKFRAME(&_hx_pos_d0e94f52257718c0_191_step)
            	HX_STACK_THIS(this)
HXLINE( 191)
HXDLIN( 191)		if (::flixel::FlxG_obj::vcr->paused) {
HXLINE( 192)			::flixel::FlxG_obj::game->debugger->vcr->onStep();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,step,(void))


::hx::ObjectPtr< ConsoleCommands_obj > ConsoleCommands_obj::__new( ::flixel::_hx_system::debug::console::Console console) {
	::hx::ObjectPtr< ConsoleCommands_obj > __this = new ConsoleCommands_obj();
	__this->__construct(console);
	return __this;
}

::hx::ObjectPtr< ConsoleCommands_obj > ConsoleCommands_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::_hx_system::debug::console::Console console) {
	ConsoleCommands_obj *__this = (ConsoleCommands_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ConsoleCommands_obj), true, "flixel.system.debug.console.ConsoleCommands"));
	*(void **)__this = ConsoleCommands_obj::_hx_vtable;
	__this->__construct(console);
	return __this;
}

ConsoleCommands_obj::ConsoleCommands_obj()
{
}

void ConsoleCommands_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ConsoleCommands);
	HX_MARK_MEMBER_NAME(_console,"_console");
	HX_MARK_MEMBER_NAME(_watchingMouse,"_watchingMouse");
	HX_MARK_END_CLASS();
}

void ConsoleCommands_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_console,"_console");
	HX_VISIT_MEMBER_NAME(_watchingMouse,"_watchingMouse");
}

::hx::Val ConsoleCommands_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"help") ) { return ::hx::Val( help_dyn() ); }
		if (HX_FIELD_EQ(inName,"step") ) { return ::hx::Val( step_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return ::hx::Val( close_dyn() ); }
		if (HX_FIELD_EQ(inName,"pause") ) { return ::hx::Val( pause_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"fields") ) { return ::hx::Val( fields_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_console") ) { return ::hx::Val( _console ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"watchMouse") ) { return ::hx::Val( watchMouse_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"listObjects") ) { return ::hx::Val( listObjects_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"listFunctions") ) { return ::hx::Val( listFunctions_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_watchingMouse") ) { return ::hx::Val( _watchingMouse ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ConsoleCommands_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_console") ) { _console=inValue.Cast<  ::flixel::_hx_system::debug::console::Console >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_watchingMouse") ) { _watchingMouse=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ConsoleCommands_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_console",d8,44,8e,52));
	outFields->push(HX_("_watchingMouse",73,f3,3a,2a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ConsoleCommands_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::_hx_system::debug::console::Console */ ,(int)offsetof(ConsoleCommands_obj,_console),HX_("_console",d8,44,8e,52)},
	{::hx::fsBool,(int)offsetof(ConsoleCommands_obj,_watchingMouse),HX_("_watchingMouse",73,f3,3a,2a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ConsoleCommands_obj_sStaticStorageInfo = 0;
#endif

static ::String ConsoleCommands_obj_sMemberFields[] = {
	HX_("_console",d8,44,8e,52),
	HX_("_watchingMouse",73,f3,3a,2a),
	HX_("help",c1,32,0b,45),
	HX_("close",b8,17,63,48),
	HX_("create",fc,66,0f,7c),
	HX_("fields",79,8e,8e,80),
	HX_("listObjects",16,dc,4e,39),
	HX_("listFunctions",1d,52,37,c0),
	HX_("watchMouse",56,31,6f,84),
	HX_("pause",f6,d6,57,bd),
	HX_("step",4c,e7,5b,4c),
	::String(null()) };

::hx::Class ConsoleCommands_obj::__mClass;

void ConsoleCommands_obj::__register()
{
	ConsoleCommands_obj _hx_dummy;
	ConsoleCommands_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.console.ConsoleCommands",80,e4,ff,a4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ConsoleCommands_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ConsoleCommands_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ConsoleCommands_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ConsoleCommands_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace console
