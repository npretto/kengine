// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

namespace haxe{
namespace ds{

void StringMap_obj::__construct(){
            	HX_STACK_FRAME("haxe.ds.StringMap","new",0x0f13f0c6,"haxe.ds.StringMap.new","C:\\Dev\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/StringMap.hx",52,0x29af2a37)
            	HX_STACK_THIS(this)
            	}

Dynamic StringMap_obj::__CreateEmpty() { return new StringMap_obj; }

hx::ObjectPtr< StringMap_obj > StringMap_obj::__new()
{
	hx::ObjectPtr< StringMap_obj > _hx_result = new StringMap_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic StringMap_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StringMap_obj > _hx_result = new StringMap_obj();
	_hx_result->__construct();
	return _hx_result;
}

static ::haxe::IMap_obj _hx_haxe_ds_StringMap__hx_haxe_IMap= {
};

void *StringMap_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x09c2bd39: return &_hx_haxe_ds_StringMap__hx_haxe_IMap;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void StringMap_obj::set(::String key, ::Dynamic value){
            	HX_STACK_FRAME("haxe.ds.StringMap","set",0x0f17bc08,"haxe.ds.StringMap.set","C:\\Dev\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/StringMap.hx",55,0x29af2a37)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(key,"key")
            	HX_STACK_ARG(value,"value")
HXLINE(  55)		::__string_hash_set(this->h,key,value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(StringMap_obj,set,(void))


StringMap_obj::StringMap_obj()
{
}

void StringMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StringMap);
	HX_MARK_MEMBER_NAME(h,"h");
	HX_MARK_END_CLASS();
}

void StringMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(h,"h");
}

hx::Val StringMap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { return hx::Val( h); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val StringMap_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { h=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StringMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("h","\x68","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo StringMap_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(StringMap_obj,h),HX_HCSTRING("h","\x68","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *StringMap_obj_sStaticStorageInfo = 0;
#endif

static ::String StringMap_obj_sMemberFields[] = {
	HX_HCSTRING("h","\x68","\x00","\x00","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void StringMap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StringMap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StringMap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StringMap_obj::__mClass,"__mClass");
};

#endif

hx::Class StringMap_obj::__mClass;

void StringMap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ds.StringMap","\xd4","\xd5","\xd6","\x62");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = StringMap_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(StringMap_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StringMap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StringMap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StringMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StringMap_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ds
