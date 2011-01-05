/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.concurrent.atomic.AtomicReferenceArray
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICREFERENCEARRAY_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICREFERENCEARRAY_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent { namespace atomic {

	class AtomicReferenceArray;
	class AtomicReferenceArray
		: public object<AtomicReferenceArray>
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

		explicit AtomicReferenceArray(jobject jobj)
		: object<AtomicReferenceArray>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::Object>() const;


		AtomicReferenceArray(jint);
		AtomicReferenceArray(local_ref< array< local_ref< java::lang::Object >, 1> > const&);
		jint length();
		local_ref< java::lang::Object > get(jint);
		void set(jint, local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > getAndSet(jint, local_ref< java::lang::Object >  const&);
		jboolean compareAndSet(jint, local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
		jboolean weakCompareAndSet(jint, local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
		local_ref< java::lang::String > toString();
	}; //class AtomicReferenceArray

} //namespace atomic
} //namespace concurrent
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICREFERENCEARRAY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICREFERENCEARRAY_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICREFERENCEARRAY_HPP_IMPL

namespace j2cpp {



java::util::concurrent::atomic::AtomicReferenceArray::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::util::concurrent::atomic::AtomicReferenceArray::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::util::concurrent::atomic::AtomicReferenceArray::AtomicReferenceArray(jint a0)
: object<java::util::concurrent::atomic::AtomicReferenceArray>(
	call_new_object<
		java::util::concurrent::atomic::AtomicReferenceArray::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicReferenceArray::J2CPP_METHOD_NAME(0),
		java::util::concurrent::atomic::AtomicReferenceArray::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



java::util::concurrent::atomic::AtomicReferenceArray::AtomicReferenceArray(local_ref< array< local_ref< java::lang::Object >, 1> > const &a0)
: object<java::util::concurrent::atomic::AtomicReferenceArray>(
	call_new_object<
		java::util::concurrent::atomic::AtomicReferenceArray::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicReferenceArray::J2CPP_METHOD_NAME(1),
		java::util::concurrent::atomic::AtomicReferenceArray::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


jint java::util::concurrent::atomic::AtomicReferenceArray::length()
{
	return call_method<
		java::util::concurrent::atomic::AtomicReferenceArray::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicReferenceArray::J2CPP_METHOD_NAME(2),
		java::util::concurrent::atomic::AtomicReferenceArray::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::concurrent::atomic::AtomicReferenceArray::get(jint a0)
{
	return call_method<
		java::util::concurrent::atomic::AtomicReferenceArray::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicReferenceArray::J2CPP_METHOD_NAME(3),
		java::util::concurrent::atomic::AtomicReferenceArray::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

void java::util::concurrent::atomic::AtomicReferenceArray::set(jint a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::util::concurrent::atomic::AtomicReferenceArray::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicReferenceArray::J2CPP_METHOD_NAME(4),
		java::util::concurrent::atomic::AtomicReferenceArray::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::Object > java::util::concurrent::atomic::AtomicReferenceArray::getAndSet(jint a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::util::concurrent::atomic::AtomicReferenceArray::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicReferenceArray::J2CPP_METHOD_NAME(5),
		java::util::concurrent::atomic::AtomicReferenceArray::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0, a1);
}

jboolean java::util::concurrent::atomic::AtomicReferenceArray::compareAndSet(jint a0, local_ref< java::lang::Object > const &a1, local_ref< java::lang::Object > const &a2)
{
	return call_method<
		java::util::concurrent::atomic::AtomicReferenceArray::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicReferenceArray::J2CPP_METHOD_NAME(6),
		java::util::concurrent::atomic::AtomicReferenceArray::J2CPP_METHOD_SIGNATURE(6), 
		jboolean
	>(get_jobject(), a0, a1, a2);
}

jboolean java::util::concurrent::atomic::AtomicReferenceArray::weakCompareAndSet(jint a0, local_ref< java::lang::Object > const &a1, local_ref< java::lang::Object > const &a2)
{
	return call_method<
		java::util::concurrent::atomic::AtomicReferenceArray::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicReferenceArray::J2CPP_METHOD_NAME(7),
		java::util::concurrent::atomic::AtomicReferenceArray::J2CPP_METHOD_SIGNATURE(7), 
		jboolean
	>(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::String > java::util::concurrent::atomic::AtomicReferenceArray::toString()
{
	return call_method<
		java::util::concurrent::atomic::AtomicReferenceArray::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicReferenceArray::J2CPP_METHOD_NAME(8),
		java::util::concurrent::atomic::AtomicReferenceArray::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::concurrent::atomic::AtomicReferenceArray,"java/util/concurrent/atomic/AtomicReferenceArray")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicReferenceArray,0,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicReferenceArray,1,"<init>","([java.lang.Object)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicReferenceArray,2,"length","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicReferenceArray,3,"get","(I)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicReferenceArray,4,"set","(ILjava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicReferenceArray,5,"getAndSet","(ILjava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicReferenceArray,6,"compareAndSet","(ILjava/lang/Object;Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicReferenceArray,7,"weakCompareAndSet","(ILjava/lang/Object;Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicReferenceArray,8,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICREFERENCEARRAY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
