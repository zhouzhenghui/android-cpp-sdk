/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.InternalError
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_INTERNALERROR_HPP_DECL
#define J2CPP_JAVA_LANG_INTERNALERROR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class VirtualMachineError; } } }


#include <java/lang/String.hpp>
#include <java/lang/VirtualMachineError.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class InternalError;
	class InternalError
		: public object<InternalError>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit InternalError(jobject jobj)
		: object<InternalError>(jobj)
		{
		}

		operator local_ref<java::lang::VirtualMachineError>() const;


		InternalError();
		InternalError(local_ref< java::lang::String > const&);
	}; //class InternalError

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_INTERNALERROR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_INTERNALERROR_HPP_IMPL
#define J2CPP_JAVA_LANG_INTERNALERROR_HPP_IMPL

namespace j2cpp {



java::lang::InternalError::operator local_ref<java::lang::VirtualMachineError>() const
{
	return local_ref<java::lang::VirtualMachineError>(get_jobject());
}


java::lang::InternalError::InternalError()
: object<java::lang::InternalError>(
	call_new_object<
		java::lang::InternalError::J2CPP_CLASS_NAME,
		java::lang::InternalError::J2CPP_METHOD_NAME(0),
		java::lang::InternalError::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



java::lang::InternalError::InternalError(local_ref< java::lang::String > const &a0)
: object<java::lang::InternalError>(
	call_new_object<
		java::lang::InternalError::J2CPP_CLASS_NAME,
		java::lang::InternalError::J2CPP_METHOD_NAME(1),
		java::lang::InternalError::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



J2CPP_DEFINE_CLASS(java::lang::InternalError,"java/lang/InternalError")
J2CPP_DEFINE_METHOD(java::lang::InternalError,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::InternalError,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_INTERNALERROR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
