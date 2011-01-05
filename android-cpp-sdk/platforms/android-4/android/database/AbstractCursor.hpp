/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.database.AbstractCursor
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_ABSTRACTCURSOR_HPP_DECL
#define J2CPP_ANDROID_DATABASE_ABSTRACTCURSOR_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Bundle; } } }
namespace j2cpp { namespace android { namespace database { class CrossProcessCursor; } } }
namespace j2cpp { namespace android { namespace database { class CursorWindow; } } }
namespace j2cpp { namespace android { namespace database { class DataSetObserver; } } }
namespace j2cpp { namespace android { namespace database { class Cursor; } } }
namespace j2cpp { namespace android { namespace database { class ContentObserver; } } }
namespace j2cpp { namespace android { namespace database { class CharArrayBuffer; } } }
namespace j2cpp { namespace android { namespace net { class Uri; } } }
namespace j2cpp { namespace android { namespace content { class ContentResolver; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/ContentResolver.hpp>
#include <android/database/CharArrayBuffer.hpp>
#include <android/database/ContentObserver.hpp>
#include <android/database/CrossProcessCursor.hpp>
#include <android/database/Cursor.hpp>
#include <android/database/CursorWindow.hpp>
#include <android/database/DataSetObserver.hpp>
#include <android/net/Uri.hpp>
#include <android/os/Bundle.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace database {

	class AbstractCursor;
	namespace AbstractCursor_ {

		class SelfContentObserver;
		class SelfContentObserver
			: public object<SelfContentObserver>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)

			explicit SelfContentObserver(jobject jobj)
			: object<SelfContentObserver>(jobj)
			{
			}

			operator local_ref<android::database::ContentObserver>() const;
			operator local_ref<java::lang::Object>() const;


			SelfContentObserver(local_ref< android::database::AbstractCursor > const&);
			jboolean deliverSelfNotifications();
			void onChange(jboolean);
		}; //class SelfContentObserver

	} //namespace AbstractCursor_

	class AbstractCursor
		: public object<AbstractCursor>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)

		typedef AbstractCursor_::SelfContentObserver SelfContentObserver;

		explicit AbstractCursor(jobject jobj)
		: object<AbstractCursor>(jobj)
		{
		}

		operator local_ref<android::database::CrossProcessCursor>() const;
		operator local_ref<android::database::Cursor>() const;
		operator local_ref<java::lang::Object>() const;


		AbstractCursor();
		jint getCount();
		local_ref< array< local_ref< java::lang::String >, 1> > getColumnNames();
		local_ref< java::lang::String > getString(jint);
		jshort getShort(jint);
		jint getInt(jint);
		jlong getLong(jint);
		jfloat getFloat(jint);
		jdouble getDouble(jint);
		jboolean isNull(jint);
		local_ref< array<jbyte,1> > getBlob(jint);
		local_ref< android::database::CursorWindow > getWindow();
		jint getColumnCount();
		void deactivate();
		jboolean requery();
		jboolean isClosed();
		void close();
		jboolean onMove(jint, jint);
		void copyStringToBuffer(jint, local_ref< android::database::CharArrayBuffer >  const&);
		jint getPosition();
		jboolean moveToPosition(jint);
		void fillWindow(jint, local_ref< android::database::CursorWindow >  const&);
		jboolean move(jint);
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
		void registerContentObserver(local_ref< android::database::ContentObserver >  const&);
		void unregisterContentObserver(local_ref< android::database::ContentObserver >  const&);
		void registerDataSetObserver(local_ref< android::database::DataSetObserver >  const&);
		void unregisterDataSetObserver(local_ref< android::database::DataSetObserver >  const&);
		void setNotificationUri(local_ref< android::content::ContentResolver >  const&, local_ref< android::net::Uri >  const&);
		jboolean getWantsAllOnMoveCalls();
		local_ref< android::os::Bundle > getExtras();
		local_ref< android::os::Bundle > respond(local_ref< android::os::Bundle >  const&);

	}; //class AbstractCursor

} //namespace database
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_ABSTRACTCURSOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_ABSTRACTCURSOR_HPP_IMPL
#define J2CPP_ANDROID_DATABASE_ABSTRACTCURSOR_HPP_IMPL

namespace j2cpp {




android::database::AbstractCursor_::SelfContentObserver::operator local_ref<android::database::ContentObserver>() const
{
	return local_ref<android::database::ContentObserver>(get_jobject());
}

android::database::AbstractCursor_::SelfContentObserver::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::database::AbstractCursor_::SelfContentObserver::SelfContentObserver(local_ref< android::database::AbstractCursor > const &a0)
: object<android::database::AbstractCursor_::SelfContentObserver>(
	call_new_object<
		android::database::AbstractCursor_::SelfContentObserver::J2CPP_CLASS_NAME,
		android::database::AbstractCursor_::SelfContentObserver::J2CPP_METHOD_NAME(0),
		android::database::AbstractCursor_::SelfContentObserver::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


jboolean android::database::AbstractCursor_::SelfContentObserver::deliverSelfNotifications()
{
	return call_method<
		android::database::AbstractCursor_::SelfContentObserver::J2CPP_CLASS_NAME,
		android::database::AbstractCursor_::SelfContentObserver::J2CPP_METHOD_NAME(1),
		android::database::AbstractCursor_::SelfContentObserver::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(get_jobject());
}

void android::database::AbstractCursor_::SelfContentObserver::onChange(jboolean a0)
{
	return call_method<
		android::database::AbstractCursor_::SelfContentObserver::J2CPP_CLASS_NAME,
		android::database::AbstractCursor_::SelfContentObserver::J2CPP_METHOD_NAME(2),
		android::database::AbstractCursor_::SelfContentObserver::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::database::AbstractCursor_::SelfContentObserver,"android/database/AbstractCursor$SelfContentObserver")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor_::SelfContentObserver,0,"<init>","(Landroid/database/AbstractCursor;)V")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor_::SelfContentObserver,1,"deliverSelfNotifications","()Z")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor_::SelfContentObserver,2,"onChange","(Z)V")



android::database::AbstractCursor::operator local_ref<android::database::CrossProcessCursor>() const
{
	return local_ref<android::database::CrossProcessCursor>(get_jobject());
}

android::database::AbstractCursor::operator local_ref<android::database::Cursor>() const
{
	return local_ref<android::database::Cursor>(get_jobject());
}

android::database::AbstractCursor::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::database::AbstractCursor::AbstractCursor()
: object<android::database::AbstractCursor>(
	call_new_object<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(0),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


jint android::database::AbstractCursor::getCount()
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(1),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(1), 
		jint
	>(get_jobject());
}

local_ref< array< local_ref< java::lang::String >, 1> > android::database::AbstractCursor::getColumnNames()
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(2),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< array< local_ref< java::lang::String >, 1> >
	>(get_jobject());
}

local_ref< java::lang::String > android::database::AbstractCursor::getString(jint a0)
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(3),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

jshort android::database::AbstractCursor::getShort(jint a0)
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(4),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(4), 
		jshort
	>(get_jobject(), a0);
}

jint android::database::AbstractCursor::getInt(jint a0)
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(5),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject(), a0);
}

jlong android::database::AbstractCursor::getLong(jint a0)
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(6),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(6), 
		jlong
	>(get_jobject(), a0);
}

jfloat android::database::AbstractCursor::getFloat(jint a0)
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(7),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(7), 
		jfloat
	>(get_jobject(), a0);
}

jdouble android::database::AbstractCursor::getDouble(jint a0)
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(8),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(8), 
		jdouble
	>(get_jobject(), a0);
}

jboolean android::database::AbstractCursor::isNull(jint a0)
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(9),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(9), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< array<jbyte,1> > android::database::AbstractCursor::getBlob(jint a0)
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(10),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< array<jbyte,1> >
	>(get_jobject(), a0);
}

local_ref< android::database::CursorWindow > android::database::AbstractCursor::getWindow()
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(11),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< android::database::CursorWindow >
	>(get_jobject());
}

jint android::database::AbstractCursor::getColumnCount()
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(12),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(12), 
		jint
	>(get_jobject());
}

void android::database::AbstractCursor::deactivate()
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(13),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(get_jobject());
}

jboolean android::database::AbstractCursor::requery()
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(14),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(14), 
		jboolean
	>(get_jobject());
}

jboolean android::database::AbstractCursor::isClosed()
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(15),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(15), 
		jboolean
	>(get_jobject());
}

void android::database::AbstractCursor::close()
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(16),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(16), 
		void
	>(get_jobject());
}

jboolean android::database::AbstractCursor::onMove(jint a0, jint a1)
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(17),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(17), 
		jboolean
	>(get_jobject(), a0, a1);
}

void android::database::AbstractCursor::copyStringToBuffer(jint a0, local_ref< android::database::CharArrayBuffer > const &a1)
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(18),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(18), 
		void
	>(get_jobject(), a0, a1);
}

jint android::database::AbstractCursor::getPosition()
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(19),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(19), 
		jint
	>(get_jobject());
}

jboolean android::database::AbstractCursor::moveToPosition(jint a0)
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(20),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(20), 
		jboolean
	>(get_jobject(), a0);
}

void android::database::AbstractCursor::fillWindow(jint a0, local_ref< android::database::CursorWindow > const &a1)
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(21),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(21), 
		void
	>(get_jobject(), a0, a1);
}

jboolean android::database::AbstractCursor::move(jint a0)
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(22),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(22), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::database::AbstractCursor::moveToFirst()
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(23),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(23), 
		jboolean
	>(get_jobject());
}

jboolean android::database::AbstractCursor::moveToLast()
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(24),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(24), 
		jboolean
	>(get_jobject());
}

jboolean android::database::AbstractCursor::moveToNext()
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(25),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(25), 
		jboolean
	>(get_jobject());
}

jboolean android::database::AbstractCursor::moveToPrevious()
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(26),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(26), 
		jboolean
	>(get_jobject());
}

jboolean android::database::AbstractCursor::isFirst()
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(27),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(27), 
		jboolean
	>(get_jobject());
}

jboolean android::database::AbstractCursor::isLast()
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(28),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(28), 
		jboolean
	>(get_jobject());
}

jboolean android::database::AbstractCursor::isBeforeFirst()
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(29),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(29), 
		jboolean
	>(get_jobject());
}

jboolean android::database::AbstractCursor::isAfterLast()
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(30),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(30), 
		jboolean
	>(get_jobject());
}

jint android::database::AbstractCursor::getColumnIndex(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(31),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(31), 
		jint
	>(get_jobject(), a0);
}

jint android::database::AbstractCursor::getColumnIndexOrThrow(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(32),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(32), 
		jint
	>(get_jobject(), a0);
}

local_ref< java::lang::String > android::database::AbstractCursor::getColumnName(jint a0)
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(33),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(33), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

void android::database::AbstractCursor::registerContentObserver(local_ref< android::database::ContentObserver > const &a0)
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(34),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(34), 
		void
	>(get_jobject(), a0);
}

void android::database::AbstractCursor::unregisterContentObserver(local_ref< android::database::ContentObserver > const &a0)
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(35),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(35), 
		void
	>(get_jobject(), a0);
}

void android::database::AbstractCursor::registerDataSetObserver(local_ref< android::database::DataSetObserver > const &a0)
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(36),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(36), 
		void
	>(get_jobject(), a0);
}

void android::database::AbstractCursor::unregisterDataSetObserver(local_ref< android::database::DataSetObserver > const &a0)
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(37),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(37), 
		void
	>(get_jobject(), a0);
}


void android::database::AbstractCursor::setNotificationUri(local_ref< android::content::ContentResolver > const &a0, local_ref< android::net::Uri > const &a1)
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(39),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(39), 
		void
	>(get_jobject(), a0, a1);
}

jboolean android::database::AbstractCursor::getWantsAllOnMoveCalls()
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(40),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(40), 
		jboolean
	>(get_jobject());
}

local_ref< android::os::Bundle > android::database::AbstractCursor::getExtras()
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(41),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(41), 
		local_ref< android::os::Bundle >
	>(get_jobject());
}

local_ref< android::os::Bundle > android::database::AbstractCursor::respond(local_ref< android::os::Bundle > const &a0)
{
	return call_method<
		android::database::AbstractCursor::J2CPP_CLASS_NAME,
		android::database::AbstractCursor::J2CPP_METHOD_NAME(42),
		android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(42), 
		local_ref< android::os::Bundle >
	>(get_jobject(), a0);
}







J2CPP_DEFINE_CLASS(android::database::AbstractCursor,"android/database/AbstractCursor")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,1,"getCount","()I")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,2,"getColumnNames","()[java.lang.String")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,3,"getString","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,4,"getShort","(I)S")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,5,"getInt","(I)I")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,6,"getLong","(I)J")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,7,"getFloat","(I)F")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,8,"getDouble","(I)D")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,9,"isNull","(I)Z")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,10,"getBlob","(I)[B")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,11,"getWindow","()Landroid/database/CursorWindow;")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,12,"getColumnCount","()I")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,13,"deactivate","()V")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,14,"requery","()Z")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,15,"isClosed","()Z")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,16,"close","()V")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,17,"onMove","(II)Z")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,18,"copyStringToBuffer","(ILandroid/database/CharArrayBuffer;)V")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,19,"getPosition","()I")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,20,"moveToPosition","(I)Z")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,21,"fillWindow","(ILandroid/database/CursorWindow;)V")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,22,"move","(I)Z")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,23,"moveToFirst","()Z")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,24,"moveToLast","()Z")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,25,"moveToNext","()Z")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,26,"moveToPrevious","()Z")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,27,"isFirst","()Z")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,28,"isLast","()Z")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,29,"isBeforeFirst","()Z")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,30,"isAfterLast","()Z")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,31,"getColumnIndex","(Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,32,"getColumnIndexOrThrow","(Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,33,"getColumnName","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,34,"registerContentObserver","(Landroid/database/ContentObserver;)V")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,35,"unregisterContentObserver","(Landroid/database/ContentObserver;)V")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,36,"registerDataSetObserver","(Landroid/database/DataSetObserver;)V")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,37,"unregisterDataSetObserver","(Landroid/database/DataSetObserver;)V")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,38,"onChange","(Z)V")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,39,"setNotificationUri","(Landroid/content/ContentResolver;Landroid/net/Uri;)V")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,40,"getWantsAllOnMoveCalls","()Z")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,41,"getExtras","()Landroid/os/Bundle;")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,42,"respond","(Landroid/os/Bundle;)Landroid/os/Bundle;")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,43,"isFieldUpdated","(I)Z")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,44,"getUpdatedField","(I)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,45,"checkPosition","()V")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,46,"finalize","()V")
J2CPP_DEFINE_FIELD(android::database::AbstractCursor,0,"mUpdatedRows","Ljava/util/HashMap;")
J2CPP_DEFINE_FIELD(android::database::AbstractCursor,1,"mRowIdColumnIndex","I")
J2CPP_DEFINE_FIELD(android::database::AbstractCursor,2,"mPos","I")
J2CPP_DEFINE_FIELD(android::database::AbstractCursor,3,"mCurrentRowID","Ljava/lang/Long;")
J2CPP_DEFINE_FIELD(android::database::AbstractCursor,4,"mContentResolver","Landroid/content/ContentResolver;")
J2CPP_DEFINE_FIELD(android::database::AbstractCursor,5,"mClosed","Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_ABSTRACTCURSOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
