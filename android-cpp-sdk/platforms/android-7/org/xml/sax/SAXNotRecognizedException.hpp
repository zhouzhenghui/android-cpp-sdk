/*================================================================================
  code generated by: java2cpp
  class: org.xml.sax.SAXNotRecognizedException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_SAXNOTRECOGNIZEDEXCEPTION_HPP_DECL
#define J2CPP_ORG_XML_SAX_SAXNOTRECOGNIZEDEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class SAXException; } } } }


#include <java/lang/String.hpp>
#include <org/xml/sax/SAXException.hpp>


namespace j2cpp {

namespace org { namespace xml { namespace sax {

	class SAXNotRecognizedException;
	class SAXNotRecognizedException
		: public cpp_object<SAXNotRecognizedException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit SAXNotRecognizedException(jobject jobj)
		: cpp_object<SAXNotRecognizedException>(jobj)
		{
		}

		operator local_ref<org::xml::sax::SAXException>() const;


		SAXNotRecognizedException();
		SAXNotRecognizedException(local_ref< java::lang::String > const&);
	}; //class SAXNotRecognizedException

} //namespace sax
} //namespace xml
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_SAXNOTRECOGNIZEDEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_SAXNOTRECOGNIZEDEXCEPTION_HPP_IMPL
#define J2CPP_ORG_XML_SAX_SAXNOTRECOGNIZEDEXCEPTION_HPP_IMPL

namespace j2cpp {



org::xml::sax::SAXNotRecognizedException::operator local_ref<org::xml::sax::SAXException>() const
{
	return local_ref<org::xml::sax::SAXException>(get_jtype());
}


org::xml::sax::SAXNotRecognizedException::SAXNotRecognizedException()
: cpp_object<org::xml::sax::SAXNotRecognizedException>(
	environment::get().get_jenv()->NewObject(
		get_class<org::xml::sax::SAXNotRecognizedException::J2CPP_CLASS_NAME>(),
		get_method_id<org::xml::sax::SAXNotRecognizedException::J2CPP_CLASS_NAME, org::xml::sax::SAXNotRecognizedException::J2CPP_METHOD_NAME(0), org::xml::sax::SAXNotRecognizedException::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}



org::xml::sax::SAXNotRecognizedException::SAXNotRecognizedException(local_ref< java::lang::String > const &a0)
: cpp_object<org::xml::sax::SAXNotRecognizedException>(
	environment::get().get_jenv()->NewObject(
		get_class<org::xml::sax::SAXNotRecognizedException::J2CPP_CLASS_NAME>(),
		get_method_id<org::xml::sax::SAXNotRecognizedException::J2CPP_CLASS_NAME, org::xml::sax::SAXNotRecognizedException::J2CPP_METHOD_NAME(1), org::xml::sax::SAXNotRecognizedException::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype()
	)
)
{
}



J2CPP_DEFINE_CLASS(org::xml::sax::SAXNotRecognizedException,"org/xml/sax/SAXNotRecognizedException")
J2CPP_DEFINE_METHOD(org::xml::sax::SAXNotRecognizedException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::xml::sax::SAXNotRecognizedException,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_SAXNOTRECOGNIZEDEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
