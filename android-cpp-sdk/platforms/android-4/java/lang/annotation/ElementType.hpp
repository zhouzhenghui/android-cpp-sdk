/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.annotation.ElementType
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_ANNOTATION_ELEMENTTYPE_HPP_DECL
#define J2CPP_JAVA_LANG_ANNOTATION_ELEMENTTYPE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Enum; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Enum.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace lang { namespace annotation {

	class ElementType;
	class ElementType
		: public object<ElementType>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)

		explicit ElementType(jobject jobj)
		: object<ElementType>(jobj)
		{
		}

		operator local_ref<java::lang::Enum>() const;


		static local_ref< array< local_ref< java::lang::annotation::ElementType >, 1> > values();
		static local_ref< java::lang::annotation::ElementType > valueOf(local_ref< java::lang::String >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::annotation::ElementType > > ANNOTATION_TYPE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::annotation::ElementType > > CONSTRUCTOR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::annotation::ElementType > > FIELD;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::annotation::ElementType > > LOCAL_VARIABLE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::lang::annotation::ElementType > > METHOD;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< java::lang::annotation::ElementType > > PACKAGE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< java::lang::annotation::ElementType > > PARAMETER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), local_ref< java::lang::annotation::ElementType > > TYPE;
	}; //class ElementType

} //namespace annotation
} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_ANNOTATION_ELEMENTTYPE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_ANNOTATION_ELEMENTTYPE_HPP_IMPL
#define J2CPP_JAVA_LANG_ANNOTATION_ELEMENTTYPE_HPP_IMPL

namespace j2cpp {



java::lang::annotation::ElementType::operator local_ref<java::lang::Enum>() const
{
	return local_ref<java::lang::Enum>(get_jobject());
}

local_ref< array< local_ref< java::lang::annotation::ElementType >, 1> > java::lang::annotation::ElementType::values()
{
	return call_static_method<
		java::lang::annotation::ElementType::J2CPP_CLASS_NAME,
		java::lang::annotation::ElementType::J2CPP_METHOD_NAME(0),
		java::lang::annotation::ElementType::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< array< local_ref< java::lang::annotation::ElementType >, 1> > >
	();
}

local_ref< java::lang::annotation::ElementType > java::lang::annotation::ElementType::valueOf(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		java::lang::annotation::ElementType::J2CPP_CLASS_NAME,
		java::lang::annotation::ElementType::J2CPP_METHOD_NAME(1),
		java::lang::annotation::ElementType::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::annotation::ElementType > >
	(a0);
}




static_field<
	java::lang::annotation::ElementType::J2CPP_CLASS_NAME,
	java::lang::annotation::ElementType::J2CPP_FIELD_NAME(0),
	java::lang::annotation::ElementType::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::annotation::ElementType >
> java::lang::annotation::ElementType::ANNOTATION_TYPE;

static_field<
	java::lang::annotation::ElementType::J2CPP_CLASS_NAME,
	java::lang::annotation::ElementType::J2CPP_FIELD_NAME(1),
	java::lang::annotation::ElementType::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::annotation::ElementType >
> java::lang::annotation::ElementType::CONSTRUCTOR;

static_field<
	java::lang::annotation::ElementType::J2CPP_CLASS_NAME,
	java::lang::annotation::ElementType::J2CPP_FIELD_NAME(2),
	java::lang::annotation::ElementType::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::annotation::ElementType >
> java::lang::annotation::ElementType::FIELD;

static_field<
	java::lang::annotation::ElementType::J2CPP_CLASS_NAME,
	java::lang::annotation::ElementType::J2CPP_FIELD_NAME(3),
	java::lang::annotation::ElementType::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::annotation::ElementType >
> java::lang::annotation::ElementType::LOCAL_VARIABLE;

static_field<
	java::lang::annotation::ElementType::J2CPP_CLASS_NAME,
	java::lang::annotation::ElementType::J2CPP_FIELD_NAME(4),
	java::lang::annotation::ElementType::J2CPP_FIELD_SIGNATURE(4),
	local_ref< java::lang::annotation::ElementType >
> java::lang::annotation::ElementType::METHOD;

static_field<
	java::lang::annotation::ElementType::J2CPP_CLASS_NAME,
	java::lang::annotation::ElementType::J2CPP_FIELD_NAME(5),
	java::lang::annotation::ElementType::J2CPP_FIELD_SIGNATURE(5),
	local_ref< java::lang::annotation::ElementType >
> java::lang::annotation::ElementType::PACKAGE;

static_field<
	java::lang::annotation::ElementType::J2CPP_CLASS_NAME,
	java::lang::annotation::ElementType::J2CPP_FIELD_NAME(6),
	java::lang::annotation::ElementType::J2CPP_FIELD_SIGNATURE(6),
	local_ref< java::lang::annotation::ElementType >
> java::lang::annotation::ElementType::PARAMETER;

static_field<
	java::lang::annotation::ElementType::J2CPP_CLASS_NAME,
	java::lang::annotation::ElementType::J2CPP_FIELD_NAME(7),
	java::lang::annotation::ElementType::J2CPP_FIELD_SIGNATURE(7),
	local_ref< java::lang::annotation::ElementType >
> java::lang::annotation::ElementType::TYPE;


J2CPP_DEFINE_CLASS(java::lang::annotation::ElementType,"java/lang/annotation/ElementType")
J2CPP_DEFINE_METHOD(java::lang::annotation::ElementType,0,"values","()[java.lang.annotation.ElementType")
J2CPP_DEFINE_METHOD(java::lang::annotation::ElementType,1,"valueOf","(Ljava/lang/String;)Ljava/lang/annotation/ElementType;")
J2CPP_DEFINE_METHOD(java::lang::annotation::ElementType,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(java::lang::annotation::ElementType,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(java::lang::annotation::ElementType,0,"ANNOTATION_TYPE","Ljava/lang/annotation/ElementType;")
J2CPP_DEFINE_FIELD(java::lang::annotation::ElementType,1,"CONSTRUCTOR","Ljava/lang/annotation/ElementType;")
J2CPP_DEFINE_FIELD(java::lang::annotation::ElementType,2,"FIELD","Ljava/lang/annotation/ElementType;")
J2CPP_DEFINE_FIELD(java::lang::annotation::ElementType,3,"LOCAL_VARIABLE","Ljava/lang/annotation/ElementType;")
J2CPP_DEFINE_FIELD(java::lang::annotation::ElementType,4,"METHOD","Ljava/lang/annotation/ElementType;")
J2CPP_DEFINE_FIELD(java::lang::annotation::ElementType,5,"PACKAGE","Ljava/lang/annotation/ElementType;")
J2CPP_DEFINE_FIELD(java::lang::annotation::ElementType,6,"PARAMETER","Ljava/lang/annotation/ElementType;")
J2CPP_DEFINE_FIELD(java::lang::annotation::ElementType,7,"TYPE","Ljava/lang/annotation/ElementType;")
J2CPP_DEFINE_FIELD(java::lang::annotation::ElementType,8,"$VALUES","[java.lang.annotation.ElementType")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_ANNOTATION_ELEMENTTYPE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
