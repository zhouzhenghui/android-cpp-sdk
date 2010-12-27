/*================================================================================
  code generated by: java2cpp
  class: java.util.concurrent.CopyOnWriteArraySet
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYSET_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYSET_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Iterator; } } }
namespace j2cpp { namespace java { namespace util { class AbstractSet; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Object.hpp>
#include <java/util/AbstractSet.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Iterator.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent {

	class CopyOnWriteArraySet;
	class CopyOnWriteArraySet
		: public cpp_object<CopyOnWriteArraySet>
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

		explicit CopyOnWriteArraySet(jobject jobj)
		: cpp_object<CopyOnWriteArraySet>(jobj)
		{
		}

		operator local_ref<java::util::AbstractSet>() const;
		operator local_ref<java::io::Serializable>() const;


		CopyOnWriteArraySet();
		CopyOnWriteArraySet(local_ref< java::util::Collection > const&);
		cpp_int size();
		cpp_boolean isEmpty();
		cpp_boolean contains(local_ref< java::lang::Object > const&);
		local_ref< cpp_object_array<java::lang::Object, 1> > toArray();
		local_ref< cpp_object_array<java::lang::Object, 1> > toArray(local_ref< cpp_object_array<java::lang::Object, 1> > const&);
		void clear();
		cpp_boolean remove(local_ref< java::lang::Object > const&);
		cpp_boolean add(local_ref< java::lang::Object > const&);
		cpp_boolean containsAll(local_ref< java::util::Collection > const&);
		cpp_boolean addAll(local_ref< java::util::Collection > const&);
		cpp_boolean removeAll(local_ref< java::util::Collection > const&);
		cpp_boolean retainAll(local_ref< java::util::Collection > const&);
		local_ref< java::util::Iterator > iterator();
		cpp_boolean equals(local_ref< java::lang::Object > const&);
	}; //class CopyOnWriteArraySet

} //namespace concurrent
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYSET_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYSET_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYSET_HPP_IMPL

namespace j2cpp {



java::util::concurrent::CopyOnWriteArraySet::operator local_ref<java::util::AbstractSet>() const
{
	return local_ref<java::util::AbstractSet>(get_jtype());
}

java::util::concurrent::CopyOnWriteArraySet::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jtype());
}


java::util::concurrent::CopyOnWriteArraySet::CopyOnWriteArraySet()
: cpp_object<java::util::concurrent::CopyOnWriteArraySet>(
	environment::get().get_jenv()->NewObject(
		get_class<java::util::concurrent::CopyOnWriteArraySet::J2CPP_CLASS_NAME>(),
		get_method_id<java::util::concurrent::CopyOnWriteArraySet::J2CPP_CLASS_NAME, java::util::concurrent::CopyOnWriteArraySet::J2CPP_METHOD_NAME(0), java::util::concurrent::CopyOnWriteArraySet::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}



java::util::concurrent::CopyOnWriteArraySet::CopyOnWriteArraySet(local_ref< java::util::Collection > const &a0)
: cpp_object<java::util::concurrent::CopyOnWriteArraySet>(
	environment::get().get_jenv()->NewObject(
		get_class<java::util::concurrent::CopyOnWriteArraySet::J2CPP_CLASS_NAME>(),
		get_method_id<java::util::concurrent::CopyOnWriteArraySet::J2CPP_CLASS_NAME, java::util::concurrent::CopyOnWriteArraySet::J2CPP_METHOD_NAME(1), java::util::concurrent::CopyOnWriteArraySet::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype()
	)
)
{
}


cpp_int java::util::concurrent::CopyOnWriteArraySet::size()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_boolean java::util::concurrent::CopyOnWriteArraySet::isEmpty()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_boolean java::util::concurrent::CopyOnWriteArraySet::contains(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_object_array<java::lang::Object, 1> > java::util::concurrent::CopyOnWriteArraySet::toArray()
{
	return local_ref< cpp_object_array<java::lang::Object, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::Object, 1> > java::util::concurrent::CopyOnWriteArraySet::toArray(local_ref< cpp_object_array<java::lang::Object, 1> > const &a0)
{
	return local_ref< cpp_object_array<java::lang::Object, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::concurrent::CopyOnWriteArraySet::clear()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

cpp_boolean java::util::concurrent::CopyOnWriteArraySet::remove(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::CopyOnWriteArraySet::add(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::CopyOnWriteArraySet::containsAll(local_ref< java::util::Collection > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::CopyOnWriteArraySet::addAll(local_ref< java::util::Collection > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::CopyOnWriteArraySet::removeAll(local_ref< java::util::Collection > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::CopyOnWriteArraySet::retainAll(local_ref< java::util::Collection > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Iterator > java::util::concurrent::CopyOnWriteArraySet::iterator()
{
	return local_ref< java::util::Iterator >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

cpp_boolean java::util::concurrent::CopyOnWriteArraySet::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::util::concurrent::CopyOnWriteArraySet,"java/util/concurrent/CopyOnWriteArraySet")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArraySet,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArraySet,1,"<init>","(Ljava/util/Collection;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArraySet,2,"size","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArraySet,3,"isEmpty","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArraySet,4,"contains","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArraySet,5,"toArray","()[java.lang.Object")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArraySet,6,"toArray","([java.lang.Object)[java.lang.Object")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArraySet,7,"clear","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArraySet,8,"remove","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArraySet,9,"add","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArraySet,10,"containsAll","(Ljava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArraySet,11,"addAll","(Ljava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArraySet,12,"removeAll","(Ljava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArraySet,13,"retainAll","(Ljava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArraySet,14,"iterator","()Ljava/util/Iterator;")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArraySet,15,"equals","(Ljava/lang/Object;)Z")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYSET_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
