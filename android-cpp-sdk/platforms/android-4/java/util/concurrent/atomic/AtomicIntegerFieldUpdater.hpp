/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.concurrent.atomic.AtomicIntegerFieldUpdater
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGERFIELDUPDATER_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGERFIELDUPDATER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }


#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent { namespace atomic {

	class AtomicIntegerFieldUpdater;
	class AtomicIntegerFieldUpdater
		: public object<AtomicIntegerFieldUpdater>
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

		explicit AtomicIntegerFieldUpdater(jobject jobj)
		: object<AtomicIntegerFieldUpdater>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< java::util::concurrent::atomic::AtomicIntegerFieldUpdater > newUpdater(local_ref< java::lang::Class >  const&, local_ref< java::lang::String >  const&);
		jboolean compareAndSet(local_ref< java::lang::Object >  const&, jint, jint);
		jboolean weakCompareAndSet(local_ref< java::lang::Object >  const&, jint, jint);
		void set(local_ref< java::lang::Object >  const&, jint);
		jint get(local_ref< java::lang::Object >  const&);
		jint getAndSet(local_ref< java::lang::Object >  const&, jint);
		jint getAndIncrement(local_ref< java::lang::Object >  const&);
		jint getAndDecrement(local_ref< java::lang::Object >  const&);
		jint getAndAdd(local_ref< java::lang::Object >  const&, jint);
		jint incrementAndGet(local_ref< java::lang::Object >  const&);
		jint decrementAndGet(local_ref< java::lang::Object >  const&);
		jint addAndGet(local_ref< java::lang::Object >  const&, jint);
	}; //class AtomicIntegerFieldUpdater

} //namespace atomic
} //namespace concurrent
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGERFIELDUPDATER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGERFIELDUPDATER_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGERFIELDUPDATER_HPP_IMPL

namespace j2cpp {



java::util::concurrent::atomic::AtomicIntegerFieldUpdater::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::util::concurrent::atomic::AtomicIntegerFieldUpdater > java::util::concurrent::atomic::AtomicIntegerFieldUpdater::newUpdater(local_ref< java::lang::Class > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		java::util::concurrent::atomic::AtomicIntegerFieldUpdater::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicIntegerFieldUpdater::J2CPP_METHOD_NAME(1),
		java::util::concurrent::atomic::AtomicIntegerFieldUpdater::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::util::concurrent::atomic::AtomicIntegerFieldUpdater > >
	(a0, a1);
}

jboolean java::util::concurrent::atomic::AtomicIntegerFieldUpdater::compareAndSet(local_ref< java::lang::Object > const &a0, jint a1, jint a2)
{
	return call_method<
		java::util::concurrent::atomic::AtomicIntegerFieldUpdater::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicIntegerFieldUpdater::J2CPP_METHOD_NAME(2),
		java::util::concurrent::atomic::AtomicIntegerFieldUpdater::J2CPP_METHOD_SIGNATURE(2), 
		jboolean >
	(get_jobject(), a0, a1, a2);
}

jboolean java::util::concurrent::atomic::AtomicIntegerFieldUpdater::weakCompareAndSet(local_ref< java::lang::Object > const &a0, jint a1, jint a2)
{
	return call_method<
		java::util::concurrent::atomic::AtomicIntegerFieldUpdater::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicIntegerFieldUpdater::J2CPP_METHOD_NAME(3),
		java::util::concurrent::atomic::AtomicIntegerFieldUpdater::J2CPP_METHOD_SIGNATURE(3), 
		jboolean >
	(get_jobject(), a0, a1, a2);
}

void java::util::concurrent::atomic::AtomicIntegerFieldUpdater::set(local_ref< java::lang::Object > const &a0, jint a1)
{
	return call_method<
		java::util::concurrent::atomic::AtomicIntegerFieldUpdater::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicIntegerFieldUpdater::J2CPP_METHOD_NAME(4),
		java::util::concurrent::atomic::AtomicIntegerFieldUpdater::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0, a1);
}

jint java::util::concurrent::atomic::AtomicIntegerFieldUpdater::get(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::atomic::AtomicIntegerFieldUpdater::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicIntegerFieldUpdater::J2CPP_METHOD_NAME(5),
		java::util::concurrent::atomic::AtomicIntegerFieldUpdater::J2CPP_METHOD_SIGNATURE(5), 
		jint >
	(get_jobject(), a0);
}

jint java::util::concurrent::atomic::AtomicIntegerFieldUpdater::getAndSet(local_ref< java::lang::Object > const &a0, jint a1)
{
	return call_method<
		java::util::concurrent::atomic::AtomicIntegerFieldUpdater::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicIntegerFieldUpdater::J2CPP_METHOD_NAME(6),
		java::util::concurrent::atomic::AtomicIntegerFieldUpdater::J2CPP_METHOD_SIGNATURE(6), 
		jint >
	(get_jobject(), a0, a1);
}

jint java::util::concurrent::atomic::AtomicIntegerFieldUpdater::getAndIncrement(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::atomic::AtomicIntegerFieldUpdater::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicIntegerFieldUpdater::J2CPP_METHOD_NAME(7),
		java::util::concurrent::atomic::AtomicIntegerFieldUpdater::J2CPP_METHOD_SIGNATURE(7), 
		jint >
	(get_jobject(), a0);
}

jint java::util::concurrent::atomic::AtomicIntegerFieldUpdater::getAndDecrement(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::atomic::AtomicIntegerFieldUpdater::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicIntegerFieldUpdater::J2CPP_METHOD_NAME(8),
		java::util::concurrent::atomic::AtomicIntegerFieldUpdater::J2CPP_METHOD_SIGNATURE(8), 
		jint >
	(get_jobject(), a0);
}

jint java::util::concurrent::atomic::AtomicIntegerFieldUpdater::getAndAdd(local_ref< java::lang::Object > const &a0, jint a1)
{
	return call_method<
		java::util::concurrent::atomic::AtomicIntegerFieldUpdater::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicIntegerFieldUpdater::J2CPP_METHOD_NAME(9),
		java::util::concurrent::atomic::AtomicIntegerFieldUpdater::J2CPP_METHOD_SIGNATURE(9), 
		jint >
	(get_jobject(), a0, a1);
}

jint java::util::concurrent::atomic::AtomicIntegerFieldUpdater::incrementAndGet(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::atomic::AtomicIntegerFieldUpdater::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicIntegerFieldUpdater::J2CPP_METHOD_NAME(10),
		java::util::concurrent::atomic::AtomicIntegerFieldUpdater::J2CPP_METHOD_SIGNATURE(10), 
		jint >
	(get_jobject(), a0);
}

jint java::util::concurrent::atomic::AtomicIntegerFieldUpdater::decrementAndGet(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::atomic::AtomicIntegerFieldUpdater::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicIntegerFieldUpdater::J2CPP_METHOD_NAME(11),
		java::util::concurrent::atomic::AtomicIntegerFieldUpdater::J2CPP_METHOD_SIGNATURE(11), 
		jint >
	(get_jobject(), a0);
}

jint java::util::concurrent::atomic::AtomicIntegerFieldUpdater::addAndGet(local_ref< java::lang::Object > const &a0, jint a1)
{
	return call_method<
		java::util::concurrent::atomic::AtomicIntegerFieldUpdater::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicIntegerFieldUpdater::J2CPP_METHOD_NAME(12),
		java::util::concurrent::atomic::AtomicIntegerFieldUpdater::J2CPP_METHOD_SIGNATURE(12), 
		jint >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(java::util::concurrent::atomic::AtomicIntegerFieldUpdater,"java/util/concurrent/atomic/AtomicIntegerFieldUpdater")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicIntegerFieldUpdater,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicIntegerFieldUpdater,1,"newUpdater","(Ljava/lang/Class;Ljava/lang/String;)Ljava/util/concurrent/atomic/AtomicIntegerFieldUpdater;")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicIntegerFieldUpdater,2,"compareAndSet","(Ljava/lang/Object;II)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicIntegerFieldUpdater,3,"weakCompareAndSet","(Ljava/lang/Object;II)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicIntegerFieldUpdater,4,"set","(Ljava/lang/Object;I)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicIntegerFieldUpdater,5,"get","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicIntegerFieldUpdater,6,"getAndSet","(Ljava/lang/Object;I)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicIntegerFieldUpdater,7,"getAndIncrement","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicIntegerFieldUpdater,8,"getAndDecrement","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicIntegerFieldUpdater,9,"getAndAdd","(Ljava/lang/Object;I)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicIntegerFieldUpdater,10,"incrementAndGet","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicIntegerFieldUpdater,11,"decrementAndGet","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicIntegerFieldUpdater,12,"addAndGet","(Ljava/lang/Object;I)I")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGERFIELDUPDATER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
