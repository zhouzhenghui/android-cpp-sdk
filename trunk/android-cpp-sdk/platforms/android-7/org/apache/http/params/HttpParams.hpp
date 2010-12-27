/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.params.HttpParams
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPPARAMS_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPPARAMS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace params {

	class HttpParams;
	class HttpParams
		: public cpp_object<HttpParams>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)

		explicit HttpParams(jobject jobj)
		: cpp_object<HttpParams>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::Object > getParameter(local_ref< java::lang::String > const&);
		local_ref< org::apache::http::params::HttpParams > setParameter(local_ref< java::lang::String > const&, local_ref< java::lang::Object > const&);
		local_ref< org::apache::http::params::HttpParams > copy();
		cpp_boolean removeParameter(local_ref< java::lang::String > const&);
		cpp_long getLongParameter(local_ref< java::lang::String > const&, cpp_long const&);
		local_ref< org::apache::http::params::HttpParams > setLongParameter(local_ref< java::lang::String > const&, cpp_long const&);
		cpp_int getIntParameter(local_ref< java::lang::String > const&, cpp_int const&);
		local_ref< org::apache::http::params::HttpParams > setIntParameter(local_ref< java::lang::String > const&, cpp_int const&);
		cpp_double getDoubleParameter(local_ref< java::lang::String > const&, cpp_double const&);
		local_ref< org::apache::http::params::HttpParams > setDoubleParameter(local_ref< java::lang::String > const&, cpp_double const&);
		cpp_boolean getBooleanParameter(local_ref< java::lang::String > const&, cpp_boolean const&);
		local_ref< org::apache::http::params::HttpParams > setBooleanParameter(local_ref< java::lang::String > const&, cpp_boolean const&);
		cpp_boolean isParameterTrue(local_ref< java::lang::String > const&);
		cpp_boolean isParameterFalse(local_ref< java::lang::String > const&);
	}; //class HttpParams

} //namespace params
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPPARAMS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPPARAMS_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPPARAMS_HPP_IMPL

namespace j2cpp {



org::apache::http::params::HttpParams::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

local_ref< java::lang::Object > org::apache::http::params::HttpParams::getParameter(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< org::apache::http::params::HttpParams > org::apache::http::params::HttpParams::setParameter(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1)
{
	return local_ref< org::apache::http::params::HttpParams >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< org::apache::http::params::HttpParams > org::apache::http::params::HttpParams::copy()
{
	return local_ref< org::apache::http::params::HttpParams >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_boolean org::apache::http::params::HttpParams::removeParameter(local_ref< java::lang::String > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

cpp_long org::apache::http::params::HttpParams::getLongParameter(local_ref< java::lang::String > const &a0, cpp_long const &a1)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< org::apache::http::params::HttpParams > org::apache::http::params::HttpParams::setLongParameter(local_ref< java::lang::String > const &a0, cpp_long const &a1)
{
	return local_ref< org::apache::http::params::HttpParams >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int org::apache::http::params::HttpParams::getIntParameter(local_ref< java::lang::String > const &a0, cpp_int const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< org::apache::http::params::HttpParams > org::apache::http::params::HttpParams::setIntParameter(local_ref< java::lang::String > const &a0, cpp_int const &a1)
{
	return local_ref< org::apache::http::params::HttpParams >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_double org::apache::http::params::HttpParams::getDoubleParameter(local_ref< java::lang::String > const &a0, cpp_double const &a1)
{
	return cpp_double(
		environment::get().get_jenv()->CallDoubleMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< org::apache::http::params::HttpParams > org::apache::http::params::HttpParams::setDoubleParameter(local_ref< java::lang::String > const &a0, cpp_double const &a1)
{
	return local_ref< org::apache::http::params::HttpParams >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean org::apache::http::params::HttpParams::getBooleanParameter(local_ref< java::lang::String > const &a0, cpp_boolean const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< org::apache::http::params::HttpParams > org::apache::http::params::HttpParams::setBooleanParameter(local_ref< java::lang::String > const &a0, cpp_boolean const &a1)
{
	return local_ref< org::apache::http::params::HttpParams >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean org::apache::http::params::HttpParams::isParameterTrue(local_ref< java::lang::String > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean org::apache::http::params::HttpParams::isParameterFalse(local_ref< java::lang::String > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::params::HttpParams,"org/apache/http/params/HttpParams")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpParams,0,"getParameter","(Ljava/lang/String;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpParams,1,"setParameter","(Ljava/lang/String;Ljava/lang/Object;)Lorg/apache/http/params/HttpParams;")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpParams,2,"copy","()Lorg/apache/http/params/HttpParams;")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpParams,3,"removeParameter","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpParams,4,"getLongParameter","(Ljava/lang/String;J)J")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpParams,5,"setLongParameter","(Ljava/lang/String;J)Lorg/apache/http/params/HttpParams;")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpParams,6,"getIntParameter","(Ljava/lang/String;I)I")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpParams,7,"setIntParameter","(Ljava/lang/String;I)Lorg/apache/http/params/HttpParams;")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpParams,8,"getDoubleParameter","(Ljava/lang/String;D)D")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpParams,9,"setDoubleParameter","(Ljava/lang/String;D)Lorg/apache/http/params/HttpParams;")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpParams,10,"getBooleanParameter","(Ljava/lang/String;Z)Z")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpParams,11,"setBooleanParameter","(Ljava/lang/String;Z)Lorg/apache/http/params/HttpParams;")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpParams,12,"isParameterTrue","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpParams,13,"isParameterFalse","(Ljava/lang/String;)Z")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPPARAMS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
