#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Program3D
#include <openfl/display3D/Program3D.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_utils_AGALMiniAssembler
#include <openfl/utils/AGALMiniAssembler.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__AGALMiniAssembler_OpCode
#include <openfl/utils/_AGALMiniAssembler/OpCode.h>
#endif
#ifndef INCLUDED_openfl_utils__AGALMiniAssembler_Register
#include <openfl/utils/_AGALMiniAssembler/Register.h>
#endif
#ifndef INCLUDED_openfl_utils__AGALMiniAssembler_Sampler
#include <openfl/utils/_AGALMiniAssembler/Sampler.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_878a01ff4ba15759_40_new,"openfl.utils.AGALMiniAssembler","new",0xa6ddea8f,"openfl.utils.AGALMiniAssembler.new","openfl/utils/AGALMiniAssembler.hx",40,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_175_assemble2,"openfl.utils.AGALMiniAssembler","assemble2",0xada2ae4f,"openfl.utils.AGALMiniAssembler.assemble2","openfl/utils/AGALMiniAssembler.hx",175,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_184_assemble,"openfl.utils.AGALMiniAssembler","assemble",0x3c794483,"openfl.utils.AGALMiniAssembler.assemble","openfl/utils/AGALMiniAssembler.hx",184,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_674_initregmap,"openfl.utils.AGALMiniAssembler","initregmap",0x0ed0be89,"openfl.utils.AGALMiniAssembler.initregmap","openfl/utils/AGALMiniAssembler.hx",674,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_775_match,"openfl.utils.AGALMiniAssembler","match",0xf40b8d34,"openfl.utils.AGALMiniAssembler.match","openfl/utils/AGALMiniAssembler.hx",775,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_697_init,"openfl.utils.AGALMiniAssembler","init",0x58080a01,"openfl.utils.AGALMiniAssembler.init","openfl/utils/AGALMiniAssembler.hx",697,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_40_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",40,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_42_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",42,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_43_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",43,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_44_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",44,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_45_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",45,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_46_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",46,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_47_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",47,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_48_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",48,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_50_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",50,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_51_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",51,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_52_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",52,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_53_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",53,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_54_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",54,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_55_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",55,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_57_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",57,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_58_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",58,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_59_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",59,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_60_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",60,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_62_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",62,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_63_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",63,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_64_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",64,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_65_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",65,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_66_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",66,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_67_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",67,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_68_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",68,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_69_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",69,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_70_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",70,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_72_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",72,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_73_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",73,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_74_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",74,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_75_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",75,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_76_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",76,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_77_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",77,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_78_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",78,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_79_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",79,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_80_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",80,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_81_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",81,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_82_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",82,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_83_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",83,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_84_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",84,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_85_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",85,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_86_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",86,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_87_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",87,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_88_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",88,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_89_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",89,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_90_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",90,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_91_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",91,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_92_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",92,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_93_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",93,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_94_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",94,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_95_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",95,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_96_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",96,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_97_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",97,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_98_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",98,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_99_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",99,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_100_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",100,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_101_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",101,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_102_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",102,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_103_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",103,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_104_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",104,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_105_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",105,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_106_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",106,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_107_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",107,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_108_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",108,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_109_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",109,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_110_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",110,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_111_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",111,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_112_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",112,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_113_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",113,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_114_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",114,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_115_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",115,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_117_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",117,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_118_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",118,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_119_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",119,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_120_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",120,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_121_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",121,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_122_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",122,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_123_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",123,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_124_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",124,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_125_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",125,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_126_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",126,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_127_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",127,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_129_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",129,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_130_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",130,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_131_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",131,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_132_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",132,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_133_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",133,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_134_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",134,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_135_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",135,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_136_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",136,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_137_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",137,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_138_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",138,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_139_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",139,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_140_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",140,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_141_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",141,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_142_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",142,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_143_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",143,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_144_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",144,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_145_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",145,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_146_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",146,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_147_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",147,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_148_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",148,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_149_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",149,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_150_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",150,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_151_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",151,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_152_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",152,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_153_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",153,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_154_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",154,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_155_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",155,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_878a01ff4ba15759_156_boot,"openfl.utils.AGALMiniAssembler","boot",0x53685323,"openfl.utils.AGALMiniAssembler.boot","openfl/utils/AGALMiniAssembler.hx",156,0x125eff83)
namespace openfl{
namespace utils{

void AGALMiniAssembler_obj::__construct(::hx::Null< bool >  __o_debugging){
            		bool debugging = __o_debugging.Default(false);
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_40_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(debugging,"debugging")
HXLINE(  40)
HXLINE( 162)		this->debugEnabled = false;
HXLINE( 166)		this->debugEnabled = debugging;
HXLINE( 168)		if (!(::openfl::utils::AGALMiniAssembler_obj::initialized)) {
HXLINE( 170)			::openfl::utils::AGALMiniAssembler_obj::init();
            		}
            	}

Dynamic AGALMiniAssembler_obj::__CreateEmpty() { return new AGALMiniAssembler_obj; }

void *AGALMiniAssembler_obj::_hx_vtable = 0;

Dynamic AGALMiniAssembler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AGALMiniAssembler_obj > _hx_result = new AGALMiniAssembler_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool AGALMiniAssembler_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x65c43237;
}

 ::openfl::display3D::Program3D AGALMiniAssembler_obj::assemble2( ::openfl::display3D::Context3D context3D,int version,::String vertexSource,::String fragmentSource){
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_175_assemble2)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(context3D,"context3D")
            	HX_STACK_ARG(version,"version")
            	HX_STACK_ARG(vertexSource,"vertexSource")
            	HX_STACK_ARG(fragmentSource,"fragmentSource")
HXLINE( 175)
HXLINE( 176)		HX_VARI(  ::openfl::utils::ByteArrayData,agalVertex) = this->assemble(HX_("vertex",64,db,47,a1),vertexSource,version,null());
HXLINE( 177)		HX_VARI(  ::openfl::utils::ByteArrayData,agalFragment) = this->assemble(HX_("fragment",d0,5f,e5,ad),fragmentSource,version,null());
HXLINE( 178)		HX_VARI(  ::openfl::display3D::Program3D,program) = context3D->createProgram(null());
HXLINE( 179)		program->upload(agalVertex,agalFragment);
HXLINE( 180)		return program;
            	}


HX_DEFINE_DYNAMIC_FUNC4(AGALMiniAssembler_obj,assemble2,return )

 ::openfl::utils::ByteArrayData AGALMiniAssembler_obj::assemble(::String mode,::String source,::hx::Null< int >  __o_version,::hx::Null< bool >  __o_ignoreLimits){
            		int version = __o_version.Default(1);
            		bool ignoreLimits = __o_ignoreLimits.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_878a01ff4ba15759_184_assemble)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(mode,"mode")
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(version,"version")
            	HX_STACK_ARG(ignoreLimits,"ignoreLimits")
HXLINE( 184)
HXLINE( 185)		HX_VARI( int,start) = ::openfl::Lib_obj::getTimer();
HXLINE( 187)		 ::openfl::utils::ByteArrayData this1 =  ::openfl::utils::ByteArrayData_obj::__alloc( HX_CTX ,0);
HXDLIN( 187)		this->agalcode = this1;
HXLINE( 188)		this->error = HX_("",00,00,00,00);
HXLINE( 190)		HX_VARI( bool,isFrag) = false;
HXLINE( 192)		if ((mode == HX_("fragment",d0,5f,e5,ad))) {
HXLINE( 194)			isFrag = true;
            		}
            		else {
HXLINE( 196)			if ((mode != HX_("vertex",64,db,47,a1))) {
HXLINE( 198)				this->error = ((((((HX_("ERROR: mode needs to be \"",d8,b7,4c,b2) + HX_("fragment",d0,5f,e5,ad)) + HX_("\" or \"",a3,20,aa,4e)) + HX_("vertex",64,db,47,a1)) + HX_("\" but is \"",69,33,a7,e2)) + mode) + HX_("\".",cc,1d,00,00));
            			}
            		}
HXLINE( 201)		this->agalcode->_hx___endian = 1;
HXLINE( 202)		this->agalcode->writeByte(160);
HXLINE( 203)		this->agalcode->writeUnsignedInt(version);
HXLINE( 204)		this->agalcode->writeByte(161);
HXLINE( 205)		{
HXLINE( 205)			int _hx_tmp;
HXDLIN( 205)			if (isFrag) {
HXLINE( 205)				_hx_tmp = 1;
            			}
            			else {
HXLINE( 205)				_hx_tmp = 0;
            			}
HXDLIN( 205)			this->agalcode->writeByte(_hx_tmp);
            		}
HXLINE( 207)		this->initregmap(version,ignoreLimits);
HXLINE( 209)		HX_VARI( ::Array< ::String >,lines) = ::StringTools_obj::replace(source,HX_("\r",0d,00,00,00),HX_("\n",0a,00,00,00)).split(HX_("\n",0a,00,00,00));
HXLINE( 210)		HX_VARI( int,nops) = 0;
HXLINE( 211)		HX_VARI( int,lng) = lines->length;
HXLINE( 213)		HX_VARI(  ::EReg,reg1) =  ::EReg_obj::__alloc( HX_CTX ,HX_("<.*>",c6,d9,cb,27),HX_("g",67,00,00,00));
HXLINE( 214)		HX_VARI(  ::EReg,reg2) =  ::EReg_obj::__alloc( HX_CTX ,HX_("([\\w\\.\\-\\+]+)",fb,41,d4,12),HX_("gi",22,5a,00,00));
HXLINE( 215)		HX_VARI(  ::EReg,reg3) =  ::EReg_obj::__alloc( HX_CTX ,HX_("^\\w{3}",4c,2f,6f,dd),HX_("ig",de,5b,00,00));
HXLINE( 216)		HX_VARI(  ::EReg,reg4) =  ::EReg_obj::__alloc( HX_CTX ,HX_("vc\\[([vofi][acostdip]?[d]?)(\\d*)?(\\.[xyzw](\\+\\d{1,3})?)?\\](\\.[xyzw]{1,4})?|([vofi][acostdip]?[d]?)(\\d*)?(\\.[xyzw]{1,4})?",ca,7c,76,12),HX_("gi",22,5a,00,00));
HXLINE( 217)		HX_VARI(  ::EReg,reg5) =  ::EReg_obj::__alloc( HX_CTX ,HX_("\\[.*\\]",bc,fb,d3,4c),HX_("ig",de,5b,00,00));
HXLINE( 218)		HX_VARI(  ::EReg,reg6) =  ::EReg_obj::__alloc( HX_CTX ,HX_("^\\b[A-Za-z]{1,3}",fa,3b,55,e1),HX_("ig",de,5b,00,00));
HXLINE( 219)		HX_VARI(  ::EReg,reg7) =  ::EReg_obj::__alloc( HX_CTX ,HX_("\\d+",a3,26,46,00),HX_("",00,00,00,00));
HXLINE( 220)		HX_VARI(  ::EReg,reg8) =  ::EReg_obj::__alloc( HX_CTX ,HX_("(\\.[xyzw]{1,4})",c8,ae,42,2b),HX_("",00,00,00,00));
HXLINE( 221)		HX_VARI(  ::EReg,reg9) =  ::EReg_obj::__alloc( HX_CTX ,HX_("[A-Za-z]{1,3}",de,ce,de,ac),HX_("ig",de,5b,00,00));
HXLINE( 222)		HX_VARI(  ::EReg,reg10) =  ::EReg_obj::__alloc( HX_CTX ,HX_("(\\.[xyzw]{1,1})",05,68,40,2b),HX_("",00,00,00,00));
HXLINE( 223)		HX_VARI(  ::EReg,reg11) =  ::EReg_obj::__alloc( HX_CTX ,HX_("\\+\\d{1,3}",89,08,70,4a),HX_("ig",de,5b,00,00));
HXLINE( 225)		HX_VARI( int,i) = 0;
HXLINE( 227)		while(true){
HXLINE( 227)			bool _hx_tmp;
HXDLIN( 227)			if ((i < lng)) {
HXLINE( 227)				_hx_tmp = (this->error == HX_("",00,00,00,00));
            			}
            			else {
HXLINE( 227)				_hx_tmp = false;
            			}
HXDLIN( 227)			if (!(_hx_tmp)) {
HXLINE( 227)				goto _hx_goto_2;
            			}
HXLINE( 229)			HX_VARI( ::String,line) = ::StringTools_obj::trim(lines->__get(i));
HXLINE( 232)			HX_VARI( int,startcomment) = line.indexOf(HX_("//",20,29,00,00),null());
HXLINE( 233)			if ((startcomment != -1)) {
HXLINE( 235)				line = line.substr(0,startcomment);
            			}
HXLINE( 239)			HX_VAR( int,optsi);
HXDLIN( 239)			if (reg1->match(line)) {
HXLINE( 239)				optsi = ( (int)(reg1->matchedPos()->__Field(HX_("pos",94,5d,55,00),::hx::paccDynamic)) );
            			}
            			else {
HXLINE( 239)				optsi = -1;
            			}
HXLINE( 240)			HX_VARI( ::Array< ::String >,opts) = null();
HXLINE( 242)			if ((optsi != -1)) {
HXLINE( 244)				opts = this->match(line.substr(optsi,null()),reg2);
HXLINE( 245)				line = line.substr(0,optsi);
            			}
HXLINE( 249)			HX_VARI( ::String,opCode) = null();
HXLINE( 250)			HX_VARI(  ::openfl::utils::_AGALMiniAssembler::OpCode,opFound) = null();
HXLINE( 252)			if (reg3->match(line)) {
HXLINE( 254)				opCode = reg3->matched(0);
HXLINE( 255)				opFound = ( ( ::openfl::utils::_AGALMiniAssembler::OpCode)(::openfl::utils::AGALMiniAssembler_obj::OPMAP->get(opCode)) );
            			}
HXLINE( 258)			if (::hx::IsNull( opFound )) {
HXLINE( 260)				if ((line.length >= 3)) {
HXLINE( 262)					::lime::utils::Log_obj::warn((((HX_("warning: bad line ",cf,50,44,4f) + i) + HX_(": ",a6,32,00,00)) + lines->__get(i)),::hx::SourceInfo(HX_("openfl/utils/AGALMiniAssembler.hx",83,ff,5e,12),262,HX_("openfl.utils.AGALMiniAssembler",1d,f7,bb,62),HX_("assemble",12,a9,1b,c5)));
            				}
HXLINE( 265)				i = (i + 1);
HXLINE( 266)				continue;
            			}
HXLINE( 270)			if (this->debugEnabled) {
HXLINE( 272)				::lime::utils::Log_obj::info(opFound,::hx::SourceInfo(HX_("openfl/utils/AGALMiniAssembler.hx",83,ff,5e,12),272,HX_("openfl.utils.AGALMiniAssembler",1d,f7,bb,62),HX_("assemble",12,a9,1b,c5)));
            			}
HXLINE( 275)			if (::hx::IsNull( opFound )) {
HXLINE( 277)				if ((line.length >= 3)) {
HXLINE( 279)					::lime::utils::Log_obj::warn((((HX_("warning: bad line ",cf,50,44,4f) + i) + HX_(": ",a6,32,00,00)) + lines->__get(i)),::hx::SourceInfo(HX_("openfl/utils/AGALMiniAssembler.hx",83,ff,5e,12),279,HX_("openfl.utils.AGALMiniAssembler",1d,f7,bb,62),HX_("assemble",12,a9,1b,c5)));
            				}
HXLINE( 282)				i = (i + 1);
HXLINE( 283)				continue;
            			}
HXLINE( 286)			int line1 = line.indexOf(opFound->name,null());
HXDLIN( 286)			line = line.substr((line1 + opFound->name.length),null());
HXLINE( 288)			bool _hx_tmp1;
HXDLIN( 288)			if (((opFound->flags & 256) != 0)) {
HXLINE( 288)				_hx_tmp1 = (version < 2);
            			}
            			else {
HXLINE( 288)				_hx_tmp1 = false;
            			}
HXDLIN( 288)			if (_hx_tmp1) {
HXLINE( 290)				this->error = HX_("error: opcode requires version 2.",d2,34,38,ba);
HXLINE( 291)				goto _hx_goto_2;
            			}
HXLINE( 294)			bool _hx_tmp2;
HXDLIN( 294)			if (((opFound->flags & 64) != 0)) {
HXLINE( 294)				_hx_tmp2 = isFrag;
            			}
            			else {
HXLINE( 294)				_hx_tmp2 = false;
            			}
HXDLIN( 294)			if (_hx_tmp2) {
HXLINE( 296)				this->error = HX_("error: opcode is only allowed in vertex programs.",a4,4b,76,ab);
HXLINE( 297)				goto _hx_goto_2;
            			}
HXLINE( 300)			bool _hx_tmp3;
HXDLIN( 300)			if (((opFound->flags & 32) != 0)) {
HXLINE( 300)				_hx_tmp3 = !(isFrag);
            			}
            			else {
HXLINE( 300)				_hx_tmp3 = false;
            			}
HXDLIN( 300)			if (_hx_tmp3) {
HXLINE( 302)				this->error = HX_("error: opcode is only allowed in fragment programs.",50,b1,63,46);
HXLINE( 303)				goto _hx_goto_2;
            			}
HXLINE( 306)			if (this->verbose) {
HXLINE( 308)				::String _hx_tmp = (HX_("emit opcode=",e2,2a,94,83) + ::Std_obj::string(opFound));
HXDLIN( 308)				::lime::utils::Log_obj::info(_hx_tmp,::hx::SourceInfo(HX_("openfl/utils/AGALMiniAssembler.hx",83,ff,5e,12),308,HX_("openfl.utils.AGALMiniAssembler",1d,f7,bb,62),HX_("assemble",12,a9,1b,c5)));
            			}
HXLINE( 311)			this->agalcode->writeUnsignedInt(opFound->emitCode);
HXLINE( 312)			nops = (nops + 1);
HXLINE( 314)			if ((nops > 4096)) {
HXLINE( 316)				this->error = ((HX_("error: too many opcodes. maximum is ",26,64,b3,3b) + 4096) + HX_(".",2e,00,00,00));
HXLINE( 317)				goto _hx_goto_2;
            			}
HXLINE( 321)			HX_VARI( ::Array< ::String >,regs) = this->match(line,reg4);
HXLINE( 323)			if ((regs->length != opFound->numRegister)) {
HXLINE( 325)				this->error = ((((HX_("error: wrong number of operands. found ",ad,a0,73,c8) + regs->length) + HX_(" but expected ",e9,a0,e7,6d)) + opFound->numRegister) + HX_(".",2e,00,00,00));
HXLINE( 326)				goto _hx_goto_2;
            			}
HXLINE( 329)			HX_VARI( bool,badreg) = false;
HXLINE( 330)			HX_VARI( int,pad) = 160;
HXLINE( 331)			HX_VARI( int,regLength) = regs->length;
HXLINE( 333)			{
HXLINE( 333)				int _g = 0;
HXDLIN( 333)				int _g1 = regLength;
HXDLIN( 333)				while((_g < _g1)){
HXLINE( 333)					_g = (_g + 1);
HXDLIN( 333)					HX_VARI( int,j) = (_g - 1);
HXLINE( 335)					HX_VARI( bool,isRelative) = false;
HXLINE( 336)					HX_VARI( ::Array< ::String >,relreg) = this->match(regs->__get(j),reg5);
HXLINE( 338)					if ((relreg->length > 0)) {
HXLINE( 340)						regs[j] = ::StringTools_obj::replace(regs->__get(j),relreg->__get(0),HX_("0",30,00,00,00));
HXLINE( 342)						if (this->verbose) {
HXLINE( 344)							::lime::utils::Log_obj::info(HX_("IS REL",03,c6,b4,0f),::hx::SourceInfo(HX_("openfl/utils/AGALMiniAssembler.hx",83,ff,5e,12),344,HX_("openfl.utils.AGALMiniAssembler",1d,f7,bb,62),HX_("assemble",12,a9,1b,c5)));
            						}
HXLINE( 347)						isRelative = true;
            					}
HXLINE( 350)					HX_VARI( ::Array< ::String >,res) = this->match(regs->__get(j),reg6);
HXLINE( 351)					if ((res->length == 0)) {
HXLINE( 353)						this->error = ((((HX_("error: could not parse operand ",5e,e6,18,8a) + j) + HX_(" (",08,1c,00,00)) + regs->__get(j)) + HX_(").",e5,23,00,00));
HXLINE( 354)						badreg = true;
HXLINE( 355)						goto _hx_goto_3;
            					}
HXLINE( 358)					HX_VARI(  ::openfl::utils::_AGALMiniAssembler::Register,regFound) = ( ( ::openfl::utils::_AGALMiniAssembler::Register)(::openfl::utils::AGALMiniAssembler_obj::REGMAP->get(res->__get(0))) );
HXLINE( 361)					if (this->debugEnabled) {
HXLINE( 363)						::lime::utils::Log_obj::info(regFound,::hx::SourceInfo(HX_("openfl/utils/AGALMiniAssembler.hx",83,ff,5e,12),363,HX_("openfl.utils.AGALMiniAssembler",1d,f7,bb,62),HX_("assemble",12,a9,1b,c5)));
            					}
HXLINE( 366)					if (::hx::IsNull( regFound )) {
HXLINE( 368)						this->error = ((((HX_("error: could not find register name for operand ",d3,f6,78,ae) + j) + HX_(" (",08,1c,00,00)) + regs->__get(j)) + HX_(").",e5,23,00,00));
HXLINE( 369)						badreg = true;
HXLINE( 370)						goto _hx_goto_3;
            					}
HXLINE( 373)					if (isFrag) {
HXLINE( 375)						if (((regFound->flags & 32) == 0)) {
HXLINE( 377)							this->error = ((((HX_("error: register operand ",66,bd,b9,f5) + j) + HX_(" (",08,1c,00,00)) + regs->__get(j)) + HX_(") only allowed in vertex programs.",e9,f2,50,fb));
HXLINE( 378)							badreg = true;
HXLINE( 379)							goto _hx_goto_3;
            						}
HXLINE( 382)						if (isRelative) {
HXLINE( 384)							this->error = ((((HX_("error: register operand ",66,bd,b9,f5) + j) + HX_(" (",08,1c,00,00)) + regs->__get(j)) + HX_(") relative adressing not allowed in fragment programs.",34,7c,f5,9f));
HXLINE( 385)							badreg = true;
HXLINE( 386)							goto _hx_goto_3;
            						}
            					}
            					else {
HXLINE( 391)						if (((regFound->flags & 64) == 0)) {
HXLINE( 393)							this->error = ((((HX_("error: register operand ",66,bd,b9,f5) + j) + HX_(" (",08,1c,00,00)) + regs->__get(j)) + HX_(") only allowed in fragment programs.",d5,73,aa,3f));
HXLINE( 394)							badreg = true;
HXLINE( 395)							goto _hx_goto_3;
            						}
            					}
HXLINE( 399)					int _hx_tmp = regs->__get(j).indexOf(regFound->name,null());
HXDLIN( 399)					regs[j] = regs->__get(j).substr((_hx_tmp + regFound->name.length),null());
HXLINE( 401)					HX_VAR( ::Array< ::String >,idxmatch);
HXDLIN( 401)					if (isRelative) {
HXLINE( 401)						idxmatch = this->match(relreg->__get(0),reg7);
            					}
            					else {
HXLINE( 401)						idxmatch = this->match(regs->__get(j),reg7);
            					}
HXLINE( 402)					HX_VARI( int,regidx) = 0;
HXLINE( 404)					if ((idxmatch->length > 0)) {
HXLINE( 406)						regidx = ( (int)(::Std_obj::parseInt(idxmatch->__get(0))) );
            					}
HXLINE( 409)					int a = regFound->range;
HXDLIN( 409)					bool aNeg = (regidx < 0);
HXDLIN( 409)					bool bNeg = (a < 0);
HXDLIN( 409)					bool _hx_tmp1;
HXDLIN( 409)					if ((aNeg != bNeg)) {
HXLINE( 409)						_hx_tmp1 = aNeg;
            					}
            					else {
HXLINE( 409)						_hx_tmp1 = (regidx > a);
            					}
HXDLIN( 409)					if (_hx_tmp1) {
HXLINE( 411)						::String _hx_tmp = ((((HX_("error: register operand ",66,bd,b9,f5) + j) + HX_(" (",08,1c,00,00)) + regs->__get(j)) + HX_(") index exceeds limit of ",5e,a7,88,f8));
HXDLIN( 411)						int _hx_int = (regFound->range + 1);
HXDLIN( 411)						Float _hx_tmp1;
HXDLIN( 411)						if ((_hx_int < 0)) {
HXLINE( 411)							_hx_tmp1 = (((Float)4294967296.0) + _hx_int);
            						}
            						else {
HXLINE( 411)							_hx_tmp1 = (_hx_int + ((Float)0.0));
            						}
HXDLIN( 411)						this->error = ((_hx_tmp + ::Std_obj::string(_hx_tmp1)) + HX_(".",2e,00,00,00));
HXLINE( 412)						badreg = true;
HXLINE( 413)						goto _hx_goto_3;
            					}
HXLINE( 416)					HX_VARI( int,regmask) = 0;
HXLINE( 417)					HX_VARI( ::Array< ::String >,maskmatch) = this->match(regs->__get(j),reg8);
HXLINE( 418)					HX_VAR( bool,isDest);
HXDLIN( 418)					if ((j == 0)) {
HXLINE( 418)						isDest = ((opFound->flags & 128) == 0);
            					}
            					else {
HXLINE( 418)						isDest = false;
            					}
HXLINE( 419)					HX_VAR( bool,isSampler);
HXDLIN( 419)					if ((j == 2)) {
HXLINE( 419)						isSampler = ((opFound->flags & 8) != 0);
            					}
            					else {
HXLINE( 419)						isSampler = false;
            					}
HXLINE( 420)					HX_VARI( int,reltype) = 0;
HXLINE( 421)					HX_VARI( int,relsel) = 0;
HXLINE( 422)					HX_VARI( int,reloffset) = 0;
HXLINE( 424)					bool _hx_tmp2;
HXDLIN( 424)					if (isDest) {
HXLINE( 424)						_hx_tmp2 = isRelative;
            					}
            					else {
HXLINE( 424)						_hx_tmp2 = false;
            					}
HXDLIN( 424)					if (_hx_tmp2) {
HXLINE( 426)						this->error = HX_("error: relative can not be destination",54,bb,32,e3);
HXLINE( 427)						badreg = true;
HXLINE( 428)						goto _hx_goto_3;
            					}
HXLINE( 431)					if ((maskmatch->length > 0)) {
HXLINE( 433)						regmask = 0;
HXLINE( 434)						HX_VARI( int,cv) = 0;
HXLINE( 435)						HX_VARI( int,maskLength) = maskmatch->__get(0).length;
HXLINE( 436)						HX_VARI( int,k) = 1;
HXLINE( 438)						while((k < maskLength)){
HXLINE( 440)							cv = (( (int)(maskmatch->__get(0).charCodeAt(k)) ) - 120);
HXLINE( 442)							bool aNeg = (cv < 0);
HXDLIN( 442)							bool bNeg = (2 < 0);
HXDLIN( 442)							bool _hx_tmp;
HXDLIN( 442)							if ((aNeg != bNeg)) {
HXLINE( 442)								_hx_tmp = aNeg;
            							}
            							else {
HXLINE( 442)								_hx_tmp = (cv > 2);
            							}
HXDLIN( 442)							if (_hx_tmp) {
HXLINE( 444)								cv = 3;
            							}
HXLINE( 447)							if (isDest) {
HXLINE( 449)								regmask = (regmask | (1 << cv));
            							}
            							else {
HXLINE( 453)								regmask = (regmask | (cv << ((k - 1) << 1)));
            							}
HXLINE( 456)							k = (k + 1);
            						}
HXLINE( 459)						if (!(isDest)) {
HXLINE( 461)							while((k <= 4)){
HXLINE( 463)								regmask = (regmask | (cv << ((k - 1) << 1)));
HXLINE( 464)								k = (k + 1);
            							}
            						}
            					}
            					else {
HXLINE( 470)						if (isDest) {
HXLINE( 470)							regmask = 15;
            						}
            						else {
HXLINE( 470)							regmask = 228;
            						}
            					}
HXLINE( 473)					if (isRelative) {
HXLINE( 475)						HX_VARI( ::Array< ::String >,relname) = this->match(relreg->__get(0),reg9);
HXLINE( 476)						HX_VARI(  ::openfl::utils::_AGALMiniAssembler::Register,regFoundRel) = ( ( ::openfl::utils::_AGALMiniAssembler::Register)(::openfl::utils::AGALMiniAssembler_obj::REGMAP->get(relname->__get(0))) );
HXLINE( 478)						if (::hx::IsNull( regFoundRel )) {
HXLINE( 480)							this->error = HX_("error: bad index register",1a,79,3a,ab);
HXLINE( 481)							badreg = true;
HXLINE( 482)							goto _hx_goto_3;
            						}
HXLINE( 485)						reltype = regFoundRel->emitCode;
HXLINE( 486)						HX_VARI( ::Array< ::String >,selmatch) = this->match(relreg->__get(0),reg10);
HXLINE( 488)						if ((selmatch->length == 0)) {
HXLINE( 490)							this->error = HX_("error: bad index register select",42,31,f8,d3);
HXLINE( 491)							badreg = true;
HXLINE( 492)							goto _hx_goto_3;
            						}
HXLINE( 495)						relsel = (( (int)(selmatch->__get(0).charCodeAt(1)) ) - 120);
HXLINE( 497)						bool aNeg = (relsel < 0);
HXDLIN( 497)						bool bNeg = (2 < 0);
HXDLIN( 497)						bool _hx_tmp;
HXDLIN( 497)						if ((aNeg != bNeg)) {
HXLINE( 497)							_hx_tmp = aNeg;
            						}
            						else {
HXLINE( 497)							_hx_tmp = (relsel > 2);
            						}
HXDLIN( 497)						if (_hx_tmp) {
HXLINE( 499)							relsel = 3;
            						}
HXLINE( 502)						HX_VARI( ::Array< ::String >,relofs) = this->match(relreg->__get(0),reg11);
HXLINE( 504)						if ((relofs->length > 0)) {
HXLINE( 506)							reloffset = ( (int)(::Std_obj::parseInt(relofs->__get(0))) );
            						}
HXLINE( 509)						bool _hx_tmp1;
HXDLIN( 509)						if ((reloffset >= 0)) {
HXLINE( 509)							_hx_tmp1 = (reloffset > 255);
            						}
            						else {
HXLINE( 509)							_hx_tmp1 = true;
            						}
HXDLIN( 509)						if (_hx_tmp1) {
HXLINE( 511)							this->error = ((HX_("error: index offset ",f1,9c,33,57) + reloffset) + HX_(" out of bounds. [0..255]",de,2b,59,f3));
HXLINE( 512)							badreg = true;
HXLINE( 513)							goto _hx_goto_3;
            						}
HXLINE( 516)						if (this->verbose) {
HXLINE( 518)							::String _hx_tmp = ((((HX_("RELATIVE: type=",91,08,0e,50) + reltype) + HX_("==",60,35,00,00)) + relname->__get(0)) + HX_(" sel=",83,1b,23,b9));
HXDLIN( 518)							int _hx_int = relsel;
HXDLIN( 518)							Float _hx_tmp1;
HXDLIN( 518)							if ((_hx_int < 0)) {
HXLINE( 518)								_hx_tmp1 = (((Float)4294967296.0) + _hx_int);
            							}
            							else {
HXLINE( 518)								_hx_tmp1 = (_hx_int + ((Float)0.0));
            							}
HXDLIN( 518)							::String _hx_tmp2 = ((_hx_tmp + ::Std_obj::string(_hx_tmp1)) + HX_("==",60,35,00,00));
HXDLIN( 518)							::String _hx_tmp3 = ((_hx_tmp2 + selmatch->__get(0)) + HX_(" idx=",80,41,86,b2));
HXDLIN( 518)							int int1 = regidx;
HXDLIN( 518)							Float _hx_tmp4;
HXDLIN( 518)							if ((int1 < 0)) {
HXLINE( 518)								_hx_tmp4 = (((Float)4294967296.0) + int1);
            							}
            							else {
HXLINE( 518)								_hx_tmp4 = (int1 + ((Float)0.0));
            							}
HXDLIN( 518)							::String _hx_tmp5 = (((_hx_tmp3 + ::Std_obj::string(_hx_tmp4)) + HX_(" offset=",2a,4d,b3,fd)) + reloffset);
HXDLIN( 518)							::lime::utils::Log_obj::info(_hx_tmp5,::hx::SourceInfo(HX_("openfl/utils/AGALMiniAssembler.hx",83,ff,5e,12),518,HX_("openfl.utils.AGALMiniAssembler",1d,f7,bb,62),HX_("assemble",12,a9,1b,c5)));
            						}
            					}
HXLINE( 523)					if (this->verbose) {
HXLINE( 525)						::String _hx_tmp = ((HX_("  emit argcode=",c7,a3,7b,7d) + ::Std_obj::string(regFound)) + HX_("[",5b,00,00,00));
HXDLIN( 525)						int _hx_int = regidx;
HXDLIN( 525)						Float _hx_tmp1;
HXDLIN( 525)						if ((_hx_int < 0)) {
HXLINE( 525)							_hx_tmp1 = (((Float)4294967296.0) + _hx_int);
            						}
            						else {
HXLINE( 525)							_hx_tmp1 = (_hx_int + ((Float)0.0));
            						}
HXDLIN( 525)						::String _hx_tmp2 = ((((_hx_tmp + ::Std_obj::string(_hx_tmp1)) + HX_("][",5e,51,00,00)) + regmask) + HX_("]",5d,00,00,00));
HXDLIN( 525)						::lime::utils::Log_obj::info(_hx_tmp2,::hx::SourceInfo(HX_("openfl/utils/AGALMiniAssembler.hx",83,ff,5e,12),525,HX_("openfl.utils.AGALMiniAssembler",1d,f7,bb,62),HX_("assemble",12,a9,1b,c5)));
            					}
HXLINE( 528)					if (isDest) {
HXLINE( 530)						this->agalcode->writeShort(regidx);
HXLINE( 531)						this->agalcode->writeByte(regmask);
HXLINE( 532)						this->agalcode->writeByte(regFound->emitCode);
HXLINE( 533)						pad = (pad - 32);
            					}
            					else {
HXLINE( 537)						if (isSampler) {
HXLINE( 539)							if (this->verbose) {
HXLINE( 541)								::lime::utils::Log_obj::info(HX_("  emit sampler",3b,ce,fa,fa),::hx::SourceInfo(HX_("openfl/utils/AGALMiniAssembler.hx",83,ff,5e,12),541,HX_("openfl.utils.AGALMiniAssembler",1d,f7,bb,62),HX_("assemble",12,a9,1b,c5)));
            							}
HXLINE( 544)							HX_VARI( int,samplerbits) = 5;
HXLINE( 545)							HX_VAR( int,optsLength);
HXDLIN( 545)							if (::hx::IsNull( opts )) {
HXLINE( 545)								optsLength = 0;
            							}
            							else {
HXLINE( 545)								optsLength = opts->length;
            							}
HXLINE( 546)							HX_VARI( Float,bias) = ((Float)0.0);
HXLINE( 548)							{
HXLINE( 548)								int _g = 0;
HXDLIN( 548)								int _g1 = optsLength;
HXDLIN( 548)								while((_g < _g1)){
HXLINE( 548)									_g = (_g + 1);
HXDLIN( 548)									HX_VARI( int,k) = (_g - 1);
HXLINE( 550)									if (this->verbose) {
HXLINE( 552)										::lime::utils::Log_obj::info((HX_("    opt: ",99,49,70,b6) + opts->__get(k)),::hx::SourceInfo(HX_("openfl/utils/AGALMiniAssembler.hx",83,ff,5e,12),552,HX_("openfl.utils.AGALMiniAssembler",1d,f7,bb,62),HX_("assemble",12,a9,1b,c5)));
            									}
HXLINE( 555)									HX_VARI(  ::openfl::utils::_AGALMiniAssembler::Sampler,optfound) = ( ( ::openfl::utils::_AGALMiniAssembler::Sampler)(::openfl::utils::AGALMiniAssembler_obj::SAMPLEMAP->get(opts->__get(k))) );
HXLINE( 557)									if (::hx::IsNull( optfound )) {
HXLINE( 561)										bias = ::Std_obj::parseFloat(opts->__get(k));
HXLINE( 563)										if (this->verbose) {
HXLINE( 565)											::lime::utils::Log_obj::info((HX_("    bias: ",5f,a5,fa,a4) + bias),::hx::SourceInfo(HX_("openfl/utils/AGALMiniAssembler.hx",83,ff,5e,12),565,HX_("openfl.utils.AGALMiniAssembler",1d,f7,bb,62),HX_("assemble",12,a9,1b,c5)));
            										}
            									}
            									else {
HXLINE( 570)										if ((optfound->flag != 16)) {
HXLINE( 572)											samplerbits = (samplerbits & ~((15 << optfound->flag)));
            										}
HXLINE( 575)										samplerbits = (samplerbits | (optfound->mask << optfound->flag));
            									}
            								}
            							}
HXLINE( 579)							this->agalcode->writeShort(regidx);
HXLINE( 580)							{
HXLINE( 580)								 ::openfl::utils::ByteArrayData this1 = this->agalcode;
HXDLIN( 580)								this1->writeByte(::Std_obj::_hx_int((bias * ((Float)8.0))));
            							}
HXLINE( 581)							this->agalcode->writeByte(0);
HXLINE( 582)							this->agalcode->writeUnsignedInt(samplerbits);
HXLINE( 584)							if (this->verbose) {
HXLINE( 586)								::lime::utils::Log_obj::info((HX_("    bits: ",2c,b3,89,b1) + (samplerbits - 5)),::hx::SourceInfo(HX_("openfl/utils/AGALMiniAssembler.hx",83,ff,5e,12),586,HX_("openfl.utils.AGALMiniAssembler",1d,f7,bb,62),HX_("assemble",12,a9,1b,c5)));
            							}
HXLINE( 589)							pad = (pad - 64);
            						}
            						else {
HXLINE( 593)							if ((j == 0)) {
HXLINE( 595)								this->agalcode->writeUnsignedInt(0);
HXLINE( 596)								pad = (pad - 32);
            							}
HXLINE( 599)							this->agalcode->writeShort(regidx);
HXLINE( 600)							this->agalcode->writeByte(reloffset);
HXLINE( 601)							this->agalcode->writeByte(regmask);
HXLINE( 602)							this->agalcode->writeByte(regFound->emitCode);
HXLINE( 603)							this->agalcode->writeByte(reltype);
HXLINE( 604)							{
HXLINE( 604)								int _hx_tmp;
HXDLIN( 604)								if (isRelative) {
HXLINE( 604)									_hx_tmp = (relsel | 32768);
            								}
            								else {
HXLINE( 604)									_hx_tmp = 0;
            								}
HXDLIN( 604)								this->agalcode->writeShort(_hx_tmp);
            							}
HXLINE( 606)							pad = (pad - 64);
            						}
            					}
            				}
            				_hx_goto_3:;
            			}
HXLINE( 612)			HX_VARI( int,j) = 0;
HXLINE( 613)			while((j < pad)){
HXLINE( 615)				this->agalcode->writeByte(0);
HXLINE( 616)				j = (j + 8);
            			}
HXLINE( 619)			if (badreg) {
HXLINE( 621)				goto _hx_goto_2;
            			}
HXLINE( 624)			i = (i + 1);
            		}
            		_hx_goto_2:;
