// Generated by Haxe 3.3.0
#ifndef INCLUDED_massive_haxe_Exception
#define INCLUDED_massive_haxe_Exception

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(massive,haxe,Exception)

namespace massive{
namespace haxe{


class HXCPP_CLASS_ATTRIBUTES Exception_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Exception_obj OBJ_;
		Exception_obj();

	public:
		void __construct(::String message, ::Dynamic info);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="massive.haxe.Exception")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"massive.haxe.Exception"); }
		static hx::ObjectPtr< Exception_obj > __new(::String message, ::Dynamic info);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Exception_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Exception","\x2f","\xf0","\x6c","\xeb"); }

		::String type;
		::String message;
		 ::Dynamic info;
		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace massive
} // end namespace haxe

#endif /* INCLUDED_massive_haxe_Exception */ 
