/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.xml.xpath.XPathException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_XPATH_XPATHEXCEPTION_HPP_DECL
#define J2CPP_JAVAX_XML_XPATH_XPATHEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace io { class PrintStream; } } }
namespace j2cpp { namespace java { namespace io { class PrintWriter; } } }


#include <java/io/PrintStream.hpp>
#include <java/io/PrintWriter.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace javax { namespace xml { namespace xpath {

	class XPathException;
	class XPathException
		: public object<XPathException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit XPathException(jobject jobj)
		: object<XPathException>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::io::Serializable>() const;


		XPathException(local_ref< java::lang::String > const&);
		XPathException(local_ref< java::lang::Throwable > const&);
		local_ref< java::lang::Throwable > getCause();
		void printStackTrace(local_ref< java::io::PrintStream >  const&);
		void printStackTrace();
		void printStackTrace(local_ref< java::io::PrintWriter >  const&);
	}; //class XPathException

} //namespace xpath
} //namespace xml
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_XPATH_XPATHEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_XPATH_XPATHEXCEPTION_HPP_IMPL
#define J2CPP_JAVAX_XML_XPATH_XPATHEXCEPTION_HPP_IMPL

namespace j2cpp {



javax::xml::xpath::XPathException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

javax::xml::xpath::XPathException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

javax::xml::xpath::XPathException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

javax::xml::xpath::XPathException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


javax::xml::xpath::XPathException::XPathException(local_ref< java::lang::String > const &a0)
: object<javax::xml::xpath::XPathException>(
	call_new_object<
		javax::xml::xpath::XPathException::J2CPP_CLASS_NAME,
		javax::xml::xpath::XPathException::J2CPP_METHOD_NAME(0),
		javax::xml::xpath::XPathException::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



javax::xml::xpath::XPathException::XPathException(local_ref< java::lang::Throwable > const &a0)
: object<javax::xml::xpath::XPathException>(
	call_new_object<
		javax::xml::xpath::XPathException::J2CPP_CLASS_NAME,
		javax::xml::xpath::XPathException::J2CPP_METHOD_NAME(1),
		javax::xml::xpath::XPathException::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


local_ref< java::lang::Throwable > javax::xml::xpath::XPathException::getCause()
{
	return call_method<
		javax::xml::xpath::XPathException::J2CPP_CLASS_NAME,
		javax::xml::xpath::XPathException::J2CPP_METHOD_NAME(2),
		javax::xml::xpath::XPathException::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::Throwable >
	>(get_jobject());
}

void javax::xml::xpath::XPathException::printStackTrace(local_ref< java::io::PrintStream > const &a0)
{
	return call_method<
		javax::xml::xpath::XPathException::J2CPP_CLASS_NAME,
		javax::xml::xpath::XPathException::J2CPP_METHOD_NAME(3),
		javax::xml::xpath::XPathException::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

void javax::xml::xpath::XPathException::printStackTrace()
{
	return call_method<
		javax::xml::xpath::XPathException::J2CPP_CLASS_NAME,
		javax::xml::xpath::XPathException::J2CPP_METHOD_NAME(4),
		javax::xml::xpath::XPathException::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject());
}

void javax::xml::xpath::XPathException::printStackTrace(local_ref< java::io::PrintWriter > const &a0)
{
	return call_method<
		javax::xml::xpath::XPathException::J2CPP_CLASS_NAME,
		javax::xml::xpath::XPathException::J2CPP_METHOD_NAME(5),
		javax::xml::xpath::XPathException::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(javax::xml::xpath::XPathException,"javax/xml/xpath/XPathException")
J2CPP_DEFINE_METHOD(javax::xml::xpath::XPathException,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::xml::xpath::XPathException,1,"<init>","(Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(javax::xml::xpath::XPathException,2,"getCause","()Ljava/lang/Throwable;")
J2CPP_DEFINE_METHOD(javax::xml::xpath::XPathException,3,"printStackTrace","(Ljava/io/PrintStream;)V")
J2CPP_DEFINE_METHOD(javax::xml::xpath::XPathException,4,"printStackTrace","()V")
J2CPP_DEFINE_METHOD(javax::xml::xpath::XPathException,5,"printStackTrace","(Ljava/io/PrintWriter;)V")

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_XPATH_XPATHEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
