/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.xml.transform.Source
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_TRANSFORM_SOURCE_HPP_DECL
#define J2CPP_JAVAX_XML_TRANSFORM_SOURCE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace javax { namespace xml { namespace transform {

	class Source;
	class Source
		: public object<Source>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit Source(jobject jobj)
		: object<Source>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void setSystemId(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getSystemId();
	}; //class Source

} //namespace transform
} //namespace xml
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_TRANSFORM_SOURCE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_TRANSFORM_SOURCE_HPP_IMPL
#define J2CPP_JAVAX_XML_TRANSFORM_SOURCE_HPP_IMPL

namespace j2cpp {



javax::xml::transform::Source::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void javax::xml::transform::Source::setSystemId(local_ref< java::lang::String > const &a0)
{
	return call_method<
		javax::xml::transform::Source::J2CPP_CLASS_NAME,
		javax::xml::transform::Source::J2CPP_METHOD_NAME(0),
		javax::xml::transform::Source::J2CPP_METHOD_SIGNATURE(0), 
		void >
	(get_jobject(), a0);
}

local_ref< java::lang::String > javax::xml::transform::Source::getSystemId()
{
	return call_method<
		javax::xml::transform::Source::J2CPP_CLASS_NAME,
		javax::xml::transform::Source::J2CPP_METHOD_NAME(1),
		javax::xml::transform::Source::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(javax::xml::transform::Source,"javax/xml/transform/Source")
J2CPP_DEFINE_METHOD(javax::xml::transform::Source,0,"setSystemId","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::Source,1,"getSystemId","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_TRANSFORM_SOURCE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