HXLINE( 627)		if ((this->error != HX_("",00,00,00,00))) {
HXLINE( 629)			 ::openfl::utils::AGALMiniAssembler _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 629)			_hx_tmp->error = (_hx_tmp->error + (((HX_("\n  at line ",49,c3,70,34) + i) + HX_(" ",20,00,00,00)) + lines->__get(i)));
HXLINE( 630)			::openfl::utils::_ByteArray::ByteArray_Impl__obj::set_length(this->agalcode,0);
HXLINE( 631)			::lime::utils::Log_obj::info(this->error,::hx::SourceInfo(HX_("openfl/utils/AGALMiniAssembler.hx",83,ff,5e,12),631,HX_("openfl.utils.AGALMiniAssembler",1d,f7,bb,62),HX_("assemble",12,a9,1b,c5)));
            		}
HXLINE( 635)		if (this->debugEnabled) {
HXLINE( 637)			HX_VARI( ::String,dbgLine) = HX_("generated bytecode:",94,4e,7c,79);
HXLINE( 638)			HX_VARI( int,agalLength) = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(this->agalcode);
HXLINE( 640)			{
HXLINE( 640)				int _g = 0;
HXDLIN( 640)				int _g1 = agalLength;
HXDLIN( 640)				while((_g < _g1)){
HXLINE( 640)					_g = (_g + 1);
HXDLIN( 640)					HX_VARI( int,index) = (_g - 1);
HXLINE( 642)					if ((::hx::Mod(index,16) == 0)) {
HXLINE( 644)						dbgLine = (dbgLine + HX_("\n",0a,00,00,00));
            					}
HXLINE( 647)					if ((::hx::Mod(index,4) == 0)) {
HXLINE( 649)						dbgLine = (dbgLine + HX_(" ",20,00,00,00));
            					}
HXLINE( 652)					HX_VARI( ::String,byteStr) = ::StringTools_obj::hex(( (int)(this->agalcode->b->__get(index)) ),2);
HXLINE( 654)					if ((byteStr.length < 2)) {
HXLINE( 656)						byteStr = (HX_("0",30,00,00,00) + byteStr);
            					}
HXLINE( 659)					dbgLine = (dbgLine + byteStr);
            				}
            			}
HXLINE( 662)			::lime::utils::Log_obj::info(dbgLine,::hx::SourceInfo(HX_("openfl/utils/AGALMiniAssembler.hx",83,ff,5e,12),662,HX_("openfl.utils.AGALMiniAssembler",1d,f7,bb,62),HX_("assemble",12,a9,1b,c5)));
            		}
HXLINE( 665)		if (this->verbose) {
HXLINE( 667)			::String _hx_tmp = ((HX_("AGALMiniAssembler.assemble time: ",4b,2c,a6,f9) + (( (Float)((::openfl::Lib_obj::getTimer() - start)) ) / ( (Float)(1000) ))) + HX_("s",73,00,00,00));
HXDLIN( 667)			::lime::utils::Log_obj::info(_hx_tmp,::hx::SourceInfo(HX_("openfl/utils/AGALMiniAssembler.hx",83,ff,5e,12),667,HX_("openfl.utils.AGALMiniAssembler",1d,f7,bb,62),HX_("assemble",12,a9,1b,c5)));
            		}
HXLINE( 670)		return this->agalcode;
            	}


HX_DEFINE_DYNAMIC_FUNC4(AGALMiniAssembler_obj,assemble,return )

