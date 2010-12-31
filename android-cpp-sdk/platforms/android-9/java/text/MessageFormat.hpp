/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.text.MessageFormat
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_MESSAGEFORMAT_HPP_DECL
#define J2CPP_JAVA_TEXT_MESSAGEFORMAT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class StringBuffer; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Locale; } } }
namespace j2cpp { namespace java { namespace text { class ParsePosition; } } }
namespace j2cpp { namespace java { namespace text { class FieldPosition; } } }
namespace j2cpp { namespace java { namespace text { class Format; } } }
namespace j2cpp { namespace java { namespace text { namespace Format_ { class Field; } } } }
namespace j2cpp { namespace java { namespace text { class AttributedCharacterIterator; } } }
namespace j2cpp { namespace java { namespace text { namespace MessageFormat_ { class Field; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/text/AttributedCharacterIterator.hpp>
#include <java/text/FieldPosition.hpp>
#include <java/text/Format.hpp>
#include <java/text/MessageFormat.hpp>
#include <java/text/ParsePosition.hpp>
#include <java/util/Locale.hpp>


namespace j2cpp {

namespace java { namespace text {

	class MessageFormat;
	namespace MessageFormat_ {

		class Field;
		class Field
			: public object<Field>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_FIELD(0)

			explicit Field(jobject jobj)
			: object<Field>(jobj)
			{
			}

			operator local_ref<java::text::Format_::Field>() const;



			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::text::MessageFormat_::Field > > ARGUMENT;
		}; //class Field

	} //namespace MessageFormat_

	class MessageFormat
		: public object<MessageFormat>
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

		typedef MessageFormat_::Field Field;

		explicit MessageFormat(jobject jobj)
		: object<MessageFormat>(jobj)
		{
		}

		operator local_ref<java::text::Format>() const;


