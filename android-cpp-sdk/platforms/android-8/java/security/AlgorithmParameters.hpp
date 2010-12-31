/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.AlgorithmParameters
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_ALGORITHMPARAMETERS_HPP_DECL
#define J2CPP_JAVA_SECURITY_ALGORITHMPARAMETERS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class AlgorithmParameterSpec; } } } }
namespace j2cpp { namespace java { namespace security { class Provider; } } }


#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/Provider.hpp>
#include <java/security/spec/AlgorithmParameterSpec.hpp>


namespace j2cpp {

namespace java { namespace security {

	class AlgorithmParameters;
	class AlgorithmParameters
		: public object<AlgorithmParameters>
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

		explicit AlgorithmParameters(jobject jobj)
		: object<AlgorithmParameters>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< java::security::AlgorithmParameters > getInstance(local_ref< java::lang::String >  const&);
		static local_ref< java::security::AlgorithmParameters > getInstance(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		static local_ref< java::security::AlgorithmParameters > getInstance(local_ref< java::lang::String >  const&, local_ref< java::security::Provider >  const&);
		local_ref< java::security::Provider > getProvider();
		local_ref< java::lang::String > getAlgorithm();
		void init(local_ref< java::security::spec::AlgorithmParameterSpec >  const&);
		void init(local_ref< array<jbyte,1> >  const&);
		void init(local_ref< array<jbyte,1> >  const&, local_ref< java::lang::String >  const&);
		local_ref< java::security::spec::AlgorithmParameterSpec > getParameterSpec(local_ref< java::lang::Class >  const&);
		local_ref< array<jbyte,1> > getEncoded();
		local_ref< array<jbyte,1> > getEncoded(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > toString();
	}; //class AlgorithmParameters

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_ALGORITHMPARAMETERS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_ALGORITHMPARAMETERS_HPP_IMPL
#define J2CPP_JAVA_SECURITY_ALGORITHMPARAMETERS_HPP_IMPL

namespace j2cpp {



java::security::AlgorithmParameters::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::security::AlgorithmParameters > java::security::AlgorithmParameters::getInstance(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		java::security::AlgorithmParameters::J2CPP_CLASS_NAME,
		java::security::AlgorithmParameters::J2CPP_METHOD_NAME(1),
		java::security::AlgorithmParameters::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::security::AlgorithmParameters > >
	(a0);
}

local_ref< java::security::AlgorithmParameters > java::security::AlgorithmParameters::getInstance(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		java::security::AlgorithmParameters::J2CPP_CLASS_NAME,
		java::security::AlgorithmParameters::J2CPP_METHOD_NAME(2),
		java::security::AlgorithmParameters::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::security::AlgorithmParameters > >
	(a0, a1);
}

local_ref< java::security::AlgorithmParameters > java::security::AlgorithmParameters::getInstance(local_ref< java::lang::String > const &a0, local_ref< java::security::Provider > const &a1)
{
	return call_static_method<
		java::security::AlgorithmParameters::J2CPP_CLASS_NAME,
		java::security::AlgorithmParameters::J2CPP_METHOD_NAME(3),
		java::security::AlgorithmParameters::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::security::AlgorithmParameters > >
	(a0, a1);
}

local_ref< java::security::Provider > java::security::AlgorithmParameters::getProvider()
{
	return call_method<
		java::security::AlgorithmParameters::J2CPP_CLASS_NAME,
		java::security::AlgorithmParameters::J2CPP_METHOD_NAME(4),
		java::security::AlgorithmParameters::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::security::Provider > >
	(get_jobject());
}

local_ref< java::lang::String > java::security::AlgorithmParameters::getAlgorithm()
{
	return call_method<
		java::security::AlgorithmParameters::J2CPP_CLASS_NAME,
		java::security::AlgorithmParameters::J2CPP_METHOD_NAME(5),
		java::security::AlgorithmParameters::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String > >
	(get_jobject());
}

void java::security::AlgorithmParameters::init(local_ref< java::security::spec::AlgorithmParameterSpec > const &a0)
{
	return call_method<
		java::security::AlgorithmParameters::J2CPP_CLASS_NAME,
		java::security::AlgorithmParameters::J2CPP_METHOD_NAME(6),
		java::security::AlgorithmParameters::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0);
}

void java::security::AlgorithmParameters::init(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		java::security::AlgorithmParameters::J2CPP_CLASS_NAME,
		java::security::AlgorithmParameters::J2CPP_METHOD_NAME(7),
		java::security::AlgorithmParameters::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0);
}

void java::security::AlgorithmParameters::init(local_ref< array<jbyte,1> > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		java::security::AlgorithmParameters::J2CPP_CLASS_NAME,
		java::security::AlgorithmParameters::J2CPP_METHOD_NAME(8),
		java::security::AlgorithmParameters::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0, a1);
}

local_ref< java::security::spec::AlgorithmParameterSpec > java::security::AlgorithmParameters::getParameterSpec(local_ref< java::lang::Class > const &a0)
{
	return call_method<
		java::security::AlgorithmParameters::J2CPP_CLASS_NAME,
		java::security::AlgorithmParameters::J2CPP_METHOD_NAME(9),
		java::security::AlgorithmParameters::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::security::spec::AlgorithmParameterSpec > >
	(get_jobject(), a0);
}

local_ref< array<jbyte,1> > java::security::AlgorithmParameters::getEncoded()
{
	return call_method<
		java::security::AlgorithmParameters::J2CPP_CLASS_NAME,
		java::security::AlgorithmParameters::J2CPP_METHOD_NAME(10),
		java::security::AlgorithmParameters::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< array<jbyte,1> > >
	(get_jobject());
}

local_ref< array<jbyte,1> > java::security::AlgorithmParameters::getEncoded(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::security::AlgorithmParameters::J2CPP_CLASS_NAME,
		java::security::AlgorithmParameters::J2CPP_METHOD_NAME(11),
		java::security::AlgorithmParameters::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< array<jbyte,1> > >
	(get_jobject(), a0);
}

local_ref< java::lang::String > java::security::AlgorithmParameters::toString()
{
	return call_method<
		java::security::AlgorithmParameters::J2CPP_CLASS_NAME,
		java::security::AlgorithmParameters::J2CPP_METHOD_NAME(12),
		java::security::AlgorithmParameters::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::lang::String > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::security::AlgorithmParameters,"java/security/AlgorithmParameters")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameters,0,"<init>","(Ljava/security/AlgorithmParametersSpi;Ljava/security/Provider;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameters,1,"getInstance","(Ljava/lang/String;)Ljava/security/AlgorithmParameters;")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameters,2,"getInstance","(Ljava/lang/String;Ljava/lang/String;)Ljava/security/AlgorithmParameters;")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameters,3,"getInstance","(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/AlgorithmParameters;")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameters,4,"getProvider","()Ljava/security/Provider;")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameters,5,"getAlgorithm","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameters,6,"init","(Ljava/security/spec/AlgorithmParameterSpec;)V")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameters,7,"init","([B)V")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameters,8,"init","([BLjava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameters,9,"getParameterSpec","(Ljava/lang/Class;)Ljava/security/spec/AlgorithmParameterSpec;")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameters,10,"getEncoded","()[B")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameters,11,"getEncoded","(Ljava/lang/String;)[B")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameters,12,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_ALGORITHMPARAMETERS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