void AGALMiniAssembler_obj::initregmap(int version,bool ignorelimits){
            	HX_GC_STACKFRAME(&_hx_pos_878a01ff4ba15759_674_initregmap)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(version,"version")
            	HX_STACK_ARG(ignorelimits,"ignorelimits")
HXLINE( 674)
HXLINE( 675)		{
HXLINE( 675)			::Dynamic this1 = ::openfl::utils::AGALMiniAssembler_obj::REGMAP;
HXDLIN( 675)			int v;
HXDLIN( 675)			if (ignorelimits) {
HXLINE( 675)				v = 1024;
            			}
            			else {
HXLINE( 675)				bool v1;
HXDLIN( 675)				if ((version != 1)) {
HXLINE( 675)					v1 = (version == 2);
            				}
            				else {
HXLINE( 675)					v1 = true;
            				}
HXDLIN( 675)				if (v1) {
HXLINE( 675)					v = 7;
            				}
            				else {
HXLINE( 675)					v = 15;
            				}
            			}
HXDLIN( 675)			 ::openfl::utils::_AGALMiniAssembler::Register v1 =  ::openfl::utils::_AGALMiniAssembler::Register_obj::__alloc( HX_CTX ,HX_("va",2b,67,00,00),HX_("vertex attribute",60,ec,e8,40),0,v,66);
HXDLIN( 675)			( ( ::haxe::ds::StringMap)(this1) )->set(HX_("va",2b,67,00,00),v1);
            		}
HXLINE( 676)		{
HXLINE( 676)			::Dynamic this2 = ::openfl::utils::AGALMiniAssembler_obj::REGMAP;
HXDLIN( 676)			int v2;
HXDLIN( 676)			if (ignorelimits) {
HXLINE( 676)				v2 = 1024;
            			}
            			else {
HXLINE( 676)				if ((version == 1)) {
HXLINE( 676)					v2 = 127;
            				}
            				else {
HXLINE( 676)					v2 = 249;
            				}
            			}
HXDLIN( 676)			 ::openfl::utils::_AGALMiniAssembler::Register v3 =  ::openfl::utils::_AGALMiniAssembler::Register_obj::__alloc( HX_CTX ,HX_("vc",2d,67,00,00),HX_("vertex constant",a0,79,46,53),1,v2,66);
HXDLIN( 676)			( ( ::haxe::ds::StringMap)(this2) )->set(HX_("vc",2d,67,00,00),v3);
            		}
HXLINE( 677)		{
HXLINE( 677)			::Dynamic this3 = ::openfl::utils::AGALMiniAssembler_obj::REGMAP;
HXDLIN( 677)			int v4;
HXDLIN( 677)			if (ignorelimits) {
HXLINE( 677)				v4 = 1024;
            			}
            			else {
HXLINE( 677)				if ((version == 1)) {
HXLINE( 677)					v4 = 7;
            				}
            				else {
HXLINE( 677)					v4 = 25;
            				}
            			}
HXDLIN( 677)			 ::openfl::utils::_AGALMiniAssembler::Register v5 =  ::openfl::utils::_AGALMiniAssembler::Register_obj::__alloc( HX_CTX ,HX_("vt",3e,67,00,00),HX_("vertex temporary",d5,c5,fd,1d),2,v4,67);
HXDLIN( 677)			( ( ::haxe::ds::StringMap)(this3) )->set(HX_("vt",3e,67,00,00),v5);
            		}
HXLINE( 678)		{
HXLINE( 678)			::Dynamic this4 = ::openfl::utils::AGALMiniAssembler_obj::REGMAP;
HXDLIN( 678)			int v6;
HXDLIN( 678)			if (ignorelimits) {
HXLINE( 678)				v6 = 1024;
            			}
            			else {
HXLINE( 678)				v6 = 0;
            			}
HXDLIN( 678)			 ::openfl::utils::_AGALMiniAssembler::Register v7 =  ::openfl::utils::_AGALMiniAssembler::Register_obj::__alloc( HX_CTX ,HX_("vo",39,67,00,00),HX_("vertex output",3d,00,1e,e4),3,v6,65);
HXDLIN( 678)			( ( ::haxe::ds::StringMap)(this4) )->set(HX_("vo",39,67,00,00),v7);
            		}
HXLINE( 679)		{
HXLINE( 679)			::Dynamic this5 = ::openfl::utils::AGALMiniAssembler_obj::REGMAP;
HXDLIN( 679)			int v8;
HXDLIN( 679)			if (ignorelimits) {
HXLINE( 679)				v8 = 1024;
            			}
            			else {
HXLINE( 679)				if ((version == 1)) {
HXLINE( 679)					v8 = 7;
            				}
            				else {
HXLINE( 679)					v8 = 9;
            				}
            			}
HXDLIN( 679)			 ::openfl::utils::_AGALMiniAssembler::Register v9 =  ::openfl::utils::_AGALMiniAssembler::Register_obj::__alloc( HX_CTX ,HX_("vi",33,67,00,00),HX_("varying",70,bc,7b,e7),4,v8,99);
HXDLIN( 679)			( ( ::haxe::ds::StringMap)(this5) )->set(HX_("vi",33,67,00,00),v9);
            		}
HXLINE( 680)		{
HXLINE( 680)			::Dynamic this6 = ::openfl::utils::AGALMiniAssembler_obj::REGMAP;
HXDLIN( 680)			int v10;
HXDLIN( 680)			if (ignorelimits) {
HXLINE( 680)				v10 = 1024;
            			}
            			else {
HXLINE( 680)				if ((version == 1)) {
HXLINE( 680)					v10 = 27;
            				}
            				else {
HXLINE( 680)					if ((version == 2)) {
HXLINE( 680)						v10 = 63;
            					}
            					else {
HXLINE( 680)						v10 = 199;
            					}
            				}
            			}
HXDLIN( 680)			 ::openfl::utils::_AGALMiniAssembler::Register v11 =  ::openfl::utils::_AGALMiniAssembler::Register_obj::__alloc( HX_CTX ,HX_("fc",3d,59,00,00),HX_("fragment constant",b4,07,43,d0),1,v10,34);
HXDLIN( 680)			( ( ::haxe::ds::StringMap)(this6) )->set(HX_("fc",3d,59,00,00),v11);
            		}
HXLINE( 681)		{
HXLINE( 681)			::Dynamic this7 = ::openfl::utils::AGALMiniAssembler_obj::REGMAP;
HXDLIN( 681)			int v12;
HXDLIN( 681)			if (ignorelimits) {
HXLINE( 681)				v12 = 1024;
            			}
            			else {
HXLINE( 681)				if ((version == 1)) {
HXLINE( 681)					v12 = 7;
            				}
            				else {
HXLINE( 681)					v12 = 25;
            				}
            			}
HXDLIN( 681)			 ::openfl::utils::_AGALMiniAssembler::Register v13 =  ::openfl::utils::_AGALMiniAssembler::Register_obj::__alloc( HX_CTX ,HX_("ft",4e,59,00,00),HX_("fragment temporary",41,89,fd,fd),2,v12,35);
HXDLIN( 681)			( ( ::haxe::ds::StringMap)(this7) )->set(HX_("ft",4e,59,00,00),v13);
            		}
HXLINE( 682)		{
HXLINE( 682)			::Dynamic this8 = ::openfl::utils::AGALMiniAssembler_obj::REGMAP;
HXDLIN( 682)			int v14;
HXDLIN( 682)			if (ignorelimits) {
HXLINE( 682)				v14 = 1024;
            			}
            			else {
HXLINE( 682)				v14 = 7;
            			}
HXDLIN( 682)			 ::openfl::utils::_AGALMiniAssembler::Register v15 =  ::openfl::utils::_AGALMiniAssembler::Register_obj::__alloc( HX_CTX ,HX_("fs",4d,59,00,00),HX_("texture sampler",c3,a4,85,37),5,v14,34);
HXDLIN( 682)			( ( ::haxe::ds::StringMap)(this8) )->set(HX_("fs",4d,59,00,00),v15);
            		}
HXLINE( 683)		{
HXLINE( 683)			::Dynamic this9 = ::openfl::utils::AGALMiniAssembler_obj::REGMAP;
HXDLIN( 683)			int v16;
HXDLIN( 683)			if (ignorelimits) {
HXLINE( 683)				v16 = 1024;
            			}
            			else {
HXLINE( 683)				if ((version == 1)) {
HXLINE( 683)					v16 = 0;
            				}
            				else {
HXLINE( 683)					v16 = 3;
            				}
            			}
HXDLIN( 683)			 ::openfl::utils::_AGALMiniAssembler::Register v17 =  ::openfl::utils::_AGALMiniAssembler::Register_obj::__alloc( HX_CTX ,HX_("fo",49,59,00,00),HX_("fragment output",51,21,41,79),3,v16,33);
HXDLIN( 683)			( ( ::haxe::ds::StringMap)(this9) )->set(HX_("fo",49,59,00,00),v17);
            		}
HXLINE( 684)		{
HXLINE( 684)			::Dynamic this10 = ::openfl::utils::AGALMiniAssembler_obj::REGMAP;
HXDLIN( 684)			int v18;
HXDLIN( 684)			if (ignorelimits) {
HXLINE( 684)				v18 = 1024;
            			}
            			else {
HXLINE( 684)				if ((version == 1)) {
HXLINE( 684)					v18 = -1;
            				}
            				else {
HXLINE( 684)					v18 = 0;
            				}
            			}
HXDLIN( 684)			 ::openfl::utils::_AGALMiniAssembler::Register v19 =  ::openfl::utils::_AGALMiniAssembler::Register_obj::__alloc( HX_CTX ,HX_("fd",3e,59,00,00),HX_("fragment depth output",ce,1a,fc,b5),6,v18,33);
HXDLIN( 684)			( ( ::haxe::ds::StringMap)(this10) )->set(HX_("fd",3e,59,00,00),v19);
            		}
HXLINE( 685)		{
HXLINE( 685)			::Dynamic this11 = ::openfl::utils::AGALMiniAssembler_obj::REGMAP;
HXDLIN( 685)			int v20;
HXDLIN( 685)			if (ignorelimits) {
HXLINE( 685)				v20 = 1024;
            			}
            			else {
HXLINE( 685)				v20 = 0;
            			}
HXDLIN( 685)			 ::openfl::utils::_AGALMiniAssembler::Register v21 =  ::openfl::utils::_AGALMiniAssembler::Register_obj::__alloc( HX_CTX ,HX_("iid",84,08,50,00),HX_("instance id",86,af,f1,28),7,v20,66);
HXDLIN( 685)			( ( ::haxe::ds::StringMap)(this11) )->set(HX_("iid",84,08,50,00),v21);
            		}
HXLINE( 688)		{
HXLINE( 688)			::Dynamic this12 = ::openfl::utils::AGALMiniAssembler_obj::REGMAP;
HXDLIN( 688)			 ::openfl::utils::_AGALMiniAssembler::Register v22 = ( ( ::openfl::utils::_AGALMiniAssembler::Register)(::openfl::utils::AGALMiniAssembler_obj::REGMAP->get(HX_("vo",39,67,00,00))) );
HXDLIN( 688)			( ( ::haxe::ds::StringMap)(this12) )->set(HX_("op",21,61,00,00),v22);
            		}
HXLINE( 689)		{
HXLINE( 689)			::Dynamic this13 = ::openfl::utils::AGALMiniAssembler_obj::REGMAP;
HXDLIN( 689)			 ::openfl::utils::_AGALMiniAssembler::Register v23 = ( ( ::openfl::utils::_AGALMiniAssembler::Register)(::openfl::utils::AGALMiniAssembler_obj::REGMAP->get(HX_("vi",33,67,00,00))) );
HXDLIN( 689)			( ( ::haxe::ds::StringMap)(this13) )->set(HX_("i",69,00,00,00),v23);
            		}
HXLINE( 690)		{
HXLINE( 690)			::Dynamic this14 = ::openfl::utils::AGALMiniAssembler_obj::REGMAP;
HXDLIN( 690)			 ::openfl::utils::_AGALMiniAssembler::Register v24 = ( ( ::openfl::utils::_AGALMiniAssembler::Register)(::openfl::utils::AGALMiniAssembler_obj::REGMAP->get(HX_("vi",33,67,00,00))) );
HXDLIN( 690)			( ( ::haxe::ds::StringMap)(this14) )->set(HX_("v",76,00,00,00),v24);
            		}
HXLINE( 691)		{
HXLINE( 691)			::Dynamic this15 = ::openfl::utils::AGALMiniAssembler_obj::REGMAP;
HXDLIN( 691)			 ::openfl::utils::_AGALMiniAssembler::Register v25 = ( ( ::openfl::utils::_AGALMiniAssembler::Register)(::openfl::utils::AGALMiniAssembler_obj::REGMAP->get(HX_("fo",49,59,00,00))) );
HXDLIN( 691)			( ( ::haxe::ds::StringMap)(this15) )->set(HX_("oc",14,61,00,00),v25);
            		}
HXLINE( 692)		{
HXLINE( 692)			::Dynamic this16 = ::openfl::utils::AGALMiniAssembler_obj::REGMAP;
HXDLIN( 692)			 ::openfl::utils::_AGALMiniAssembler::Register v26 = ( ( ::openfl::utils::_AGALMiniAssembler::Register)(::openfl::utils::AGALMiniAssembler_obj::REGMAP->get(HX_("fd",3e,59,00,00))) );
HXDLIN( 692)			( ( ::haxe::ds::StringMap)(this16) )->set(HX_("od",15,61,00,00),v26);
            		}
HXLINE( 693)		{
HXLINE( 693)			::Dynamic this17 = ::openfl::utils::AGALMiniAssembler_obj::REGMAP;
HXDLIN( 693)			 ::openfl::utils::_AGALMiniAssembler::Register v27 = ( ( ::openfl::utils::_AGALMiniAssembler::Register)(::openfl::utils::AGALMiniAssembler_obj::REGMAP->get(HX_("vi",33,67,00,00))) );
HXDLIN( 693)			( ( ::haxe::ds::StringMap)(this17) )->set(HX_("fi",43,59,00,00),v27);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(AGALMiniAssembler_obj,initregmap,(void))

::Array< ::String > AGALMiniAssembler_obj::match(::String value, ::EReg reg){
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_775_match)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
            	HX_STACK_ARG(reg,"reg")
HXLINE( 775)
HXLINE( 776)		HX_VARI( ::Array< ::String >,matches) = ::Array_obj< ::String >::__new(0);
HXLINE( 777)		HX_VARI( int,index) = 0;
HXLINE( 778)		HX_VAR( ::String,match);
HXLINE( 780)		while(reg->matchSub(value,index,null())){
HXLINE( 782)			match = reg->matched(0);
HXLINE( 783)			matches->push(match);
HXLINE( 784)			index = ( (int)((reg->matchedPos()->__Field(HX_("pos",94,5d,55,00),::hx::paccDynamic) + match.length)) );
            		}
HXLINE( 787)		return matches;
            	}


HX_DEFINE_DYNAMIC_FUNC2(AGALMiniAssembler_obj,match,return )

 ::haxe::ds::StringMap AGALMiniAssembler_obj::OPMAP;

 ::haxe::ds::StringMap AGALMiniAssembler_obj::REGMAP;

 ::haxe::ds::StringMap AGALMiniAssembler_obj::SAMPLEMAP;

int AGALMiniAssembler_obj::MAX_NESTING;

int AGALMiniAssembler_obj::MAX_OPCODES;

::String AGALMiniAssembler_obj::FRAGMENT;

::String AGALMiniAssembler_obj::VERTEX;

int AGALMiniAssembler_obj::SAMPLER_TYPE_SHIFT;

int AGALMiniAssembler_obj::SAMPLER_DIM_SHIFT;

int AGALMiniAssembler_obj::SAMPLER_SPECIAL_SHIFT;

int AGALMiniAssembler_obj::SAMPLER_REPEAT_SHIFT;

int AGALMiniAssembler_obj::SAMPLER_MIPMAP_SHIFT;

int AGALMiniAssembler_obj::SAMPLER_FILTER_SHIFT;

int AGALMiniAssembler_obj::REG_WRITE;

int AGALMiniAssembler_obj::REG_READ;

int AGALMiniAssembler_obj::REG_FRAG;

int AGALMiniAssembler_obj::REG_VERT;

int AGALMiniAssembler_obj::OP_SCALAR;

int AGALMiniAssembler_obj::OP_SPECIAL_TEX;

int AGALMiniAssembler_obj::OP_SPECIAL_MATRIX;

int AGALMiniAssembler_obj::OP_FRAG_ONLY;

int AGALMiniAssembler_obj::OP_VERT_ONLY;

int AGALMiniAssembler_obj::OP_NO_DEST;

int AGALMiniAssembler_obj::OP_VERSION2;

int AGALMiniAssembler_obj::OP_INCNEST;

int AGALMiniAssembler_obj::OP_DECNEST;

::String AGALMiniAssembler_obj::MOV;

::String AGALMiniAssembler_obj::ADD;

::String AGALMiniAssembler_obj::SUB;

::String AGALMiniAssembler_obj::MUL;

::String AGALMiniAssembler_obj::DIV;

::String AGALMiniAssembler_obj::RCP;

::String AGALMiniAssembler_obj::MIN;

::String AGALMiniAssembler_obj::MAX;

::String AGALMiniAssembler_obj::FRC;

::String AGALMiniAssembler_obj::SQT;

::String AGALMiniAssembler_obj::RSQ;

::String AGALMiniAssembler_obj::POW;

::String AGALMiniAssembler_obj::LOG;

::String AGALMiniAssembler_obj::EXP;

::String AGALMiniAssembler_obj::NRM;

::String AGALMiniAssembler_obj::SIN;

::String AGALMiniAssembler_obj::COS;

::String AGALMiniAssembler_obj::CRS;

::String AGALMiniAssembler_obj::DP3;

::String AGALMiniAssembler_obj::DP4;

::String AGALMiniAssembler_obj::ABS;

::String AGALMiniAssembler_obj::NEG;

::String AGALMiniAssembler_obj::SAT;

::String AGALMiniAssembler_obj::M33;

::String AGALMiniAssembler_obj::M44;

::String AGALMiniAssembler_obj::M34;

::String AGALMiniAssembler_obj::DDX;

::String AGALMiniAssembler_obj::DDY;

::String AGALMiniAssembler_obj::IFE;

::String AGALMiniAssembler_obj::INE;

::String AGALMiniAssembler_obj::IFG;

::String AGALMiniAssembler_obj::IFL;

::String AGALMiniAssembler_obj::IEG;

::String AGALMiniAssembler_obj::IEL;

::String AGALMiniAssembler_obj::ELS;

::String AGALMiniAssembler_obj::EIF;

::String AGALMiniAssembler_obj::TED;

::String AGALMiniAssembler_obj::KIL;

::String AGALMiniAssembler_obj::TEX;

::String AGALMiniAssembler_obj::SGE;

::String AGALMiniAssembler_obj::SLT;

::String AGALMiniAssembler_obj::SGN;

::String AGALMiniAssembler_obj::SEQ;

::String AGALMiniAssembler_obj::SNE;

::String AGALMiniAssembler_obj::VA;

::String AGALMiniAssembler_obj::VC;

::String AGALMiniAssembler_obj::VT;

::String AGALMiniAssembler_obj::VO;

::String AGALMiniAssembler_obj::VI;

::String AGALMiniAssembler_obj::FC;

::String AGALMiniAssembler_obj::FT;

::String AGALMiniAssembler_obj::FS;

::String AGALMiniAssembler_obj::FO;

::String AGALMiniAssembler_obj::FD;

::String AGALMiniAssembler_obj::IID;

::String AGALMiniAssembler_obj::D2;

::String AGALMiniAssembler_obj::D3;

::String AGALMiniAssembler_obj::CUBE;

::String AGALMiniAssembler_obj::MIPNEAREST;

::String AGALMiniAssembler_obj::MIPLINEAR;

::String AGALMiniAssembler_obj::MIPNONE;

::String AGALMiniAssembler_obj::NOMIP;

::String AGALMiniAssembler_obj::NEAREST;

::String AGALMiniAssembler_obj::LINEAR;

::String AGALMiniAssembler_obj::ANISOTROPIC2X;

::String AGALMiniAssembler_obj::ANISOTROPIC4X;

::String AGALMiniAssembler_obj::ANISOTROPIC8X;

::String AGALMiniAssembler_obj::ANISOTROPIC16X;

::String AGALMiniAssembler_obj::CENTROID;

::String AGALMiniAssembler_obj::SINGLE;

::String AGALMiniAssembler_obj::IGNORESAMPLER;

::String AGALMiniAssembler_obj::REPEAT;

::String AGALMiniAssembler_obj::WRAP;

::String AGALMiniAssembler_obj::CLAMP;

::String AGALMiniAssembler_obj::REPEAT_U_CLAMP_V;

::String AGALMiniAssembler_obj::CLAMP_U_REPEAT_V;

::String AGALMiniAssembler_obj::RGBA;

::String AGALMiniAssembler_obj::COMPRESSED;

::String AGALMiniAssembler_obj::COMPRESSEDALPHA;

::String AGALMiniAssembler_obj::DXT1;

::String AGALMiniAssembler_obj::DXT5;

::String AGALMiniAssembler_obj::VIDEO;

bool AGALMiniAssembler_obj::initialized;

void AGALMiniAssembler_obj::init(){
            	HX_GC_STACKFRAME(&_hx_pos_878a01ff4ba15759_697_init)
HXLINE( 697)
HXLINE( 698)		::openfl::utils::AGALMiniAssembler_obj::initialized = true;
HXLINE( 701)		{
HXLINE( 701)			::Dynamic this1 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 701)			 ::openfl::utils::_AGALMiniAssembler::OpCode v =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("mov",d4,16,53,00),2,0,0);
HXDLIN( 701)			( ( ::haxe::ds::StringMap)(this1) )->set(HX_("mov",d4,16,53,00),v);
            		}
HXLINE( 702)		{
HXLINE( 702)			::Dynamic this2 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 702)			 ::openfl::utils::_AGALMiniAssembler::OpCode v1 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("add",21,f2,49,00),3,1,0);
HXDLIN( 702)			( ( ::haxe::ds::StringMap)(this2) )->set(HX_("add",21,f2,49,00),v1);
            		}
HXLINE( 703)		{
HXLINE( 703)			::Dynamic this3 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 703)			 ::openfl::utils::_AGALMiniAssembler::OpCode v2 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("sub",80,a9,57,00),3,2,0);
HXDLIN( 703)			( ( ::haxe::ds::StringMap)(this3) )->set(HX_("sub",80,a9,57,00),v2);
            		}
HXLINE( 704)		{
HXLINE( 704)			::Dynamic this4 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 704)			 ::openfl::utils::_AGALMiniAssembler::OpCode v3 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("mul",04,1c,53,00),3,3,0);
HXDLIN( 704)			( ( ::haxe::ds::StringMap)(this4) )->set(HX_("mul",04,1c,53,00),v3);
            		}
HXLINE( 705)		{
HXLINE( 705)			::Dynamic this5 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 705)			 ::openfl::utils::_AGALMiniAssembler::OpCode v4 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("div",51,3d,4c,00),3,4,0);
HXDLIN( 705)			( ( ::haxe::ds::StringMap)(this5) )->set(HX_("div",51,3d,4c,00),v4);
            		}
HXLINE( 706)		{
HXLINE( 706)			::Dynamic this6 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 706)			 ::openfl::utils::_AGALMiniAssembler::OpCode v5 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("rcp",9f,d7,56,00),2,5,0);
HXDLIN( 706)			( ( ::haxe::ds::StringMap)(this6) )->set(HX_("rcp",9f,d7,56,00),v5);
            		}
HXLINE( 707)		{
HXLINE( 707)			::Dynamic this7 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 707)			 ::openfl::utils::_AGALMiniAssembler::OpCode v6 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("min",92,11,53,00),3,6,0);
HXDLIN( 707)			( ( ::haxe::ds::StringMap)(this7) )->set(HX_("min",92,11,53,00),v6);
            		}
HXLINE( 708)		{
HXLINE( 708)			::Dynamic this8 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 708)			 ::openfl::utils::_AGALMiniAssembler::OpCode v7 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("max",a4,0a,53,00),3,7,0);
HXDLIN( 708)			( ( ::haxe::ds::StringMap)(this8) )->set(HX_("max",a4,0a,53,00),v7);
            		}
HXLINE( 709)		{
HXLINE( 709)			::Dynamic this9 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 709)			 ::openfl::utils::_AGALMiniAssembler::OpCode v8 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("frc",97,c9,4d,00),2,8,0);
HXDLIN( 709)			( ( ::haxe::ds::StringMap)(this9) )->set(HX_("frc",97,c9,4d,00),v8);
            		}
HXLINE( 710)		{
HXLINE( 710)			::Dynamic this10 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 710)			 ::openfl::utils::_AGALMiniAssembler::OpCode v9 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("sqt",16,a6,57,00),2,9,0);
HXDLIN( 710)			( ( ::haxe::ds::StringMap)(this10) )->set(HX_("sqt",16,a6,57,00),v9);
            		}
HXLINE( 711)		{
HXLINE( 711)			::Dynamic this11 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 711)			 ::openfl::utils::_AGALMiniAssembler::OpCode v10 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("rsq",90,e5,56,00),2,10,0);
HXDLIN( 711)			( ( ::haxe::ds::StringMap)(this11) )->set(HX_("rsq",90,e5,56,00),v10);
            		}
HXLINE( 712)		{
HXLINE( 712)			::Dynamic this12 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 712)			 ::openfl::utils::_AGALMiniAssembler::OpCode v11 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("pow",98,5d,55,00),3,11,0);
HXDLIN( 712)			( ( ::haxe::ds::StringMap)(this12) )->set(HX_("pow",98,5d,55,00),v11);
            		}
HXLINE( 713)		{
HXLINE( 713)			::Dynamic this13 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 713)			 ::openfl::utils::_AGALMiniAssembler::OpCode v12 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("log",84,54,52,00),2,12,0);
HXDLIN( 713)			( ( ::haxe::ds::StringMap)(this13) )->set(HX_("log",84,54,52,00),v12);
            		}
HXLINE( 714)		{
HXLINE( 714)			::Dynamic this14 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 714)			 ::openfl::utils::_AGALMiniAssembler::OpCode v13 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("exp",9d,0c,4d,00),2,13,0);
HXDLIN( 714)			( ( ::haxe::ds::StringMap)(this14) )->set(HX_("exp",9d,0c,4d,00),v13);
            		}
HXLINE( 715)		{
HXLINE( 715)			::Dynamic this15 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 715)			 ::openfl::utils::_AGALMiniAssembler::OpCode v14 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("nrm",a9,db,53,00),2,14,0);
HXDLIN( 715)			( ( ::haxe::ds::StringMap)(this15) )->set(HX_("nrm",a9,db,53,00),v14);
            		}
HXLINE( 716)		{
HXLINE( 716)			::Dynamic this16 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 716)			 ::openfl::utils::_AGALMiniAssembler::OpCode v15 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("sin",18,9f,57,00),2,15,0);
HXDLIN( 716)			( ( ::haxe::ds::StringMap)(this16) )->set(HX_("sin",18,9f,57,00),v15);
            		}
HXLINE( 717)		{
HXLINE( 717)			::Dynamic this17 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 717)			 ::openfl::utils::_AGALMiniAssembler::OpCode v16 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("cos",47,80,4b,00),2,16,0);
HXDLIN( 717)			( ( ::haxe::ds::StringMap)(this17) )->set(HX_("cos",47,80,4b,00),v16);
            		}
HXLINE( 718)		{
HXLINE( 718)			::Dynamic this18 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 718)			 ::openfl::utils::_AGALMiniAssembler::OpCode v17 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("crs",e4,82,4b,00),3,17,0);
HXDLIN( 718)			( ( ::haxe::ds::StringMap)(this18) )->set(HX_("crs",e4,82,4b,00),v17);
            		}
HXLINE( 719)		{
HXLINE( 719)			::Dynamic this19 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 719)			 ::openfl::utils::_AGALMiniAssembler::OpCode v18 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("dp3",27,43,4c,00),3,18,0);
HXDLIN( 719)			( ( ::haxe::ds::StringMap)(this19) )->set(HX_("dp3",27,43,4c,00),v18);
            		}
HXLINE( 720)		{
HXLINE( 720)			::Dynamic this20 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 720)			 ::openfl::utils::_AGALMiniAssembler::OpCode v19 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("dp4",28,43,4c,00),3,19,0);
HXDLIN( 720)			( ( ::haxe::ds::StringMap)(this20) )->set(HX_("dp4",28,43,4c,00),v19);
            		}
HXLINE( 721)		{
HXLINE( 721)			::Dynamic this21 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 721)			 ::openfl::utils::_AGALMiniAssembler::OpCode v20 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("abs",72,f0,49,00),2,20,0);
HXDLIN( 721)			( ( ::haxe::ds::StringMap)(this21) )->set(HX_("abs",72,f0,49,00),v20);
            		}
HXLINE( 722)		{
HXLINE( 722)			::Dynamic this22 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 722)			 ::openfl::utils::_AGALMiniAssembler::OpCode v21 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("neg",50,d0,53,00),2,21,0);
HXDLIN( 722)			( ( ::haxe::ds::StringMap)(this22) )->set(HX_("neg",50,d0,53,00),v21);
            		}
HXLINE( 723)		{
HXLINE( 723)			::Dynamic this23 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 723)			 ::openfl::utils::_AGALMiniAssembler::OpCode v22 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("sat",26,98,57,00),2,22,0);
HXDLIN( 723)			( ( ::haxe::ds::StringMap)(this23) )->set(HX_("sat",26,98,57,00),v22);
            		}
HXLINE( 724)		{
HXLINE( 724)			::Dynamic this24 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 724)			 ::openfl::utils::_AGALMiniAssembler::OpCode v23 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("m33",4d,e2,52,00),3,23,16);
HXDLIN( 724)			( ( ::haxe::ds::StringMap)(this24) )->set(HX_("m33",4d,e2,52,00),v23);
            		}
HXLINE( 725)		{
HXLINE( 725)			::Dynamic this25 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 725)			 ::openfl::utils::_AGALMiniAssembler::OpCode v24 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("m44",2d,e3,52,00),3,24,16);
HXDLIN( 725)			( ( ::haxe::ds::StringMap)(this25) )->set(HX_("m44",2d,e3,52,00),v24);
            		}
HXLINE( 726)		{
HXLINE( 726)			::Dynamic this26 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 726)			 ::openfl::utils::_AGALMiniAssembler::OpCode v25 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("m34",4e,e2,52,00),3,25,16);
HXDLIN( 726)			( ( ::haxe::ds::StringMap)(this26) )->set(HX_("m34",4e,e2,52,00),v25);
            		}
HXLINE( 727)		{
HXLINE( 727)			::Dynamic this27 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 727)			 ::openfl::utils::_AGALMiniAssembler::OpCode v26 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("ddx",f8,38,4c,00),2,26,288);
HXDLIN( 727)			( ( ::haxe::ds::StringMap)(this27) )->set(HX_("ddx",f8,38,4c,00),v26);
            		}
HXLINE( 728)		{
HXLINE( 728)			::Dynamic this28 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 728)			 ::openfl::utils::_AGALMiniAssembler::OpCode v27 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("ddy",f9,38,4c,00),2,27,288);
HXDLIN( 728)			( ( ::haxe::ds::StringMap)(this28) )->set(HX_("ddy",f9,38,4c,00),v27);
            		}
HXLINE( 729)		{
HXLINE( 729)			::Dynamic this29 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 729)			 ::openfl::utils::_AGALMiniAssembler::OpCode v28 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("ife",e8,05,50,00),2,28,897);
HXDLIN( 729)			( ( ::haxe::ds::StringMap)(this29) )->set(HX_("ife",e8,05,50,00),v28);
            		}
HXLINE( 730)		{
HXLINE( 730)			::Dynamic this30 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 730)			 ::openfl::utils::_AGALMiniAssembler::OpCode v29 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("ine",e0,0c,50,00),2,29,897);
HXDLIN( 730)			( ( ::haxe::ds::StringMap)(this30) )->set(HX_("ine",e0,0c,50,00),v29);
            		}
HXLINE( 731)		{
HXLINE( 731)			::Dynamic this31 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 731)			 ::openfl::utils::_AGALMiniAssembler::OpCode v30 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("ifg",ea,05,50,00),2,30,897);
HXDLIN( 731)			( ( ::haxe::ds::StringMap)(this31) )->set(HX_("ifg",ea,05,50,00),v30);
            		}
HXLINE( 732)		{
HXLINE( 732)			::Dynamic this32 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 732)			 ::openfl::utils::_AGALMiniAssembler::OpCode v31 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("ifl",ef,05,50,00),2,31,897);
HXDLIN( 732)			( ( ::haxe::ds::StringMap)(this32) )->set(HX_("ifl",ef,05,50,00),v31);
            		}
HXLINE( 733)		{
HXLINE( 733)			::Dynamic this33 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 733)			 ::openfl::utils::_AGALMiniAssembler::OpCode v32 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("els",2c,02,4d,00),0,32,1921);
HXDLIN( 733)			( ( ::haxe::ds::StringMap)(this33) )->set(HX_("els",2c,02,4d,00),v32);
            		}
HXLINE( 734)		{
HXLINE( 734)			::Dynamic this34 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 734)			 ::openfl::utils::_AGALMiniAssembler::OpCode v33 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("eif",82,ff,4c,00),0,33,1409);
HXDLIN( 734)			( ( ::haxe::ds::StringMap)(this34) )->set(HX_("eif",82,ff,4c,00),v33);
            		}
HXLINE( 737)		{
HXLINE( 737)			::Dynamic this35 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 737)			 ::openfl::utils::_AGALMiniAssembler::OpCode v34 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("kil",0e,8d,51,00),1,39,160);
HXDLIN( 737)			( ( ::haxe::ds::StringMap)(this35) )->set(HX_("kil",0e,8d,51,00),v34);
            		}
HXLINE( 738)		{
HXLINE( 738)			::Dynamic this36 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 738)			 ::openfl::utils::_AGALMiniAssembler::OpCode v35 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("tex",e7,5d,58,00),3,40,40);
HXDLIN( 738)			( ( ::haxe::ds::StringMap)(this36) )->set(HX_("tex",e7,5d,58,00),v35);
            		}
HXLINE( 739)		{
HXLINE( 739)			::Dynamic this37 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 739)			 ::openfl::utils::_AGALMiniAssembler::OpCode v36 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("sge",51,9d,57,00),3,41,0);
HXDLIN( 739)			( ( ::haxe::ds::StringMap)(this37) )->set(HX_("sge",51,9d,57,00),v36);
            		}
HXLINE( 740)		{
HXLINE( 740)			::Dynamic this38 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 740)			 ::openfl::utils::_AGALMiniAssembler::OpCode v37 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("slt",bb,a1,57,00),3,42,0);
HXDLIN( 740)			( ( ::haxe::ds::StringMap)(this38) )->set(HX_("slt",bb,a1,57,00),v37);
            		}
HXLINE( 741)		{
HXLINE( 741)			::Dynamic this39 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 741)			 ::openfl::utils::_AGALMiniAssembler::OpCode v38 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("sgn",5a,9d,57,00),2,43,0);
HXDLIN( 741)			( ( ::haxe::ds::StringMap)(this39) )->set(HX_("sgn",5a,9d,57,00),v38);
            		}
HXLINE( 742)		{
HXLINE( 742)			::Dynamic this40 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 742)			 ::openfl::utils::_AGALMiniAssembler::OpCode v39 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("seq",9f,9b,57,00),3,44,0);
HXDLIN( 742)			( ( ::haxe::ds::StringMap)(this40) )->set(HX_("seq",9f,9b,57,00),v39);
            		}
HXLINE( 743)		{
HXLINE( 743)			::Dynamic this41 = ::openfl::utils::AGALMiniAssembler_obj::OPMAP;
HXDLIN( 743)			 ::openfl::utils::_AGALMiniAssembler::OpCode v40 =  ::openfl::utils::_AGALMiniAssembler::OpCode_obj::__alloc( HX_CTX ,HX_("sne",6a,a3,57,00),3,45,0);
HXDLIN( 743)			( ( ::haxe::ds::StringMap)(this41) )->set(HX_("sne",6a,a3,57,00),v40);
            		}
HXLINE( 745)		{
HXLINE( 745)			::Dynamic this42 = ::openfl::utils::AGALMiniAssembler_obj::SAMPLEMAP;
HXDLIN( 745)			 ::openfl::utils::_AGALMiniAssembler::Sampler v41 =  ::openfl::utils::_AGALMiniAssembler::Sampler_obj::__alloc( HX_CTX ,HX_("rgba",b4,d0,a8,4b),8,0);
HXDLIN( 745)			( ( ::haxe::ds::StringMap)(this42) )->set(HX_("rgba",b4,d0,a8,4b),v41);
            		}
HXLINE( 746)		{
HXLINE( 746)			::Dynamic this43 = ::openfl::utils::AGALMiniAssembler_obj::SAMPLEMAP;
HXDLIN( 746)			 ::openfl::utils::_AGALMiniAssembler::Sampler v42 =  ::openfl::utils::_AGALMiniAssembler::Sampler_obj::__alloc( HX_CTX ,HX_("compressed",81,4c,da,67),8,1);
HXDLIN( 746)			( ( ::haxe::ds::StringMap)(this43) )->set(HX_("compressed",81,4c,da,67),v42);
            		}
HXLINE( 747)		{
HXLINE( 747)			::Dynamic this44 = ::openfl::utils::AGALMiniAssembler_obj::SAMPLEMAP;
HXDLIN( 747)			 ::openfl::utils::_AGALMiniAssembler::Sampler v43 =  ::openfl::utils::_AGALMiniAssembler::Sampler_obj::__alloc( HX_CTX ,HX_("compressedalpha",3d,67,f2,b6),8,2);
HXDLIN( 747)			( ( ::haxe::ds::StringMap)(this44) )->set(HX_("compressedalpha",3d,67,f2,b6),v43);
            		}
HXLINE( 748)		{
HXLINE( 748)			::Dynamic this45 = ::openfl::utils::AGALMiniAssembler_obj::SAMPLEMAP;
HXDLIN( 748)			 ::openfl::utils::_AGALMiniAssembler::Sampler v44 =  ::openfl::utils::_AGALMiniAssembler::Sampler_obj::__alloc( HX_CTX ,HX_("dxt1",d1,c9,74,42),8,1);
HXDLIN( 748)			( ( ::haxe::ds::StringMap)(this45) )->set(HX_("dxt1",d1,c9,74,42),v44);
            		}
HXLINE( 749)		{
HXLINE( 749)			::Dynamic this46 = ::openfl::utils::AGALMiniAssembler_obj::SAMPLEMAP;
HXDLIN( 749)			 ::openfl::utils::_AGALMiniAssembler::Sampler v45 =  ::openfl::utils::_AGALMiniAssembler::Sampler_obj::__alloc( HX_CTX ,HX_("dxt5",d5,c9,74,42),8,2);
HXDLIN( 749)			( ( ::haxe::ds::StringMap)(this46) )->set(HX_("dxt5",d5,c9,74,42),v45);
            		}
HXLINE( 750)		{
HXLINE( 750)			::Dynamic this47 = ::openfl::utils::AGALMiniAssembler_obj::SAMPLEMAP;
HXDLIN( 750)			 ::openfl::utils::_AGALMiniAssembler::Sampler v46 =  ::openfl::utils::_AGALMiniAssembler::Sampler_obj::__alloc( HX_CTX ,HX_("video",7b,14,fc,36),8,3);
HXDLIN( 750)			( ( ::haxe::ds::StringMap)(this47) )->set(HX_("video",7b,14,fc,36),v46);
            		}
HXLINE( 751)		{
HXLINE( 751)			::Dynamic this48 = ::openfl::utils::AGALMiniAssembler_obj::SAMPLEMAP;
HXDLIN( 751)			 ::openfl::utils::_AGALMiniAssembler::Sampler v47 =  ::openfl::utils::_AGALMiniAssembler::Sampler_obj::__alloc( HX_CTX ,HX_("2d",f2,2b,00,00),12,0);
HXDLIN( 751)			( ( ::haxe::ds::StringMap)(this48) )->set(HX_("2d",f2,2b,00,00),v47);
            		}
HXLINE( 752)		{
HXLINE( 752)			::Dynamic this49 = ::openfl::utils::AGALMiniAssembler_obj::SAMPLEMAP;
HXDLIN( 752)			 ::openfl::utils::_AGALMiniAssembler::Sampler v48 =  ::openfl::utils::_AGALMiniAssembler::Sampler_obj::__alloc( HX_CTX ,HX_("3d",d1,2c,00,00),12,2);
HXDLIN( 752)			( ( ::haxe::ds::StringMap)(this49) )->set(HX_("3d",d1,2c,00,00),v48);
            		}
