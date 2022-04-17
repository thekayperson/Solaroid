#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_text_harfbuzz__HBFont_HBFont_Impl_
#include <lime/text/harfbuzz/_HBFont/HBFont_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_8982c1de16066810_19__new,"lime.text.harfbuzz._HBFont.HBFont_Impl_","_new",0x4bb207da,"lime.text.harfbuzz._HBFont.HBFont_Impl_._new","lime/text/harfbuzz/HBFont.hx",19,0x4233424e)
HX_LOCAL_STACK_FRAME(_hx_pos_8982c1de16066810_31_addGlyphOriginForDirection,"lime.text.harfbuzz._HBFont.HBFont_Impl_","addGlyphOriginForDirection",0x2019e4e0,"lime.text.harfbuzz._HBFont.HBFont_Impl_.addGlyphOriginForDirection","lime/text/harfbuzz/HBFont.hx",31,0x4233424e)
HX_LOCAL_STACK_FRAME(_hx_pos_8982c1de16066810_38_createSubFont,"lime.text.harfbuzz._HBFont.HBFont_Impl_","createSubFont",0x13b8423a,"lime.text.harfbuzz._HBFont.HBFont_Impl_.createSubFont","lime/text/harfbuzz/HBFont.hx",38,0x4233424e)
HX_LOCAL_STACK_FRAME(_hx_pos_8982c1de16066810_47_getGlyphAdvanceForDirection,"lime.text.harfbuzz._HBFont.HBFont_Impl_","getGlyphAdvanceForDirection",0xe0a662a9,"lime.text.harfbuzz._HBFont.HBFont_Impl_.getGlyphAdvanceForDirection","lime/text/harfbuzz/HBFont.hx",47,0x4233424e)
HX_LOCAL_STACK_FRAME(_hx_pos_8982c1de16066810_56_getGlyphKerningForDirection,"lime.text.harfbuzz._HBFont.HBFont_Impl_","getGlyphKerningForDirection",0x37395bf3,"lime.text.harfbuzz._HBFont.HBFont_Impl_.getGlyphKerningForDirection","lime/text/harfbuzz/HBFont.hx",56,0x4233424e)
HX_LOCAL_STACK_FRAME(_hx_pos_8982c1de16066810_65_getGlyphOriginForDirection,"lime.text.harfbuzz._HBFont.HBFont_Impl_","getGlyphOriginForDirection",0x1cb9850b,"lime.text.harfbuzz._HBFont.HBFont_Impl_.getGlyphOriginForDirection","lime/text/harfbuzz/HBFont.hx",65,0x4233424e)
HX_LOCAL_STACK_FRAME(_hx_pos_8982c1de16066810_74_glyphFromString,"lime.text.harfbuzz._HBFont.HBFont_Impl_","glyphFromString",0x75619cce,"lime.text.harfbuzz._HBFont.HBFont_Impl_.glyphFromString","lime/text/harfbuzz/HBFont.hx",74,0x4233424e)
HX_LOCAL_STACK_FRAME(_hx_pos_8982c1de16066810_81_glyphToString,"lime.text.harfbuzz._HBFont.HBFont_Impl_","glyphToString",0xb4ce8cdf,"lime.text.harfbuzz._HBFont.HBFont_Impl_.glyphToString","lime/text/harfbuzz/HBFont.hx",81,0x4233424e)
HX_LOCAL_STACK_FRAME(_hx_pos_8982c1de16066810_96_makeImmutable,"lime.text.harfbuzz._HBFont.HBFont_Impl_","makeImmutable",0x792196db,"lime.text.harfbuzz._HBFont.HBFont_Impl_.makeImmutable","lime/text/harfbuzz/HBFont.hx",96,0x4233424e)
HX_LOCAL_STACK_FRAME(_hx_pos_8982c1de16066810_103_subtractGlyphOriginForDirection,"lime.text.harfbuzz._HBFont.HBFont_Impl_","subtractGlyphOriginForDirection",0xee7c273b,"lime.text.harfbuzz._HBFont.HBFont_Impl_.subtractGlyphOriginForDirection","lime/text/harfbuzz/HBFont.hx",103,0x4233424e)
HX_LOCAL_STACK_FRAME(_hx_pos_8982c1de16066810_111_get_empty,"lime.text.harfbuzz._HBFont.HBFont_Impl_","get_empty",0x94320dcb,"lime.text.harfbuzz._HBFont.HBFont_Impl_.get_empty","lime/text/harfbuzz/HBFont.hx",111,0x4233424e)
HX_LOCAL_STACK_FRAME(_hx_pos_8982c1de16066810_120_get_face,"lime.text.harfbuzz._HBFont.HBFont_Impl_","get_face",0x24e0931f,"lime.text.harfbuzz._HBFont.HBFont_Impl_.get_face","lime/text/harfbuzz/HBFont.hx",120,0x4233424e)
HX_LOCAL_STACK_FRAME(_hx_pos_8982c1de16066810_129_get_immutable,"lime.text.harfbuzz._HBFont.HBFont_Impl_","get_immutable",0x41dc7280,"lime.text.harfbuzz._HBFont.HBFont_Impl_.get_immutable","lime/text/harfbuzz/HBFont.hx",129,0x4233424e)
HX_LOCAL_STACK_FRAME(_hx_pos_8982c1de16066810_138_get_parent,"lime.text.harfbuzz._HBFont.HBFont_Impl_","get_parent",0x95ff082c,"lime.text.harfbuzz._HBFont.HBFont_Impl_.get_parent","lime/text/harfbuzz/HBFont.hx",138,0x4233424e)
HX_LOCAL_STACK_FRAME(_hx_pos_8982c1de16066810_147_get_ppem,"lime.text.harfbuzz._HBFont.HBFont_Impl_","get_ppem",0x2b8818ea,"lime.text.harfbuzz._HBFont.HBFont_Impl_.get_ppem","lime/text/harfbuzz/HBFont.hx",147,0x4233424e)
HX_LOCAL_STACK_FRAME(_hx_pos_8982c1de16066810_154_set_ppem,"lime.text.harfbuzz._HBFont.HBFont_Impl_","set_ppem",0xd9e5725e,"lime.text.harfbuzz._HBFont.HBFont_Impl_.set_ppem","lime/text/harfbuzz/HBFont.hx",154,0x4233424e)
HX_LOCAL_STACK_FRAME(_hx_pos_8982c1de16066810_164_get_scale,"lime.text.harfbuzz._HBFont.HBFont_Impl_","get_scale",0x9d26a1c8,"lime.text.harfbuzz._HBFont.HBFont_Impl_.get_scale","lime/text/harfbuzz/HBFont.hx",164,0x4233424e)
HX_LOCAL_STACK_FRAME(_hx_pos_8982c1de16066810_171_set_scale,"lime.text.harfbuzz._HBFont.HBFont_Impl_","set_scale",0x80778dd4,"lime.text.harfbuzz._HBFont.HBFont_Impl_.set_scale","lime/text/harfbuzz/HBFont.hx",171,0x4233424e)
namespace lime{
namespace text{
namespace harfbuzz{
namespace _HBFont{

void HBFont_Impl__obj::__construct() { }

Dynamic HBFont_Impl__obj::__CreateEmpty() { return new HBFont_Impl__obj; }

void *HBFont_Impl__obj::_hx_vtable = 0;

Dynamic HBFont_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HBFont_Impl__obj > _hx_result = new HBFont_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HBFont_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x36d8812b;
}

 ::Dynamic HBFont_Impl__obj::_new( ::Dynamic face){
            	HX_STACKFRAME(&_hx_pos_8982c1de16066810_19__new)
            	HX_STACK_ARG(face,"face")
HXLINE(  19)
HXDLIN(  19)		HX_VARI(  ::Dynamic,this1) = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_font_create(::hx::DynamicPtr(face))) );
HXDLIN(  19)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBFont_Impl__obj,_new,return )

void HBFont_Impl__obj::addGlyphOriginForDirection( ::Dynamic this1,int glyph,int direction,int x,int y){
            	HX_STACKFRAME(&_hx_pos_8982c1de16066810_31_addGlyphOriginForDirection)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(glyph,"glyph")
            	HX_STACK_ARG(direction,"direction")
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
HXLINE(  31)
HXDLIN(  31)		::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_font_add_glyph_origin_for_direction(::hx::DynamicPtr(this1),glyph,direction,x,y);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(HBFont_Impl__obj,addGlyphOriginForDirection,(void))

 ::Dynamic HBFont_Impl__obj::createSubFont( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_8982c1de16066810_38_createSubFont)
            	HX_STACK_ARG(this1,"this1")
HXLINE(  38)
HXDLIN(  38)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_font_create_sub_font(::hx::DynamicPtr(this1))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBFont_Impl__obj,createSubFont,return )

 ::lime::math::Vector2 HBFont_Impl__obj::getGlyphAdvanceForDirection( ::Dynamic this1,int glyph,int direction){
            	HX_STACKFRAME(&_hx_pos_8982c1de16066810_47_getGlyphAdvanceForDirection)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(glyph,"glyph")
            	HX_STACK_ARG(direction,"direction")
HXLINE(  47)
HXDLIN(  47)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_font_get_glyph_advance_for_direction(::hx::DynamicPtr(this1),glyph,direction)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HBFont_Impl__obj,getGlyphAdvanceForDirection,return )

 ::lime::math::Vector2 HBFont_Impl__obj::getGlyphKerningForDirection( ::Dynamic this1,int glyph,int firstGlyph,int secondGlyph,int direction){
            	HX_STACKFRAME(&_hx_pos_8982c1de16066810_56_getGlyphKerningForDirection)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(glyph,"glyph")
            	HX_STACK_ARG(firstGlyph,"firstGlyph")
            	HX_STACK_ARG(secondGlyph,"secondGlyph")
            	HX_STACK_ARG(direction,"direction")
HXLINE(  56)
HXDLIN(  56)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_font_get_glyph_kerning_for_direction(::hx::DynamicPtr(this1),firstGlyph,secondGlyph,direction)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(HBFont_Impl__obj,getGlyphKerningForDirection,return )

 ::lime::math::Vector2 HBFont_Impl__obj::getGlyphOriginForDirection( ::Dynamic this1,int glyph,int direction){
            	HX_STACKFRAME(&_hx_pos_8982c1de16066810_65_getGlyphOriginForDirection)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(glyph,"glyph")
            	HX_STACK_ARG(direction,"direction")
HXLINE(  65)
HXDLIN(  65)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_font_get_glyph_origin_for_direction(::hx::DynamicPtr(this1),glyph,direction)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HBFont_Impl__obj,getGlyphOriginForDirection,return )

int HBFont_Impl__obj::glyphFromString( ::Dynamic this1,::String s){
            	HX_STACKFRAME(&_hx_pos_8982c1de16066810_74_glyphFromString)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(s,"s")
HXLINE(  74)
HXDLIN(  74)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_font_glyph_from_string(::hx::DynamicPtr(this1),s);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HBFont_Impl__obj,glyphFromString,return )

::String HBFont_Impl__obj::glyphToString( ::Dynamic this1,int codepoint){
            	HX_STACKFRAME(&_hx_pos_8982c1de16066810_81_glyphToString)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(codepoint,"codepoint")
HXLINE(  81)
HXLINE(  83)		HX_VARI(  ::hx::Object *,result) = ::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_font_glyph_to_string(::hx::DynamicPtr(this1),codepoint);
HXLINE(  87)		return ( ( ::Dynamic)(result) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HBFont_Impl__obj,glyphToString,return )

void HBFont_Impl__obj::makeImmutable( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_8982c1de16066810_96_makeImmutable)
            	HX_STACK_ARG(this1,"this1")
HXLINE(  96)
HXDLIN(  96)		::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_font_make_immutable(::hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBFont_Impl__obj,makeImmutable,(void))

void HBFont_Impl__obj::subtractGlyphOriginForDirection( ::Dynamic this1,int glyph,int direction,int x,int y){
            	HX_STACKFRAME(&_hx_pos_8982c1de16066810_103_subtractGlyphOriginForDirection)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(glyph,"glyph")
            	HX_STACK_ARG(direction,"direction")
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
HXLINE( 103)
HXDLIN( 103)		::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_font_subtract_glyph_origin_for_direction(::hx::DynamicPtr(this1),glyph,direction,x,y);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(HBFont_Impl__obj,subtractGlyphOriginForDirection,(void))

 ::Dynamic HBFont_Impl__obj::get_empty(){
            	HX_STACKFRAME(&_hx_pos_8982c1de16066810_111_get_empty)
HXLINE( 111)
HXDLIN( 111)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_font_get_empty()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HBFont_Impl__obj,get_empty,return )

 ::Dynamic HBFont_Impl__obj::get_face( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_8982c1de16066810_120_get_face)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 120)
HXDLIN( 120)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_font_get_face(::hx::DynamicPtr(this1))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBFont_Impl__obj,get_face,return )

bool HBFont_Impl__obj::get_immutable( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_8982c1de16066810_129_get_immutable)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 129)
HXDLIN( 129)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_font_is_immutable(::hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBFont_Impl__obj,get_immutable,return )

 ::Dynamic HBFont_Impl__obj::get_parent( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_8982c1de16066810_138_get_parent)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 138)
HXDLIN( 138)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_font_get_parent(::hx::DynamicPtr(this1))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBFont_Impl__obj,get_parent,return )

 ::lime::math::Vector2 HBFont_Impl__obj::get_ppem( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_8982c1de16066810_147_get_ppem)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 147)
HXDLIN( 147)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_font_get_ppem(::hx::DynamicPtr(this1))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBFont_Impl__obj,get_ppem,return )

 ::lime::math::Vector2 HBFont_Impl__obj::set_ppem( ::Dynamic this1, ::lime::math::Vector2 value){
            	HX_STACKFRAME(&_hx_pos_8982c1de16066810_154_set_ppem)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(value,"value")
HXLINE( 154)
HXLINE( 156)		::cpp::Function< void  ( ::hx::Object *,int,int) > _hx_tmp = ::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_font_set_ppem;
HXDLIN( 156)		int _hx_tmp1 = ::Std_obj::_hx_int(value->x);
HXDLIN( 156)		_hx_tmp(::hx::DynamicPtr(this1),_hx_tmp1,::Std_obj::_hx_int(value->y));
HXLINE( 158)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HBFont_Impl__obj,set_ppem,return )

 ::lime::math::Vector2 HBFont_Impl__obj::get_scale( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_8982c1de16066810_164_get_scale)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 164)
HXDLIN( 164)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_font_get_scale(::hx::DynamicPtr(this1))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBFont_Impl__obj,get_scale,return )

 ::lime::math::Vector2 HBFont_Impl__obj::set_scale( ::Dynamic this1, ::lime::math::Vector2 value){
            	HX_STACKFRAME(&_hx_pos_8982c1de16066810_171_set_scale)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(value,"value")
HXLINE( 171)
HXLINE( 173)		::cpp::Function< void  ( ::hx::Object *,int,int) > _hx_tmp = ::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_font_set_scale;
HXDLIN( 173)		int _hx_tmp1 = ::Std_obj::_hx_int(value->x);
HXDLIN( 173)		_hx_tmp(::hx::DynamicPtr(this1),_hx_tmp1,::Std_obj::_hx_int(value->y));
HXLINE( 175)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HBFont_Impl__obj,set_scale,return )


HBFont_Impl__obj::HBFont_Impl__obj()
{
}

bool HBFont_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_face") ) { outValue = get_face_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_ppem") ) { outValue = get_ppem_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_ppem") ) { outValue = set_ppem_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_empty") ) { outValue = get_empty_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_scale") ) { outValue = get_scale_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_scale") ) { outValue = set_scale_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_parent") ) { outValue = get_parent_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createSubFont") ) { outValue = createSubFont_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"glyphToString") ) { outValue = glyphToString_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"makeImmutable") ) { outValue = makeImmutable_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_immutable") ) { outValue = get_immutable_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"glyphFromString") ) { outValue = glyphFromString_dyn(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"addGlyphOriginForDirection") ) { outValue = addGlyphOriginForDirection_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getGlyphOriginForDirection") ) { outValue = getGlyphOriginForDirection_dyn(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"getGlyphAdvanceForDirection") ) { outValue = getGlyphAdvanceForDirection_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getGlyphKerningForDirection") ) { outValue = getGlyphKerningForDirection_dyn(); return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"subtractGlyphOriginForDirection") ) { outValue = subtractGlyphOriginForDirection_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *HBFont_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *HBFont_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class HBFont_Impl__obj::__mClass;

static ::String HBFont_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("addGlyphOriginForDirection",a7,8f,40,fc),
	HX_("createSubFont",d3,cb,06,fa),
	HX_("getGlyphAdvanceForDirection",02,26,55,a6),
	HX_("getGlyphKerningForDirection",4c,1f,e8,fc),
	HX_("getGlyphOriginForDirection",d2,2f,e0,f8),
	HX_("glyphFromString",a7,7e,98,73),
	HX_("glyphToString",78,16,1d,9b),
	HX_("makeImmutable",74,20,70,5f),
	HX_("subtractGlyphOriginForDirection",14,0b,f2,84),
	HX_("get_empty",e4,96,83,b3),
	HX_("get_face",26,70,70,c3),
	HX_("get_immutable",19,fc,2a,28),
	HX_("get_parent",f3,74,05,de),
	HX_("get_ppem",f1,f5,17,ca),
	HX_("set_ppem",65,4f,75,78),
	HX_("get_scale",e1,2a,78,bc),
	HX_("set_scale",ed,16,c9,9f),
	::String(null())
};

void HBFont_Impl__obj::__register()
{
	HBFont_Impl__obj _hx_dummy;
	HBFont_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.text.harfbuzz._HBFont.HBFont_Impl_",95,80,38,26);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HBFont_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(HBFont_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< HBFont_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HBFont_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HBFont_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace text
} // end namespace harfbuzz
} // end namespace _HBFont
