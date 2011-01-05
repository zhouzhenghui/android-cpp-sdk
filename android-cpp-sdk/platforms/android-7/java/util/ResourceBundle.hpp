/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.ResourceBundle
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_RESOURCEBUNDLE_HPP_DECL
#define J2CPP_JAVA_UTIL_RESOURCEBUNDLE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class ClassLoader; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class Locale; } } }
namespace j2cpp { namespace java { namespace util { class Enumeration; } } }


#include <java/lang/ClassLoader.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Enumeration.hpp>
#include <java/util/Locale.hpp>


namespace j2cpp {

namespace java { namespace util {

	class ResourceBundle;
	class ResourceBundle
		: public object<ResourceBundle>
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
		J2CPP_DECLARE_FIELD(0)

		explicit ResourceBundle(jobject jobj)
		: object<ResourceBundle>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		ResourceBundle();
		static local_ref< java::util::ResourceBundle > getBundle(local_ref< java::lang::String >  const&);
		static local_ref< java::util::ResourceBundle > getBundle(local_ref< java::lang::String >  const&, local_ref< java::util::Locale >  const&);
		static local_ref< java::util::ResourceBundle > getBundle(local_ref< java::lang::String >  const&, local_ref< java::util::Locale >  const&, local_ref< java::lang::ClassLoader >  const&);
		local_ref< java::util::Enumeration > getKeys();
		local_ref< java::util::Locale > getLocale();
		local_ref< java::lang::Object > getObject(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getString(local_ref< java::lang::String >  const&);
		local_ref< array< local_ref< java::lang::String >, 1> > getStringArray(local_ref< java::lang::String >  const&);

	}; //class ResourceBundle

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_RESOURCEBUNDLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_RESOURCEBUNDLE_HPP_IMPL
#define J2CPP_JAVA_UTIL_RESOURCEBUNDLE_HPP_IMPL

namespace j2cpp {



java::util::ResourceBundle::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::util::ResourceBundle::ResourceBundle()
: object<java::util::ResourceBundle>(
	call_new_object<
		java::util::ResourceBundle::J2CPP_CLASS_NAME,
		java::util::ResourceBundle::J2CPP_METHOD_NAME(0),
		java::util::ResourceBundle::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


local_ref< java::util::ResourceBundle > java::util::ResourceBundle::getBundle(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		java::util::ResourceBundle::J2CPP_CLASS_NAME,
		java::util::ResourceBundle::J2CPP_METHOD_NAME(1),
		java::util::ResourceBundle::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::util::ResourceBundle >
	>(a0);
}

local_ref< java::util::ResourceBundle > java::util::ResourceBundle::getBundle(local_ref< java::lang::String > const &a0, local_ref< java::util::Locale > const &a1)
{
	return call_static_method<
		java::util::ResourceBundle::J2CPP_CLASS_NAME,
		java::util::ResourceBundle::J2CPP_METHOD_NAME(2),
		java::util::ResourceBundle::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::util::ResourceBundle >
	>(a0, a1);
}

local_ref< java::util::ResourceBundle > java::util::ResourceBundle::getBundle(local_ref< java::lang::String > const &a0, local_ref< java::util::Locale > const &a1, local_ref< java::lang::ClassLoader > const &a2)
{
	return call_static_method<
		java::util::ResourceBundle::J2CPP_CLASS_NAME,
		java::util::ResourceBundle::J2CPP_METHOD_NAME(3),
		java::util::ResourceBundle::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::util::ResourceBundle >
	>(a0, a1, a2);
}

local_ref< java::util::Enumeration > java::util::ResourceBundle::getKeys()
{
	return call_method<
		java::util::ResourceBundle::J2CPP_CLASS_NAME,
		java::util::ResourceBundle::J2CPP_METHOD_NAME(4),
		java::util::ResourceBundle::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::util::Enumeration >
	>(get_jobject());
}

local_ref< java::util::Locale > java::util::ResourceBundle::getLocale()
{
	return call_method<
		java::util::ResourceBundle::J2CPP_CLASS_NAME,
		java::util::ResourceBundle::J2CPP_METHOD_NAME(5),
		java::util::ResourceBundle::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::util::Locale >
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::ResourceBundle::getObject(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::util::ResourceBundle::J2CPP_CLASS_NAME,
		java::util::ResourceBundle::J2CPP_METHOD_NAME(6),
		java::util::ResourceBundle::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > java::util::ResourceBundle::getString(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::util::ResourceBundle::J2CPP_CLASS_NAME,
		java::util::ResourceBundle::J2CPP_METHOD_NAME(7),
		java::util::ResourceBundle::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< array< local_ref< java::lang::String >, 1> > java::util::ResourceBundle::getStringArray(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::util::ResourceBundle::J2CPP_CLASS_NAME,
		java::util::ResourceBundle::J2CPP_METHOD_NAME(8),
		java::util::ResourceBundle::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< array< local_ref< java::lang::String >, 1> >
	>(get_jobject(), a0);
}





J2CPP_DEFINE_CLASS(java::util::ResourceBundle,"java/util/ResourceBundle")
J2CPP_DEFINE_METHOD(java::util::ResourceBundle,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::ResourceBundle,1,"getBundle","(Ljava/lang/String;)Ljava/util/ResourceBundle;")
J2CPP_DEFINE_METHOD(java::util::ResourceBundle,2,"getBundle","(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/ResourceBundle;")
J2CPP_DEFINE_METHOD(java::util::ResourceBundle,3,"getBundle","(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/ClassLoader;)Ljava/util/ResourceBundle;")
J2CPP_DEFINE_METHOD(java::util::ResourceBundle,4,"getKeys","()Ljava/util/Enumeration;")
J2CPP_DEFINE_METHOD(java::util::ResourceBundle,5,"getLocale","()Ljava/util/Locale;")
J2CPP_DEFINE_METHOD(java::util::ResourceBundle,6,"getObject","(Ljava/lang/String;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::ResourceBundle,7,"getString","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::ResourceBundle,8,"getStringArray","(Ljava/lang/String;)[java.lang.String")
J2CPP_DEFINE_METHOD(java::util::ResourceBundle,9,"handleGetObject","(Ljava/lang/String;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::ResourceBundle,10,"setParent","(Ljava/util/ResourceBundle;)V")
J2CPP_DEFINE_FIELD(java::util::ResourceBundle,0,"parent","Ljava/util/ResourceBundle;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_RESOURCEBUNDLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
