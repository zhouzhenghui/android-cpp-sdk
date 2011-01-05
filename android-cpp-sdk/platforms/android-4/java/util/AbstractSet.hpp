/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.AbstractSet
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ABSTRACTSET_HPP_DECL
#define J2CPP_JAVA_UTIL_ABSTRACTSET_HPP_DECL


namespace j2cpp { namespace java { namespace util { class Set; } } }
namespace j2cpp { namespace java { namespace util { class AbstractCollection; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Iterable; } } }


#include <java/lang/Iterable.hpp>
#include <java/lang/Object.hpp>
#include <java/util/AbstractCollection.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Set.hpp>


namespace j2cpp {

namespace java { namespace util {

	class AbstractSet;
	class AbstractSet
		: public object<AbstractSet>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit AbstractSet(jobject jobj)
		: object<AbstractSet>(jobj)
		{
		}

		operator local_ref<java::util::Set>() const;
		operator local_ref<java::util::AbstractCollection>() const;
		operator local_ref<java::util::Collection>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Iterable>() const;


		jboolean equals(local_ref< java::lang::Object >  const&);
		jint hashCode();
		jboolean removeAll(local_ref< java::util::Collection >  const&);
	}; //class AbstractSet

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ABSTRACTSET_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ABSTRACTSET_HPP_IMPL
#define J2CPP_JAVA_UTIL_ABSTRACTSET_HPP_IMPL

namespace j2cpp {



java::util::AbstractSet::operator local_ref<java::util::Set>() const
{
	return local_ref<java::util::Set>(get_jobject());
}

java::util::AbstractSet::operator local_ref<java::util::AbstractCollection>() const
{
	return local_ref<java::util::AbstractCollection>(get_jobject());
}

java::util::AbstractSet::operator local_ref<java::util::Collection>() const
{
	return local_ref<java::util::Collection>(get_jobject());
}

java::util::AbstractSet::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::AbstractSet::operator local_ref<java::lang::Iterable>() const
{
	return local_ref<java::lang::Iterable>(get_jobject());
}


jboolean java::util::AbstractSet::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::AbstractSet::J2CPP_CLASS_NAME,
		java::util::AbstractSet::J2CPP_METHOD_NAME(1),
		java::util::AbstractSet::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(get_jobject(), a0);
}

jint java::util::AbstractSet::hashCode()
{
	return call_method<
		java::util::AbstractSet::J2CPP_CLASS_NAME,
		java::util::AbstractSet::J2CPP_METHOD_NAME(2),
		java::util::AbstractSet::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

jboolean java::util::AbstractSet::removeAll(local_ref< java::util::Collection > const &a0)
{
	return call_method<
		java::util::AbstractSet::J2CPP_CLASS_NAME,
		java::util::AbstractSet::J2CPP_METHOD_NAME(3),
		java::util::AbstractSet::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::util::AbstractSet,"java/util/AbstractSet")
J2CPP_DEFINE_METHOD(java::util::AbstractSet,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::AbstractSet,1,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::AbstractSet,2,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::util::AbstractSet,3,"removeAll","(Ljava/util/Collection;)Z")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ABSTRACTSET_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