		MessageFormat(local_ref< java::lang::String > const&, local_ref< java::util::Locale > const&);
		MessageFormat(local_ref< java::lang::String > const&);
		void applyPattern(local_ref< java::lang::String >  const&);
		local_ref< java::lang::Object > clone();
		jboolean equals(local_ref< java::lang::Object >  const&);
		local_ref< java::text::AttributedCharacterIterator > formatToCharacterIterator(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::StringBuffer > format(local_ref< array< local_ref< java::lang::Object >, 1> >  const&, local_ref< java::lang::StringBuffer >  const&, local_ref< java::text::FieldPosition >  const&);
		local_ref< java::lang::StringBuffer > format(local_ref< java::lang::Object >  const&, local_ref< java::lang::StringBuffer >  const&, local_ref< java::text::FieldPosition >  const&);
		static local_ref< java::lang::String > format(local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::Object >, 1> >  const&);
		local_ref< array< local_ref< java::text::Format >, 1> > getFormats();
		local_ref< array< local_ref< java::text::Format >, 1> > getFormatsByArgumentIndex();
		void setFormatByArgumentIndex(jint, local_ref< java::text::Format >  const&);
		void setFormatsByArgumentIndex(local_ref< array< local_ref< java::text::Format >, 1> >  const&);
		local_ref< java::util::Locale > getLocale();
		jint hashCode();
		local_ref< array< local_ref< java::lang::Object >, 1> > parse(local_ref< java::lang::String >  const&);
		local_ref< array< local_ref< java::lang::Object >, 1> > parse(local_ref< java::lang::String >  const&, local_ref< java::text::ParsePosition >  const&);
		local_ref< java::lang::Object > parseObject(local_ref< java::lang::String >  const&, local_ref< java::text::ParsePosition >  const&);
		void setFormat(jint, local_ref< java::text::Format >  const&);
		void setFormats(local_ref< array< local_ref< java::text::Format >, 1> >  const&);
		void setLocale(local_ref< java::util::Locale >  const&);
		local_ref< java::lang::String > toPattern();
	}; //class MessageFormat

} //namespace text
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_MESSAGEFORMAT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_MESSAGEFORMAT_HPP_IMPL
#define J2CPP_JAVA_TEXT_MESSAGEFORMAT_HPP_IMPL

namespace j2cpp {




java::text::MessageFormat_::Field::operator local_ref<java::text::Format_::Field>() const
{
	return local_ref<java::text::Format_::Field>(get_jobject());
}





static_field<
	java::text::MessageFormat_::Field::J2CPP_CLASS_NAME,
	java::text::MessageFormat_::Field::J2CPP_FIELD_NAME(0),
	java::text::MessageFormat_::Field::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::text::MessageFormat_::Field >
> java::text::MessageFormat_::Field::ARGUMENT;


J2CPP_DEFINE_CLASS(java::text::MessageFormat_::Field,"java/text/MessageFormat$Field")
J2CPP_DEFINE_METHOD(java::text::MessageFormat_::Field,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::text::MessageFormat_::Field,1,"readResolve","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::text::MessageFormat_::Field,2,"<clinit>","()V")
J2CPP_DEFINE_FIELD(java::text::MessageFormat_::Field,0,"ARGUMENT","Ljava/text/MessageFormat$Field;")



java::text::MessageFormat::operator local_ref<java::text::Format>() const
{
	return local_ref<java::text::Format>(get_jobject());
}


java::text::MessageFormat::MessageFormat(local_ref< java::lang::String > const &a0, local_ref< java::util::Locale > const &a1)
: object<java::text::MessageFormat>(
	call_new_object<
		java::text::MessageFormat::J2CPP_CLASS_NAME,
		java::text::MessageFormat::J2CPP_METHOD_NAME(0),
		java::text::MessageFormat::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}



java::text::MessageFormat::MessageFormat(local_ref< java::lang::String > const &a0)
: object<java::text::MessageFormat>(
	call_new_object<
		java::text::MessageFormat::J2CPP_CLASS_NAME,
		java::text::MessageFormat::J2CPP_METHOD_NAME(1),
		java::text::MessageFormat::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}


void java::text::MessageFormat::applyPattern(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::text::MessageFormat::J2CPP_CLASS_NAME,
		java::text::MessageFormat::J2CPP_METHOD_NAME(2),
		java::text::MessageFormat::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0);
}

local_ref< java::lang::Object > java::text::MessageFormat::clone()
{
	return call_method<
		java::text::MessageFormat::J2CPP_CLASS_NAME,
		java::text::MessageFormat::J2CPP_METHOD_NAME(3),
		java::text::MessageFormat::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::Object > >
	(get_jobject());
}

jboolean java::text::MessageFormat::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::text::MessageFormat::J2CPP_CLASS_NAME,
		java::text::MessageFormat::J2CPP_METHOD_NAME(4),
		java::text::MessageFormat::J2CPP_METHOD_SIGNATURE(4), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< java::text::AttributedCharacterIterator > java::text::MessageFormat::formatToCharacterIterator(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::text::MessageFormat::J2CPP_CLASS_NAME,
		java::text::MessageFormat::J2CPP_METHOD_NAME(5),
		java::text::MessageFormat::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::text::AttributedCharacterIterator > >
	(get_jobject(), a0);
}

local_ref< java::lang::StringBuffer > java::text::MessageFormat::format(local_ref< array< local_ref< java::lang::Object >, 1> > const &a0, local_ref< java::lang::StringBuffer > const &a1, local_ref< java::text::FieldPosition > const &a2)
{
	return call_method<
		java::text::MessageFormat::J2CPP_CLASS_NAME,
		java::text::MessageFormat::J2CPP_METHOD_NAME(6),
		java::text::MessageFormat::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::StringBuffer > >
	(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::StringBuffer > java::text::MessageFormat::format(local_ref< java::lang::Object > const &a0, local_ref< java::lang::StringBuffer > const &a1, local_ref< java::text::FieldPosition > const &a2)
{
	return call_method<
		java::text::MessageFormat::J2CPP_CLASS_NAME,
		java::text::MessageFormat::J2CPP_METHOD_NAME(7),
		java::text::MessageFormat::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::StringBuffer > >
	(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::String > java::text::MessageFormat::format(local_ref< java::lang::String > const &a0, local_ref< array< local_ref< java::lang::Object >, 1> > const &a1)
{
	return call_static_method<
		java::text::MessageFormat::J2CPP_CLASS_NAME,
		java::text::MessageFormat::J2CPP_METHOD_NAME(8),
		java::text::MessageFormat::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::String > >
	(a0, a1);
}

local_ref< array< local_ref< java::text::Format >, 1> > java::text::MessageFormat::getFormats()
{
	return call_method<
		java::text::MessageFormat::J2CPP_CLASS_NAME,
		java::text::MessageFormat::J2CPP_METHOD_NAME(9),
		java::text::MessageFormat::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< array< local_ref< java::text::Format >, 1> > >
	(get_jobject());
}

local_ref< array< local_ref< java::text::Format >, 1> > java::text::MessageFormat::getFormatsByArgumentIndex()
{
	return call_method<
		java::text::MessageFormat::J2CPP_CLASS_NAME,
		java::text::MessageFormat::J2CPP_METHOD_NAME(10),
		java::text::MessageFormat::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< array< local_ref< java::text::Format >, 1> > >
	(get_jobject());
}

void java::text::MessageFormat::setFormatByArgumentIndex(jint a0, local_ref< java::text::Format > const &a1)
{
	return call_method<
		java::text::MessageFormat::J2CPP_CLASS_NAME,
		java::text::MessageFormat::J2CPP_METHOD_NAME(11),
		java::text::MessageFormat::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject(), a0, a1);
}

void java::text::MessageFormat::setFormatsByArgumentIndex(local_ref< array< local_ref< java::text::Format >, 1> > const &a0)
{
	return call_method<
		java::text::MessageFormat::J2CPP_CLASS_NAME,
		java::text::MessageFormat::J2CPP_METHOD_NAME(12),
		java::text::MessageFormat::J2CPP_METHOD_SIGNATURE(12), 
		void >
	(get_jobject(), a0);
}

local_ref< java::util::Locale > java::text::MessageFormat::getLocale()
{
	return call_method<
		java::text::MessageFormat::J2CPP_CLASS_NAME,
		java::text::MessageFormat::J2CPP_METHOD_NAME(13),
		java::text::MessageFormat::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::util::Locale > >
	(get_jobject());
}

jint java::text::MessageFormat::hashCode()
{
	return call_method<
		java::text::MessageFormat::J2CPP_CLASS_NAME,
		java::text::MessageFormat::J2CPP_METHOD_NAME(14),
		java::text::MessageFormat::J2CPP_METHOD_SIGNATURE(14), 
		jint >
	(get_jobject());
}

local_ref< array< local_ref< java::lang::Object >, 1> > java::text::MessageFormat::parse(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::text::MessageFormat::J2CPP_CLASS_NAME,
		java::text::MessageFormat::J2CPP_METHOD_NAME(15),
		java::text::MessageFormat::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< array< local_ref< java::lang::Object >, 1> > >
	(get_jobject(), a0);
}

local_ref< array< local_ref< java::lang::Object >, 1> > java::text::MessageFormat::parse(local_ref< java::lang::String > const &a0, local_ref< java::text::ParsePosition > const &a1)
{
	return call_method<
		java::text::MessageFormat::J2CPP_CLASS_NAME,
		java::text::MessageFormat::J2CPP_METHOD_NAME(16),
		java::text::MessageFormat::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< array< local_ref< java::lang::Object >, 1> > >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::Object > java::text::MessageFormat::parseObject(local_ref< java::lang::String > const &a0, local_ref< java::text::ParsePosition > const &a1)
{
	return call_method<
		java::text::MessageFormat::J2CPP_CLASS_NAME,
		java::text::MessageFormat::J2CPP_METHOD_NAME(17),
		java::text::MessageFormat::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0, a1);
}

void java::text::MessageFormat::setFormat(jint a0, local_ref< java::text::Format > const &a1)
{
	return call_method<
		java::text::MessageFormat::J2CPP_CLASS_NAME,
		java::text::MessageFormat::J2CPP_METHOD_NAME(18),
		java::text::MessageFormat::J2CPP_METHOD_SIGNATURE(18), 
		void >
	(get_jobject(), a0, a1);
}

void java::text::MessageFormat::setFormats(local_ref< array< local_ref< java::text::Format >, 1> > const &a0)
{
	return call_method<
		java::text::MessageFormat::J2CPP_CLASS_NAME,
		java::text::MessageFormat::J2CPP_METHOD_NAME(19),
		java::text::MessageFormat::J2CPP_METHOD_SIGNATURE(19), 
		void >
	(get_jobject(), a0);
}

void java::text::MessageFormat::setLocale(local_ref< java::util::Locale > const &a0)
{
	return call_method<
		java::text::MessageFormat::J2CPP_CLASS_NAME,
		java::text::MessageFormat::J2CPP_METHOD_NAME(20),
		java::text::MessageFormat::J2CPP_METHOD_SIGNATURE(20), 
		void >
	(get_jobject(), a0);
}

local_ref< java::lang::String > java::text::MessageFormat::toPattern()
{
	return call_method<
		java::text::MessageFormat::J2CPP_CLASS_NAME,
		java::text::MessageFormat::J2CPP_METHOD_NAME(21),
		java::text::MessageFormat::J2CPP_METHOD_SIGNATURE(21), 
		local_ref< java::lang::String > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::text::MessageFormat,"java/text/MessageFormat")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,0,"<init>","(Ljava/lang/String;Ljava/util/Locale;)V")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,2,"applyPattern","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,3,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,4,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,5,"formatToCharacterIterator","(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,6,"format","([java.lang.ObjectLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,7,"format","(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,8,"format","(Ljava/lang/String;[java.lang.Object)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,9,"getFormats","()[java.text.Format")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,10,"getFormatsByArgumentIndex","()[java.text.Format")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,11,"setFormatByArgumentIndex","(ILjava/text/Format;)V")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,12,"setFormatsByArgumentIndex","([java.text.Format)V")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,13,"getLocale","()Ljava/util/Locale;")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,14,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,15,"parse","(Ljava/lang/String;)[java.lang.Object")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,16,"parse","(Ljava/lang/String;Ljava/text/ParsePosition;)[java.lang.Object")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,17,"parseObject","(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,18,"setFormat","(ILjava/text/Format;)V")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,19,"setFormats","([java.text.Format)V")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,20,"setLocale","(Ljava/util/Locale;)V")
J2CPP_DEFINE_METHOD(java::text::MessageFormat,21,"toPattern","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_MESSAGEFORMAT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
