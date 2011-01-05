/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.xml.sax.helpers.XMLReaderAdapter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_HELPERS_XMLREADERADAPTER_HPP_DECL
#define J2CPP_ORG_XML_SAX_HELPERS_XMLREADERADAPTER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Locale; } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class ErrorHandler; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class Parser; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class EntityResolver; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class Locator; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class XMLReader; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class ContentHandler; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class DocumentHandler; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class InputSource; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class Attributes; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class DTDHandler; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Locale.hpp>
#include <org/xml/sax/Attributes.hpp>
#include <org/xml/sax/ContentHandler.hpp>
#include <org/xml/sax/DTDHandler.hpp>
#include <org/xml/sax/DocumentHandler.hpp>
#include <org/xml/sax/EntityResolver.hpp>
#include <org/xml/sax/ErrorHandler.hpp>
#include <org/xml/sax/InputSource.hpp>
#include <org/xml/sax/Locator.hpp>
#include <org/xml/sax/Parser.hpp>
#include <org/xml/sax/XMLReader.hpp>


namespace j2cpp {

namespace org { namespace xml { namespace sax { namespace helpers {

	class XMLReaderAdapter;
	class XMLReaderAdapter
		: public object<XMLReaderAdapter>
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
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)

		explicit XMLReaderAdapter(jobject jobj)
		: object<XMLReaderAdapter>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::xml::sax::Parser>() const;
		operator local_ref<org::xml::sax::ContentHandler>() const;


