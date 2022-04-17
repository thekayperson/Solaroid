#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_88_fromInt,"flixel.util._FlxColor.FlxColor_Impl_","fromInt",0xdc40c740,"flixel.util._FlxColor.FlxColor_Impl_.fromInt","flixel/util/FlxColor.hx",88,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_101_fromRGB,"flixel.util._FlxColor.FlxColor_Impl_","fromRGB",0xdc47795e,"flixel.util._FlxColor.FlxColor_Impl_.fromRGB","flixel/util/FlxColor.hx",101,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_116_fromRGBFloat,"flixel.util._FlxColor.FlxColor_Impl_","fromRGBFloat",0x9c52075e,"flixel.util._FlxColor.FlxColor_Impl_.fromRGBFloat","flixel/util/FlxColor.hx",116,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_132_fromCMYK,"flixel.util._FlxColor.FlxColor_Impl_","fromCMYK",0xd85d276b,"flixel.util._FlxColor.FlxColor_Impl_.fromCMYK","flixel/util/FlxColor.hx",132,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_147_fromHSB,"flixel.util._FlxColor.FlxColor_Impl_","fromHSB",0xdc3fed48,"flixel.util._FlxColor.FlxColor_Impl_.fromHSB","flixel/util/FlxColor.hx",147,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_162_fromHSL,"flixel.util._FlxColor.FlxColor_Impl_","fromHSL",0xdc3fed52,"flixel.util._FlxColor.FlxColor_Impl_.fromHSL","flixel/util/FlxColor.hx",162,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_183_fromString,"flixel.util._FlxColor.FlxColor_Impl_","fromString",0x7279f720,"flixel.util._FlxColor.FlxColor_Impl_.fromString","flixel/util/FlxColor.hx",183,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_220_getHSBColorWheel,"flixel.util._FlxColor.FlxColor_Impl_","getHSBColorWheel",0xaedeb29e,"flixel.util._FlxColor.FlxColor_Impl_.getHSBColorWheel","flixel/util/FlxColor.hx",220,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_232_interpolate,"flixel.util._FlxColor.FlxColor_Impl_","interpolate",0x463d27dc,"flixel.util._FlxColor.FlxColor_Impl_.interpolate","flixel/util/FlxColor.hx",232,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_251_gradient,"flixel.util._FlxColor.FlxColor_Impl_","gradient",0x6325b7f5,"flixel.util._FlxColor.FlxColor_Impl_.gradient","flixel/util/FlxColor.hx",251,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_258_gradient,"flixel.util._FlxColor.FlxColor_Impl_","gradient",0x6325b7f5,"flixel.util._FlxColor.FlxColor_Impl_.gradient","flixel/util/FlxColor.hx",258,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_276_multiply,"flixel.util._FlxColor.FlxColor_Impl_","multiply",0xd3736029,"flixel.util._FlxColor.FlxColor_Impl_.multiply","flixel/util/FlxColor.hx",276,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_285_add,"flixel.util._FlxColor.FlxColor_Impl_","add",0x199e323c,"flixel.util._FlxColor.FlxColor_Impl_.add","flixel/util/FlxColor.hx",285,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_294_subtract,"flixel.util._FlxColor.FlxColor_Impl_","subtract",0x30f7f319,"flixel.util._FlxColor.FlxColor_Impl_.subtract","flixel/util/FlxColor.hx",294,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_305_getComplementHarmony,"flixel.util._FlxColor.FlxColor_Impl_","getComplementHarmony",0xe82411cf,"flixel.util._FlxColor.FlxColor_Impl_.getComplementHarmony","flixel/util/FlxColor.hx",305,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_316_getAnalogousHarmony,"flixel.util._FlxColor.FlxColor_Impl_","getAnalogousHarmony",0x6a6ddffa,"flixel.util._FlxColor.FlxColor_Impl_.getAnalogousHarmony","flixel/util/FlxColor.hx",316,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_331_getSplitComplementHarmony,"flixel.util._FlxColor.FlxColor_Impl_","getSplitComplementHarmony",0x65102b17,"flixel.util._FlxColor.FlxColor_Impl_.getSplitComplementHarmony","flixel/util/FlxColor.hx",331,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_346_getTriadicHarmony,"flixel.util._FlxColor.FlxColor_Impl_","getTriadicHarmony",0x8ea1774f,"flixel.util._FlxColor.FlxColor_Impl_.getTriadicHarmony","flixel/util/FlxColor.hx",346,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_360_to24Bit,"flixel.util._FlxColor.FlxColor_Impl_","to24Bit",0xaa37506b,"flixel.util._FlxColor.FlxColor_Impl_.to24Bit","flixel/util/FlxColor.hx",360,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_372_toHexString,"flixel.util._FlxColor.FlxColor_Impl_","toHexString",0x94bdbc2c,"flixel.util._FlxColor.FlxColor_Impl_.toHexString","flixel/util/FlxColor.hx",372,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_383_toWebString,"flixel.util._FlxColor.FlxColor_Impl_","toWebString",0x5e0aaea5,"flixel.util._FlxColor.FlxColor_Impl_.toWebString","flixel/util/FlxColor.hx",383,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_392_getColorInfo,"flixel.util._FlxColor.FlxColor_Impl_","getColorInfo",0x327dc480,"flixel.util._FlxColor.FlxColor_Impl_.getColorInfo","flixel/util/FlxColor.hx",392,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_411_getDarkened,"flixel.util._FlxColor.FlxColor_Impl_","getDarkened",0xd9fa3a4f,"flixel.util._FlxColor.FlxColor_Impl_.getDarkened","flixel/util/FlxColor.hx",411,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_425_getLightened,"flixel.util._FlxColor.FlxColor_Impl_","getLightened",0xe2b011ed,"flixel.util._FlxColor.FlxColor_Impl_.getLightened","flixel/util/FlxColor.hx",425,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_438_getInverted,"flixel.util._FlxColor.FlxColor_Impl_","getInverted",0x422fc6c6,"flixel.util._FlxColor.FlxColor_Impl_.getInverted","flixel/util/FlxColor.hx",438,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_455_setRGB,"flixel.util._FlxColor.FlxColor_Impl_","setRGB",0x421acf50,"flixel.util._FlxColor.FlxColor_Impl_.setRGB","flixel/util/FlxColor.hx",455,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_473_setRGBFloat,"flixel.util._FlxColor.FlxColor_Impl_","setRGBFloat",0x51a7e42c,"flixel.util._FlxColor.FlxColor_Impl_.setRGBFloat","flixel/util/FlxColor.hx",473,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_492_setCMYK,"flixel.util._FlxColor.FlxColor_Impl_","setCMYK",0x8b750539,"flixel.util._FlxColor.FlxColor_Impl_.setCMYK","flixel/util/FlxColor.hx",492,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_510_setHSB,"flixel.util._FlxColor.FlxColor_Impl_","setHSB",0x4213433a,"flixel.util._FlxColor.FlxColor_Impl_.setHSB","flixel/util/FlxColor.hx",510,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_526_setHSL,"flixel.util._FlxColor.FlxColor_Impl_","setHSL",0x42134344,"flixel.util._FlxColor.FlxColor_Impl_.setHSL","flixel/util/FlxColor.hx",526,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_536_setHSChromaMatch,"flixel.util._FlxColor.FlxColor_Impl_","setHSChromaMatch",0x8f5af4c7,"flixel.util._FlxColor.FlxColor_Impl_.setHSChromaMatch","flixel/util/FlxColor.hx",536,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_561__new,"flixel.util._FlxColor.FlxColor_Impl_","_new",0x4f82ece6,"flixel.util._FlxColor.FlxColor_Impl_._new","flixel/util/FlxColor.hx",561,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_571_getThis,"flixel.util._FlxColor.FlxColor_Impl_","getThis",0xa3c49faf,"flixel.util._FlxColor.FlxColor_Impl_.getThis","flixel/util/FlxColor.hx",571,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_576_validate,"flixel.util._FlxColor.FlxColor_Impl_","validate",0x3dca4e9b,"flixel.util._FlxColor.FlxColor_Impl_.validate","flixel/util/FlxColor.hx",576,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_584_get_red,"flixel.util._FlxColor.FlxColor_Impl_","get_red",0xab118b83,"flixel.util._FlxColor.FlxColor_Impl_.get_red","flixel/util/FlxColor.hx",584,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_589_get_green,"flixel.util._FlxColor.FlxColor_Impl_","get_green",0x6e5e3175,"flixel.util._FlxColor.FlxColor_Impl_.get_green","flixel/util/FlxColor.hx",589,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_594_get_blue,"flixel.util._FlxColor.FlxColor_Impl_","get_blue",0xf9ba7c28,"flixel.util._FlxColor.FlxColor_Impl_.get_blue","flixel/util/FlxColor.hx",594,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_599_get_alpha,"flixel.util._FlxColor.FlxColor_Impl_","get_alpha",0xf607ca10,"flixel.util._FlxColor.FlxColor_Impl_.get_alpha","flixel/util/FlxColor.hx",599,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_604_get_redFloat,"flixel.util._FlxColor.FlxColor_Impl_","get_redFloat",0x28fb0f19,"flixel.util._FlxColor.FlxColor_Impl_.get_redFloat","flixel/util/FlxColor.hx",604,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_609_get_greenFloat,"flixel.util._FlxColor.FlxColor_Impl_","get_greenFloat",0x97159be7,"flixel.util._FlxColor.FlxColor_Impl_.get_greenFloat","flixel/util/FlxColor.hx",609,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_614_get_blueFloat,"flixel.util._FlxColor.FlxColor_Impl_","get_blueFloat",0x58cea854,"flixel.util._FlxColor.FlxColor_Impl_.get_blueFloat","flixel/util/FlxColor.hx",614,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_619_get_alphaFloat,"flixel.util._FlxColor.FlxColor_Impl_","get_alphaFloat",0xe2f5f16c,"flixel.util._FlxColor.FlxColor_Impl_.get_alphaFloat","flixel/util/FlxColor.hx",619,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_623_set_red,"flixel.util._FlxColor.FlxColor_Impl_","set_red",0x9e131c8f,"flixel.util._FlxColor.FlxColor_Impl_.set_red","flixel/util/FlxColor.hx",623,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_631_set_green,"flixel.util._FlxColor.FlxColor_Impl_","set_green",0x51af1d81,"flixel.util._FlxColor.FlxColor_Impl_.set_green","flixel/util/FlxColor.hx",631,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_639_set_blue,"flixel.util._FlxColor.FlxColor_Impl_","set_blue",0xa817d59c,"flixel.util._FlxColor.FlxColor_Impl_.set_blue","flixel/util/FlxColor.hx",639,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_647_set_alpha,"flixel.util._FlxColor.FlxColor_Impl_","set_alpha",0xd958b61c,"flixel.util._FlxColor.FlxColor_Impl_.set_alpha","flixel/util/FlxColor.hx",647,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_655_set_redFloat,"flixel.util._FlxColor.FlxColor_Impl_","set_redFloat",0x3df4328d,"flixel.util._FlxColor.FlxColor_Impl_.set_redFloat","flixel/util/FlxColor.hx",655,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_661_set_greenFloat,"flixel.util._FlxColor.FlxColor_Impl_","set_greenFloat",0xb735845b,"flixel.util._FlxColor.FlxColor_Impl_.set_greenFloat","flixel/util/FlxColor.hx",661,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_667_set_blueFloat,"flixel.util._FlxColor.FlxColor_Impl_","set_blueFloat",0x9dd48a60,"flixel.util._FlxColor.FlxColor_Impl_.set_blueFloat","flixel/util/FlxColor.hx",667,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_673_set_alphaFloat,"flixel.util._FlxColor.FlxColor_Impl_","set_alphaFloat",0x0315d9e0,"flixel.util._FlxColor.FlxColor_Impl_.set_alphaFloat","flixel/util/FlxColor.hx",673,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_680_get_cyan,"flixel.util._FlxColor.FlxColor_Impl_","get_cyan",0xfa6d7eb1,"flixel.util._FlxColor.FlxColor_Impl_.get_cyan","flixel/util/FlxColor.hx",680,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_685_get_magenta,"flixel.util._FlxColor.FlxColor_Impl_","get_magenta",0xbba26d5b,"flixel.util._FlxColor.FlxColor_Impl_.get_magenta","flixel/util/FlxColor.hx",685,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_690_get_yellow,"flixel.util._FlxColor.FlxColor_Impl_","get_yellow",0xdee9d882,"flixel.util._FlxColor.FlxColor_Impl_.get_yellow","flixel/util/FlxColor.hx",690,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_695_get_black,"flixel.util._FlxColor.FlxColor_Impl_","get_black",0x8962f871,"flixel.util._FlxColor.FlxColor_Impl_.get_black","flixel/util/FlxColor.hx",695,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_699_set_cyan,"flixel.util._FlxColor.FlxColor_Impl_","set_cyan",0xa8cad825,"flixel.util._FlxColor.FlxColor_Impl_.set_cyan","flixel/util/FlxColor.hx",699,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_705_set_magenta,"flixel.util._FlxColor.FlxColor_Impl_","set_magenta",0xc60f7467,"flixel.util._FlxColor.FlxColor_Impl_.set_magenta","flixel/util/FlxColor.hx",705,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_711_set_yellow,"flixel.util._FlxColor.FlxColor_Impl_","set_yellow",0xe26776f6,"flixel.util._FlxColor.FlxColor_Impl_.set_yellow","flixel/util/FlxColor.hx",711,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_717_set_black,"flixel.util._FlxColor.FlxColor_Impl_","set_black",0x6cb3e47d,"flixel.util._FlxColor.FlxColor_Impl_.set_black","flixel/util/FlxColor.hx",717,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_723_get_hue,"flixel.util._FlxColor.FlxColor_Impl_","get_hue",0xab0a02ea,"flixel.util._FlxColor.FlxColor_Impl_.get_hue","flixel/util/FlxColor.hx",723,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_736_get_brightness,"flixel.util._FlxColor.FlxColor_Impl_","get_brightness",0x252b65df,"flixel.util._FlxColor.FlxColor_Impl_.get_brightness","flixel/util/FlxColor.hx",736,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_741_get_saturation,"flixel.util._FlxColor.FlxColor_Impl_","get_saturation",0xb65babe0,"flixel.util._FlxColor.FlxColor_Impl_.get_saturation","flixel/util/FlxColor.hx",741,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_746_get_lightness,"flixel.util._FlxColor.FlxColor_Impl_","get_lightness",0x5544981f,"flixel.util._FlxColor.FlxColor_Impl_.get_lightness","flixel/util/FlxColor.hx",746,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_750_set_hue,"flixel.util._FlxColor.FlxColor_Impl_","set_hue",0x9e0b93f6,"flixel.util._FlxColor.FlxColor_Impl_.set_hue","flixel/util/FlxColor.hx",750,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_756_set_saturation,"flixel.util._FlxColor.FlxColor_Impl_","set_saturation",0xd67b9454,"flixel.util._FlxColor.FlxColor_Impl_.set_saturation","flixel/util/FlxColor.hx",756,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_762_set_brightness,"flixel.util._FlxColor.FlxColor_Impl_","set_brightness",0x454b4e53,"flixel.util._FlxColor.FlxColor_Impl_.set_brightness","flixel/util/FlxColor.hx",762,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_768_set_lightness,"flixel.util._FlxColor.FlxColor_Impl_","set_lightness",0x9a4a7a2b,"flixel.util._FlxColor.FlxColor_Impl_.set_lightness","flixel/util/FlxColor.hx",768,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_775_maxColor,"flixel.util._FlxColor.FlxColor_Impl_","maxColor",0x2d604224,"flixel.util._FlxColor.FlxColor_Impl_.maxColor","flixel/util/FlxColor.hx",775,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_780_minColor,"flixel.util._FlxColor.FlxColor_Impl_","minColor",0x7a7a5c76,"flixel.util._FlxColor.FlxColor_Impl_.minColor","flixel/util/FlxColor.hx",780,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_785_boundChannel,"flixel.util._FlxColor.FlxColor_Impl_","boundChannel",0x855280aa,"flixel.util._FlxColor.FlxColor_Impl_.boundChannel","flixel/util/FlxColor.hx",785,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_20_boot,"flixel.util._FlxColor.FlxColor_Impl_","boot",0x517f5bb7,"flixel.util._FlxColor.FlxColor_Impl_.boot","flixel/util/FlxColor.hx",20,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_21_boot,"flixel.util._FlxColor.FlxColor_Impl_","boot",0x517f5bb7,"flixel.util._FlxColor.FlxColor_Impl_.boot","flixel/util/FlxColor.hx",21,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_22_boot,"flixel.util._FlxColor.FlxColor_Impl_","boot",0x517f5bb7,"flixel.util._FlxColor.FlxColor_Impl_.boot","flixel/util/FlxColor.hx",22,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_23_boot,"flixel.util._FlxColor.FlxColor_Impl_","boot",0x517f5bb7,"flixel.util._FlxColor.FlxColor_Impl_.boot","flixel/util/FlxColor.hx",23,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_25_boot,"flixel.util._FlxColor.FlxColor_Impl_","boot",0x517f5bb7,"flixel.util._FlxColor.FlxColor_Impl_.boot","flixel/util/FlxColor.hx",25,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_26_boot,"flixel.util._FlxColor.FlxColor_Impl_","boot",0x517f5bb7,"flixel.util._FlxColor.FlxColor_Impl_.boot","flixel/util/FlxColor.hx",26,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_27_boot,"flixel.util._FlxColor.FlxColor_Impl_","boot",0x517f5bb7,"flixel.util._FlxColor.FlxColor_Impl_.boot","flixel/util/FlxColor.hx",27,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_28_boot,"flixel.util._FlxColor.FlxColor_Impl_","boot",0x517f5bb7,"flixel.util._FlxColor.FlxColor_Impl_.boot","flixel/util/FlxColor.hx",28,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_29_boot,"flixel.util._FlxColor.FlxColor_Impl_","boot",0x517f5bb7,"flixel.util._FlxColor.FlxColor_Impl_.boot","flixel/util/FlxColor.hx",29,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_30_boot,"flixel.util._FlxColor.FlxColor_Impl_","boot",0x517f5bb7,"flixel.util._FlxColor.FlxColor_Impl_.boot","flixel/util/FlxColor.hx",30,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_31_boot,"flixel.util._FlxColor.FlxColor_Impl_","boot",0x517f5bb7,"flixel.util._FlxColor.FlxColor_Impl_.boot","flixel/util/FlxColor.hx",31,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_32_boot,"flixel.util._FlxColor.FlxColor_Impl_","boot",0x517f5bb7,"flixel.util._FlxColor.FlxColor_Impl_.boot","flixel/util/FlxColor.hx",32,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_33_boot,"flixel.util._FlxColor.FlxColor_Impl_","boot",0x517f5bb7,"flixel.util._FlxColor.FlxColor_Impl_.boot","flixel/util/FlxColor.hx",33,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_34_boot,"flixel.util._FlxColor.FlxColor_Impl_","boot",0x517f5bb7,"flixel.util._FlxColor.FlxColor_Impl_.boot","flixel/util/FlxColor.hx",34,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_35_boot,"flixel.util._FlxColor.FlxColor_Impl_","boot",0x517f5bb7,"flixel.util._FlxColor.FlxColor_Impl_.boot","flixel/util/FlxColor.hx",35,0x9335c333)
HX_LOCAL_STACK_FRAME(_hx_pos_0c1a490149f50aaa_54_boot,"flixel.util._FlxColor.FlxColor_Impl_","boot",0x517f5bb7,"flixel.util._FlxColor.FlxColor_Impl_.boot","flixel/system/macros/FlxMacroUtil.hx",54,0x8cc0f087)
HX_LOCAL_STACK_FRAME(_hx_pos_fda63b7a1987bfd7_78_boot,"flixel.util._FlxColor.FlxColor_Impl_","boot",0x517f5bb7,"flixel.util._FlxColor.FlxColor_Impl_.boot","flixel/util/FlxColor.hx",78,0x9335c333)
namespace flixel{
namespace util{
namespace _FlxColor{

void FlxColor_Impl__obj::__construct() { }

Dynamic FlxColor_Impl__obj::__CreateEmpty() { return new FlxColor_Impl__obj; }

void *FlxColor_Impl__obj::_hx_vtable = 0;

Dynamic FlxColor_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxColor_Impl__obj > _hx_result = new FlxColor_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxColor_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5b84291f;
}

int FlxColor_Impl__obj::TRANSPARENT;

int FlxColor_Impl__obj::WHITE;

int FlxColor_Impl__obj::GRAY;

int FlxColor_Impl__obj::BLACK;

int FlxColor_Impl__obj::GREEN;

int FlxColor_Impl__obj::LIME;

int FlxColor_Impl__obj::YELLOW;

int FlxColor_Impl__obj::ORANGE;

int FlxColor_Impl__obj::RED;

int FlxColor_Impl__obj::PURPLE;

int FlxColor_Impl__obj::BLUE;

int FlxColor_Impl__obj::BROWN;

int FlxColor_Impl__obj::PINK;

int FlxColor_Impl__obj::MAGENTA;

int FlxColor_Impl__obj::CYAN;

 ::haxe::ds::StringMap FlxColor_Impl__obj::colorLookup;

 ::EReg FlxColor_Impl__obj::COLOR_REGEX;

int FlxColor_Impl__obj::fromInt(int Value){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_88_fromInt)
            	HX_STACK_ARG(Value,"Value")
HXLINE(  88)
HXDLIN(  88)		return ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(Value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,fromInt,return )

int FlxColor_Impl__obj::fromRGB(int Red,int Green,int Blue,::hx::Null< int >  __o_Alpha){
            		int Alpha = __o_Alpha.Default(255);
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_101_fromRGB)
            	HX_STACK_ARG(Red,"Red")
            	HX_STACK_ARG(Green,"Green")
            	HX_STACK_ARG(Blue,"Blue")
            	HX_STACK_ARG(Alpha,"Alpha")
HXLINE( 101)
HXLINE( 102)		HX_VARI( int,color) = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXLINE( 103)		{
HXLINE( 103)			color = (color & -16711681);
HXDLIN( 103)			int color1;
HXDLIN( 103)			if ((Red > 255)) {
HXLINE( 103)				color1 = 255;
            			}
            			else {
HXLINE( 103)				if ((Red < 0)) {
HXLINE( 103)					color1 = 0;
            				}
            				else {
HXLINE( 103)					color1 = Red;
            				}
            			}
HXDLIN( 103)			color = (color | (color1 << 16));
            		}
HXDLIN( 103)		{
HXLINE( 103)			color = (color & -65281);
HXDLIN( 103)			int color2;
HXDLIN( 103)			if ((Green > 255)) {
HXLINE( 103)				color2 = 255;
            			}
            			else {
HXLINE( 103)				if ((Green < 0)) {
HXLINE( 103)					color2 = 0;
            				}
            				else {
HXLINE( 103)					color2 = Green;
            				}
            			}
HXDLIN( 103)			color = (color | (color2 << 8));
            		}
HXDLIN( 103)		{
HXLINE( 103)			color = (color & -256);
HXDLIN( 103)			int color3;
HXDLIN( 103)			if ((Blue > 255)) {
HXLINE( 103)				color3 = 255;
            			}
            			else {
HXLINE( 103)				if ((Blue < 0)) {
HXLINE( 103)					color3 = 0;
            				}
            				else {
HXLINE( 103)					color3 = Blue;
            				}
            			}
HXDLIN( 103)			color = (color | color3);
            		}
HXDLIN( 103)		{
HXLINE( 103)			color = (color & 16777215);
HXDLIN( 103)			int color4;
HXDLIN( 103)			if ((Alpha > 255)) {
HXLINE( 103)				color4 = 255;
            			}
            			else {
HXLINE( 103)				if ((Alpha < 0)) {
HXLINE( 103)					color4 = 0;
            				}
            				else {
HXLINE( 103)					color4 = Alpha;
            				}
            			}
HXDLIN( 103)			color = (color | (color4 << 24));
            		}
HXDLIN( 103)		return color;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColor_Impl__obj,fromRGB,return )

int FlxColor_Impl__obj::fromRGBFloat(Float Red,Float Green,Float Blue,::hx::Null< Float >  __o_Alpha){
            		Float Alpha = __o_Alpha.Default(1);
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_116_fromRGBFloat)
            	HX_STACK_ARG(Red,"Red")
            	HX_STACK_ARG(Green,"Green")
            	HX_STACK_ARG(Blue,"Blue")
            	HX_STACK_ARG(Alpha,"Alpha")
HXLINE( 116)
HXLINE( 117)		HX_VARI( int,color) = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXLINE( 118)		{
HXLINE( 118)			int Value = ::Math_obj::round((Red * ( (Float)(255) )));
HXDLIN( 118)			color = (color & -16711681);
HXDLIN( 118)			int color1;
HXDLIN( 118)			if ((Value > 255)) {
HXLINE( 118)				color1 = 255;
            			}
            			else {
HXLINE( 118)				if ((Value < 0)) {
HXLINE( 118)					color1 = 0;
            				}
            				else {
HXLINE( 118)					color1 = Value;
            				}
            			}
HXDLIN( 118)			color = (color | (color1 << 16));
            		}
HXDLIN( 118)		{
HXLINE( 118)			int Value1 = ::Math_obj::round((Green * ( (Float)(255) )));
HXDLIN( 118)			color = (color & -65281);
HXDLIN( 118)			int color2;
HXDLIN( 118)			if ((Value1 > 255)) {
HXLINE( 118)				color2 = 255;
            			}
            			else {
HXLINE( 118)				if ((Value1 < 0)) {
HXLINE( 118)					color2 = 0;
            				}
            				else {
HXLINE( 118)					color2 = Value1;
            				}
            			}
HXDLIN( 118)			color = (color | (color2 << 8));
            		}
HXDLIN( 118)		{
HXLINE( 118)			int Value2 = ::Math_obj::round((Blue * ( (Float)(255) )));
HXDLIN( 118)			color = (color & -256);
HXDLIN( 118)			int color3;
HXDLIN( 118)			if ((Value2 > 255)) {
HXLINE( 118)				color3 = 255;
            			}
            			else {
HXLINE( 118)				if ((Value2 < 0)) {
HXLINE( 118)					color3 = 0;
            				}
            				else {
HXLINE( 118)					color3 = Value2;
            				}
            			}
HXDLIN( 118)			color = (color | color3);
            		}
HXDLIN( 118)		{
HXLINE( 118)			int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 118)			color = (color & 16777215);
HXDLIN( 118)			int color4;
HXDLIN( 118)			if ((Value3 > 255)) {
HXLINE( 118)				color4 = 255;
            			}
            			else {
HXLINE( 118)				if ((Value3 < 0)) {
HXLINE( 118)					color4 = 0;
            				}
            				else {
HXLINE( 118)					color4 = Value3;
            				}
            			}
HXDLIN( 118)			color = (color | (color4 << 24));
            		}
HXDLIN( 118)		return color;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColor_Impl__obj,fromRGBFloat,return )

int FlxColor_Impl__obj::fromCMYK(Float Cyan,Float Magenta,Float Yellow,Float Black,::hx::Null< Float >  __o_Alpha){
            		Float Alpha = __o_Alpha.Default(1);
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_132_fromCMYK)
            	HX_STACK_ARG(Cyan,"Cyan")
            	HX_STACK_ARG(Magenta,"Magenta")
            	HX_STACK_ARG(Yellow,"Yellow")
            	HX_STACK_ARG(Black,"Black")
            	HX_STACK_ARG(Alpha,"Alpha")
HXLINE( 132)
HXLINE( 133)		HX_VARI( int,color) = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXLINE( 134)		{
HXLINE( 134)			Float Value = ((( (Float)(1) ) - Cyan) * (( (Float)(1) ) - Black));
HXDLIN( 134)			{
HXLINE( 134)				int Value1 = ::Math_obj::round((Value * ( (Float)(255) )));
HXDLIN( 134)				color = (color & -16711681);
HXDLIN( 134)				int color1;
HXDLIN( 134)				if ((Value1 > 255)) {
HXLINE( 134)					color1 = 255;
            				}
            				else {
HXLINE( 134)					if ((Value1 < 0)) {
HXLINE( 134)						color1 = 0;
            					}
            					else {
HXLINE( 134)						color1 = Value1;
            					}
            				}
HXDLIN( 134)				color = (color | (color1 << 16));
            			}
            		}
HXDLIN( 134)		{
HXLINE( 134)			Float Value2 = ((( (Float)(1) ) - Magenta) * (( (Float)(1) ) - Black));
HXDLIN( 134)			{
HXLINE( 134)				int Value3 = ::Math_obj::round((Value2 * ( (Float)(255) )));
HXDLIN( 134)				color = (color & -65281);
HXDLIN( 134)				int color2;
HXDLIN( 134)				if ((Value3 > 255)) {
HXLINE( 134)					color2 = 255;
            				}
            				else {
HXLINE( 134)					if ((Value3 < 0)) {
HXLINE( 134)						color2 = 0;
            					}
            					else {
HXLINE( 134)						color2 = Value3;
            					}
            				}
HXDLIN( 134)				color = (color | (color2 << 8));
            			}
            		}
HXDLIN( 134)		{
HXLINE( 134)			Float Value4 = ((( (Float)(1) ) - Yellow) * (( (Float)(1) ) - Black));
HXDLIN( 134)			{
HXLINE( 134)				int Value5 = ::Math_obj::round((Value4 * ( (Float)(255) )));
HXDLIN( 134)				color = (color & -256);
HXDLIN( 134)				int color3;
HXDLIN( 134)				if ((Value5 > 255)) {
HXLINE( 134)					color3 = 255;
            				}
            				else {
HXLINE( 134)					if ((Value5 < 0)) {
HXLINE( 134)						color3 = 0;
            					}
            					else {
HXLINE( 134)						color3 = Value5;
            					}
            				}
HXDLIN( 134)				color = (color | color3);
            			}
            		}
HXDLIN( 134)		{
HXLINE( 134)			int Value6 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 134)			color = (color & 16777215);
HXDLIN( 134)			int color4;
HXDLIN( 134)			if ((Value6 > 255)) {
HXLINE( 134)				color4 = 255;
            			}
            			else {
HXLINE( 134)				if ((Value6 < 0)) {
HXLINE( 134)					color4 = 0;
            				}
            				else {
HXLINE( 134)					color4 = Value6;
            				}
            			}
HXDLIN( 134)			color = (color | (color4 << 24));
            		}
HXDLIN( 134)		return color;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxColor_Impl__obj,fromCMYK,return )

int FlxColor_Impl__obj::fromHSB(Float Hue,Float Saturation,Float Brightness,::hx::Null< Float >  __o_Alpha){
            		Float Alpha = __o_Alpha.Default(1);
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_147_fromHSB)
            	HX_STACK_ARG(Hue,"Hue")
            	HX_STACK_ARG(Saturation,"Saturation")
            	HX_STACK_ARG(Brightness,"Brightness")
            	HX_STACK_ARG(Alpha,"Alpha")
HXLINE( 147)
HXLINE( 148)		HX_VARI( int,color) = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXLINE( 149)		Float chroma = (Brightness * Saturation);
HXDLIN( 149)		Float match = (Brightness - chroma);
HXDLIN( 149)		Float Hue1 = Hue;
HXDLIN( 149)		Float Chroma = chroma;
HXDLIN( 149)		Hue1 = ::hx::Mod(Hue1,360);
HXDLIN( 149)		Float hueD = (Hue1 / ( (Float)(60) ));
HXDLIN( 149)		Float mid = ((Chroma * (( (Float)(1) ) - ::Math_obj::abs((::hx::Mod(hueD,2) - ( (Float)(1) ))))) + match);
HXDLIN( 149)		Chroma = (Chroma + match);
HXDLIN( 149)		switch((int)(::Std_obj::_hx_int(hueD))){
            			case (int)0: {
HXLINE( 149)				{
HXLINE( 149)					int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 149)					color = (color & -16711681);
HXDLIN( 149)					int color1;
HXDLIN( 149)					if ((Value > 255)) {
HXLINE( 149)						color1 = 255;
            					}
            					else {
HXLINE( 149)						if ((Value < 0)) {
HXLINE( 149)							color1 = 0;
            						}
            						else {
HXLINE( 149)							color1 = Value;
            						}
            					}
HXDLIN( 149)					color = (color | (color1 << 16));
            				}
HXDLIN( 149)				{
HXLINE( 149)					int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 149)					color = (color & -65281);
HXDLIN( 149)					int color2;
HXDLIN( 149)					if ((Value1 > 255)) {
HXLINE( 149)						color2 = 255;
            					}
            					else {
HXLINE( 149)						if ((Value1 < 0)) {
HXLINE( 149)							color2 = 0;
            						}
            						else {
HXLINE( 149)							color2 = Value1;
            						}
            					}
HXDLIN( 149)					color = (color | (color2 << 8));
            				}
HXDLIN( 149)				{
HXLINE( 149)					int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 149)					color = (color & -256);
HXDLIN( 149)					int color3;
HXDLIN( 149)					if ((Value2 > 255)) {
HXLINE( 149)						color3 = 255;
            					}
            					else {
HXLINE( 149)						if ((Value2 < 0)) {
HXLINE( 149)							color3 = 0;
            						}
            						else {
HXLINE( 149)							color3 = Value2;
            						}
            					}
