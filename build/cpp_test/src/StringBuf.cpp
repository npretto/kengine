// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif


void StringBuf_obj::__construct(){
            	HX_STACK_FRAME("StringBuf","new",0xaaa8f4b4,"StringBuf.new","C:\\Dev\\HaxeToolkit\\haxe\\std/cpp/_std/StringBuf.hx",32,0x80366269)
            	HX_STACK_THIS(this)
HXLINE(  32)		this->b = ::Array_obj< ::String >::__new();
            	}

Dynamic StringBuf_obj::__CreateEmpty() { return new StringBuf_obj; }

hx::ObjectPtr< StringBuf_obj > StringBuf_obj::__new()
{
	hx::ObjectPtr< StringBuf_obj > _hx_result = new StringBuf_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic StringBuf_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StringBuf_obj > _hx_result = new StringBuf_obj();
	_hx_result->__construct();
	return _hx_result;
}

void StringBuf_obj::flush(){
            	HX_STACK_FRAME("StringBuf","flush",0xc7c14418,"StringBuf.flush","C:\\Dev\\HaxeToolkit\\haxe\\std/cpp/_std/StringBuf.hx",35,0x80366269)
            	HX_STACK_THIS(this)
HXLINE(  36)		HX_VARI( ::cpp::Pointer< char >,autoCast) = ::cpp::Pointer_obj::arrayElem(this->charBuf,(int)0);
HXDLIN(  36)		::cpp::Pointer< char > inPtr = autoCast;
HXDLIN(  36)		Int inLen = this->charBuf->length;
HXDLIN(  36)		::String _hx_tmp = ::String(inPtr->ptr,inLen);
HXDLIN(  36)		this->b->push(_hx_tmp);
HXLINE(  37)		this->charBuf = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringBuf_obj,flush,(void))


StringBuf_obj::StringBuf_obj()
{
}

void StringBuf_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StringBuf);
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(charBuf,"charBuf");
	HX_MARK_END_CLASS();
}

void StringBuf_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(charBuf,"charBuf");
}

hx::Val StringBuf_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return hx::Val( b); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flush") ) { return hx::Val( flush_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"charBuf") ) { return hx::Val( charBuf); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val StringBuf_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"charBuf") ) { charBuf=inValue.Cast< ::Array< char > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StringBuf_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("charBuf","\xfd","\x85","\x55","\xcf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo StringBuf_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(StringBuf_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{hx::fsObject /*Array< ::cpp::Char >*/ ,(int)offsetof(StringBuf_obj,charBuf),HX_HCSTRING("charBuf","\xfd","\x85","\x55","\xcf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *StringBuf_obj_sStaticStorageInfo = 0;
#endif

static ::String StringBuf_obj_sMemberFields[] = {
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("charBuf","\xfd","\x85","\x55","\xcf"),
	HX_HCSTRING("flush","\xc4","\x62","\x9b","\x02"),
	::String(null()) };

static void StringBuf_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StringBuf_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StringBuf_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StringBuf_obj::__mClass,"__mClass");
};

#endif

hx::Class StringBuf_obj::__mClass;

void StringBuf_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("StringBuf","\xc2","\xca","\x83","\x69");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = StringBuf_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(StringBuf_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StringBuf_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StringBuf_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StringBuf_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StringBuf_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

