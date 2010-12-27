/*================================================================================
  code generated by: java2cpp
  class: java.util.PropertyResourceBundle
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_PROPERTYRESOURCEBUNDLE_HPP_DECL
#define J2CPP_JAVA_UTIL_PROPERTYRESOURCEBUNDLE_HPP_DECL


namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class Enumeration; } } }
namespace j2cpp { namespace java { namespace util { class ResourceBundle; } } }


#include <java/io/InputStream.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Enumeration.hpp>
#include <java/util/ResourceBundle.hpp>


namespace j2cpp {

namespace java { namespace util {

	class PropertyResourceBundle;
	class PropertyResourceBundle
		: public cpp_object<PropertyResourceBundle>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit PropertyResourceBundle(jobject jobj)
		: cpp_object<PropertyResourceBundle>(jobj)
		{
		}

		operator local_ref<java::util::ResourceBundle>() const;


		PropertyResourceBundle(local_ref< java::io::InputStream > const&);
		local_ref< java::util::Enumeration > getKeys();
		local_ref< java::lang::Object > handleGetObject(local_ref< java::lang::String > const&);
	}; //class PropertyResourceBundle

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_PROPERTYRESOURCEBUNDLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_PROPERTYRESOURCEBUNDLE_HPP_IMPL
#define J2CPP_JAVA_UTIL_PROPERTYRESOURCEBUNDLE_HPP_IMPL

namespace j2cpp {



java::util::PropertyResourceBundle::operator local_ref<java::util::ResourceBundle>() const
{
	return local_ref<java::util::ResourceBundle>(get_jtype());
}


java::util::PropertyResourceBundle::PropertyResourceBundle(local_ref< java::io::InputStream > const &a0)
: cpp_object<java::util::PropertyResourceBundle>(
	environment::get().get_jenv()->NewObject(
		get_class<java::util::PropertyResourceBundle::J2CPP_CLASS_NAME>(),
		get_method_id<java::util::PropertyResourceBundle::J2CPP_CLASS_NAME, java::util::PropertyResourceBundle::J2CPP_METHOD_NAME(0), java::util::PropertyResourceBundle::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}


local_ref< java::util::Enumeration > java::util::PropertyResourceBundle::getKeys()
{
	return local_ref< java::util::Enumeration >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::lang::Object > java::util::PropertyResourceBundle::handleGetObject(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::util::PropertyResourceBundle,"java/util/PropertyResourceBundle")
J2CPP_DEFINE_METHOD(java::util::PropertyResourceBundle,0,"<init>","(Ljava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(java::util::PropertyResourceBundle,1,"getKeys","()Ljava/util/Enumeration;")
J2CPP_DEFINE_METHOD(java::util::PropertyResourceBundle,2,"handleGetObject","(Ljava/lang/String;)Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_PROPERTYRESOURCEBUNDLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
