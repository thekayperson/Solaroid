#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_media_openal_AL
#include <lime/media/openal/AL.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_238_removeDirectFilter,"lime.media.openal.AL","removeDirectFilter",0x2587a552,"lime.media.openal.AL.removeDirectFilter","lime/media/openal/AL.hx",238,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_245_removeSend,"lime.media.openal.AL","removeSend",0xba6595d9,"lime.media.openal.AL.removeSend","lime/media/openal/AL.hx",245,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_252_auxf,"lime.media.openal.AL","auxf",0xb166a14f,"lime.media.openal.AL.auxf","lime/media/openal/AL.hx",252,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_265_auxfv,"lime.media.openal.AL","auxfv",0x88668447,"lime.media.openal.AL.auxfv","lime/media/openal/AL.hx",265,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_272_auxi,"lime.media.openal.AL","auxi",0xb166a152,"lime.media.openal.AL.auxi","lime/media/openal/AL.hx",272,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_285_auxiv,"lime.media.openal.AL","auxiv",0x886686e4,"lime.media.openal.AL.auxiv","lime/media/openal/AL.hx",285,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_292_bufferData,"lime.media.openal.AL","bufferData",0x84698d77,"lime.media.openal.AL.bufferData","lime/media/openal/AL.hx",292,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_299_buffer3f,"lime.media.openal.AL","buffer3f",0xa65222c0,"lime.media.openal.AL.buffer3f","lime/media/openal/AL.hx",299,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_306_buffer3i,"lime.media.openal.AL","buffer3i",0xa65222c3,"lime.media.openal.AL.buffer3i","lime/media/openal/AL.hx",306,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_313_bufferf,"lime.media.openal.AL","bufferf",0x1e97e719,"lime.media.openal.AL.bufferf","lime/media/openal/AL.hx",313,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_326_bufferfv,"lime.media.openal.AL","bufferfv",0xa6524f3d,"lime.media.openal.AL.bufferfv","lime/media/openal/AL.hx",326,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_333_bufferi,"lime.media.openal.AL","bufferi",0x1e97e71c,"lime.media.openal.AL.bufferi","lime/media/openal/AL.hx",333,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_346_bufferiv,"lime.media.openal.AL","bufferiv",0xa65251da,"lime.media.openal.AL.bufferiv","lime/media/openal/AL.hx",346,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_353_createAux,"lime.media.openal.AL","createAux",0x79fdaddb,"lime.media.openal.AL.createAux","lime/media/openal/AL.hx",353,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_362_createBuffer,"lime.media.openal.AL","createBuffer",0x67917089,"lime.media.openal.AL.createBuffer","lime/media/openal/AL.hx",362,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_371_createEffect,"lime.media.openal.AL","createEffect",0xf7a00e1a,"lime.media.openal.AL.createEffect","lime/media/openal/AL.hx",371,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_380_createFilter,"lime.media.openal.AL","createFilter",0x1c31d341,"lime.media.openal.AL.createFilter","lime/media/openal/AL.hx",380,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_389_createSource,"lime.media.openal.AL","createSource",0xc92e6464,"lime.media.openal.AL.createSource","lime/media/openal/AL.hx",389,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_398_deleteBuffer,"lime.media.openal.AL","deleteBuffer",0xabd456f8,"lime.media.openal.AL.deleteBuffer","lime/media/openal/AL.hx",398,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_411_deleteBuffers,"lime.media.openal.AL","deleteBuffers",0xadf7c27b,"lime.media.openal.AL.deleteBuffers","lime/media/openal/AL.hx",411,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_418_deleteSource,"lime.media.openal.AL","deleteSource",0x0d714ad3,"lime.media.openal.AL.deleteSource","lime/media/openal/AL.hx",418,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_431_deleteSources,"lime.media.openal.AL","deleteSources",0xb5b02e40,"lime.media.openal.AL.deleteSources","lime/media/openal/AL.hx",431,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_438_disable,"lime.media.openal.AL","disable",0x1e5fad9b,"lime.media.openal.AL.disable","lime/media/openal/AL.hx",438,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_445_distanceModel,"lime.media.openal.AL","distanceModel",0x71becc27,"lime.media.openal.AL.distanceModel","lime/media/openal/AL.hx",445,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_452_dopplerFactor,"lime.media.openal.AL","dopplerFactor",0x0ce2b9d0,"lime.media.openal.AL.dopplerFactor","lime/media/openal/AL.hx",452,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_459_dopplerVelocity,"lime.media.openal.AL","dopplerVelocity",0x001e255e,"lime.media.openal.AL.dopplerVelocity","lime/media/openal/AL.hx",459,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_466_effectf,"lime.media.openal.AL","effectf",0x9b532868,"lime.media.openal.AL.effectf","lime/media/openal/AL.hx",466,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_479_effectfv,"lime.media.openal.AL","effectfv",0x4d70330e,"lime.media.openal.AL.effectfv","lime/media/openal/AL.hx",479,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_486_effecti,"lime.media.openal.AL","effecti",0x9b53286b,"lime.media.openal.AL.effecti","lime/media/openal/AL.hx",486,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_499_effectiv,"lime.media.openal.AL","effectiv",0x4d7035ab,"lime.media.openal.AL.effectiv","lime/media/openal/AL.hx",499,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_506_enable,"lime.media.openal.AL","enable",0x53b5a230,"lime.media.openal.AL.enable","lime/media/openal/AL.hx",506,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_513_genSource,"lime.media.openal.AL","genSource",0xe52d47fe,"lime.media.openal.AL.genSource","lime/media/openal/AL.hx",513,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_520_genSources,"lime.media.openal.AL","genSources",0xa271b6b5,"lime.media.openal.AL.genSources","lime/media/openal/AL.hx",520,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_540_genBuffer,"lime.media.openal.AL","genBuffer",0x83905423,"lime.media.openal.AL.genBuffer","lime/media/openal/AL.hx",540,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_547_genBuffers,"lime.media.openal.AL","genBuffers",0x9ab94af0,"lime.media.openal.AL.genBuffers","lime/media/openal/AL.hx",547,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_567_getBoolean,"lime.media.openal.AL","getBoolean",0xbe563edf,"lime.media.openal.AL.getBoolean","lime/media/openal/AL.hx",567,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_574_getBooleanv,"lime.media.openal.AL","getBooleanv",0xcd20c4b7,"lime.media.openal.AL.getBooleanv","lime/media/openal/AL.hx",574,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_592_getBuffer3f,"lime.media.openal.AL","getBuffer3f",0xb91085bc,"lime.media.openal.AL.getBuffer3f","lime/media/openal/AL.hx",592,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_610_getBuffer3i,"lime.media.openal.AL","getBuffer3i",0xb91085bf,"lime.media.openal.AL.getBuffer3i","lime/media/openal/AL.hx",610,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_630_getBufferf,"lime.media.openal.AL","getBufferf",0xf1e7f79d,"lime.media.openal.AL.getBufferf","lime/media/openal/AL.hx",630,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_637_getBufferfv,"lime.media.openal.AL","getBufferfv",0xb910b239,"lime.media.openal.AL.getBufferfv","lime/media/openal/AL.hx",637,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_657_getBufferi,"lime.media.openal.AL","getBufferi",0xf1e7f7a0,"lime.media.openal.AL.getBufferi","lime/media/openal/AL.hx",657,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_664_getBufferiv,"lime.media.openal.AL","getBufferiv",0xb910b4d6,"lime.media.openal.AL.getBufferiv","lime/media/openal/AL.hx",664,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_684_getDouble,"lime.media.openal.AL","getDouble",0xdf478aba,"lime.media.openal.AL.getDouble","lime/media/openal/AL.hx",684,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_691_getDoublev,"lime.media.openal.AL","getDoublev",0x7f51d87c,"lime.media.openal.AL.getDoublev","lime/media/openal/AL.hx",691,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_711_getEnumValue,"lime.media.openal.AL","getEnumValue",0xac0510a7,"lime.media.openal.AL.getEnumValue","lime/media/openal/AL.hx",711,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_720_getError,"lime.media.openal.AL","getError",0xcc54d43f,"lime.media.openal.AL.getError","lime/media/openal/AL.hx",720,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_728_getErrorString,"lime.media.openal.AL","getErrorString",0x0b38aa70,"lime.media.openal.AL.getErrorString","lime/media/openal/AL.hx",728,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_742_getFilteri,"lime.media.openal.AL","getFilteri",0x499df5e8,"lime.media.openal.AL.getFilteri","lime/media/openal/AL.hx",742,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_751_getFloat,"lime.media.openal.AL","getFloat",0x5bc1ce13,"lime.media.openal.AL.getFloat","lime/media/openal/AL.hx",751,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_758_getFloatv,"lime.media.openal.AL","getFloatv",0xedd28303,"lime.media.openal.AL.getFloatv","lime/media/openal/AL.hx",758,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_778_getInteger,"lime.media.openal.AL","getInteger",0x577311f5,"lime.media.openal.AL.getInteger","lime/media/openal/AL.hx",778,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_785_getIntegerv,"lime.media.openal.AL","getIntegerv",0x2d3ca4e1,"lime.media.openal.AL.getIntegerv","lime/media/openal/AL.hx",785,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_803_getListener3f,"lime.media.openal.AL","getListener3f",0x235a1a70,"lime.media.openal.AL.getListener3f","lime/media/openal/AL.hx",803,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_821_getListener3i,"lime.media.openal.AL","getListener3i",0x235a1a73,"lime.media.openal.AL.getListener3i","lime/media/openal/AL.hx",821,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_841_getListenerf,"lime.media.openal.AL","getListenerf",0x778c7569,"lime.media.openal.AL.getListenerf","lime/media/openal/AL.hx",841,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_848_getListenerfv,"lime.media.openal.AL","getListenerfv",0x235a46ed,"lime.media.openal.AL.getListenerfv","lime/media/openal/AL.hx",848,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_868_getListeneri,"lime.media.openal.AL","getListeneri",0x778c756c,"lime.media.openal.AL.getListeneri","lime/media/openal/AL.hx",868,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_875_getListeneriv,"lime.media.openal.AL","getListeneriv",0x235a498a,"lime.media.openal.AL.getListeneriv","lime/media/openal/AL.hx",875,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_895_getParameter,"lime.media.openal.AL","getParameter",0xccae45a0,"lime.media.openal.AL.getParameter","lime/media/openal/AL.hx",895,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_901_getProcAddress,"lime.media.openal.AL","getProcAddress",0x0d9ecc75,"lime.media.openal.AL.getProcAddress","lime/media/openal/AL.hx",901,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_908_getSource3f,"lime.media.openal.AL","getSource3f",0x72b66657,"lime.media.openal.AL.getSource3f","lime/media/openal/AL.hx",908,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_928_getSourcef,"lime.media.openal.AL","getSourcef",0xf9a06362,"lime.media.openal.AL.getSourcef","lime/media/openal/AL.hx",928,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_935_getSource3i,"lime.media.openal.AL","getSource3i",0x72b6665a,"lime.media.openal.AL.getSource3i","lime/media/openal/AL.hx",935,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_953_getSourcefv,"lime.media.openal.AL","getSourcefv",0x72b692d4,"lime.media.openal.AL.getSourcefv","lime/media/openal/AL.hx",953,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_973_getSourcei,"lime.media.openal.AL","getSourcei",0xf9a06365,"lime.media.openal.AL.getSourcei","lime/media/openal/AL.hx",973,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_980_getSourceiv,"lime.media.openal.AL","getSourceiv",0x72b69571,"lime.media.openal.AL.getSourceiv","lime/media/openal/AL.hx",980,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_998_getString,"lime.media.openal.AL","getString",0xbdac887a,"lime.media.openal.AL.getString","lime/media/openal/AL.hx",998,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_1013_isBuffer,"lime.media.openal.AL","isBuffer",0x22525177,"lime.media.openal.AL.isBuffer","lime/media/openal/AL.hx",1013,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_1022_isEnabled,"lime.media.openal.AL","isEnabled",0xb255582a,"lime.media.openal.AL.isEnabled","lime/media/openal/AL.hx",1022,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_1031_isExtensionPresent,"lime.media.openal.AL","isExtensionPresent",0x790e3c73,"lime.media.openal.AL.isExtensionPresent","lime/media/openal/AL.hx",1031,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_1040_isAux,"lime.media.openal.AL","isAux",0x221f0c2d,"lime.media.openal.AL.isAux","lime/media/openal/AL.hx",1040,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_1049_isEffect,"lime.media.openal.AL","isEffect",0xb260ef08,"lime.media.openal.AL.isEffect","lime/media/openal/AL.hx",1049,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_1058_isFilter,"lime.media.openal.AL","isFilter",0xd6f2b42f,"lime.media.openal.AL.isFilter","lime/media/openal/AL.hx",1058,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_1067_isSource,"lime.media.openal.AL","isSource",0x83ef4552,"lime.media.openal.AL.isSource","lime/media/openal/AL.hx",1067,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_1076_listener3f,"lime.media.openal.AL","listener3f",0x1a000074,"lime.media.openal.AL.listener3f","lime/media/openal/AL.hx",1076,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_1083_listener3i,"lime.media.openal.AL","listener3i",0x1a000077,"lime.media.openal.AL.listener3i","lime/media/openal/AL.hx",1083,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_1090_listenerf,"lime.media.openal.AL","listenerf",0x23b43be5,"lime.media.openal.AL.listenerf","lime/media/openal/AL.hx",1090,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_1103_listenerfv,"lime.media.openal.AL","listenerfv",0x1a002cf1,"lime.media.openal.AL.listenerfv","lime/media/openal/AL.hx",1103,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_1110_listeneri,"lime.media.openal.AL","listeneri",0x23b43be8,"lime.media.openal.AL.listeneri","lime/media/openal/AL.hx",1110,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_1123_listeneriv,"lime.media.openal.AL","listeneriv",0x1a002f8e,"lime.media.openal.AL.listeneriv","lime/media/openal/AL.hx",1123,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_1130_source3f,"lime.media.openal.AL","source3f",0x5ff8035b,"lime.media.openal.AL.source3f","lime/media/openal/AL.hx",1130,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_1137_source3i,"lime.media.openal.AL","source3i",0x5ff8035e,"lime.media.openal.AL.source3i","lime/media/openal/AL.hx",1137,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_1144_sourcef,"lime.media.openal.AL","sourcef",0x265052de,"lime.media.openal.AL.sourcef","lime/media/openal/AL.hx",1144,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_1157_sourcefv,"lime.media.openal.AL","sourcefv",0x5ff82fd8,"lime.media.openal.AL.sourcefv","lime/media/openal/AL.hx",1157,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_1164_sourcei,"lime.media.openal.AL","sourcei",0x265052e1,"lime.media.openal.AL.sourcei","lime/media/openal/AL.hx",1164,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_1171_filteri,"lime.media.openal.AL","filteri",0x764de564,"lime.media.openal.AL.filteri","lime/media/openal/AL.hx",1171,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_1178_filterf,"lime.media.openal.AL","filterf",0x764de561,"lime.media.openal.AL.filterf","lime/media/openal/AL.hx",1178,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_1191_sourceiv,"lime.media.openal.AL","sourceiv",0x5ff83275,"lime.media.openal.AL.sourceiv","lime/media/openal/AL.hx",1191,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_1198_sourcePlay,"lime.media.openal.AL","sourcePlay",0x63b3e29c,"lime.media.openal.AL.sourcePlay","lime/media/openal/AL.hx",1198,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_1211_sourcePlayv,"lime.media.openal.AL","sourcePlayv",0xd9b2665a,"lime.media.openal.AL.sourcePlayv","lime/media/openal/AL.hx",1211,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_1218_sourceStop,"lime.media.openal.AL","sourceStop",0x65b5a4aa,"lime.media.openal.AL.sourceStop","lime/media/openal/AL.hx",1218,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_1231_sourceStopv,"lime.media.openal.AL","sourceStopv",0x993a708c,"lime.media.openal.AL.sourceStopv","lime/media/openal/AL.hx",1231,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_1238_sourceRewind,"lime.media.openal.AL","sourceRewind",0x75ce58a3,"lime.media.openal.AL.sourceRewind","lime/media/openal/AL.hx",1238,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_1251_sourceRewindv,"lime.media.openal.AL","sourceRewindv",0x9ebf3673,"lime.media.openal.AL.sourceRewindv","lime/media/openal/AL.hx",1251,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_1258_sourcePause,"lime.media.openal.AL","sourcePause",0xd27c354e,"lime.media.openal.AL.sourcePause","lime/media/openal/AL.hx",1258,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_1271_sourcePausev,"lime.media.openal.AL","sourcePausev",0x5a326f68,"lime.media.openal.AL.sourcePausev","lime/media/openal/AL.hx",1271,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_1276_sourceQueueBuffer,"lime.media.openal.AL","sourceQueueBuffer",0x43c371c9,"lime.media.openal.AL.sourceQueueBuffer","lime/media/openal/AL.hx",1276,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_1297_sourceQueueBuffers,"lime.media.openal.AL","sourceQueueBuffers",0x07401e8a,"lime.media.openal.AL.sourceQueueBuffers","lime/media/openal/AL.hx",1297,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_1302_sourceUnqueueBuffer,"lime.media.openal.AL","sourceUnqueueBuffer",0xb08cae10,"lime.media.openal.AL.sourceUnqueueBuffer","lime/media/openal/AL.hx",1302,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_1312_sourceUnqueueBuffers,"lime.media.openal.AL","sourceUnqueueBuffers",0xca8ba063,"lime.media.openal.AL.sourceUnqueueBuffers","lime/media/openal/AL.hx",1312,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_1332_speedOfSound,"lime.media.openal.AL","speedOfSound",0x7ec95ade,"lime.media.openal.AL.speedOfSound","lime/media/openal/AL.hx",1332,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_15_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",15,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_16_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",16,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_17_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",17,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_18_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",18,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_19_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",19,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_20_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",20,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_21_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",21,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_22_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",22,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_23_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",23,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_24_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",24,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_25_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",25,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_26_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",26,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_27_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",27,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_28_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",28,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_29_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",29,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_30_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",30,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_31_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",31,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_32_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",32,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_33_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",33,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_34_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",34,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_35_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",35,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_36_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",36,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_37_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",37,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_38_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",38,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_39_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",39,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_40_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",40,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_41_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",41,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_42_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",42,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_43_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",43,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_44_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",44,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_45_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",45,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_46_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",46,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_47_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",47,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_48_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",48,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_49_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",49,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_50_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",50,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_51_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",51,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_52_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",52,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_53_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",53,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_54_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",54,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_55_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",55,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_56_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",56,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_57_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",57,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_58_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",58,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_59_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",59,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_60_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",60,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_61_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",61,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_62_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",62,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_63_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",63,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_64_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",64,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_65_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",65,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_66_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",66,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_67_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",67,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_68_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",68,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_69_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",69,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_70_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",70,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_71_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",71,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_72_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",72,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_73_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",73,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_74_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",74,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_75_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",75,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_76_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",76,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_78_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",78,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_80_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",80,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_81_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",81,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_82_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",82,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_83_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",83,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_84_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",84,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_85_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",85,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_86_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",86,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_87_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",87,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_90_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",90,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_91_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",91,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_92_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",92,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_93_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",93,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_94_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",94,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_95_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",95,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_96_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",96,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_97_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",97,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_98_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",98,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_99_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",99,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_100_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",100,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_101_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",101,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_102_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",102,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_104_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",104,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_105_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",105,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_106_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",106,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_107_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",107,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_108_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",108,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_109_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",109,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_110_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",110,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_111_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",111,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_112_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",112,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_113_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",113,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_114_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",114,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_115_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",115,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_116_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",116,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_117_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",117,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_118_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",118,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_119_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",119,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_120_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",120,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_121_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",121,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_122_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",122,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_123_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",123,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_124_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",124,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_125_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",125,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_126_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",126,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_128_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",128,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_129_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",129,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_130_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",130,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_131_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",131,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_132_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",132,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_133_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",133,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_135_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",135,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_136_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",136,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_137_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",137,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_138_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",138,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_139_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",139,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_141_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",141,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_142_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",142,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_143_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",143,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_144_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",144,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_145_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",145,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_147_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",147,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_148_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",148,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_149_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",149,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_150_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",150,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_151_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",151,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_152_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",152,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_154_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",154,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_155_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",155,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_156_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",156,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_158_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",158,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_159_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",159,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_160_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",160,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_161_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",161,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_162_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",162,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_163_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",163,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_165_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",165,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_166_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",166,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_168_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",168,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_169_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",169,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_170_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",170,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_172_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",172,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_173_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",173,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_174_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",174,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_175_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",175,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_177_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",177,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_179_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",179,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_180_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",180,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_181_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",181,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_182_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",182,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_183_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",183,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_184_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",184,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_185_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",185,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_186_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",186,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_187_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",187,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_188_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",188,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_190_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",190,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_191_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",191,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_192_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",192,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_194_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",194,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_195_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",195,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_196_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",196,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_197_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",197,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_198_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",198,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_199_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",199,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_200_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",200,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_201_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",201,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_202_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",202,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_203_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",203,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_204_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",204,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_205_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",205,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_206_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",206,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_207_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",207,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_209_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",209,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_210_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",210,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_211_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",211,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_216_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",216,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_217_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",217,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_219_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",219,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_220_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",220,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_222_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",222,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_223_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",223,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_224_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",224,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_226_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",226,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_227_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",227,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_228_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",228,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_230_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",230,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_231_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",231,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_232_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",232,0x932ea25e)
HX_LOCAL_STACK_FRAME(_hx_pos_87306d7050ce8f43_233_boot,"lime.media.openal.AL","boot",0xb20b429f,"lime.media.openal.AL.boot","lime/media/openal/AL.hx",233,0x932ea25e)
namespace lime{
namespace media{
namespace openal{

void AL_obj::__construct() { }

Dynamic AL_obj::__CreateEmpty() { return new AL_obj; }

void *AL_obj::_hx_vtable = 0;

Dynamic AL_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AL_obj > _hx_result = new AL_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AL_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2695cb8f;
}

int AL_obj::NONE;

int AL_obj::FALSE;

int AL_obj::TRUE;

int AL_obj::SOURCE_RELATIVE;

int AL_obj::CONE_INNER_ANGLE;

int AL_obj::CONE_OUTER_ANGLE;

int AL_obj::PITCH;

int AL_obj::POSITION;

int AL_obj::DIRECTION;

int AL_obj::VELOCITY;

int AL_obj::LOOPING;

int AL_obj::BUFFER;

int AL_obj::GAIN;

int AL_obj::MIN_GAIN;

int AL_obj::MAX_GAIN;

int AL_obj::ORIENTATION;

int AL_obj::SOURCE_STATE;

int AL_obj::INITIAL;

int AL_obj::PLAYING;

int AL_obj::PAUSED;

int AL_obj::STOPPED;

int AL_obj::BUFFERS_QUEUED;

int AL_obj::BUFFERS_PROCESSED;

int AL_obj::REFERENCE_DISTANCE;

int AL_obj::ROLLOFF_FACTOR;

int AL_obj::CONE_OUTER_GAIN;

int AL_obj::MAX_DISTANCE;

int AL_obj::SEC_OFFSET;

int AL_obj::SAMPLE_OFFSET;

int AL_obj::BYTE_OFFSET;

int AL_obj::SOURCE_TYPE;

int AL_obj::STATIC;

int AL_obj::STREAMING;

int AL_obj::UNDETERMINED;

int AL_obj::FORMAT_MONO8;

int AL_obj::FORMAT_MONO16;

int AL_obj::FORMAT_STEREO8;

int AL_obj::FORMAT_STEREO16;

int AL_obj::FREQUENCY;

int AL_obj::BITS;

int AL_obj::CHANNELS;

int AL_obj::SIZE;

int AL_obj::NO_ERROR;

int AL_obj::INVALID_NAME;

int AL_obj::INVALID_ENUM;

int AL_obj::INVALID_VALUE;

int AL_obj::INVALID_OPERATION;

int AL_obj::OUT_OF_MEMORY;

int AL_obj::VENDOR;

int AL_obj::VERSION;

int AL_obj::RENDERER;

int AL_obj::EXTENSIONS;

int AL_obj::DOPPLER_FACTOR;

int AL_obj::SPEED_OF_SOUND;

int AL_obj::DOPPLER_VELOCITY;

int AL_obj::DISTANCE_MODEL;

int AL_obj::INVERSE_DISTANCE;

int AL_obj::INVERSE_DISTANCE_CLAMPED;

int AL_obj::LINEAR_DISTANCE;

int AL_obj::LINEAR_DISTANCE_CLAMPED;

int AL_obj::EXPONENT_DISTANCE;

int AL_obj::EXPONENT_DISTANCE_CLAMPED;

int AL_obj::METERS_PER_UNIT;

int AL_obj::DIRECT_FILTER;

int AL_obj::AUXILIARY_SEND_FILTER;

int AL_obj::AIR_ABSORPTION_FACTOR;

int AL_obj::ROOM_ROLLOFF_FACTOR;

int AL_obj::CONE_OUTER_GAINHF;

int AL_obj::DIRECT_FILTER_GAINHF_AUTO;

int AL_obj::AUXILIARY_SEND_FILTER_GAIN_AUTO;

int AL_obj::AUXILIARY_SEND_FILTER_GAINHF_AUTO;

int AL_obj::REVERB_DENSITY;

int AL_obj::REVERB_DIFFUSION;

int AL_obj::REVERB_GAIN;

int AL_obj::REVERB_GAINHF;

int AL_obj::REVERB_DECAY_TIME;

int AL_obj::REVERB_DECAY_HFRATIO;

int AL_obj::REVERB_REFLECTIONS_GAIN;

int AL_obj::REVERB_REFLECTIONS_DELAY;

int AL_obj::REVERB_LATE_REVERB_GAIN;

int AL_obj::REVERB_LATE_REVERB_DELAY;

int AL_obj::REVERB_AIR_ABSORPTION_GAINHF;

int AL_obj::REVERB_ROOM_ROLLOFF_FACTOR;

int AL_obj::REVERB_DECAY_HFLIMIT;

int AL_obj::EAXREVERB_DENSITY;

int AL_obj::EAXREVERB_DIFFUSION;

int AL_obj::EAXREVERB_GAIN;

int AL_obj::EAXREVERB_GAINHF;

int AL_obj::EAXREVERB_GAINLF;

int AL_obj::EAXREVERB_DECAY_TIME;

int AL_obj::EAXREVERB_DECAY_HFRATIO;

int AL_obj::EAXREVERB_DECAY_LFRATIO;

int AL_obj::EAXREVERB_REFLECTIONS_GAIN;

int AL_obj::EAXREVERB_REFLECTIONS_DELAY;

int AL_obj::EAXREVERB_REFLECTIONS_PAN;

int AL_obj::EAXREVERB_LATE_REVERB_GAIN;

int AL_obj::EAXREVERB_LATE_REVERB_DELAY;

int AL_obj::EAXREVERB_LATE_REVERB_PAN;

int AL_obj::EAXREVERB_ECHO_TIME;

int AL_obj::EAXREVERB_ECHO_DEPTH;

int AL_obj::EAXREVERB_MODULATION_TIME;

int AL_obj::EAXREVERB_MODULATION_DEPTH;

int AL_obj::EAXREVERB_AIR_ABSORPTION_GAINHF;

int AL_obj::EAXREVERB_HFREFERENCE;

int AL_obj::EAXREVERB_LFREFERENCE;

int AL_obj::EAXREVERB_ROOM_ROLLOFF_FACTOR;

int AL_obj::EAXREVERB_DECAY_HFLIMIT;

int AL_obj::CHORUS_WAVEFORM;

int AL_obj::CHORUS_PHASE;

int AL_obj::CHORUS_RATE;

int AL_obj::CHORUS_DEPTH;

int AL_obj::CHORUS_FEEDBACK;

int AL_obj::CHORUS_DELAY;

int AL_obj::DISTORTION_EDGE;

int AL_obj::DISTORTION_GAIN;

int AL_obj::DISTORTION_LOWPASS_CUTOFF;

int AL_obj::DISTORTION_EQCENTER;

int AL_obj::DISTORTION_EQBANDWIDTH;

int AL_obj::ECHO_DELAY;

int AL_obj::ECHO_LRDELAY;

int AL_obj::ECHO_DAMPING;

int AL_obj::ECHO_FEEDBACK;

int AL_obj::ECHO_SPREAD;

int AL_obj::FLANGER_WAVEFORM;

int AL_obj::FLANGER_PHASE;

int AL_obj::FLANGER_RATE;

int AL_obj::FLANGER_DEPTH;

int AL_obj::FLANGER_FEEDBACK;

int AL_obj::FLANGER_DELAY;

int AL_obj::FREQUENCY_SHIFTER_FREQUENCY;

int AL_obj::FREQUENCY_SHIFTER_LEFT_DIRECTION;

int AL_obj::FREQUENCY_SHIFTER_RIGHT_DIRECTION;

int AL_obj::VOCAL_MORPHER_PHONEMEA;

int AL_obj::VOCAL_MORPHER_PHONEMEA_COARSE_TUNING;

int AL_obj::VOCAL_MORPHER_PHONEMEB;

int AL_obj::VOCAL_MORPHER_PHONEMEB_COARSE_TUNING;

int AL_obj::VOCAL_MORPHER_WAVEFORM;

int AL_obj::VOCAL_MORPHER_RATE;

int AL_obj::PITCH_SHIFTER_COARSE_TUNE;

int AL_obj::PITCH_SHIFTER_FINE_TUNE;

int AL_obj::RING_MODULATOR_FREQUENCY;

int AL_obj::RING_MODULATOR_HIGHPASS_CUTOFF;

int AL_obj::RING_MODULATOR_WAVEFORM;

int AL_obj::AUTOWAH_ATTACK_TIME;

int AL_obj::AUTOWAH_RELEASE_TIME;

int AL_obj::AUTOWAH_RESONANCE;

int AL_obj::AUTOWAH_PEAK_GAIN;

int AL_obj::COMPRESSOR_ONOFF;

int AL_obj::EQUALIZER_LOW_GAIN;

int AL_obj::EQUALIZER_LOW_CUTOFF;

int AL_obj::EQUALIZER_MID1_GAIN;

int AL_obj::EQUALIZER_MID1_CENTER;

int AL_obj::EQUALIZER_MID1_WIDTH;

int AL_obj::EQUALIZER_MID2_GAIN;

int AL_obj::EQUALIZER_MID2_CENTER;

int AL_obj::EQUALIZER_MID2_WIDTH;

int AL_obj::EQUALIZER_HIGH_GAIN;

int AL_obj::EQUALIZER_HIGH_CUTOFF;

int AL_obj::EFFECT_FIRST_PARAMETER;

int AL_obj::EFFECT_LAST_PARAMETER;

int AL_obj::EFFECT_TYPE;

int AL_obj::EFFECT_NULL;

int AL_obj::EFFECT_EAXREVERB;

int AL_obj::EFFECT_REVERB;

int AL_obj::EFFECT_CHORUS;

int AL_obj::EFFECT_DISTORTION;

int AL_obj::EFFECT_ECHO;

int AL_obj::EFFECT_FLANGER;

int AL_obj::EFFECT_FREQUENCY_SHIFTER;

int AL_obj::EFFECT_VOCAL_MORPHER;

int AL_obj::EFFECT_PITCH_SHIFTER;

int AL_obj::EFFECT_RING_MODULATOR;

int AL_obj::FFECT_AUTOWAH;

int AL_obj::EFFECT_COMPRESSOR;

int AL_obj::EFFECT_EQUALIZER;

int AL_obj::EFFECTSLOT_EFFECT;

int AL_obj::EFFECTSLOT_GAIN;

int AL_obj::EFFECTSLOT_AUXILIARY_SEND_AUTO;

int AL_obj::LOWPASS_GAIN;

int AL_obj::LOWPASS_GAINHF;

int AL_obj::HIGHPASS_GAIN;

int AL_obj::HIGHPASS_GAINLF;

int AL_obj::BANDPASS_GAIN;

int AL_obj::BANDPASS_GAINLF;

int AL_obj::BANDPASS_GAINHF;

int AL_obj::FILTER_FIRST_PARAMETER;

int AL_obj::FILTER_LAST_PARAMETER;

int AL_obj::FILTER_TYPE;

int AL_obj::FILTER_NULL;

int AL_obj::FILTER_LOWPASS;

int AL_obj::FILTER_HIGHPASS;

int AL_obj::FILTER_BANDPASS;

void AL_obj::removeDirectFilter( ::Dynamic source){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_238_removeDirectFilter)
            	HX_STACK_ARG(source,"source")
HXLINE( 238)
HXDLIN( 238)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_remove_direct_filter(::hx::DynamicPtr(source));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,removeDirectFilter,(void))

void AL_obj::removeSend( ::Dynamic source,int index){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_245_removeSend)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(index,"index")
HXLINE( 245)
HXDLIN( 245)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_remove_send(::hx::DynamicPtr(source),index);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,removeSend,(void))

