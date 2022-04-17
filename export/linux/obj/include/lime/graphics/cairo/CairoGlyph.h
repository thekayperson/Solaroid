#ifndef INCLUDED_lime_graphics_cairo_CairoGlyph
#define INCLUDED_lime_graphics_cairo_CairoGlyph

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_294e16b65fbd220a_15_new)
HX_DECLARE_CLASS3(lime,graphics,cairo,CairoGlyph)

namespace lime{
namespace graphics{
namespace cairo{


class HXCPP_CLASS_ATTRIBUTES CairoGlyph_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CairoGlyph_obj OBJ_;
		CairoGlyph_obj();

	public:
		enum { _hx_ClassId = 0x1ff20744 };

		void __construct(int index,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.cairo.CairoGlyph")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.cairo.CairoGlyph"); }

		inline static ::hx::ObjectPtr< CairoGlyph_obj > __new(int index,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
			::hx::ObjectPtr< CairoGlyph_obj > __this = new CairoGlyph_obj();
			__this->__construct(index,__o_x,__o_y);
			return __this;
		}

		inline static ::hx::ObjectPtr< CairoGlyph_obj > __alloc(::hx::Ctx *_hx_ctx,int index,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
			CairoGlyph_obj *__this = (CairoGlyph_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CairoGlyph_obj), false, "lime.graphics.cairo.CairoGlyph"));
			*(void **)__this = CairoGlyph_obj::_hx_vtable;
{
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_294e16b65fbd220a_15_new)
            	HX_STACK_THIS(__this)
            	HX_STACK_ARG(index,"index")
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
HXLINE(  15)
HXLINE(  16)		( ( ::lime::graphics::cairo::CairoGlyph)(__this) )->index = index;
HXLINE(  17)		( ( ::lime::graphics::cairo::CairoGlyph)(__this) )->x = x;
HXLINE(  18)		( ( ::lime::graphics::cairo::CairoGlyph)(__this) )->y = y;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CairoGlyph_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CairoGlyph",24,54,05,c6); }

		int index;
		Float x;
		Float y;
};

} // end namespace lime
} // end namespace graphics
} // end namespace cairo

#endif /* INCLUDED_lime_graphics_cairo_CairoGlyph */ 