HXDLIN( 149)					color = (color | color3);
            				}
HXDLIN( 149)				{
HXLINE( 149)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 149)					color = (color & 16777215);
HXDLIN( 149)					int color4;
HXDLIN( 149)					if ((Value3 > 255)) {
HXLINE( 149)						color4 = 255;
            					}
            					else {
HXLINE( 149)						if ((Value3 < 0)) {
HXLINE( 149)							color4 = 0;
            						}
            						else {
HXLINE( 149)							color4 = Value3;
            						}
            					}
HXDLIN( 149)					color = (color | (color4 << 24));
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 149)				{
HXLINE( 149)					int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 149)					color = (color & -16711681);
HXDLIN( 149)					int color1;
HXDLIN( 149)					if ((Value > 255)) {
HXLINE( 149)						color1 = 255;
            					}
            					else {
HXLINE( 149)						if ((Value < 0)) {
HXLINE( 149)							color1 = 0;
            						}
            						else {
HXLINE( 149)							color1 = Value;
            						}
            					}
HXDLIN( 149)					color = (color | (color1 << 16));
            				}
HXDLIN( 149)				{
HXLINE( 149)					int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 149)					color = (color & -65281);
HXDLIN( 149)					int color2;
HXDLIN( 149)					if ((Value1 > 255)) {
HXLINE( 149)						color2 = 255;
            					}
            					else {
HXLINE( 149)						if ((Value1 < 0)) {
HXLINE( 149)							color2 = 0;
            						}
            						else {
HXLINE( 149)							color2 = Value1;
            						}
            					}
HXDLIN( 149)					color = (color | (color2 << 8));
            				}
HXDLIN( 149)				{
HXLINE( 149)					int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 149)					color = (color & -256);
HXDLIN( 149)					int color3;
HXDLIN( 149)					if ((Value2 > 255)) {
HXLINE( 149)						color3 = 255;
            					}
            					else {
HXLINE( 149)						if ((Value2 < 0)) {
HXLINE( 149)							color3 = 0;
            						}
            						else {
HXLINE( 149)							color3 = Value2;
            						}
            					}
HXDLIN( 149)					color = (color | color3);
            				}
HXDLIN( 149)				{
HXLINE( 149)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 149)					color = (color & 16777215);
HXDLIN( 149)					int color4;
HXDLIN( 149)					if ((Value3 > 255)) {
HXLINE( 149)						color4 = 255;
            					}
            					else {
HXLINE( 149)						if ((Value3 < 0)) {
HXLINE( 149)							color4 = 0;
            						}
            						else {
HXLINE( 149)							color4 = Value3;
            						}
            					}
HXDLIN( 149)					color = (color | (color4 << 24));
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 149)				{
HXLINE( 149)					int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 149)					color = (color & -16711681);
HXDLIN( 149)					int color1;
HXDLIN( 149)					if ((Value > 255)) {
HXLINE( 149)						color1 = 255;
            					}
            					else {
HXLINE( 149)						if ((Value < 0)) {
HXLINE( 149)							color1 = 0;
            						}
            						else {
HXLINE( 149)							color1 = Value;
            						}
            					}
HXDLIN( 149)					color = (color | (color1 << 16));
            				}
HXDLIN( 149)				{
HXLINE( 149)					int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 149)					color = (color & -65281);
HXDLIN( 149)					int color2;
HXDLIN( 149)					if ((Value1 > 255)) {
HXLINE( 149)						color2 = 255;
            					}
            					else {
HXLINE( 149)						if ((Value1 < 0)) {
HXLINE( 149)							color2 = 0;
            						}
            						else {
HXLINE( 149)							color2 = Value1;
            						}
            					}
HXDLIN( 149)					color = (color | (color2 << 8));
            				}
HXDLIN( 149)				{
HXLINE( 149)					int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 149)					color = (color & -256);
HXDLIN( 149)					int color3;
HXDLIN( 149)					if ((Value2 > 255)) {
HXLINE( 149)						color3 = 255;
            					}
            					else {
HXLINE( 149)						if ((Value2 < 0)) {
HXLINE( 149)							color3 = 0;
            						}
            						else {
HXLINE( 149)							color3 = Value2;
            						}
            					}
HXDLIN( 149)					color = (color | color3);
            				}
HXDLIN( 149)				{
HXLINE( 149)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 149)					color = (color & 16777215);
HXDLIN( 149)					int color4;
HXDLIN( 149)					if ((Value3 > 255)) {
HXLINE( 149)						color4 = 255;
            					}
            					else {
HXLINE( 149)						if ((Value3 < 0)) {
HXLINE( 149)							color4 = 0;
            						}
            						else {
HXLINE( 149)							color4 = Value3;
            						}
            					}
HXDLIN( 149)					color = (color | (color4 << 24));
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 149)				{
HXLINE( 149)					int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 149)					color = (color & -16711681);
HXDLIN( 149)					int color1;
HXDLIN( 149)					if ((Value > 255)) {
HXLINE( 149)						color1 = 255;
            					}
            					else {
HXLINE( 149)						if ((Value < 0)) {
HXLINE( 149)							color1 = 0;
            						}
            						else {
HXLINE( 149)							color1 = Value;
            						}
            					}
HXDLIN( 149)					color = (color | (color1 << 16));
            				}
HXDLIN( 149)				{
HXLINE( 149)					int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 149)					color = (color & -65281);
HXDLIN( 149)					int color2;
HXDLIN( 149)					if ((Value1 > 255)) {
HXLINE( 149)						color2 = 255;
            					}
            					else {
HXLINE( 149)						if ((Value1 < 0)) {
HXLINE( 149)							color2 = 0;
            						}
            						else {
HXLINE( 149)							color2 = Value1;
            						}
            					}
HXDLIN( 149)					color = (color | (color2 << 8));
            				}
HXDLIN( 149)				{
HXLINE( 149)					int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 149)					color = (color & -256);
HXDLIN( 149)					int color3;
HXDLIN( 149)					if ((Value2 > 255)) {
HXLINE( 149)						color3 = 255;
            					}
            					else {
HXLINE( 149)						if ((Value2 < 0)) {
HXLINE( 149)							color3 = 0;
            						}
            						else {
HXLINE( 149)							color3 = Value2;
            						}
            					}
HXDLIN( 149)					color = (color | color3);
            				}
HXDLIN( 149)				{
HXLINE( 149)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 149)					color = (color & 16777215);
HXDLIN( 149)					int color4;
HXDLIN( 149)					if ((Value3 > 255)) {
HXLINE( 149)						color4 = 255;
            					}
            					else {
HXLINE( 149)						if ((Value3 < 0)) {
HXLINE( 149)							color4 = 0;
            						}
            						else {
HXLINE( 149)							color4 = Value3;
            						}
            					}
HXDLIN( 149)					color = (color | (color4 << 24));
            				}
            			}
            			break;
            			case (int)4: {
HXLINE( 149)				{
HXLINE( 149)					int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 149)					color = (color & -16711681);
HXDLIN( 149)					int color1;
HXDLIN( 149)					if ((Value > 255)) {
HXLINE( 149)						color1 = 255;
            					}
            					else {
HXLINE( 149)						if ((Value < 0)) {
HXLINE( 149)							color1 = 0;
            						}
            						else {
HXLINE( 149)							color1 = Value;
            						}
            					}
HXDLIN( 149)					color = (color | (color1 << 16));
            				}
HXDLIN( 149)				{
HXLINE( 149)					int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 149)					color = (color & -65281);
HXDLIN( 149)					int color2;
HXDLIN( 149)					if ((Value1 > 255)) {
HXLINE( 149)						color2 = 255;
            					}
            					else {
HXLINE( 149)						if ((Value1 < 0)) {
HXLINE( 149)							color2 = 0;
            						}
            						else {
HXLINE( 149)							color2 = Value1;
            						}
            					}
HXDLIN( 149)					color = (color | (color2 << 8));
            				}
HXDLIN( 149)				{
HXLINE( 149)					int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 149)					color = (color & -256);
HXDLIN( 149)					int color3;
HXDLIN( 149)					if ((Value2 > 255)) {
HXLINE( 149)						color3 = 255;
            					}
            					else {
HXLINE( 149)						if ((Value2 < 0)) {
HXLINE( 149)							color3 = 0;
            						}
            						else {
HXLINE( 149)							color3 = Value2;
            						}
            					}
HXDLIN( 149)					color = (color | color3);
            				}
HXDLIN( 149)				{
HXLINE( 149)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 149)					color = (color & 16777215);
HXDLIN( 149)					int color4;
HXDLIN( 149)					if ((Value3 > 255)) {
HXLINE( 149)						color4 = 255;
            					}
            					else {
HXLINE( 149)						if ((Value3 < 0)) {
HXLINE( 149)							color4 = 0;
            						}
            						else {
HXLINE( 149)							color4 = Value3;
            						}
            					}
HXDLIN( 149)					color = (color | (color4 << 24));
            				}
            			}
            			break;
            			case (int)5: {
HXLINE( 149)				{
HXLINE( 149)					int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 149)					color = (color & -16711681);
HXDLIN( 149)					int color1;
HXDLIN( 149)					if ((Value > 255)) {
HXLINE( 149)						color1 = 255;
            					}
            					else {
HXLINE( 149)						if ((Value < 0)) {
HXLINE( 149)							color1 = 0;
            						}
            						else {
HXLINE( 149)							color1 = Value;
            						}
            					}
HXDLIN( 149)					color = (color | (color1 << 16));
            				}
HXDLIN( 149)				{
HXLINE( 149)					int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 149)					color = (color & -65281);
HXDLIN( 149)					int color2;
HXDLIN( 149)					if ((Value1 > 255)) {
HXLINE( 149)						color2 = 255;
            					}
            					else {
HXLINE( 149)						if ((Value1 < 0)) {
HXLINE( 149)							color2 = 0;
            						}
            						else {
HXLINE( 149)							color2 = Value1;
            						}
            					}
HXDLIN( 149)					color = (color | (color2 << 8));
            				}
HXDLIN( 149)				{
HXLINE( 149)					int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 149)					color = (color & -256);
HXDLIN( 149)					int color3;
HXDLIN( 149)					if ((Value2 > 255)) {
HXLINE( 149)						color3 = 255;
            					}
            					else {
HXLINE( 149)						if ((Value2 < 0)) {
HXLINE( 149)							color3 = 0;
            						}
            						else {
HXLINE( 149)							color3 = Value2;
            						}
            					}
HXDLIN( 149)					color = (color | color3);
            				}
HXDLIN( 149)				{
HXLINE( 149)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 149)					color = (color & 16777215);
HXDLIN( 149)					int color4;
HXDLIN( 149)					if ((Value3 > 255)) {
HXLINE( 149)						color4 = 255;
            					}
            					else {
HXLINE( 149)						if ((Value3 < 0)) {
HXLINE( 149)							color4 = 0;
            						}
            						else {
HXLINE( 149)							color4 = Value3;
            						}
            					}
HXDLIN( 149)					color = (color | (color4 << 24));
            				}
            			}
            			break;
            		}
HXDLIN( 149)		return color;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColor_Impl__obj,fromHSB,return )

int FlxColor_Impl__obj::fromHSL(Float Hue,Float Saturation,Float Lightness,::hx::Null< Float >  __o_Alpha){
            		Float Alpha = __o_Alpha.Default(1);
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_162_fromHSL)
            	HX_STACK_ARG(Hue,"Hue")
            	HX_STACK_ARG(Saturation,"Saturation")
            	HX_STACK_ARG(Lightness,"Lightness")
            	HX_STACK_ARG(Alpha,"Alpha")
HXLINE( 162)
HXLINE( 163)		HX_VARI( int,color) = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXLINE( 164)		Float chroma = ((( (Float)(1) ) - ::Math_obj::abs(((( (Float)(2) ) * Lightness) - ( (Float)(1) )))) * Saturation);
HXDLIN( 164)		Float match = (Lightness - (chroma / ( (Float)(2) )));
HXDLIN( 164)		Float Hue1 = Hue;
HXDLIN( 164)		Float Chroma = chroma;
HXDLIN( 164)		Hue1 = ::hx::Mod(Hue1,360);
HXDLIN( 164)		Float hueD = (Hue1 / ( (Float)(60) ));
HXDLIN( 164)		Float mid = ((Chroma * (( (Float)(1) ) - ::Math_obj::abs((::hx::Mod(hueD,2) - ( (Float)(1) ))))) + match);
HXDLIN( 164)		Chroma = (Chroma + match);
HXDLIN( 164)		switch((int)(::Std_obj::_hx_int(hueD))){
            			case (int)0: {
HXLINE( 164)				{
HXLINE( 164)					int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 164)					color = (color & -16711681);
HXDLIN( 164)					int color1;
HXDLIN( 164)					if ((Value > 255)) {
HXLINE( 164)						color1 = 255;
            					}
            					else {
HXLINE( 164)						if ((Value < 0)) {
HXLINE( 164)							color1 = 0;
            						}
            						else {
HXLINE( 164)							color1 = Value;
            						}
            					}
HXDLIN( 164)					color = (color | (color1 << 16));
            				}
HXDLIN( 164)				{
HXLINE( 164)					int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 164)					color = (color & -65281);
HXDLIN( 164)					int color2;
HXDLIN( 164)					if ((Value1 > 255)) {
HXLINE( 164)						color2 = 255;
            					}
            					else {
HXLINE( 164)						if ((Value1 < 0)) {
HXLINE( 164)							color2 = 0;
            						}
            						else {
HXLINE( 164)							color2 = Value1;
            						}
            					}
HXDLIN( 164)					color = (color | (color2 << 8));
            				}
HXDLIN( 164)				{
HXLINE( 164)					int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 164)					color = (color & -256);
HXDLIN( 164)					int color3;
HXDLIN( 164)					if ((Value2 > 255)) {
HXLINE( 164)						color3 = 255;
            					}
            					else {
HXLINE( 164)						if ((Value2 < 0)) {
HXLINE( 164)							color3 = 0;
            						}
            						else {
HXLINE( 164)							color3 = Value2;
            						}
            					}
HXDLIN( 164)					color = (color | color3);
            				}
HXDLIN( 164)				{
HXLINE( 164)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 164)					color = (color & 16777215);
HXDLIN( 164)					int color4;
HXDLIN( 164)					if ((Value3 > 255)) {
HXLINE( 164)						color4 = 255;
            					}
            					else {
HXLINE( 164)						if ((Value3 < 0)) {
HXLINE( 164)							color4 = 0;
            						}
            						else {
HXLINE( 164)							color4 = Value3;
            						}
            					}
HXDLIN( 164)					color = (color | (color4 << 24));
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 164)				{
HXLINE( 164)					int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 164)					color = (color & -16711681);
HXDLIN( 164)					int color1;
HXDLIN( 164)					if ((Value > 255)) {
HXLINE( 164)						color1 = 255;
            					}
            					else {
HXLINE( 164)						if ((Value < 0)) {
HXLINE( 164)							color1 = 0;
            						}
            						else {
HXLINE( 164)							color1 = Value;
            						}
            					}
HXDLIN( 164)					color = (color | (color1 << 16));
            				}
HXDLIN( 164)				{
HXLINE( 164)					int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 164)					color = (color & -65281);
HXDLIN( 164)					int color2;
HXDLIN( 164)					if ((Value1 > 255)) {
HXLINE( 164)						color2 = 255;
            					}
            					else {
HXLINE( 164)						if ((Value1 < 0)) {
HXLINE( 164)							color2 = 0;
            						}
            						else {
HXLINE( 164)							color2 = Value1;
            						}
            					}
HXDLIN( 164)					color = (color | (color2 << 8));
            				}
HXDLIN( 164)				{
HXLINE( 164)					int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 164)					color = (color & -256);
HXDLIN( 164)					int color3;
HXDLIN( 164)					if ((Value2 > 255)) {
HXLINE( 164)						color3 = 255;
            					}
            					else {
HXLINE( 164)						if ((Value2 < 0)) {
HXLINE( 164)							color3 = 0;
            						}
            						else {
HXLINE( 164)							color3 = Value2;
            						}
            					}
HXDLIN( 164)					color = (color | color3);
            				}
HXDLIN( 164)				{
HXLINE( 164)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 164)					color = (color & 16777215);
HXDLIN( 164)					int color4;
HXDLIN( 164)					if ((Value3 > 255)) {
HXLINE( 164)						color4 = 255;
            					}
            					else {
HXLINE( 164)						if ((Value3 < 0)) {
HXLINE( 164)							color4 = 0;
            						}
            						else {
HXLINE( 164)							color4 = Value3;
            						}
            					}
HXDLIN( 164)					color = (color | (color4 << 24));
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 164)				{
HXLINE( 164)					int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 164)					color = (color & -16711681);
HXDLIN( 164)					int color1;
HXDLIN( 164)					if ((Value > 255)) {
HXLINE( 164)						color1 = 255;
            					}
            					else {
HXLINE( 164)						if ((Value < 0)) {
HXLINE( 164)							color1 = 0;
            						}
            						else {
HXLINE( 164)							color1 = Value;
            						}
            					}
HXDLIN( 164)					color = (color | (color1 << 16));
            				}
HXDLIN( 164)				{
HXLINE( 164)					int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 164)					color = (color & -65281);
HXDLIN( 164)					int color2;
HXDLIN( 164)					if ((Value1 > 255)) {
HXLINE( 164)						color2 = 255;
            					}
            					else {
HXLINE( 164)						if ((Value1 < 0)) {
HXLINE( 164)							color2 = 0;
            						}
            						else {
HXLINE( 164)							color2 = Value1;
            						}
            					}
HXDLIN( 164)					color = (color | (color2 << 8));
            				}
HXDLIN( 164)				{
HXLINE( 164)					int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 164)					color = (color & -256);
HXDLIN( 164)					int color3;
HXDLIN( 164)					if ((Value2 > 255)) {
HXLINE( 164)						color3 = 255;
            					}
            					else {
HXLINE( 164)						if ((Value2 < 0)) {
HXLINE( 164)							color3 = 0;
            						}
            						else {
HXLINE( 164)							color3 = Value2;
            						}
            					}
HXDLIN( 164)					color = (color | color3);
            				}
HXDLIN( 164)				{
HXLINE( 164)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 164)					color = (color & 16777215);
HXDLIN( 164)					int color4;
HXDLIN( 164)					if ((Value3 > 255)) {
HXLINE( 164)						color4 = 255;
            					}
            					else {
HXLINE( 164)						if ((Value3 < 0)) {
HXLINE( 164)							color4 = 0;
            						}
            						else {
HXLINE( 164)							color4 = Value3;
            						}
            					}
HXDLIN( 164)					color = (color | (color4 << 24));
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 164)				{
HXLINE( 164)					int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 164)					color = (color & -16711681);
HXDLIN( 164)					int color1;
HXDLIN( 164)					if ((Value > 255)) {
HXLINE( 164)						color1 = 255;
            					}
            					else {
HXLINE( 164)						if ((Value < 0)) {
HXLINE( 164)							color1 = 0;
            						}
            						else {
HXLINE( 164)							color1 = Value;
            						}
            					}
HXDLIN( 164)					color = (color | (color1 << 16));
            				}
HXDLIN( 164)				{
HXLINE( 164)					int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 164)					color = (color & -65281);
HXDLIN( 164)					int color2;
HXDLIN( 164)					if ((Value1 > 255)) {
HXLINE( 164)						color2 = 255;
            					}
            					else {
HXLINE( 164)						if ((Value1 < 0)) {
HXLINE( 164)							color2 = 0;
            						}
            						else {
HXLINE( 164)							color2 = Value1;
            						}
            					}
HXDLIN( 164)					color = (color | (color2 << 8));
            				}
HXDLIN( 164)				{
HXLINE( 164)					int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 164)					color = (color & -256);
HXDLIN( 164)					int color3;
HXDLIN( 164)					if ((Value2 > 255)) {
HXLINE( 164)						color3 = 255;
            					}
            					else {
HXLINE( 164)						if ((Value2 < 0)) {
HXLINE( 164)							color3 = 0;
            						}
            						else {
HXLINE( 164)							color3 = Value2;
            						}
            					}
HXDLIN( 164)					color = (color | color3);
            				}
HXDLIN( 164)				{
HXLINE( 164)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 164)					color = (color & 16777215);
HXDLIN( 164)					int color4;
HXDLIN( 164)					if ((Value3 > 255)) {
HXLINE( 164)						color4 = 255;
            					}
            					else {
HXLINE( 164)						if ((Value3 < 0)) {
HXLINE( 164)							color4 = 0;
            						}
            						else {
HXLINE( 164)							color4 = Value3;
            						}
            					}
HXDLIN( 164)					color = (color | (color4 << 24));
            				}
            			}
            			break;
            			case (int)4: {
HXLINE( 164)				{
HXLINE( 164)					int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 164)					color = (color & -16711681);
HXDLIN( 164)					int color1;
HXDLIN( 164)					if ((Value > 255)) {
HXLINE( 164)						color1 = 255;
            					}
            					else {
HXLINE( 164)						if ((Value < 0)) {
HXLINE( 164)							color1 = 0;
            						}
            						else {
HXLINE( 164)							color1 = Value;
            						}
            					}
HXDLIN( 164)					color = (color | (color1 << 16));
            				}
HXDLIN( 164)				{
HXLINE( 164)					int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 164)					color = (color & -65281);
HXDLIN( 164)					int color2;
HXDLIN( 164)					if ((Value1 > 255)) {
HXLINE( 164)						color2 = 255;
            					}
            					else {
HXLINE( 164)						if ((Value1 < 0)) {
HXLINE( 164)							color2 = 0;
            						}
            						else {
HXLINE( 164)							color2 = Value1;
            						}
            					}
HXDLIN( 164)					color = (color | (color2 << 8));
            				}
HXDLIN( 164)				{
HXLINE( 164)					int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 164)					color = (color & -256);
HXDLIN( 164)					int color3;
HXDLIN( 164)					if ((Value2 > 255)) {
HXLINE( 164)						color3 = 255;
            					}
            					else {
HXLINE( 164)						if ((Value2 < 0)) {
HXLINE( 164)							color3 = 0;
            						}
            						else {
HXLINE( 164)							color3 = Value2;
            						}
            					}
HXDLIN( 164)					color = (color | color3);
            				}
HXDLIN( 164)				{
HXLINE( 164)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 164)					color = (color & 16777215);
HXDLIN( 164)					int color4;
HXDLIN( 164)					if ((Value3 > 255)) {
HXLINE( 164)						color4 = 255;
            					}
            					else {
HXLINE( 164)						if ((Value3 < 0)) {
HXLINE( 164)							color4 = 0;
            						}
            						else {
HXLINE( 164)							color4 = Value3;
            						}
            					}
HXDLIN( 164)					color = (color | (color4 << 24));
            				}
            			}
            			break;
            			case (int)5: {
HXLINE( 164)				{
HXLINE( 164)					int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 164)					color = (color & -16711681);
HXDLIN( 164)					int color1;
HXDLIN( 164)					if ((Value > 255)) {
HXLINE( 164)						color1 = 255;
            					}
            					else {
HXLINE( 164)						if ((Value < 0)) {
HXLINE( 164)							color1 = 0;
            						}
            						else {
HXLINE( 164)							color1 = Value;
            						}
            					}
HXDLIN( 164)					color = (color | (color1 << 16));
            				}
HXDLIN( 164)				{
HXLINE( 164)					int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 164)					color = (color & -65281);
HXDLIN( 164)					int color2;
HXDLIN( 164)					if ((Value1 > 255)) {
HXLINE( 164)						color2 = 255;
            					}
            					else {
HXLINE( 164)						if ((Value1 < 0)) {
HXLINE( 164)							color2 = 0;
            						}
            						else {
HXLINE( 164)							color2 = Value1;
            						}
            					}
HXDLIN( 164)					color = (color | (color2 << 8));
            				}
HXDLIN( 164)				{
HXLINE( 164)					int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 164)					color = (color & -256);
HXDLIN( 164)					int color3;
HXDLIN( 164)					if ((Value2 > 255)) {
HXLINE( 164)						color3 = 255;
            					}
            					else {
HXLINE( 164)						if ((Value2 < 0)) {
HXLINE( 164)							color3 = 0;
            						}
            						else {
HXLINE( 164)							color3 = Value2;
            						}
            					}
HXDLIN( 164)					color = (color | color3);
            				}
HXDLIN( 164)				{
HXLINE( 164)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 164)					color = (color & 16777215);
HXDLIN( 164)					int color4;
HXDLIN( 164)					if ((Value3 > 255)) {
HXLINE( 164)						color4 = 255;
            					}
            					else {
HXLINE( 164)						if ((Value3 < 0)) {
HXLINE( 164)							color4 = 0;
            						}
            						else {
HXLINE( 164)							color4 = Value3;
            						}
            					}
HXDLIN( 164)					color = (color | (color4 << 24));
            				}
            			}
            			break;
            		}
HXDLIN( 164)		return color;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColor_Impl__obj,fromHSL,return )

 ::Dynamic FlxColor_Impl__obj::fromString(::String str){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_183_fromString)
            	HX_STACK_ARG(str,"str")
HXLINE( 183)
HXLINE( 184)		HX_VARI(  ::Dynamic,result) = null();
HXLINE( 185)		str = ::StringTools_obj::trim(str);
HXLINE( 187)		if (::flixel::util::_FlxColor::FlxColor_Impl__obj::COLOR_REGEX->match(str)) {
HXLINE( 189)			HX_VARI( ::String,hexColor) = (HX_("0x",48,2a,00,00) + ::flixel::util::_FlxColor::FlxColor_Impl__obj::COLOR_REGEX->matched(2));
HXLINE( 190)			result = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(::Std_obj::parseInt(hexColor));
HXLINE( 191)			if ((hexColor.length == 8)) {
HXLINE( 193)				int Value = ::Math_obj::round(( (Float)(255) ));
HXDLIN( 193)				result = (( (int)(result) ) & 16777215);
HXDLIN( 193)				int result1;
HXDLIN( 193)				if ((Value > 255)) {
HXLINE( 193)					result1 = 255;
            				}
            				else {
HXLINE( 193)					if ((Value < 0)) {
HXLINE( 193)						result1 = 0;
            					}
            					else {
HXLINE( 193)						result1 = Value;
            					}
            				}
HXDLIN( 193)				result = (( (int)(result) ) | (result1 << 24));
            			}
            		}
            		else {
HXLINE( 198)			str = str.toUpperCase();
HXLINE( 199)			{
HXLINE( 199)				HX_VARI(  ::Dynamic,key) = ::flixel::util::_FlxColor::FlxColor_Impl__obj::colorLookup->keys();
HXDLIN( 199)				while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 199)					HX_VARI( ::String,key1) = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 201)					if ((key1.toUpperCase() == str)) {
HXLINE( 203)						result = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(::flixel::util::_FlxColor::FlxColor_Impl__obj::colorLookup->get(key1));
HXLINE( 204)						goto _hx_goto_6;
            					}
            				}
            				_hx_goto_6:;
            			}
            		}
HXLINE( 209)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,fromString,return )

::Array< int > FlxColor_Impl__obj::getHSBColorWheel(::hx::Null< int >  __o_Alpha){
            		int Alpha = __o_Alpha.Default(255);
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_220_getHSBColorWheel)
            	HX_STACK_ARG(Alpha,"Alpha")
HXLINE( 220)
HXDLIN( 220)		::Array< int > _g = ::Array_obj< int >::__new(0);
HXDLIN( 220)		{
HXDLIN( 220)			int _g1 = 0;
HXDLIN( 220)			while((_g1 < 360)){
HXDLIN( 220)				_g1 = (_g1 + 1);
HXDLIN( 220)				HX_VARI( int,c) = (_g1 - 1);
HXDLIN( 220)				_g->push(::flixel::util::_FlxColor::FlxColor_Impl__obj::fromHSB(( (Float)(c) ),((Float)1.0),((Float)1.0),Alpha));
            			}
            		}
HXDLIN( 220)		return _g;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,getHSBColorWheel,return )

int FlxColor_Impl__obj::interpolate(int Color1,int Color2,::hx::Null< Float >  __o_Factor){
            		Float Factor = __o_Factor.Default(((Float)0.5));
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_232_interpolate)
            	HX_STACK_ARG(Color1,"Color1")
            	HX_STACK_ARG(Color2,"Color2")
            	HX_STACK_ARG(Factor,"Factor")
HXLINE( 232)
HXLINE( 233)		HX_VARI( int,r) = ::Std_obj::_hx_int(((( (Float)((((Color2 >> 16) & 255) - ((Color1 >> 16) & 255))) ) * Factor) + ((Color1 >> 16) & 255)));
HXLINE( 234)		HX_VARI( int,g) = ::Std_obj::_hx_int(((( (Float)((((Color2 >> 8) & 255) - ((Color1 >> 8) & 255))) ) * Factor) + ((Color1 >> 8) & 255)));
HXLINE( 235)		HX_VARI( int,b) = ::Std_obj::_hx_int(((( (Float)(((Color2 & 255) - (Color1 & 255))) ) * Factor) + (Color1 & 255)));
HXLINE( 236)		HX_VARI( int,a) = ::Std_obj::_hx_int(((( (Float)((((Color2 >> 24) & 255) - ((Color1 >> 24) & 255))) ) * Factor) + ((Color1 >> 24) & 255)));
HXLINE( 238)		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN( 238)		{
HXLINE( 238)			color = (color & -16711681);
HXDLIN( 238)			int color1;
HXDLIN( 238)			if ((r > 255)) {
HXLINE( 238)				color1 = 255;
            			}
            			else {
HXLINE( 238)				if ((r < 0)) {
HXLINE( 238)					color1 = 0;
            				}
            				else {
HXLINE( 238)					color1 = r;
            				}
            			}
HXDLIN( 238)			color = (color | (color1 << 16));
            		}
HXDLIN( 238)		{
HXLINE( 238)			color = (color & -65281);
HXDLIN( 238)			int color2;
HXDLIN( 238)			if ((g > 255)) {
HXLINE( 238)				color2 = 255;
            			}
            			else {
HXLINE( 238)				if ((g < 0)) {
HXLINE( 238)					color2 = 0;
            				}
            				else {
HXLINE( 238)					color2 = g;
            				}
            			}
HXDLIN( 238)			color = (color | (color2 << 8));
            		}
HXDLIN( 238)		{
HXLINE( 238)			color = (color & -256);
HXDLIN( 238)			int color3;
HXDLIN( 238)			if ((b > 255)) {
HXLINE( 238)				color3 = 255;
            			}
            			else {
HXLINE( 238)				if ((b < 0)) {
HXLINE( 238)					color3 = 0;
            				}
            				else {
HXLINE( 238)					color3 = b;
            				}
            			}
HXDLIN( 238)			color = (color | color3);
            		}
HXDLIN( 238)		{
HXLINE( 238)			color = (color & 16777215);
HXDLIN( 238)			int color4;
HXDLIN( 238)			if ((a > 255)) {
HXLINE( 238)				color4 = 255;
            			}
            			else {
HXLINE( 238)				if ((a < 0)) {
HXLINE( 238)					color4 = 0;
            				}
            				else {
HXLINE( 238)					color4 = a;
            				}
            			}
HXDLIN( 238)			color = (color | (color4 << 24));
            		}
HXDLIN( 238)		return color;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxColor_Impl__obj,interpolate,return )

::Array< int > FlxColor_Impl__obj::gradient(int Color1,int Color2,int Steps, ::Dynamic Ease){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_251_gradient)
            	HX_STACK_ARG(Color1,"Color1")
            	HX_STACK_ARG(Color2,"Color2")
            	HX_STACK_ARG(Steps,"Steps")
            	HX_STACK_ARG(Ease,"Ease")
HXLINE( 251)
HXLINE( 252)		HX_VARI( ::Array< int >,output) = ::Array_obj< int >::__new();
HXLINE( 254)		if (::hx::IsNull( Ease )) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			Float _hx_run(Float t){
            				HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_258_gradient)
            				HX_STACK_ARG(t,"t")
HXLINE( 258)
HXLINE( 258)				return t;
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE( 256)			Ease =  ::Dynamic(new _hx_Closure_0());
            		}
