/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.conn.tsccm.WaitingThread
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_WAITINGTHREAD_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_WAITINGTHREAD_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm { class RouteSpecificPool; } } } } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Thread; } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { namespace locks { class Condition; } } } } }
namespace j2cpp { namespace java { namespace util { class Date; } } }


#include <java/lang/Object.hpp>
#include <java/lang/Thread.hpp>
#include <java/util/Date.hpp>
#include <java/util/concurrent/locks/Condition.hpp>
#include <org/apache/http/impl/conn/tsccm/RouteSpecificPool.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm {

	class WaitingThread;
	class WaitingThread
		: public object<WaitingThread>
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

		explicit WaitingThread(jobject jobj)
		: object<WaitingThread>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		WaitingThread(local_ref< java::util::concurrent::locks::Condition > const&, local_ref< org::apache::http::impl::conn::tsccm::RouteSpecificPool > const&);
		local_ref< java::util::concurrent::locks::Condition > getCondition();
		local_ref< org::apache::http::impl::conn::tsccm::RouteSpecificPool > getPool();
		local_ref< java::lang::Thread > getThread();
		jboolean await(local_ref< java::util::Date >  const&);
		void wakeup();
		void interrupt();
	}; //class WaitingThread

} //namespace tsccm
} //namespace conn
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_WAITINGTHREAD_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_WAITINGTHREAD_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_WAITINGTHREAD_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::conn::tsccm::WaitingThread::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


org::apache::http::impl::conn::tsccm::WaitingThread::WaitingThread(local_ref< java::util::concurrent::locks::Condition > const &a0, local_ref< org::apache::http::impl::conn::tsccm::RouteSpecificPool > const &a1)
: object<org::apache::http::impl::conn::tsccm::WaitingThread>(
	call_new_object<
		org::apache::http::impl::conn::tsccm::WaitingThread::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::tsccm::WaitingThread::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::conn::tsccm::WaitingThread::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}


local_ref< java::util::concurrent::locks::Condition > org::apache::http::impl::conn::tsccm::WaitingThread::getCondition()
{
	return call_method<
		org::apache::http::impl::conn::tsccm::WaitingThread::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::tsccm::WaitingThread::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::conn::tsccm::WaitingThread::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::util::concurrent::locks::Condition >
	>(get_jobject());
}

local_ref< org::apache::http::impl::conn::tsccm::RouteSpecificPool > org::apache::http::impl::conn::tsccm::WaitingThread::getPool()
{
	return call_method<
		org::apache::http::impl::conn::tsccm::WaitingThread::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::tsccm::WaitingThread::J2CPP_METHOD_NAME(2),
		org::apache::http::impl::conn::tsccm::WaitingThread::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< org::apache::http::impl::conn::tsccm::RouteSpecificPool >
	>(get_jobject());
}

local_ref< java::lang::Thread > org::apache::http::impl::conn::tsccm::WaitingThread::getThread()
{
	return call_method<
		org::apache::http::impl::conn::tsccm::WaitingThread::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::tsccm::WaitingThread::J2CPP_METHOD_NAME(3),
		org::apache::http::impl::conn::tsccm::WaitingThread::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::Thread >
	>(get_jobject());
}

jboolean org::apache::http::impl::conn::tsccm::WaitingThread::await(local_ref< java::util::Date > const &a0)
{
	return call_method<
		org::apache::http::impl::conn::tsccm::WaitingThread::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::tsccm::WaitingThread::J2CPP_METHOD_NAME(4),
		org::apache::http::impl::conn::tsccm::WaitingThread::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject(), a0);
}

void org::apache::http::impl::conn::tsccm::WaitingThread::wakeup()
{
	return call_method<
		org::apache::http::impl::conn::tsccm::WaitingThread::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::tsccm::WaitingThread::J2CPP_METHOD_NAME(5),
		org::apache::http::impl::conn::tsccm::WaitingThread::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject());
}

void org::apache::http::impl::conn::tsccm::WaitingThread::interrupt()
{
	return call_method<
		org::apache::http::impl::conn::tsccm::WaitingThread::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::tsccm::WaitingThread::J2CPP_METHOD_NAME(6),
		org::apache::http::impl::conn::tsccm::WaitingThread::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::conn::tsccm::WaitingThread,"org/apache/http/impl/conn/tsccm/WaitingThread")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::WaitingThread,0,"<init>","(Ljava/util/concurrent/locks/Condition;Lorg/apache/http/impl/conn/tsccm/RouteSpecificPool;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::WaitingThread,1,"getCondition","()Ljava/util/concurrent/locks/Condition;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::WaitingThread,2,"getPool","()Lorg/apache/http/impl/conn/tsccm/RouteSpecificPool;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::WaitingThread,3,"getThread","()Ljava/lang/Thread;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::WaitingThread,4,"await","(Ljava/util/Date;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::WaitingThread,5,"wakeup","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::WaitingThread,6,"interrupt","()V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_WAITINGTHREAD_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
