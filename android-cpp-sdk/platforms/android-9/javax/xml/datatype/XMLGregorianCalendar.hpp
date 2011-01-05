/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.xml.datatype.XMLGregorianCalendar
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_DATATYPE_XMLGREGORIANCALENDAR_HPP_DECL
#define J2CPP_JAVAX_XML_DATATYPE_XMLGREGORIANCALENDAR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace javax { namespace xml { namespace datatype { class Duration; } } } }
namespace j2cpp { namespace javax { namespace xml { namespace namespace { class QName; } } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class GregorianCalendar; } } }
namespace j2cpp { namespace java { namespace util { class Locale; } } }
namespace j2cpp { namespace java { namespace util { class TimeZone; } } }
namespace j2cpp { namespace java { namespace math { class BigInteger; } } }
namespace j2cpp { namespace java { namespace math { class BigDecimal; } } }


#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/math/BigDecimal.hpp>
#include <java/math/BigInteger.hpp>
#include <java/util/GregorianCalendar.hpp>
#include <java/util/Locale.hpp>
#include <java/util/TimeZone.hpp>
#include <javax/xml/datatype/Duration.hpp>
#include <javax/xml/namespace/QName.hpp>


namespace j2cpp {

namespace javax { namespace xml { namespace datatype {

	class XMLGregorianCalendar;
	class XMLGregorianCalendar
		: public object<XMLGregorianCalendar>
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

		explicit XMLGregorianCalendar(jobject jobj)
		: object<XMLGregorianCalendar>(jobj)
		{
		}

		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::lang::Object>() const;


		XMLGregorianCalendar();
		void clear();
		void reset();
		void setYear(local_ref< java::math::BigInteger >  const&);
		void setYear(jint);
		void setMonth(jint);
		void setDay(jint);
		void setTimezone(jint);
		void setTime(jint, jint, jint);
		void setHour(jint);
		void setMinute(jint);
		void setSecond(jint);
		void setMillisecond(jint);
		void setFractionalSecond(local_ref< java::math::BigDecimal >  const&);
		void setTime(jint, jint, jint, local_ref< java::math::BigDecimal >  const&);
		void setTime(jint, jint, jint, jint);
		local_ref< java::math::BigInteger > getEon();
		jint getYear();
		local_ref< java::math::BigInteger > getEonAndYear();
		jint getMonth();
		jint getDay();
		jint getTimezone();
		jint getHour();
		jint getMinute();
		jint getSecond();
		jint getMillisecond();
		local_ref< java::math::BigDecimal > getFractionalSecond();
		jint compare(local_ref< javax::xml::datatype::XMLGregorianCalendar >  const&);
		local_ref< javax::xml::datatype::XMLGregorianCalendar > normalize();
		jboolean equals(local_ref< java::lang::Object >  const&);
		jint hashCode();
		local_ref< java::lang::String > toXMLFormat();
		local_ref< javax::xml::namespace::QName > getXMLSchemaType();
		local_ref< java::lang::String > toString();
		jboolean isValid();
		void add(local_ref< javax::xml::datatype::Duration >  const&);
		local_ref< java::util::GregorianCalendar > toGregorianCalendar();
		local_ref< java::util::GregorianCalendar > toGregorianCalendar(local_ref< java::util::TimeZone >  const&, local_ref< java::util::Locale >  const&, local_ref< javax::xml::datatype::XMLGregorianCalendar >  const&);
		local_ref< java::util::TimeZone > getTimeZone(jint);
		local_ref< java::lang::Object > clone();
	}; //class XMLGregorianCalendar

} //namespace datatype
} //namespace xml
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_DATATYPE_XMLGREGORIANCALENDAR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_DATATYPE_XMLGREGORIANCALENDAR_HPP_IMPL
#define J2CPP_JAVAX_XML_DATATYPE_XMLGREGORIANCALENDAR_HPP_IMPL

namespace j2cpp {



javax::xml::datatype::XMLGregorianCalendar::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

javax::xml::datatype::XMLGregorianCalendar::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


javax::xml::datatype::XMLGregorianCalendar::XMLGregorianCalendar()
: object<javax::xml::datatype::XMLGregorianCalendar>(
	call_new_object<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(0),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void javax::xml::datatype::XMLGregorianCalendar::clear()
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(1),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject());
}

void javax::xml::datatype::XMLGregorianCalendar::reset()
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(2),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject());
}