void AL_obj::auxf( ::Dynamic aux,int param,Float value){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_252_auxf)
            	HX_STACK_ARG(aux,"aux")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(value,"value")
HXLINE( 252)
HXDLIN( 252)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_auxf(::hx::DynamicPtr(aux),param,( (float)(value) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,auxf,(void))

void AL_obj::auxfv( ::Dynamic aux,int param,::Array< Float > values){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_265_auxfv)
            	HX_STACK_ARG(aux,"aux")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(values,"values")
HXLINE( 265)
HXDLIN( 265)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_auxfv(::hx::DynamicPtr(aux),param,::hx::DynamicPtr(values));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,auxfv,(void))

void AL_obj::auxi( ::Dynamic aux,int param, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_272_auxi)
            	HX_STACK_ARG(aux,"aux")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(value,"value")
HXLINE( 272)
HXDLIN( 272)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_auxi(::hx::DynamicPtr(aux),param,::hx::DynamicPtr(value));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,auxi,(void))

void AL_obj::auxiv( ::Dynamic aux,int param,::Array< int > values){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_285_auxiv)
            	HX_STACK_ARG(aux,"aux")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(values,"values")
HXLINE( 285)
HXDLIN( 285)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_auxiv(::hx::DynamicPtr(aux),param,::hx::DynamicPtr(values));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,auxiv,(void))

void AL_obj::bufferData( ::Dynamic buffer,int format, ::lime::utils::ArrayBufferView data,int size,int freq){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_292_bufferData)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(format,"format")
            	HX_STACK_ARG(data,"data")
            	HX_STACK_ARG(size,"size")
            	HX_STACK_ARG(freq,"freq")
HXLINE( 292)
HXDLIN( 292)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_buffer_data(::hx::DynamicPtr(buffer),format,::hx::DynamicPtr(data),size,freq);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(AL_obj,bufferData,(void))

void AL_obj::buffer3f( ::Dynamic buffer,int param,Float value1,Float value2,Float value3){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_299_buffer3f)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(value1,"value1")
            	HX_STACK_ARG(value2,"value2")
            	HX_STACK_ARG(value3,"value3")
HXLINE( 299)
HXDLIN( 299)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_buffer3f(::hx::DynamicPtr(buffer),param,( (float)(value1) ),( (float)(value2) ),( (float)(value3) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(AL_obj,buffer3f,(void))

void AL_obj::buffer3i( ::Dynamic buffer,int param,int value1,int value2,int value3){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_306_buffer3i)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(value1,"value1")
            	HX_STACK_ARG(value2,"value2")
            	HX_STACK_ARG(value3,"value3")
HXLINE( 306)
HXDLIN( 306)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_buffer3i(::hx::DynamicPtr(buffer),param,value1,value2,value3);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(AL_obj,buffer3i,(void))

void AL_obj::bufferf( ::Dynamic buffer,int param,Float value){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_313_bufferf)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(value,"value")
HXLINE( 313)
HXDLIN( 313)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_bufferf(::hx::DynamicPtr(buffer),param,( (float)(value) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,bufferf,(void))

void AL_obj::bufferfv( ::Dynamic buffer,int param,::Array< Float > values){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_326_bufferfv)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(values,"values")
HXLINE( 326)
HXDLIN( 326)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_bufferfv(::hx::DynamicPtr(buffer),param,::hx::DynamicPtr(values));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,bufferfv,(void))

void AL_obj::bufferi( ::Dynamic buffer,int param,int value){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_333_bufferi)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(value,"value")
HXLINE( 333)
HXDLIN( 333)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_bufferi(::hx::DynamicPtr(buffer),param,value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,bufferi,(void))

void AL_obj::bufferiv( ::Dynamic buffer,int param,::Array< int > values){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_346_bufferiv)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(values,"values")
HXLINE( 346)
HXDLIN( 346)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_bufferiv(::hx::DynamicPtr(buffer),param,::hx::DynamicPtr(values));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,bufferiv,(void))

 ::Dynamic AL_obj::createAux(){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_353_createAux)
HXLINE( 353)
HXDLIN( 353)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_al_gen_aux()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AL_obj,createAux,return )

 ::Dynamic AL_obj::createBuffer(){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_362_createBuffer)
HXLINE( 362)
HXDLIN( 362)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_al_gen_buffer()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AL_obj,createBuffer,return )

 ::Dynamic AL_obj::createEffect(){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_371_createEffect)
HXLINE( 371)
HXDLIN( 371)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_al_gen_effect()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AL_obj,createEffect,return )

 ::Dynamic AL_obj::createFilter(){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_380_createFilter)
HXLINE( 380)
HXDLIN( 380)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_al_gen_filter()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AL_obj,createFilter,return )

 ::Dynamic AL_obj::createSource(){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_389_createSource)
HXLINE( 389)
HXDLIN( 389)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_al_gen_source()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AL_obj,createSource,return )

void AL_obj::deleteBuffer( ::Dynamic buffer){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_398_deleteBuffer)
            	HX_STACK_ARG(buffer,"buffer")
HXLINE( 398)
HXDLIN( 398)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_delete_buffer(::hx::DynamicPtr(buffer));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,deleteBuffer,(void))

void AL_obj::deleteBuffers(::cpp::VirtualArray buffers){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_411_deleteBuffers)
            	HX_STACK_ARG(buffers,"buffers")
HXLINE( 411)
HXDLIN( 411)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_delete_buffers(buffers->get_length(),::hx::DynamicPtr(buffers));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,deleteBuffers,(void))

void AL_obj::deleteSource( ::Dynamic source){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_418_deleteSource)
            	HX_STACK_ARG(source,"source")
HXLINE( 418)
HXDLIN( 418)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_delete_source(::hx::DynamicPtr(source));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,deleteSource,(void))

void AL_obj::deleteSources(::cpp::VirtualArray sources){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_431_deleteSources)
            	HX_STACK_ARG(sources,"sources")
HXLINE( 431)
HXDLIN( 431)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_delete_sources(sources->get_length(),::hx::DynamicPtr(sources));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,deleteSources,(void))

void AL_obj::disable(int capability){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_438_disable)
            	HX_STACK_ARG(capability,"capability")
HXLINE( 438)
HXDLIN( 438)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_disable(capability);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,disable,(void))

void AL_obj::distanceModel(int distanceModel){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_445_distanceModel)
            	HX_STACK_ARG(distanceModel,"distanceModel")
HXLINE( 445)
HXDLIN( 445)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_distance_model(distanceModel);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,distanceModel,(void))

void AL_obj::dopplerFactor(Float value){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_452_dopplerFactor)
            	HX_STACK_ARG(value,"value")
HXLINE( 452)
HXDLIN( 452)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_doppler_factor(( (float)(value) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,dopplerFactor,(void))

void AL_obj::dopplerVelocity(Float value){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_459_dopplerVelocity)
            	HX_STACK_ARG(value,"value")
HXLINE( 459)
HXDLIN( 459)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_doppler_velocity(( (float)(value) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,dopplerVelocity,(void))

void AL_obj::effectf( ::Dynamic effect,int param,Float value){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_466_effectf)
            	HX_STACK_ARG(effect,"effect")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(value,"value")
HXLINE( 466)
HXDLIN( 466)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_effectf(::hx::DynamicPtr(effect),param,( (float)(value) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,effectf,(void))

void AL_obj::effectfv( ::Dynamic effect,int param,::Array< Float > values){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_479_effectfv)
            	HX_STACK_ARG(effect,"effect")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(values,"values")
HXLINE( 479)
HXDLIN( 479)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_effectfv(::hx::DynamicPtr(effect),param,::hx::DynamicPtr(values));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,effectfv,(void))

void AL_obj::effecti( ::Dynamic effect,int param,int value){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_486_effecti)
            	HX_STACK_ARG(effect,"effect")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(value,"value")
HXLINE( 486)
HXDLIN( 486)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_effecti(::hx::DynamicPtr(effect),param,value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,effecti,(void))

void AL_obj::effectiv( ::Dynamic effect,int param,::Array< int > values){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_499_effectiv)
            	HX_STACK_ARG(effect,"effect")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(values,"values")
HXLINE( 499)
HXDLIN( 499)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_effectiv(::hx::DynamicPtr(effect),param,::hx::DynamicPtr(values));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,effectiv,(void))

void AL_obj::enable(int capability){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_506_enable)
            	HX_STACK_ARG(capability,"capability")
HXLINE( 506)
HXDLIN( 506)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_enable(capability);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,enable,(void))

 ::Dynamic AL_obj::genSource(){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_513_genSource)
HXLINE( 513)
HXDLIN( 513)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_al_gen_source()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AL_obj,genSource,return )

::cpp::VirtualArray AL_obj::genSources(int n){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_520_genSources)
            	HX_STACK_ARG(n,"n")
HXLINE( 520)
HXLINE( 522)		HX_VARI(  ::hx::Object *,result) = ::lime::_internal::backend::native::NativeCFFI_obj::lime_al_gen_sources(n);
HXLINE( 530)		return ( ( ::Dynamic)(result) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,genSources,return )

 ::Dynamic AL_obj::genBuffer(){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_540_genBuffer)
HXLINE( 540)
HXDLIN( 540)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_al_gen_buffer()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AL_obj,genBuffer,return )

::cpp::VirtualArray AL_obj::genBuffers(int n){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_547_genBuffers)
            	HX_STACK_ARG(n,"n")
HXLINE( 547)
HXLINE( 549)		HX_VARI(  ::hx::Object *,result) = ::lime::_internal::backend::native::NativeCFFI_obj::lime_al_gen_buffers(n);
HXLINE( 557)		return ( ( ::Dynamic)(result) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,genBuffers,return )

bool AL_obj::getBoolean(int param){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_567_getBoolean)
            	HX_STACK_ARG(param,"param")
HXLINE( 567)
HXDLIN( 567)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_al_get_boolean(param);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getBoolean,return )

::Array< bool > AL_obj::getBooleanv(int param,::hx::Null< int >  __o_count){
            		int count = __o_count.Default(1);
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_574_getBooleanv)
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(count,"count")
HXLINE( 574)
HXLINE( 576)		HX_VARI(  ::hx::Object *,result) = ::lime::_internal::backend::native::NativeCFFI_obj::lime_al_get_booleanv(param,1);
HXLINE( 584)		return ( ( ::Dynamic)(result) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getBooleanv,return )

::Array< Float > AL_obj::getBuffer3f( ::Dynamic buffer,int param){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_592_getBuffer3f)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(param,"param")
HXLINE( 592)
HXLINE( 594)		HX_VARI(  ::hx::Object *,result) = ::lime::_internal::backend::native::NativeCFFI_obj::lime_al_get_buffer3f(::hx::DynamicPtr(buffer),param);
HXLINE( 602)		return ( ( ::Dynamic)(result) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getBuffer3f,return )

::Array< int > AL_obj::getBuffer3i( ::Dynamic buffer,int param){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_610_getBuffer3i)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(param,"param")
HXLINE( 610)
HXLINE( 612)		HX_VARI(  ::hx::Object *,result) = ::lime::_internal::backend::native::NativeCFFI_obj::lime_al_get_buffer3i(::hx::DynamicPtr(buffer),param);
HXLINE( 620)		return ( ( ::Dynamic)(result) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getBuffer3i,return )

Float AL_obj::getBufferf( ::Dynamic buffer,int param){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_630_getBufferf)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(param,"param")
HXLINE( 630)
HXDLIN( 630)		return ( (Float)(::lime::_internal::backend::native::NativeCFFI_obj::lime_al_get_bufferf(::hx::DynamicPtr(buffer),param)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getBufferf,return )

::Array< Float > AL_obj::getBufferfv( ::Dynamic buffer,int param,::hx::Null< int >  __o_count){
            		int count = __o_count.Default(1);
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_637_getBufferfv)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(count,"count")
HXLINE( 637)
HXLINE( 639)		HX_VARI(  ::hx::Object *,result) = ::lime::_internal::backend::native::NativeCFFI_obj::lime_al_get_bufferfv(::hx::DynamicPtr(buffer),param,count);
HXLINE( 647)		return ( ( ::Dynamic)(result) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,getBufferfv,return )

int AL_obj::getBufferi( ::Dynamic buffer,int param){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_657_getBufferi)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(param,"param")
HXLINE( 657)
HXDLIN( 657)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_al_get_bufferi(::hx::DynamicPtr(buffer),param);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getBufferi,return )

