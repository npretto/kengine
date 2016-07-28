// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_massive_munit_IAdvancedTestResultClient
#include <massive/munit/IAdvancedTestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_ITestResultClient
#include <massive/munit/ITestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_TestResult
#include <massive/munit/TestResult.h>
#endif
#ifndef INCLUDED_massive_munit_client_HTTPClient
#include <massive/munit/client/HTTPClient.h>
#endif
#ifndef INCLUDED_massive_munit_client_URLRequest
#include <massive/munit/client/URLRequest.h>
#endif

namespace massive{
namespace munit{
namespace client{

void HTTPClient_obj::__construct(::Dynamic client,::String __o_url, ::Dynamic __o_queueRequest){
::String url = __o_url.Default(HX_HCSTRING("http://localhost:2000","\x17","\xd0","\x62","\x55"));
 ::Dynamic queueRequest = __o_queueRequest.Default(true);
            	HX_STACK_FRAME("massive.munit.client.HTTPClient","new",0x4380ec61,"massive.munit.client.HTTPClient.new","massive/munit/client/HTTPClient.hx",106,0xff13f150)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(client,"client")
            	HX_STACK_ARG(url,"url")
            	HX_STACK_ARG(queueRequest,"queueRequest")
HXLINE( 107)		this->id = HX_("HTTPClient",f3,f7,4e,4e);
HXLINE( 108)		this->client = client;
HXLINE( 109)		this->url = url;
HXLINE( 110)		this->queueRequest = queueRequest;
            	}

Dynamic HTTPClient_obj::__CreateEmpty() { return new HTTPClient_obj; }

hx::ObjectPtr< HTTPClient_obj > HTTPClient_obj::__new(::Dynamic client,::String __o_url, ::Dynamic __o_queueRequest)
{
	hx::ObjectPtr< HTTPClient_obj > _hx_result = new HTTPClient_obj();
	_hx_result->__construct(client,__o_url,__o_queueRequest);
	return _hx_result;
}

Dynamic HTTPClient_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HTTPClient_obj > _hx_result = new HTTPClient_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

static ::massive::munit::IAdvancedTestResultClient_obj _hx_massive_munit_client_HTTPClient__hx_massive_munit_IAdvancedTestResultClient= {
	( void (hx::Object::*)(::String))&::massive::munit::client::HTTPClient_obj::setCurrentTestClass,
	(  ::Dynamic (hx::Object::*)())&::massive::munit::client::HTTPClient_obj::get_completionHandler,
	(  ::Dynamic (hx::Object::*)( ::Dynamic))&::massive::munit::client::HTTPClient_obj::set_completionHandler,
	( void (hx::Object::*)( ::massive::munit::TestResult))&::massive::munit::client::HTTPClient_obj::addPass,
	( void (hx::Object::*)( ::massive::munit::TestResult))&::massive::munit::client::HTTPClient_obj::addFail,
	( void (hx::Object::*)( ::massive::munit::TestResult))&::massive::munit::client::HTTPClient_obj::addError,
	( void (hx::Object::*)( ::massive::munit::TestResult))&::massive::munit::client::HTTPClient_obj::addIgnore,
	(  ::Dynamic (hx::Object::*)(Int,Int,Int,Int,Int,Float))&::massive::munit::client::HTTPClient_obj::reportFinalStatistics,
};

static ::massive::munit::ITestResultClient_obj _hx_massive_munit_client_HTTPClient__hx_massive_munit_ITestResultClient= {
	(  ::Dynamic (hx::Object::*)())&::massive::munit::client::HTTPClient_obj::get_completionHandler,
	(  ::Dynamic (hx::Object::*)( ::Dynamic))&::massive::munit::client::HTTPClient_obj::set_completionHandler,
	( void (hx::Object::*)( ::massive::munit::TestResult))&::massive::munit::client::HTTPClient_obj::addPass,
	( void (hx::Object::*)( ::massive::munit::TestResult))&::massive::munit::client::HTTPClient_obj::addFail,
	( void (hx::Object::*)( ::massive::munit::TestResult))&::massive::munit::client::HTTPClient_obj::addError,
	( void (hx::Object::*)( ::massive::munit::TestResult))&::massive::munit::client::HTTPClient_obj::addIgnore,
	(  ::Dynamic (hx::Object::*)(Int,Int,Int,Int,Int,Float))&::massive::munit::client::HTTPClient_obj::reportFinalStatistics,
};

void *HTTPClient_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xce173438: return &_hx_massive_munit_client_HTTPClient__hx_massive_munit_IAdvancedTestResultClient;
		case (int)0xe35dae76: return &_hx_massive_munit_client_HTTPClient__hx_massive_munit_ITestResultClient;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::Dynamic HTTPClient_obj::get_completionHandler(){
            	HX_STACK_FRAME("massive.munit.client.HTTPClient","get_completionHandler",0xe0121b26,"massive.munit.client.HTTPClient.get_completionHandler","massive/munit/client/HTTPClient.hx",86,0xff13f150)
            	HX_STACK_THIS(this)
HXLINE(  86)		return this->completionHandler;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HTTPClient_obj,get_completionHandler,return )

 ::Dynamic HTTPClient_obj::set_completionHandler( ::Dynamic value){
            	HX_STACK_FRAME("massive.munit.client.HTTPClient","set_completionHandler",0x341ae932,"massive.munit.client.HTTPClient.set_completionHandler","massive/munit/client/HTTPClient.hx",90,0xff13f150)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE(  90)		return (this->completionHandler = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(HTTPClient_obj,set_completionHandler,return )

void HTTPClient_obj::setCurrentTestClass(::String className){
            	HX_STACK_FRAME("massive.munit.client.HTTPClient","setCurrentTestClass",0x566774d0,"massive.munit.client.HTTPClient.setCurrentTestClass","massive/munit/client/HTTPClient.hx",120,0xff13f150)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(className,"className")
HXLINE( 120)		Bool _hx_tmp = ::Std_obj::is(this->client,hx::ClassOf< ::massive::munit::IAdvancedTestResultClient >());
HXDLIN( 120)		if (_hx_tmp) {
HXLINE( 122)			::massive::munit::IAdvancedTestResultClient_obj::setCurrentTestClass(this->client,className);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(HTTPClient_obj,setCurrentTestClass,(void))

void HTTPClient_obj::addPass( ::massive::munit::TestResult result){
            	HX_STACK_FRAME("massive.munit.client.HTTPClient","addPass",0x2fe0d813,"massive.munit.client.HTTPClient.addPass","massive/munit/client/HTTPClient.hx",133,0xff13f150)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(result,"result")
HXLINE( 133)		::massive::munit::ITestResultClient_obj::addPass(this->client,result);
            	}


HX_DEFINE_DYNAMIC_FUNC1(HTTPClient_obj,addPass,(void))

void HTTPClient_obj::addFail( ::massive::munit::TestResult result){
            	HX_STACK_FRAME("massive.munit.client.HTTPClient","addFail",0x2944ad20,"massive.munit.client.HTTPClient.addFail","massive/munit/client/HTTPClient.hx",143,0xff13f150)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(result,"result")
HXLINE( 143)		::massive::munit::ITestResultClient_obj::addFail(this->client,result);
            	}


HX_DEFINE_DYNAMIC_FUNC1(HTTPClient_obj,addFail,(void))

void HTTPClient_obj::addError( ::massive::munit::TestResult result){
            	HX_STACK_FRAME("massive.munit.client.HTTPClient","addError",0x6aafb246,"massive.munit.client.HTTPClient.addError","massive/munit/client/HTTPClient.hx",153,0xff13f150)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(result,"result")
HXLINE( 153)		::massive::munit::ITestResultClient_obj::addError(this->client,result);
            	}


HX_DEFINE_DYNAMIC_FUNC1(HTTPClient_obj,addError,(void))

void HTTPClient_obj::addIgnore( ::massive::munit::TestResult result){
            	HX_STACK_FRAME("massive.munit.client.HTTPClient","addIgnore",0x306c80d4,"massive.munit.client.HTTPClient.addIgnore","massive/munit/client/HTTPClient.hx",163,0xff13f150)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(result,"result")
HXLINE( 163)		::massive::munit::ITestResultClient_obj::addIgnore(this->client,result);
            	}


HX_DEFINE_DYNAMIC_FUNC1(HTTPClient_obj,addIgnore,(void))

 ::Dynamic HTTPClient_obj::reportFinalStatistics(Int testCount,Int passCount,Int failCount,Int errorCount,Int ignoreCount,Float time){
            	HX_STACK_FRAME("massive.munit.client.HTTPClient","reportFinalStatistics",0x120fd026,"massive.munit.client.HTTPClient.reportFinalStatistics","massive/munit/client/HTTPClient.hx",178,0xff13f150)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(testCount,"testCount")
            	HX_STACK_ARG(passCount,"passCount")
            	HX_STACK_ARG(failCount,"failCount")
            	HX_STACK_ARG(errorCount,"errorCount")
            	HX_STACK_ARG(ignoreCount,"ignoreCount")
            	HX_STACK_ARG(time,"time")
HXLINE( 179)		HX_VARI(  ::Dynamic,result) = ::massive::munit::ITestResultClient_obj::reportFinalStatistics(this->client,testCount,passCount,failCount,errorCount,ignoreCount,time);
HXLINE( 180)		this->sendResult(result);
HXLINE( 181)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC6(HTTPClient_obj,reportFinalStatistics,return )

void HTTPClient_obj::sendResult( ::Dynamic result){
            	HX_STACK_FRAME("massive.munit.client.HTTPClient","sendResult",0x93fb6664,"massive.munit.client.HTTPClient.sendResult","massive/munit/client/HTTPClient.hx",185,0xff13f150)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(result,"result")
HXLINE( 186)		this->request =  ::massive::munit::client::URLRequest_obj::__new(this->url);
HXLINE( 187)		this->request->setHeader(HX_("munit-clientId",a2,2c,fe,2b), ::Dynamic(this->client->__Field(HX_("id",db,5b,00,00),hx::paccDynamic)));
HXLINE( 188)		::String _hx_tmp = this->platform();
HXDLIN( 188)		this->request->setHeader(HX_("munit-platformId",0a,9e,97,3a),_hx_tmp);
HXLINE( 189)		this->request->onData = this->onData_dyn();
HXLINE( 190)		this->request->onError = this->onError_dyn();
HXLINE( 191)		this->request->data = result;
HXLINE( 193)		Bool _hx_tmp1 = this->queueRequest;
HXDLIN( 193)		if (_hx_tmp1) {
HXLINE( 195)			::massive::munit::client::HTTPClient_obj::queue->unshift(this->request);
HXLINE( 196)			::massive::munit::client::HTTPClient_obj::dispatchNextRequest();
            		}
            		else {
HXLINE( 200)			this->request->send();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(HTTPClient_obj,sendResult,(void))

::String HTTPClient_obj::platform(){
            	HX_STACK_FRAME("massive.munit.client.HTTPClient","platform",0xe6227312,"massive.munit.client.HTTPClient.platform","massive/munit/client/HTTPClient.hx",210,0xff13f150)
            	HX_STACK_THIS(this)
HXLINE( 210)		return HX_("cpp",23,81,4b,00);
            	}


HX_DEFINE_DYNAMIC_FUNC0(HTTPClient_obj,platform,return )

void HTTPClient_obj::onData(::String data){
            	HX_STACK_FRAME("massive.munit.client.HTTPClient","onData",0x9e82f988,"massive.munit.client.HTTPClient.onData","massive/munit/client/HTTPClient.hx",217,0xff13f150)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(data,"data")
HXLINE( 218)		Bool _hx_tmp = this->queueRequest;
HXDLIN( 218)		if (_hx_tmp) {
HXLINE( 220)			::massive::munit::client::HTTPClient_obj::responsePending = false;
HXLINE( 221)			::massive::munit::client::HTTPClient_obj::dispatchNextRequest();
            		}
HXLINE( 223)		 ::Dynamic _hx_tmp1 = this->get_completionHandler();
HXDLIN( 223)		Bool _hx_tmp2 = hx::IsNotNull( _hx_tmp1 );
HXDLIN( 223)		if (_hx_tmp2) {
HXLINE( 224)			 ::Dynamic _hx_tmp3 = this->get_completionHandler();
HXDLIN( 224)			_hx_tmp3(hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(HTTPClient_obj,onData,(void))

void HTTPClient_obj::onError(::String msg){
            	HX_STACK_FRAME("massive.munit.client.HTTPClient","onError",0xb2b91aaa,"massive.munit.client.HTTPClient.onError","massive/munit/client/HTTPClient.hx",228,0xff13f150)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(msg,"msg")
HXLINE( 229)		Bool _hx_tmp = this->queueRequest;
HXDLIN( 229)		if (_hx_tmp) {
HXLINE( 231)			::massive::munit::client::HTTPClient_obj::responsePending = false;
HXLINE( 232)			::massive::munit::client::HTTPClient_obj::dispatchNextRequest();
            		}
HXLINE( 234)		 ::Dynamic _hx_tmp1 = this->get_completionHandler();
HXDLIN( 234)		Bool _hx_tmp2 = hx::IsNotNull( _hx_tmp1 );
HXDLIN( 234)		if (_hx_tmp2) {
HXLINE( 235)			 ::Dynamic _hx_tmp3 = this->get_completionHandler();
HXDLIN( 235)			_hx_tmp3(hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(HTTPClient_obj,onError,(void))

::Array< ::Dynamic> HTTPClient_obj::queue;

Bool HTTPClient_obj::responsePending;

void HTTPClient_obj::dispatchNextRequest(){
            	HX_STACK_FRAME("massive.munit.client.HTTPClient","dispatchNextRequest",0x2fe27403,"massive.munit.client.HTTPClient.dispatchNextRequest","massive/munit/client/HTTPClient.hx",239,0xff13f150)
HXLINE( 240)		Bool _hx_tmp;
HXDLIN( 240)		if (!(::massive::munit::client::HTTPClient_obj::responsePending)) {
HXLINE( 240)			_hx_tmp = (::massive::munit::client::HTTPClient_obj::queue->length == (int)0);
            		}
            		else {
HXLINE( 240)			_hx_tmp = true;
            		}
HXDLIN( 240)		if (_hx_tmp) {
HXLINE( 241)			return;
            		}
HXLINE( 243)		::massive::munit::client::HTTPClient_obj::responsePending = true;
HXLINE( 245)		HX_VARI(  ::massive::munit::client::URLRequest,request) = ::massive::munit::client::HTTPClient_obj::queue->pop().StaticCast<  ::massive::munit::client::URLRequest >();
HXLINE( 246)		request->send();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HTTPClient_obj,dispatchNextRequest,(void))


HTTPClient_obj::HTTPClient_obj()
{
}

void HTTPClient_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HTTPClient);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(completionHandler,"completionHandler");
	HX_MARK_MEMBER_NAME(client,"client");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(request,"request");
	HX_MARK_MEMBER_NAME(queueRequest,"queueRequest");
	HX_MARK_END_CLASS();
}

void HTTPClient_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(completionHandler,"completionHandler");
	HX_VISIT_MEMBER_NAME(client,"client");
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(request,"request");
	HX_VISIT_MEMBER_NAME(queueRequest,"queueRequest");
}

hx::Val HTTPClient_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return hx::Val( url); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"client") ) { return hx::Val( client); }
		if (HX_FIELD_EQ(inName,"onData") ) { return hx::Val( onData_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"request") ) { return hx::Val( request); }
		if (HX_FIELD_EQ(inName,"addPass") ) { return hx::Val( addPass_dyn()); }
		if (HX_FIELD_EQ(inName,"addFail") ) { return hx::Val( addFail_dyn()); }
		if (HX_FIELD_EQ(inName,"onError") ) { return hx::Val( onError_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addError") ) { return hx::Val( addError_dyn()); }
		if (HX_FIELD_EQ(inName,"platform") ) { return hx::Val( platform_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addIgnore") ) { return hx::Val( addIgnore_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sendResult") ) { return hx::Val( sendResult_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"queueRequest") ) { return hx::Val( queueRequest); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"completionHandler") ) { return hx::Val( inCallProp == hx::paccAlways ? get_completionHandler() : completionHandler); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"setCurrentTestClass") ) { return hx::Val( setCurrentTestClass_dyn()); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_completionHandler") ) { return hx::Val( get_completionHandler_dyn()); }
		if (HX_FIELD_EQ(inName,"set_completionHandler") ) { return hx::Val( set_completionHandler_dyn()); }
		if (HX_FIELD_EQ(inName,"reportFinalStatistics") ) { return hx::Val( reportFinalStatistics_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool HTTPClient_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"queue") ) { outValue = queue; return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"responsePending") ) { outValue = responsePending; return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"dispatchNextRequest") ) { outValue = dispatchNextRequest_dyn(); return true; }
	}
	return false;
}

hx::Val HTTPClient_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"client") ) { client=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"request") ) { request=inValue.Cast<  ::massive::munit::client::URLRequest >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"queueRequest") ) { queueRequest=inValue.Cast< Bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"completionHandler") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_completionHandler(inValue) );completionHandler=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool HTTPClient_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"queue") ) { queue=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"responsePending") ) { responsePending=ioValue.Cast< Bool >(); return true; }
	}
	return false;
}

void HTTPClient_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("client","\x4b","\xca","\x4f","\x0a"));
	outFields->push(HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"));
	outFields->push(HX_HCSTRING("request","\x4f","\xdf","\x84","\x44"));
	outFields->push(HX_HCSTRING("queueRequest","\xbe","\xbd","\x99","\xd3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo HTTPClient_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(HTTPClient_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(HTTPClient_obj,completionHandler),HX_HCSTRING("completionHandler","\x0e","\xe8","\xb2","\x5b")},
	{hx::fsObject /*::massive::munit::ITestResultClient*/ ,(int)offsetof(HTTPClient_obj,client),HX_HCSTRING("client","\x4b","\xca","\x4f","\x0a")},
	{hx::fsString,(int)offsetof(HTTPClient_obj,url),HX_HCSTRING("url","\x6f","\x2b","\x59","\x00")},
	{hx::fsObject /*::massive::munit::client::URLRequest*/ ,(int)offsetof(HTTPClient_obj,request),HX_HCSTRING("request","\x4f","\xdf","\x84","\x44")},
	{hx::fsBool,(int)offsetof(HTTPClient_obj,queueRequest),HX_HCSTRING("queueRequest","\xbe","\xbd","\x99","\xd3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo HTTPClient_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &HTTPClient_obj::queue,HX_HCSTRING("queue","\x91","\x8d","\xea","\x5d")},
	{hx::fsBool,(void *) &HTTPClient_obj::responsePending,HX_HCSTRING("responsePending","\xd6","\x53","\xae","\x0c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String HTTPClient_obj_sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("completionHandler","\x0e","\xe8","\xb2","\x5b"),
	HX_HCSTRING("get_completionHandler","\xe5","\xea","\x60","\xda"),
	HX_HCSTRING("set_completionHandler","\xf1","\xb8","\x69","\x2e"),
	HX_HCSTRING("client","\x4b","\xca","\x4f","\x0a"),
	HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"),
	HX_HCSTRING("request","\x4f","\xdf","\x84","\x44"),
	HX_HCSTRING("queueRequest","\xbe","\xbd","\x99","\xd3"),
	HX_HCSTRING("setCurrentTestClass","\xcf","\x86","\x4e","\xfb"),
	HX_HCSTRING("addPass","\x92","\x27","\x8f","\x86"),
	HX_HCSTRING("addFail","\x9f","\xfc","\xf2","\x7f"),
	HX_HCSTRING("addError","\xe7","\xf1","\x86","\xec"),
	HX_HCSTRING("addIgnore","\x13","\xee","\xec","\x4a"),
	HX_HCSTRING("reportFinalStatistics","\xe5","\x9f","\x5e","\x0c"),
	HX_HCSTRING("sendResult","\x45","\x90","\xda","\xa9"),
	HX_HCSTRING("platform","\xb3","\xb2","\xf9","\x67"),
	HX_HCSTRING("onData","\xe9","\x5e","\xed","\xe4"),
	HX_HCSTRING("onError","\x29","\x6a","\x67","\x09"),
	::String(null()) };

static void HTTPClient_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HTTPClient_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HTTPClient_obj::queue,"queue");
	HX_MARK_MEMBER_NAME(HTTPClient_obj::responsePending,"responsePending");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HTTPClient_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HTTPClient_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HTTPClient_obj::queue,"queue");
	HX_VISIT_MEMBER_NAME(HTTPClient_obj::responsePending,"responsePending");
};

#endif

hx::Class HTTPClient_obj::__mClass;

static ::String HTTPClient_obj_sStaticFields[] = {
	HX_HCSTRING("queue","\x91","\x8d","\xea","\x5d"),
	HX_HCSTRING("responsePending","\xd6","\x53","\xae","\x0c"),
	HX_HCSTRING("dispatchNextRequest","\x02","\x86","\xc9","\xd4"),
	::String(null())
};

void HTTPClient_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("massive.munit.client.HTTPClient","\xef","\x27","\xe1","\x62");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HTTPClient_obj::__GetStatic;
	__mClass->mSetStaticField = &HTTPClient_obj::__SetStatic;
	__mClass->mMarkFunc = HTTPClient_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(HTTPClient_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(HTTPClient_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HTTPClient_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HTTPClient_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HTTPClient_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HTTPClient_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void HTTPClient_obj::__boot()
{
{
            	HX_STACK_FRAME("massive.munit.client.HTTPClient","boot",0xc566e911,"massive.munit.client.HTTPClient.boot","massive/munit/client/HTTPClient.hx",66,0xff13f150)
HXLINE(  66)		queue = ::Array_obj< ::Dynamic>::__new(0);
            	}
{
            	HX_STACK_FRAME("massive.munit.client.HTTPClient","boot",0xc566e911,"massive.munit.client.HTTPClient.boot","massive/munit/client/HTTPClient.hx",67,0xff13f150)
HXLINE(  67)		responsePending = false;
            	}
}

} // end namespace massive
} // end namespace munit
} // end namespace client
