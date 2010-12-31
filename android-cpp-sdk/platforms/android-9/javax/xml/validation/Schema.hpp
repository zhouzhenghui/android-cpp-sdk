/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.xml.validation.Schema
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_VALIDATION_SCHEMA_HPP_DECL
#define J2CPP_JAVAX_XML_VALIDATION_SCHEMA_HPP_DECL


namespace j2cpp { namespace javax { namespace xml { namespace validation { class ValidatorHandler; } } } }
namespace j2cpp { namespace javax { namespace xml { namespace validation { class Validator; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <javax/xml/validation/Validator.hpp>
#include <javax/xml/validation/ValidatorHandler.hpp>


namespace j2cpp {

namespace javax { namespace xml { namespace validation {

	class Schema;
	class Schema
		: public object<Schema>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit Schema(jobject jobj)
		: object<Schema>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< javax::xml::validation::Validator > newValidator();
		local_ref< javax::xml::validation::ValidatorHandler > newValidatorHandler();
	}; //class Schema

} //namespace validation
} //namespace xml
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_VALIDATION_SCHEMA_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_VALIDATION_SCHEMA_HPP_IMPL
#define J2CPP_JAVAX_XML_VALIDATION_SCHEMA_HPP_IMPL

namespace j2cpp {



javax::xml::validation::Schema::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< javax::xml::validation::Validator > javax::xml::validation::Schema::newValidator()
{
	return call_method<
		javax::xml::validation::Schema::J2CPP_CLASS_NAME,
		javax::xml::validation::Schema::J2CPP_METHOD_NAME(1),
		javax::xml::validation::Schema::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< javax::xml::validation::Validator > >
	(get_jobject());
}

local_ref< javax::xml::validation::ValidatorHandler > javax::xml::validation::Schema::newValidatorHandler()
{
	return call_method<
		javax::xml::validation::Schema::J2CPP_CLASS_NAME,
		javax::xml::validation::Schema::J2CPP_METHOD_NAME(2),
		javax::xml::validation::Schema::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< javax::xml::validation::ValidatorHandler > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(javax::xml::validation::Schema,"javax/xml/validation/Schema")
J2CPP_DEFINE_METHOD(javax::xml::validation::Schema,0,"<init>","()V")
J2CPP_DEFINE_METHOD(javax::xml::validation::Schema,1,"newValidator","()Ljavax/xml/validation/Validator;")
J2CPP_DEFINE_METHOD(javax::xml::validation::Schema,2,"newValidatorHandler","()Ljavax/xml/validation/ValidatorHandler;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_VALIDATION_SCHEMA_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