HXLINE( 753)		{
HXLINE( 753)			::Dynamic this50 = ::openfl::utils::AGALMiniAssembler_obj::SAMPLEMAP;
HXDLIN( 753)			 ::openfl::utils::_AGALMiniAssembler::Sampler v49 =  ::openfl::utils::_AGALMiniAssembler::Sampler_obj::__alloc( HX_CTX ,HX_("cube",f5,3c,c9,41),12,1);
HXDLIN( 753)			( ( ::haxe::ds::StringMap)(this50) )->set(HX_("cube",f5,3c,c9,41),v49);
            		}
HXLINE( 754)		{
HXLINE( 754)			::Dynamic this51 = ::openfl::utils::AGALMiniAssembler_obj::SAMPLEMAP;
HXDLIN( 754)			 ::openfl::utils::_AGALMiniAssembler::Sampler v50 =  ::openfl::utils::_AGALMiniAssembler::Sampler_obj::__alloc( HX_CTX ,HX_("mipnearest",4a,21,95,d0),24,1);
HXDLIN( 754)			( ( ::haxe::ds::StringMap)(this51) )->set(HX_("mipnearest",4a,21,95,d0),v50);
            		}
HXLINE( 755)		{
HXLINE( 755)			::Dynamic this52 = ::openfl::utils::AGALMiniAssembler_obj::SAMPLEMAP;
HXDLIN( 755)			 ::openfl::utils::_AGALMiniAssembler::Sampler v51 =  ::openfl::utils::_AGALMiniAssembler::Sampler_obj::__alloc( HX_CTX ,HX_("miplinear",79,ca,7e,64),24,2);
HXDLIN( 755)			( ( ::haxe::ds::StringMap)(this52) )->set(HX_("miplinear",79,ca,7e,64),v51);
            		}
HXLINE( 756)		{
HXLINE( 756)			::Dynamic this53 = ::openfl::utils::AGALMiniAssembler_obj::SAMPLEMAP;
HXDLIN( 756)			 ::openfl::utils::_AGALMiniAssembler::Sampler v52 =  ::openfl::utils::_AGALMiniAssembler::Sampler_obj::__alloc( HX_CTX ,HX_("mipnone",4c,7e,07,76),24,0);
HXDLIN( 756)			( ( ::haxe::ds::StringMap)(this53) )->set(HX_("mipnone",4c,7e,07,76),v52);
            		}
HXLINE( 757)		{
HXLINE( 757)			::Dynamic this54 = ::openfl::utils::AGALMiniAssembler_obj::SAMPLEMAP;
HXDLIN( 757)			 ::openfl::utils::_AGALMiniAssembler::Sampler v53 =  ::openfl::utils::_AGALMiniAssembler::Sampler_obj::__alloc( HX_CTX ,HX_("nomip",f3,8f,c5,9f),24,0);
HXDLIN( 757)			( ( ::haxe::ds::StringMap)(this54) )->set(HX_("nomip",f3,8f,c5,9f),v53);
            		}
HXLINE( 758)		{
HXLINE( 758)			::Dynamic this55 = ::openfl::utils::AGALMiniAssembler_obj::SAMPLEMAP;
HXDLIN( 758)			 ::openfl::utils::_AGALMiniAssembler::Sampler v54 =  ::openfl::utils::_AGALMiniAssembler::Sampler_obj::__alloc( HX_CTX ,HX_("nearest",5e,18,ca,65),28,0);
HXDLIN( 758)			( ( ::haxe::ds::StringMap)(this55) )->set(HX_("nearest",5e,18,ca,65),v54);
            		}
HXLINE( 759)		{
HXLINE( 759)			::Dynamic this56 = ::openfl::utils::AGALMiniAssembler_obj::SAMPLEMAP;
HXDLIN( 759)			 ::openfl::utils::_AGALMiniAssembler::Sampler v55 =  ::openfl::utils::_AGALMiniAssembler::Sampler_obj::__alloc( HX_CTX ,HX_("linear",e5,51,a0,ec),28,1);
HXDLIN( 759)			( ( ::haxe::ds::StringMap)(this56) )->set(HX_("linear",e5,51,a0,ec),v55);
            		}
HXLINE( 760)		{
HXLINE( 760)			::Dynamic this57 = ::openfl::utils::AGALMiniAssembler_obj::SAMPLEMAP;
HXDLIN( 760)			 ::openfl::utils::_AGALMiniAssembler::Sampler v56 =  ::openfl::utils::_AGALMiniAssembler::Sampler_obj::__alloc( HX_CTX ,HX_("anisotropic2x",77,56,26,f5),28,2);
HXDLIN( 760)			( ( ::haxe::ds::StringMap)(this57) )->set(HX_("anisotropic2x",77,56,26,f5),v56);
            		}
HXLINE( 761)		{
HXLINE( 761)			::Dynamic this58 = ::openfl::utils::AGALMiniAssembler_obj::SAMPLEMAP;
HXDLIN( 761)			 ::openfl::utils::_AGALMiniAssembler::Sampler v57 =  ::openfl::utils::_AGALMiniAssembler::Sampler_obj::__alloc( HX_CTX ,HX_("anisotropic4x",35,58,26,f5),28,3);
HXDLIN( 761)			( ( ::haxe::ds::StringMap)(this58) )->set(HX_("anisotropic4x",35,58,26,f5),v57);
            		}
HXLINE( 762)		{
HXLINE( 762)			::Dynamic this59 = ::openfl::utils::AGALMiniAssembler_obj::SAMPLEMAP;
HXDLIN( 762)			 ::openfl::utils::_AGALMiniAssembler::Sampler v58 =  ::openfl::utils::_AGALMiniAssembler::Sampler_obj::__alloc( HX_CTX ,HX_("anisotropic8x",b1,5b,26,f5),28,4);
HXDLIN( 762)			( ( ::haxe::ds::StringMap)(this59) )->set(HX_("anisotropic8x",b1,5b,26,f5),v58);
            		}
HXLINE( 763)		{
HXLINE( 763)			::Dynamic this60 = ::openfl::utils::AGALMiniAssembler_obj::SAMPLEMAP;
HXDLIN( 763)			 ::openfl::utils::_AGALMiniAssembler::Sampler v59 =  ::openfl::utils::_AGALMiniAssembler::Sampler_obj::__alloc( HX_CTX ,HX_("anisotropic16x",62,56,64,8c),28,5);
HXDLIN( 763)			( ( ::haxe::ds::StringMap)(this60) )->set(HX_("anisotropic16x",62,56,64,8c),v59);
            		}
HXLINE( 764)		{
HXLINE( 764)			::Dynamic this61 = ::openfl::utils::AGALMiniAssembler_obj::SAMPLEMAP;
HXDLIN( 764)			 ::openfl::utils::_AGALMiniAssembler::Sampler v60 =  ::openfl::utils::_AGALMiniAssembler::Sampler_obj::__alloc( HX_CTX ,HX_("centroid",40,e0,e5,97),16,1);
HXDLIN( 764)			( ( ::haxe::ds::StringMap)(this61) )->set(HX_("centroid",40,e0,e5,97),v60);
            		}
HXLINE( 765)		{
HXLINE( 765)			::Dynamic this62 = ::openfl::utils::AGALMiniAssembler_obj::SAMPLEMAP;
HXDLIN( 765)			 ::openfl::utils::_AGALMiniAssembler::Sampler v61 =  ::openfl::utils::_AGALMiniAssembler::Sampler_obj::__alloc( HX_CTX ,HX_("single",88,66,21,b9),16,2);
HXDLIN( 765)			( ( ::haxe::ds::StringMap)(this62) )->set(HX_("single",88,66,21,b9),v61);
            		}
HXLINE( 766)		{
HXLINE( 766)			::Dynamic this63 = ::openfl::utils::AGALMiniAssembler_obj::SAMPLEMAP;
HXDLIN( 766)			 ::openfl::utils::_AGALMiniAssembler::Sampler v62 =  ::openfl::utils::_AGALMiniAssembler::Sampler_obj::__alloc( HX_CTX ,HX_("ignoresampler",36,32,06,d4),16,4);
HXDLIN( 766)			( ( ::haxe::ds::StringMap)(this63) )->set(HX_("ignoresampler",36,32,06,d4),v62);
            		}
HXLINE( 767)		{
HXLINE( 767)			::Dynamic this64 = ::openfl::utils::AGALMiniAssembler_obj::SAMPLEMAP;
HXDLIN( 767)			 ::openfl::utils::_AGALMiniAssembler::Sampler v63 =  ::openfl::utils::_AGALMiniAssembler::Sampler_obj::__alloc( HX_CTX ,HX_("repeat",5b,97,7c,06),20,1);
HXDLIN( 767)			( ( ::haxe::ds::StringMap)(this64) )->set(HX_("repeat",5b,97,7c,06),v63);
            		}
HXLINE( 768)		{
HXLINE( 768)			::Dynamic this65 = ::openfl::utils::AGALMiniAssembler_obj::SAMPLEMAP;
HXDLIN( 768)			 ::openfl::utils::_AGALMiniAssembler::Sampler v64 =  ::openfl::utils::_AGALMiniAssembler::Sampler_obj::__alloc( HX_CTX ,HX_("wrap",ca,39,ff,4e),20,1);
HXDLIN( 768)			( ( ::haxe::ds::StringMap)(this65) )->set(HX_("wrap",ca,39,ff,4e),v64);
            		}
HXLINE( 769)		{
HXLINE( 769)			::Dynamic this66 = ::openfl::utils::AGALMiniAssembler_obj::SAMPLEMAP;
HXDLIN( 769)			 ::openfl::utils::_AGALMiniAssembler::Sampler v65 =  ::openfl::utils::_AGALMiniAssembler::Sampler_obj::__alloc( HX_CTX ,HX_("clamp",fb,72,58,48),20,0);
HXDLIN( 769)			( ( ::haxe::ds::StringMap)(this66) )->set(HX_("clamp",fb,72,58,48),v65);
            		}
HXLINE( 770)		{
HXLINE( 770)			::Dynamic this67 = ::openfl::utils::AGALMiniAssembler_obj::SAMPLEMAP;
HXDLIN( 770)			 ::openfl::utils::_AGALMiniAssembler::Sampler v66 =  ::openfl::utils::_AGALMiniAssembler::Sampler_obj::__alloc( HX_CTX ,HX_("clamp_u_repeat_v",a0,8d,a7,28),20,2);
HXDLIN( 770)			( ( ::haxe::ds::StringMap)(this67) )->set(HX_("clamp_u_repeat_v",a0,8d,a7,28),v66);
            		}
HXLINE( 771)		{
HXLINE( 771)			::Dynamic this68 = ::openfl::utils::AGALMiniAssembler_obj::SAMPLEMAP;
HXDLIN( 771)			 ::openfl::utils::_AGALMiniAssembler::Sampler v67 =  ::openfl::utils::_AGALMiniAssembler::Sampler_obj::__alloc( HX_CTX ,HX_("repeat_u_clamp_v",c4,04,17,dd),20,3);
HXDLIN( 771)			( ( ::haxe::ds::StringMap)(this68) )->set(HX_("repeat_u_clamp_v",c4,04,17,dd),v67);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AGALMiniAssembler_obj,init,(void))


::hx::ObjectPtr< AGALMiniAssembler_obj > AGALMiniAssembler_obj::__new(::hx::Null< bool >  __o_debugging) {
	::hx::ObjectPtr< AGALMiniAssembler_obj > __this = new AGALMiniAssembler_obj();
	__this->__construct(__o_debugging);
	return __this;
}

::hx::ObjectPtr< AGALMiniAssembler_obj > AGALMiniAssembler_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_debugging) {
	AGALMiniAssembler_obj *__this = (AGALMiniAssembler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AGALMiniAssembler_obj), true, "openfl.utils.AGALMiniAssembler"));
	*(void **)__this = AGALMiniAssembler_obj::_hx_vtable;
	__this->__construct(__o_debugging);
	return __this;
}

AGALMiniAssembler_obj::AGALMiniAssembler_obj()
{
}

void AGALMiniAssembler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AGALMiniAssembler);
	HX_MARK_MEMBER_NAME(agalcode,"agalcode");
	HX_MARK_MEMBER_NAME(error,"error");
	HX_MARK_MEMBER_NAME(verbose,"verbose");
	HX_MARK_MEMBER_NAME(debugEnabled,"debugEnabled");
	HX_MARK_END_CLASS();
}

void AGALMiniAssembler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(agalcode,"agalcode");
	HX_VISIT_MEMBER_NAME(error,"error");
	HX_VISIT_MEMBER_NAME(verbose,"verbose");
	HX_VISIT_MEMBER_NAME(debugEnabled,"debugEnabled");
}

::hx::Val AGALMiniAssembler_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { return ::hx::Val( error ); }
		if (HX_FIELD_EQ(inName,"match") ) { return ::hx::Val( match_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"verbose") ) { return ::hx::Val( verbose ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"agalcode") ) { return ::hx::Val( agalcode ); }
		if (HX_FIELD_EQ(inName,"assemble") ) { return ::hx::Val( assemble_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"assemble2") ) { return ::hx::Val( assemble2_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initregmap") ) { return ::hx::Val( initregmap_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"debugEnabled") ) { return ::hx::Val( debugEnabled ); }
	}
	return super::__Field(inName,inCallProp);
}

bool AGALMiniAssembler_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"OPMAP") ) { outValue = ( OPMAP ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"REGMAP") ) { outValue = ( REGMAP ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"SAMPLEMAP") ) { outValue = ( SAMPLEMAP ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { outValue = ( initialized ); return true; }
	}
	return false;
}

