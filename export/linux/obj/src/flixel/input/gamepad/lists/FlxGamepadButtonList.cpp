#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxBaseGamepadList
#include <flixel/input/gamepad/lists/FlxBaseGamepadList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadButtonList
#include <flixel/input/gamepad/lists/FlxGamepadButtonList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b0737e09367eab91_216_new,"flixel.input.gamepad.lists.FlxGamepadButtonList","new",0xeb174acd,"flixel.input.gamepad.lists.FlxGamepadButtonList.new","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",216,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_15_get_A,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_A",0x4fc954c5,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_A","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",15,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_20_get_B,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_B",0x4fc954c6,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_B","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",20,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_25_get_X,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_X",0x4fc954dc,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_X","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",25,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_30_get_Y,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_Y",0x4fc954dd,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_Y","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",30,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_35_get_LEFT_SHOULDER,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_LEFT_SHOULDER",0x7b61bc5c,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_LEFT_SHOULDER","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",35,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_40_get_RIGHT_SHOULDER,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_RIGHT_SHOULDER",0x1879c87f,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_RIGHT_SHOULDER","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",40,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_45_get_BACK,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_BACK",0xfcd4f823,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_BACK","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",45,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_50_get_START,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_START",0x13e192c6,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_START","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",50,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_55_get_LEFT_STICK_CLICK,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_LEFT_STICK_CLICK",0x1bf4fd1d,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_LEFT_STICK_CLICK","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",55,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_60_get_RIGHT_STICK_CLICK,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_RIGHT_STICK_CLICK",0xc38ee8da,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_RIGHT_STICK_CLICK","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",60,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_65_get_GUIDE,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_GUIDE",0x2bc1d920,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_GUIDE","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",65,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_70_get_DPAD_UP,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_DPAD_UP",0xeb188fef,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_DPAD_UP","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",70,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_75_get_DPAD_DOWN,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_DPAD_DOWN",0x431292f6,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_DPAD_DOWN","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",75,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_80_get_DPAD_LEFT,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_DPAD_LEFT",0x4854a29b,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_DPAD_LEFT","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",80,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_85_get_DPAD_RIGHT,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_DPAD_RIGHT",0x78c6b2a8,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_DPAD_RIGHT","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",85,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_90_get_LEFT_TRIGGER_BUTTON,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_LEFT_TRIGGER_BUTTON",0xf6a02775,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_LEFT_TRIGGER_BUTTON","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",90,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_95_get_RIGHT_TRIGGER_BUTTON,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_RIGHT_TRIGGER_BUTTON",0x26b86fd8,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_RIGHT_TRIGGER_BUTTON","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",95,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_101_get_LEFT_TRIGGER,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_LEFT_TRIGGER",0xc549e39c,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_LEFT_TRIGGER","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",101,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_106_get_RIGHT_TRIGGER,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_RIGHT_TRIGGER",0x7a39ecd9,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_RIGHT_TRIGGER","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",106,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_122_get_LEFT_ANALOG_STICK,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_LEFT_ANALOG_STICK",0x5dc1e59d,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_LEFT_ANALOG_STICK","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",122,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_127_get_RIGHT_ANALOG_STICK,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_RIGHT_ANALOG_STICK",0x5cd63f40,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_RIGHT_ANALOG_STICK","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",127,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_132_get_DPAD,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_DPAD",0xfe32c56b,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_DPAD","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",132,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_137_get_TILT_PITCH,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_TILT_PITCH",0xa09354da,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_TILT_PITCH","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",137,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_142_get_TILT_ROLL,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_TILT_ROLL",0x1a2ad783,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_TILT_ROLL","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",142,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_147_get_POINTER_X,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_POINTER_X",0xe4b1817a,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_POINTER_X","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",147,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_152_get_POINTER_Y,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_POINTER_Y",0xe4b1817b,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_POINTER_Y","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",152,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_157_get_EXTRA_0,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_EXTRA_0",0x415030e5,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_EXTRA_0","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",157,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_162_get_EXTRA_1,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_EXTRA_1",0x415030e6,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_EXTRA_1","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",162,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_167_get_EXTRA_2,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_EXTRA_2",0x415030e7,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_EXTRA_2","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",167,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_172_get_EXTRA_3,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_EXTRA_3",0x415030e8,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_EXTRA_3","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",172,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_177_get_LEFT_STICK_DIGITAL_UP,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_LEFT_STICK_DIGITAL_UP",0xf98806ad,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_LEFT_STICK_DIGITAL_UP","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",177,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_182_get_LEFT_STICK_DIGITAL_RIGHT,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_LEFT_STICK_DIGITAL_RIGHT",0x567b86aa,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_LEFT_STICK_DIGITAL_RIGHT","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",182,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_187_get_LEFT_STICK_DIGITAL_DOWN,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_LEFT_STICK_DIGITAL_DOWN",0x655bb534,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_LEFT_STICK_DIGITAL_DOWN","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",187,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_192_get_LEFT_STICK_DIGITAL_LEFT,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_LEFT_STICK_DIGITAL_LEFT",0x6a9dc4d9,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_LEFT_STICK_DIGITAL_LEFT","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",192,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_197_get_RIGHT_STICK_DIGITAL_UP,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_RIGHT_STICK_DIGITAL_UP",0x968d6dd0,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_RIGHT_STICK_DIGITAL_UP","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",197,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_202_get_RIGHT_STICK_DIGITAL_RIGHT,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_RIGHT_STICK_DIGITAL_RIGHT",0x16b2f767,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_RIGHT_STICK_DIGITAL_RIGHT","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",202,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_207_get_RIGHT_STICK_DIGITAL_DOWN,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_RIGHT_STICK_DIGITAL_DOWN",0x5be36b17,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_RIGHT_STICK_DIGITAL_DOWN","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",207,0x834770bf)
HX_LOCAL_STACK_FRAME(_hx_pos_b0737e09367eab91_212_get_RIGHT_STICK_DIGITAL_LEFT,"flixel.input.gamepad.lists.FlxGamepadButtonList","get_RIGHT_STICK_DIGITAL_LEFT",0x61257abc,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_RIGHT_STICK_DIGITAL_LEFT","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",212,0x834770bf)
namespace flixel{
namespace input{
namespace gamepad{
namespace lists{

void FlxGamepadButtonList_obj::__construct(int status, ::flixel::input::gamepad::FlxGamepad gamepad){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_216_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(status,"status")
            	HX_STACK_ARG(gamepad,"gamepad")
HXLINE( 216)
HXDLIN( 216)		super::__construct(status,gamepad);
            	}

Dynamic FlxGamepadButtonList_obj::__CreateEmpty() { return new FlxGamepadButtonList_obj; }

void *FlxGamepadButtonList_obj::_hx_vtable = 0;

Dynamic FlxGamepadButtonList_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxGamepadButtonList_obj > _hx_result = new FlxGamepadButtonList_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxGamepadButtonList_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x46c3c8b9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x46c3c8b9;
	} else {
		return inClassId==(int)0x5a74ca3a;
	}
}

bool FlxGamepadButtonList_obj::get_A(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_15_get_A)
            	HX_STACK_THIS(this)
HXLINE(  15)
HXDLIN(  15)		int id = 0;
HXDLIN(  15)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN(  15)		int Status = this->status;
HXDLIN(  15)		switch((int)(id)){
            			case (int)-2: {
HXDLIN(  15)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN(  15)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN(  15)				int RawID = _this->mapping->getRawID(id);
HXDLIN(  15)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  15)				if (::hx::IsNotNull( button )) {
HXDLIN(  15)					return button->hasState(Status);
            				}
            				else {
HXDLIN(  15)					return false;
            				}
            			}
            		}
HXDLIN(  15)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_A,return )

bool FlxGamepadButtonList_obj::get_B(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_20_get_B)
            	HX_STACK_THIS(this)
HXLINE(  20)
HXDLIN(  20)		int id = 1;
HXDLIN(  20)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN(  20)		int Status = this->status;
HXDLIN(  20)		switch((int)(id)){
            			case (int)-2: {
HXDLIN(  20)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN(  20)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN(  20)				int RawID = _this->mapping->getRawID(id);
HXDLIN(  20)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  20)				if (::hx::IsNotNull( button )) {
HXDLIN(  20)					return button->hasState(Status);
            				}
            				else {
HXDLIN(  20)					return false;
            				}
            			}
            		}
