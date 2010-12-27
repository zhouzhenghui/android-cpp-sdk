/*================================================================================
  code generated by: java2cpp
  class: android.database.sqlite.SQLiteAbortException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_SQLITE_SQLITEABORTEXCEPTION_HPP_DECL
#define J2CPP_ANDROID_DATABASE_SQLITE_SQLITEABORTEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace database { namespace sqlite { class SQLiteException; } } } }


#include <android/database/sqlite/SQLiteException.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace database { namespace sqlite {

	class SQLiteAbortException;
	class SQLiteAbortException
		: public cpp_object<SQLiteAbortException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit SQLiteAbortException(jobject jobj)
		: cpp_object<SQLiteAbortException>(jobj)
		{
		}

		operator local_ref<android::database::sqlite::SQLiteException>() const;


		SQLiteAbortException();
		SQLiteAbortException(local_ref< java::lang::String > const&);
	}; //class SQLiteAbortException

} //namespace sqlite
} //namespace database
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_SQLITE_SQLITEABORTEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_SQLITE_SQLITEABORTEXCEPTION_HPP_IMPL
#define J2CPP_ANDROID_DATABASE_SQLITE_SQLITEABORTEXCEPTION_HPP_IMPL

namespace j2cpp {



android::database::sqlite::SQLiteAbortException::operator local_ref<android::database::sqlite::SQLiteException>() const
{
	return local_ref<android::database::sqlite::SQLiteException>(get_jtype());
}


android::database::sqlite::SQLiteAbortException::SQLiteAbortException()
: cpp_object<android::database::sqlite::SQLiteAbortException>(
	environment::get().get_jenv()->NewObject(
		get_class<android::database::sqlite::SQLiteAbortException::J2CPP_CLASS_NAME>(),
		get_method_id<android::database::sqlite::SQLiteAbortException::J2CPP_CLASS_NAME, android::database::sqlite::SQLiteAbortException::J2CPP_METHOD_NAME(0), android::database::sqlite::SQLiteAbortException::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}



android::database::sqlite::SQLiteAbortException::SQLiteAbortException(local_ref< java::lang::String > const &a0)
: cpp_object<android::database::sqlite::SQLiteAbortException>(
	environment::get().get_jenv()->NewObject(
		get_class<android::database::sqlite::SQLiteAbortException::J2CPP_CLASS_NAME>(),
		get_method_id<android::database::sqlite::SQLiteAbortException::J2CPP_CLASS_NAME, android::database::sqlite::SQLiteAbortException::J2CPP_METHOD_NAME(1), android::database::sqlite::SQLiteAbortException::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype()
	)
)
{
}



J2CPP_DEFINE_CLASS(android::database::sqlite::SQLiteAbortException,"android/database/sqlite/SQLiteAbortException")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteAbortException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteAbortException,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_SQLITE_SQLITEABORTEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
