#include <hxcpp.h>

#ifndef INCLUDED_lime_media_OpenALAudioContext
#include <lime/media/OpenALAudioContext.h>
#endif
#ifndef INCLUDED_lime_media_openal_AL
#include <lime/media/openal/AL.h>
#endif
#ifndef INCLUDED_lime_media_openal_ALC
#include <lime/media/openal/ALC.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_18837c5c516898e1_16_new,"lime.media.OpenALAudioContext","new",0x164bc3e3,"lime.media.OpenALAudioContext.new","lime/media/OpenALAudioContext.hx",16,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_98_bufferData,"lime.media.OpenALAudioContext","bufferData",0x61809227,"lime.media.OpenALAudioContext.bufferData","lime/media/OpenALAudioContext.hx",98,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_103_buffer3f,"lime.media.OpenALAudioContext","buffer3f",0xb1159b70,"lime.media.OpenALAudioContext.buffer3f","lime/media/OpenALAudioContext.hx",103,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_108_buffer3i,"lime.media.OpenALAudioContext","buffer3i",0xb1159b73,"lime.media.OpenALAudioContext.buffer3i","lime/media/OpenALAudioContext.hx",108,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_113_bufferf,"lime.media.OpenALAudioContext","bufferf",0x5b7c1469,"lime.media.OpenALAudioContext.bufferf","lime/media/OpenALAudioContext.hx",113,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_118_bufferfv,"lime.media.OpenALAudioContext","bufferfv",0xb115c7ed,"lime.media.OpenALAudioContext.bufferfv","lime/media/OpenALAudioContext.hx",118,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_123_bufferi,"lime.media.OpenALAudioContext","bufferi",0x5b7c146c,"lime.media.OpenALAudioContext.bufferi","lime/media/OpenALAudioContext.hx",123,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_128_bufferiv,"lime.media.OpenALAudioContext","bufferiv",0xb115ca8a,"lime.media.OpenALAudioContext.bufferiv","lime/media/OpenALAudioContext.hx",128,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_133_closeDevice,"lime.media.OpenALAudioContext","closeDevice",0xa8f3b0f1,"lime.media.OpenALAudioContext.closeDevice","lime/media/OpenALAudioContext.hx",133,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_138_createContext,"lime.media.OpenALAudioContext","createContext",0xe4110396,"lime.media.OpenALAudioContext.createContext","lime/media/OpenALAudioContext.hx",138,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_143_createBuffer,"lime.media.OpenALAudioContext","createBuffer",0xfbf70139,"lime.media.OpenALAudioContext.createBuffer","lime/media/OpenALAudioContext.hx",143,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_148_createSource,"lime.media.OpenALAudioContext","createSource",0x5d93f514,"lime.media.OpenALAudioContext.createSource","lime/media/OpenALAudioContext.hx",148,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_153_deleteBuffer,"lime.media.OpenALAudioContext","deleteBuffer",0x4039e7a8,"lime.media.OpenALAudioContext.deleteBuffer","lime/media/OpenALAudioContext.hx",153,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_158_deleteBuffers,"lime.media.OpenALAudioContext","deleteBuffers",0xf270cbcb,"lime.media.OpenALAudioContext.deleteBuffers","lime/media/OpenALAudioContext.hx",158,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_163_deleteSource,"lime.media.OpenALAudioContext","deleteSource",0xa1d6db83,"lime.media.OpenALAudioContext.deleteSource","lime/media/OpenALAudioContext.hx",163,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_168_deleteSources,"lime.media.OpenALAudioContext","deleteSources",0xfa293790,"lime.media.OpenALAudioContext.deleteSources","lime/media/OpenALAudioContext.hx",168,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_172_destroyContext,"lime.media.OpenALAudioContext","destroyContext",0xaf4f8972,"lime.media.OpenALAudioContext.destroyContext","lime/media/OpenALAudioContext.hx",172,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_179_disable,"lime.media.OpenALAudioContext","disable",0x5b43daeb,"lime.media.OpenALAudioContext.disable","lime/media/OpenALAudioContext.hx",179,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_184_distanceModel,"lime.media.OpenALAudioContext","distanceModel",0xb637d577,"lime.media.OpenALAudioContext.distanceModel","lime/media/OpenALAudioContext.hx",184,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_189_dopplerFactor,"lime.media.OpenALAudioContext","dopplerFactor",0x515bc320,"lime.media.OpenALAudioContext.dopplerFactor","lime/media/OpenALAudioContext.hx",189,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_194_dopplerVelocity,"lime.media.OpenALAudioContext","dopplerVelocity",0x1be822ae,"lime.media.OpenALAudioContext.dopplerVelocity","lime/media/OpenALAudioContext.hx",194,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_199_enable,"lime.media.OpenALAudioContext","enable",0xac608ee0,"lime.media.OpenALAudioContext.enable","lime/media/OpenALAudioContext.hx",199,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_204_genSource,"lime.media.OpenALAudioContext","genSource",0x4573694e,"lime.media.OpenALAudioContext.genSource","lime/media/OpenALAudioContext.hx",204,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_209_genSources,"lime.media.OpenALAudioContext","genSources",0x7f88bb65,"lime.media.OpenALAudioContext.genSources","lime/media/OpenALAudioContext.hx",209,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_214_genBuffer,"lime.media.OpenALAudioContext","genBuffer",0xe3d67573,"lime.media.OpenALAudioContext.genBuffer","lime/media/OpenALAudioContext.hx",214,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_219_genBuffers,"lime.media.OpenALAudioContext","genBuffers",0x77d04fa0,"lime.media.OpenALAudioContext.genBuffers","lime/media/OpenALAudioContext.hx",219,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_224_getBoolean,"lime.media.OpenALAudioContext","getBoolean",0x9b6d438f,"lime.media.OpenALAudioContext.getBoolean","lime/media/OpenALAudioContext.hx",224,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_229_getBooleanv,"lime.media.OpenALAudioContext","getBooleanv",0x642dda07,"lime.media.OpenALAudioContext.getBooleanv","lime/media/OpenALAudioContext.hx",229,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_234_getBuffer3f,"lime.media.OpenALAudioContext","getBuffer3f",0x501d9b0c,"lime.media.OpenALAudioContext.getBuffer3f","lime/media/OpenALAudioContext.hx",234,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_239_getBuffer3i,"lime.media.OpenALAudioContext","getBuffer3i",0x501d9b0f,"lime.media.OpenALAudioContext.getBuffer3i","lime/media/OpenALAudioContext.hx",239,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_244_getBufferf,"lime.media.OpenALAudioContext","getBufferf",0xcefefc4d,"lime.media.OpenALAudioContext.getBufferf","lime/media/OpenALAudioContext.hx",244,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_249_getBufferfv,"lime.media.OpenALAudioContext","getBufferfv",0x501dc789,"lime.media.OpenALAudioContext.getBufferfv","lime/media/OpenALAudioContext.hx",249,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_254_getBufferi,"lime.media.OpenALAudioContext","getBufferi",0xcefefc50,"lime.media.OpenALAudioContext.getBufferi","lime/media/OpenALAudioContext.hx",254,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_259_getBufferiv,"lime.media.OpenALAudioContext","getBufferiv",0x501dca26,"lime.media.OpenALAudioContext.getBufferiv","lime/media/OpenALAudioContext.hx",259,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_263_getContextsDevice,"lime.media.OpenALAudioContext","getContextsDevice",0xaa2fe153,"lime.media.OpenALAudioContext.getContextsDevice","lime/media/OpenALAudioContext.hx",263,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_270_getCurrentContext,"lime.media.OpenALAudioContext","getCurrentContext",0xa71dacaf,"lime.media.OpenALAudioContext.getCurrentContext","lime/media/OpenALAudioContext.hx",270,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_275_getDouble,"lime.media.OpenALAudioContext","getDouble",0x3f8dac0a,"lime.media.OpenALAudioContext.getDouble","lime/media/OpenALAudioContext.hx",275,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_280_getDoublev,"lime.media.OpenALAudioContext","getDoublev",0x5c68dd2c,"lime.media.OpenALAudioContext.getDoublev","lime/media/OpenALAudioContext.hx",280,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_285_getEnumValue,"lime.media.OpenALAudioContext","getEnumValue",0x406aa157,"lime.media.OpenALAudioContext.getEnumValue","lime/media/OpenALAudioContext.hx",285,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_290_getError,"lime.media.OpenALAudioContext","getError",0xd7184cef,"lime.media.OpenALAudioContext.getError","lime/media/OpenALAudioContext.hx",290,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_302_getErrorString,"lime.media.OpenALAudioContext","getErrorString",0xb0a7c720,"lime.media.OpenALAudioContext.getErrorString","lime/media/OpenALAudioContext.hx",302,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_314_getFloat,"lime.media.OpenALAudioContext","getFloat",0x668546c3,"lime.media.OpenALAudioContext.getFloat","lime/media/OpenALAudioContext.hx",314,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_319_getFloatv,"lime.media.OpenALAudioContext","getFloatv",0x4e18a453,"lime.media.OpenALAudioContext.getFloatv","lime/media/OpenALAudioContext.hx",319,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_324_getInteger,"lime.media.OpenALAudioContext","getInteger",0x348a16a5,"lime.media.OpenALAudioContext.getInteger","lime/media/OpenALAudioContext.hx",324,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_329_getIntegerv,"lime.media.OpenALAudioContext","getIntegerv",0xc449ba31,"lime.media.OpenALAudioContext.getIntegerv","lime/media/OpenALAudioContext.hx",329,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_341_getListener3f,"lime.media.OpenALAudioContext","getListener3f",0x67d323c0,"lime.media.OpenALAudioContext.getListener3f","lime/media/OpenALAudioContext.hx",341,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_346_getListener3i,"lime.media.OpenALAudioContext","getListener3i",0x67d323c3,"lime.media.OpenALAudioContext.getListener3i","lime/media/OpenALAudioContext.hx",346,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_351_getListenerf,"lime.media.OpenALAudioContext","getListenerf",0x0bf20619,"lime.media.OpenALAudioContext.getListenerf","lime/media/OpenALAudioContext.hx",351,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_356_getListenerfv,"lime.media.OpenALAudioContext","getListenerfv",0x67d3503d,"lime.media.OpenALAudioContext.getListenerfv","lime/media/OpenALAudioContext.hx",356,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_361_getListeneri,"lime.media.OpenALAudioContext","getListeneri",0x0bf2061c,"lime.media.OpenALAudioContext.getListeneri","lime/media/OpenALAudioContext.hx",361,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_366_getListeneriv,"lime.media.OpenALAudioContext","getListeneriv",0x67d352da,"lime.media.OpenALAudioContext.getListeneriv","lime/media/OpenALAudioContext.hx",366,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_371_getProcAddress,"lime.media.OpenALAudioContext","getProcAddress",0xb30de925,"lime.media.OpenALAudioContext.getProcAddress","lime/media/OpenALAudioContext.hx",371,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_376_getSource3f,"lime.media.OpenALAudioContext","getSource3f",0x09c37ba7,"lime.media.OpenALAudioContext.getSource3f","lime/media/OpenALAudioContext.hx",376,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_381_getSourcef,"lime.media.OpenALAudioContext","getSourcef",0xd6b76812,"lime.media.OpenALAudioContext.getSourcef","lime/media/OpenALAudioContext.hx",381,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_386_getSource3i,"lime.media.OpenALAudioContext","getSource3i",0x09c37baa,"lime.media.OpenALAudioContext.getSource3i","lime/media/OpenALAudioContext.hx",386,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_391_getSourcefv,"lime.media.OpenALAudioContext","getSourcefv",0x09c3a824,"lime.media.OpenALAudioContext.getSourcefv","lime/media/OpenALAudioContext.hx",391,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_396_getSourcei,"lime.media.OpenALAudioContext","getSourcei",0xd6b76815,"lime.media.OpenALAudioContext.getSourcei","lime/media/OpenALAudioContext.hx",396,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_401_getSourceiv,"lime.media.OpenALAudioContext","getSourceiv",0x09c3aac1,"lime.media.OpenALAudioContext.getSourceiv","lime/media/OpenALAudioContext.hx",401,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_406_getString,"lime.media.OpenALAudioContext","getString",0x1df2a9ca,"lime.media.OpenALAudioContext.getString","lime/media/OpenALAudioContext.hx",406,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_418_isBuffer,"lime.media.OpenALAudioContext","isBuffer",0x2d15ca27,"lime.media.OpenALAudioContext.isBuffer","lime/media/OpenALAudioContext.hx",418,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_423_isEnabled,"lime.media.OpenALAudioContext","isEnabled",0x129b797a,"lime.media.OpenALAudioContext.isEnabled","lime/media/OpenALAudioContext.hx",423,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_428_isExtensionPresent,"lime.media.OpenALAudioContext","isExtensionPresent",0x90c17123,"lime.media.OpenALAudioContext.isExtensionPresent","lime/media/OpenALAudioContext.hx",428,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_433_isSource,"lime.media.OpenALAudioContext","isSource",0x8eb2be02,"lime.media.OpenALAudioContext.isSource","lime/media/OpenALAudioContext.hx",433,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_438_listener3f,"lime.media.OpenALAudioContext","listener3f",0xf7170524,"lime.media.OpenALAudioContext.listener3f","lime/media/OpenALAudioContext.hx",438,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_443_listener3i,"lime.media.OpenALAudioContext","listener3i",0xf7170527,"lime.media.OpenALAudioContext.listener3i","lime/media/OpenALAudioContext.hx",443,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_448_listenerf,"lime.media.OpenALAudioContext","listenerf",0x83fa5d35,"lime.media.OpenALAudioContext.listenerf","lime/media/OpenALAudioContext.hx",448,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_453_listenerfv,"lime.media.OpenALAudioContext","listenerfv",0xf71731a1,"lime.media.OpenALAudioContext.listenerfv","lime/media/OpenALAudioContext.hx",453,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_458_listeneri,"lime.media.OpenALAudioContext","listeneri",0x83fa5d38,"lime.media.OpenALAudioContext.listeneri","lime/media/OpenALAudioContext.hx",458,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_463_listeneriv,"lime.media.OpenALAudioContext","listeneriv",0xf717343e,"lime.media.OpenALAudioContext.listeneriv","lime/media/OpenALAudioContext.hx",463,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_468_makeContextCurrent,"lime.media.OpenALAudioContext","makeContextCurrent",0x7164e475,"lime.media.OpenALAudioContext.makeContextCurrent","lime/media/OpenALAudioContext.hx",468,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_473_openDevice,"lime.media.OpenALAudioContext","openDevice",0x8d211add,"lime.media.OpenALAudioContext.openDevice","lime/media/OpenALAudioContext.hx",473,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_478_pauseDevice,"lime.media.OpenALAudioContext","pauseDevice",0xe2b472af,"lime.media.OpenALAudioContext.pauseDevice","lime/media/OpenALAudioContext.hx",478,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_483_processContext,"lime.media.OpenALAudioContext","processContext",0xf541dc9d,"lime.media.OpenALAudioContext.processContext","lime/media/OpenALAudioContext.hx",483,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_488_resumeDevice,"lime.media.OpenALAudioContext","resumeDevice",0x5a53be40,"lime.media.OpenALAudioContext.resumeDevice","lime/media/OpenALAudioContext.hx",488,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_493_source3f,"lime.media.OpenALAudioContext","source3f",0x6abb7c0b,"lime.media.OpenALAudioContext.source3f","lime/media/OpenALAudioContext.hx",493,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_498_source3i,"lime.media.OpenALAudioContext","source3i",0x6abb7c0e,"lime.media.OpenALAudioContext.source3i","lime/media/OpenALAudioContext.hx",498,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_503_sourcef,"lime.media.OpenALAudioContext","sourcef",0x6334802e,"lime.media.OpenALAudioContext.sourcef","lime/media/OpenALAudioContext.hx",503,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_508_sourcefv,"lime.media.OpenALAudioContext","sourcefv",0x6abba888,"lime.media.OpenALAudioContext.sourcefv","lime/media/OpenALAudioContext.hx",508,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_513_sourcei,"lime.media.OpenALAudioContext","sourcei",0x63348031,"lime.media.OpenALAudioContext.sourcei","lime/media/OpenALAudioContext.hx",513,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_518_sourceiv,"lime.media.OpenALAudioContext","sourceiv",0x6abbab25,"lime.media.OpenALAudioContext.sourceiv","lime/media/OpenALAudioContext.hx",518,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_523_sourcePlay,"lime.media.OpenALAudioContext","sourcePlay",0x40cae74c,"lime.media.OpenALAudioContext.sourcePlay","lime/media/OpenALAudioContext.hx",523,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_528_sourcePlayv,"lime.media.OpenALAudioContext","sourcePlayv",0x70bf7baa,"lime.media.OpenALAudioContext.sourcePlayv","lime/media/OpenALAudioContext.hx",528,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_533_sourceStop,"lime.media.OpenALAudioContext","sourceStop",0x42cca95a,"lime.media.OpenALAudioContext.sourceStop","lime/media/OpenALAudioContext.hx",533,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_538_sourceStopv,"lime.media.OpenALAudioContext","sourceStopv",0x304785dc,"lime.media.OpenALAudioContext.sourceStopv","lime/media/OpenALAudioContext.hx",538,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_543_sourceRewind,"lime.media.OpenALAudioContext","sourceRewind",0x0a33e953,"lime.media.OpenALAudioContext.sourceRewind","lime/media/OpenALAudioContext.hx",543,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_548_sourceRewindv,"lime.media.OpenALAudioContext","sourceRewindv",0xe3383fc3,"lime.media.OpenALAudioContext.sourceRewindv","lime/media/OpenALAudioContext.hx",548,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_553_sourcePause,"lime.media.OpenALAudioContext","sourcePause",0x69894a9e,"lime.media.OpenALAudioContext.sourcePause","lime/media/OpenALAudioContext.hx",553,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_558_sourcePausev,"lime.media.OpenALAudioContext","sourcePausev",0xee980018,"lime.media.OpenALAudioContext.sourcePausev","lime/media/OpenALAudioContext.hx",558,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_563_sourceQueueBuffer,"lime.media.OpenALAudioContext","sourceQueueBuffer",0x64036319,"lime.media.OpenALAudioContext.sourceQueueBuffer","lime/media/OpenALAudioContext.hx",563,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_568_sourceQueueBuffers,"lime.media.OpenALAudioContext","sourceQueueBuffers",0x1ef3533a,"lime.media.OpenALAudioContext.sourceQueueBuffers","lime/media/OpenALAudioContext.hx",568,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_573_sourceUnqueueBuffer,"lime.media.OpenALAudioContext","sourceUnqueueBuffer",0x55a79360,"lime.media.OpenALAudioContext.sourceUnqueueBuffer","lime/media/OpenALAudioContext.hx",573,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_578_sourceUnqueueBuffers,"lime.media.OpenALAudioContext","sourceUnqueueBuffers",0x9cf96113,"lime.media.OpenALAudioContext.sourceUnqueueBuffers","lime/media/OpenALAudioContext.hx",578,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_583_speedOfSound,"lime.media.OpenALAudioContext","speedOfSound",0x132eeb8e,"lime.media.OpenALAudioContext.speedOfSound","lime/media/OpenALAudioContext.hx",583,0xee17aeeb)
HX_LOCAL_STACK_FRAME(_hx_pos_18837c5c516898e1_588_suspendContext,"lime.media.OpenALAudioContext","suspendContext",0x2828bb30,"lime.media.OpenALAudioContext.suspendContext","lime/media/OpenALAudioContext.hx",588,0xee17aeeb)
namespace lime{
namespace media{

void OpenALAudioContext_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_16_new)
            	HX_STACK_THIS(this)
HXLINE(  16)
HXLINE(  92)		this->ALL_DEVICES_SPECIFIER = 4115;
HXLINE(  91)		this->DEFAULT_ALL_DEVICES_SPECIFIER = 4114;
HXLINE(  90)		this->ENUMERATE_ALL_EXT = 1;
HXLINE(  89)		this->DEVICE_SPECIFIER = 4101;
HXLINE(  88)		this->DEFAULT_DEVICE_SPECIFIER = 4100;
HXLINE(  87)		this->ALL_ATTRIBUTES = 4099;
HXLINE(  86)		this->ATTRIBUTES_SIZE = 4098;
HXLINE(  85)		this->INVALID_CONTEXT = 40962;
HXLINE(  84)		this->INVALID_DEVICE = 40961;
HXLINE(  83)		this->STEREO_SOURCES = 4113;
HXLINE(  82)		this->MONO_SOURCES = 4112;
HXLINE(  81)		this->SYNC = 4105;
HXLINE(  80)		this->REFRESH = 4104;
HXLINE(  79)		this->EXPONENT_DISTANCE_CLAMPED = 53254;
HXLINE(  78)		this->EXPONENT_DISTANCE = 53253;
HXLINE(  77)		this->LINEAR_DISTANCE_CLAMPED = 53252;
HXLINE(  76)		this->LINEAR_DISTANCE = 53251;
HXLINE(  75)		this->INVERSE_DISTANCE_CLAMPED = 53250;
HXLINE(  74)		this->INVERSE_DISTANCE = 53249;
HXLINE(  73)		this->DISTANCE_MODEL = 53248;
HXLINE(  72)		this->DOPPLER_VELOCITY = 49153;
HXLINE(  71)		this->SPEED_OF_SOUND = 49155;
HXLINE(  70)		this->DOPPLER_FACTOR = 49152;
HXLINE(  69)		this->EXTENSIONS = 45060;
HXLINE(  68)		this->RENDERER = 45059;
HXLINE(  67)		this->VERSION = 45058;
HXLINE(  66)		this->VENDOR = 45057;
HXLINE(  65)		this->OUT_OF_MEMORY = 40965;
HXLINE(  64)		this->INVALID_OPERATION = 40964;
HXLINE(  63)		this->INVALID_VALUE = 40963;
HXLINE(  62)		this->INVALID_ENUM = 40962;
HXLINE(  61)		this->INVALID_NAME = 40961;
HXLINE(  60)		this->NO_ERROR = 0;
HXLINE(  59)		this->SIZE = 8196;
HXLINE(  58)		this->CHANNELS = 8195;
HXLINE(  57)		this->BITS = 8194;
HXLINE(  56)		this->FREQUENCY = 8193;
HXLINE(  55)		this->FORMAT_STEREO16 = 4355;
HXLINE(  54)		this->FORMAT_STEREO8 = 4354;
HXLINE(  53)		this->FORMAT_MONO16 = 4353;
HXLINE(  52)		this->FORMAT_MONO8 = 4352;
HXLINE(  51)		this->UNDETERMINED = 4144;
HXLINE(  50)		this->STREAMING = 4137;
HXLINE(  49)		this->STATIC = 4136;
HXLINE(  48)		this->SOURCE_TYPE = 4135;
HXLINE(  47)		this->BYTE_OFFSET = 4134;
HXLINE(  46)		this->SAMPLE_OFFSET = 4133;
HXLINE(  45)		this->SEC_OFFSET = 4132;
HXLINE(  44)		this->MAX_DISTANCE = 4131;
HXLINE(  43)		this->CONE_OUTER_GAIN = 4130;
HXLINE(  42)		this->ROLLOFF_FACTOR = 4129;
HXLINE(  41)		this->REFERENCE_DISTANCE = 4128;
HXLINE(  40)		this->BUFFERS_PROCESSED = 4118;
HXLINE(  39)		this->BUFFERS_QUEUED = 4117;
HXLINE(  38)		this->STOPPED = 4116;
HXLINE(  37)		this->PAUSED = 4115;
HXLINE(  36)		this->PLAYING = 4114;
HXLINE(  35)		this->INITIAL = 4113;
HXLINE(  34)		this->SOURCE_STATE = 4112;
HXLINE(  33)		this->ORIENTATION = 4111;
HXLINE(  32)		this->MAX_GAIN = 4110;
HXLINE(  31)		this->MIN_GAIN = 4109;
HXLINE(  30)		this->GAIN = 4106;
HXLINE(  29)		this->BUFFER = 4105;
HXLINE(  28)		this->LOOPING = 4103;
HXLINE(  27)		this->VELOCITY = 4102;
HXLINE(  26)		this->DIRECTION = 4101;
HXLINE(  25)		this->POSITION = 4100;
HXLINE(  24)		this->PITCH = 4099;
HXLINE(  23)		this->CONE_OUTER_ANGLE = 4098;
HXLINE(  22)		this->CONE_INNER_ANGLE = 4097;
HXLINE(  21)		this->SOURCE_RELATIVE = 514;
HXLINE(  20)		this->TRUE = 1;
HXLINE(  19)		this->FALSE = 0;
HXLINE(  18)		this->NONE = 0;
            	}

