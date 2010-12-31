/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.LinkedHashSet
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_LINKEDHASHSET_HPP_DECL
#define J2CPP_JAVA_UTIL_LINKEDHASHSET_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace util { class HashSet; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace java { namespace util { class Set; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/util/Collection.hpp>
#include <java/util/HashSet.hpp>
#include <java/util/Set.hpp>


namespace j2cpp {

namespace java { namespace util {

	class LinkedHashSet;
	class LinkedHashSet
		: public object<LinkedHashSet>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit LinkedHashSet(jobject jobj)
		: object<LinkedHashSet>(jobj)
		{
		}

		operator local_ref<java::util::HashSet>() const;
		operator local_ref<java::util::Set>() const;
		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::io::Serializable>() const;


		LinkedHashSet();
		LinkedHashSet(jint);
		LinkedHashSet(jint, jfloat);
		LinkedHashSet(local_ref< java::util::Collection > const&);
	}; //class LinkedHashSet

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_LINKEDHASHSET_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_LINKEDHASHSET_HPP_IMPL
#define J2CPP_JAVA_UTIL_LINKEDHASHSET_HPP_IMPL

namespace j2cpp {



java::util::LinkedHashSet::operator local_ref<java::util::HashSet>() const
{
	return local_ref<java::util::HashSet>(get_jobject());
}

java::util::LinkedHashSet::operator local_ref<java::util::Set>() const
{
	return local_ref<java::util::Set>(get_jobject());
}

java::util::LinkedHashSet::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

java::util::LinkedHashSet::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::util::LinkedHashSet::LinkedHashSet()
: object<java::util::LinkedHashSet>(
	call_new_object<
		java::util::LinkedHashSet::J2CPP_CLASS_NAME,
		java::util::LinkedHashSet::J2CPP_METHOD_NAME(0),
		java::util::LinkedHashSet::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



java::util::LinkedHashSet::LinkedHashSet(jint a0)
: object<java::util::LinkedHashSet>(
	call_new_object<
		java::util::LinkedHashSet::J2CPP_CLASS_NAME,
		java::util::LinkedHashSet::J2CPP_METHOD_NAME(1),
		java::util::LinkedHashSet::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



java::util::LinkedHashSet::LinkedHashSet(jint a0, jfloat a1)
: object<java::util::LinkedHashSet>(
	call_new_object<
		java::util::LinkedHashSet::J2CPP_CLASS_NAME,
		java::util::LinkedHashSet::J2CPP_METHOD_NAME(2),
		java::util::LinkedHashSet::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1)
)
{
}



java::util::LinkedHashSet::LinkedHashSet(local_ref< java::util::Collection > const &a0)
: object<java::util::LinkedHashSet>(
	call_new_object<
		java::util::LinkedHashSet::J2CPP_CLASS_NAME,
		java::util::LinkedHashSet::J2CPP_METHOD_NAME(3),
		java::util::LinkedHashSet::J2CPP_METHOD_SIGNATURE(3)>
	(a0)
)
{
}



J2CPP_DEFINE_CLASS(java::util::LinkedHashSet,"java/util/LinkedHashSet")
J2CPP_DEFINE_METHOD(java::util::LinkedHashSet,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::LinkedHashSet,1,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::util::LinkedHashSet,2,"<init>","(IF)V")
J2CPP_DEFINE_METHOD(java::util::LinkedHashSet,3,"<init>","(Ljava/util/Collection;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_LINKEDHASHSET_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
