/*================================================================================
  code generated by: java2cpp
  class: java.sql.PreparedStatement
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_PREPAREDSTATEMENT_HPP_DECL
#define J2CPP_JAVA_SQL_PREPAREDSTATEMENT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Calendar; } } }
namespace j2cpp { namespace java { namespace sql { class ParameterMetaData; } } }
namespace j2cpp { namespace java { namespace sql { class Array; } } }
namespace j2cpp { namespace java { namespace sql { class Date; } } }
namespace j2cpp { namespace java { namespace sql { class Timestamp; } } }
namespace j2cpp { namespace java { namespace sql { class Clob; } } }
namespace j2cpp { namespace java { namespace sql { class Ref; } } }
namespace j2cpp { namespace java { namespace sql { class NClob; } } }
namespace j2cpp { namespace java { namespace sql { class Blob; } } }
namespace j2cpp { namespace java { namespace sql { class Time; } } }
namespace j2cpp { namespace java { namespace sql { class SQLXML; } } }
namespace j2cpp { namespace java { namespace sql { class ResultSetMetaData; } } }
namespace j2cpp { namespace java { namespace sql { class ResultSet; } } }
namespace j2cpp { namespace java { namespace sql { class RowId; } } }
namespace j2cpp { namespace java { namespace net { class URL; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class Reader; } } }
namespace j2cpp { namespace java { namespace math { class BigDecimal; } } }


#include <java/io/InputStream.hpp>
#include <java/io/Reader.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/math/BigDecimal.hpp>
#include <java/net/URL.hpp>
#include <java/sql/Array.hpp>
#include <java/sql/Blob.hpp>
#include <java/sql/Clob.hpp>
#include <java/sql/Date.hpp>
#include <java/sql/NClob.hpp>
#include <java/sql/ParameterMetaData.hpp>
#include <java/sql/Ref.hpp>
#include <java/sql/ResultSet.hpp>
#include <java/sql/ResultSetMetaData.hpp>
#include <java/sql/RowId.hpp>
#include <java/sql/SQLXML.hpp>
#include <java/sql/Time.hpp>
#include <java/sql/Timestamp.hpp>
#include <java/util/Calendar.hpp>


namespace j2cpp {

namespace java { namespace sql {

	class PreparedStatement;
	class PreparedStatement
		: public cpp_object<PreparedStatement>
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
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)
		J2CPP_DECLARE_METHOD(37)
		J2CPP_DECLARE_METHOD(38)
		J2CPP_DECLARE_METHOD(39)
		J2CPP_DECLARE_METHOD(40)
		J2CPP_DECLARE_METHOD(41)
		J2CPP_DECLARE_METHOD(42)
		J2CPP_DECLARE_METHOD(43)
		J2CPP_DECLARE_METHOD(44)
		J2CPP_DECLARE_METHOD(45)
		J2CPP_DECLARE_METHOD(46)
		J2CPP_DECLARE_METHOD(47)
		J2CPP_DECLARE_METHOD(48)
		J2CPP_DECLARE_METHOD(49)
		J2CPP_DECLARE_METHOD(50)
		J2CPP_DECLARE_METHOD(51)
		J2CPP_DECLARE_METHOD(52)
		J2CPP_DECLARE_METHOD(53)
		J2CPP_DECLARE_METHOD(54)

		PreparedStatement(jobject jobj)
		: cpp_object<PreparedStatement>(jobj)
		{
		}

		void addBatch();
		void clearParameters();
		cpp_boolean execute();
		local_ref< java::sql::ResultSet > executeQuery();
		cpp_int executeUpdate();
		local_ref< java::sql::ResultSetMetaData > getMetaData();
		local_ref< java::sql::ParameterMetaData > getParameterMetaData();
		void setArray(cpp_int const&, local_ref< java::sql::Array > const&);
		void setAsciiStream(cpp_int const&, local_ref< java::io::InputStream > const&, cpp_int const&);
		void setBigDecimal(cpp_int const&, local_ref< java::math::BigDecimal > const&);
		void setBinaryStream(cpp_int const&, local_ref< java::io::InputStream > const&, cpp_int const&);
		void setBlob(cpp_int const&, local_ref< java::sql::Blob > const&);
		void setBoolean(cpp_int const&, cpp_boolean const&);
		void setByte(cpp_int const&, cpp_byte const&);
		void setBytes(cpp_int const&, local_ref< cpp_byte_array<1> > const&);
		void setCharacterStream(cpp_int const&, local_ref< java::io::Reader > const&, cpp_int const&);
		void setClob(cpp_int const&, local_ref< java::sql::Clob > const&);
		void setDate(cpp_int const&, local_ref< java::sql::Date > const&);
		void setDate(cpp_int const&, local_ref< java::sql::Date > const&, local_ref< java::util::Calendar > const&);
		void setDouble(cpp_int const&, cpp_double const&);
		void setFloat(cpp_int const&, cpp_float const&);
		void setInt(cpp_int const&, cpp_int const&);
		void setLong(cpp_int const&, cpp_long const&);
		void setNull(cpp_int const&, cpp_int const&);
		void setNull(cpp_int const&, cpp_int const&, local_ref< java::lang::String > const&);
		void setObject(cpp_int const&, local_ref< java::lang::Object > const&);
		void setObject(cpp_int const&, local_ref< java::lang::Object > const&, cpp_int const&);
		void setObject(cpp_int const&, local_ref< java::lang::Object > const&, cpp_int const&, cpp_int const&);
		void setRef(cpp_int const&, local_ref< java::sql::Ref > const&);
		void setShort(cpp_int const&, cpp_short const&);
		void setString(cpp_int const&, local_ref< java::lang::String > const&);
		void setTime(cpp_int const&, local_ref< java::sql::Time > const&);
		void setTime(cpp_int const&, local_ref< java::sql::Time > const&, local_ref< java::util::Calendar > const&);
		void setTimestamp(cpp_int const&, local_ref< java::sql::Timestamp > const&);
		void setTimestamp(cpp_int const&, local_ref< java::sql::Timestamp > const&, local_ref< java::util::Calendar > const&);
		void setUnicodeStream(cpp_int const&, local_ref< java::io::InputStream > const&, cpp_int const&);
		void setURL(cpp_int const&, local_ref< java::net::URL > const&);
		void setRowId(cpp_int const&, local_ref< java::sql::RowId > const&);
		void setNString(cpp_int const&, local_ref< java::lang::String > const&);
		void setNCharacterStream(cpp_int const&, local_ref< java::io::Reader > const&, cpp_long const&);
		void setNClob(cpp_int const&, local_ref< java::sql::NClob > const&);
		void setClob(cpp_int const&, local_ref< java::io::Reader > const&, cpp_long const&);
		void setBlob(cpp_int const&, local_ref< java::io::InputStream > const&, cpp_long const&);
		void setNClob(cpp_int const&, local_ref< java::io::Reader > const&, cpp_long const&);
		void setSQLXML(cpp_int const&, local_ref< java::sql::SQLXML > const&);
		void setAsciiStream(cpp_int const&, local_ref< java::io::InputStream > const&, cpp_long const&);
		void setBinaryStream(cpp_int const&, local_ref< java::io::InputStream > const&, cpp_long const&);
		void setCharacterStream(cpp_int const&, local_ref< java::io::Reader > const&, cpp_long const&);
		void setAsciiStream(cpp_int const&, local_ref< java::io::InputStream > const&);
		void setBinaryStream(cpp_int const&, local_ref< java::io::InputStream > const&);
		void setCharacterStream(cpp_int const&, local_ref< java::io::Reader > const&);
		void setNCharacterStream(cpp_int const&, local_ref< java::io::Reader > const&);
		void setClob(cpp_int const&, local_ref< java::io::Reader > const&);
		void setBlob(cpp_int const&, local_ref< java::io::InputStream > const&);
		void setNClob(cpp_int const&, local_ref< java::io::Reader > const&);
	}; //class PreparedStatement

} //namespace sql
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_PREPAREDSTATEMENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_PREPAREDSTATEMENT_HPP_IMPL
#define J2CPP_JAVA_SQL_PREPAREDSTATEMENT_HPP_IMPL

namespace j2cpp {


void java::sql::PreparedStatement::addBatch()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void java::sql::PreparedStatement::clearParameters()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_boolean java::sql::PreparedStatement::execute()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::sql::ResultSet > java::sql::PreparedStatement::executeQuery()
{
	return local_ref< java::sql::ResultSet >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_int java::sql::PreparedStatement::executeUpdate()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< java::sql::ResultSetMetaData > java::sql::PreparedStatement::getMetaData()
{
	return local_ref< java::sql::ResultSetMetaData >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< java::sql::ParameterMetaData > java::sql::PreparedStatement::getParameterMetaData()
{
	return local_ref< java::sql::ParameterMetaData >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

void java::sql::PreparedStatement::setArray(cpp_int const &a0, local_ref< java::sql::Array > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setAsciiStream(cpp_int const &a0, local_ref< java::io::InputStream > const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setBigDecimal(cpp_int const &a0, local_ref< java::math::BigDecimal > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setBinaryStream(cpp_int const &a0, local_ref< java::io::InputStream > const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setBlob(cpp_int const &a0, local_ref< java::sql::Blob > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setBoolean(cpp_int const &a0, cpp_boolean const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setByte(cpp_int const &a0, cpp_byte const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setBytes(cpp_int const &a0, local_ref< cpp_byte_array<1> > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setCharacterStream(cpp_int const &a0, local_ref< java::io::Reader > const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setClob(cpp_int const &a0, local_ref< java::sql::Clob > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setDate(cpp_int const &a0, local_ref< java::sql::Date > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setDate(cpp_int const &a0, local_ref< java::sql::Date > const &a1, local_ref< java::util::Calendar > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setDouble(cpp_int const &a0, cpp_double const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setFloat(cpp_int const &a0, cpp_float const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setInt(cpp_int const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setLong(cpp_int const &a0, cpp_long const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setNull(cpp_int const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setNull(cpp_int const &a0, cpp_int const &a1, local_ref< java::lang::String > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setObject(cpp_int const &a0, local_ref< java::lang::Object > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setObject(cpp_int const &a0, local_ref< java::lang::Object > const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setObject(cpp_int const &a0, local_ref< java::lang::Object > const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setRef(cpp_int const &a0, local_ref< java::sql::Ref > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setShort(cpp_int const &a0, cpp_short const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setString(cpp_int const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setTime(cpp_int const &a0, local_ref< java::sql::Time > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setTime(cpp_int const &a0, local_ref< java::sql::Time > const &a1, local_ref< java::util::Calendar > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setTimestamp(cpp_int const &a0, local_ref< java::sql::Timestamp > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setTimestamp(cpp_int const &a0, local_ref< java::sql::Timestamp > const &a1, local_ref< java::util::Calendar > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(34), J2CPP_METHOD_SIGNATURE(34), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setUnicodeStream(cpp_int const &a0, local_ref< java::io::InputStream > const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(35), J2CPP_METHOD_SIGNATURE(35), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setURL(cpp_int const &a0, local_ref< java::net::URL > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(36), J2CPP_METHOD_SIGNATURE(36), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setRowId(cpp_int const &a0, local_ref< java::sql::RowId > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(37), J2CPP_METHOD_SIGNATURE(37), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setNString(cpp_int const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(38), J2CPP_METHOD_SIGNATURE(38), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setNCharacterStream(cpp_int const &a0, local_ref< java::io::Reader > const &a1, cpp_long const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(39), J2CPP_METHOD_SIGNATURE(39), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setNClob(cpp_int const &a0, local_ref< java::sql::NClob > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(40), J2CPP_METHOD_SIGNATURE(40), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setClob(cpp_int const &a0, local_ref< java::io::Reader > const &a1, cpp_long const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(41), J2CPP_METHOD_SIGNATURE(41), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setBlob(cpp_int const &a0, local_ref< java::io::InputStream > const &a1, cpp_long const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(42), J2CPP_METHOD_SIGNATURE(42), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setNClob(cpp_int const &a0, local_ref< java::io::Reader > const &a1, cpp_long const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(43), J2CPP_METHOD_SIGNATURE(43), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setSQLXML(cpp_int const &a0, local_ref< java::sql::SQLXML > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(44), J2CPP_METHOD_SIGNATURE(44), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setAsciiStream(cpp_int const &a0, local_ref< java::io::InputStream > const &a1, cpp_long const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(45), J2CPP_METHOD_SIGNATURE(45), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setBinaryStream(cpp_int const &a0, local_ref< java::io::InputStream > const &a1, cpp_long const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(46), J2CPP_METHOD_SIGNATURE(46), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setCharacterStream(cpp_int const &a0, local_ref< java::io::Reader > const &a1, cpp_long const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(47), J2CPP_METHOD_SIGNATURE(47), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setAsciiStream(cpp_int const &a0, local_ref< java::io::InputStream > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(48), J2CPP_METHOD_SIGNATURE(48), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setBinaryStream(cpp_int const &a0, local_ref< java::io::InputStream > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(49), J2CPP_METHOD_SIGNATURE(49), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setCharacterStream(cpp_int const &a0, local_ref< java::io::Reader > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(50), J2CPP_METHOD_SIGNATURE(50), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setNCharacterStream(cpp_int const &a0, local_ref< java::io::Reader > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(51), J2CPP_METHOD_SIGNATURE(51), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setClob(cpp_int const &a0, local_ref< java::io::Reader > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(52), J2CPP_METHOD_SIGNATURE(52), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setBlob(cpp_int const &a0, local_ref< java::io::InputStream > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(53), J2CPP_METHOD_SIGNATURE(53), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::sql::PreparedStatement::setNClob(cpp_int const &a0, local_ref< java::io::Reader > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(54), J2CPP_METHOD_SIGNATURE(54), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::sql::PreparedStatement,"java/sql/PreparedStatement")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,0,"addBatch","()V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,1,"clearParameters","()V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,2,"execute","()Z")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,3,"executeQuery","()Ljava/sql/ResultSet;")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,4,"executeUpdate","()I")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,5,"getMetaData","()Ljava/sql/ResultSetMetaData;")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,6,"getParameterMetaData","()Ljava/sql/ParameterMetaData;")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,7,"setArray","(ILjava/sql/Array;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,8,"setAsciiStream","(ILjava/io/InputStream;I)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,9,"setBigDecimal","(ILjava/math/BigDecimal;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,10,"setBinaryStream","(ILjava/io/InputStream;I)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,11,"setBlob","(ILjava/sql/Blob;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,12,"setBoolean","(IZ)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,13,"setByte","(IB)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,14,"setBytes","(I[B)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,15,"setCharacterStream","(ILjava/io/Reader;I)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,16,"setClob","(ILjava/sql/Clob;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,17,"setDate","(ILjava/sql/Date;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,18,"setDate","(ILjava/sql/Date;Ljava/util/Calendar;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,19,"setDouble","(ID)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,20,"setFloat","(IF)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,21,"setInt","(II)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,22,"setLong","(IJ)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,23,"setNull","(II)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,24,"setNull","(IILjava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,25,"setObject","(ILjava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,26,"setObject","(ILjava/lang/Object;I)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,27,"setObject","(ILjava/lang/Object;II)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,28,"setRef","(ILjava/sql/Ref;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,29,"setShort","(IS)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,30,"setString","(ILjava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,31,"setTime","(ILjava/sql/Time;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,32,"setTime","(ILjava/sql/Time;Ljava/util/Calendar;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,33,"setTimestamp","(ILjava/sql/Timestamp;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,34,"setTimestamp","(ILjava/sql/Timestamp;Ljava/util/Calendar;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,35,"setUnicodeStream","(ILjava/io/InputStream;I)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,36,"setURL","(ILjava/net/URL;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,37,"setRowId","(ILjava/sql/RowId;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,38,"setNString","(ILjava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,39,"setNCharacterStream","(ILjava/io/Reader;J)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,40,"setNClob","(ILjava/sql/NClob;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,41,"setClob","(ILjava/io/Reader;J)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,42,"setBlob","(ILjava/io/InputStream;J)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,43,"setNClob","(ILjava/io/Reader;J)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,44,"setSQLXML","(ILjava/sql/SQLXML;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,45,"setAsciiStream","(ILjava/io/InputStream;J)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,46,"setBinaryStream","(ILjava/io/InputStream;J)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,47,"setCharacterStream","(ILjava/io/Reader;J)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,48,"setAsciiStream","(ILjava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,49,"setBinaryStream","(ILjava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,50,"setCharacterStream","(ILjava/io/Reader;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,51,"setNCharacterStream","(ILjava/io/Reader;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,52,"setClob","(ILjava/io/Reader;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,53,"setBlob","(ILjava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(java::sql::PreparedStatement,54,"setNClob","(ILjava/io/Reader;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_PREPAREDSTATEMENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION