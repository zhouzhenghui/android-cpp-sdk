/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.SortedSet
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_SORTEDSET_HPP_DECL
#define J2CPP_JAVA_UTIL_SORTEDSET_HPP_DECL


namespace j2cpp { namespace java { namespace util { class Set; } } }
namespace j2cpp { namespace java { namespace util { class Comparator; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/util/Comparator.hpp>
#include <java/util/Set.hpp>


namespace j2cpp {

namespace java { namespace util {

	class SortedSet;
	class SortedSet
		: public object<SortedSet>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit SortedSet(jobject jobj)
		: object<SortedSet>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::util::Set>() const;


		local_ref< java::util::Comparator > comparator();
		local_ref< java::lang::Object > first();
		local_ref< java::util::SortedSet > headSet(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > last();
		local_ref< java::util::SortedSet > subSet(local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
		local_ref< java::util::SortedSet > tailSet(local_ref< java::lang::Object >  const&);
	}; //class SortedSet

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_SORTEDSET_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_SORTEDSET_HPP_IMPL
#define J2CPP_JAVA_UTIL_SORTEDSET_HPP_IMPL

namespace j2cpp {



java::util::SortedSet::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::SortedSet::operator local_ref<java::util::Set>() const
{
	return local_ref<java::util::Set>(get_jobject());
}

local_ref< java::util::Comparator > java::util::SortedSet::comparator()
{
	return call_method<
		java::util::SortedSet::J2CPP_CLASS_NAME,
		java::util::SortedSet::J2CPP_METHOD_NAME(0),
		java::util::SortedSet::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::util::Comparator > >
	(get_jobject());
}

local_ref< java::lang::Object > java::util::SortedSet::first()
{
	return call_method<
		java::util::SortedSet::J2CPP_CLASS_NAME,
		java::util::SortedSet::J2CPP_METHOD_NAME(1),
		java::util::SortedSet::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::Object > >
	(get_jobject());
}

local_ref< java::util::SortedSet > java::util::SortedSet::headSet(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::SortedSet::J2CPP_CLASS_NAME,
		java::util::SortedSet::J2CPP_METHOD_NAME(2),
		java::util::SortedSet::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::util::SortedSet > >
	(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::SortedSet::last()
{
	return call_method<
		java::util::SortedSet::J2CPP_CLASS_NAME,
		java::util::SortedSet::J2CPP_METHOD_NAME(3),
		java::util::SortedSet::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::Object > >
	(get_jobject());
}

local_ref< java::util::SortedSet > java::util::SortedSet::subSet(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::util::SortedSet::J2CPP_CLASS_NAME,
		java::util::SortedSet::J2CPP_METHOD_NAME(4),
		java::util::SortedSet::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::util::SortedSet > >
	(get_jobject(), a0, a1);
}

local_ref< java::util::SortedSet > java::util::SortedSet::tailSet(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::SortedSet::J2CPP_CLASS_NAME,
		java::util::SortedSet::J2CPP_METHOD_NAME(5),
		java::util::SortedSet::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::util::SortedSet > >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::util::SortedSet,"java/util/SortedSet")
J2CPP_DEFINE_METHOD(java::util::SortedSet,0,"comparator","()Ljava/util/Comparator;")
J2CPP_DEFINE_METHOD(java::util::SortedSet,1,"first","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::SortedSet,2,"headSet","(Ljava/lang/Object;)Ljava/util/SortedSet;")
J2CPP_DEFINE_METHOD(java::util::SortedSet,3,"last","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::SortedSet,4,"subSet","(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;")
J2CPP_DEFINE_METHOD(java::util::SortedSet,5,"tailSet","(Ljava/lang/Object;)Ljava/util/SortedSet;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_SORTEDSET_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
