#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxEmitterMode
#include <flixel/effects/particles/FlxEmitterMode.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxParticle
#include <flixel/effects/particles/FlxParticle.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxTypedEmitter
#include <flixel/effects/particles/FlxTypedEmitter.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_IFlxParticle
#include <flixel/effects/particles/IFlxParticle.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxBounds
#include <flixel/util/helpers/FlxBounds.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxPointRangeBounds
#include <flixel/util/helpers/FlxPointRangeBounds.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxRange
#include <flixel/util/helpers/FlxRange.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxRangeBounds
#include <flixel/util/helpers/FlxRangeBounds.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8a382e488e88ab16_28_new,"flixel.effects.particles.FlxTypedEmitter","new",0x3e1a9dc9,"flixel.effects.particles.FlxTypedEmitter.new","flixel/effects/particles/FlxEmitter.hx",28,0x6dff0520)
HX_LOCAL_STACK_FRAME(_hx_pos_8a382e488e88ab16_205_destroy,"flixel.effects.particles.FlxTypedEmitter","destroy",0x574a62e3,"flixel.effects.particles.FlxTypedEmitter.destroy","flixel/effects/particles/FlxEmitter.hx",205,0x6dff0520)
HX_LOCAL_STACK_FRAME(_hx_pos_8a382e488e88ab16_244_loadParticles,"flixel.effects.particles.FlxTypedEmitter","loadParticles",0x7d4e1b10,"flixel.effects.particles.FlxTypedEmitter.loadParticles","flixel/effects/particles/FlxEmitter.hx",244,0x6dff0520)
HX_LOCAL_STACK_FRAME(_hx_pos_8a382e488e88ab16_263_loadParticle,"flixel.effects.particles.FlxTypedEmitter","loadParticle",0x7ffce803,"flixel.effects.particles.FlxTypedEmitter.loadParticle","flixel/effects/particles/FlxEmitter.hx",263,0x6dff0520)
HX_LOCAL_STACK_FRAME(_hx_pos_8a382e488e88ab16_288_makeParticles,"flixel.effects.particles.FlxTypedEmitter","makeParticles",0xf3914248,"flixel.effects.particles.FlxTypedEmitter.makeParticles","flixel/effects/particles/FlxEmitter.hx",288,0x6dff0520)
HX_LOCAL_STACK_FRAME(_hx_pos_8a382e488e88ab16_305_update,"flixel.effects.particles.FlxTypedEmitter","update",0x6f244040,"flixel.effects.particles.FlxTypedEmitter.update","flixel/effects/particles/FlxEmitter.hx",305,0x6dff0520)
HX_LOCAL_STACK_FRAME(_hx_pos_8a382e488e88ab16_328_explode,"flixel.effects.particles.FlxTypedEmitter","explode",0x5a27f1ca,"flixel.effects.particles.FlxTypedEmitter.explode","flixel/effects/particles/FlxEmitter.hx",328,0x6dff0520)
HX_LOCAL_STACK_FRAME(_hx_pos_8a382e488e88ab16_342_emitContinuously,"flixel.effects.particles.FlxTypedEmitter","emitContinuously",0xda87e546,"flixel.effects.particles.FlxTypedEmitter.emitContinuously","flixel/effects/particles/FlxEmitter.hx",342,0x6dff0520)
HX_LOCAL_STACK_FRAME(_hx_pos_8a382e488e88ab16_359_emitParticleContinuously,"flixel.effects.particles.FlxTypedEmitter","emitParticleContinuously",0xf1d3baac,"flixel.effects.particles.FlxTypedEmitter.emitParticleContinuously","flixel/effects/particles/FlxEmitter.hx",359,0x6dff0520)
HX_LOCAL_STACK_FRAME(_hx_pos_8a382e488e88ab16_368_onFinished,"flixel.effects.particles.FlxTypedEmitter","onFinished",0xf4d30968,"flixel.effects.particles.FlxTypedEmitter.onFinished","flixel/effects/particles/FlxEmitter.hx",368,0x6dff0520)
HX_LOCAL_STACK_FRAME(_hx_pos_8a382e488e88ab16_378_kill,"flixel.effects.particles.FlxTypedEmitter","kill",0x1736ce15,"flixel.effects.particles.FlxTypedEmitter.kill","flixel/effects/particles/FlxEmitter.hx",378,0x6dff0520)
HX_LOCAL_STACK_FRAME(_hx_pos_8a382e488e88ab16_395_start,"flixel.effects.particles.FlxTypedEmitter","start",0xdb2f2e0b,"flixel.effects.particles.FlxTypedEmitter.start","flixel/effects/particles/FlxEmitter.hx",395,0x6dff0520)
HX_LOCAL_STACK_FRAME(_hx_pos_8a382e488e88ab16_416_emitParticle,"flixel.effects.particles.FlxTypedEmitter","emitParticle",0xe36e6130,"flixel.effects.particles.FlxTypedEmitter.emitParticle","flixel/effects/particles/FlxEmitter.hx",416,0x6dff0520)
HX_LOCAL_STACK_FRAME(_hx_pos_8a382e488e88ab16_593_focusOn,"flixel.effects.particles.FlxTypedEmitter","focusOn",0x74478100,"flixel.effects.particles.FlxTypedEmitter.focusOn","flixel/effects/particles/FlxEmitter.hx",593,0x6dff0520)
HX_LOCAL_STACK_FRAME(_hx_pos_8a382e488e88ab16_604_setPosition,"flixel.effects.particles.FlxTypedEmitter","setPosition",0x453b48d4,"flixel.effects.particles.FlxTypedEmitter.setPosition","flixel/effects/particles/FlxEmitter.hx",604,0x6dff0520)
HX_LOCAL_STACK_FRAME(_hx_pos_8a382e488e88ab16_610_setSize,"flixel.effects.particles.FlxTypedEmitter","setSize",0x449c176c,"flixel.effects.particles.FlxTypedEmitter.setSize","flixel/effects/particles/FlxEmitter.hx",610,0x6dff0520)
HX_LOCAL_STACK_FRAME(_hx_pos_8a382e488e88ab16_617_get_solid,"flixel.effects.particles.FlxTypedEmitter","get_solid",0x591b52ab,"flixel.effects.particles.FlxTypedEmitter.get_solid","flixel/effects/particles/FlxEmitter.hx",617,0x6dff0520)
HX_LOCAL_STACK_FRAME(_hx_pos_8a382e488e88ab16_621_set_solid,"flixel.effects.particles.FlxTypedEmitter","set_solid",0x3c6c3eb7,"flixel.effects.particles.FlxTypedEmitter.set_solid","flixel/effects/particles/FlxEmitter.hx",621,0x6dff0520)
namespace flixel{
namespace effects{
namespace particles{

void FlxTypedEmitter_obj::__construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< int >  __o_Size){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            		int Size = __o_Size.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_8a382e488e88ab16_28_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(X,"X")
            	HX_STACK_ARG(Y,"Y")
            	HX_STACK_ARG(Size,"Size")
HXLINE(  28)
HXLINE( 183)		this->_waitForKill = false;
HXLINE( 178)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 178)		point->_inPool = false;
HXDLIN( 178)		this->_point = point;
HXLINE( 173)		this->_counter = 0;
HXLINE( 168)		this->_timer = ((Float)0);
HXLINE( 163)		this->_explode = true;
HXLINE( 158)		this->_quantity = 0;
HXLINE( 148)		this->allowCollisions = 0;
HXLINE( 143)		this->autoUpdateHitbox = false;
HXLINE( 138)		this->immovable = false;
HXLINE( 134)		this->elasticity =  ::flixel::util::helpers::FlxRangeBounds_obj::__alloc( HX_CTX ,0,null(),null(),null());
HXLINE( 130)		this->acceleration =  ::flixel::util::helpers::FlxPointRangeBounds_obj::__alloc( HX_CTX ,( (Float)(0) ),0,null(),null(),null(),null(),null(),null());
HXLINE( 125)		this->drag =  ::flixel::util::helpers::FlxPointRangeBounds_obj::__alloc( HX_CTX ,( (Float)(0) ),0,null(),null(),null(),null(),null(),null());
HXLINE( 121)		this->color =  ::flixel::util::helpers::FlxRangeBounds_obj::__alloc( HX_CTX ,-1,-1,null(),null());
HXLINE( 117)		this->alpha =  ::flixel::util::helpers::FlxRangeBounds_obj::__alloc( HX_CTX ,1,null(),null(),null());
HXLINE( 113)		this->scale =  ::flixel::util::helpers::FlxPointRangeBounds_obj::__alloc( HX_CTX ,( (Float)(1) ),1,null(),null(),null(),null(),null(),null());
HXLINE( 109)		this->lifespan =  ::flixel::util::helpers::FlxBounds_obj::__alloc( HX_CTX ,3,null());
HXLINE( 105)		this->launchAngle =  ::flixel::util::helpers::FlxBounds_obj::__alloc( HX_CTX ,-180,180);
HXLINE( 100)		this->ignoreAngularVelocity = false;
HXLINE(  95)		this->angle =  ::flixel::util::helpers::FlxRangeBounds_obj::__alloc( HX_CTX ,0,null(),null(),null());
HXLINE(  90)		this->angularVelocity =  ::flixel::util::helpers::FlxRangeBounds_obj::__alloc( HX_CTX ,0,0,null(),null());
HXLINE(  86)		this->angularDrag =  ::flixel::util::helpers::FlxRangeBounds_obj::__alloc( HX_CTX ,0,0,null(),null());
HXLINE(  82)		this->angularAcceleration =  ::flixel::util::helpers::FlxRangeBounds_obj::__alloc( HX_CTX ,0,0,null(),null());
HXLINE(  78)		this->speed =  ::flixel::util::helpers::FlxRangeBounds_obj::__alloc( HX_CTX ,0,100,null(),null());
HXLINE(  74)		this->velocity =  ::flixel::util::helpers::FlxPointRangeBounds_obj::__alloc( HX_CTX ,( (Float)(-100) ),-100,100,100,null(),null(),null(),null());
HXLINE(  70)		this->keepScaleRatio = false;
HXLINE(  66)		this->launchMode = ::flixel::effects::particles::FlxEmitterMode_obj::CIRCLE_dyn();
HXLINE(  61)		this->height = ((Float)0);
HXLINE(  57)		this->width = ((Float)0);
HXLINE(  53)		this->y = ((Float)0);
HXLINE(  49)		this->x = ((Float)0);
HXLINE(  41)		this->frequency = ((Float)0.1);
HXLINE(  37)		this->emitting = false;
HXLINE(  33)		this->particleClass = ::hx::ClassOf< ::flixel::effects::particles::FlxParticle >();
HXLINE( 195)		super::__construct(Size);
HXLINE( 197)		{
HXLINE( 197)			this->x = X;
HXDLIN( 197)			this->y = Y;
            		}
HXLINE( 198)		this->set_exists(false);
            	}

Dynamic FlxTypedEmitter_obj::__CreateEmpty() { return new FlxTypedEmitter_obj; }

void *FlxTypedEmitter_obj::_hx_vtable = 0;

Dynamic FlxTypedEmitter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTypedEmitter_obj > _hx_result = new FlxTypedEmitter_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FlxTypedEmitter_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x2e67f70b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2e67f70b;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

void FlxTypedEmitter_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_8a382e488e88ab16_205_destroy)
            	HX_STACK_THIS(this)