Dynamic OpenALAudioContext_obj::__CreateEmpty() { return new OpenALAudioContext_obj; }

void *OpenALAudioContext_obj::_hx_vtable = 0;

Dynamic OpenALAudioContext_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OpenALAudioContext_obj > _hx_result = new OpenALAudioContext_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OpenALAudioContext_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1531d04d;
}

void OpenALAudioContext_obj::bufferData( ::Dynamic buffer,int format, ::lime::utils::ArrayBufferView data,int size,int freq){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_98_bufferData)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(format,"format")
            	HX_STACK_ARG(data,"data")
            	HX_STACK_ARG(size,"size")
            	HX_STACK_ARG(freq,"freq")
HXLINE(  98)
HXDLIN(  98)		::lime::media::openal::AL_obj::bufferData(buffer,format,data,size,freq);
            	}


HX_DEFINE_DYNAMIC_FUNC5(OpenALAudioContext_obj,bufferData,(void))

void OpenALAudioContext_obj::buffer3f( ::Dynamic buffer,int param,Float value1,Float value2,Float value3){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_103_buffer3f)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(value1,"value1")
            	HX_STACK_ARG(value2,"value2")
            	HX_STACK_ARG(value3,"value3")
HXLINE( 103)
HXDLIN( 103)		::lime::media::openal::AL_obj::buffer3f(buffer,param,value1,value2,value3);
            	}


HX_DEFINE_DYNAMIC_FUNC5(OpenALAudioContext_obj,buffer3f,(void))

void OpenALAudioContext_obj::buffer3i( ::Dynamic buffer,int param,int value1,int value2,int value3){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_108_buffer3i)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(value1,"value1")
            	HX_STACK_ARG(value2,"value2")
            	HX_STACK_ARG(value3,"value3")
