/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.SortedMap
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_SORTEDMAP_HPP_DECL
#define J2CPP_JAVA_UTIL_SORTEDMAP_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Comparator; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }


#include <java/lang/Object.hpp>
#include <java/util/Comparator.hpp>
#include <java/util/Map.hpp>


namespace j2cpp {

namespace java { namespace util {

	class SortedMap;
	class SortedMap
		: public object<SortedMap>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit SortedMap(jobject jobj)
		: object<SortedMap>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::util::Map>() const;


		local_ref< java::util::Comparator > comparator();
		local_ref< java::lang::Object > firstKey();
		local_ref< java::util::SortedMap > headMap(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > lastKey();
		local_ref< java::util::SortedMap > subMap(local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
		local_ref< java::util::SortedMap > tailMap(local_ref< java::lang::Object >  const&);
	}; //class SortedMap

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_SORTEDMAP_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_SORTEDMAP_HPP_IMPL
#define J2CPP_JAVA_UTIL_SORTEDMAP_HPP_IMPL

namespace j2cpp {



java::util::SortedMap::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::SortedMap::operator local_ref<java::util::Map>() const
{
	return local_ref<java::util::Map>(get_jobject());
}

local_ref< java::util::Comparator > java::util::SortedMap::comparator()
{
	return call_method<
		java::util::SortedMap::J2CPP_CLASS_NAME,
		java::util::SortedMap::J2CPP_METHOD_NAME(0),
		java::util::SortedMap::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::util::Comparator > >
	(get_jobject());
}

local_ref< java::lang::Object > java::util::SortedMap::firstKey()
{
	return call_method<
		java::util::SortedMap::J2CPP_CLASS_NAME,
		java::util::SortedMap::J2CPP_METHOD_NAME(1),
		java::util::SortedMap::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::Object > >
	(get_jobject());
}

local_ref< java::util::SortedMap > java::util::SortedMap::headMap(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::SortedMap::J2CPP_CLASS_NAME,
		java::util::SortedMap::J2CPP_METHOD_NAME(2),
		java::util::SortedMap::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::util::SortedMap > >
	(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::SortedMap::lastKey()
{
	return call_method<
		java::util::SortedMap::J2CPP_CLASS_NAME,
		java::util::SortedMap::J2CPP_METHOD_NAME(3),
		java::util::SortedMap::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::Object > >
	(get_jobject());
}

local_ref< java::util::SortedMap > java::util::SortedMap::subMap(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::util::SortedMap::J2CPP_CLASS_NAME,
		java::util::SortedMap::J2CPP_METHOD_NAME(4),
		java::util::SortedMap::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::util::SortedMap > >
	(get_jobject(), a0, a1);
}

local_ref< java::util::SortedMap > java::util::SortedMap::tailMap(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::SortedMap::J2CPP_CLASS_NAME,
		java::util::SortedMap::J2CPP_METHOD_NAME(5),
		java::util::SortedMap::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::util::SortedMap > >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::util::SortedMap,"java/util/SortedMap")
J2CPP_DEFINE_METHOD(java::util::SortedMap,0,"comparator","()Ljava/util/Comparator;")
J2CPP_DEFINE_METHOD(java::util::SortedMap,1,"firstKey","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::SortedMap,2,"headMap","(Ljava/lang/Object;)Ljava/util/SortedMap;")
J2CPP_DEFINE_METHOD(java::util::SortedMap,3,"lastKey","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::SortedMap,4,"subMap","(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;")
J2CPP_DEFINE_METHOD(java::util::SortedMap,5,"tailMap","(Ljava/lang/Object;)Ljava/util/SortedMap;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_SORTEDMAP_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
