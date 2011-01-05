/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.xml.transform.URIResolver
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_TRANSFORM_URIRESOLVER_HPP_DECL
#define J2CPP_JAVAX_XML_TRANSFORM_URIRESOLVER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace javax { namespace xml { namespace transform { class Source; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <javax/xml/transform/Source.hpp>


namespace j2cpp {

namespace javax { namespace xml { namespace transform {

	class URIResolver;
	class URIResolver
		: public object<URIResolver>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit URIResolver(jobject jobj)
		: object<URIResolver>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< javax::xml::transform::Source > resolve(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
	}; //class URIResolver

} //namespace transform
} //namespace xml
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_TRANSFORM_URIRESOLVER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_TRANSFORM_URIRESOLVER_HPP_IMPL
#define J2CPP_JAVAX_XML_TRANSFORM_URIRESOLVER_HPP_IMPL

namespace j2cpp {



javax::xml::transform::URIResolver::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< javax::xml::transform::Source > javax::xml::transform::URIResolver::resolve(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		javax::xml::transform::URIResolver::J2CPP_CLASS_NAME,
		javax::xml::transform::URIResolver::J2CPP_METHOD_NAME(0),
		javax::xml::transform::URIResolver::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< javax::xml::transform::Source >
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(javax::xml::transform::URIResolver,"javax/xml/transform/URIResolver")
J2CPP_DEFINE_METHOD(javax::xml::transform::URIResolver,0,"resolve","(Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/transform/Source;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_TRANSFORM_URIRESOLVER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
