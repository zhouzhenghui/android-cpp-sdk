/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.os.MessageQueue
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_MESSAGEQUEUE_HPP_DECL
#define J2CPP_ANDROID_OS_MESSAGEQUEUE_HPP_DECL


namespace j2cpp { namespace android { namespace os { namespace MessageQueue_ { class IdleHandler; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/os/MessageQueue.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace os {

	class MessageQueue;
	namespace MessageQueue_ {

		class IdleHandler;
		class IdleHandler
			: public object<IdleHandler>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit IdleHandler(jobject jobj)
			: object<IdleHandler>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			jboolean queueIdle();
		}; //class IdleHandler

	} //namespace MessageQueue_

	class MessageQueue
		: public object<MessageQueue>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		typedef MessageQueue_::IdleHandler IdleHandler;

		explicit MessageQueue(jobject jobj)
		: object<MessageQueue>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void addIdleHandler(local_ref< android::os::MessageQueue_::IdleHandler >  const&);
		void removeIdleHandler(local_ref< android::os::MessageQueue_::IdleHandler >  const&);
	}; //class MessageQueue

} //namespace os
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_MESSAGEQUEUE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_MESSAGEQUEUE_HPP_IMPL
#define J2CPP_ANDROID_OS_MESSAGEQUEUE_HPP_IMPL

namespace j2cpp {




android::os::MessageQueue_::IdleHandler::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jboolean android::os::MessageQueue_::IdleHandler::queueIdle()
{
	return call_method<
		android::os::MessageQueue_::IdleHandler::J2CPP_CLASS_NAME,
		android::os::MessageQueue_::IdleHandler::J2CPP_METHOD_NAME(0),
		android::os::MessageQueue_::IdleHandler::J2CPP_METHOD_SIGNATURE(0), 
		jboolean >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::os::MessageQueue_::IdleHandler,"android/os/MessageQueue$IdleHandler")
J2CPP_DEFINE_METHOD(android::os::MessageQueue_::IdleHandler,0,"queueIdle","()Z")



android::os::MessageQueue::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


void android::os::MessageQueue::addIdleHandler(local_ref< android::os::MessageQueue_::IdleHandler > const &a0)
{
	return call_method<
		android::os::MessageQueue::J2CPP_CLASS_NAME,
		android::os::MessageQueue::J2CPP_METHOD_NAME(1),
		android::os::MessageQueue::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0);
}

void android::os::MessageQueue::removeIdleHandler(local_ref< android::os::MessageQueue_::IdleHandler > const &a0)
{
	return call_method<
		android::os::MessageQueue::J2CPP_CLASS_NAME,
		android::os::MessageQueue::J2CPP_METHOD_NAME(2),
		android::os::MessageQueue::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::os::MessageQueue,"android/os/MessageQueue")
J2CPP_DEFINE_METHOD(android::os::MessageQueue,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::os::MessageQueue,1,"addIdleHandler","(Landroid/os/MessageQueue$IdleHandler;)V")
J2CPP_DEFINE_METHOD(android::os::MessageQueue,2,"removeIdleHandler","(Landroid/os/MessageQueue$IdleHandler;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_MESSAGEQUEUE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
