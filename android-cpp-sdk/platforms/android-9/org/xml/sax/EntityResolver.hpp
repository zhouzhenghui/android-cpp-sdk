/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.xml.sax.EntityResolver
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_ENTITYRESOLVER_HPP_DECL
#define J2CPP_ORG_XML_SAX_ENTITYRESOLVER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class InputSource; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/xml/sax/InputSource.hpp>


namespace j2cpp {

namespace org { namespace xml { namespace sax {

	class EntityResolver;
	class EntityResolver
		: public object<EntityResolver>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit EntityResolver(jobject jobj)
		: object<EntityResolver>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< org::xml::sax::InputSource > resolveEntity(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
	}; //class EntityResolver

} //namespace sax
} //namespace xml
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_ENTITYRESOLVER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_ENTITYRESOLVER_HPP_IMPL
#define J2CPP_ORG_XML_SAX_ENTITYRESOLVER_HPP_IMPL

namespace j2cpp {



org::xml::sax::EntityResolver::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< org::xml::sax::InputSource > org::xml::sax::EntityResolver::resolveEntity(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::xml::sax::EntityResolver::J2CPP_CLASS_NAME,
		org::xml::sax::EntityResolver::J2CPP_METHOD_NAME(0),
		org::xml::sax::EntityResolver::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< org::xml::sax::InputSource > >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(org::xml::sax::EntityResolver,"org/xml/sax/EntityResolver")
J2CPP_DEFINE_METHOD(org::xml::sax::EntityResolver,0,"resolveEntity","(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;")

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_ENTITYRESOLVER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
