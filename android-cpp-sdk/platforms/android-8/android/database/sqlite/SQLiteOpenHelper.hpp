/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.database.sqlite.SQLiteOpenHelper
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_SQLITE_SQLITEOPENHELPER_HPP_DECL
#define J2CPP_ANDROID_DATABASE_SQLITE_SQLITEOPENHELPER_HPP_DECL


namespace j2cpp { namespace android { namespace database { namespace sqlite { class SQLiteDatabase; } } } }
namespace j2cpp { namespace android { namespace database { namespace sqlite { namespace SQLiteDatabase_ { class CursorFactory; } } } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/Context.hpp>
#include <android/database/sqlite/SQLiteDatabase.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace database { namespace sqlite {

	class SQLiteOpenHelper;
	class SQLiteOpenHelper
		: public object<SQLiteOpenHelper>
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

		explicit SQLiteOpenHelper(jobject jobj)
		: object<SQLiteOpenHelper>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		SQLiteOpenHelper(local_ref< android::content::Context > const&, local_ref< java::lang::String > const&, local_ref< android::database::sqlite::SQLiteDatabase_::CursorFactory > const&, jint);
		local_ref< android::database::sqlite::SQLiteDatabase > getWritableDatabase();
		local_ref< android::database::sqlite::SQLiteDatabase > getReadableDatabase();
		void close();
		void onCreate(local_ref< android::database::sqlite::SQLiteDatabase >  const&);
		void onUpgrade(local_ref< android::database::sqlite::SQLiteDatabase >  const&, jint, jint);
		void onOpen(local_ref< android::database::sqlite::SQLiteDatabase >  const&);
	}; //class SQLiteOpenHelper

} //namespace sqlite
} //namespace database
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_SQLITE_SQLITEOPENHELPER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_SQLITE_SQLITEOPENHELPER_HPP_IMPL
#define J2CPP_ANDROID_DATABASE_SQLITE_SQLITEOPENHELPER_HPP_IMPL

namespace j2cpp {



android::database::sqlite::SQLiteOpenHelper::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::database::sqlite::SQLiteOpenHelper::SQLiteOpenHelper(local_ref< android::content::Context > const &a0, local_ref< java::lang::String > const &a1, local_ref< android::database::sqlite::SQLiteDatabase_::CursorFactory > const &a2, jint a3)
: object<android::database::sqlite::SQLiteOpenHelper>(
	call_new_object<
		android::database::sqlite::SQLiteOpenHelper::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteOpenHelper::J2CPP_METHOD_NAME(0),
		android::database::sqlite::SQLiteOpenHelper::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1, a2, a3)
)
{
}


local_ref< android::database::sqlite::SQLiteDatabase > android::database::sqlite::SQLiteOpenHelper::getWritableDatabase()
{
	return call_method<
		android::database::sqlite::SQLiteOpenHelper::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteOpenHelper::J2CPP_METHOD_NAME(1),
		android::database::sqlite::SQLiteOpenHelper::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::database::sqlite::SQLiteDatabase > >
	(get_jobject());
}

local_ref< android::database::sqlite::SQLiteDatabase > android::database::sqlite::SQLiteOpenHelper::getReadableDatabase()
{
	return call_method<
		android::database::sqlite::SQLiteOpenHelper::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteOpenHelper::J2CPP_METHOD_NAME(2),
		android::database::sqlite::SQLiteOpenHelper::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::database::sqlite::SQLiteDatabase > >
	(get_jobject());
}

void android::database::sqlite::SQLiteOpenHelper::close()
{
	return call_method<
		android::database::sqlite::SQLiteOpenHelper::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteOpenHelper::J2CPP_METHOD_NAME(3),
		android::database::sqlite::SQLiteOpenHelper::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject());
}

void android::database::sqlite::SQLiteOpenHelper::onCreate(local_ref< android::database::sqlite::SQLiteDatabase > const &a0)
{
	return call_method<
		android::database::sqlite::SQLiteOpenHelper::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteOpenHelper::J2CPP_METHOD_NAME(4),
		android::database::sqlite::SQLiteOpenHelper::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0);
}

void android::database::sqlite::SQLiteOpenHelper::onUpgrade(local_ref< android::database::sqlite::SQLiteDatabase > const &a0, jint a1, jint a2)
{
	return call_method<
		android::database::sqlite::SQLiteOpenHelper::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteOpenHelper::J2CPP_METHOD_NAME(5),
		android::database::sqlite::SQLiteOpenHelper::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0, a1, a2);
}

void android::database::sqlite::SQLiteOpenHelper::onOpen(local_ref< android::database::sqlite::SQLiteDatabase > const &a0)
{
	return call_method<
		android::database::sqlite::SQLiteOpenHelper::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteOpenHelper::J2CPP_METHOD_NAME(6),
		android::database::sqlite::SQLiteOpenHelper::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::database::sqlite::SQLiteOpenHelper,"android/database/sqlite/SQLiteOpenHelper")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteOpenHelper,0,"<init>","(Landroid/content/Context;Ljava/lang/String;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;I)V")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteOpenHelper,1,"getWritableDatabase","()Landroid/database/sqlite/SQLiteDatabase;")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteOpenHelper,2,"getReadableDatabase","()Landroid/database/sqlite/SQLiteDatabase;")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteOpenHelper,3,"close","()V")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteOpenHelper,4,"onCreate","(Landroid/database/sqlite/SQLiteDatabase;)V")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteOpenHelper,5,"onUpgrade","(Landroid/database/sqlite/SQLiteDatabase;II)V")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteOpenHelper,6,"onOpen","(Landroid/database/sqlite/SQLiteDatabase;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_SQLITE_SQLITEOPENHELPER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
