/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.nio.channels.FileChannel
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_FILECHANNEL_HPP_DECL
#define J2CPP_JAVA_NIO_CHANNELS_FILECHANNEL_HPP_DECL


namespace j2cpp { namespace java { namespace nio { class ByteBuffer; } } }
namespace j2cpp { namespace java { namespace nio { class MappedByteBuffer; } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class GatheringByteChannel; } } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class WritableByteChannel; } } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class ScatteringByteChannel; } } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { namespace FileChannel_ { class MapMode; } } } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class FileLock; } } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class ReadableByteChannel; } } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class ByteChannel; } } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { namespace spi { class AbstractInterruptibleChannel; } } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/nio/ByteBuffer.hpp>
#include <java/nio/MappedByteBuffer.hpp>
#include <java/nio/channels/ByteChannel.hpp>
#include <java/nio/channels/FileChannel.hpp>
#include <java/nio/channels/FileLock.hpp>
#include <java/nio/channels/GatheringByteChannel.hpp>
#include <java/nio/channels/ReadableByteChannel.hpp>
#include <java/nio/channels/ScatteringByteChannel.hpp>
#include <java/nio/channels/WritableByteChannel.hpp>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.hpp>


namespace j2cpp {

namespace java { namespace nio { namespace channels {

	class FileChannel;
	namespace FileChannel_ {

		class MapMode;
		class MapMode
			: public object<MapMode>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)

			explicit MapMode(jobject jobj)
			: object<MapMode>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			local_ref< java::lang::String > toString();

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::nio::channels::FileChannel_::MapMode > > PRIVATE;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::nio::channels::FileChannel_::MapMode > > READ_ONLY;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::nio::channels::FileChannel_::MapMode > > READ_WRITE;
		}; //class MapMode

	} //namespace FileChannel_

	class FileChannel
		: public object<FileChannel>
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

		typedef FileChannel_::MapMode MapMode;

		explicit FileChannel(jobject jobj)
		: object<FileChannel>(jobj)
		{
		}

		operator local_ref<java::nio::channels::spi::AbstractInterruptibleChannel>() const;
		operator local_ref<java::nio::channels::GatheringByteChannel>() const;
		operator local_ref<java::nio::channels::ScatteringByteChannel>() const;
		operator local_ref<java::nio::channels::ByteChannel>() const;


		void force(jboolean);
		local_ref< java::nio::channels::FileLock > lock();
		local_ref< java::nio::channels::FileLock > lock(jlong, jlong, jboolean);
		local_ref< java::nio::MappedByteBuffer > map(local_ref< java::nio::channels::FileChannel_::MapMode >  const&, jlong, jlong);
		jlong position();
		local_ref< java::nio::channels::FileChannel > position(jlong);
		jint read(local_ref< java::nio::ByteBuffer >  const&);
		jint read(local_ref< java::nio::ByteBuffer >  const&, jlong);
		jlong read(local_ref< array< local_ref< java::nio::ByteBuffer >, 1> >  const&);
		jlong read(local_ref< array< local_ref< java::nio::ByteBuffer >, 1> >  const&, jint, jint);
		jlong size();
		jlong transferFrom(local_ref< java::nio::channels::ReadableByteChannel >  const&, jlong, jlong);
		jlong transferTo(jlong, jlong, local_ref< java::nio::channels::WritableByteChannel >  const&);
		local_ref< java::nio::channels::FileChannel > truncate(jlong);
		local_ref< java::nio::channels::FileLock > tryLock();
		local_ref< java::nio::channels::FileLock > tryLock(jlong, jlong, jboolean);
		jint write(local_ref< java::nio::ByteBuffer >  const&);
		jint write(local_ref< java::nio::ByteBuffer >  const&, jlong);
		jlong write(local_ref< array< local_ref< java::nio::ByteBuffer >, 1> >  const&);
		jlong write(local_ref< array< local_ref< java::nio::ByteBuffer >, 1> >  const&, jint, jint);
	}; //class FileChannel

} //namespace channels
} //namespace nio
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_FILECHANNEL_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_FILECHANNEL_HPP_IMPL
#define J2CPP_JAVA_NIO_CHANNELS_FILECHANNEL_HPP_IMPL

namespace j2cpp {




java::nio::channels::FileChannel_::MapMode::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::lang::String > java::nio::channels::FileChannel_::MapMode::toString()
{
	return call_method<
		java::nio::channels::FileChannel_::MapMode::J2CPP_CLASS_NAME,
		java::nio::channels::FileChannel_::MapMode::J2CPP_METHOD_NAME(1),
		java::nio::channels::FileChannel_::MapMode::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String > >
	(get_jobject());
}



static_field<
	java::nio::channels::FileChannel_::MapMode::J2CPP_CLASS_NAME,
	java::nio::channels::FileChannel_::MapMode::J2CPP_FIELD_NAME(0),
	java::nio::channels::FileChannel_::MapMode::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::nio::channels::FileChannel_::MapMode >
> java::nio::channels::FileChannel_::MapMode::PRIVATE;

static_field<
	java::nio::channels::FileChannel_::MapMode::J2CPP_CLASS_NAME,
	java::nio::channels::FileChannel_::MapMode::J2CPP_FIELD_NAME(1),
	java::nio::channels::FileChannel_::MapMode::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::nio::channels::FileChannel_::MapMode >
> java::nio::channels::FileChannel_::MapMode::READ_ONLY;

static_field<
	java::nio::channels::FileChannel_::MapMode::J2CPP_CLASS_NAME,
	java::nio::channels::FileChannel_::MapMode::J2CPP_FIELD_NAME(2),
	java::nio::channels::FileChannel_::MapMode::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::nio::channels::FileChannel_::MapMode >
> java::nio::channels::FileChannel_::MapMode::READ_WRITE;


J2CPP_DEFINE_CLASS(java::nio::channels::FileChannel_::MapMode,"java/nio/channels/FileChannel$MapMode")
J2CPP_DEFINE_METHOD(java::nio::channels::FileChannel_::MapMode,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::nio::channels::FileChannel_::MapMode,1,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::nio::channels::FileChannel_::MapMode,2,"<clinit>","()V")
J2CPP_DEFINE_FIELD(java::nio::channels::FileChannel_::MapMode,0,"PRIVATE","Ljava/nio/channels/FileChannel$MapMode;")
J2CPP_DEFINE_FIELD(java::nio::channels::FileChannel_::MapMode,1,"READ_ONLY","Ljava/nio/channels/FileChannel$MapMode;")
J2CPP_DEFINE_FIELD(java::nio::channels::FileChannel_::MapMode,2,"READ_WRITE","Ljava/nio/channels/FileChannel$MapMode;")



java::nio::channels::FileChannel::operator local_ref<java::nio::channels::spi::AbstractInterruptibleChannel>() const
{
	return local_ref<java::nio::channels::spi::AbstractInterruptibleChannel>(get_jobject());
}

java::nio::channels::FileChannel::operator local_ref<java::nio::channels::GatheringByteChannel>() const
{
	return local_ref<java::nio::channels::GatheringByteChannel>(get_jobject());
}

java::nio::channels::FileChannel::operator local_ref<java::nio::channels::ScatteringByteChannel>() const
{
	return local_ref<java::nio::channels::ScatteringByteChannel>(get_jobject());
}

java::nio::channels::FileChannel::operator local_ref<java::nio::channels::ByteChannel>() const
{
	return local_ref<java::nio::channels::ByteChannel>(get_jobject());
}


void java::nio::channels::FileChannel::force(jboolean a0)
{
	return call_method<
		java::nio::channels::FileChannel::J2CPP_CLASS_NAME,
		java::nio::channels::FileChannel::J2CPP_METHOD_NAME(1),
		java::nio::channels::FileChannel::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0);
}

local_ref< java::nio::channels::FileLock > java::nio::channels::FileChannel::lock()
{
	return call_method<
		java::nio::channels::FileChannel::J2CPP_CLASS_NAME,
		java::nio::channels::FileChannel::J2CPP_METHOD_NAME(2),
		java::nio::channels::FileChannel::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::nio::channels::FileLock > >
	(get_jobject());
}

local_ref< java::nio::channels::FileLock > java::nio::channels::FileChannel::lock(jlong a0, jlong a1, jboolean a2)
{
	return call_method<
		java::nio::channels::FileChannel::J2CPP_CLASS_NAME,
		java::nio::channels::FileChannel::J2CPP_METHOD_NAME(3),
		java::nio::channels::FileChannel::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::nio::channels::FileLock > >
	(get_jobject(), a0, a1, a2);
}

local_ref< java::nio::MappedByteBuffer > java::nio::channels::FileChannel::map(local_ref< java::nio::channels::FileChannel_::MapMode > const &a0, jlong a1, jlong a2)
{
	return call_method<
		java::nio::channels::FileChannel::J2CPP_CLASS_NAME,
		java::nio::channels::FileChannel::J2CPP_METHOD_NAME(4),
		java::nio::channels::FileChannel::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::nio::MappedByteBuffer > >
	(get_jobject(), a0, a1, a2);
}

jlong java::nio::channels::FileChannel::position()
{
	return call_method<
		java::nio::channels::FileChannel::J2CPP_CLASS_NAME,
		java::nio::channels::FileChannel::J2CPP_METHOD_NAME(5),
		java::nio::channels::FileChannel::J2CPP_METHOD_SIGNATURE(5), 
		jlong >
	(get_jobject());
}

local_ref< java::nio::channels::FileChannel > java::nio::channels::FileChannel::position(jlong a0)
{
	return call_method<
		java::nio::channels::FileChannel::J2CPP_CLASS_NAME,
		java::nio::channels::FileChannel::J2CPP_METHOD_NAME(6),
		java::nio::channels::FileChannel::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::nio::channels::FileChannel > >
	(get_jobject(), a0);
}

jint java::nio::channels::FileChannel::read(local_ref< java::nio::ByteBuffer > const &a0)
{
	return call_method<
		java::nio::channels::FileChannel::J2CPP_CLASS_NAME,
		java::nio::channels::FileChannel::J2CPP_METHOD_NAME(7),
		java::nio::channels::FileChannel::J2CPP_METHOD_SIGNATURE(7), 
		jint >
	(get_jobject(), a0);
}

jint java::nio::channels::FileChannel::read(local_ref< java::nio::ByteBuffer > const &a0, jlong a1)
{
	return call_method<
		java::nio::channels::FileChannel::J2CPP_CLASS_NAME,
		java::nio::channels::FileChannel::J2CPP_METHOD_NAME(8),
		java::nio::channels::FileChannel::J2CPP_METHOD_SIGNATURE(8), 
		jint >
	(get_jobject(), a0, a1);
}

jlong java::nio::channels::FileChannel::read(local_ref< array< local_ref< java::nio::ByteBuffer >, 1> > const &a0)
{
	return call_method<
		java::nio::channels::FileChannel::J2CPP_CLASS_NAME,
		java::nio::channels::FileChannel::J2CPP_METHOD_NAME(9),
		java::nio::channels::FileChannel::J2CPP_METHOD_SIGNATURE(9), 
		jlong >
	(get_jobject(), a0);
}

jlong java::nio::channels::FileChannel::read(local_ref< array< local_ref< java::nio::ByteBuffer >, 1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::nio::channels::FileChannel::J2CPP_CLASS_NAME,
		java::nio::channels::FileChannel::J2CPP_METHOD_NAME(10),
		java::nio::channels::FileChannel::J2CPP_METHOD_SIGNATURE(10), 
		jlong >
	(get_jobject(), a0, a1, a2);
}

jlong java::nio::channels::FileChannel::size()
{
	return call_method<
		java::nio::channels::FileChannel::J2CPP_CLASS_NAME,
		java::nio::channels::FileChannel::J2CPP_METHOD_NAME(11),
		java::nio::channels::FileChannel::J2CPP_METHOD_SIGNATURE(11), 
		jlong >
	(get_jobject());
}

jlong java::nio::channels::FileChannel::transferFrom(local_ref< java::nio::channels::ReadableByteChannel > const &a0, jlong a1, jlong a2)
{
	return call_method<
		java::nio::channels::FileChannel::J2CPP_CLASS_NAME,
		java::nio::channels::FileChannel::J2CPP_METHOD_NAME(12),
		java::nio::channels::FileChannel::J2CPP_METHOD_SIGNATURE(12), 
		jlong >
	(get_jobject(), a0, a1, a2);
}

jlong java::nio::channels::FileChannel::transferTo(jlong a0, jlong a1, local_ref< java::nio::channels::WritableByteChannel > const &a2)
{
	return call_method<
		java::nio::channels::FileChannel::J2CPP_CLASS_NAME,
		java::nio::channels::FileChannel::J2CPP_METHOD_NAME(13),
		java::nio::channels::FileChannel::J2CPP_METHOD_SIGNATURE(13), 
		jlong >
	(get_jobject(), a0, a1, a2);
}

local_ref< java::nio::channels::FileChannel > java::nio::channels::FileChannel::truncate(jlong a0)
{
	return call_method<
		java::nio::channels::FileChannel::J2CPP_CLASS_NAME,
		java::nio::channels::FileChannel::J2CPP_METHOD_NAME(14),
		java::nio::channels::FileChannel::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< java::nio::channels::FileChannel > >
	(get_jobject(), a0);
}

local_ref< java::nio::channels::FileLock > java::nio::channels::FileChannel::tryLock()
{
	return call_method<
		java::nio::channels::FileChannel::J2CPP_CLASS_NAME,
		java::nio::channels::FileChannel::J2CPP_METHOD_NAME(15),
		java::nio::channels::FileChannel::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< java::nio::channels::FileLock > >
	(get_jobject());
}

local_ref< java::nio::channels::FileLock > java::nio::channels::FileChannel::tryLock(jlong a0, jlong a1, jboolean a2)
{
	return call_method<
		java::nio::channels::FileChannel::J2CPP_CLASS_NAME,
		java::nio::channels::FileChannel::J2CPP_METHOD_NAME(16),
		java::nio::channels::FileChannel::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< java::nio::channels::FileLock > >
	(get_jobject(), a0, a1, a2);
}

jint java::nio::channels::FileChannel::write(local_ref< java::nio::ByteBuffer > const &a0)
{
	return call_method<
		java::nio::channels::FileChannel::J2CPP_CLASS_NAME,
		java::nio::channels::FileChannel::J2CPP_METHOD_NAME(17),
		java::nio::channels::FileChannel::J2CPP_METHOD_SIGNATURE(17), 
		jint >
	(get_jobject(), a0);
}

jint java::nio::channels::FileChannel::write(local_ref< java::nio::ByteBuffer > const &a0, jlong a1)
{
	return call_method<
		java::nio::channels::FileChannel::J2CPP_CLASS_NAME,
		java::nio::channels::FileChannel::J2CPP_METHOD_NAME(18),
		java::nio::channels::FileChannel::J2CPP_METHOD_SIGNATURE(18), 
		jint >
	(get_jobject(), a0, a1);
}

jlong java::nio::channels::FileChannel::write(local_ref< array< local_ref< java::nio::ByteBuffer >, 1> > const &a0)
{
	return call_method<
		java::nio::channels::FileChannel::J2CPP_CLASS_NAME,
		java::nio::channels::FileChannel::J2CPP_METHOD_NAME(19),
		java::nio::channels::FileChannel::J2CPP_METHOD_SIGNATURE(19), 
		jlong >
	(get_jobject(), a0);
}

jlong java::nio::channels::FileChannel::write(local_ref< array< local_ref< java::nio::ByteBuffer >, 1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::nio::channels::FileChannel::J2CPP_CLASS_NAME,
		java::nio::channels::FileChannel::J2CPP_METHOD_NAME(20),
		java::nio::channels::FileChannel::J2CPP_METHOD_SIGNATURE(20), 
		jlong >
	(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(java::nio::channels::FileChannel,"java/nio/channels/FileChannel")
J2CPP_DEFINE_METHOD(java::nio::channels::FileChannel,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::nio::channels::FileChannel,1,"force","(Z)V")
J2CPP_DEFINE_METHOD(java::nio::channels::FileChannel,2,"lock","()Ljava/nio/channels/FileLock;")
J2CPP_DEFINE_METHOD(java::nio::channels::FileChannel,3,"lock","(JJZ)Ljava/nio/channels/FileLock;")
J2CPP_DEFINE_METHOD(java::nio::channels::FileChannel,4,"map","(Ljava/nio/channels/FileChannel$MapMode;JJ)Ljava/nio/MappedByteBuffer;")
J2CPP_DEFINE_METHOD(java::nio::channels::FileChannel,5,"position","()J")
J2CPP_DEFINE_METHOD(java::nio::channels::FileChannel,6,"position","(J)Ljava/nio/channels/FileChannel;")
J2CPP_DEFINE_METHOD(java::nio::channels::FileChannel,7,"read","(Ljava/nio/ByteBuffer;)I")
J2CPP_DEFINE_METHOD(java::nio::channels::FileChannel,8,"read","(Ljava/nio/ByteBuffer;J)I")
J2CPP_DEFINE_METHOD(java::nio::channels::FileChannel,9,"read","([java.nio.ByteBuffer)J")
J2CPP_DEFINE_METHOD(java::nio::channels::FileChannel,10,"read","([java.nio.ByteBufferII)J")
J2CPP_DEFINE_METHOD(java::nio::channels::FileChannel,11,"size","()J")
J2CPP_DEFINE_METHOD(java::nio::channels::FileChannel,12,"transferFrom","(Ljava/nio/channels/ReadableByteChannel;JJ)J")
J2CPP_DEFINE_METHOD(java::nio::channels::FileChannel,13,"transferTo","(JJLjava/nio/channels/WritableByteChannel;)J")
J2CPP_DEFINE_METHOD(java::nio::channels::FileChannel,14,"truncate","(J)Ljava/nio/channels/FileChannel;")
J2CPP_DEFINE_METHOD(java::nio::channels::FileChannel,15,"tryLock","()Ljava/nio/channels/FileLock;")
J2CPP_DEFINE_METHOD(java::nio::channels::FileChannel,16,"tryLock","(JJZ)Ljava/nio/channels/FileLock;")
J2CPP_DEFINE_METHOD(java::nio::channels::FileChannel,17,"write","(Ljava/nio/ByteBuffer;)I")
J2CPP_DEFINE_METHOD(java::nio::channels::FileChannel,18,"write","(Ljava/nio/ByteBuffer;J)I")
J2CPP_DEFINE_METHOD(java::nio::channels::FileChannel,19,"write","([java.nio.ByteBuffer)J")
J2CPP_DEFINE_METHOD(java::nio::channels::FileChannel,20,"write","([java.nio.ByteBufferII)J")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_FILECHANNEL_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