HXLINE( 262)		{
HXLINE( 262)			int _g = 0;
HXDLIN( 262)			int _g1 = Steps;
HXDLIN( 262)			while((_g < _g1)){
HXLINE( 262)				_g = (_g + 1);
HXDLIN( 262)				HX_VARI( int,step) = (_g - 1);
HXLINE( 264)				Float Factor = ( (Float)(Ease((( (Float)(step) ) / ( (Float)((Steps - 1)) )))) );
HXDLIN( 264)				int r = ::Std_obj::_hx_int(((( (Float)((((Color2 >> 16) & 255) - ((Color1 >> 16) & 255))) ) * Factor) + ((Color1 >> 16) & 255)));
HXDLIN( 264)				int g = ::Std_obj::_hx_int(((( (Float)((((Color2 >> 8) & 255) - ((Color1 >> 8) & 255))) ) * Factor) + ((Color1 >> 8) & 255)));
HXDLIN( 264)				int b = ::Std_obj::_hx_int(((( (Float)(((Color2 & 255) - (Color1 & 255))) ) * Factor) + (Color1 & 255)));
HXDLIN( 264)				int a = ::Std_obj::_hx_int(((( (Float)((((Color2 >> 24) & 255) - ((Color1 >> 24) & 255))) ) * Factor) + ((Color1 >> 24) & 255)));
HXDLIN( 264)				int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN( 264)				{
HXLINE( 264)					color = (color & -16711681);
HXDLIN( 264)					int color1;
HXDLIN( 264)					if ((r > 255)) {
HXLINE( 264)						color1 = 255;
            					}
            					else {
HXLINE( 264)						if ((r < 0)) {
HXLINE( 264)							color1 = 0;
            						}
            						else {
HXLINE( 264)							color1 = r;
            						}
            					}
HXDLIN( 264)					color = (color | (color1 << 16));
            				}
HXDLIN( 264)				{
HXLINE( 264)					color = (color & -65281);
HXDLIN( 264)					int color2;
HXDLIN( 264)					if ((g > 255)) {
HXLINE( 264)						color2 = 255;
            					}
            					else {
HXLINE( 264)						if ((g < 0)) {
HXLINE( 264)							color2 = 0;
            						}
            						else {
HXLINE( 264)							color2 = g;
            						}
            					}
HXDLIN( 264)					color = (color | (color2 << 8));
            				}
HXDLIN( 264)				{
HXLINE( 264)					color = (color & -256);
HXDLIN( 264)					int color3;
HXDLIN( 264)					if ((b > 255)) {
HXLINE( 264)						color3 = 255;
            					}
            					else {
HXLINE( 264)						if ((b < 0)) {
HXLINE( 264)							color3 = 0;
            						}
            						else {
HXLINE( 264)							color3 = b;
            						}
            					}
HXDLIN( 264)					color = (color | color3);
            				}
HXDLIN( 264)				{
HXLINE( 264)					color = (color & 16777215);
HXDLIN( 264)					int color4;
HXDLIN( 264)					if ((a > 255)) {
HXLINE( 264)						color4 = 255;
            					}
            					else {
HXLINE( 264)						if ((a < 0)) {
HXLINE( 264)							color4 = 0;
            						}
            						else {
HXLINE( 264)							color4 = a;
            						}
            					}
HXDLIN( 264)					color = (color | (color4 << 24));
            				}
HXDLIN( 264)				output[step] = color;
            			}
            		}
HXLINE( 267)		return output;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColor_Impl__obj,gradient,return )

int FlxColor_Impl__obj::multiply(int lhs,int rhs){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_276_multiply)
            	HX_STACK_ARG(lhs,"lhs")
            	HX_STACK_ARG(rhs,"rhs")
HXLINE( 276)
HXDLIN( 276)		Float Red = ((( (Float)(((lhs >> 16) & 255)) ) / ( (Float)(255) )) * (( (Float)(((rhs >> 16) & 255)) ) / ( (Float)(255) )));
HXDLIN( 276)		Float Green = ((( (Float)(((lhs >> 8) & 255)) ) / ( (Float)(255) )) * (( (Float)(((rhs >> 8) & 255)) ) / ( (Float)(255) )));
HXDLIN( 276)		Float Blue = ((( (Float)((lhs & 255)) ) / ( (Float)(255) )) * (( (Float)((rhs & 255)) ) / ( (Float)(255) )));
HXDLIN( 276)		Float Alpha = ( (Float)(1) );
HXDLIN( 276)		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN( 276)		{
HXDLIN( 276)			int Value = ::Math_obj::round((Red * ( (Float)(255) )));
HXDLIN( 276)			color = (color & -16711681);
HXDLIN( 276)			int color1;
HXDLIN( 276)			if ((Value > 255)) {
HXDLIN( 276)				color1 = 255;
            			}
            			else {
HXDLIN( 276)				if ((Value < 0)) {
HXDLIN( 276)					color1 = 0;
            				}
            				else {
HXDLIN( 276)					color1 = Value;
            				}
            			}
HXDLIN( 276)			color = (color | (color1 << 16));
            		}
HXDLIN( 276)		{
HXDLIN( 276)			int Value1 = ::Math_obj::round((Green * ( (Float)(255) )));
HXDLIN( 276)			color = (color & -65281);
HXDLIN( 276)			int color2;
HXDLIN( 276)			if ((Value1 > 255)) {
HXDLIN( 276)				color2 = 255;
            			}
            			else {
HXDLIN( 276)				if ((Value1 < 0)) {
HXDLIN( 276)					color2 = 0;
            				}
            				else {
HXDLIN( 276)					color2 = Value1;
            				}
            			}
HXDLIN( 276)			color = (color | (color2 << 8));
            		}
HXDLIN( 276)		{
HXDLIN( 276)			int Value2 = ::Math_obj::round((Blue * ( (Float)(255) )));
HXDLIN( 276)			color = (color & -256);
HXDLIN( 276)			int color3;
HXDLIN( 276)			if ((Value2 > 255)) {
HXDLIN( 276)				color3 = 255;
            			}
            			else {
HXDLIN( 276)				if ((Value2 < 0)) {
HXDLIN( 276)					color3 = 0;
            				}
            				else {
HXDLIN( 276)					color3 = Value2;
            				}
            			}
HXDLIN( 276)			color = (color | color3);
            		}
HXDLIN( 276)		{
HXDLIN( 276)			int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 276)			color = (color & 16777215);
HXDLIN( 276)			int color4;
HXDLIN( 276)			if ((Value3 > 255)) {
HXDLIN( 276)				color4 = 255;
            			}
            			else {
HXDLIN( 276)				if ((Value3 < 0)) {
HXDLIN( 276)					color4 = 0;
            				}
            				else {
HXDLIN( 276)					color4 = Value3;
            				}
            			}
HXDLIN( 276)			color = (color | (color4 << 24));
            		}
HXDLIN( 276)		return color;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,multiply,return )

int FlxColor_Impl__obj::add(int lhs,int rhs){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_285_add)
            	HX_STACK_ARG(lhs,"lhs")
            	HX_STACK_ARG(rhs,"rhs")
HXLINE( 285)
HXDLIN( 285)		int Red = (((lhs >> 16) & 255) + ((rhs >> 16) & 255));
HXDLIN( 285)		int Green = (((lhs >> 8) & 255) + ((rhs >> 8) & 255));
HXDLIN( 285)		int Blue = ((lhs & 255) + (rhs & 255));
HXDLIN( 285)		int Alpha = 255;
HXDLIN( 285)		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN( 285)		{
HXDLIN( 285)			color = (color & -16711681);
HXDLIN( 285)			int color1;
HXDLIN( 285)			if ((Red > 255)) {
HXDLIN( 285)				color1 = 255;
            			}
            			else {
HXDLIN( 285)				if ((Red < 0)) {
HXDLIN( 285)					color1 = 0;
            				}
            				else {
HXDLIN( 285)					color1 = Red;
            				}
            			}
HXDLIN( 285)			color = (color | (color1 << 16));
            		}
HXDLIN( 285)		{
HXDLIN( 285)			color = (color & -65281);
HXDLIN( 285)			int color2;
HXDLIN( 285)			if ((Green > 255)) {
HXDLIN( 285)				color2 = 255;
            			}
            			else {
HXDLIN( 285)				if ((Green < 0)) {
HXDLIN( 285)					color2 = 0;
            				}
            				else {
HXDLIN( 285)					color2 = Green;
            				}
            			}
HXDLIN( 285)			color = (color | (color2 << 8));
            		}
HXDLIN( 285)		{
HXDLIN( 285)			color = (color & -256);
HXDLIN( 285)			int color3;
HXDLIN( 285)			if ((Blue > 255)) {
HXDLIN( 285)				color3 = 255;
            			}
            			else {
HXDLIN( 285)				if ((Blue < 0)) {
HXDLIN( 285)					color3 = 0;
            				}
            				else {
HXDLIN( 285)					color3 = Blue;
            				}
            			}
HXDLIN( 285)			color = (color | color3);
            		}
HXDLIN( 285)		{
HXDLIN( 285)			color = (color & 16777215);
HXDLIN( 285)			int color4;
HXDLIN( 285)			if ((Alpha > 255)) {
HXDLIN( 285)				color4 = 255;
            			}
            			else {
HXDLIN( 285)				if ((Alpha < 0)) {
HXDLIN( 285)					color4 = 0;
            				}
            				else {
HXDLIN( 285)					color4 = Alpha;
            				}
            			}
HXDLIN( 285)			color = (color | (color4 << 24));
            		}
HXDLIN( 285)		return color;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,add,return )

int FlxColor_Impl__obj::subtract(int lhs,int rhs){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_294_subtract)
            	HX_STACK_ARG(lhs,"lhs")
            	HX_STACK_ARG(rhs,"rhs")
HXLINE( 294)
HXDLIN( 294)		int Red = (((lhs >> 16) & 255) - ((rhs >> 16) & 255));
HXDLIN( 294)		int Green = (((lhs >> 8) & 255) - ((rhs >> 8) & 255));
HXDLIN( 294)		int Blue = ((lhs & 255) - (rhs & 255));
HXDLIN( 294)		int Alpha = 255;
HXDLIN( 294)		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN( 294)		{
HXDLIN( 294)			color = (color & -16711681);
HXDLIN( 294)			int color1;
HXDLIN( 294)			if ((Red > 255)) {
HXDLIN( 294)				color1 = 255;
            			}
            			else {
HXDLIN( 294)				if ((Red < 0)) {
HXDLIN( 294)					color1 = 0;
            				}
            				else {
HXDLIN( 294)					color1 = Red;
            				}
            			}
HXDLIN( 294)			color = (color | (color1 << 16));
            		}
HXDLIN( 294)		{
HXDLIN( 294)			color = (color & -65281);
HXDLIN( 294)			int color2;
HXDLIN( 294)			if ((Green > 255)) {
HXDLIN( 294)				color2 = 255;
            			}
            			else {
HXDLIN( 294)				if ((Green < 0)) {
HXDLIN( 294)					color2 = 0;
            				}
            				else {
HXDLIN( 294)					color2 = Green;
            				}
            			}
HXDLIN( 294)			color = (color | (color2 << 8));
            		}
HXDLIN( 294)		{
HXDLIN( 294)			color = (color & -256);
HXDLIN( 294)			int color3;
HXDLIN( 294)			if ((Blue > 255)) {
HXDLIN( 294)				color3 = 255;
            			}
            			else {
HXDLIN( 294)				if ((Blue < 0)) {
HXDLIN( 294)					color3 = 0;
            				}
            				else {
HXDLIN( 294)					color3 = Blue;
            				}
            			}
HXDLIN( 294)			color = (color | color3);
            		}
HXDLIN( 294)		{
HXDLIN( 294)			color = (color & 16777215);
HXDLIN( 294)			int color4;
HXDLIN( 294)			if ((Alpha > 255)) {
HXDLIN( 294)				color4 = 255;
            			}
            			else {
HXDLIN( 294)				if ((Alpha < 0)) {
HXDLIN( 294)					color4 = 0;
            				}
            				else {
HXDLIN( 294)					color4 = Alpha;
            				}
            			}
HXDLIN( 294)			color = (color | (color4 << 24));
            		}
HXDLIN( 294)		return color;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,subtract,return )

int FlxColor_Impl__obj::getComplementHarmony(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_305_getComplementHarmony)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 305)
HXDLIN( 305)		int _hx_tmp = ::flixel::math::FlxMath_obj::wrap((::Std_obj::_hx_int(::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(this1)) + 180),0,350);
HXDLIN( 305)		return ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromHSB(( (Float)(_hx_tmp) ),::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))),((::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))) - ::Math_obj::min((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))),(( (Float)(((this1 >> 24) & 255)) ) / ( (Float)(255) )));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,getComplementHarmony,return )

 ::Dynamic FlxColor_Impl__obj::getAnalogousHarmony(int this1,::hx::Null< int >  __o_Threshold){
            		int Threshold = __o_Threshold.Default(30);
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_316_getAnalogousHarmony)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(Threshold,"Threshold")
HXLINE( 316)
HXLINE( 317)		int warmer = ::flixel::math::FlxMath_obj::wrap((::Std_obj::_hx_int(::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(this1)) - Threshold),0,350);
HXDLIN( 317)		HX_VARI( int,warmer1) = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromHSB(( (Float)(warmer) ),((::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))) - ::Math_obj::min((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))),::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))),(( (Float)(((this1 >> 24) & 255)) ) / ( (Float)(255) )));
HXLINE( 318)		int colder = ::flixel::math::FlxMath_obj::wrap((::Std_obj::_hx_int(::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(this1)) + Threshold),0,350);
HXDLIN( 318)		HX_VARI( int,colder1) = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromHSB(( (Float)(colder) ),((::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))) - ::Math_obj::min((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))),::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))),(( (Float)(((this1 >> 24) & 255)) ) / ( (Float)(255) )));
HXLINE( 320)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("warmer",f2,95,03,ba),warmer1)
            			->setFixed(1,HX_("colder",91,61,7e,c6),colder1)
            			->setFixed(2,HX_("original",51,34,e8,e0),this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,getAnalogousHarmony,return )

 ::Dynamic FlxColor_Impl__obj::getSplitComplementHarmony(int this1,::hx::Null< int >  __o_Threshold){
            		int Threshold = __o_Threshold.Default(30);
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_331_getSplitComplementHarmony)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(Threshold,"Threshold")
HXLINE( 331)
HXLINE( 332)		HX_VARI( int,oppositeHue) = ::flixel::math::FlxMath_obj::wrap((::Std_obj::_hx_int(::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(this1)) + 180),0,350);
HXLINE( 333)		int warmer = ::flixel::math::FlxMath_obj::wrap((oppositeHue - Threshold),0,350);
HXDLIN( 333)		HX_VARI( int,warmer1) = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromHSB(( (Float)(warmer) ),((::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))) - ::Math_obj::min((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))),::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))),(( (Float)(((this1 >> 24) & 255)) ) / ( (Float)(255) )));
HXLINE( 334)		int colder = ::flixel::math::FlxMath_obj::wrap((oppositeHue + Threshold),0,350);
HXDLIN( 334)		HX_VARI( int,colder1) = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromHSB(( (Float)(colder) ),((::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))) - ::Math_obj::min((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))),::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))),(( (Float)(((this1 >> 24) & 255)) ) / ( (Float)(255) )));
HXLINE( 336)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("warmer",f2,95,03,ba),warmer1)
            			->setFixed(1,HX_("colder",91,61,7e,c6),colder1)
            			->setFixed(2,HX_("original",51,34,e8,e0),this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,getSplitComplementHarmony,return )

 ::Dynamic FlxColor_Impl__obj::getTriadicHarmony(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_346_getTriadicHarmony)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 346)
HXLINE( 347)		int triadic1 = ::flixel::math::FlxMath_obj::wrap((::Std_obj::_hx_int(::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(this1)) + 120),0,359);
HXDLIN( 347)		HX_VARI( int,triadic11) = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromHSB(( (Float)(triadic1) ),((::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))) - ::Math_obj::min((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))),::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))),(( (Float)(((this1 >> 24) & 255)) ) / ( (Float)(255) )));
HXLINE( 348)		int triadic2 = ::flixel::math::FlxMath_obj::wrap((::Std_obj::_hx_int(::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(triadic11)) + 120),0,359);
HXDLIN( 348)		HX_VARI( int,triadic21) = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromHSB(( (Float)(triadic2) ),((::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))) - ::Math_obj::min((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))),::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))),(( (Float)(((this1 >> 24) & 255)) ) / ( (Float)(255) )));
HXLINE( 350)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("color1",6e,c5,86,c6),this1)
            			->setFixed(1,HX_("color2",6f,c5,86,c6),triadic11)
            			->setFixed(2,HX_("color3",70,c5,86,c6),triadic21));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,getTriadicHarmony,return )

int FlxColor_Impl__obj::to24Bit(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_360_to24Bit)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 360)
HXDLIN( 360)		return (this1 & 16777215);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,to24Bit,return )

::String FlxColor_Impl__obj::toHexString(int this1,::hx::Null< bool >  __o_Alpha,::hx::Null< bool >  __o_Prefix){
            		bool Alpha = __o_Alpha.Default(true);
            		bool Prefix = __o_Prefix.Default(true);
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_372_toHexString)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(Alpha,"Alpha")
            	HX_STACK_ARG(Prefix,"Prefix")
HXLINE( 372)
HXDLIN( 372)		::String _hx_tmp;
HXDLIN( 372)		if (Prefix) {
HXDLIN( 372)			_hx_tmp = HX_("0x",48,2a,00,00);
            		}
            		else {
HXDLIN( 372)			_hx_tmp = HX_("",00,00,00,00);
            		}
HXDLIN( 372)		::String _hx_tmp1;
HXDLIN( 372)		if (Alpha) {
HXDLIN( 372)			_hx_tmp1 = ::StringTools_obj::hex(((this1 >> 24) & 255),2);
            		}
            		else {
HXDLIN( 372)			_hx_tmp1 = HX_("",00,00,00,00);
            		}
HXDLIN( 372)		::String _hx_tmp2 = ((_hx_tmp + _hx_tmp1) + ::StringTools_obj::hex(((this1 >> 16) & 255),2));
HXDLIN( 372)		::String _hx_tmp3 = (_hx_tmp2 + ::StringTools_obj::hex(((this1 >> 8) & 255),2));
HXDLIN( 372)		return (_hx_tmp3 + ::StringTools_obj::hex((this1 & 255),2));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxColor_Impl__obj,toHexString,return )

::String FlxColor_Impl__obj::toWebString(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_383_toWebString)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 383)
HXDLIN( 383)		::String _hx_tmp = (HX_("",00,00,00,00) + ::StringTools_obj::hex(((this1 >> 16) & 255),2));
HXDLIN( 383)		::String _hx_tmp1 = (_hx_tmp + ::StringTools_obj::hex(((this1 >> 8) & 255),2));
HXDLIN( 383)		return (HX_("#",23,00,00,00) + (_hx_tmp1 + ::StringTools_obj::hex((this1 & 255),2)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,toWebString,return )

::String FlxColor_Impl__obj::getColorInfo(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_392_getColorInfo)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 392)
HXLINE( 394)		::String result = HX_("0x",48,2a,00,00);
HXDLIN( 394)		::String result1 = ::StringTools_obj::hex(((this1 >> 24) & 255),2);
HXDLIN( 394)		::String result2 = ((result + result1) + ::StringTools_obj::hex(((this1 >> 16) & 255),2));
HXDLIN( 394)		::String result3 = (result2 + ::StringTools_obj::hex(((this1 >> 8) & 255),2));
HXDLIN( 394)		HX_VARI( ::String,result4) = ((result3 + ::StringTools_obj::hex((this1 & 255),2)) + HX_("\n",0a,00,00,00));
HXLINE( 396)		result4 = (result4 + ((((((((HX_("Alpha: ",64,15,67,7f) + ((this1 >> 24) & 255)) + HX_(" Red: ",f7,bd,55,45)) + ((this1 >> 16) & 255)) + HX_(" Green: ",e9,23,00,ae)) + ((this1 >> 8) & 255)) + HX_(" Blue: ",00,1c,26,13)) + (this1 & 255)) + HX_("\n",0a,00,00,00)));
HXLINE( 398)		::String result5 = ((HX_("Hue: ",3e,91,7c,c2) + ::flixel::math::FlxMath_obj::roundDecimal(::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(this1),2)) + HX_(" Saturation: ",38,1b,be,c1));
HXDLIN( 398)		::String result6 = ((result5 + ::flixel::math::FlxMath_obj::roundDecimal(((::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))) - ::Math_obj::min((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))),2)) + HX_(" Brightness: ",f7,92,6f,4f));
HXDLIN( 398)		::String result7 = ((result6 + ::flixel::math::FlxMath_obj::roundDecimal(::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))),2)) + HX_(" Lightness: ",13,68,ef,ba));
HXDLIN( 398)		result4 = (result4 + (result7 + ::flixel::math::FlxMath_obj::roundDecimal(((::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))) + ::Math_obj::min((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))) / ( (Float)(2) )),2)));
HXLINE( 401)		return result4;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,getColorInfo,return )

int FlxColor_Impl__obj::getDarkened(int this1,::hx::Null< Float >  __o_Factor){
            		Float Factor = __o_Factor.Default(((Float)0.2));
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_411_getDarkened)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(Factor,"Factor")
HXLINE( 411)
HXLINE( 412)		Float lowerBound;
HXDLIN( 412)		if ((Factor < 0)) {
HXLINE( 412)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE( 412)			lowerBound = Factor;
            		}
HXDLIN( 412)		if ((lowerBound > 1)) {
HXLINE( 412)			Factor = ( (Float)(1) );
            		}
            		else {
HXLINE( 412)			Factor = lowerBound;
            		}
HXLINE( 413)		HX_VARI( int,output) = this1;
HXLINE( 414)		{
HXLINE( 414)			Float Value = (((::Math_obj::max((( (Float)(((output >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((output >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((output & 255)) ) / ( (Float)(255) )))) + ::Math_obj::min((( (Float)(((output >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((output >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((output & 255)) ) / ( (Float)(255) ))))) / ( (Float)(2) )) * (( (Float)(1) ) - Factor));
HXDLIN( 414)			{
HXLINE( 414)				Float Hue = ::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(output);
HXDLIN( 414)				Float Alpha = (( (Float)(((output >> 24) & 255)) ) / ( (Float)(255) ));
HXDLIN( 414)				Float chroma = ((( (Float)(1) ) - ::Math_obj::abs(((( (Float)(2) ) * Value) - ( (Float)(1) )))) * ((::Math_obj::max((( (Float)(((output >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((output >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((output & 255)) ) / ( (Float)(255) )))) - ::Math_obj::min((( (Float)(((output >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((output >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((output & 255)) ) / ( (Float)(255) ))))) / ::Math_obj::max((( (Float)(((output >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((output >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((output & 255)) ) / ( (Float)(255) ))))));
HXDLIN( 414)				Float match = (Value - (chroma / ( (Float)(2) )));
HXDLIN( 414)				{
HXLINE( 414)					Float Hue1 = Hue;
HXDLIN( 414)					Float Chroma = chroma;
HXDLIN( 414)					Hue1 = ::hx::Mod(Hue1,360);
HXDLIN( 414)					Float hueD = (Hue1 / ( (Float)(60) ));
HXDLIN( 414)					Float mid = ((Chroma * (( (Float)(1) ) - ::Math_obj::abs((::hx::Mod(hueD,2) - ( (Float)(1) ))))) + match);
HXDLIN( 414)					Chroma = (Chroma + match);
HXDLIN( 414)					switch((int)(::Std_obj::_hx_int(hueD))){
            						case (int)0: {
HXLINE( 414)							{
HXLINE( 414)								int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 414)								output = (output & -16711681);
HXDLIN( 414)								int output1;
HXDLIN( 414)								if ((Value > 255)) {
HXLINE( 414)									output1 = 255;
            								}
            								else {
HXLINE( 414)									if ((Value < 0)) {
HXLINE( 414)										output1 = 0;
            									}
            									else {
HXLINE( 414)										output1 = Value;
            									}
            								}
HXDLIN( 414)								output = (output | (output1 << 16));
            							}
HXDLIN( 414)							{
HXLINE( 414)								int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 414)								output = (output & -65281);
HXDLIN( 414)								int output2;
HXDLIN( 414)								if ((Value1 > 255)) {
HXLINE( 414)									output2 = 255;
            								}
            								else {
HXLINE( 414)									if ((Value1 < 0)) {
HXLINE( 414)										output2 = 0;
            									}
            									else {
HXLINE( 414)										output2 = Value1;
            									}
            								}
HXDLIN( 414)								output = (output | (output2 << 8));
            							}
HXDLIN( 414)							{
HXLINE( 414)								int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 414)								output = (output & -256);
HXDLIN( 414)								int output3;
HXDLIN( 414)								if ((Value2 > 255)) {
HXLINE( 414)									output3 = 255;
            								}
            								else {
HXLINE( 414)									if ((Value2 < 0)) {
HXLINE( 414)										output3 = 0;
            									}
            									else {
HXLINE( 414)										output3 = Value2;
            									}
            								}
HXDLIN( 414)								output = (output | output3);
            							}
HXDLIN( 414)							{
HXLINE( 414)								int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 414)								output = (output & 16777215);
HXDLIN( 414)								int output4;
HXDLIN( 414)								if ((Value3 > 255)) {
HXLINE( 414)									output4 = 255;
            								}
            								else {
HXLINE( 414)									if ((Value3 < 0)) {
HXLINE( 414)										output4 = 0;
            									}
            									else {
HXLINE( 414)										output4 = Value3;
            									}
            								}
HXDLIN( 414)								output = (output | (output4 << 24));
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 414)							{
HXLINE( 414)								int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 414)								output = (output & -16711681);
HXDLIN( 414)								int output1;
HXDLIN( 414)								if ((Value > 255)) {
HXLINE( 414)									output1 = 255;
            								}
            								else {
HXLINE( 414)									if ((Value < 0)) {
HXLINE( 414)										output1 = 0;
            									}
            									else {
HXLINE( 414)										output1 = Value;
            									}
            								}
HXDLIN( 414)								output = (output | (output1 << 16));
            							}
HXDLIN( 414)							{
HXLINE( 414)								int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 414)								output = (output & -65281);
HXDLIN( 414)								int output2;
HXDLIN( 414)								if ((Value1 > 255)) {
HXLINE( 414)									output2 = 255;
            								}
            								else {
HXLINE( 414)									if ((Value1 < 0)) {
HXLINE( 414)										output2 = 0;
            									}
            									else {
HXLINE( 414)										output2 = Value1;
            									}
            								}
HXDLIN( 414)								output = (output | (output2 << 8));
            							}
HXDLIN( 414)							{
HXLINE( 414)								int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 414)								output = (output & -256);
HXDLIN( 414)								int output3;
HXDLIN( 414)								if ((Value2 > 255)) {
HXLINE( 414)									output3 = 255;
            								}
            								else {
HXLINE( 414)									if ((Value2 < 0)) {
HXLINE( 414)										output3 = 0;
            									}
            									else {
HXLINE( 414)										output3 = Value2;
            									}
            								}
HXDLIN( 414)								output = (output | output3);
            							}
HXDLIN( 414)							{
HXLINE( 414)								int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 414)								output = (output & 16777215);
HXDLIN( 414)								int output4;
HXDLIN( 414)								if ((Value3 > 255)) {
HXLINE( 414)									output4 = 255;
            								}
            								else {
HXLINE( 414)									if ((Value3 < 0)) {
HXLINE( 414)										output4 = 0;
            									}
            									else {
HXLINE( 414)										output4 = Value3;
            									}
            								}
HXDLIN( 414)								output = (output | (output4 << 24));
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 414)							{
HXLINE( 414)								int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 414)								output = (output & -16711681);
HXDLIN( 414)								int output1;
HXDLIN( 414)								if ((Value > 255)) {
HXLINE( 414)									output1 = 255;
            								}
            								else {
HXLINE( 414)									if ((Value < 0)) {
HXLINE( 414)										output1 = 0;
            									}
            									else {
HXLINE( 414)										output1 = Value;
            									}
            								}
HXDLIN( 414)								output = (output | (output1 << 16));
            							}
HXDLIN( 414)							{
HXLINE( 414)								int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 414)								output = (output & -65281);
HXDLIN( 414)								int output2;
HXDLIN( 414)								if ((Value1 > 255)) {
HXLINE( 414)									output2 = 255;
            								}
            								else {
HXLINE( 414)									if ((Value1 < 0)) {
HXLINE( 414)										output2 = 0;
            									}
            									else {
HXLINE( 414)										output2 = Value1;
            									}
            								}
HXDLIN( 414)								output = (output | (output2 << 8));
            							}
HXDLIN( 414)							{
HXLINE( 414)								int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 414)								output = (output & -256);
HXDLIN( 414)								int output3;
HXDLIN( 414)								if ((Value2 > 255)) {
HXLINE( 414)									output3 = 255;
            								}
            								else {
HXLINE( 414)									if ((Value2 < 0)) {
HXLINE( 414)										output3 = 0;
            									}
            									else {
HXLINE( 414)										output3 = Value2;
            									}
            								}
HXDLIN( 414)								output = (output | output3);
            							}
HXDLIN( 414)							{
HXLINE( 414)								int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 414)								output = (output & 16777215);
HXDLIN( 414)								int output4;
HXDLIN( 414)								if ((Value3 > 255)) {
HXLINE( 414)									output4 = 255;
            								}
            								else {
HXLINE( 414)									if ((Value3 < 0)) {
HXLINE( 414)										output4 = 0;
            									}
            									else {
HXLINE( 414)										output4 = Value3;
            									}
            								}
HXDLIN( 414)								output = (output | (output4 << 24));
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 414)							{
HXLINE( 414)								int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 414)								output = (output & -16711681);
HXDLIN( 414)								int output1;
HXDLIN( 414)								if ((Value > 255)) {
HXLINE( 414)									output1 = 255;
            								}
            								else {
HXLINE( 414)									if ((Value < 0)) {
HXLINE( 414)										output1 = 0;
            									}
            									else {
HXLINE( 414)										output1 = Value;
            									}
            								}
HXDLIN( 414)								output = (output | (output1 << 16));
            							}
HXDLIN( 414)							{
HXLINE( 414)								int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 414)								output = (output & -65281);
HXDLIN( 414)								int output2;
HXDLIN( 414)								if ((Value1 > 255)) {
HXLINE( 414)									output2 = 255;
            								}
            								else {
HXLINE( 414)									if ((Value1 < 0)) {
HXLINE( 414)										output2 = 0;
            									}
            									else {
HXLINE( 414)										output2 = Value1;
            									}
            								}
HXDLIN( 414)								output = (output | (output2 << 8));
            							}
HXDLIN( 414)							{
HXLINE( 414)								int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 414)								output = (output & -256);
HXDLIN( 414)								int output3;
HXDLIN( 414)								if ((Value2 > 255)) {
HXLINE( 414)									output3 = 255;
            								}
            								else {
HXLINE( 414)									if ((Value2 < 0)) {
HXLINE( 414)										output3 = 0;
            									}
            									else {
HXLINE( 414)										output3 = Value2;
            									}
            								}
HXDLIN( 414)								output = (output | output3);
            							}
HXDLIN( 414)							{
HXLINE( 414)								int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 414)								output = (output & 16777215);
HXDLIN( 414)								int output4;
HXDLIN( 414)								if ((Value3 > 255)) {
HXLINE( 414)									output4 = 255;
            								}
            								else {
HXLINE( 414)									if ((Value3 < 0)) {
HXLINE( 414)										output4 = 0;
            									}
            									else {
HXLINE( 414)										output4 = Value3;
            									}
            								}
HXDLIN( 414)								output = (output | (output4 << 24));
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 414)							{
HXLINE( 414)								int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 414)								output = (output & -16711681);
HXDLIN( 414)								int output1;
HXDLIN( 414)								if ((Value > 255)) {
HXLINE( 414)									output1 = 255;
            								}
            								else {
HXLINE( 414)									if ((Value < 0)) {
HXLINE( 414)										output1 = 0;
            									}
            									else {
HXLINE( 414)										output1 = Value;
            									}
            								}
HXDLIN( 414)								output = (output | (output1 << 16));
            							}
HXDLIN( 414)							{
HXLINE( 414)								int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 414)								output = (output & -65281);
HXDLIN( 414)								int output2;
HXDLIN( 414)								if ((Value1 > 255)) {
HXLINE( 414)									output2 = 255;
            								}
            								else {
HXLINE( 414)									if ((Value1 < 0)) {
HXLINE( 414)										output2 = 0;
            									}
            									else {
HXLINE( 414)										output2 = Value1;
            									}
            								}
HXDLIN( 414)								output = (output | (output2 << 8));
            							}
HXDLIN( 414)							{
HXLINE( 414)								int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 414)								output = (output & -256);
HXDLIN( 414)								int output3;
HXDLIN( 414)								if ((Value2 > 255)) {
HXLINE( 414)									output3 = 255;
            								}
            								else {
HXLINE( 414)									if ((Value2 < 0)) {
HXLINE( 414)										output3 = 0;
            									}
            									else {
HXLINE( 414)										output3 = Value2;
            									}
            								}
HXDLIN( 414)								output = (output | output3);
            							}
HXDLIN( 414)							{
HXLINE( 414)								int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 414)								output = (output & 16777215);
HXDLIN( 414)								int output4;
HXDLIN( 414)								if ((Value3 > 255)) {
HXLINE( 414)									output4 = 255;
            								}
            								else {
HXLINE( 414)									if ((Value3 < 0)) {
HXLINE( 414)										output4 = 0;
            									}
            									else {
HXLINE( 414)										output4 = Value3;
            									}
            								}
HXDLIN( 414)								output = (output | (output4 << 24));
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 414)							{
HXLINE( 414)								int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 414)								output = (output & -16711681);
HXDLIN( 414)								int output1;
HXDLIN( 414)								if ((Value > 255)) {
HXLINE( 414)									output1 = 255;
            								}
            								else {
HXLINE( 414)									if ((Value < 0)) {
HXLINE( 414)										output1 = 0;
            									}
            									else {
HXLINE( 414)										output1 = Value;
            									}
            								}
HXDLIN( 414)								output = (output | (output1 << 16));
            							}
HXDLIN( 414)							{
HXLINE( 414)								int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 414)								output = (output & -65281);
HXDLIN( 414)								int output2;
HXDLIN( 414)								if ((Value1 > 255)) {
HXLINE( 414)									output2 = 255;
            								}
            								else {
HXLINE( 414)									if ((Value1 < 0)) {
HXLINE( 414)										output2 = 0;
            									}
            									else {
HXLINE( 414)										output2 = Value1;
            									}
            								}
HXDLIN( 414)								output = (output | (output2 << 8));
            							}
HXDLIN( 414)							{
HXLINE( 414)								int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 414)								output = (output & -256);
HXDLIN( 414)								int output3;
HXDLIN( 414)								if ((Value2 > 255)) {
HXLINE( 414)									output3 = 255;
            								}
            								else {
HXLINE( 414)									if ((Value2 < 0)) {
HXLINE( 414)										output3 = 0;
            									}
            									else {
HXLINE( 414)										output3 = Value2;
            									}
            								}
HXDLIN( 414)								output = (output | output3);
            							}
HXDLIN( 414)							{
HXLINE( 414)								int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 414)								output = (output & 16777215);
HXDLIN( 414)								int output4;
HXDLIN( 414)								if ((Value3 > 255)) {
HXLINE( 414)									output4 = 255;
            								}
            								else {
HXLINE( 414)									if ((Value3 < 0)) {
HXLINE( 414)										output4 = 0;
            									}
            									else {
HXLINE( 414)										output4 = Value3;
            									}
            								}
HXDLIN( 414)								output = (output | (output4 << 24));
            							}
            						}
            						break;
            					}
            				}
            			}
            		}
