/*================================================================================
  code generated by: java2cpp
  class: org.xml.sax.ext.LexicalHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_EXT_LEXICALHANDLER_HPP_DECL
#define J2CPP_ORG_XML_SAX_EXT_LEXICALHANDLER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace org { namespace xml { namespace sax { namespace ext {

	class LexicalHandler;
	class LexicalHandler
		: public cpp_object<LexicalHandler>
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

		explicit LexicalHandler(jobject jobj)
		: cpp_object<LexicalHandler>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void startDTD(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		void endDTD();
		void startEntity(local_ref< java::lang::String > const&);
		void endEntity(local_ref< java::lang::String > const&);
		void startCDATA();
		void endCDATA();
		void comment(local_ref< cpp_char_array<1> > const&, cpp_int const&, cpp_int const&);
	}; //class LexicalHandler

} //namespace ext
} //namespace sax
} //namespace xml
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_EXT_LEXICALHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_EXT_LEXICALHANDLER_HPP_IMPL
#define J2CPP_ORG_XML_SAX_EXT_LEXICALHANDLER_HPP_IMPL

namespace j2cpp {



org::xml::sax::ext::LexicalHandler::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

void org::xml::sax::ext::LexicalHandler::startDTD(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void org::xml::sax::ext::LexicalHandler::endDTD()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

void org::xml::sax::ext::LexicalHandler::startEntity(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

void org::xml::sax::ext::LexicalHandler::endEntity(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

void org::xml::sax::ext::LexicalHandler::startCDATA()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

void org::xml::sax::ext::LexicalHandler::endCDATA()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

void org::xml::sax::ext::LexicalHandler::comment(local_ref< cpp_char_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::xml::sax::ext::LexicalHandler,"org/xml/sax/ext/LexicalHandler")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::LexicalHandler,0,"startDTD","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::LexicalHandler,1,"endDTD","()V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::LexicalHandler,2,"startEntity","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::LexicalHandler,3,"endEntity","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::LexicalHandler,4,"startCDATA","()V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::LexicalHandler,5,"endCDATA","()V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::LexicalHandler,6,"comment","([CII)V")

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_EXT_LEXICALHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