		XMLReaderAdapter();
		XMLReaderAdapter(local_ref< org::xml::sax::XMLReader > const&);
		void setLocale(local_ref< java::util::Locale >  const&);
		void setEntityResolver(local_ref< org::xml::sax::EntityResolver >  const&);
		void setDTDHandler(local_ref< org::xml::sax::DTDHandler >  const&);
		void setDocumentHandler(local_ref< org::xml::sax::DocumentHandler >  const&);
		void setErrorHandler(local_ref< org::xml::sax::ErrorHandler >  const&);
		void parse(local_ref< java::lang::String >  const&);
		void parse(local_ref< org::xml::sax::InputSource >  const&);
		void setDocumentLocator(local_ref< org::xml::sax::Locator >  const&);
		void startDocument();
		void endDocument();
		void startPrefixMapping(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		void endPrefixMapping(local_ref< java::lang::String >  const&);
		void startElement(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< org::xml::sax::Attributes >  const&);
		void endElement(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		void characters(local_ref< array<jchar,1> >  const&, jint, jint);
		void ignorableWhitespace(local_ref< array<jchar,1> >  const&, jint, jint);
		void processingInstruction(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		void skippedEntity(local_ref< java::lang::String >  const&);
	}; //class XMLReaderAdapter

} //namespace helpers
} //namespace sax
} //namespace xml
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_HELPERS_XMLREADERADAPTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_HELPERS_XMLREADERADAPTER_HPP_IMPL
#define J2CPP_ORG_XML_SAX_HELPERS_XMLREADERADAPTER_HPP_IMPL

namespace j2cpp {



org::xml::sax::helpers::XMLReaderAdapter::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::xml::sax::helpers::XMLReaderAdapter::operator local_ref<org::xml::sax::Parser>() const
{
	return local_ref<org::xml::sax::Parser>(get_jobject());
}

org::xml::sax::helpers::XMLReaderAdapter::operator local_ref<org::xml::sax::ContentHandler>() const
{
	return local_ref<org::xml::sax::ContentHandler>(get_jobject());
}


org::xml::sax::helpers::XMLReaderAdapter::XMLReaderAdapter()
: object<org::xml::sax::helpers::XMLReaderAdapter>(
	call_new_object<
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_NAME(0),
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



org::xml::sax::helpers::XMLReaderAdapter::XMLReaderAdapter(local_ref< org::xml::sax::XMLReader > const &a0)
: object<org::xml::sax::helpers::XMLReaderAdapter>(
	call_new_object<
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_NAME(1),
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


void org::xml::sax::helpers::XMLReaderAdapter::setLocale(local_ref< java::util::Locale > const &a0)
{
	return call_method<
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_NAME(2),
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

void org::xml::sax::helpers::XMLReaderAdapter::setEntityResolver(local_ref< org::xml::sax::EntityResolver > const &a0)
{
	return call_method<
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_NAME(3),
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

void org::xml::sax::helpers::XMLReaderAdapter::setDTDHandler(local_ref< org::xml::sax::DTDHandler > const &a0)
{
	return call_method<
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_NAME(4),
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

void org::xml::sax::helpers::XMLReaderAdapter::setDocumentHandler(local_ref< org::xml::sax::DocumentHandler > const &a0)
{
	return call_method<
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_NAME(5),
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

void org::xml::sax::helpers::XMLReaderAdapter::setErrorHandler(local_ref< org::xml::sax::ErrorHandler > const &a0)
{
	return call_method<
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_NAME(6),
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

void org::xml::sax::helpers::XMLReaderAdapter::parse(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_NAME(7),
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}

void org::xml::sax::helpers::XMLReaderAdapter::parse(local_ref< org::xml::sax::InputSource > const &a0)
{
	return call_method<
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_NAME(8),
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0);
}

void org::xml::sax::helpers::XMLReaderAdapter::setDocumentLocator(local_ref< org::xml::sax::Locator > const &a0)
{
	return call_method<
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_NAME(9),
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0);
}

void org::xml::sax::helpers::XMLReaderAdapter::startDocument()
{
	return call_method<
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_NAME(10),
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject());
}

void org::xml::sax::helpers::XMLReaderAdapter::endDocument()
{
	return call_method<
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_NAME(11),
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject());
}

void org::xml::sax::helpers::XMLReaderAdapter::startPrefixMapping(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_NAME(12),
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject(), a0, a1);
}

void org::xml::sax::helpers::XMLReaderAdapter::endPrefixMapping(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_NAME(13),
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(get_jobject(), a0);
}

void org::xml::sax::helpers::XMLReaderAdapter::startElement(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2, local_ref< org::xml::sax::Attributes > const &a3)
{
	return call_method<
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_NAME(14),
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject(), a0, a1, a2, a3);
}

void org::xml::sax::helpers::XMLReaderAdapter::endElement(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
{
	return call_method<
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_NAME(15),
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(get_jobject(), a0, a1, a2);
}

void org::xml::sax::helpers::XMLReaderAdapter::characters(local_ref< array<jchar,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_NAME(16),
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_SIGNATURE(16), 
		void
	>(get_jobject(), a0, a1, a2);
}

void org::xml::sax::helpers::XMLReaderAdapter::ignorableWhitespace(local_ref< array<jchar,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_NAME(17),
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_SIGNATURE(17), 
		void
	>(get_jobject(), a0, a1, a2);
}

void org::xml::sax::helpers::XMLReaderAdapter::processingInstruction(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_NAME(18),
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_SIGNATURE(18), 
		void
	>(get_jobject(), a0, a1);
}

void org::xml::sax::helpers::XMLReaderAdapter::skippedEntity(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_NAME(19),
		org::xml::sax::helpers::XMLReaderAdapter::J2CPP_METHOD_SIGNATURE(19), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::xml::sax::helpers::XMLReaderAdapter,"org/xml/sax/helpers/XMLReaderAdapter")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::XMLReaderAdapter,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::XMLReaderAdapter,1,"<init>","(Lorg/xml/sax/XMLReader;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::XMLReaderAdapter,2,"setLocale","(Ljava/util/Locale;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::XMLReaderAdapter,3,"setEntityResolver","(Lorg/xml/sax/EntityResolver;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::XMLReaderAdapter,4,"setDTDHandler","(Lorg/xml/sax/DTDHandler;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::XMLReaderAdapter,5,"setDocumentHandler","(Lorg/xml/sax/DocumentHandler;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::XMLReaderAdapter,6,"setErrorHandler","(Lorg/xml/sax/ErrorHandler;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::XMLReaderAdapter,7,"parse","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::XMLReaderAdapter,8,"parse","(Lorg/xml/sax/InputSource;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::XMLReaderAdapter,9,"setDocumentLocator","(Lorg/xml/sax/Locator;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::XMLReaderAdapter,10,"startDocument","()V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::XMLReaderAdapter,11,"endDocument","()V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::XMLReaderAdapter,12,"startPrefixMapping","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::XMLReaderAdapter,13,"endPrefixMapping","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::XMLReaderAdapter,14,"startElement","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::XMLReaderAdapter,15,"endElement","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::XMLReaderAdapter,16,"characters","([CII)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::XMLReaderAdapter,17,"ignorableWhitespace","([CII)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::XMLReaderAdapter,18,"processingInstruction","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::XMLReaderAdapter,19,"skippedEntity","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_HELPERS_XMLREADERADAPTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
