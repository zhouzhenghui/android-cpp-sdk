/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.text.ParsePosition
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_PARSEPOSITION_HPP_DECL
#define J2CPP_JAVA_TEXT_PARSEPOSITION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace text {

	class ParsePosition;
	class ParsePosition
		: public object<ParsePosition>
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

		explicit ParsePosition(jobject jobj)
		: object<ParsePosition>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		ParsePosition(jint);
		jboolean equals(local_ref< java::lang::Object >  const&);
		jint getErrorIndex();
		jint getIndex();
		jint hashCode();
		void setErrorIndex(jint);
		void setIndex(jint);
		local_ref< java::lang::String > toString();
	}; //class ParsePosition

} //namespace text
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_PARSEPOSITION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_PARSEPOSITION_HPP_IMPL
#define J2CPP_JAVA_TEXT_PARSEPOSITION_HPP_IMPL

namespace j2cpp {



java::text::ParsePosition::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::text::ParsePosition::ParsePosition(jint a0)
: object<java::text::ParsePosition>(
	call_new_object<
		java::text::ParsePosition::J2CPP_CLASS_NAME,
		java::text::ParsePosition::J2CPP_METHOD_NAME(0),
		java::text::ParsePosition::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}


jboolean java::text::ParsePosition::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::text::ParsePosition::J2CPP_CLASS_NAME,
		java::text::ParsePosition::J2CPP_METHOD_NAME(1),
		java::text::ParsePosition::J2CPP_METHOD_SIGNATURE(1), 
		jboolean >
	(get_jobject(), a0);
}

jint java::text::ParsePosition::getErrorIndex()
{
	return call_method<
		java::text::ParsePosition::J2CPP_CLASS_NAME,
		java::text::ParsePosition::J2CPP_METHOD_NAME(2),
		java::text::ParsePosition::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(get_jobject());
}

jint java::text::ParsePosition::getIndex()
{
	return call_method<
		java::text::ParsePosition::J2CPP_CLASS_NAME,
		java::text::ParsePosition::J2CPP_METHOD_NAME(3),
		java::text::ParsePosition::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject());
}

jint java::text::ParsePosition::hashCode()
{
	return call_method<
		java::text::ParsePosition::J2CPP_CLASS_NAME,
		java::text::ParsePosition::J2CPP_METHOD_NAME(4),
		java::text::ParsePosition::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject());
}

void java::text::ParsePosition::setErrorIndex(jint a0)
{
	return call_method<
		java::text::ParsePosition::J2CPP_CLASS_NAME,
		java::text::ParsePosition::J2CPP_METHOD_NAME(5),
		java::text::ParsePosition::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0);
}

void java::text::ParsePosition::setIndex(jint a0)
{
	return call_method<
		java::text::ParsePosition::J2CPP_CLASS_NAME,
		java::text::ParsePosition::J2CPP_METHOD_NAME(6),
		java::text::ParsePosition::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0);
}

local_ref< java::lang::String > java::text::ParsePosition::toString()
{
	return call_method<
		java::text::ParsePosition::J2CPP_CLASS_NAME,
		java::text::ParsePosition::J2CPP_METHOD_NAME(7),
		java::text::ParsePosition::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::String > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::text::ParsePosition,"java/text/ParsePosition")
J2CPP_DEFINE_METHOD(java::text::ParsePosition,0,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::text::ParsePosition,1,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::text::ParsePosition,2,"getErrorIndex","()I")
J2CPP_DEFINE_METHOD(java::text::ParsePosition,3,"getIndex","()I")
J2CPP_DEFINE_METHOD(java::text::ParsePosition,4,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::text::ParsePosition,5,"setErrorIndex","(I)V")
J2CPP_DEFINE_METHOD(java::text::ParsePosition,6,"setIndex","(I)V")
J2CPP_DEFINE_METHOD(java::text::ParsePosition,7,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_PARSEPOSITION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
