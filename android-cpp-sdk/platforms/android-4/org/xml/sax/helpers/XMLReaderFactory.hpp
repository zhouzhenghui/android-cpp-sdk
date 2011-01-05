/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.xml.sax.helpers.XMLReaderFactory
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_HELPERS_XMLREADERFACTORY_HPP_DECL
#define J2CPP_ORG_XML_SAX_HELPERS_XMLREADERFACTORY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class XMLReader; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/xml/sax/XMLReader.hpp>


namespace j2cpp {

namespace org { namespace xml { namespace sax { namespace helpers {

	class XMLReaderFactory;
	class XMLReaderFactory
		: public object<XMLReaderFactory>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit XMLReaderFactory(jobject jobj)
		: object<XMLReaderFactory>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< org::xml::sax::XMLReader > createXMLReader();
		static local_ref< org::xml::sax::XMLReader > createXMLReader(local_ref< java::lang::String >  const&);
	}; //class XMLReaderFactory

} //namespace helpers
} //namespace sax
} //namespace xml
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_HELPERS_XMLREADERFACTORY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_HELPERS_XMLREADERFACTORY_HPP_IMPL
#define J2CPP_ORG_XML_SAX_HELPERS_XMLREADERFACTORY_HPP_IMPL

namespace j2cpp {



org::xml::sax::helpers::XMLReaderFactory::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< org::xml::sax::XMLReader > org::xml::sax::helpers::XMLReaderFactory::createXMLReader()
{
	return call_static_method<
		org::xml::sax::helpers::XMLReaderFactory::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::XMLReaderFactory::J2CPP_METHOD_NAME(1),
		org::xml::sax::helpers::XMLReaderFactory::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< org::xml::sax::XMLReader >
	>();
}

local_ref< org::xml::sax::XMLReader > org::xml::sax::helpers::XMLReaderFactory::createXMLReader(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		org::xml::sax::helpers::XMLReaderFactory::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::XMLReaderFactory::J2CPP_METHOD_NAME(2),
		org::xml::sax::helpers::XMLReaderFactory::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< org::xml::sax::XMLReader >
	>(a0);
}


J2CPP_DEFINE_CLASS(org::xml::sax::helpers::XMLReaderFactory,"org/xml/sax/helpers/XMLReaderFactory")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::XMLReaderFactory,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::XMLReaderFactory,1,"createXMLReader","()Lorg/xml/sax/XMLReader;")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::XMLReaderFactory,2,"createXMLReader","(Ljava/lang/String;)Lorg/xml/sax/XMLReader;")

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_HELPERS_XMLREADERFACTORY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