HXLINE( 415)		return output;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,getDarkened,return )

int FlxColor_Impl__obj::getLightened(int this1,::hx::Null< Float >  __o_Factor){
            		Float Factor = __o_Factor.Default(((Float)0.2));
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_425_getLightened)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(Factor,"Factor")
HXLINE( 425)
HXLINE( 426)		Float lowerBound;
HXDLIN( 426)		if ((Factor < 0)) {
HXLINE( 426)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE( 426)			lowerBound = Factor;
            		}
HXDLIN( 426)		if ((lowerBound > 1)) {
HXLINE( 426)			Factor = ( (Float)(1) );
            		}
            		else {
HXLINE( 426)			Factor = lowerBound;
            		}
HXLINE( 427)		HX_VARI( int,output) = this1;
HXLINE( 428)		{
HXLINE( 428)			Float Value = (((::Math_obj::max((( (Float)(((output >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((output >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((output & 255)) ) / ( (Float)(255) )))) + ::Math_obj::min((( (Float)(((output >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((output >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((output & 255)) ) / ( (Float)(255) ))))) / ( (Float)(2) )) + ((( (Float)(1) ) - ((::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))) + ::Math_obj::min((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))) / ( (Float)(2) ))) * Factor));
HXDLIN( 428)			{
HXLINE( 428)				Float Hue = ::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(output);
HXDLIN( 428)				Float Alpha = (( (Float)(((output >> 24) & 255)) ) / ( (Float)(255) ));
HXDLIN( 428)				Float chroma = ((( (Float)(1) ) - ::Math_obj::abs(((( (Float)(2) ) * Value) - ( (Float)(1) )))) * ((::Math_obj::max((( (Float)(((output >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((output >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((output & 255)) ) / ( (Float)(255) )))) - ::Math_obj::min((( (Float)(((output >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((output >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((output & 255)) ) / ( (Float)(255) ))))) / ::Math_obj::max((( (Float)(((output >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((output >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((output & 255)) ) / ( (Float)(255) ))))));
HXDLIN( 428)				Float match = (Value - (chroma / ( (Float)(2) )));
HXDLIN( 428)				{
HXLINE( 428)					Float Hue1 = Hue;
HXDLIN( 428)					Float Chroma = chroma;
HXDLIN( 428)					Hue1 = ::hx::Mod(Hue1,360);
HXDLIN( 428)					Float hueD = (Hue1 / ( (Float)(60) ));
HXDLIN( 428)					Float mid = ((Chroma * (( (Float)(1) ) - ::Math_obj::abs((::hx::Mod(hueD,2) - ( (Float)(1) ))))) + match);
HXDLIN( 428)					Chroma = (Chroma + match);
HXDLIN( 428)					switch((int)(::Std_obj::_hx_int(hueD))){
            						case (int)0: {
HXLINE( 428)							{
HXLINE( 428)								int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 428)								output = (output & -16711681);
HXDLIN( 428)								int output1;
HXDLIN( 428)								if ((Value > 255)) {
HXLINE( 428)									output1 = 255;
            								}
            								else {
HXLINE( 428)									if ((Value < 0)) {
HXLINE( 428)										output1 = 0;
            									}
            									else {
HXLINE( 428)										output1 = Value;
            									}
            								}
HXDLIN( 428)								output = (output | (output1 << 16));
            							}
HXDLIN( 428)							{
HXLINE( 428)								int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 428)								output = (output & -65281);
HXDLIN( 428)								int output2;
HXDLIN( 428)								if ((Value1 > 255)) {
HXLINE( 428)									output2 = 255;
            								}
            								else {
HXLINE( 428)									if ((Value1 < 0)) {
HXLINE( 428)										output2 = 0;
            									}
            									else {
HXLINE( 428)										output2 = Value1;
            									}
            								}
HXDLIN( 428)								output = (output | (output2 << 8));
            							}
HXDLIN( 428)							{
HXLINE( 428)								int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 428)								output = (output & -256);
HXDLIN( 428)								int output3;
HXDLIN( 428)								if ((Value2 > 255)) {
HXLINE( 428)									output3 = 255;
            								}
            								else {
HXLINE( 428)									if ((Value2 < 0)) {
HXLINE( 428)										output3 = 0;
            									}
            									else {
HXLINE( 428)										output3 = Value2;
            									}
            								}
HXDLIN( 428)								output = (output | output3);
            							}
HXDLIN( 428)							{
HXLINE( 428)								int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 428)								output = (output & 16777215);
HXDLIN( 428)								int output4;
HXDLIN( 428)								if ((Value3 > 255)) {
HXLINE( 428)									output4 = 255;
            								}
            								else {
HXLINE( 428)									if ((Value3 < 0)) {
HXLINE( 428)										output4 = 0;
            									}
            									else {
HXLINE( 428)										output4 = Value3;
            									}
            								}
HXDLIN( 428)								output = (output | (output4 << 24));
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 428)							{
HXLINE( 428)								int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 428)								output = (output & -16711681);
HXDLIN( 428)								int output1;
HXDLIN( 428)								if ((Value > 255)) {
HXLINE( 428)									output1 = 255;
            								}
            								else {
HXLINE( 428)									if ((Value < 0)) {
HXLINE( 428)										output1 = 0;
            									}
            									else {
HXLINE( 428)										output1 = Value;
            									}
            								}
HXDLIN( 428)								output = (output | (output1 << 16));
            							}
HXDLIN( 428)							{
HXLINE( 428)								int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 428)								output = (output & -65281);
HXDLIN( 428)								int output2;
HXDLIN( 428)								if ((Value1 > 255)) {
HXLINE( 428)									output2 = 255;
            								}
            								else {
HXLINE( 428)									if ((Value1 < 0)) {
HXLINE( 428)										output2 = 0;
            									}
            									else {
HXLINE( 428)										output2 = Value1;
            									}
            								}
HXDLIN( 428)								output = (output | (output2 << 8));
            							}
HXDLIN( 428)							{
HXLINE( 428)								int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 428)								output = (output & -256);
HXDLIN( 428)								int output3;
HXDLIN( 428)								if ((Value2 > 255)) {
HXLINE( 428)									output3 = 255;
            								}
            								else {
HXLINE( 428)									if ((Value2 < 0)) {
HXLINE( 428)										output3 = 0;
            									}
            									else {
HXLINE( 428)										output3 = Value2;
            									}
            								}
HXDLIN( 428)								output = (output | output3);
            							}
HXDLIN( 428)							{
HXLINE( 428)								int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 428)								output = (output & 16777215);
HXDLIN( 428)								int output4;
HXDLIN( 428)								if ((Value3 > 255)) {
HXLINE( 428)									output4 = 255;
            								}
            								else {
HXLINE( 428)									if ((Value3 < 0)) {
HXLINE( 428)										output4 = 0;
            									}
            									else {
HXLINE( 428)										output4 = Value3;
            									}
            								}
HXDLIN( 428)								output = (output | (output4 << 24));
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 428)							{
HXLINE( 428)								int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 428)								output = (output & -16711681);
HXDLIN( 428)								int output1;
HXDLIN( 428)								if ((Value > 255)) {
HXLINE( 428)									output1 = 255;
            								}
            								else {
HXLINE( 428)									if ((Value < 0)) {
HXLINE( 428)										output1 = 0;
            									}
            									else {
HXLINE( 428)										output1 = Value;
            									}
            								}
HXDLIN( 428)								output = (output | (output1 << 16));
            							}
HXDLIN( 428)							{
HXLINE( 428)								int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 428)								output = (output & -65281);
HXDLIN( 428)								int output2;
HXDLIN( 428)								if ((Value1 > 255)) {
HXLINE( 428)									output2 = 255;
            								}
            								else {
HXLINE( 428)									if ((Value1 < 0)) {
HXLINE( 428)										output2 = 0;
            									}
            									else {
HXLINE( 428)										output2 = Value1;
            									}
            								}
HXDLIN( 428)								output = (output | (output2 << 8));
            							}
HXDLIN( 428)							{
HXLINE( 428)								int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 428)								output = (output & -256);
HXDLIN( 428)								int output3;
HXDLIN( 428)								if ((Value2 > 255)) {
HXLINE( 428)									output3 = 255;
            								}
            								else {
HXLINE( 428)									if ((Value2 < 0)) {
HXLINE( 428)										output3 = 0;
            									}
            									else {
HXLINE( 428)										output3 = Value2;
            									}
            								}
HXDLIN( 428)								output = (output | output3);
            							}
HXDLIN( 428)							{
HXLINE( 428)								int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 428)								output = (output & 16777215);
HXDLIN( 428)								int output4;
HXDLIN( 428)								if ((Value3 > 255)) {
HXLINE( 428)									output4 = 255;
            								}
            								else {
HXLINE( 428)									if ((Value3 < 0)) {
HXLINE( 428)										output4 = 0;
            									}
            									else {
HXLINE( 428)										output4 = Value3;
            									}
            								}
HXDLIN( 428)								output = (output | (output4 << 24));
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 428)							{
HXLINE( 428)								int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 428)								output = (output & -16711681);
HXDLIN( 428)								int output1;
HXDLIN( 428)								if ((Value > 255)) {
HXLINE( 428)									output1 = 255;
            								}
            								else {
HXLINE( 428)									if ((Value < 0)) {
HXLINE( 428)										output1 = 0;
            									}
            									else {
HXLINE( 428)										output1 = Value;
            									}
            								}
HXDLIN( 428)								output = (output | (output1 << 16));
            							}
HXDLIN( 428)							{
HXLINE( 428)								int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 428)								output = (output & -65281);
HXDLIN( 428)								int output2;
HXDLIN( 428)								if ((Value1 > 255)) {
HXLINE( 428)									output2 = 255;
            								}
            								else {
HXLINE( 428)									if ((Value1 < 0)) {
HXLINE( 428)										output2 = 0;
            									}
            									else {
HXLINE( 428)										output2 = Value1;
            									}
            								}
HXDLIN( 428)								output = (output | (output2 << 8));
            							}
HXDLIN( 428)							{
HXLINE( 428)								int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 428)								output = (output & -256);
HXDLIN( 428)								int output3;
HXDLIN( 428)								if ((Value2 > 255)) {
HXLINE( 428)									output3 = 255;
            								}
            								else {
HXLINE( 428)									if ((Value2 < 0)) {
HXLINE( 428)										output3 = 0;
            									}
            									else {
HXLINE( 428)										output3 = Value2;
            									}
            								}
HXDLIN( 428)								output = (output | output3);
            							}
HXDLIN( 428)							{
HXLINE( 428)								int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 428)								output = (output & 16777215);
HXDLIN( 428)								int output4;
HXDLIN( 428)								if ((Value3 > 255)) {
HXLINE( 428)									output4 = 255;
            								}
            								else {
HXLINE( 428)									if ((Value3 < 0)) {
HXLINE( 428)										output4 = 0;
            									}
            									else {
HXLINE( 428)										output4 = Value3;
            									}
            								}
HXDLIN( 428)								output = (output | (output4 << 24));
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 428)							{
HXLINE( 428)								int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 428)								output = (output & -16711681);
HXDLIN( 428)								int output1;
HXDLIN( 428)								if ((Value > 255)) {
HXLINE( 428)									output1 = 255;
            								}
            								else {
HXLINE( 428)									if ((Value < 0)) {
HXLINE( 428)										output1 = 0;
            									}
            									else {
HXLINE( 428)										output1 = Value;
            									}
            								}
HXDLIN( 428)								output = (output | (output1 << 16));
            							}
HXDLIN( 428)							{
HXLINE( 428)								int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 428)								output = (output & -65281);
HXDLIN( 428)								int output2;
HXDLIN( 428)								if ((Value1 > 255)) {
HXLINE( 428)									output2 = 255;
            								}
            								else {
HXLINE( 428)									if ((Value1 < 0)) {
HXLINE( 428)										output2 = 0;
            									}
            									else {
HXLINE( 428)										output2 = Value1;
            									}
            								}
HXDLIN( 428)								output = (output | (output2 << 8));
            							}
HXDLIN( 428)							{
HXLINE( 428)								int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 428)								output = (output & -256);
HXDLIN( 428)								int output3;
HXDLIN( 428)								if ((Value2 > 255)) {
HXLINE( 428)									output3 = 255;
            								}
            								else {
HXLINE( 428)									if ((Value2 < 0)) {
HXLINE( 428)										output3 = 0;
            									}
            									else {
HXLINE( 428)										output3 = Value2;
            									}
            								}
HXDLIN( 428)								output = (output | output3);
            							}
HXDLIN( 428)							{
HXLINE( 428)								int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 428)								output = (output & 16777215);
HXDLIN( 428)								int output4;
HXDLIN( 428)								if ((Value3 > 255)) {
HXLINE( 428)									output4 = 255;
            								}
            								else {
HXLINE( 428)									if ((Value3 < 0)) {
HXLINE( 428)										output4 = 0;
            									}
            									else {
HXLINE( 428)										output4 = Value3;
            									}
            								}
HXDLIN( 428)								output = (output | (output4 << 24));
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 428)							{
HXLINE( 428)								int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 428)								output = (output & -16711681);
HXDLIN( 428)								int output1;
HXDLIN( 428)								if ((Value > 255)) {
HXLINE( 428)									output1 = 255;
            								}
            								else {
HXLINE( 428)									if ((Value < 0)) {
HXLINE( 428)										output1 = 0;
            									}
            									else {
HXLINE( 428)										output1 = Value;
            									}
            								}
HXDLIN( 428)								output = (output | (output1 << 16));
            							}
HXDLIN( 428)							{
HXLINE( 428)								int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 428)								output = (output & -65281);
HXDLIN( 428)								int output2;
HXDLIN( 428)								if ((Value1 > 255)) {
HXLINE( 428)									output2 = 255;
            								}
            								else {
HXLINE( 428)									if ((Value1 < 0)) {
HXLINE( 428)										output2 = 0;
            									}
            									else {
HXLINE( 428)										output2 = Value1;
            									}
            								}
HXDLIN( 428)								output = (output | (output2 << 8));
            							}
HXDLIN( 428)							{
HXLINE( 428)								int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 428)								output = (output & -256);
HXDLIN( 428)								int output3;
HXDLIN( 428)								if ((Value2 > 255)) {
HXLINE( 428)									output3 = 255;
            								}
            								else {
HXLINE( 428)									if ((Value2 < 0)) {
HXLINE( 428)										output3 = 0;
            									}
            									else {
HXLINE( 428)										output3 = Value2;
            									}
            								}
HXDLIN( 428)								output = (output | output3);
            							}
HXDLIN( 428)							{
HXLINE( 428)								int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 428)								output = (output & 16777215);
HXDLIN( 428)								int output4;
HXDLIN( 428)								if ((Value3 > 255)) {
HXLINE( 428)									output4 = 255;
            								}
            								else {
HXLINE( 428)									if ((Value3 < 0)) {
HXLINE( 428)										output4 = 0;
            									}
            									else {
HXLINE( 428)										output4 = Value3;
            									}
            								}
HXDLIN( 428)								output = (output | (output4 << 24));
            							}
            						}
            						break;
            					}
            				}
            			}
            		}
HXLINE( 429)		return output;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,getLightened,return )

int FlxColor_Impl__obj::getInverted(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_438_getInverted)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 438)
HXLINE( 439)		HX_VARI( int,oldAlpha) = ((this1 >> 24) & 255);
HXLINE( 440)		int lhs = -1;
HXDLIN( 440)		int Red = (((lhs >> 16) & 255) - ((this1 >> 16) & 255));
HXDLIN( 440)		int Green = (((lhs >> 8) & 255) - ((this1 >> 8) & 255));
HXDLIN( 440)		int Blue = ((lhs & 255) - (this1 & 255));
HXDLIN( 440)		int Alpha = 255;
HXDLIN( 440)		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN( 440)		{
HXLINE( 440)			color = (color & -16711681);
HXDLIN( 440)			int color1;
HXDLIN( 440)			if ((Red > 255)) {
HXLINE( 440)				color1 = 255;
            			}
            			else {
HXLINE( 440)				if ((Red < 0)) {
HXLINE( 440)					color1 = 0;
            				}
            				else {
HXLINE( 440)					color1 = Red;
            				}
            			}
HXDLIN( 440)			color = (color | (color1 << 16));
            		}
HXDLIN( 440)		{
HXLINE( 440)			color = (color & -65281);
HXDLIN( 440)			int color2;
HXDLIN( 440)			if ((Green > 255)) {
HXLINE( 440)				color2 = 255;
            			}
            			else {
HXLINE( 440)				if ((Green < 0)) {
HXLINE( 440)					color2 = 0;
            				}
            				else {
HXLINE( 440)					color2 = Green;
            				}
            			}
HXDLIN( 440)			color = (color | (color2 << 8));
            		}
HXDLIN( 440)		{
HXLINE( 440)			color = (color & -256);
HXDLIN( 440)			int color3;
HXDLIN( 440)			if ((Blue > 255)) {
HXLINE( 440)				color3 = 255;
            			}
            			else {
HXLINE( 440)				if ((Blue < 0)) {
HXLINE( 440)					color3 = 0;
            				}
            				else {
HXLINE( 440)					color3 = Blue;
            				}
            			}
HXDLIN( 440)			color = (color | color3);
            		}
HXDLIN( 440)		{
HXLINE( 440)			color = (color & 16777215);
HXDLIN( 440)			int color4;
HXDLIN( 440)			if ((Alpha > 255)) {
HXLINE( 440)				color4 = 255;
            			}
            			else {
HXLINE( 440)				if ((Alpha < 0)) {
HXLINE( 440)					color4 = 0;
            				}
            				else {
HXLINE( 440)					color4 = Alpha;
            				}
            			}
HXDLIN( 440)			color = (color | (color4 << 24));
            		}
HXDLIN( 440)		HX_VARI( int,output) = color;
HXLINE( 441)		{
HXLINE( 441)			output = (output & 16777215);
HXDLIN( 441)			int output1;
HXDLIN( 441)			if ((oldAlpha > 255)) {
HXLINE( 441)				output1 = 255;
            			}
            			else {
HXLINE( 441)				if ((oldAlpha < 0)) {
HXLINE( 441)					output1 = 0;
            				}
            				else {
HXLINE( 441)					output1 = oldAlpha;
            				}
            			}
HXDLIN( 441)			output = (output | (output1 << 24));
            		}
HXLINE( 442)		return output;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,getInverted,return )

int FlxColor_Impl__obj::setRGB(int this1,int Red,int Green,int Blue,::hx::Null< int >  __o_Alpha){
            		int Alpha = __o_Alpha.Default(255);
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_455_setRGB)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(Red,"Red")
            	HX_STACK_ARG(Green,"Green")
            	HX_STACK_ARG(Blue,"Blue")
            	HX_STACK_ARG(Alpha,"Alpha")
HXLINE( 455)
HXLINE( 456)		{
HXLINE( 456)			this1 = (this1 & -16711681);
HXDLIN( 456)			int this2;
HXDLIN( 456)			if ((Red > 255)) {
HXLINE( 456)				this2 = 255;
            			}
            			else {
HXLINE( 456)				if ((Red < 0)) {
HXLINE( 456)					this2 = 0;
            				}
            				else {
HXLINE( 456)					this2 = Red;
            				}
            			}
HXDLIN( 456)			this1 = (this1 | (this2 << 16));
            		}
HXLINE( 457)		{
HXLINE( 457)			this1 = (this1 & -65281);
HXDLIN( 457)			int this3;
HXDLIN( 457)			if ((Green > 255)) {
HXLINE( 457)				this3 = 255;
            			}
            			else {
HXLINE( 457)				if ((Green < 0)) {
HXLINE( 457)					this3 = 0;
            				}
            				else {
HXLINE( 457)					this3 = Green;
            				}
            			}
HXDLIN( 457)			this1 = (this1 | (this3 << 8));
            		}
HXLINE( 458)		{
HXLINE( 458)			this1 = (this1 & -256);
HXDLIN( 458)			int this4;
HXDLIN( 458)			if ((Blue > 255)) {
HXLINE( 458)				this4 = 255;
            			}
            			else {
HXLINE( 458)				if ((Blue < 0)) {
HXLINE( 458)					this4 = 0;
            				}
            				else {
HXLINE( 458)					this4 = Blue;
            				}
            			}
HXDLIN( 458)			this1 = (this1 | this4);
            		}
HXLINE( 459)		{
HXLINE( 459)			this1 = (this1 & 16777215);
HXDLIN( 459)			int this5;
HXDLIN( 459)			if ((Alpha > 255)) {
HXLINE( 459)				this5 = 255;
            			}
            			else {
HXLINE( 459)				if ((Alpha < 0)) {
HXLINE( 459)					this5 = 0;
            				}
            				else {
HXLINE( 459)					this5 = Alpha;
            				}
            			}
HXDLIN( 459)			this1 = (this1 | (this5 << 24));
            		}
HXLINE( 460)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxColor_Impl__obj,setRGB,return )

int FlxColor_Impl__obj::setRGBFloat(int this1,Float Red,Float Green,Float Blue,::hx::Null< Float >  __o_Alpha){
            		Float Alpha = __o_Alpha.Default(1);
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_473_setRGBFloat)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(Red,"Red")
            	HX_STACK_ARG(Green,"Green")
            	HX_STACK_ARG(Blue,"Blue")
            	HX_STACK_ARG(Alpha,"Alpha")
HXLINE( 473)
HXLINE( 474)		{
HXLINE( 474)			int Value = ::Math_obj::round((Red * ( (Float)(255) )));
HXDLIN( 474)			this1 = (this1 & -16711681);
HXDLIN( 474)			int this2;
HXDLIN( 474)			if ((Value > 255)) {
HXLINE( 474)				this2 = 255;
            			}
            			else {
HXLINE( 474)				if ((Value < 0)) {
HXLINE( 474)					this2 = 0;
            				}
            				else {
HXLINE( 474)					this2 = Value;
            				}
            			}
HXDLIN( 474)			this1 = (this1 | (this2 << 16));
            		}
HXLINE( 475)		{
HXLINE( 475)			int Value1 = ::Math_obj::round((Green * ( (Float)(255) )));
HXDLIN( 475)			this1 = (this1 & -65281);
HXDLIN( 475)			int this3;
HXDLIN( 475)			if ((Value1 > 255)) {
HXLINE( 475)				this3 = 255;
            			}
            			else {
HXLINE( 475)				if ((Value1 < 0)) {
HXLINE( 475)					this3 = 0;
            				}
            				else {
HXLINE( 475)					this3 = Value1;
            				}
            			}
HXDLIN( 475)			this1 = (this1 | (this3 << 8));
            		}
HXLINE( 476)		{
HXLINE( 476)			int Value2 = ::Math_obj::round((Blue * ( (Float)(255) )));
HXDLIN( 476)			this1 = (this1 & -256);
HXDLIN( 476)			int this4;
HXDLIN( 476)			if ((Value2 > 255)) {
HXLINE( 476)				this4 = 255;
            			}
            			else {
HXLINE( 476)				if ((Value2 < 0)) {
HXLINE( 476)					this4 = 0;
            				}
            				else {
HXLINE( 476)					this4 = Value2;
            				}
            			}
HXDLIN( 476)			this1 = (this1 | this4);
            		}
HXLINE( 477)		{
HXLINE( 477)			int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 477)			this1 = (this1 & 16777215);
HXDLIN( 477)			int this5;
HXDLIN( 477)			if ((Value3 > 255)) {
HXLINE( 477)				this5 = 255;
            			}
            			else {
HXLINE( 477)				if ((Value3 < 0)) {
HXLINE( 477)					this5 = 0;
            				}
            				else {
HXLINE( 477)					this5 = Value3;
            				}
            			}
HXDLIN( 477)			this1 = (this1 | (this5 << 24));
            		}
HXLINE( 478)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxColor_Impl__obj,setRGBFloat,return )

int FlxColor_Impl__obj::setCMYK(int this1,Float Cyan,Float Magenta,Float Yellow,Float Black,::hx::Null< Float >  __o_Alpha){
            		Float Alpha = __o_Alpha.Default(1);
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_492_setCMYK)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(Cyan,"Cyan")
            	HX_STACK_ARG(Magenta,"Magenta")
            	HX_STACK_ARG(Yellow,"Yellow")
            	HX_STACK_ARG(Black,"Black")
            	HX_STACK_ARG(Alpha,"Alpha")
HXLINE( 492)
HXLINE( 493)		{
HXLINE( 493)			Float Value = ((( (Float)(1) ) - Cyan) * (( (Float)(1) ) - Black));
HXDLIN( 493)			{
HXLINE( 493)				int Value1 = ::Math_obj::round((Value * ( (Float)(255) )));
HXDLIN( 493)				this1 = (this1 & -16711681);
HXDLIN( 493)				int this2;
HXDLIN( 493)				if ((Value1 > 255)) {
HXLINE( 493)					this2 = 255;
            				}
            				else {
HXLINE( 493)					if ((Value1 < 0)) {
HXLINE( 493)						this2 = 0;
            					}
            					else {
HXLINE( 493)						this2 = Value1;
            					}
            				}
HXDLIN( 493)				this1 = (this1 | (this2 << 16));
            			}
            		}
HXLINE( 494)		{
HXLINE( 494)			Float Value2 = ((( (Float)(1) ) - Magenta) * (( (Float)(1) ) - Black));
HXDLIN( 494)			{
HXLINE( 494)				int Value3 = ::Math_obj::round((Value2 * ( (Float)(255) )));
HXDLIN( 494)				this1 = (this1 & -65281);
HXDLIN( 494)				int this3;
HXDLIN( 494)				if ((Value3 > 255)) {
HXLINE( 494)					this3 = 255;
            				}
            				else {
HXLINE( 494)					if ((Value3 < 0)) {
HXLINE( 494)						this3 = 0;
            					}
            					else {
HXLINE( 494)						this3 = Value3;
            					}
            				}
HXDLIN( 494)				this1 = (this1 | (this3 << 8));
            			}
            		}
HXLINE( 495)		{
HXLINE( 495)			Float Value4 = ((( (Float)(1) ) - Yellow) * (( (Float)(1) ) - Black));
HXDLIN( 495)			{
HXLINE( 495)				int Value5 = ::Math_obj::round((Value4 * ( (Float)(255) )));
HXDLIN( 495)				this1 = (this1 & -256);
HXDLIN( 495)				int this4;
HXDLIN( 495)				if ((Value5 > 255)) {
HXLINE( 495)					this4 = 255;
            				}
            				else {
HXLINE( 495)					if ((Value5 < 0)) {
HXLINE( 495)						this4 = 0;
            					}
            					else {
HXLINE( 495)						this4 = Value5;
            					}
            				}
HXDLIN( 495)				this1 = (this1 | this4);
            			}
            		}
HXLINE( 496)		{
HXLINE( 496)			int Value6 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 496)			this1 = (this1 & 16777215);
HXDLIN( 496)			int this5;
HXDLIN( 496)			if ((Value6 > 255)) {
HXLINE( 496)				this5 = 255;
            			}
            			else {
HXLINE( 496)				if ((Value6 < 0)) {
HXLINE( 496)					this5 = 0;
            				}
            				else {
HXLINE( 496)					this5 = Value6;
            				}
            			}
HXDLIN( 496)			this1 = (this1 | (this5 << 24));
            		}
HXLINE( 497)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxColor_Impl__obj,setCMYK,return )

int FlxColor_Impl__obj::setHSB(int this1,Float Hue,Float Saturation,Float Brightness,Float Alpha){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_510_setHSB)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(Hue,"Hue")
            	HX_STACK_ARG(Saturation,"Saturation")
            	HX_STACK_ARG(Brightness,"Brightness")
            	HX_STACK_ARG(Alpha,"Alpha")
HXLINE( 510)
HXLINE( 511)		HX_VARI( Float,chroma) = (Brightness * Saturation);
HXLINE( 512)		HX_VARI( Float,match) = (Brightness - chroma);
HXLINE( 513)		Float Hue1 = Hue;
HXDLIN( 513)		Float Chroma = chroma;
HXDLIN( 513)		Hue1 = ::hx::Mod(Hue1,360);
HXDLIN( 513)		Float hueD = (Hue1 / ( (Float)(60) ));
HXDLIN( 513)		Float mid = ((Chroma * (( (Float)(1) ) - ::Math_obj::abs((::hx::Mod(hueD,2) - ( (Float)(1) ))))) + match);
HXDLIN( 513)		Chroma = (Chroma + match);
HXDLIN( 513)		switch((int)(::Std_obj::_hx_int(hueD))){
            			case (int)0: {
HXLINE( 513)				{
HXLINE( 513)					int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 513)					this1 = (this1 & -16711681);
HXDLIN( 513)					int this2;
HXDLIN( 513)					if ((Value > 255)) {
HXLINE( 513)						this2 = 255;
            					}
            					else {
HXLINE( 513)						if ((Value < 0)) {
HXLINE( 513)							this2 = 0;
            						}
            						else {
HXLINE( 513)							this2 = Value;
            						}
            					}
HXDLIN( 513)					this1 = (this1 | (this2 << 16));
            				}
HXDLIN( 513)				{
HXLINE( 513)					int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 513)					this1 = (this1 & -65281);
HXDLIN( 513)					int this3;
HXDLIN( 513)					if ((Value1 > 255)) {
HXLINE( 513)						this3 = 255;
            					}
            					else {
HXLINE( 513)						if ((Value1 < 0)) {
HXLINE( 513)							this3 = 0;
            						}
            						else {
HXLINE( 513)							this3 = Value1;
            						}
            					}
HXDLIN( 513)					this1 = (this1 | (this3 << 8));
            				}
HXDLIN( 513)				{
HXLINE( 513)					int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 513)					this1 = (this1 & -256);
HXDLIN( 513)					int this4;
HXDLIN( 513)					if ((Value2 > 255)) {
HXLINE( 513)						this4 = 255;
            					}
            					else {
HXLINE( 513)						if ((Value2 < 0)) {
HXLINE( 513)							this4 = 0;
            						}
            						else {
HXLINE( 513)							this4 = Value2;
            						}
            					}
HXDLIN( 513)					this1 = (this1 | this4);
            				}
HXDLIN( 513)				{
HXLINE( 513)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 513)					this1 = (this1 & 16777215);
HXDLIN( 513)					int this5;
HXDLIN( 513)					if ((Value3 > 255)) {
HXLINE( 513)						this5 = 255;
            					}
            					else {
HXLINE( 513)						if ((Value3 < 0)) {
HXLINE( 513)							this5 = 0;
            						}
            						else {
HXLINE( 513)							this5 = Value3;
            						}
            					}
HXDLIN( 513)					this1 = (this1 | (this5 << 24));
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 513)				{
HXLINE( 513)					int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 513)					this1 = (this1 & -16711681);
HXDLIN( 513)					int this2;
HXDLIN( 513)					if ((Value > 255)) {
HXLINE( 513)						this2 = 255;
            					}
            					else {
HXLINE( 513)						if ((Value < 0)) {
HXLINE( 513)							this2 = 0;
            						}
            						else {
HXLINE( 513)							this2 = Value;
            						}
            					}
HXDLIN( 513)					this1 = (this1 | (this2 << 16));
            				}
HXDLIN( 513)				{
HXLINE( 513)					int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 513)					this1 = (this1 & -65281);
HXDLIN( 513)					int this3;
HXDLIN( 513)					if ((Value1 > 255)) {
HXLINE( 513)						this3 = 255;
            					}
            					else {
HXLINE( 513)						if ((Value1 < 0)) {
HXLINE( 513)							this3 = 0;
            						}
            						else {
HXLINE( 513)							this3 = Value1;
            						}
            					}
HXDLIN( 513)					this1 = (this1 | (this3 << 8));
            				}
HXDLIN( 513)				{
HXLINE( 513)					int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 513)					this1 = (this1 & -256);
HXDLIN( 513)					int this4;
HXDLIN( 513)					if ((Value2 > 255)) {
HXLINE( 513)						this4 = 255;
            					}
            					else {
HXLINE( 513)						if ((Value2 < 0)) {
HXLINE( 513)							this4 = 0;
            						}
            						else {
HXLINE( 513)							this4 = Value2;
            						}
            					}
HXDLIN( 513)					this1 = (this1 | this4);
            				}
HXDLIN( 513)				{
HXLINE( 513)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 513)					this1 = (this1 & 16777215);
HXDLIN( 513)					int this5;
HXDLIN( 513)					if ((Value3 > 255)) {
HXLINE( 513)						this5 = 255;
            					}
            					else {
HXLINE( 513)						if ((Value3 < 0)) {
HXLINE( 513)							this5 = 0;
            						}
            						else {
HXLINE( 513)							this5 = Value3;
            						}
            					}
HXDLIN( 513)					this1 = (this1 | (this5 << 24));
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 513)				{
HXLINE( 513)					int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 513)					this1 = (this1 & -16711681);
HXDLIN( 513)					int this2;
HXDLIN( 513)					if ((Value > 255)) {
HXLINE( 513)						this2 = 255;
            					}
            					else {
HXLINE( 513)						if ((Value < 0)) {
HXLINE( 513)							this2 = 0;
            						}
            						else {
HXLINE( 513)							this2 = Value;
            						}
            					}
HXDLIN( 513)					this1 = (this1 | (this2 << 16));
            				}
HXDLIN( 513)				{
HXLINE( 513)					int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 513)					this1 = (this1 & -65281);
HXDLIN( 513)					int this3;
HXDLIN( 513)					if ((Value1 > 255)) {
HXLINE( 513)						this3 = 255;
            					}
            					else {
HXLINE( 513)						if ((Value1 < 0)) {
HXLINE( 513)							this3 = 0;
            						}
            						else {
HXLINE( 513)							this3 = Value1;
            						}
            					}
HXDLIN( 513)					this1 = (this1 | (this3 << 8));
            				}
HXDLIN( 513)				{
HXLINE( 513)					int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 513)					this1 = (this1 & -256);
HXDLIN( 513)					int this4;
HXDLIN( 513)					if ((Value2 > 255)) {
HXLINE( 513)						this4 = 255;
            					}
            					else {
HXLINE( 513)						if ((Value2 < 0)) {
HXLINE( 513)							this4 = 0;
            						}
            						else {
HXLINE( 513)							this4 = Value2;
            						}
            					}
HXDLIN( 513)					this1 = (this1 | this4);
            				}
HXDLIN( 513)				{
HXLINE( 513)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 513)					this1 = (this1 & 16777215);
HXDLIN( 513)					int this5;
HXDLIN( 513)					if ((Value3 > 255)) {
HXLINE( 513)						this5 = 255;
            					}
            					else {
HXLINE( 513)						if ((Value3 < 0)) {
HXLINE( 513)							this5 = 0;
            						}
            						else {
HXLINE( 513)							this5 = Value3;
            						}
            					}
HXDLIN( 513)					this1 = (this1 | (this5 << 24));
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 513)				{
HXLINE( 513)					int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 513)					this1 = (this1 & -16711681);
HXDLIN( 513)					int this2;
HXDLIN( 513)					if ((Value > 255)) {
HXLINE( 513)						this2 = 255;
            					}
            					else {
HXLINE( 513)						if ((Value < 0)) {
HXLINE( 513)							this2 = 0;
            						}
            						else {
HXLINE( 513)							this2 = Value;
            						}
            					}
HXDLIN( 513)					this1 = (this1 | (this2 << 16));
            				}
HXDLIN( 513)				{
HXLINE( 513)					int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 513)					this1 = (this1 & -65281);
HXDLIN( 513)					int this3;
HXDLIN( 513)					if ((Value1 > 255)) {
HXLINE( 513)						this3 = 255;
            					}
            					else {
HXLINE( 513)						if ((Value1 < 0)) {
HXLINE( 513)							this3 = 0;
            						}
            						else {
HXLINE( 513)							this3 = Value1;
            						}
            					}
HXDLIN( 513)					this1 = (this1 | (this3 << 8));
            				}
HXDLIN( 513)				{
HXLINE( 513)					int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 513)					this1 = (this1 & -256);
HXDLIN( 513)					int this4;
HXDLIN( 513)					if ((Value2 > 255)) {
HXLINE( 513)						this4 = 255;
            					}
            					else {
HXLINE( 513)						if ((Value2 < 0)) {
HXLINE( 513)							this4 = 0;
            						}
            						else {
HXLINE( 513)							this4 = Value2;
            						}
            					}
HXDLIN( 513)					this1 = (this1 | this4);
            				}
HXDLIN( 513)				{
HXLINE( 513)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 513)					this1 = (this1 & 16777215);
HXDLIN( 513)					int this5;
HXDLIN( 513)					if ((Value3 > 255)) {
HXLINE( 513)						this5 = 255;
            					}
            					else {
HXLINE( 513)						if ((Value3 < 0)) {
HXLINE( 513)							this5 = 0;
            						}
            						else {
HXLINE( 513)							this5 = Value3;
            						}
            					}
HXDLIN( 513)					this1 = (this1 | (this5 << 24));
            				}
            			}
            			break;
            			case (int)4: {
HXLINE( 513)				{
HXLINE( 513)					int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 513)					this1 = (this1 & -16711681);
HXDLIN( 513)					int this2;
HXDLIN( 513)					if ((Value > 255)) {
HXLINE( 513)						this2 = 255;
            					}
            					else {
HXLINE( 513)						if ((Value < 0)) {
HXLINE( 513)							this2 = 0;
            						}
            						else {
HXLINE( 513)							this2 = Value;
            						}
            					}
HXDLIN( 513)					this1 = (this1 | (this2 << 16));
            				}
HXDLIN( 513)				{
HXLINE( 513)					int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 513)					this1 = (this1 & -65281);
HXDLIN( 513)					int this3;
HXDLIN( 513)					if ((Value1 > 255)) {
HXLINE( 513)						this3 = 255;
            					}
            					else {
HXLINE( 513)						if ((Value1 < 0)) {
HXLINE( 513)							this3 = 0;
            						}
            						else {
HXLINE( 513)							this3 = Value1;
            						}
            					}
HXDLIN( 513)					this1 = (this1 | (this3 << 8));
            				}
HXDLIN( 513)				{
HXLINE( 513)					int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 513)					this1 = (this1 & -256);
HXDLIN( 513)					int this4;
HXDLIN( 513)					if ((Value2 > 255)) {
HXLINE( 513)						this4 = 255;
            					}
            					else {
HXLINE( 513)						if ((Value2 < 0)) {
HXLINE( 513)							this4 = 0;
            						}
            						else {
HXLINE( 513)							this4 = Value2;
            						}
            					}
HXDLIN( 513)					this1 = (this1 | this4);
            				}
HXDLIN( 513)				{
HXLINE( 513)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 513)					this1 = (this1 & 16777215);
HXDLIN( 513)					int this5;
HXDLIN( 513)					if ((Value3 > 255)) {
HXLINE( 513)						this5 = 255;
            					}
            					else {
HXLINE( 513)						if ((Value3 < 0)) {
HXLINE( 513)							this5 = 0;
            						}
            						else {
HXLINE( 513)							this5 = Value3;
            						}
            					}
HXDLIN( 513)					this1 = (this1 | (this5 << 24));
            				}
            			}
            			break;
            			case (int)5: {
HXLINE( 513)				{
HXLINE( 513)					int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 513)					this1 = (this1 & -16711681);
HXDLIN( 513)					int this2;
HXDLIN( 513)					if ((Value > 255)) {
HXLINE( 513)						this2 = 255;
            					}
            					else {
HXLINE( 513)						if ((Value < 0)) {
HXLINE( 513)							this2 = 0;
            						}
            						else {
HXLINE( 513)							this2 = Value;
            						}
            					}
HXDLIN( 513)					this1 = (this1 | (this2 << 16));
            				}
HXDLIN( 513)				{
HXLINE( 513)					int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 513)					this1 = (this1 & -65281);
HXDLIN( 513)					int this3;
HXDLIN( 513)					if ((Value1 > 255)) {
HXLINE( 513)						this3 = 255;
            					}
            					else {
HXLINE( 513)						if ((Value1 < 0)) {
HXLINE( 513)							this3 = 0;
            						}
            						else {
HXLINE( 513)							this3 = Value1;
            						}
            					}
HXDLIN( 513)					this1 = (this1 | (this3 << 8));
            				}
HXDLIN( 513)				{
HXLINE( 513)					int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 513)					this1 = (this1 & -256);
HXDLIN( 513)					int this4;
HXDLIN( 513)					if ((Value2 > 255)) {
HXLINE( 513)						this4 = 255;
            					}
            					else {
HXLINE( 513)						if ((Value2 < 0)) {
HXLINE( 513)							this4 = 0;
            						}
            						else {
HXLINE( 513)							this4 = Value2;
            						}
            					}
HXDLIN( 513)					this1 = (this1 | this4);
            				}
HXDLIN( 513)				{
HXLINE( 513)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 513)					this1 = (this1 & 16777215);
HXDLIN( 513)					int this5;
HXDLIN( 513)					if ((Value3 > 255)) {
HXLINE( 513)						this5 = 255;
            					}
            					else {
HXLINE( 513)						if ((Value3 < 0)) {
HXLINE( 513)							this5 = 0;
            						}
            						else {
HXLINE( 513)							this5 = Value3;
            						}
            					}
HXDLIN( 513)					this1 = (this1 | (this5 << 24));
            				}
            			}
            			break;
            		}
HXDLIN( 513)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxColor_Impl__obj,setHSB,return )

int FlxColor_Impl__obj::setHSL(int this1,Float Hue,Float Saturation,Float Lightness,Float Alpha){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_526_setHSL)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(Hue,"Hue")
            	HX_STACK_ARG(Saturation,"Saturation")
            	HX_STACK_ARG(Lightness,"Lightness")
            	HX_STACK_ARG(Alpha,"Alpha")
HXLINE( 526)
HXLINE( 527)		HX_VARI( Float,chroma) = ((( (Float)(1) ) - ::Math_obj::abs(((( (Float)(2) ) * Lightness) - ( (Float)(1) )))) * Saturation);
HXLINE( 528)		HX_VARI( Float,match) = (Lightness - (chroma / ( (Float)(2) )));
HXLINE( 529)		Float Hue1 = Hue;
HXDLIN( 529)		Float Chroma = chroma;
HXDLIN( 529)		Hue1 = ::hx::Mod(Hue1,360);
HXDLIN( 529)		Float hueD = (Hue1 / ( (Float)(60) ));
HXDLIN( 529)		Float mid = ((Chroma * (( (Float)(1) ) - ::Math_obj::abs((::hx::Mod(hueD,2) - ( (Float)(1) ))))) + match);
HXDLIN( 529)		Chroma = (Chroma + match);
HXDLIN( 529)		switch((int)(::Std_obj::_hx_int(hueD))){
            			case (int)0: {
HXLINE( 529)				{
HXLINE( 529)					int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 529)					this1 = (this1 & -16711681);
HXDLIN( 529)					int this2;
HXDLIN( 529)					if ((Value > 255)) {
HXLINE( 529)						this2 = 255;
            					}
            					else {
HXLINE( 529)						if ((Value < 0)) {
HXLINE( 529)							this2 = 0;
            						}
            						else {
HXLINE( 529)							this2 = Value;
            						}
            					}
HXDLIN( 529)					this1 = (this1 | (this2 << 16));
            				}
HXDLIN( 529)				{
HXLINE( 529)					int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 529)					this1 = (this1 & -65281);
HXDLIN( 529)					int this3;
HXDLIN( 529)					if ((Value1 > 255)) {
HXLINE( 529)						this3 = 255;
            					}
            					else {
HXLINE( 529)						if ((Value1 < 0)) {
HXLINE( 529)							this3 = 0;
            						}
            						else {
HXLINE( 529)							this3 = Value1;
            						}
            					}
HXDLIN( 529)					this1 = (this1 | (this3 << 8));
            				}
HXDLIN( 529)				{
HXLINE( 529)					int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 529)					this1 = (this1 & -256);
HXDLIN( 529)					int this4;
HXDLIN( 529)					if ((Value2 > 255)) {
HXLINE( 529)						this4 = 255;
            					}
            					else {
HXLINE( 529)						if ((Value2 < 0)) {
HXLINE( 529)							this4 = 0;
            						}
            						else {
HXLINE( 529)							this4 = Value2;
            						}
            					}
HXDLIN( 529)					this1 = (this1 | this4);
            				}
HXDLIN( 529)				{
HXLINE( 529)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 529)					this1 = (this1 & 16777215);
HXDLIN( 529)					int this5;
HXDLIN( 529)					if ((Value3 > 255)) {
HXLINE( 529)						this5 = 255;
            					}
            					else {
HXLINE( 529)						if ((Value3 < 0)) {
HXLINE( 529)							this5 = 0;
            						}
            						else {
HXLINE( 529)							this5 = Value3;
            						}
            					}
HXDLIN( 529)					this1 = (this1 | (this5 << 24));
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 529)				{
HXLINE( 529)					int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 529)					this1 = (this1 & -16711681);
HXDLIN( 529)					int this2;
HXDLIN( 529)					if ((Value > 255)) {
HXLINE( 529)						this2 = 255;
            					}
            					else {
HXLINE( 529)						if ((Value < 0)) {
HXLINE( 529)							this2 = 0;
            						}
            						else {
HXLINE( 529)							this2 = Value;
            						}
            					}
HXDLIN( 529)					this1 = (this1 | (this2 << 16));
            				}
HXDLIN( 529)				{
HXLINE( 529)					int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 529)					this1 = (this1 & -65281);
HXDLIN( 529)					int this3;
HXDLIN( 529)					if ((Value1 > 255)) {
HXLINE( 529)						this3 = 255;
            					}
            					else {
HXLINE( 529)						if ((Value1 < 0)) {
HXLINE( 529)							this3 = 0;
            						}
            						else {
HXLINE( 529)							this3 = Value1;
            						}
            					}
HXDLIN( 529)					this1 = (this1 | (this3 << 8));
            				}
HXDLIN( 529)				{
HXLINE( 529)					int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 529)					this1 = (this1 & -256);
HXDLIN( 529)					int this4;
HXDLIN( 529)					if ((Value2 > 255)) {
HXLINE( 529)						this4 = 255;
            					}
            					else {
HXLINE( 529)						if ((Value2 < 0)) {
HXLINE( 529)							this4 = 0;
            						}
            						else {
HXLINE( 529)							this4 = Value2;
            						}
            					}
HXDLIN( 529)					this1 = (this1 | this4);
            				}
HXDLIN( 529)				{
HXLINE( 529)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 529)					this1 = (this1 & 16777215);
HXDLIN( 529)					int this5;
HXDLIN( 529)					if ((Value3 > 255)) {
HXLINE( 529)						this5 = 255;
            					}
            					else {
HXLINE( 529)						if ((Value3 < 0)) {
HXLINE( 529)							this5 = 0;
            						}
            						else {
HXLINE( 529)							this5 = Value3;
            						}
            					}
HXDLIN( 529)					this1 = (this1 | (this5 << 24));
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 529)				{
HXLINE( 529)					int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 529)					this1 = (this1 & -16711681);
HXDLIN( 529)					int this2;
HXDLIN( 529)					if ((Value > 255)) {
HXLINE( 529)						this2 = 255;
            					}
            					else {
HXLINE( 529)						if ((Value < 0)) {
HXLINE( 529)							this2 = 0;
            						}
            						else {
HXLINE( 529)							this2 = Value;
            						}
            					}
HXDLIN( 529)					this1 = (this1 | (this2 << 16));
            				}
HXDLIN( 529)				{
HXLINE( 529)					int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 529)					this1 = (this1 & -65281);
HXDLIN( 529)					int this3;
HXDLIN( 529)					if ((Value1 > 255)) {
HXLINE( 529)						this3 = 255;
            					}
            					else {
HXLINE( 529)						if ((Value1 < 0)) {
HXLINE( 529)							this3 = 0;
            						}
            						else {
HXLINE( 529)							this3 = Value1;
            						}
            					}
HXDLIN( 529)					this1 = (this1 | (this3 << 8));
            				}
HXDLIN( 529)				{
HXLINE( 529)					int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 529)					this1 = (this1 & -256);
HXDLIN( 529)					int this4;
HXDLIN( 529)					if ((Value2 > 255)) {
HXLINE( 529)						this4 = 255;
            					}
            					else {
HXLINE( 529)						if ((Value2 < 0)) {
HXLINE( 529)							this4 = 0;
            						}
            						else {
HXLINE( 529)							this4 = Value2;
            						}
            					}
HXDLIN( 529)					this1 = (this1 | this4);
            				}
HXDLIN( 529)				{
HXLINE( 529)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 529)					this1 = (this1 & 16777215);
HXDLIN( 529)					int this5;
HXDLIN( 529)					if ((Value3 > 255)) {
HXLINE( 529)						this5 = 255;
            					}
            					else {
HXLINE( 529)						if ((Value3 < 0)) {
HXLINE( 529)							this5 = 0;
            						}
            						else {
HXLINE( 529)							this5 = Value3;
            						}
            					}
HXDLIN( 529)					this1 = (this1 | (this5 << 24));
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 529)				{
HXLINE( 529)					int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 529)					this1 = (this1 & -16711681);
HXDLIN( 529)					int this2;
HXDLIN( 529)					if ((Value > 255)) {
HXLINE( 529)						this2 = 255;
            					}
            					else {
HXLINE( 529)						if ((Value < 0)) {
HXLINE( 529)							this2 = 0;
            						}
            						else {
HXLINE( 529)							this2 = Value;
            						}
            					}
HXDLIN( 529)					this1 = (this1 | (this2 << 16));
            				}
HXDLIN( 529)				{
HXLINE( 529)					int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 529)					this1 = (this1 & -65281);
HXDLIN( 529)					int this3;
HXDLIN( 529)					if ((Value1 > 255)) {
HXLINE( 529)						this3 = 255;
            					}
            					else {
HXLINE( 529)						if ((Value1 < 0)) {
HXLINE( 529)							this3 = 0;
            						}
            						else {
HXLINE( 529)							this3 = Value1;
            						}
            					}
HXDLIN( 529)					this1 = (this1 | (this3 << 8));
            				}
HXDLIN( 529)				{
HXLINE( 529)					int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 529)					this1 = (this1 & -256);
HXDLIN( 529)					int this4;
HXDLIN( 529)					if ((Value2 > 255)) {
HXLINE( 529)						this4 = 255;
            					}
            					else {
HXLINE( 529)						if ((Value2 < 0)) {
HXLINE( 529)							this4 = 0;
            						}
            						else {
HXLINE( 529)							this4 = Value2;
            						}
            					}
HXDLIN( 529)					this1 = (this1 | this4);
            				}
HXDLIN( 529)				{
HXLINE( 529)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 529)					this1 = (this1 & 16777215);
HXDLIN( 529)					int this5;
HXDLIN( 529)					if ((Value3 > 255)) {
HXLINE( 529)						this5 = 255;
            					}
            					else {
HXLINE( 529)						if ((Value3 < 0)) {
HXLINE( 529)							this5 = 0;
            						}
            						else {
HXLINE( 529)							this5 = Value3;
            						}
            					}
HXDLIN( 529)					this1 = (this1 | (this5 << 24));
            				}
            			}
            			break;
            			case (int)4: {
HXLINE( 529)				{
HXLINE( 529)					int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 529)					this1 = (this1 & -16711681);
HXDLIN( 529)					int this2;
HXDLIN( 529)					if ((Value > 255)) {
HXLINE( 529)						this2 = 255;
            					}
            					else {
HXLINE( 529)						if ((Value < 0)) {
HXLINE( 529)							this2 = 0;
            						}
            						else {
HXLINE( 529)							this2 = Value;
            						}
            					}
HXDLIN( 529)					this1 = (this1 | (this2 << 16));
            				}
HXDLIN( 529)				{
HXLINE( 529)					int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 529)					this1 = (this1 & -65281);
HXDLIN( 529)					int this3;
HXDLIN( 529)					if ((Value1 > 255)) {
HXLINE( 529)						this3 = 255;
            					}
            					else {
HXLINE( 529)						if ((Value1 < 0)) {
HXLINE( 529)							this3 = 0;
            						}
            						else {
HXLINE( 529)							this3 = Value1;
            						}
            					}
HXDLIN( 529)					this1 = (this1 | (this3 << 8));
            				}
HXDLIN( 529)				{
HXLINE( 529)					int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 529)					this1 = (this1 & -256);
HXDLIN( 529)					int this4;
HXDLIN( 529)					if ((Value2 > 255)) {
HXLINE( 529)						this4 = 255;
            					}
            					else {
HXLINE( 529)						if ((Value2 < 0)) {
HXLINE( 529)							this4 = 0;
            						}
            						else {
HXLINE( 529)							this4 = Value2;
            						}
            					}
HXDLIN( 529)					this1 = (this1 | this4);
            				}
HXDLIN( 529)				{
HXLINE( 529)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 529)					this1 = (this1 & 16777215);
HXDLIN( 529)					int this5;
HXDLIN( 529)					if ((Value3 > 255)) {
HXLINE( 529)						this5 = 255;
            					}
            					else {
HXLINE( 529)						if ((Value3 < 0)) {
HXLINE( 529)							this5 = 0;
            						}
            						else {
HXLINE( 529)							this5 = Value3;
            						}
            					}
HXDLIN( 529)					this1 = (this1 | (this5 << 24));
            				}
            			}
            			break;
            			case (int)5: {
HXLINE( 529)				{
HXLINE( 529)					int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 529)					this1 = (this1 & -16711681);
HXDLIN( 529)					int this2;
HXDLIN( 529)					if ((Value > 255)) {
HXLINE( 529)						this2 = 255;
            					}
            					else {
HXLINE( 529)						if ((Value < 0)) {
HXLINE( 529)							this2 = 0;
            						}
            						else {
HXLINE( 529)							this2 = Value;
            						}
            					}
HXDLIN( 529)					this1 = (this1 | (this2 << 16));
            				}
HXDLIN( 529)				{
HXLINE( 529)					int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 529)					this1 = (this1 & -65281);
HXDLIN( 529)					int this3;
HXDLIN( 529)					if ((Value1 > 255)) {
HXLINE( 529)						this3 = 255;
            					}
            					else {
HXLINE( 529)						if ((Value1 < 0)) {
HXLINE( 529)							this3 = 0;
            						}
            						else {
HXLINE( 529)							this3 = Value1;
            						}
            					}
HXDLIN( 529)					this1 = (this1 | (this3 << 8));
            				}
HXDLIN( 529)				{
HXLINE( 529)					int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 529)					this1 = (this1 & -256);
HXDLIN( 529)					int this4;
HXDLIN( 529)					if ((Value2 > 255)) {
HXLINE( 529)						this4 = 255;
            					}
            					else {
HXLINE( 529)						if ((Value2 < 0)) {
HXLINE( 529)							this4 = 0;
            						}
            						else {
HXLINE( 529)							this4 = Value2;
            						}
            					}
HXDLIN( 529)					this1 = (this1 | this4);
            				}
HXDLIN( 529)				{
HXLINE( 529)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 529)					this1 = (this1 & 16777215);
HXDLIN( 529)					int this5;
HXDLIN( 529)					if ((Value3 > 255)) {
HXLINE( 529)						this5 = 255;
            					}
            					else {
HXLINE( 529)						if ((Value3 < 0)) {
HXLINE( 529)							this5 = 0;
            						}
            						else {
HXLINE( 529)							this5 = Value3;
            						}
            					}
HXDLIN( 529)					this1 = (this1 | (this5 << 24));
            				}
            			}
            			break;
            		}
HXDLIN( 529)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxColor_Impl__obj,setHSL,return )

int FlxColor_Impl__obj::setHSChromaMatch(int this1,Float Hue,Float Saturation,Float Chroma,Float Match,Float Alpha){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_536_setHSChromaMatch)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(Hue,"Hue")
            	HX_STACK_ARG(Saturation,"Saturation")
            	HX_STACK_ARG(Chroma,"Chroma")
            	HX_STACK_ARG(Match,"Match")
            	HX_STACK_ARG(Alpha,"Alpha")
HXLINE( 536)
HXLINE( 537)		Hue = ::hx::Mod(Hue,360);
HXLINE( 538)		HX_VARI( Float,hueD) = (Hue / ( (Float)(60) ));
HXLINE( 539)		HX_VARI( Float,mid) = ((Chroma * (( (Float)(1) ) - ::Math_obj::abs((::hx::Mod(hueD,2) - ( (Float)(1) ))))) + Match);
HXLINE( 540)		Chroma = (Chroma + Match);
HXLINE( 542)		switch((int)(::Std_obj::_hx_int(hueD))){
            			case (int)0: {
HXLINE( 545)				{
HXLINE( 545)					int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 545)					this1 = (this1 & -16711681);
HXDLIN( 545)					int this2;
HXDLIN( 545)					if ((Value > 255)) {
HXLINE( 545)						this2 = 255;
            					}
            					else {
HXLINE( 545)						if ((Value < 0)) {
HXLINE( 545)							this2 = 0;
            						}
            						else {
HXLINE( 545)							this2 = Value;
            						}
            					}
HXDLIN( 545)					this1 = (this1 | (this2 << 16));
            				}
HXDLIN( 545)				{
HXLINE( 545)					int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 545)					this1 = (this1 & -65281);
HXDLIN( 545)					int this3;
HXDLIN( 545)					if ((Value1 > 255)) {
HXLINE( 545)						this3 = 255;
            					}
            					else {
HXLINE( 545)						if ((Value1 < 0)) {
HXLINE( 545)							this3 = 0;
            						}
            						else {
HXLINE( 545)							this3 = Value1;
            						}
            					}
HXDLIN( 545)					this1 = (this1 | (this3 << 8));
            				}
HXDLIN( 545)				{
HXLINE( 545)					int Value2 = ::Math_obj::round((Match * ( (Float)(255) )));
HXDLIN( 545)					this1 = (this1 & -256);
HXDLIN( 545)					int this4;
HXDLIN( 545)					if ((Value2 > 255)) {
HXLINE( 545)						this4 = 255;
            					}
            					else {
HXLINE( 545)						if ((Value2 < 0)) {
HXLINE( 545)							this4 = 0;
            						}
            						else {
HXLINE( 545)							this4 = Value2;
            						}
            					}
HXDLIN( 545)					this1 = (this1 | this4);
            				}
HXDLIN( 545)				{
HXLINE( 545)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 545)					this1 = (this1 & 16777215);
HXDLIN( 545)					int this5;
HXDLIN( 545)					if ((Value3 > 255)) {
HXLINE( 545)						this5 = 255;
            					}
            					else {
HXLINE( 545)						if ((Value3 < 0)) {
HXLINE( 545)							this5 = 0;
            						}
            						else {
HXLINE( 545)							this5 = Value3;
            						}
            					}
HXDLIN( 545)					this1 = (this1 | (this5 << 24));
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 547)				{
HXLINE( 547)					int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 547)					this1 = (this1 & -16711681);
HXDLIN( 547)					int this2;
HXDLIN( 547)					if ((Value > 255)) {
HXLINE( 547)						this2 = 255;
            					}
            					else {
HXLINE( 547)						if ((Value < 0)) {
HXLINE( 547)							this2 = 0;
            						}
            						else {
HXLINE( 547)							this2 = Value;
            						}
            					}
HXDLIN( 547)					this1 = (this1 | (this2 << 16));
            				}
HXDLIN( 547)				{
HXLINE( 547)					int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 547)					this1 = (this1 & -65281);
HXDLIN( 547)					int this3;
HXDLIN( 547)					if ((Value1 > 255)) {
HXLINE( 547)						this3 = 255;
            					}
            					else {
HXLINE( 547)						if ((Value1 < 0)) {
HXLINE( 547)							this3 = 0;
            						}
            						else {
HXLINE( 547)							this3 = Value1;
            						}
            					}
HXDLIN( 547)					this1 = (this1 | (this3 << 8));
            				}
HXDLIN( 547)				{
HXLINE( 547)					int Value2 = ::Math_obj::round((Match * ( (Float)(255) )));
HXDLIN( 547)					this1 = (this1 & -256);
HXDLIN( 547)					int this4;
HXDLIN( 547)					if ((Value2 > 255)) {
HXLINE( 547)						this4 = 255;
            					}
            					else {
HXLINE( 547)						if ((Value2 < 0)) {
HXLINE( 547)							this4 = 0;
            						}
            						else {
HXLINE( 547)							this4 = Value2;
            						}
            					}
HXDLIN( 547)					this1 = (this1 | this4);
            				}
HXDLIN( 547)				{
HXLINE( 547)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 547)					this1 = (this1 & 16777215);
HXDLIN( 547)					int this5;
HXDLIN( 547)					if ((Value3 > 255)) {
HXLINE( 547)						this5 = 255;
            					}
            					else {
HXLINE( 547)						if ((Value3 < 0)) {
HXLINE( 547)							this5 = 0;
            						}
            						else {
HXLINE( 547)							this5 = Value3;
            						}
            					}
HXDLIN( 547)					this1 = (this1 | (this5 << 24));
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 549)				{
HXLINE( 549)					int Value = ::Math_obj::round((Match * ( (Float)(255) )));
HXDLIN( 549)					this1 = (this1 & -16711681);
HXDLIN( 549)					int this2;
HXDLIN( 549)					if ((Value > 255)) {
HXLINE( 549)						this2 = 255;
            					}
            					else {
HXLINE( 549)						if ((Value < 0)) {
HXLINE( 549)							this2 = 0;
            						}
            						else {
HXLINE( 549)							this2 = Value;
            						}
            					}
HXDLIN( 549)					this1 = (this1 | (this2 << 16));
            				}
HXDLIN( 549)				{
HXLINE( 549)					int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 549)					this1 = (this1 & -65281);
HXDLIN( 549)					int this3;
HXDLIN( 549)					if ((Value1 > 255)) {
HXLINE( 549)						this3 = 255;
            					}
            					else {
HXLINE( 549)						if ((Value1 < 0)) {
HXLINE( 549)							this3 = 0;
            						}
            						else {
HXLINE( 549)							this3 = Value1;
            						}
            					}
HXDLIN( 549)					this1 = (this1 | (this3 << 8));
            				}
HXDLIN( 549)				{
HXLINE( 549)					int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 549)					this1 = (this1 & -256);
HXDLIN( 549)					int this4;
HXDLIN( 549)					if ((Value2 > 255)) {
HXLINE( 549)						this4 = 255;
            					}
            					else {
HXLINE( 549)						if ((Value2 < 0)) {
HXLINE( 549)							this4 = 0;
            						}
            						else {
HXLINE( 549)							this4 = Value2;
            						}
            					}
HXDLIN( 549)					this1 = (this1 | this4);
            				}
HXDLIN( 549)				{
HXLINE( 549)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 549)					this1 = (this1 & 16777215);
HXDLIN( 549)					int this5;
HXDLIN( 549)					if ((Value3 > 255)) {
HXLINE( 549)						this5 = 255;
            					}
            					else {
HXLINE( 549)						if ((Value3 < 0)) {
HXLINE( 549)							this5 = 0;
            						}
            						else {
HXLINE( 549)							this5 = Value3;
            						}
            					}
HXDLIN( 549)					this1 = (this1 | (this5 << 24));
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 551)				{
HXLINE( 551)					int Value = ::Math_obj::round((Match * ( (Float)(255) )));
HXDLIN( 551)					this1 = (this1 & -16711681);
HXDLIN( 551)					int this2;
HXDLIN( 551)					if ((Value > 255)) {
HXLINE( 551)						this2 = 255;
            					}
            					else {
HXLINE( 551)						if ((Value < 0)) {
HXLINE( 551)							this2 = 0;
            						}
            						else {
HXLINE( 551)							this2 = Value;
            						}
            					}
HXDLIN( 551)					this1 = (this1 | (this2 << 16));
            				}
HXDLIN( 551)				{
HXLINE( 551)					int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 551)					this1 = (this1 & -65281);
HXDLIN( 551)					int this3;
HXDLIN( 551)					if ((Value1 > 255)) {
HXLINE( 551)						this3 = 255;
            					}
            					else {
HXLINE( 551)						if ((Value1 < 0)) {
HXLINE( 551)							this3 = 0;
            						}
            						else {
HXLINE( 551)							this3 = Value1;
            						}
            					}
