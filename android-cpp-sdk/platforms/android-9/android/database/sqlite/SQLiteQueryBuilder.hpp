/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.database.sqlite.SQLiteQueryBuilder
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_SQLITE_SQLITEQUERYBUILDER_HPP_DECL
#define J2CPP_ANDROID_DATABASE_SQLITE_SQLITEQUERYBUILDER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class StringBuilder; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace java { namespace util { class Set; } } }
namespace j2cpp { namespace android { namespace database { namespace sqlite { class SQLiteDatabase; } } } }
namespace j2cpp { namespace android { namespace database { namespace sqlite { namespace SQLiteDatabase_ { class CursorFactory; } } } } }
namespace j2cpp { namespace android { namespace database { class Cursor; } } }


#include <android/database/Cursor.hpp>
#include <android/database/sqlite/SQLiteDatabase.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>


namespace j2cpp {

namespace android { namespace database { namespace sqlite {

	class SQLiteQueryBuilder;
	class SQLiteQueryBuilder
		: public object<SQLiteQueryBuilder>
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

		explicit SQLiteQueryBuilder(jobject jobj)
		: object<SQLiteQueryBuilder>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		SQLiteQueryBuilder();
		void setDistinct(jboolean);
		local_ref< java::lang::String > getTables();
		void setTables(local_ref< java::lang::String >  const&);
		void appendWhere(local_ref< java::lang::CharSequence >  const&);
		void appendWhereEscapeString(local_ref< java::lang::String >  const&);
		void setProjectionMap(local_ref< java::util::Map >  const&);
		void setCursorFactory(local_ref< android::database::sqlite::SQLiteDatabase_::CursorFactory >  const&);
		static local_ref< java::lang::String > buildQueryString(jboolean, local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		static void appendColumns(local_ref< java::lang::StringBuilder >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&);
		local_ref< android::database::Cursor > query(local_ref< android::database::sqlite::SQLiteDatabase >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&, local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		local_ref< android::database::Cursor > query(local_ref< android::database::sqlite::SQLiteDatabase >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&, local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > buildQuery(local_ref< array< local_ref< java::lang::String >, 1> >  const&, local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > buildUnionSubQuery(local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&, local_ref< java::util::Set >  const&, jint, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > buildUnionQuery(local_ref< array< local_ref< java::lang::String >, 1> >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
	}; //class SQLiteQueryBuilder

} //namespace sqlite
} //namespace database
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_SQLITE_SQLITEQUERYBUILDER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_SQLITE_SQLITEQUERYBUILDER_HPP_IMPL
#define J2CPP_ANDROID_DATABASE_SQLITE_SQLITEQUERYBUILDER_HPP_IMPL

namespace j2cpp {



android::database::sqlite::SQLiteQueryBuilder::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::database::sqlite::SQLiteQueryBuilder::SQLiteQueryBuilder()
: object<android::database::sqlite::SQLiteQueryBuilder>(
	call_new_object<
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_METHOD_NAME(0),
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void android::database::sqlite::SQLiteQueryBuilder::setDistinct(jboolean a0)
{
	return call_method<
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_METHOD_NAME(1),
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::String > android::database::sqlite::SQLiteQueryBuilder::getTables()
{
	return call_method<
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_METHOD_NAME(2),
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void android::database::sqlite::SQLiteQueryBuilder::setTables(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_METHOD_NAME(3),
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

void android::database::sqlite::SQLiteQueryBuilder::appendWhere(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_METHOD_NAME(4),
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

void android::database::sqlite::SQLiteQueryBuilder::appendWhereEscapeString(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_METHOD_NAME(5),
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

void android::database::sqlite::SQLiteQueryBuilder::setProjectionMap(local_ref< java::util::Map > const &a0)
{
	return call_method<
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_METHOD_NAME(6),
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

void android::database::sqlite::SQLiteQueryBuilder::setCursorFactory(local_ref< android::database::sqlite::SQLiteDatabase_::CursorFactory > const &a0)
{
	return call_method<
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_METHOD_NAME(7),
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::String > android::database::sqlite::SQLiteQueryBuilder::buildQueryString(jboolean a0, local_ref< java::lang::String > const &a1, local_ref< array< local_ref< java::lang::String >, 1> > const &a2, local_ref< java::lang::String > const &a3, local_ref< java::lang::String > const &a4, local_ref< java::lang::String > const &a5, local_ref< java::lang::String > const &a6, local_ref< java::lang::String > const &a7)
{
	return call_static_method<
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_METHOD_NAME(8),
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::String >
	>(a0, a1, a2, a3, a4, a5, a6, a7);
}

void android::database::sqlite::SQLiteQueryBuilder::appendColumns(local_ref< java::lang::StringBuilder > const &a0, local_ref< array< local_ref< java::lang::String >, 1> > const &a1)
{
	return call_static_method<
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_METHOD_NAME(9),
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(a0, a1);
}

local_ref< android::database::Cursor > android::database::sqlite::SQLiteQueryBuilder::query(local_ref< android::database::sqlite::SQLiteDatabase > const &a0, local_ref< array< local_ref< java::lang::String >, 1> > const &a1, local_ref< java::lang::String > const &a2, local_ref< array< local_ref< java::lang::String >, 1> > const &a3, local_ref< java::lang::String > const &a4, local_ref< java::lang::String > const &a5, local_ref< java::lang::String > const &a6)
{
	return call_method<
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_METHOD_NAME(10),
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< android::database::Cursor >
	>(get_jobject(), a0, a1, a2, a3, a4, a5, a6);
}

local_ref< android::database::Cursor > android::database::sqlite::SQLiteQueryBuilder::query(local_ref< android::database::sqlite::SQLiteDatabase > const &a0, local_ref< array< local_ref< java::lang::String >, 1> > const &a1, local_ref< java::lang::String > const &a2, local_ref< array< local_ref< java::lang::String >, 1> > const &a3, local_ref< java::lang::String > const &a4, local_ref< java::lang::String > const &a5, local_ref< java::lang::String > const &a6, local_ref< java::lang::String > const &a7)
{
	return call_method<
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_METHOD_NAME(11),
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< android::database::Cursor >
	>(get_jobject(), a0, a1, a2, a3, a4, a5, a6, a7);
}

local_ref< java::lang::String > android::database::sqlite::SQLiteQueryBuilder::buildQuery(local_ref< array< local_ref< java::lang::String >, 1> > const &a0, local_ref< java::lang::String > const &a1, local_ref< array< local_ref< java::lang::String >, 1> > const &a2, local_ref< java::lang::String > const &a3, local_ref< java::lang::String > const &a4, local_ref< java::lang::String > const &a5, local_ref< java::lang::String > const &a6)
{
	return call_method<
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_METHOD_NAME(12),
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::lang::String >
	>(get_jobject(), a0, a1, a2, a3, a4, a5, a6);
}

local_ref< java::lang::String > android::database::sqlite::SQLiteQueryBuilder::buildUnionSubQuery(local_ref< java::lang::String > const &a0, local_ref< array< local_ref< java::lang::String >, 1> > const &a1, local_ref< java::util::Set > const &a2, jint a3, local_ref< java::lang::String > const &a4, local_ref< java::lang::String > const &a5, local_ref< array< local_ref< java::lang::String >, 1> > const &a6, local_ref< java::lang::String > const &a7, local_ref< java::lang::String > const &a8)
{
	return call_method<
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_METHOD_NAME(13),
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::lang::String >
	>(get_jobject(), a0, a1, a2, a3, a4, a5, a6, a7, a8);
}

local_ref< java::lang::String > android::database::sqlite::SQLiteQueryBuilder::buildUnionQuery(local_ref< array< local_ref< java::lang::String >, 1> > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
{
	return call_method<
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_METHOD_NAME(14),
		android::database::sqlite::SQLiteQueryBuilder::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< java::lang::String >
	>(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(android::database::sqlite::SQLiteQueryBuilder,"android/database/sqlite/SQLiteQueryBuilder")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteQueryBuilder,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteQueryBuilder,1,"setDistinct","(Z)V")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteQueryBuilder,2,"getTables","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteQueryBuilder,3,"setTables","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteQueryBuilder,4,"appendWhere","(Ljava/lang/CharSequence;)V")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteQueryBuilder,5,"appendWhereEscapeString","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteQueryBuilder,6,"setProjectionMap","(Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteQueryBuilder,7,"setCursorFactory","(Landroid/database/sqlite/SQLiteDatabase$CursorFactory;)V")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteQueryBuilder,8,"buildQueryString","(ZLjava/lang/String;[java.lang.StringLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteQueryBuilder,9,"appendColumns","(Ljava/lang/StringBuilder;[java.lang.String)V")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteQueryBuilder,10,"query","(Landroid/database/sqlite/SQLiteDatabase;[java.lang.StringLjava/lang/String;[java.lang.StringLjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteQueryBuilder,11,"query","(Landroid/database/sqlite/SQLiteDatabase;[java.lang.StringLjava/lang/String;[java.lang.StringLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteQueryBuilder,12,"buildQuery","([java.lang.StringLjava/lang/String;[java.lang.StringLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteQueryBuilder,13,"buildUnionSubQuery","(Ljava/lang/String;[java.lang.StringLjava/util/Set;ILjava/lang/String;Ljava/lang/String;[java.lang.StringLjava/lang/String;Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteQueryBuilder,14,"buildUnionQuery","([java.lang.StringLjava/lang/String;Ljava/lang/String;)Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_SQLITE_SQLITEQUERYBUILDER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
