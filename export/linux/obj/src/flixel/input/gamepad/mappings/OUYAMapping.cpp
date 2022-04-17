#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAttachment
#include <flixel/input/gamepad/FlxGamepadAttachment.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_id_OUYAID
#include <flixel/input/gamepad/id/OUYAID.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_OUYAMapping
#include <flixel/input/gamepad/mappings/OUYAMapping.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cb034decec2e0057_6_new,"flixel.input.gamepad.mappings.OUYAMapping","new",0x98fc348c,"flixel.input.gamepad.mappings.OUYAMapping.new","flixel/input/gamepad/mappings/OUYAMapping.hx",6,0xfd22efc2)
HX_LOCAL_STACK_FRAME(_hx_pos_cb034decec2e0057_17_initValues,"flixel.input.gamepad.mappings.OUYAMapping","initValues",0x29941866,"flixel.input.gamepad.mappings.OUYAMapping.initValues","flixel/input/gamepad/mappings/OUYAMapping.hx",17,0xfd22efc2)
HX_LOCAL_STACK_FRAME(_hx_pos_cb034decec2e0057_24_getID,"flixel.input.gamepad.mappings.OUYAMapping","getID",0xf00b591d,"flixel.input.gamepad.mappings.OUYAMapping.getID","flixel/input/gamepad/mappings/OUYAMapping.hx",24,0xfd22efc2)
HX_LOCAL_STACK_FRAME(_hx_pos_cb034decec2e0057_55_getRawID,"flixel.input.gamepad.mappings.OUYAMapping","getRawID",0x921e6ba1,"flixel.input.gamepad.mappings.OUYAMapping.getRawID","flixel/input/gamepad/mappings/OUYAMapping.hx",55,0xfd22efc2)
HX_LOCAL_STACK_FRAME(_hx_pos_cb034decec2e0057_86_getInputLabel,"flixel.input.gamepad.mappings.OUYAMapping","getInputLabel",0x4d2404ec,"flixel.input.gamepad.mappings.OUYAMapping.getInputLabel","flixel/input/gamepad/mappings/OUYAMapping.hx",86,0xfd22efc2)
namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{

void OUYAMapping_obj::__construct( ::flixel::input::gamepad::FlxGamepadAttachment attachment){
            	HX_STACKFRAME(&_hx_pos_cb034decec2e0057_6_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(attachment,"attachment")
HXLINE(   6)
HXDLIN(   6)		super::__construct(attachment);
            	}

Dynamic OUYAMapping_obj::__CreateEmpty() { return new OUYAMapping_obj; }

void *OUYAMapping_obj::_hx_vtable = 0;

Dynamic OUYAMapping_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OUYAMapping_obj > _hx_result = new OUYAMapping_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool OUYAMapping_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08bec83c) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08bec83c;
	} else {
		return inClassId==(int)0x21e2b607;
	}
}

void OUYAMapping_obj::initValues(){
            	HX_STACKFRAME(&_hx_pos_cb034decec2e0057_17_initValues)
            	HX_STACK_THIS(this)
HXLINE(  17)
HXLINE(  18)		this->leftStick = ::flixel::input::gamepad::id::OUYAID_obj::LEFT_ANALOG_STICK;
HXLINE(  19)		this->rightStick = ::flixel::input::gamepad::id::OUYAID_obj::RIGHT_ANALOG_STICK;
            	}


int OUYAMapping_obj::getID(int rawID){
            	HX_STACKFRAME(&_hx_pos_cb034decec2e0057_24_getID)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rawID,"rawID")
