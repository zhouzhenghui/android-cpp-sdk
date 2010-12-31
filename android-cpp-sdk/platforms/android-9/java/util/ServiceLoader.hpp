/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.ServiceLoader
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_SERVICELOADER_HPP_DECL
#define J2CPP_JAVA_UTIL_SERVICELOADER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { class ClassLoader; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Iterable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Iterator; } } }


#include <java/lang/Class.hpp>
#include <java/lang/ClassLoader.hpp>
#include <java/lang/Iterable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Iterator.hpp>


namespace j2cpp {

namespace java { namespace util {

	class ServiceLoader;
	class ServiceLoader
		: public object<ServiceLoader>
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

		explicit ServiceLoader(jobject jobj)
		: object<ServiceLoader>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Iterable>() const;


		void reload();
		local_ref< java::util::Iterator > iterator();
		static local_ref< java::util::ServiceLoader > load(local_ref< java::lang::Class >  const&, local_ref< java::lang::ClassLoader >  const&);
		static local_ref< java::util::ServiceLoader > load(local_ref< java::lang::Class >  const&);
		static local_ref< java::util::ServiceLoader > loadInstalled(local_ref< java::lang::Class >  const&);
		local_ref< java::lang::String > toString();
	}; //class ServiceLoader

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_SERVICELOADER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_SERVICELOADER_HPP_IMPL
#define J2CPP_JAVA_UTIL_SERVICELOADER_HPP_IMPL

namespace j2cpp {



java::util::ServiceLoader::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::ServiceLoader::operator local_ref<java::lang::Iterable>() const
{
	return local_ref<java::lang::Iterable>(get_jobject());
}


void java::util::ServiceLoader::reload()
{
	return call_method<
		java::util::ServiceLoader::J2CPP_CLASS_NAME,
		java::util::ServiceLoader::J2CPP_METHOD_NAME(1),
		java::util::ServiceLoader::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject());
}

local_ref< java::util::Iterator > java::util::ServiceLoader::iterator()
{
	return call_method<
		java::util::ServiceLoader::J2CPP_CLASS_NAME,
		java::util::ServiceLoader::J2CPP_METHOD_NAME(2),
		java::util::ServiceLoader::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::util::Iterator > >
	(get_jobject());
}

local_ref< java::util::ServiceLoader > java::util::ServiceLoader::load(local_ref< java::lang::Class > const &a0, local_ref< java::lang::ClassLoader > const &a1)
{
	return call_static_method<
		java::util::ServiceLoader::J2CPP_CLASS_NAME,
		java::util::ServiceLoader::J2CPP_METHOD_NAME(3),
		java::util::ServiceLoader::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::util::ServiceLoader > >
	(a0, a1);
}

local_ref< java::util::ServiceLoader > java::util::ServiceLoader::load(local_ref< java::lang::Class > const &a0)
{
	return call_static_method<
		java::util::ServiceLoader::J2CPP_CLASS_NAME,
		java::util::ServiceLoader::J2CPP_METHOD_NAME(4),
		java::util::ServiceLoader::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::util::ServiceLoader > >
	(a0);
}

local_ref< java::util::ServiceLoader > java::util::ServiceLoader::loadInstalled(local_ref< java::lang::Class > const &a0)
{
	return call_static_method<
		java::util::ServiceLoader::J2CPP_CLASS_NAME,
		java::util::ServiceLoader::J2CPP_METHOD_NAME(5),
		java::util::ServiceLoader::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::util::ServiceLoader > >
	(a0);
}

local_ref< java::lang::String > java::util::ServiceLoader::toString()
{
	return call_method<
		java::util::ServiceLoader::J2CPP_CLASS_NAME,
		java::util::ServiceLoader::J2CPP_METHOD_NAME(6),
		java::util::ServiceLoader::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::ServiceLoader,"java/util/ServiceLoader")
J2CPP_DEFINE_METHOD(java::util::ServiceLoader,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::ServiceLoader,1,"reload","()V")
J2CPP_DEFINE_METHOD(java::util::ServiceLoader,2,"iterator","()Ljava/util/Iterator;")
J2CPP_DEFINE_METHOD(java::util::ServiceLoader,3,"load","(Ljava/lang/Class;Ljava/lang/ClassLoader;)Ljava/util/ServiceLoader;")
J2CPP_DEFINE_METHOD(java::util::ServiceLoader,4,"load","(Ljava/lang/Class;)Ljava/util/ServiceLoader;")
J2CPP_DEFINE_METHOD(java::util::ServiceLoader,5,"loadInstalled","(Ljava/lang/Class;)Ljava/util/ServiceLoader;")
J2CPP_DEFINE_METHOD(java::util::ServiceLoader,6,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_SERVICELOADER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
