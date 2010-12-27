/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.impl.conn.tsccm.RouteSpecificPool
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_ROUTESPECIFICPOOL_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_ROUTESPECIFICPOOL_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace routing { class HttpRoute; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm { class BasicPoolEntry; } } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm { class WaitingThread; } } } } } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/conn/routing/HttpRoute.hpp>
#include <org/apache/http/impl/conn/tsccm/BasicPoolEntry.hpp>
#include <org/apache/http/impl/conn/tsccm/WaitingThread.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm {

	class RouteSpecificPool;
	class RouteSpecificPool
		: public cpp_object<RouteSpecificPool>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)

		explicit RouteSpecificPool(jobject jobj)
		: cpp_object<RouteSpecificPool>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		RouteSpecificPool(local_ref< org::apache::http::conn::routing::HttpRoute > const&, cpp_int const&);
		local_ref< org::apache::http::conn::routing::HttpRoute > getRoute();
		cpp_int getMaxEntries();
		cpp_boolean isUnused();
		cpp_int getCapacity();
		cpp_int getEntryCount();
		local_ref< org::apache::http::impl::conn::tsccm::BasicPoolEntry > allocEntry(local_ref< java::lang::Object > const&);
		void freeEntry(local_ref< org::apache::http::impl::conn::tsccm::BasicPoolEntry > const&);
		void createdEntry(local_ref< org::apache::http::impl::conn::tsccm::BasicPoolEntry > const&);
		cpp_boolean deleteEntry(local_ref< org::apache::http::impl::conn::tsccm::BasicPoolEntry > const&);
		void dropEntry();
		void queueThread(local_ref< org::apache::http::impl::conn::tsccm::WaitingThread > const&);
		cpp_boolean hasThread();
		local_ref< org::apache::http::impl::conn::tsccm::WaitingThread > nextThread();
		void removeThread(local_ref< org::apache::http::impl::conn::tsccm::WaitingThread > const&);

	}; //class RouteSpecificPool

} //namespace tsccm
} //namespace conn
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_ROUTESPECIFICPOOL_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_ROUTESPECIFICPOOL_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_ROUTESPECIFICPOOL_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::conn::tsccm::RouteSpecificPool::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


org::apache::http::impl::conn::tsccm::RouteSpecificPool::RouteSpecificPool(local_ref< org::apache::http::conn::routing::HttpRoute > const &a0, cpp_int const &a1)
: cpp_object<org::apache::http::impl::conn::tsccm::RouteSpecificPool>(
	environment::get().get_jenv()->NewObject(
		get_class<org::apache::http::impl::conn::tsccm::RouteSpecificPool::J2CPP_CLASS_NAME>(),
		get_method_id<org::apache::http::impl::conn::tsccm::RouteSpecificPool::J2CPP_CLASS_NAME, org::apache::http::impl::conn::tsccm::RouteSpecificPool::J2CPP_METHOD_NAME(0), org::apache::http::impl::conn::tsccm::RouteSpecificPool::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}


local_ref< org::apache::http::conn::routing::HttpRoute > org::apache::http::impl::conn::tsccm::RouteSpecificPool::getRoute()
{
	return local_ref< org::apache::http::conn::routing::HttpRoute >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_int org::apache::http::impl::conn::tsccm::RouteSpecificPool::getMaxEntries()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_boolean org::apache::http::impl::conn::tsccm::RouteSpecificPool::isUnused()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_int org::apache::http::impl::conn::tsccm::RouteSpecificPool::getCapacity()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_int org::apache::http::impl::conn::tsccm::RouteSpecificPool::getEntryCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< org::apache::http::impl::conn::tsccm::BasicPoolEntry > org::apache::http::impl::conn::tsccm::RouteSpecificPool::allocEntry(local_ref< java::lang::Object > const &a0)
{
	return local_ref< org::apache::http::impl::conn::tsccm::BasicPoolEntry >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::impl::conn::tsccm::RouteSpecificPool::freeEntry(local_ref< org::apache::http::impl::conn::tsccm::BasicPoolEntry > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::impl::conn::tsccm::RouteSpecificPool::createdEntry(local_ref< org::apache::http::impl::conn::tsccm::BasicPoolEntry > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean org::apache::http::impl::conn::tsccm::RouteSpecificPool::deleteEntry(local_ref< org::apache::http::impl::conn::tsccm::BasicPoolEntry > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::impl::conn::tsccm::RouteSpecificPool::dropEntry()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

void org::apache::http::impl::conn::tsccm::RouteSpecificPool::queueThread(local_ref< org::apache::http::impl::conn::tsccm::WaitingThread > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean org::apache::http::impl::conn::tsccm::RouteSpecificPool::hasThread()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

local_ref< org::apache::http::impl::conn::tsccm::WaitingThread > org::apache::http::impl::conn::tsccm::RouteSpecificPool::nextThread()
{
	return local_ref< org::apache::http::impl::conn::tsccm::WaitingThread >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

void org::apache::http::impl::conn::tsccm::RouteSpecificPool::removeThread(local_ref< org::apache::http::impl::conn::tsccm::WaitingThread > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}



J2CPP_DEFINE_CLASS(org::apache::http::impl::conn::tsccm::RouteSpecificPool,"org/apache/http/impl/conn/tsccm/RouteSpecificPool")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::RouteSpecificPool,0,"<init>","(Lorg/apache/http/conn/routing/HttpRoute;I)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::RouteSpecificPool,1,"getRoute","()Lorg/apache/http/conn/routing/HttpRoute;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::RouteSpecificPool,2,"getMaxEntries","()I")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::RouteSpecificPool,3,"isUnused","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::RouteSpecificPool,4,"getCapacity","()I")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::RouteSpecificPool,5,"getEntryCount","()I")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::RouteSpecificPool,6,"allocEntry","(Ljava/lang/Object;)Lorg/apache/http/impl/conn/tsccm/BasicPoolEntry;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::RouteSpecificPool,7,"freeEntry","(Lorg/apache/http/impl/conn/tsccm/BasicPoolEntry;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::RouteSpecificPool,8,"createdEntry","(Lorg/apache/http/impl/conn/tsccm/BasicPoolEntry;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::RouteSpecificPool,9,"deleteEntry","(Lorg/apache/http/impl/conn/tsccm/BasicPoolEntry;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::RouteSpecificPool,10,"dropEntry","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::RouteSpecificPool,11,"queueThread","(Lorg/apache/http/impl/conn/tsccm/WaitingThread;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::RouteSpecificPool,12,"hasThread","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::RouteSpecificPool,13,"nextThread","()Lorg/apache/http/impl/conn/tsccm/WaitingThread;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::RouteSpecificPool,14,"removeThread","(Lorg/apache/http/impl/conn/tsccm/WaitingThread;)V")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::tsccm::RouteSpecificPool,0,"route","Lorg/apache/http/conn/routing/HttpRoute;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::tsccm::RouteSpecificPool,1,"maxEntries","I")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::tsccm::RouteSpecificPool,2,"freeEntries","Ljava/util/LinkedList;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::tsccm::RouteSpecificPool,3,"waitingThreads","Ljava/util/Queue;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::tsccm::RouteSpecificPool,4,"numEntries","I")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_ROUTESPECIFICPOOL_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
