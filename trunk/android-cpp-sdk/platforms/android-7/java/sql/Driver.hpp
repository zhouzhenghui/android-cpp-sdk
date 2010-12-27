/*================================================================================
  code generated by: java2cpp
  class: java.sql.Driver
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_DRIVER_HPP_DECL
#define J2CPP_JAVA_SQL_DRIVER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace sql { class Connection; } } }
namespace j2cpp { namespace java { namespace sql { class DriverPropertyInfo; } } }
namespace j2cpp { namespace java { namespace util { class Properties; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/sql/Connection.hpp>
#include <java/sql/DriverPropertyInfo.hpp>
#include <java/util/Properties.hpp>


namespace j2cpp {

namespace java { namespace sql {

	class Driver;
	class Driver
		: public cpp_object<Driver>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit Driver(jobject jobj)
		: cpp_object<Driver>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		cpp_boolean acceptsURL(local_ref< java::lang::String > const&);
		local_ref< java::sql::Connection > connect(local_ref< java::lang::String > const&, local_ref< java::util::Properties > const&);
		cpp_int getMajorVersion();
		cpp_int getMinorVersion();
		local_ref< cpp_object_array<java::sql::DriverPropertyInfo, 1> > getPropertyInfo(local_ref< java::lang::String > const&, local_ref< java::util::Properties > const&);
		cpp_boolean jdbcCompliant();
	}; //class Driver

} //namespace sql
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_DRIVER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_DRIVER_HPP_IMPL
#define J2CPP_JAVA_SQL_DRIVER_HPP_IMPL

namespace j2cpp {



java::sql::Driver::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

cpp_boolean java::sql::Driver::acceptsURL(local_ref< java::lang::String > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::sql::Connection > java::sql::Driver::connect(local_ref< java::lang::String > const &a0, local_ref< java::util::Properties > const &a1)
{
	return local_ref< java::sql::Connection >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int java::sql::Driver::getMajorVersion()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_int java::sql::Driver::getMinorVersion()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< cpp_object_array<java::sql::DriverPropertyInfo, 1> > java::sql::Driver::getPropertyInfo(local_ref< java::lang::String > const &a0, local_ref< java::util::Properties > const &a1)
{
	return local_ref< cpp_object_array<java::sql::DriverPropertyInfo, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean java::sql::Driver::jdbcCompliant()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::sql::Driver,"java/sql/Driver")
J2CPP_DEFINE_METHOD(java::sql::Driver,0,"acceptsURL","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(java::sql::Driver,1,"connect","(Ljava/lang/String;Ljava/util/Properties;)Ljava/sql/Connection;")
J2CPP_DEFINE_METHOD(java::sql::Driver,2,"getMajorVersion","()I")
J2CPP_DEFINE_METHOD(java::sql::Driver,3,"getMinorVersion","()I")
J2CPP_DEFINE_METHOD(java::sql::Driver,4,"getPropertyInfo","(Ljava/lang/String;Ljava/util/Properties;)[java.sql.DriverPropertyInfo")
J2CPP_DEFINE_METHOD(java::sql::Driver,5,"jdbcCompliant","()Z")

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_DRIVER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