HXLINE( 108)
HXDLIN( 108)		::lime::media::openal::AL_obj::buffer3i(buffer,param,value1,value2,value3);
            	}


HX_DEFINE_DYNAMIC_FUNC5(OpenALAudioContext_obj,buffer3i,(void))

void OpenALAudioContext_obj::bufferf( ::Dynamic buffer,int param,Float value){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_113_bufferf)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(value,"value")
HXLINE( 113)
HXDLIN( 113)		::lime::media::openal::AL_obj::bufferf(buffer,param,value);
            	}


HX_DEFINE_DYNAMIC_FUNC3(OpenALAudioContext_obj,bufferf,(void))

void OpenALAudioContext_obj::bufferfv( ::Dynamic buffer,int param,::Array< Float > values){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_118_bufferfv)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(values,"values")
HXLINE( 118)
HXDLIN( 118)		::lime::media::openal::AL_obj::bufferfv(buffer,param,values);
            	}


HX_DEFINE_DYNAMIC_FUNC3(OpenALAudioContext_obj,bufferfv,(void))

void OpenALAudioContext_obj::bufferi( ::Dynamic buffer,int param,int value){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_123_bufferi)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(value,"value")
HXLINE( 123)
HXDLIN( 123)		::lime::media::openal::AL_obj::bufferi(buffer,param,value);
            	}


HX_DEFINE_DYNAMIC_FUNC3(OpenALAudioContext_obj,bufferi,(void))

void OpenALAudioContext_obj::bufferiv( ::Dynamic buffer,int param,::Array< int > values){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_128_bufferiv)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(values,"values")
HXLINE( 128)
HXDLIN( 128)		::lime::media::openal::AL_obj::bufferiv(buffer,param,values);
            	}


HX_DEFINE_DYNAMIC_FUNC3(OpenALAudioContext_obj,bufferiv,(void))

bool OpenALAudioContext_obj::closeDevice( ::Dynamic device){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_133_closeDevice)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(device,"device")
HXLINE( 133)
HXDLIN( 133)		return ::lime::media::openal::ALC_obj::closeDevice(device);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,closeDevice,return )

 ::Dynamic OpenALAudioContext_obj::createContext( ::Dynamic device,::Array< int > attrlist){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_138_createContext)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(device,"device")
            	HX_STACK_ARG(attrlist,"attrlist")
HXLINE( 138)
HXDLIN( 138)		return ::lime::media::openal::ALC_obj::createContext(device,attrlist);
            	}


HX_DEFINE_DYNAMIC_FUNC2(OpenALAudioContext_obj,createContext,return )

 ::Dynamic OpenALAudioContext_obj::createBuffer(){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_143_createBuffer)
            	HX_STACK_THIS(this)
HXLINE( 143)
HXDLIN( 143)		return ::lime::media::openal::AL_obj::createBuffer();
            	}


HX_DEFINE_DYNAMIC_FUNC0(OpenALAudioContext_obj,createBuffer,return )

 ::Dynamic OpenALAudioContext_obj::createSource(){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_148_createSource)
            	HX_STACK_THIS(this)
HXLINE( 148)
HXDLIN( 148)		return ::lime::media::openal::AL_obj::createSource();
            	}


HX_DEFINE_DYNAMIC_FUNC0(OpenALAudioContext_obj,createSource,return )

void OpenALAudioContext_obj::deleteBuffer( ::Dynamic buffer){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_153_deleteBuffer)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(buffer,"buffer")
HXLINE( 153)
HXDLIN( 153)		::lime::media::openal::AL_obj::deleteBuffer(buffer);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,deleteBuffer,(void))

void OpenALAudioContext_obj::deleteBuffers(::cpp::VirtualArray buffers){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_158_deleteBuffers)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(buffers,"buffers")
HXLINE( 158)
HXDLIN( 158)		::lime::media::openal::AL_obj::deleteBuffers(buffers);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,deleteBuffers,(void))

void OpenALAudioContext_obj::deleteSource( ::Dynamic source){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_163_deleteSource)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(source,"source")
HXLINE( 163)
HXDLIN( 163)		::lime::media::openal::AL_obj::deleteSource(source);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,deleteSource,(void))

void OpenALAudioContext_obj::deleteSources(::cpp::VirtualArray sources){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_168_deleteSources)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(sources,"sources")
HXLINE( 168)
HXDLIN( 168)		::lime::media::openal::AL_obj::deleteSources(sources);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,deleteSources,(void))

void OpenALAudioContext_obj::destroyContext( ::Dynamic context){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_172_destroyContext)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(context,"context")
HXLINE( 172)
HXLINE( 173)		if (::hx::IsNull( context )) {
HXLINE( 173)			return;
            		}
HXLINE( 174)		::lime::media::openal::ALC_obj::destroyContext(context);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,destroyContext,(void))

void OpenALAudioContext_obj::disable(int capability){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_179_disable)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(capability,"capability")
HXLINE( 179)
HXDLIN( 179)		::lime::media::openal::AL_obj::disable(capability);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,disable,(void))

void OpenALAudioContext_obj::distanceModel(int distanceModel){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_184_distanceModel)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(distanceModel,"distanceModel")
HXLINE( 184)
HXDLIN( 184)		::lime::media::openal::AL_obj::distanceModel(distanceModel);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,distanceModel,(void))

void OpenALAudioContext_obj::dopplerFactor(Float value){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_189_dopplerFactor)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 189)
HXDLIN( 189)		::lime::media::openal::AL_obj::dopplerFactor(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,dopplerFactor,(void))

void OpenALAudioContext_obj::dopplerVelocity(Float value){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_194_dopplerVelocity)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 194)
HXDLIN( 194)		::lime::media::openal::AL_obj::dopplerVelocity(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,dopplerVelocity,(void))

void OpenALAudioContext_obj::enable(int capability){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_199_enable)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(capability,"capability")
HXLINE( 199)
HXDLIN( 199)		::lime::media::openal::AL_obj::enable(capability);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,enable,(void))

 ::Dynamic OpenALAudioContext_obj::genSource(){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_204_genSource)
            	HX_STACK_THIS(this)
HXLINE( 204)
HXDLIN( 204)		return this->createSource();
            	}


HX_DEFINE_DYNAMIC_FUNC0(OpenALAudioContext_obj,genSource,return )

::cpp::VirtualArray OpenALAudioContext_obj::genSources(int n){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_209_genSources)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(n,"n")
HXLINE( 209)
HXDLIN( 209)		return ::lime::media::openal::AL_obj::genSources(n);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,genSources,return )

 ::Dynamic OpenALAudioContext_obj::genBuffer(){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_214_genBuffer)
            	HX_STACK_THIS(this)
HXLINE( 214)
HXDLIN( 214)		return this->createBuffer();
            	}


HX_DEFINE_DYNAMIC_FUNC0(OpenALAudioContext_obj,genBuffer,return )

::cpp::VirtualArray OpenALAudioContext_obj::genBuffers(int n){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_219_genBuffers)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(n,"n")
HXLINE( 219)
HXDLIN( 219)		return ::lime::media::openal::AL_obj::genBuffers(n);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,genBuffers,return )

bool OpenALAudioContext_obj::getBoolean(int param){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_224_getBoolean)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(param,"param")
HXLINE( 224)
HXDLIN( 224)		return ::lime::media::openal::AL_obj::getBoolean(param);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,getBoolean,return )

::Array< bool > OpenALAudioContext_obj::getBooleanv(int param,::hx::Null< int >  __o_count){
            		int count = __o_count.Default(1);
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_229_getBooleanv)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(count,"count")
HXLINE( 229)
HXDLIN( 229)		return ::lime::media::openal::AL_obj::getBooleanv(param,count);
            	}


HX_DEFINE_DYNAMIC_FUNC2(OpenALAudioContext_obj,getBooleanv,return )

::Array< Float > OpenALAudioContext_obj::getBuffer3f( ::Dynamic buffer,int param){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_234_getBuffer3f)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(param,"param")
HXLINE( 234)
HXDLIN( 234)		return ::lime::media::openal::AL_obj::getBuffer3f(buffer,param);
            	}


HX_DEFINE_DYNAMIC_FUNC2(OpenALAudioContext_obj,getBuffer3f,return )

::Array< int > OpenALAudioContext_obj::getBuffer3i( ::Dynamic buffer,int param){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_239_getBuffer3i)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(param,"param")
HXLINE( 239)
HXDLIN( 239)		return ::lime::media::openal::AL_obj::getBuffer3i(buffer,param);
            	}


HX_DEFINE_DYNAMIC_FUNC2(OpenALAudioContext_obj,getBuffer3i,return )

Float OpenALAudioContext_obj::getBufferf( ::Dynamic buffer,int param){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_244_getBufferf)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(param,"param")
HXLINE( 244)
HXDLIN( 244)		return ::lime::media::openal::AL_obj::getBufferf(buffer,param);
            	}


HX_DEFINE_DYNAMIC_FUNC2(OpenALAudioContext_obj,getBufferf,return )

::Array< Float > OpenALAudioContext_obj::getBufferfv( ::Dynamic buffer,int param,::hx::Null< int >  __o_count){
            		int count = __o_count.Default(1);
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_249_getBufferfv)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(count,"count")
HXLINE( 249)
HXDLIN( 249)		return ::lime::media::openal::AL_obj::getBufferfv(buffer,param,count);
            	}


HX_DEFINE_DYNAMIC_FUNC3(OpenALAudioContext_obj,getBufferfv,return )

int OpenALAudioContext_obj::getBufferi( ::Dynamic buffer,int param){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_254_getBufferi)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(param,"param")
HXLINE( 254)
HXDLIN( 254)		return ::lime::media::openal::AL_obj::getBufferi(buffer,param);
            	}


HX_DEFINE_DYNAMIC_FUNC2(OpenALAudioContext_obj,getBufferi,return )

::Array< int > OpenALAudioContext_obj::getBufferiv( ::Dynamic buffer,int param,::hx::Null< int >  __o_count){
            		int count = __o_count.Default(1);
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_259_getBufferiv)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(count,"count")
HXLINE( 259)
HXDLIN( 259)		return ::lime::media::openal::AL_obj::getBufferiv(buffer,param,count);
            	}


HX_DEFINE_DYNAMIC_FUNC3(OpenALAudioContext_obj,getBufferiv,return )

 ::Dynamic OpenALAudioContext_obj::getContextsDevice( ::Dynamic context){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_263_getContextsDevice)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(context,"context")
HXLINE( 263)
HXLINE( 264)		if (::hx::IsNull( context )) {
HXLINE( 264)			return null();
            		}
HXLINE( 265)		return ::lime::media::openal::ALC_obj::getContextsDevice(context);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,getContextsDevice,return )

 ::Dynamic OpenALAudioContext_obj::getCurrentContext(){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_270_getCurrentContext)
            	HX_STACK_THIS(this)
HXLINE( 270)
HXDLIN( 270)		return ::lime::media::openal::ALC_obj::getCurrentContext();
            	}


HX_DEFINE_DYNAMIC_FUNC0(OpenALAudioContext_obj,getCurrentContext,return )

Float OpenALAudioContext_obj::getDouble(int param){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_275_getDouble)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(param,"param")
HXLINE( 275)
HXDLIN( 275)		return ::lime::media::openal::AL_obj::getDouble(param);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,getDouble,return )

::Array< Float > OpenALAudioContext_obj::getDoublev(int param,::hx::Null< int >  __o_count){
            		int count = __o_count.Default(1);
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_280_getDoublev)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(count,"count")
HXLINE( 280)
HXDLIN( 280)		return ::lime::media::openal::AL_obj::getDoublev(param,count);
            	}


HX_DEFINE_DYNAMIC_FUNC2(OpenALAudioContext_obj,getDoublev,return )

int OpenALAudioContext_obj::getEnumValue(::String ename){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_285_getEnumValue)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ename,"ename")
HXLINE( 285)
HXDLIN( 285)		return ::lime::media::openal::AL_obj::getEnumValue(ename);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,getEnumValue,return )

int OpenALAudioContext_obj::getError( ::Dynamic device){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_290_getError)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(device,"device")
HXLINE( 290)
HXDLIN( 290)		if (::hx::IsNull( device )) {
HXLINE( 292)			return ::lime::media::openal::AL_obj::getError();
            		}
            		else {
HXLINE( 296)			return ::lime::media::openal::ALC_obj::getError(device);
            		}
HXLINE( 290)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,getError,return )

::String OpenALAudioContext_obj::getErrorString( ::Dynamic device){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_302_getErrorString)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(device,"device")
HXLINE( 302)
HXDLIN( 302)		if (::hx::IsNull( device )) {
HXLINE( 304)			return ::lime::media::openal::AL_obj::getErrorString();
            		}
            		else {
HXLINE( 308)			return ::lime::media::openal::ALC_obj::getErrorString(device);
            		}
HXLINE( 302)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,getErrorString,return )

Float OpenALAudioContext_obj::getFloat(int param){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_314_getFloat)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(param,"param")
HXLINE( 314)
HXDLIN( 314)		return ::lime::media::openal::AL_obj::getFloat(param);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,getFloat,return )

