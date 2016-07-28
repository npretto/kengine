// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED__List_ListNode
#include <_List/ListNode.h>
#endif
#ifndef INCLUDED_massive_haxe_Exception
#include <massive/haxe/Exception.h>
#endif
#ifndef INCLUDED_massive_munit_AssertionException
#include <massive/munit/AssertionException.h>
#endif
#ifndef INCLUDED_massive_munit_IAdvancedTestResultClient
#include <massive/munit/IAdvancedTestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_ICoverageTestResultClient
#include <massive/munit/ICoverageTestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_ITestResultClient
#include <massive/munit/ITestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_MUnitException
#include <massive/munit/MUnitException.h>
#endif
#ifndef INCLUDED_massive_munit_TestResult
#include <massive/munit/TestResult.h>
#endif
#ifndef INCLUDED_massive_munit_TestResultType
#include <massive/munit/TestResultType.h>
#endif
#ifndef INCLUDED_massive_munit_client_AbstractTestResultClient
#include <massive/munit/client/AbstractTestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_client_PrintClientBase
#include <massive/munit/client/PrintClientBase.h>
#endif
#ifndef INCLUDED_massive_munit_util_MathUtil
#include <massive/munit/util/MathUtil.h>
#endif

namespace massive{
namespace munit{
namespace client{

void PrintClientBase_obj::__construct( ::Dynamic __o_includeIgnoredReport){
 ::Dynamic includeIgnoredReport = __o_includeIgnoredReport.Default(true);
            	HX_STACK_FRAME("massive.munit.client.PrintClientBase","new",0x78e7185f,"massive.munit.client.PrintClientBase.new","massive/munit/client/PrintClientBase.hx",52,0x1ddc6930)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(includeIgnoredReport,"includeIgnoredReport")
HXLINE(  53)		super::__construct();
HXLINE(  54)		this->id = HX_("simple",32,04,7f,b8);
HXLINE(  55)		this->verbose = false;
HXLINE(  56)		this->includeIgnoredReport = includeIgnoredReport;
HXLINE(  58)		this->printLine(HX_("MUnit Results",27,bf,ec,01),null());
HXLINE(  59)		this->printLine(this->divider,null());
            	}

Dynamic PrintClientBase_obj::__CreateEmpty() { return new PrintClientBase_obj; }

hx::ObjectPtr< PrintClientBase_obj > PrintClientBase_obj::__new( ::Dynamic __o_includeIgnoredReport)
{
	hx::ObjectPtr< PrintClientBase_obj > _hx_result = new PrintClientBase_obj();
	_hx_result->__construct(__o_includeIgnoredReport);
	return _hx_result;
}

Dynamic PrintClientBase_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< PrintClientBase_obj > _hx_result = new PrintClientBase_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

void PrintClientBase_obj::init(){
            	HX_STACK_FRAME("massive.munit.client.PrintClientBase","init",0x4e06f231,"massive.munit.client.PrintClientBase.init","massive/munit/client/PrintClientBase.hx",63,0x1ddc6930)
            	HX_STACK_THIS(this)
HXLINE(  64)		this->super::init();
HXLINE(  65)		this->divider = HX_("------------------------------",a0,a6,7a,e6);
HXLINE(  66)		this->divider2 = HX_("==============================",a0,f8,06,d2);
            	}


void PrintClientBase_obj::initializeTestClass(){
            	HX_STACK_FRAME("massive.munit.client.PrintClientBase","initializeTestClass",0x4df93115,"massive.munit.client.PrintClientBase.initializeTestClass","massive/munit/client/PrintClientBase.hx",72,0x1ddc6930)
            	HX_STACK_THIS(this)
HXLINE(  73)		this->super::initializeTestClass();
HXLINE(  74)		this->printLine(((HX_("Class: ",be,50,e2,36) + this->currentTestClass) + HX_(" ",20,00,00,00)),null());
            	}


void PrintClientBase_obj::updateTestClass( ::massive::munit::TestResult result){
            	HX_STACK_FRAME("massive.munit.client.PrintClientBase","updateTestClass",0xc78451bc,"massive.munit.client.PrintClientBase.updateTestClass","massive/munit/client/PrintClientBase.hx",78,0x1ddc6930)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(result,"result")
HXLINE(  79)		this->super::updateTestClass(result);
HXLINE(  80)		Bool _hx_tmp = this->verbose;
HXDLIN(  80)		if (_hx_tmp) {
HXLINE(  80)			::String _hx_tmp1 = ((HX_(" ",20,00,00,00) + result->name) + HX_(": ",a6,32,00,00));
HXDLIN(  80)			::hx::EnumBase _hx_tmp2 = result->get_type();
HXDLIN(  80)			::String _hx_tmp3 = ::Std_obj::string(_hx_tmp2);
HXDLIN(  80)			this->printLine(((_hx_tmp1 + _hx_tmp3) + HX_(" ",20,00,00,00)),null());
            		}
            		else {
HXLINE(  83)			HX_VARI( ::hx::EnumBase,_g) = result->get_type();
HXDLIN(  83)			Int _hx_tmp4 = ( ( ::hx::EnumBase)(_g) )->_hx_getIndex();
HXDLIN(  83)			switch((int)(_hx_tmp4)){
            				case (int)0: {
            				}
            				break;
            				case (int)1: {
HXLINE(  85)					this->print(HX_(".",2e,00,00,00));
            				}
            				break;
            				case (int)2: {
HXLINE(  86)					this->print(HX_("!",21,00,00,00));
            				}
            				break;
            				case (int)3: {
HXLINE(  87)					this->print(HX_("x",78,00,00,00));
            				}
            				break;
            				case (int)4: {
HXLINE(  88)					this->print(HX_(",",2c,00,00,00));
            				}
            				break;
            			}
            		}
            	}


void PrintClientBase_obj::finalizeTestClass(){
            	HX_STACK_FRAME("massive.munit.client.PrintClientBase","finalizeTestClass",0x6abe5547,"massive.munit.client.PrintClientBase.finalizeTestClass","massive/munit/client/PrintClientBase.hx",95,0x1ddc6930)
            	HX_STACK_THIS(this)
HXLINE(  96)		this->super::finalizeTestClass();
HXLINE(  98)		{
HXLINE(  98)			HX_VARI( Int,_g) = (int)0;
HXDLIN(  98)			HX_VARI( ::Array< ::String >,_g1) = this->getTraces();
HXDLIN(  98)			while((_g < _g1->length)){
HXLINE(  98)				HX_VARI( ::String,item) = _g1->__get(_g);
HXDLIN(  98)				++_g;
HXLINE( 100)				this->printLine((HX_("TRACE: ",4b,1c,d8,07) + item),(int)1);
            			}
            		}
HXLINE( 103)		{
HXLINE( 103)			HX_VARI_NAME( Int,_g2,"_g") = (int)0;
HXDLIN( 103)			HX_VARI_NAME( ::Array< ::Dynamic>,_g11,"_g1") = this->currentClassResults;
HXDLIN( 103)			while((_g2 < _g11->length)){
HXLINE( 103)				HX_VARI(  ::massive::munit::TestResult,result) = _g11->__get(_g2).StaticCast<  ::massive::munit::TestResult >();
HXDLIN( 103)				++_g2;
HXLINE( 105)				{
HXLINE( 105)					HX_VARI_NAME( ::hx::EnumBase,_g21,"_g2") = result->get_type();
HXDLIN( 105)					Int _hx_tmp = ( ( ::hx::EnumBase)(_g21) )->_hx_getIndex();
HXDLIN( 105)					switch((int)(_hx_tmp)){
            						case (int)0: case (int)1: {
            						}
            						break;
            						case (int)2: {
HXLINE( 108)							::String _hx_tmp1 = ::Std_obj::string(result->failure);
HXDLIN( 108)							this->printLine((HX_("FAIL: ",04,68,81,9a) + _hx_tmp1),(int)1);
            						}
            						break;
            						case (int)3: {
HXLINE( 107)							::String _hx_tmp2 = ::Std_obj::string(result->error);
HXDLIN( 107)							this->printLine((HX_("ERROR: ",4e,70,de,69) + _hx_tmp2),(int)1);
            						}
            						break;
            						case (int)4: {
HXLINE( 111)							HX_VARI( ::String,ingoredString) = result->get_location();
HXLINE( 112)							Bool _hx_tmp3 = hx::IsNotNull( result->description );
HXDLIN( 112)							if (_hx_tmp3) {
HXLINE( 112)								hx::AddEq(ingoredString,(HX_(" - ",73,6f,18,00) + result->description));
            							}
HXLINE( 113)							this->printLine((HX_("IGNORE: ",38,80,bc,ba) + ingoredString),(int)1);
            						}
            						break;
            					}
            				}
            			}
            		}
            	}


void PrintClientBase_obj::setCurrentTestClassCoverage( ::Dynamic result){
            	HX_STACK_FRAME("massive.munit.client.PrintClientBase","setCurrentTestClassCoverage",0xe1d848d6,"massive.munit.client.PrintClientBase.setCurrentTestClassCoverage","massive/munit/client/PrintClientBase.hx",122,0x1ddc6930)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(result,"result")
HXLINE( 123)		this->super::setCurrentTestClassCoverage(result);
HXLINE( 124)		::String _hx_tmp = ((HX_(" [",3b,1c,00,00) + ( (Float)(result->__Field(HX_("percent",c5,aa,da,78),hx::paccDynamic)) )) + HX_("%]",98,20,00,00));
HXDLIN( 124)		this->print(_hx_tmp);
            	}


void PrintClientBase_obj::reportFinalCoverage( ::Dynamic __o_percent,::Array< ::Dynamic> missingCoverageResults,::String summary,::String classBreakdown,::String packageBreakdown,::String executionFrequency){
 ::Dynamic percent = __o_percent.Default(0);
            	HX_STACK_FRAME("massive.munit.client.PrintClientBase","reportFinalCoverage",0xbc183c29,"massive.munit.client.PrintClientBase.reportFinalCoverage","massive/munit/client/PrintClientBase.hx",142,0x1ddc6930)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(percent,"percent")
            	HX_STACK_ARG(missingCoverageResults,"missingCoverageResults")
            	HX_STACK_ARG(summary,"summary")
            	HX_STACK_ARG(classBreakdown,"classBreakdown")
            	HX_STACK_ARG(packageBreakdown,"packageBreakdown")
            	HX_STACK_ARG(executionFrequency,"executionFrequency")
HXLINE( 143)		this->super::reportFinalCoverage(percent,missingCoverageResults,summary,classBreakdown,packageBreakdown,executionFrequency);
HXLINE( 145)		this->printLine(HX_("",00,00,00,00),null());
HXLINE( 146)		this->printLine(this->divider,null());
HXLINE( 147)		this->printLine(HX_("COVERAGE REPORT",ec,ab,03,2a),null());
HXLINE( 148)		this->printLine(this->divider,null());
HXLINE( 150)		Bool _hx_tmp;
HXDLIN( 150)		Bool _hx_tmp1 = hx::IsNotNull( missingCoverageResults );
HXDLIN( 150)		if (_hx_tmp1) {
HXLINE( 150)			_hx_tmp = (missingCoverageResults->length > (int)0);
            		}
            		else {
HXLINE( 150)			_hx_tmp = false;
            		}
HXDLIN( 150)		if (_hx_tmp) {
HXLINE( 152)			this->printLine(HX_("MISSING CODE BLOCKS:",1b,96,b2,63),null());
HXLINE( 153)			{
HXLINE( 153)				HX_VARI( Int,_g) = (int)0;
HXDLIN( 153)				while((_g < missingCoverageResults->length)){
HXLINE( 153)					HX_VARI(  ::Dynamic,result) = missingCoverageResults->__get(_g);
HXDLIN( 153)					++_g;
HXLINE( 155)					::String _hx_tmp2 = ((( (::String)(result->__Field(HX_("className",a3,92,3d,dc),hx::paccDynamic)) ) + HX_(" [",3b,1c,00,00)) + ( (Float)(result->__Field(HX_("percent",c5,aa,da,78),hx::paccDynamic)) ));
HXDLIN( 155)					this->printLine((_hx_tmp2 + HX_("%]",98,20,00,00)),(int)1);
HXLINE( 156)					{
HXLINE( 156)						HX_VARI( Int,_g1) = (int)0;
HXDLIN( 156)						HX_VARI( ::Array< ::String >,_g2) = ( (::Array< ::String >)(result->__Field(HX_("blocks",86,2e,ea,a7),hx::paccDynamic)) );
HXDLIN( 156)						while((_g1 < _g2->length)){
HXLINE( 156)							HX_VARI( ::String,item) = _g2->__get(_g1);
HXDLIN( 156)							++_g1;
HXLINE( 158)							this->printIndentedLines(item,(int)2);
            						}
            					}
HXLINE( 160)					this->printLine(HX_("",00,00,00,00),null());
            				}
            			}
            		}
HXLINE( 164)		Bool _hx_tmp3 = hx::IsNotNull( executionFrequency );
HXDLIN( 164)		if (_hx_tmp3) {
HXLINE( 166)			this->printLine(HX_("CODE EXECUTION FREQUENCY:",b9,13,e4,96),null());
HXLINE( 167)			this->printIndentedLines(executionFrequency,(int)1);
HXLINE( 169)			this->printLine(HX_("",00,00,00,00),null());
            		}
HXLINE( 172)		Bool _hx_tmp4 = hx::IsNotNull( classBreakdown );
HXDLIN( 172)		if (_hx_tmp4) {
HXLINE( 174)			this->printIndentedLines(classBreakdown,(int)0);
            		}
HXLINE( 177)		Bool _hx_tmp5 = hx::IsNotNull( packageBreakdown );
HXDLIN( 177)		if (_hx_tmp5) {
HXLINE( 179)			this->printIndentedLines(packageBreakdown,(int)0);
            		}
HXLINE( 182)		Bool _hx_tmp6 = hx::IsNotNull( summary );
HXDLIN( 182)		if (_hx_tmp6) {
HXLINE( 184)			this->printIndentedLines(summary,(int)0);
            		}
            	}


void PrintClientBase_obj::printIndentedLines(::String value,hx::Null< Int >  __o_indent){
Int indent = __o_indent.Default(1);
            	HX_STACK_FRAME("massive.munit.client.PrintClientBase","printIndentedLines",0x85b904a8,"massive.munit.client.PrintClientBase.printIndentedLines","massive/munit/client/PrintClientBase.hx",189,0x1ddc6930)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
            	HX_STACK_ARG(indent,"indent")
HXLINE( 190)		HX_VARI( ::Array< ::String >,lines) = value.split(HX_("\n",0a,00,00,00));
HXLINE( 191)		{
HXLINE( 191)			HX_VARI( Int,_g) = (int)0;
HXDLIN( 191)			while((_g < lines->length)){
HXLINE( 191)				HX_VARI( ::String,line) = lines->__get(_g);
HXDLIN( 191)				++_g;
HXLINE( 193)				this->printLine(line,indent);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(PrintClientBase_obj,printIndentedLines,(void))

void PrintClientBase_obj::printReports(){
            	HX_STACK_FRAME("massive.munit.client.PrintClientBase","printReports",0x9ce900b3,"massive.munit.client.PrintClientBase.printReports","massive/munit/client/PrintClientBase.hx",200,0x1ddc6930)
            	HX_STACK_THIS(this)
HXLINE( 200)		this->printFinalIgnoredStatistics(this->ignoreCount);
            	}


void PrintClientBase_obj::printFinalIgnoredStatistics(Int count){
            	HX_STACK_FRAME("massive.munit.client.PrintClientBase","printFinalIgnoredStatistics",0x09275b8b,"massive.munit.client.PrintClientBase.printFinalIgnoredStatistics","massive/munit/client/PrintClientBase.hx",204,0x1ddc6930)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(count,"count")
HXLINE( 205)		Bool _hx_tmp;
HXDLIN( 205)		if (!(!(this->includeIgnoredReport))) {
HXLINE( 205)			_hx_tmp = (count == (int)0);
            		}
            		else {
HXLINE( 205)			_hx_tmp = true;
            		}
HXDLIN( 205)		if (_hx_tmp) {
HXLINE( 205)			return;
            		}
HXLINE( 207)		HX_VARI(  ::List,items) = ::Lambda_obj::filter(this->totalResults,this->filterIngored_dyn());
HXLINE( 209)		if ((items->length == (int)0)) {
HXLINE( 209)			return;
            		}
HXLINE( 211)		this->printLine(HX_("",00,00,00,00),null());
HXLINE( 212)		this->printLine(((HX_("Ignored (",7a,9b,b5,50) + count) + HX_("):",f1,23,00,00)),null());
HXLINE( 213)		this->printLine(this->divider,null());
HXLINE( 215)		{
HXLINE( 215)			HX_VARI(  ::_List::ListNode,_g_head) = items->h;
HXDLIN( 215)			while(true){
HXLINE( 215)				Bool _hx_tmp1 = !(hx::IsNotNull( _g_head ));
HXDLIN( 215)				if (_hx_tmp1) {
HXLINE( 215)					goto _hx_goto_5;
            				}
HXDLIN( 215)				HX_VARI(  ::massive::munit::TestResult,val) = ( ( ::massive::munit::TestResult)(_g_head->item) );
HXLINE( 203)				_g_head = _g_head->next;
HXLINE( 217)				HX_VARI( ::String,ingoredString) = val->get_location();
HXLINE( 218)				Bool _hx_tmp2 = hx::IsNotNull( val->description );
HXDLIN( 218)				if (_hx_tmp2) {
HXLINE( 218)					hx::AddEq(ingoredString,(HX_(" - ",73,6f,18,00) + val->description));
            				}
HXLINE( 219)				this->printLine((HX_("IGNORE: ",38,80,bc,ba) + ingoredString),(int)1);
            			}
            			_hx_goto_5:;
            		}
HXLINE( 221)		this->printLine(HX_("",00,00,00,00),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(PrintClientBase_obj,printFinalIgnoredStatistics,(void))

Bool PrintClientBase_obj::filterIngored( ::massive::munit::TestResult result){
            	HX_STACK_FRAME("massive.munit.client.PrintClientBase","filterIngored",0x7df97a0b,"massive.munit.client.PrintClientBase.filterIngored","massive/munit/client/PrintClientBase.hx",226,0x1ddc6930)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(result,"result")
HXLINE( 226)		::hx::EnumBase _hx_tmp = result->get_type();
HXDLIN( 226)		return hx::IsEq( _hx_tmp,::massive::munit::TestResultType_obj::IGNORE_dyn() );
            	}


HX_DEFINE_DYNAMIC_FUNC1(PrintClientBase_obj,filterIngored,return )

void PrintClientBase_obj::printFinalStatistics(Bool result,Int testCount,Int passCount,Int failCount,Int errorCount,Int ignoreCount,Float time){
            	HX_STACK_FRAME("massive.munit.client.PrintClientBase","printFinalStatistics",0x9f291dad,"massive.munit.client.PrintClientBase.printFinalStatistics","massive/munit/client/PrintClientBase.hx",230,0x1ddc6930)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(result,"result")
            	HX_STACK_ARG(testCount,"testCount")
            	HX_STACK_ARG(passCount,"passCount")
            	HX_STACK_ARG(failCount,"failCount")
            	HX_STACK_ARG(errorCount,"errorCount")
            	HX_STACK_ARG(ignoreCount,"ignoreCount")
            	HX_STACK_ARG(time,"time")
HXLINE( 231)		this->printLine(this->divider2,null());
HXLINE( 232)		HX_VAR( ::String,resultString);
HXDLIN( 232)		if (result) {
HXLINE( 232)			resultString = HX_("PASSED",70,7f,b4,a0);
            		}
            		else {
HXLINE( 232)			resultString = HX_("FAILED",bd,71,81,9a);
            		}
HXLINE( 233)		::String _hx_tmp = (((((((((((HX_("\n",0a,00,00,00) + HX_("Tests: ",a7,54,2f,8b)) + testCount) + HX_("  Passed: ",36,9a,0f,7e)) + passCount) + HX_("  Failed: ",c3,79,b7,3a)) + failCount) + HX_(" Errors: ",51,13,30,17)) + errorCount) + HX_(" Ignored: ",f8,ad,04,5a)) + ignoreCount) + HX_(" Time: ",33,28,15,86));
HXLINE( 238)		Float _hx_tmp1 = ::massive::munit::util::MathUtil_obj::round(time,(int)5);
HXLINE( 233)		hx::AddEq(resultString,(_hx_tmp + _hx_tmp1));
HXLINE( 240)		this->printLine(resultString,null());
HXLINE( 241)		this->printLine(HX_("",00,00,00,00),null());
            	}


void PrintClientBase_obj::printOverallResult(Bool result){
            	HX_STACK_FRAME("massive.munit.client.PrintClientBase","printOverallResult",0x5757b77e,"massive.munit.client.PrintClientBase.printOverallResult","massive/munit/client/PrintClientBase.hx",246,0x1ddc6930)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(result,"result")
HXLINE( 246)		this->printLine(HX_("",00,00,00,00),null());
            	}


void PrintClientBase_obj::print( ::Dynamic value){
            	HX_STACK_FRAME("massive.munit.client.PrintClientBase","print",0x027fddec,"massive.munit.client.PrintClientBase.print","massive/munit/client/PrintClientBase.hx",252,0x1ddc6930)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 252)		hx::AddEq(this->output,::Std_obj::string(value));
            	}


HX_DEFINE_DYNAMIC_FUNC1(PrintClientBase_obj,print,(void))

void PrintClientBase_obj::printLine( ::Dynamic value, ::Dynamic __o_indent){
 ::Dynamic indent = __o_indent.Default(0);
            	HX_STACK_FRAME("massive.munit.client.PrintClientBase","printLine",0x514f8800,"massive.munit.client.PrintClientBase.printLine","massive/munit/client/PrintClientBase.hx",256,0x1ddc6930)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
            	HX_STACK_ARG(indent,"indent")
HXLINE( 257)		value = ::Std_obj::string(value);
HXLINE( 258)		value = this->indentString(value,indent);
HXLINE( 259)		::String _hx_tmp = ::Std_obj::string(value);
HXDLIN( 259)		this->print((HX_("\n",0a,00,00,00) + _hx_tmp));
            	}


HX_DEFINE_DYNAMIC_FUNC2(PrintClientBase_obj,printLine,(void))

::String PrintClientBase_obj::indentString(::String value, ::Dynamic __o_indent){
 ::Dynamic indent = __o_indent.Default(0);
            	HX_STACK_FRAME("massive.munit.client.PrintClientBase","indentString",0xed10027e,"massive.munit.client.PrintClientBase.indentString","massive/munit/client/PrintClientBase.hx",263,0x1ddc6930)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
            	HX_STACK_ARG(indent,"indent")
HXLINE( 264)		if (hx::IsGreater( indent,(int)0 )) {
HXLINE( 266)			value = (::StringTools_obj::lpad(HX_("",00,00,00,00),HX_(" ",20,00,00,00),(indent * (int)4)) + value);
            		}
HXLINE( 269)		Bool _hx_tmp = (value == HX_("",00,00,00,00));
HXDLIN( 269)		if (_hx_tmp) {
HXLINE( 269)			value = HX_("",00,00,00,00);
            		}
HXLINE( 270)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC2(PrintClientBase_obj,indentString,return )

::String PrintClientBase_obj::DEFAULT_ID;


PrintClientBase_obj::PrintClientBase_obj()
{
}

void PrintClientBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PrintClientBase);
	HX_MARK_MEMBER_NAME(verbose,"verbose");
	HX_MARK_MEMBER_NAME(includeIgnoredReport,"includeIgnoredReport");
	HX_MARK_MEMBER_NAME(divider,"divider");
	HX_MARK_MEMBER_NAME(divider2,"divider2");
	 ::massive::munit::client::AbstractTestResultClient_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PrintClientBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(verbose,"verbose");
	HX_VISIT_MEMBER_NAME(includeIgnoredReport,"includeIgnoredReport");
	HX_VISIT_MEMBER_NAME(divider,"divider");
	HX_VISIT_MEMBER_NAME(divider2,"divider2");
	 ::massive::munit::client::AbstractTestResultClient_obj::__Visit(HX_VISIT_ARG);
}

hx::Val PrintClientBase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { return hx::Val( print_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"verbose") ) { return hx::Val( verbose); }
		if (HX_FIELD_EQ(inName,"divider") ) { return hx::Val( divider); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"divider2") ) { return hx::Val( divider2); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"printLine") ) { return hx::Val( printLine_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"printReports") ) { return hx::Val( printReports_dyn()); }
		if (HX_FIELD_EQ(inName,"indentString") ) { return hx::Val( indentString_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"filterIngored") ) { return hx::Val( filterIngored_dyn()); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateTestClass") ) { return hx::Val( updateTestClass_dyn()); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"finalizeTestClass") ) { return hx::Val( finalizeTestClass_dyn()); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"printIndentedLines") ) { return hx::Val( printIndentedLines_dyn()); }
		if (HX_FIELD_EQ(inName,"printOverallResult") ) { return hx::Val( printOverallResult_dyn()); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"initializeTestClass") ) { return hx::Val( initializeTestClass_dyn()); }
		if (HX_FIELD_EQ(inName,"reportFinalCoverage") ) { return hx::Val( reportFinalCoverage_dyn()); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"includeIgnoredReport") ) { return hx::Val( includeIgnoredReport); }
		if (HX_FIELD_EQ(inName,"printFinalStatistics") ) { return hx::Val( printFinalStatistics_dyn()); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"setCurrentTestClassCoverage") ) { return hx::Val( setCurrentTestClassCoverage_dyn()); }
		if (HX_FIELD_EQ(inName,"printFinalIgnoredStatistics") ) { return hx::Val( printFinalIgnoredStatistics_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val PrintClientBase_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"verbose") ) { verbose=inValue.Cast< Bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"divider") ) { divider=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"divider2") ) { divider2=inValue.Cast< ::String >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"includeIgnoredReport") ) { includeIgnoredReport=inValue.Cast< Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PrintClientBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("verbose","\x82","\xd7","\xb9","\x71"));
	outFields->push(HX_HCSTRING("includeIgnoredReport","\x1e","\x1a","\xbf","\xa1"));
	outFields->push(HX_HCSTRING("divider","\xd9","\x5a","\xd7","\x70"));
	outFields->push(HX_HCSTRING("divider2","\x39","\x23","\x98","\x4b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo PrintClientBase_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(PrintClientBase_obj,verbose),HX_HCSTRING("verbose","\x82","\xd7","\xb9","\x71")},
	{hx::fsBool,(int)offsetof(PrintClientBase_obj,includeIgnoredReport),HX_HCSTRING("includeIgnoredReport","\x1e","\x1a","\xbf","\xa1")},
	{hx::fsString,(int)offsetof(PrintClientBase_obj,divider),HX_HCSTRING("divider","\xd9","\x5a","\xd7","\x70")},
	{hx::fsString,(int)offsetof(PrintClientBase_obj,divider2),HX_HCSTRING("divider2","\x39","\x23","\x98","\x4b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo PrintClientBase_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &PrintClientBase_obj::DEFAULT_ID,HX_HCSTRING("DEFAULT_ID","\xf9","\x83","\x2f","\x18")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String PrintClientBase_obj_sMemberFields[] = {
	HX_HCSTRING("verbose","\x82","\xd7","\xb9","\x71"),
	HX_HCSTRING("includeIgnoredReport","\x1e","\x1a","\xbf","\xa1"),
	HX_HCSTRING("divider","\xd9","\x5a","\xd7","\x70"),
	HX_HCSTRING("divider2","\x39","\x23","\x98","\x4b"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("initializeTestClass","\x16","\xbb","\x49","\x2f"),
	HX_HCSTRING("updateTestClass","\x3d","\x87","\xe5","\x60"),
	HX_HCSTRING("finalizeTestClass","\x08","\xad","\xf8","\x06"),
	HX_HCSTRING("setCurrentTestClassCoverage","\xd7","\x3b","\xb4","\x88"),
	HX_HCSTRING("reportFinalCoverage","\x2a","\xc6","\x68","\x9d"),
	HX_HCSTRING("printIndentedLines","\xc7","\x75","\x8b","\x9c"),
	HX_HCSTRING("printReports","\x92","\xc0","\x6f","\x0e"),
	HX_HCSTRING("printFinalIgnoredStatistics","\x8c","\x4e","\x03","\xb0"),
	HX_HCSTRING("filterIngored","\x4c","\x9d","\x5a","\x62"),
	HX_HCSTRING("printFinalStatistics","\x8c","\x54","\x51","\xe4"),
	HX_HCSTRING("printOverallResult","\x9d","\x28","\x2a","\x6e"),
	HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8"),
	HX_HCSTRING("printLine","\xc1","\xb6","\xab","\xc8"),
	HX_HCSTRING("indentString","\x5d","\xc2","\x96","\x5e"),
	::String(null()) };

static void PrintClientBase_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PrintClientBase_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PrintClientBase_obj::DEFAULT_ID,"DEFAULT_ID");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PrintClientBase_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PrintClientBase_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PrintClientBase_obj::DEFAULT_ID,"DEFAULT_ID");
};

#endif

hx::Class PrintClientBase_obj::__mClass;

static ::String PrintClientBase_obj_sStaticFields[] = {
	HX_HCSTRING("DEFAULT_ID","\xf9","\x83","\x2f","\x18"),
	::String(null())
};

void PrintClientBase_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("massive.munit.client.PrintClientBase","\xed","\xfc","\x85","\x43");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = PrintClientBase_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(PrintClientBase_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(PrintClientBase_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PrintClientBase_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PrintClientBase_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PrintClientBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PrintClientBase_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void PrintClientBase_obj::__boot()
{
{
            	HX_STACK_FRAME("massive.munit.client.PrintClientBase","boot",0x49673b53,"massive.munit.client.PrintClientBase.boot","massive/munit/client/PrintClientBase.hx",43,0x1ddc6930)
HXLINE(  43)		DEFAULT_ID = HX_("simple",32,04,7f,b8);
            	}
}

} // end namespace massive
} // end namespace munit
} // end namespace client