HXDLIN(  20)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_B,return )

bool FlxGamepadButtonList_obj::get_X(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_25_get_X)
            	HX_STACK_THIS(this)
HXLINE(  25)
HXDLIN(  25)		int id = 2;
HXDLIN(  25)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN(  25)		int Status = this->status;
HXDLIN(  25)		switch((int)(id)){
            			case (int)-2: {
HXDLIN(  25)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN(  25)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN(  25)				int RawID = _this->mapping->getRawID(id);
HXDLIN(  25)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  25)				if (::hx::IsNotNull( button )) {
HXDLIN(  25)					return button->hasState(Status);
            				}
            				else {
HXDLIN(  25)					return false;
            				}
            			}
            		}
HXDLIN(  25)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_X,return )

bool FlxGamepadButtonList_obj::get_Y(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_30_get_Y)
            	HX_STACK_THIS(this)
HXLINE(  30)
HXDLIN(  30)		int id = 3;
HXDLIN(  30)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN(  30)		int Status = this->status;
HXDLIN(  30)		switch((int)(id)){
            			case (int)-2: {
HXDLIN(  30)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN(  30)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN(  30)				int RawID = _this->mapping->getRawID(id);
HXDLIN(  30)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  30)				if (::hx::IsNotNull( button )) {
HXDLIN(  30)					return button->hasState(Status);
            				}
            				else {
HXDLIN(  30)					return false;
            				}
            			}
            		}
HXDLIN(  30)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_Y,return )

bool FlxGamepadButtonList_obj::get_LEFT_SHOULDER(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_35_get_LEFT_SHOULDER)
            	HX_STACK_THIS(this)
HXLINE(  35)
HXDLIN(  35)		int id = 4;
HXDLIN(  35)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN(  35)		int Status = this->status;
HXDLIN(  35)		switch((int)(id)){
            			case (int)-2: {
HXDLIN(  35)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN(  35)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN(  35)				int RawID = _this->mapping->getRawID(id);
HXDLIN(  35)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  35)				if (::hx::IsNotNull( button )) {
HXDLIN(  35)					return button->hasState(Status);
            				}
            				else {
HXDLIN(  35)					return false;
            				}
            			}
            		}
HXDLIN(  35)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_LEFT_SHOULDER,return )

bool FlxGamepadButtonList_obj::get_RIGHT_SHOULDER(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_40_get_RIGHT_SHOULDER)
            	HX_STACK_THIS(this)
HXLINE(  40)
HXDLIN(  40)		int id = 5;
HXDLIN(  40)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN(  40)		int Status = this->status;
HXDLIN(  40)		switch((int)(id)){
            			case (int)-2: {
HXDLIN(  40)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN(  40)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN(  40)				int RawID = _this->mapping->getRawID(id);
HXDLIN(  40)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  40)				if (::hx::IsNotNull( button )) {
HXDLIN(  40)					return button->hasState(Status);
            				}
            				else {
HXDLIN(  40)					return false;
            				}
            			}
            		}
HXDLIN(  40)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_RIGHT_SHOULDER,return )

bool FlxGamepadButtonList_obj::get_BACK(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_45_get_BACK)
            	HX_STACK_THIS(this)
HXLINE(  45)
HXDLIN(  45)		int id = 6;
HXDLIN(  45)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN(  45)		int Status = this->status;
HXDLIN(  45)		switch((int)(id)){
            			case (int)-2: {
HXDLIN(  45)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN(  45)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN(  45)				int RawID = _this->mapping->getRawID(id);
HXDLIN(  45)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  45)				if (::hx::IsNotNull( button )) {
HXDLIN(  45)					return button->hasState(Status);
            				}
            				else {
HXDLIN(  45)					return false;
            				}
            			}
            		}
HXDLIN(  45)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_BACK,return )

bool FlxGamepadButtonList_obj::get_START(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_50_get_START)
            	HX_STACK_THIS(this)
HXLINE(  50)
HXDLIN(  50)		int id = 7;
HXDLIN(  50)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN(  50)		int Status = this->status;
HXDLIN(  50)		switch((int)(id)){
            			case (int)-2: {
HXDLIN(  50)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN(  50)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN(  50)				int RawID = _this->mapping->getRawID(id);
HXDLIN(  50)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  50)				if (::hx::IsNotNull( button )) {
HXDLIN(  50)					return button->hasState(Status);
            				}
            				else {
HXDLIN(  50)					return false;
            				}
            			}
            		}
HXDLIN(  50)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_START,return )

bool FlxGamepadButtonList_obj::get_LEFT_STICK_CLICK(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_55_get_LEFT_STICK_CLICK)
            	HX_STACK_THIS(this)