HXLINE( 205)
HXLINE( 206)		this->velocity = ( ( ::flixel::util::helpers::FlxPointRangeBounds)(::flixel::util::FlxDestroyUtil_obj::destroy(this->velocity)) );
HXLINE( 207)		this->scale = ( ( ::flixel::util::helpers::FlxPointRangeBounds)(::flixel::util::FlxDestroyUtil_obj::destroy(this->scale)) );
HXLINE( 208)		this->drag = ( ( ::flixel::util::helpers::FlxPointRangeBounds)(::flixel::util::FlxDestroyUtil_obj::destroy(this->drag)) );
HXLINE( 209)		this->acceleration = ( ( ::flixel::util::helpers::FlxPointRangeBounds)(::flixel::util::FlxDestroyUtil_obj::destroy(this->acceleration)) );
HXLINE( 210)		this->_point = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->_point)) );
HXLINE( 212)		this->blend = null();
HXLINE( 213)		this->angularAcceleration = null();
HXLINE( 214)		this->angularDrag = null();
HXLINE( 215)		this->angularVelocity = null();
HXLINE( 216)		this->angle = null();
HXLINE( 217)		this->speed = null();
HXLINE( 218)		this->launchAngle = null();
HXLINE( 219)		this->lifespan = null();
HXLINE( 220)		this->alpha = null();
HXLINE( 221)		this->color = null();
HXLINE( 222)		this->elasticity = null();
HXLINE( 224)		this->super::destroy();
            	}


 ::flixel::effects::particles::FlxTypedEmitter FlxTypedEmitter_obj::loadParticles( ::Dynamic Graphics,::hx::Null< int >  __o_Quantity,::hx::Null< int >  __o_bakedRotationAngles,::hx::Null< bool >  __o_Multiple,::hx::Null< bool >  __o_AutoBuffer){
            		int Quantity = __o_Quantity.Default(50);
            		int bakedRotationAngles = __o_bakedRotationAngles.Default(16);
            		bool Multiple = __o_Multiple.Default(false);
            		bool AutoBuffer = __o_AutoBuffer.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_8a382e488e88ab16_244_loadParticles)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Graphics,"Graphics")
            	HX_STACK_ARG(Quantity,"Quantity")
            	HX_STACK_ARG(bakedRotationAngles,"bakedRotationAngles")
            	HX_STACK_ARG(Multiple,"Multiple")
            	HX_STACK_ARG(AutoBuffer,"AutoBuffer")
HXLINE( 244)
HXLINE( 245)		this->set_maxSize(Quantity);
HXLINE( 246)		HX_VARI( int,totalFrames) = 1;
HXLINE( 248)		if (Multiple) {
HXLINE( 250)			HX_VARI(  ::flixel::FlxSprite,sprite) =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE( 251)			sprite->loadGraphic(Graphics,true,null(),null(),null(),null());
HXLINE( 252)			totalFrames = sprite->numFrames;
HXLINE( 253)			sprite->destroy();
            		}
HXLINE( 256)		{
HXLINE( 256)			int _g = 0;
HXDLIN( 256)			int _g1 = Quantity;
HXDLIN( 256)			while((_g < _g1)){
HXLINE( 256)				_g = (_g + 1);
HXDLIN( 256)				HX_VARI( int,i) = (_g - 1);
HXLINE( 257)				this->add(this->loadParticle(Graphics,Quantity,bakedRotationAngles,Multiple,AutoBuffer,totalFrames));
            			}
            		}
HXLINE( 259)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxTypedEmitter_obj,loadParticles,return )

 ::Dynamic FlxTypedEmitter_obj::loadParticle( ::Dynamic Graphics,int Quantity,int bakedRotationAngles,::hx::Null< bool >  __o_Multiple,::hx::Null< bool >  __o_AutoBuffer,int totalFrames){
            		bool Multiple = __o_Multiple.Default(false);
            		bool AutoBuffer = __o_AutoBuffer.Default(false);
            	HX_STACKFRAME(&_hx_pos_8a382e488e88ab16_263_loadParticle)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Graphics,"Graphics")
            	HX_STACK_ARG(Quantity,"Quantity")
            	HX_STACK_ARG(bakedRotationAngles,"bakedRotationAngles")
            	HX_STACK_ARG(Multiple,"Multiple")
            	HX_STACK_ARG(AutoBuffer,"AutoBuffer")
            	HX_STACK_ARG(totalFrames,"totalFrames")
HXLINE( 263)
HXLINE( 264)		HX_VARI(  ::Dynamic,particle) = ::Type_obj::createInstance(this->particleClass,::cpp::VirtualArray_obj::__new(0));
HXLINE( 265)		HX_VAR( int,frame);
HXDLIN( 265)		if (Multiple) {
HXLINE( 265)			frame = ::flixel::FlxG_obj::random->_hx_int(0,(totalFrames - 1),null());
            		}
            		else {
HXLINE( 265)			frame = -1;
            		}
HXLINE( 267)		bool _hx_tmp;
HXDLIN( 267)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 267)			_hx_tmp = (bakedRotationAngles > 0);
            		}
            		else {
HXLINE( 267)			_hx_tmp = false;
            		}
HXDLIN( 267)		if (_hx_tmp) {
HXLINE( 268)			( ( ::flixel::FlxSprite)(particle) )->loadRotatedGraphic(Graphics,bakedRotationAngles,frame,false,AutoBuffer,null());
            		}
            		else {
HXLINE( 270)			( ( ::flixel::FlxSprite)(particle) )->loadGraphic(Graphics,Multiple,null(),null(),null(),null());
            		}
HXLINE( 272)		if (Multiple) {
HXLINE( 273)			( ( ::flixel::FlxSprite)(particle) )->animation->set_frameIndex(frame);
            		}
HXLINE( 275)		return particle;
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlxTypedEmitter_obj,loadParticle,return )

 ::flixel::effects::particles::FlxTypedEmitter FlxTypedEmitter_obj::makeParticles(::hx::Null< int >  __o_Width,::hx::Null< int >  __o_Height,::hx::Null< int >  __o_Color,::hx::Null< int >  __o_Quantity){
            		int Width = __o_Width.Default(2);
            		int Height = __o_Height.Default(2);
            		int Color = __o_Color.Default(-1);
            		int Quantity = __o_Quantity.Default(50);
            	HX_STACKFRAME(&_hx_pos_8a382e488e88ab16_288_makeParticles)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Width,"Width")
            	HX_STACK_ARG(Height,"Height")
            	HX_STACK_ARG(Color,"Color")
            	HX_STACK_ARG(Quantity,"Quantity")
HXLINE( 288)
HXLINE( 289)		this->set_maxSize(Quantity);
HXLINE( 291)		{
HXLINE( 291)			int _g = 0;
HXDLIN( 291)			int _g1 = Quantity;
HXDLIN( 291)			while((_g < _g1)){
HXLINE( 291)				_g = (_g + 1);
HXDLIN( 291)				HX_VARI( int,i) = (_g - 1);
HXLINE( 293)				HX_VARI(  ::Dynamic,particle) = ::Type_obj::createInstance(this->particleClass,::cpp::VirtualArray_obj::__new(0));
HXLINE( 294)				( ( ::flixel::FlxSprite)(particle) )->makeGraphic(Width,Height,Color,null(),null());
HXLINE( 295)				this->add(particle);
            			}
            		}
HXLINE( 298)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxTypedEmitter_obj,makeParticles,return )

void FlxTypedEmitter_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_8a382e488e88ab16_305_update)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(elapsed,"elapsed")
HXLINE( 305)
HXLINE( 306)		if (this->emitting) {
HXLINE( 308)			if (this->_explode) {
HXLINE( 309)				this->explode();
            			}
            			else {
HXLINE( 311)				this->emitContinuously(elapsed);
            			}
            		}
            		else {
HXLINE( 313)			if (this->_waitForKill) {
HXLINE( 315)				 ::flixel::effects::particles::FlxTypedEmitter _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 315)				_hx_tmp->_timer = (_hx_tmp->_timer + elapsed);
HXLINE( 317)				bool _hx_tmp1;
HXDLIN( 317)				if (::hx::IsGreater( this->lifespan->max,0 )) {
HXLINE( 317)					_hx_tmp1 = ::hx::IsGreater( this->_timer,this->lifespan->max );
            				}
            				else {
HXLINE( 317)					_hx_tmp1 = false;
            				}
HXDLIN( 317)				if (_hx_tmp1) {
HXLINE( 319)					this->kill();
HXLINE( 320)					return;
            				}
            			}
            		}
HXLINE( 324)		this->super::update(elapsed);
            	}


void FlxTypedEmitter_obj::explode(){
            	HX_STACKFRAME(&_hx_pos_8a382e488e88ab16_328_explode)
            	HX_STACK_THIS(this)
HXLINE( 328)
HXLINE( 329)		HX_VARI( int,amount) = this->_quantity;
HXLINE( 330)		bool _hx_tmp;
HXDLIN( 330)		if ((amount > 0)) {
HXLINE( 330)			_hx_tmp = (amount > this->length);
            		}
            		else {
HXLINE( 330)			_hx_tmp = true;
            		}
HXDLIN( 330)		if (_hx_tmp) {
HXLINE( 331)			amount = this->length;
            		}
HXLINE( 333)		{
HXLINE( 333)			int _g = 0;
HXDLIN( 333)			int _g1 = amount;
HXDLIN( 333)			while((_g < _g1)){
HXLINE( 333)				_g = (_g + 1);
HXDLIN( 333)				HX_VARI( int,i) = (_g - 1);
HXLINE( 334)				this->emitParticle();
            			}
            		}
HXLINE( 336)		this->onFinished();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,explode,(void))

void FlxTypedEmitter_obj::emitContinuously(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_8a382e488e88ab16_342_emitContinuously)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(elapsed,"elapsed")
HXLINE( 342)
HXDLIN( 342)		if ((this->frequency <= 0)) {
HXLINE( 344)			this->emitParticleContinuously();
            		}
            		else {
HXLINE( 348)			 ::flixel::effects::particles::FlxTypedEmitter _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 348)			_hx_tmp->_timer = (_hx_tmp->_timer + elapsed);
HXLINE( 350)			while((this->_timer > this->frequency)){
HXLINE( 352)				 ::flixel::effects::particles::FlxTypedEmitter _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 352)				_hx_tmp->_timer = (_hx_tmp->_timer - this->frequency);
HXLINE( 353)				this->emitParticleContinuously();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,emitContinuously,(void))

void FlxTypedEmitter_obj::emitParticleContinuously(){
            	HX_STACKFRAME(&_hx_pos_8a382e488e88ab16_359_emitParticleContinuously)
            	HX_STACK_THIS(this)
HXLINE( 359)
HXLINE( 360)		this->emitParticle();
HXLINE( 361)		this->_counter++;
HXLINE( 363)		bool _hx_tmp;
HXDLIN( 363)		if ((this->_quantity > 0)) {
HXLINE( 363)			_hx_tmp = (this->_counter >= this->_quantity);
            		}
            		else {
HXLINE( 363)			_hx_tmp = false;
            		}
HXDLIN( 363)		if (_hx_tmp) {
HXLINE( 364)			this->onFinished();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,emitParticleContinuously,(void))

void FlxTypedEmitter_obj::onFinished(){
            	HX_STACKFRAME(&_hx_pos_8a382e488e88ab16_368_onFinished)
            	HX_STACK_THIS(this)
HXLINE( 368)
HXLINE( 369)		this->emitting = false;
HXLINE( 370)		this->_waitForKill = true;
HXLINE( 371)		this->_quantity = 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,onFinished,(void))

void FlxTypedEmitter_obj::kill(){
            	HX_STACKFRAME(&_hx_pos_8a382e488e88ab16_378_kill)
            	HX_STACK_THIS(this)
HXLINE( 378)
HXLINE( 379)		this->emitting = false;
HXLINE( 380)		this->_waitForKill = false;
HXLINE( 382)		this->super::kill();
            	}


 ::flixel::effects::particles::FlxTypedEmitter FlxTypedEmitter_obj::start(::hx::Null< bool >  __o_Explode,::hx::Null< Float >  __o_Frequency,::hx::Null< int >  __o_Quantity){
            		bool Explode = __o_Explode.Default(true);
            		Float Frequency = __o_Frequency.Default(((Float)0.1));
            		int Quantity = __o_Quantity.Default(0);
            	HX_STACKFRAME(&_hx_pos_8a382e488e88ab16_395_start)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Explode,"Explode")
            	HX_STACK_ARG(Frequency,"Frequency")
            	HX_STACK_ARG(Quantity,"Quantity")
HXLINE( 395)
HXLINE( 396)		this->set_exists(true);
HXLINE( 397)		this->set_visible(true);
HXLINE( 398)		this->emitting = true;
HXLINE( 400)		this->_explode = Explode;
HXLINE( 401)		this->frequency = Frequency;
HXLINE( 402)		 ::flixel::effects::particles::FlxTypedEmitter _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 402)		_hx_tmp->_quantity = (_hx_tmp->_quantity + Quantity);
HXLINE( 404)		this->_counter = 0;
HXLINE( 405)		this->_timer = ( (Float)(0) );
HXLINE( 407)		this->_waitForKill = false;
HXLINE( 409)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxTypedEmitter_obj,start,return )

 ::Dynamic FlxTypedEmitter_obj::emitParticle(){
            	HX_STACKFRAME(&_hx_pos_8a382e488e88ab16_416_emitParticle)
            	HX_STACK_THIS(this)
HXLINE( 416)
HXLINE( 417)		HX_VARI(  ::Dynamic,particle) = this->recycle(this->particleClass,null(),null(),null());
HXLINE( 419)		( ( ::flixel::FlxObject)(particle) )->reset(( (Float)(0) ),( (Float)(0) ));
HXLINE( 421)		( ( ::flixel::FlxSprite)(particle) )->set_blend(this->blend);
HXLINE( 422)		( ( ::flixel::FlxObject)(particle) )->set_immovable(this->immovable);
HXLINE( 423)		int dir = 4369;
HXDLIN( 423)		( ( ::flixel::FlxObject)(particle) )->set_solid(((this->allowCollisions & dir) == dir));
HXLINE( 424)		( ( ::flixel::FlxObject)(particle) )->set_allowCollisions(this->allowCollisions);
HXLINE( 425)		particle->__SetField(HX_("autoUpdateHitbox",90,aa,3d,24),this->autoUpdateHitbox,::hx::paccDynamic);
HXLINE( 428)		if (this->lifespan->active) {
HXLINE( 430)			particle->__SetField(HX_("lifespan",c6,19,ce,6b),::flixel::FlxG_obj::random->_hx_float(this->lifespan->min,this->lifespan->max,null()),::hx::paccDynamic);
            		}
HXLINE( 433)		if (this->velocity->active) {
HXLINE( 436)			bool _hx_tmp;
HXDLIN( 436)			if (::hx::IsGreater( particle->__Field(HX_("lifespan",c6,19,ce,6b),::hx::paccDynamic),0 )) {
HXLINE( 436)				 ::flixel::math::FlxPoint _this = ( ( ::flixel::math::FlxPoint)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("velocityRange",60,4a,a1,8e),::hx::paccDynamic)) )->start) );
HXDLIN( 436)				 ::flixel::math::FlxPoint point = ( ( ::flixel::math::FlxPoint)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("velocityRange",60,4a,a1,8e),::hx::paccDynamic)) )->end) );
HXDLIN( 436)				bool result;
HXDLIN( 436)				if ((::Math_obj::abs((_this->x - point->x)) <= ((Float)0.0000001))) {
HXLINE( 436)					result = (::Math_obj::abs((_this->y - point->y)) <= ((Float)0.0000001));
            				}
            				else {
HXLINE( 436)					result = false;
            				}
HXDLIN( 436)				if (point->_weak) {
HXLINE( 436)					point->put();
            				}
HXDLIN( 436)				_hx_tmp = !(result);
            			}
            			else {
HXLINE( 436)				_hx_tmp = false;
            			}
HXDLIN( 436)			( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("velocityRange",60,4a,a1,8e),::hx::paccDynamic)) )->active = _hx_tmp;
HXLINE( 438)			if (::hx::IsPointerEq( this->launchMode,::flixel::effects::particles::FlxEmitterMode_obj::CIRCLE_dyn() )) {
HXLINE( 440)				HX_VARI( Float,particleAngle) = ( (Float)(0) );
HXLINE( 441)				if (this->launchAngle->active) {
HXLINE( 442)					particleAngle = ::flixel::FlxG_obj::random->_hx_float(this->launchAngle->min,this->launchAngle->max,null());
            				}
HXLINE( 445)				Float Speed = ::flixel::FlxG_obj::random->_hx_float(this->speed->start->min,this->speed->start->max,null());
HXDLIN( 445)				Float a = (particleAngle * (::Math_obj::PI / ( (Float)(180) )));
HXDLIN( 445)				Float X = (::Math_obj::cos(a) * Speed);
HXDLIN( 445)				Float Y = (::Math_obj::sin(a) * Speed);
HXDLIN( 445)				 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);
HXDLIN( 445)				point->_inPool = false;
HXDLIN( 445)				this->_point = point;
HXLINE( 446)				( ( ::flixel::FlxObject)(particle) )->velocity->set_x(this->_point->x);
HXLINE( 447)				( ( ::flixel::FlxObject)(particle) )->velocity->set_y(this->_point->y);
HXLINE( 448)				( ( ::flixel::math::FlxPoint)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("velocityRange",60,4a,a1,8e),::hx::paccDynamic)) )->start) )->set(this->_point->x,this->_point->y);
HXLINE( 451)				Float Speed1 = ::flixel::FlxG_obj::random->_hx_float(this->speed->end->min,this->speed->end->max,null());
HXDLIN( 451)				Float a1 = (particleAngle * (::Math_obj::PI / ( (Float)(180) )));
HXDLIN( 451)				Float X1 = (::Math_obj::cos(a1) * Speed1);
HXDLIN( 451)				Float Y1 = (::Math_obj::sin(a1) * Speed1);
HXDLIN( 451)				 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);
HXDLIN( 451)				point1->_inPool = false;
HXDLIN( 451)				this->_point = point1;
HXLINE( 452)				( ( ::flixel::math::FlxPoint)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("velocityRange",60,4a,a1,8e),::hx::paccDynamic)) )->end) )->set(this->_point->x,this->_point->y);
            			}
            			else {
HXLINE( 456)				 ::flixel::math::FlxPoint particle1 = ( ( ::flixel::math::FlxPoint)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("velocityRange",60,4a,a1,8e),::hx::paccDynamic)) )->start) );
HXDLIN( 456)				particle1->set_x(::flixel::FlxG_obj::random->_hx_float(( ( ::flixel::math::FlxPoint)(this->velocity->start->min) )->x,( ( ::flixel::math::FlxPoint)(this->velocity->start->max) )->x,null()));
HXLINE( 457)				 ::flixel::math::FlxPoint particle2 = ( ( ::flixel::math::FlxPoint)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("velocityRange",60,4a,a1,8e),::hx::paccDynamic)) )->start) );
HXDLIN( 457)				particle2->set_y(::flixel::FlxG_obj::random->_hx_float(( ( ::flixel::math::FlxPoint)(this->velocity->start->min) )->y,( ( ::flixel::math::FlxPoint)(this->velocity->start->max) )->y,null()));
HXLINE( 458)				 ::flixel::math::FlxPoint particle3 = ( ( ::flixel::math::FlxPoint)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("velocityRange",60,4a,a1,8e),::hx::paccDynamic)) )->end) );
HXDLIN( 458)				particle3->set_x(::flixel::FlxG_obj::random->_hx_float(( ( ::flixel::math::FlxPoint)(this->velocity->end->min) )->x,( ( ::flixel::math::FlxPoint)(this->velocity->end->max) )->x,null()));
HXLINE( 459)				 ::flixel::math::FlxPoint particle4 = ( ( ::flixel::math::FlxPoint)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("velocityRange",60,4a,a1,8e),::hx::paccDynamic)) )->end) );
HXDLIN( 459)				particle4->set_y(::flixel::FlxG_obj::random->_hx_float(( ( ::flixel::math::FlxPoint)(this->velocity->end->min) )->y,( ( ::flixel::math::FlxPoint)(this->velocity->end->max) )->y,null()));
HXLINE( 460)				( ( ::flixel::FlxObject)(particle) )->velocity->set_x(( ( ::flixel::math::FlxPoint)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("velocityRange",60,4a,a1,8e),::hx::paccDynamic)) )->start) )->x);
HXLINE( 461)				( ( ::flixel::FlxObject)(particle) )->velocity->set_y(( ( ::flixel::math::FlxPoint)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("velocityRange",60,4a,a1,8e),::hx::paccDynamic)) )->start) )->y);
            			}
            		}
            		else {
HXLINE( 465)			( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("velocityRange",60,4a,a1,8e),::hx::paccDynamic)) )->active = false;
            		}
HXLINE( 468)		bool _hx_tmp;
HXDLIN( 468)		if (::hx::IsGreater( particle->__Field(HX_("lifespan",c6,19,ce,6b),::hx::paccDynamic),0 )) {
HXLINE( 468)			_hx_tmp = ::hx::IsInstanceNotEq( this->angularVelocity->start,this->angularVelocity->end );
            		}
            		else {
HXLINE( 468)			_hx_tmp = false;
            		}
HXDLIN( 468)		( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("angularVelocityRange",1e,c6,ce,3a),::hx::paccDynamic)) )->active = _hx_tmp;
HXLINE( 470)		if (!(this->ignoreAngularVelocity)) {
HXLINE( 472)			if (this->angularAcceleration->active) {
HXLINE( 473)				( ( ::flixel::FlxObject)(particle) )->angularAcceleration = ::flixel::FlxG_obj::random->_hx_float(this->angularAcceleration->start->min,this->angularAcceleration->start->max,null());
            			}
HXLINE( 475)			if (this->angularVelocity->active) {
HXLINE( 477)				( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("angularVelocityRange",1e,c6,ce,3a),::hx::paccDynamic)) )->start = ::flixel::FlxG_obj::random->_hx_float(this->angularVelocity->start->min,this->angularVelocity->start->max,null());
HXLINE( 478)				( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("angularVelocityRange",1e,c6,ce,3a),::hx::paccDynamic)) )->end = ::flixel::FlxG_obj::random->_hx_float(this->angularVelocity->end->min,this->angularVelocity->end->max,null());
HXLINE( 479)				( ( ::flixel::FlxObject)(particle) )->angularVelocity = ( (Float)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("angularVelocityRange",1e,c6,ce,3a),::hx::paccDynamic)) )->start) );
            			}
HXLINE( 482)			if (this->angularDrag->active) {
HXLINE( 483)				( ( ::flixel::FlxObject)(particle) )->angularDrag = ::flixel::FlxG_obj::random->_hx_float(this->angularDrag->start->min,this->angularDrag->start->max,null());
            			}
            		}
            		else {
HXLINE( 485)			if (this->angularVelocity->active) {
HXLINE( 487)				Float _hx_tmp = ::flixel::FlxG_obj::random->_hx_float(this->angle->end->min,this->angle->end->max,null());
HXDLIN( 487)				Float _hx_tmp1 = (_hx_tmp - ::flixel::FlxG_obj::random->_hx_float(this->angle->start->min,this->angle->start->max,null()));
HXDLIN( 487)				( ( ::flixel::FlxObject)(particle) )->angularVelocity = (_hx_tmp1 / ::flixel::FlxG_obj::random->_hx_float(this->lifespan->min,this->lifespan->max,null()));
HXLINE( 489)				( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("angularVelocityRange",1e,c6,ce,3a),::hx::paccDynamic)) )->active = false;
            			}
            		}
HXLINE( 493)		if (this->angle->active) {
HXLINE( 494)			( ( ::flixel::FlxSprite)(particle) )->set_angle(::flixel::FlxG_obj::random->_hx_float(this->angle->start->min,this->angle->start->max,null()));
            		}
HXLINE( 497)		if (this->scale->active) {
HXLINE( 499)			 ::flixel::math::FlxPoint particle1 = ( ( ::flixel::math::FlxPoint)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("scaleRange",d3,52,53,05),::hx::paccDynamic)) )->start) );
HXDLIN( 499)			particle1->set_x(::flixel::FlxG_obj::random->_hx_float(( ( ::flixel::math::FlxPoint)(this->scale->start->min) )->x,( ( ::flixel::math::FlxPoint)(this->scale->start->max) )->x,null()));
HXLINE( 500)			 ::flixel::math::FlxPoint particle2 = ( ( ::flixel::math::FlxPoint)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("scaleRange",d3,52,53,05),::hx::paccDynamic)) )->start) );
HXDLIN( 500)			Float _hx_tmp;
HXDLIN( 500)			if (this->keepScaleRatio) {
HXLINE( 500)				_hx_tmp = ( ( ::flixel::math::FlxPoint)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("scaleRange",d3,52,53,05),::hx::paccDynamic)) )->start) )->x;
            			}
            			else {
HXLINE( 500)				_hx_tmp = ::flixel::FlxG_obj::random->_hx_float(( ( ::flixel::math::FlxPoint)(this->scale->start->min) )->y,( ( ::flixel::math::FlxPoint)(this->scale->start->max) )->y,null());
            			}
HXDLIN( 500)			particle2->set_y(_hx_tmp);
HXLINE( 501)			 ::flixel::math::FlxPoint particle3 = ( ( ::flixel::math::FlxPoint)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("scaleRange",d3,52,53,05),::hx::paccDynamic)) )->end) );
HXDLIN( 501)			particle3->set_x(::flixel::FlxG_obj::random->_hx_float(( ( ::flixel::math::FlxPoint)(this->scale->end->min) )->x,( ( ::flixel::math::FlxPoint)(this->scale->end->max) )->x,null()));
HXLINE( 502)			 ::flixel::math::FlxPoint particle4 = ( ( ::flixel::math::FlxPoint)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("scaleRange",d3,52,53,05),::hx::paccDynamic)) )->end) );
HXDLIN( 502)			Float _hx_tmp1;
HXDLIN( 502)			if (this->keepScaleRatio) {
HXLINE( 502)				_hx_tmp1 = ( ( ::flixel::math::FlxPoint)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("scaleRange",d3,52,53,05),::hx::paccDynamic)) )->end) )->x;
            			}
            			else {
HXLINE( 502)				_hx_tmp1 = ::flixel::FlxG_obj::random->_hx_float(( ( ::flixel::math::FlxPoint)(this->scale->end->min) )->y,( ( ::flixel::math::FlxPoint)(this->scale->end->max) )->y,null());
            			}
HXDLIN( 502)			particle4->set_y(_hx_tmp1);
HXLINE( 503)			bool _hx_tmp2;
HXDLIN( 503)			if (::hx::IsGreater( particle->__Field(HX_("lifespan",c6,19,ce,6b),::hx::paccDynamic),0 )) {
HXLINE( 503)				 ::flixel::math::FlxPoint _this = ( ( ::flixel::math::FlxPoint)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("scaleRange",d3,52,53,05),::hx::paccDynamic)) )->start) );
HXDLIN( 503)				 ::flixel::math::FlxPoint point = ( ( ::flixel::math::FlxPoint)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("scaleRange",d3,52,53,05),::hx::paccDynamic)) )->end) );
HXDLIN( 503)				bool result;
HXDLIN( 503)				if ((::Math_obj::abs((_this->x - point->x)) <= ((Float)0.0000001))) {
HXLINE( 503)					result = (::Math_obj::abs((_this->y - point->y)) <= ((Float)0.0000001));
            				}
            				else {
HXLINE( 503)					result = false;
            				}
HXDLIN( 503)				if (point->_weak) {
HXLINE( 503)					point->put();
            				}
HXDLIN( 503)				_hx_tmp2 = !(result);
            			}
            			else {
HXLINE( 503)				_hx_tmp2 = false;
            			}
HXDLIN( 503)			( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("scaleRange",d3,52,53,05),::hx::paccDynamic)) )->active = _hx_tmp2;
HXLINE( 504)			( ( ::flixel::FlxSprite)(particle) )->scale->set_x(( ( ::flixel::math::FlxPoint)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("scaleRange",d3,52,53,05),::hx::paccDynamic)) )->start) )->x);
HXLINE( 505)			( ( ::flixel::FlxSprite)(particle) )->scale->set_y(( ( ::flixel::math::FlxPoint)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("scaleRange",d3,52,53,05),::hx::paccDynamic)) )->start) )->y);
HXLINE( 506)			if (( (bool)(particle->__Field(HX_("autoUpdateHitbox",90,aa,3d,24),::hx::paccDynamic)) )) {
HXLINE( 507)				( ( ::flixel::FlxSprite)(particle) )->updateHitbox();
            			}
            		}
            		else {
HXLINE( 510)			( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("scaleRange",d3,52,53,05),::hx::paccDynamic)) )->active = false;
            		}
HXLINE( 513)		if (this->alpha->active) {
HXLINE( 515)			( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("alphaRange",7f,f9,c4,04),::hx::paccDynamic)) )->start = ::flixel::FlxG_obj::random->_hx_float(this->alpha->start->min,this->alpha->start->max,null());
HXLINE( 516)			( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("alphaRange",7f,f9,c4,04),::hx::paccDynamic)) )->end = ::flixel::FlxG_obj::random->_hx_float(this->alpha->end->min,this->alpha->end->max,null());
HXLINE( 517)			bool _hx_tmp;
HXDLIN( 517)			if (::hx::IsGreater( particle->__Field(HX_("lifespan",c6,19,ce,6b),::hx::paccDynamic),0 )) {
HXLINE( 517)				_hx_tmp = ::hx::IsNotEq( ( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("alphaRange",7f,f9,c4,04),::hx::paccDynamic)) )->start,( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("alphaRange",7f,f9,c4,04),::hx::paccDynamic)) )->end );
            			}
            			else {
HXLINE( 517)				_hx_tmp = false;
            			}
HXDLIN( 517)			( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("alphaRange",7f,f9,c4,04),::hx::paccDynamic)) )->active = _hx_tmp;
HXLINE( 518)			( ( ::flixel::FlxSprite)(particle) )->set_alpha(( (Float)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("alphaRange",7f,f9,c4,04),::hx::paccDynamic)) )->start) ));
            		}
            		else {
HXLINE( 521)			( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("alphaRange",7f,f9,c4,04),::hx::paccDynamic)) )->active = false;
            		}
HXLINE( 524)		if (this->color->active) {
HXLINE( 526)			( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("colorRange",5a,bd,8b,08),::hx::paccDynamic)) )->start = ::flixel::FlxG_obj::random->color(this->color->start->min,this->color->start->max,null(),null());
HXLINE( 527)			( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("colorRange",5a,bd,8b,08),::hx::paccDynamic)) )->end = ::flixel::FlxG_obj::random->color(this->color->end->min,this->color->end->max,null(),null());
HXLINE( 528)			bool _hx_tmp;
HXDLIN( 528)			if (::hx::IsGreater( particle->__Field(HX_("lifespan",c6,19,ce,6b),::hx::paccDynamic),0 )) {
HXLINE( 528)				_hx_tmp = ::hx::IsNotEq( ( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("colorRange",5a,bd,8b,08),::hx::paccDynamic)) )->start,( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("colorRange",5a,bd,8b,08),::hx::paccDynamic)) )->end );
            			}
            			else {
HXLINE( 528)				_hx_tmp = false;
            			}
HXDLIN( 528)			( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("colorRange",5a,bd,8b,08),::hx::paccDynamic)) )->active = _hx_tmp;
HXLINE( 529)			( ( ::flixel::FlxSprite)(particle) )->set_color(( (int)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("colorRange",5a,bd,8b,08),::hx::paccDynamic)) )->start) ));
            		}
            		else {
HXLINE( 532)			( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("colorRange",5a,bd,8b,08),::hx::paccDynamic)) )->active = false;
            		}
HXLINE( 535)		if (this->drag->active) {
HXLINE( 537)			 ::flixel::math::FlxPoint particle1 = ( ( ::flixel::math::FlxPoint)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("dragRange",29,15,75,46),::hx::paccDynamic)) )->start) );
HXDLIN( 537)			particle1->set_x(::flixel::FlxG_obj::random->_hx_float(( ( ::flixel::math::FlxPoint)(this->drag->start->min) )->x,( ( ::flixel::math::FlxPoint)(this->drag->start->max) )->x,null()));
HXLINE( 538)			 ::flixel::math::FlxPoint particle2 = ( ( ::flixel::math::FlxPoint)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("dragRange",29,15,75,46),::hx::paccDynamic)) )->start) );
HXDLIN( 538)			particle2->set_y(::flixel::FlxG_obj::random->_hx_float(( ( ::flixel::math::FlxPoint)(this->drag->start->min) )->y,( ( ::flixel::math::FlxPoint)(this->drag->start->max) )->y,null()));
HXLINE( 539)			 ::flixel::math::FlxPoint particle3 = ( ( ::flixel::math::FlxPoint)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("dragRange",29,15,75,46),::hx::paccDynamic)) )->end) );
HXDLIN( 539)			particle3->set_x(::flixel::FlxG_obj::random->_hx_float(( ( ::flixel::math::FlxPoint)(this->drag->end->min) )->x,( ( ::flixel::math::FlxPoint)(this->drag->end->max) )->x,null()));
HXLINE( 540)			 ::flixel::math::FlxPoint particle4 = ( ( ::flixel::math::FlxPoint)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("dragRange",29,15,75,46),::hx::paccDynamic)) )->end) );
HXDLIN( 540)			particle4->set_y(::flixel::FlxG_obj::random->_hx_float(( ( ::flixel::math::FlxPoint)(this->drag->end->min) )->y,( ( ::flixel::math::FlxPoint)(this->drag->end->max) )->y,null()));
HXLINE( 541)			bool _hx_tmp;
HXDLIN( 541)			if (::hx::IsGreater( particle->__Field(HX_("lifespan",c6,19,ce,6b),::hx::paccDynamic),0 )) {
HXLINE( 541)				 ::flixel::math::FlxPoint _this = ( ( ::flixel::math::FlxPoint)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("dragRange",29,15,75,46),::hx::paccDynamic)) )->start) );
HXDLIN( 541)				 ::flixel::math::FlxPoint point = ( ( ::flixel::math::FlxPoint)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("dragRange",29,15,75,46),::hx::paccDynamic)) )->end) );
HXDLIN( 541)				bool result;
HXDLIN( 541)				if ((::Math_obj::abs((_this->x - point->x)) <= ((Float)0.0000001))) {
HXLINE( 541)					result = (::Math_obj::abs((_this->y - point->y)) <= ((Float)0.0000001));
            				}
            				else {
HXLINE( 541)					result = false;
            				}
HXDLIN( 541)				if (point->_weak) {
HXLINE( 541)					point->put();
            				}
HXDLIN( 541)				_hx_tmp = !(result);
            			}
            			else {
HXLINE( 541)				_hx_tmp = false;
            			}
HXDLIN( 541)			( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("dragRange",29,15,75,46),::hx::paccDynamic)) )->active = _hx_tmp;
HXLINE( 542)			( ( ::flixel::FlxObject)(particle) )->drag->set_x(( ( ::flixel::math::FlxPoint)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("dragRange",29,15,75,46),::hx::paccDynamic)) )->start) )->x);
HXLINE( 543)			( ( ::flixel::FlxObject)(particle) )->drag->set_y(( ( ::flixel::math::FlxPoint)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("dragRange",29,15,75,46),::hx::paccDynamic)) )->start) )->y);
            		}
            		else {
HXLINE( 546)			( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("dragRange",29,15,75,46),::hx::paccDynamic)) )->active = false;
            		}
HXLINE( 549)		if (this->acceleration->active) {
HXLINE( 551)			 ::flixel::math::FlxPoint particle1 = ( ( ::flixel::math::FlxPoint)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("accelerationRange",5d,2d,23,34),::hx::paccDynamic)) )->start) );
HXDLIN( 551)			particle1->set_x(::flixel::FlxG_obj::random->_hx_float(( ( ::flixel::math::FlxPoint)(this->acceleration->start->min) )->x,( ( ::flixel::math::FlxPoint)(this->acceleration->start->max) )->x,null()));
HXLINE( 552)			 ::flixel::math::FlxPoint particle2 = ( ( ::flixel::math::FlxPoint)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("accelerationRange",5d,2d,23,34),::hx::paccDynamic)) )->start) );
HXDLIN( 552)			particle2->set_y(::flixel::FlxG_obj::random->_hx_float(( ( ::flixel::math::FlxPoint)(this->acceleration->start->min) )->y,( ( ::flixel::math::FlxPoint)(this->acceleration->start->max) )->y,null()));
HXLINE( 553)			 ::flixel::math::FlxPoint particle3 = ( ( ::flixel::math::FlxPoint)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("accelerationRange",5d,2d,23,34),::hx::paccDynamic)) )->end) );
HXDLIN( 553)			particle3->set_x(::flixel::FlxG_obj::random->_hx_float(( ( ::flixel::math::FlxPoint)(this->acceleration->end->min) )->x,( ( ::flixel::math::FlxPoint)(this->acceleration->end->max) )->x,null()));
HXLINE( 554)			 ::flixel::math::FlxPoint particle4 = ( ( ::flixel::math::FlxPoint)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("accelerationRange",5d,2d,23,34),::hx::paccDynamic)) )->end) );
HXDLIN( 554)			particle4->set_y(::flixel::FlxG_obj::random->_hx_float(( ( ::flixel::math::FlxPoint)(this->acceleration->end->min) )->y,( ( ::flixel::math::FlxPoint)(this->acceleration->end->max) )->y,null()));
HXLINE( 555)			bool _hx_tmp;
HXDLIN( 555)			if (::hx::IsGreater( particle->__Field(HX_("lifespan",c6,19,ce,6b),::hx::paccDynamic),0 )) {
HXLINE( 556)				 ::flixel::math::FlxPoint _this = ( ( ::flixel::math::FlxPoint)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("accelerationRange",5d,2d,23,34),::hx::paccDynamic)) )->start) );
HXDLIN( 556)				 ::flixel::math::FlxPoint point = ( ( ::flixel::math::FlxPoint)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("accelerationRange",5d,2d,23,34),::hx::paccDynamic)) )->end) );
HXDLIN( 556)				bool result;
HXDLIN( 556)				if ((::Math_obj::abs((_this->x - point->x)) <= ((Float)0.0000001))) {
HXLINE( 556)					result = (::Math_obj::abs((_this->y - point->y)) <= ((Float)0.0000001));
            				}
            				else {
HXLINE( 556)					result = false;
            				}
HXDLIN( 556)				if (point->_weak) {
HXLINE( 556)					point->put();
            				}
HXLINE( 555)				_hx_tmp = !(result);
            			}
            			else {
HXLINE( 555)				_hx_tmp = false;
            			}
HXDLIN( 555)			( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("accelerationRange",5d,2d,23,34),::hx::paccDynamic)) )->active = _hx_tmp;
HXLINE( 557)			( ( ::flixel::FlxObject)(particle) )->acceleration->set_x(( ( ::flixel::math::FlxPoint)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("accelerationRange",5d,2d,23,34),::hx::paccDynamic)) )->start) )->x);
HXLINE( 558)			( ( ::flixel::FlxObject)(particle) )->acceleration->set_y(( ( ::flixel::math::FlxPoint)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("accelerationRange",5d,2d,23,34),::hx::paccDynamic)) )->start) )->y);
            		}
            		else {
HXLINE( 561)			( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("accelerationRange",5d,2d,23,34),::hx::paccDynamic)) )->active = false;
            		}
HXLINE( 564)		if (this->elasticity->active) {
HXLINE( 566)			( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("elasticityRange",84,bb,e8,db),::hx::paccDynamic)) )->start = ::flixel::FlxG_obj::random->_hx_float(this->elasticity->start->min,this->elasticity->start->max,null());
HXLINE( 567)			( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("elasticityRange",84,bb,e8,db),::hx::paccDynamic)) )->end = ::flixel::FlxG_obj::random->_hx_float(this->elasticity->end->min,this->elasticity->end->max,null());
HXLINE( 568)			bool _hx_tmp;
HXDLIN( 568)			if (::hx::IsGreater( particle->__Field(HX_("lifespan",c6,19,ce,6b),::hx::paccDynamic),0 )) {
HXLINE( 568)				_hx_tmp = ::hx::IsNotEq( ( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("elasticityRange",84,bb,e8,db),::hx::paccDynamic)) )->start,( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("elasticityRange",84,bb,e8,db),::hx::paccDynamic)) )->end );
            			}
            			else {
HXLINE( 568)				_hx_tmp = false;
            			}
HXDLIN( 568)			( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("elasticityRange",84,bb,e8,db),::hx::paccDynamic)) )->active = _hx_tmp;
HXLINE( 569)			( ( ::flixel::FlxObject)(particle) )->elasticity = ( (Float)(( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("elasticityRange",84,bb,e8,db),::hx::paccDynamic)) )->start) );
            		}
            		else {
HXLINE( 572)			( ( ::flixel::util::helpers::FlxRange)(particle->__Field(HX_("elasticityRange",84,bb,e8,db),::hx::paccDynamic)) )->active = false;
            		}
HXLINE( 575)		Float _hx_tmp1 = ::flixel::FlxG_obj::random->_hx_float(this->x,(this->x + this->width),null());
HXDLIN( 575)		( ( ::flixel::FlxObject)(particle) )->set_x((_hx_tmp1 - (( ( ::flixel::FlxObject)(particle) )->get_width() / ( (Float)(2) ))));
HXLINE( 576)		Float _hx_tmp2 = ::flixel::FlxG_obj::random->_hx_float(this->y,(this->y + this->height),null());
HXDLIN( 576)		( ( ::flixel::FlxObject)(particle) )->set_y((_hx_tmp2 - (( ( ::flixel::FlxObject)(particle) )->get_height() / ( (Float)(2) ))));
HXLINE( 579)		if (::hx::IsNotNull( ( ( ::flixel::FlxSprite)(particle) )->animation->_curAnim )) {
HXLINE( 580)			( ( ::flixel::FlxSprite)(particle) )->animation->_curAnim->restart();
            		}
HXLINE( 582)		::flixel::effects::particles::IFlxParticle_obj::onEmit(particle);
HXLINE( 584)		return particle;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,emitParticle,return )

void FlxTypedEmitter_obj::focusOn( ::flixel::FlxObject Object){
            	HX_STACKFRAME(&_hx_pos_8a382e488e88ab16_593_focusOn)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Object,"Object")
HXLINE( 593)
HXLINE( 594)		Object->getMidpoint(this->_point);
HXLINE( 596)		Float _hx_tmp = this->_point->x;
HXDLIN( 596)		this->x = (_hx_tmp - ( (Float)((::Std_obj::_hx_int(this->width) >> 1)) ));
HXLINE( 597)		Float _hx_tmp1 = this->_point->y;
HXDLIN( 597)		this->y = (_hx_tmp1 - ( (Float)((::Std_obj::_hx_int(this->height) >> 1)) ));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,focusOn,(void))

void FlxTypedEmitter_obj::setPosition(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            	HX_STACKFRAME(&_hx_pos_8a382e488e88ab16_604_setPosition)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(X,"X")
            	HX_STACK_ARG(Y,"Y")
HXLINE( 604)
HXLINE( 605)		this->x = X;
HXLINE( 606)		this->y = Y;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedEmitter_obj,setPosition,(void))

void FlxTypedEmitter_obj::setSize(Float Width,Float Height){
            	HX_STACKFRAME(&_hx_pos_8a382e488e88ab16_610_setSize)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Width,"Width")
            	HX_STACK_ARG(Height,"Height")
HXLINE( 610)
HXLINE( 611)		this->width = Width;
HXLINE( 612)		this->height = Height;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedEmitter_obj,setSize,(void))

bool FlxTypedEmitter_obj::get_solid(){
            	HX_STACKFRAME(&_hx_pos_8a382e488e88ab16_617_get_solid)
            	HX_STACK_THIS(this)
HXLINE( 617)
HXDLIN( 617)		int dir = 4369;
HXDLIN( 617)		return ((this->allowCollisions & dir) == dir);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,get_solid,return )

bool FlxTypedEmitter_obj::set_solid(bool Solid){
            	HX_STACKFRAME(&_hx_pos_8a382e488e88ab16_621_set_solid)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Solid,"Solid")
HXLINE( 621)
HXLINE( 622)		if (Solid) {
HXLINE( 624)			this->allowCollisions = 4369;
            		}
            		else {
HXLINE( 628)			this->allowCollisions = 0;
            		}
HXLINE( 630)		return Solid;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,set_solid,return )


::hx::ObjectPtr< FlxTypedEmitter_obj > FlxTypedEmitter_obj::__new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< int >  __o_Size) {
	::hx::ObjectPtr< FlxTypedEmitter_obj > __this = new FlxTypedEmitter_obj();
	__this->__construct(__o_X,__o_Y,__o_Size);
	return __this;
}

::hx::ObjectPtr< FlxTypedEmitter_obj > FlxTypedEmitter_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< int >  __o_Size) {
	FlxTypedEmitter_obj *__this = (FlxTypedEmitter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTypedEmitter_obj), true, "flixel.effects.particles.FlxTypedEmitter"));
	*(void **)__this = FlxTypedEmitter_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,__o_Size);
	return __this;
}

FlxTypedEmitter_obj::FlxTypedEmitter_obj()
{
}

void FlxTypedEmitter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedEmitter);
	HX_MARK_MEMBER_NAME(particleClass,"particleClass");
	HX_MARK_MEMBER_NAME(emitting,"emitting");
	HX_MARK_MEMBER_NAME(frequency,"frequency");
	HX_MARK_MEMBER_NAME(blend,"blend");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(launchMode,"launchMode");
	HX_MARK_MEMBER_NAME(keepScaleRatio,"keepScaleRatio");
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(angularAcceleration,"angularAcceleration");
	HX_MARK_MEMBER_NAME(angularDrag,"angularDrag");
	HX_MARK_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(ignoreAngularVelocity,"ignoreAngularVelocity");
	HX_MARK_MEMBER_NAME(launchAngle,"launchAngle");
	HX_MARK_MEMBER_NAME(lifespan,"lifespan");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(drag,"drag");
	HX_MARK_MEMBER_NAME(acceleration,"acceleration");
	HX_MARK_MEMBER_NAME(elasticity,"elasticity");
	HX_MARK_MEMBER_NAME(immovable,"immovable");
	HX_MARK_MEMBER_NAME(autoUpdateHitbox,"autoUpdateHitbox");
	HX_MARK_MEMBER_NAME(allowCollisions,"allowCollisions");
	HX_MARK_MEMBER_NAME(_quantity,"_quantity");
	HX_MARK_MEMBER_NAME(_explode,"_explode");
	HX_MARK_MEMBER_NAME(_timer,"_timer");
	HX_MARK_MEMBER_NAME(_counter,"_counter");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_waitForKill,"_waitForKill");
	 ::flixel::group::FlxTypedGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTypedEmitter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(particleClass,"particleClass");
	HX_VISIT_MEMBER_NAME(emitting,"emitting");
	HX_VISIT_MEMBER_NAME(frequency,"frequency");
	HX_VISIT_MEMBER_NAME(blend,"blend");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(launchMode,"launchMode");
	HX_VISIT_MEMBER_NAME(keepScaleRatio,"keepScaleRatio");
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(angularAcceleration,"angularAcceleration");
	HX_VISIT_MEMBER_NAME(angularDrag,"angularDrag");
	HX_VISIT_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(ignoreAngularVelocity,"ignoreAngularVelocity");
	HX_VISIT_MEMBER_NAME(launchAngle,"launchAngle");
	HX_VISIT_MEMBER_NAME(lifespan,"lifespan");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(drag,"drag");
	HX_VISIT_MEMBER_NAME(acceleration,"acceleration");
	HX_VISIT_MEMBER_NAME(elasticity,"elasticity");
	HX_VISIT_MEMBER_NAME(immovable,"immovable");
	HX_VISIT_MEMBER_NAME(autoUpdateHitbox,"autoUpdateHitbox");
	HX_VISIT_MEMBER_NAME(allowCollisions,"allowCollisions");
	HX_VISIT_MEMBER_NAME(_quantity,"_quantity");
	HX_VISIT_MEMBER_NAME(_explode,"_explode");
	HX_VISIT_MEMBER_NAME(_timer,"_timer");
	HX_VISIT_MEMBER_NAME(_counter,"_counter");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_waitForKill,"_waitForKill");
	 ::flixel::group::FlxTypedGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxTypedEmitter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"drag") ) { return ::hx::Val( drag ); }
		if (HX_FIELD_EQ(inName,"kill") ) { return ::hx::Val( kill_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"blend") ) { return ::hx::Val( blend ); }
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"speed") ) { return ::hx::Val( speed ); }
		if (HX_FIELD_EQ(inName,"angle") ) { return ::hx::Val( angle ); }
		if (HX_FIELD_EQ(inName,"scale") ) { return ::hx::Val( scale ); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return ::hx::Val( alpha ); }
		if (HX_FIELD_EQ(inName,"color") ) { return ::hx::Val( color ); }
		if (HX_FIELD_EQ(inName,"solid") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_solid() ); }
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"_timer") ) { return ::hx::Val( _timer ); }
		if (HX_FIELD_EQ(inName,"_point") ) { return ::hx::Val( _point ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"explode") ) { return ::hx::Val( explode_dyn() ); }
		if (HX_FIELD_EQ(inName,"focusOn") ) { return ::hx::Val( focusOn_dyn() ); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return ::hx::Val( setSize_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"emitting") ) { return ::hx::Val( emitting ); }
		if (HX_FIELD_EQ(inName,"velocity") ) { return ::hx::Val( velocity ); }
		if (HX_FIELD_EQ(inName,"lifespan") ) { return ::hx::Val( lifespan ); }
		if (HX_FIELD_EQ(inName,"_explode") ) { return ::hx::Val( _explode ); }
		if (HX_FIELD_EQ(inName,"_counter") ) { return ::hx::Val( _counter ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frequency") ) { return ::hx::Val( frequency ); }
		if (HX_FIELD_EQ(inName,"immovable") ) { return ::hx::Val( immovable ); }
		if (HX_FIELD_EQ(inName,"_quantity") ) { return ::hx::Val( _quantity ); }
		if (HX_FIELD_EQ(inName,"get_solid") ) { return ::hx::Val( get_solid_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_solid") ) { return ::hx::Val( set_solid_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"launchMode") ) { return ::hx::Val( launchMode ); }
		if (HX_FIELD_EQ(inName,"elasticity") ) { return ::hx::Val( elasticity ); }
		if (HX_FIELD_EQ(inName,"onFinished") ) { return ::hx::Val( onFinished_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"angularDrag") ) { return ::hx::Val( angularDrag ); }
		if (HX_FIELD_EQ(inName,"launchAngle") ) { return ::hx::Val( launchAngle ); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return ::hx::Val( setPosition_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"acceleration") ) { return ::hx::Val( acceleration ); }
		if (HX_FIELD_EQ(inName,"_waitForKill") ) { return ::hx::Val( _waitForKill ); }
		if (HX_FIELD_EQ(inName,"loadParticle") ) { return ::hx::Val( loadParticle_dyn() ); }
		if (HX_FIELD_EQ(inName,"emitParticle") ) { return ::hx::Val( emitParticle_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"particleClass") ) { return ::hx::Val( particleClass ); }
		if (HX_FIELD_EQ(inName,"loadParticles") ) { return ::hx::Val( loadParticles_dyn() ); }
		if (HX_FIELD_EQ(inName,"makeParticles") ) { return ::hx::Val( makeParticles_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"keepScaleRatio") ) { return ::hx::Val( keepScaleRatio ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { return ::hx::Val( angularVelocity ); }
		if (HX_FIELD_EQ(inName,"allowCollisions") ) { return ::hx::Val( allowCollisions ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"autoUpdateHitbox") ) { return ::hx::Val( autoUpdateHitbox ); }
		if (HX_FIELD_EQ(inName,"emitContinuously") ) { return ::hx::Val( emitContinuously_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularAcceleration") ) { return ::hx::Val( angularAcceleration ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ignoreAngularVelocity") ) { return ::hx::Val( ignoreAngularVelocity ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"emitParticleContinuously") ) { return ::hx::Val( emitParticleContinuously_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxTypedEmitter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"drag") ) { drag=inValue.Cast<  ::flixel::util::helpers::FlxPointRangeBounds >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"blend") ) { blend=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast<  ::flixel::util::helpers::FlxRangeBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast<  ::flixel::util::helpers::FlxRangeBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast<  ::flixel::util::helpers::FlxPointRangeBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast<  ::flixel::util::helpers::FlxRangeBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast<  ::flixel::util::helpers::FlxRangeBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"solid") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_solid(inValue.Cast< bool >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"emitting") ) { emitting=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast<  ::flixel::util::helpers::FlxPointRangeBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lifespan") ) { lifespan=inValue.Cast<  ::flixel::util::helpers::FlxBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_explode") ) { _explode=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_counter") ) { _counter=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frequency") ) { frequency=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"immovable") ) { immovable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_quantity") ) { _quantity=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"launchMode") ) { launchMode=inValue.Cast<  ::flixel::effects::particles::FlxEmitterMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"elasticity") ) { elasticity=inValue.Cast<  ::flixel::util::helpers::FlxRangeBounds >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"angularDrag") ) { angularDrag=inValue.Cast<  ::flixel::util::helpers::FlxRangeBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"launchAngle") ) { launchAngle=inValue.Cast<  ::flixel::util::helpers::FlxBounds >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"acceleration") ) { acceleration=inValue.Cast<  ::flixel::util::helpers::FlxPointRangeBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_waitForKill") ) { _waitForKill=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"particleClass") ) { particleClass=inValue.Cast< ::hx::Class >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"keepScaleRatio") ) { keepScaleRatio=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { angularVelocity=inValue.Cast<  ::flixel::util::helpers::FlxRangeBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowCollisions") ) { allowCollisions=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"autoUpdateHitbox") ) { autoUpdateHitbox=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularAcceleration") ) { angularAcceleration=inValue.Cast<  ::flixel::util::helpers::FlxRangeBounds >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ignoreAngularVelocity") ) { ignoreAngularVelocity=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedEmitter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("particleClass",12,2c,af,5e));
	outFields->push(HX_("emitting",c1,90,7b,58));
	outFields->push(HX_("frequency",9c,82,ea,bb));
	outFields->push(HX_("blend",51,e8,f4,b4));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("launchMode",36,97,65,b9));
	outFields->push(HX_("keepScaleRatio",06,6f,41,31));
	outFields->push(HX_("velocity",1d,02,fe,1e));
	outFields->push(HX_("speed",87,97,69,81));
	outFields->push(HX_("angularAcceleration",42,c6,00,9a));
	outFields->push(HX_("angularDrag",f6,1f,19,9c));
	outFields->push(HX_("angularVelocity",1f,1f,fe,58));
	outFields->push(HX_("angle",d3,43,e2,22));
	outFields->push(HX_("ignoreAngularVelocity",2d,72,dc,56));
	outFields->push(HX_("launchAngle",a0,d8,08,96));
	outFields->push(HX_("lifespan",c6,19,ce,6b));
	outFields->push(HX_("scale",8a,ce,ce,78));
	outFields->push(HX_("alpha",5e,a7,96,21));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("drag",f4,2b,70,42));
	outFields->push(HX_("acceleration",40,00,61,9a));
	outFields->push(HX_("elasticity",79,23,b4,4d));
	outFields->push(HX_("immovable",0a,27,70,27));
	outFields->push(HX_("autoUpdateHitbox",90,aa,3d,24));
	outFields->push(HX_("allowCollisions",aa,c9,d9,59));
	outFields->push(HX_("solid",2b,b4,c5,80));
	outFields->push(HX_("_quantity",ea,3e,d8,f3));
	outFields->push(HX_("_explode",62,15,1c,61));
	outFields->push(HX_("_timer",06,07,1d,0c));
	outFields->push(HX_("_counter",7d,08,12,57));
	outFields->push(HX_("_point",91,fb,76,c2));
	outFields->push(HX_("_waitForKill",53,6f,91,2f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTypedEmitter_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::hx::Class */ ,(int)offsetof(FlxTypedEmitter_obj,particleClass),HX_("particleClass",12,2c,af,5e)},
	{::hx::fsBool,(int)offsetof(FlxTypedEmitter_obj,emitting),HX_("emitting",c1,90,7b,58)},
	{::hx::fsFloat,(int)offsetof(FlxTypedEmitter_obj,frequency),HX_("frequency",9c,82,ea,bb)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxTypedEmitter_obj,blend),HX_("blend",51,e8,f4,b4)},
	{::hx::fsFloat,(int)offsetof(FlxTypedEmitter_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(FlxTypedEmitter_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(FlxTypedEmitter_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsFloat,(int)offsetof(FlxTypedEmitter_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsObject /*  ::flixel::effects::particles::FlxEmitterMode */ ,(int)offsetof(FlxTypedEmitter_obj,launchMode),HX_("launchMode",36,97,65,b9)},
	{::hx::fsBool,(int)offsetof(FlxTypedEmitter_obj,keepScaleRatio),HX_("keepScaleRatio",06,6f,41,31)},
	{::hx::fsObject /*  ::flixel::util::helpers::FlxPointRangeBounds */ ,(int)offsetof(FlxTypedEmitter_obj,velocity),HX_("velocity",1d,02,fe,1e)},
	{::hx::fsObject /*  ::flixel::util::helpers::FlxRangeBounds */ ,(int)offsetof(FlxTypedEmitter_obj,speed),HX_("speed",87,97,69,81)},
	{::hx::fsObject /*  ::flixel::util::helpers::FlxRangeBounds */ ,(int)offsetof(FlxTypedEmitter_obj,angularAcceleration),HX_("angularAcceleration",42,c6,00,9a)},
	{::hx::fsObject /*  ::flixel::util::helpers::FlxRangeBounds */ ,(int)offsetof(FlxTypedEmitter_obj,angularDrag),HX_("angularDrag",f6,1f,19,9c)},
	{::hx::fsObject /*  ::flixel::util::helpers::FlxRangeBounds */ ,(int)offsetof(FlxTypedEmitter_obj,angularVelocity),HX_("angularVelocity",1f,1f,fe,58)},
	{::hx::fsObject /*  ::flixel::util::helpers::FlxRangeBounds */ ,(int)offsetof(FlxTypedEmitter_obj,angle),HX_("angle",d3,43,e2,22)},
	{::hx::fsBool,(int)offsetof(FlxTypedEmitter_obj,ignoreAngularVelocity),HX_("ignoreAngularVelocity",2d,72,dc,56)},
	{::hx::fsObject /*  ::flixel::util::helpers::FlxBounds */ ,(int)offsetof(FlxTypedEmitter_obj,launchAngle),HX_("launchAngle",a0,d8,08,96)},
	{::hx::fsObject /*  ::flixel::util::helpers::FlxBounds */ ,(int)offsetof(FlxTypedEmitter_obj,lifespan),HX_("lifespan",c6,19,ce,6b)},
	{::hx::fsObject /*  ::flixel::util::helpers::FlxPointRangeBounds */ ,(int)offsetof(FlxTypedEmitter_obj,scale),HX_("scale",8a,ce,ce,78)},
	{::hx::fsObject /*  ::flixel::util::helpers::FlxRangeBounds */ ,(int)offsetof(FlxTypedEmitter_obj,alpha),HX_("alpha",5e,a7,96,21)},
	{::hx::fsObject /*  ::flixel::util::helpers::FlxRangeBounds */ ,(int)offsetof(FlxTypedEmitter_obj,color),HX_("color",63,71,5c,4a)},
	{::hx::fsObject /*  ::flixel::util::helpers::FlxPointRangeBounds */ ,(int)offsetof(FlxTypedEmitter_obj,drag),HX_("drag",f4,2b,70,42)},
	{::hx::fsObject /*  ::flixel::util::helpers::FlxPointRangeBounds */ ,(int)offsetof(FlxTypedEmitter_obj,acceleration),HX_("acceleration",40,00,61,9a)},
	{::hx::fsObject /*  ::flixel::util::helpers::FlxRangeBounds */ ,(int)offsetof(FlxTypedEmitter_obj,elasticity),HX_("elasticity",79,23,b4,4d)},
	{::hx::fsBool,(int)offsetof(FlxTypedEmitter_obj,immovable),HX_("immovable",0a,27,70,27)},
	{::hx::fsBool,(int)offsetof(FlxTypedEmitter_obj,autoUpdateHitbox),HX_("autoUpdateHitbox",90,aa,3d,24)},
	{::hx::fsInt,(int)offsetof(FlxTypedEmitter_obj,allowCollisions),HX_("allowCollisions",aa,c9,d9,59)},
	{::hx::fsInt,(int)offsetof(FlxTypedEmitter_obj,_quantity),HX_("_quantity",ea,3e,d8,f3)},
	{::hx::fsBool,(int)offsetof(FlxTypedEmitter_obj,_explode),HX_("_explode",62,15,1c,61)},
	{::hx::fsFloat,(int)offsetof(FlxTypedEmitter_obj,_timer),HX_("_timer",06,07,1d,0c)},
	{::hx::fsInt,(int)offsetof(FlxTypedEmitter_obj,_counter),HX_("_counter",7d,08,12,57)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxTypedEmitter_obj,_point),HX_("_point",91,fb,76,c2)},
	{::hx::fsBool,(int)offsetof(FlxTypedEmitter_obj,_waitForKill),HX_("_waitForKill",53,6f,91,2f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxTypedEmitter_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTypedEmitter_obj_sMemberFields[] = {
	HX_("particleClass",12,2c,af,5e),
	HX_("emitting",c1,90,7b,58),
	HX_("frequency",9c,82,ea,bb),
	HX_("blend",51,e8,f4,b4),
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("launchMode",36,97,65,b9),
	HX_("keepScaleRatio",06,6f,41,31),
	HX_("velocity",1d,02,fe,1e),
	HX_("speed",87,97,69,81),
	HX_("angularAcceleration",42,c6,00,9a),
	HX_("angularDrag",f6,1f,19,9c),
	HX_("angularVelocity",1f,1f,fe,58),
	HX_("angle",d3,43,e2,22),
	HX_("ignoreAngularVelocity",2d,72,dc,56),
	HX_("launchAngle",a0,d8,08,96),
	HX_("lifespan",c6,19,ce,6b),
	HX_("scale",8a,ce,ce,78),
	HX_("alpha",5e,a7,96,21),
	HX_("color",63,71,5c,4a),
	HX_("drag",f4,2b,70,42),
	HX_("acceleration",40,00,61,9a),
	HX_("elasticity",79,23,b4,4d),
	HX_("immovable",0a,27,70,27),
	HX_("autoUpdateHitbox",90,aa,3d,24),
	HX_("allowCollisions",aa,c9,d9,59),
	HX_("_quantity",ea,3e,d8,f3),
	HX_("_explode",62,15,1c,61),
	HX_("_timer",06,07,1d,0c),
	HX_("_counter",7d,08,12,57),
	HX_("_point",91,fb,76,c2),
	HX_("_waitForKill",53,6f,91,2f),
	HX_("destroy",fa,2c,86,24),
	HX_("loadParticles",67,10,eb,14),
	HX_("loadParticle",8c,2a,fa,25),
	HX_("makeParticles",9f,37,2e,8b),
	HX_("update",09,86,05,87),
	HX_("explode",e1,bb,63,27),
	HX_("emitContinuously",4f,a0,33,17),
	HX_("emitParticleContinuously",b5,26,af,13),
	HX_("onFinished",b1,67,c5,72),
	HX_("kill",9e,df,09,47),
	HX_("start",62,74,0b,84),
	HX_("emitParticle",b9,a3,6b,89),
	HX_("focusOn",17,4b,83,41),
	HX_("setPosition",6b,6a,5b,fb),
	HX_("setSize",83,e1,d7,11),
	HX_("get_solid",82,10,6f,c4),
	HX_("set_solid",8e,fc,bf,a7),
	::String(null()) };

::hx::Class FlxTypedEmitter_obj::__mClass;

void FlxTypedEmitter_obj::__register()
{
	FlxTypedEmitter_obj _hx_dummy;
	FlxTypedEmitter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.effects.particles.FlxTypedEmitter",57,05,9c,88);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTypedEmitter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTypedEmitter_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTypedEmitter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTypedEmitter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace effects
} // end namespace particles
