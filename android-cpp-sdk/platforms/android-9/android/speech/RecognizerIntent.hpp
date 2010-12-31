/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.speech.RecognizerIntent
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_SPEECH_RECOGNIZERINTENT_HPP_DECL
#define J2CPP_ANDROID_SPEECH_RECOGNIZERINTENT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace content { class Intent; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }


#include <android/content/Context.hpp>
#include <android/content/Intent.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace speech {

	class RecognizerIntent;
	class RecognizerIntent
		: public object<RecognizerIntent>
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
		J2CPP_DECLARE_FIELD(22)
		J2CPP_DECLARE_FIELD(23)
		J2CPP_DECLARE_FIELD(24)
		J2CPP_DECLARE_FIELD(25)

		explicit RecognizerIntent(jobject jobj)
		: object<RecognizerIntent>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< android::content::Intent > getVoiceDetailsIntent(local_ref< android::content::Context >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > EXTRA_CALLING_PACKAGE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > ACTION_RECOGNIZE_SPEECH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > ACTION_WEB_SEARCH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > EXTRA_SPEECH_INPUT_MINIMUM_LENGTH_MILLIS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::lang::String > > EXTRA_SPEECH_INPUT_COMPLETE_SILENCE_LENGTH_MILLIS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< java::lang::String > > EXTRA_SPEECH_INPUT_POSSIBLY_COMPLETE_SILENCE_LENGTH_MILLIS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< java::lang::String > > EXTRA_LANGUAGE_MODEL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), local_ref< java::lang::String > > LANGUAGE_MODEL_FREE_FORM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), local_ref< java::lang::String > > LANGUAGE_MODEL_WEB_SEARCH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), local_ref< java::lang::String > > EXTRA_PROMPT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), local_ref< java::lang::String > > EXTRA_LANGUAGE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), local_ref< java::lang::String > > EXTRA_MAX_RESULTS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), local_ref< java::lang::String > > EXTRA_PARTIAL_RESULTS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), local_ref< java::lang::String > > EXTRA_RESULTS_PENDINGINTENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), local_ref< java::lang::String > > EXTRA_RESULTS_PENDINGINTENT_BUNDLE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(15), J2CPP_FIELD_SIGNATURE(15), jint > RESULT_NO_MATCH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(16), J2CPP_FIELD_SIGNATURE(16), jint > RESULT_CLIENT_ERROR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(17), J2CPP_FIELD_SIGNATURE(17), jint > RESULT_SERVER_ERROR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(18), J2CPP_FIELD_SIGNATURE(18), jint > RESULT_NETWORK_ERROR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(19), J2CPP_FIELD_SIGNATURE(19), jint > RESULT_AUDIO_ERROR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(20), J2CPP_FIELD_SIGNATURE(20), local_ref< java::lang::String > > EXTRA_RESULTS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(21), J2CPP_FIELD_SIGNATURE(21), local_ref< java::lang::String > > DETAILS_META_DATA;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(22), J2CPP_FIELD_SIGNATURE(22), local_ref< java::lang::String > > ACTION_GET_LANGUAGE_DETAILS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(23), J2CPP_FIELD_SIGNATURE(23), local_ref< java::lang::String > > EXTRA_ONLY_RETURN_LANGUAGE_PREFERENCE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(24), J2CPP_FIELD_SIGNATURE(24), local_ref< java::lang::String > > EXTRA_LANGUAGE_PREFERENCE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(25), J2CPP_FIELD_SIGNATURE(25), local_ref< java::lang::String > > EXTRA_SUPPORTED_LANGUAGES;
	}; //class RecognizerIntent

} //namespace speech
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_SPEECH_RECOGNIZERINTENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_SPEECH_RECOGNIZERINTENT_HPP_IMPL
#define J2CPP_ANDROID_SPEECH_RECOGNIZERINTENT_HPP_IMPL