HXLINE(  55)
HXDLIN(  55)		int id = 8;
HXDLIN(  55)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN(  55)		int Status = this->status;
HXDLIN(  55)		switch((int)(id)){
            			case (int)-2: {
HXDLIN(  55)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN(  55)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN(  55)				int RawID = _this->mapping->getRawID(id);
HXDLIN(  55)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  55)				if (::hx::IsNotNull( button )) {
HXDLIN(  55)					return button->hasState(Status);
            				}
            				else {
HXDLIN(  55)					return false;
            				}
            			}
            		}
HXDLIN(  55)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_LEFT_STICK_CLICK,return )

bool FlxGamepadButtonList_obj::get_RIGHT_STICK_CLICK(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_60_get_RIGHT_STICK_CLICK)
            	HX_STACK_THIS(this)
HXLINE(  60)
HXDLIN(  60)		int id = 9;
HXDLIN(  60)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN(  60)		int Status = this->status;
HXDLIN(  60)		switch((int)(id)){
            			case (int)-2: {
HXDLIN(  60)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN(  60)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN(  60)				int RawID = _this->mapping->getRawID(id);
HXDLIN(  60)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  60)				if (::hx::IsNotNull( button )) {
HXDLIN(  60)					return button->hasState(Status);
            				}
            				else {
HXDLIN(  60)					return false;
            				}
            			}
            		}
HXDLIN(  60)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_RIGHT_STICK_CLICK,return )

bool FlxGamepadButtonList_obj::get_GUIDE(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_65_get_GUIDE)
            	HX_STACK_THIS(this)
HXLINE(  65)
HXDLIN(  65)		int id = 10;
HXDLIN(  65)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN(  65)		int Status = this->status;
HXDLIN(  65)		switch((int)(id)){
            			case (int)-2: {
HXDLIN(  65)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN(  65)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN(  65)				int RawID = _this->mapping->getRawID(id);
HXDLIN(  65)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  65)				if (::hx::IsNotNull( button )) {
HXDLIN(  65)					return button->hasState(Status);
            				}
            				else {
HXDLIN(  65)					return false;
            				}
            			}
            		}
HXDLIN(  65)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_GUIDE,return )

bool FlxGamepadButtonList_obj::get_DPAD_UP(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_70_get_DPAD_UP)
            	HX_STACK_THIS(this)
HXLINE(  70)
HXDLIN(  70)		int id = 11;
HXDLIN(  70)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN(  70)		int Status = this->status;
HXDLIN(  70)		switch((int)(id)){
            			case (int)-2: {
HXDLIN(  70)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN(  70)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN(  70)				int RawID = _this->mapping->getRawID(id);
HXDLIN(  70)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  70)				if (::hx::IsNotNull( button )) {
HXDLIN(  70)					return button->hasState(Status);
            				}
            				else {
HXDLIN(  70)					return false;
            				}
            			}
            		}
HXDLIN(  70)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_DPAD_UP,return )

bool FlxGamepadButtonList_obj::get_DPAD_DOWN(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_75_get_DPAD_DOWN)
            	HX_STACK_THIS(this)
HXLINE(  75)
HXDLIN(  75)		int id = 12;
HXDLIN(  75)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN(  75)		int Status = this->status;
HXDLIN(  75)		switch((int)(id)){
            			case (int)-2: {
HXDLIN(  75)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN(  75)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN(  75)				int RawID = _this->mapping->getRawID(id);
HXDLIN(  75)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  75)				if (::hx::IsNotNull( button )) {
HXDLIN(  75)					return button->hasState(Status);
            				}
            				else {
HXDLIN(  75)					return false;
            				}
            			}
            		}
HXDLIN(  75)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_DPAD_DOWN,return )

bool FlxGamepadButtonList_obj::get_DPAD_LEFT(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_80_get_DPAD_LEFT)
            	HX_STACK_THIS(this)
HXLINE(  80)
HXDLIN(  80)		int id = 13;
HXDLIN(  80)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN(  80)		int Status = this->status;
HXDLIN(  80)		switch((int)(id)){
            			case (int)-2: {
HXDLIN(  80)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN(  80)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN(  80)				int RawID = _this->mapping->getRawID(id);
HXDLIN(  80)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  80)				if (::hx::IsNotNull( button )) {
HXDLIN(  80)					return button->hasState(Status);
            				}
            				else {
HXDLIN(  80)					return false;
            				}
            			}
            		}
HXDLIN(  80)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_DPAD_LEFT,return )

bool FlxGamepadButtonList_obj::get_DPAD_RIGHT(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_85_get_DPAD_RIGHT)
            	HX_STACK_THIS(this)
HXLINE(  85)
HXDLIN(  85)		int id = 14;
HXDLIN(  85)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN(  85)		int Status = this->status;
HXDLIN(  85)		switch((int)(id)){
            			case (int)-2: {
HXDLIN(  85)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN(  85)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN(  85)				int RawID = _this->mapping->getRawID(id);
HXDLIN(  85)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  85)				if (::hx::IsNotNull( button )) {
HXDLIN(  85)					return button->hasState(Status);
            				}
            				else {
HXDLIN(  85)					return false;
            				}
            			}
            		}
HXDLIN(  85)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_DPAD_RIGHT,return )

bool FlxGamepadButtonList_obj::get_LEFT_TRIGGER_BUTTON(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_90_get_LEFT_TRIGGER_BUTTON)
            	HX_STACK_THIS(this)
HXLINE(  90)
HXDLIN(  90)		int id = 15;
HXDLIN(  90)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN(  90)		int Status = this->status;
HXDLIN(  90)		switch((int)(id)){
            			case (int)-2: {
HXDLIN(  90)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN(  90)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN(  90)				int RawID = _this->mapping->getRawID(id);
HXDLIN(  90)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  90)				if (::hx::IsNotNull( button )) {
HXDLIN(  90)					return button->hasState(Status);
            				}
            				else {
HXDLIN(  90)					return false;
            				}
            			}
            		}
HXDLIN(  90)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_LEFT_TRIGGER_BUTTON,return )

bool FlxGamepadButtonList_obj::get_RIGHT_TRIGGER_BUTTON(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_95_get_RIGHT_TRIGGER_BUTTON)
            	HX_STACK_THIS(this)
HXLINE(  95)
HXDLIN(  95)		int id = 16;
HXDLIN(  95)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN(  95)		int Status = this->status;
HXDLIN(  95)		switch((int)(id)){
            			case (int)-2: {
HXDLIN(  95)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN(  95)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN(  95)				int RawID = _this->mapping->getRawID(id);
HXDLIN(  95)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN(  95)				if (::hx::IsNotNull( button )) {
HXDLIN(  95)					return button->hasState(Status);
            				}
            				else {
HXDLIN(  95)					return false;
            				}
            			}
            		}
HXDLIN(  95)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_RIGHT_TRIGGER_BUTTON,return )

bool FlxGamepadButtonList_obj::get_LEFT_TRIGGER(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_101_get_LEFT_TRIGGER)
            	HX_STACK_THIS(this)
HXLINE( 101)
HXDLIN( 101)		int id = 17;
HXDLIN( 101)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN( 101)		int Status = this->status;
HXDLIN( 101)		switch((int)(id)){
            			case (int)-2: {
HXDLIN( 101)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN( 101)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN( 101)				int RawID = _this->mapping->getRawID(id);
HXDLIN( 101)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 101)				if (::hx::IsNotNull( button )) {
HXDLIN( 101)					return button->hasState(Status);
            				}
            				else {
HXDLIN( 101)					return false;
            				}
            			}
            		}
HXDLIN( 101)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_LEFT_TRIGGER,return )

bool FlxGamepadButtonList_obj::get_RIGHT_TRIGGER(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_106_get_RIGHT_TRIGGER)
            	HX_STACK_THIS(this)
HXLINE( 106)
HXDLIN( 106)		int id = 18;
HXDLIN( 106)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN( 106)		int Status = this->status;
HXDLIN( 106)		switch((int)(id)){
            			case (int)-2: {
HXDLIN( 106)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN( 106)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN( 106)				int RawID = _this->mapping->getRawID(id);
HXDLIN( 106)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 106)				if (::hx::IsNotNull( button )) {
HXDLIN( 106)					return button->hasState(Status);
            				}
            				else {
HXDLIN( 106)					return false;
            				}
            			}
            		}
HXDLIN( 106)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_RIGHT_TRIGGER,return )

bool FlxGamepadButtonList_obj::get_LEFT_ANALOG_STICK(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_122_get_LEFT_ANALOG_STICK)
            	HX_STACK_THIS(this)
HXLINE( 122)
HXDLIN( 122)		int id = 19;
HXDLIN( 122)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN( 122)		int Status = this->status;
HXDLIN( 122)		switch((int)(id)){
            			case (int)-2: {
HXDLIN( 122)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN( 122)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN( 122)				int RawID = _this->mapping->getRawID(id);
HXDLIN( 122)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 122)				if (::hx::IsNotNull( button )) {
HXDLIN( 122)					return button->hasState(Status);
            				}
            				else {
HXDLIN( 122)					return false;
            				}
            			}
            		}
HXDLIN( 122)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_LEFT_ANALOG_STICK,return )

bool FlxGamepadButtonList_obj::get_RIGHT_ANALOG_STICK(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_127_get_RIGHT_ANALOG_STICK)
            	HX_STACK_THIS(this)
HXLINE( 127)
HXDLIN( 127)		int id = 20;
HXDLIN( 127)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN( 127)		int Status = this->status;
HXDLIN( 127)		switch((int)(id)){
            			case (int)-2: {
HXDLIN( 127)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN( 127)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN( 127)				int RawID = _this->mapping->getRawID(id);
HXDLIN( 127)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 127)				if (::hx::IsNotNull( button )) {
HXDLIN( 127)					return button->hasState(Status);
            				}
            				else {
HXDLIN( 127)					return false;
            				}
            			}
            		}
HXDLIN( 127)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_RIGHT_ANALOG_STICK,return )

bool FlxGamepadButtonList_obj::get_DPAD(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_132_get_DPAD)
            	HX_STACK_THIS(this)
HXLINE( 132)
HXDLIN( 132)		int id = 21;
HXDLIN( 132)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN( 132)		int Status = this->status;
HXDLIN( 132)		switch((int)(id)){
            			case (int)-2: {
HXDLIN( 132)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN( 132)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN( 132)				int RawID = _this->mapping->getRawID(id);
HXDLIN( 132)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 132)				if (::hx::IsNotNull( button )) {
HXDLIN( 132)					return button->hasState(Status);
            				}
            				else {
HXDLIN( 132)					return false;
            				}
            			}
            		}
HXDLIN( 132)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_DPAD,return )

bool FlxGamepadButtonList_obj::get_TILT_PITCH(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_137_get_TILT_PITCH)
            	HX_STACK_THIS(this)
HXLINE( 137)
HXDLIN( 137)		int id = 26;
HXDLIN( 137)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN( 137)		int Status = this->status;
HXDLIN( 137)		switch((int)(id)){
            			case (int)-2: {
HXDLIN( 137)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN( 137)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN( 137)				int RawID = _this->mapping->getRawID(id);
HXDLIN( 137)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 137)				if (::hx::IsNotNull( button )) {
HXDLIN( 137)					return button->hasState(Status);
            				}
            				else {
HXDLIN( 137)					return false;
            				}
            			}
            		}
HXDLIN( 137)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_TILT_PITCH,return )

bool FlxGamepadButtonList_obj::get_TILT_ROLL(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_142_get_TILT_ROLL)
            	HX_STACK_THIS(this)
HXLINE( 142)
HXDLIN( 142)		int id = 27;
HXDLIN( 142)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN( 142)		int Status = this->status;
HXDLIN( 142)		switch((int)(id)){
            			case (int)-2: {
HXDLIN( 142)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN( 142)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN( 142)				int RawID = _this->mapping->getRawID(id);
HXDLIN( 142)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 142)				if (::hx::IsNotNull( button )) {
HXDLIN( 142)					return button->hasState(Status);
            				}
            				else {
HXDLIN( 142)					return false;
            				}
            			}
            		}
HXDLIN( 142)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_TILT_ROLL,return )

bool FlxGamepadButtonList_obj::get_POINTER_X(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_147_get_POINTER_X)
            	HX_STACK_THIS(this)
HXLINE( 147)
HXDLIN( 147)		int id = 28;
HXDLIN( 147)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN( 147)		int Status = this->status;
HXDLIN( 147)		switch((int)(id)){
            			case (int)-2: {
HXDLIN( 147)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN( 147)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN( 147)				int RawID = _this->mapping->getRawID(id);
HXDLIN( 147)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 147)				if (::hx::IsNotNull( button )) {
HXDLIN( 147)					return button->hasState(Status);
            				}
            				else {
HXDLIN( 147)					return false;
            				}
            			}
            		}
HXDLIN( 147)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_POINTER_X,return )

bool FlxGamepadButtonList_obj::get_POINTER_Y(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_152_get_POINTER_Y)
            	HX_STACK_THIS(this)
HXLINE( 152)
HXDLIN( 152)		int id = 29;
HXDLIN( 152)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN( 152)		int Status = this->status;
HXDLIN( 152)		switch((int)(id)){
            			case (int)-2: {
HXDLIN( 152)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN( 152)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN( 152)				int RawID = _this->mapping->getRawID(id);
HXDLIN( 152)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 152)				if (::hx::IsNotNull( button )) {
HXDLIN( 152)					return button->hasState(Status);
            				}
            				else {
HXDLIN( 152)					return false;
            				}
            			}
            		}
