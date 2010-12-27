/*================================================================================
  code generated by: java2cpp
  class: java.lang.reflect.ParameterizedType
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_REFLECT_PARAMETERIZEDTYPE_HPP_DECL
#define J2CPP_JAVA_LANG_REFLECT_PARAMETERIZEDTYPE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { namespace reflect { class Type; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/reflect/Type.hpp>


namespace j2cpp {

namespace java { namespace lang { namespace reflect {

	class ParameterizedType;
	class ParameterizedType
		: public cpp_object<ParameterizedType>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit ParameterizedType(jobject jobj)
		: cpp_object<ParameterizedType>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::reflect::Type>() const;


		local_ref< cpp_object_array<java::lang::reflect::Type, 1> > getActualTypeArguments();
		local_ref< java::lang::reflect::Type > getOwnerType();
		local_ref< java::lang::reflect::Type > getRawType();
	}; //class ParameterizedType

} //namespace reflect
} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_REFLECT_PARAMETERIZEDTYPE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_REFLECT_PARAMETERIZEDTYPE_HPP_IMPL
#define J2CPP_JAVA_LANG_REFLECT_PARAMETERIZEDTYPE_HPP_IMPL

namespace j2cpp {



java::lang::reflect::ParameterizedType::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

java::lang::reflect::ParameterizedType::operator local_ref<java::lang::reflect::Type>() const
{
	return local_ref<java::lang::reflect::Type>(get_jtype());
}

local_ref< cpp_object_array<java::lang::reflect::Type, 1> > java::lang::reflect::ParameterizedType::getActualTypeArguments()
{
	return local_ref< cpp_object_array<java::lang::reflect::Type, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::lang::reflect::Type > java::lang::reflect::ParameterizedType::getOwnerType()
{
	return local_ref< java::lang::reflect::Type >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::lang::reflect::Type > java::lang::reflect::ParameterizedType::getRawType()
{
	return local_ref< java::lang::reflect::Type >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::lang::reflect::ParameterizedType,"java/lang/reflect/ParameterizedType")
J2CPP_DEFINE_METHOD(java::lang::reflect::ParameterizedType,0,"getActualTypeArguments","()[java.lang.reflect.Type")
J2CPP_DEFINE_METHOD(java::lang::reflect::ParameterizedType,1,"getOwnerType","()Ljava/lang/reflect/Type;")
J2CPP_DEFINE_METHOD(java::lang::reflect::ParameterizedType,2,"getRawType","()Ljava/lang/reflect/Type;")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_REFLECT_PARAMETERIZEDTYPE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
