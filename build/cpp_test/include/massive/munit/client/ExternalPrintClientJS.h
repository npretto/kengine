// Generated by Haxe 3.3.0
#ifndef INCLUDED_massive_munit_client_ExternalPrintClientJS
#define INCLUDED_massive_munit_client_ExternalPrintClientJS

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_massive_munit_client_ExternalPrintClient
#include <massive/munit/client/ExternalPrintClient.h>
#endif
HX_DECLARE_CLASS3(massive,munit,client,ExternalPrintClient)
HX_DECLARE_CLASS3(massive,munit,client,ExternalPrintClientJS)

namespace massive{
namespace munit{
namespace client{


class HXCPP_CLASS_ATTRIBUTES ExternalPrintClientJS_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ExternalPrintClientJS_obj OBJ_;
		ExternalPrintClientJS_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="massive.munit.client.ExternalPrintClientJS")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"massive.munit.client.ExternalPrintClientJS"); }
		static hx::ObjectPtr< ExternalPrintClientJS_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ExternalPrintClientJS_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("ExternalPrintClientJS","\xb6","\x67","\xba","\x7c"); }

		void print(::String value);
		::Dynamic print_dyn();

		void printLine(::String value);
		::Dynamic printLine_dyn();

		void setResult(Bool value);
		::Dynamic setResult_dyn();

		void setResultBackground(Bool value);
		::Dynamic setResultBackground_dyn();

		void trace( ::Dynamic value);
		::Dynamic trace_dyn();

		void createTestClass(::String className);
		::Dynamic createTestClass_dyn();

		void printToTestClassSummary(::String value);
		::Dynamic printToTestClassSummary_dyn();

		void setTestClassResult(Int resultType);
		::Dynamic setTestClassResult_dyn();

		void addTestPass(::String value);
		::Dynamic addTestPass_dyn();

		void addTestFail(::String value);
		::Dynamic addTestFail_dyn();

		void addTestError(::String value);
		::Dynamic addTestError_dyn();

		void addTestIgnore(::String value);
		::Dynamic addTestIgnore_dyn();

		void addTestClassCoverage(::String className,hx::Null< Float >  percent);
		::Dynamic addTestClassCoverage_dyn();

		void addTestClassCoverageItem(::String value);
		::Dynamic addTestClassCoverageItem_dyn();

		void createCoverageReport(hx::Null< Float >  percent);
		::Dynamic createCoverageReport_dyn();

		void addMissingCoverageClass(::String className,hx::Null< Float >  percent);
		::Dynamic addMissingCoverageClass_dyn();

		void addCoverageReportSection(::String name,::String value);
		::Dynamic addCoverageReportSection_dyn();

		void addCoverageSummary(::String value);
		::Dynamic addCoverageSummary_dyn();

		void printSummary(::String value);
		::Dynamic printSummary_dyn();

		Bool queue(::String method, ::Dynamic args);
		::Dynamic queue_dyn();

		::String convertToJavaScript(::String method,::cpp::VirtualArray args);
		::Dynamic convertToJavaScript_dyn();

		::String serialiseToHTML( ::Dynamic value);
		::Dynamic serialiseToHTML_dyn();

};

} // end namespace massive
} // end namespace munit
} // end namespace client

#endif /* INCLUDED_massive_munit_client_ExternalPrintClientJS */ 