HXLINE(  24)
HXDLIN(  24)		switch((int)(rawID)){
            			case (int)4: {
HXLINE(  35)				return 17;
            			}
            			break;
            			case (int)5: {
HXLINE(  36)				return 18;
            			}
            			break;
            			case (int)6: {
HXLINE(  26)				return 0;
            			}
            			break;
            			case (int)7: {
HXLINE(  27)				return 1;
            			}
            			break;
            			case (int)8: {
HXLINE(  28)				return 2;
            			}
            			break;
            			case (int)9: {
HXLINE(  29)				return 3;
            			}
            			break;
            			case (int)13: {
HXLINE(  31)				return 8;
            			}
            			break;
            			case (int)14: {
HXLINE(  32)				return 9;
            			}
            			break;
            			case (int)15: {
HXLINE(  33)				return 4;
            			}
            			break;
            			case (int)16: {
HXLINE(  34)				return 5;
            			}
            			break;
            			case (int)17: {
HXLINE(  37)				return 11;
            			}
            			break;
            			case (int)18: {
HXLINE(  38)				return 12;
            			}
            			break;
            			case (int)19: {
HXLINE(  39)				return 13;
            			}
            			break;
            			case (int)20: {
HXLINE(  40)				return 14;
            			}
            			break;
            			case (int)16777234: {
HXLINE(  30)				return 10;
            			}
            			break;
            			default:{
HXLINE(  41)				HX_VARI( int,id) = rawID;
HXDLIN(  41)				if ((id == this->leftStick->rawUp)) {
HXLINE(  41)					return 34;
            				}
            				else {
HXLINE(  42)					HX_VARI( int,id) = rawID;
HXDLIN(  42)					if ((id == this->leftStick->rawDown)) {
HXLINE(  42)						return 36;
            					}
            					else {
HXLINE(  43)						HX_VARI( int,id) = rawID;
HXDLIN(  43)						if ((id == this->leftStick->rawLeft)) {
HXLINE(  43)							return 37;
            						}
            						else {
HXLINE(  44)							HX_VARI( int,id) = rawID;
HXDLIN(  44)							if ((id == this->leftStick->rawRight)) {
HXLINE(  44)								return 35;
            							}
            							else {
HXLINE(  45)								HX_VARI( int,id) = rawID;
HXDLIN(  45)								if ((id == this->rightStick->rawUp)) {
HXLINE(  45)									return 38;
            								}
            								else {
HXLINE(  46)									HX_VARI( int,id) = rawID;
HXDLIN(  46)									if ((id == this->rightStick->rawDown)) {
HXLINE(  46)										return 40;
            									}
            									else {
HXLINE(  47)										HX_VARI( int,id) = rawID;
HXDLIN(  47)										if ((id == this->rightStick->rawLeft)) {
HXLINE(  47)											return 41;
            										}
            										else {
HXLINE(  48)											HX_VARI( int,id) = rawID;
HXDLIN(  48)											if ((id == this->rightStick->rawRight)) {
HXLINE(  48)												return 39;
            											}
            											else {
HXLINE(  49)												return -1;
            											}
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(  24)		return null();
            	}


int OUYAMapping_obj::getRawID(int ID){
            	HX_STACKFRAME(&_hx_pos_cb034decec2e0057_55_getRawID)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ID,"ID")
HXLINE(  55)
HXDLIN(  55)		switch((int)(ID)){
            			case (int)0: {
HXLINE(  57)				return 6;
            			}
            			break;
            			case (int)1: {
HXLINE(  58)				return 7;
            			}
            			break;
            			case (int)2: {
HXLINE(  59)				return 8;
            			}
            			break;
            			case (int)3: {
HXLINE(  60)				return 9;
            			}
            			break;
            			case (int)4: {
HXLINE(  64)				return 15;
            			}
            			break;
            			case (int)5: {
HXLINE(  65)				return 16;
            			}
            			break;
            			case (int)8: {
HXLINE(  62)				return 13;
            			}
            			break;
            			case (int)9: {
HXLINE(  63)				return 14;
            			}
            			break;
            			case (int)10: {
HXLINE(  61)				return 16777234;
            			}
            			break;
            			case (int)11: {
HXLINE(  66)				return 17;
            			}
            			break;
            			case (int)12: {
HXLINE(  67)				return 18;
            			}
            			break;
            			case (int)13: {
HXLINE(  68)				return 19;
            			}
            			break;
            			case (int)14: {
HXLINE(  69)				return 20;
            			}
            			break;
            			case (int)17: {
HXLINE(  70)				return 4;
            			}
            			break;
            			case (int)18: {
HXLINE(  71)				return 5;
            			}
            			break;
            			case (int)34: {
HXLINE(  72)				return ::flixel::input::gamepad::id::OUYAID_obj::LEFT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)35: {
HXLINE(  75)				return ::flixel::input::gamepad::id::OUYAID_obj::LEFT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)36: {
HXLINE(  73)				return ::flixel::input::gamepad::id::OUYAID_obj::LEFT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)37: {
HXLINE(  74)				return ::flixel::input::gamepad::id::OUYAID_obj::LEFT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			case (int)38: {
HXLINE(  76)				return ::flixel::input::gamepad::id::OUYAID_obj::RIGHT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)39: {
HXLINE(  79)				return ::flixel::input::gamepad::id::OUYAID_obj::RIGHT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)40: {
HXLINE(  77)				return ::flixel::input::gamepad::id::OUYAID_obj::RIGHT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)41: {
HXLINE(  78)				return ::flixel::input::gamepad::id::OUYAID_obj::RIGHT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			default:{
HXLINE(  80)				return -1;
            			}
            		}
HXLINE(  55)		return 0;
            	}


::String OUYAMapping_obj::getInputLabel(int id){
            	HX_STACKFRAME(&_hx_pos_cb034decec2e0057_86_getInputLabel)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(id,"id")
HXLINE(  86)
HXDLIN(  86)		switch((int)(id)){
            			case (int)0: {
HXLINE(  88)				return HX_("o",6f,00,00,00);
            			}
            			break;
            			case (int)1: {
HXLINE(  89)				return HX_("a",61,00,00,00);
            			}
            			break;
            			case (int)2: {
HXLINE(  90)				return HX_("u",75,00,00,00);
            			}
            			break;
            			case (int)3: {
HXLINE(  91)				return HX_("y",79,00,00,00);
            			}
            			break;
            			case (int)10: {
HXLINE(  92)				return HX_("home",1f,ca,12,45);
            			}
            			break;
            			default:{
HXLINE(  93)				return this->super::getInputLabel(id);
            			}
            		}
HXLINE(  86)		return null();
            	}



::hx::ObjectPtr< OUYAMapping_obj > OUYAMapping_obj::__new( ::flixel::input::gamepad::FlxGamepadAttachment attachment) {
	::hx::ObjectPtr< OUYAMapping_obj > __this = new OUYAMapping_obj();
	__this->__construct(attachment);
	return __this;
}

::hx::ObjectPtr< OUYAMapping_obj > OUYAMapping_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::input::gamepad::FlxGamepadAttachment attachment) {
	OUYAMapping_obj *__this = (OUYAMapping_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OUYAMapping_obj), true, "flixel.input.gamepad.mappings.OUYAMapping"));
	*(void **)__this = OUYAMapping_obj::_hx_vtable;
	__this->__construct(attachment);
	return __this;
}

OUYAMapping_obj::OUYAMapping_obj()
{
}

::hx::Val OUYAMapping_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getID") ) { return ::hx::Val( getID_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getRawID") ) { return ::hx::Val( getRawID_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initValues") ) { return ::hx::Val( initValues_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getInputLabel") ) { return ::hx::Val( getInputLabel_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *OUYAMapping_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *OUYAMapping_obj_sStaticStorageInfo = 0;
#endif

static ::String OUYAMapping_obj_sMemberFields[] = {
	HX_("initValues",12,5f,fc,53),
	HX_("getID",f1,91,60,91),
	HX_("getRawID",4d,6f,fd,43),
	HX_("getInputLabel",c0,31,5c,4a),
	::String(null()) };

::hx::Class OUYAMapping_obj::__mClass;

void OUYAMapping_obj::__register()
{
	OUYAMapping_obj _hx_dummy;
	OUYAMapping_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.gamepad.mappings.OUYAMapping",9a,3e,94,1c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OUYAMapping_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OUYAMapping_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OUYAMapping_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OUYAMapping_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings
