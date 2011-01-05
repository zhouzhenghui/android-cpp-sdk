/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.nio.channels.Pipe
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_PIPE_HPP_DECL
#define J2CPP_JAVA_NIO_CHANNELS_PIPE_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Closeable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class GatheringByteChannel; } } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class ReadableByteChannel; } } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { namespace spi { class AbstractSelectableChannel; } } } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { namespace spi { class AbstractInterruptibleChannel; } } } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class SelectableChannel; } } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class Channel; } } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class InterruptibleChannel; } } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class WritableByteChannel; } } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { namespace Pipe_ { class SourceChannel; } } } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { namespace Pipe_ { class SinkChannel; } } } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class ScatteringByteChannel; } } } }


#include <java/io/Closeable.hpp>
#include <java/lang/Object.hpp>
#include <java/nio/channels/Channel.hpp>
#include <java/nio/channels/GatheringByteChannel.hpp>
#include <java/nio/channels/InterruptibleChannel.hpp>
#include <java/nio/channels/Pipe.hpp>
#include <java/nio/channels/ReadableByteChannel.hpp>
#include <java/nio/channels/ScatteringByteChannel.hpp>
#include <java/nio/channels/SelectableChannel.hpp>
#include <java/nio/channels/WritableByteChannel.hpp>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.hpp>
#include <java/nio/channels/spi/AbstractSelectableChannel.hpp>


namespace j2cpp {

namespace java { namespace nio { namespace channels {

	class Pipe;
	namespace Pipe_ {

		class SourceChannel;
		class SourceChannel
			: public object<SourceChannel>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)

			explicit SourceChannel(jobject jobj)
			: object<SourceChannel>(jobj)
			{
			}

			operator local_ref<java::io::Closeable>() const;
			operator local_ref<java::lang::Object>() const;
			operator local_ref<java::nio::channels::ReadableByteChannel>() const;
			operator local_ref<java::nio::channels::spi::AbstractSelectableChannel>() const;
			operator local_ref<java::nio::channels::spi::AbstractInterruptibleChannel>() const;
			operator local_ref<java::nio::channels::SelectableChannel>() const;
			operator local_ref<java::nio::channels::Channel>() const;
			operator local_ref<java::nio::channels::InterruptibleChannel>() const;
			operator local_ref<java::nio::channels::ScatteringByteChannel>() const;


			jint validOps();
		}; //class SourceChannel

		class SinkChannel;
		class SinkChannel
			: public object<SinkChannel>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)

			explicit SinkChannel(jobject jobj)
			: object<SinkChannel>(jobj)
			{
			}

			operator local_ref<java::io::Closeable>() const;
			operator local_ref<java::lang::Object>() const;
			operator local_ref<java::nio::channels::GatheringByteChannel>() const;
			operator local_ref<java::nio::channels::spi::AbstractSelectableChannel>() const;
			operator local_ref<java::nio::channels::spi::AbstractInterruptibleChannel>() const;
			operator local_ref<java::nio::channels::SelectableChannel>() const;
			operator local_ref<java::nio::channels::Channel>() const;
			operator local_ref<java::nio::channels::InterruptibleChannel>() const;
			operator local_ref<java::nio::channels::WritableByteChannel>() const;


			jint validOps();
		}; //class SinkChannel

	} //namespace Pipe_

	class Pipe
		: public object<Pipe>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		typedef Pipe_::SourceChannel SourceChannel;
		typedef Pipe_::SinkChannel SinkChannel;

		explicit Pipe(jobject jobj)
		: object<Pipe>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< java::nio::channels::Pipe > open();
		local_ref< java::nio::channels::Pipe_::SinkChannel > sink();
		local_ref< java::nio::channels::Pipe_::SourceChannel > source();
	}; //class Pipe

} //namespace channels
} //namespace nio
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_PIPE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_PIPE_HPP_IMPL
#define J2CPP_JAVA_NIO_CHANNELS_PIPE_HPP_IMPL

namespace j2cpp {




java::nio::channels::Pipe_::SourceChannel::operator local_ref<java::io::Closeable>() const
{
	return local_ref<java::io::Closeable>(get_jobject());
}

java::nio::channels::Pipe_::SourceChannel::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::nio::channels::Pipe_::SourceChannel::operator local_ref<java::nio::channels::ReadableByteChannel>() const
{
	return local_ref<java::nio::channels::ReadableByteChannel>(get_jobject());
}

java::nio::channels::Pipe_::SourceChannel::operator local_ref<java::nio::channels::spi::AbstractSelectableChannel>() const
{
	return local_ref<java::nio::channels::spi::AbstractSelectableChannel>(get_jobject());
}

java::nio::channels::Pipe_::SourceChannel::operator local_ref<java::nio::channels::spi::AbstractInterruptibleChannel>() const
{
	return local_ref<java::nio::channels::spi::AbstractInterruptibleChannel>(get_jobject());
}

java::nio::channels::Pipe_::SourceChannel::operator local_ref<java::nio::channels::SelectableChannel>() const
{
	return local_ref<java::nio::channels::SelectableChannel>(get_jobject());
}

java::nio::channels::Pipe_::SourceChannel::operator local_ref<java::nio::channels::Channel>() const
{
	return local_ref<java::nio::channels::Channel>(get_jobject());
}

java::nio::channels::Pipe_::SourceChannel::operator local_ref<java::nio::channels::InterruptibleChannel>() const
{
	return local_ref<java::nio::channels::InterruptibleChannel>(get_jobject());
}

java::nio::channels::Pipe_::SourceChannel::operator local_ref<java::nio::channels::ScatteringByteChannel>() const
{
	return local_ref<java::nio::channels::ScatteringByteChannel>(get_jobject());
}


jint java::nio::channels::Pipe_::SourceChannel::validOps()
{
	return call_method<
		java::nio::channels::Pipe_::SourceChannel::J2CPP_CLASS_NAME,
		java::nio::channels::Pipe_::SourceChannel::J2CPP_METHOD_NAME(1),
		java::nio::channels::Pipe_::SourceChannel::J2CPP_METHOD_SIGNATURE(1), 
		jint
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::nio::channels::Pipe_::SourceChannel,"java/nio/channels/Pipe$SourceChannel")
J2CPP_DEFINE_METHOD(java::nio::channels::Pipe_::SourceChannel,0,"<init>","(Ljava/nio/channels/spi/SelectorProvider;)V")
J2CPP_DEFINE_METHOD(java::nio::channels::Pipe_::SourceChannel,1,"validOps","()I")


java::nio::channels::Pipe_::SinkChannel::operator local_ref<java::io::Closeable>() const
{
	return local_ref<java::io::Closeable>(get_jobject());
}

java::nio::channels::Pipe_::SinkChannel::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::nio::channels::Pipe_::SinkChannel::operator local_ref<java::nio::channels::GatheringByteChannel>() const
{
	return local_ref<java::nio::channels::GatheringByteChannel>(get_jobject());
}

java::nio::channels::Pipe_::SinkChannel::operator local_ref<java::nio::channels::spi::AbstractSelectableChannel>() const
{
	return local_ref<java::nio::channels::spi::AbstractSelectableChannel>(get_jobject());
}

java::nio::channels::Pipe_::SinkChannel::operator local_ref<java::nio::channels::spi::AbstractInterruptibleChannel>() const
{
	return local_ref<java::nio::channels::spi::AbstractInterruptibleChannel>(get_jobject());
}

java::nio::channels::Pipe_::SinkChannel::operator local_ref<java::nio::channels::SelectableChannel>() const
{
	return local_ref<java::nio::channels::SelectableChannel>(get_jobject());
}

java::nio::channels::Pipe_::SinkChannel::operator local_ref<java::nio::channels::Channel>() const
{
	return local_ref<java::nio::channels::Channel>(get_jobject());
}

java::nio::channels::Pipe_::SinkChannel::operator local_ref<java::nio::channels::InterruptibleChannel>() const
{
	return local_ref<java::nio::channels::InterruptibleChannel>(get_jobject());
}

java::nio::channels::Pipe_::SinkChannel::operator local_ref<java::nio::channels::WritableByteChannel>() const
{
	return local_ref<java::nio::channels::WritableByteChannel>(get_jobject());
}


jint java::nio::channels::Pipe_::SinkChannel::validOps()
{
	return call_method<
		java::nio::channels::Pipe_::SinkChannel::J2CPP_CLASS_NAME,
		java::nio::channels::Pipe_::SinkChannel::J2CPP_METHOD_NAME(1),
		java::nio::channels::Pipe_::SinkChannel::J2CPP_METHOD_SIGNATURE(1), 
		jint
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::nio::channels::Pipe_::SinkChannel,"java/nio/channels/Pipe$SinkChannel")
J2CPP_DEFINE_METHOD(java::nio::channels::Pipe_::SinkChannel,0,"<init>","(Ljava/nio/channels/spi/SelectorProvider;)V")
J2CPP_DEFINE_METHOD(java::nio::channels::Pipe_::SinkChannel,1,"validOps","()I")



java::nio::channels::Pipe::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::nio::channels::Pipe > java::nio::channels::Pipe::open()
{
	return call_static_method<
		java::nio::channels::Pipe::J2CPP_CLASS_NAME,
		java::nio::channels::Pipe::J2CPP_METHOD_NAME(1),
		java::nio::channels::Pipe::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::nio::channels::Pipe >
	>();
}

local_ref< java::nio::channels::Pipe_::SinkChannel > java::nio::channels::Pipe::sink()
{
	return call_method<
		java::nio::channels::Pipe::J2CPP_CLASS_NAME,
		java::nio::channels::Pipe::J2CPP_METHOD_NAME(2),
		java::nio::channels::Pipe::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::nio::channels::Pipe_::SinkChannel >
	>(get_jobject());
}

local_ref< java::nio::channels::Pipe_::SourceChannel > java::nio::channels::Pipe::source()
{
	return call_method<
		java::nio::channels::Pipe::J2CPP_CLASS_NAME,
		java::nio::channels::Pipe::J2CPP_METHOD_NAME(3),
		java::nio::channels::Pipe::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::nio::channels::Pipe_::SourceChannel >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::nio::channels::Pipe,"java/nio/channels/Pipe")
J2CPP_DEFINE_METHOD(java::nio::channels::Pipe,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::nio::channels::Pipe,1,"open","()Ljava/nio/channels/Pipe;")
J2CPP_DEFINE_METHOD(java::nio::channels::Pipe,2,"sink","()Ljava/nio/channels/Pipe$SinkChannel;")
J2CPP_DEFINE_METHOD(java::nio::channels::Pipe,3,"source","()Ljava/nio/channels/Pipe$SourceChannel;")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_PIPE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
