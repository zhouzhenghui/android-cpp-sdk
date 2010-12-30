/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.w3c.dom.DOMImplementation
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_DOMIMPLEMENTATION_HPP_DECL
#define J2CPP_ORG_W3C_DOM_DOMIMPLEMENTATION_HPP_DECL


namespace j2cpp { namespace org { namespace w3c { namespace dom { class Document; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class DocumentType; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/w3c/dom/Document.hpp>
#include <org/w3c/dom/DocumentType.hpp>


namespace j2cpp {

namespace org { namespace w3c { namespace dom {

	class DOMImplementation;
	class DOMImplementation
		: public object<DOMImplementation>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit DOMImplementation(jobject jobj)
		: object<DOMImplementation>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jboolean hasFeature(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		local_ref< org::w3c::dom::DocumentType > createDocumentType(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		local_ref< org::w3c::dom::Document > createDocument(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< org::w3c::dom::DocumentType >  const&);
	}; //class DOMImplementation

} //namespace dom
} //namespace w3c
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_DOMIMPLEMENTATION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_DOMIMPLEMENTATION_HPP_IMPL
#define J2CPP_ORG_W3C_DOM_DOMIMPLEMENTATION_HPP_IMPL

namespace j2cpp {



org::w3c::dom::DOMImplementation::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jboolean org::w3c::dom::DOMImplementation::hasFeature(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::w3c::dom::DOMImplementation::J2CPP_CLASS_NAME,
		org::w3c::dom::DOMImplementation::J2CPP_METHOD_NAME(0),
		org::w3c::dom::DOMImplementation::J2CPP_METHOD_SIGNATURE(0), 
		jboolean >
	(get_jobject(), a0, a1);
}

local_ref< org::w3c::dom::DocumentType > org::w3c::dom::DOMImplementation::createDocumentType(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
{
	return call_method<
		org::w3c::dom::DOMImplementation::J2CPP_CLASS_NAME,
		org::w3c::dom::DOMImplementation::J2CPP_METHOD_NAME(1),
		org::w3c::dom::DOMImplementation::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< org::w3c::dom::DocumentType > >
	(get_jobject(), a0, a1, a2);
}

local_ref< org::w3c::dom::Document > org::w3c::dom::DOMImplementation::createDocument(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< org::w3c::dom::DocumentType > const &a2)
{
	return call_method<
		org::w3c::dom::DOMImplementation::J2CPP_CLASS_NAME,
		org::w3c::dom::DOMImplementation::J2CPP_METHOD_NAME(2),
		org::w3c::dom::DOMImplementation::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< org::w3c::dom::Document > >
	(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(org::w3c::dom::DOMImplementation,"org/w3c/dom/DOMImplementation")
J2CPP_DEFINE_METHOD(org::w3c::dom::DOMImplementation,0,"hasFeature","(Ljava/lang/String;Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::w3c::dom::DOMImplementation,1,"createDocumentType","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/DocumentType;")
J2CPP_DEFINE_METHOD(org::w3c::dom::DOMImplementation,2,"createDocument","(Ljava/lang/String;Ljava/lang/String;Lorg/w3c/dom/DocumentType;)Lorg/w3c/dom/Document;")

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_DOMIMPLEMENTATION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
