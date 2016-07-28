// Generated by Haxe 3.3.0
#ifndef INCLUDED_massive_munit_client_SummaryReportClient
#define INCLUDED_massive_munit_client_SummaryReportClient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_massive_munit_client_AbstractTestResultClient
#include <massive/munit/client/AbstractTestResultClient.h>
#endif
HX_DECLARE_CLASS2(massive,munit,IAdvancedTestResultClient)
HX_DECLARE_CLASS2(massive,munit,ICoverageTestResultClient)
HX_DECLARE_CLASS2(massive,munit,ITestResultClient)
HX_DECLARE_CLASS3(massive,munit,client,AbstractTestResultClient)
HX_DECLARE_CLASS3(massive,munit,client,SummaryReportClient)

namespace massive{
namespace munit{
namespace client{


class HXCPP_CLASS_ATTRIBUTES SummaryReportClient_obj : public  ::massive::munit::client::AbstractTestResultClient_obj
{
	public:
		typedef  ::massive::munit::client::AbstractTestResultClient_obj super;
		typedef SummaryReportClient_obj OBJ_;
		SummaryReportClient_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="massive.munit.client.SummaryReportClient")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"massive.munit.client.SummaryReportClient"); }
		static hx::ObjectPtr< SummaryReportClient_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SummaryReportClient_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("SummaryReportClient","\x45","\xea","\x24","\xc6"); }

		static void __boot();
		static ::String DEFAULT_ID;
		void printFinalStatistics(Bool result,Int testCount,Int passCount,Int failCount,Int errorCount,Int ignoreCount,Float time);

		void printOverallResult(Bool result);

		void printReports();

};

} // end namespace massive
} // end namespace munit
} // end namespace client

#endif /* INCLUDED_massive_munit_client_SummaryReportClient */ 