HXDLIN( 152)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_POINTER_Y,return )

bool FlxGamepadButtonList_obj::get_EXTRA_0(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_157_get_EXTRA_0)
            	HX_STACK_THIS(this)
HXLINE( 157)
HXDLIN( 157)		int id = 30;
HXDLIN( 157)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN( 157)		int Status = this->status;
HXDLIN( 157)		switch((int)(id)){
            			case (int)-2: {
HXDLIN( 157)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN( 157)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN( 157)				int RawID = _this->mapping->getRawID(id);
HXDLIN( 157)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 157)				if (::hx::IsNotNull( button )) {
HXDLIN( 157)					return button->hasState(Status);
            				}
            				else {
HXDLIN( 157)					return false;
            				}
            			}
            		}
HXDLIN( 157)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_EXTRA_0,return )

bool FlxGamepadButtonList_obj::get_EXTRA_1(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_162_get_EXTRA_1)
            	HX_STACK_THIS(this)
HXLINE( 162)
HXDLIN( 162)		int id = 31;
HXDLIN( 162)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN( 162)		int Status = this->status;
HXDLIN( 162)		switch((int)(id)){
            			case (int)-2: {
HXDLIN( 162)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN( 162)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN( 162)				int RawID = _this->mapping->getRawID(id);
HXDLIN( 162)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 162)				if (::hx::IsNotNull( button )) {
HXDLIN( 162)					return button->hasState(Status);
            				}
            				else {
HXDLIN( 162)					return false;
            				}
            			}
            		}
HXDLIN( 162)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_EXTRA_1,return )

bool FlxGamepadButtonList_obj::get_EXTRA_2(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_167_get_EXTRA_2)
            	HX_STACK_THIS(this)
HXLINE( 167)
HXDLIN( 167)		int id = 32;
HXDLIN( 167)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN( 167)		int Status = this->status;
HXDLIN( 167)		switch((int)(id)){
            			case (int)-2: {
HXDLIN( 167)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN( 167)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN( 167)				int RawID = _this->mapping->getRawID(id);
HXDLIN( 167)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 167)				if (::hx::IsNotNull( button )) {
HXDLIN( 167)					return button->hasState(Status);
            				}
            				else {
HXDLIN( 167)					return false;
            				}
            			}
            		}
HXDLIN( 167)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_EXTRA_2,return )

bool FlxGamepadButtonList_obj::get_EXTRA_3(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_172_get_EXTRA_3)
            	HX_STACK_THIS(this)
HXLINE( 172)
HXDLIN( 172)		int id = 33;
HXDLIN( 172)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN( 172)		int Status = this->status;
HXDLIN( 172)		switch((int)(id)){
            			case (int)-2: {
HXDLIN( 172)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN( 172)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN( 172)				int RawID = _this->mapping->getRawID(id);
HXDLIN( 172)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 172)				if (::hx::IsNotNull( button )) {
HXDLIN( 172)					return button->hasState(Status);
            				}
            				else {
HXDLIN( 172)					return false;
            				}
            			}
            		}
HXDLIN( 172)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_EXTRA_3,return )

bool FlxGamepadButtonList_obj::get_LEFT_STICK_DIGITAL_UP(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_177_get_LEFT_STICK_DIGITAL_UP)
            	HX_STACK_THIS(this)
HXLINE( 177)
HXDLIN( 177)		int id = 34;
HXDLIN( 177)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN( 177)		int Status = this->status;
HXDLIN( 177)		switch((int)(id)){
            			case (int)-2: {
HXDLIN( 177)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN( 177)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN( 177)				int RawID = _this->mapping->getRawID(id);
HXDLIN( 177)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 177)				if (::hx::IsNotNull( button )) {
HXDLIN( 177)					return button->hasState(Status);
            				}
            				else {
HXDLIN( 177)					return false;
            				}
            			}
            		}
HXDLIN( 177)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_LEFT_STICK_DIGITAL_UP,return )

bool FlxGamepadButtonList_obj::get_LEFT_STICK_DIGITAL_RIGHT(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_182_get_LEFT_STICK_DIGITAL_RIGHT)
            	HX_STACK_THIS(this)
HXLINE( 182)
HXDLIN( 182)		int id = 35;
HXDLIN( 182)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN( 182)		int Status = this->status;
HXDLIN( 182)		switch((int)(id)){
            			case (int)-2: {
HXDLIN( 182)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN( 182)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN( 182)				int RawID = _this->mapping->getRawID(id);
HXDLIN( 182)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 182)				if (::hx::IsNotNull( button )) {
HXDLIN( 182)					return button->hasState(Status);
            				}
            				else {
HXDLIN( 182)					return false;
            				}
            			}
            		}
HXDLIN( 182)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_LEFT_STICK_DIGITAL_RIGHT,return )

bool FlxGamepadButtonList_obj::get_LEFT_STICK_DIGITAL_DOWN(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_187_get_LEFT_STICK_DIGITAL_DOWN)
            	HX_STACK_THIS(this)
HXLINE( 187)
HXDLIN( 187)		int id = 36;
HXDLIN( 187)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN( 187)		int Status = this->status;
HXDLIN( 187)		switch((int)(id)){
            			case (int)-2: {
HXDLIN( 187)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN( 187)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN( 187)				int RawID = _this->mapping->getRawID(id);
HXDLIN( 187)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 187)				if (::hx::IsNotNull( button )) {
HXDLIN( 187)					return button->hasState(Status);
            				}
            				else {
HXDLIN( 187)					return false;
            				}
            			}
            		}
HXDLIN( 187)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_LEFT_STICK_DIGITAL_DOWN,return )

bool FlxGamepadButtonList_obj::get_LEFT_STICK_DIGITAL_LEFT(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_192_get_LEFT_STICK_DIGITAL_LEFT)
            	HX_STACK_THIS(this)
HXLINE( 192)
HXDLIN( 192)		int id = 37;
HXDLIN( 192)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN( 192)		int Status = this->status;
HXDLIN( 192)		switch((int)(id)){
            			case (int)-2: {
HXDLIN( 192)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN( 192)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN( 192)				int RawID = _this->mapping->getRawID(id);
HXDLIN( 192)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 192)				if (::hx::IsNotNull( button )) {
HXDLIN( 192)					return button->hasState(Status);
            				}
            				else {
HXDLIN( 192)					return false;
            				}
            			}
            		}