namespace j2cpp {



android::speech::RecognizerIntent::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< android::content::Intent > android::speech::RecognizerIntent::getVoiceDetailsIntent(local_ref< android::content::Context > const &a0)
{
	return call_static_method<
		android::speech::RecognizerIntent::J2CPP_CLASS_NAME,
		android::speech::RecognizerIntent::J2CPP_METHOD_NAME(1),
		android::speech::RecognizerIntent::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::content::Intent > >
	(a0);
}


static_field<
	android::speech::RecognizerIntent::J2CPP_CLASS_NAME,
	android::speech::RecognizerIntent::J2CPP_FIELD_NAME(0),
	android::speech::RecognizerIntent::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> android::speech::RecognizerIntent::EXTRA_CALLING_PACKAGE;

static_field<
	android::speech::RecognizerIntent::J2CPP_CLASS_NAME,
	android::speech::RecognizerIntent::J2CPP_FIELD_NAME(1),
	android::speech::RecognizerIntent::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> android::speech::RecognizerIntent::ACTION_RECOGNIZE_SPEECH;

static_field<
	android::speech::RecognizerIntent::J2CPP_CLASS_NAME,
	android::speech::RecognizerIntent::J2CPP_FIELD_NAME(2),
	android::speech::RecognizerIntent::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> android::speech::RecognizerIntent::ACTION_WEB_SEARCH;

static_field<
	android::speech::RecognizerIntent::J2CPP_CLASS_NAME,
	android::speech::RecognizerIntent::J2CPP_FIELD_NAME(3),
	android::speech::RecognizerIntent::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> android::speech::RecognizerIntent::EXTRA_SPEECH_INPUT_MINIMUM_LENGTH_MILLIS;

static_field<
	android::speech::RecognizerIntent::J2CPP_CLASS_NAME,
	android::speech::RecognizerIntent::J2CPP_FIELD_NAME(4),
	android::speech::RecognizerIntent::J2CPP_FIELD_SIGNATURE(4),
	local_ref< java::lang::String >
> android::speech::RecognizerIntent::EXTRA_SPEECH_INPUT_COMPLETE_SILENCE_LENGTH_MILLIS;

static_field<
	android::speech::RecognizerIntent::J2CPP_CLASS_NAME,
	android::speech::RecognizerIntent::J2CPP_FIELD_NAME(5),
	android::speech::RecognizerIntent::J2CPP_FIELD_SIGNATURE(5),
	local_ref< java::lang::String >
> android::speech::RecognizerIntent::EXTRA_SPEECH_INPUT_POSSIBLY_COMPLETE_SILENCE_LENGTH_MILLIS;

static_field<
	android::speech::RecognizerIntent::J2CPP_CLASS_NAME,
	android::speech::RecognizerIntent::J2CPP_FIELD_NAME(6),
	android::speech::RecognizerIntent::J2CPP_FIELD_SIGNATURE(6),
	local_ref< java::lang::String >
> android::speech::RecognizerIntent::EXTRA_LANGUAGE_MODEL;

static_field<
	android::speech::RecognizerIntent::J2CPP_CLASS_NAME,
	android::speech::RecognizerIntent::J2CPP_FIELD_NAME(7),
	android::speech::RecognizerIntent::J2CPP_FIELD_SIGNATURE(7),
	local_ref< java::lang::String >
> android::speech::RecognizerIntent::LANGUAGE_MODEL_FREE_FORM;

static_field<
	android::speech::RecognizerIntent::J2CPP_CLASS_NAME,
	android::speech::RecognizerIntent::J2CPP_FIELD_NAME(8),
	android::speech::RecognizerIntent::J2CPP_FIELD_SIGNATURE(8),
	local_ref< java::lang::String >
> android::speech::RecognizerIntent::LANGUAGE_MODEL_WEB_SEARCH;

static_field<
	android::speech::RecognizerIntent::J2CPP_CLASS_NAME,
	android::speech::RecognizerIntent::J2CPP_FIELD_NAME(9),
	android::speech::RecognizerIntent::J2CPP_FIELD_SIGNATURE(9),
	local_ref< java::lang::String >
> android::speech::RecognizerIntent::EXTRA_PROMPT;

static_field<
	android::speech::RecognizerIntent::J2CPP_CLASS_NAME,
	android::speech::RecognizerIntent::J2CPP_FIELD_NAME(10),
	android::speech::RecognizerIntent::J2CPP_FIELD_SIGNATURE(10),
	local_ref< java::lang::String >
> android::speech::RecognizerIntent::EXTRA_LANGUAGE;

static_field<
	android::speech::RecognizerIntent::J2CPP_CLASS_NAME,
	android::speech::RecognizerIntent::J2CPP_FIELD_NAME(11),
	android::speech::RecognizerIntent::J2CPP_FIELD_SIGNATURE(11),
	local_ref< java::lang::String >
> android::speech::RecognizerIntent::EXTRA_MAX_RESULTS;

static_field<
	android::speech::RecognizerIntent::J2CPP_CLASS_NAME,
	android::speech::RecognizerIntent::J2CPP_FIELD_NAME(12),
	android::speech::RecognizerIntent::J2CPP_FIELD_SIGNATURE(12),
	local_ref< java::lang::String >
> android::speech::RecognizerIntent::EXTRA_PARTIAL_RESULTS;

static_field<
	android::speech::RecognizerIntent::J2CPP_CLASS_NAME,
	android::speech::RecognizerIntent::J2CPP_FIELD_NAME(13),
	android::speech::RecognizerIntent::J2CPP_FIELD_SIGNATURE(13),
	local_ref< java::lang::String >
> android::speech::RecognizerIntent::EXTRA_RESULTS_PENDINGINTENT;

static_field<
	android::speech::RecognizerIntent::J2CPP_CLASS_NAME,
	android::speech::RecognizerIntent::J2CPP_FIELD_NAME(14),
	android::speech::RecognizerIntent::J2CPP_FIELD_SIGNATURE(14),
	local_ref< java::lang::String >
> android::speech::RecognizerIntent::EXTRA_RESULTS_PENDINGINTENT_BUNDLE;

static_field<
	android::speech::RecognizerIntent::J2CPP_CLASS_NAME,
	android::speech::RecognizerIntent::J2CPP_FIELD_NAME(15),
	android::speech::RecognizerIntent::J2CPP_FIELD_SIGNATURE(15),
	jint
> android::speech::RecognizerIntent::RESULT_NO_MATCH;

static_field<
	android::speech::RecognizerIntent::J2CPP_CLASS_NAME,
	android::speech::RecognizerIntent::J2CPP_FIELD_NAME(16),
	android::speech::RecognizerIntent::J2CPP_FIELD_SIGNATURE(16),
	jint
> android::speech::RecognizerIntent::RESULT_CLIENT_ERROR;

static_field<
	android::speech::RecognizerIntent::J2CPP_CLASS_NAME,
	android::speech::RecognizerIntent::J2CPP_FIELD_NAME(17),
	android::speech::RecognizerIntent::J2CPP_FIELD_SIGNATURE(17),
	jint
> android::speech::RecognizerIntent::RESULT_SERVER_ERROR;

static_field<
	android::speech::RecognizerIntent::J2CPP_CLASS_NAME,
	android::speech::RecognizerIntent::J2CPP_FIELD_NAME(18),
	android::speech::RecognizerIntent::J2CPP_FIELD_SIGNATURE(18),
	jint
> android::speech::RecognizerIntent::RESULT_NETWORK_ERROR;

static_field<
	android::speech::RecognizerIntent::J2CPP_CLASS_NAME,
	android::speech::RecognizerIntent::J2CPP_FIELD_NAME(19),
	android::speech::RecognizerIntent::J2CPP_FIELD_SIGNATURE(19),
	jint
> android::speech::RecognizerIntent::RESULT_AUDIO_ERROR;

static_field<
	android::speech::RecognizerIntent::J2CPP_CLASS_NAME,
	android::speech::RecognizerIntent::J2CPP_FIELD_NAME(20),
	android::speech::RecognizerIntent::J2CPP_FIELD_SIGNATURE(20),
	local_ref< java::lang::String >
> android::speech::RecognizerIntent::EXTRA_RESULTS;

static_field<
	android::speech::RecognizerIntent::J2CPP_CLASS_NAME,
	android::speech::RecognizerIntent::J2CPP_FIELD_NAME(21),
	android::speech::RecognizerIntent::J2CPP_FIELD_SIGNATURE(21),
	local_ref< java::lang::String >
> android::speech::RecognizerIntent::DETAILS_META_DATA;

static_field<
	android::speech::RecognizerIntent::J2CPP_CLASS_NAME,
	android::speech::RecognizerIntent::J2CPP_FIELD_NAME(22),
	android::speech::RecognizerIntent::J2CPP_FIELD_SIGNATURE(22),
	local_ref< java::lang::String >
> android::speech::RecognizerIntent::ACTION_GET_LANGUAGE_DETAILS;

static_field<
	android::speech::RecognizerIntent::J2CPP_CLASS_NAME,
	android::speech::RecognizerIntent::J2CPP_FIELD_NAME(23),
	android::speech::RecognizerIntent::J2CPP_FIELD_SIGNATURE(23),
	local_ref< java::lang::String >
> android::speech::RecognizerIntent::EXTRA_ONLY_RETURN_LANGUAGE_PREFERENCE;

static_field<
	android::speech::RecognizerIntent::J2CPP_CLASS_NAME,
	android::speech::RecognizerIntent::J2CPP_FIELD_NAME(24),
	android::speech::RecognizerIntent::J2CPP_FIELD_SIGNATURE(24),
	local_ref< java::lang::String >
> android::speech::RecognizerIntent::EXTRA_LANGUAGE_PREFERENCE;

static_field<
	android::speech::RecognizerIntent::J2CPP_CLASS_NAME,
	android::speech::RecognizerIntent::J2CPP_FIELD_NAME(25),
	android::speech::RecognizerIntent::J2CPP_FIELD_SIGNATURE(25),
	local_ref< java::lang::String >
> android::speech::RecognizerIntent::EXTRA_SUPPORTED_LANGUAGES;


J2CPP_DEFINE_CLASS(android::speech::RecognizerIntent,"android/speech/RecognizerIntent")
J2CPP_DEFINE_METHOD(android::speech::RecognizerIntent,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::speech::RecognizerIntent,1,"getVoiceDetailsIntent","(Landroid/content/Context;)Landroid/content/Intent;")
J2CPP_DEFINE_FIELD(android::speech::RecognizerIntent,0,"EXTRA_CALLING_PACKAGE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::speech::RecognizerIntent,1,"ACTION_RECOGNIZE_SPEECH","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::speech::RecognizerIntent,2,"ACTION_WEB_SEARCH","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::speech::RecognizerIntent,3,"EXTRA_SPEECH_INPUT_MINIMUM_LENGTH_MILLIS","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::speech::RecognizerIntent,4,"EXTRA_SPEECH_INPUT_COMPLETE_SILENCE_LENGTH_MILLIS","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::speech::RecognizerIntent,5,"EXTRA_SPEECH_INPUT_POSSIBLY_COMPLETE_SILENCE_LENGTH_MILLIS","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::speech::RecognizerIntent,6,"EXTRA_LANGUAGE_MODEL","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::speech::RecognizerIntent,7,"LANGUAGE_MODEL_FREE_FORM","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::speech::RecognizerIntent,8,"LANGUAGE_MODEL_WEB_SEARCH","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::speech::RecognizerIntent,9,"EXTRA_PROMPT","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::speech::RecognizerIntent,10,"EXTRA_LANGUAGE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::speech::RecognizerIntent,11,"EXTRA_MAX_RESULTS","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::speech::RecognizerIntent,12,"EXTRA_PARTIAL_RESULTS","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::speech::RecognizerIntent,13,"EXTRA_RESULTS_PENDINGINTENT","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::speech::RecognizerIntent,14,"EXTRA_RESULTS_PENDINGINTENT_BUNDLE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::speech::RecognizerIntent,15,"RESULT_NO_MATCH","I")
J2CPP_DEFINE_FIELD(android::speech::RecognizerIntent,16,"RESULT_CLIENT_ERROR","I")
J2CPP_DEFINE_FIELD(android::speech::RecognizerIntent,17,"RESULT_SERVER_ERROR","I")
J2CPP_DEFINE_FIELD(android::speech::RecognizerIntent,18,"RESULT_NETWORK_ERROR","I")
J2CPP_DEFINE_FIELD(android::speech::RecognizerIntent,19,"RESULT_AUDIO_ERROR","I")
J2CPP_DEFINE_FIELD(android::speech::RecognizerIntent,20,"EXTRA_RESULTS","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::speech::RecognizerIntent,21,"DETAILS_META_DATA","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::speech::RecognizerIntent,22,"ACTION_GET_LANGUAGE_DETAILS","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::speech::RecognizerIntent,23,"EXTRA_ONLY_RETURN_LANGUAGE_PREFERENCE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::speech::RecognizerIntent,24,"EXTRA_LANGUAGE_PREFERENCE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::speech::RecognizerIntent,25,"EXTRA_SUPPORTED_LANGUAGES","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_SPEECH_RECOGNIZERINTENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
