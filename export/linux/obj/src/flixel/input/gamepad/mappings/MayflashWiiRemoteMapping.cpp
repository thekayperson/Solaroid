#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAttachment
#include <flixel/input/gamepad/FlxGamepadAttachment.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_id_MayflashWiiRemoteID
#include <flixel/input/gamepad/id/MayflashWiiRemoteID.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_MayflashWiiRemoteMapping
#include <flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_WiiRemoteMapping
#include <flixel/input/gamepad/mappings/WiiRemoteMapping.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b96995a19667a299_7_new,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","new",0x14c5ed14,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.new","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",7,0xb7763ebe)
HX_LOCAL_STACK_FRAME(_hx_pos_b96995a19667a299_22_initValues,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","initValues",0x4dbe00de,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.initValues","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",22,0xb7763ebe)
HX_LOCAL_STACK_FRAME(_hx_pos_b96995a19667a299_27_getID,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","getID",0x3c1a43a5,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.getID","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",27,0xb7763ebe)
HX_LOCAL_STACK_FRAME(_hx_pos_b96995a19667a299_37_getIDClassicController,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","getIDClassicController",0xdc580be9,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.getIDClassicController","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",37,0xb7763ebe)
HX_LOCAL_STACK_FRAME(_hx_pos_b96995a19667a299_68_getIDNunchuk,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","getIDNunchuk",0xf7a650dd,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.getIDNunchuk","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",68,0xb7763ebe)
HX_LOCAL_STACK_FRAME(_hx_pos_b96995a19667a299_94_getIDDefault,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","getIDDefault",0x559cab9c,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.getIDDefault","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",94,0xb7763ebe)
HX_LOCAL_STACK_FRAME(_hx_pos_b96995a19667a299_113_getRawID,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","getRawID",0xc8a2c619,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.getRawID","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",113,0xb7763ebe)
HX_LOCAL_STACK_FRAME(_hx_pos_b96995a19667a299_123_getRawClassicController,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","getRawClassicController",0x0492e8b0,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.getRawClassicController","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",123,0xb7763ebe)
HX_LOCAL_STACK_FRAME(_hx_pos_b96995a19667a299_156_getRawNunchuk,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","getRawNunchuk",0x53b6bee4,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.getRawNunchuk","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",156,0xb7763ebe)
HX_LOCAL_STACK_FRAME(_hx_pos_b96995a19667a299_183_getRawDefault,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","getRawDefault",0xb1ad19a3,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.getRawDefault","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",183,0xb7763ebe)
HX_LOCAL_STACK_FRAME(_hx_pos_b96995a19667a299_245_set_attachment,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","set_attachment",0xdaecf06c,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.set_attachment","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",245,0xb7763ebe)
HX_LOCAL_STACK_FRAME(_hx_pos_b96995a19667a299_262_getInputLabel,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","getInputLabel",0x116cb774,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.getInputLabel","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",262,0xb7763ebe)
namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{

void MayflashWiiRemoteMapping_obj::__construct( ::flixel::input::gamepad::FlxGamepadAttachment attachment){
            	HX_STACKFRAME(&_hx_pos_b96995a19667a299_7_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(attachment,"attachment")
HXLINE(   7)
HXDLIN(   7)		super::__construct(attachment);
            	}

Dynamic MayflashWiiRemoteMapping_obj::__CreateEmpty() { return new MayflashWiiRemoteMapping_obj; }

void *MayflashWiiRemoteMapping_obj::_hx_vtable = 0;

Dynamic MayflashWiiRemoteMapping_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MayflashWiiRemoteMapping_obj > _hx_result = new MayflashWiiRemoteMapping_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MayflashWiiRemoteMapping_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x21e2b607) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x21e2b607;
	} else {
		return inClassId==(int)0x5c688ddc;
	}
}