::Array< Float > OpenALAudioContext_obj::getFloatv(int param,::hx::Null< int >  __o_count){
            		int count = __o_count.Default(1);
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_319_getFloatv)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(count,"count")
HXLINE( 319)
HXDLIN( 319)		return ::lime::media::openal::AL_obj::getFloatv(param,count);
            	}


HX_DEFINE_DYNAMIC_FUNC2(OpenALAudioContext_obj,getFloatv,return )

int OpenALAudioContext_obj::getInteger(int param){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_324_getInteger)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(param,"param")
HXLINE( 324)
HXDLIN( 324)		return ::lime::media::openal::AL_obj::getInteger(param);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,getInteger,return )

::Array< int > OpenALAudioContext_obj::getIntegerv(int param,::hx::Null< int >  __o_count, ::Dynamic device){
            		int count = __o_count.Default(1);
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_329_getIntegerv)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(count,"count")
            	HX_STACK_ARG(device,"device")
HXLINE( 329)
HXDLIN( 329)		if (::hx::IsNull( device )) {
HXLINE( 331)			return ::lime::media::openal::AL_obj::getIntegerv(param,count);
            		}
            		else {
HXLINE( 335)			return ::lime::media::openal::ALC_obj::getIntegerv(device,param,count);
            		}
HXLINE( 329)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(OpenALAudioContext_obj,getIntegerv,return )

::Array< Float > OpenALAudioContext_obj::getListener3f(int param){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_341_getListener3f)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(param,"param")
HXLINE( 341)
HXDLIN( 341)		return ::lime::media::openal::AL_obj::getListener3f(param);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,getListener3f,return )

::Array< int > OpenALAudioContext_obj::getListener3i(int param){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_346_getListener3i)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(param,"param")
HXLINE( 346)
HXDLIN( 346)		return ::lime::media::openal::AL_obj::getListener3i(param);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,getListener3i,return )

Float OpenALAudioContext_obj::getListenerf(int param){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_351_getListenerf)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(param,"param")
HXLINE( 351)
HXDLIN( 351)		return ::lime::media::openal::AL_obj::getListenerf(param);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,getListenerf,return )

::Array< Float > OpenALAudioContext_obj::getListenerfv(int param,::hx::Null< int >  __o_count){
            		int count = __o_count.Default(1);
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_356_getListenerfv)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(count,"count")
HXLINE( 356)
HXDLIN( 356)		return ::lime::media::openal::AL_obj::getListenerfv(param,count);
            	}


HX_DEFINE_DYNAMIC_FUNC2(OpenALAudioContext_obj,getListenerfv,return )

int OpenALAudioContext_obj::getListeneri(int param){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_361_getListeneri)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(param,"param")
HXLINE( 361)
HXDLIN( 361)		return ::lime::media::openal::AL_obj::getListeneri(param);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,getListeneri,return )

::Array< int > OpenALAudioContext_obj::getListeneriv(int param,::hx::Null< int >  __o_count){
            		int count = __o_count.Default(1);
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_366_getListeneriv)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(count,"count")
HXLINE( 366)
HXDLIN( 366)		return ::lime::media::openal::AL_obj::getListeneriv(param,count);
            	}


HX_DEFINE_DYNAMIC_FUNC2(OpenALAudioContext_obj,getListeneriv,return )

 ::Dynamic OpenALAudioContext_obj::getProcAddress(::String fname){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_371_getProcAddress)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(fname,"fname")
HXLINE( 371)
HXDLIN( 371)		return ::lime::media::openal::AL_obj::getProcAddress(fname);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,getProcAddress,return )

::Array< Float > OpenALAudioContext_obj::getSource3f( ::Dynamic source,int param){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_376_getSource3f)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(param,"param")
HXLINE( 376)
HXDLIN( 376)		return ::lime::media::openal::AL_obj::getSource3f(source,param);
            	}


HX_DEFINE_DYNAMIC_FUNC2(OpenALAudioContext_obj,getSource3f,return )

Float OpenALAudioContext_obj::getSourcef( ::Dynamic source,int param){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_381_getSourcef)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(param,"param")
HXLINE( 381)
HXDLIN( 381)		return ::lime::media::openal::AL_obj::getSourcef(source,param);
            	}


HX_DEFINE_DYNAMIC_FUNC2(OpenALAudioContext_obj,getSourcef,return )

::Array< int > OpenALAudioContext_obj::getSource3i( ::Dynamic source,int param){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_386_getSource3i)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(param,"param")
HXLINE( 386)
HXDLIN( 386)		return ::lime::media::openal::AL_obj::getSource3i(source,param);
            	}


HX_DEFINE_DYNAMIC_FUNC2(OpenALAudioContext_obj,getSource3i,return )

::Array< Float > OpenALAudioContext_obj::getSourcefv( ::Dynamic source,int param,::hx::Null< int >  __o_count){
            		int count = __o_count.Default(1);
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_391_getSourcefv)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(count,"count")
HXLINE( 391)
HXDLIN( 391)		return ::lime::media::openal::AL_obj::getSourcefv(source,param,null());
            	}


HX_DEFINE_DYNAMIC_FUNC3(OpenALAudioContext_obj,getSourcefv,return )

 ::Dynamic OpenALAudioContext_obj::getSourcei( ::Dynamic source,int param){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_396_getSourcei)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(param,"param")
HXLINE( 396)
HXDLIN( 396)		return ::lime::media::openal::AL_obj::getSourcei(source,param);
            	}


HX_DEFINE_DYNAMIC_FUNC2(OpenALAudioContext_obj,getSourcei,return )

::Array< int > OpenALAudioContext_obj::getSourceiv( ::Dynamic source,int param,::hx::Null< int >  __o_count){
            		int count = __o_count.Default(1);
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_401_getSourceiv)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(count,"count")
HXLINE( 401)
HXDLIN( 401)		return ::lime::media::openal::AL_obj::getSourceiv(source,param,count);
            	}


HX_DEFINE_DYNAMIC_FUNC3(OpenALAudioContext_obj,getSourceiv,return )

::String OpenALAudioContext_obj::getString(int param, ::Dynamic device){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_406_getString)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(device,"device")
HXLINE( 406)
HXDLIN( 406)		if (::hx::IsNull( device )) {
HXLINE( 408)			return ::lime::media::openal::AL_obj::getString(param);
            		}
            		else {
HXLINE( 412)			return ::lime::media::openal::ALC_obj::getString(device,param);
            		}
HXLINE( 406)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(OpenALAudioContext_obj,getString,return )

bool OpenALAudioContext_obj::isBuffer( ::Dynamic buffer){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_418_isBuffer)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(buffer,"buffer")
HXLINE( 418)
HXDLIN( 418)		return ::lime::media::openal::AL_obj::isBuffer(buffer);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,isBuffer,return )

bool OpenALAudioContext_obj::isEnabled(int capability){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_423_isEnabled)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(capability,"capability")
HXLINE( 423)
HXDLIN( 423)		return ::lime::media::openal::AL_obj::isEnabled(capability);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,isEnabled,return )

bool OpenALAudioContext_obj::isExtensionPresent(::String extname){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_428_isExtensionPresent)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(extname,"extname")
HXLINE( 428)
HXDLIN( 428)		return ::lime::media::openal::AL_obj::isExtensionPresent(extname);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,isExtensionPresent,return )

bool OpenALAudioContext_obj::isSource( ::Dynamic source){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_433_isSource)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(source,"source")
HXLINE( 433)
HXDLIN( 433)		return ::lime::media::openal::AL_obj::isSource(source);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,isSource,return )

void OpenALAudioContext_obj::listener3f(int param,Float value1,Float value2,Float value3){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_438_listener3f)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(value1,"value1")
            	HX_STACK_ARG(value2,"value2")
            	HX_STACK_ARG(value3,"value3")
HXLINE( 438)
HXDLIN( 438)		::lime::media::openal::AL_obj::listener3f(param,value1,value2,value3);
            	}


HX_DEFINE_DYNAMIC_FUNC4(OpenALAudioContext_obj,listener3f,(void))

void OpenALAudioContext_obj::listener3i(int param,int value1,int value2,int value3){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_443_listener3i)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(value1,"value1")
            	HX_STACK_ARG(value2,"value2")
            	HX_STACK_ARG(value3,"value3")
HXLINE( 443)
HXDLIN( 443)		::lime::media::openal::AL_obj::listener3i(param,value1,value2,value3);
            	}


HX_DEFINE_DYNAMIC_FUNC4(OpenALAudioContext_obj,listener3i,(void))

void OpenALAudioContext_obj::listenerf(int param,Float value){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_448_listenerf)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(value,"value")
HXLINE( 448)
HXDLIN( 448)		::lime::media::openal::AL_obj::listenerf(param,value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(OpenALAudioContext_obj,listenerf,(void))

void OpenALAudioContext_obj::listenerfv(int param,::Array< Float > values){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_453_listenerfv)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(values,"values")
HXLINE( 453)
HXDLIN( 453)		::lime::media::openal::AL_obj::listenerfv(param,values);
            	}


HX_DEFINE_DYNAMIC_FUNC2(OpenALAudioContext_obj,listenerfv,(void))

void OpenALAudioContext_obj::listeneri(int param,int value){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_458_listeneri)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(value,"value")
HXLINE( 458)
HXDLIN( 458)		::lime::media::openal::AL_obj::listeneri(param,value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(OpenALAudioContext_obj,listeneri,(void))

void OpenALAudioContext_obj::listeneriv(int param,::Array< int > values){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_463_listeneriv)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(values,"values")
HXLINE( 463)
HXDLIN( 463)		::lime::media::openal::AL_obj::listeneriv(param,values);
            	}


HX_DEFINE_DYNAMIC_FUNC2(OpenALAudioContext_obj,listeneriv,(void))

bool OpenALAudioContext_obj::makeContextCurrent( ::Dynamic context){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_468_makeContextCurrent)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(context,"context")
HXLINE( 468)
HXDLIN( 468)		return ::lime::media::openal::ALC_obj::makeContextCurrent(context);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,makeContextCurrent,return )

 ::Dynamic OpenALAudioContext_obj::openDevice(::String deviceName){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_473_openDevice)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(deviceName,"deviceName")
HXLINE( 473)
HXDLIN( 473)		return ::lime::media::openal::ALC_obj::openDevice(deviceName);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,openDevice,return )

void OpenALAudioContext_obj::pauseDevice( ::Dynamic device){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_478_pauseDevice)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(device,"device")
HXLINE( 478)
HXDLIN( 478)		::lime::media::openal::ALC_obj::pauseDevice(device);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,pauseDevice,(void))

void OpenALAudioContext_obj::processContext( ::Dynamic context){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_483_processContext)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(context,"context")
HXLINE( 483)
HXDLIN( 483)		::lime::media::openal::ALC_obj::processContext(context);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,processContext,(void))

void OpenALAudioContext_obj::resumeDevice( ::Dynamic device){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_488_resumeDevice)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(device,"device")
HXLINE( 488)
HXDLIN( 488)		::lime::media::openal::ALC_obj::resumeDevice(device);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,resumeDevice,(void))

void OpenALAudioContext_obj::source3f( ::Dynamic source,int param,Float value1,Float value2,Float value3){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_493_source3f)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(value1,"value1")
            	HX_STACK_ARG(value2,"value2")
            	HX_STACK_ARG(value3,"value3")
HXLINE( 493)
HXDLIN( 493)		::lime::media::openal::AL_obj::source3f(source,param,value1,value2,value3);
            	}


HX_DEFINE_DYNAMIC_FUNC5(OpenALAudioContext_obj,source3f,(void))

void OpenALAudioContext_obj::source3i( ::Dynamic source,int param,int value1,int value2,int value3){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_498_source3i)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(value1,"value1")
            	HX_STACK_ARG(value2,"value2")
            	HX_STACK_ARG(value3,"value3")
HXLINE( 498)
HXDLIN( 498)		::lime::media::openal::AL_obj::source3i(source,param,value1,value2,value3);
            	}


HX_DEFINE_DYNAMIC_FUNC5(OpenALAudioContext_obj,source3i,(void))

void OpenALAudioContext_obj::sourcef( ::Dynamic source,int param,Float value){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_503_sourcef)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(value,"value")
HXLINE( 503)
HXDLIN( 503)		::lime::media::openal::AL_obj::sourcef(source,param,value);
            	}


HX_DEFINE_DYNAMIC_FUNC3(OpenALAudioContext_obj,sourcef,(void))

void OpenALAudioContext_obj::sourcefv( ::Dynamic source,int param,::Array< Float > values){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_508_sourcefv)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(values,"values")
HXLINE( 508)
HXDLIN( 508)		::lime::media::openal::AL_obj::sourcefv(source,param,values);
            	}


HX_DEFINE_DYNAMIC_FUNC3(OpenALAudioContext_obj,sourcefv,(void))

void OpenALAudioContext_obj::sourcei( ::Dynamic source,int param, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_513_sourcei)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(value,"value")
HXLINE( 513)
HXDLIN( 513)		::lime::media::openal::AL_obj::sourcei(source,param,value);
            	}


HX_DEFINE_DYNAMIC_FUNC3(OpenALAudioContext_obj,sourcei,(void))

void OpenALAudioContext_obj::sourceiv( ::Dynamic source,int param,::Array< int > values){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_518_sourceiv)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(values,"values")
HXLINE( 518)
HXDLIN( 518)		::lime::media::openal::AL_obj::sourceiv(source,param,values);
            	}


HX_DEFINE_DYNAMIC_FUNC3(OpenALAudioContext_obj,sourceiv,(void))

void OpenALAudioContext_obj::sourcePlay( ::Dynamic source){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_523_sourcePlay)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(source,"source")
HXLINE( 523)
HXDLIN( 523)		::lime::media::openal::AL_obj::sourcePlay(source);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,sourcePlay,(void))

void OpenALAudioContext_obj::sourcePlayv(::cpp::VirtualArray sources){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_528_sourcePlayv)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(sources,"sources")
HXLINE( 528)
HXDLIN( 528)		::lime::media::openal::AL_obj::sourcePlayv(sources);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,sourcePlayv,(void))

void OpenALAudioContext_obj::sourceStop( ::Dynamic source){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_533_sourceStop)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(source,"source")
HXLINE( 533)
HXDLIN( 533)		::lime::media::openal::AL_obj::sourceStop(source);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,sourceStop,(void))

void OpenALAudioContext_obj::sourceStopv(::cpp::VirtualArray sources){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_538_sourceStopv)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(sources,"sources")
HXLINE( 538)
HXDLIN( 538)		::lime::media::openal::AL_obj::sourceStopv(sources);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,sourceStopv,(void))

void OpenALAudioContext_obj::sourceRewind( ::Dynamic source){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_543_sourceRewind)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(source,"source")
HXLINE( 543)
HXDLIN( 543)		::lime::media::openal::AL_obj::sourceRewind(source);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,sourceRewind,(void))

void OpenALAudioContext_obj::sourceRewindv(::cpp::VirtualArray sources){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_548_sourceRewindv)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(sources,"sources")
HXLINE( 548)
HXDLIN( 548)		::lime::media::openal::AL_obj::sourceRewindv(sources);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,sourceRewindv,(void))

void OpenALAudioContext_obj::sourcePause( ::Dynamic source){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_553_sourcePause)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(source,"source")
HXLINE( 553)
HXDLIN( 553)		::lime::media::openal::AL_obj::sourcePause(source);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,sourcePause,(void))

void OpenALAudioContext_obj::sourcePausev(::cpp::VirtualArray sources){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_558_sourcePausev)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(sources,"sources")
HXLINE( 558)
HXDLIN( 558)		::lime::media::openal::AL_obj::sourcePausev(sources);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,sourcePausev,(void))

void OpenALAudioContext_obj::sourceQueueBuffer( ::Dynamic source, ::Dynamic buffer){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_563_sourceQueueBuffer)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(buffer,"buffer")
HXLINE( 563)
HXDLIN( 563)		::lime::media::openal::AL_obj::sourceQueueBuffer(source,buffer);
            	}


HX_DEFINE_DYNAMIC_FUNC2(OpenALAudioContext_obj,sourceQueueBuffer,(void))

void OpenALAudioContext_obj::sourceQueueBuffers( ::Dynamic source,int nb,::cpp::VirtualArray buffers){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_568_sourceQueueBuffers)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(nb,"nb")
            	HX_STACK_ARG(buffers,"buffers")
HXLINE( 568)
HXDLIN( 568)		::lime::media::openal::AL_obj::sourceQueueBuffers(source,nb,buffers);
            	}


HX_DEFINE_DYNAMIC_FUNC3(OpenALAudioContext_obj,sourceQueueBuffers,(void))

 ::Dynamic OpenALAudioContext_obj::sourceUnqueueBuffer( ::Dynamic source){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_573_sourceUnqueueBuffer)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(source,"source")
HXLINE( 573)
HXDLIN( 573)		return ::lime::media::openal::AL_obj::sourceUnqueueBuffer(source);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,sourceUnqueueBuffer,return )

::cpp::VirtualArray OpenALAudioContext_obj::sourceUnqueueBuffers( ::Dynamic source,int nb){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_578_sourceUnqueueBuffers)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(nb,"nb")
HXLINE( 578)
HXDLIN( 578)		return ::lime::media::openal::AL_obj::sourceUnqueueBuffers(source,nb);
            	}


HX_DEFINE_DYNAMIC_FUNC2(OpenALAudioContext_obj,sourceUnqueueBuffers,return )

void OpenALAudioContext_obj::speedOfSound(Float value){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_583_speedOfSound)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 583)
HXDLIN( 583)		::lime::media::openal::AL_obj::speedOfSound(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,speedOfSound,(void))

void OpenALAudioContext_obj::suspendContext( ::Dynamic context){
            	HX_STACKFRAME(&_hx_pos_18837c5c516898e1_588_suspendContext)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(context,"context")
HXLINE( 588)
HXDLIN( 588)		::lime::media::openal::ALC_obj::suspendContext(context);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenALAudioContext_obj,suspendContext,(void))


::hx::ObjectPtr< OpenALAudioContext_obj > OpenALAudioContext_obj::__new() {
	::hx::ObjectPtr< OpenALAudioContext_obj > __this = new OpenALAudioContext_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< OpenALAudioContext_obj > OpenALAudioContext_obj::__alloc(::hx::Ctx *_hx_ctx) {
	OpenALAudioContext_obj *__this = (OpenALAudioContext_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OpenALAudioContext_obj), false, "lime.media.OpenALAudioContext"));
	*(void **)__this = OpenALAudioContext_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

OpenALAudioContext_obj::OpenALAudioContext_obj()
{
}