HXDLIN( 192)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_LEFT_STICK_DIGITAL_LEFT,return )

bool FlxGamepadButtonList_obj::get_RIGHT_STICK_DIGITAL_UP(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_197_get_RIGHT_STICK_DIGITAL_UP)
            	HX_STACK_THIS(this)
HXLINE( 197)
HXDLIN( 197)		int id = 38;
HXDLIN( 197)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN( 197)		int Status = this->status;
HXDLIN( 197)		switch((int)(id)){
            			case (int)-2: {
HXDLIN( 197)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN( 197)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN( 197)				int RawID = _this->mapping->getRawID(id);
HXDLIN( 197)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 197)				if (::hx::IsNotNull( button )) {
HXDLIN( 197)					return button->hasState(Status);
            				}
            				else {
HXDLIN( 197)					return false;
            				}
            			}
            		}
HXDLIN( 197)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_RIGHT_STICK_DIGITAL_UP,return )

bool FlxGamepadButtonList_obj::get_RIGHT_STICK_DIGITAL_RIGHT(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_202_get_RIGHT_STICK_DIGITAL_RIGHT)
            	HX_STACK_THIS(this)
HXLINE( 202)
HXDLIN( 202)		int id = 39;
HXDLIN( 202)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN( 202)		int Status = this->status;
HXDLIN( 202)		switch((int)(id)){
            			case (int)-2: {
HXDLIN( 202)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN( 202)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN( 202)				int RawID = _this->mapping->getRawID(id);
HXDLIN( 202)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 202)				if (::hx::IsNotNull( button )) {
HXDLIN( 202)					return button->hasState(Status);
            				}
            				else {
HXDLIN( 202)					return false;
            				}
            			}
            		}
HXDLIN( 202)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_RIGHT_STICK_DIGITAL_RIGHT,return )

bool FlxGamepadButtonList_obj::get_RIGHT_STICK_DIGITAL_DOWN(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_207_get_RIGHT_STICK_DIGITAL_DOWN)
            	HX_STACK_THIS(this)
HXLINE( 207)
HXDLIN( 207)		int id = 40;
HXDLIN( 207)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN( 207)		int Status = this->status;
HXDLIN( 207)		switch((int)(id)){
            			case (int)-2: {
HXDLIN( 207)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN( 207)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN( 207)				int RawID = _this->mapping->getRawID(id);
HXDLIN( 207)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 207)				if (::hx::IsNotNull( button )) {
HXDLIN( 207)					return button->hasState(Status);
            				}
            				else {
HXDLIN( 207)					return false;
            				}
            			}
            		}
HXDLIN( 207)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_RIGHT_STICK_DIGITAL_DOWN,return )

bool FlxGamepadButtonList_obj::get_RIGHT_STICK_DIGITAL_LEFT(){
            	HX_STACKFRAME(&_hx_pos_b0737e09367eab91_212_get_RIGHT_STICK_DIGITAL_LEFT)
            	HX_STACK_THIS(this)
HXLINE( 212)
HXDLIN( 212)		int id = 41;
HXDLIN( 212)		 ::flixel::input::gamepad::FlxGamepad _this = this->gamepad;
HXDLIN( 212)		int Status = this->status;
HXDLIN( 212)		switch((int)(id)){
            			case (int)-2: {
HXDLIN( 212)				return _this->anyButton(Status);
            			}
            			break;
            			case (int)-1: {
HXDLIN( 212)				return !(_this->anyButton(Status));
            			}
            			break;
            			default:{
HXDLIN( 212)				int RawID = _this->mapping->getRawID(id);
HXDLIN( 212)				 ::flixel::input::gamepad::FlxGamepadButton button = _this->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 212)				if (::hx::IsNotNull( button )) {
HXDLIN( 212)					return button->hasState(Status);
            				}
            				else {
HXDLIN( 212)					return false;
            				}
            			}
            		}
HXDLIN( 212)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_RIGHT_STICK_DIGITAL_LEFT,return )


::hx::ObjectPtr< FlxGamepadButtonList_obj > FlxGamepadButtonList_obj::__new(int status, ::flixel::input::gamepad::FlxGamepad gamepad) {
	::hx::ObjectPtr< FlxGamepadButtonList_obj > __this = new FlxGamepadButtonList_obj();
	__this->__construct(status,gamepad);
	return __this;
}

::hx::ObjectPtr< FlxGamepadButtonList_obj > FlxGamepadButtonList_obj::__alloc(::hx::Ctx *_hx_ctx,int status, ::flixel::input::gamepad::FlxGamepad gamepad) {
	FlxGamepadButtonList_obj *__this = (FlxGamepadButtonList_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxGamepadButtonList_obj), true, "flixel.input.gamepad.lists.FlxGamepadButtonList"));
	*(void **)__this = FlxGamepadButtonList_obj::_hx_vtable;
	__this->__construct(status,gamepad);
	return __this;
}

FlxGamepadButtonList_obj::FlxGamepadButtonList_obj()
{
}

