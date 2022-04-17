#ifndef INCLUDED_flixel_system_debug_Window
#define INCLUDED_flixel_system_debug_Window

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS3(flixel,_hx_system,debug,Window)
HX_DECLARE_CLASS3(flixel,_hx_system,ui,FlxSystemButton)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,text,TextField)

namespace flixel{
namespace _hx_system{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES Window_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef Window_obj OBJ_;
		Window_obj();

	public:
		enum { _hx_ClassId = 0x39123ef8 };

		void __construct(::String Title, ::openfl::display::BitmapData Icon,::hx::Null< Float >  __o_Width,::hx::Null< Float >  __o_Height,::hx::Null< bool >  __o_Resizable, ::openfl::geom::Rectangle Bounds,::hx::Null< bool >  __o_Closable,::hx::Null< bool >  __o_AlwaysOnTop);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.Window")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.debug.Window"); }
		static ::hx::ObjectPtr< Window_obj > __new(::String Title, ::openfl::display::BitmapData Icon,::hx::Null< Float >  __o_Width,::hx::Null< Float >  __o_Height,::hx::Null< bool >  __o_Resizable, ::openfl::geom::Rectangle Bounds,::hx::Null< bool >  __o_Closable,::hx::Null< bool >  __o_AlwaysOnTop);
		static ::hx::ObjectPtr< Window_obj > __alloc(::hx::Ctx *_hx_ctx,::String Title, ::openfl::display::BitmapData Icon,::hx::Null< Float >  __o_Width,::hx::Null< Float >  __o_Height,::hx::Null< bool >  __o_Resizable, ::openfl::geom::Rectangle Bounds,::hx::Null< bool >  __o_Closable,::hx::Null< bool >  __o_AlwaysOnTop);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Window_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Window",10,08,21,87); }

		static void __boot();
		static int BG_COLOR;
		static int HEADER_COLOR;
		static Float HEADER_ALPHA;
		static int HEADER_HEIGHT;
		static int windowAmount;
		 ::openfl::geom::Point minSize;
		 ::openfl::geom::Point maxSize;
		 ::flixel::_hx_system::ui::FlxSystemButton toggleButton;
		int _width;
		int _height;
		 ::openfl::geom::Rectangle _bounds;
		 ::openfl::display::Bitmap _background;
		 ::openfl::display::Bitmap _header;
		 ::openfl::display::Bitmap _shadow;
		 ::openfl::text::TextField _title;
		 ::openfl::display::Bitmap _handle;
		 ::openfl::display::Bitmap _icon;
		 ::flixel::_hx_system::ui::FlxSystemButton _closeButton;
		bool _overHeader;
		bool _overHandle;
		 ::openfl::geom::Point _drag;
		bool _dragging;
		bool _resizing;
		bool _resizable;
		bool _closable;
		bool _alwaysOnTop;
		int _id;
		virtual void destroy();
		::Dynamic destroy_dyn();

		virtual void resize(Float Width,Float Height);
		::Dynamic resize_dyn();

		virtual void reposition(Float X,Float Y);
		::Dynamic reposition_dyn();

		void updateBounds( ::openfl::geom::Rectangle Bounds);
		::Dynamic updateBounds_dyn();

		void setVisible(bool Value);
		::Dynamic setVisible_dyn();

		virtual void toggleVisible();
		::Dynamic toggleVisible_dyn();

		void putOnTop();
		::Dynamic putOnTop_dyn();

		void loadSaveData();
		::Dynamic loadSaveData_dyn();

		virtual void update();
		::Dynamic update_dyn();

		void init( ::openfl::events::Event _);
		::Dynamic init_dyn();

		void onMouseMove( ::openfl::events::MouseEvent _);
		::Dynamic onMouseMove_dyn();

		void onMouseDown( ::openfl::events::MouseEvent _);
		::Dynamic onMouseDown_dyn();

		void onMouseUp( ::openfl::events::MouseEvent _);
		::Dynamic onMouseUp_dyn();

		void bound();
		::Dynamic bound_dyn();

		virtual void updateSize();
		::Dynamic updateSize_dyn();

		void close();
		::Dynamic close_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_flixel_system_debug_Window */ 
