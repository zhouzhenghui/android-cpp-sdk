/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.database.Cursor
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_CURSOR_HPP_DECL
#define J2CPP_ANDROID_DATABASE_CURSOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace content { class ContentResolver; } } }
namespace j2cpp { namespace android { namespace database { class CharArrayBuffer; } } }
namespace j2cpp { namespace android { namespace database { class DataSetObserver; } } }
namespace j2cpp { namespace android { namespace database { class ContentObserver; } } }
namespace j2cpp { namespace android { namespace net { class Uri; } } }
namespace j2cpp { namespace android { namespace os { class Bundle; } } }


#include <android/content/ContentResolver.hpp>
#include <android/database/CharArrayBuffer.hpp>
#include <android/database/ContentObserver.hpp>
#include <android/database/DataSetObserver.hpp>
#include <android/net/Uri.hpp>
#include <android/os/Bundle.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace database {

	class Cursor;
	class Cursor
		: public object<Cursor>
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

		explicit Cursor(jobject jobj)
		: object<Cursor>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jint getCount();
		jint getPosition();
		jboolean move(jint);
		jboolean moveToPosition(jint);
		jboolean moveToFirst();
		jboolean moveToLast();
		jboolean moveToNext();
		jboolean moveToPrevious();
		jboolean isFirst();
		jboolean isLast();
		jboolean isBeforeFirst();
		jboolean isAfterLast();
		jint getColumnIndex(local_ref< java::lang::String >  const&);
		jint getColumnIndexOrThrow(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getColumnName(jint);
		local_ref< array< local_ref< java::lang::String >, 1> > getColumnNames();
		jint getColumnCount();
		local_ref< array<jbyte,1> > getBlob(jint);
		local_ref< java::lang::String > getString(jint);
		void copyStringToBuffer(jint, local_ref< android::database::CharArrayBuffer >  const&);
		jshort getShort(jint);
		jint getInt(jint);
		jlong getLong(jint);
		jfloat getFloat(jint);
		jdouble getDouble(jint);
		jboolean isNull(jint);
		void deactivate();
		jboolean requery();
		void close();
		jboolean isClosed();
		void registerContentObserver(local_ref< android::database::ContentObserver >  const&);
		void unregisterContentObserver(local_ref< android::database::ContentObserver >  const&);
		void registerDataSetObserver(local_ref< android::database::DataSetObserver >  const&);
		void unregisterDataSetObserver(local_ref< android::database::DataSetObserver >  const&);
		void setNotificationUri(local_ref< android::content::ContentResolver >  const&, local_ref< android::net::Uri >  const&);
		jboolean getWantsAllOnMoveCalls();
		local_ref< android::os::Bundle > getExtras();
		local_ref< android::os::Bundle > respond(local_ref< android::os::Bundle >  const&);
	}; //class Cursor

} //namespace database
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_CURSOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_CURSOR_HPP_IMPL
#define J2CPP_ANDROID_DATABASE_CURSOR_HPP_IMPL

namespace j2cpp {



android::database::Cursor::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jint android::database::Cursor::getCount()
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(0),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(0), 
		jint >
	(get_jobject());
}

jint android::database::Cursor::getPosition()
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(1),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(1), 
		jint >
	(get_jobject());
}

jboolean android::database::Cursor::move(jint a0)
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(2),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(2), 
		jboolean >
	(get_jobject(), a0);
}

jboolean android::database::Cursor::moveToPosition(jint a0)
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(3),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(3), 
		jboolean >
	(get_jobject(), a0);
}

jboolean android::database::Cursor::moveToFirst()
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(4),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(4), 
		jboolean >
	(get_jobject());
}

jboolean android::database::Cursor::moveToLast()
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(5),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(5), 
		jboolean >
	(get_jobject());
}

jboolean android::database::Cursor::moveToNext()
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(6),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(6), 
		jboolean >
	(get_jobject());
}

jboolean android::database::Cursor::moveToPrevious()
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(7),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(7), 
		jboolean >
	(get_jobject());
}

jboolean android::database::Cursor::isFirst()
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(8),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(8), 
		jboolean >
	(get_jobject());
}

jboolean android::database::Cursor::isLast()
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(9),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(9), 
		jboolean >
	(get_jobject());
}

