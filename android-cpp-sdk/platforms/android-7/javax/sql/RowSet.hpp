/*================================================================================
  code generated by: java2cpp
  class: javax.sql.RowSet
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SQL_ROWSET_HPP_DECL
#define J2CPP_JAVAX_SQL_ROWSET_HPP_DECL


namespace j2cpp { namespace javax { namespace sql { class RowSetListener; } } }
namespace j2cpp { namespace java { namespace io { class Reader; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace math { class BigDecimal; } } }
namespace j2cpp { namespace java { namespace sql { class Ref; } } }
namespace j2cpp { namespace java { namespace sql { class Clob; } } }
namespace j2cpp { namespace java { namespace sql { class Blob; } } }
namespace j2cpp { namespace java { namespace sql { class Date; } } }
namespace j2cpp { namespace java { namespace sql { class ResultSet; } } }
namespace j2cpp { namespace java { namespace sql { class Time; } } }
namespace j2cpp { namespace java { namespace sql { class Array; } } }
namespace j2cpp { namespace java { namespace sql { class Timestamp; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace java { namespace util { class Calendar; } } }


#include <java/io/InputStream.hpp>
#include <java/io/Reader.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/math/BigDecimal.hpp>
#include <java/sql/Array.hpp>
#include <java/sql/Blob.hpp>
#include <java/sql/Clob.hpp>
#include <java/sql/Date.hpp>
#include <java/sql/Ref.hpp>
#include <java/sql/ResultSet.hpp>
#include <java/sql/Time.hpp>
#include <java/sql/Timestamp.hpp>
#include <java/util/Calendar.hpp>
#include <java/util/Map.hpp>
#include <javax/sql/RowSetListener.hpp>


namespace j2cpp {

namespace javax { namespace sql {

	class RowSet;
	class RowSet
		: public cpp_object<RowSet>
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
		J2CPP_DECLARE_METHOD(55)
		J2CPP_DECLARE_METHOD(56)
		J2CPP_DECLARE_METHOD(57)

		explicit RowSet(jobject jobj)
		: cpp_object<RowSet>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::sql::ResultSet>() const;


		void addRowSetListener(local_ref< javax::sql::RowSetListener > const&);
		void clearParameters();
		void execute();
		local_ref< java::lang::String > getCommand();
		local_ref< java::lang::String > getDataSourceName();
		cpp_boolean getEscapeProcessing();
		cpp_int getMaxFieldSize();
		cpp_int getMaxRows();
		local_ref< java::lang::String > getPassword();
		cpp_int getQueryTimeout();
		cpp_int getTransactionIsolation();
		local_ref< java::util::Map > getTypeMap();
		local_ref< java::lang::String > getUrl();
		local_ref< java::lang::String > getUsername();
		cpp_boolean isReadOnly();
		void removeRowSetListener(local_ref< javax::sql::RowSetListener > const&);
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
		void setCommand(local_ref< java::lang::String > const&);
		void setConcurrency(cpp_int const&);
		void setDataSourceName(local_ref< java::lang::String > const&);
		void setDate(cpp_int const&, local_ref< java::sql::Date > const&);
		void setDate(cpp_int const&, local_ref< java::sql::Date > const&, local_ref< java::util::Calendar > const&);
		void setDouble(cpp_int const&, cpp_double const&);
		void setEscapeProcessing(cpp_boolean const&);
		void setFloat(cpp_int const&, cpp_float const&);
		void setInt(cpp_int const&, cpp_int const&);
		void setLong(cpp_int const&, cpp_long const&);
		void setMaxFieldSize(cpp_int const&);
		void setMaxRows(cpp_int const&);
		void setNull(cpp_int const&, cpp_int const&);
		void setNull(cpp_int const&, cpp_int const&, local_ref< java::lang::String > const&);
		void setObject(cpp_int const&, local_ref< java::lang::Object > const&);
		void setObject(cpp_int const&, local_ref< java::lang::Object > const&, cpp_int const&);
		void setObject(cpp_int const&, local_ref< java::lang::Object > const&, cpp_int const&, cpp_int const&);
		void setPassword(local_ref< java::lang::String > const&);
		void setQueryTimeout(cpp_int const&);
		void setReadOnly(cpp_boolean const&);
		void setRef(cpp_int const&, local_ref< java::sql::Ref > const&);
		void setShort(cpp_int const&, cpp_short const&);
		void setString(cpp_int const&, local_ref< java::lang::String > const&);
		void setTime(cpp_int const&, local_ref< java::sql::Time > const&);
		void setTime(cpp_int const&, local_ref< java::sql::Time > const&, local_ref< java::util::Calendar > const&);
		void setTimestamp(cpp_int const&, local_ref< java::sql::Timestamp > const&);
		void setTimestamp(cpp_int const&, local_ref< java::sql::Timestamp > const&, local_ref< java::util::Calendar > const&);
		void setTransactionIsolation(cpp_int const&);
		void setType(cpp_int const&);
		void setTypeMap(local_ref< java::util::Map > const&);
		void setUrl(local_ref< java::lang::String > const&);
		void setUsername(local_ref< java::lang::String > const&);
	}; //class RowSet

} //namespace sql
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_SQL_ROWSET_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SQL_ROWSET_HPP_IMPL
#define J2CPP_JAVAX_SQL_ROWSET_HPP_IMPL

namespace j2cpp {



javax::sql::RowSet::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

javax::sql::RowSet::operator local_ref<java::sql::ResultSet>() const
{
	return local_ref<java::sql::ResultSet>(get_jtype());
}

void javax::sql::RowSet::addRowSetListener(local_ref< javax::sql::RowSetListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

void javax::sql::RowSet::clearParameters()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

void javax::sql::RowSet::execute()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::lang::String > javax::sql::RowSet::getCommand()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< java::lang::String > javax::sql::RowSet::getDataSourceName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_boolean javax::sql::RowSet::getEscapeProcessing()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_int javax::sql::RowSet::getMaxFieldSize()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_int javax::sql::RowSet::getMaxRows()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

local_ref< java::lang::String > javax::sql::RowSet::getPassword()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

cpp_int javax::sql::RowSet::getQueryTimeout()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

cpp_int javax::sql::RowSet::getTransactionIsolation()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

local_ref< java::util::Map > javax::sql::RowSet::getTypeMap()
{
	return local_ref< java::util::Map >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

local_ref< java::lang::String > javax::sql::RowSet::getUrl()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

local_ref< java::lang::String > javax::sql::RowSet::getUsername()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

cpp_boolean javax::sql::RowSet::isReadOnly()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

void javax::sql::RowSet::removeRowSetListener(local_ref< javax::sql::RowSetListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

void javax::sql::RowSet::setArray(cpp_int const &a0, local_ref< java::sql::Array > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void javax::sql::RowSet::setAsciiStream(cpp_int const &a0, local_ref< java::io::InputStream > const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void javax::sql::RowSet::setBigDecimal(cpp_int const &a0, local_ref< java::math::BigDecimal > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void javax::sql::RowSet::setBinaryStream(cpp_int const &a0, local_ref< java::io::InputStream > const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void javax::sql::RowSet::setBlob(cpp_int const &a0, local_ref< java::sql::Blob > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void javax::sql::RowSet::setBoolean(cpp_int const &a0, cpp_boolean const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void javax::sql::RowSet::setByte(cpp_int const &a0, cpp_byte const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void javax::sql::RowSet::setBytes(cpp_int const &a0, local_ref< cpp_byte_array<1> > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void javax::sql::RowSet::setCharacterStream(cpp_int const &a0, local_ref< java::io::Reader > const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void javax::sql::RowSet::setClob(cpp_int const &a0, local_ref< java::sql::Clob > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void javax::sql::RowSet::setCommand(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>(),
			a0.get_jtype()
		)
	);
}

void javax::sql::RowSet::setConcurrency(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>(),
			a0.get_jtype()
		)
	);
}

void javax::sql::RowSet::setDataSourceName(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>(),
			a0.get_jtype()
		)
	);
}

void javax::sql::RowSet::setDate(cpp_int const &a0, local_ref< java::sql::Date > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void javax::sql::RowSet::setDate(cpp_int const &a0, local_ref< java::sql::Date > const &a1, local_ref< java::util::Calendar > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void javax::sql::RowSet::setDouble(cpp_int const &a0, cpp_double const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void javax::sql::RowSet::setEscapeProcessing(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), false>(),
			a0.get_jtype()
		)
	);
}

void javax::sql::RowSet::setFloat(cpp_int const &a0, cpp_float const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void javax::sql::RowSet::setInt(cpp_int const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(34), J2CPP_METHOD_SIGNATURE(34), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void javax::sql::RowSet::setLong(cpp_int const &a0, cpp_long const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(35), J2CPP_METHOD_SIGNATURE(35), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void javax::sql::RowSet::setMaxFieldSize(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(36), J2CPP_METHOD_SIGNATURE(36), false>(),
			a0.get_jtype()
		)
	);
}

void javax::sql::RowSet::setMaxRows(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(37), J2CPP_METHOD_SIGNATURE(37), false>(),
			a0.get_jtype()
		)
	);
}

void javax::sql::RowSet::setNull(cpp_int const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(38), J2CPP_METHOD_SIGNATURE(38), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void javax::sql::RowSet::setNull(cpp_int const &a0, cpp_int const &a1, local_ref< java::lang::String > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(39), J2CPP_METHOD_SIGNATURE(39), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void javax::sql::RowSet::setObject(cpp_int const &a0, local_ref< java::lang::Object > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(40), J2CPP_METHOD_SIGNATURE(40), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void javax::sql::RowSet::setObject(cpp_int const &a0, local_ref< java::lang::Object > const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(41), J2CPP_METHOD_SIGNATURE(41), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void javax::sql::RowSet::setObject(cpp_int const &a0, local_ref< java::lang::Object > const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(42), J2CPP_METHOD_SIGNATURE(42), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void javax::sql::RowSet::setPassword(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(43), J2CPP_METHOD_SIGNATURE(43), false>(),
			a0.get_jtype()
		)
	);
}

void javax::sql::RowSet::setQueryTimeout(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(44), J2CPP_METHOD_SIGNATURE(44), false>(),
			a0.get_jtype()
		)
	);
}

void javax::sql::RowSet::setReadOnly(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(45), J2CPP_METHOD_SIGNATURE(45), false>(),
			a0.get_jtype()
		)
	);
}

void javax::sql::RowSet::setRef(cpp_int const &a0, local_ref< java::sql::Ref > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(46), J2CPP_METHOD_SIGNATURE(46), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void javax::sql::RowSet::setShort(cpp_int const &a0, cpp_short const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(47), J2CPP_METHOD_SIGNATURE(47), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void javax::sql::RowSet::setString(cpp_int const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(48), J2CPP_METHOD_SIGNATURE(48), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void javax::sql::RowSet::setTime(cpp_int const &a0, local_ref< java::sql::Time > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(49), J2CPP_METHOD_SIGNATURE(49), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void javax::sql::RowSet::setTime(cpp_int const &a0, local_ref< java::sql::Time > const &a1, local_ref< java::util::Calendar > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(50), J2CPP_METHOD_SIGNATURE(50), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void javax::sql::RowSet::setTimestamp(cpp_int const &a0, local_ref< java::sql::Timestamp > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(51), J2CPP_METHOD_SIGNATURE(51), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void javax::sql::RowSet::setTimestamp(cpp_int const &a0, local_ref< java::sql::Timestamp > const &a1, local_ref< java::util::Calendar > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(52), J2CPP_METHOD_SIGNATURE(52), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void javax::sql::RowSet::setTransactionIsolation(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(53), J2CPP_METHOD_SIGNATURE(53), false>(),
			a0.get_jtype()
		)
	);
}

void javax::sql::RowSet::setType(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(54), J2CPP_METHOD_SIGNATURE(54), false>(),
			a0.get_jtype()
		)
	);
}

void javax::sql::RowSet::setTypeMap(local_ref< java::util::Map > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(55), J2CPP_METHOD_SIGNATURE(55), false>(),
			a0.get_jtype()
		)
	);
}

void javax::sql::RowSet::setUrl(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(56), J2CPP_METHOD_SIGNATURE(56), false>(),
			a0.get_jtype()
		)
	);
}

void javax::sql::RowSet::setUsername(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(57), J2CPP_METHOD_SIGNATURE(57), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(javax::sql::RowSet,"javax/sql/RowSet")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,0,"addRowSetListener","(Ljavax/sql/RowSetListener;)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,1,"clearParameters","()V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,2,"execute","()V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,3,"getCommand","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,4,"getDataSourceName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,5,"getEscapeProcessing","()Z")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,6,"getMaxFieldSize","()I")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,7,"getMaxRows","()I")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,8,"getPassword","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,9,"getQueryTimeout","()I")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,10,"getTransactionIsolation","()I")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,11,"getTypeMap","()Ljava/util/Map;")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,12,"getUrl","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,13,"getUsername","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,14,"isReadOnly","()Z")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,15,"removeRowSetListener","(Ljavax/sql/RowSetListener;)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,16,"setArray","(ILjava/sql/Array;)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,17,"setAsciiStream","(ILjava/io/InputStream;I)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,18,"setBigDecimal","(ILjava/math/BigDecimal;)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,19,"setBinaryStream","(ILjava/io/InputStream;I)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,20,"setBlob","(ILjava/sql/Blob;)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,21,"setBoolean","(IZ)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,22,"setByte","(IB)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,23,"setBytes","(I[B)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,24,"setCharacterStream","(ILjava/io/Reader;I)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,25,"setClob","(ILjava/sql/Clob;)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,26,"setCommand","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,27,"setConcurrency","(I)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,28,"setDataSourceName","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,29,"setDate","(ILjava/sql/Date;)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,30,"setDate","(ILjava/sql/Date;Ljava/util/Calendar;)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,31,"setDouble","(ID)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,32,"setEscapeProcessing","(Z)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,33,"setFloat","(IF)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,34,"setInt","(II)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,35,"setLong","(IJ)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,36,"setMaxFieldSize","(I)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,37,"setMaxRows","(I)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,38,"setNull","(II)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,39,"setNull","(IILjava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,40,"setObject","(ILjava/lang/Object;)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,41,"setObject","(ILjava/lang/Object;I)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,42,"setObject","(ILjava/lang/Object;II)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,43,"setPassword","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,44,"setQueryTimeout","(I)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,45,"setReadOnly","(Z)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,46,"setRef","(ILjava/sql/Ref;)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,47,"setShort","(IS)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,48,"setString","(ILjava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,49,"setTime","(ILjava/sql/Time;)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,50,"setTime","(ILjava/sql/Time;Ljava/util/Calendar;)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,51,"setTimestamp","(ILjava/sql/Timestamp;)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,52,"setTimestamp","(ILjava/sql/Timestamp;Ljava/util/Calendar;)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,53,"setTransactionIsolation","(I)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,54,"setType","(I)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,55,"setTypeMap","(Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,56,"setUrl","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSet,57,"setUsername","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVAX_SQL_ROWSET_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