::hx::Val OpenALAudioContext_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NONE") ) { return ::hx::Val( NONE ); }
		if (HX_FIELD_EQ(inName,"TRUE") ) { return ::hx::Val( TRUE ); }
		if (HX_FIELD_EQ(inName,"GAIN") ) { return ::hx::Val( GAIN ); }
		if (HX_FIELD_EQ(inName,"BITS") ) { return ::hx::Val( BITS ); }
		if (HX_FIELD_EQ(inName,"SIZE") ) { return ::hx::Val( SIZE ); }
		if (HX_FIELD_EQ(inName,"SYNC") ) { return ::hx::Val( SYNC ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"FALSE") ) { return ::hx::Val( FALSE ); }
		if (HX_FIELD_EQ(inName,"PITCH") ) { return ::hx::Val( PITCH ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BUFFER") ) { return ::hx::Val( BUFFER ); }
		if (HX_FIELD_EQ(inName,"PAUSED") ) { return ::hx::Val( PAUSED ); }
		if (HX_FIELD_EQ(inName,"STATIC") ) { return ::hx::Val( STATIC ); }
		if (HX_FIELD_EQ(inName,"VENDOR") ) { return ::hx::Val( VENDOR ); }
		if (HX_FIELD_EQ(inName,"enable") ) { return ::hx::Val( enable_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"LOOPING") ) { return ::hx::Val( LOOPING ); }
		if (HX_FIELD_EQ(inName,"INITIAL") ) { return ::hx::Val( INITIAL ); }
		if (HX_FIELD_EQ(inName,"PLAYING") ) { return ::hx::Val( PLAYING ); }
		if (HX_FIELD_EQ(inName,"STOPPED") ) { return ::hx::Val( STOPPED ); }
		if (HX_FIELD_EQ(inName,"VERSION") ) { return ::hx::Val( VERSION ); }
		if (HX_FIELD_EQ(inName,"REFRESH") ) { return ::hx::Val( REFRESH ); }
		if (HX_FIELD_EQ(inName,"bufferf") ) { return ::hx::Val( bufferf_dyn() ); }
		if (HX_FIELD_EQ(inName,"bufferi") ) { return ::hx::Val( bufferi_dyn() ); }
		if (HX_FIELD_EQ(inName,"disable") ) { return ::hx::Val( disable_dyn() ); }
		if (HX_FIELD_EQ(inName,"sourcef") ) { return ::hx::Val( sourcef_dyn() ); }
		if (HX_FIELD_EQ(inName,"sourcei") ) { return ::hx::Val( sourcei_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"POSITION") ) { return ::hx::Val( POSITION ); }
		if (HX_FIELD_EQ(inName,"VELOCITY") ) { return ::hx::Val( VELOCITY ); }
		if (HX_FIELD_EQ(inName,"MIN_GAIN") ) { return ::hx::Val( MIN_GAIN ); }
		if (HX_FIELD_EQ(inName,"MAX_GAIN") ) { return ::hx::Val( MAX_GAIN ); }
		if (HX_FIELD_EQ(inName,"CHANNELS") ) { return ::hx::Val( CHANNELS ); }
		if (HX_FIELD_EQ(inName,"NO_ERROR") ) { return ::hx::Val( NO_ERROR ); }
		if (HX_FIELD_EQ(inName,"RENDERER") ) { return ::hx::Val( RENDERER ); }
		if (HX_FIELD_EQ(inName,"buffer3f") ) { return ::hx::Val( buffer3f_dyn() ); }
		if (HX_FIELD_EQ(inName,"buffer3i") ) { return ::hx::Val( buffer3i_dyn() ); }
		if (HX_FIELD_EQ(inName,"bufferfv") ) { return ::hx::Val( bufferfv_dyn() ); }
		if (HX_FIELD_EQ(inName,"bufferiv") ) { return ::hx::Val( bufferiv_dyn() ); }
		if (HX_FIELD_EQ(inName,"getError") ) { return ::hx::Val( getError_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFloat") ) { return ::hx::Val( getFloat_dyn() ); }
		if (HX_FIELD_EQ(inName,"isBuffer") ) { return ::hx::Val( isBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"isSource") ) { return ::hx::Val( isSource_dyn() ); }
		if (HX_FIELD_EQ(inName,"source3f") ) { return ::hx::Val( source3f_dyn() ); }
		if (HX_FIELD_EQ(inName,"source3i") ) { return ::hx::Val( source3i_dyn() ); }
		if (HX_FIELD_EQ(inName,"sourcefv") ) { return ::hx::Val( sourcefv_dyn() ); }
		if (HX_FIELD_EQ(inName,"sourceiv") ) { return ::hx::Val( sourceiv_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"DIRECTION") ) { return ::hx::Val( DIRECTION ); }
		if (HX_FIELD_EQ(inName,"STREAMING") ) { return ::hx::Val( STREAMING ); }
		if (HX_FIELD_EQ(inName,"FREQUENCY") ) { return ::hx::Val( FREQUENCY ); }
		if (HX_FIELD_EQ(inName,"genSource") ) { return ::hx::Val( genSource_dyn() ); }
		if (HX_FIELD_EQ(inName,"genBuffer") ) { return ::hx::Val( genBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"getDouble") ) { return ::hx::Val( getDouble_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFloatv") ) { return ::hx::Val( getFloatv_dyn() ); }
		if (HX_FIELD_EQ(inName,"getString") ) { return ::hx::Val( getString_dyn() ); }
		if (HX_FIELD_EQ(inName,"isEnabled") ) { return ::hx::Val( isEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"listenerf") ) { return ::hx::Val( listenerf_dyn() ); }
		if (HX_FIELD_EQ(inName,"listeneri") ) { return ::hx::Val( listeneri_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"SEC_OFFSET") ) { return ::hx::Val( SEC_OFFSET ); }
		if (HX_FIELD_EQ(inName,"EXTENSIONS") ) { return ::hx::Val( EXTENSIONS ); }
		if (HX_FIELD_EQ(inName,"bufferData") ) { return ::hx::Val( bufferData_dyn() ); }
		if (HX_FIELD_EQ(inName,"genSources") ) { return ::hx::Val( genSources_dyn() ); }
		if (HX_FIELD_EQ(inName,"genBuffers") ) { return ::hx::Val( genBuffers_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBoolean") ) { return ::hx::Val( getBoolean_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBufferf") ) { return ::hx::Val( getBufferf_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBufferi") ) { return ::hx::Val( getBufferi_dyn() ); }
		if (HX_FIELD_EQ(inName,"getDoublev") ) { return ::hx::Val( getDoublev_dyn() ); }
		if (HX_FIELD_EQ(inName,"getInteger") ) { return ::hx::Val( getInteger_dyn() ); }
		if (HX_FIELD_EQ(inName,"getSourcef") ) { return ::hx::Val( getSourcef_dyn() ); }
		if (HX_FIELD_EQ(inName,"getSourcei") ) { return ::hx::Val( getSourcei_dyn() ); }
		if (HX_FIELD_EQ(inName,"listener3f") ) { return ::hx::Val( listener3f_dyn() ); }
		if (HX_FIELD_EQ(inName,"listener3i") ) { return ::hx::Val( listener3i_dyn() ); }
		if (HX_FIELD_EQ(inName,"listenerfv") ) { return ::hx::Val( listenerfv_dyn() ); }
		if (HX_FIELD_EQ(inName,"listeneriv") ) { return ::hx::Val( listeneriv_dyn() ); }
		if (HX_FIELD_EQ(inName,"openDevice") ) { return ::hx::Val( openDevice_dyn() ); }
		if (HX_FIELD_EQ(inName,"sourcePlay") ) { return ::hx::Val( sourcePlay_dyn() ); }
		if (HX_FIELD_EQ(inName,"sourceStop") ) { return ::hx::Val( sourceStop_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ORIENTATION") ) { return ::hx::Val( ORIENTATION ); }
		if (HX_FIELD_EQ(inName,"BYTE_OFFSET") ) { return ::hx::Val( BYTE_OFFSET ); }
		if (HX_FIELD_EQ(inName,"SOURCE_TYPE") ) { return ::hx::Val( SOURCE_TYPE ); }
		if (HX_FIELD_EQ(inName,"closeDevice") ) { return ::hx::Val( closeDevice_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBooleanv") ) { return ::hx::Val( getBooleanv_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBuffer3f") ) { return ::hx::Val( getBuffer3f_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBuffer3i") ) { return ::hx::Val( getBuffer3i_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBufferfv") ) { return ::hx::Val( getBufferfv_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBufferiv") ) { return ::hx::Val( getBufferiv_dyn() ); }
		if (HX_FIELD_EQ(inName,"getIntegerv") ) { return ::hx::Val( getIntegerv_dyn() ); }
		if (HX_FIELD_EQ(inName,"getSource3f") ) { return ::hx::Val( getSource3f_dyn() ); }
		if (HX_FIELD_EQ(inName,"getSource3i") ) { return ::hx::Val( getSource3i_dyn() ); }
		if (HX_FIELD_EQ(inName,"getSourcefv") ) { return ::hx::Val( getSourcefv_dyn() ); }
		if (HX_FIELD_EQ(inName,"getSourceiv") ) { return ::hx::Val( getSourceiv_dyn() ); }
		if (HX_FIELD_EQ(inName,"pauseDevice") ) { return ::hx::Val( pauseDevice_dyn() ); }
		if (HX_FIELD_EQ(inName,"sourcePlayv") ) { return ::hx::Val( sourcePlayv_dyn() ); }
		if (HX_FIELD_EQ(inName,"sourceStopv") ) { return ::hx::Val( sourceStopv_dyn() ); }
		if (HX_FIELD_EQ(inName,"sourcePause") ) { return ::hx::Val( sourcePause_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"SOURCE_STATE") ) { return ::hx::Val( SOURCE_STATE ); }
		if (HX_FIELD_EQ(inName,"MAX_DISTANCE") ) { return ::hx::Val( MAX_DISTANCE ); }
		if (HX_FIELD_EQ(inName,"UNDETERMINED") ) { return ::hx::Val( UNDETERMINED ); }
		if (HX_FIELD_EQ(inName,"FORMAT_MONO8") ) { return ::hx::Val( FORMAT_MONO8 ); }
		if (HX_FIELD_EQ(inName,"INVALID_NAME") ) { return ::hx::Val( INVALID_NAME ); }
		if (HX_FIELD_EQ(inName,"INVALID_ENUM") ) { return ::hx::Val( INVALID_ENUM ); }
		if (HX_FIELD_EQ(inName,"MONO_SOURCES") ) { return ::hx::Val( MONO_SOURCES ); }
		if (HX_FIELD_EQ(inName,"createBuffer") ) { return ::hx::Val( createBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"createSource") ) { return ::hx::Val( createSource_dyn() ); }
		if (HX_FIELD_EQ(inName,"deleteBuffer") ) { return ::hx::Val( deleteBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"deleteSource") ) { return ::hx::Val( deleteSource_dyn() ); }
		if (HX_FIELD_EQ(inName,"getEnumValue") ) { return ::hx::Val( getEnumValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"getListenerf") ) { return ::hx::Val( getListenerf_dyn() ); }
		if (HX_FIELD_EQ(inName,"getListeneri") ) { return ::hx::Val( getListeneri_dyn() ); }
		if (HX_FIELD_EQ(inName,"resumeDevice") ) { return ::hx::Val( resumeDevice_dyn() ); }
		if (HX_FIELD_EQ(inName,"sourceRewind") ) { return ::hx::Val( sourceRewind_dyn() ); }
		if (HX_FIELD_EQ(inName,"sourcePausev") ) { return ::hx::Val( sourcePausev_dyn() ); }
		if (HX_FIELD_EQ(inName,"speedOfSound") ) { return ::hx::Val( speedOfSound_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SAMPLE_OFFSET") ) { return ::hx::Val( SAMPLE_OFFSET ); }
		if (HX_FIELD_EQ(inName,"FORMAT_MONO16") ) { return ::hx::Val( FORMAT_MONO16 ); }
		if (HX_FIELD_EQ(inName,"INVALID_VALUE") ) { return ::hx::Val( INVALID_VALUE ); }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY") ) { return ::hx::Val( OUT_OF_MEMORY ); }
		if (HX_FIELD_EQ(inName,"createContext") ) { return ::hx::Val( createContext_dyn() ); }
		if (HX_FIELD_EQ(inName,"deleteBuffers") ) { return ::hx::Val( deleteBuffers_dyn() ); }
		if (HX_FIELD_EQ(inName,"deleteSources") ) { return ::hx::Val( deleteSources_dyn() ); }
		if (HX_FIELD_EQ(inName,"distanceModel") ) { return ::hx::Val( distanceModel_dyn() ); }
		if (HX_FIELD_EQ(inName,"dopplerFactor") ) { return ::hx::Val( dopplerFactor_dyn() ); }
		if (HX_FIELD_EQ(inName,"getListener3f") ) { return ::hx::Val( getListener3f_dyn() ); }
		if (HX_FIELD_EQ(inName,"getListener3i") ) { return ::hx::Val( getListener3i_dyn() ); }
		if (HX_FIELD_EQ(inName,"getListenerfv") ) { return ::hx::Val( getListenerfv_dyn() ); }
		if (HX_FIELD_EQ(inName,"getListeneriv") ) { return ::hx::Val( getListeneriv_dyn() ); }
		if (HX_FIELD_EQ(inName,"sourceRewindv") ) { return ::hx::Val( sourceRewindv_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"BUFFERS_QUEUED") ) { return ::hx::Val( BUFFERS_QUEUED ); }
		if (HX_FIELD_EQ(inName,"ROLLOFF_FACTOR") ) { return ::hx::Val( ROLLOFF_FACTOR ); }
		if (HX_FIELD_EQ(inName,"FORMAT_STEREO8") ) { return ::hx::Val( FORMAT_STEREO8 ); }
		if (HX_FIELD_EQ(inName,"DOPPLER_FACTOR") ) { return ::hx::Val( DOPPLER_FACTOR ); }
		if (HX_FIELD_EQ(inName,"SPEED_OF_SOUND") ) { return ::hx::Val( SPEED_OF_SOUND ); }
		if (HX_FIELD_EQ(inName,"DISTANCE_MODEL") ) { return ::hx::Val( DISTANCE_MODEL ); }
		if (HX_FIELD_EQ(inName,"STEREO_SOURCES") ) { return ::hx::Val( STEREO_SOURCES ); }
		if (HX_FIELD_EQ(inName,"INVALID_DEVICE") ) { return ::hx::Val( INVALID_DEVICE ); }
		if (HX_FIELD_EQ(inName,"ALL_ATTRIBUTES") ) { return ::hx::Val( ALL_ATTRIBUTES ); }
		if (HX_FIELD_EQ(inName,"destroyContext") ) { return ::hx::Val( destroyContext_dyn() ); }
		if (HX_FIELD_EQ(inName,"getErrorString") ) { return ::hx::Val( getErrorString_dyn() ); }
		if (HX_FIELD_EQ(inName,"getProcAddress") ) { return ::hx::Val( getProcAddress_dyn() ); }
		if (HX_FIELD_EQ(inName,"processContext") ) { return ::hx::Val( processContext_dyn() ); }
		if (HX_FIELD_EQ(inName,"suspendContext") ) { return ::hx::Val( suspendContext_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"SOURCE_RELATIVE") ) { return ::hx::Val( SOURCE_RELATIVE ); }
		if (HX_FIELD_EQ(inName,"CONE_OUTER_GAIN") ) { return ::hx::Val( CONE_OUTER_GAIN ); }
		if (HX_FIELD_EQ(inName,"FORMAT_STEREO16") ) { return ::hx::Val( FORMAT_STEREO16 ); }
		if (HX_FIELD_EQ(inName,"LINEAR_DISTANCE") ) { return ::hx::Val( LINEAR_DISTANCE ); }
		if (HX_FIELD_EQ(inName,"INVALID_CONTEXT") ) { return ::hx::Val( INVALID_CONTEXT ); }
		if (HX_FIELD_EQ(inName,"ATTRIBUTES_SIZE") ) { return ::hx::Val( ATTRIBUTES_SIZE ); }
		if (HX_FIELD_EQ(inName,"dopplerVelocity") ) { return ::hx::Val( dopplerVelocity_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"CONE_INNER_ANGLE") ) { return ::hx::Val( CONE_INNER_ANGLE ); }
		if (HX_FIELD_EQ(inName,"CONE_OUTER_ANGLE") ) { return ::hx::Val( CONE_OUTER_ANGLE ); }
		if (HX_FIELD_EQ(inName,"DOPPLER_VELOCITY") ) { return ::hx::Val( DOPPLER_VELOCITY ); }
		if (HX_FIELD_EQ(inName,"INVERSE_DISTANCE") ) { return ::hx::Val( INVERSE_DISTANCE ); }
		if (HX_FIELD_EQ(inName,"DEVICE_SPECIFIER") ) { return ::hx::Val( DEVICE_SPECIFIER ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BUFFERS_PROCESSED") ) { return ::hx::Val( BUFFERS_PROCESSED ); }
		if (HX_FIELD_EQ(inName,"INVALID_OPERATION") ) { return ::hx::Val( INVALID_OPERATION ); }
		if (HX_FIELD_EQ(inName,"EXPONENT_DISTANCE") ) { return ::hx::Val( EXPONENT_DISTANCE ); }
		if (HX_FIELD_EQ(inName,"ENUMERATE_ALL_EXT") ) { return ::hx::Val( ENUMERATE_ALL_EXT ); }
		if (HX_FIELD_EQ(inName,"getContextsDevice") ) { return ::hx::Val( getContextsDevice_dyn() ); }
		if (HX_FIELD_EQ(inName,"getCurrentContext") ) { return ::hx::Val( getCurrentContext_dyn() ); }
		if (HX_FIELD_EQ(inName,"sourceQueueBuffer") ) { return ::hx::Val( sourceQueueBuffer_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"REFERENCE_DISTANCE") ) { return ::hx::Val( REFERENCE_DISTANCE ); }
		if (HX_FIELD_EQ(inName,"isExtensionPresent") ) { return ::hx::Val( isExtensionPresent_dyn() ); }
		if (HX_FIELD_EQ(inName,"makeContextCurrent") ) { return ::hx::Val( makeContextCurrent_dyn() ); }
		if (HX_FIELD_EQ(inName,"sourceQueueBuffers") ) { return ::hx::Val( sourceQueueBuffers_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"sourceUnqueueBuffer") ) { return ::hx::Val( sourceUnqueueBuffer_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"sourceUnqueueBuffers") ) { return ::hx::Val( sourceUnqueueBuffers_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ALL_DEVICES_SPECIFIER") ) { return ::hx::Val( ALL_DEVICES_SPECIFIER ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"LINEAR_DISTANCE_CLAMPED") ) { return ::hx::Val( LINEAR_DISTANCE_CLAMPED ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"INVERSE_DISTANCE_CLAMPED") ) { return ::hx::Val( INVERSE_DISTANCE_CLAMPED ); }
		if (HX_FIELD_EQ(inName,"DEFAULT_DEVICE_SPECIFIER") ) { return ::hx::Val( DEFAULT_DEVICE_SPECIFIER ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"EXPONENT_DISTANCE_CLAMPED") ) { return ::hx::Val( EXPONENT_DISTANCE_CLAMPED ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"DEFAULT_ALL_DEVICES_SPECIFIER") ) { return ::hx::Val( DEFAULT_ALL_DEVICES_SPECIFIER ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val OpenALAudioContext_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NONE") ) { NONE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TRUE") ) { TRUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GAIN") ) { GAIN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BITS") ) { BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SIZE") ) { SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SYNC") ) { SYNC=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"FALSE") ) { FALSE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PITCH") ) { PITCH=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BUFFER") ) { BUFFER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PAUSED") ) { PAUSED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STATIC") ) { STATIC=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VENDOR") ) { VENDOR=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"LOOPING") ) { LOOPING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INITIAL") ) { INITIAL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PLAYING") ) { PLAYING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STOPPED") ) { STOPPED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERSION") ) { VERSION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"REFRESH") ) { REFRESH=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"POSITION") ) { POSITION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VELOCITY") ) { VELOCITY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MIN_GAIN") ) { MIN_GAIN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_GAIN") ) { MAX_GAIN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CHANNELS") ) { CHANNELS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NO_ERROR") ) { NO_ERROR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERER") ) { RENDERER=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"DIRECTION") ) { DIRECTION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STREAMING") ) { STREAMING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FREQUENCY") ) { FREQUENCY=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"SEC_OFFSET") ) { SEC_OFFSET=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"EXTENSIONS") ) { EXTENSIONS=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ORIENTATION") ) { ORIENTATION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BYTE_OFFSET") ) { BYTE_OFFSET=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SOURCE_TYPE") ) { SOURCE_TYPE=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"SOURCE_STATE") ) { SOURCE_STATE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_DISTANCE") ) { MAX_DISTANCE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNDETERMINED") ) { UNDETERMINED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FORMAT_MONO8") ) { FORMAT_MONO8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_NAME") ) { INVALID_NAME=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_ENUM") ) { INVALID_ENUM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MONO_SOURCES") ) { MONO_SOURCES=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SAMPLE_OFFSET") ) { SAMPLE_OFFSET=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FORMAT_MONO16") ) { FORMAT_MONO16=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_VALUE") ) { INVALID_VALUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY") ) { OUT_OF_MEMORY=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"BUFFERS_QUEUED") ) { BUFFERS_QUEUED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ROLLOFF_FACTOR") ) { ROLLOFF_FACTOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FORMAT_STEREO8") ) { FORMAT_STEREO8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DOPPLER_FACTOR") ) { DOPPLER_FACTOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SPEED_OF_SOUND") ) { SPEED_OF_SOUND=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DISTANCE_MODEL") ) { DISTANCE_MODEL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STEREO_SOURCES") ) { STEREO_SOURCES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_DEVICE") ) { INVALID_DEVICE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALL_ATTRIBUTES") ) { ALL_ATTRIBUTES=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"SOURCE_RELATIVE") ) { SOURCE_RELATIVE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CONE_OUTER_GAIN") ) { CONE_OUTER_GAIN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FORMAT_STEREO16") ) { FORMAT_STEREO16=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LINEAR_DISTANCE") ) { LINEAR_DISTANCE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_CONTEXT") ) { INVALID_CONTEXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ATTRIBUTES_SIZE") ) { ATTRIBUTES_SIZE=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"CONE_INNER_ANGLE") ) { CONE_INNER_ANGLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CONE_OUTER_ANGLE") ) { CONE_OUTER_ANGLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DOPPLER_VELOCITY") ) { DOPPLER_VELOCITY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVERSE_DISTANCE") ) { INVERSE_DISTANCE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEVICE_SPECIFIER") ) { DEVICE_SPECIFIER=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BUFFERS_PROCESSED") ) { BUFFERS_PROCESSED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_OPERATION") ) { INVALID_OPERATION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"EXPONENT_DISTANCE") ) { EXPONENT_DISTANCE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ENUMERATE_ALL_EXT") ) { ENUMERATE_ALL_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"REFERENCE_DISTANCE") ) { REFERENCE_DISTANCE=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ALL_DEVICES_SPECIFIER") ) { ALL_DEVICES_SPECIFIER=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"LINEAR_DISTANCE_CLAMPED") ) { LINEAR_DISTANCE_CLAMPED=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"INVERSE_DISTANCE_CLAMPED") ) { INVERSE_DISTANCE_CLAMPED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEFAULT_DEVICE_SPECIFIER") ) { DEFAULT_DEVICE_SPECIFIER=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"EXPONENT_DISTANCE_CLAMPED") ) { EXPONENT_DISTANCE_CLAMPED=inValue.Cast< int >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"DEFAULT_ALL_DEVICES_SPECIFIER") ) { DEFAULT_ALL_DEVICES_SPECIFIER=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OpenALAudioContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("NONE",b8,da,ca,33));
	outFields->push(HX_("FALSE",83,6d,3d,79));
	outFields->push(HX_("TRUE",4e,6f,c4,37));
	outFields->push(HX_("SOURCE_RELATIVE",f0,f3,84,fe));
	outFields->push(HX_("CONE_INNER_ANGLE",4e,a1,d7,93));
	outFields->push(HX_("CONE_OUTER_ANGLE",f3,e1,bf,cc));
	outFields->push(HX_("PITCH",a0,f3,8e,40));
	outFields->push(HX_("POSITION",a9,30,80,24));
	outFields->push(HX_("DIRECTION",1f,d2,98,0b));
	outFields->push(HX_("VELOCITY",1d,92,83,78));
	outFields->push(HX_("LOOPING",de,50,51,a0));
	outFields->push(HX_("BUFFER",00,69,17,83));
	outFields->push(HX_("GAIN",7f,b8,1f,2f));
	outFields->push(HX_("MIN_GAIN",ac,29,d2,21));
	outFields->push(HX_("MAX_GAIN",5a,0f,b8,d4));
	outFields->push(HX_("ORIENTATION",b0,fa,3a,d4));
	outFields->push(HX_("SOURCE_STATE",4d,e8,1e,ab));
	outFields->push(HX_("INITIAL",64,e4,72,4b));
	outFields->push(HX_("PLAYING",4e,e3,eb,09));
	outFields->push(HX_("PAUSED",ae,ec,06,a2));
	outFields->push(HX_("STOPPED",ed,a5,35,c3));
	outFields->push(HX_("BUFFERS_QUEUED",5f,78,ce,71));
	outFields->push(HX_("BUFFERS_PROCESSED",42,9d,62,ac));
	outFields->push(HX_("REFERENCE_DISTANCE",89,d5,ce,9a));
	outFields->push(HX_("ROLLOFF_FACTOR",bc,10,98,56));
	outFields->push(HX_("CONE_OUTER_GAIN",3f,da,8d,e3));
	outFields->push(HX_("MAX_DISTANCE",90,83,bb,a5));
	outFields->push(HX_("SEC_OFFSET",e1,5d,a3,ac));
	outFields->push(HX_("SAMPLE_OFFSET",48,82,ac,b4));
	outFields->push(HX_("BYTE_OFFSET",2a,df,43,36));
	outFields->push(HX_("SOURCE_TYPE",de,ff,00,df));
	outFields->push(HX_("STATIC",ae,88,7e,b8));
	outFields->push(HX_("STREAMING",42,38,7b,b1));
	outFields->push(HX_("UNDETERMINED",0a,ed,9d,50));
	outFields->push(HX_("FORMAT_MONO8",6d,40,81,7a));
	outFields->push(HX_("FORMAT_MONO16",10,19,97,b6));
	outFields->push(HX_("FORMAT_STEREO8",b8,19,58,da));
	outFields->push(HX_("FORMAT_STEREO16",65,61,be,32));
	outFields->push(HX_("FREQUENCY",7c,f2,42,b7));
	outFields->push(HX_("BITS",06,c3,d7,2b));
	outFields->push(HX_("CHANNELS",50,3a,74,c4));
	outFields->push(HX_("SIZE",c1,68,14,37));
	outFields->push(HX_("NO_ERROR",ea,b5,7d,2f));
	outFields->push(HX_("INVALID_NAME",f3,7b,59,19));
	outFields->push(HX_("INVALID_ENUM",a9,74,70,13));
	outFields->push(HX_("INVALID_VALUE",a9,e8,26,b0));
	outFields->push(HX_("INVALID_OPERATION",5f,b1,c8,29));
	outFields->push(HX_("OUT_OF_MEMORY",18,f2,97,e1));
	outFields->push(HX_("VENDOR",88,91,19,51));
	outFields->push(HX_("VERSION",f8,ba,c5,fc));
	outFields->push(HX_("RENDERER",43,55,61,0c));
	outFields->push(HX_("EXTENSIONS",14,f0,79,7b));
	outFields->push(HX_("DOPPLER_FACTOR",e0,6d,21,56));
	outFields->push(HX_("SPEED_OF_SOUND",5f,3f,54,ba));
	outFields->push(HX_("DOPPLER_VELOCITY",6e,e1,7d,1d));
	outFields->push(HX_("DISTANCE_MODEL",bf,9b,1a,00));
	outFields->push(HX_("INVERSE_DISTANCE",04,89,17,1d));
	outFields->push(HX_("INVERSE_DISTANCE_CLAMPED",7f,1a,32,28));
	outFields->push(HX_("LINEAR_DISTANCE",0f,b8,c7,14));
	outFields->push(HX_("LINEAR_DISTANCE_CLAMPED",8a,cc,88,b2));
	outFields->push(HX_("EXPONENT_DISTANCE",45,4a,ec,c8));
	outFields->push(HX_("EXPONENT_DISTANCE_CLAMPED",c0,84,7b,57));
	outFields->push(HX_("REFRESH",bb,ad,f4,6c));
	outFields->push(HX_("SYNC",5b,82,20,37));
	outFields->push(HX_("MONO_SOURCES",bc,3b,3c,ad));
	outFields->push(HX_("STEREO_SOURCES",d1,0f,99,60));
	outFields->push(HX_("INVALID_DEVICE",3e,84,a5,93));
	outFields->push(HX_("INVALID_CONTEXT",27,a1,3c,df));
	outFields->push(HX_("ATTRIBUTES_SIZE",69,7c,9f,17));
	outFields->push(HX_("ALL_ATTRIBUTES",95,e2,00,04));
	outFields->push(HX_("DEFAULT_DEVICE_SPECIFIER",93,a5,bc,d9));
	outFields->push(HX_("DEVICE_SPECIFIER",f5,a8,61,21));
	outFields->push(HX_("ENUMERATE_ALL_EXT",88,ff,7d,b7));
	outFields->push(HX_("DEFAULT_ALL_DEVICES_SPECIFIER",c0,d6,77,d2));
	outFields->push(HX_("ALL_DEVICES_SPECIFIER",1e,50,c1,f5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OpenALAudioContext_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,NONE),HX_("NONE",b8,da,ca,33)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,FALSE),HX_("FALSE",83,6d,3d,79)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,TRUE),HX_("TRUE",4e,6f,c4,37)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,SOURCE_RELATIVE),HX_("SOURCE_RELATIVE",f0,f3,84,fe)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,CONE_INNER_ANGLE),HX_("CONE_INNER_ANGLE",4e,a1,d7,93)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,CONE_OUTER_ANGLE),HX_("CONE_OUTER_ANGLE",f3,e1,bf,cc)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,PITCH),HX_("PITCH",a0,f3,8e,40)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,POSITION),HX_("POSITION",a9,30,80,24)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,DIRECTION),HX_("DIRECTION",1f,d2,98,0b)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,VELOCITY),HX_("VELOCITY",1d,92,83,78)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,LOOPING),HX_("LOOPING",de,50,51,a0)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,BUFFER),HX_("BUFFER",00,69,17,83)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,GAIN),HX_("GAIN",7f,b8,1f,2f)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,MIN_GAIN),HX_("MIN_GAIN",ac,29,d2,21)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,MAX_GAIN),HX_("MAX_GAIN",5a,0f,b8,d4)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,ORIENTATION),HX_("ORIENTATION",b0,fa,3a,d4)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,SOURCE_STATE),HX_("SOURCE_STATE",4d,e8,1e,ab)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,INITIAL),HX_("INITIAL",64,e4,72,4b)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,PLAYING),HX_("PLAYING",4e,e3,eb,09)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,PAUSED),HX_("PAUSED",ae,ec,06,a2)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,STOPPED),HX_("STOPPED",ed,a5,35,c3)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,BUFFERS_QUEUED),HX_("BUFFERS_QUEUED",5f,78,ce,71)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,BUFFERS_PROCESSED),HX_("BUFFERS_PROCESSED",42,9d,62,ac)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,REFERENCE_DISTANCE),HX_("REFERENCE_DISTANCE",89,d5,ce,9a)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,ROLLOFF_FACTOR),HX_("ROLLOFF_FACTOR",bc,10,98,56)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,CONE_OUTER_GAIN),HX_("CONE_OUTER_GAIN",3f,da,8d,e3)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,MAX_DISTANCE),HX_("MAX_DISTANCE",90,83,bb,a5)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,SEC_OFFSET),HX_("SEC_OFFSET",e1,5d,a3,ac)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,SAMPLE_OFFSET),HX_("SAMPLE_OFFSET",48,82,ac,b4)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,BYTE_OFFSET),HX_("BYTE_OFFSET",2a,df,43,36)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,SOURCE_TYPE),HX_("SOURCE_TYPE",de,ff,00,df)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,STATIC),HX_("STATIC",ae,88,7e,b8)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,STREAMING),HX_("STREAMING",42,38,7b,b1)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,UNDETERMINED),HX_("UNDETERMINED",0a,ed,9d,50)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,FORMAT_MONO8),HX_("FORMAT_MONO8",6d,40,81,7a)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,FORMAT_MONO16),HX_("FORMAT_MONO16",10,19,97,b6)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,FORMAT_STEREO8),HX_("FORMAT_STEREO8",b8,19,58,da)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,FORMAT_STEREO16),HX_("FORMAT_STEREO16",65,61,be,32)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,FREQUENCY),HX_("FREQUENCY",7c,f2,42,b7)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,BITS),HX_("BITS",06,c3,d7,2b)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,CHANNELS),HX_("CHANNELS",50,3a,74,c4)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,SIZE),HX_("SIZE",c1,68,14,37)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,NO_ERROR),HX_("NO_ERROR",ea,b5,7d,2f)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,INVALID_NAME),HX_("INVALID_NAME",f3,7b,59,19)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,INVALID_ENUM),HX_("INVALID_ENUM",a9,74,70,13)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,INVALID_VALUE),HX_("INVALID_VALUE",a9,e8,26,b0)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,INVALID_OPERATION),HX_("INVALID_OPERATION",5f,b1,c8,29)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,OUT_OF_MEMORY),HX_("OUT_OF_MEMORY",18,f2,97,e1)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,VENDOR),HX_("VENDOR",88,91,19,51)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,VERSION),HX_("VERSION",f8,ba,c5,fc)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,RENDERER),HX_("RENDERER",43,55,61,0c)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,EXTENSIONS),HX_("EXTENSIONS",14,f0,79,7b)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,DOPPLER_FACTOR),HX_("DOPPLER_FACTOR",e0,6d,21,56)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,SPEED_OF_SOUND),HX_("SPEED_OF_SOUND",5f,3f,54,ba)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,DOPPLER_VELOCITY),HX_("DOPPLER_VELOCITY",6e,e1,7d,1d)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,DISTANCE_MODEL),HX_("DISTANCE_MODEL",bf,9b,1a,00)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,INVERSE_DISTANCE),HX_("INVERSE_DISTANCE",04,89,17,1d)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,INVERSE_DISTANCE_CLAMPED),HX_("INVERSE_DISTANCE_CLAMPED",7f,1a,32,28)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,LINEAR_DISTANCE),HX_("LINEAR_DISTANCE",0f,b8,c7,14)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,LINEAR_DISTANCE_CLAMPED),HX_("LINEAR_DISTANCE_CLAMPED",8a,cc,88,b2)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,EXPONENT_DISTANCE),HX_("EXPONENT_DISTANCE",45,4a,ec,c8)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,EXPONENT_DISTANCE_CLAMPED),HX_("EXPONENT_DISTANCE_CLAMPED",c0,84,7b,57)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,REFRESH),HX_("REFRESH",bb,ad,f4,6c)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,SYNC),HX_("SYNC",5b,82,20,37)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,MONO_SOURCES),HX_("MONO_SOURCES",bc,3b,3c,ad)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,STEREO_SOURCES),HX_("STEREO_SOURCES",d1,0f,99,60)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,INVALID_DEVICE),HX_("INVALID_DEVICE",3e,84,a5,93)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,INVALID_CONTEXT),HX_("INVALID_CONTEXT",27,a1,3c,df)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,ATTRIBUTES_SIZE),HX_("ATTRIBUTES_SIZE",69,7c,9f,17)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,ALL_ATTRIBUTES),HX_("ALL_ATTRIBUTES",95,e2,00,04)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,DEFAULT_DEVICE_SPECIFIER),HX_("DEFAULT_DEVICE_SPECIFIER",93,a5,bc,d9)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,DEVICE_SPECIFIER),HX_("DEVICE_SPECIFIER",f5,a8,61,21)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,ENUMERATE_ALL_EXT),HX_("ENUMERATE_ALL_EXT",88,ff,7d,b7)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,DEFAULT_ALL_DEVICES_SPECIFIER),HX_("DEFAULT_ALL_DEVICES_SPECIFIER",c0,d6,77,d2)},
	{::hx::fsInt,(int)offsetof(OpenALAudioContext_obj,ALL_DEVICES_SPECIFIER),HX_("ALL_DEVICES_SPECIFIER",1e,50,c1,f5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *OpenALAudioContext_obj_sStaticStorageInfo = 0;
#endif

static ::String OpenALAudioContext_obj_sMemberFields[] = {
	HX_("NONE",b8,da,ca,33),
	HX_("FALSE",83,6d,3d,79),
	HX_("TRUE",4e,6f,c4,37),
	HX_("SOURCE_RELATIVE",f0,f3,84,fe),
	HX_("CONE_INNER_ANGLE",4e,a1,d7,93),
	HX_("CONE_OUTER_ANGLE",f3,e1,bf,cc),
	HX_("PITCH",a0,f3,8e,40),
	HX_("POSITION",a9,30,80,24),
	HX_("DIRECTION",1f,d2,98,0b),
	HX_("VELOCITY",1d,92,83,78),
	HX_("LOOPING",de,50,51,a0),
	HX_("BUFFER",00,69,17,83),
	HX_("GAIN",7f,b8,1f,2f),
	HX_("MIN_GAIN",ac,29,d2,21),
	HX_("MAX_GAIN",5a,0f,b8,d4),
	HX_("ORIENTATION",b0,fa,3a,d4),
	HX_("SOURCE_STATE",4d,e8,1e,ab),
	HX_("INITIAL",64,e4,72,4b),
	HX_("PLAYING",4e,e3,eb,09),
	HX_("PAUSED",ae,ec,06,a2),
	HX_("STOPPED",ed,a5,35,c3),
	HX_("BUFFERS_QUEUED",5f,78,ce,71),
	HX_("BUFFERS_PROCESSED",42,9d,62,ac),
	HX_("REFERENCE_DISTANCE",89,d5,ce,9a),
	HX_("ROLLOFF_FACTOR",bc,10,98,56),
	HX_("CONE_OUTER_GAIN",3f,da,8d,e3),
	HX_("MAX_DISTANCE",90,83,bb,a5),
	HX_("SEC_OFFSET",e1,5d,a3,ac),
	HX_("SAMPLE_OFFSET",48,82,ac,b4),
	HX_("BYTE_OFFSET",2a,df,43,36),
	HX_("SOURCE_TYPE",de,ff,00,df),
	HX_("STATIC",ae,88,7e,b8),
	HX_("STREAMING",42,38,7b,b1),
	HX_("UNDETERMINED",0a,ed,9d,50),
	HX_("FORMAT_MONO8",6d,40,81,7a),
	HX_("FORMAT_MONO16",10,19,97,b6),
	HX_("FORMAT_STEREO8",b8,19,58,da),
	HX_("FORMAT_STEREO16",65,61,be,32),
	HX_("FREQUENCY",7c,f2,42,b7),
	HX_("BITS",06,c3,d7,2b),
	HX_("CHANNELS",50,3a,74,c4),
	HX_("SIZE",c1,68,14,37),
	HX_("NO_ERROR",ea,b5,7d,2f),
	HX_("INVALID_NAME",f3,7b,59,19),
	HX_("INVALID_ENUM",a9,74,70,13),
	HX_("INVALID_VALUE",a9,e8,26,b0),
	HX_("INVALID_OPERATION",5f,b1,c8,29),
	HX_("OUT_OF_MEMORY",18,f2,97,e1),
	HX_("VENDOR",88,91,19,51),
	HX_("VERSION",f8,ba,c5,fc),
	HX_("RENDERER",43,55,61,0c),
	HX_("EXTENSIONS",14,f0,79,7b),
	HX_("DOPPLER_FACTOR",e0,6d,21,56),
	HX_("SPEED_OF_SOUND",5f,3f,54,ba),
	HX_("DOPPLER_VELOCITY",6e,e1,7d,1d),
	HX_("DISTANCE_MODEL",bf,9b,1a,00),
	HX_("INVERSE_DISTANCE",04,89,17,1d),
	HX_("INVERSE_DISTANCE_CLAMPED",7f,1a,32,28),
	HX_("LINEAR_DISTANCE",0f,b8,c7,14),
	HX_("LINEAR_DISTANCE_CLAMPED",8a,cc,88,b2),
	HX_("EXPONENT_DISTANCE",45,4a,ec,c8),
	HX_("EXPONENT_DISTANCE_CLAMPED",c0,84,7b,57),
	HX_("REFRESH",bb,ad,f4,6c),
	HX_("SYNC",5b,82,20,37),
	HX_("MONO_SOURCES",bc,3b,3c,ad),
	HX_("STEREO_SOURCES",d1,0f,99,60),
	HX_("INVALID_DEVICE",3e,84,a5,93),
	HX_("INVALID_CONTEXT",27,a1,3c,df),
	HX_("ATTRIBUTES_SIZE",69,7c,9f,17),
	HX_("ALL_ATTRIBUTES",95,e2,00,04),
	HX_("DEFAULT_DEVICE_SPECIFIER",93,a5,bc,d9),
	HX_("DEVICE_SPECIFIER",f5,a8,61,21),
	HX_("ENUMERATE_ALL_EXT",88,ff,7d,b7),
	HX_("DEFAULT_ALL_DEVICES_SPECIFIER",c0,d6,77,d2),
	HX_("ALL_DEVICES_SPECIFIER",1e,50,c1,f5),
	HX_("bufferData",4a,bf,73,93),
	HX_("buffer3f",d3,29,fe,ac),
	HX_("buffer3i",d6,29,fe,ac),
	HX_("bufferf",66,a3,90,b1),
	HX_("bufferfv",50,56,fe,ac),
	HX_("bufferi",69,a3,90,b1),
	HX_("bufferiv",ed,58,fe,ac),
	HX_("closeDevice",6e,02,c8,2b),
	HX_("createContext",53,6e,ba,01),
	HX_("createBuffer",1c,fd,e9,f2),
	HX_("createSource",f7,f0,86,54),
	HX_("deleteBuffer",8b,e3,2c,37),
	HX_("deleteBuffers",88,36,1a,10),
	HX_("deleteSource",66,d7,c9,98),
	HX_("deleteSources",4d,a2,d2,17),
	HX_("destroyContext",15,84,e3,85),
	HX_("disable",e8,69,58,b1),
	HX_("distanceModel",34,40,e1,d3),
	HX_("dopplerFactor",dd,2d,05,6f),
	HX_("dopplerVelocity",ab,76,cf,06),
	HX_("enable",83,ae,87,f8),
	HX_("genSource",8b,71,07,b5),
	HX_("genSources",88,e8,7b,b1),
	HX_("genBuffer",b0,7d,6a,53),
	HX_("genBuffers",c3,7c,c3,a9),
	HX_("getBoolean",b2,70,60,cd),
	HX_("getBooleanv",84,2b,02,e7),
	HX_("getBuffer3f",89,ec,f1,d2),
	HX_("getBuffer3i",8c,ec,f1,d2),
	HX_("getBufferf",70,29,f2,00),
	HX_("getBufferfv",06,19,f2,d2),
	HX_("getBufferi",73,29,f2,00),
	HX_("getBufferiv",a3,1b,f2,d2),
	HX_("getContextsDevice",90,ee,91,9c),
	HX_("getCurrentContext",ec,b9,7f,99),
	HX_("getDouble",47,b4,21,af),
	HX_("getDoublev",4f,0a,5c,8e),
	HX_("getEnumValue",3a,9d,5d,37),
	HX_("getError",52,db,00,d3),
	HX_("getErrorString",c3,c1,3b,87),
	HX_("getFloat",26,d5,6d,62),
	HX_("getFloatv",90,ac,ac,bd),
	HX_("getInteger",c8,43,7d,66),
	HX_("getIntegerv",ae,0b,1e,47),
	HX_("getListener3f",7d,8e,7c,85),
	HX_("getListener3i",80,8e,7c,85),
	HX_("getListenerf",fc,01,e5,02),
	HX_("getListenerfv",fa,ba,7c,85),
	HX_("getListeneri",ff,01,e5,02),
	HX_("getListeneriv",97,bd,7c,85),
	HX_("getProcAddress",c8,e3,a1,89),
	HX_("getSource3f",24,cd,97,8c),
	HX_("getSourcef",35,95,aa,08),
	HX_("getSource3i",27,cd,97,8c),
	HX_("getSourcefv",a1,f9,97,8c),
	HX_("getSourcei",38,95,aa,08),
	HX_("getSourceiv",3e,fc,97,8c),
	HX_("getString",07,b2,86,8d),
	HX_("isBuffer",8a,58,fe,28),
	HX_("isEnabled",b7,81,2f,82),
	HX_("isExtensionPresent",46,f9,2a,b4),
	HX_("isSource",65,4c,9b,8a),
	HX_("listener3f",47,32,0a,29),
	HX_("listener3i",4a,32,0a,29),
	HX_("listenerf",72,65,8e,f3),
	HX_("listenerfv",c4,5e,0a,29),
	HX_("listeneri",75,65,8e,f3),
	HX_("listeneriv",61,61,0a,29),
	HX_("makeContextCurrent",98,6c,ce,94),
	HX_("openDevice",00,48,14,bf),
	HX_("pauseDevice",2c,c4,88,65),
	HX_("processContext",40,d7,d5,cb),
	HX_("resumeDevice",23,ba,46,51),
	HX_("source3f",6e,0a,a4,66),
	HX_("source3i",71,0a,a4,66),
	HX_("sourcef",2b,0f,49,b9),
	HX_("sourcefv",eb,36,a4,66),
	HX_("sourcei",2e,0f,49,b9),
	HX_("sourceiv",88,39,a4,66),
	HX_("sourcePlay",6f,14,be,72),
	HX_("sourcePlayv",27,cd,93,f3),
	HX_("sourceStop",7d,d6,bf,74),
	HX_("sourceStopv",59,d7,1b,b3),
	HX_("sourceRewind",36,e5,26,01),
	HX_("sourceRewindv",80,aa,e1,00),
	HX_("sourcePause",1b,9c,5d,ec),
	HX_("sourcePausev",fb,fb,8a,e5),
	HX_("sourceQueueBuffer",56,70,65,56),
	HX_("sourceQueueBuffers",5d,db,5c,42),
	HX_("sourceUnqueueBuffer",dd,29,95,2e),
	HX_("sourceUnqueueBuffers",f6,77,ef,93),
	HX_("speedOfSound",71,e7,21,0a),
	HX_("suspendContext",d3,b5,bc,fe),
	::String(null()) };

::hx::Class OpenALAudioContext_obj::__mClass;

void OpenALAudioContext_obj::__register()
{
	OpenALAudioContext_obj _hx_dummy;
	OpenALAudioContext_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.media.OpenALAudioContext",71,96,c5,05);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OpenALAudioContext_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OpenALAudioContext_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OpenALAudioContext_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OpenALAudioContext_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace media
