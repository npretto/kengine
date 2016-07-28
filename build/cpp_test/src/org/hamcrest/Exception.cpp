// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_org_hamcrest_Exception
#include <org/hamcrest/Exception.h>
#endif

namespace org{
namespace hamcrest{

void Exception_obj::__construct(::String __o_message, ::Dynamic cause, ::Dynamic info){
::String message = __o_message.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
            	HX_STACK_FRAME("org.hamcrest.Exception","new",0xab539160,"org.hamcrest.Exception.new","org/hamcrest/Exception.hx",22,0x940281f0)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(message,"message")
            	HX_STACK_ARG(cause,"cause")
            	HX_STACK_ARG(info,"info")
HXLINE(  23)		hx::Class _hx_tmp = ::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this));
HXDLIN(  23)		this->name = ::Type_obj::getClassName(_hx_tmp);
HXLINE(  24)		this->message = message;
HXLINE(  25)		this->cause = cause;
HXLINE(  26)		this->info = info;
            	}

Dynamic Exception_obj::__CreateEmpty() { return new Exception_obj; }

hx::ObjectPtr< Exception_obj > Exception_obj::__new(::String __o_message, ::Dynamic cause, ::Dynamic info)
{
	hx::ObjectPtr< Exception_obj > _hx_result = new Exception_obj();
	_hx_result->__construct(__o_message,cause,info);
	return _hx_result;
}

Dynamic Exception_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Exception_obj > _hx_result = new Exception_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

::String Exception_obj::get_name(){
            	HX_STACK_FRAME("org.hamcrest.Exception","get_name",0xc1feccd4,"org.hamcrest.Exception.get_name","org/hamcrest/Exception.hx",11,0x940281f0)
            	HX_STACK_THIS(this)
HXLINE(  11)		return this->name;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Exception_obj,get_name,return )

::String Exception_obj::get_message(){
            	HX_STACK_FRAME("org.hamcrest.Exception","get_message",0x623456de,"org.hamcrest.Exception.get_message","org/hamcrest/Exception.hx",14,0x940281f0)
            	HX_STACK_THIS(this)
HXLINE(  14)		return this->message;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Exception_obj,get_message,return )

 ::Dynamic Exception_obj::get_cause(){
            	HX_STACK_FRAME("org.hamcrest.Exception","get_cause",0xa79229c0,"org.hamcrest.Exception.get_cause","org/hamcrest/Exception.hx",17,0x940281f0)
            	HX_STACK_THIS(this)
HXLINE(  17)		return this->cause;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Exception_obj,get_cause,return )

::String Exception_obj::toString(){
            	HX_STACK_FRAME("org.hamcrest.Exception","toString",0x31b36fac,"org.hamcrest.Exception.toString","org/hamcrest/Exception.hx",31,0x940281f0)
            	HX_STACK_THIS(this)
HXLINE(  32)		::String _hx_tmp = this->get_name();
HXDLIN(  32)		::String _hx_tmp1 = (_hx_tmp + HX_(": ",a6,32,00,00));
HXDLIN(  32)		::String _hx_tmp2 = this->get_message();
HXDLIN(  32)		HX_VARI( ::String,str) = (_hx_tmp1 + _hx_tmp2);
HXLINE(  33)		Bool _hx_tmp3 = hx::IsNotNull( this->info );
HXDLIN(  33)		if (_hx_tmp3) {
HXLINE(  34)			hx::AddEq(str,((((((HX_(" at ",ad,d3,70,15) + ( (::String)(this->info->__Field(HX_("className",a3,92,3d,dc),hx::paccDynamic)) )) + HX_("#",23,00,00,00)) + ( (::String)(this->info->__Field(HX_("methodName",cc,19,0f,12),hx::paccDynamic)) )) + HX_(" (",08,1c,00,00)) + ( (Int)(this->info->__Field(HX_("lineNumber",dd,81,22,76),hx::paccDynamic)) )) + HX_(")",29,00,00,00)));
            		}
HXLINE(  35)		 ::Dynamic _hx_tmp4 = this->get_cause();
HXDLIN(  35)		Bool _hx_tmp5 = hx::IsNotNull( _hx_tmp4 );
HXDLIN(  35)		if (_hx_tmp5) {
HXLINE(  36)			 ::Dynamic _hx_tmp6 = this->get_cause();
HXDLIN(  36)			::String _hx_tmp7 = ::Std_obj::string(_hx_tmp6);
HXDLIN(  36)			hx::AddEq(str,(HX_("\n\t Caused by: ",a1,89,80,08) + _hx_tmp7));
            		}
HXLINE(  37)		return str;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Exception_obj,toString,return )


Exception_obj::Exception_obj()
{
}

void Exception_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Exception);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(message,"message");
	HX_MARK_MEMBER_NAME(cause,"cause");
	HX_MARK_MEMBER_NAME(info,"info");
	HX_MARK_END_CLASS();
}

void Exception_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(message,"message");
	HX_VISIT_MEMBER_NAME(cause,"cause");
	HX_VISIT_MEMBER_NAME(info,"info");
}

hx::Val Exception_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( inCallProp == hx::paccAlways ? get_name() : name); }
		if (HX_FIELD_EQ(inName,"info") ) { return hx::Val( info); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cause") ) { return hx::Val( inCallProp == hx::paccAlways ? get_cause() : cause); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { return hx::Val( inCallProp == hx::paccAlways ? get_message() : message); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_name") ) { return hx::Val( get_name_dyn()); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_cause") ) { return hx::Val( get_cause_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_message") ) { return hx::Val( get_message_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Exception_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"info") ) { info=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cause") ) { cause=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { message=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Exception_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("message","\xc7","\x35","\x11","\x9a"));
	outFields->push(HX_HCSTRING("cause","\x69","\x4c","\x22","\x41"));
	outFields->push(HX_HCSTRING("info","\x6e","\x38","\xbb","\x45"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Exception_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Exception_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsString,(int)offsetof(Exception_obj,message),HX_HCSTRING("message","\xc7","\x35","\x11","\x9a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Exception_obj,cause),HX_HCSTRING("cause","\x69","\x4c","\x22","\x41")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Exception_obj,info),HX_HCSTRING("info","\x6e","\x38","\xbb","\x45")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Exception_obj_sStaticStorageInfo = 0;
#endif

static ::String Exception_obj_sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("get_name","\xd4","\x2d","\xba","\xc8"),
	HX_HCSTRING("message","\xc7","\x35","\x11","\x9a"),
	HX_HCSTRING("get_message","\xde","\x95","\x0b","\x20"),
	HX_HCSTRING("cause","\x69","\x4c","\x22","\x41"),
	HX_HCSTRING("get_cause","\xc0","\xa8","\xcb","\x84"),
	HX_HCSTRING("info","\x6e","\x38","\xbb","\x45"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void Exception_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Exception_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Exception_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Exception_obj::__mClass,"__mClass");
};

#endif

hx::Class Exception_obj::__mClass;

void Exception_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("org.hamcrest.Exception","\x6e","\xa1","\x9f","\xf7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Exception_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Exception_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Exception_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Exception_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Exception_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Exception_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace org
} // end namespace hamcrest