HXDLIN( 551)					this1 = (this1 | (this3 << 8));
            				}
HXDLIN( 551)				{
HXLINE( 551)					int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 551)					this1 = (this1 & -256);
HXDLIN( 551)					int this4;
HXDLIN( 551)					if ((Value2 > 255)) {
HXLINE( 551)						this4 = 255;
            					}
            					else {
HXLINE( 551)						if ((Value2 < 0)) {
HXLINE( 551)							this4 = 0;
            						}
            						else {
HXLINE( 551)							this4 = Value2;
            						}
            					}
HXDLIN( 551)					this1 = (this1 | this4);
            				}
HXDLIN( 551)				{
HXLINE( 551)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 551)					this1 = (this1 & 16777215);
HXDLIN( 551)					int this5;
HXDLIN( 551)					if ((Value3 > 255)) {
HXLINE( 551)						this5 = 255;
            					}
            					else {
HXLINE( 551)						if ((Value3 < 0)) {
HXLINE( 551)							this5 = 0;
            						}
            						else {
HXLINE( 551)							this5 = Value3;
            						}
            					}
HXDLIN( 551)					this1 = (this1 | (this5 << 24));
            				}
            			}
            			break;
            			case (int)4: {
HXLINE( 553)				{
HXLINE( 553)					int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 553)					this1 = (this1 & -16711681);
HXDLIN( 553)					int this2;
HXDLIN( 553)					if ((Value > 255)) {
HXLINE( 553)						this2 = 255;
            					}
            					else {
HXLINE( 553)						if ((Value < 0)) {
HXLINE( 553)							this2 = 0;
            						}
            						else {
HXLINE( 553)							this2 = Value;
            						}
            					}
HXDLIN( 553)					this1 = (this1 | (this2 << 16));
            				}
HXDLIN( 553)				{
HXLINE( 553)					int Value1 = ::Math_obj::round((Match * ( (Float)(255) )));
HXDLIN( 553)					this1 = (this1 & -65281);
HXDLIN( 553)					int this3;
HXDLIN( 553)					if ((Value1 > 255)) {
HXLINE( 553)						this3 = 255;
            					}
            					else {
HXLINE( 553)						if ((Value1 < 0)) {
HXLINE( 553)							this3 = 0;
            						}
            						else {
HXLINE( 553)							this3 = Value1;
            						}
            					}
HXDLIN( 553)					this1 = (this1 | (this3 << 8));
            				}
HXDLIN( 553)				{
HXLINE( 553)					int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 553)					this1 = (this1 & -256);
HXDLIN( 553)					int this4;
HXDLIN( 553)					if ((Value2 > 255)) {
HXLINE( 553)						this4 = 255;
            					}
            					else {
HXLINE( 553)						if ((Value2 < 0)) {
HXLINE( 553)							this4 = 0;
            						}
            						else {
HXLINE( 553)							this4 = Value2;
            						}
            					}
HXDLIN( 553)					this1 = (this1 | this4);
            				}
HXDLIN( 553)				{
HXLINE( 553)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 553)					this1 = (this1 & 16777215);
HXDLIN( 553)					int this5;
HXDLIN( 553)					if ((Value3 > 255)) {
HXLINE( 553)						this5 = 255;
            					}
            					else {
HXLINE( 553)						if ((Value3 < 0)) {
HXLINE( 553)							this5 = 0;
            						}
            						else {
HXLINE( 553)							this5 = Value3;
            						}
            					}
HXDLIN( 553)					this1 = (this1 | (this5 << 24));
            				}
            			}
            			break;
            			case (int)5: {
HXLINE( 555)				{
HXLINE( 555)					int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 555)					this1 = (this1 & -16711681);
HXDLIN( 555)					int this2;
HXDLIN( 555)					if ((Value > 255)) {
HXLINE( 555)						this2 = 255;
            					}
            					else {
HXLINE( 555)						if ((Value < 0)) {
HXLINE( 555)							this2 = 0;
            						}
            						else {
HXLINE( 555)							this2 = Value;
            						}
            					}
HXDLIN( 555)					this1 = (this1 | (this2 << 16));
            				}
HXDLIN( 555)				{
HXLINE( 555)					int Value1 = ::Math_obj::round((Match * ( (Float)(255) )));
HXDLIN( 555)					this1 = (this1 & -65281);
HXDLIN( 555)					int this3;
HXDLIN( 555)					if ((Value1 > 255)) {
HXLINE( 555)						this3 = 255;
            					}
            					else {
HXLINE( 555)						if ((Value1 < 0)) {
HXLINE( 555)							this3 = 0;
            						}
            						else {
HXLINE( 555)							this3 = Value1;
            						}
            					}
HXDLIN( 555)					this1 = (this1 | (this3 << 8));
            				}
HXDLIN( 555)				{
HXLINE( 555)					int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 555)					this1 = (this1 & -256);
HXDLIN( 555)					int this4;
HXDLIN( 555)					if ((Value2 > 255)) {
HXLINE( 555)						this4 = 255;
            					}
            					else {
HXLINE( 555)						if ((Value2 < 0)) {
HXLINE( 555)							this4 = 0;
            						}
            						else {
HXLINE( 555)							this4 = Value2;
            						}
            					}
HXDLIN( 555)					this1 = (this1 | this4);
            				}
HXDLIN( 555)				{
HXLINE( 555)					int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 555)					this1 = (this1 & 16777215);
HXDLIN( 555)					int this5;
HXDLIN( 555)					if ((Value3 > 255)) {
HXLINE( 555)						this5 = 255;
            					}
            					else {
HXLINE( 555)						if ((Value3 < 0)) {
HXLINE( 555)							this5 = 0;
            						}
            						else {
HXLINE( 555)							this5 = Value3;
            						}
            					}
HXDLIN( 555)					this1 = (this1 | (this5 << 24));
            				}
            			}
            			break;
            		}
HXLINE( 558)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxColor_Impl__obj,setHSChromaMatch,return )

int FlxColor_Impl__obj::_new(::hx::Null< int >  __o_Value){
            		int Value = __o_Value.Default(0);
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_561__new)
            	HX_STACK_ARG(Value,"Value")
HXLINE( 561)
HXDLIN( 561)		HX_VARI( int,this1) = Value;
HXDLIN( 561)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,_new,return )

int FlxColor_Impl__obj::getThis(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_571_getThis)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 571)
HXDLIN( 571)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,getThis,return )

void FlxColor_Impl__obj::validate(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_576_validate)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 576)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,validate,(void))

int FlxColor_Impl__obj::get_red(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_584_get_red)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 584)
HXDLIN( 584)		return ((this1 >> 16) & 255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_red,return )

int FlxColor_Impl__obj::get_green(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_589_get_green)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 589)
HXDLIN( 589)		return ((this1 >> 8) & 255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_green,return )

int FlxColor_Impl__obj::get_blue(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_594_get_blue)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 594)
HXDLIN( 594)		return (this1 & 255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_blue,return )

int FlxColor_Impl__obj::get_alpha(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_599_get_alpha)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 599)
HXDLIN( 599)		return ((this1 >> 24) & 255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_alpha,return )

Float FlxColor_Impl__obj::get_redFloat(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_604_get_redFloat)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 604)
HXDLIN( 604)		return (( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_redFloat,return )

Float FlxColor_Impl__obj::get_greenFloat(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_609_get_greenFloat)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 609)
HXDLIN( 609)		return (( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_greenFloat,return )

Float FlxColor_Impl__obj::get_blueFloat(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_614_get_blueFloat)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 614)
HXDLIN( 614)		return (( (Float)((this1 & 255)) ) / ( (Float)(255) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_blueFloat,return )

Float FlxColor_Impl__obj::get_alphaFloat(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_619_get_alphaFloat)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 619)
HXDLIN( 619)		return (( (Float)(((this1 >> 24) & 255)) ) / ( (Float)(255) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_alphaFloat,return )

int FlxColor_Impl__obj::set_red(int this1,int Value){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_623_set_red)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(Value,"Value")
HXLINE( 623)
HXLINE( 625)		this1 = (this1 & -16711681);
HXLINE( 626)		int this2;
HXDLIN( 626)		if ((Value > 255)) {
HXLINE( 626)			this2 = 255;
            		}
            		else {
HXLINE( 626)			if ((Value < 0)) {
HXLINE( 626)				this2 = 0;
            			}
            			else {
HXLINE( 626)				this2 = Value;
            			}
            		}
HXDLIN( 626)		this1 = (this1 | (this2 << 16));
HXLINE( 627)		return Value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_red,return )

int FlxColor_Impl__obj::set_green(int this1,int Value){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_631_set_green)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(Value,"Value")
HXLINE( 631)
HXLINE( 633)		this1 = (this1 & -65281);
HXLINE( 634)		int this2;
HXDLIN( 634)		if ((Value > 255)) {
HXLINE( 634)			this2 = 255;
            		}
            		else {
HXLINE( 634)			if ((Value < 0)) {
HXLINE( 634)				this2 = 0;
            			}
            			else {
HXLINE( 634)				this2 = Value;
            			}
            		}
HXDLIN( 634)		this1 = (this1 | (this2 << 8));
HXLINE( 635)		return Value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_green,return )

int FlxColor_Impl__obj::set_blue(int this1,int Value){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_639_set_blue)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(Value,"Value")
HXLINE( 639)
HXLINE( 641)		this1 = (this1 & -256);
HXLINE( 642)		int this2;
HXDLIN( 642)		if ((Value > 255)) {
HXLINE( 642)			this2 = 255;
            		}
            		else {
HXLINE( 642)			if ((Value < 0)) {
HXLINE( 642)				this2 = 0;
            			}
            			else {
HXLINE( 642)				this2 = Value;
            			}
            		}
HXDLIN( 642)		this1 = (this1 | this2);
HXLINE( 643)		return Value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_blue,return )

int FlxColor_Impl__obj::set_alpha(int this1,int Value){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_647_set_alpha)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(Value,"Value")
HXLINE( 647)
HXLINE( 649)		this1 = (this1 & 16777215);
HXLINE( 650)		int this2;
HXDLIN( 650)		if ((Value > 255)) {
HXLINE( 650)			this2 = 255;
            		}
            		else {
HXLINE( 650)			if ((Value < 0)) {
HXLINE( 650)				this2 = 0;
            			}
            			else {
HXLINE( 650)				this2 = Value;
            			}
            		}
HXDLIN( 650)		this1 = (this1 | (this2 << 24));
HXLINE( 651)		return Value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_alpha,return )

Float FlxColor_Impl__obj::set_redFloat(int this1,Float Value){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_655_set_redFloat)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(Value,"Value")
HXLINE( 655)
HXLINE( 656)		{
HXLINE( 656)			int Value1 = ::Math_obj::round((Value * ( (Float)(255) )));
HXDLIN( 656)			this1 = (this1 & -16711681);
HXDLIN( 656)			int this2;
HXDLIN( 656)			if ((Value1 > 255)) {
HXLINE( 656)				this2 = 255;
            			}
            			else {
HXLINE( 656)				if ((Value1 < 0)) {
HXLINE( 656)					this2 = 0;
            				}
            				else {
HXLINE( 656)					this2 = Value1;
            				}
            			}
HXDLIN( 656)			this1 = (this1 | (this2 << 16));
            		}
HXLINE( 657)		return Value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_redFloat,return )

Float FlxColor_Impl__obj::set_greenFloat(int this1,Float Value){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_661_set_greenFloat)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(Value,"Value")
HXLINE( 661)
HXLINE( 662)		{
HXLINE( 662)			int Value1 = ::Math_obj::round((Value * ( (Float)(255) )));
HXDLIN( 662)			this1 = (this1 & -65281);
HXDLIN( 662)			int this2;
HXDLIN( 662)			if ((Value1 > 255)) {
HXLINE( 662)				this2 = 255;
            			}
            			else {
HXLINE( 662)				if ((Value1 < 0)) {
HXLINE( 662)					this2 = 0;
            				}
            				else {
HXLINE( 662)					this2 = Value1;
            				}
            			}
HXDLIN( 662)			this1 = (this1 | (this2 << 8));
            		}
HXLINE( 663)		return Value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_greenFloat,return )

Float FlxColor_Impl__obj::set_blueFloat(int this1,Float Value){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_667_set_blueFloat)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(Value,"Value")
HXLINE( 667)
HXLINE( 668)		{
HXLINE( 668)			int Value1 = ::Math_obj::round((Value * ( (Float)(255) )));
HXDLIN( 668)			this1 = (this1 & -256);
HXDLIN( 668)			int this2;
HXDLIN( 668)			if ((Value1 > 255)) {
HXLINE( 668)				this2 = 255;
            			}
            			else {
HXLINE( 668)				if ((Value1 < 0)) {
HXLINE( 668)					this2 = 0;
            				}
            				else {
HXLINE( 668)					this2 = Value1;
            				}
            			}
HXDLIN( 668)			this1 = (this1 | this2);
            		}
HXLINE( 669)		return Value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_blueFloat,return )

Float FlxColor_Impl__obj::set_alphaFloat(int this1,Float Value){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_673_set_alphaFloat)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(Value,"Value")
HXLINE( 673)
HXLINE( 674)		{
HXLINE( 674)			int Value1 = ::Math_obj::round((Value * ( (Float)(255) )));
HXDLIN( 674)			this1 = (this1 & 16777215);
HXDLIN( 674)			int this2;
HXDLIN( 674)			if ((Value1 > 255)) {
HXLINE( 674)				this2 = 255;
            			}
            			else {
HXLINE( 674)				if ((Value1 < 0)) {
HXLINE( 674)					this2 = 0;
            				}
            				else {
HXLINE( 674)					this2 = Value1;
            				}
            			}
HXDLIN( 674)			this1 = (this1 | (this2 << 24));
            		}
HXLINE( 675)		return Value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_alphaFloat,return )

Float FlxColor_Impl__obj::get_cyan(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_680_get_cyan)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 680)
HXDLIN( 680)		return (((( (Float)(1) ) - (( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) ))) - (( (Float)(1) ) - ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_cyan,return )

Float FlxColor_Impl__obj::get_magenta(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_685_get_magenta)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 685)
HXDLIN( 685)		return (((( (Float)(1) ) - (( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) ))) - (( (Float)(1) ) - ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_magenta,return )

Float FlxColor_Impl__obj::get_yellow(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_690_get_yellow)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 690)
HXDLIN( 690)		return (((( (Float)(1) ) - (( (Float)((this1 & 255)) ) / ( (Float)(255) ))) - (( (Float)(1) ) - ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_yellow,return )

Float FlxColor_Impl__obj::get_black(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_695_get_black)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 695)
HXDLIN( 695)		return (( (Float)(1) ) - ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_black,return )

Float FlxColor_Impl__obj::set_cyan(int this1,Float Value){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_699_set_cyan)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(Value,"Value")
HXLINE( 699)
HXLINE( 700)		{
HXLINE( 700)			Float Magenta = (((( (Float)(1) ) - (( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) ))) - (( (Float)(1) ) - ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))));
HXDLIN( 700)			Float Yellow = (((( (Float)(1) ) - (( (Float)((this1 & 255)) ) / ( (Float)(255) ))) - (( (Float)(1) ) - ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))));
HXDLIN( 700)			Float Black = (( (Float)(1) ) - ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))));
HXDLIN( 700)			Float Alpha = (( (Float)(((this1 >> 24) & 255)) ) / ( (Float)(255) ));
HXDLIN( 700)			{
HXLINE( 700)				Float Value1 = ((( (Float)(1) ) - Value) * (( (Float)(1) ) - Black));
HXDLIN( 700)				{
HXLINE( 700)					int Value2 = ::Math_obj::round((Value1 * ( (Float)(255) )));
HXDLIN( 700)					this1 = (this1 & -16711681);
HXDLIN( 700)					int this2;
HXDLIN( 700)					if ((Value2 > 255)) {
HXLINE( 700)						this2 = 255;
            					}
            					else {
HXLINE( 700)						if ((Value2 < 0)) {
HXLINE( 700)							this2 = 0;
            						}
            						else {
HXLINE( 700)							this2 = Value2;
            						}
            					}
HXDLIN( 700)					this1 = (this1 | (this2 << 16));
            				}
            			}
HXDLIN( 700)			{
HXLINE( 700)				Float Value3 = ((( (Float)(1) ) - Magenta) * (( (Float)(1) ) - Black));
HXDLIN( 700)				{
HXLINE( 700)					int Value4 = ::Math_obj::round((Value3 * ( (Float)(255) )));
HXDLIN( 700)					this1 = (this1 & -65281);
HXDLIN( 700)					int this3;
HXDLIN( 700)					if ((Value4 > 255)) {
HXLINE( 700)						this3 = 255;
            					}
            					else {
HXLINE( 700)						if ((Value4 < 0)) {
HXLINE( 700)							this3 = 0;
            						}
            						else {
HXLINE( 700)							this3 = Value4;
            						}
            					}
HXDLIN( 700)					this1 = (this1 | (this3 << 8));
            				}
            			}
HXDLIN( 700)			{
HXLINE( 700)				Float Value5 = ((( (Float)(1) ) - Yellow) * (( (Float)(1) ) - Black));
HXDLIN( 700)				{
HXLINE( 700)					int Value6 = ::Math_obj::round((Value5 * ( (Float)(255) )));
HXDLIN( 700)					this1 = (this1 & -256);
HXDLIN( 700)					int this4;
HXDLIN( 700)					if ((Value6 > 255)) {
HXLINE( 700)						this4 = 255;
            					}
            					else {
HXLINE( 700)						if ((Value6 < 0)) {
HXLINE( 700)							this4 = 0;
            						}
            						else {
HXLINE( 700)							this4 = Value6;
            						}
            					}
HXDLIN( 700)					this1 = (this1 | this4);
            				}
            			}
HXDLIN( 700)			{
HXLINE( 700)				int Value7 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 700)				this1 = (this1 & 16777215);
HXDLIN( 700)				int this5;
HXDLIN( 700)				if ((Value7 > 255)) {
HXLINE( 700)					this5 = 255;
            				}
            				else {
HXLINE( 700)					if ((Value7 < 0)) {
HXLINE( 700)						this5 = 0;
            					}
            					else {
HXLINE( 700)						this5 = Value7;
            					}
            				}
HXDLIN( 700)				this1 = (this1 | (this5 << 24));
            			}
            		}
HXLINE( 701)		return Value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_cyan,return )

Float FlxColor_Impl__obj::set_magenta(int this1,Float Value){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_705_set_magenta)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(Value,"Value")
HXLINE( 705)
HXLINE( 706)		{
HXLINE( 706)			Float Yellow = (((( (Float)(1) ) - (( (Float)((this1 & 255)) ) / ( (Float)(255) ))) - (( (Float)(1) ) - ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))));
HXDLIN( 706)			Float Black = (( (Float)(1) ) - ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))));
HXDLIN( 706)			Float Alpha = (( (Float)(((this1 >> 24) & 255)) ) / ( (Float)(255) ));
HXDLIN( 706)			{
HXLINE( 706)				Float Value1 = ((( (Float)(1) ) - (((( (Float)(1) ) - (( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) ))) - (( (Float)(1) ) - ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))))) * (( (Float)(1) ) - Black));
HXDLIN( 706)				{
HXLINE( 706)					int Value2 = ::Math_obj::round((Value1 * ( (Float)(255) )));
HXDLIN( 706)					this1 = (this1 & -16711681);
HXDLIN( 706)					int this2;
HXDLIN( 706)					if ((Value2 > 255)) {
HXLINE( 706)						this2 = 255;
            					}
            					else {
HXLINE( 706)						if ((Value2 < 0)) {
HXLINE( 706)							this2 = 0;
            						}
            						else {
HXLINE( 706)							this2 = Value2;
            						}
            					}
HXDLIN( 706)					this1 = (this1 | (this2 << 16));
            				}
            			}
HXDLIN( 706)			{
HXLINE( 706)				Float Value3 = ((( (Float)(1) ) - Value) * (( (Float)(1) ) - Black));
HXDLIN( 706)				{
HXLINE( 706)					int Value4 = ::Math_obj::round((Value3 * ( (Float)(255) )));
HXDLIN( 706)					this1 = (this1 & -65281);
HXDLIN( 706)					int this3;
HXDLIN( 706)					if ((Value4 > 255)) {
HXLINE( 706)						this3 = 255;
            					}
            					else {
HXLINE( 706)						if ((Value4 < 0)) {
HXLINE( 706)							this3 = 0;
            						}
            						else {
HXLINE( 706)							this3 = Value4;
            						}
            					}
HXDLIN( 706)					this1 = (this1 | (this3 << 8));
            				}
            			}
HXDLIN( 706)			{
HXLINE( 706)				Float Value5 = ((( (Float)(1) ) - Yellow) * (( (Float)(1) ) - Black));
HXDLIN( 706)				{
HXLINE( 706)					int Value6 = ::Math_obj::round((Value5 * ( (Float)(255) )));
HXDLIN( 706)					this1 = (this1 & -256);
HXDLIN( 706)					int this4;
HXDLIN( 706)					if ((Value6 > 255)) {
HXLINE( 706)						this4 = 255;
            					}
            					else {
HXLINE( 706)						if ((Value6 < 0)) {
HXLINE( 706)							this4 = 0;
            						}
            						else {
HXLINE( 706)							this4 = Value6;
            						}
            					}
HXDLIN( 706)					this1 = (this1 | this4);
            				}
            			}
HXDLIN( 706)			{
HXLINE( 706)				int Value7 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 706)				this1 = (this1 & 16777215);
HXDLIN( 706)				int this5;
HXDLIN( 706)				if ((Value7 > 255)) {
HXLINE( 706)					this5 = 255;
            				}
            				else {
HXLINE( 706)					if ((Value7 < 0)) {
HXLINE( 706)						this5 = 0;
            					}
            					else {
HXLINE( 706)						this5 = Value7;
            					}
            				}
HXDLIN( 706)				this1 = (this1 | (this5 << 24));
            			}
            		}
HXLINE( 707)		return Value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_magenta,return )

Float FlxColor_Impl__obj::set_yellow(int this1,Float Value){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_711_set_yellow)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(Value,"Value")
HXLINE( 711)
HXLINE( 712)		{
HXLINE( 712)			Float Magenta = (((( (Float)(1) ) - (( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) ))) - (( (Float)(1) ) - ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))));
HXDLIN( 712)			Float Black = (( (Float)(1) ) - ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))));
HXDLIN( 712)			Float Alpha = (( (Float)(((this1 >> 24) & 255)) ) / ( (Float)(255) ));
HXDLIN( 712)			{
HXLINE( 712)				Float Value1 = ((( (Float)(1) ) - (((( (Float)(1) ) - (( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) ))) - (( (Float)(1) ) - ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))))) * (( (Float)(1) ) - Black));
HXDLIN( 712)				{
HXLINE( 712)					int Value2 = ::Math_obj::round((Value1 * ( (Float)(255) )));
HXDLIN( 712)					this1 = (this1 & -16711681);
HXDLIN( 712)					int this2;
HXDLIN( 712)					if ((Value2 > 255)) {
HXLINE( 712)						this2 = 255;
            					}
            					else {
HXLINE( 712)						if ((Value2 < 0)) {
HXLINE( 712)							this2 = 0;
            						}
            						else {
HXLINE( 712)							this2 = Value2;
            						}
            					}
HXDLIN( 712)					this1 = (this1 | (this2 << 16));
            				}
            			}
HXDLIN( 712)			{
HXLINE( 712)				Float Value3 = ((( (Float)(1) ) - Magenta) * (( (Float)(1) ) - Black));
HXDLIN( 712)				{
HXLINE( 712)					int Value4 = ::Math_obj::round((Value3 * ( (Float)(255) )));
HXDLIN( 712)					this1 = (this1 & -65281);
HXDLIN( 712)					int this3;
HXDLIN( 712)					if ((Value4 > 255)) {
HXLINE( 712)						this3 = 255;
            					}
            					else {
HXLINE( 712)						if ((Value4 < 0)) {
HXLINE( 712)							this3 = 0;
            						}
            						else {
HXLINE( 712)							this3 = Value4;
            						}
            					}
HXDLIN( 712)					this1 = (this1 | (this3 << 8));
            				}
            			}
HXDLIN( 712)			{
HXLINE( 712)				Float Value5 = ((( (Float)(1) ) - Value) * (( (Float)(1) ) - Black));
HXDLIN( 712)				{
HXLINE( 712)					int Value6 = ::Math_obj::round((Value5 * ( (Float)(255) )));
HXDLIN( 712)					this1 = (this1 & -256);
HXDLIN( 712)					int this4;
HXDLIN( 712)					if ((Value6 > 255)) {
HXLINE( 712)						this4 = 255;
            					}
            					else {
HXLINE( 712)						if ((Value6 < 0)) {
HXLINE( 712)							this4 = 0;
            						}
            						else {
HXLINE( 712)							this4 = Value6;
            						}
            					}
HXDLIN( 712)					this1 = (this1 | this4);
            				}
            			}
HXDLIN( 712)			{
HXLINE( 712)				int Value7 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 712)				this1 = (this1 & 16777215);
HXDLIN( 712)				int this5;
HXDLIN( 712)				if ((Value7 > 255)) {
HXLINE( 712)					this5 = 255;
            				}
            				else {
HXLINE( 712)					if ((Value7 < 0)) {
HXLINE( 712)						this5 = 0;
            					}
            					else {
HXLINE( 712)						this5 = Value7;
            					}
            				}
HXDLIN( 712)				this1 = (this1 | (this5 << 24));
            			}
            		}
HXLINE( 713)		return Value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_yellow,return )

Float FlxColor_Impl__obj::set_black(int this1,Float Value){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_717_set_black)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(Value,"Value")
HXLINE( 717)
HXLINE( 718)		{
HXLINE( 718)			Float Magenta = (((( (Float)(1) ) - (( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) ))) - (( (Float)(1) ) - ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))));
HXDLIN( 718)			Float Yellow = (((( (Float)(1) ) - (( (Float)((this1 & 255)) ) / ( (Float)(255) ))) - (( (Float)(1) ) - ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))));
HXDLIN( 718)			Float Alpha = (( (Float)(((this1 >> 24) & 255)) ) / ( (Float)(255) ));
HXDLIN( 718)			{
HXLINE( 718)				Float Value1 = ((( (Float)(1) ) - (((( (Float)(1) ) - (( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) ))) - (( (Float)(1) ) - ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))))) * (( (Float)(1) ) - Value));
HXDLIN( 718)				{
HXLINE( 718)					int Value2 = ::Math_obj::round((Value1 * ( (Float)(255) )));
HXDLIN( 718)					this1 = (this1 & -16711681);
HXDLIN( 718)					int this2;
HXDLIN( 718)					if ((Value2 > 255)) {
HXLINE( 718)						this2 = 255;
            					}
            					else {
HXLINE( 718)						if ((Value2 < 0)) {
HXLINE( 718)							this2 = 0;
            						}
            						else {
HXLINE( 718)							this2 = Value2;
            						}
            					}
HXDLIN( 718)					this1 = (this1 | (this2 << 16));
            				}
            			}
HXDLIN( 718)			{
HXLINE( 718)				Float Value3 = ((( (Float)(1) ) - Magenta) * (( (Float)(1) ) - Value));
HXDLIN( 718)				{
HXLINE( 718)					int Value4 = ::Math_obj::round((Value3 * ( (Float)(255) )));
HXDLIN( 718)					this1 = (this1 & -65281);
HXDLIN( 718)					int this3;
HXDLIN( 718)					if ((Value4 > 255)) {
HXLINE( 718)						this3 = 255;
            					}
            					else {
HXLINE( 718)						if ((Value4 < 0)) {
HXLINE( 718)							this3 = 0;
            						}
            						else {
HXLINE( 718)							this3 = Value4;
            						}
            					}
HXDLIN( 718)					this1 = (this1 | (this3 << 8));
            				}
            			}
HXDLIN( 718)			{
HXLINE( 718)				Float Value5 = ((( (Float)(1) ) - Yellow) * (( (Float)(1) ) - Value));
HXDLIN( 718)				{
HXLINE( 718)					int Value6 = ::Math_obj::round((Value5 * ( (Float)(255) )));
HXDLIN( 718)					this1 = (this1 & -256);
HXDLIN( 718)					int this4;
HXDLIN( 718)					if ((Value6 > 255)) {
HXLINE( 718)						this4 = 255;
            					}
            					else {
HXLINE( 718)						if ((Value6 < 0)) {
HXLINE( 718)							this4 = 0;
            						}
            						else {
HXLINE( 718)							this4 = Value6;
            						}
            					}
HXDLIN( 718)					this1 = (this1 | this4);
            				}
            			}
HXDLIN( 718)			{
HXLINE( 718)				int Value7 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 718)				this1 = (this1 & 16777215);
HXDLIN( 718)				int this5;
HXDLIN( 718)				if ((Value7 > 255)) {
HXLINE( 718)					this5 = 255;
            				}
            				else {
HXLINE( 718)					if ((Value7 < 0)) {
HXLINE( 718)						this5 = 0;
            					}
            					else {
HXLINE( 718)						this5 = Value7;
            					}
            				}
HXDLIN( 718)				this1 = (this1 | (this5 << 24));
            			}
            		}
HXLINE( 719)		return Value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_black,return )

Float FlxColor_Impl__obj::get_hue(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_723_get_hue)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 723)
HXLINE( 724)		HX_VARI( Float,hueRad) = ::Math_obj::atan2((::Math_obj::sqrt(( (Float)(3) )) * ((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )) - (( (Float)((this1 & 255)) ) / ( (Float)(255) )))),(((( (Float)(2) ) * (( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) ))) - (( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) ))) - (( (Float)((this1 & 255)) ) / ( (Float)(255) ))));
HXLINE( 725)		HX_VARI( Float,hue) = ( (Float)(0) );
HXLINE( 726)		if ((hueRad != 0)) {
HXLINE( 728)			hue = ((( (Float)(180) ) / ::Math_obj::PI) * ::Math_obj::atan2((::Math_obj::sqrt(( (Float)(3) )) * ((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )) - (( (Float)((this1 & 255)) ) / ( (Float)(255) )))),(((( (Float)(2) ) * (( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) ))) - (( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) ))) - (( (Float)((this1 & 255)) ) / ( (Float)(255) )))));
            		}
HXLINE( 731)		if ((hue < 0)) {
HXLINE( 731)			return (hue + 360);
            		}
            		else {
HXLINE( 731)			return hue;
            		}
HXDLIN( 731)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_hue,return )

Float FlxColor_Impl__obj::get_brightness(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_736_get_brightness)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 736)
HXDLIN( 736)		return ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_brightness,return )

Float FlxColor_Impl__obj::get_saturation(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_741_get_saturation)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 741)
HXDLIN( 741)		return ((::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))) - ::Math_obj::min((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_saturation,return )

Float FlxColor_Impl__obj::get_lightness(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_746_get_lightness)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 746)
HXDLIN( 746)		return ((::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))) + ::Math_obj::min((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))) / ( (Float)(2) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_lightness,return )

Float FlxColor_Impl__obj::set_hue(int this1,Float Value){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_750_set_hue)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(Value,"Value")
HXLINE( 750)
HXLINE( 751)		{
HXLINE( 751)			Float Brightness = ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))));
HXDLIN( 751)			Float Alpha = (( (Float)(((this1 >> 24) & 255)) ) / ( (Float)(255) ));
HXDLIN( 751)			Float chroma = (Brightness * ((::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))) - ::Math_obj::min((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))));
HXDLIN( 751)			Float match = (Brightness - chroma);
HXDLIN( 751)			{
HXLINE( 751)				Float Hue = Value;
HXDLIN( 751)				Float Chroma = chroma;
HXDLIN( 751)				Hue = ::hx::Mod(Hue,360);
HXDLIN( 751)				Float hueD = (Hue / ( (Float)(60) ));
HXDLIN( 751)				Float mid = ((Chroma * (( (Float)(1) ) - ::Math_obj::abs((::hx::Mod(hueD,2) - ( (Float)(1) ))))) + match);
HXDLIN( 751)				Chroma = (Chroma + match);
HXDLIN( 751)				switch((int)(::Std_obj::_hx_int(hueD))){
            					case (int)0: {
HXLINE( 751)						{
HXLINE( 751)							int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 751)							this1 = (this1 & -16711681);
HXDLIN( 751)							int this2;
HXDLIN( 751)							if ((Value > 255)) {
HXLINE( 751)								this2 = 255;
            							}
            							else {
HXLINE( 751)								if ((Value < 0)) {
HXLINE( 751)									this2 = 0;
            								}
            								else {
HXLINE( 751)									this2 = Value;
            								}
            							}
HXDLIN( 751)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 751)						{
HXLINE( 751)							int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 751)							this1 = (this1 & -65281);
HXDLIN( 751)							int this3;
HXDLIN( 751)							if ((Value1 > 255)) {
HXLINE( 751)								this3 = 255;
            							}
            							else {
HXLINE( 751)								if ((Value1 < 0)) {
HXLINE( 751)									this3 = 0;
            								}
            								else {
HXLINE( 751)									this3 = Value1;
            								}
            							}
HXDLIN( 751)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 751)						{
HXLINE( 751)							int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 751)							this1 = (this1 & -256);
HXDLIN( 751)							int this4;
HXDLIN( 751)							if ((Value2 > 255)) {
HXLINE( 751)								this4 = 255;
            							}
            							else {
HXLINE( 751)								if ((Value2 < 0)) {
HXLINE( 751)									this4 = 0;
            								}
            								else {
HXLINE( 751)									this4 = Value2;
            								}
            							}
HXDLIN( 751)							this1 = (this1 | this4);
            						}
