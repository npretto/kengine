// Generated by Haxe 3.3.0
#ifndef INCLUDED_sys_ssl_Key
#define INCLUDED_sys_ssl_Key

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(sys,ssl,Key)

namespace sys{
namespace ssl{


class HXCPP_CLASS_ATTRIBUTES Key_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Key_obj OBJ_;
		Key_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="sys.ssl.Key")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"sys.ssl.Key"); }
		static hx::ObjectPtr< Key_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Key_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		static void __init__();

		::String __ToString() const { return HX_HCSTRING("Key","\x7f","\x41","\x39","\x00"); }

		static void __boot();
		 ::Dynamic _hx___k;
};

} // end namespace sys
} // end namespace ssl

#endif /* INCLUDED_sys_ssl_Key */ 
