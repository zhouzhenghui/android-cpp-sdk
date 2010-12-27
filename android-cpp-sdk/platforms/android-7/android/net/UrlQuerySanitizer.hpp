/*================================================================================
  code generated by: java2cpp
  class: android.net.UrlQuerySanitizer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_URLQUERYSANITIZER_HPP_DECL
#define J2CPP_ANDROID_NET_URLQUERYSANITIZER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class Set; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }
namespace j2cpp { namespace android { namespace net { namespace UrlQuerySanitizer_ { class ValueSanitizer; } } } }


#include <android/net/UrlQuerySanitizer.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/List.hpp>
#include <java/util/Set.hpp>


namespace j2cpp {

namespace android { namespace net {

	class UrlQuerySanitizer;
	namespace UrlQuerySanitizer_ {

		class ValueSanitizer;
		class ValueSanitizer
			: public cpp_object<ValueSanitizer>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit ValueSanitizer(jobject jobj)
			: cpp_object<ValueSanitizer>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			local_ref< java::lang::String > sanitize(local_ref< java::lang::String > const&);
		}; //class ValueSanitizer

		class IllegalCharacterValueSanitizer;
		class IllegalCharacterValueSanitizer
			: public cpp_object<IllegalCharacterValueSanitizer>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)
			J2CPP_DECLARE_FIELD(4)
			J2CPP_DECLARE_FIELD(5)
			J2CPP_DECLARE_FIELD(6)
			J2CPP_DECLARE_FIELD(7)
			J2CPP_DECLARE_FIELD(8)
			J2CPP_DECLARE_FIELD(9)
			J2CPP_DECLARE_FIELD(10)
			J2CPP_DECLARE_FIELD(11)
			J2CPP_DECLARE_FIELD(12)
			J2CPP_DECLARE_FIELD(13)
			J2CPP_DECLARE_FIELD(14)
			J2CPP_DECLARE_FIELD(15)
			J2CPP_DECLARE_FIELD(16)
			J2CPP_DECLARE_FIELD(17)
			J2CPP_DECLARE_FIELD(18)
			J2CPP_DECLARE_FIELD(19)
			J2CPP_DECLARE_FIELD(20)
			J2CPP_DECLARE_FIELD(21)

			explicit IllegalCharacterValueSanitizer(jobject jobj)
			: cpp_object<IllegalCharacterValueSanitizer>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;
			operator local_ref<android::net::UrlQuerySanitizer_::ValueSanitizer>() const;


			IllegalCharacterValueSanitizer(cpp_int const&);
			local_ref< java::lang::String > sanitize(local_ref< java::lang::String > const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > SPACE_OK;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > OTHER_WHITESPACE_OK;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > NON_7_BIT_ASCII_OK;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > DQUOTE_OK;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_int > SQUOTE_OK;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_int > LT_OK;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), cpp_int > GT_OK;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), cpp_int > AMP_OK;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), cpp_int > PCT_OK;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), cpp_int > NUL_OK;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), cpp_int > SCRIPT_URL_OK;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), cpp_int > ALL_OK;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), cpp_int > ALL_WHITESPACE_OK;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), cpp_int > ALL_ILLEGAL;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), cpp_int > ALL_BUT_NUL_LEGAL;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(15), J2CPP_FIELD_SIGNATURE(15), cpp_int > ALL_BUT_WHITESPACE_LEGAL;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(16), J2CPP_FIELD_SIGNATURE(16), cpp_int > URL_LEGAL;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(17), J2CPP_FIELD_SIGNATURE(17), cpp_int > URL_AND_SPACE_LEGAL;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(18), J2CPP_FIELD_SIGNATURE(18), cpp_int > AMP_LEGAL;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(19), J2CPP_FIELD_SIGNATURE(19), cpp_int > AMP_AND_SPACE_LEGAL;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(20), J2CPP_FIELD_SIGNATURE(20), cpp_int > SPACE_LEGAL;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(21), J2CPP_FIELD_SIGNATURE(21), cpp_int > ALL_BUT_NUL_AND_ANGLE_BRACKETS_LEGAL;
		}; //class IllegalCharacterValueSanitizer

		class ParameterValuePair;
		class ParameterValuePair
			: public cpp_object<ParameterValuePair>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)

			explicit ParameterValuePair(jobject jobj)
			: cpp_object<ParameterValuePair>(jobj)
, mParameter(jobj)
, mValue(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			ParameterValuePair(local_ref< android::net::UrlQuerySanitizer > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);

			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > mParameter;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > mValue;
		}; //class ParameterValuePair

	} //namespace UrlQuerySanitizer_

	class UrlQuerySanitizer
		: public cpp_object<UrlQuerySanitizer>
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

		typedef UrlQuerySanitizer_::ValueSanitizer ValueSanitizer;
		typedef UrlQuerySanitizer_::IllegalCharacterValueSanitizer IllegalCharacterValueSanitizer;
		typedef UrlQuerySanitizer_::ParameterValuePair ParameterValuePair;

		explicit UrlQuerySanitizer(jobject jobj)
		: cpp_object<UrlQuerySanitizer>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		UrlQuerySanitizer();
		UrlQuerySanitizer(local_ref< java::lang::String > const&);
		local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer > getUnregisteredParameterValueSanitizer();
		void setUnregisteredParameterValueSanitizer(local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer > const&);
		static local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer > getAllIllegal();
		static local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer > getAllButNulLegal();
		static local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer > getAllButWhitespaceLegal();
		static local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer > getUrlLegal();
		static local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer > getUrlAndSpaceLegal();
		static local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer > getAmpLegal();
		static local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer > getAmpAndSpaceLegal();
		static local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer > getSpaceLegal();
		static local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer > getAllButNulAndAngleBracketsLegal();
		void parseUrl(local_ref< java::lang::String > const&);
		void parseQuery(local_ref< java::lang::String > const&);
		local_ref< java::util::Set > getParameterSet();
		local_ref< java::util::List > getParameterList();
		cpp_boolean hasParameter(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getValue(local_ref< java::lang::String > const&);
		void registerParameter(local_ref< java::lang::String > const&, local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer > const&);
		void registerParameters(local_ref< cpp_object_array<java::lang::String, 1> > const&, local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer > const&);
		void setAllowUnregisteredParamaters(cpp_boolean const&);
		cpp_boolean getAllowUnregisteredParamaters();
		void setPreferFirstRepeatedParameter(cpp_boolean const&);
		cpp_boolean getPreferFirstRepeatedParameter();
		local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer > getValueSanitizer(local_ref< java::lang::String > const&);
		local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer > getEffectiveValueSanitizer(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > unescape(local_ref< java::lang::String > const&);
	}; //class UrlQuerySanitizer

} //namespace net
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_URLQUERYSANITIZER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_URLQUERYSANITIZER_HPP_IMPL
#define J2CPP_ANDROID_NET_URLQUERYSANITIZER_HPP_IMPL

namespace j2cpp {




android::net::UrlQuerySanitizer_::ValueSanitizer::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

local_ref< java::lang::String > android::net::UrlQuerySanitizer_::ValueSanitizer::sanitize(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::net::UrlQuerySanitizer_::ValueSanitizer,"android/net/UrlQuerySanitizer$ValueSanitizer")
J2CPP_DEFINE_METHOD(android::net::UrlQuerySanitizer_::ValueSanitizer,0,"sanitize","(Ljava/lang/String;)Ljava/lang/String;")


android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::operator local_ref<android::net::UrlQuerySanitizer_::ValueSanitizer>() const
{
	return local_ref<android::net::UrlQuerySanitizer_::ValueSanitizer>(get_jtype());
}


android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::IllegalCharacterValueSanitizer(cpp_int const &a0)
: cpp_object<android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer>(
	environment::get().get_jenv()->NewObject(
		get_class<android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_CLASS_NAME>(),
		get_method_id<android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_CLASS_NAME, android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_METHOD_NAME(0), android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}


local_ref< java::lang::String > android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::sanitize(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}


static_field<
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_CLASS_NAME,
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_NAME(0),
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::SPACE_OK;

static_field<
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_CLASS_NAME,
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_NAME(1),
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::OTHER_WHITESPACE_OK;

static_field<
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_CLASS_NAME,
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_NAME(2),
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::NON_7_BIT_ASCII_OK;

static_field<
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_CLASS_NAME,
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_NAME(3),
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::DQUOTE_OK;

static_field<
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_CLASS_NAME,
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_NAME(4),
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_SIGNATURE(4),
	cpp_int
> android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::SQUOTE_OK;

static_field<
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_CLASS_NAME,
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_NAME(5),
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_SIGNATURE(5),
	cpp_int
> android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::LT_OK;

static_field<
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_CLASS_NAME,
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_NAME(6),
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_SIGNATURE(6),
	cpp_int
> android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::GT_OK;

static_field<
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_CLASS_NAME,
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_NAME(7),
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_SIGNATURE(7),
	cpp_int
> android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::AMP_OK;

static_field<
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_CLASS_NAME,
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_NAME(8),
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_SIGNATURE(8),
	cpp_int
> android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::PCT_OK;

static_field<
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_CLASS_NAME,
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_NAME(9),
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_SIGNATURE(9),
	cpp_int
> android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::NUL_OK;

static_field<
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_CLASS_NAME,
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_NAME(10),
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_SIGNATURE(10),
	cpp_int
> android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::SCRIPT_URL_OK;

static_field<
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_CLASS_NAME,
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_NAME(11),
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_SIGNATURE(11),
	cpp_int
> android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::ALL_OK;

static_field<
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_CLASS_NAME,
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_NAME(12),
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_SIGNATURE(12),
	cpp_int
> android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::ALL_WHITESPACE_OK;

static_field<
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_CLASS_NAME,
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_NAME(13),
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_SIGNATURE(13),
	cpp_int
> android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::ALL_ILLEGAL;

static_field<
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_CLASS_NAME,
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_NAME(14),
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_SIGNATURE(14),
	cpp_int
> android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::ALL_BUT_NUL_LEGAL;

static_field<
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_CLASS_NAME,
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_NAME(15),
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_SIGNATURE(15),
	cpp_int
> android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::ALL_BUT_WHITESPACE_LEGAL;

static_field<
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_CLASS_NAME,
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_NAME(16),
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_SIGNATURE(16),
	cpp_int
> android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::URL_LEGAL;

static_field<
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_CLASS_NAME,
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_NAME(17),
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_SIGNATURE(17),
	cpp_int
> android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::URL_AND_SPACE_LEGAL;

static_field<
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_CLASS_NAME,
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_NAME(18),
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_SIGNATURE(18),
	cpp_int
> android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::AMP_LEGAL;

static_field<
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_CLASS_NAME,
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_NAME(19),
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_SIGNATURE(19),
	cpp_int
> android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::AMP_AND_SPACE_LEGAL;

static_field<
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_CLASS_NAME,
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_NAME(20),
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_SIGNATURE(20),
	cpp_int
> android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::SPACE_LEGAL;

static_field<
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_CLASS_NAME,
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_NAME(21),
	android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::J2CPP_FIELD_SIGNATURE(21),
	cpp_int
> android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer::ALL_BUT_NUL_AND_ANGLE_BRACKETS_LEGAL;


J2CPP_DEFINE_CLASS(android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer,"android/net/UrlQuerySanitizer$IllegalCharacterValueSanitizer")
J2CPP_DEFINE_METHOD(android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer,0,"<init>","(I)V")
J2CPP_DEFINE_METHOD(android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer,1,"sanitize","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer,0,"SPACE_OK","I")
J2CPP_DEFINE_FIELD(android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer,1,"OTHER_WHITESPACE_OK","I")
J2CPP_DEFINE_FIELD(android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer,2,"NON_7_BIT_ASCII_OK","I")
J2CPP_DEFINE_FIELD(android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer,3,"DQUOTE_OK","I")
J2CPP_DEFINE_FIELD(android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer,4,"SQUOTE_OK","I")
J2CPP_DEFINE_FIELD(android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer,5,"LT_OK","I")
J2CPP_DEFINE_FIELD(android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer,6,"GT_OK","I")
J2CPP_DEFINE_FIELD(android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer,7,"AMP_OK","I")
J2CPP_DEFINE_FIELD(android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer,8,"PCT_OK","I")
J2CPP_DEFINE_FIELD(android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer,9,"NUL_OK","I")
J2CPP_DEFINE_FIELD(android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer,10,"SCRIPT_URL_OK","I")
J2CPP_DEFINE_FIELD(android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer,11,"ALL_OK","I")
J2CPP_DEFINE_FIELD(android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer,12,"ALL_WHITESPACE_OK","I")
J2CPP_DEFINE_FIELD(android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer,13,"ALL_ILLEGAL","I")
J2CPP_DEFINE_FIELD(android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer,14,"ALL_BUT_NUL_LEGAL","I")
J2CPP_DEFINE_FIELD(android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer,15,"ALL_BUT_WHITESPACE_LEGAL","I")
J2CPP_DEFINE_FIELD(android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer,16,"URL_LEGAL","I")
J2CPP_DEFINE_FIELD(android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer,17,"URL_AND_SPACE_LEGAL","I")
J2CPP_DEFINE_FIELD(android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer,18,"AMP_LEGAL","I")
J2CPP_DEFINE_FIELD(android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer,19,"AMP_AND_SPACE_LEGAL","I")
J2CPP_DEFINE_FIELD(android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer,20,"SPACE_LEGAL","I")
J2CPP_DEFINE_FIELD(android::net::UrlQuerySanitizer_::IllegalCharacterValueSanitizer,21,"ALL_BUT_NUL_AND_ANGLE_BRACKETS_LEGAL","I")


android::net::UrlQuerySanitizer_::ParameterValuePair::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


android::net::UrlQuerySanitizer_::ParameterValuePair::ParameterValuePair(local_ref< android::net::UrlQuerySanitizer > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
: cpp_object<android::net::UrlQuerySanitizer_::ParameterValuePair>(
	environment::get().get_jenv()->NewObject(
		get_class<android::net::UrlQuerySanitizer_::ParameterValuePair::J2CPP_CLASS_NAME>(),
		get_method_id<android::net::UrlQuerySanitizer_::ParameterValuePair::J2CPP_CLASS_NAME, android::net::UrlQuerySanitizer_::ParameterValuePair::J2CPP_METHOD_NAME(0), android::net::UrlQuerySanitizer_::ParameterValuePair::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
	)
)
, mParameter(get_jtype())
, mValue(get_jtype())
{
}




J2CPP_DEFINE_CLASS(android::net::UrlQuerySanitizer_::ParameterValuePair,"android/net/UrlQuerySanitizer$ParameterValuePair")
J2CPP_DEFINE_METHOD(android::net::UrlQuerySanitizer_::ParameterValuePair,0,"<init>","(Landroid/net/UrlQuerySanitizer;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_FIELD(android::net::UrlQuerySanitizer_::ParameterValuePair,0,"mParameter","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::UrlQuerySanitizer_::ParameterValuePair,1,"mValue","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::UrlQuerySanitizer_::ParameterValuePair,2,"this$0","Landroid/net/UrlQuerySanitizer;")



android::net::UrlQuerySanitizer::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


android::net::UrlQuerySanitizer::UrlQuerySanitizer()
: cpp_object<android::net::UrlQuerySanitizer>(
	environment::get().get_jenv()->NewObject(
		get_class<android::net::UrlQuerySanitizer::J2CPP_CLASS_NAME>(),
		get_method_id<android::net::UrlQuerySanitizer::J2CPP_CLASS_NAME, android::net::UrlQuerySanitizer::J2CPP_METHOD_NAME(0), android::net::UrlQuerySanitizer::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}



android::net::UrlQuerySanitizer::UrlQuerySanitizer(local_ref< java::lang::String > const &a0)
: cpp_object<android::net::UrlQuerySanitizer>(
	environment::get().get_jenv()->NewObject(
		get_class<android::net::UrlQuerySanitizer::J2CPP_CLASS_NAME>(),
		get_method_id<android::net::UrlQuerySanitizer::J2CPP_CLASS_NAME, android::net::UrlQuerySanitizer::J2CPP_METHOD_NAME(1), android::net::UrlQuerySanitizer::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype()
	)
)
{
}


local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer > android::net::UrlQuerySanitizer::getUnregisteredParameterValueSanitizer()
{
	return local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void android::net::UrlQuerySanitizer::setUnregisteredParameterValueSanitizer(local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer > android::net::UrlQuerySanitizer::getAllIllegal()
{
	return local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>()
		)
	);
}

local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer > android::net::UrlQuerySanitizer::getAllButNulLegal()
{
	return local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), true>()
		)
	);
}

local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer > android::net::UrlQuerySanitizer::getAllButWhitespaceLegal()
{
	return local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), true>()
		)
	);
}

local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer > android::net::UrlQuerySanitizer::getUrlLegal()
{
	return local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), true>()
		)
	);
}

local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer > android::net::UrlQuerySanitizer::getUrlAndSpaceLegal()
{
	return local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), true>()
		)
	);
}

local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer > android::net::UrlQuerySanitizer::getAmpLegal()
{
	return local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), true>()
		)
	);
}

local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer > android::net::UrlQuerySanitizer::getAmpAndSpaceLegal()
{
	return local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), true>()
		)
	);
}

local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer > android::net::UrlQuerySanitizer::getSpaceLegal()
{
	return local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), true>()
		)
	);
}

local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer > android::net::UrlQuerySanitizer::getAllButNulAndAngleBracketsLegal()
{
	return local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), true>()
		)
	);
}

void android::net::UrlQuerySanitizer::parseUrl(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

void android::net::UrlQuerySanitizer::parseQuery(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Set > android::net::UrlQuerySanitizer::getParameterSet()
{
	return local_ref< java::util::Set >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

local_ref< java::util::List > android::net::UrlQuerySanitizer::getParameterList()
{
	return local_ref< java::util::List >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

cpp_boolean android::net::UrlQuerySanitizer::hasParameter(local_ref< java::lang::String > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::net::UrlQuerySanitizer::getValue(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype()
		)
	);
}

void android::net::UrlQuerySanitizer::registerParameter(local_ref< java::lang::String > const &a0, local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::net::UrlQuerySanitizer::registerParameters(local_ref< cpp_object_array<java::lang::String, 1> > const &a0, local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::net::UrlQuerySanitizer::setAllowUnregisteredParamaters(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::net::UrlQuerySanitizer::getAllowUnregisteredParamaters()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>()
		)
	);
}

void android::net::UrlQuerySanitizer::setPreferFirstRepeatedParameter(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::net::UrlQuerySanitizer::getPreferFirstRepeatedParameter()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>()
		)
	);
}



local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer > android::net::UrlQuerySanitizer::getValueSanitizer(local_ref< java::lang::String > const &a0)
{
	return local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer > android::net::UrlQuerySanitizer::getEffectiveValueSanitizer(local_ref< java::lang::String > const &a0)
{
	return local_ref< android::net::UrlQuerySanitizer_::ValueSanitizer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::net::UrlQuerySanitizer::unescape(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>(),
			a0.get_jtype()
		)
	);
}





J2CPP_DEFINE_CLASS(android::net::UrlQuerySanitizer,"android/net/UrlQuerySanitizer")
J2CPP_DEFINE_METHOD(android::net::UrlQuerySanitizer,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::net::UrlQuerySanitizer,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::net::UrlQuerySanitizer,2,"getUnregisteredParameterValueSanitizer","()Landroid/net/UrlQuerySanitizer$ValueSanitizer;")
J2CPP_DEFINE_METHOD(android::net::UrlQuerySanitizer,3,"setUnregisteredParameterValueSanitizer","(Landroid/net/UrlQuerySanitizer$ValueSanitizer;)V")
J2CPP_DEFINE_METHOD(android::net::UrlQuerySanitizer,4,"getAllIllegal","()Landroid/net/UrlQuerySanitizer$ValueSanitizer;")
J2CPP_DEFINE_METHOD(android::net::UrlQuerySanitizer,5,"getAllButNulLegal","()Landroid/net/UrlQuerySanitizer$ValueSanitizer;")
J2CPP_DEFINE_METHOD(android::net::UrlQuerySanitizer,6,"getAllButWhitespaceLegal","()Landroid/net/UrlQuerySanitizer$ValueSanitizer;")
J2CPP_DEFINE_METHOD(android::net::UrlQuerySanitizer,7,"getUrlLegal","()Landroid/net/UrlQuerySanitizer$ValueSanitizer;")
J2CPP_DEFINE_METHOD(android::net::UrlQuerySanitizer,8,"getUrlAndSpaceLegal","()Landroid/net/UrlQuerySanitizer$ValueSanitizer;")
J2CPP_DEFINE_METHOD(android::net::UrlQuerySanitizer,9,"getAmpLegal","()Landroid/net/UrlQuerySanitizer$ValueSanitizer;")
J2CPP_DEFINE_METHOD(android::net::UrlQuerySanitizer,10,"getAmpAndSpaceLegal","()Landroid/net/UrlQuerySanitizer$ValueSanitizer;")
J2CPP_DEFINE_METHOD(android::net::UrlQuerySanitizer,11,"getSpaceLegal","()Landroid/net/UrlQuerySanitizer$ValueSanitizer;")
J2CPP_DEFINE_METHOD(android::net::UrlQuerySanitizer,12,"getAllButNulAndAngleBracketsLegal","()Landroid/net/UrlQuerySanitizer$ValueSanitizer;")
J2CPP_DEFINE_METHOD(android::net::UrlQuerySanitizer,13,"parseUrl","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::net::UrlQuerySanitizer,14,"parseQuery","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::net::UrlQuerySanitizer,15,"getParameterSet","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(android::net::UrlQuerySanitizer,16,"getParameterList","()Ljava/util/List;")
J2CPP_DEFINE_METHOD(android::net::UrlQuerySanitizer,17,"hasParameter","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(android::net::UrlQuerySanitizer,18,"getValue","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::net::UrlQuerySanitizer,19,"registerParameter","(Ljava/lang/String;Landroid/net/UrlQuerySanitizer$ValueSanitizer;)V")
J2CPP_DEFINE_METHOD(android::net::UrlQuerySanitizer,20,"registerParameters","([java.lang.StringLandroid/net/UrlQuerySanitizer$ValueSanitizer;)V")
J2CPP_DEFINE_METHOD(android::net::UrlQuerySanitizer,21,"setAllowUnregisteredParamaters","(Z)V")
J2CPP_DEFINE_METHOD(android::net::UrlQuerySanitizer,22,"getAllowUnregisteredParamaters","()Z")
J2CPP_DEFINE_METHOD(android::net::UrlQuerySanitizer,23,"setPreferFirstRepeatedParameter","(Z)V")
J2CPP_DEFINE_METHOD(android::net::UrlQuerySanitizer,24,"getPreferFirstRepeatedParameter","()Z")
J2CPP_DEFINE_METHOD(android::net::UrlQuerySanitizer,25,"parseEntry","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::net::UrlQuerySanitizer,26,"addSanitizedEntry","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::net::UrlQuerySanitizer,27,"getValueSanitizer","(Ljava/lang/String;)Landroid/net/UrlQuerySanitizer$ValueSanitizer;")
J2CPP_DEFINE_METHOD(android::net::UrlQuerySanitizer,28,"getEffectiveValueSanitizer","(Ljava/lang/String;)Landroid/net/UrlQuerySanitizer$ValueSanitizer;")
J2CPP_DEFINE_METHOD(android::net::UrlQuerySanitizer,29,"unescape","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::net::UrlQuerySanitizer,30,"isHexDigit","(C)Z")
J2CPP_DEFINE_METHOD(android::net::UrlQuerySanitizer,31,"decodeHexDigit","(C)I")
J2CPP_DEFINE_METHOD(android::net::UrlQuerySanitizer,32,"clear","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_URLQUERYSANITIZER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