HXDLIN( 751)						{
HXLINE( 751)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 751)							this1 = (this1 & 16777215);
HXDLIN( 751)							int this5;
HXDLIN( 751)							if ((Value3 > 255)) {
HXLINE( 751)								this5 = 255;
            							}
            							else {
HXLINE( 751)								if ((Value3 < 0)) {
HXLINE( 751)									this5 = 0;
            								}
            								else {
HXLINE( 751)									this5 = Value3;
            								}
            							}
HXDLIN( 751)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 751)						{
HXLINE( 751)							int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 751)							this1 = (this1 & -16711681);
HXDLIN( 751)							int this2;
HXDLIN( 751)							if ((Value > 255)) {
HXLINE( 751)								this2 = 255;
            							}
            							else {
HXLINE( 751)								if ((Value < 0)) {
HXLINE( 751)									this2 = 0;
            								}
            								else {
HXLINE( 751)									this2 = Value;
            								}
            							}
HXDLIN( 751)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 751)						{
HXLINE( 751)							int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 751)							this1 = (this1 & -65281);
HXDLIN( 751)							int this3;
HXDLIN( 751)							if ((Value1 > 255)) {
HXLINE( 751)								this3 = 255;
            							}
            							else {
HXLINE( 751)								if ((Value1 < 0)) {
HXLINE( 751)									this3 = 0;
            								}
            								else {
HXLINE( 751)									this3 = Value1;
            								}
            							}
HXDLIN( 751)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 751)						{
HXLINE( 751)							int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 751)							this1 = (this1 & -256);
HXDLIN( 751)							int this4;
HXDLIN( 751)							if ((Value2 > 255)) {
HXLINE( 751)								this4 = 255;
            							}
            							else {
HXLINE( 751)								if ((Value2 < 0)) {
HXLINE( 751)									this4 = 0;
            								}
            								else {
HXLINE( 751)									this4 = Value2;
            								}
            							}
HXDLIN( 751)							this1 = (this1 | this4);
            						}
HXDLIN( 751)						{
HXLINE( 751)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 751)							this1 = (this1 & 16777215);
HXDLIN( 751)							int this5;
HXDLIN( 751)							if ((Value3 > 255)) {
HXLINE( 751)								this5 = 255;
            							}
            							else {
HXLINE( 751)								if ((Value3 < 0)) {
HXLINE( 751)									this5 = 0;
            								}
            								else {
HXLINE( 751)									this5 = Value3;
            								}
            							}
HXDLIN( 751)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)2: {
HXLINE( 751)						{
HXLINE( 751)							int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 751)							this1 = (this1 & -16711681);
HXDLIN( 751)							int this2;
HXDLIN( 751)							if ((Value > 255)) {
HXLINE( 751)								this2 = 255;
            							}
            							else {
HXLINE( 751)								if ((Value < 0)) {
HXLINE( 751)									this2 = 0;
            								}
            								else {
HXLINE( 751)									this2 = Value;
            								}
            							}
HXDLIN( 751)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 751)						{
HXLINE( 751)							int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 751)							this1 = (this1 & -65281);
HXDLIN( 751)							int this3;
HXDLIN( 751)							if ((Value1 > 255)) {
HXLINE( 751)								this3 = 255;
            							}
            							else {
HXLINE( 751)								if ((Value1 < 0)) {
HXLINE( 751)									this3 = 0;
            								}
            								else {
HXLINE( 751)									this3 = Value1;
            								}
            							}
HXDLIN( 751)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 751)						{
HXLINE( 751)							int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 751)							this1 = (this1 & -256);
HXDLIN( 751)							int this4;
HXDLIN( 751)							if ((Value2 > 255)) {
HXLINE( 751)								this4 = 255;
            							}
            							else {
HXLINE( 751)								if ((Value2 < 0)) {
HXLINE( 751)									this4 = 0;
            								}
            								else {
HXLINE( 751)									this4 = Value2;
            								}
            							}
HXDLIN( 751)							this1 = (this1 | this4);
            						}
HXDLIN( 751)						{
HXLINE( 751)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 751)							this1 = (this1 & 16777215);
HXDLIN( 751)							int this5;
HXDLIN( 751)							if ((Value3 > 255)) {
HXLINE( 751)								this5 = 255;
            							}
            							else {
HXLINE( 751)								if ((Value3 < 0)) {
HXLINE( 751)									this5 = 0;
            								}
            								else {
HXLINE( 751)									this5 = Value3;
            								}
            							}
HXDLIN( 751)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)3: {
HXLINE( 751)						{
HXLINE( 751)							int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 751)							this1 = (this1 & -16711681);
HXDLIN( 751)							int this2;
HXDLIN( 751)							if ((Value > 255)) {
HXLINE( 751)								this2 = 255;
            							}
            							else {
HXLINE( 751)								if ((Value < 0)) {
HXLINE( 751)									this2 = 0;
            								}
            								else {
HXLINE( 751)									this2 = Value;
            								}
            							}
HXDLIN( 751)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 751)						{
HXLINE( 751)							int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 751)							this1 = (this1 & -65281);
HXDLIN( 751)							int this3;
HXDLIN( 751)							if ((Value1 > 255)) {
HXLINE( 751)								this3 = 255;
            							}
            							else {
HXLINE( 751)								if ((Value1 < 0)) {
HXLINE( 751)									this3 = 0;
            								}
            								else {
HXLINE( 751)									this3 = Value1;
            								}
            							}
HXDLIN( 751)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 751)						{
HXLINE( 751)							int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 751)							this1 = (this1 & -256);
HXDLIN( 751)							int this4;
HXDLIN( 751)							if ((Value2 > 255)) {
HXLINE( 751)								this4 = 255;
            							}
            							else {
HXLINE( 751)								if ((Value2 < 0)) {
HXLINE( 751)									this4 = 0;
            								}
            								else {
HXLINE( 751)									this4 = Value2;
            								}
            							}
HXDLIN( 751)							this1 = (this1 | this4);
            						}
HXDLIN( 751)						{
HXLINE( 751)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 751)							this1 = (this1 & 16777215);
HXDLIN( 751)							int this5;
HXDLIN( 751)							if ((Value3 > 255)) {
HXLINE( 751)								this5 = 255;
            							}
            							else {
HXLINE( 751)								if ((Value3 < 0)) {
HXLINE( 751)									this5 = 0;
            								}
            								else {
HXLINE( 751)									this5 = Value3;
            								}
            							}
HXDLIN( 751)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)4: {
HXLINE( 751)						{
HXLINE( 751)							int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 751)							this1 = (this1 & -16711681);
HXDLIN( 751)							int this2;
HXDLIN( 751)							if ((Value > 255)) {
HXLINE( 751)								this2 = 255;
            							}
            							else {
HXLINE( 751)								if ((Value < 0)) {
HXLINE( 751)									this2 = 0;
            								}
            								else {
HXLINE( 751)									this2 = Value;
            								}
            							}
HXDLIN( 751)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 751)						{
HXLINE( 751)							int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 751)							this1 = (this1 & -65281);
HXDLIN( 751)							int this3;
HXDLIN( 751)							if ((Value1 > 255)) {
HXLINE( 751)								this3 = 255;
            							}
            							else {
HXLINE( 751)								if ((Value1 < 0)) {
HXLINE( 751)									this3 = 0;
            								}
            								else {
HXLINE( 751)									this3 = Value1;
            								}
            							}
HXDLIN( 751)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 751)						{
HXLINE( 751)							int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 751)							this1 = (this1 & -256);
HXDLIN( 751)							int this4;
HXDLIN( 751)							if ((Value2 > 255)) {
HXLINE( 751)								this4 = 255;
            							}
            							else {
HXLINE( 751)								if ((Value2 < 0)) {
HXLINE( 751)									this4 = 0;
            								}
            								else {
HXLINE( 751)									this4 = Value2;
            								}
            							}
HXDLIN( 751)							this1 = (this1 | this4);
            						}
HXDLIN( 751)						{
HXLINE( 751)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 751)							this1 = (this1 & 16777215);
HXDLIN( 751)							int this5;
HXDLIN( 751)							if ((Value3 > 255)) {
HXLINE( 751)								this5 = 255;
            							}
            							else {
HXLINE( 751)								if ((Value3 < 0)) {
HXLINE( 751)									this5 = 0;
            								}
            								else {
HXLINE( 751)									this5 = Value3;
            								}
            							}
HXDLIN( 751)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)5: {
HXLINE( 751)						{
HXLINE( 751)							int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 751)							this1 = (this1 & -16711681);
HXDLIN( 751)							int this2;
HXDLIN( 751)							if ((Value > 255)) {
HXLINE( 751)								this2 = 255;
            							}
            							else {
HXLINE( 751)								if ((Value < 0)) {
HXLINE( 751)									this2 = 0;
            								}
            								else {
HXLINE( 751)									this2 = Value;
            								}
            							}
HXDLIN( 751)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 751)						{
HXLINE( 751)							int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 751)							this1 = (this1 & -65281);
HXDLIN( 751)							int this3;
HXDLIN( 751)							if ((Value1 > 255)) {
HXLINE( 751)								this3 = 255;
            							}
            							else {
HXLINE( 751)								if ((Value1 < 0)) {
HXLINE( 751)									this3 = 0;
            								}
            								else {
HXLINE( 751)									this3 = Value1;
            								}
            							}
HXDLIN( 751)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 751)						{
HXLINE( 751)							int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 751)							this1 = (this1 & -256);
HXDLIN( 751)							int this4;
HXDLIN( 751)							if ((Value2 > 255)) {
HXLINE( 751)								this4 = 255;
            							}
            							else {
HXLINE( 751)								if ((Value2 < 0)) {
HXLINE( 751)									this4 = 0;
            								}
            								else {
HXLINE( 751)									this4 = Value2;
            								}
            							}
HXDLIN( 751)							this1 = (this1 | this4);
            						}
HXDLIN( 751)						{
HXLINE( 751)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 751)							this1 = (this1 & 16777215);
HXDLIN( 751)							int this5;
HXDLIN( 751)							if ((Value3 > 255)) {
HXLINE( 751)								this5 = 255;
            							}
            							else {
HXLINE( 751)								if ((Value3 < 0)) {
HXLINE( 751)									this5 = 0;
            								}
            								else {
HXLINE( 751)									this5 = Value3;
            								}
            							}
HXDLIN( 751)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            				}
            			}
            		}
HXLINE( 752)		return Value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_hue,return )

Float FlxColor_Impl__obj::set_saturation(int this1,Float Value){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_756_set_saturation)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(Value,"Value")
HXLINE( 756)
HXLINE( 757)		{
HXLINE( 757)			Float Hue = ::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(this1);
HXDLIN( 757)			Float Brightness = ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))));
HXDLIN( 757)			Float Alpha = (( (Float)(((this1 >> 24) & 255)) ) / ( (Float)(255) ));
HXDLIN( 757)			Float chroma = (Brightness * Value);
HXDLIN( 757)			Float match = (Brightness - chroma);
HXDLIN( 757)			{
HXLINE( 757)				Float Hue1 = Hue;
HXDLIN( 757)				Float Chroma = chroma;
HXDLIN( 757)				Hue1 = ::hx::Mod(Hue1,360);
HXDLIN( 757)				Float hueD = (Hue1 / ( (Float)(60) ));
HXDLIN( 757)				Float mid = ((Chroma * (( (Float)(1) ) - ::Math_obj::abs((::hx::Mod(hueD,2) - ( (Float)(1) ))))) + match);
HXDLIN( 757)				Chroma = (Chroma + match);
HXDLIN( 757)				switch((int)(::Std_obj::_hx_int(hueD))){
            					case (int)0: {
HXLINE( 757)						{
HXLINE( 757)							int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 757)							this1 = (this1 & -16711681);
HXDLIN( 757)							int this2;
HXDLIN( 757)							if ((Value > 255)) {
HXLINE( 757)								this2 = 255;
            							}
            							else {
HXLINE( 757)								if ((Value < 0)) {
HXLINE( 757)									this2 = 0;
            								}
            								else {
HXLINE( 757)									this2 = Value;
            								}
            							}
HXDLIN( 757)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 757)						{
HXLINE( 757)							int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 757)							this1 = (this1 & -65281);
HXDLIN( 757)							int this3;
HXDLIN( 757)							if ((Value1 > 255)) {
HXLINE( 757)								this3 = 255;
            							}
            							else {
HXLINE( 757)								if ((Value1 < 0)) {
HXLINE( 757)									this3 = 0;
            								}
            								else {
HXLINE( 757)									this3 = Value1;
            								}
            							}
HXDLIN( 757)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 757)						{
HXLINE( 757)							int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 757)							this1 = (this1 & -256);
HXDLIN( 757)							int this4;
HXDLIN( 757)							if ((Value2 > 255)) {
HXLINE( 757)								this4 = 255;
            							}
            							else {
HXLINE( 757)								if ((Value2 < 0)) {
HXLINE( 757)									this4 = 0;
            								}
            								else {
HXLINE( 757)									this4 = Value2;
            								}
            							}
HXDLIN( 757)							this1 = (this1 | this4);
            						}
HXDLIN( 757)						{
HXLINE( 757)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 757)							this1 = (this1 & 16777215);
HXDLIN( 757)							int this5;
HXDLIN( 757)							if ((Value3 > 255)) {
HXLINE( 757)								this5 = 255;
            							}
            							else {
HXLINE( 757)								if ((Value3 < 0)) {
HXLINE( 757)									this5 = 0;
            								}
            								else {
HXLINE( 757)									this5 = Value3;
            								}
            							}
HXDLIN( 757)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 757)						{
HXLINE( 757)							int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 757)							this1 = (this1 & -16711681);
HXDLIN( 757)							int this2;
HXDLIN( 757)							if ((Value > 255)) {
HXLINE( 757)								this2 = 255;
            							}
            							else {
HXLINE( 757)								if ((Value < 0)) {
HXLINE( 757)									this2 = 0;
            								}
            								else {
HXLINE( 757)									this2 = Value;
            								}
            							}
HXDLIN( 757)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 757)						{
HXLINE( 757)							int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 757)							this1 = (this1 & -65281);
HXDLIN( 757)							int this3;
HXDLIN( 757)							if ((Value1 > 255)) {
HXLINE( 757)								this3 = 255;
            							}
            							else {
HXLINE( 757)								if ((Value1 < 0)) {
HXLINE( 757)									this3 = 0;
            								}
            								else {
HXLINE( 757)									this3 = Value1;
            								}
            							}
HXDLIN( 757)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 757)						{
HXLINE( 757)							int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 757)							this1 = (this1 & -256);
HXDLIN( 757)							int this4;
HXDLIN( 757)							if ((Value2 > 255)) {
HXLINE( 757)								this4 = 255;
            							}
            							else {
HXLINE( 757)								if ((Value2 < 0)) {
HXLINE( 757)									this4 = 0;
            								}
            								else {
HXLINE( 757)									this4 = Value2;
            								}
            							}
HXDLIN( 757)							this1 = (this1 | this4);
            						}
HXDLIN( 757)						{
HXLINE( 757)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 757)							this1 = (this1 & 16777215);
HXDLIN( 757)							int this5;
HXDLIN( 757)							if ((Value3 > 255)) {
HXLINE( 757)								this5 = 255;
            							}
            							else {
HXLINE( 757)								if ((Value3 < 0)) {
HXLINE( 757)									this5 = 0;
            								}
            								else {
HXLINE( 757)									this5 = Value3;
            								}
            							}
HXDLIN( 757)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)2: {
HXLINE( 757)						{
HXLINE( 757)							int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 757)							this1 = (this1 & -16711681);
HXDLIN( 757)							int this2;
HXDLIN( 757)							if ((Value > 255)) {
HXLINE( 757)								this2 = 255;
            							}
            							else {
HXLINE( 757)								if ((Value < 0)) {
HXLINE( 757)									this2 = 0;
            								}
            								else {
HXLINE( 757)									this2 = Value;
            								}
            							}
HXDLIN( 757)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 757)						{
HXLINE( 757)							int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 757)							this1 = (this1 & -65281);
HXDLIN( 757)							int this3;
HXDLIN( 757)							if ((Value1 > 255)) {
HXLINE( 757)								this3 = 255;
            							}
            							else {
HXLINE( 757)								if ((Value1 < 0)) {
HXLINE( 757)									this3 = 0;
            								}
            								else {
HXLINE( 757)									this3 = Value1;
            								}
            							}
HXDLIN( 757)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 757)						{
HXLINE( 757)							int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 757)							this1 = (this1 & -256);
HXDLIN( 757)							int this4;
HXDLIN( 757)							if ((Value2 > 255)) {
HXLINE( 757)								this4 = 255;
            							}
            							else {
HXLINE( 757)								if ((Value2 < 0)) {
HXLINE( 757)									this4 = 0;
            								}
            								else {
HXLINE( 757)									this4 = Value2;
            								}
            							}
HXDLIN( 757)							this1 = (this1 | this4);
            						}
HXDLIN( 757)						{
HXLINE( 757)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 757)							this1 = (this1 & 16777215);
HXDLIN( 757)							int this5;
HXDLIN( 757)							if ((Value3 > 255)) {
HXLINE( 757)								this5 = 255;
            							}
            							else {
HXLINE( 757)								if ((Value3 < 0)) {
HXLINE( 757)									this5 = 0;
            								}
            								else {
HXLINE( 757)									this5 = Value3;
            								}
            							}
HXDLIN( 757)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)3: {
HXLINE( 757)						{
HXLINE( 757)							int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 757)							this1 = (this1 & -16711681);
HXDLIN( 757)							int this2;
HXDLIN( 757)							if ((Value > 255)) {
HXLINE( 757)								this2 = 255;
            							}
            							else {
HXLINE( 757)								if ((Value < 0)) {
HXLINE( 757)									this2 = 0;
            								}
            								else {
HXLINE( 757)									this2 = Value;
            								}
            							}
HXDLIN( 757)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 757)						{
HXLINE( 757)							int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 757)							this1 = (this1 & -65281);
HXDLIN( 757)							int this3;
HXDLIN( 757)							if ((Value1 > 255)) {
HXLINE( 757)								this3 = 255;
            							}
            							else {
HXLINE( 757)								if ((Value1 < 0)) {
HXLINE( 757)									this3 = 0;
            								}
            								else {
HXLINE( 757)									this3 = Value1;
            								}
            							}
HXDLIN( 757)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 757)						{
HXLINE( 757)							int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 757)							this1 = (this1 & -256);
HXDLIN( 757)							int this4;
HXDLIN( 757)							if ((Value2 > 255)) {
HXLINE( 757)								this4 = 255;
            							}
            							else {
HXLINE( 757)								if ((Value2 < 0)) {
HXLINE( 757)									this4 = 0;
            								}
            								else {
HXLINE( 757)									this4 = Value2;
            								}
            							}
HXDLIN( 757)							this1 = (this1 | this4);
            						}
HXDLIN( 757)						{
HXLINE( 757)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 757)							this1 = (this1 & 16777215);
HXDLIN( 757)							int this5;
HXDLIN( 757)							if ((Value3 > 255)) {
HXLINE( 757)								this5 = 255;
            							}
            							else {
HXLINE( 757)								if ((Value3 < 0)) {
HXLINE( 757)									this5 = 0;
            								}
            								else {
HXLINE( 757)									this5 = Value3;
            								}
            							}
HXDLIN( 757)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)4: {
HXLINE( 757)						{
HXLINE( 757)							int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 757)							this1 = (this1 & -16711681);
HXDLIN( 757)							int this2;
HXDLIN( 757)							if ((Value > 255)) {
HXLINE( 757)								this2 = 255;
            							}
            							else {
HXLINE( 757)								if ((Value < 0)) {
HXLINE( 757)									this2 = 0;
            								}
            								else {
HXLINE( 757)									this2 = Value;
            								}
            							}
HXDLIN( 757)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 757)						{
HXLINE( 757)							int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 757)							this1 = (this1 & -65281);
HXDLIN( 757)							int this3;
HXDLIN( 757)							if ((Value1 > 255)) {
HXLINE( 757)								this3 = 255;
            							}
            							else {
HXLINE( 757)								if ((Value1 < 0)) {
HXLINE( 757)									this3 = 0;
            								}
            								else {
HXLINE( 757)									this3 = Value1;
            								}
            							}
HXDLIN( 757)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 757)						{
HXLINE( 757)							int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 757)							this1 = (this1 & -256);
HXDLIN( 757)							int this4;
HXDLIN( 757)							if ((Value2 > 255)) {
HXLINE( 757)								this4 = 255;
            							}
            							else {
HXLINE( 757)								if ((Value2 < 0)) {
HXLINE( 757)									this4 = 0;
            								}
            								else {
HXLINE( 757)									this4 = Value2;
            								}
            							}
HXDLIN( 757)							this1 = (this1 | this4);
            						}
HXDLIN( 757)						{
HXLINE( 757)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 757)							this1 = (this1 & 16777215);
HXDLIN( 757)							int this5;
HXDLIN( 757)							if ((Value3 > 255)) {
HXLINE( 757)								this5 = 255;
            							}
            							else {
HXLINE( 757)								if ((Value3 < 0)) {
HXLINE( 757)									this5 = 0;
            								}
            								else {
HXLINE( 757)									this5 = Value3;
            								}
            							}
HXDLIN( 757)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)5: {
HXLINE( 757)						{
HXLINE( 757)							int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 757)							this1 = (this1 & -16711681);
HXDLIN( 757)							int this2;
HXDLIN( 757)							if ((Value > 255)) {
HXLINE( 757)								this2 = 255;
            							}
            							else {
HXLINE( 757)								if ((Value < 0)) {
HXLINE( 757)									this2 = 0;
            								}
            								else {
HXLINE( 757)									this2 = Value;
            								}
            							}
HXDLIN( 757)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 757)						{
HXLINE( 757)							int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 757)							this1 = (this1 & -65281);
HXDLIN( 757)							int this3;
HXDLIN( 757)							if ((Value1 > 255)) {
HXLINE( 757)								this3 = 255;
            							}
            							else {
HXLINE( 757)								if ((Value1 < 0)) {
HXLINE( 757)									this3 = 0;
            								}
            								else {
HXLINE( 757)									this3 = Value1;
            								}
            							}
HXDLIN( 757)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 757)						{
HXLINE( 757)							int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 757)							this1 = (this1 & -256);
HXDLIN( 757)							int this4;
HXDLIN( 757)							if ((Value2 > 255)) {
HXLINE( 757)								this4 = 255;
            							}
            							else {
HXLINE( 757)								if ((Value2 < 0)) {
HXLINE( 757)									this4 = 0;
            								}
            								else {
HXLINE( 757)									this4 = Value2;
            								}
            							}
HXDLIN( 757)							this1 = (this1 | this4);
            						}
HXDLIN( 757)						{
HXLINE( 757)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 757)							this1 = (this1 & 16777215);
HXDLIN( 757)							int this5;
HXDLIN( 757)							if ((Value3 > 255)) {
HXLINE( 757)								this5 = 255;
            							}
            							else {
HXLINE( 757)								if ((Value3 < 0)) {
HXLINE( 757)									this5 = 0;
            								}
            								else {
HXLINE( 757)									this5 = Value3;
            								}
            							}
HXDLIN( 757)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            				}
            			}
            		}
HXLINE( 758)		return Value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_saturation,return )

Float FlxColor_Impl__obj::set_brightness(int this1,Float Value){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_762_set_brightness)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(Value,"Value")
HXLINE( 762)
HXLINE( 763)		{
HXLINE( 763)			Float Hue = ::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(this1);
HXDLIN( 763)			Float Alpha = (( (Float)(((this1 >> 24) & 255)) ) / ( (Float)(255) ));
HXDLIN( 763)			Float chroma = (Value * ((::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))) - ::Math_obj::min((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))));
HXDLIN( 763)			Float match = (Value - chroma);
HXDLIN( 763)			{
HXLINE( 763)				Float Hue1 = Hue;
HXDLIN( 763)				Float Chroma = chroma;
HXDLIN( 763)				Hue1 = ::hx::Mod(Hue1,360);
HXDLIN( 763)				Float hueD = (Hue1 / ( (Float)(60) ));
HXDLIN( 763)				Float mid = ((Chroma * (( (Float)(1) ) - ::Math_obj::abs((::hx::Mod(hueD,2) - ( (Float)(1) ))))) + match);
HXDLIN( 763)				Chroma = (Chroma + match);
HXDLIN( 763)				switch((int)(::Std_obj::_hx_int(hueD))){
            					case (int)0: {
HXLINE( 763)						{
HXLINE( 763)							int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 763)							this1 = (this1 & -16711681);
HXDLIN( 763)							int this2;
HXDLIN( 763)							if ((Value > 255)) {
HXLINE( 763)								this2 = 255;
            							}
            							else {
HXLINE( 763)								if ((Value < 0)) {
HXLINE( 763)									this2 = 0;
            								}
            								else {
HXLINE( 763)									this2 = Value;
            								}
            							}
HXDLIN( 763)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 763)						{
HXLINE( 763)							int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 763)							this1 = (this1 & -65281);
HXDLIN( 763)							int this3;
HXDLIN( 763)							if ((Value1 > 255)) {
HXLINE( 763)								this3 = 255;
            							}
            							else {
HXLINE( 763)								if ((Value1 < 0)) {
HXLINE( 763)									this3 = 0;
            								}
            								else {
HXLINE( 763)									this3 = Value1;
            								}
            							}
HXDLIN( 763)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 763)						{
HXLINE( 763)							int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 763)							this1 = (this1 & -256);
HXDLIN( 763)							int this4;
HXDLIN( 763)							if ((Value2 > 255)) {
HXLINE( 763)								this4 = 255;
            							}
            							else {
HXLINE( 763)								if ((Value2 < 0)) {
HXLINE( 763)									this4 = 0;
            								}
            								else {
HXLINE( 763)									this4 = Value2;
            								}
            							}
HXDLIN( 763)							this1 = (this1 | this4);
            						}
HXDLIN( 763)						{
HXLINE( 763)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 763)							this1 = (this1 & 16777215);
HXDLIN( 763)							int this5;
HXDLIN( 763)							if ((Value3 > 255)) {
HXLINE( 763)								this5 = 255;
            							}
            							else {
HXLINE( 763)								if ((Value3 < 0)) {
HXLINE( 763)									this5 = 0;
            								}
            								else {
HXLINE( 763)									this5 = Value3;
            								}
            							}
HXDLIN( 763)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 763)						{
HXLINE( 763)							int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 763)							this1 = (this1 & -16711681);
HXDLIN( 763)							int this2;
HXDLIN( 763)							if ((Value > 255)) {
HXLINE( 763)								this2 = 255;
            							}
            							else {
HXLINE( 763)								if ((Value < 0)) {
HXLINE( 763)									this2 = 0;
            								}
            								else {
HXLINE( 763)									this2 = Value;
            								}
            							}
HXDLIN( 763)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 763)						{
HXLINE( 763)							int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 763)							this1 = (this1 & -65281);
HXDLIN( 763)							int this3;
HXDLIN( 763)							if ((Value1 > 255)) {
HXLINE( 763)								this3 = 255;
            							}
            							else {
HXLINE( 763)								if ((Value1 < 0)) {
HXLINE( 763)									this3 = 0;
            								}
            								else {
HXLINE( 763)									this3 = Value1;
            								}
            							}
HXDLIN( 763)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 763)						{
HXLINE( 763)							int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 763)							this1 = (this1 & -256);
HXDLIN( 763)							int this4;
HXDLIN( 763)							if ((Value2 > 255)) {
HXLINE( 763)								this4 = 255;
            							}
            							else {
HXLINE( 763)								if ((Value2 < 0)) {
HXLINE( 763)									this4 = 0;
            								}
            								else {
HXLINE( 763)									this4 = Value2;
            								}
            							}
HXDLIN( 763)							this1 = (this1 | this4);
            						}
HXDLIN( 763)						{
HXLINE( 763)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 763)							this1 = (this1 & 16777215);
HXDLIN( 763)							int this5;
HXDLIN( 763)							if ((Value3 > 255)) {
HXLINE( 763)								this5 = 255;
            							}
            							else {
HXLINE( 763)								if ((Value3 < 0)) {
HXLINE( 763)									this5 = 0;
            								}
            								else {
HXLINE( 763)									this5 = Value3;
            								}
            							}
HXDLIN( 763)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)2: {
HXLINE( 763)						{
HXLINE( 763)							int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 763)							this1 = (this1 & -16711681);
HXDLIN( 763)							int this2;
HXDLIN( 763)							if ((Value > 255)) {
HXLINE( 763)								this2 = 255;
            							}
            							else {
HXLINE( 763)								if ((Value < 0)) {
HXLINE( 763)									this2 = 0;
            								}
            								else {
HXLINE( 763)									this2 = Value;
            								}
            							}
HXDLIN( 763)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 763)						{
HXLINE( 763)							int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 763)							this1 = (this1 & -65281);
HXDLIN( 763)							int this3;
HXDLIN( 763)							if ((Value1 > 255)) {
HXLINE( 763)								this3 = 255;
            							}
            							else {
HXLINE( 763)								if ((Value1 < 0)) {
HXLINE( 763)									this3 = 0;
            								}
            								else {
HXLINE( 763)									this3 = Value1;
            								}
            							}
HXDLIN( 763)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 763)						{
HXLINE( 763)							int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 763)							this1 = (this1 & -256);
HXDLIN( 763)							int this4;
HXDLIN( 763)							if ((Value2 > 255)) {
HXLINE( 763)								this4 = 255;
            							}
            							else {
HXLINE( 763)								if ((Value2 < 0)) {
HXLINE( 763)									this4 = 0;
            								}
            								else {
HXLINE( 763)									this4 = Value2;
            								}
            							}
HXDLIN( 763)							this1 = (this1 | this4);
            						}
HXDLIN( 763)						{
HXLINE( 763)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 763)							this1 = (this1 & 16777215);
HXDLIN( 763)							int this5;
HXDLIN( 763)							if ((Value3 > 255)) {
HXLINE( 763)								this5 = 255;
            							}
            							else {
HXLINE( 763)								if ((Value3 < 0)) {
HXLINE( 763)									this5 = 0;
            								}
            								else {
HXLINE( 763)									this5 = Value3;
            								}
            							}
HXDLIN( 763)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)3: {
HXLINE( 763)						{
HXLINE( 763)							int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 763)							this1 = (this1 & -16711681);
HXDLIN( 763)							int this2;
HXDLIN( 763)							if ((Value > 255)) {
HXLINE( 763)								this2 = 255;
            							}
            							else {
HXLINE( 763)								if ((Value < 0)) {
HXLINE( 763)									this2 = 0;
            								}
            								else {
HXLINE( 763)									this2 = Value;
            								}
            							}
HXDLIN( 763)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 763)						{
HXLINE( 763)							int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 763)							this1 = (this1 & -65281);
HXDLIN( 763)							int this3;
HXDLIN( 763)							if ((Value1 > 255)) {
HXLINE( 763)								this3 = 255;
            							}
            							else {
HXLINE( 763)								if ((Value1 < 0)) {
HXLINE( 763)									this3 = 0;
            								}
            								else {
HXLINE( 763)									this3 = Value1;
            								}
            							}
HXDLIN( 763)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 763)						{
HXLINE( 763)							int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 763)							this1 = (this1 & -256);
HXDLIN( 763)							int this4;
HXDLIN( 763)							if ((Value2 > 255)) {
HXLINE( 763)								this4 = 255;
            							}
            							else {
HXLINE( 763)								if ((Value2 < 0)) {
HXLINE( 763)									this4 = 0;
            								}
            								else {
HXLINE( 763)									this4 = Value2;
            								}
            							}
HXDLIN( 763)							this1 = (this1 | this4);
            						}
HXDLIN( 763)						{
HXLINE( 763)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 763)							this1 = (this1 & 16777215);
HXDLIN( 763)							int this5;
HXDLIN( 763)							if ((Value3 > 255)) {
HXLINE( 763)								this5 = 255;
            							}
            							else {
HXLINE( 763)								if ((Value3 < 0)) {
HXLINE( 763)									this5 = 0;
            								}
            								else {
HXLINE( 763)									this5 = Value3;
            								}
            							}
