// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_org_hamcrest_Exception
#include <org/hamcrest/Exception.h>
#endif
#ifndef INCLUDED_org_hamcrest_IllegalArgumentException
#include <org/hamcrest/IllegalArgumentException.h>
#endif

namespace org{
namespace hamcrest{

void IllegalArgumentException_obj::__construct(::String __o_message, ::Dynamic cause, ::Dynamic info){
::String message = __o_message.Default(HX_HCSTRING("Argument could not be processed.","\xee","\x2b","\x9a","\x87"));
            	HX_STACK_FRAME("org.hamcrest.IllegalArgumentException","new",0x236854ef,"org.hamcrest.IllegalArgumentException.new","org/hamcrest/Exception.hx",45,0x940281f0)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(message,"message")
            	HX_STACK_ARG(cause,"cause")
            	HX_STACK_ARG(info,"info")
HXLINE(  45)		super::__construct(message,cause,info);
            	}

Dynamic IllegalArgumentException_obj::__CreateEmpty() { return new IllegalArgumentException_obj; }

hx::ObjectPtr< IllegalArgumentException_obj > IllegalArgumentException_obj::__new(::String __o_message, ::Dynamic cause, ::Dynamic info)
{
	hx::ObjectPtr< IllegalArgumentException_obj > _hx_result = new IllegalArgumentException_obj();
	_hx_result->__construct(__o_message,cause,info);
	return _hx_result;
}

Dynamic IllegalArgumentException_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< IllegalArgumentException_obj > _hx_result = new IllegalArgumentException_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}


IllegalArgumentException_obj::IllegalArgumentException_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *IllegalArgumentException_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *IllegalArgumentException_obj_sStaticStorageInfo = 0;
#endif

static void IllegalArgumentException_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IllegalArgumentException_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IllegalArgumentException_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IllegalArgumentException_obj::__mClass,"__mClass");
};

#endif

hx::Class IllegalArgumentException_obj::__mClass;

void IllegalArgumentException_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("org.hamcrest.IllegalArgumentException","\x7d","\xb1","\x69","\x36");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = IllegalArgumentException_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< IllegalArgumentException_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IllegalArgumentException_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IllegalArgumentException_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IllegalArgumentException_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace org
} // end namespace hamcrest
