#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_ds_List
#include <haxe/ds/List.h>
#endif
#ifndef INCLUDED_haxe_ds__List_ListNode
#include <haxe/ds/_List/ListNode.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
#ifndef INCLUDED_openfl_display__internal_SamplerState
#include <openfl/display/_internal/SamplerState.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Program3D
#include <openfl/display3D/Program3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Uniform
#include <openfl/display3D/Uniform.h>
#endif
#ifndef INCLUDED_openfl_display3D_UniformMap
#include <openfl/display3D/UniformMap.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal_AGALConverter
#include <openfl/display3D/_internal/AGALConverter.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_536f681b10c755a2_81_new,"openfl.display3D.Program3D","new",0xcbd1926e,"openfl.display3D.Program3D.new","openfl/display3D/Program3D.hx",81,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_536f681b10c755a2_113_dispose,"openfl.display3D.Program3D","dispose",0x556f61ad,"openfl.display3D.Program3D.dispose","openfl/display3D/Program3D.hx",113,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_536f681b10c755a2_126_getAttributeIndex,"openfl.display3D.Program3D","getAttributeIndex",0x2e3d631a,"openfl.display3D.Program3D.getAttributeIndex","openfl/display3D/Program3D.hx",126,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_536f681b10c755a2_160_getConstantIndex,"openfl.display3D.Program3D","getConstantIndex",0x8204f5ca,"openfl.display3D.Program3D.getConstantIndex","openfl/display3D/Program3D.hx",160,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_536f681b10c755a2_388_upload,"openfl.display3D.Program3D","upload",0x91a244b3,"openfl.display3D.Program3D.upload","openfl/display3D/Program3D.hx",388,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_536f681b10c755a2_419_uploadSources,"openfl.display3D.Program3D","uploadSources",0xb1ce3ec5,"openfl.display3D.Program3D.uploadSources","openfl/display3D/Program3D.hx",419,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_536f681b10c755a2_481___buildAGALUniformList,"openfl.display3D.Program3D","__buildAGALUniformList",0x8e0fee45,"openfl.display3D.Program3D.__buildAGALUniformList","openfl/display3D/Program3D.hx",481,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_536f681b10c755a2_587___deleteShaders,"openfl.display3D.Program3D","__deleteShaders",0x8861ecb1,"openfl.display3D.Program3D.__deleteShaders","openfl/display3D/Program3D.hx",587,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_536f681b10c755a2_610___disable,"openfl.display3D.Program3D","__disable",0xc40e7b56,"openfl.display3D.Program3D.__disable","openfl/display3D/Program3D.hx",610,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_536f681b10c755a2_651___enable,"openfl.display3D.Program3D","__enable",0xe51924d5,"openfl.display3D.Program3D.__enable","openfl/display3D/Program3D.hx",651,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_536f681b10c755a2_707___flush,"openfl.display3D.Program3D","__flush",0x071c9cb2,"openfl.display3D.Program3D.__flush","openfl/display3D/Program3D.hx",707,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_536f681b10c755a2_748___getSamplerState,"openfl.display3D.Program3D","__getSamplerState",0x4314690d,"openfl.display3D.Program3D.__getSamplerState","openfl/display3D/Program3D.hx",748,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_536f681b10c755a2_752___markDirty,"openfl.display3D.Program3D","__markDirty",0xf012f9b3,"openfl.display3D.Program3D.__markDirty","openfl/display3D/Program3D.hx",752,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_536f681b10c755a2_766___processGLSLData,"openfl.display3D.Program3D","__processGLSLData",0x3f7fcc25,"openfl.display3D.Program3D.__processGLSLData","openfl/display3D/Program3D.hx",766,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_536f681b10c755a2_838___setPositionScale,"openfl.display3D.Program3D","__setPositionScale",0x1baf80f1,"openfl.display3D.Program3D.__setPositionScale","openfl/display3D/Program3D.hx",838,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_536f681b10c755a2_850___setSamplerState,"openfl.display3D.Program3D","__setSamplerState",0x3edfe619,"openfl.display3D.Program3D.__setSamplerState","openfl/display3D/Program3D.hx",850,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_536f681b10c755a2_854___uploadFromGLSL,"openfl.display3D.Program3D","__uploadFromGLSL",0x163cc3db,"openfl.display3D.Program3D.__uploadFromGLSL","openfl/display3D/Program3D.hx",854,0x0a985b04)
namespace openfl{
namespace display3D{

void Program3D_obj::__construct( ::openfl::display3D::Context3D context3D, ::Dynamic format){
            	HX_GC_STACKFRAME(&_hx_pos_536f681b10c755a2_81_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(context3D,"context3D")
            	HX_STACK_ARG(format,"format")
HXLINE(  81)
HXLINE(  82)		this->_hx___context = context3D;
HXLINE(  83)		this->_hx___format = format;
HXLINE(  85)		if (::hx::IsEq( this->_hx___format,0 )) {
HXLINE(  88)			this->_hx___agalSamplerUsageMask = 0;
HXLINE(  89)			this->_hx___agalUniforms =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE(  90)			this->_hx___agalSamplerUniforms =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE(  91)			this->_hx___agalAlphaSamplerUniforms =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE(  92)			this->_hx___agalAlphaSamplerEnabled = ::Array_obj< ::Dynamic>::__new();
            		}
            		else {
HXLINE(  96)			this->_hx___glslAttribNames = ::Array_obj< ::String >::__new();
HXLINE(  97)			this->_hx___glslAttribTypes = ::Array_obj< ::Dynamic>::__new();
HXLINE(  98)			this->_hx___glslSamplerNames = ::Array_obj< ::String >::__new();
HXLINE(  99)			this->_hx___glslUniformLocations = ::Array_obj< int >::__new();
HXLINE( 100)			this->_hx___glslUniformNames = ::Array_obj< ::String >::__new();
HXLINE( 101)			this->_hx___glslUniformTypes = ::Array_obj< ::Dynamic>::__new();
            		}
HXLINE( 104)		this->_hx___samplerStates = ::Array_obj< ::Dynamic>::__new();
            	}

Dynamic Program3D_obj::__CreateEmpty() { return new Program3D_obj; }

void *Program3D_obj::_hx_vtable = 0;

Dynamic Program3D_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Program3D_obj > _hx_result = new Program3D_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Program3D_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1a428d36;
}

void Program3D_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_536f681b10c755a2_113_dispose)
            	HX_STACK_THIS(this)
HXLINE( 113)
HXDLIN( 113)		this->_hx___deleteShaders();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Program3D_obj,dispose,(void))

int Program3D_obj::getAttributeIndex(::String name){
            	HX_STACKFRAME(&_hx_pos_536f681b10c755a2_126_getAttributeIndex)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(name,"name")
HXLINE( 126)
HXDLIN( 126)		if (::hx::IsEq( this->_hx___format,0 )) {
HXLINE( 130)			if (::StringTools_obj::startsWith(name,HX_("va",2b,67,00,00))) {
HXLINE( 132)				return ( (int)(::Std_obj::parseInt(name.substring(2,null()))) );
            			}
            			else {
HXLINE( 136)				return -1;
            			}
            		}
            		else {
HXLINE( 141)			{
HXLINE( 141)				int _g = 0;
HXDLIN( 141)				int _g1 = this->_hx___glslAttribNames->length;
HXDLIN( 141)				while((_g < _g1)){
HXLINE( 141)					_g = (_g + 1);
HXDLIN( 141)					HX_VARI( int,i) = (_g - 1);
HXLINE( 143)					if ((this->_hx___glslAttribNames->__get(i) == name)) {
HXLINE( 143)						return i;
            					}
            				}
            			}
HXLINE( 146)			return -1;
            		}
HXLINE( 126)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Program3D_obj,getAttributeIndex,return )

int Program3D_obj::getConstantIndex(::String name){
            	HX_STACKFRAME(&_hx_pos_536f681b10c755a2_160_getConstantIndex)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(name,"name")
HXLINE( 160)
HXDLIN( 160)		if (::hx::IsEq( this->_hx___format,0 )) {
HXLINE( 164)			if (::StringTools_obj::startsWith(name,HX_("vc",2d,67,00,00))) {
HXLINE( 166)				return ( (int)(::Std_obj::parseInt(name.substring(2,null()))) );
            			}
            			else {
HXLINE( 168)				if (::StringTools_obj::startsWith(name,HX_("fc",3d,59,00,00))) {
HXLINE( 170)					return ( (int)(::Std_obj::parseInt(name.substring(2,null()))) );
            				}
            				else {
HXLINE( 174)					return -1;
            				}
            			}
            		}
            		else {
HXLINE( 179)			{
HXLINE( 179)				int _g = 0;
HXDLIN( 179)				int _g1 = this->_hx___glslUniformNames->length;
HXDLIN( 179)				while((_g < _g1)){
HXLINE( 179)					_g = (_g + 1);
HXDLIN( 179)					HX_VARI( int,i) = (_g - 1);
HXLINE( 181)					if ((this->_hx___glslUniformNames->__get(i) == name)) {
HXLINE( 181)						return this->_hx___glslUniformLocations->__get(i);
            					}
            				}
            			}
HXLINE( 184)			return -1;
            		}
HXLINE( 160)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Program3D_obj,getConstantIndex,return )

void Program3D_obj::upload( ::openfl::utils::ByteArrayData vertexProgram, ::openfl::utils::ByteArrayData fragmentProgram){
            	HX_STACKFRAME(&_hx_pos_536f681b10c755a2_388_upload)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(vertexProgram,"vertexProgram")
            	HX_STACK_ARG(fragmentProgram,"fragmentProgram")
HXLINE( 388)
HXLINE( 389)		if (::hx::IsNotEq( this->_hx___format,0 )) {
HXLINE( 389)			return;
            		}
HXLINE( 392)		HX_VARI( ::Array< ::Dynamic>,samplerStates) = ::Array_obj< ::Dynamic>::__new();
HXLINE( 394)		HX_VARI( ::String,glslVertex) = ::openfl::display3D::_internal::AGALConverter_obj::convertToGLSL(vertexProgram,null());
HXLINE( 395)		HX_VARI( ::String,glslFragment) = ::openfl::display3D::_internal::AGALConverter_obj::convertToGLSL(fragmentProgram,samplerStates);
HXLINE( 397)		if ((::lime::utils::Log_obj::level == 5)) {
HXLINE( 399)			::lime::utils::Log_obj::info(glslVertex,::hx::SourceInfo(HX_("openfl/display3D/Program3D.hx",04,5b,98,0a),399,HX_("openfl.display3D.Program3D",7c,83,68,f5),HX_("upload",01,ca,59,8c)));
HXLINE( 400)			::lime::utils::Log_obj::info(glslFragment,::hx::SourceInfo(HX_("openfl/display3D/Program3D.hx",04,5b,98,0a),400,HX_("openfl.display3D.Program3D",7c,83,68,f5),HX_("upload",01,ca,59,8c)));
            		}
HXLINE( 403)		this->_hx___deleteShaders();
HXLINE( 404)		this->_hx___uploadFromGLSL(glslVertex,glslFragment);
HXLINE( 405)		this->_hx___buildAGALUniformList();
HXLINE( 407)		{
HXLINE( 407)			int _g = 0;
HXDLIN( 407)			int _g1 = samplerStates->length;
HXDLIN( 407)			while((_g < _g1)){
HXLINE( 407)				_g = (_g + 1);
HXDLIN( 407)				HX_VARI( int,i) = (_g - 1);
HXLINE( 409)				this->_hx___samplerStates[i] = samplerStates->__get(i).StaticCast<  ::openfl::display::_internal::SamplerState >();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Program3D_obj,upload,(void))

void Program3D_obj::uploadSources(::String vertexSource,::String fragmentSource){
            	HX_STACKFRAME(&_hx_pos_536f681b10c755a2_419_uploadSources)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(vertexSource,"vertexSource")
            	HX_STACK_ARG(fragmentSource,"fragmentSource")
HXLINE( 419)
HXLINE( 420)		if (::hx::IsNotEq( this->_hx___format,1 )) {
HXLINE( 420)			return;
            		}
HXLINE( 424)		HX_VARI( ::String,prefix) = HX_("#ifdef GL_ES\n\t\t\t#ifdef GL_FRAGMENT_PRECISION_HIGH\n\t\t\tprecision highp float;\n\t\t\t#else\n\t\t\tprecision mediump float;\n\t\t\t#endif\n\t\t\t#endif\n\t\t\t",10,0d,3d,d3);
HXLINE( 433)		HX_VARI( ::String,vertex) = (prefix + vertexSource);
HXLINE( 434)		HX_VARI( ::String,fragment) = (prefix + fragmentSource);
HXLINE( 436)		bool _hx_tmp;
HXDLIN( 436)		if ((vertex == this->_hx___glVertexSource)) {
HXLINE( 436)			_hx_tmp = (fragment == this->_hx___glFragmentSource);
            		}
            		else {
HXLINE( 436)			_hx_tmp = false;
            		}
HXDLIN( 436)		if (_hx_tmp) {
HXLINE( 436)			return;
            		}
HXLINE( 438)		this->_hx___processGLSLData(vertexSource,HX_("attribute",1c,70,f0,fa));
HXLINE( 439)		this->_hx___processGLSLData(vertexSource,HX_("uniform",34,41,64,b5));
HXLINE( 440)		this->_hx___processGLSLData(fragmentSource,HX_("uniform",34,41,64,b5));
HXLINE( 442)		this->_hx___deleteShaders();
HXLINE( 443)		this->_hx___uploadFromGLSL(vertex,fragment);
HXLINE( 447)		HX_VARI( ::Array< ::String >,samplerNames) = this->_hx___glslSamplerNames;
HXLINE( 448)		HX_VARI( ::Array< ::String >,attribNames) = this->_hx___glslAttribNames;
HXLINE( 449)		HX_VARI( ::Array< ::Dynamic>,attribTypes) = this->_hx___glslAttribTypes;
HXLINE( 450)		HX_VARI( ::Array< ::String >,uniformNames) = this->_hx___glslUniformNames;
HXLINE( 452)		this->_hx___glslSamplerNames = ::Array_obj< ::String >::__new();
HXLINE( 453)		this->_hx___glslAttribNames = ::Array_obj< ::String >::__new();
HXLINE( 454)		this->_hx___glslAttribTypes = ::Array_obj< ::Dynamic>::__new();
HXLINE( 455)		this->_hx___glslUniformLocations = ::Array_obj< int >::__new();
HXLINE( 457)		HX_VARI(  ::lime::_internal::backend::native::NativeOpenGLRenderContext,gl) = this->_hx___context->gl;
HXLINE( 458)		HX_VAR( int,index);
HXDLIN( 458)		HX_VAR( int,location);
HXLINE( 460)		{
HXLINE( 460)			int _g = 0;
HXDLIN( 460)			while((_g < samplerNames->length)){
HXLINE( 460)				HX_VARI( ::String,name) = samplerNames->__get(_g);
HXDLIN( 460)				_g = (_g + 1);
HXLINE( 462)				index = gl->getUniformLocation(this->_hx___glProgram,name);
HXLINE( 463)				this->_hx___glslSamplerNames[index] = name;
            			}
            		}
HXLINE( 466)		{
HXLINE( 466)			int _g1 = 0;
HXDLIN( 466)			int _g2 = attribNames->length;
HXDLIN( 466)			while((_g1 < _g2)){
HXLINE( 466)				_g1 = (_g1 + 1);
HXDLIN( 466)				HX_VARI( int,i) = (_g1 - 1);
HXLINE( 468)				index = gl->getAttribLocation(this->_hx___glProgram,attribNames->__get(i));
HXLINE( 469)				this->_hx___glslAttribNames[index] = attribNames->__get(i);
HXLINE( 470)				this->_hx___glslAttribTypes[index] = attribTypes->__get(i);
            			}
            		}
HXLINE( 473)		{
HXLINE( 473)			int _g3 = 0;
HXDLIN( 473)			int _g4 = uniformNames->length;
HXDLIN( 473)			while((_g3 < _g4)){
HXLINE( 473)				_g3 = (_g3 + 1);
HXDLIN( 473)				HX_VARI( int,i) = (_g3 - 1);
HXLINE( 475)				location = gl->getUniformLocation(this->_hx___glProgram,uniformNames->__get(i));
HXLINE( 476)				this->_hx___glslUniformLocations[i] = location;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Program3D_obj,uploadSources,(void))

void Program3D_obj::_hx___buildAGALUniformList(){
            	HX_GC_STACKFRAME(&_hx_pos_536f681b10c755a2_481___buildAGALUniformList)
            	HX_STACK_THIS(this)
HXLINE( 481)
HXLINE( 482)		if (::hx::IsEq( this->_hx___format,1 )) {
HXLINE( 482)			return;
            		}
HXLINE( 485)		HX_VARI(  ::lime::_internal::backend::native::NativeOpenGLRenderContext,gl) = this->_hx___context->gl;
HXLINE( 487)		this->_hx___agalUniforms->clear();
HXLINE( 488)		this->_hx___agalSamplerUniforms->clear();
HXLINE( 489)		this->_hx___agalAlphaSamplerUniforms->clear();
HXLINE( 490)		this->_hx___agalAlphaSamplerEnabled = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 492)		this->_hx___agalSamplerUsageMask = 0;
HXLINE( 494)		HX_VARI( int,numActive) = 0;
HXLINE( 495)		numActive = ( (int)(gl->getProgramParameter(this->_hx___glProgram,gl->ACTIVE_UNIFORMS)) );
HXLINE( 497)		HX_VARI(  ::haxe::ds::List,vertexUniforms) =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE( 498)		HX_VARI(  ::haxe::ds::List,fragmentUniforms) =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE( 500)		{
HXLINE( 500)			int _g = 0;
HXDLIN( 500)			int _g1 = numActive;
HXDLIN( 500)			while((_g < _g1)){
HXLINE( 500)				_g = (_g + 1);
HXDLIN( 500)				HX_VARI( int,i) = (_g - 1);
HXLINE( 502)				HX_VARI(  ::Dynamic,info) = gl->getActiveUniform(this->_hx___glProgram,i);
HXLINE( 503)				HX_VARI( ::String,name) = ( (::String)(info->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
HXLINE( 504)				HX_VARI( int,size) = ( (int)(info->__Field(HX_("size",c1,a0,53,4c),::hx::paccDynamic)) );
HXLINE( 505)				HX_VARI( int,uniformType) = ( (int)(info->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)) );
HXLINE( 507)				HX_VARI(  ::openfl::display3D::Uniform,uniform) =  ::openfl::display3D::Uniform_obj::__alloc( HX_CTX ,this->_hx___context);
HXLINE( 508)				uniform->name = name;
HXLINE( 509)				uniform->size = size;
HXLINE( 510)				uniform->type = uniformType;
HXLINE( 512)				uniform->location = gl->getUniformLocation(this->_hx___glProgram,uniform->name);
HXLINE( 514)				HX_VARI( int,indexBracket) = uniform->name.indexOf(HX_("[",5b,00,00,00),null());
HXLINE( 516)				if ((indexBracket >= 0)) {
HXLINE( 518)					uniform->name = uniform->name.substring(0,indexBracket);
            				}
HXLINE( 521)				switch((int)(uniform->type)){
            					case (int)35674: {
HXLINE( 524)						uniform->regCount = 2;
            					}
            					break;
            					case (int)35675: {
HXLINE( 526)						uniform->regCount = 3;
            					}
            					break;
            					case (int)35676: {
HXLINE( 528)						uniform->regCount = 4;
            					}
            					break;
            					default:{
HXLINE( 530)						uniform->regCount = 1;
            					}
            				}
HXLINE( 533)				 ::openfl::display3D::Uniform uniform1 = uniform;
HXDLIN( 533)				uniform1->regCount = (uniform1->regCount * uniform->size);
HXLINE( 535)				this->_hx___agalUniforms->add(uniform);
HXLINE( 537)				if ((uniform->name == HX_("vcPositionScale",b4,c9,c0,1f))) {
HXLINE( 539)					this->_hx___agalPositionScale = uniform;
            				}
            				else {
HXLINE( 541)					if (::StringTools_obj::startsWith(uniform->name,HX_("vc",2d,67,00,00))) {
HXLINE( 543)						uniform->regIndex = ( (int)(::Std_obj::parseInt(uniform->name.substring(2,null()))) );
HXLINE( 544)						uniform->regData = this->_hx___context->_hx___vertexConstants;
HXLINE( 545)						vertexUniforms->add(uniform);
            					}
            					else {
HXLINE( 547)						if (::StringTools_obj::startsWith(uniform->name,HX_("fc",3d,59,00,00))) {
HXLINE( 549)							uniform->regIndex = ( (int)(::Std_obj::parseInt(uniform->name.substring(2,null()))) );
HXLINE( 550)							uniform->regData = this->_hx___context->_hx___fragmentConstants;
HXLINE( 551)							fragmentUniforms->add(uniform);
            						}
            						else {
HXLINE( 553)							bool _hx_tmp;
HXDLIN( 553)							if (::StringTools_obj::startsWith(uniform->name,HX_("sampler",08,c5,c9,83))) {
HXLINE( 553)								_hx_tmp = (uniform->name.indexOf(HX_("alpha",5e,a7,96,21),null()) == -1);
            							}
            							else {
HXLINE( 553)								_hx_tmp = false;
            							}
HXDLIN( 553)							if (_hx_tmp) {
HXLINE( 555)								uniform->regIndex = ( (int)(::Std_obj::parseInt(uniform->name.substring(7,null()))) );
HXLINE( 556)								this->_hx___agalSamplerUniforms->add(uniform);
HXLINE( 558)								{
HXLINE( 558)									int _g = 0;
HXDLIN( 558)									int _g1 = uniform->regCount;
HXDLIN( 558)									while((_g < _g1)){
HXLINE( 558)										_g = (_g + 1);
HXDLIN( 558)										HX_VARI( int,reg) = (_g - 1);
HXLINE( 560)										 ::openfl::display3D::Program3D _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 560)										_hx_tmp->_hx___agalSamplerUsageMask = (_hx_tmp->_hx___agalSamplerUsageMask | (1 << (uniform->regIndex + reg)));
            									}
            								}
            							}
            							else {
HXLINE( 563)								bool _hx_tmp;
HXDLIN( 563)								if (::StringTools_obj::startsWith(uniform->name,HX_("sampler",08,c5,c9,83))) {
HXLINE( 563)									_hx_tmp = ::StringTools_obj::endsWith(uniform->name,HX_("_alpha",9f,ee,7d,1d));
            								}
            								else {
HXLINE( 563)									_hx_tmp = false;
            								}
HXDLIN( 563)								if (_hx_tmp) {
HXLINE( 565)									HX_VARI( int,len) = (uniform->name.indexOf(HX_("_",5f,00,00,00),null()) - 7);
HXLINE( 566)									uniform->regIndex = (::Std_obj::parseInt(uniform->name.substring(7,(7 + len))) + 4);
HXLINE( 567)									this->_hx___agalAlphaSamplerUniforms->add(uniform);
            								}
            								else {
HXLINE( 569)									bool _hx_tmp;
HXDLIN( 569)									if (::StringTools_obj::startsWith(uniform->name,HX_("sampler",08,c5,c9,83))) {
HXLINE( 569)										_hx_tmp = ::StringTools_obj::endsWith(uniform->name,HX_("_alphaEnabled",a2,df,12,f4));
            									}
            									else {
HXLINE( 569)										_hx_tmp = false;
            									}
HXDLIN( 569)									if (_hx_tmp) {
HXLINE( 571)										uniform->regIndex = ( (int)(::Std_obj::parseInt(uniform->name.substring(7,null()))) );
HXLINE( 572)										this->_hx___agalAlphaSamplerEnabled[uniform->regIndex] = uniform;
            									}
            								}
            							}
            						}
            					}
            				}
HXLINE( 575)				if ((::lime::utils::Log_obj::level == 5)) {
HXLINE( 577)					::lime::utils::Log_obj::verbose((((((((((HX_("",00,00,00,00) + i) + HX_(" name:",6f,1b,f0,61)) + uniform->name) + HX_(" type:",20,fc,36,e6)) + uniform->type) + HX_(" size:",39,94,44,48)) + uniform->size) + HX_(" location:",45,fc,a8,c1)) + uniform->location),::hx::SourceInfo(HX_("openfl/display3D/Program3D.hx",04,5b,98,0a),577,HX_("openfl.display3D.Program3D",7c,83,68,f5),HX_("__buildAGALUniformList",93,6f,2b,39)));
            				}
            			}
            		}
HXLINE( 581)		this->_hx___agalVertexUniformMap =  ::openfl::display3D::UniformMap_obj::__alloc( HX_CTX ,::Lambda_obj::array(vertexUniforms));
HXLINE( 582)		this->_hx___agalFragmentUniformMap =  ::openfl::display3D::UniformMap_obj::__alloc( HX_CTX ,::Lambda_obj::array(fragmentUniforms));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Program3D_obj,_hx___buildAGALUniformList,(void))

void Program3D_obj::_hx___deleteShaders(){
            	HX_STACKFRAME(&_hx_pos_536f681b10c755a2_587___deleteShaders)
            	HX_STACK_THIS(this)
HXLINE( 587)
HXLINE( 588)		HX_VARI(  ::lime::_internal::backend::native::NativeOpenGLRenderContext,gl) = this->_hx___context->gl;
HXLINE( 590)		if (::hx::IsNotNull( this->_hx___glProgram )) {
HXLINE( 592)			this->_hx___glProgram = null();
            		}
HXLINE( 595)		if (::hx::IsNotNull( this->_hx___glVertexShader )) {
HXLINE( 597)			gl->deleteShader(this->_hx___glVertexShader);
HXLINE( 598)			this->_hx___glVertexShader = null();
            		}
HXLINE( 601)		if (::hx::IsNotNull( this->_hx___glFragmentShader )) {
HXLINE( 603)			gl->deleteShader(this->_hx___glFragmentShader);
HXLINE( 604)			this->_hx___glFragmentShader = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Program3D_obj,_hx___deleteShaders,(void))

void Program3D_obj::_hx___disable(){
            	HX_STACKFRAME(&_hx_pos_536f681b10c755a2_610___disable)
            	HX_STACK_THIS(this)
HXLINE( 610)
HXDLIN( 610)		bool _hx_tmp = ::hx::IsEq( this->_hx___format,1 );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Program3D_obj,_hx___disable,(void))

void Program3D_obj::_hx___enable(){
            	HX_GC_STACKFRAME(&_hx_pos_536f681b10c755a2_651___enable)
            	HX_STACK_THIS(this)
HXLINE( 651)
HXLINE( 652)		HX_VARI(  ::lime::_internal::backend::native::NativeOpenGLRenderContext,gl) = this->_hx___context->gl;
HXLINE( 653)		gl->useProgram(this->_hx___glProgram);
HXLINE( 655)		if (::hx::IsEq( this->_hx___format,0 )) {
HXLINE( 657)			this->_hx___agalVertexUniformMap->markAllDirty();
HXLINE( 658)			this->_hx___agalFragmentUniformMap->markAllDirty();
HXLINE( 660)			{
HXLINE( 660)				 ::haxe::ds::_List::ListNode _g_head = this->_hx___agalSamplerUniforms->h;
HXDLIN( 660)				while(::hx::IsNotNull( _g_head )){
HXLINE( 660)					 ::openfl::display3D::Uniform val = ( ( ::openfl::display3D::Uniform)(_g_head->item) );
HXDLIN( 660)					_g_head = _g_head->next;
HXDLIN( 660)					HX_VARI(  ::openfl::display3D::Uniform,sampler) = val;
HXLINE( 662)					if ((sampler->regCount == 1)) {
HXLINE( 664)						gl->uniform1i(sampler->location,sampler->regIndex);
            					}
            					else {
HXLINE( 668)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("!!! TODO: uniform location on webgl",0c,47,d9,53))));
            					}
            				}
            			}
HXLINE( 672)			{
HXLINE( 672)				 ::haxe::ds::_List::ListNode _g1_head = this->_hx___agalAlphaSamplerUniforms->h;
HXDLIN( 672)				while(::hx::IsNotNull( _g1_head )){
HXLINE( 672)					 ::openfl::display3D::Uniform val = ( ( ::openfl::display3D::Uniform)(_g1_head->item) );
HXDLIN( 672)					_g1_head = _g1_head->next;
HXDLIN( 672)					HX_VARI(  ::openfl::display3D::Uniform,sampler) = val;
HXLINE( 674)					if ((sampler->regCount == 1)) {
HXLINE( 676)						gl->uniform1i(sampler->location,sampler->regIndex);
            					}
            					else {
HXLINE( 680)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("!!! TODO: uniform location on webgl",0c,47,d9,53))));
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Program3D_obj,_hx___enable,(void))

void Program3D_obj::_hx___flush(){
            	HX_STACKFRAME(&_hx_pos_536f681b10c755a2_707___flush)
            	HX_STACK_THIS(this)
HXLINE( 707)
HXDLIN( 707)		if (::hx::IsEq( this->_hx___format,0 )) {
HXLINE( 709)			this->_hx___agalVertexUniformMap->flush();
HXLINE( 710)			this->_hx___agalFragmentUniformMap->flush();
            		}
            		else {
HXLINE( 715)			return;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Program3D_obj,_hx___flush,(void))

 ::openfl::display::_internal::SamplerState Program3D_obj::_hx___getSamplerState(int sampler){
            	HX_STACKFRAME(&_hx_pos_536f681b10c755a2_748___getSamplerState)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(sampler,"sampler")
HXLINE( 748)
HXDLIN( 748)		return this->_hx___samplerStates->__get(sampler).StaticCast<  ::openfl::display::_internal::SamplerState >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Program3D_obj,_hx___getSamplerState,return )

void Program3D_obj::_hx___markDirty(bool isVertex,int index,int count){
            	HX_STACKFRAME(&_hx_pos_536f681b10c755a2_752___markDirty)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(isVertex,"isVertex")
            	HX_STACK_ARG(index,"index")
            	HX_STACK_ARG(count,"count")
HXLINE( 752)
HXLINE( 753)		if (::hx::IsEq( this->_hx___format,1 )) {
HXLINE( 753)			return;
            		}
HXLINE( 755)		if (isVertex) {
HXLINE( 757)			this->_hx___agalVertexUniformMap->markDirty(index,count);
            		}
            		else {
HXLINE( 761)			this->_hx___agalFragmentUniformMap->markDirty(index,count);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Program3D_obj,_hx___markDirty,(void))

void Program3D_obj::_hx___processGLSLData(::String source,::String storageType){
            	HX_GC_STACKFRAME(&_hx_pos_536f681b10c755a2_766___processGLSLData)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(storageType,"storageType")
HXLINE( 766)
HXLINE( 767)		HX_VARI( int,lastMatch) = 0;
HXDLIN( 767)		HX_VAR(  ::Dynamic,position);
HXDLIN( 767)		HX_VAR(  ::EReg,regex);
HXDLIN( 767)		HX_VAR( ::String,name);
HXDLIN( 767)		HX_VAR( ::String,type);
HXLINE( 769)		if ((storageType == HX_("uniform",34,41,64,b5))) {
HXLINE( 771)			regex =  ::EReg_obj::__alloc( HX_CTX ,HX_("uniform ([A-Za-z0-9]+) ([A-Za-z0-9_]+)",e3,a8,c0,f8),HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 775)			regex =  ::EReg_obj::__alloc( HX_CTX ,HX_("attribute ([A-Za-z0-9]+) ([A-Za-z0-9_]+)",fb,2e,25,cc),HX_("",00,00,00,00));
            		}
HXLINE( 778)		while(regex->matchSub(source,lastMatch,null())){
HXLINE( 780)			type = regex->matched(1);
HXLINE( 781)			name = regex->matched(2);
HXLINE( 783)			if (::StringTools_obj::startsWith(name,HX_("gl_",9a,86,4e,00))) {
HXLINE( 785)				continue;
            			}
HXLINE( 788)			if (::StringTools_obj::startsWith(type,HX_("sampler",08,c5,c9,83))) {
HXLINE( 790)				this->_hx___glslSamplerNames->push(name);
            			}
            			else {
HXLINE( 794)				HX_VAR(  ::Dynamic,parameterType);
HXDLIN( 794)				::String _hx_switch_0 = type;
            				if (  (_hx_switch_0==HX_("bool",2a,84,1b,41)) ){
HXLINE( 794)					parameterType = 0;
HXDLIN( 794)					goto _hx_goto_24;
            				}
            				if (  (_hx_switch_0==HX_("bvec2",c0,00,91,bb)) ){
HXLINE( 794)					parameterType = 1;
HXDLIN( 794)					goto _hx_goto_24;
            				}
            				if (  (_hx_switch_0==HX_("bvec3",c1,00,91,bb)) ){
HXLINE( 794)					parameterType = 2;
HXDLIN( 794)					goto _hx_goto_24;
            				}
            				if (  (_hx_switch_0==HX_("bvec4",c2,00,91,bb)) ){
HXLINE( 794)					parameterType = 3;
HXDLIN( 794)					goto _hx_goto_24;
            				}
            				if (  (_hx_switch_0==HX_("dvec2",c2,29,5e,e2)) ||  (_hx_switch_0==HX_("vec2",5e,27,4c,4e)) ){
HXLINE( 794)					parameterType = 5;
HXDLIN( 794)					goto _hx_goto_24;
            				}
            				if (  (_hx_switch_0==HX_("dvec3",c3,29,5e,e2)) ||  (_hx_switch_0==HX_("vec3",5f,27,4c,4e)) ){
HXLINE( 794)					parameterType = 6;
HXDLIN( 794)					goto _hx_goto_24;
            				}
            				if (  (_hx_switch_0==HX_("double",11,2b,cb,32)) ||  (_hx_switch_0==HX_("float",9c,c5,96,02)) ){
HXLINE( 794)					parameterType = 4;
HXDLIN( 794)					goto _hx_goto_24;
            				}
            				if (  (_hx_switch_0==HX_("ivec3",48,10,5f,c3)) ||  (_hx_switch_0==HX_("uvec3",54,06,2e,ac)) ){
HXLINE( 794)					parameterType = 10;
HXDLIN( 794)					goto _hx_goto_24;
            				}
            				if (  (_hx_switch_0==HX_("ivec4",49,10,5f,c3)) ||  (_hx_switch_0==HX_("uvec4",55,06,2e,ac)) ){
HXLINE( 794)					parameterType = 11;
HXDLIN( 794)					goto _hx_goto_24;
            				}
            				if (  (_hx_switch_0==HX_("mat2",92,41,56,48)) ||  (_hx_switch_0==HX_("mat2x2",cc,b2,97,bb)) ){
HXLINE( 794)					parameterType = 12;
HXDLIN( 794)					goto _hx_goto_24;
            				}
            				if (  (_hx_switch_0==HX_("mat2x3",cd,b2,97,bb)) ){
HXLINE( 794)					parameterType = 13;
HXDLIN( 794)					goto _hx_goto_24;
            				}
            				if (  (_hx_switch_0==HX_("mat2x4",ce,b2,97,bb)) ){
HXLINE( 794)					parameterType = 14;
HXDLIN( 794)					goto _hx_goto_24;
            				}
            				if (  (_hx_switch_0==HX_("mat3x2",0d,75,98,bb)) ){
HXLINE( 794)					parameterType = 15;
HXDLIN( 794)					goto _hx_goto_24;
            				}
            				if (  (_hx_switch_0==HX_("mat3",93,41,56,48)) ||  (_hx_switch_0==HX_("mat3x3",0e,75,98,bb)) ){
HXLINE( 794)					parameterType = 16;
HXDLIN( 794)					goto _hx_goto_24;
            				}
            				if (  (_hx_switch_0==HX_("mat3x4",0f,75,98,bb)) ){
HXLINE( 794)					parameterType = 17;
HXDLIN( 794)					goto _hx_goto_24;
            				}
            				if (  (_hx_switch_0==HX_("mat4",94,41,56,48)) ||  (_hx_switch_0==HX_("mat4x4",50,37,99,bb)) ){
HXLINE( 794)					parameterType = 20;
HXDLIN( 794)					goto _hx_goto_24;
            				}
            				if (  (_hx_switch_0==HX_("mat4x2",4e,37,99,bb)) ){
HXLINE( 794)					parameterType = 18;
HXDLIN( 794)					goto _hx_goto_24;
            				}
            				if (  (_hx_switch_0==HX_("mat4x3",4f,37,99,bb)) ){
HXLINE( 794)					parameterType = 19;
HXDLIN( 794)					goto _hx_goto_24;
            				}
            				if (  (_hx_switch_0==HX_("int",ef,0c,50,00)) ||  (_hx_switch_0==HX_("uint",9a,03,a6,4d)) ){
HXLINE( 794)					parameterType = 8;
HXDLIN( 794)					goto _hx_goto_24;
            				}
            				if (  (_hx_switch_0==HX_("ivec2",47,10,5f,c3)) ||  (_hx_switch_0==HX_("uvec2",53,06,2e,ac)) ){
HXLINE( 794)					parameterType = 9;
HXDLIN( 794)					goto _hx_goto_24;
            				}
            				if (  (_hx_switch_0==HX_("dvec4",c4,29,5e,e2)) ||  (_hx_switch_0==HX_("vec4",60,27,4c,4e)) ){
HXLINE( 794)					parameterType = 7;
HXDLIN( 794)					goto _hx_goto_24;
            				}
            				/* default */{
HXLINE( 794)					parameterType = null();
            				}
            				_hx_goto_24:;
HXLINE( 820)				if ((storageType == HX_("uniform",34,41,64,b5))) {
HXLINE( 822)					this->_hx___glslUniformNames->push(name);
HXLINE( 823)					this->_hx___glslUniformTypes->push(parameterType);
            				}
            				else {
HXLINE( 827)					this->_hx___glslAttribNames->push(name);
HXLINE( 828)					this->_hx___glslAttribTypes->push(parameterType);
            				}
            			}
HXLINE( 832)			position = regex->matchedPos();
HXLINE( 833)			lastMatch = ( (int)((position->__Field(HX_("pos",94,5d,55,00),::hx::paccDynamic) + position->__Field(HX_("len",d5,4b,52,00),::hx::paccDynamic))) );
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Program3D_obj,_hx___processGLSLData,(void))

void Program3D_obj::_hx___setPositionScale( ::lime::utils::ArrayBufferView positionScale){
            	HX_STACKFRAME(&_hx_pos_536f681b10c755a2_838___setPositionScale)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(positionScale,"positionScale")
HXLINE( 838)
HXLINE( 839)		if (::hx::IsEq( this->_hx___format,1 )) {
HXLINE( 839)			return;
            		}
HXLINE( 841)		if (::hx::IsNotNull( this->_hx___agalPositionScale )) {
HXLINE( 843)			HX_VARI(  ::lime::_internal::backend::native::NativeOpenGLRenderContext,gl) = this->_hx___context->gl;
HXLINE( 844)			{
HXLINE( 844)				int location = this->_hx___agalPositionScale->location;
HXDLIN( 844)				int _hx_tmp;
HXDLIN( 844)				if (::hx::IsNotNull( positionScale )) {
HXLINE( 844)					_hx_tmp = (positionScale->length >> 2);
            				}
            				else {
HXLINE( 844)					_hx_tmp = 0;
            				}
HXDLIN( 844)				gl->uniform4fv(location,_hx_tmp,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromArrayBufferView(positionScale));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Program3D_obj,_hx___setPositionScale,(void))

void Program3D_obj::_hx___setSamplerState(int sampler, ::openfl::display::_internal::SamplerState state){
            	HX_STACKFRAME(&_hx_pos_536f681b10c755a2_850___setSamplerState)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(sampler,"sampler")
            	HX_STACK_ARG(state,"state")
HXLINE( 850)
HXDLIN( 850)		this->_hx___samplerStates[sampler] = state;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Program3D_obj,_hx___setSamplerState,(void))

void Program3D_obj::_hx___uploadFromGLSL(::String vertexShaderSource,::String fragmentShaderSource){
            	HX_STACKFRAME(&_hx_pos_536f681b10c755a2_854___uploadFromGLSL)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(vertexShaderSource,"vertexShaderSource")
            	HX_STACK_ARG(fragmentShaderSource,"fragmentShaderSource")
HXLINE( 854)
HXLINE( 855)		HX_VARI(  ::lime::_internal::backend::native::NativeOpenGLRenderContext,gl) = this->_hx___context->gl;
HXLINE( 857)		this->_hx___glVertexSource = vertexShaderSource;
HXLINE( 858)		this->_hx___glFragmentSource = fragmentShaderSource;
HXLINE( 860)		this->_hx___glVertexShader = gl->createShader(gl->VERTEX_SHADER);
HXLINE( 861)		gl->shaderSource(this->_hx___glVertexShader,vertexShaderSource);
HXLINE( 862)		gl->compileShader(this->_hx___glVertexShader);
HXLINE( 864)		if (::hx::IsEq( gl->getShaderParameter(this->_hx___glVertexShader,gl->COMPILE_STATUS),0 )) {
HXLINE( 866)			HX_VARI( ::String,message) = HX_("Error compiling vertex shader",39,c9,c1,b2);
HXLINE( 867)			message = (message + (HX_("\n",0a,00,00,00) + gl->getShaderInfoLog(this->_hx___glVertexShader)));
HXLINE( 868)			message = (message + (HX_("\n",0a,00,00,00) + vertexShaderSource));
HXLINE( 869)			::lime::utils::Log_obj::error(message,::hx::SourceInfo(HX_("openfl/display3D/Program3D.hx",04,5b,98,0a),869,HX_("openfl.display3D.Program3D",7c,83,68,f5),HX_("__uploadFromGLSL",a9,36,31,0d)));
            		}
HXLINE( 872)		this->_hx___glFragmentShader = gl->createShader(gl->FRAGMENT_SHADER);
HXLINE( 873)		gl->shaderSource(this->_hx___glFragmentShader,fragmentShaderSource);
HXLINE( 874)		gl->compileShader(this->_hx___glFragmentShader);
HXLINE( 876)		if (::hx::IsEq( gl->getShaderParameter(this->_hx___glFragmentShader,gl->COMPILE_STATUS),0 )) {
HXLINE( 878)			HX_VARI( ::String,message) = HX_("Error compiling fragment shader",4d,d0,be,e3);
HXLINE( 879)			message = (message + (HX_("\n",0a,00,00,00) + gl->getShaderInfoLog(this->_hx___glFragmentShader)));
HXLINE( 880)			message = (message + (HX_("\n",0a,00,00,00) + fragmentShaderSource));
HXLINE( 881)			::lime::utils::Log_obj::error(message,::hx::SourceInfo(HX_("openfl/display3D/Program3D.hx",04,5b,98,0a),881,HX_("openfl.display3D.Program3D",7c,83,68,f5),HX_("__uploadFromGLSL",a9,36,31,0d)));
            		}
HXLINE( 884)		this->_hx___glProgram = gl->createProgram();
HXLINE( 886)		if (::hx::IsEq( this->_hx___format,0 )) {
HXLINE( 889)			int _g = 0;
HXDLIN( 889)			while((_g < 16)){
HXLINE( 889)				_g = (_g + 1);
HXDLIN( 889)				HX_VARI( int,i) = (_g - 1);
HXLINE( 893)				HX_VARI( ::String,name) = (HX_("va",2b,67,00,00) + i);
HXLINE( 895)				if ((vertexShaderSource.indexOf((HX_(" ",20,00,00,00) + name),null()) != -1)) {
HXLINE( 897)					gl->bindAttribLocation(this->_hx___glProgram,i,name);
            				}
            			}
            		}
            		else {
HXLINE( 904)			int _g = 0;
HXDLIN( 904)			::Array< ::String > _g1 = this->_hx___glslAttribNames;
HXDLIN( 904)			while((_g < _g1->length)){
HXLINE( 904)				HX_VARI( ::String,name) = _g1->__get(_g);
HXDLIN( 904)				_g = (_g + 1);
HXLINE( 906)				bool _hx_tmp;
HXDLIN( 906)				if ((name.indexOf(HX_("Position",c9,5c,ac,a4),null()) > -1)) {
HXLINE( 906)					_hx_tmp = ::StringTools_obj::startsWith(name,HX_("openfl_",cf,ba,42,40));
            				}
            				else {
HXLINE( 906)					_hx_tmp = false;
            				}
HXDLIN( 906)				if (_hx_tmp) {
HXLINE( 908)					gl->bindAttribLocation(this->_hx___glProgram,0,name);
HXLINE( 909)					goto _hx_goto_29;
            				}
            			}
            			_hx_goto_29:;
            		}
HXLINE( 914)		gl->attachShader(this->_hx___glProgram,this->_hx___glVertexShader);
HXLINE( 915)		gl->attachShader(this->_hx___glProgram,this->_hx___glFragmentShader);
HXLINE( 916)		gl->linkProgram(this->_hx___glProgram);
HXLINE( 918)		if (::hx::IsEq( gl->getProgramParameter(this->_hx___glProgram,gl->LINK_STATUS),0 )) {
HXLINE( 920)			HX_VARI( ::String,message) = HX_("Unable to initialize the shader program",f0,86,8b,39);
HXLINE( 921)			message = (message + (HX_("\n",0a,00,00,00) + gl->getProgramInfoLog(this->_hx___glProgram)));
HXLINE( 922)			::lime::utils::Log_obj::error(message,::hx::SourceInfo(HX_("openfl/display3D/Program3D.hx",04,5b,98,0a),922,HX_("openfl.display3D.Program3D",7c,83,68,f5),HX_("__uploadFromGLSL",a9,36,31,0d)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Program3D_obj,_hx___uploadFromGLSL,(void))


::hx::ObjectPtr< Program3D_obj > Program3D_obj::__new( ::openfl::display3D::Context3D context3D, ::Dynamic format) {
	::hx::ObjectPtr< Program3D_obj > __this = new Program3D_obj();
	__this->__construct(context3D,format);
	return __this;
}

::hx::ObjectPtr< Program3D_obj > Program3D_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context3D, ::Dynamic format) {
	Program3D_obj *__this = (Program3D_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Program3D_obj), true, "openfl.display3D.Program3D"));
	*(void **)__this = Program3D_obj::_hx_vtable;
	__this->__construct(context3D,format);
	return __this;
}

Program3D_obj::Program3D_obj()
{
}

void Program3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Program3D);
	HX_MARK_MEMBER_NAME(_hx___agalAlphaSamplerEnabled,"__agalAlphaSamplerEnabled");
	HX_MARK_MEMBER_NAME(_hx___agalAlphaSamplerUniforms,"__agalAlphaSamplerUniforms");
	HX_MARK_MEMBER_NAME(_hx___agalFragmentUniformMap,"__agalFragmentUniformMap");
	HX_MARK_MEMBER_NAME(_hx___agalPositionScale,"__agalPositionScale");
	HX_MARK_MEMBER_NAME(_hx___agalSamplerUniforms,"__agalSamplerUniforms");
	HX_MARK_MEMBER_NAME(_hx___agalSamplerUsageMask,"__agalSamplerUsageMask");
	HX_MARK_MEMBER_NAME(_hx___agalUniforms,"__agalUniforms");
	HX_MARK_MEMBER_NAME(_hx___agalVertexUniformMap,"__agalVertexUniformMap");
	HX_MARK_MEMBER_NAME(_hx___context,"__context");
	HX_MARK_MEMBER_NAME(_hx___format,"__format");
	HX_MARK_MEMBER_NAME(_hx___glFragmentShader,"__glFragmentShader");
	HX_MARK_MEMBER_NAME(_hx___glFragmentSource,"__glFragmentSource");
	HX_MARK_MEMBER_NAME(_hx___glProgram,"__glProgram");
	HX_MARK_MEMBER_NAME(_hx___glslAttribNames,"__glslAttribNames");
	HX_MARK_MEMBER_NAME(_hx___glslAttribTypes,"__glslAttribTypes");
	HX_MARK_MEMBER_NAME(_hx___glslSamplerNames,"__glslSamplerNames");
	HX_MARK_MEMBER_NAME(_hx___glslUniformLocations,"__glslUniformLocations");
	HX_MARK_MEMBER_NAME(_hx___glslUniformNames,"__glslUniformNames");
	HX_MARK_MEMBER_NAME(_hx___glslUniformTypes,"__glslUniformTypes");
	HX_MARK_MEMBER_NAME(_hx___glVertexShader,"__glVertexShader");
	HX_MARK_MEMBER_NAME(_hx___glVertexSource,"__glVertexSource");
	HX_MARK_MEMBER_NAME(_hx___samplerStates,"__samplerStates");
	HX_MARK_END_CLASS();
}

void Program3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___agalAlphaSamplerEnabled,"__agalAlphaSamplerEnabled");
	HX_VISIT_MEMBER_NAME(_hx___agalAlphaSamplerUniforms,"__agalAlphaSamplerUniforms");
	HX_VISIT_MEMBER_NAME(_hx___agalFragmentUniformMap,"__agalFragmentUniformMap");
	HX_VISIT_MEMBER_NAME(_hx___agalPositionScale,"__agalPositionScale");
	HX_VISIT_MEMBER_NAME(_hx___agalSamplerUniforms,"__agalSamplerUniforms");
	HX_VISIT_MEMBER_NAME(_hx___agalSamplerUsageMask,"__agalSamplerUsageMask");
	HX_VISIT_MEMBER_NAME(_hx___agalUniforms,"__agalUniforms");
	HX_VISIT_MEMBER_NAME(_hx___agalVertexUniformMap,"__agalVertexUniformMap");
	HX_VISIT_MEMBER_NAME(_hx___context,"__context");
	HX_VISIT_MEMBER_NAME(_hx___format,"__format");
	HX_VISIT_MEMBER_NAME(_hx___glFragmentShader,"__glFragmentShader");
	HX_VISIT_MEMBER_NAME(_hx___glFragmentSource,"__glFragmentSource");
	HX_VISIT_MEMBER_NAME(_hx___glProgram,"__glProgram");
	HX_VISIT_MEMBER_NAME(_hx___glslAttribNames,"__glslAttribNames");
	HX_VISIT_MEMBER_NAME(_hx___glslAttribTypes,"__glslAttribTypes");
	HX_VISIT_MEMBER_NAME(_hx___glslSamplerNames,"__glslSamplerNames");
	HX_VISIT_MEMBER_NAME(_hx___glslUniformLocations,"__glslUniformLocations");
	HX_VISIT_MEMBER_NAME(_hx___glslUniformNames,"__glslUniformNames");
	HX_VISIT_MEMBER_NAME(_hx___glslUniformTypes,"__glslUniformTypes");
	HX_VISIT_MEMBER_NAME(_hx___glVertexShader,"__glVertexShader");
	HX_VISIT_MEMBER_NAME(_hx___glVertexSource,"__glVertexSource");
	HX_VISIT_MEMBER_NAME(_hx___samplerStates,"__samplerStates");
}

::hx::Val Program3D_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"upload") ) { return ::hx::Val( upload_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		if (HX_FIELD_EQ(inName,"__flush") ) { return ::hx::Val( _hx___flush_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__format") ) { return ::hx::Val( _hx___format ); }
		if (HX_FIELD_EQ(inName,"__enable") ) { return ::hx::Val( _hx___enable_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__context") ) { return ::hx::Val( _hx___context ); }
		if (HX_FIELD_EQ(inName,"__disable") ) { return ::hx::Val( _hx___disable_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__glProgram") ) { return ::hx::Val( _hx___glProgram ); }
		if (HX_FIELD_EQ(inName,"__markDirty") ) { return ::hx::Val( _hx___markDirty_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"uploadSources") ) { return ::hx::Val( uploadSources_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__agalUniforms") ) { return ::hx::Val( _hx___agalUniforms ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__samplerStates") ) { return ::hx::Val( _hx___samplerStates ); }
		if (HX_FIELD_EQ(inName,"__deleteShaders") ) { return ::hx::Val( _hx___deleteShaders_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__glVertexShader") ) { return ::hx::Val( _hx___glVertexShader ); }
		if (HX_FIELD_EQ(inName,"__glVertexSource") ) { return ::hx::Val( _hx___glVertexSource ); }
		if (HX_FIELD_EQ(inName,"getConstantIndex") ) { return ::hx::Val( getConstantIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"__uploadFromGLSL") ) { return ::hx::Val( _hx___uploadFromGLSL_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__glslAttribNames") ) { return ::hx::Val( _hx___glslAttribNames ); }
		if (HX_FIELD_EQ(inName,"__glslAttribTypes") ) { return ::hx::Val( _hx___glslAttribTypes ); }
		if (HX_FIELD_EQ(inName,"getAttributeIndex") ) { return ::hx::Val( getAttributeIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getSamplerState") ) { return ::hx::Val( _hx___getSamplerState_dyn() ); }
		if (HX_FIELD_EQ(inName,"__processGLSLData") ) { return ::hx::Val( _hx___processGLSLData_dyn() ); }
		if (HX_FIELD_EQ(inName,"__setSamplerState") ) { return ::hx::Val( _hx___setSamplerState_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__glFragmentShader") ) { return ::hx::Val( _hx___glFragmentShader ); }
		if (HX_FIELD_EQ(inName,"__glFragmentSource") ) { return ::hx::Val( _hx___glFragmentSource ); }
		if (HX_FIELD_EQ(inName,"__glslSamplerNames") ) { return ::hx::Val( _hx___glslSamplerNames ); }
		if (HX_FIELD_EQ(inName,"__glslUniformNames") ) { return ::hx::Val( _hx___glslUniformNames ); }
		if (HX_FIELD_EQ(inName,"__glslUniformTypes") ) { return ::hx::Val( _hx___glslUniformTypes ); }
		if (HX_FIELD_EQ(inName,"__setPositionScale") ) { return ::hx::Val( _hx___setPositionScale_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__agalPositionScale") ) { return ::hx::Val( _hx___agalPositionScale ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__agalSamplerUniforms") ) { return ::hx::Val( _hx___agalSamplerUniforms ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__agalSamplerUsageMask") ) { return ::hx::Val( _hx___agalSamplerUsageMask ); }
		if (HX_FIELD_EQ(inName,"__agalVertexUniformMap") ) { return ::hx::Val( _hx___agalVertexUniformMap ); }
		if (HX_FIELD_EQ(inName,"__glslUniformLocations") ) { return ::hx::Val( _hx___glslUniformLocations ); }
		if (HX_FIELD_EQ(inName,"__buildAGALUniformList") ) { return ::hx::Val( _hx___buildAGALUniformList_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"__agalFragmentUniformMap") ) { return ::hx::Val( _hx___agalFragmentUniformMap ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"__agalAlphaSamplerEnabled") ) { return ::hx::Val( _hx___agalAlphaSamplerEnabled ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__agalAlphaSamplerUniforms") ) { return ::hx::Val( _hx___agalAlphaSamplerUniforms ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Program3D_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__format") ) { _hx___format=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__context") ) { _hx___context=inValue.Cast<  ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__glProgram") ) { _hx___glProgram=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__agalUniforms") ) { _hx___agalUniforms=inValue.Cast<  ::haxe::ds::List >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__samplerStates") ) { _hx___samplerStates=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__glVertexShader") ) { _hx___glVertexShader=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__glVertexSource") ) { _hx___glVertexSource=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__glslAttribNames") ) { _hx___glslAttribNames=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__glslAttribTypes") ) { _hx___glslAttribTypes=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__glFragmentShader") ) { _hx___glFragmentShader=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__glFragmentSource") ) { _hx___glFragmentSource=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__glslSamplerNames") ) { _hx___glslSamplerNames=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__glslUniformNames") ) { _hx___glslUniformNames=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__glslUniformTypes") ) { _hx___glslUniformTypes=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__agalPositionScale") ) { _hx___agalPositionScale=inValue.Cast<  ::openfl::display3D::Uniform >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__agalSamplerUniforms") ) { _hx___agalSamplerUniforms=inValue.Cast<  ::haxe::ds::List >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__agalSamplerUsageMask") ) { _hx___agalSamplerUsageMask=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__agalVertexUniformMap") ) { _hx___agalVertexUniformMap=inValue.Cast<  ::openfl::display3D::UniformMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__glslUniformLocations") ) { _hx___glslUniformLocations=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"__agalFragmentUniformMap") ) { _hx___agalFragmentUniformMap=inValue.Cast<  ::openfl::display3D::UniformMap >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"__agalAlphaSamplerEnabled") ) { _hx___agalAlphaSamplerEnabled=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__agalAlphaSamplerUniforms") ) { _hx___agalAlphaSamplerUniforms=inValue.Cast<  ::haxe::ds::List >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Program3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("__agalAlphaSamplerEnabled",66,8c,0e,14));
	outFields->push(HX_("__agalAlphaSamplerUniforms",3a,2d,4e,8e));
	outFields->push(HX_("__agalFragmentUniformMap",89,a8,27,ea));
	outFields->push(HX_("__agalPositionScale",f0,e3,e7,34));
	outFields->push(HX_("__agalSamplerUniforms",76,72,86,f3));
	outFields->push(HX_("__agalSamplerUsageMask",16,c9,49,7f));
	outFields->push(HX_("__agalUniforms",50,74,dc,99));
	outFields->push(HX_("__agalVertexUniformMap",dd,de,b1,fa));
	outFields->push(HX_("__context",cf,e6,c5,9a));
	outFields->push(HX_("__format",57,fa,bd,a5));
	outFields->push(HX_("__glFragmentShader",3a,67,4a,4e));
	outFields->push(HX_("__glFragmentSource",f0,58,5b,63));
	outFields->push(HX_("__glProgram",bf,1f,e0,ef));
	outFields->push(HX_("__glslAttribNames",a0,47,fc,f6));
	outFields->push(HX_("__glslAttribTypes",51,28,43,7b));
	outFields->push(HX_("__glslSamplerNames",de,33,75,e1));
	outFields->push(HX_("__glslUniformLocations",08,06,40,87));
	outFields->push(HX_("__glslUniformNames",32,18,0d,7a));
	outFields->push(HX_("__glslUniformTypes",e3,f8,53,fe));
	outFields->push(HX_("__glVertexShader",8e,06,79,7a));
	outFields->push(HX_("__glVertexSource",44,f8,89,8f));
	outFields->push(HX_("__samplerStates",4a,c1,d9,13));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Program3D_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Program3D_obj,_hx___agalAlphaSamplerEnabled),HX_("__agalAlphaSamplerEnabled",66,8c,0e,14)},
	{::hx::fsObject /*  ::haxe::ds::List */ ,(int)offsetof(Program3D_obj,_hx___agalAlphaSamplerUniforms),HX_("__agalAlphaSamplerUniforms",3a,2d,4e,8e)},
	{::hx::fsObject /*  ::openfl::display3D::UniformMap */ ,(int)offsetof(Program3D_obj,_hx___agalFragmentUniformMap),HX_("__agalFragmentUniformMap",89,a8,27,ea)},
	{::hx::fsObject /*  ::openfl::display3D::Uniform */ ,(int)offsetof(Program3D_obj,_hx___agalPositionScale),HX_("__agalPositionScale",f0,e3,e7,34)},
	{::hx::fsObject /*  ::haxe::ds::List */ ,(int)offsetof(Program3D_obj,_hx___agalSamplerUniforms),HX_("__agalSamplerUniforms",76,72,86,f3)},
	{::hx::fsInt,(int)offsetof(Program3D_obj,_hx___agalSamplerUsageMask),HX_("__agalSamplerUsageMask",16,c9,49,7f)},
	{::hx::fsObject /*  ::haxe::ds::List */ ,(int)offsetof(Program3D_obj,_hx___agalUniforms),HX_("__agalUniforms",50,74,dc,99)},
	{::hx::fsObject /*  ::openfl::display3D::UniformMap */ ,(int)offsetof(Program3D_obj,_hx___agalVertexUniformMap),HX_("__agalVertexUniformMap",dd,de,b1,fa)},
	{::hx::fsObject /*  ::openfl::display3D::Context3D */ ,(int)offsetof(Program3D_obj,_hx___context),HX_("__context",cf,e6,c5,9a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Program3D_obj,_hx___format),HX_("__format",57,fa,bd,a5)},
	{::hx::fsObject /*  ::lime::graphics::opengl::GLObject */ ,(int)offsetof(Program3D_obj,_hx___glFragmentShader),HX_("__glFragmentShader",3a,67,4a,4e)},
	{::hx::fsString,(int)offsetof(Program3D_obj,_hx___glFragmentSource),HX_("__glFragmentSource",f0,58,5b,63)},
	{::hx::fsObject /*  ::lime::graphics::opengl::GLObject */ ,(int)offsetof(Program3D_obj,_hx___glProgram),HX_("__glProgram",bf,1f,e0,ef)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Program3D_obj,_hx___glslAttribNames),HX_("__glslAttribNames",a0,47,fc,f6)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Program3D_obj,_hx___glslAttribTypes),HX_("__glslAttribTypes",51,28,43,7b)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Program3D_obj,_hx___glslSamplerNames),HX_("__glslSamplerNames",de,33,75,e1)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Program3D_obj,_hx___glslUniformLocations),HX_("__glslUniformLocations",08,06,40,87)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Program3D_obj,_hx___glslUniformNames),HX_("__glslUniformNames",32,18,0d,7a)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Program3D_obj,_hx___glslUniformTypes),HX_("__glslUniformTypes",e3,f8,53,fe)},
	{::hx::fsObject /*  ::lime::graphics::opengl::GLObject */ ,(int)offsetof(Program3D_obj,_hx___glVertexShader),HX_("__glVertexShader",8e,06,79,7a)},
	{::hx::fsString,(int)offsetof(Program3D_obj,_hx___glVertexSource),HX_("__glVertexSource",44,f8,89,8f)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Program3D_obj,_hx___samplerStates),HX_("__samplerStates",4a,c1,d9,13)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Program3D_obj_sStaticStorageInfo = 0;
#endif

static ::String Program3D_obj_sMemberFields[] = {
	HX_("__agalAlphaSamplerEnabled",66,8c,0e,14),
	HX_("__agalAlphaSamplerUniforms",3a,2d,4e,8e),
	HX_("__agalFragmentUniformMap",89,a8,27,ea),
	HX_("__agalPositionScale",f0,e3,e7,34),
	HX_("__agalSamplerUniforms",76,72,86,f3),
	HX_("__agalSamplerUsageMask",16,c9,49,7f),
	HX_("__agalUniforms",50,74,dc,99),
	HX_("__agalVertexUniformMap",dd,de,b1,fa),
	HX_("__context",cf,e6,c5,9a),
	HX_("__format",57,fa,bd,a5),
	HX_("__glFragmentShader",3a,67,4a,4e),
	HX_("__glFragmentSource",f0,58,5b,63),
	HX_("__glProgram",bf,1f,e0,ef),
	HX_("__glslAttribNames",a0,47,fc,f6),
	HX_("__glslAttribTypes",51,28,43,7b),
	HX_("__glslSamplerNames",de,33,75,e1),
	HX_("__glslUniformLocations",08,06,40,87),
	HX_("__glslUniformNames",32,18,0d,7a),
	HX_("__glslUniformTypes",e3,f8,53,fe),
	HX_("__glVertexShader",8e,06,79,7a),
	HX_("__glVertexSource",44,f8,89,8f),
	HX_("__samplerStates",4a,c1,d9,13),
	HX_("dispose",9f,80,4c,bb),
	HX_("getAttributeIndex",8c,64,2d,4d),
	HX_("getConstantIndex",98,68,f9,78),
	HX_("upload",01,ca,59,8c),
	HX_("uploadSources",37,1f,a0,2e),
	HX_("__buildAGALUniformList",93,6f,2b,39),
	HX_("__deleteShaders",a3,4d,c2,45),
	HX_("__disable",c8,ba,a6,32),
	HX_("__enable",a3,19,b7,a0),
	HX_("__flush",a4,bb,f9,6c),
	HX_("__getSamplerState",7f,6a,04,62),
	HX_("__markDirty",a5,79,cf,64),
	HX_("__processGLSLData",97,cd,6f,5e),
	HX_("__setPositionScale",3f,c3,c0,0e),
	HX_("__setSamplerState",8b,e7,cf,5d),
	HX_("__uploadFromGLSL",a9,36,31,0d),
	::String(null()) };

::hx::Class Program3D_obj::__mClass;

void Program3D_obj::__register()
{
	Program3D_obj _hx_dummy;
	Program3D_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display3D.Program3D",7c,83,68,f5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Program3D_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Program3D_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Program3D_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Program3D_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display3D