HXDLIN( 763)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)4: {
HXLINE( 763)						{
HXLINE( 763)							int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 763)							this1 = (this1 & -16711681);
HXDLIN( 763)							int this2;
HXDLIN( 763)							if ((Value > 255)) {
HXLINE( 763)								this2 = 255;
            							}
            							else {
HXLINE( 763)								if ((Value < 0)) {
HXLINE( 763)									this2 = 0;
            								}
            								else {
HXLINE( 763)									this2 = Value;
            								}
            							}
HXDLIN( 763)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 763)						{
HXLINE( 763)							int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 763)							this1 = (this1 & -65281);
HXDLIN( 763)							int this3;
HXDLIN( 763)							if ((Value1 > 255)) {
HXLINE( 763)								this3 = 255;
            							}
            							else {
HXLINE( 763)								if ((Value1 < 0)) {
HXLINE( 763)									this3 = 0;
            								}
            								else {
HXLINE( 763)									this3 = Value1;
            								}
            							}
HXDLIN( 763)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 763)						{
HXLINE( 763)							int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 763)							this1 = (this1 & -256);
HXDLIN( 763)							int this4;
HXDLIN( 763)							if ((Value2 > 255)) {
HXLINE( 763)								this4 = 255;
            							}
            							else {
HXLINE( 763)								if ((Value2 < 0)) {
HXLINE( 763)									this4 = 0;
            								}
            								else {
HXLINE( 763)									this4 = Value2;
            								}
            							}
HXDLIN( 763)							this1 = (this1 | this4);
            						}
HXDLIN( 763)						{
HXLINE( 763)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 763)							this1 = (this1 & 16777215);
HXDLIN( 763)							int this5;
HXDLIN( 763)							if ((Value3 > 255)) {
HXLINE( 763)								this5 = 255;
            							}
            							else {
HXLINE( 763)								if ((Value3 < 0)) {
HXLINE( 763)									this5 = 0;
            								}
            								else {
HXLINE( 763)									this5 = Value3;
            								}
            							}
HXDLIN( 763)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)5: {
HXLINE( 763)						{
HXLINE( 763)							int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 763)							this1 = (this1 & -16711681);
HXDLIN( 763)							int this2;
HXDLIN( 763)							if ((Value > 255)) {
HXLINE( 763)								this2 = 255;
            							}
            							else {
HXLINE( 763)								if ((Value < 0)) {
HXLINE( 763)									this2 = 0;
            								}
            								else {
HXLINE( 763)									this2 = Value;
            								}
            							}
HXDLIN( 763)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 763)						{
HXLINE( 763)							int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 763)							this1 = (this1 & -65281);
HXDLIN( 763)							int this3;
HXDLIN( 763)							if ((Value1 > 255)) {
HXLINE( 763)								this3 = 255;
            							}
            							else {
HXLINE( 763)								if ((Value1 < 0)) {
HXLINE( 763)									this3 = 0;
            								}
            								else {
HXLINE( 763)									this3 = Value1;
            								}
            							}
HXDLIN( 763)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 763)						{
HXLINE( 763)							int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 763)							this1 = (this1 & -256);
HXDLIN( 763)							int this4;
HXDLIN( 763)							if ((Value2 > 255)) {
HXLINE( 763)								this4 = 255;
            							}
            							else {
HXLINE( 763)								if ((Value2 < 0)) {
HXLINE( 763)									this4 = 0;
            								}
            								else {
HXLINE( 763)									this4 = Value2;
            								}
            							}
HXDLIN( 763)							this1 = (this1 | this4);
            						}
HXDLIN( 763)						{
HXLINE( 763)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 763)							this1 = (this1 & 16777215);
HXDLIN( 763)							int this5;
HXDLIN( 763)							if ((Value3 > 255)) {
HXLINE( 763)								this5 = 255;
            							}
            							else {
HXLINE( 763)								if ((Value3 < 0)) {
HXLINE( 763)									this5 = 0;
            								}
            								else {
HXLINE( 763)									this5 = Value3;
            								}
            							}
HXDLIN( 763)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            				}
            			}
            		}
HXLINE( 764)		return Value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_brightness,return )

Float FlxColor_Impl__obj::set_lightness(int this1,Float Value){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_768_set_lightness)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(Value,"Value")
HXLINE( 768)
HXLINE( 769)		{
HXLINE( 769)			Float Hue = ::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(this1);
HXDLIN( 769)			Float Alpha = (( (Float)(((this1 >> 24) & 255)) ) / ( (Float)(255) ));
HXDLIN( 769)			Float chroma = ((( (Float)(1) ) - ::Math_obj::abs(((( (Float)(2) ) * Value) - ( (Float)(1) )))) * ((::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) )))) - ::Math_obj::min((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))) / ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))))));
HXDLIN( 769)			Float match = (Value - (chroma / ( (Float)(2) )));
HXDLIN( 769)			{
HXLINE( 769)				Float Hue1 = Hue;
HXDLIN( 769)				Float Chroma = chroma;
HXDLIN( 769)				Hue1 = ::hx::Mod(Hue1,360);
HXDLIN( 769)				Float hueD = (Hue1 / ( (Float)(60) ));
HXDLIN( 769)				Float mid = ((Chroma * (( (Float)(1) ) - ::Math_obj::abs((::hx::Mod(hueD,2) - ( (Float)(1) ))))) + match);
HXDLIN( 769)				Chroma = (Chroma + match);
HXDLIN( 769)				switch((int)(::Std_obj::_hx_int(hueD))){
            					case (int)0: {
HXLINE( 769)						{
HXLINE( 769)							int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 769)							this1 = (this1 & -16711681);
HXDLIN( 769)							int this2;
HXDLIN( 769)							if ((Value > 255)) {
HXLINE( 769)								this2 = 255;
            							}
            							else {
HXLINE( 769)								if ((Value < 0)) {
HXLINE( 769)									this2 = 0;
            								}
            								else {
HXLINE( 769)									this2 = Value;
            								}
            							}
HXDLIN( 769)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 769)						{
HXLINE( 769)							int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 769)							this1 = (this1 & -65281);
HXDLIN( 769)							int this3;
HXDLIN( 769)							if ((Value1 > 255)) {
HXLINE( 769)								this3 = 255;
            							}
            							else {
HXLINE( 769)								if ((Value1 < 0)) {
HXLINE( 769)									this3 = 0;
            								}
            								else {
HXLINE( 769)									this3 = Value1;
            								}
            							}
HXDLIN( 769)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 769)						{
HXLINE( 769)							int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 769)							this1 = (this1 & -256);
HXDLIN( 769)							int this4;
HXDLIN( 769)							if ((Value2 > 255)) {
HXLINE( 769)								this4 = 255;
            							}
            							else {
HXLINE( 769)								if ((Value2 < 0)) {
HXLINE( 769)									this4 = 0;
            								}
            								else {
HXLINE( 769)									this4 = Value2;
            								}
            							}
HXDLIN( 769)							this1 = (this1 | this4);
            						}
HXDLIN( 769)						{
HXLINE( 769)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 769)							this1 = (this1 & 16777215);
HXDLIN( 769)							int this5;
HXDLIN( 769)							if ((Value3 > 255)) {
HXLINE( 769)								this5 = 255;
            							}
            							else {
HXLINE( 769)								if ((Value3 < 0)) {
HXLINE( 769)									this5 = 0;
            								}
            								else {
HXLINE( 769)									this5 = Value3;
            								}
            							}
HXDLIN( 769)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 769)						{
HXLINE( 769)							int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 769)							this1 = (this1 & -16711681);
HXDLIN( 769)							int this2;
HXDLIN( 769)							if ((Value > 255)) {
HXLINE( 769)								this2 = 255;
            							}
            							else {
HXLINE( 769)								if ((Value < 0)) {
HXLINE( 769)									this2 = 0;
            								}
            								else {
HXLINE( 769)									this2 = Value;
            								}
            							}
HXDLIN( 769)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 769)						{
HXLINE( 769)							int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 769)							this1 = (this1 & -65281);
HXDLIN( 769)							int this3;
HXDLIN( 769)							if ((Value1 > 255)) {
HXLINE( 769)								this3 = 255;
            							}
            							else {
HXLINE( 769)								if ((Value1 < 0)) {
HXLINE( 769)									this3 = 0;
            								}
            								else {
HXLINE( 769)									this3 = Value1;
            								}
            							}
HXDLIN( 769)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 769)						{
HXLINE( 769)							int Value2 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 769)							this1 = (this1 & -256);
HXDLIN( 769)							int this4;
HXDLIN( 769)							if ((Value2 > 255)) {
HXLINE( 769)								this4 = 255;
            							}
            							else {
HXLINE( 769)								if ((Value2 < 0)) {
HXLINE( 769)									this4 = 0;
            								}
            								else {
HXLINE( 769)									this4 = Value2;
            								}
            							}
HXDLIN( 769)							this1 = (this1 | this4);
            						}
HXDLIN( 769)						{
HXLINE( 769)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 769)							this1 = (this1 & 16777215);
HXDLIN( 769)							int this5;
HXDLIN( 769)							if ((Value3 > 255)) {
HXLINE( 769)								this5 = 255;
            							}
            							else {
HXLINE( 769)								if ((Value3 < 0)) {
HXLINE( 769)									this5 = 0;
            								}
            								else {
HXLINE( 769)									this5 = Value3;
            								}
            							}
HXDLIN( 769)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)2: {
HXLINE( 769)						{
HXLINE( 769)							int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 769)							this1 = (this1 & -16711681);
HXDLIN( 769)							int this2;
HXDLIN( 769)							if ((Value > 255)) {
HXLINE( 769)								this2 = 255;
            							}
            							else {
HXLINE( 769)								if ((Value < 0)) {
HXLINE( 769)									this2 = 0;
            								}
            								else {
HXLINE( 769)									this2 = Value;
            								}
            							}
HXDLIN( 769)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 769)						{
HXLINE( 769)							int Value1 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 769)							this1 = (this1 & -65281);
HXDLIN( 769)							int this3;
HXDLIN( 769)							if ((Value1 > 255)) {
HXLINE( 769)								this3 = 255;
            							}
            							else {
HXLINE( 769)								if ((Value1 < 0)) {
HXLINE( 769)									this3 = 0;
            								}
            								else {
HXLINE( 769)									this3 = Value1;
            								}
            							}
HXDLIN( 769)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 769)						{
HXLINE( 769)							int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 769)							this1 = (this1 & -256);
HXDLIN( 769)							int this4;
HXDLIN( 769)							if ((Value2 > 255)) {
HXLINE( 769)								this4 = 255;
            							}
            							else {
HXLINE( 769)								if ((Value2 < 0)) {
HXLINE( 769)									this4 = 0;
            								}
            								else {
HXLINE( 769)									this4 = Value2;
            								}
            							}
HXDLIN( 769)							this1 = (this1 | this4);
            						}
HXDLIN( 769)						{
HXLINE( 769)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 769)							this1 = (this1 & 16777215);
HXDLIN( 769)							int this5;
HXDLIN( 769)							if ((Value3 > 255)) {
HXLINE( 769)								this5 = 255;
            							}
            							else {
HXLINE( 769)								if ((Value3 < 0)) {
HXLINE( 769)									this5 = 0;
            								}
            								else {
HXLINE( 769)									this5 = Value3;
            								}
            							}
HXDLIN( 769)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)3: {
HXLINE( 769)						{
HXLINE( 769)							int Value = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 769)							this1 = (this1 & -16711681);
HXDLIN( 769)							int this2;
HXDLIN( 769)							if ((Value > 255)) {
HXLINE( 769)								this2 = 255;
            							}
            							else {
HXLINE( 769)								if ((Value < 0)) {
HXLINE( 769)									this2 = 0;
            								}
            								else {
HXLINE( 769)									this2 = Value;
            								}
            							}
HXDLIN( 769)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 769)						{
HXLINE( 769)							int Value1 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 769)							this1 = (this1 & -65281);
HXDLIN( 769)							int this3;
HXDLIN( 769)							if ((Value1 > 255)) {
HXLINE( 769)								this3 = 255;
            							}
            							else {
HXLINE( 769)								if ((Value1 < 0)) {
HXLINE( 769)									this3 = 0;
            								}
            								else {
HXLINE( 769)									this3 = Value1;
            								}
            							}
HXDLIN( 769)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 769)						{
HXLINE( 769)							int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 769)							this1 = (this1 & -256);
HXDLIN( 769)							int this4;
HXDLIN( 769)							if ((Value2 > 255)) {
HXLINE( 769)								this4 = 255;
            							}
            							else {
HXLINE( 769)								if ((Value2 < 0)) {
HXLINE( 769)									this4 = 0;
            								}
            								else {
HXLINE( 769)									this4 = Value2;
            								}
            							}
HXDLIN( 769)							this1 = (this1 | this4);
            						}
HXDLIN( 769)						{
HXLINE( 769)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 769)							this1 = (this1 & 16777215);
HXDLIN( 769)							int this5;
HXDLIN( 769)							if ((Value3 > 255)) {
HXLINE( 769)								this5 = 255;
            							}
            							else {
HXLINE( 769)								if ((Value3 < 0)) {
HXLINE( 769)									this5 = 0;
            								}
            								else {
HXLINE( 769)									this5 = Value3;
            								}
            							}
HXDLIN( 769)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)4: {
HXLINE( 769)						{
HXLINE( 769)							int Value = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 769)							this1 = (this1 & -16711681);
HXDLIN( 769)							int this2;
HXDLIN( 769)							if ((Value > 255)) {
HXLINE( 769)								this2 = 255;
            							}
            							else {
HXLINE( 769)								if ((Value < 0)) {
HXLINE( 769)									this2 = 0;
            								}
            								else {
HXLINE( 769)									this2 = Value;
            								}
            							}
HXDLIN( 769)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 769)						{
HXLINE( 769)							int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 769)							this1 = (this1 & -65281);
HXDLIN( 769)							int this3;
HXDLIN( 769)							if ((Value1 > 255)) {
HXLINE( 769)								this3 = 255;
            							}
            							else {
HXLINE( 769)								if ((Value1 < 0)) {
HXLINE( 769)									this3 = 0;
            								}
            								else {
HXLINE( 769)									this3 = Value1;
            								}
            							}
HXDLIN( 769)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 769)						{
HXLINE( 769)							int Value2 = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 769)							this1 = (this1 & -256);
HXDLIN( 769)							int this4;
HXDLIN( 769)							if ((Value2 > 255)) {
HXLINE( 769)								this4 = 255;
            							}
            							else {
HXLINE( 769)								if ((Value2 < 0)) {
HXLINE( 769)									this4 = 0;
            								}
            								else {
HXLINE( 769)									this4 = Value2;
            								}
            							}
HXDLIN( 769)							this1 = (this1 | this4);
            						}
HXDLIN( 769)						{
HXLINE( 769)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 769)							this1 = (this1 & 16777215);
HXDLIN( 769)							int this5;
HXDLIN( 769)							if ((Value3 > 255)) {
HXLINE( 769)								this5 = 255;
            							}
            							else {
HXLINE( 769)								if ((Value3 < 0)) {
HXLINE( 769)									this5 = 0;
            								}
            								else {
HXLINE( 769)									this5 = Value3;
            								}
            							}
HXDLIN( 769)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            					case (int)5: {
HXLINE( 769)						{
HXLINE( 769)							int Value = ::Math_obj::round((Chroma * ( (Float)(255) )));
HXDLIN( 769)							this1 = (this1 & -16711681);
HXDLIN( 769)							int this2;
HXDLIN( 769)							if ((Value > 255)) {
HXLINE( 769)								this2 = 255;
            							}
            							else {
HXLINE( 769)								if ((Value < 0)) {
HXLINE( 769)									this2 = 0;
            								}
            								else {
HXLINE( 769)									this2 = Value;
            								}
            							}
HXDLIN( 769)							this1 = (this1 | (this2 << 16));
            						}
HXDLIN( 769)						{
HXLINE( 769)							int Value1 = ::Math_obj::round((match * ( (Float)(255) )));
HXDLIN( 769)							this1 = (this1 & -65281);
HXDLIN( 769)							int this3;
HXDLIN( 769)							if ((Value1 > 255)) {
HXLINE( 769)								this3 = 255;
            							}
            							else {
HXLINE( 769)								if ((Value1 < 0)) {
HXLINE( 769)									this3 = 0;
            								}
            								else {
HXLINE( 769)									this3 = Value1;
            								}
            							}
HXDLIN( 769)							this1 = (this1 | (this3 << 8));
            						}
HXDLIN( 769)						{
HXLINE( 769)							int Value2 = ::Math_obj::round((mid * ( (Float)(255) )));
HXDLIN( 769)							this1 = (this1 & -256);
HXDLIN( 769)							int this4;
HXDLIN( 769)							if ((Value2 > 255)) {
HXLINE( 769)								this4 = 255;
            							}
            							else {
HXLINE( 769)								if ((Value2 < 0)) {
HXLINE( 769)									this4 = 0;
            								}
            								else {
HXLINE( 769)									this4 = Value2;
            								}
            							}
HXDLIN( 769)							this1 = (this1 | this4);
            						}
HXDLIN( 769)						{
HXLINE( 769)							int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 769)							this1 = (this1 & 16777215);
HXDLIN( 769)							int this5;
HXDLIN( 769)							if ((Value3 > 255)) {
HXLINE( 769)								this5 = 255;
            							}
            							else {
HXLINE( 769)								if ((Value3 < 0)) {
HXLINE( 769)									this5 = 0;
            								}
            								else {
HXLINE( 769)									this5 = Value3;
            								}
            							}
HXDLIN( 769)							this1 = (this1 | (this5 << 24));
            						}
            					}
            					break;
            				}
            			}
            		}
HXLINE( 770)		return Value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_lightness,return )

Float FlxColor_Impl__obj::maxColor(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_775_maxColor)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 775)
HXDLIN( 775)		return ::Math_obj::max((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::max((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,maxColor,return )

Float FlxColor_Impl__obj::minColor(int this1){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_780_minColor)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 780)
HXDLIN( 780)		return ::Math_obj::min((( (Float)(((this1 >> 16) & 255)) ) / ( (Float)(255) )),::Math_obj::min((( (Float)(((this1 >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this1 & 255)) ) / ( (Float)(255) ))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,minColor,return )

int FlxColor_Impl__obj::boundChannel(int this1,int Value){
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_785_boundChannel)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(Value,"Value")
HXLINE( 785)
HXDLIN( 785)		if ((Value > 255)) {
HXDLIN( 785)			return 255;
            		}
            		else {
HXDLIN( 785)			if ((Value < 0)) {
HXDLIN( 785)				return 0;
            			}
            			else {
HXDLIN( 785)				return Value;
            			}
            		}
HXDLIN( 785)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,boundChannel,return )


FlxColor_Impl__obj::FlxColor_Impl__obj()
{
}

bool FlxColor_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { outValue = add_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"setRGB") ) { outValue = setRGB_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setHSB") ) { outValue = setHSB_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setHSL") ) { outValue = setHSL_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { outValue = fromInt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromRGB") ) { outValue = fromRGB_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromHSB") ) { outValue = fromHSB_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromHSL") ) { outValue = fromHSL_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"to24Bit") ) { outValue = to24Bit_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setCMYK") ) { outValue = setCMYK_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getThis") ) { outValue = getThis_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_red") ) { outValue = get_red_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_red") ) { outValue = set_red_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_hue") ) { outValue = get_hue_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_hue") ) { outValue = set_hue_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromCMYK") ) { outValue = fromCMYK_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"gradient") ) { outValue = gradient_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"multiply") ) { outValue = multiply_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"subtract") ) { outValue = subtract_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"validate") ) { outValue = validate_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_blue") ) { outValue = get_blue_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_blue") ) { outValue = set_blue_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_cyan") ) { outValue = get_cyan_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_cyan") ) { outValue = set_cyan_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"maxColor") ) { outValue = maxColor_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"minColor") ) { outValue = minColor_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_green") ) { outValue = get_green_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { outValue = get_alpha_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_green") ) { outValue = set_green_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { outValue = set_alpha_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_black") ) { outValue = get_black_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_black") ) { outValue = set_black_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_yellow") ) { outValue = get_yellow_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_yellow") ) { outValue = set_yellow_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interpolate") ) { outValue = interpolate_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toHexString") ) { outValue = toHexString_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toWebString") ) { outValue = toWebString_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getDarkened") ) { outValue = getDarkened_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getInverted") ) { outValue = getInverted_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setRGBFloat") ) { outValue = setRGBFloat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_magenta") ) { outValue = get_magenta_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_magenta") ) { outValue = set_magenta_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromRGBFloat") ) { outValue = fromRGBFloat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getColorInfo") ) { outValue = getColorInfo_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getLightened") ) { outValue = getLightened_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_redFloat") ) { outValue = get_redFloat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_redFloat") ) { outValue = set_redFloat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"boundChannel") ) { outValue = boundChannel_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_blueFloat") ) { outValue = get_blueFloat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_blueFloat") ) { outValue = set_blueFloat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_lightness") ) { outValue = get_lightness_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_lightness") ) { outValue = set_lightness_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_greenFloat") ) { outValue = get_greenFloat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_alphaFloat") ) { outValue = get_alphaFloat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_greenFloat") ) { outValue = set_greenFloat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_alphaFloat") ) { outValue = set_alphaFloat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_brightness") ) { outValue = get_brightness_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_saturation") ) { outValue = get_saturation_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_saturation") ) { outValue = set_saturation_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_brightness") ) { outValue = set_brightness_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getHSBColorWheel") ) { outValue = getHSBColorWheel_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setHSChromaMatch") ) { outValue = setHSChromaMatch_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getTriadicHarmony") ) { outValue = getTriadicHarmony_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getAnalogousHarmony") ) { outValue = getAnalogousHarmony_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getComplementHarmony") ) { outValue = getComplementHarmony_dyn(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"getSplitComplementHarmony") ) { outValue = getSplitComplementHarmony_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxColor_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FlxColor_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FlxColor_Impl__obj::TRANSPARENT,HX_("TRANSPARENT",32,37,f6,f8)},
	{::hx::fsInt,(void *) &FlxColor_Impl__obj::WHITE,HX_("WHITE",89,82,ab,47)},
	{::hx::fsInt,(void *) &FlxColor_Impl__obj::GRAY,HX_("GRAY",e3,97,2c,2f)},
	{::hx::fsInt,(void *) &FlxColor_Impl__obj::BLACK,HX_("BLACK",9f,0d,e0,32)},
	{::hx::fsInt,(void *) &FlxColor_Impl__obj::GREEN,HX_("GREEN",a3,46,db,17)},
	{::hx::fsInt,(void *) &FlxColor_Impl__obj::LIME,HX_("LIME",15,df,73,32)},
	{::hx::fsInt,(void *) &FlxColor_Impl__obj::YELLOW,HX_("YELLOW",74,4b,df,82)},
	{::hx::fsInt,(void *) &FlxColor_Impl__obj::ORANGE,HX_("ORANGE",ee,5e,3f,f8)},
	{::hx::fsInt,(void *) &FlxColor_Impl__obj::RED,HX_("RED",31,75,3e,00)},
	{::hx::fsInt,(void *) &FlxColor_Impl__obj::PURPLE,HX_("PURPLE",3c,a2,0c,24)},
	{::hx::fsInt,(void *) &FlxColor_Impl__obj::BLUE,HX_("BLUE",9a,0a,da,2b)},
	{::hx::fsInt,(void *) &FlxColor_Impl__obj::BROWN,HX_("BROWN",56,06,e2,36)},
	{::hx::fsInt,(void *) &FlxColor_Impl__obj::PINK,HX_("PINK",76,ba,18,35)},
	{::hx::fsInt,(void *) &FlxColor_Impl__obj::MAGENTA,HX_("MAGENTA",09,8e,71,8e)},
	{::hx::fsInt,(void *) &FlxColor_Impl__obj::CYAN,HX_("CYAN",23,0d,8d,2c)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &FlxColor_Impl__obj::colorLookup,HX_("colorLookup",3d,34,de,1b)},
	{::hx::fsObject /*  ::EReg */ ,(void *) &FlxColor_Impl__obj::COLOR_REGEX,HX_("COLOR_REGEX",6b,2b,e2,09)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void FlxColor_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::TRANSPARENT,"TRANSPARENT");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::WHITE,"WHITE");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::GRAY,"GRAY");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::BLACK,"BLACK");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::GREEN,"GREEN");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::LIME,"LIME");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::YELLOW,"YELLOW");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::ORANGE,"ORANGE");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::RED,"RED");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::PURPLE,"PURPLE");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::BLUE,"BLUE");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::BROWN,"BROWN");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::PINK,"PINK");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::MAGENTA,"MAGENTA");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::CYAN,"CYAN");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::colorLookup,"colorLookup");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::COLOR_REGEX,"COLOR_REGEX");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxColor_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::TRANSPARENT,"TRANSPARENT");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::WHITE,"WHITE");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::GRAY,"GRAY");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::BLACK,"BLACK");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::GREEN,"GREEN");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::LIME,"LIME");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::YELLOW,"YELLOW");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::ORANGE,"ORANGE");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::RED,"RED");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::PURPLE,"PURPLE");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::BLUE,"BLUE");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::BROWN,"BROWN");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::PINK,"PINK");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::MAGENTA,"MAGENTA");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::CYAN,"CYAN");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::colorLookup,"colorLookup");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::COLOR_REGEX,"COLOR_REGEX");
};

#endif

::hx::Class FlxColor_Impl__obj::__mClass;

static ::String FlxColor_Impl__obj_sStaticFields[] = {
	HX_("TRANSPARENT",32,37,f6,f8),
	HX_("WHITE",89,82,ab,47),
	HX_("GRAY",e3,97,2c,2f),
	HX_("BLACK",9f,0d,e0,32),
	HX_("GREEN",a3,46,db,17),
	HX_("LIME",15,df,73,32),
	HX_("YELLOW",74,4b,df,82),
	HX_("ORANGE",ee,5e,3f,f8),
	HX_("RED",31,75,3e,00),
	HX_("PURPLE",3c,a2,0c,24),
	HX_("BLUE",9a,0a,da,2b),
	HX_("BROWN",56,06,e2,36),
	HX_("PINK",76,ba,18,35),
	HX_("MAGENTA",09,8e,71,8e),
	HX_("CYAN",23,0d,8d,2c),
	HX_("colorLookup",3d,34,de,1b),
	HX_("COLOR_REGEX",6b,2b,e2,09),
	HX_("fromInt",a5,dd,fa,57),
	HX_("fromRGB",c3,8f,01,58),
	HX_("fromRGBFloat",d9,a2,53,9a),
	HX_("fromCMYK",66,a9,76,9f),
	HX_("fromHSB",ad,03,fa,57),
	HX_("fromHSL",b7,03,fa,57),
	HX_("fromString",db,2d,74,54),
	HX_("getHSBColorWheel",99,27,93,2f),
	HX_("interpolate",c1,d4,32,1f),
	HX_("gradient",f0,39,3f,2a),
	HX_("multiply",24,e2,8c,9a),
	HX_("add",21,f2,49,00),
	HX_("subtract",14,75,11,f8),
	HX_("getComplementHarmony",4a,20,b6,d3),
	HX_("getAnalogousHarmony",df,79,e2,a4),
	HX_("getSplitComplementHarmony",bc,be,30,75),
	HX_("getTriadicHarmony",f4,5d,d3,ab),
	HX_("to24Bit",d0,66,f1,25),
	HX_("toHexString",11,69,b3,6d),
	HX_("toWebString",8a,5b,00,37),
	HX_("getColorInfo",fb,5f,7f,30),
	HX_("getDarkened",34,e7,ef,b2),
	HX_("getLightened",68,ad,b1,e0),
	HX_("getInverted",ab,73,25,1b),
	HX_("setRGB",8b,4c,6e,6f),
	HX_("setRGBFloat",11,91,9d,2a),
	HX_("setCMYK",9e,1b,2f,07),
	HX_("setHSB",75,c0,66,6f),
	HX_("setHSL",7f,c0,66,6f),
	HX_("setHSChromaMatch",c2,69,0f,10),
	HX_("_new",61,15,1f,3f),
	HX_("getThis",14,b6,7e,1f),
	HX_("validate",96,d0,e3,04),
	HX_("get_red",e8,a1,cb,26),
	HX_("get_green",1a,6b,96,dd),
	HX_("get_blue",23,fe,d3,c0),
	HX_("get_alpha",b5,03,40,65),
	HX_("get_redFloat",94,aa,fc,26),
	HX_("get_greenFloat",22,4c,51,4d),
	HX_("get_blueFloat",79,18,35,9c),
	HX_("get_alphaFloat",a7,a1,31,99),
	HX_("set_red",f4,32,cd,19),
	HX_("set_green",26,57,e7,c0),
	HX_("set_blue",97,57,31,6f),
	HX_("set_alpha",c1,ef,90,48),
	HX_("set_redFloat",08,ce,f5,3b),
	HX_("set_greenFloat",96,34,71,6d),
	HX_("set_blueFloat",85,fa,3a,e1),
	HX_("set_alphaFloat",1b,8a,51,b9),
	HX_("get_cyan",ac,00,87,c1),
	HX_("get_magenta",40,1a,98,94),
	HX_("get_yellow",3d,0f,e4,c0),
	HX_("get_black",16,32,9b,f8),
	HX_("set_cyan",20,5a,e4,6f),
	HX_("set_magenta",4c,21,05,9f),
	HX_("set_yellow",b1,ad,61,c4),
	HX_("set_black",22,1e,ec,db),
	HX_("get_hue",4f,19,c4,26),
	HX_("get_brightness",1a,16,67,db),
	HX_("get_saturation",1b,5c,97,6c),
	HX_("get_lightness",44,08,ab,98),
	HX_("set_hue",5b,aa,c5,19),
	HX_("set_saturation",8f,44,b7,8c),
	HX_("set_brightness",8e,fe,86,fb),
	HX_("set_lightness",50,ea,b0,dd),
	HX_("maxColor",1f,c4,79,f4),
	HX_("minColor",71,de,93,41),
	HX_("boundChannel",25,1c,54,83),
	::String(null())
};

void FlxColor_Impl__obj::__register()
{
	FlxColor_Impl__obj _hx_dummy;
	FlxColor_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util._FlxColor.FlxColor_Impl_",09,b7,a9,ef);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxColor_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxColor_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxColor_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxColor_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxColor_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxColor_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxColor_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxColor_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_20_boot)
HXDLIN(  20)		TRANSPARENT = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_21_boot)
HXDLIN(  21)		WHITE = -1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_22_boot)
HXDLIN(  22)		GRAY = -8355712;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_23_boot)
HXDLIN(  23)		BLACK = -16777216;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_25_boot)
HXDLIN(  25)		GREEN = -16744448;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_26_boot)
HXDLIN(  26)		LIME = -16711936;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_27_boot)
HXDLIN(  27)		YELLOW = -256;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_28_boot)
HXDLIN(  28)		ORANGE = -23296;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_29_boot)
HXDLIN(  29)		RED = -65536;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_30_boot)
HXDLIN(  30)		PURPLE = -8388480;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_31_boot)
HXDLIN(  31)		BLUE = -16776961;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_32_boot)
HXDLIN(  32)		BROWN = -7650029;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_33_boot)
HXDLIN(  33)		PINK = -16181;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_34_boot)
HXDLIN(  34)		MAGENTA = -65281;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_35_boot)
HXDLIN(  35)		CYAN = -16711681;
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::haxe::ds::StringMap _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_0c1a490149f50aaa_54_boot)
HXLINE(  54)
HXDLIN(  54)			 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  54)			_g->set(HX_("TRANSPARENT",32,37,f6,f8),0);
HXDLIN(  54)			_g->set(HX_("WHITE",89,82,ab,47),-1);
HXDLIN(  54)			_g->set(HX_("GRAY",e3,97,2c,2f),-8355712);
HXDLIN(  54)			_g->set(HX_("BLACK",9f,0d,e0,32),-16777216);
HXDLIN(  54)			_g->set(HX_("GREEN",a3,46,db,17),-16744448);
HXDLIN(  54)			_g->set(HX_("LIME",15,df,73,32),-16711936);
HXDLIN(  54)			_g->set(HX_("YELLOW",74,4b,df,82),-256);
HXDLIN(  54)			_g->set(HX_("ORANGE",ee,5e,3f,f8),-23296);
HXDLIN(  54)			_g->set(HX_("RED",31,75,3e,00),-65536);
HXDLIN(  54)			_g->set(HX_("PURPLE",3c,a2,0c,24),-8388480);
HXDLIN(  54)			_g->set(HX_("BLUE",9a,0a,da,2b),-16776961);
HXDLIN(  54)			_g->set(HX_("BROWN",56,06,e2,36),-7650029);
HXDLIN(  54)			_g->set(HX_("PINK",76,ba,18,35),-16181);
HXDLIN(  54)			_g->set(HX_("MAGENTA",09,8e,71,8e),-65281);
HXDLIN(  54)			_g->set(HX_("CYAN",23,0d,8d,2c),-16711681);
HXDLIN(  54)			return _g;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_0c1a490149f50aaa_54_boot)
HXDLIN(  54)		colorLookup = ( ( ::haxe::ds::StringMap)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_fda63b7a1987bfd7_78_boot)
HXDLIN(  78)		COLOR_REGEX =  ::EReg_obj::__alloc( HX_CTX ,HX_("^(0x|#)(([A-F0-9]{2}){3,4})$",25,93,28,2c),HX_("i",69,00,00,00));
            	}
}

} // end namespace flixel
} // end namespace util
} // end namespace _FlxColor