jboolean android::database::Cursor::isBeforeFirst()
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(10),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(10), 
		jboolean >
	(get_jobject());
}

jboolean android::database::Cursor::isAfterLast()
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(11),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(11), 
		jboolean >
	(get_jobject());
}

jint android::database::Cursor::getColumnIndex(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(12),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(12), 
		jint >
	(get_jobject(), a0);
}

jint android::database::Cursor::getColumnIndexOrThrow(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(13),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(13), 
		jint >
	(get_jobject(), a0);
}

local_ref< java::lang::String > android::database::Cursor::getColumnName(jint a0)
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(14),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< java::lang::String > >
	(get_jobject(), a0);
}

local_ref< array< local_ref< java::lang::String >, 1> > android::database::Cursor::getColumnNames()
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(15),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< array< local_ref< java::lang::String >, 1> > >
	(get_jobject());
}

jint android::database::Cursor::getColumnCount()
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(16),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(16), 
		jint >
	(get_jobject());
}

local_ref< array<jbyte,1> > android::database::Cursor::getBlob(jint a0)
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(17),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< array<jbyte,1> > >
	(get_jobject(), a0);
}

local_ref< java::lang::String > android::database::Cursor::getString(jint a0)
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(18),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< java::lang::String > >
	(get_jobject(), a0);
}

void android::database::Cursor::copyStringToBuffer(jint a0, local_ref< android::database::CharArrayBuffer > const &a1)
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(19),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(19), 
		void >
	(get_jobject(), a0, a1);
}

jshort android::database::Cursor::getShort(jint a0)
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(20),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(20), 
		jshort >
	(get_jobject(), a0);
}

jint android::database::Cursor::getInt(jint a0)
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(21),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(21), 
		jint >
	(get_jobject(), a0);
}

jlong android::database::Cursor::getLong(jint a0)
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(22),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(22), 
		jlong >
	(get_jobject(), a0);
}

jfloat android::database::Cursor::getFloat(jint a0)
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(23),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(23), 
		jfloat >
	(get_jobject(), a0);
}

jdouble android::database::Cursor::getDouble(jint a0)
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(24),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(24), 
		jdouble >
	(get_jobject(), a0);
}

jboolean android::database::Cursor::isNull(jint a0)
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(25),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(25), 
		jboolean >
	(get_jobject(), a0);
}

void android::database::Cursor::deactivate()
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(26),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(26), 
		void >
	(get_jobject());
}

jboolean android::database::Cursor::requery()
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(27),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(27), 
		jboolean >
	(get_jobject());
}

void android::database::Cursor::close()
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(28),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(28), 
		void >
	(get_jobject());
}

jboolean android::database::Cursor::isClosed()
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(29),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(29), 
		jboolean >
	(get_jobject());
}

void android::database::Cursor::registerContentObserver(local_ref< android::database::ContentObserver > const &a0)
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(30),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(30), 
		void >
	(get_jobject(), a0);
}

void android::database::Cursor::unregisterContentObserver(local_ref< android::database::ContentObserver > const &a0)
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(31),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(31), 
		void >
	(get_jobject(), a0);
}

void android::database::Cursor::registerDataSetObserver(local_ref< android::database::DataSetObserver > const &a0)
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(32),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(32), 
		void >
	(get_jobject(), a0);
}

void android::database::Cursor::unregisterDataSetObserver(local_ref< android::database::DataSetObserver > const &a0)
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(33),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(33), 
		void >
	(get_jobject(), a0);
}

void android::database::Cursor::setNotificationUri(local_ref< android::content::ContentResolver > const &a0, local_ref< android::net::Uri > const &a1)
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(34),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(34), 
		void >
	(get_jobject(), a0, a1);
}

jboolean android::database::Cursor::getWantsAllOnMoveCalls()
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(35),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(35), 
		jboolean >
	(get_jobject());
}

local_ref< android::os::Bundle > android::database::Cursor::getExtras()
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(36),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(36), 
		local_ref< android::os::Bundle > >
	(get_jobject());
}

local_ref< android::os::Bundle > android::database::Cursor::respond(local_ref< android::os::Bundle > const &a0)
{
	return call_method<
		android::database::Cursor::J2CPP_CLASS_NAME,
		android::database::Cursor::J2CPP_METHOD_NAME(37),
		android::database::Cursor::J2CPP_METHOD_SIGNATURE(37), 
		local_ref< android::os::Bundle > >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::database::Cursor,"android/database/Cursor")
J2CPP_DEFINE_METHOD(android::database::Cursor,0,"getCount","()I")
J2CPP_DEFINE_METHOD(android::database::Cursor,1,"getPosition","()I")
J2CPP_DEFINE_METHOD(android::database::Cursor,2,"move","(I)Z")
J2CPP_DEFINE_METHOD(android::database::Cursor,3,"moveToPosition","(I)Z")
J2CPP_DEFINE_METHOD(android::database::Cursor,4,"moveToFirst","()Z")
J2CPP_DEFINE_METHOD(android::database::Cursor,5,"moveToLast","()Z")
J2CPP_DEFINE_METHOD(android::database::Cursor,6,"moveToNext","()Z")
J2CPP_DEFINE_METHOD(android::database::Cursor,7,"moveToPrevious","()Z")
J2CPP_DEFINE_METHOD(android::database::Cursor,8,"isFirst","()Z")
J2CPP_DEFINE_METHOD(android::database::Cursor,9,"isLast","()Z")
J2CPP_DEFINE_METHOD(android::database::Cursor,10,"isBeforeFirst","()Z")
J2CPP_DEFINE_METHOD(android::database::Cursor,11,"isAfterLast","()Z")
J2CPP_DEFINE_METHOD(android::database::Cursor,12,"getColumnIndex","(Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(android::database::Cursor,13,"getColumnIndexOrThrow","(Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(android::database::Cursor,14,"getColumnName","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::database::Cursor,15,"getColumnNames","()[java.lang.String")
J2CPP_DEFINE_METHOD(android::database::Cursor,16,"getColumnCount","()I")
J2CPP_DEFINE_METHOD(android::database::Cursor,17,"getBlob","(I)[B")
J2CPP_DEFINE_METHOD(android::database::Cursor,18,"getString","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::database::Cursor,19,"copyStringToBuffer","(ILandroid/database/CharArrayBuffer;)V")
J2CPP_DEFINE_METHOD(android::database::Cursor,20,"getShort","(I)S")
J2CPP_DEFINE_METHOD(android::database::Cursor,21,"getInt","(I)I")
J2CPP_DEFINE_METHOD(android::database::Cursor,22,"getLong","(I)J")
J2CPP_DEFINE_METHOD(android::database::Cursor,23,"getFloat","(I)F")
J2CPP_DEFINE_METHOD(android::database::Cursor,24,"getDouble","(I)D")
J2CPP_DEFINE_METHOD(android::database::Cursor,25,"isNull","(I)Z")
J2CPP_DEFINE_METHOD(android::database::Cursor,26,"deactivate","()V")
J2CPP_DEFINE_METHOD(android::database::Cursor,27,"requery","()Z")
J2CPP_DEFINE_METHOD(android::database::Cursor,28,"close","()V")
J2CPP_DEFINE_METHOD(android::database::Cursor,29,"isClosed","()Z")
J2CPP_DEFINE_METHOD(android::database::Cursor,30,"registerContentObserver","(Landroid/database/ContentObserver;)V")
J2CPP_DEFINE_METHOD(android::database::Cursor,31,"unregisterContentObserver","(Landroid/database/ContentObserver;)V")
J2CPP_DEFINE_METHOD(android::database::Cursor,32,"registerDataSetObserver","(Landroid/database/DataSetObserver;)V")
J2CPP_DEFINE_METHOD(android::database::Cursor,33,"unregisterDataSetObserver","(Landroid/database/DataSetObserver;)V")
J2CPP_DEFINE_METHOD(android::database::Cursor,34,"setNotificationUri","(Landroid/content/ContentResolver;Landroid/net/Uri;)V")
J2CPP_DEFINE_METHOD(android::database::Cursor,35,"getWantsAllOnMoveCalls","()Z")
J2CPP_DEFINE_METHOD(android::database::Cursor,36,"getExtras","()Landroid/os/Bundle;")
J2CPP_DEFINE_METHOD(android::database::Cursor,37,"respond","(Landroid/os/Bundle;)Landroid/os/Bundle;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_CURSOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