void MayflashWiiRemoteMapping_obj::initValues(){
            	HX_STACKFRAME(&_hx_pos_b96995a19667a299_22_initValues)
            	HX_STACK_THIS(this)
HXLINE(  22)
HXDLIN(  22)		this->supportsPointer = true;
            	}


int MayflashWiiRemoteMapping_obj::getID(int rawID){
            	HX_STACKFRAME(&_hx_pos_b96995a19667a299_27_getID)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rawID,"rawID")
HXLINE(  27)
HXDLIN(  27)		switch((int)(this->attachment->_hx_getIndex())){
            			case (int)0: {
HXLINE(  30)				return this->getIDNunchuk(rawID);
            			}
            			break;
            			case (int)1: {
HXLINE(  29)				return this->getIDClassicController(rawID);
            			}
            			break;
            			case (int)2: {
HXLINE(  31)				return this->getIDDefault(rawID);
            			}
            			break;
            		}
HXLINE(  27)		return null();
            	}


int MayflashWiiRemoteMapping_obj::getIDClassicController(int rawID){
            	HX_STACKFRAME(&_hx_pos_b96995a19667a299_37_getIDClassicController)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rawID,"rawID")
HXLINE(  37)
HXDLIN(  37)		switch((int)(rawID)){
            			case (int)4: {
HXLINE(  50)				return 11;
            			}
            			break;
            			case (int)5: {
HXLINE(  51)				return 12;
            			}
            			break;
            			case (int)6: {
HXLINE(  52)				return 13;
            			}
            			break;
            			case (int)7: {
HXLINE(  53)				return 14;
            			}
            			break;
            			case (int)8: {
HXLINE(  42)				return 2;
            			}
            			break;
            			case (int)9: {
HXLINE(  41)				return 3;
            			}
            			break;
            			case (int)10: {
HXLINE(  40)				return 0;
            			}
            			break;
            			case (int)11: {
HXLINE(  39)				return 1;
            			}
            			break;
            			case (int)12: {
HXLINE(  46)				return 17;
            			}
            			break;
            			case (int)13: {
HXLINE(  47)				return 18;
            			}
            			break;
            			case (int)14: {
HXLINE(  48)				return 4;
            			}
            			break;
            			case (int)15: {
HXLINE(  49)				return 5;
            			}
            			break;
            			case (int)16: {
HXLINE(  43)				return 6;
            			}
            			break;
            			case (int)17: {
HXLINE(  45)				return 7;
            			}
            			break;
            			case (int)19: {
HXLINE(  44)				return 10;
            			}
            			break;
            			default:{
HXLINE(  54)				HX_VARI( int,id) = rawID;
HXDLIN(  54)				if ((id == this->leftStick->rawUp)) {
HXLINE(  54)					return 34;
            				}
            				else {
HXLINE(  55)					HX_VARI( int,id) = rawID;
HXDLIN(  55)					if ((id == this->leftStick->rawDown)) {
HXLINE(  55)						return 36;
            					}
            					else {
HXLINE(  56)						HX_VARI( int,id) = rawID;
HXDLIN(  56)						if ((id == this->leftStick->rawLeft)) {
HXLINE(  56)							return 37;
            						}
            						else {
HXLINE(  57)							HX_VARI( int,id) = rawID;
HXDLIN(  57)							if ((id == this->leftStick->rawRight)) {
HXLINE(  57)								return 35;
            							}
            							else {
HXLINE(  58)								HX_VARI( int,id) = rawID;
HXDLIN(  58)								if ((id == this->rightStick->rawUp)) {
HXLINE(  58)									return 38;
            								}
            								else {
HXLINE(  59)									HX_VARI( int,id) = rawID;
HXDLIN(  59)									if ((id == this->rightStick->rawDown)) {
HXLINE(  59)										return 40;
            									}
            									else {
HXLINE(  60)										HX_VARI( int,id) = rawID;
HXDLIN(  60)										if ((id == this->rightStick->rawLeft)) {
HXLINE(  60)											return 41;
            										}
            										else {
HXLINE(  61)											HX_VARI( int,id) = rawID;
HXDLIN(  61)											if ((id == this->rightStick->rawRight)) {
HXLINE(  61)												return 39;
            											}
            											else {
HXLINE(  62)												return -1;
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
HXLINE(  37)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(MayflashWiiRemoteMapping_obj,getIDClassicController,return )

int MayflashWiiRemoteMapping_obj::getIDNunchuk(int rawID){
            	HX_STACKFRAME(&_hx_pos_b96995a19667a299_68_getIDNunchuk)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rawID,"rawID")
HXLINE(  68)
HXDLIN(  68)		switch((int)(rawID)){
            			case (int)4: {
HXLINE(  79)				return 11;
            			}
            			break;
            			case (int)5: {
HXLINE(  80)				return 12;
            			}
            			break;
            			case (int)6: {
HXLINE(  81)				return 13;
            			}
            			break;
            			case (int)7: {
HXLINE(  82)				return 14;
            			}
            			break;
            			case (int)8: {
HXLINE(  72)				return 2;
            			}
            			break;
            			case (int)9: {
HXLINE(  73)				return 3;
            			}
            			break;
            			case (int)10: {
HXLINE(  70)				return 0;
            			}
            			break;
            			case (int)11: {
HXLINE(  71)				return 1;
            			}
            			break;
            			case (int)12: {
HXLINE(  74)				return 6;
            			}
            			break;
            			case (int)13: {
HXLINE(  75)				return 7;
            			}
            			break;
            			case (int)14: {
HXLINE(  78)				return 17;
            			}
            			break;
            			case (int)15: {
HXLINE(  77)				return 4;
            			}
            			break;
            			case (int)19: {
HXLINE(  76)				return 10;
            			}
            			break;
            			default:{
HXLINE(  84)				bool _hx_tmp = (rawID == ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK->rawUp);
HXLINE(  85)				bool _hx_tmp1 = (rawID == ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK->rawDown);
HXLINE(  86)				bool _hx_tmp2 = (rawID == ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK->rawLeft);
HXLINE(  87)				bool _hx_tmp3 = (rawID == ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK->rawRight);
HXLINE(  88)				return -1;
            			}
            		}
HXLINE(  68)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(MayflashWiiRemoteMapping_obj,getIDNunchuk,return )

int MayflashWiiRemoteMapping_obj::getIDDefault(int rawID){
            	HX_STACKFRAME(&_hx_pos_b96995a19667a299_94_getIDDefault)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rawID,"rawID")
HXLINE(  94)
HXDLIN(  94)		switch((int)(rawID)){
            			case (int)8: {
HXLINE(  98)				return 2;
            			}
            			break;
            			case (int)9: {
HXLINE(  99)				return 3;
            			}
            			break;
            			case (int)10: {
HXLINE(  96)				return 0;
            			}
            			break;
            			case (int)11: {
HXLINE(  97)				return 1;
            			}
            			break;
            			case (int)12: {
HXLINE( 100)				return 6;
            			}
            			break;
            			case (int)13: {
HXLINE( 102)				return 7;
            			}
            			break;
            			case (int)19: {
HXLINE( 101)				return 10;
            			}
            			break;
            			case (int)22: {
HXLINE( 103)				return 11;
            			}
            			break;
            			case (int)23: {
HXLINE( 104)				return 12;
            			}
            			break;
            			case (int)24: {
HXLINE( 105)				return 13;
            			}
            			break;
            			case (int)25: {
HXLINE( 106)				return 14;
            			}
            			break;
            			default:{
HXLINE( 107)				return -1;
            			}
            		}
HXLINE(  94)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(MayflashWiiRemoteMapping_obj,getIDDefault,return )

int MayflashWiiRemoteMapping_obj::getRawID(int ID){
            	HX_STACKFRAME(&_hx_pos_b96995a19667a299_113_getRawID)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ID,"ID")
HXLINE( 113)
HXDLIN( 113)		switch((int)(this->attachment->_hx_getIndex())){
            			case (int)0: {
HXLINE( 116)				return this->getRawNunchuk(ID);
            			}
            			break;
            			case (int)1: {
HXLINE( 115)				return this->getRawClassicController(ID);
            			}
            			break;
            			case (int)2: {
HXLINE( 117)				return this->getRawDefault(ID);
            			}
            			break;
            		}
HXLINE( 113)		return 0;
            	}


int MayflashWiiRemoteMapping_obj::getRawClassicController(int ID){
            	HX_STACKFRAME(&_hx_pos_b96995a19667a299_123_getRawClassicController)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ID,"ID")
HXLINE( 123)
HXDLIN( 123)		switch((int)(ID)){
            			case (int)0: {
HXLINE( 125)				return 10;
            			}
            			break;
            			case (int)1: {
HXLINE( 126)				return 11;
            			}
            			break;
            			case (int)2: {
HXLINE( 127)				return 8;
            			}
            			break;
            			case (int)3: {
HXLINE( 128)				return 9;
            			}
            			break;
            			case (int)4: {
HXLINE( 136)				return 14;
            			}
            			break;
            			case (int)5: {
HXLINE( 137)				return 15;
            			}
            			break;
            			case (int)6: {
HXLINE( 133)				return 16;
            			}
            			break;
            			case (int)7: {
HXLINE( 135)				return 17;
            			}
            			break;
            			case (int)10: {
HXLINE( 134)				return 19;
            			}
            			break;
            			case (int)11: {
HXLINE( 129)				return 4;
            			}
            			break;
            			case (int)12: {
HXLINE( 130)				return 5;
            			}
            			break;
            			case (int)13: {
HXLINE( 131)				return 6;
            			}
            			break;
            			case (int)14: {
HXLINE( 132)				return 7;
            			}
            			break;
            			case (int)17: {
HXLINE( 138)				return 12;
            			}
            			break;
            			case (int)18: {
HXLINE( 139)				return 13;
            			}
            			break;
            			case (int)30: {
HXLINE( 140)				return -1;
            			}
            			break;
            			case (int)31: {
HXLINE( 141)				return -1;
            			}
            			break;
            			case (int)34: {
HXLINE( 142)				return ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)35: {
HXLINE( 145)				return ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)36: {
HXLINE( 143)				return ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)37: {
HXLINE( 144)				return ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			case (int)38: {
HXLINE( 146)				return ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::RIGHT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)39: {
HXLINE( 149)				return ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::RIGHT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)40: {
HXLINE( 147)				return ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::RIGHT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)41: {
HXLINE( 148)				return ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::RIGHT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			default:{
HXLINE( 150)				return this->getRawDefault(ID);
            			}
            		}
HXLINE( 123)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MayflashWiiRemoteMapping_obj,getRawClassicController,return )

int MayflashWiiRemoteMapping_obj::getRawNunchuk(int ID){
            	HX_STACKFRAME(&_hx_pos_b96995a19667a299_156_getRawNunchuk)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ID,"ID")
HXLINE( 156)
HXDLIN( 156)		switch((int)(ID)){
            			case (int)0: {
HXLINE( 158)				return 10;
            			}
            			break;
            			case (int)1: {
HXLINE( 159)				return 11;
            			}
            			break;
            			case (int)2: {
HXLINE( 160)				return 8;
            			}
            			break;
            			case (int)3: {
HXLINE( 161)				return 9;
            			}
            			break;
            			case (int)4: {
HXLINE( 165)				return 15;
            			}
            			break;
            			case (int)6: {
HXLINE( 162)				return 12;
            			}
            			break;
            			case (int)7: {
HXLINE( 163)				return 13;
            			}
            			break;
            			case (int)10: {
HXLINE( 164)				return 19;
            			}
            			break;
            			case (int)11: {
HXLINE( 167)				return 4;
            			}
            			break;
            			case (int)12: {
HXLINE( 168)				return 5;
            			}
            			break;
            			case (int)13: {
HXLINE( 169)				return 6;
            			}
            			break;
            			case (int)14: {
HXLINE( 170)				return 7;
            			}
            			break;
            			case (int)17: {
HXLINE( 166)				return 14;
            			}
            			break;
            			case (int)28: {
HXLINE( 171)				return 2;
            			}
            			break;
            			case (int)29: {
HXLINE( 172)				return 3;
            			}
            			break;
            			case (int)34: {
HXLINE( 173)				return ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)35: {
HXLINE( 176)				return ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)36: {
HXLINE( 174)				return ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)37: {
HXLINE( 175)				return ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			default:{
HXLINE( 177)				return -1;
            			}
            		}
HXLINE( 156)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MayflashWiiRemoteMapping_obj,getRawNunchuk,return )

int MayflashWiiRemoteMapping_obj::getRawDefault(int ID){
            	HX_STACKFRAME(&_hx_pos_b96995a19667a299_183_getRawDefault)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ID,"ID")
HXLINE( 183)
HXDLIN( 183)		switch((int)(ID)){
            			case (int)0: {
HXLINE( 185)				return 10;
            			}
            			break;
            			case (int)1: {
HXLINE( 186)				return 11;
            			}
            			break;
            			case (int)2: {
HXLINE( 187)				return 8;
            			}
            			break;
            			case (int)3: {
HXLINE( 188)				return 9;
            			}
            			break;
            			case (int)6: {
HXLINE( 193)				return 12;
            			}
            			break;
            			case (int)7: {
HXLINE( 195)				return 13;
            			}
            			break;
            			case (int)10: {
HXLINE( 194)				return 19;
            			}
            			break;
            			case (int)11: {
HXLINE( 189)				return 22;
            			}
            			break;
            			case (int)12: {
HXLINE( 190)				return 23;
            			}
            			break;
            			case (int)13: {
HXLINE( 191)				return 24;
            			}
            			break;
            			case (int)14: {
HXLINE( 192)				return 25;
            			}
            			break;
            			default:{
HXLINE( 196)				return -1;
            			}
            		}
HXLINE( 183)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MayflashWiiRemoteMapping_obj,getRawDefault,return )

 ::flixel::input::gamepad::FlxGamepadAttachment MayflashWiiRemoteMapping_obj::set_attachment( ::flixel::input::gamepad::FlxGamepadAttachment attachment){
            	HX_STACKFRAME(&_hx_pos_b96995a19667a299_245_set_attachment)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(attachment,"attachment")
HXLINE( 245)
HXLINE( 246)		 ::flixel::input::gamepad::FlxGamepadAnalogStick _hx_tmp;
HXDLIN( 246)		switch((int)(attachment->_hx_getIndex())){
            			case (int)0: case (int)1: {
HXLINE( 246)				_hx_tmp = ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK;
            			}
            			break;
            			case (int)2: {
HXLINE( 246)				_hx_tmp = ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::REMOTE_DPAD;
            			}
            			break;
            		}
HXDLIN( 246)		this->leftStick = _hx_tmp;
HXLINE( 252)		 ::flixel::input::gamepad::FlxGamepadAnalogStick _hx_tmp1;
HXDLIN( 252)		if ((attachment->_hx_getIndex() == 1)) {
HXLINE( 252)			_hx_tmp1 = ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::RIGHT_ANALOG_STICK;
            		}
            		else {
HXLINE( 252)			_hx_tmp1 = null();
            		}
HXDLIN( 252)		this->rightStick = _hx_tmp1;
HXLINE( 258)		return this->super::set_attachment(attachment);
            	}


::String MayflashWiiRemoteMapping_obj::getInputLabel(int id){
            	HX_STACKFRAME(&_hx_pos_b96995a19667a299_262_getInputLabel)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(id,"id")
HXLINE( 262)
HXLINE( 263)		HX_VARI( ::String,label) = ::flixel::input::gamepad::mappings::WiiRemoteMapping_obj::getWiiInputLabel(id,this->attachment);
HXLINE( 264)		if (::hx::IsNull( label )) {
HXLINE( 265)			return this->super::getInputLabel(id);
            		}
HXLINE( 267)		return label;
            	}



::hx::ObjectPtr< MayflashWiiRemoteMapping_obj > MayflashWiiRemoteMapping_obj::__new( ::flixel::input::gamepad::FlxGamepadAttachment attachment) {
	::hx::ObjectPtr< MayflashWiiRemoteMapping_obj > __this = new MayflashWiiRemoteMapping_obj();
	__this->__construct(attachment);
	return __this;
}

::hx::ObjectPtr< MayflashWiiRemoteMapping_obj > MayflashWiiRemoteMapping_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::input::gamepad::FlxGamepadAttachment attachment) {
	MayflashWiiRemoteMapping_obj *__this = (MayflashWiiRemoteMapping_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MayflashWiiRemoteMapping_obj), true, "flixel.input.gamepad.mappings.MayflashWiiRemoteMapping"));
	*(void **)__this = MayflashWiiRemoteMapping_obj::_hx_vtable;
	__this->__construct(attachment);
	return __this;
}

MayflashWiiRemoteMapping_obj::MayflashWiiRemoteMapping_obj()
{
}

::hx::Val MayflashWiiRemoteMapping_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
	case 12:
		if (HX_FIELD_EQ(inName,"getIDNunchuk") ) { return ::hx::Val( getIDNunchuk_dyn() ); }
		if (HX_FIELD_EQ(inName,"getIDDefault") ) { return ::hx::Val( getIDDefault_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getRawNunchuk") ) { return ::hx::Val( getRawNunchuk_dyn() ); }
		if (HX_FIELD_EQ(inName,"getRawDefault") ) { return ::hx::Val( getRawDefault_dyn() ); }
		if (HX_FIELD_EQ(inName,"getInputLabel") ) { return ::hx::Val( getInputLabel_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_attachment") ) { return ::hx::Val( set_attachment_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getIDClassicController") ) { return ::hx::Val( getIDClassicController_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getRawClassicController") ) { return ::hx::Val( getRawClassicController_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MayflashWiiRemoteMapping_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *MayflashWiiRemoteMapping_obj_sStaticStorageInfo = 0;
#endif

static ::String MayflashWiiRemoteMapping_obj_sMemberFields[] = {
	HX_("initValues",12,5f,fc,53),
	HX_("getID",f1,91,60,91),
	HX_("getIDClassicController",1d,e8,c4,20),
	HX_("getIDNunchuk",11,a4,df,d0),
	HX_("getIDDefault",d0,fe,d5,2e),
	HX_("getRawID",4d,6f,fd,43),
	HX_("getRawClassicController",fc,b9,66,9f),
	HX_("getRawNunchuk",30,39,a6,8c),
	HX_("getRawDefault",ef,93,9c,ea),
	HX_("set_attachment",a0,78,88,73),
	HX_("getInputLabel",c0,31,5c,4a),
	::String(null()) };

::hx::Class MayflashWiiRemoteMapping_obj::__mClass;

void MayflashWiiRemoteMapping_obj::__register()
{
	MayflashWiiRemoteMapping_obj _hx_dummy;
	MayflashWiiRemoteMapping_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.gamepad.mappings.MayflashWiiRemoteMapping",22,13,e5,ee);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MayflashWiiRemoteMapping_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MayflashWiiRemoteMapping_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MayflashWiiRemoteMapping_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MayflashWiiRemoteMapping_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings
