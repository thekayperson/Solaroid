#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif

namespace openfl{
namespace display{


static ::String IGraphicsData_obj_sMemberFields[] = {
	HX_("__graphicsDataType",0f,5d,4d,46),
	::String(null()) };

::hx::Class IGraphicsData_obj::__mClass;

void IGraphicsData_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.IGraphicsData",f4,13,2b,b9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IGraphicsData_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xc177ee0c >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
