/*================================================================================
  code generated by: java2cpp
  class: java.lang.Class
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_CLASS_HPP_DECL
#define J2CPP_JAVA_LANG_CLASS_HPP_DECL


namespace j2cpp { namespace java { namespace net { class URL; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace lang { class ClassLoader; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { namespace annotation { class Annotation; } } } }
namespace j2cpp { namespace java { namespace lang { class Package; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { namespace reflect { class Field; } } } }
namespace j2cpp { namespace java { namespace lang { namespace reflect { class Method; } } } }
namespace j2cpp { namespace java { namespace lang { namespace reflect { class Constructor; } } } }
namespace j2cpp { namespace java { namespace lang { namespace reflect { class AnnotatedElement; } } } }
namespace j2cpp { namespace java { namespace lang { namespace reflect { class Type; } } } }
namespace j2cpp { namespace java { namespace lang { namespace reflect { class GenericDeclaration; } } } }
namespace j2cpp { namespace java { namespace lang { namespace reflect { class TypeVariable; } } } }
namespace j2cpp { namespace java { namespace security { class ProtectionDomain; } } }


#include <java/io/InputStream.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ClassLoader.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Package.hpp>
#include <java/lang/String.hpp>
#include <java/lang/annotation/Annotation.hpp>
#include <java/lang/reflect/AnnotatedElement.hpp>
#include <java/lang/reflect/Constructor.hpp>
#include <java/lang/reflect/Field.hpp>
#include <java/lang/reflect/GenericDeclaration.hpp>
#include <java/lang/reflect/Method.hpp>
#include <java/lang/reflect/Type.hpp>
#include <java/lang/reflect/TypeVariable.hpp>
#include <java/net/URL.hpp>
#include <java/security/ProtectionDomain.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class Class;
	class Class
		: public cpp_object<Class>
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
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)
		J2CPP_DECLARE_METHOD(37)
		J2CPP_DECLARE_METHOD(38)
		J2CPP_DECLARE_METHOD(39)
		J2CPP_DECLARE_METHOD(40)
		J2CPP_DECLARE_METHOD(41)
		J2CPP_DECLARE_METHOD(42)
		J2CPP_DECLARE_METHOD(43)
		J2CPP_DECLARE_METHOD(44)
		J2CPP_DECLARE_METHOD(45)
		J2CPP_DECLARE_METHOD(46)
		J2CPP_DECLARE_METHOD(47)
		J2CPP_DECLARE_METHOD(48)
		J2CPP_DECLARE_METHOD(49)
		J2CPP_DECLARE_METHOD(50)
		J2CPP_DECLARE_METHOD(51)
		J2CPP_DECLARE_METHOD(52)
		J2CPP_DECLARE_METHOD(53)
		J2CPP_DECLARE_METHOD(54)
		J2CPP_DECLARE_METHOD(55)
		J2CPP_DECLARE_METHOD(56)
		J2CPP_DECLARE_METHOD(57)

		explicit Class(jobject jobj)
		: cpp_object<Class>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::reflect::AnnotatedElement>() const;
		operator local_ref<java::lang::reflect::GenericDeclaration>() const;
		operator local_ref<java::lang::reflect::Type>() const;


		static local_ref< java::lang::Class > forName(local_ref< java::lang::String > const&);
		static local_ref< java::lang::Class > forName(local_ref< java::lang::String > const&, cpp_boolean const&, local_ref< java::lang::ClassLoader > const&);
		local_ref< cpp_object_array<java::lang::Class, 1> > getClasses();
		local_ref< java::lang::annotation::Annotation > getAnnotation(local_ref< java::lang::Class > const&);
		local_ref< cpp_object_array<java::lang::annotation::Annotation, 1> > getAnnotations();
		local_ref< java::lang::String > getCanonicalName();
		local_ref< java::lang::ClassLoader > getClassLoader();
		local_ref< java::lang::Class > getComponentType();
		local_ref< java::lang::reflect::Constructor > getConstructor(local_ref< cpp_object_array<java::lang::Class, 1> > const&);
		local_ref< cpp_object_array<java::lang::reflect::Constructor, 1> > getConstructors();
		local_ref< cpp_object_array<java::lang::annotation::Annotation, 1> > getDeclaredAnnotations();
		local_ref< cpp_object_array<java::lang::Class, 1> > getDeclaredClasses();
		local_ref< java::lang::reflect::Constructor > getDeclaredConstructor(local_ref< cpp_object_array<java::lang::Class, 1> > const&);
		local_ref< cpp_object_array<java::lang::reflect::Constructor, 1> > getDeclaredConstructors();
		local_ref< java::lang::reflect::Field > getDeclaredField(local_ref< java::lang::String > const&);
		local_ref< cpp_object_array<java::lang::reflect::Field, 1> > getDeclaredFields();
		local_ref< java::lang::reflect::Method > getDeclaredMethod(local_ref< java::lang::String > const&, local_ref< cpp_object_array<java::lang::Class, 1> > const&);
		local_ref< cpp_object_array<java::lang::reflect::Method, 1> > getDeclaredMethods();
		local_ref< java::lang::Class > getDeclaringClass();
		local_ref< java::lang::Class > getEnclosingClass();
		local_ref< java::lang::reflect::Constructor > getEnclosingConstructor();
		local_ref< java::lang::reflect::Method > getEnclosingMethod();
		local_ref< cpp_object_array<java::lang::Object, 1> > getEnumConstants();
		local_ref< java::lang::reflect::Field > getField(local_ref< java::lang::String > const&);
		local_ref< cpp_object_array<java::lang::reflect::Field, 1> > getFields();
		local_ref< cpp_object_array<java::lang::reflect::Type, 1> > getGenericInterfaces();
		local_ref< java::lang::reflect::Type > getGenericSuperclass();
		local_ref< cpp_object_array<java::lang::Class, 1> > getInterfaces();
		local_ref< java::lang::reflect::Method > getMethod(local_ref< java::lang::String > const&, local_ref< cpp_object_array<java::lang::Class, 1> > const&);
		local_ref< cpp_object_array<java::lang::reflect::Method, 1> > getMethods();
		cpp_int getModifiers();
		local_ref< java::lang::String > getName();
		local_ref< java::lang::String > getSimpleName();
		local_ref< java::security::ProtectionDomain > getProtectionDomain();
		local_ref< java::net::URL > getResource(local_ref< java::lang::String > const&);
		local_ref< java::io::InputStream > getResourceAsStream(local_ref< java::lang::String > const&);
		local_ref< cpp_object_array<java::lang::Object, 1> > getSigners();
		local_ref< java::lang::Class > getSuperclass();
		local_ref< cpp_object_array<java::lang::reflect::TypeVariable, 1> > getTypeParameters();
		cpp_boolean isAnnotation();
		cpp_boolean isAnnotationPresent(local_ref< java::lang::Class > const&);
		cpp_boolean isAnonymousClass();
		cpp_boolean isArray();
		cpp_boolean isAssignableFrom(local_ref< java::lang::Class > const&);
		cpp_boolean isEnum();
		cpp_boolean isInstance(local_ref< java::lang::Object > const&);
		cpp_boolean isInterface();
		cpp_boolean isLocalClass();
		cpp_boolean isMemberClass();
		cpp_boolean isPrimitive();
		cpp_boolean isSynthetic();
		local_ref< java::lang::Object > newInstance();
		local_ref< java::lang::String > toString();
		local_ref< java::lang::Package > getPackage();
		cpp_boolean desiredAssertionStatus();
		local_ref< java::lang::Class > asSubclass(local_ref< java::lang::Class > const&);
		local_ref< java::lang::Object > cast(local_ref< java::lang::Object > const&);
	}; //class Class

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_CLASS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_CLASS_HPP_IMPL
#define J2CPP_JAVA_LANG_CLASS_HPP_IMPL

namespace j2cpp {



java::lang::Class::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

java::lang::Class::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jtype());
}

java::lang::Class::operator local_ref<java::lang::reflect::AnnotatedElement>() const
{
	return local_ref<java::lang::reflect::AnnotatedElement>(get_jtype());
}

java::lang::Class::operator local_ref<java::lang::reflect::GenericDeclaration>() const
{
	return local_ref<java::lang::reflect::GenericDeclaration>(get_jtype());
}

java::lang::Class::operator local_ref<java::lang::reflect::Type>() const
{
	return local_ref<java::lang::reflect::Type>(get_jtype());
}


local_ref< java::lang::Class > java::lang::Class::forName(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::Class >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Class > java::lang::Class::forName(local_ref< java::lang::String > const &a0, cpp_boolean const &a1, local_ref< java::lang::ClassLoader > const &a2)
{
	return local_ref< java::lang::Class >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< cpp_object_array<java::lang::Class, 1> > java::lang::Class::getClasses()
{
	return local_ref< cpp_object_array<java::lang::Class, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< java::lang::annotation::Annotation > java::lang::Class::getAnnotation(local_ref< java::lang::Class > const &a0)
{
	return local_ref< java::lang::annotation::Annotation >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_object_array<java::lang::annotation::Annotation, 1> > java::lang::Class::getAnnotations()
{
	return local_ref< cpp_object_array<java::lang::annotation::Annotation, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< java::lang::String > java::lang::Class::getCanonicalName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< java::lang::ClassLoader > java::lang::Class::getClassLoader()
{
	return local_ref< java::lang::ClassLoader >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

local_ref< java::lang::Class > java::lang::Class::getComponentType()
{
	return local_ref< java::lang::Class >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

local_ref< java::lang::reflect::Constructor > java::lang::Class::getConstructor(local_ref< cpp_object_array<java::lang::Class, 1> > const &a0)
{
	return local_ref< java::lang::reflect::Constructor >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_object_array<java::lang::reflect::Constructor, 1> > java::lang::Class::getConstructors()
{
	return local_ref< cpp_object_array<java::lang::reflect::Constructor, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::annotation::Annotation, 1> > java::lang::Class::getDeclaredAnnotations()
{
	return local_ref< cpp_object_array<java::lang::annotation::Annotation, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::Class, 1> > java::lang::Class::getDeclaredClasses()
{
	return local_ref< cpp_object_array<java::lang::Class, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

local_ref< java::lang::reflect::Constructor > java::lang::Class::getDeclaredConstructor(local_ref< cpp_object_array<java::lang::Class, 1> > const &a0)
{
	return local_ref< java::lang::reflect::Constructor >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_object_array<java::lang::reflect::Constructor, 1> > java::lang::Class::getDeclaredConstructors()
{
	return local_ref< cpp_object_array<java::lang::reflect::Constructor, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

local_ref< java::lang::reflect::Field > java::lang::Class::getDeclaredField(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::reflect::Field >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_object_array<java::lang::reflect::Field, 1> > java::lang::Class::getDeclaredFields()
{
	return local_ref< cpp_object_array<java::lang::reflect::Field, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

local_ref< java::lang::reflect::Method > java::lang::Class::getDeclaredMethod(local_ref< java::lang::String > const &a0, local_ref< cpp_object_array<java::lang::Class, 1> > const &a1)
{
	return local_ref< java::lang::reflect::Method >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< cpp_object_array<java::lang::reflect::Method, 1> > java::lang::Class::getDeclaredMethods()
{
	return local_ref< cpp_object_array<java::lang::reflect::Method, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

local_ref< java::lang::Class > java::lang::Class::getDeclaringClass()
{
	return local_ref< java::lang::Class >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}

local_ref< java::lang::Class > java::lang::Class::getEnclosingClass()
{
	return local_ref< java::lang::Class >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>()
		)
	);
}

local_ref< java::lang::reflect::Constructor > java::lang::Class::getEnclosingConstructor()
{
	return local_ref< java::lang::reflect::Constructor >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>()
		)
	);
}

local_ref< java::lang::reflect::Method > java::lang::Class::getEnclosingMethod()
{
	return local_ref< java::lang::reflect::Method >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::Object, 1> > java::lang::Class::getEnumConstants()
{
	return local_ref< cpp_object_array<java::lang::Object, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>()
		)
	);
}

local_ref< java::lang::reflect::Field > java::lang::Class::getField(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::reflect::Field >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_object_array<java::lang::reflect::Field, 1> > java::lang::Class::getFields()
{
	return local_ref< cpp_object_array<java::lang::reflect::Field, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::reflect::Type, 1> > java::lang::Class::getGenericInterfaces()
{
	return local_ref< cpp_object_array<java::lang::reflect::Type, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>()
		)
	);
}

local_ref< java::lang::reflect::Type > java::lang::Class::getGenericSuperclass()
{
	return local_ref< java::lang::reflect::Type >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::Class, 1> > java::lang::Class::getInterfaces()
{
	return local_ref< cpp_object_array<java::lang::Class, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>()
		)
	);
}

local_ref< java::lang::reflect::Method > java::lang::Class::getMethod(local_ref< java::lang::String > const &a0, local_ref< cpp_object_array<java::lang::Class, 1> > const &a1)
{
	return local_ref< java::lang::reflect::Method >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< cpp_object_array<java::lang::reflect::Method, 1> > java::lang::Class::getMethods()
{
	return local_ref< cpp_object_array<java::lang::reflect::Method, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>()
		)
	);
}

cpp_int java::lang::Class::getModifiers()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>()
		)
	);
}

local_ref< java::lang::String > java::lang::Class::getName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), false>()
		)
	);
}

local_ref< java::lang::String > java::lang::Class::getSimpleName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), false>()
		)
	);
}

local_ref< java::security::ProtectionDomain > java::lang::Class::getProtectionDomain()
{
	return local_ref< java::security::ProtectionDomain >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(34), J2CPP_METHOD_SIGNATURE(34), false>()
		)
	);
}

local_ref< java::net::URL > java::lang::Class::getResource(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::net::URL >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(35), J2CPP_METHOD_SIGNATURE(35), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::io::InputStream > java::lang::Class::getResourceAsStream(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::io::InputStream >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(36), J2CPP_METHOD_SIGNATURE(36), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_object_array<java::lang::Object, 1> > java::lang::Class::getSigners()
{
	return local_ref< cpp_object_array<java::lang::Object, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(37), J2CPP_METHOD_SIGNATURE(37), false>()
		)
	);
}

local_ref< java::lang::Class > java::lang::Class::getSuperclass()
{
	return local_ref< java::lang::Class >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(38), J2CPP_METHOD_SIGNATURE(38), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::reflect::TypeVariable, 1> > java::lang::Class::getTypeParameters()
{
	return local_ref< cpp_object_array<java::lang::reflect::TypeVariable, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(39), J2CPP_METHOD_SIGNATURE(39), false>()
		)
	);
}

cpp_boolean java::lang::Class::isAnnotation()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(40), J2CPP_METHOD_SIGNATURE(40), false>()
		)
	);
}

cpp_boolean java::lang::Class::isAnnotationPresent(local_ref< java::lang::Class > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(41), J2CPP_METHOD_SIGNATURE(41), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::lang::Class::isAnonymousClass()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(42), J2CPP_METHOD_SIGNATURE(42), false>()
		)
	);
}

cpp_boolean java::lang::Class::isArray()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(43), J2CPP_METHOD_SIGNATURE(43), false>()
		)
	);
}

cpp_boolean java::lang::Class::isAssignableFrom(local_ref< java::lang::Class > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(44), J2CPP_METHOD_SIGNATURE(44), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::lang::Class::isEnum()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(45), J2CPP_METHOD_SIGNATURE(45), false>()
		)
	);
}

cpp_boolean java::lang::Class::isInstance(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(46), J2CPP_METHOD_SIGNATURE(46), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::lang::Class::isInterface()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(47), J2CPP_METHOD_SIGNATURE(47), false>()
		)
	);
}

cpp_boolean java::lang::Class::isLocalClass()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(48), J2CPP_METHOD_SIGNATURE(48), false>()
		)
	);
}

cpp_boolean java::lang::Class::isMemberClass()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(49), J2CPP_METHOD_SIGNATURE(49), false>()
		)
	);
}

cpp_boolean java::lang::Class::isPrimitive()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(50), J2CPP_METHOD_SIGNATURE(50), false>()
		)
	);
}

cpp_boolean java::lang::Class::isSynthetic()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(51), J2CPP_METHOD_SIGNATURE(51), false>()
		)
	);
}

local_ref< java::lang::Object > java::lang::Class::newInstance()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(52), J2CPP_METHOD_SIGNATURE(52), false>()
		)
	);
}

local_ref< java::lang::String > java::lang::Class::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(53), J2CPP_METHOD_SIGNATURE(53), false>()
		)
	);
}

local_ref< java::lang::Package > java::lang::Class::getPackage()
{
	return local_ref< java::lang::Package >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(54), J2CPP_METHOD_SIGNATURE(54), false>()
		)
	);
}

cpp_boolean java::lang::Class::desiredAssertionStatus()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(55), J2CPP_METHOD_SIGNATURE(55), false>()
		)
	);
}

local_ref< java::lang::Class > java::lang::Class::asSubclass(local_ref< java::lang::Class > const &a0)
{
	return local_ref< java::lang::Class >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(56), J2CPP_METHOD_SIGNATURE(56), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::lang::Class::cast(local_ref< java::lang::Object > const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(57), J2CPP_METHOD_SIGNATURE(57), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::lang::Class,"java/lang/Class")
J2CPP_DEFINE_METHOD(java::lang::Class,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::Class,1,"forName","(Ljava/lang/String;)Ljava/lang/Class;")
J2CPP_DEFINE_METHOD(java::lang::Class,2,"forName","(Ljava/lang/String;ZLjava/lang/ClassLoader;)Ljava/lang/Class;")
J2CPP_DEFINE_METHOD(java::lang::Class,3,"getClasses","()[java.lang.Class")
J2CPP_DEFINE_METHOD(java::lang::Class,4,"getAnnotation","(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;")
J2CPP_DEFINE_METHOD(java::lang::Class,5,"getAnnotations","()[java.lang.annotation.Annotation")
J2CPP_DEFINE_METHOD(java::lang::Class,6,"getCanonicalName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::Class,7,"getClassLoader","()Ljava/lang/ClassLoader;")
J2CPP_DEFINE_METHOD(java::lang::Class,8,"getComponentType","()Ljava/lang/Class;")
J2CPP_DEFINE_METHOD(java::lang::Class,9,"getConstructor","([java.lang.Class)Ljava/lang/reflect/Constructor;")
J2CPP_DEFINE_METHOD(java::lang::Class,10,"getConstructors","()[java.lang.reflect.Constructor")
J2CPP_DEFINE_METHOD(java::lang::Class,11,"getDeclaredAnnotations","()[java.lang.annotation.Annotation")
J2CPP_DEFINE_METHOD(java::lang::Class,12,"getDeclaredClasses","()[java.lang.Class")
J2CPP_DEFINE_METHOD(java::lang::Class,13,"getDeclaredConstructor","([java.lang.Class)Ljava/lang/reflect/Constructor;")
J2CPP_DEFINE_METHOD(java::lang::Class,14,"getDeclaredConstructors","()[java.lang.reflect.Constructor")
J2CPP_DEFINE_METHOD(java::lang::Class,15,"getDeclaredField","(Ljava/lang/String;)Ljava/lang/reflect/Field;")
J2CPP_DEFINE_METHOD(java::lang::Class,16,"getDeclaredFields","()[java.lang.reflect.Field")
J2CPP_DEFINE_METHOD(java::lang::Class,17,"getDeclaredMethod","(Ljava/lang/String;[java.lang.Class)Ljava/lang/reflect/Method;")
J2CPP_DEFINE_METHOD(java::lang::Class,18,"getDeclaredMethods","()[java.lang.reflect.Method")
J2CPP_DEFINE_METHOD(java::lang::Class,19,"getDeclaringClass","()Ljava/lang/Class;")
J2CPP_DEFINE_METHOD(java::lang::Class,20,"getEnclosingClass","()Ljava/lang/Class;")
J2CPP_DEFINE_METHOD(java::lang::Class,21,"getEnclosingConstructor","()Ljava/lang/reflect/Constructor;")
J2CPP_DEFINE_METHOD(java::lang::Class,22,"getEnclosingMethod","()Ljava/lang/reflect/Method;")
J2CPP_DEFINE_METHOD(java::lang::Class,23,"getEnumConstants","()[java.lang.Object")
J2CPP_DEFINE_METHOD(java::lang::Class,24,"getField","(Ljava/lang/String;)Ljava/lang/reflect/Field;")
J2CPP_DEFINE_METHOD(java::lang::Class,25,"getFields","()[java.lang.reflect.Field")
J2CPP_DEFINE_METHOD(java::lang::Class,26,"getGenericInterfaces","()[java.lang.reflect.Type")
J2CPP_DEFINE_METHOD(java::lang::Class,27,"getGenericSuperclass","()Ljava/lang/reflect/Type;")
J2CPP_DEFINE_METHOD(java::lang::Class,28,"getInterfaces","()[java.lang.Class")
J2CPP_DEFINE_METHOD(java::lang::Class,29,"getMethod","(Ljava/lang/String;[java.lang.Class)Ljava/lang/reflect/Method;")
J2CPP_DEFINE_METHOD(java::lang::Class,30,"getMethods","()[java.lang.reflect.Method")
J2CPP_DEFINE_METHOD(java::lang::Class,31,"getModifiers","()I")
J2CPP_DEFINE_METHOD(java::lang::Class,32,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::Class,33,"getSimpleName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::Class,34,"getProtectionDomain","()Ljava/security/ProtectionDomain;")
J2CPP_DEFINE_METHOD(java::lang::Class,35,"getResource","(Ljava/lang/String;)Ljava/net/URL;")
J2CPP_DEFINE_METHOD(java::lang::Class,36,"getResourceAsStream","(Ljava/lang/String;)Ljava/io/InputStream;")
J2CPP_DEFINE_METHOD(java::lang::Class,37,"getSigners","()[java.lang.Object")
J2CPP_DEFINE_METHOD(java::lang::Class,38,"getSuperclass","()Ljava/lang/Class;")
J2CPP_DEFINE_METHOD(java::lang::Class,39,"getTypeParameters","()[java.lang.reflect.TypeVariable")
J2CPP_DEFINE_METHOD(java::lang::Class,40,"isAnnotation","()Z")
J2CPP_DEFINE_METHOD(java::lang::Class,41,"isAnnotationPresent","(Ljava/lang/Class;)Z")
J2CPP_DEFINE_METHOD(java::lang::Class,42,"isAnonymousClass","()Z")
J2CPP_DEFINE_METHOD(java::lang::Class,43,"isArray","()Z")
J2CPP_DEFINE_METHOD(java::lang::Class,44,"isAssignableFrom","(Ljava/lang/Class;)Z")
J2CPP_DEFINE_METHOD(java::lang::Class,45,"isEnum","()Z")
J2CPP_DEFINE_METHOD(java::lang::Class,46,"isInstance","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::lang::Class,47,"isInterface","()Z")
J2CPP_DEFINE_METHOD(java::lang::Class,48,"isLocalClass","()Z")
J2CPP_DEFINE_METHOD(java::lang::Class,49,"isMemberClass","()Z")
J2CPP_DEFINE_METHOD(java::lang::Class,50,"isPrimitive","()Z")
J2CPP_DEFINE_METHOD(java::lang::Class,51,"isSynthetic","()Z")
J2CPP_DEFINE_METHOD(java::lang::Class,52,"newInstance","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::lang::Class,53,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::Class,54,"getPackage","()Ljava/lang/Package;")
J2CPP_DEFINE_METHOD(java::lang::Class,55,"desiredAssertionStatus","()Z")
J2CPP_DEFINE_METHOD(java::lang::Class,56,"asSubclass","(Ljava/lang/Class;)Ljava/lang/Class;")
J2CPP_DEFINE_METHOD(java::lang::Class,57,"cast","(Ljava/lang/Object;)Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_CLASS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