::Array< int > AL_obj::getBufferiv( ::Dynamic buffer,int param,::hx::Null< int >  __o_count){
            		int count = __o_count.Default(1);
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_664_getBufferiv)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(count,"count")
HXLINE( 664)
HXLINE( 666)		HX_VARI(  ::hx::Object *,result) = ::lime::_internal::backend::native::NativeCFFI_obj::lime_al_get_bufferiv(::hx::DynamicPtr(buffer),param,count);
HXLINE( 674)		return ( ( ::Dynamic)(result) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,getBufferiv,return )

Float AL_obj::getDouble(int param){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_684_getDouble)
            	HX_STACK_ARG(param,"param")
HXLINE( 684)
HXDLIN( 684)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_al_get_double(param);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getDouble,return )

::Array< Float > AL_obj::getDoublev(int param,::hx::Null< int >  __o_count){
            		int count = __o_count.Default(1);
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_691_getDoublev)
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(count,"count")
HXLINE( 691)
HXLINE( 693)		HX_VARI(  ::hx::Object *,result) = ::lime::_internal::backend::native::NativeCFFI_obj::lime_al_get_doublev(param,count);
HXLINE( 701)		return ( ( ::Dynamic)(result) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getDoublev,return )

int AL_obj::getEnumValue(::String ename){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_711_getEnumValue)
            	HX_STACK_ARG(ename,"ename")
HXLINE( 711)
HXDLIN( 711)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_al_get_enum_value(ename);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getEnumValue,return )

int AL_obj::getError(){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_720_getError)
HXLINE( 720)
HXDLIN( 720)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_al_get_error();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AL_obj,getError,return )

::String AL_obj::getErrorString(){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_728_getErrorString)
HXLINE( 728)
HXDLIN( 728)		switch((int)(::lime::media::openal::AL_obj::getError())){
            			case (int)40961: {
HXLINE( 730)				return HX_("INVALID_NAME: Invalid parameter name",64,c3,04,f4);
            			}
            			break;
            			case (int)40962: {
HXLINE( 731)				return HX_("INVALID_ENUM: Invalid enum value",0a,d7,df,59);
            			}
            			break;
            			case (int)40963: {
HXLINE( 732)				return HX_("INVALID_VALUE: Invalid parameter value",c2,a4,37,f8);
            			}
            			break;
            			case (int)40964: {
HXLINE( 733)				return HX_("INVALID_OPERATION: Illegal operation or call",13,8a,e7,93);
            			}
            			break;
            			case (int)40965: {
HXLINE( 734)				return HX_("OUT_OF_MEMORY: OpenAL has run out of memory",b0,dd,fb,0a);
            			}
            			break;
            			default:{
HXLINE( 735)				return HX_("",00,00,00,00);
            			}
            		}
HXLINE( 728)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AL_obj,getErrorString,return )

int AL_obj::getFilteri( ::Dynamic filter,int param){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_742_getFilteri)
            	HX_STACK_ARG(filter,"filter")
            	HX_STACK_ARG(param,"param")
HXLINE( 742)
HXDLIN( 742)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_al_get_filteri(::hx::DynamicPtr(filter),param);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getFilteri,return )

Float AL_obj::getFloat(int param){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_751_getFloat)
            	HX_STACK_ARG(param,"param")
HXLINE( 751)
HXDLIN( 751)		return ( (Float)(::lime::_internal::backend::native::NativeCFFI_obj::lime_al_get_float(param)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getFloat,return )

::Array< Float > AL_obj::getFloatv(int param,::hx::Null< int >  __o_count){
            		int count = __o_count.Default(1);
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_758_getFloatv)
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(count,"count")
HXLINE( 758)
HXLINE( 760)		HX_VARI(  ::hx::Object *,result) = ::lime::_internal::backend::native::NativeCFFI_obj::lime_al_get_floatv(param,count);
HXLINE( 768)		return ( ( ::Dynamic)(result) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getFloatv,return )

int AL_obj::getInteger(int param){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_778_getInteger)
            	HX_STACK_ARG(param,"param")
HXLINE( 778)
HXDLIN( 778)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_al_get_integer(param);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getInteger,return )

::Array< int > AL_obj::getIntegerv(int param,::hx::Null< int >  __o_count){
            		int count = __o_count.Default(1);
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_785_getIntegerv)
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(count,"count")
HXLINE( 785)
HXLINE( 787)		HX_VARI(  ::hx::Object *,result) = ::lime::_internal::backend::native::NativeCFFI_obj::lime_al_get_integerv(param,count);
HXLINE( 795)		return ( ( ::Dynamic)(result) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getIntegerv,return )

::Array< Float > AL_obj::getListener3f(int param){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_803_getListener3f)
            	HX_STACK_ARG(param,"param")
HXLINE( 803)
HXLINE( 805)		HX_VARI(  ::hx::Object *,result) = ::lime::_internal::backend::native::NativeCFFI_obj::lime_al_get_listener3f(param);
HXLINE( 813)		return ( ( ::Dynamic)(result) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getListener3f,return )

::Array< int > AL_obj::getListener3i(int param){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_821_getListener3i)
            	HX_STACK_ARG(param,"param")
HXLINE( 821)
HXLINE( 823)		HX_VARI(  ::hx::Object *,result) = ::lime::_internal::backend::native::NativeCFFI_obj::lime_al_get_listener3i(param);
HXLINE( 831)		return ( ( ::Dynamic)(result) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getListener3i,return )

Float AL_obj::getListenerf(int param){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_841_getListenerf)
            	HX_STACK_ARG(param,"param")
HXLINE( 841)
HXDLIN( 841)		return ( (Float)(::lime::_internal::backend::native::NativeCFFI_obj::lime_al_get_listenerf(param)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getListenerf,return )

::Array< Float > AL_obj::getListenerfv(int param,::hx::Null< int >  __o_count){
            		int count = __o_count.Default(1);
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_848_getListenerfv)
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(count,"count")
HXLINE( 848)
HXLINE( 850)		HX_VARI(  ::hx::Object *,result) = ::lime::_internal::backend::native::NativeCFFI_obj::lime_al_get_listenerfv(param,count);
HXLINE( 858)		return ( ( ::Dynamic)(result) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getListenerfv,return )

int AL_obj::getListeneri(int param){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_868_getListeneri)
            	HX_STACK_ARG(param,"param")
HXLINE( 868)
HXDLIN( 868)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_al_get_listeneri(param);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getListeneri,return )

::Array< int > AL_obj::getListeneriv(int param,::hx::Null< int >  __o_count){
            		int count = __o_count.Default(1);
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_875_getListeneriv)
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(count,"count")
HXLINE( 875)
HXLINE( 877)		HX_VARI(  ::hx::Object *,result) = ::lime::_internal::backend::native::NativeCFFI_obj::lime_al_get_listeneriv(param,count);
HXLINE( 885)		return ( ( ::Dynamic)(result) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getListeneriv,return )

 ::Dynamic AL_obj::getParameter(int param){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_895_getParameter)
            	HX_STACK_ARG(param,"param")
HXLINE( 895)
HXDLIN( 895)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getParameter,return )

 ::Dynamic AL_obj::getProcAddress(::String fname){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_901_getProcAddress)
            	HX_STACK_ARG(fname,"fname")
HXLINE( 901)
HXDLIN( 901)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_al_get_proc_address(fname);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getProcAddress,return )

::Array< Float > AL_obj::getSource3f( ::Dynamic source,int param){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_908_getSource3f)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(param,"param")
HXLINE( 908)
HXLINE( 910)		HX_VARI(  ::hx::Object *,result) = ::lime::_internal::backend::native::NativeCFFI_obj::lime_al_get_source3f(::hx::DynamicPtr(source),param);
HXLINE( 918)		return ( ( ::Dynamic)(result) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getSource3f,return )

Float AL_obj::getSourcef( ::Dynamic source,int param){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_928_getSourcef)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(param,"param")
HXLINE( 928)
HXDLIN( 928)		return ( (Float)(::lime::_internal::backend::native::NativeCFFI_obj::lime_al_get_sourcef(::hx::DynamicPtr(source),param)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getSourcef,return )

::Array< int > AL_obj::getSource3i( ::Dynamic source,int param){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_935_getSource3i)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(param,"param")
HXLINE( 935)
HXLINE( 937)		HX_VARI(  ::hx::Object *,result) = ::lime::_internal::backend::native::NativeCFFI_obj::lime_al_get_source3i(::hx::DynamicPtr(source),param);
HXLINE( 945)		return ( ( ::Dynamic)(result) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getSource3i,return )

::Array< Float > AL_obj::getSourcefv( ::Dynamic source,int param,::hx::Null< int >  __o_count){
            		int count = __o_count.Default(1);
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_953_getSourcefv)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(count,"count")
HXLINE( 953)
HXLINE( 955)		HX_VARI(  ::hx::Object *,result) = ::lime::_internal::backend::native::NativeCFFI_obj::lime_al_get_sourcefv(::hx::DynamicPtr(source),param,count);
HXLINE( 963)		return ( ( ::Dynamic)(result) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,getSourcefv,return )

 ::Dynamic AL_obj::getSourcei( ::Dynamic source,int param){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_973_getSourcei)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(param,"param")
HXLINE( 973)
HXDLIN( 973)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_al_get_sourcei(::hx::DynamicPtr(source),param)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,getSourcei,return )

::Array< int > AL_obj::getSourceiv( ::Dynamic source,int param,::hx::Null< int >  __o_count){
            		int count = __o_count.Default(1);
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_980_getSourceiv)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(count,"count")
HXLINE( 980)
HXLINE( 982)		HX_VARI(  ::hx::Object *,result) = ::lime::_internal::backend::native::NativeCFFI_obj::lime_al_get_sourceiv(::hx::DynamicPtr(source),param,count);
HXLINE( 990)		return ( ( ::Dynamic)(result) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,getSourceiv,return )

::String AL_obj::getString(int param){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_998_getString)
            	HX_STACK_ARG(param,"param")
HXLINE( 998)
HXLINE(1000)		HX_VARI(  ::hx::Object *,result) = ::lime::_internal::backend::native::NativeCFFI_obj::lime_al_get_string(param);
HXLINE(1004)		return ( ( ::Dynamic)(result) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,getString,return )

bool AL_obj::isBuffer( ::Dynamic buffer){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_1013_isBuffer)
            	HX_STACK_ARG(buffer,"buffer")
HXLINE(1013)
HXDLIN(1013)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_al_is_buffer(::hx::DynamicPtr(buffer));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,isBuffer,return )

bool AL_obj::isEnabled(int capability){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_1022_isEnabled)
            	HX_STACK_ARG(capability,"capability")
HXLINE(1022)
HXDLIN(1022)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_al_is_enabled(capability);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,isEnabled,return )

bool AL_obj::isExtensionPresent(::String extname){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_1031_isExtensionPresent)
            	HX_STACK_ARG(extname,"extname")
HXLINE(1031)
HXDLIN(1031)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_al_is_extension_present(extname);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,isExtensionPresent,return )

bool AL_obj::isAux( ::Dynamic aux){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_1040_isAux)
            	HX_STACK_ARG(aux,"aux")
HXLINE(1040)
HXDLIN(1040)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_al_is_aux(::hx::DynamicPtr(aux));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,isAux,return )

bool AL_obj::isEffect( ::Dynamic effect){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_1049_isEffect)
            	HX_STACK_ARG(effect,"effect")
HXLINE(1049)
HXDLIN(1049)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_al_is_effect(::hx::DynamicPtr(effect));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,isEffect,return )

bool AL_obj::isFilter( ::Dynamic filter){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_1058_isFilter)
            	HX_STACK_ARG(filter,"filter")
HXLINE(1058)
HXDLIN(1058)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_al_is_filter(::hx::DynamicPtr(filter));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,isFilter,return )

bool AL_obj::isSource( ::Dynamic source){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_1067_isSource)
            	HX_STACK_ARG(source,"source")
HXLINE(1067)
HXDLIN(1067)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_al_is_source(::hx::DynamicPtr(source));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,isSource,return )

void AL_obj::listener3f(int param,Float value1,Float value2,Float value3){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_1076_listener3f)
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(value1,"value1")
            	HX_STACK_ARG(value2,"value2")
            	HX_STACK_ARG(value3,"value3")
HXLINE(1076)
HXDLIN(1076)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_listener3f(param,( (float)(value1) ),( (float)(value2) ),( (float)(value3) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(AL_obj,listener3f,(void))

void AL_obj::listener3i(int param,int value1,int value2,int value3){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_1083_listener3i)
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(value1,"value1")
            	HX_STACK_ARG(value2,"value2")
            	HX_STACK_ARG(value3,"value3")
HXLINE(1083)
HXDLIN(1083)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_listener3i(param,value1,value2,value3);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(AL_obj,listener3i,(void))

void AL_obj::listenerf(int param,Float value){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_1090_listenerf)
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(value,"value")
HXLINE(1090)
HXDLIN(1090)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_listenerf(param,( (float)(value) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,listenerf,(void))

void AL_obj::listenerfv(int param,::Array< Float > values){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_1103_listenerfv)
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(values,"values")
HXLINE(1103)
HXDLIN(1103)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_listenerfv(param,::hx::DynamicPtr(values));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,listenerfv,(void))

void AL_obj::listeneri(int param,int value){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_1110_listeneri)
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(value,"value")
HXLINE(1110)
HXDLIN(1110)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_listeneri(param,value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,listeneri,(void))

void AL_obj::listeneriv(int param,::Array< int > values){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_1123_listeneriv)
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(values,"values")
HXLINE(1123)
HXDLIN(1123)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_listeneriv(param,::hx::DynamicPtr(values));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,listeneriv,(void))

void AL_obj::source3f( ::Dynamic source,int param,Float value1,Float value2,Float value3){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_1130_source3f)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(value1,"value1")
            	HX_STACK_ARG(value2,"value2")
            	HX_STACK_ARG(value3,"value3")
HXLINE(1130)
HXDLIN(1130)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_source3f(::hx::DynamicPtr(source),param,( (float)(value1) ),( (float)(value2) ),( (float)(value3) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(AL_obj,source3f,(void))

void AL_obj::source3i( ::Dynamic source,int param, ::Dynamic value1,int value2,int value3){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_1137_source3i)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(value1,"value1")
            	HX_STACK_ARG(value2,"value2")
            	HX_STACK_ARG(value3,"value3")
HXLINE(1137)
HXDLIN(1137)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_source3i(::hx::DynamicPtr(source),param,::hx::DynamicPtr(value1),value2,value3);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(AL_obj,source3i,(void))

void AL_obj::sourcef( ::Dynamic source,int param,Float value){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_1144_sourcef)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(value,"value")
HXLINE(1144)
HXDLIN(1144)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_sourcef(::hx::DynamicPtr(source),param,( (float)(value) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,sourcef,(void))

void AL_obj::sourcefv( ::Dynamic source,int param,::Array< Float > values){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_1157_sourcefv)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(values,"values")
HXLINE(1157)
HXDLIN(1157)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_sourcefv(::hx::DynamicPtr(source),param,::hx::DynamicPtr(values));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,sourcefv,(void))

void AL_obj::sourcei( ::Dynamic source,int param, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_1164_sourcei)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(value,"value")
HXLINE(1164)
HXDLIN(1164)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_sourcei(::hx::DynamicPtr(source),param,::hx::DynamicPtr(value));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,sourcei,(void))

void AL_obj::filteri( ::Dynamic filter,int param, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_1171_filteri)
            	HX_STACK_ARG(filter,"filter")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(value,"value")
HXLINE(1171)
HXDLIN(1171)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_filteri(::hx::DynamicPtr(filter),param,::hx::DynamicPtr(value));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,filteri,(void))

void AL_obj::filterf( ::Dynamic filter,int param,Float value){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_1178_filterf)
            	HX_STACK_ARG(filter,"filter")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(value,"value")
HXLINE(1178)
HXDLIN(1178)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_filterf(::hx::DynamicPtr(filter),param,( (float)(value) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,filterf,(void))

void AL_obj::sourceiv( ::Dynamic source,int param,::Array< int > values){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_1191_sourceiv)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(param,"param")
            	HX_STACK_ARG(values,"values")
HXLINE(1191)
HXDLIN(1191)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_sourceiv(::hx::DynamicPtr(source),param,::hx::DynamicPtr(values));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,sourceiv,(void))

void AL_obj::sourcePlay( ::Dynamic source){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_1198_sourcePlay)
            	HX_STACK_ARG(source,"source")
HXLINE(1198)
HXDLIN(1198)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_source_play(::hx::DynamicPtr(source));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourcePlay,(void))

void AL_obj::sourcePlayv(::cpp::VirtualArray sources){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_1211_sourcePlayv)
            	HX_STACK_ARG(sources,"sources")
HXLINE(1211)
HXDLIN(1211)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_source_playv(sources->get_length(),::hx::DynamicPtr(sources));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourcePlayv,(void))

void AL_obj::sourceStop( ::Dynamic source){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_1218_sourceStop)
            	HX_STACK_ARG(source,"source")
HXLINE(1218)
HXDLIN(1218)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_source_stop(::hx::DynamicPtr(source));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourceStop,(void))

void AL_obj::sourceStopv(::cpp::VirtualArray sources){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_1231_sourceStopv)
            	HX_STACK_ARG(sources,"sources")
HXLINE(1231)
HXDLIN(1231)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_source_stopv(sources->get_length(),::hx::DynamicPtr(sources));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourceStopv,(void))

void AL_obj::sourceRewind( ::Dynamic source){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_1238_sourceRewind)
            	HX_STACK_ARG(source,"source")
HXLINE(1238)
HXDLIN(1238)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_source_rewind(::hx::DynamicPtr(source));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourceRewind,(void))

void AL_obj::sourceRewindv(::cpp::VirtualArray sources){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_1251_sourceRewindv)
            	HX_STACK_ARG(sources,"sources")
HXLINE(1251)
HXDLIN(1251)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_source_rewindv(sources->get_length(),::hx::DynamicPtr(sources));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourceRewindv,(void))

void AL_obj::sourcePause( ::Dynamic source){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_1258_sourcePause)
            	HX_STACK_ARG(source,"source")
HXLINE(1258)
HXDLIN(1258)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_source_pause(::hx::DynamicPtr(source));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourcePause,(void))

void AL_obj::sourcePausev(::cpp::VirtualArray sources){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_1271_sourcePausev)
            	HX_STACK_ARG(sources,"sources")
HXLINE(1271)
HXDLIN(1271)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_source_pausev(sources->get_length(),::hx::DynamicPtr(sources));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourcePausev,(void))

void AL_obj::sourceQueueBuffer( ::Dynamic source, ::Dynamic buffer){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_1276_sourceQueueBuffer)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(buffer,"buffer")
HXLINE(1276)
HXLINE(1282)		HX_VARI( ::cpp::VirtualArray,buffers) = ::cpp::VirtualArray_obj::__new(1)->init(0,buffer);
HXLINE(1284)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_source_queue_buffers(::hx::DynamicPtr(source),1,::hx::DynamicPtr(buffers));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,sourceQueueBuffer,(void))

void AL_obj::sourceQueueBuffers( ::Dynamic source,int nb,::cpp::VirtualArray buffers){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_1297_sourceQueueBuffers)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(nb,"nb")
            	HX_STACK_ARG(buffers,"buffers")
HXLINE(1297)
HXDLIN(1297)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_source_queue_buffers(::hx::DynamicPtr(source),nb,::hx::DynamicPtr(buffers));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AL_obj,sourceQueueBuffers,(void))

 ::Dynamic AL_obj::sourceUnqueueBuffer( ::Dynamic source){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_1302_sourceUnqueueBuffer)
            	HX_STACK_ARG(source,"source")
HXLINE(1302)
HXLINE(1304)		HX_VARI(  ::hx::Object *,res) = ::lime::_internal::backend::native::NativeCFFI_obj::lime_al_source_unqueue_buffers(::hx::DynamicPtr(source),1);
HXLINE(1305)		return ( ( ::Dynamic)(res) )->__GetItem(0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,sourceUnqueueBuffer,return )

::cpp::VirtualArray AL_obj::sourceUnqueueBuffers( ::Dynamic source,int nb){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_1312_sourceUnqueueBuffers)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(nb,"nb")
HXLINE(1312)
HXLINE(1314)		HX_VARI(  ::hx::Object *,result) = ::lime::_internal::backend::native::NativeCFFI_obj::lime_al_source_unqueue_buffers(::hx::DynamicPtr(source),nb);
HXLINE(1322)		return ( ( ::Dynamic)(result) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AL_obj,sourceUnqueueBuffers,return )

void AL_obj::speedOfSound(Float value){
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_1332_speedOfSound)
            	HX_STACK_ARG(value,"value")
