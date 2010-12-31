/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.xml.transform.sax.TransformerHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_TRANSFORM_SAX_TRANSFORMERHANDLER_HPP_DECL
#define J2CPP_JAVAX_XML_TRANSFORM_SAX_TRANSFORMERHANDLER_HPP_DECL


namespace j2cpp { namespace org { namespace xml { namespace sax { namespace ext { class LexicalHandler; } } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class DTDHandler; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class ContentHandler; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace javax { namespace xml { namespace transform { class Result; } } } }
namespace j2cpp { namespace javax { namespace xml { namespace transform { class Transformer; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <javax/xml/transform/Result.hpp>
#include <javax/xml/transform/Transformer.hpp>
#include <org/xml/sax/ContentHandler.hpp>
#include <org/xml/sax/DTDHandler.hpp>
#include <org/xml/sax/ext/LexicalHandler.hpp>


namespace j2cpp {

namespace javax { namespace xml { namespace transform { namespace sax {

	class TransformerHandler;
	class TransformerHandler
		: public object<TransformerHandler>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit TransformerHandler(jobject jobj)
		: object<TransformerHandler>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::xml::sax::ContentHandler>() const;
		operator local_ref<org::xml::sax::ext::LexicalHandler>() const;
		operator local_ref<org::xml::sax::DTDHandler>() const;


		void setResult(local_ref< javax::xml::transform::Result >  const&);
		void setSystemId(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getSystemId();
		local_ref< javax::xml::transform::Transformer > getTransformer();
	}; //class TransformerHandler

} //namespace sax
} //namespace transform
} //namespace xml
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_TRANSFORM_SAX_TRANSFORMERHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_TRANSFORM_SAX_TRANSFORMERHANDLER_HPP_IMPL
#define J2CPP_JAVAX_XML_TRANSFORM_SAX_TRANSFORMERHANDLER_HPP_IMPL

namespace j2cpp {



javax::xml::transform::sax::TransformerHandler::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

javax::xml::transform::sax::TransformerHandler::operator local_ref<org::xml::sax::ContentHandler>() const
{
	return local_ref<org::xml::sax::ContentHandler>(get_jobject());
}

javax::xml::transform::sax::TransformerHandler::operator local_ref<org::xml::sax::ext::LexicalHandler>() const
{
	return local_ref<org::xml::sax::ext::LexicalHandler>(get_jobject());
}

javax::xml::transform::sax::TransformerHandler::operator local_ref<org::xml::sax::DTDHandler>() const
{
	return local_ref<org::xml::sax::DTDHandler>(get_jobject());
}

void javax::xml::transform::sax::TransformerHandler::setResult(local_ref< javax::xml::transform::Result > const &a0)
{
	return call_method<
		javax::xml::transform::sax::TransformerHandler::J2CPP_CLASS_NAME,
		javax::xml::transform::sax::TransformerHandler::J2CPP_METHOD_NAME(0),
		javax::xml::transform::sax::TransformerHandler::J2CPP_METHOD_SIGNATURE(0), 
		void >
	(get_jobject(), a0);
}

void javax::xml::transform::sax::TransformerHandler::setSystemId(local_ref< java::lang::String > const &a0)
{
	return call_method<
		javax::xml::transform::sax::TransformerHandler::J2CPP_CLASS_NAME,
		javax::xml::transform::sax::TransformerHandler::J2CPP_METHOD_NAME(1),
		javax::xml::transform::sax::TransformerHandler::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0);
}

local_ref< java::lang::String > javax::xml::transform::sax::TransformerHandler::getSystemId()
{
	return call_method<
		javax::xml::transform::sax::TransformerHandler::J2CPP_CLASS_NAME,
		javax::xml::transform::sax::TransformerHandler::J2CPP_METHOD_NAME(2),
		javax::xml::transform::sax::TransformerHandler::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< javax::xml::transform::Transformer > javax::xml::transform::sax::TransformerHandler::getTransformer()
{
	return call_method<
		javax::xml::transform::sax::TransformerHandler::J2CPP_CLASS_NAME,
		javax::xml::transform::sax::TransformerHandler::J2CPP_METHOD_NAME(3),
		javax::xml::transform::sax::TransformerHandler::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< javax::xml::transform::Transformer > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(javax::xml::transform::sax::TransformerHandler,"javax/xml/transform/sax/TransformerHandler")
J2CPP_DEFINE_METHOD(javax::xml::transform::sax::TransformerHandler,0,"setResult","(Ljavax/xml/transform/Result;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::sax::TransformerHandler,1,"setSystemId","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::sax::TransformerHandler,2,"getSystemId","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::xml::transform::sax::TransformerHandler,3,"getTransformer","()Ljavax/xml/transform/Transformer;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_TRANSFORM_SAX_TRANSFORMERHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