::hx::Val AGALMiniAssembler_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { error=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"verbose") ) { verbose=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"agalcode") ) { agalcode=inValue.Cast<  ::openfl::utils::ByteArrayData >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"debugEnabled") ) { debugEnabled=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AGALMiniAssembler_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"OPMAP") ) { OPMAP=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"REGMAP") ) { REGMAP=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"SAMPLEMAP") ) { SAMPLEMAP=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void AGALMiniAssembler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("agalcode",fe,5c,e9,a0));
	outFields->push(HX_("error",c8,cb,29,73));
	outFields->push(HX_("verbose",82,d7,b9,71));
	outFields->push(HX_("debugEnabled",6e,1a,2c,da));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AGALMiniAssembler_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::utils::ByteArrayData */ ,(int)offsetof(AGALMiniAssembler_obj,agalcode),HX_("agalcode",fe,5c,e9,a0)},
	{::hx::fsString,(int)offsetof(AGALMiniAssembler_obj,error),HX_("error",c8,cb,29,73)},
	{::hx::fsBool,(int)offsetof(AGALMiniAssembler_obj,verbose),HX_("verbose",82,d7,b9,71)},
	{::hx::fsBool,(int)offsetof(AGALMiniAssembler_obj,debugEnabled),HX_("debugEnabled",6e,1a,2c,da)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo AGALMiniAssembler_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &AGALMiniAssembler_obj::OPMAP,HX_("OPMAP",fb,8b,c3,b1)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &AGALMiniAssembler_obj::REGMAP,HX_("REGMAP",c8,69,12,b3)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &AGALMiniAssembler_obj::SAMPLEMAP,HX_("SAMPLEMAP",92,10,e0,58)},
	{::hx::fsInt,(void *) &AGALMiniAssembler_obj::MAX_NESTING,HX_("MAX_NESTING",2f,f3,ac,96)},
	{::hx::fsInt,(void *) &AGALMiniAssembler_obj::MAX_OPCODES,HX_("MAX_OPCODES",ca,35,74,ec)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::FRAGMENT,HX_("FRAGMENT",d0,ef,6a,07)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::VERTEX,HX_("VERTEX",64,87,ca,53)},
	{::hx::fsInt,(void *) &AGALMiniAssembler_obj::SAMPLER_TYPE_SHIFT,HX_("SAMPLER_TYPE_SHIFT",14,7b,00,a2)},
	{::hx::fsInt,(void *) &AGALMiniAssembler_obj::SAMPLER_DIM_SHIFT,HX_("SAMPLER_DIM_SHIFT",74,d9,2e,8e)},
	{::hx::fsInt,(void *) &AGALMiniAssembler_obj::SAMPLER_SPECIAL_SHIFT,HX_("SAMPLER_SPECIAL_SHIFT",a5,21,3b,19)},
	{::hx::fsInt,(void *) &AGALMiniAssembler_obj::SAMPLER_REPEAT_SHIFT,HX_("SAMPLER_REPEAT_SHIFT",35,ae,b2,55)},
	{::hx::fsInt,(void *) &AGALMiniAssembler_obj::SAMPLER_MIPMAP_SHIFT,HX_("SAMPLER_MIPMAP_SHIFT",22,a4,a4,01)},
	{::hx::fsInt,(void *) &AGALMiniAssembler_obj::SAMPLER_FILTER_SHIFT,HX_("SAMPLER_FILTER_SHIFT",52,5a,cd,30)},
	{::hx::fsInt,(void *) &AGALMiniAssembler_obj::REG_WRITE,HX_("REG_WRITE",34,40,8f,ce)},
	{::hx::fsInt,(void *) &AGALMiniAssembler_obj::REG_READ,HX_("REG_READ",81,5d,41,d4)},
	{::hx::fsInt,(void *) &AGALMiniAssembler_obj::REG_FRAG,HX_("REG_FRAG",5d,ab,5c,cc)},
	{::hx::fsInt,(void *) &AGALMiniAssembler_obj::REG_VERT,HX_("REG_VERT",dc,46,e6,d6)},
	{::hx::fsInt,(void *) &AGALMiniAssembler_obj::OP_SCALAR,HX_("OP_SCALAR",ca,b5,62,55)},
	{::hx::fsInt,(void *) &AGALMiniAssembler_obj::OP_SPECIAL_TEX,HX_("OP_SPECIAL_TEX",03,ae,a5,d2)},
	{::hx::fsInt,(void *) &AGALMiniAssembler_obj::OP_SPECIAL_MATRIX,HX_("OP_SPECIAL_MATRIX",85,7b,16,8b)},
	{::hx::fsInt,(void *) &AGALMiniAssembler_obj::OP_FRAG_ONLY,HX_("OP_FRAG_ONLY",fb,46,30,c5)},
	{::hx::fsInt,(void *) &AGALMiniAssembler_obj::OP_VERT_ONLY,HX_("OP_VERT_ONLY",1c,9f,47,02)},
	{::hx::fsInt,(void *) &AGALMiniAssembler_obj::OP_NO_DEST,HX_("OP_NO_DEST",02,1a,18,9e)},
	{::hx::fsInt,(void *) &AGALMiniAssembler_obj::OP_VERSION2,HX_("OP_VERSION2",58,64,bc,53)},
	{::hx::fsInt,(void *) &AGALMiniAssembler_obj::OP_INCNEST,HX_("OP_INCNEST",f8,4f,35,4f)},
	{::hx::fsInt,(void *) &AGALMiniAssembler_obj::OP_DECNEST,HX_("OP_DECNEST",dc,be,13,e6)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::MOV,HX_("MOV",b4,b2,3a,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::ADD,HX_("ADD",01,8e,31,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::SUB,HX_("SUB",60,45,3f,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::MUL,HX_("MUL",e4,b7,3a,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::DIV,HX_("DIV",31,d9,33,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::RCP,HX_("RCP",7f,73,3e,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::MIN,HX_("MIN",72,ad,3a,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::MAX,HX_("MAX",84,a6,3a,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::FRC,HX_("FRC",77,65,35,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::SQT,HX_("SQT",f6,41,3f,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::RSQ,HX_("RSQ",70,81,3e,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::POW,HX_("POW",78,f9,3c,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::LOG,HX_("LOG",64,f0,39,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::EXP,HX_("EXP",7d,a8,34,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::NRM,HX_("NRM",89,77,3b,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::SIN,HX_("SIN",f8,3a,3f,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::COS,HX_("COS",27,1c,33,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::CRS,HX_("CRS",c4,1e,33,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::DP3,HX_("DP3",27,df,33,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::DP4,HX_("DP4",28,df,33,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::ABS,HX_("ABS",52,8c,31,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::NEG,HX_("NEG",30,6c,3b,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::SAT,HX_("SAT",06,34,3f,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::M33,HX_("M33",2d,9a,3a,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::M44,HX_("M44",0d,9b,3a,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::M34,HX_("M34",2e,9a,3a,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::DDX,HX_("DDX",d8,d4,33,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::DDY,HX_("DDY",d9,d4,33,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::IFE,HX_("IFE",c8,a1,37,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::INE,HX_("INE",c0,a8,37,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::IFG,HX_("IFG",ca,a1,37,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::IFL,HX_("IFL",cf,a1,37,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::IEG,HX_("IEG",eb,a0,37,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::IEL,HX_("IEL",f0,a0,37,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::ELS,HX_("ELS",0c,9e,34,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::EIF,HX_("EIF",62,9b,34,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::TED,HX_("TED",b3,f9,3f,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::KIL,HX_("KIL",ee,28,39,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::TEX,HX_("TEX",c7,f9,3f,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::SGE,HX_("SGE",31,39,3f,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::SLT,HX_("SLT",9b,3d,3f,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::SGN,HX_("SGN",3a,39,3f,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::SEQ,HX_("SEQ",7f,37,3f,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::SNE,HX_("SNE",4a,3f,3f,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::VA,HX_("VA",2b,4b,00,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::VC,HX_("VC",2d,4b,00,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::VT,HX_("VT",3e,4b,00,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::VO,HX_("VO",39,4b,00,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::VI,HX_("VI",33,4b,00,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::FC,HX_("FC",3d,3d,00,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::FT,HX_("FT",4e,3d,00,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::FS,HX_("FS",4d,3d,00,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::FO,HX_("FO",49,3d,00,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::FD,HX_("FD",3e,3d,00,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::IID,HX_("IID",64,a4,37,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::D2,HX_("D2",6e,3b,00,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::D3,HX_("D3",6f,3b,00,00)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::CUBE,HX_("CUBE",f5,04,8a,2c)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::MIPNEAREST,HX_("MIPNEAREST",4a,95,9e,c2)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::MIPLINEAR,HX_("MIPLINEAR",59,3a,d7,5f)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::MIPNONE,HX_("MIPNONE",2c,52,db,f5)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::NOMIP,HX_("NOMIP",d3,c7,b3,1d)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::NEAREST,HX_("NEAREST",3e,ec,9d,e5)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::LINEAR,HX_("LINEAR",e5,fd,22,9f)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::ANISOTROPIC2X,HX_("ANISOTROPIC2X",37,1a,65,db)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::ANISOTROPIC4X,HX_("ANISOTROPIC4X",f5,1b,65,db)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::ANISOTROPIC8X,HX_("ANISOTROPIC8X",71,1f,65,db)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::ANISOTROPIC16X,HX_("ANISOTROPIC16X",62,f6,10,1d)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::CENTROID,HX_("CENTROID",40,70,6b,f1)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::SINGLE,HX_("SINGLE",88,12,a4,6b)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::IGNORESAMPLER,HX_("IGNORESAMPLER",16,da,44,ba)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::REPEAT,HX_("REPEAT",5b,43,ff,b8)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::WRAP,HX_("WRAP",ca,01,c0,39)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::CLAMP,HX_("CLAMP",db,aa,46,c6)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::REPEAT_U_CLAMP_V,HX_("REPEAT_U_CLAMP_V",64,80,cf,17)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::CLAMP_U_REPEAT_V,HX_("CLAMP_U_REPEAT_V",c0,51,bd,ad)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::RGBA,HX_("RGBA",b4,98,69,36)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::COMPRESSED,HX_("COMPRESSED",81,c0,e3,59)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::COMPRESSEDALPHA,HX_("COMPRESSEDALPHA",1d,ab,12,a8)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::DXT1,HX_("DXT1",f1,91,35,2d)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::DXT5,HX_("DXT5",f5,91,35,2d)},
	{::hx::fsString,(void *) &AGALMiniAssembler_obj::VIDEO,HX_("VIDEO",5b,4c,ea,b4)},
	{::hx::fsBool,(void *) &AGALMiniAssembler_obj::initialized,HX_("initialized",14,f5,0f,37)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String AGALMiniAssembler_obj_sMemberFields[] = {
	HX_("agalcode",fe,5c,e9,a0),
	HX_("error",c8,cb,29,73),
	HX_("verbose",82,d7,b9,71),
	HX_("debugEnabled",6e,1a,2c,da),
	HX_("assemble2",e0,46,18,b3),
	HX_("assemble",12,a9,1b,c5),
	HX_("initregmap",d8,a4,40,d0),
	HX_("match",45,49,23,03),
	::String(null()) };

static void AGALMiniAssembler_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::OPMAP,"OPMAP");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::REGMAP,"REGMAP");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::SAMPLEMAP,"SAMPLEMAP");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::MAX_NESTING,"MAX_NESTING");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::MAX_OPCODES,"MAX_OPCODES");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::FRAGMENT,"FRAGMENT");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::VERTEX,"VERTEX");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::SAMPLER_TYPE_SHIFT,"SAMPLER_TYPE_SHIFT");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::SAMPLER_DIM_SHIFT,"SAMPLER_DIM_SHIFT");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::SAMPLER_SPECIAL_SHIFT,"SAMPLER_SPECIAL_SHIFT");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::SAMPLER_REPEAT_SHIFT,"SAMPLER_REPEAT_SHIFT");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::SAMPLER_MIPMAP_SHIFT,"SAMPLER_MIPMAP_SHIFT");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::SAMPLER_FILTER_SHIFT,"SAMPLER_FILTER_SHIFT");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::REG_WRITE,"REG_WRITE");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::REG_READ,"REG_READ");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::REG_FRAG,"REG_FRAG");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::REG_VERT,"REG_VERT");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::OP_SCALAR,"OP_SCALAR");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::OP_SPECIAL_TEX,"OP_SPECIAL_TEX");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::OP_SPECIAL_MATRIX,"OP_SPECIAL_MATRIX");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::OP_FRAG_ONLY,"OP_FRAG_ONLY");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::OP_VERT_ONLY,"OP_VERT_ONLY");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::OP_NO_DEST,"OP_NO_DEST");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::OP_VERSION2,"OP_VERSION2");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::OP_INCNEST,"OP_INCNEST");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::OP_DECNEST,"OP_DECNEST");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::MOV,"MOV");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::ADD,"ADD");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::SUB,"SUB");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::MUL,"MUL");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::DIV,"DIV");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::RCP,"RCP");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::MIN,"MIN");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::MAX,"MAX");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::FRC,"FRC");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::SQT,"SQT");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::RSQ,"RSQ");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::POW,"POW");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::LOG,"LOG");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::EXP,"EXP");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::NRM,"NRM");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::SIN,"SIN");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::COS,"COS");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::CRS,"CRS");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::DP3,"DP3");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::DP4,"DP4");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::ABS,"ABS");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::NEG,"NEG");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::SAT,"SAT");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::M33,"M33");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::M44,"M44");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::M34,"M34");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::DDX,"DDX");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::DDY,"DDY");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::IFE,"IFE");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::INE,"INE");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::IFG,"IFG");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::IFL,"IFL");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::IEG,"IEG");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::IEL,"IEL");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::ELS,"ELS");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::EIF,"EIF");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::TED,"TED");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::KIL,"KIL");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::TEX,"TEX");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::SGE,"SGE");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::SLT,"SLT");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::SGN,"SGN");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::SEQ,"SEQ");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::SNE,"SNE");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::VA,"VA");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::VC,"VC");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::VT,"VT");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::VO,"VO");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::VI,"VI");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::FC,"FC");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::FT,"FT");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::FS,"FS");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::FO,"FO");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::FD,"FD");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::IID,"IID");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::D2,"D2");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::D3,"D3");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::CUBE,"CUBE");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::MIPNEAREST,"MIPNEAREST");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::MIPLINEAR,"MIPLINEAR");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::MIPNONE,"MIPNONE");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::NOMIP,"NOMIP");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::NEAREST,"NEAREST");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::LINEAR,"LINEAR");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::ANISOTROPIC2X,"ANISOTROPIC2X");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::ANISOTROPIC4X,"ANISOTROPIC4X");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::ANISOTROPIC8X,"ANISOTROPIC8X");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::ANISOTROPIC16X,"ANISOTROPIC16X");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::CENTROID,"CENTROID");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::SINGLE,"SINGLE");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::IGNORESAMPLER,"IGNORESAMPLER");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::REPEAT,"REPEAT");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::WRAP,"WRAP");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::CLAMP,"CLAMP");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::REPEAT_U_CLAMP_V,"REPEAT_U_CLAMP_V");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::CLAMP_U_REPEAT_V,"CLAMP_U_REPEAT_V");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::RGBA,"RGBA");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::COMPRESSED,"COMPRESSED");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::COMPRESSEDALPHA,"COMPRESSEDALPHA");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::DXT1,"DXT1");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::DXT5,"DXT5");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::VIDEO,"VIDEO");
	HX_MARK_MEMBER_NAME(AGALMiniAssembler_obj::initialized,"initialized");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AGALMiniAssembler_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::OPMAP,"OPMAP");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::REGMAP,"REGMAP");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::SAMPLEMAP,"SAMPLEMAP");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::MAX_NESTING,"MAX_NESTING");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::MAX_OPCODES,"MAX_OPCODES");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::FRAGMENT,"FRAGMENT");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::VERTEX,"VERTEX");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::SAMPLER_TYPE_SHIFT,"SAMPLER_TYPE_SHIFT");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::SAMPLER_DIM_SHIFT,"SAMPLER_DIM_SHIFT");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::SAMPLER_SPECIAL_SHIFT,"SAMPLER_SPECIAL_SHIFT");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::SAMPLER_REPEAT_SHIFT,"SAMPLER_REPEAT_SHIFT");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::SAMPLER_MIPMAP_SHIFT,"SAMPLER_MIPMAP_SHIFT");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::SAMPLER_FILTER_SHIFT,"SAMPLER_FILTER_SHIFT");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::REG_WRITE,"REG_WRITE");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::REG_READ,"REG_READ");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::REG_FRAG,"REG_FRAG");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::REG_VERT,"REG_VERT");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::OP_SCALAR,"OP_SCALAR");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::OP_SPECIAL_TEX,"OP_SPECIAL_TEX");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::OP_SPECIAL_MATRIX,"OP_SPECIAL_MATRIX");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::OP_FRAG_ONLY,"OP_FRAG_ONLY");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::OP_VERT_ONLY,"OP_VERT_ONLY");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::OP_NO_DEST,"OP_NO_DEST");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::OP_VERSION2,"OP_VERSION2");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::OP_INCNEST,"OP_INCNEST");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::OP_DECNEST,"OP_DECNEST");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::MOV,"MOV");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::ADD,"ADD");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::SUB,"SUB");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::MUL,"MUL");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::DIV,"DIV");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::RCP,"RCP");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::MIN,"MIN");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::MAX,"MAX");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::FRC,"FRC");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::SQT,"SQT");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::RSQ,"RSQ");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::POW,"POW");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::LOG,"LOG");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::EXP,"EXP");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::NRM,"NRM");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::SIN,"SIN");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::COS,"COS");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::CRS,"CRS");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::DP3,"DP3");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::DP4,"DP4");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::ABS,"ABS");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::NEG,"NEG");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::SAT,"SAT");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::M33,"M33");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::M44,"M44");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::M34,"M34");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::DDX,"DDX");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::DDY,"DDY");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::IFE,"IFE");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::INE,"INE");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::IFG,"IFG");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::IFL,"IFL");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::IEG,"IEG");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::IEL,"IEL");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::ELS,"ELS");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::EIF,"EIF");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::TED,"TED");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::KIL,"KIL");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::TEX,"TEX");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::SGE,"SGE");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::SLT,"SLT");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::SGN,"SGN");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::SEQ,"SEQ");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::SNE,"SNE");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::VA,"VA");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::VC,"VC");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::VT,"VT");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::VO,"VO");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::VI,"VI");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::FC,"FC");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::FT,"FT");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::FS,"FS");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::FO,"FO");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::FD,"FD");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::IID,"IID");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::D2,"D2");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::D3,"D3");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::CUBE,"CUBE");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::MIPNEAREST,"MIPNEAREST");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::MIPLINEAR,"MIPLINEAR");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::MIPNONE,"MIPNONE");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::NOMIP,"NOMIP");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::NEAREST,"NEAREST");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::LINEAR,"LINEAR");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::ANISOTROPIC2X,"ANISOTROPIC2X");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::ANISOTROPIC4X,"ANISOTROPIC4X");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::ANISOTROPIC8X,"ANISOTROPIC8X");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::ANISOTROPIC16X,"ANISOTROPIC16X");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::CENTROID,"CENTROID");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::SINGLE,"SINGLE");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::IGNORESAMPLER,"IGNORESAMPLER");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::REPEAT,"REPEAT");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::WRAP,"WRAP");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::CLAMP,"CLAMP");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::REPEAT_U_CLAMP_V,"REPEAT_U_CLAMP_V");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::CLAMP_U_REPEAT_V,"CLAMP_U_REPEAT_V");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::RGBA,"RGBA");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::COMPRESSED,"COMPRESSED");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::COMPRESSEDALPHA,"COMPRESSEDALPHA");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::DXT1,"DXT1");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::DXT5,"DXT5");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::VIDEO,"VIDEO");
	HX_VISIT_MEMBER_NAME(AGALMiniAssembler_obj::initialized,"initialized");
};

#endif

::hx::Class AGALMiniAssembler_obj::__mClass;