::hx::Val FlxGamepadButtonList_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"A") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_A() ); }
		if (HX_FIELD_EQ(inName,"B") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_B() ); }
		if (HX_FIELD_EQ(inName,"X") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_X() ); }
		if (HX_FIELD_EQ(inName,"Y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_Y() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"BACK") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_BACK() ); }
		if (HX_FIELD_EQ(inName,"DPAD") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_DPAD() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_A") ) { return ::hx::Val( get_A_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_B") ) { return ::hx::Val( get_B_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_X") ) { return ::hx::Val( get_X_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_Y") ) { return ::hx::Val( get_Y_dyn() ); }
		if (HX_FIELD_EQ(inName,"START") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_START() ); }
		if (HX_FIELD_EQ(inName,"GUIDE") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_GUIDE() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"DPAD_UP") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_DPAD_UP() ); }
		if (HX_FIELD_EQ(inName,"EXTRA_0") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_EXTRA_0() ); }
		if (HX_FIELD_EQ(inName,"EXTRA_1") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_EXTRA_1() ); }
		if (HX_FIELD_EQ(inName,"EXTRA_2") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_EXTRA_2() ); }
		if (HX_FIELD_EQ(inName,"EXTRA_3") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_EXTRA_3() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_BACK") ) { return ::hx::Val( get_BACK_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_DPAD") ) { return ::hx::Val( get_DPAD_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_START") ) { return ::hx::Val( get_START_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_GUIDE") ) { return ::hx::Val( get_GUIDE_dyn() ); }
		if (HX_FIELD_EQ(inName,"DPAD_DOWN") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_DPAD_DOWN() ); }
		if (HX_FIELD_EQ(inName,"DPAD_LEFT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_DPAD_LEFT() ); }
		if (HX_FIELD_EQ(inName,"TILT_ROLL") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_TILT_ROLL() ); }
		if (HX_FIELD_EQ(inName,"POINTER_X") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_POINTER_X() ); }
		if (HX_FIELD_EQ(inName,"POINTER_Y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_POINTER_Y() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"DPAD_RIGHT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_DPAD_RIGHT() ); }
		if (HX_FIELD_EQ(inName,"TILT_PITCH") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_TILT_PITCH() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_DPAD_UP") ) { return ::hx::Val( get_DPAD_UP_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_EXTRA_0") ) { return ::hx::Val( get_EXTRA_0_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_EXTRA_1") ) { return ::hx::Val( get_EXTRA_1_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_EXTRA_2") ) { return ::hx::Val( get_EXTRA_2_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_EXTRA_3") ) { return ::hx::Val( get_EXTRA_3_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"LEFT_TRIGGER") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_LEFT_TRIGGER() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"LEFT_SHOULDER") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_LEFT_SHOULDER() ); }
		if (HX_FIELD_EQ(inName,"get_DPAD_DOWN") ) { return ::hx::Val( get_DPAD_DOWN_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_DPAD_LEFT") ) { return ::hx::Val( get_DPAD_LEFT_dyn() ); }
		if (HX_FIELD_EQ(inName,"RIGHT_TRIGGER") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_RIGHT_TRIGGER() ); }
		if (HX_FIELD_EQ(inName,"get_TILT_ROLL") ) { return ::hx::Val( get_TILT_ROLL_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_POINTER_X") ) { return ::hx::Val( get_POINTER_X_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_POINTER_Y") ) { return ::hx::Val( get_POINTER_Y_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"RIGHT_SHOULDER") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_RIGHT_SHOULDER() ); }
		if (HX_FIELD_EQ(inName,"get_DPAD_RIGHT") ) { return ::hx::Val( get_DPAD_RIGHT_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_TILT_PITCH") ) { return ::hx::Val( get_TILT_PITCH_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"LEFT_STICK_CLICK") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_LEFT_STICK_CLICK() ); }
		if (HX_FIELD_EQ(inName,"get_LEFT_TRIGGER") ) { return ::hx::Val( get_LEFT_TRIGGER_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_LEFT_SHOULDER") ) { return ::hx::Val( get_LEFT_SHOULDER_dyn() ); }
		if (HX_FIELD_EQ(inName,"RIGHT_STICK_CLICK") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_RIGHT_STICK_CLICK() ); }
		if (HX_FIELD_EQ(inName,"get_RIGHT_TRIGGER") ) { return ::hx::Val( get_RIGHT_TRIGGER_dyn() ); }
		if (HX_FIELD_EQ(inName,"LEFT_ANALOG_STICK") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_LEFT_ANALOG_STICK() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_RIGHT_SHOULDER") ) { return ::hx::Val( get_RIGHT_SHOULDER_dyn() ); }
		if (HX_FIELD_EQ(inName,"RIGHT_ANALOG_STICK") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_RIGHT_ANALOG_STICK() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"LEFT_TRIGGER_BUTTON") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_LEFT_TRIGGER_BUTTON() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_LEFT_STICK_CLICK") ) { return ::hx::Val( get_LEFT_STICK_CLICK_dyn() ); }
		if (HX_FIELD_EQ(inName,"RIGHT_TRIGGER_BUTTON") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_RIGHT_TRIGGER_BUTTON() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_RIGHT_STICK_CLICK") ) { return ::hx::Val( get_RIGHT_STICK_CLICK_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_LEFT_ANALOG_STICK") ) { return ::hx::Val( get_LEFT_ANALOG_STICK_dyn() ); }
		if (HX_FIELD_EQ(inName,"LEFT_STICK_DIGITAL_UP") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_LEFT_STICK_DIGITAL_UP() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_RIGHT_ANALOG_STICK") ) { return ::hx::Val( get_RIGHT_ANALOG_STICK_dyn() ); }
		if (HX_FIELD_EQ(inName,"RIGHT_STICK_DIGITAL_UP") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_RIGHT_STICK_DIGITAL_UP() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_LEFT_TRIGGER_BUTTON") ) { return ::hx::Val( get_LEFT_TRIGGER_BUTTON_dyn() ); }
		if (HX_FIELD_EQ(inName,"LEFT_STICK_DIGITAL_DOWN") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_LEFT_STICK_DIGITAL_DOWN() ); }
		if (HX_FIELD_EQ(inName,"LEFT_STICK_DIGITAL_LEFT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_LEFT_STICK_DIGITAL_LEFT() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_RIGHT_TRIGGER_BUTTON") ) { return ::hx::Val( get_RIGHT_TRIGGER_BUTTON_dyn() ); }
		if (HX_FIELD_EQ(inName,"LEFT_STICK_DIGITAL_RIGHT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_LEFT_STICK_DIGITAL_RIGHT() ); }
		if (HX_FIELD_EQ(inName,"RIGHT_STICK_DIGITAL_DOWN") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_RIGHT_STICK_DIGITAL_DOWN() ); }
		if (HX_FIELD_EQ(inName,"RIGHT_STICK_DIGITAL_LEFT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_RIGHT_STICK_DIGITAL_LEFT() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"get_LEFT_STICK_DIGITAL_UP") ) { return ::hx::Val( get_LEFT_STICK_DIGITAL_UP_dyn() ); }
		if (HX_FIELD_EQ(inName,"RIGHT_STICK_DIGITAL_RIGHT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_RIGHT_STICK_DIGITAL_RIGHT() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"get_RIGHT_STICK_DIGITAL_UP") ) { return ::hx::Val( get_RIGHT_STICK_DIGITAL_UP_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"get_LEFT_STICK_DIGITAL_DOWN") ) { return ::hx::Val( get_LEFT_STICK_DIGITAL_DOWN_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_LEFT_STICK_DIGITAL_LEFT") ) { return ::hx::Val( get_LEFT_STICK_DIGITAL_LEFT_dyn() ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"get_LEFT_STICK_DIGITAL_RIGHT") ) { return ::hx::Val( get_LEFT_STICK_DIGITAL_RIGHT_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_RIGHT_STICK_DIGITAL_DOWN") ) { return ::hx::Val( get_RIGHT_STICK_DIGITAL_DOWN_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_RIGHT_STICK_DIGITAL_LEFT") ) { return ::hx::Val( get_RIGHT_STICK_DIGITAL_LEFT_dyn() ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"get_RIGHT_STICK_DIGITAL_RIGHT") ) { return ::hx::Val( get_RIGHT_STICK_DIGITAL_RIGHT_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

void FlxGamepadButtonList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("A",41,00,00,00));
	outFields->push(HX_("B",42,00,00,00));
	outFields->push(HX_("X",58,00,00,00));
	outFields->push(HX_("Y",59,00,00,00));
	outFields->push(HX_("LEFT_SHOULDER",d8,b1,a9,01));
	outFields->push(HX_("RIGHT_SHOULDER",83,9f,28,11));
	outFields->push(HX_("BACK",27,a2,d1,2b));
	outFields->push(HX_("START",42,ac,f9,01));
	outFields->push(HX_("LEFT_STICK_CLICK",21,9d,4a,bf));
	outFields->push(HX_("RIGHT_STICK_CLICK",56,4c,25,0b));
	outFields->push(HX_("GUIDE",9c,f2,d9,19));
	outFields->push(HX_("DPAD_UP",6b,00,87,a2));
	outFields->push(HX_("DPAD_DOWN",72,1a,5b,87));
	outFields->push(HX_("DPAD_LEFT",17,2a,9d,8c));
	outFields->push(HX_("DPAD_RIGHT",ac,b7,f4,f3));
	outFields->push(HX_("LEFT_TRIGGER_BUTTON",f1,61,33,1b));
	outFields->push(HX_("RIGHT_TRIGGER_BUTTON",dc,61,f8,02));
	outFields->push(HX_("LEFT_TRIGGER",a0,31,c6,eb));
	outFields->push(HX_("RIGHT_TRIGGER",55,e2,81,00));
	outFields->push(HX_("LEFT_ANALOG_STICK",19,49,58,a5));
	outFields->push(HX_("RIGHT_ANALOG_STICK",44,e8,d6,b8));
	outFields->push(HX_("DPAD",6f,6f,2f,2d));
	outFields->push(HX_("TILT_PITCH",de,59,c1,1b));
	outFields->push(HX_("TILT_ROLL",ff,5e,73,5e));
	outFields->push(HX_("POINTER_X",f6,08,fa,28));
	outFields->push(HX_("POINTER_Y",f7,08,fa,28));
	outFields->push(HX_("EXTRA_0",61,a1,be,f8));
	outFields->push(HX_("EXTRA_1",62,a1,be,f8));
	outFields->push(HX_("EXTRA_2",63,a1,be,f8));
	outFields->push(HX_("EXTRA_3",64,a1,be,f8));
	outFields->push(HX_("LEFT_STICK_DIGITAL_UP",29,d8,3b,d5));
	outFields->push(HX_("LEFT_STICK_DIGITAL_RIGHT",ae,ca,36,04));
	outFields->push(HX_("LEFT_STICK_DIGITAL_DOWN",b0,dd,c3,72));
	outFields->push(HX_("LEFT_STICK_DIGITAL_LEFT",55,ed,05,78));
	outFields->push(HX_("RIGHT_STICK_DIGITAL_UP",d4,e8,30,f8));
	outFields->push(HX_("RIGHT_STICK_DIGITAL_RIGHT",e3,36,d3,6c));
	outFields->push(HX_("RIGHT_STICK_DIGITAL_DOWN",1b,af,9e,09));
	outFields->push(HX_("RIGHT_STICK_DIGITAL_LEFT",c0,be,e0,0e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxGamepadButtonList_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxGamepadButtonList_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxGamepadButtonList_obj_sMemberFields[] = {
	HX_("get_A",18,a5,60,91),
	HX_("get_B",19,a5,60,91),
	HX_("get_X",2f,a5,60,91),
	HX_("get_Y",30,a5,60,91),
	HX_("get_LEFT_SHOULDER",2f,bd,19,08),
	HX_("get_RIGHT_SHOULDER",4c,80,c2,ac),
	HX_("get_BACK",b0,5d,8c,ab),
	HX_("get_START",99,08,a3,45),
	HX_("get_LEFT_STICK_CLICK",2a,02,b5,dd),
	HX_("get_RIGHT_STICK_CLICK",2d,4f,d3,89),
	HX_("get_GUIDE",f3,4e,83,5d),
	HX_("get_DPAD_UP",82,60,81,28),
	HX_("get_DPAD_DOWN",49,ee,be,48),
	HX_("get_DPAD_LEFT",ee,fd,00,4e),
	HX_("get_DPAD_RIGHT",f5,3f,ea,69),
	HX_("get_LEFT_TRIGGER_BUTTON",88,08,89,23),
	HX_("get_RIGHT_TRIGGER_BUTTON",65,7f,94,45),
	HX_("get_LEFT_TRIGGER",29,1e,65,f0),
	HX_("get_RIGHT_TRIGGER",ac,ed,f1,06),
	HX_("get_LEFT_ANALOG_STICK",f0,4b,06,24),
	HX_("get_RIGHT_ANALOG_STICK",8d,61,6b,12),
	HX_("get_DPAD",f8,2a,ea,ac),
	HX_("get_TILT_PITCH",27,e2,b6,91),
	HX_("get_TILT_ROLL",d6,32,d7,1f),
	HX_("get_POINTER_X",cd,dc,5d,ea),
	HX_("get_POINTER_Y",ce,dc,5d,ea),
	HX_("get_EXTRA_0",78,01,b9,7e),
	HX_("get_EXTRA_1",79,01,b9,7e),
	HX_("get_EXTRA_2",7a,01,b9,7e),
	HX_("get_EXTRA_3",7b,01,b9,7e),
	HX_("get_LEFT_STICK_DIGITAL_UP",80,92,39,db),
	HX_("get_LEFT_STICK_DIGITAL_RIGHT",b7,e0,8a,45),
	HX_("get_LEFT_STICK_DIGITAL_DOWN",c7,1b,66,3f),
	HX_("get_LEFT_STICK_DIGITAL_LEFT",6c,2b,a8,44),
	HX_("get_RIGHT_STICK_DIGITAL_UP",9d,3a,36,30),
	HX_("get_RIGHT_STICK_DIGITAL_RIGHT",ba,68,12,55),
	HX_("get_RIGHT_STICK_DIGITAL_DOWN",24,c5,f2,4a),
	HX_("get_RIGHT_STICK_DIGITAL_LEFT",c9,d4,34,50),
	::String(null()) };

::hx::Class FlxGamepadButtonList_obj::__mClass;

void FlxGamepadButtonList_obj::__register()
{
	FlxGamepadButtonList_obj _hx_dummy;
	FlxGamepadButtonList_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.gamepad.lists.FlxGamepadButtonList",5b,e0,f4,1a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxGamepadButtonList_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxGamepadButtonList_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxGamepadButtonList_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxGamepadButtonList_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace lists