void javax::xml::datatype::XMLGregorianCalendar::setYear(local_ref< java::math::BigInteger > const &a0)
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(3),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

void javax::xml::datatype::XMLGregorianCalendar::setYear(jint a0)
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(4),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

void javax::xml::datatype::XMLGregorianCalendar::setMonth(jint a0)
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(5),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

void javax::xml::datatype::XMLGregorianCalendar::setDay(jint a0)
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(6),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

void javax::xml::datatype::XMLGregorianCalendar::setTimezone(jint a0)
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(7),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}

void javax::xml::datatype::XMLGregorianCalendar::setTime(jint a0, jint a1, jint a2)
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(8),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0, a1, a2);
}

void javax::xml::datatype::XMLGregorianCalendar::setHour(jint a0)
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(9),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0);
}

void javax::xml::datatype::XMLGregorianCalendar::setMinute(jint a0)
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(10),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0);
}

void javax::xml::datatype::XMLGregorianCalendar::setSecond(jint a0)
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(11),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject(), a0);
}

void javax::xml::datatype::XMLGregorianCalendar::setMillisecond(jint a0)
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(12),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject(), a0);
}

void javax::xml::datatype::XMLGregorianCalendar::setFractionalSecond(local_ref< java::math::BigDecimal > const &a0)
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(13),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(get_jobject(), a0);
}

void javax::xml::datatype::XMLGregorianCalendar::setTime(jint a0, jint a1, jint a2, local_ref< java::math::BigDecimal > const &a3)
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(14),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject(), a0, a1, a2, a3);
}

void javax::xml::datatype::XMLGregorianCalendar::setTime(jint a0, jint a1, jint a2, jint a3)
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(15),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(get_jobject(), a0, a1, a2, a3);
}

local_ref< java::math::BigInteger > javax::xml::datatype::XMLGregorianCalendar::getEon()
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(16),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< java::math::BigInteger >
	>(get_jobject());
}

jint javax::xml::datatype::XMLGregorianCalendar::getYear()
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(17),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(17), 
		jint
	>(get_jobject());
}

local_ref< java::math::BigInteger > javax::xml::datatype::XMLGregorianCalendar::getEonAndYear()
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(18),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< java::math::BigInteger >
	>(get_jobject());
}

jint javax::xml::datatype::XMLGregorianCalendar::getMonth()
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(19),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(19), 
		jint
	>(get_jobject());
}

jint javax::xml::datatype::XMLGregorianCalendar::getDay()
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(20),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(20), 
		jint
	>(get_jobject());
}

jint javax::xml::datatype::XMLGregorianCalendar::getTimezone()
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(21),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(21), 
		jint
	>(get_jobject());
}

jint javax::xml::datatype::XMLGregorianCalendar::getHour()
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(22),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(22), 
		jint
	>(get_jobject());
}

jint javax::xml::datatype::XMLGregorianCalendar::getMinute()
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(23),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(23), 
		jint
	>(get_jobject());
}

jint javax::xml::datatype::XMLGregorianCalendar::getSecond()
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(24),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(24), 
		jint
	>(get_jobject());
}

jint javax::xml::datatype::XMLGregorianCalendar::getMillisecond()
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(25),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(25), 
		jint
	>(get_jobject());
}

local_ref< java::math::BigDecimal > javax::xml::datatype::XMLGregorianCalendar::getFractionalSecond()
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(26),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(26), 
		local_ref< java::math::BigDecimal >
	>(get_jobject());
}

jint javax::xml::datatype::XMLGregorianCalendar::compare(local_ref< javax::xml::datatype::XMLGregorianCalendar > const &a0)
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(27),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(27), 
		jint
	>(get_jobject(), a0);
}

local_ref< javax::xml::datatype::XMLGregorianCalendar > javax::xml::datatype::XMLGregorianCalendar::normalize()
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(28),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(28), 
		local_ref< javax::xml::datatype::XMLGregorianCalendar >
	>(get_jobject());
}

jboolean javax::xml::datatype::XMLGregorianCalendar::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(29),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(29), 
		jboolean
	>(get_jobject(), a0);
}

