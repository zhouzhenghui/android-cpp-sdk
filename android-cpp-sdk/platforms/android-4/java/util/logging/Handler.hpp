/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.logging.Handler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_LOGGING_HANDLER_HPP_DECL
#define J2CPP_JAVA_UTIL_LOGGING_HANDLER_HPP_DECL


namespace j2cpp { namespace java { namespace util { namespace logging { class ErrorManager; } } } }
namespace j2cpp { namespace java { namespace util { namespace logging { class Filter; } } } }
namespace j2cpp { namespace java { namespace util { namespace logging { class Formatter; } } } }
namespace j2cpp { namespace java { namespace util { namespace logging { class Level; } } } }
namespace j2cpp { namespace java { namespace util { namespace logging { class LogRecord; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/logging/ErrorManager.hpp>
#include <java/util/logging/Filter.hpp>
#include <java/util/logging/Formatter.hpp>
#include <java/util/logging/Level.hpp>
#include <java/util/logging/LogRecord.hpp>


namespace j2cpp {

namespace java { namespace util { namespace logging {

	class Handler;
	class Handler
		: public object<Handler>
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

		explicit Handler(jobject jobj)
		: object<Handler>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void close();
		void flush();
		void publish(local_ref< java::util::logging::LogRecord >  const&);
		local_ref< java::lang::String > getEncoding();
		local_ref< java::util::logging::ErrorManager > getErrorManager();
		local_ref< java::util::logging::Filter > getFilter();
		local_ref< java::util::logging::Formatter > getFormatter();
		local_ref< java::util::logging::Level > getLevel();
		jboolean isLoggable(local_ref< java::util::logging::LogRecord >  const&);
		void setEncoding(local_ref< java::lang::String >  const&);
		void setErrorManager(local_ref< java::util::logging::ErrorManager >  const&);
		void setFilter(local_ref< java::util::logging::Filter >  const&);
		void setFormatter(local_ref< java::util::logging::Formatter >  const&);
		void setLevel(local_ref< java::util::logging::Level >  const&);
	}; //class Handler

} //namespace logging
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_LOGGING_HANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_LOGGING_HANDLER_HPP_IMPL
#define J2CPP_JAVA_UTIL_LOGGING_HANDLER_HPP_IMPL

namespace j2cpp {



java::util::logging::Handler::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


void java::util::logging::Handler::close()
{
	return call_method<
		java::util::logging::Handler::J2CPP_CLASS_NAME,
		java::util::logging::Handler::J2CPP_METHOD_NAME(1),
		java::util::logging::Handler::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject());
}

void java::util::logging::Handler::flush()
{
	return call_method<
		java::util::logging::Handler::J2CPP_CLASS_NAME,
		java::util::logging::Handler::J2CPP_METHOD_NAME(2),
		java::util::logging::Handler::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject());
}

void java::util::logging::Handler::publish(local_ref< java::util::logging::LogRecord > const &a0)
{
	return call_method<
		java::util::logging::Handler::J2CPP_CLASS_NAME,
		java::util::logging::Handler::J2CPP_METHOD_NAME(3),
		java::util::logging::Handler::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0);
}

local_ref< java::lang::String > java::util::logging::Handler::getEncoding()
{
	return call_method<
		java::util::logging::Handler::J2CPP_CLASS_NAME,
		java::util::logging::Handler::J2CPP_METHOD_NAME(4),
		java::util::logging::Handler::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::util::logging::ErrorManager > java::util::logging::Handler::getErrorManager()
{
	return call_method<
		java::util::logging::Handler::J2CPP_CLASS_NAME,
		java::util::logging::Handler::J2CPP_METHOD_NAME(5),
		java::util::logging::Handler::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::util::logging::ErrorManager > >
	(get_jobject());
}

local_ref< java::util::logging::Filter > java::util::logging::Handler::getFilter()
{
	return call_method<
		java::util::logging::Handler::J2CPP_CLASS_NAME,
		java::util::logging::Handler::J2CPP_METHOD_NAME(6),
		java::util::logging::Handler::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::util::logging::Filter > >
	(get_jobject());
}

local_ref< java::util::logging::Formatter > java::util::logging::Handler::getFormatter()
{
	return call_method<
		java::util::logging::Handler::J2CPP_CLASS_NAME,
		java::util::logging::Handler::J2CPP_METHOD_NAME(7),
		java::util::logging::Handler::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::util::logging::Formatter > >
	(get_jobject());
}

local_ref< java::util::logging::Level > java::util::logging::Handler::getLevel()
{
	return call_method<
		java::util::logging::Handler::J2CPP_CLASS_NAME,
		java::util::logging::Handler::J2CPP_METHOD_NAME(8),
		java::util::logging::Handler::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::util::logging::Level > >
	(get_jobject());
}

jboolean java::util::logging::Handler::isLoggable(local_ref< java::util::logging::LogRecord > const &a0)
{
	return call_method<
		java::util::logging::Handler::J2CPP_CLASS_NAME,
		java::util::logging::Handler::J2CPP_METHOD_NAME(9),
		java::util::logging::Handler::J2CPP_METHOD_SIGNATURE(9), 
		jboolean >
	(get_jobject(), a0);
}


void java::util::logging::Handler::setEncoding(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::util::logging::Handler::J2CPP_CLASS_NAME,
		java::util::logging::Handler::J2CPP_METHOD_NAME(11),
		java::util::logging::Handler::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject(), a0);
}

void java::util::logging::Handler::setErrorManager(local_ref< java::util::logging::ErrorManager > const &a0)
{
	return call_method<
		java::util::logging::Handler::J2CPP_CLASS_NAME,
		java::util::logging::Handler::J2CPP_METHOD_NAME(12),
		java::util::logging::Handler::J2CPP_METHOD_SIGNATURE(12), 
		void >
	(get_jobject(), a0);
}

void java::util::logging::Handler::setFilter(local_ref< java::util::logging::Filter > const &a0)
{
	return call_method<
		java::util::logging::Handler::J2CPP_CLASS_NAME,
		java::util::logging::Handler::J2CPP_METHOD_NAME(13),
		java::util::logging::Handler::J2CPP_METHOD_SIGNATURE(13), 
		void >
	(get_jobject(), a0);
}

void java::util::logging::Handler::setFormatter(local_ref< java::util::logging::Formatter > const &a0)
{
	return call_method<
		java::util::logging::Handler::J2CPP_CLASS_NAME,
		java::util::logging::Handler::J2CPP_METHOD_NAME(14),
		java::util::logging::Handler::J2CPP_METHOD_SIGNATURE(14), 
		void >
	(get_jobject(), a0);
}

void java::util::logging::Handler::setLevel(local_ref< java::util::logging::Level > const &a0)
{
	return call_method<
		java::util::logging::Handler::J2CPP_CLASS_NAME,
		java::util::logging::Handler::J2CPP_METHOD_NAME(15),
		java::util::logging::Handler::J2CPP_METHOD_SIGNATURE(15), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::util::logging::Handler,"java/util/logging/Handler")
J2CPP_DEFINE_METHOD(java::util::logging::Handler,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::logging::Handler,1,"close","()V")
J2CPP_DEFINE_METHOD(java::util::logging::Handler,2,"flush","()V")
J2CPP_DEFINE_METHOD(java::util::logging::Handler,3,"publish","(Ljava/util/logging/LogRecord;)V")
J2CPP_DEFINE_METHOD(java::util::logging::Handler,4,"getEncoding","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::logging::Handler,5,"getErrorManager","()Ljava/util/logging/ErrorManager;")
J2CPP_DEFINE_METHOD(java::util::logging::Handler,6,"getFilter","()Ljava/util/logging/Filter;")
J2CPP_DEFINE_METHOD(java::util::logging::Handler,7,"getFormatter","()Ljava/util/logging/Formatter;")
J2CPP_DEFINE_METHOD(java::util::logging::Handler,8,"getLevel","()Ljava/util/logging/Level;")
J2CPP_DEFINE_METHOD(java::util::logging::Handler,9,"isLoggable","(Ljava/util/logging/LogRecord;)Z")
J2CPP_DEFINE_METHOD(java::util::logging::Handler,10,"reportError","(Ljava/lang/String;Ljava/lang/Exception;I)V")
J2CPP_DEFINE_METHOD(java::util::logging::Handler,11,"setEncoding","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::logging::Handler,12,"setErrorManager","(Ljava/util/logging/ErrorManager;)V")
J2CPP_DEFINE_METHOD(java::util::logging::Handler,13,"setFilter","(Ljava/util/logging/Filter;)V")
J2CPP_DEFINE_METHOD(java::util::logging::Handler,14,"setFormatter","(Ljava/util/logging/Formatter;)V")
J2CPP_DEFINE_METHOD(java::util::logging::Handler,15,"setLevel","(Ljava/util/logging/Level;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_LOGGING_HANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