HXLINE(1332)
HXDLIN(1332)		::lime::_internal::backend::native::NativeCFFI_obj::lime_al_speed_of_sound(( (float)(value) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AL_obj,speedOfSound,(void))


AL_obj::AL_obj()
{
}

bool AL_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"auxf") ) { outValue = auxf_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"auxi") ) { outValue = auxi_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"auxfv") ) { outValue = auxfv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"auxiv") ) { outValue = auxiv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isAux") ) { outValue = isAux_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"enable") ) { outValue = enable_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bufferf") ) { outValue = bufferf_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"bufferi") ) { outValue = bufferi_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"disable") ) { outValue = disable_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"effectf") ) { outValue = effectf_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"effecti") ) { outValue = effecti_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sourcef") ) { outValue = sourcef_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sourcei") ) { outValue = sourcei_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"filteri") ) { outValue = filteri_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"filterf") ) { outValue = filterf_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"buffer3f") ) { outValue = buffer3f_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"buffer3i") ) { outValue = buffer3i_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"bufferfv") ) { outValue = bufferfv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"bufferiv") ) { outValue = bufferiv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"effectfv") ) { outValue = effectfv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"effectiv") ) { outValue = effectiv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getError") ) { outValue = getError_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getFloat") ) { outValue = getFloat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isBuffer") ) { outValue = isBuffer_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isEffect") ) { outValue = isEffect_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isFilter") ) { outValue = isFilter_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isSource") ) { outValue = isSource_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"source3f") ) { outValue = source3f_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"source3i") ) { outValue = source3i_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sourcefv") ) { outValue = sourcefv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sourceiv") ) { outValue = sourceiv_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"createAux") ) { outValue = createAux_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"genSource") ) { outValue = genSource_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"genBuffer") ) { outValue = genBuffer_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getDouble") ) { outValue = getDouble_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getFloatv") ) { outValue = getFloatv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getString") ) { outValue = getString_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isEnabled") ) { outValue = isEnabled_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"listenerf") ) { outValue = listenerf_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"listeneri") ) { outValue = listeneri_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removeSend") ) { outValue = removeSend_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"bufferData") ) { outValue = bufferData_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"genSources") ) { outValue = genSources_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"genBuffers") ) { outValue = genBuffers_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getBoolean") ) { outValue = getBoolean_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getBufferf") ) { outValue = getBufferf_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getBufferi") ) { outValue = getBufferi_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getDoublev") ) { outValue = getDoublev_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getFilteri") ) { outValue = getFilteri_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getInteger") ) { outValue = getInteger_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getSourcef") ) { outValue = getSourcef_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getSourcei") ) { outValue = getSourcei_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"listener3f") ) { outValue = listener3f_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"listener3i") ) { outValue = listener3i_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"listenerfv") ) { outValue = listenerfv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"listeneriv") ) { outValue = listeneriv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sourcePlay") ) { outValue = sourcePlay_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sourceStop") ) { outValue = sourceStop_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getBooleanv") ) { outValue = getBooleanv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getBuffer3f") ) { outValue = getBuffer3f_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getBuffer3i") ) { outValue = getBuffer3i_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getBufferfv") ) { outValue = getBufferfv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getBufferiv") ) { outValue = getBufferiv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getIntegerv") ) { outValue = getIntegerv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getSource3f") ) { outValue = getSource3f_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getSource3i") ) { outValue = getSource3i_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getSourcefv") ) { outValue = getSourcefv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getSourceiv") ) { outValue = getSourceiv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sourcePlayv") ) { outValue = sourcePlayv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sourceStopv") ) { outValue = sourceStopv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sourcePause") ) { outValue = sourcePause_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createBuffer") ) { outValue = createBuffer_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"createEffect") ) { outValue = createEffect_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"createFilter") ) { outValue = createFilter_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"createSource") ) { outValue = createSource_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"deleteBuffer") ) { outValue = deleteBuffer_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"deleteSource") ) { outValue = deleteSource_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getEnumValue") ) { outValue = getEnumValue_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getListenerf") ) { outValue = getListenerf_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getListeneri") ) { outValue = getListeneri_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getParameter") ) { outValue = getParameter_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sourceRewind") ) { outValue = sourceRewind_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sourcePausev") ) { outValue = sourcePausev_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"speedOfSound") ) { outValue = speedOfSound_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"deleteBuffers") ) { outValue = deleteBuffers_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"deleteSources") ) { outValue = deleteSources_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"distanceModel") ) { outValue = distanceModel_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"dopplerFactor") ) { outValue = dopplerFactor_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getListener3f") ) { outValue = getListener3f_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getListener3i") ) { outValue = getListener3i_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getListenerfv") ) { outValue = getListenerfv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getListeneriv") ) { outValue = getListeneriv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sourceRewindv") ) { outValue = sourceRewindv_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getErrorString") ) { outValue = getErrorString_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getProcAddress") ) { outValue = getProcAddress_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dopplerVelocity") ) { outValue = dopplerVelocity_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"sourceQueueBuffer") ) { outValue = sourceQueueBuffer_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"removeDirectFilter") ) { outValue = removeDirectFilter_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isExtensionPresent") ) { outValue = isExtensionPresent_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sourceQueueBuffers") ) { outValue = sourceQueueBuffers_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"sourceUnqueueBuffer") ) { outValue = sourceUnqueueBuffer_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"sourceUnqueueBuffers") ) { outValue = sourceUnqueueBuffers_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AL_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo AL_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &AL_obj::NONE,HX_("NONE",b8,da,ca,33)},
	{::hx::fsInt,(void *) &AL_obj::FALSE,HX_("FALSE",83,6d,3d,79)},
	{::hx::fsInt,(void *) &AL_obj::TRUE,HX_("TRUE",4e,6f,c4,37)},
	{::hx::fsInt,(void *) &AL_obj::SOURCE_RELATIVE,HX_("SOURCE_RELATIVE",f0,f3,84,fe)},
	{::hx::fsInt,(void *) &AL_obj::CONE_INNER_ANGLE,HX_("CONE_INNER_ANGLE",4e,a1,d7,93)},
	{::hx::fsInt,(void *) &AL_obj::CONE_OUTER_ANGLE,HX_("CONE_OUTER_ANGLE",f3,e1,bf,cc)},
	{::hx::fsInt,(void *) &AL_obj::PITCH,HX_("PITCH",a0,f3,8e,40)},
	{::hx::fsInt,(void *) &AL_obj::POSITION,HX_("POSITION",a9,30,80,24)},
	{::hx::fsInt,(void *) &AL_obj::DIRECTION,HX_("DIRECTION",1f,d2,98,0b)},
	{::hx::fsInt,(void *) &AL_obj::VELOCITY,HX_("VELOCITY",1d,92,83,78)},
	{::hx::fsInt,(void *) &AL_obj::LOOPING,HX_("LOOPING",de,50,51,a0)},
	{::hx::fsInt,(void *) &AL_obj::BUFFER,HX_("BUFFER",00,69,17,83)},
	{::hx::fsInt,(void *) &AL_obj::GAIN,HX_("GAIN",7f,b8,1f,2f)},
	{::hx::fsInt,(void *) &AL_obj::MIN_GAIN,HX_("MIN_GAIN",ac,29,d2,21)},
	{::hx::fsInt,(void *) &AL_obj::MAX_GAIN,HX_("MAX_GAIN",5a,0f,b8,d4)},
	{::hx::fsInt,(void *) &AL_obj::ORIENTATION,HX_("ORIENTATION",b0,fa,3a,d4)},
	{::hx::fsInt,(void *) &AL_obj::SOURCE_STATE,HX_("SOURCE_STATE",4d,e8,1e,ab)},
	{::hx::fsInt,(void *) &AL_obj::INITIAL,HX_("INITIAL",64,e4,72,4b)},
	{::hx::fsInt,(void *) &AL_obj::PLAYING,HX_("PLAYING",4e,e3,eb,09)},
	{::hx::fsInt,(void *) &AL_obj::PAUSED,HX_("PAUSED",ae,ec,06,a2)},
	{::hx::fsInt,(void *) &AL_obj::STOPPED,HX_("STOPPED",ed,a5,35,c3)},
	{::hx::fsInt,(void *) &AL_obj::BUFFERS_QUEUED,HX_("BUFFERS_QUEUED",5f,78,ce,71)},
	{::hx::fsInt,(void *) &AL_obj::BUFFERS_PROCESSED,HX_("BUFFERS_PROCESSED",42,9d,62,ac)},
	{::hx::fsInt,(void *) &AL_obj::REFERENCE_DISTANCE,HX_("REFERENCE_DISTANCE",89,d5,ce,9a)},
	{::hx::fsInt,(void *) &AL_obj::ROLLOFF_FACTOR,HX_("ROLLOFF_FACTOR",bc,10,98,56)},
	{::hx::fsInt,(void *) &AL_obj::CONE_OUTER_GAIN,HX_("CONE_OUTER_GAIN",3f,da,8d,e3)},
	{::hx::fsInt,(void *) &AL_obj::MAX_DISTANCE,HX_("MAX_DISTANCE",90,83,bb,a5)},
	{::hx::fsInt,(void *) &AL_obj::SEC_OFFSET,HX_("SEC_OFFSET",e1,5d,a3,ac)},
	{::hx::fsInt,(void *) &AL_obj::SAMPLE_OFFSET,HX_("SAMPLE_OFFSET",48,82,ac,b4)},
	{::hx::fsInt,(void *) &AL_obj::BYTE_OFFSET,HX_("BYTE_OFFSET",2a,df,43,36)},
	{::hx::fsInt,(void *) &AL_obj::SOURCE_TYPE,HX_("SOURCE_TYPE",de,ff,00,df)},
	{::hx::fsInt,(void *) &AL_obj::STATIC,HX_("STATIC",ae,88,7e,b8)},
	{::hx::fsInt,(void *) &AL_obj::STREAMING,HX_("STREAMING",42,38,7b,b1)},
	{::hx::fsInt,(void *) &AL_obj::UNDETERMINED,HX_("UNDETERMINED",0a,ed,9d,50)},
	{::hx::fsInt,(void *) &AL_obj::FORMAT_MONO8,HX_("FORMAT_MONO8",6d,40,81,7a)},
	{::hx::fsInt,(void *) &AL_obj::FORMAT_MONO16,HX_("FORMAT_MONO16",10,19,97,b6)},
	{::hx::fsInt,(void *) &AL_obj::FORMAT_STEREO8,HX_("FORMAT_STEREO8",b8,19,58,da)},
	{::hx::fsInt,(void *) &AL_obj::FORMAT_STEREO16,HX_("FORMAT_STEREO16",65,61,be,32)},
	{::hx::fsInt,(void *) &AL_obj::FREQUENCY,HX_("FREQUENCY",7c,f2,42,b7)},
	{::hx::fsInt,(void *) &AL_obj::BITS,HX_("BITS",06,c3,d7,2b)},
	{::hx::fsInt,(void *) &AL_obj::CHANNELS,HX_("CHANNELS",50,3a,74,c4)},
	{::hx::fsInt,(void *) &AL_obj::SIZE,HX_("SIZE",c1,68,14,37)},
	{::hx::fsInt,(void *) &AL_obj::NO_ERROR,HX_("NO_ERROR",ea,b5,7d,2f)},
	{::hx::fsInt,(void *) &AL_obj::INVALID_NAME,HX_("INVALID_NAME",f3,7b,59,19)},
	{::hx::fsInt,(void *) &AL_obj::INVALID_ENUM,HX_("INVALID_ENUM",a9,74,70,13)},
	{::hx::fsInt,(void *) &AL_obj::INVALID_VALUE,HX_("INVALID_VALUE",a9,e8,26,b0)},
	{::hx::fsInt,(void *) &AL_obj::INVALID_OPERATION,HX_("INVALID_OPERATION",5f,b1,c8,29)},
	{::hx::fsInt,(void *) &AL_obj::OUT_OF_MEMORY,HX_("OUT_OF_MEMORY",18,f2,97,e1)},
	{::hx::fsInt,(void *) &AL_obj::VENDOR,HX_("VENDOR",88,91,19,51)},
	{::hx::fsInt,(void *) &AL_obj::VERSION,HX_("VERSION",f8,ba,c5,fc)},
	{::hx::fsInt,(void *) &AL_obj::RENDERER,HX_("RENDERER",43,55,61,0c)},
	{::hx::fsInt,(void *) &AL_obj::EXTENSIONS,HX_("EXTENSIONS",14,f0,79,7b)},
	{::hx::fsInt,(void *) &AL_obj::DOPPLER_FACTOR,HX_("DOPPLER_FACTOR",e0,6d,21,56)},
	{::hx::fsInt,(void *) &AL_obj::SPEED_OF_SOUND,HX_("SPEED_OF_SOUND",5f,3f,54,ba)},
	{::hx::fsInt,(void *) &AL_obj::DOPPLER_VELOCITY,HX_("DOPPLER_VELOCITY",6e,e1,7d,1d)},
	{::hx::fsInt,(void *) &AL_obj::DISTANCE_MODEL,HX_("DISTANCE_MODEL",bf,9b,1a,00)},
	{::hx::fsInt,(void *) &AL_obj::INVERSE_DISTANCE,HX_("INVERSE_DISTANCE",04,89,17,1d)},
	{::hx::fsInt,(void *) &AL_obj::INVERSE_DISTANCE_CLAMPED,HX_("INVERSE_DISTANCE_CLAMPED",7f,1a,32,28)},
	{::hx::fsInt,(void *) &AL_obj::LINEAR_DISTANCE,HX_("LINEAR_DISTANCE",0f,b8,c7,14)},
	{::hx::fsInt,(void *) &AL_obj::LINEAR_DISTANCE_CLAMPED,HX_("LINEAR_DISTANCE_CLAMPED",8a,cc,88,b2)},
	{::hx::fsInt,(void *) &AL_obj::EXPONENT_DISTANCE,HX_("EXPONENT_DISTANCE",45,4a,ec,c8)},
	{::hx::fsInt,(void *) &AL_obj::EXPONENT_DISTANCE_CLAMPED,HX_("EXPONENT_DISTANCE_CLAMPED",c0,84,7b,57)},
	{::hx::fsInt,(void *) &AL_obj::METERS_PER_UNIT,HX_("METERS_PER_UNIT",db,5f,ed,94)},
	{::hx::fsInt,(void *) &AL_obj::DIRECT_FILTER,HX_("DIRECT_FILTER",4e,0d,f3,01)},
	{::hx::fsInt,(void *) &AL_obj::AUXILIARY_SEND_FILTER,HX_("AUXILIARY_SEND_FILTER",f6,aa,bb,d2)},
	{::hx::fsInt,(void *) &AL_obj::AIR_ABSORPTION_FACTOR,HX_("AIR_ABSORPTION_FACTOR",ea,e3,79,c8)},
	{::hx::fsInt,(void *) &AL_obj::ROOM_ROLLOFF_FACTOR,HX_("ROOM_ROLLOFF_FACTOR",a0,b9,b9,3d)},
	{::hx::fsInt,(void *) &AL_obj::CONE_OUTER_GAINHF,HX_("CONE_OUTER_GAINHF",fd,66,68,46)},
	{::hx::fsInt,(void *) &AL_obj::DIRECT_FILTER_GAINHF_AUTO,HX_("DIRECT_FILTER_GAINHF_AUTO",40,c9,9d,c1)},
	{::hx::fsInt,(void *) &AL_obj::AUXILIARY_SEND_FILTER_GAIN_AUTO,HX_("AUXILIARY_SEND_FILTER_GAIN_AUTO",a6,94,92,7f)},
	{::hx::fsInt,(void *) &AL_obj::AUXILIARY_SEND_FILTER_GAINHF_AUTO,HX_("AUXILIARY_SEND_FILTER_GAINHF_AUTO",e8,42,b0,71)},
	{::hx::fsInt,(void *) &AL_obj::REVERB_DENSITY,HX_("REVERB_DENSITY",1b,29,21,f1)},
	{::hx::fsInt,(void *) &AL_obj::REVERB_DIFFUSION,HX_("REVERB_DIFFUSION",f8,27,26,a8)},
	{::hx::fsInt,(void *) &AL_obj::REVERB_GAIN,HX_("REVERB_GAIN",4c,61,a1,fa)},
	{::hx::fsInt,(void *) &AL_obj::REVERB_GAINHF,HX_("REVERB_GAINHF",4a,8b,b5,ee)},
	{::hx::fsInt,(void *) &AL_obj::REVERB_DECAY_TIME,HX_("REVERB_DECAY_TIME",1f,b7,71,3b)},
	{::hx::fsInt,(void *) &AL_obj::REVERB_DECAY_HFRATIO,HX_("REVERB_DECAY_HFRATIO",5b,a9,40,84)},
	{::hx::fsInt,(void *) &AL_obj::REVERB_REFLECTIONS_GAIN,HX_("REVERB_REFLECTIONS_GAIN",63,83,4b,b2)},
	{::hx::fsInt,(void *) &AL_obj::REVERB_REFLECTIONS_DELAY,HX_("REVERB_REFLECTIONS_DELAY",ff,cb,3a,98)},
	{::hx::fsInt,(void *) &AL_obj::REVERB_LATE_REVERB_GAIN,HX_("REVERB_LATE_REVERB_GAIN",c0,2b,1e,bb)},
	{::hx::fsInt,(void *) &AL_obj::REVERB_LATE_REVERB_DELAY,HX_("REVERB_LATE_REVERB_DELAY",02,75,bb,47)},
	{::hx::fsInt,(void *) &AL_obj::REVERB_AIR_ABSORPTION_GAINHF,HX_("REVERB_AIR_ABSORPTION_GAINHF",eb,94,ef,b4)},
	{::hx::fsInt,(void *) &AL_obj::REVERB_ROOM_ROLLOFF_FACTOR,HX_("REVERB_ROOM_ROLLOFF_FACTOR",73,ff,e5,a7)},
	{::hx::fsInt,(void *) &AL_obj::REVERB_DECAY_HFLIMIT,HX_("REVERB_DECAY_HFLIMIT",8b,93,1d,15)},
	{::hx::fsInt,(void *) &AL_obj::EAXREVERB_DENSITY,HX_("EAXREVERB_DENSITY",97,1e,92,06)},
	{::hx::fsInt,(void *) &AL_obj::EAXREVERB_DIFFUSION,HX_("EAXREVERB_DIFFUSION",74,74,dc,b3)},
	{::hx::fsInt,(void *) &AL_obj::EAXREVERB_GAIN,HX_("EAXREVERB_GAIN",50,66,06,c3)},
	{::hx::fsInt,(void *) &AL_obj::EAXREVERB_GAINHF,HX_("EAXREVERB_GAINHF",4e,d9,28,5e)},
	{::hx::fsInt,(void *) &AL_obj::EAXREVERB_GAINLF,HX_("EAXREVERB_GAINLF",ca,dc,28,5e)},
	{::hx::fsInt,(void *) &AL_obj::EAXREVERB_DECAY_TIME,HX_("EAXREVERB_DECAY_TIME",23,57,3e,6f)},
	{::hx::fsInt,(void *) &AL_obj::EAXREVERB_DECAY_HFRATIO,HX_("EAXREVERB_DECAY_HFRATIO",d7,e3,bc,7c)},
	{::hx::fsInt,(void *) &AL_obj::EAXREVERB_DECAY_LFRATIO,HX_("EAXREVERB_DECAY_LFRATIO",db,be,12,23)},
	{::hx::fsInt,(void *) &AL_obj::EAXREVERB_REFLECTIONS_GAIN,HX_("EAXREVERB_REFLECTIONS_GAIN",67,fe,a5,d7)},
	{::hx::fsInt,(void *) &AL_obj::EAXREVERB_REFLECTIONS_DELAY,HX_("EAXREVERB_REFLECTIONS_DELAY",7b,f4,0b,22)},
	{::hx::fsInt,(void *) &AL_obj::EAXREVERB_REFLECTIONS_PAN,HX_("EAXREVERB_REFLECTIONS_PAN",55,dc,47,41)},
	{::hx::fsInt,(void *) &AL_obj::EAXREVERB_LATE_REVERB_GAIN,HX_("EAXREVERB_LATE_REVERB_GAIN",c4,a6,78,e0)},
	{::hx::fsInt,(void *) &AL_obj::EAXREVERB_LATE_REVERB_DELAY,HX_("EAXREVERB_LATE_REVERB_DELAY",7e,9d,8c,d1)},
	{::hx::fsInt,(void *) &AL_obj::EAXREVERB_LATE_REVERB_PAN,HX_("EAXREVERB_LATE_REVERB_PAN",98,2e,1d,d3)},
	{::hx::fsInt,(void *) &AL_obj::EAXREVERB_ECHO_TIME,HX_("EAXREVERB_ECHO_TIME",76,5f,ab,de)},
	{::hx::fsInt,(void *) &AL_obj::EAXREVERB_ECHO_DEPTH,HX_("EAXREVERB_ECHO_DEPTH",5a,59,3c,be)},
	{::hx::fsInt,(void *) &AL_obj::EAXREVERB_MODULATION_TIME,HX_("EAXREVERB_MODULATION_TIME",bf,35,61,9e)},
	{::hx::fsInt,(void *) &AL_obj::EAXREVERB_MODULATION_DEPTH,HX_("EAXREVERB_MODULATION_DEPTH",f1,02,a2,bd)},
	{::hx::fsInt,(void *) &AL_obj::EAXREVERB_AIR_ABSORPTION_GAINHF,HX_("EAXREVERB_AIR_ABSORPTION_GAINHF",67,ab,24,68)},
	{::hx::fsInt,(void *) &AL_obj::EAXREVERB_HFREFERENCE,HX_("EAXREVERB_HFREFERENCE",3c,87,30,47)},
	{::hx::fsInt,(void *) &AL_obj::EAXREVERB_LFREFERENCE,HX_("EAXREVERB_LFREFERENCE",40,34,aa,4a)},
	{::hx::fsInt,(void *) &AL_obj::EAXREVERB_ROOM_ROLLOFF_FACTOR,HX_("EAXREVERB_ROOM_ROLLOFF_FACTOR",ef,3e,af,26)},
	{::hx::fsInt,(void *) &AL_obj::EAXREVERB_DECAY_HFLIMIT,HX_("EAXREVERB_DECAY_HFLIMIT",07,ce,99,0d)},
	{::hx::fsInt,(void *) &AL_obj::CHORUS_WAVEFORM,HX_("CHORUS_WAVEFORM",b6,b2,d6,08)},
	{::hx::fsInt,(void *) &AL_obj::CHORUS_PHASE,HX_("CHORUS_PHASE",42,87,ea,10)},
	{::hx::fsInt,(void *) &AL_obj::CHORUS_RATE,HX_("CHORUS_RATE",99,55,85,21)},
	{::hx::fsInt,(void *) &AL_obj::CHORUS_DEPTH,HX_("CHORUS_DEPTH",0a,50,2b,26)},
	{::hx::fsInt,(void *) &AL_obj::CHORUS_FEEDBACK,HX_("CHORUS_FEEDBACK",be,bb,ab,80)},
	{::hx::fsInt,(void *) &AL_obj::CHORUS_DELAY,HX_("CHORUS_DELAY",8a,36,28,26)},
	{::hx::fsInt,(void *) &AL_obj::DISTORTION_EDGE,HX_("DISTORTION_EDGE",9f,d2,68,0f)},
	{::hx::fsInt,(void *) &AL_obj::DISTORTION_GAIN,HX_("DISTORTION_GAIN",e1,fa,b8,10)},
	{::hx::fsInt,(void *) &AL_obj::DISTORTION_LOWPASS_CUTOFF,HX_("DISTORTION_LOWPASS_CUTOFF",09,35,ca,fa)},
	{::hx::fsInt,(void *) &AL_obj::DISTORTION_EQCENTER,HX_("DISTORTION_EQCENTER",a3,42,e8,4c)},
	{::hx::fsInt,(void *) &AL_obj::DISTORTION_EQBANDWIDTH,HX_("DISTORTION_EQBANDWIDTH",03,36,f1,f9)},
	{::hx::fsInt,(void *) &AL_obj::ECHO_DELAY,HX_("ECHO_DELAY",49,df,8c,45)},
	{::hx::fsInt,(void *) &AL_obj::ECHO_LRDELAY,HX_("ECHO_LRDELAY",83,fc,af,50)},
	{::hx::fsInt,(void *) &AL_obj::ECHO_DAMPING,HX_("ECHO_DAMPING",08,7a,d1,6d)},
	{::hx::fsInt,(void *) &AL_obj::ECHO_FEEDBACK,HX_("ECHO_FEEDBACK",5f,d4,df,a1)},
	{::hx::fsInt,(void *) &AL_obj::ECHO_SPREAD,HX_("ECHO_SPREAD",cd,87,73,ee)},
	{::hx::fsInt,(void *) &AL_obj::FLANGER_WAVEFORM,HX_("FLANGER_WAVEFORM",1b,e8,f1,82)},
	{::hx::fsInt,(void *) &AL_obj::FLANGER_PHASE,HX_("FLANGER_PHASE",bd,30,cc,5f)},
	{::hx::fsInt,(void *) &AL_obj::FLANGER_RATE,HX_("FLANGER_RATE",7e,b4,d6,19)},
	{::hx::fsInt,(void *) &AL_obj::FLANGER_DEPTH,HX_("FLANGER_DEPTH",85,f9,0c,75)},
	{::hx::fsInt,(void *) &AL_obj::FLANGER_FEEDBACK,HX_("FLANGER_FEEDBACK",23,f1,c6,fa)},
	{::hx::fsInt,(void *) &AL_obj::FLANGER_DELAY,HX_("FLANGER_DELAY",05,e0,09,75)},
	{::hx::fsInt,(void *) &AL_obj::FREQUENCY_SHIFTER_FREQUENCY,HX_("FREQUENCY_SHIFTER_FREQUENCY",89,6a,f6,79)},
	{::hx::fsInt,(void *) &AL_obj::FREQUENCY_SHIFTER_LEFT_DIRECTION,HX_("FREQUENCY_SHIFTER_LEFT_DIRECTION",7a,45,42,dd)},
	{::hx::fsInt,(void *) &AL_obj::FREQUENCY_SHIFTER_RIGHT_DIRECTION,HX_("FREQUENCY_SHIFTER_RIGHT_DIRECTION",69,94,aa,39)},
	{::hx::fsInt,(void *) &AL_obj::VOCAL_MORPHER_PHONEMEA,HX_("VOCAL_MORPHER_PHONEMEA",6f,95,1f,cc)},
	{::hx::fsInt,(void *) &AL_obj::VOCAL_MORPHER_PHONEMEA_COARSE_TUNING,HX_("VOCAL_MORPHER_PHONEMEA_COARSE_TUNING",35,a2,b2,43)},
	{::hx::fsInt,(void *) &AL_obj::VOCAL_MORPHER_PHONEMEB,HX_("VOCAL_MORPHER_PHONEMEB",70,95,1f,cc)},
	{::hx::fsInt,(void *) &AL_obj::VOCAL_MORPHER_PHONEMEB_COARSE_TUNING,HX_("VOCAL_MORPHER_PHONEMEB_COARSE_TUNING",f6,41,ae,d8)},
	{::hx::fsInt,(void *) &AL_obj::VOCAL_MORPHER_WAVEFORM,HX_("VOCAL_MORPHER_WAVEFORM",91,89,f9,d7)},
	{::hx::fsInt,(void *) &AL_obj::VOCAL_MORPHER_RATE,HX_("VOCAL_MORPHER_RATE",f4,e2,e6,46)},
	{::hx::fsInt,(void *) &AL_obj::PITCH_SHIFTER_COARSE_TUNE,HX_("PITCH_SHIFTER_COARSE_TUNE",79,b9,ea,7e)},
	{::hx::fsInt,(void *) &AL_obj::PITCH_SHIFTER_FINE_TUNE,HX_("PITCH_SHIFTER_FINE_TUNE",8e,b3,51,7c)},
	{::hx::fsInt,(void *) &AL_obj::RING_MODULATOR_FREQUENCY,HX_("RING_MODULATOR_FREQUENCY",7d,d8,54,9d)},
	{::hx::fsInt,(void *) &AL_obj::RING_MODULATOR_HIGHPASS_CUTOFF,HX_("RING_MODULATOR_HIGHPASS_CUTOFF",ba,dc,be,64)},
	{::hx::fsInt,(void *) &AL_obj::RING_MODULATOR_WAVEFORM,HX_("RING_MODULATOR_WAVEFORM",9c,bc,60,47)},
	{::hx::fsInt,(void *) &AL_obj::AUTOWAH_ATTACK_TIME,HX_("AUTOWAH_ATTACK_TIME",94,50,af,3e)},
	{::hx::fsInt,(void *) &AL_obj::AUTOWAH_RELEASE_TIME,HX_("AUTOWAH_RELEASE_TIME",75,3d,81,86)},
	{::hx::fsInt,(void *) &AL_obj::AUTOWAH_RESONANCE,HX_("AUTOWAH_RESONANCE",1e,30,30,7b)},
	{::hx::fsInt,(void *) &AL_obj::AUTOWAH_PEAK_GAIN,HX_("AUTOWAH_PEAK_GAIN",4f,df,1a,1d)},
	{::hx::fsInt,(void *) &AL_obj::COMPRESSOR_ONOFF,HX_("COMPRESSOR_ONOFF",d6,79,03,a2)},
	{::hx::fsInt,(void *) &AL_obj::EQUALIZER_LOW_GAIN,HX_("EQUALIZER_LOW_GAIN",57,24,55,3e)},
	{::hx::fsInt,(void *) &AL_obj::EQUALIZER_LOW_CUTOFF,HX_("EQUALIZER_LOW_CUTOFF",05,a9,04,4b)},
	{::hx::fsInt,(void *) &AL_obj::EQUALIZER_MID1_GAIN,HX_("EQUALIZER_MID1_GAIN",68,18,fa,22)},
	{::hx::fsInt,(void *) &AL_obj::EQUALIZER_MID1_CENTER,HX_("EQUALIZER_MID1_CENTER",fe,bd,7e,1f)},
	{::hx::fsInt,(void *) &AL_obj::EQUALIZER_MID1_WIDTH,HX_("EQUALIZER_MID1_WIDTH",dd,79,8a,b3)},
	{::hx::fsInt,(void *) &AL_obj::EQUALIZER_MID2_GAIN,HX_("EQUALIZER_MID2_GAIN",c7,74,55,89)},
	{::hx::fsInt,(void *) &AL_obj::EQUALIZER_MID2_CENTER,HX_("EQUALIZER_MID2_CENTER",1d,30,b1,58)},
	{::hx::fsInt,(void *) &AL_obj::EQUALIZER_MID2_WIDTH,HX_("EQUALIZER_MID2_WIDTH",9e,f0,1f,dd)},
	{::hx::fsInt,(void *) &AL_obj::EQUALIZER_HIGH_GAIN,HX_("EQUALIZER_HIGH_GAIN",2f,bc,38,b3)},
	{::hx::fsInt,(void *) &AL_obj::EQUALIZER_HIGH_CUTOFF,HX_("EQUALIZER_HIGH_CUTOFF",dd,e6,df,71)},
	{::hx::fsInt,(void *) &AL_obj::EFFECT_FIRST_PARAMETER,HX_("EFFECT_FIRST_PARAMETER",6c,c0,a4,de)},
	{::hx::fsInt,(void *) &AL_obj::EFFECT_LAST_PARAMETER,HX_("EFFECT_LAST_PARAMETER",4e,c8,43,5f)},
	{::hx::fsInt,(void *) &AL_obj::EFFECT_TYPE,HX_("EFFECT_TYPE",68,62,de,cb)},
	{::hx::fsInt,(void *) &AL_obj::EFFECT_NULL,HX_("EFFECT_NULL",35,0e,e4,c7)},
	{::hx::fsInt,(void *) &AL_obj::EFFECT_EAXREVERB,HX_("EFFECT_EAXREVERB",e0,74,fe,b7)},
	{::hx::fsInt,(void *) &AL_obj::EFFECT_REVERB,HX_("EFFECT_REVERB",00,09,47,fd)},
	{::hx::fsInt,(void *) &AL_obj::EFFECT_CHORUS,HX_("EFFECT_CHORUS",94,be,89,b3)},
	{::hx::fsInt,(void *) &AL_obj::EFFECT_DISTORTION,HX_("EFFECT_DISTORTION",8b,06,f2,0e)},
	{::hx::fsInt,(void *) &AL_obj::EFFECT_ECHO,HX_("EFFECT_ECHO",93,76,e3,c1)},
	{::hx::fsInt,(void *) &AL_obj::EFFECT_FLANGER,HX_("EFFECT_FLANGER",b3,33,df,68)},
	{::hx::fsInt,(void *) &AL_obj::EFFECT_FREQUENCY_SHIFTER,HX_("EFFECT_FREQUENCY_SHIFTER",de,88,b6,b3)},
	{::hx::fsInt,(void *) &AL_obj::EFFECT_VOCAL_MORPHER,HX_("EFFECT_VOCAL_MORPHER",7d,b2,94,33)},
	{::hx::fsInt,(void *) &AL_obj::EFFECT_PITCH_SHIFTER,HX_("EFFECT_PITCH_SHIFTER",02,9d,fc,c1)},
	{::hx::fsInt,(void *) &AL_obj::EFFECT_RING_MODULATOR,HX_("EFFECT_RING_MODULATOR",6e,67,28,14)},
	{::hx::fsInt,(void *) &AL_obj::FFECT_AUTOWAH,HX_("FFECT_AUTOWAH",66,05,c5,aa)},
	{::hx::fsInt,(void *) &AL_obj::EFFECT_COMPRESSOR,HX_("EFFECT_COMPRESSOR",73,67,06,f9)},
	{::hx::fsInt,(void *) &AL_obj::EFFECT_EQUALIZER,HX_("EFFECT_EQUALIZER",c4,3d,9a,01)},
	{::hx::fsInt,(void *) &AL_obj::EFFECTSLOT_EFFECT,HX_("EFFECTSLOT_EFFECT",01,1f,7b,09)},
	{::hx::fsInt,(void *) &AL_obj::EFFECTSLOT_GAIN,HX_("EFFECTSLOT_GAIN",ef,d4,a0,ad)},
	{::hx::fsInt,(void *) &AL_obj::EFFECTSLOT_AUXILIARY_SEND_AUTO,HX_("EFFECTSLOT_AUXILIARY_SEND_AUTO",bd,fc,78,cd)},
	{::hx::fsInt,(void *) &AL_obj::LOWPASS_GAIN,HX_("LOWPASS_GAIN",f9,72,4b,a1)},
	{::hx::fsInt,(void *) &AL_obj::LOWPASS_GAINHF,HX_("LOWPASS_GAINHF",37,22,49,21)},
	{::hx::fsInt,(void *) &AL_obj::HIGHPASS_GAIN,HX_("HIGHPASS_GAIN",4b,16,e0,2e)},
	{::hx::fsInt,(void *) &AL_obj::HIGHPASS_GAINLF,HX_("HIGHPASS_GAINLF",85,c1,ca,b7)},
	{::hx::fsInt,(void *) &AL_obj::BANDPASS_GAIN,HX_("BANDPASS_GAIN",98,c7,4c,03)},
	{::hx::fsInt,(void *) &AL_obj::BANDPASS_GAINLF,HX_("BANDPASS_GAINLF",12,20,c0,05)},
	{::hx::fsInt,(void *) &AL_obj::BANDPASS_GAINHF,HX_("BANDPASS_GAINHF",96,1c,c0,05)},
	{::hx::fsInt,(void *) &AL_obj::FILTER_FIRST_PARAMETER,HX_("FILTER_FIRST_PARAMETER",93,83,f5,88)},
	{::hx::fsInt,(void *) &AL_obj::FILTER_LAST_PARAMETER,HX_("FILTER_LAST_PARAMETER",07,e7,cd,6d)},
	{::hx::fsInt,(void *) &AL_obj::FILTER_TYPE,HX_("FILTER_TYPE",e1,8f,ad,5f)},
	{::hx::fsInt,(void *) &AL_obj::FILTER_NULL,HX_("FILTER_NULL",ae,3b,b3,5b)},
	{::hx::fsInt,(void *) &AL_obj::FILTER_LOWPASS,HX_("FILTER_LOWPASS",7e,84,b6,c7)},
	{::hx::fsInt,(void *) &AL_obj::FILTER_HIGHPASS,HX_("FILTER_HIGHPASS",da,f9,a4,22)},
	{::hx::fsInt,(void *) &AL_obj::FILTER_BANDPASS,HX_("FILTER_BANDPASS",ad,cb,af,fd)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void AL_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AL_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(AL_obj::FALSE,"FALSE");
	HX_MARK_MEMBER_NAME(AL_obj::TRUE,"TRUE");
	HX_MARK_MEMBER_NAME(AL_obj::SOURCE_RELATIVE,"SOURCE_RELATIVE");
	HX_MARK_MEMBER_NAME(AL_obj::CONE_INNER_ANGLE,"CONE_INNER_ANGLE");
	HX_MARK_MEMBER_NAME(AL_obj::CONE_OUTER_ANGLE,"CONE_OUTER_ANGLE");
	HX_MARK_MEMBER_NAME(AL_obj::PITCH,"PITCH");
	HX_MARK_MEMBER_NAME(AL_obj::POSITION,"POSITION");
	HX_MARK_MEMBER_NAME(AL_obj::DIRECTION,"DIRECTION");
	HX_MARK_MEMBER_NAME(AL_obj::VELOCITY,"VELOCITY");
	HX_MARK_MEMBER_NAME(AL_obj::LOOPING,"LOOPING");
	HX_MARK_MEMBER_NAME(AL_obj::BUFFER,"BUFFER");
	HX_MARK_MEMBER_NAME(AL_obj::GAIN,"GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::MIN_GAIN,"MIN_GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::MAX_GAIN,"MAX_GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::ORIENTATION,"ORIENTATION");
	HX_MARK_MEMBER_NAME(AL_obj::SOURCE_STATE,"SOURCE_STATE");
	HX_MARK_MEMBER_NAME(AL_obj::INITIAL,"INITIAL");
	HX_MARK_MEMBER_NAME(AL_obj::PLAYING,"PLAYING");
	HX_MARK_MEMBER_NAME(AL_obj::PAUSED,"PAUSED");
	HX_MARK_MEMBER_NAME(AL_obj::STOPPED,"STOPPED");
	HX_MARK_MEMBER_NAME(AL_obj::BUFFERS_QUEUED,"BUFFERS_QUEUED");
	HX_MARK_MEMBER_NAME(AL_obj::BUFFERS_PROCESSED,"BUFFERS_PROCESSED");
	HX_MARK_MEMBER_NAME(AL_obj::REFERENCE_DISTANCE,"REFERENCE_DISTANCE");
	HX_MARK_MEMBER_NAME(AL_obj::ROLLOFF_FACTOR,"ROLLOFF_FACTOR");
	HX_MARK_MEMBER_NAME(AL_obj::CONE_OUTER_GAIN,"CONE_OUTER_GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::MAX_DISTANCE,"MAX_DISTANCE");
	HX_MARK_MEMBER_NAME(AL_obj::SEC_OFFSET,"SEC_OFFSET");
	HX_MARK_MEMBER_NAME(AL_obj::SAMPLE_OFFSET,"SAMPLE_OFFSET");
	HX_MARK_MEMBER_NAME(AL_obj::BYTE_OFFSET,"BYTE_OFFSET");
	HX_MARK_MEMBER_NAME(AL_obj::SOURCE_TYPE,"SOURCE_TYPE");
	HX_MARK_MEMBER_NAME(AL_obj::STATIC,"STATIC");
	HX_MARK_MEMBER_NAME(AL_obj::STREAMING,"STREAMING");
	HX_MARK_MEMBER_NAME(AL_obj::UNDETERMINED,"UNDETERMINED");
	HX_MARK_MEMBER_NAME(AL_obj::FORMAT_MONO8,"FORMAT_MONO8");
	HX_MARK_MEMBER_NAME(AL_obj::FORMAT_MONO16,"FORMAT_MONO16");
	HX_MARK_MEMBER_NAME(AL_obj::FORMAT_STEREO8,"FORMAT_STEREO8");
	HX_MARK_MEMBER_NAME(AL_obj::FORMAT_STEREO16,"FORMAT_STEREO16");
	HX_MARK_MEMBER_NAME(AL_obj::FREQUENCY,"FREQUENCY");
	HX_MARK_MEMBER_NAME(AL_obj::BITS,"BITS");
	HX_MARK_MEMBER_NAME(AL_obj::CHANNELS,"CHANNELS");
	HX_MARK_MEMBER_NAME(AL_obj::SIZE,"SIZE");
	HX_MARK_MEMBER_NAME(AL_obj::NO_ERROR,"NO_ERROR");
	HX_MARK_MEMBER_NAME(AL_obj::INVALID_NAME,"INVALID_NAME");
	HX_MARK_MEMBER_NAME(AL_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_MARK_MEMBER_NAME(AL_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_MARK_MEMBER_NAME(AL_obj::INVALID_OPERATION,"INVALID_OPERATION");
	HX_MARK_MEMBER_NAME(AL_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_MARK_MEMBER_NAME(AL_obj::VENDOR,"VENDOR");
	HX_MARK_MEMBER_NAME(AL_obj::VERSION,"VERSION");
	HX_MARK_MEMBER_NAME(AL_obj::RENDERER,"RENDERER");
	HX_MARK_MEMBER_NAME(AL_obj::EXTENSIONS,"EXTENSIONS");
	HX_MARK_MEMBER_NAME(AL_obj::DOPPLER_FACTOR,"DOPPLER_FACTOR");
	HX_MARK_MEMBER_NAME(AL_obj::SPEED_OF_SOUND,"SPEED_OF_SOUND");
	HX_MARK_MEMBER_NAME(AL_obj::DOPPLER_VELOCITY,"DOPPLER_VELOCITY");
	HX_MARK_MEMBER_NAME(AL_obj::DISTANCE_MODEL,"DISTANCE_MODEL");
	HX_MARK_MEMBER_NAME(AL_obj::INVERSE_DISTANCE,"INVERSE_DISTANCE");
	HX_MARK_MEMBER_NAME(AL_obj::INVERSE_DISTANCE_CLAMPED,"INVERSE_DISTANCE_CLAMPED");
	HX_MARK_MEMBER_NAME(AL_obj::LINEAR_DISTANCE,"LINEAR_DISTANCE");
	HX_MARK_MEMBER_NAME(AL_obj::LINEAR_DISTANCE_CLAMPED,"LINEAR_DISTANCE_CLAMPED");
	HX_MARK_MEMBER_NAME(AL_obj::EXPONENT_DISTANCE,"EXPONENT_DISTANCE");
	HX_MARK_MEMBER_NAME(AL_obj::EXPONENT_DISTANCE_CLAMPED,"EXPONENT_DISTANCE_CLAMPED");
	HX_MARK_MEMBER_NAME(AL_obj::METERS_PER_UNIT,"METERS_PER_UNIT");
	HX_MARK_MEMBER_NAME(AL_obj::DIRECT_FILTER,"DIRECT_FILTER");
	HX_MARK_MEMBER_NAME(AL_obj::AUXILIARY_SEND_FILTER,"AUXILIARY_SEND_FILTER");
	HX_MARK_MEMBER_NAME(AL_obj::AIR_ABSORPTION_FACTOR,"AIR_ABSORPTION_FACTOR");
	HX_MARK_MEMBER_NAME(AL_obj::ROOM_ROLLOFF_FACTOR,"ROOM_ROLLOFF_FACTOR");
	HX_MARK_MEMBER_NAME(AL_obj::CONE_OUTER_GAINHF,"CONE_OUTER_GAINHF");
	HX_MARK_MEMBER_NAME(AL_obj::DIRECT_FILTER_GAINHF_AUTO,"DIRECT_FILTER_GAINHF_AUTO");
	HX_MARK_MEMBER_NAME(AL_obj::AUXILIARY_SEND_FILTER_GAIN_AUTO,"AUXILIARY_SEND_FILTER_GAIN_AUTO");
	HX_MARK_MEMBER_NAME(AL_obj::AUXILIARY_SEND_FILTER_GAINHF_AUTO,"AUXILIARY_SEND_FILTER_GAINHF_AUTO");
	HX_MARK_MEMBER_NAME(AL_obj::REVERB_DENSITY,"REVERB_DENSITY");
	HX_MARK_MEMBER_NAME(AL_obj::REVERB_DIFFUSION,"REVERB_DIFFUSION");
	HX_MARK_MEMBER_NAME(AL_obj::REVERB_GAIN,"REVERB_GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::REVERB_GAINHF,"REVERB_GAINHF");
	HX_MARK_MEMBER_NAME(AL_obj::REVERB_DECAY_TIME,"REVERB_DECAY_TIME");
	HX_MARK_MEMBER_NAME(AL_obj::REVERB_DECAY_HFRATIO,"REVERB_DECAY_HFRATIO");
	HX_MARK_MEMBER_NAME(AL_obj::REVERB_REFLECTIONS_GAIN,"REVERB_REFLECTIONS_GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::REVERB_REFLECTIONS_DELAY,"REVERB_REFLECTIONS_DELAY");
	HX_MARK_MEMBER_NAME(AL_obj::REVERB_LATE_REVERB_GAIN,"REVERB_LATE_REVERB_GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::REVERB_LATE_REVERB_DELAY,"REVERB_LATE_REVERB_DELAY");
	HX_MARK_MEMBER_NAME(AL_obj::REVERB_AIR_ABSORPTION_GAINHF,"REVERB_AIR_ABSORPTION_GAINHF");
	HX_MARK_MEMBER_NAME(AL_obj::REVERB_ROOM_ROLLOFF_FACTOR,"REVERB_ROOM_ROLLOFF_FACTOR");
	HX_MARK_MEMBER_NAME(AL_obj::REVERB_DECAY_HFLIMIT,"REVERB_DECAY_HFLIMIT");
	HX_MARK_MEMBER_NAME(AL_obj::EAXREVERB_DENSITY,"EAXREVERB_DENSITY");
	HX_MARK_MEMBER_NAME(AL_obj::EAXREVERB_DIFFUSION,"EAXREVERB_DIFFUSION");
	HX_MARK_MEMBER_NAME(AL_obj::EAXREVERB_GAIN,"EAXREVERB_GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::EAXREVERB_GAINHF,"EAXREVERB_GAINHF");
	HX_MARK_MEMBER_NAME(AL_obj::EAXREVERB_GAINLF,"EAXREVERB_GAINLF");
	HX_MARK_MEMBER_NAME(AL_obj::EAXREVERB_DECAY_TIME,"EAXREVERB_DECAY_TIME");
	HX_MARK_MEMBER_NAME(AL_obj::EAXREVERB_DECAY_HFRATIO,"EAXREVERB_DECAY_HFRATIO");
	HX_MARK_MEMBER_NAME(AL_obj::EAXREVERB_DECAY_LFRATIO,"EAXREVERB_DECAY_LFRATIO");
	HX_MARK_MEMBER_NAME(AL_obj::EAXREVERB_REFLECTIONS_GAIN,"EAXREVERB_REFLECTIONS_GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::EAXREVERB_REFLECTIONS_DELAY,"EAXREVERB_REFLECTIONS_DELAY");
	HX_MARK_MEMBER_NAME(AL_obj::EAXREVERB_REFLECTIONS_PAN,"EAXREVERB_REFLECTIONS_PAN");
	HX_MARK_MEMBER_NAME(AL_obj::EAXREVERB_LATE_REVERB_GAIN,"EAXREVERB_LATE_REVERB_GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::EAXREVERB_LATE_REVERB_DELAY,"EAXREVERB_LATE_REVERB_DELAY");
	HX_MARK_MEMBER_NAME(AL_obj::EAXREVERB_LATE_REVERB_PAN,"EAXREVERB_LATE_REVERB_PAN");
	HX_MARK_MEMBER_NAME(AL_obj::EAXREVERB_ECHO_TIME,"EAXREVERB_ECHO_TIME");
	HX_MARK_MEMBER_NAME(AL_obj::EAXREVERB_ECHO_DEPTH,"EAXREVERB_ECHO_DEPTH");
	HX_MARK_MEMBER_NAME(AL_obj::EAXREVERB_MODULATION_TIME,"EAXREVERB_MODULATION_TIME");
	HX_MARK_MEMBER_NAME(AL_obj::EAXREVERB_MODULATION_DEPTH,"EAXREVERB_MODULATION_DEPTH");
	HX_MARK_MEMBER_NAME(AL_obj::EAXREVERB_AIR_ABSORPTION_GAINHF,"EAXREVERB_AIR_ABSORPTION_GAINHF");
	HX_MARK_MEMBER_NAME(AL_obj::EAXREVERB_HFREFERENCE,"EAXREVERB_HFREFERENCE");
	HX_MARK_MEMBER_NAME(AL_obj::EAXREVERB_LFREFERENCE,"EAXREVERB_LFREFERENCE");
	HX_MARK_MEMBER_NAME(AL_obj::EAXREVERB_ROOM_ROLLOFF_FACTOR,"EAXREVERB_ROOM_ROLLOFF_FACTOR");
	HX_MARK_MEMBER_NAME(AL_obj::EAXREVERB_DECAY_HFLIMIT,"EAXREVERB_DECAY_HFLIMIT");
	HX_MARK_MEMBER_NAME(AL_obj::CHORUS_WAVEFORM,"CHORUS_WAVEFORM");
	HX_MARK_MEMBER_NAME(AL_obj::CHORUS_PHASE,"CHORUS_PHASE");
	HX_MARK_MEMBER_NAME(AL_obj::CHORUS_RATE,"CHORUS_RATE");
	HX_MARK_MEMBER_NAME(AL_obj::CHORUS_DEPTH,"CHORUS_DEPTH");
	HX_MARK_MEMBER_NAME(AL_obj::CHORUS_FEEDBACK,"CHORUS_FEEDBACK");
	HX_MARK_MEMBER_NAME(AL_obj::CHORUS_DELAY,"CHORUS_DELAY");
	HX_MARK_MEMBER_NAME(AL_obj::DISTORTION_EDGE,"DISTORTION_EDGE");
	HX_MARK_MEMBER_NAME(AL_obj::DISTORTION_GAIN,"DISTORTION_GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::DISTORTION_LOWPASS_CUTOFF,"DISTORTION_LOWPASS_CUTOFF");
	HX_MARK_MEMBER_NAME(AL_obj::DISTORTION_EQCENTER,"DISTORTION_EQCENTER");
	HX_MARK_MEMBER_NAME(AL_obj::DISTORTION_EQBANDWIDTH,"DISTORTION_EQBANDWIDTH");
	HX_MARK_MEMBER_NAME(AL_obj::ECHO_DELAY,"ECHO_DELAY");
	HX_MARK_MEMBER_NAME(AL_obj::ECHO_LRDELAY,"ECHO_LRDELAY");
	HX_MARK_MEMBER_NAME(AL_obj::ECHO_DAMPING,"ECHO_DAMPING");
	HX_MARK_MEMBER_NAME(AL_obj::ECHO_FEEDBACK,"ECHO_FEEDBACK");
	HX_MARK_MEMBER_NAME(AL_obj::ECHO_SPREAD,"ECHO_SPREAD");
	HX_MARK_MEMBER_NAME(AL_obj::FLANGER_WAVEFORM,"FLANGER_WAVEFORM");
	HX_MARK_MEMBER_NAME(AL_obj::FLANGER_PHASE,"FLANGER_PHASE");
	HX_MARK_MEMBER_NAME(AL_obj::FLANGER_RATE,"FLANGER_RATE");
	HX_MARK_MEMBER_NAME(AL_obj::FLANGER_DEPTH,"FLANGER_DEPTH");
	HX_MARK_MEMBER_NAME(AL_obj::FLANGER_FEEDBACK,"FLANGER_FEEDBACK");
	HX_MARK_MEMBER_NAME(AL_obj::FLANGER_DELAY,"FLANGER_DELAY");
	HX_MARK_MEMBER_NAME(AL_obj::FREQUENCY_SHIFTER_FREQUENCY,"FREQUENCY_SHIFTER_FREQUENCY");
	HX_MARK_MEMBER_NAME(AL_obj::FREQUENCY_SHIFTER_LEFT_DIRECTION,"FREQUENCY_SHIFTER_LEFT_DIRECTION");
	HX_MARK_MEMBER_NAME(AL_obj::FREQUENCY_SHIFTER_RIGHT_DIRECTION,"FREQUENCY_SHIFTER_RIGHT_DIRECTION");
	HX_MARK_MEMBER_NAME(AL_obj::VOCAL_MORPHER_PHONEMEA,"VOCAL_MORPHER_PHONEMEA");
	HX_MARK_MEMBER_NAME(AL_obj::VOCAL_MORPHER_PHONEMEA_COARSE_TUNING,"VOCAL_MORPHER_PHONEMEA_COARSE_TUNING");
	HX_MARK_MEMBER_NAME(AL_obj::VOCAL_MORPHER_PHONEMEB,"VOCAL_MORPHER_PHONEMEB");
	HX_MARK_MEMBER_NAME(AL_obj::VOCAL_MORPHER_PHONEMEB_COARSE_TUNING,"VOCAL_MORPHER_PHONEMEB_COARSE_TUNING");
	HX_MARK_MEMBER_NAME(AL_obj::VOCAL_MORPHER_WAVEFORM,"VOCAL_MORPHER_WAVEFORM");
	HX_MARK_MEMBER_NAME(AL_obj::VOCAL_MORPHER_RATE,"VOCAL_MORPHER_RATE");
	HX_MARK_MEMBER_NAME(AL_obj::PITCH_SHIFTER_COARSE_TUNE,"PITCH_SHIFTER_COARSE_TUNE");
	HX_MARK_MEMBER_NAME(AL_obj::PITCH_SHIFTER_FINE_TUNE,"PITCH_SHIFTER_FINE_TUNE");
	HX_MARK_MEMBER_NAME(AL_obj::RING_MODULATOR_FREQUENCY,"RING_MODULATOR_FREQUENCY");
	HX_MARK_MEMBER_NAME(AL_obj::RING_MODULATOR_HIGHPASS_CUTOFF,"RING_MODULATOR_HIGHPASS_CUTOFF");
	HX_MARK_MEMBER_NAME(AL_obj::RING_MODULATOR_WAVEFORM,"RING_MODULATOR_WAVEFORM");
	HX_MARK_MEMBER_NAME(AL_obj::AUTOWAH_ATTACK_TIME,"AUTOWAH_ATTACK_TIME");
	HX_MARK_MEMBER_NAME(AL_obj::AUTOWAH_RELEASE_TIME,"AUTOWAH_RELEASE_TIME");
	HX_MARK_MEMBER_NAME(AL_obj::AUTOWAH_RESONANCE,"AUTOWAH_RESONANCE");
	HX_MARK_MEMBER_NAME(AL_obj::AUTOWAH_PEAK_GAIN,"AUTOWAH_PEAK_GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::COMPRESSOR_ONOFF,"COMPRESSOR_ONOFF");
	HX_MARK_MEMBER_NAME(AL_obj::EQUALIZER_LOW_GAIN,"EQUALIZER_LOW_GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::EQUALIZER_LOW_CUTOFF,"EQUALIZER_LOW_CUTOFF");
	HX_MARK_MEMBER_NAME(AL_obj::EQUALIZER_MID1_GAIN,"EQUALIZER_MID1_GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::EQUALIZER_MID1_CENTER,"EQUALIZER_MID1_CENTER");
	HX_MARK_MEMBER_NAME(AL_obj::EQUALIZER_MID1_WIDTH,"EQUALIZER_MID1_WIDTH");
	HX_MARK_MEMBER_NAME(AL_obj::EQUALIZER_MID2_GAIN,"EQUALIZER_MID2_GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::EQUALIZER_MID2_CENTER,"EQUALIZER_MID2_CENTER");
	HX_MARK_MEMBER_NAME(AL_obj::EQUALIZER_MID2_WIDTH,"EQUALIZER_MID2_WIDTH");
	HX_MARK_MEMBER_NAME(AL_obj::EQUALIZER_HIGH_GAIN,"EQUALIZER_HIGH_GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::EQUALIZER_HIGH_CUTOFF,"EQUALIZER_HIGH_CUTOFF");
	HX_MARK_MEMBER_NAME(AL_obj::EFFECT_FIRST_PARAMETER,"EFFECT_FIRST_PARAMETER");
	HX_MARK_MEMBER_NAME(AL_obj::EFFECT_LAST_PARAMETER,"EFFECT_LAST_PARAMETER");
	HX_MARK_MEMBER_NAME(AL_obj::EFFECT_TYPE,"EFFECT_TYPE");
	HX_MARK_MEMBER_NAME(AL_obj::EFFECT_NULL,"EFFECT_NULL");
	HX_MARK_MEMBER_NAME(AL_obj::EFFECT_EAXREVERB,"EFFECT_EAXREVERB");
	HX_MARK_MEMBER_NAME(AL_obj::EFFECT_REVERB,"EFFECT_REVERB");
	HX_MARK_MEMBER_NAME(AL_obj::EFFECT_CHORUS,"EFFECT_CHORUS");
	HX_MARK_MEMBER_NAME(AL_obj::EFFECT_DISTORTION,"EFFECT_DISTORTION");
	HX_MARK_MEMBER_NAME(AL_obj::EFFECT_ECHO,"EFFECT_ECHO");
	HX_MARK_MEMBER_NAME(AL_obj::EFFECT_FLANGER,"EFFECT_FLANGER");
	HX_MARK_MEMBER_NAME(AL_obj::EFFECT_FREQUENCY_SHIFTER,"EFFECT_FREQUENCY_SHIFTER");
	HX_MARK_MEMBER_NAME(AL_obj::EFFECT_VOCAL_MORPHER,"EFFECT_VOCAL_MORPHER");
	HX_MARK_MEMBER_NAME(AL_obj::EFFECT_PITCH_SHIFTER,"EFFECT_PITCH_SHIFTER");
	HX_MARK_MEMBER_NAME(AL_obj::EFFECT_RING_MODULATOR,"EFFECT_RING_MODULATOR");
	HX_MARK_MEMBER_NAME(AL_obj::FFECT_AUTOWAH,"FFECT_AUTOWAH");
	HX_MARK_MEMBER_NAME(AL_obj::EFFECT_COMPRESSOR,"EFFECT_COMPRESSOR");
	HX_MARK_MEMBER_NAME(AL_obj::EFFECT_EQUALIZER,"EFFECT_EQUALIZER");
	HX_MARK_MEMBER_NAME(AL_obj::EFFECTSLOT_EFFECT,"EFFECTSLOT_EFFECT");
	HX_MARK_MEMBER_NAME(AL_obj::EFFECTSLOT_GAIN,"EFFECTSLOT_GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::EFFECTSLOT_AUXILIARY_SEND_AUTO,"EFFECTSLOT_AUXILIARY_SEND_AUTO");
	HX_MARK_MEMBER_NAME(AL_obj::LOWPASS_GAIN,"LOWPASS_GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::LOWPASS_GAINHF,"LOWPASS_GAINHF");
	HX_MARK_MEMBER_NAME(AL_obj::HIGHPASS_GAIN,"HIGHPASS_GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::HIGHPASS_GAINLF,"HIGHPASS_GAINLF");
	HX_MARK_MEMBER_NAME(AL_obj::BANDPASS_GAIN,"BANDPASS_GAIN");
	HX_MARK_MEMBER_NAME(AL_obj::BANDPASS_GAINLF,"BANDPASS_GAINLF");
	HX_MARK_MEMBER_NAME(AL_obj::BANDPASS_GAINHF,"BANDPASS_GAINHF");
	HX_MARK_MEMBER_NAME(AL_obj::FILTER_FIRST_PARAMETER,"FILTER_FIRST_PARAMETER");
	HX_MARK_MEMBER_NAME(AL_obj::FILTER_LAST_PARAMETER,"FILTER_LAST_PARAMETER");
	HX_MARK_MEMBER_NAME(AL_obj::FILTER_TYPE,"FILTER_TYPE");
	HX_MARK_MEMBER_NAME(AL_obj::FILTER_NULL,"FILTER_NULL");
	HX_MARK_MEMBER_NAME(AL_obj::FILTER_LOWPASS,"FILTER_LOWPASS");
	HX_MARK_MEMBER_NAME(AL_obj::FILTER_HIGHPASS,"FILTER_HIGHPASS");
	HX_MARK_MEMBER_NAME(AL_obj::FILTER_BANDPASS,"FILTER_BANDPASS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AL_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AL_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(AL_obj::FALSE,"FALSE");
	HX_VISIT_MEMBER_NAME(AL_obj::TRUE,"TRUE");
	HX_VISIT_MEMBER_NAME(AL_obj::SOURCE_RELATIVE,"SOURCE_RELATIVE");
	HX_VISIT_MEMBER_NAME(AL_obj::CONE_INNER_ANGLE,"CONE_INNER_ANGLE");
	HX_VISIT_MEMBER_NAME(AL_obj::CONE_OUTER_ANGLE,"CONE_OUTER_ANGLE");
	HX_VISIT_MEMBER_NAME(AL_obj::PITCH,"PITCH");
	HX_VISIT_MEMBER_NAME(AL_obj::POSITION,"POSITION");
	HX_VISIT_MEMBER_NAME(AL_obj::DIRECTION,"DIRECTION");
	HX_VISIT_MEMBER_NAME(AL_obj::VELOCITY,"VELOCITY");
	HX_VISIT_MEMBER_NAME(AL_obj::LOOPING,"LOOPING");
	HX_VISIT_MEMBER_NAME(AL_obj::BUFFER,"BUFFER");
	HX_VISIT_MEMBER_NAME(AL_obj::GAIN,"GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::MIN_GAIN,"MIN_GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::MAX_GAIN,"MAX_GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::ORIENTATION,"ORIENTATION");
	HX_VISIT_MEMBER_NAME(AL_obj::SOURCE_STATE,"SOURCE_STATE");
	HX_VISIT_MEMBER_NAME(AL_obj::INITIAL,"INITIAL");
	HX_VISIT_MEMBER_NAME(AL_obj::PLAYING,"PLAYING");
	HX_VISIT_MEMBER_NAME(AL_obj::PAUSED,"PAUSED");
	HX_VISIT_MEMBER_NAME(AL_obj::STOPPED,"STOPPED");
	HX_VISIT_MEMBER_NAME(AL_obj::BUFFERS_QUEUED,"BUFFERS_QUEUED");
	HX_VISIT_MEMBER_NAME(AL_obj::BUFFERS_PROCESSED,"BUFFERS_PROCESSED");
	HX_VISIT_MEMBER_NAME(AL_obj::REFERENCE_DISTANCE,"REFERENCE_DISTANCE");
	HX_VISIT_MEMBER_NAME(AL_obj::ROLLOFF_FACTOR,"ROLLOFF_FACTOR");
	HX_VISIT_MEMBER_NAME(AL_obj::CONE_OUTER_GAIN,"CONE_OUTER_GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::MAX_DISTANCE,"MAX_DISTANCE");
	HX_VISIT_MEMBER_NAME(AL_obj::SEC_OFFSET,"SEC_OFFSET");
	HX_VISIT_MEMBER_NAME(AL_obj::SAMPLE_OFFSET,"SAMPLE_OFFSET");
	HX_VISIT_MEMBER_NAME(AL_obj::BYTE_OFFSET,"BYTE_OFFSET");
	HX_VISIT_MEMBER_NAME(AL_obj::SOURCE_TYPE,"SOURCE_TYPE");
	HX_VISIT_MEMBER_NAME(AL_obj::STATIC,"STATIC");
	HX_VISIT_MEMBER_NAME(AL_obj::STREAMING,"STREAMING");
	HX_VISIT_MEMBER_NAME(AL_obj::UNDETERMINED,"UNDETERMINED");
	HX_VISIT_MEMBER_NAME(AL_obj::FORMAT_MONO8,"FORMAT_MONO8");
	HX_VISIT_MEMBER_NAME(AL_obj::FORMAT_MONO16,"FORMAT_MONO16");
	HX_VISIT_MEMBER_NAME(AL_obj::FORMAT_STEREO8,"FORMAT_STEREO8");
	HX_VISIT_MEMBER_NAME(AL_obj::FORMAT_STEREO16,"FORMAT_STEREO16");
	HX_VISIT_MEMBER_NAME(AL_obj::FREQUENCY,"FREQUENCY");
	HX_VISIT_MEMBER_NAME(AL_obj::BITS,"BITS");
	HX_VISIT_MEMBER_NAME(AL_obj::CHANNELS,"CHANNELS");
	HX_VISIT_MEMBER_NAME(AL_obj::SIZE,"SIZE");
	HX_VISIT_MEMBER_NAME(AL_obj::NO_ERROR,"NO_ERROR");
	HX_VISIT_MEMBER_NAME(AL_obj::INVALID_NAME,"INVALID_NAME");
	HX_VISIT_MEMBER_NAME(AL_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_VISIT_MEMBER_NAME(AL_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_VISIT_MEMBER_NAME(AL_obj::INVALID_OPERATION,"INVALID_OPERATION");
	HX_VISIT_MEMBER_NAME(AL_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_VISIT_MEMBER_NAME(AL_obj::VENDOR,"VENDOR");
	HX_VISIT_MEMBER_NAME(AL_obj::VERSION,"VERSION");
	HX_VISIT_MEMBER_NAME(AL_obj::RENDERER,"RENDERER");
	HX_VISIT_MEMBER_NAME(AL_obj::EXTENSIONS,"EXTENSIONS");
	HX_VISIT_MEMBER_NAME(AL_obj::DOPPLER_FACTOR,"DOPPLER_FACTOR");
	HX_VISIT_MEMBER_NAME(AL_obj::SPEED_OF_SOUND,"SPEED_OF_SOUND");
	HX_VISIT_MEMBER_NAME(AL_obj::DOPPLER_VELOCITY,"DOPPLER_VELOCITY");
	HX_VISIT_MEMBER_NAME(AL_obj::DISTANCE_MODEL,"DISTANCE_MODEL");
	HX_VISIT_MEMBER_NAME(AL_obj::INVERSE_DISTANCE,"INVERSE_DISTANCE");
	HX_VISIT_MEMBER_NAME(AL_obj::INVERSE_DISTANCE_CLAMPED,"INVERSE_DISTANCE_CLAMPED");
	HX_VISIT_MEMBER_NAME(AL_obj::LINEAR_DISTANCE,"LINEAR_DISTANCE");
	HX_VISIT_MEMBER_NAME(AL_obj::LINEAR_DISTANCE_CLAMPED,"LINEAR_DISTANCE_CLAMPED");
	HX_VISIT_MEMBER_NAME(AL_obj::EXPONENT_DISTANCE,"EXPONENT_DISTANCE");
	HX_VISIT_MEMBER_NAME(AL_obj::EXPONENT_DISTANCE_CLAMPED,"EXPONENT_DISTANCE_CLAMPED");
	HX_VISIT_MEMBER_NAME(AL_obj::METERS_PER_UNIT,"METERS_PER_UNIT");
	HX_VISIT_MEMBER_NAME(AL_obj::DIRECT_FILTER,"DIRECT_FILTER");
	HX_VISIT_MEMBER_NAME(AL_obj::AUXILIARY_SEND_FILTER,"AUXILIARY_SEND_FILTER");
	HX_VISIT_MEMBER_NAME(AL_obj::AIR_ABSORPTION_FACTOR,"AIR_ABSORPTION_FACTOR");
	HX_VISIT_MEMBER_NAME(AL_obj::ROOM_ROLLOFF_FACTOR,"ROOM_ROLLOFF_FACTOR");
	HX_VISIT_MEMBER_NAME(AL_obj::CONE_OUTER_GAINHF,"CONE_OUTER_GAINHF");
	HX_VISIT_MEMBER_NAME(AL_obj::DIRECT_FILTER_GAINHF_AUTO,"DIRECT_FILTER_GAINHF_AUTO");
	HX_VISIT_MEMBER_NAME(AL_obj::AUXILIARY_SEND_FILTER_GAIN_AUTO,"AUXILIARY_SEND_FILTER_GAIN_AUTO");
	HX_VISIT_MEMBER_NAME(AL_obj::AUXILIARY_SEND_FILTER_GAINHF_AUTO,"AUXILIARY_SEND_FILTER_GAINHF_AUTO");
	HX_VISIT_MEMBER_NAME(AL_obj::REVERB_DENSITY,"REVERB_DENSITY");
	HX_VISIT_MEMBER_NAME(AL_obj::REVERB_DIFFUSION,"REVERB_DIFFUSION");
	HX_VISIT_MEMBER_NAME(AL_obj::REVERB_GAIN,"REVERB_GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::REVERB_GAINHF,"REVERB_GAINHF");
	HX_VISIT_MEMBER_NAME(AL_obj::REVERB_DECAY_TIME,"REVERB_DECAY_TIME");
	HX_VISIT_MEMBER_NAME(AL_obj::REVERB_DECAY_HFRATIO,"REVERB_DECAY_HFRATIO");
	HX_VISIT_MEMBER_NAME(AL_obj::REVERB_REFLECTIONS_GAIN,"REVERB_REFLECTIONS_GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::REVERB_REFLECTIONS_DELAY,"REVERB_REFLECTIONS_DELAY");
	HX_VISIT_MEMBER_NAME(AL_obj::REVERB_LATE_REVERB_GAIN,"REVERB_LATE_REVERB_GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::REVERB_LATE_REVERB_DELAY,"REVERB_LATE_REVERB_DELAY");
	HX_VISIT_MEMBER_NAME(AL_obj::REVERB_AIR_ABSORPTION_GAINHF,"REVERB_AIR_ABSORPTION_GAINHF");
	HX_VISIT_MEMBER_NAME(AL_obj::REVERB_ROOM_ROLLOFF_FACTOR,"REVERB_ROOM_ROLLOFF_FACTOR");
	HX_VISIT_MEMBER_NAME(AL_obj::REVERB_DECAY_HFLIMIT,"REVERB_DECAY_HFLIMIT");
	HX_VISIT_MEMBER_NAME(AL_obj::EAXREVERB_DENSITY,"EAXREVERB_DENSITY");
	HX_VISIT_MEMBER_NAME(AL_obj::EAXREVERB_DIFFUSION,"EAXREVERB_DIFFUSION");
	HX_VISIT_MEMBER_NAME(AL_obj::EAXREVERB_GAIN,"EAXREVERB_GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::EAXREVERB_GAINHF,"EAXREVERB_GAINHF");
	HX_VISIT_MEMBER_NAME(AL_obj::EAXREVERB_GAINLF,"EAXREVERB_GAINLF");
	HX_VISIT_MEMBER_NAME(AL_obj::EAXREVERB_DECAY_TIME,"EAXREVERB_DECAY_TIME");
	HX_VISIT_MEMBER_NAME(AL_obj::EAXREVERB_DECAY_HFRATIO,"EAXREVERB_DECAY_HFRATIO");
	HX_VISIT_MEMBER_NAME(AL_obj::EAXREVERB_DECAY_LFRATIO,"EAXREVERB_DECAY_LFRATIO");
	HX_VISIT_MEMBER_NAME(AL_obj::EAXREVERB_REFLECTIONS_GAIN,"EAXREVERB_REFLECTIONS_GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::EAXREVERB_REFLECTIONS_DELAY,"EAXREVERB_REFLECTIONS_DELAY");
	HX_VISIT_MEMBER_NAME(AL_obj::EAXREVERB_REFLECTIONS_PAN,"EAXREVERB_REFLECTIONS_PAN");
	HX_VISIT_MEMBER_NAME(AL_obj::EAXREVERB_LATE_REVERB_GAIN,"EAXREVERB_LATE_REVERB_GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::EAXREVERB_LATE_REVERB_DELAY,"EAXREVERB_LATE_REVERB_DELAY");
	HX_VISIT_MEMBER_NAME(AL_obj::EAXREVERB_LATE_REVERB_PAN,"EAXREVERB_LATE_REVERB_PAN");
	HX_VISIT_MEMBER_NAME(AL_obj::EAXREVERB_ECHO_TIME,"EAXREVERB_ECHO_TIME");
	HX_VISIT_MEMBER_NAME(AL_obj::EAXREVERB_ECHO_DEPTH,"EAXREVERB_ECHO_DEPTH");
	HX_VISIT_MEMBER_NAME(AL_obj::EAXREVERB_MODULATION_TIME,"EAXREVERB_MODULATION_TIME");
	HX_VISIT_MEMBER_NAME(AL_obj::EAXREVERB_MODULATION_DEPTH,"EAXREVERB_MODULATION_DEPTH");
	HX_VISIT_MEMBER_NAME(AL_obj::EAXREVERB_AIR_ABSORPTION_GAINHF,"EAXREVERB_AIR_ABSORPTION_GAINHF");
	HX_VISIT_MEMBER_NAME(AL_obj::EAXREVERB_HFREFERENCE,"EAXREVERB_HFREFERENCE");
	HX_VISIT_MEMBER_NAME(AL_obj::EAXREVERB_LFREFERENCE,"EAXREVERB_LFREFERENCE");
	HX_VISIT_MEMBER_NAME(AL_obj::EAXREVERB_ROOM_ROLLOFF_FACTOR,"EAXREVERB_ROOM_ROLLOFF_FACTOR");
	HX_VISIT_MEMBER_NAME(AL_obj::EAXREVERB_DECAY_HFLIMIT,"EAXREVERB_DECAY_HFLIMIT");
	HX_VISIT_MEMBER_NAME(AL_obj::CHORUS_WAVEFORM,"CHORUS_WAVEFORM");
	HX_VISIT_MEMBER_NAME(AL_obj::CHORUS_PHASE,"CHORUS_PHASE");
	HX_VISIT_MEMBER_NAME(AL_obj::CHORUS_RATE,"CHORUS_RATE");
	HX_VISIT_MEMBER_NAME(AL_obj::CHORUS_DEPTH,"CHORUS_DEPTH");
	HX_VISIT_MEMBER_NAME(AL_obj::CHORUS_FEEDBACK,"CHORUS_FEEDBACK");
	HX_VISIT_MEMBER_NAME(AL_obj::CHORUS_DELAY,"CHORUS_DELAY");
	HX_VISIT_MEMBER_NAME(AL_obj::DISTORTION_EDGE,"DISTORTION_EDGE");
	HX_VISIT_MEMBER_NAME(AL_obj::DISTORTION_GAIN,"DISTORTION_GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::DISTORTION_LOWPASS_CUTOFF,"DISTORTION_LOWPASS_CUTOFF");
	HX_VISIT_MEMBER_NAME(AL_obj::DISTORTION_EQCENTER,"DISTORTION_EQCENTER");
	HX_VISIT_MEMBER_NAME(AL_obj::DISTORTION_EQBANDWIDTH,"DISTORTION_EQBANDWIDTH");
	HX_VISIT_MEMBER_NAME(AL_obj::ECHO_DELAY,"ECHO_DELAY");
	HX_VISIT_MEMBER_NAME(AL_obj::ECHO_LRDELAY,"ECHO_LRDELAY");
	HX_VISIT_MEMBER_NAME(AL_obj::ECHO_DAMPING,"ECHO_DAMPING");
	HX_VISIT_MEMBER_NAME(AL_obj::ECHO_FEEDBACK,"ECHO_FEEDBACK");
	HX_VISIT_MEMBER_NAME(AL_obj::ECHO_SPREAD,"ECHO_SPREAD");
	HX_VISIT_MEMBER_NAME(AL_obj::FLANGER_WAVEFORM,"FLANGER_WAVEFORM");
	HX_VISIT_MEMBER_NAME(AL_obj::FLANGER_PHASE,"FLANGER_PHASE");
	HX_VISIT_MEMBER_NAME(AL_obj::FLANGER_RATE,"FLANGER_RATE");
	HX_VISIT_MEMBER_NAME(AL_obj::FLANGER_DEPTH,"FLANGER_DEPTH");
	HX_VISIT_MEMBER_NAME(AL_obj::FLANGER_FEEDBACK,"FLANGER_FEEDBACK");
	HX_VISIT_MEMBER_NAME(AL_obj::FLANGER_DELAY,"FLANGER_DELAY");
	HX_VISIT_MEMBER_NAME(AL_obj::FREQUENCY_SHIFTER_FREQUENCY,"FREQUENCY_SHIFTER_FREQUENCY");
	HX_VISIT_MEMBER_NAME(AL_obj::FREQUENCY_SHIFTER_LEFT_DIRECTION,"FREQUENCY_SHIFTER_LEFT_DIRECTION");
	HX_VISIT_MEMBER_NAME(AL_obj::FREQUENCY_SHIFTER_RIGHT_DIRECTION,"FREQUENCY_SHIFTER_RIGHT_DIRECTION");
	HX_VISIT_MEMBER_NAME(AL_obj::VOCAL_MORPHER_PHONEMEA,"VOCAL_MORPHER_PHONEMEA");
	HX_VISIT_MEMBER_NAME(AL_obj::VOCAL_MORPHER_PHONEMEA_COARSE_TUNING,"VOCAL_MORPHER_PHONEMEA_COARSE_TUNING");
	HX_VISIT_MEMBER_NAME(AL_obj::VOCAL_MORPHER_PHONEMEB,"VOCAL_MORPHER_PHONEMEB");
	HX_VISIT_MEMBER_NAME(AL_obj::VOCAL_MORPHER_PHONEMEB_COARSE_TUNING,"VOCAL_MORPHER_PHONEMEB_COARSE_TUNING");
	HX_VISIT_MEMBER_NAME(AL_obj::VOCAL_MORPHER_WAVEFORM,"VOCAL_MORPHER_WAVEFORM");
	HX_VISIT_MEMBER_NAME(AL_obj::VOCAL_MORPHER_RATE,"VOCAL_MORPHER_RATE");
	HX_VISIT_MEMBER_NAME(AL_obj::PITCH_SHIFTER_COARSE_TUNE,"PITCH_SHIFTER_COARSE_TUNE");
	HX_VISIT_MEMBER_NAME(AL_obj::PITCH_SHIFTER_FINE_TUNE,"PITCH_SHIFTER_FINE_TUNE");
	HX_VISIT_MEMBER_NAME(AL_obj::RING_MODULATOR_FREQUENCY,"RING_MODULATOR_FREQUENCY");
	HX_VISIT_MEMBER_NAME(AL_obj::RING_MODULATOR_HIGHPASS_CUTOFF,"RING_MODULATOR_HIGHPASS_CUTOFF");
	HX_VISIT_MEMBER_NAME(AL_obj::RING_MODULATOR_WAVEFORM,"RING_MODULATOR_WAVEFORM");
	HX_VISIT_MEMBER_NAME(AL_obj::AUTOWAH_ATTACK_TIME,"AUTOWAH_ATTACK_TIME");
	HX_VISIT_MEMBER_NAME(AL_obj::AUTOWAH_RELEASE_TIME,"AUTOWAH_RELEASE_TIME");
	HX_VISIT_MEMBER_NAME(AL_obj::AUTOWAH_RESONANCE,"AUTOWAH_RESONANCE");
	HX_VISIT_MEMBER_NAME(AL_obj::AUTOWAH_PEAK_GAIN,"AUTOWAH_PEAK_GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::COMPRESSOR_ONOFF,"COMPRESSOR_ONOFF");
	HX_VISIT_MEMBER_NAME(AL_obj::EQUALIZER_LOW_GAIN,"EQUALIZER_LOW_GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::EQUALIZER_LOW_CUTOFF,"EQUALIZER_LOW_CUTOFF");
	HX_VISIT_MEMBER_NAME(AL_obj::EQUALIZER_MID1_GAIN,"EQUALIZER_MID1_GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::EQUALIZER_MID1_CENTER,"EQUALIZER_MID1_CENTER");
	HX_VISIT_MEMBER_NAME(AL_obj::EQUALIZER_MID1_WIDTH,"EQUALIZER_MID1_WIDTH");
	HX_VISIT_MEMBER_NAME(AL_obj::EQUALIZER_MID2_GAIN,"EQUALIZER_MID2_GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::EQUALIZER_MID2_CENTER,"EQUALIZER_MID2_CENTER");
	HX_VISIT_MEMBER_NAME(AL_obj::EQUALIZER_MID2_WIDTH,"EQUALIZER_MID2_WIDTH");
	HX_VISIT_MEMBER_NAME(AL_obj::EQUALIZER_HIGH_GAIN,"EQUALIZER_HIGH_GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::EQUALIZER_HIGH_CUTOFF,"EQUALIZER_HIGH_CUTOFF");
	HX_VISIT_MEMBER_NAME(AL_obj::EFFECT_FIRST_PARAMETER,"EFFECT_FIRST_PARAMETER");
	HX_VISIT_MEMBER_NAME(AL_obj::EFFECT_LAST_PARAMETER,"EFFECT_LAST_PARAMETER");
	HX_VISIT_MEMBER_NAME(AL_obj::EFFECT_TYPE,"EFFECT_TYPE");
	HX_VISIT_MEMBER_NAME(AL_obj::EFFECT_NULL,"EFFECT_NULL");
	HX_VISIT_MEMBER_NAME(AL_obj::EFFECT_EAXREVERB,"EFFECT_EAXREVERB");
	HX_VISIT_MEMBER_NAME(AL_obj::EFFECT_REVERB,"EFFECT_REVERB");
	HX_VISIT_MEMBER_NAME(AL_obj::EFFECT_CHORUS,"EFFECT_CHORUS");
	HX_VISIT_MEMBER_NAME(AL_obj::EFFECT_DISTORTION,"EFFECT_DISTORTION");
	HX_VISIT_MEMBER_NAME(AL_obj::EFFECT_ECHO,"EFFECT_ECHO");
	HX_VISIT_MEMBER_NAME(AL_obj::EFFECT_FLANGER,"EFFECT_FLANGER");
	HX_VISIT_MEMBER_NAME(AL_obj::EFFECT_FREQUENCY_SHIFTER,"EFFECT_FREQUENCY_SHIFTER");
	HX_VISIT_MEMBER_NAME(AL_obj::EFFECT_VOCAL_MORPHER,"EFFECT_VOCAL_MORPHER");
	HX_VISIT_MEMBER_NAME(AL_obj::EFFECT_PITCH_SHIFTER,"EFFECT_PITCH_SHIFTER");
	HX_VISIT_MEMBER_NAME(AL_obj::EFFECT_RING_MODULATOR,"EFFECT_RING_MODULATOR");
	HX_VISIT_MEMBER_NAME(AL_obj::FFECT_AUTOWAH,"FFECT_AUTOWAH");
	HX_VISIT_MEMBER_NAME(AL_obj::EFFECT_COMPRESSOR,"EFFECT_COMPRESSOR");
	HX_VISIT_MEMBER_NAME(AL_obj::EFFECT_EQUALIZER,"EFFECT_EQUALIZER");
	HX_VISIT_MEMBER_NAME(AL_obj::EFFECTSLOT_EFFECT,"EFFECTSLOT_EFFECT");
	HX_VISIT_MEMBER_NAME(AL_obj::EFFECTSLOT_GAIN,"EFFECTSLOT_GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::EFFECTSLOT_AUXILIARY_SEND_AUTO,"EFFECTSLOT_AUXILIARY_SEND_AUTO");
	HX_VISIT_MEMBER_NAME(AL_obj::LOWPASS_GAIN,"LOWPASS_GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::LOWPASS_GAINHF,"LOWPASS_GAINHF");
	HX_VISIT_MEMBER_NAME(AL_obj::HIGHPASS_GAIN,"HIGHPASS_GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::HIGHPASS_GAINLF,"HIGHPASS_GAINLF");
	HX_VISIT_MEMBER_NAME(AL_obj::BANDPASS_GAIN,"BANDPASS_GAIN");
	HX_VISIT_MEMBER_NAME(AL_obj::BANDPASS_GAINLF,"BANDPASS_GAINLF");
	HX_VISIT_MEMBER_NAME(AL_obj::BANDPASS_GAINHF,"BANDPASS_GAINHF");
	HX_VISIT_MEMBER_NAME(AL_obj::FILTER_FIRST_PARAMETER,"FILTER_FIRST_PARAMETER");
	HX_VISIT_MEMBER_NAME(AL_obj::FILTER_LAST_PARAMETER,"FILTER_LAST_PARAMETER");
	HX_VISIT_MEMBER_NAME(AL_obj::FILTER_TYPE,"FILTER_TYPE");
	HX_VISIT_MEMBER_NAME(AL_obj::FILTER_NULL,"FILTER_NULL");
	HX_VISIT_MEMBER_NAME(AL_obj::FILTER_LOWPASS,"FILTER_LOWPASS");
	HX_VISIT_MEMBER_NAME(AL_obj::FILTER_HIGHPASS,"FILTER_HIGHPASS");
	HX_VISIT_MEMBER_NAME(AL_obj::FILTER_BANDPASS,"FILTER_BANDPASS");
};

#endif

::hx::Class AL_obj::__mClass;

static ::String AL_obj_sStaticFields[] = {
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
	HX_("METERS_PER_UNIT",db,5f,ed,94),
	HX_("DIRECT_FILTER",4e,0d,f3,01),
	HX_("AUXILIARY_SEND_FILTER",f6,aa,bb,d2),
	HX_("AIR_ABSORPTION_FACTOR",ea,e3,79,c8),
	HX_("ROOM_ROLLOFF_FACTOR",a0,b9,b9,3d),
	HX_("CONE_OUTER_GAINHF",fd,66,68,46),
	HX_("DIRECT_FILTER_GAINHF_AUTO",40,c9,9d,c1),
	HX_("AUXILIARY_SEND_FILTER_GAIN_AUTO",a6,94,92,7f),
	HX_("AUXILIARY_SEND_FILTER_GAINHF_AUTO",e8,42,b0,71),
	HX_("REVERB_DENSITY",1b,29,21,f1),
	HX_("REVERB_DIFFUSION",f8,27,26,a8),
	HX_("REVERB_GAIN",4c,61,a1,fa),
	HX_("REVERB_GAINHF",4a,8b,b5,ee),
	HX_("REVERB_DECAY_TIME",1f,b7,71,3b),
	HX_("REVERB_DECAY_HFRATIO",5b,a9,40,84),
	HX_("REVERB_REFLECTIONS_GAIN",63,83,4b,b2),
	HX_("REVERB_REFLECTIONS_DELAY",ff,cb,3a,98),
	HX_("REVERB_LATE_REVERB_GAIN",c0,2b,1e,bb),
	HX_("REVERB_LATE_REVERB_DELAY",02,75,bb,47),
	HX_("REVERB_AIR_ABSORPTION_GAINHF",eb,94,ef,b4),
	HX_("REVERB_ROOM_ROLLOFF_FACTOR",73,ff,e5,a7),
	HX_("REVERB_DECAY_HFLIMIT",8b,93,1d,15),
	HX_("EAXREVERB_DENSITY",97,1e,92,06),
	HX_("EAXREVERB_DIFFUSION",74,74,dc,b3),
	HX_("EAXREVERB_GAIN",50,66,06,c3),
	HX_("EAXREVERB_GAINHF",4e,d9,28,5e),
	HX_("EAXREVERB_GAINLF",ca,dc,28,5e),
	HX_("EAXREVERB_DECAY_TIME",23,57,3e,6f),
	HX_("EAXREVERB_DECAY_HFRATIO",d7,e3,bc,7c),
	HX_("EAXREVERB_DECAY_LFRATIO",db,be,12,23),
	HX_("EAXREVERB_REFLECTIONS_GAIN",67,fe,a5,d7),
	HX_("EAXREVERB_REFLECTIONS_DELAY",7b,f4,0b,22),
	HX_("EAXREVERB_REFLECTIONS_PAN",55,dc,47,41),
	HX_("EAXREVERB_LATE_REVERB_GAIN",c4,a6,78,e0),
	HX_("EAXREVERB_LATE_REVERB_DELAY",7e,9d,8c,d1),
	HX_("EAXREVERB_LATE_REVERB_PAN",98,2e,1d,d3),
	HX_("EAXREVERB_ECHO_TIME",76,5f,ab,de),
	HX_("EAXREVERB_ECHO_DEPTH",5a,59,3c,be),
	HX_("EAXREVERB_MODULATION_TIME",bf,35,61,9e),
	HX_("EAXREVERB_MODULATION_DEPTH",f1,02,a2,bd),
	HX_("EAXREVERB_AIR_ABSORPTION_GAINHF",67,ab,24,68),
	HX_("EAXREVERB_HFREFERENCE",3c,87,30,47),
	HX_("EAXREVERB_LFREFERENCE",40,34,aa,4a),
	HX_("EAXREVERB_ROOM_ROLLOFF_FACTOR",ef,3e,af,26),
	HX_("EAXREVERB_DECAY_HFLIMIT",07,ce,99,0d),
	HX_("CHORUS_WAVEFORM",b6,b2,d6,08),
	HX_("CHORUS_PHASE",42,87,ea,10),
	HX_("CHORUS_RATE",99,55,85,21),
	HX_("CHORUS_DEPTH",0a,50,2b,26),
	HX_("CHORUS_FEEDBACK",be,bb,ab,80),
	HX_("CHORUS_DELAY",8a,36,28,26),
	HX_("DISTORTION_EDGE",9f,d2,68,0f),
	HX_("DISTORTION_GAIN",e1,fa,b8,10),
	HX_("DISTORTION_LOWPASS_CUTOFF",09,35,ca,fa),
	HX_("DISTORTION_EQCENTER",a3,42,e8,4c),
	HX_("DISTORTION_EQBANDWIDTH",03,36,f1,f9),
	HX_("ECHO_DELAY",49,df,8c,45),
	HX_("ECHO_LRDELAY",83,fc,af,50),
	HX_("ECHO_DAMPING",08,7a,d1,6d),
	HX_("ECHO_FEEDBACK",5f,d4,df,a1),
	HX_("ECHO_SPREAD",cd,87,73,ee),
	HX_("FLANGER_WAVEFORM",1b,e8,f1,82),
	HX_("FLANGER_PHASE",bd,30,cc,5f),
	HX_("FLANGER_RATE",7e,b4,d6,19),
	HX_("FLANGER_DEPTH",85,f9,0c,75),
	HX_("FLANGER_FEEDBACK",23,f1,c6,fa),
	HX_("FLANGER_DELAY",05,e0,09,75),
	HX_("FREQUENCY_SHIFTER_FREQUENCY",89,6a,f6,79),
	HX_("FREQUENCY_SHIFTER_LEFT_DIRECTION",7a,45,42,dd),
	HX_("FREQUENCY_SHIFTER_RIGHT_DIRECTION",69,94,aa,39),
	HX_("VOCAL_MORPHER_PHONEMEA",6f,95,1f,cc),
	HX_("VOCAL_MORPHER_PHONEMEA_COARSE_TUNING",35,a2,b2,43),
	HX_("VOCAL_MORPHER_PHONEMEB",70,95,1f,cc),
	HX_("VOCAL_MORPHER_PHONEMEB_COARSE_TUNING",f6,41,ae,d8),
	HX_("VOCAL_MORPHER_WAVEFORM",91,89,f9,d7),
	HX_("VOCAL_MORPHER_RATE",f4,e2,e6,46),
	HX_("PITCH_SHIFTER_COARSE_TUNE",79,b9,ea,7e),
	HX_("PITCH_SHIFTER_FINE_TUNE",8e,b3,51,7c),
	HX_("RING_MODULATOR_FREQUENCY",7d,d8,54,9d),
	HX_("RING_MODULATOR_HIGHPASS_CUTOFF",ba,dc,be,64),
	HX_("RING_MODULATOR_WAVEFORM",9c,bc,60,47),
	HX_("AUTOWAH_ATTACK_TIME",94,50,af,3e),
	HX_("AUTOWAH_RELEASE_TIME",75,3d,81,86),
	HX_("AUTOWAH_RESONANCE",1e,30,30,7b),
	HX_("AUTOWAH_PEAK_GAIN",4f,df,1a,1d),
	HX_("COMPRESSOR_ONOFF",d6,79,03,a2),
	HX_("EQUALIZER_LOW_GAIN",57,24,55,3e),
	HX_("EQUALIZER_LOW_CUTOFF",05,a9,04,4b),
	HX_("EQUALIZER_MID1_GAIN",68,18,fa,22),
	HX_("EQUALIZER_MID1_CENTER",fe,bd,7e,1f),
	HX_("EQUALIZER_MID1_WIDTH",dd,79,8a,b3),
	HX_("EQUALIZER_MID2_GAIN",c7,74,55,89),
	HX_("EQUALIZER_MID2_CENTER",1d,30,b1,58),
	HX_("EQUALIZER_MID2_WIDTH",9e,f0,1f,dd),
	HX_("EQUALIZER_HIGH_GAIN",2f,bc,38,b3),
	HX_("EQUALIZER_HIGH_CUTOFF",dd,e6,df,71),
	HX_("EFFECT_FIRST_PARAMETER",6c,c0,a4,de),
	HX_("EFFECT_LAST_PARAMETER",4e,c8,43,5f),
	HX_("EFFECT_TYPE",68,62,de,cb),
	HX_("EFFECT_NULL",35,0e,e4,c7),
	HX_("EFFECT_EAXREVERB",e0,74,fe,b7),
	HX_("EFFECT_REVERB",00,09,47,fd),
	HX_("EFFECT_CHORUS",94,be,89,b3),
	HX_("EFFECT_DISTORTION",8b,06,f2,0e),
	HX_("EFFECT_ECHO",93,76,e3,c1),
	HX_("EFFECT_FLANGER",b3,33,df,68),
	HX_("EFFECT_FREQUENCY_SHIFTER",de,88,b6,b3),
	HX_("EFFECT_VOCAL_MORPHER",7d,b2,94,33),
	HX_("EFFECT_PITCH_SHIFTER",02,9d,fc,c1),
	HX_("EFFECT_RING_MODULATOR",6e,67,28,14),
	HX_("FFECT_AUTOWAH",66,05,c5,aa),
	HX_("EFFECT_COMPRESSOR",73,67,06,f9),
	HX_("EFFECT_EQUALIZER",c4,3d,9a,01),
	HX_("EFFECTSLOT_EFFECT",01,1f,7b,09),
	HX_("EFFECTSLOT_GAIN",ef,d4,a0,ad),
	HX_("EFFECTSLOT_AUXILIARY_SEND_AUTO",bd,fc,78,cd),
	HX_("LOWPASS_GAIN",f9,72,4b,a1),
	HX_("LOWPASS_GAINHF",37,22,49,21),
	HX_("HIGHPASS_GAIN",4b,16,e0,2e),
	HX_("HIGHPASS_GAINLF",85,c1,ca,b7),
	HX_("BANDPASS_GAIN",98,c7,4c,03),
	HX_("BANDPASS_GAINLF",12,20,c0,05),
	HX_("BANDPASS_GAINHF",96,1c,c0,05),
	HX_("FILTER_FIRST_PARAMETER",93,83,f5,88),
	HX_("FILTER_LAST_PARAMETER",07,e7,cd,6d),
	HX_("FILTER_TYPE",e1,8f,ad,5f),
	HX_("FILTER_NULL",ae,3b,b3,5b),
	HX_("FILTER_LOWPASS",7e,84,b6,c7),
	HX_("FILTER_HIGHPASS",da,f9,a4,22),
	HX_("FILTER_BANDPASS",ad,cb,af,fd),
	HX_("removeDirectFilter",25,62,a4,60),
	HX_("removeSend",ac,c7,6f,c9),
	HX_("auxf",e2,e2,76,40),
	HX_("auxfv",54,a3,8f,27),
	HX_("auxi",e5,e2,76,40),
	HX_("auxiv",f1,a5,8f,27),
	HX_("bufferData",4a,bf,73,93),
	HX_("buffer3f",d3,29,fe,ac),
	HX_("buffer3i",d6,29,fe,ac),
	HX_("bufferf",66,a3,90,b1),
	HX_("bufferfv",50,56,fe,ac),
	HX_("bufferi",69,a3,90,b1),
	HX_("bufferiv",ed,58,fe,ac),
	HX_("createAux",68,d7,d7,49),
	HX_("createBuffer",1c,fd,e9,f2),
	HX_("createEffect",ad,9a,f8,82),
	HX_("createFilter",d4,5f,8a,a7),
	HX_("createSource",f7,f0,86,54),
	HX_("deleteBuffer",8b,e3,2c,37),
	HX_("deleteBuffers",88,36,1a,10),
	HX_("deleteSource",66,d7,c9,98),
	HX_("deleteSources",4d,a2,d2,17),
	HX_("disable",e8,69,58,b1),
	HX_("distanceModel",34,40,e1,d3),
	HX_("dopplerFactor",dd,2d,05,6f),
	HX_("dopplerVelocity",ab,76,cf,06),
	HX_("effectf",b5,e4,4b,2e),
	HX_("effectfv",21,3a,1c,54),
	HX_("effecti",b8,e4,4b,2e),
	HX_("effectiv",be,3c,1c,54),
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
	HX_("getDouble",47,b4,21,af),
	HX_("getDoublev",4f,0a,5c,8e),
	HX_("getEnumValue",3a,9d,5d,37),
	HX_("getError",52,db,00,d3),
	HX_("getErrorString",c3,c1,3b,87),
	HX_("getFilteri",bb,27,a8,58),
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
	HX_("getParameter",33,d2,06,58),
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
	HX_("isAux",3a,2b,48,c1),
	HX_("isEffect",1b,f6,0c,b9),
	HX_("isFilter",42,bb,9e,dd),
	HX_("isSource",65,4c,9b,8a),
	HX_("listener3f",47,32,0a,29),
	HX_("listener3i",4a,32,0a,29),
	HX_("listenerf",72,65,8e,f3),
	HX_("listenerfv",c4,5e,0a,29),
	HX_("listeneri",75,65,8e,f3),
	HX_("listeneriv",61,61,0a,29),
	HX_("source3f",6e,0a,a4,66),
	HX_("source3i",71,0a,a4,66),
	HX_("sourcef",2b,0f,49,b9),
	HX_("sourcefv",eb,36,a4,66),
	HX_("sourcei",2e,0f,49,b9),
	HX_("filteri",b1,a1,46,09),
	HX_("filterf",ae,a1,46,09),
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
	::String(null())
};

void AL_obj::__register()
{
	AL_obj _hx_dummy;
	AL_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.media.openal.AL",21,39,77,65);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AL_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AL_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AL_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< AL_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AL_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AL_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AL_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void AL_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_15_boot)
HXDLIN(  15)		NONE = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_16_boot)
HXDLIN(  16)		FALSE = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_17_boot)
HXDLIN(  17)		TRUE = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_18_boot)
HXDLIN(  18)		SOURCE_RELATIVE = 514;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_19_boot)
HXDLIN(  19)		CONE_INNER_ANGLE = 4097;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_20_boot)
HXDLIN(  20)		CONE_OUTER_ANGLE = 4098;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_21_boot)
HXDLIN(  21)		PITCH = 4099;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_22_boot)
HXDLIN(  22)		POSITION = 4100;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_23_boot)
HXDLIN(  23)		DIRECTION = 4101;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_24_boot)
HXDLIN(  24)		VELOCITY = 4102;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_25_boot)
HXDLIN(  25)		LOOPING = 4103;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_26_boot)
HXDLIN(  26)		BUFFER = 4105;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_27_boot)
HXDLIN(  27)		GAIN = 4106;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_28_boot)
HXDLIN(  28)		MIN_GAIN = 4109;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_29_boot)
HXDLIN(  29)		MAX_GAIN = 4110;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_30_boot)
HXDLIN(  30)		ORIENTATION = 4111;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_31_boot)
HXDLIN(  31)		SOURCE_STATE = 4112;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_32_boot)
HXDLIN(  32)		INITIAL = 4113;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_33_boot)
HXDLIN(  33)		PLAYING = 4114;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_34_boot)
HXDLIN(  34)		PAUSED = 4115;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_35_boot)
HXDLIN(  35)		STOPPED = 4116;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_36_boot)
HXDLIN(  36)		BUFFERS_QUEUED = 4117;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_37_boot)
HXDLIN(  37)		BUFFERS_PROCESSED = 4118;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_38_boot)
HXDLIN(  38)		REFERENCE_DISTANCE = 4128;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_39_boot)
HXDLIN(  39)		ROLLOFF_FACTOR = 4129;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_40_boot)
HXDLIN(  40)		CONE_OUTER_GAIN = 4130;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_41_boot)
HXDLIN(  41)		MAX_DISTANCE = 4131;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_42_boot)
HXDLIN(  42)		SEC_OFFSET = 4132;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_43_boot)
HXDLIN(  43)		SAMPLE_OFFSET = 4133;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_44_boot)
HXDLIN(  44)		BYTE_OFFSET = 4134;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_45_boot)
HXDLIN(  45)		SOURCE_TYPE = 4135;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_46_boot)
HXDLIN(  46)		STATIC = 4136;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_47_boot)
HXDLIN(  47)		STREAMING = 4137;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_48_boot)
HXDLIN(  48)		UNDETERMINED = 4144;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_49_boot)
HXDLIN(  49)		FORMAT_MONO8 = 4352;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_50_boot)
HXDLIN(  50)		FORMAT_MONO16 = 4353;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_51_boot)
HXDLIN(  51)		FORMAT_STEREO8 = 4354;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_52_boot)
HXDLIN(  52)		FORMAT_STEREO16 = 4355;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_53_boot)
HXDLIN(  53)		FREQUENCY = 8193;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_54_boot)
HXDLIN(  54)		BITS = 8194;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_55_boot)
HXDLIN(  55)		CHANNELS = 8195;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_56_boot)
HXDLIN(  56)		SIZE = 8196;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_57_boot)
HXDLIN(  57)		NO_ERROR = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_58_boot)
HXDLIN(  58)		INVALID_NAME = 40961;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_59_boot)
HXDLIN(  59)		INVALID_ENUM = 40962;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_60_boot)
HXDLIN(  60)		INVALID_VALUE = 40963;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_61_boot)
HXDLIN(  61)		INVALID_OPERATION = 40964;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_62_boot)
HXDLIN(  62)		OUT_OF_MEMORY = 40965;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_63_boot)
HXDLIN(  63)		VENDOR = 45057;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_64_boot)
HXDLIN(  64)		VERSION = 45058;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_65_boot)
HXDLIN(  65)		RENDERER = 45059;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_66_boot)
HXDLIN(  66)		EXTENSIONS = 45060;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_67_boot)
HXDLIN(  67)		DOPPLER_FACTOR = 49152;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_68_boot)
HXDLIN(  68)		SPEED_OF_SOUND = 49155;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_69_boot)
HXDLIN(  69)		DOPPLER_VELOCITY = 49153;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_70_boot)
HXDLIN(  70)		DISTANCE_MODEL = 53248;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_71_boot)
HXDLIN(  71)		INVERSE_DISTANCE = 53249;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_72_boot)
HXDLIN(  72)		INVERSE_DISTANCE_CLAMPED = 53250;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_73_boot)
HXDLIN(  73)		LINEAR_DISTANCE = 53251;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_74_boot)
HXDLIN(  74)		LINEAR_DISTANCE_CLAMPED = 53252;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_75_boot)
HXDLIN(  75)		EXPONENT_DISTANCE = 53253;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_76_boot)
HXDLIN(  76)		EXPONENT_DISTANCE_CLAMPED = 53254;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_78_boot)
HXDLIN(  78)		METERS_PER_UNIT = 131076;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_80_boot)
HXDLIN(  80)		DIRECT_FILTER = 131077;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_81_boot)
HXDLIN(  81)		AUXILIARY_SEND_FILTER = 131078;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_82_boot)
HXDLIN(  82)		AIR_ABSORPTION_FACTOR = 131079;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_83_boot)
HXDLIN(  83)		ROOM_ROLLOFF_FACTOR = 131080;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_84_boot)
HXDLIN(  84)		CONE_OUTER_GAINHF = 131081;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_85_boot)
HXDLIN(  85)		DIRECT_FILTER_GAINHF_AUTO = 131082;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_86_boot)
HXDLIN(  86)		AUXILIARY_SEND_FILTER_GAIN_AUTO = 131083;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_87_boot)
HXDLIN(  87)		AUXILIARY_SEND_FILTER_GAINHF_AUTO = 131084;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_90_boot)
HXDLIN(  90)		REVERB_DENSITY = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_91_boot)
HXDLIN(  91)		REVERB_DIFFUSION = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_92_boot)
HXDLIN(  92)		REVERB_GAIN = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_93_boot)
HXDLIN(  93)		REVERB_GAINHF = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_94_boot)
HXDLIN(  94)		REVERB_DECAY_TIME = 5;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_95_boot)
HXDLIN(  95)		REVERB_DECAY_HFRATIO = 6;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_96_boot)
HXDLIN(  96)		REVERB_REFLECTIONS_GAIN = 7;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_97_boot)
HXDLIN(  97)		REVERB_REFLECTIONS_DELAY = 8;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_98_boot)
HXDLIN(  98)		REVERB_LATE_REVERB_GAIN = 9;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_99_boot)
HXDLIN(  99)		REVERB_LATE_REVERB_DELAY = 10;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_100_boot)
HXDLIN( 100)		REVERB_AIR_ABSORPTION_GAINHF = 11;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_101_boot)
HXDLIN( 101)		REVERB_ROOM_ROLLOFF_FACTOR = 12;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_102_boot)
HXDLIN( 102)		REVERB_DECAY_HFLIMIT = 13;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_104_boot)
HXDLIN( 104)		EAXREVERB_DENSITY = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_105_boot)
HXDLIN( 105)		EAXREVERB_DIFFUSION = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_106_boot)
HXDLIN( 106)		EAXREVERB_GAIN = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_107_boot)
HXDLIN( 107)		EAXREVERB_GAINHF = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_108_boot)
HXDLIN( 108)		EAXREVERB_GAINLF = 5;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_109_boot)
HXDLIN( 109)		EAXREVERB_DECAY_TIME = 6;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_110_boot)
HXDLIN( 110)		EAXREVERB_DECAY_HFRATIO = 7;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_111_boot)
HXDLIN( 111)		EAXREVERB_DECAY_LFRATIO = 8;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_112_boot)
HXDLIN( 112)		EAXREVERB_REFLECTIONS_GAIN = 9;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_113_boot)
HXDLIN( 113)		EAXREVERB_REFLECTIONS_DELAY = 10;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_114_boot)
HXDLIN( 114)		EAXREVERB_REFLECTIONS_PAN = 11;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_115_boot)
HXDLIN( 115)		EAXREVERB_LATE_REVERB_GAIN = 12;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_116_boot)
HXDLIN( 116)		EAXREVERB_LATE_REVERB_DELAY = 13;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_117_boot)
HXDLIN( 117)		EAXREVERB_LATE_REVERB_PAN = 14;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_118_boot)
HXDLIN( 118)		EAXREVERB_ECHO_TIME = 15;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_119_boot)
HXDLIN( 119)		EAXREVERB_ECHO_DEPTH = 16;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_120_boot)
HXDLIN( 120)		EAXREVERB_MODULATION_TIME = 17;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_121_boot)
HXDLIN( 121)		EAXREVERB_MODULATION_DEPTH = 18;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_122_boot)
HXDLIN( 122)		EAXREVERB_AIR_ABSORPTION_GAINHF = 19;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_123_boot)
HXDLIN( 123)		EAXREVERB_HFREFERENCE = 20;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_124_boot)
HXDLIN( 124)		EAXREVERB_LFREFERENCE = 21;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_125_boot)
HXDLIN( 125)		EAXREVERB_ROOM_ROLLOFF_FACTOR = 22;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_126_boot)
HXDLIN( 126)		EAXREVERB_DECAY_HFLIMIT = 23;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_128_boot)
HXDLIN( 128)		CHORUS_WAVEFORM = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_129_boot)
HXDLIN( 129)		CHORUS_PHASE = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_130_boot)
HXDLIN( 130)		CHORUS_RATE = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_131_boot)
HXDLIN( 131)		CHORUS_DEPTH = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_132_boot)
HXDLIN( 132)		CHORUS_FEEDBACK = 5;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_133_boot)
HXDLIN( 133)		CHORUS_DELAY = 6;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_135_boot)
HXDLIN( 135)		DISTORTION_EDGE = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_136_boot)
HXDLIN( 136)		DISTORTION_GAIN = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_137_boot)
HXDLIN( 137)		DISTORTION_LOWPASS_CUTOFF = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_138_boot)
HXDLIN( 138)		DISTORTION_EQCENTER = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_139_boot)
HXDLIN( 139)		DISTORTION_EQBANDWIDTH = 5;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_141_boot)
HXDLIN( 141)		ECHO_DELAY = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_142_boot)
HXDLIN( 142)		ECHO_LRDELAY = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_143_boot)
HXDLIN( 143)		ECHO_DAMPING = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_144_boot)
HXDLIN( 144)		ECHO_FEEDBACK = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_145_boot)
HXDLIN( 145)		ECHO_SPREAD = 5;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_147_boot)
HXDLIN( 147)		FLANGER_WAVEFORM = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_148_boot)
HXDLIN( 148)		FLANGER_PHASE = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_149_boot)
HXDLIN( 149)		FLANGER_RATE = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_150_boot)
HXDLIN( 150)		FLANGER_DEPTH = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_151_boot)
HXDLIN( 151)		FLANGER_FEEDBACK = 5;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_152_boot)
HXDLIN( 152)		FLANGER_DELAY = 6;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_154_boot)
HXDLIN( 154)		FREQUENCY_SHIFTER_FREQUENCY = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_155_boot)
HXDLIN( 155)		FREQUENCY_SHIFTER_LEFT_DIRECTION = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_156_boot)
HXDLIN( 156)		FREQUENCY_SHIFTER_RIGHT_DIRECTION = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_158_boot)
HXDLIN( 158)		VOCAL_MORPHER_PHONEMEA = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_159_boot)
HXDLIN( 159)		VOCAL_MORPHER_PHONEMEA_COARSE_TUNING = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_160_boot)
HXDLIN( 160)		VOCAL_MORPHER_PHONEMEB = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_161_boot)
HXDLIN( 161)		VOCAL_MORPHER_PHONEMEB_COARSE_TUNING = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_162_boot)
HXDLIN( 162)		VOCAL_MORPHER_WAVEFORM = 5;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_163_boot)
HXDLIN( 163)		VOCAL_MORPHER_RATE = 6;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_165_boot)
HXDLIN( 165)		PITCH_SHIFTER_COARSE_TUNE = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_166_boot)
HXDLIN( 166)		PITCH_SHIFTER_FINE_TUNE = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_168_boot)
HXDLIN( 168)		RING_MODULATOR_FREQUENCY = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_169_boot)
HXDLIN( 169)		RING_MODULATOR_HIGHPASS_CUTOFF = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_170_boot)
HXDLIN( 170)		RING_MODULATOR_WAVEFORM = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_172_boot)
HXDLIN( 172)		AUTOWAH_ATTACK_TIME = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_173_boot)
HXDLIN( 173)		AUTOWAH_RELEASE_TIME = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_174_boot)
HXDLIN( 174)		AUTOWAH_RESONANCE = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_175_boot)
HXDLIN( 175)		AUTOWAH_PEAK_GAIN = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_177_boot)
HXDLIN( 177)		COMPRESSOR_ONOFF = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_179_boot)
HXDLIN( 179)		EQUALIZER_LOW_GAIN = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_180_boot)
HXDLIN( 180)		EQUALIZER_LOW_CUTOFF = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_181_boot)
HXDLIN( 181)		EQUALIZER_MID1_GAIN = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_182_boot)
HXDLIN( 182)		EQUALIZER_MID1_CENTER = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_183_boot)
HXDLIN( 183)		EQUALIZER_MID1_WIDTH = 5;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_184_boot)
HXDLIN( 184)		EQUALIZER_MID2_GAIN = 6;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_185_boot)
HXDLIN( 185)		EQUALIZER_MID2_CENTER = 7;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_186_boot)
HXDLIN( 186)		EQUALIZER_MID2_WIDTH = 8;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_187_boot)
HXDLIN( 187)		EQUALIZER_HIGH_GAIN = 9;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_188_boot)
HXDLIN( 188)		EQUALIZER_HIGH_CUTOFF = 10;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_190_boot)
HXDLIN( 190)		EFFECT_FIRST_PARAMETER = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_191_boot)
HXDLIN( 191)		EFFECT_LAST_PARAMETER = 32768;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_192_boot)
HXDLIN( 192)		EFFECT_TYPE = 32769;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_194_boot)
HXDLIN( 194)		EFFECT_NULL = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_195_boot)
HXDLIN( 195)		EFFECT_EAXREVERB = 32768;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_196_boot)
HXDLIN( 196)		EFFECT_REVERB = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_197_boot)
HXDLIN( 197)		EFFECT_CHORUS = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_198_boot)
HXDLIN( 198)		EFFECT_DISTORTION = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_199_boot)
HXDLIN( 199)		EFFECT_ECHO = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_200_boot)
HXDLIN( 200)		EFFECT_FLANGER = 5;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_201_boot)
HXDLIN( 201)		EFFECT_FREQUENCY_SHIFTER = 6;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_202_boot)
HXDLIN( 202)		EFFECT_VOCAL_MORPHER = 7;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_203_boot)
HXDLIN( 203)		EFFECT_PITCH_SHIFTER = 8;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_204_boot)
HXDLIN( 204)		EFFECT_RING_MODULATOR = 9;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_205_boot)
HXDLIN( 205)		FFECT_AUTOWAH = 10;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_206_boot)
HXDLIN( 206)		EFFECT_COMPRESSOR = 11;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_207_boot)
HXDLIN( 207)		EFFECT_EQUALIZER = 12;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_209_boot)
HXDLIN( 209)		EFFECTSLOT_EFFECT = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_210_boot)
HXDLIN( 210)		EFFECTSLOT_GAIN = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_211_boot)
HXDLIN( 211)		EFFECTSLOT_AUXILIARY_SEND_AUTO = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_216_boot)
HXDLIN( 216)		LOWPASS_GAIN = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_217_boot)
HXDLIN( 217)		LOWPASS_GAINHF = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_219_boot)
HXDLIN( 219)		HIGHPASS_GAIN = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_220_boot)
HXDLIN( 220)		HIGHPASS_GAINLF = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_222_boot)
HXDLIN( 222)		BANDPASS_GAIN = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_223_boot)
HXDLIN( 223)		BANDPASS_GAINLF = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_224_boot)
HXDLIN( 224)		BANDPASS_GAINHF = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_226_boot)
HXDLIN( 226)		FILTER_FIRST_PARAMETER = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_227_boot)
HXDLIN( 227)		FILTER_LAST_PARAMETER = 32768;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_228_boot)
HXDLIN( 228)		FILTER_TYPE = 32769;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_230_boot)
HXDLIN( 230)		FILTER_NULL = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_231_boot)
HXDLIN( 231)		FILTER_LOWPASS = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_232_boot)
HXDLIN( 232)		FILTER_HIGHPASS = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_87306d7050ce8f43_233_boot)
HXDLIN( 233)		FILTER_BANDPASS = 3;
            	}
}

} // end namespace lime
} // end namespace media
} // end namespace openal