jint javax::xml::datatype::XMLGregorianCalendar::hashCode()
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(30),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(30), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > javax::xml::datatype::XMLGregorianCalendar::toXMLFormat()
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(31),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(31), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< javax::xml::namespace::QName > javax::xml::datatype::XMLGregorianCalendar::getXMLSchemaType()
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(32),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(32), 
		local_ref< javax::xml::namespace::QName >
	>(get_jobject());
}

local_ref< java::lang::String > javax::xml::datatype::XMLGregorianCalendar::toString()
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(33),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(33), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jboolean javax::xml::datatype::XMLGregorianCalendar::isValid()
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(34),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(34), 
		jboolean
	>(get_jobject());
}

void javax::xml::datatype::XMLGregorianCalendar::add(local_ref< javax::xml::datatype::Duration > const &a0)
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(35),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(35), 
		void
	>(get_jobject(), a0);
}

local_ref< java::util::GregorianCalendar > javax::xml::datatype::XMLGregorianCalendar::toGregorianCalendar()
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(36),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(36), 
		local_ref< java::util::GregorianCalendar >
	>(get_jobject());
}

local_ref< java::util::GregorianCalendar > javax::xml::datatype::XMLGregorianCalendar::toGregorianCalendar(local_ref< java::util::TimeZone > const &a0, local_ref< java::util::Locale > const &a1, local_ref< javax::xml::datatype::XMLGregorianCalendar > const &a2)
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(37),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(37), 
		local_ref< java::util::GregorianCalendar >
	>(get_jobject(), a0, a1, a2);
}

local_ref< java::util::TimeZone > javax::xml::datatype::XMLGregorianCalendar::getTimeZone(jint a0)
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(38),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(38), 
		local_ref< java::util::TimeZone >
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > javax::xml::datatype::XMLGregorianCalendar::clone()
{
	return call_method<
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_CLASS_NAME,
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_NAME(39),
		javax::xml::datatype::XMLGregorianCalendar::J2CPP_METHOD_SIGNATURE(39), 
		local_ref< java::lang::Object >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(javax::xml::datatype::XMLGregorianCalendar,"javax/xml/datatype/XMLGregorianCalendar")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,0,"<init>","()V")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,1,"clear","()V")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,2,"reset","()V")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,3,"setYear","(Ljava/math/BigInteger;)V")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,4,"setYear","(I)V")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,5,"setMonth","(I)V")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,6,"setDay","(I)V")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,7,"setTimezone","(I)V")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,8,"setTime","(III)V")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,9,"setHour","(I)V")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,10,"setMinute","(I)V")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,11,"setSecond","(I)V")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,12,"setMillisecond","(I)V")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,13,"setFractionalSecond","(Ljava/math/BigDecimal;)V")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,14,"setTime","(IIILjava/math/BigDecimal;)V")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,15,"setTime","(IIII)V")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,16,"getEon","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,17,"getYear","()I")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,18,"getEonAndYear","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,19,"getMonth","()I")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,20,"getDay","()I")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,21,"getTimezone","()I")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,22,"getHour","()I")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,23,"getMinute","()I")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,24,"getSecond","()I")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,25,"getMillisecond","()I")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,26,"getFractionalSecond","()Ljava/math/BigDecimal;")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,27,"compare","(Ljavax/xml/datatype/XMLGregorianCalendar;)I")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,28,"normalize","()Ljavax/xml/datatype/XMLGregorianCalendar;")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,29,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,30,"hashCode","()I")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,31,"toXMLFormat","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,32,"getXMLSchemaType","()Ljavax/xml/namespace/QName;")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,33,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,34,"isValid","()Z")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,35,"add","(Ljavax/xml/datatype/Duration;)V")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,36,"toGregorianCalendar","()Ljava/util/GregorianCalendar;")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,37,"toGregorianCalendar","(Ljava/util/TimeZone;Ljava/util/Locale;Ljavax/xml/datatype/XMLGregorianCalendar;)Ljava/util/GregorianCalendar;")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,38,"getTimeZone","(I)Ljava/util/TimeZone;")
J2CPP_DEFINE_METHOD(javax::xml::datatype::XMLGregorianCalendar,39,"clone","()Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_DATATYPE_XMLGREGORIANCALENDAR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