static ::String AGALMiniAssembler_obj_sStaticFields[] = {
	HX_("OPMAP",fb,8b,c3,b1),
	HX_("REGMAP",c8,69,12,b3),
	HX_("SAMPLEMAP",92,10,e0,58),
	HX_("MAX_NESTING",2f,f3,ac,96),
	HX_("MAX_OPCODES",ca,35,74,ec),
	HX_("FRAGMENT",d0,ef,6a,07),
	HX_("VERTEX",64,87,ca,53),
	HX_("SAMPLER_TYPE_SHIFT",14,7b,00,a2),
	HX_("SAMPLER_DIM_SHIFT",74,d9,2e,8e),
	HX_("SAMPLER_SPECIAL_SHIFT",a5,21,3b,19),
	HX_("SAMPLER_REPEAT_SHIFT",35,ae,b2,55),
	HX_("SAMPLER_MIPMAP_SHIFT",22,a4,a4,01),
	HX_("SAMPLER_FILTER_SHIFT",52,5a,cd,30),
	HX_("REG_WRITE",34,40,8f,ce),
	HX_("REG_READ",81,5d,41,d4),
	HX_("REG_FRAG",5d,ab,5c,cc),
	HX_("REG_VERT",dc,46,e6,d6),
	HX_("OP_SCALAR",ca,b5,62,55),
	HX_("OP_SPECIAL_TEX",03,ae,a5,d2),
	HX_("OP_SPECIAL_MATRIX",85,7b,16,8b),
	HX_("OP_FRAG_ONLY",fb,46,30,c5),
	HX_("OP_VERT_ONLY",1c,9f,47,02),
	HX_("OP_NO_DEST",02,1a,18,9e),
	HX_("OP_VERSION2",58,64,bc,53),
	HX_("OP_INCNEST",f8,4f,35,4f),
	HX_("OP_DECNEST",dc,be,13,e6),
	HX_("MOV",b4,b2,3a,00),
	HX_("ADD",01,8e,31,00),
	HX_("SUB",60,45,3f,00),
	HX_("MUL",e4,b7,3a,00),
	HX_("DIV",31,d9,33,00),
	HX_("RCP",7f,73,3e,00),
	HX_("MIN",72,ad,3a,00),
	HX_("MAX",84,a6,3a,00),
	HX_("FRC",77,65,35,00),
	HX_("SQT",f6,41,3f,00),
	HX_("RSQ",70,81,3e,00),
	HX_("POW",78,f9,3c,00),
	HX_("LOG",64,f0,39,00),
	HX_("EXP",7d,a8,34,00),
	HX_("NRM",89,77,3b,00),
	HX_("SIN",f8,3a,3f,00),
	HX_("COS",27,1c,33,00),
	HX_("CRS",c4,1e,33,00),
	HX_("DP3",27,df,33,00),
	HX_("DP4",28,df,33,00),
	HX_("ABS",52,8c,31,00),
	HX_("NEG",30,6c,3b,00),
	HX_("SAT",06,34,3f,00),
	HX_("M33",2d,9a,3a,00),
	HX_("M44",0d,9b,3a,00),
	HX_("M34",2e,9a,3a,00),
	HX_("DDX",d8,d4,33,00),
	HX_("DDY",d9,d4,33,00),
	HX_("IFE",c8,a1,37,00),
	HX_("INE",c0,a8,37,00),
	HX_("IFG",ca,a1,37,00),
	HX_("IFL",cf,a1,37,00),
	HX_("IEG",eb,a0,37,00),
	HX_("IEL",f0,a0,37,00),
	HX_("ELS",0c,9e,34,00),
	HX_("EIF",62,9b,34,00),
	HX_("TED",b3,f9,3f,00),
	HX_("KIL",ee,28,39,00),
	HX_("TEX",c7,f9,3f,00),
	HX_("SGE",31,39,3f,00),
	HX_("SLT",9b,3d,3f,00),
	HX_("SGN",3a,39,3f,00),
	HX_("SEQ",7f,37,3f,00),
	HX_("SNE",4a,3f,3f,00),
	HX_("VA",2b,4b,00,00),
	HX_("VC",2d,4b,00,00),
	HX_("VT",3e,4b,00,00),
	HX_("VO",39,4b,00,00),
	HX_("VI",33,4b,00,00),
	HX_("FC",3d,3d,00,00),
	HX_("FT",4e,3d,00,00),
	HX_("FS",4d,3d,00,00),
	HX_("FO",49,3d,00,00),
	HX_("FD",3e,3d,00,00),
	HX_("IID",64,a4,37,00),
	HX_("D2",6e,3b,00,00),
	HX_("D3",6f,3b,00,00),
	HX_("CUBE",f5,04,8a,2c),
	HX_("MIPNEAREST",4a,95,9e,c2),
	HX_("MIPLINEAR",59,3a,d7,5f),
	HX_("MIPNONE",2c,52,db,f5),
	HX_("NOMIP",d3,c7,b3,1d),
	HX_("NEAREST",3e,ec,9d,e5),
	HX_("LINEAR",e5,fd,22,9f),
	HX_("ANISOTROPIC2X",37,1a,65,db),
	HX_("ANISOTROPIC4X",f5,1b,65,db),
	HX_("ANISOTROPIC8X",71,1f,65,db),
	HX_("ANISOTROPIC16X",62,f6,10,1d),
	HX_("CENTROID",40,70,6b,f1),
	HX_("SINGLE",88,12,a4,6b),
	HX_("IGNORESAMPLER",16,da,44,ba),
	HX_("REPEAT",5b,43,ff,b8),
	HX_("WRAP",ca,01,c0,39),
	HX_("CLAMP",db,aa,46,c6),
	HX_("REPEAT_U_CLAMP_V",64,80,cf,17),
	HX_("CLAMP_U_REPEAT_V",c0,51,bd,ad),
	HX_("RGBA",b4,98,69,36),
	HX_("COMPRESSED",81,c0,e3,59),
	HX_("COMPRESSEDALPHA",1d,ab,12,a8),
	HX_("DXT1",f1,91,35,2d),
	HX_("DXT5",f5,91,35,2d),
	HX_("VIDEO",5b,4c,ea,b4),
	HX_("initialized",14,f5,0f,37),
	HX_("init",10,3b,bb,45),
	::String(null())
};

void AGALMiniAssembler_obj::__register()
{
	AGALMiniAssembler_obj _hx_dummy;
	AGALMiniAssembler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.utils.AGALMiniAssembler",1d,f7,bb,62);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AGALMiniAssembler_obj::__GetStatic;
	__mClass->mSetStaticField = &AGALMiniAssembler_obj::__SetStatic;
	__mClass->mMarkFunc = AGALMiniAssembler_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AGALMiniAssembler_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AGALMiniAssembler_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AGALMiniAssembler_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AGALMiniAssembler_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AGALMiniAssembler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AGALMiniAssembler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void AGALMiniAssembler_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_40_boot)
HXDLIN(  40)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("checkstyle:ConstantName",20,38,cc,f4))->init(1,HX_("checkstyle:FieldDocComment",70,56,1b,20)))))));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_878a01ff4ba15759_42_boot)
HXDLIN(  42)		OPMAP =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_878a01ff4ba15759_43_boot)
HXDLIN(  43)		REGMAP =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_878a01ff4ba15759_44_boot)
HXDLIN(  44)		SAMPLEMAP =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_45_boot)
HXDLIN(  45)		MAX_NESTING = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_46_boot)
HXDLIN(  46)		MAX_OPCODES = 4096;
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_47_boot)
HXDLIN(  47)		FRAGMENT = HX_("fragment",d0,5f,e5,ad);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_48_boot)
HXDLIN(  48)		VERTEX = HX_("vertex",64,db,47,a1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_50_boot)
HXDLIN(  50)		SAMPLER_TYPE_SHIFT = 8;
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_51_boot)
HXDLIN(  51)		SAMPLER_DIM_SHIFT = 12;
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_52_boot)
HXDLIN(  52)		SAMPLER_SPECIAL_SHIFT = 16;
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_53_boot)
HXDLIN(  53)		SAMPLER_REPEAT_SHIFT = 20;
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_54_boot)
HXDLIN(  54)		SAMPLER_MIPMAP_SHIFT = 24;
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_55_boot)
HXDLIN(  55)		SAMPLER_FILTER_SHIFT = 28;
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_57_boot)
HXDLIN(  57)		REG_WRITE = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_58_boot)
HXDLIN(  58)		REG_READ = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_59_boot)
HXDLIN(  59)		REG_FRAG = 32;
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_60_boot)
HXDLIN(  60)		REG_VERT = 64;
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_62_boot)
HXDLIN(  62)		OP_SCALAR = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_63_boot)
HXDLIN(  63)		OP_SPECIAL_TEX = 8;
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_64_boot)
HXDLIN(  64)		OP_SPECIAL_MATRIX = 16;
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_65_boot)
HXDLIN(  65)		OP_FRAG_ONLY = 32;
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_66_boot)
HXDLIN(  66)		OP_VERT_ONLY = 64;
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_67_boot)
HXDLIN(  67)		OP_NO_DEST = 128;
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_68_boot)
HXDLIN(  68)		OP_VERSION2 = 256;
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_69_boot)
HXDLIN(  69)		OP_INCNEST = 512;
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_70_boot)
HXDLIN(  70)		OP_DECNEST = 1024;
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_72_boot)
HXDLIN(  72)		MOV = HX_("mov",d4,16,53,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_73_boot)
HXDLIN(  73)		ADD = HX_("add",21,f2,49,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_74_boot)
HXDLIN(  74)		SUB = HX_("sub",80,a9,57,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_75_boot)
HXDLIN(  75)		MUL = HX_("mul",04,1c,53,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_76_boot)
HXDLIN(  76)		DIV = HX_("div",51,3d,4c,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_77_boot)
HXDLIN(  77)		RCP = HX_("rcp",9f,d7,56,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_78_boot)
HXDLIN(  78)		MIN = HX_("min",92,11,53,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_79_boot)
HXDLIN(  79)		MAX = HX_("max",a4,0a,53,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_80_boot)
HXDLIN(  80)		FRC = HX_("frc",97,c9,4d,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_81_boot)
HXDLIN(  81)		SQT = HX_("sqt",16,a6,57,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_82_boot)
HXDLIN(  82)		RSQ = HX_("rsq",90,e5,56,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_83_boot)
HXDLIN(  83)		POW = HX_("pow",98,5d,55,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_84_boot)
HXDLIN(  84)		LOG = HX_("log",84,54,52,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_85_boot)
HXDLIN(  85)		EXP = HX_("exp",9d,0c,4d,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_86_boot)
HXDLIN(  86)		NRM = HX_("nrm",a9,db,53,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_87_boot)
HXDLIN(  87)		SIN = HX_("sin",18,9f,57,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_88_boot)
HXDLIN(  88)		COS = HX_("cos",47,80,4b,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_89_boot)
HXDLIN(  89)		CRS = HX_("crs",e4,82,4b,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_90_boot)
HXDLIN(  90)		DP3 = HX_("dp3",27,43,4c,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_91_boot)
HXDLIN(  91)		DP4 = HX_("dp4",28,43,4c,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_92_boot)
HXDLIN(  92)		ABS = HX_("abs",72,f0,49,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_93_boot)
HXDLIN(  93)		NEG = HX_("neg",50,d0,53,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_94_boot)
HXDLIN(  94)		SAT = HX_("sat",26,98,57,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_95_boot)
HXDLIN(  95)		M33 = HX_("m33",4d,e2,52,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_96_boot)
HXDLIN(  96)		M44 = HX_("m44",2d,e3,52,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_97_boot)
HXDLIN(  97)		M34 = HX_("m34",4e,e2,52,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_98_boot)
HXDLIN(  98)		DDX = HX_("ddx",f8,38,4c,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_99_boot)
HXDLIN(  99)		DDY = HX_("ddy",f9,38,4c,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_100_boot)
HXDLIN( 100)		IFE = HX_("ife",e8,05,50,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_101_boot)
HXDLIN( 101)		INE = HX_("ine",e0,0c,50,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_102_boot)
HXDLIN( 102)		IFG = HX_("ifg",ea,05,50,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_103_boot)
HXDLIN( 103)		IFL = HX_("ifl",ef,05,50,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_104_boot)
HXDLIN( 104)		IEG = HX_("ieg",0b,05,50,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_105_boot)
HXDLIN( 105)		IEL = HX_("iel",10,05,50,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_106_boot)
HXDLIN( 106)		ELS = HX_("els",2c,02,4d,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_107_boot)
HXDLIN( 107)		EIF = HX_("eif",82,ff,4c,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_108_boot)
HXDLIN( 108)		TED = HX_("ted",d3,5d,58,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_109_boot)
HXDLIN( 109)		KIL = HX_("kil",0e,8d,51,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_110_boot)
HXDLIN( 110)		TEX = HX_("tex",e7,5d,58,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_111_boot)
HXDLIN( 111)		SGE = HX_("sge",51,9d,57,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_112_boot)
HXDLIN( 112)		SLT = HX_("slt",bb,a1,57,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_113_boot)
HXDLIN( 113)		SGN = HX_("sgn",5a,9d,57,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_114_boot)
HXDLIN( 114)		SEQ = HX_("seq",9f,9b,57,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_115_boot)
HXDLIN( 115)		SNE = HX_("sne",6a,a3,57,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_117_boot)
HXDLIN( 117)		VA = HX_("va",2b,67,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_118_boot)
HXDLIN( 118)		VC = HX_("vc",2d,67,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_119_boot)
HXDLIN( 119)		VT = HX_("vt",3e,67,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_120_boot)
HXDLIN( 120)		VO = HX_("vo",39,67,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_121_boot)
HXDLIN( 121)		VI = HX_("vi",33,67,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_122_boot)
HXDLIN( 122)		FC = HX_("fc",3d,59,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_123_boot)
HXDLIN( 123)		FT = HX_("ft",4e,59,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_124_boot)
HXDLIN( 124)		FS = HX_("fs",4d,59,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_125_boot)
HXDLIN( 125)		FO = HX_("fo",49,59,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_126_boot)
HXDLIN( 126)		FD = HX_("fd",3e,59,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_127_boot)
HXDLIN( 127)		IID = HX_("iid",84,08,50,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_129_boot)
HXDLIN( 129)		D2 = HX_("2d",f2,2b,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_130_boot)
HXDLIN( 130)		D3 = HX_("3d",d1,2c,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_131_boot)
HXDLIN( 131)		CUBE = HX_("cube",f5,3c,c9,41);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_132_boot)
HXDLIN( 132)		MIPNEAREST = HX_("mipnearest",4a,21,95,d0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_133_boot)
HXDLIN( 133)		MIPLINEAR = HX_("miplinear",79,ca,7e,64);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_134_boot)
HXDLIN( 134)		MIPNONE = HX_("mipnone",4c,7e,07,76);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_135_boot)
HXDLIN( 135)		NOMIP = HX_("nomip",f3,8f,c5,9f);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_136_boot)
HXDLIN( 136)		NEAREST = HX_("nearest",5e,18,ca,65);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_137_boot)
HXDLIN( 137)		LINEAR = HX_("linear",e5,51,a0,ec);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_138_boot)
HXDLIN( 138)		ANISOTROPIC2X = HX_("anisotropic2x",77,56,26,f5);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_139_boot)
HXDLIN( 139)		ANISOTROPIC4X = HX_("anisotropic4x",35,58,26,f5);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_140_boot)
HXDLIN( 140)		ANISOTROPIC8X = HX_("anisotropic8x",b1,5b,26,f5);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_141_boot)
HXDLIN( 141)		ANISOTROPIC16X = HX_("anisotropic16x",62,56,64,8c);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_142_boot)
HXDLIN( 142)		CENTROID = HX_("centroid",40,e0,e5,97);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_143_boot)
HXDLIN( 143)		SINGLE = HX_("single",88,66,21,b9);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_144_boot)
HXDLIN( 144)		IGNORESAMPLER = HX_("ignoresampler",36,32,06,d4);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_145_boot)
HXDLIN( 145)		REPEAT = HX_("repeat",5b,97,7c,06);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_146_boot)
HXDLIN( 146)		WRAP = HX_("wrap",ca,39,ff,4e);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_147_boot)
HXDLIN( 147)		CLAMP = HX_("clamp",fb,72,58,48);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_148_boot)
HXDLIN( 148)		REPEAT_U_CLAMP_V = HX_("repeat_u_clamp_v",c4,04,17,dd);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_149_boot)
HXDLIN( 149)		CLAMP_U_REPEAT_V = HX_("clamp_u_repeat_v",a0,8d,a7,28);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_150_boot)
HXDLIN( 150)		RGBA = HX_("rgba",b4,d0,a8,4b);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_151_boot)
HXDLIN( 151)		COMPRESSED = HX_("compressed",81,4c,da,67);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_152_boot)
HXDLIN( 152)		COMPRESSEDALPHA = HX_("compressedalpha",3d,67,f2,b6);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_153_boot)
HXDLIN( 153)		DXT1 = HX_("dxt1",d1,c9,74,42);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_154_boot)
HXDLIN( 154)		DXT5 = HX_("dxt5",d5,c9,74,42);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_155_boot)
HXDLIN( 155)		VIDEO = HX_("video",7b,14,fc,36);
            	}
{
            	HX_STACKFRAME(&_hx_pos_878a01ff4ba15759_156_boot)
HXDLIN( 156)		initialized = false;
            	}
}

} // end namespace openfl
} // end namespace utils
