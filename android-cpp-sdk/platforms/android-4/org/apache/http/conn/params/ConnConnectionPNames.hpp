/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.conn.params.ConnConnectionPNames
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_PARAMS_CONNCONNECTIONPNAMES_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CONN_PARAMS_CONNCONNECTIONPNAMES_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace conn { namespace params {

	class ConnConnectionPNames;
	class ConnConnectionPNames
		: public object<ConnConnectionPNames>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_FIELD(0)

		explicit ConnConnectionPNames(jobject jobj)
		: object<ConnConnectionPNames>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > MAX_STATUS_LINE_GARBAGE;
	}; //class ConnConnectionPNames

} //namespace params
} //namespace conn
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_PARAMS_CONNCONNECTIONPNAMES_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_PARAMS_CONNCONNECTIONPNAMES_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CONN_PARAMS_CONNCONNECTIONPNAMES_HPP_IMPL

namespace j2cpp {



org::apache::http::conn::params::ConnConnectionPNames::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

static_field<
	org::apache::http::conn::params::ConnConnectionPNames::J2CPP_CLASS_NAME,
	org::apache::http::conn::params::ConnConnectionPNames::J2CPP_FIELD_NAME(0),
	org::apache::http::conn::params::ConnConnectionPNames::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> org::apache::http::conn::params::ConnConnectionPNames::MAX_STATUS_LINE_GARBAGE;


J2CPP_DEFINE_CLASS(org::apache::http::conn::params::ConnConnectionPNames,"org/apache/http/conn/params/ConnConnectionPNames")
J2CPP_DEFINE_FIELD(org::apache::http::conn::params::ConnConnectionPNames,0,"MAX_STATUS_LINE_GARBAGE","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_PARAMS_CONNCONNECTIONPNAMES_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
