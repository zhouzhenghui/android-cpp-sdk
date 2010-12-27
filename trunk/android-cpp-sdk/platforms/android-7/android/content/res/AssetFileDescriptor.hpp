/*================================================================================
  code generated by: java2cpp
  class: android.content.res.AssetFileDescriptor
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_RES_ASSETFILEDESCRIPTOR_HPP_DECL
#define J2CPP_ANDROID_CONTENT_RES_ASSETFILEDESCRIPTOR_HPP_DECL


namespace j2cpp { namespace java { namespace io { class FileOutputStream; } } }
namespace j2cpp { namespace java { namespace io { class FileDescriptor; } } }
namespace j2cpp { namespace java { namespace io { class FileInputStream; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class ParcelFileDescriptor; } } }
namespace j2cpp { namespace android { namespace os { namespace ParcelFileDescriptor_ { class AutoCloseInputStream; } } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }
namespace j2cpp { namespace android { namespace os { namespace ParcelFileDescriptor_ { class AutoCloseOutputStream; } } } }


#include <android/os/Parcel.hpp>
#include <android/os/ParcelFileDescriptor.hpp>
#include <android/os/Parcelable.hpp>
#include <java/io/FileDescriptor.hpp>
#include <java/io/FileInputStream.hpp>
#include <java/io/FileOutputStream.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace content { namespace res {

	class AssetFileDescriptor;
	namespace AssetFileDescriptor_ {

		class AutoCloseInputStream;
		class AutoCloseInputStream
			: public cpp_object<AutoCloseInputStream>
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

			explicit AutoCloseInputStream(jobject jobj)
			: cpp_object<AutoCloseInputStream>(jobj)
			{
			}

			operator local_ref<android::os::ParcelFileDescriptor_::AutoCloseInputStream>() const;


			AutoCloseInputStream(local_ref< android::content::res::AssetFileDescriptor > const&);
			cpp_int available();
			cpp_int read();
			cpp_int read(local_ref< cpp_byte_array<1> > const&, cpp_int const&, cpp_int const&);
			cpp_int read(local_ref< cpp_byte_array<1> > const&);
			cpp_long skip(cpp_long const&);
			void mark(cpp_int const&);
			cpp_boolean markSupported();
			void reset();
		}; //class AutoCloseInputStream

		class AutoCloseOutputStream;
		class AutoCloseOutputStream
			: public cpp_object<AutoCloseOutputStream>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)

			explicit AutoCloseOutputStream(jobject jobj)
			: cpp_object<AutoCloseOutputStream>(jobj)
			{
			}

			operator local_ref<android::os::ParcelFileDescriptor_::AutoCloseOutputStream>() const;


			AutoCloseOutputStream(local_ref< android::content::res::AssetFileDescriptor > const&);
			void write(local_ref< cpp_byte_array<1> > const&, cpp_int const&, cpp_int const&);
			void write(local_ref< cpp_byte_array<1> > const&);
			void write(cpp_int const&);
		}; //class AutoCloseOutputStream

	} //namespace AssetFileDescriptor_

	class AssetFileDescriptor
		: public cpp_object<AssetFileDescriptor>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		typedef AssetFileDescriptor_::AutoCloseInputStream AutoCloseInputStream;
		typedef AssetFileDescriptor_::AutoCloseOutputStream AutoCloseOutputStream;

		explicit AssetFileDescriptor(jobject jobj)
		: cpp_object<AssetFileDescriptor>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::os::Parcelable>() const;


		AssetFileDescriptor(local_ref< android::os::ParcelFileDescriptor > const&, cpp_long const&, cpp_long const&);
		local_ref< android::os::ParcelFileDescriptor > getParcelFileDescriptor();
		local_ref< java::io::FileDescriptor > getFileDescriptor();
		cpp_long getStartOffset();
		cpp_long getLength();
		cpp_long getDeclaredLength();
		void close();
		local_ref< java::io::FileInputStream > createInputStream();
		local_ref< java::io::FileOutputStream > createOutputStream();
		local_ref< java::lang::String > toString();
		cpp_int describeContents();
		void writeToParcel(local_ref< android::os::Parcel > const&, cpp_int const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_long > UNKNOWN_LENGTH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class AssetFileDescriptor

} //namespace res
} //namespace content
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_RES_ASSETFILEDESCRIPTOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_RES_ASSETFILEDESCRIPTOR_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_RES_ASSETFILEDESCRIPTOR_HPP_IMPL

namespace j2cpp {




android::content::res::AssetFileDescriptor_::AutoCloseInputStream::operator local_ref<android::os::ParcelFileDescriptor_::AutoCloseInputStream>() const
{
	return local_ref<android::os::ParcelFileDescriptor_::AutoCloseInputStream>(get_jtype());
}


android::content::res::AssetFileDescriptor_::AutoCloseInputStream::AutoCloseInputStream(local_ref< android::content::res::AssetFileDescriptor > const &a0)
: cpp_object<android::content::res::AssetFileDescriptor_::AutoCloseInputStream>(
	environment::get().get_jenv()->NewObject(
		get_class<android::content::res::AssetFileDescriptor_::AutoCloseInputStream::J2CPP_CLASS_NAME>(),
		get_method_id<android::content::res::AssetFileDescriptor_::AutoCloseInputStream::J2CPP_CLASS_NAME, android::content::res::AssetFileDescriptor_::AutoCloseInputStream::J2CPP_METHOD_NAME(0), android::content::res::AssetFileDescriptor_::AutoCloseInputStream::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}


cpp_int android::content::res::AssetFileDescriptor_::AutoCloseInputStream::available()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_int android::content::res::AssetFileDescriptor_::AutoCloseInputStream::read()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_int android::content::res::AssetFileDescriptor_::AutoCloseInputStream::read(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_int android::content::res::AssetFileDescriptor_::AutoCloseInputStream::read(local_ref< cpp_byte_array<1> > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

cpp_long android::content::res::AssetFileDescriptor_::AutoCloseInputStream::skip(cpp_long const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

void android::content::res::AssetFileDescriptor_::AutoCloseInputStream::mark(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::content::res::AssetFileDescriptor_::AutoCloseInputStream::markSupported()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

void android::content::res::AssetFileDescriptor_::AutoCloseInputStream::reset()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::content::res::AssetFileDescriptor_::AutoCloseInputStream,"android/content/res/AssetFileDescriptor$AutoCloseInputStream")
J2CPP_DEFINE_METHOD(android::content::res::AssetFileDescriptor_::AutoCloseInputStream,0,"<init>","(Landroid/content/res/AssetFileDescriptor;)V")
J2CPP_DEFINE_METHOD(android::content::res::AssetFileDescriptor_::AutoCloseInputStream,1,"available","()I")
J2CPP_DEFINE_METHOD(android::content::res::AssetFileDescriptor_::AutoCloseInputStream,2,"read","()I")
J2CPP_DEFINE_METHOD(android::content::res::AssetFileDescriptor_::AutoCloseInputStream,3,"read","([BII)I")
J2CPP_DEFINE_METHOD(android::content::res::AssetFileDescriptor_::AutoCloseInputStream,4,"read","([B)I")
J2CPP_DEFINE_METHOD(android::content::res::AssetFileDescriptor_::AutoCloseInputStream,5,"skip","(J)J")
J2CPP_DEFINE_METHOD(android::content::res::AssetFileDescriptor_::AutoCloseInputStream,6,"mark","(I)V")
J2CPP_DEFINE_METHOD(android::content::res::AssetFileDescriptor_::AutoCloseInputStream,7,"markSupported","()Z")
J2CPP_DEFINE_METHOD(android::content::res::AssetFileDescriptor_::AutoCloseInputStream,8,"reset","()V")


android::content::res::AssetFileDescriptor_::AutoCloseOutputStream::operator local_ref<android::os::ParcelFileDescriptor_::AutoCloseOutputStream>() const
{
	return local_ref<android::os::ParcelFileDescriptor_::AutoCloseOutputStream>(get_jtype());
}


android::content::res::AssetFileDescriptor_::AutoCloseOutputStream::AutoCloseOutputStream(local_ref< android::content::res::AssetFileDescriptor > const &a0)
: cpp_object<android::content::res::AssetFileDescriptor_::AutoCloseOutputStream>(
	environment::get().get_jenv()->NewObject(
		get_class<android::content::res::AssetFileDescriptor_::AutoCloseOutputStream::J2CPP_CLASS_NAME>(),
		get_method_id<android::content::res::AssetFileDescriptor_::AutoCloseOutputStream::J2CPP_CLASS_NAME, android::content::res::AssetFileDescriptor_::AutoCloseOutputStream::J2CPP_METHOD_NAME(0), android::content::res::AssetFileDescriptor_::AutoCloseOutputStream::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}


void android::content::res::AssetFileDescriptor_::AutoCloseOutputStream::write(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::content::res::AssetFileDescriptor_::AutoCloseOutputStream::write(local_ref< cpp_byte_array<1> > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

void android::content::res::AssetFileDescriptor_::AutoCloseOutputStream::write(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::content::res::AssetFileDescriptor_::AutoCloseOutputStream,"android/content/res/AssetFileDescriptor$AutoCloseOutputStream")
J2CPP_DEFINE_METHOD(android::content::res::AssetFileDescriptor_::AutoCloseOutputStream,0,"<init>","(Landroid/content/res/AssetFileDescriptor;)V")
J2CPP_DEFINE_METHOD(android::content::res::AssetFileDescriptor_::AutoCloseOutputStream,1,"write","([BII)V")
J2CPP_DEFINE_METHOD(android::content::res::AssetFileDescriptor_::AutoCloseOutputStream,2,"write","([B)V")
J2CPP_DEFINE_METHOD(android::content::res::AssetFileDescriptor_::AutoCloseOutputStream,3,"write","(I)V")



android::content::res::AssetFileDescriptor::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

android::content::res::AssetFileDescriptor::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jtype());
}


android::content::res::AssetFileDescriptor::AssetFileDescriptor(local_ref< android::os::ParcelFileDescriptor > const &a0, cpp_long const &a1, cpp_long const &a2)
: cpp_object<android::content::res::AssetFileDescriptor>(
	environment::get().get_jenv()->NewObject(
		get_class<android::content::res::AssetFileDescriptor::J2CPP_CLASS_NAME>(),
		get_method_id<android::content::res::AssetFileDescriptor::J2CPP_CLASS_NAME, android::content::res::AssetFileDescriptor::J2CPP_METHOD_NAME(0), android::content::res::AssetFileDescriptor::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
	)
)
{
}


local_ref< android::os::ParcelFileDescriptor > android::content::res::AssetFileDescriptor::getParcelFileDescriptor()
{
	return local_ref< android::os::ParcelFileDescriptor >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::io::FileDescriptor > android::content::res::AssetFileDescriptor::getFileDescriptor()
{
	return local_ref< java::io::FileDescriptor >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_long android::content::res::AssetFileDescriptor::getStartOffset()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_long android::content::res::AssetFileDescriptor::getLength()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_long android::content::res::AssetFileDescriptor::getDeclaredLength()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

void android::content::res::AssetFileDescriptor::close()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< java::io::FileInputStream > android::content::res::AssetFileDescriptor::createInputStream()
{
	return local_ref< java::io::FileInputStream >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

local_ref< java::io::FileOutputStream > android::content::res::AssetFileDescriptor::createOutputStream()
{
	return local_ref< java::io::FileOutputStream >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

local_ref< java::lang::String > android::content::res::AssetFileDescriptor::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

cpp_int android::content::res::AssetFileDescriptor::describeContents()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

void android::content::res::AssetFileDescriptor::writeToParcel(local_ref< android::os::Parcel > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}



static_field<
	android::content::res::AssetFileDescriptor::J2CPP_CLASS_NAME,
	android::content::res::AssetFileDescriptor::J2CPP_FIELD_NAME(0),
	android::content::res::AssetFileDescriptor::J2CPP_FIELD_SIGNATURE(0),
	cpp_long
> android::content::res::AssetFileDescriptor::UNKNOWN_LENGTH;

static_field<
	android::content::res::AssetFileDescriptor::J2CPP_CLASS_NAME,
	android::content::res::AssetFileDescriptor::J2CPP_FIELD_NAME(1),
	android::content::res::AssetFileDescriptor::J2CPP_FIELD_SIGNATURE(1),
	local_ref< android::os::Parcelable_::Creator >
> android::content::res::AssetFileDescriptor::CREATOR;


J2CPP_DEFINE_CLASS(android::content::res::AssetFileDescriptor,"android/content/res/AssetFileDescriptor")
J2CPP_DEFINE_METHOD(android::content::res::AssetFileDescriptor,0,"<init>","(Landroid/os/ParcelFileDescriptor;JJ)V")
J2CPP_DEFINE_METHOD(android::content::res::AssetFileDescriptor,1,"getParcelFileDescriptor","()Landroid/os/ParcelFileDescriptor;")
J2CPP_DEFINE_METHOD(android::content::res::AssetFileDescriptor,2,"getFileDescriptor","()Ljava/io/FileDescriptor;")
J2CPP_DEFINE_METHOD(android::content::res::AssetFileDescriptor,3,"getStartOffset","()J")
J2CPP_DEFINE_METHOD(android::content::res::AssetFileDescriptor,4,"getLength","()J")
J2CPP_DEFINE_METHOD(android::content::res::AssetFileDescriptor,5,"getDeclaredLength","()J")
J2CPP_DEFINE_METHOD(android::content::res::AssetFileDescriptor,6,"close","()V")
J2CPP_DEFINE_METHOD(android::content::res::AssetFileDescriptor,7,"createInputStream","()Ljava/io/FileInputStream;")
J2CPP_DEFINE_METHOD(android::content::res::AssetFileDescriptor,8,"createOutputStream","()Ljava/io/FileOutputStream;")
J2CPP_DEFINE_METHOD(android::content::res::AssetFileDescriptor,9,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::res::AssetFileDescriptor,10,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::content::res::AssetFileDescriptor,11,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::content::res::AssetFileDescriptor,12,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::content::res::AssetFileDescriptor,0,"UNKNOWN_LENGTH","J")
J2CPP_DEFINE_FIELD(android::content::res::AssetFileDescriptor,1,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_RES_ASSETFILEDESCRIPTOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
