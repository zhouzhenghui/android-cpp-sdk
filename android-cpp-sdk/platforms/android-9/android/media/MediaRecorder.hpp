/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.media.MediaRecorder
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_MEDIA_MEDIARECORDER_HPP_DECL
#define J2CPP_ANDROID_MEDIA_MEDIARECORDER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class FileDescriptor; } } }
namespace j2cpp { namespace android { namespace hardware { class Camera; } } }
namespace j2cpp { namespace android { namespace media { namespace MediaRecorder_ { class OnInfoListener; } } } }
namespace j2cpp { namespace android { namespace media { class CamcorderProfile; } } }
namespace j2cpp { namespace android { namespace media { namespace MediaRecorder_ { class OnErrorListener; } } } }
namespace j2cpp { namespace android { namespace view { class Surface; } } }


#include <android/hardware/Camera.hpp>
#include <android/media/CamcorderProfile.hpp>
#include <android/media/MediaRecorder.hpp>
#include <android/view/Surface.hpp>
#include <java/io/FileDescriptor.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace media {

	class MediaRecorder;
	namespace MediaRecorder_ {

		class OnInfoListener;
		class OnInfoListener
			: public object<OnInfoListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnInfoListener(jobject jobj)
			: object<OnInfoListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onInfo(local_ref< android::media::MediaRecorder >  const&, jint, jint);
		}; //class OnInfoListener

		class AudioEncoder;
		class AudioEncoder
			: public object<AudioEncoder>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)

			explicit AudioEncoder(jobject jobj)
			: object<AudioEncoder>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;



			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > DEFAULT;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > AMR_NB;
		}; //class AudioEncoder

		class VideoSource;
		class VideoSource
			: public object<VideoSource>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)

			explicit VideoSource(jobject jobj)
			: object<VideoSource>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;



			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > DEFAULT;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > CAMERA;
		}; //class VideoSource

		class OnErrorListener;
		class OnErrorListener
			: public object<OnErrorListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnErrorListener(jobject jobj)
			: object<OnErrorListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onError(local_ref< android::media::MediaRecorder >  const&, jint, jint);
		}; //class OnErrorListener

		class OutputFormat;
		class OutputFormat
			: public object<OutputFormat>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)
			J2CPP_DECLARE_FIELD(4)

			explicit OutputFormat(jobject jobj)
			: object<OutputFormat>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;



			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > DEFAULT;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > THREE_GPP;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > MPEG_4;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > RAW_AMR;
		}; //class OutputFormat

		class AudioSource;
		class AudioSource
			: public object<AudioSource>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)
			J2CPP_DECLARE_FIELD(4)
			J2CPP_DECLARE_FIELD(5)
			J2CPP_DECLARE_FIELD(6)
			J2CPP_DECLARE_FIELD(7)

			explicit AudioSource(jobject jobj)
			: object<AudioSource>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;



			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > DEFAULT;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > MIC;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > VOICE_UPLINK;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > VOICE_DOWNLINK;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > VOICE_CALL;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > CAMCORDER;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > VOICE_RECOGNITION;
		}; //class AudioSource

		class VideoEncoder;
		class VideoEncoder
			: public object<VideoEncoder>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)
			J2CPP_DECLARE_FIELD(4)

			explicit VideoEncoder(jobject jobj)
			: object<VideoEncoder>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;



			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > DEFAULT;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > H263;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > H264;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > MPEG_4_SP;
		}; //class VideoEncoder

	} //namespace MediaRecorder_

	class MediaRecorder
		: public object<MediaRecorder>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		typedef MediaRecorder_::OnInfoListener OnInfoListener;
		typedef MediaRecorder_::AudioEncoder AudioEncoder;
		typedef MediaRecorder_::VideoSource VideoSource;
		typedef MediaRecorder_::OnErrorListener OnErrorListener;
		typedef MediaRecorder_::OutputFormat OutputFormat;
		typedef MediaRecorder_::AudioSource AudioSource;
		typedef MediaRecorder_::VideoEncoder VideoEncoder;

		explicit MediaRecorder(jobject jobj)
		: object<MediaRecorder>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		MediaRecorder();
		void setCamera(local_ref< android::hardware::Camera >  const&);
		void setPreviewDisplay(local_ref< android::view::Surface >  const&);
		void setAudioSource(jint);
		static jint getAudioSourceMax();
		void setVideoSource(jint);
		void setProfile(local_ref< android::media::CamcorderProfile >  const&);
		void setOrientationHint(jint);
		void setOutputFormat(jint);
		void setVideoSize(jint, jint);
		void setVideoFrameRate(jint);
		void setMaxDuration(jint);
		void setMaxFileSize(jlong);
		void setAudioEncoder(jint);
		void setVideoEncoder(jint);
		void setAudioSamplingRate(jint);
		void setAudioChannels(jint);
		void setAudioEncodingBitRate(jint);
		void setVideoEncodingBitRate(jint);
		void setOutputFile(local_ref< java::io::FileDescriptor >  const&);
		void setOutputFile(local_ref< java::lang::String >  const&);
		void prepare();
		void start();
		void stop();
		void reset();
		jint getMaxAmplitude();
		void setOnErrorListener(local_ref< android::media::MediaRecorder_::OnErrorListener >  const&);
		void setOnInfoListener(local_ref< android::media::MediaRecorder_::OnInfoListener >  const&);
		void release();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > MEDIA_RECORDER_ERROR_UNKNOWN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > MEDIA_RECORDER_INFO_UNKNOWN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > MEDIA_RECORDER_INFO_MAX_DURATION_REACHED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > MEDIA_RECORDER_INFO_MAX_FILESIZE_REACHED;
	}; //class MediaRecorder

} //namespace media
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_MEDIA_MEDIARECORDER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_MEDIA_MEDIARECORDER_HPP_IMPL
#define J2CPP_ANDROID_MEDIA_MEDIARECORDER_HPP_IMPL

namespace j2cpp {




android::media::MediaRecorder_::OnInfoListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::media::MediaRecorder_::OnInfoListener::onInfo(local_ref< android::media::MediaRecorder > const &a0, jint a1, jint a2)
{
	return call_method<
		android::media::MediaRecorder_::OnInfoListener::J2CPP_CLASS_NAME,
		android::media::MediaRecorder_::OnInfoListener::J2CPP_METHOD_NAME(0),
		android::media::MediaRecorder_::OnInfoListener::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(android::media::MediaRecorder_::OnInfoListener,"android/media/MediaRecorder$OnInfoListener")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder_::OnInfoListener,0,"onInfo","(Landroid/media/MediaRecorder;II)V")


android::media::MediaRecorder_::AudioEncoder::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}



static_field<
	android::media::MediaRecorder_::AudioEncoder::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::AudioEncoder::J2CPP_FIELD_NAME(0),
	android::media::MediaRecorder_::AudioEncoder::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::media::MediaRecorder_::AudioEncoder::DEFAULT;

static_field<
	android::media::MediaRecorder_::AudioEncoder::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::AudioEncoder::J2CPP_FIELD_NAME(1),
	android::media::MediaRecorder_::AudioEncoder::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::media::MediaRecorder_::AudioEncoder::AMR_NB;


J2CPP_DEFINE_CLASS(android::media::MediaRecorder_::AudioEncoder,"android/media/MediaRecorder$AudioEncoder")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder_::AudioEncoder,0,"<init>","(Landroid/media/MediaRecorder;)V")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::AudioEncoder,0,"DEFAULT","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::AudioEncoder,1,"AMR_NB","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::AudioEncoder,2,"this$0","Landroid/media/MediaRecorder;")


android::media::MediaRecorder_::VideoSource::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}



static_field<
	android::media::MediaRecorder_::VideoSource::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::VideoSource::J2CPP_FIELD_NAME(0),
	android::media::MediaRecorder_::VideoSource::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::media::MediaRecorder_::VideoSource::DEFAULT;

static_field<
	android::media::MediaRecorder_::VideoSource::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::VideoSource::J2CPP_FIELD_NAME(1),
	android::media::MediaRecorder_::VideoSource::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::media::MediaRecorder_::VideoSource::CAMERA;


J2CPP_DEFINE_CLASS(android::media::MediaRecorder_::VideoSource,"android/media/MediaRecorder$VideoSource")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder_::VideoSource,0,"<init>","(Landroid/media/MediaRecorder;)V")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::VideoSource,0,"DEFAULT","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::VideoSource,1,"CAMERA","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::VideoSource,2,"this$0","Landroid/media/MediaRecorder;")


android::media::MediaRecorder_::OnErrorListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::media::MediaRecorder_::OnErrorListener::onError(local_ref< android::media::MediaRecorder > const &a0, jint a1, jint a2)
{
	return call_method<
		android::media::MediaRecorder_::OnErrorListener::J2CPP_CLASS_NAME,
		android::media::MediaRecorder_::OnErrorListener::J2CPP_METHOD_NAME(0),
		android::media::MediaRecorder_::OnErrorListener::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(android::media::MediaRecorder_::OnErrorListener,"android/media/MediaRecorder$OnErrorListener")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder_::OnErrorListener,0,"onError","(Landroid/media/MediaRecorder;II)V")


android::media::MediaRecorder_::OutputFormat::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}



static_field<
	android::media::MediaRecorder_::OutputFormat::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::OutputFormat::J2CPP_FIELD_NAME(0),
	android::media::MediaRecorder_::OutputFormat::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::media::MediaRecorder_::OutputFormat::DEFAULT;

static_field<
	android::media::MediaRecorder_::OutputFormat::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::OutputFormat::J2CPP_FIELD_NAME(1),
	android::media::MediaRecorder_::OutputFormat::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::media::MediaRecorder_::OutputFormat::THREE_GPP;

static_field<
	android::media::MediaRecorder_::OutputFormat::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::OutputFormat::J2CPP_FIELD_NAME(2),
	android::media::MediaRecorder_::OutputFormat::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::media::MediaRecorder_::OutputFormat::MPEG_4;

static_field<
	android::media::MediaRecorder_::OutputFormat::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::OutputFormat::J2CPP_FIELD_NAME(3),
	android::media::MediaRecorder_::OutputFormat::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::media::MediaRecorder_::OutputFormat::RAW_AMR;


J2CPP_DEFINE_CLASS(android::media::MediaRecorder_::OutputFormat,"android/media/MediaRecorder$OutputFormat")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder_::OutputFormat,0,"<init>","(Landroid/media/MediaRecorder;)V")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::OutputFormat,0,"DEFAULT","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::OutputFormat,1,"THREE_GPP","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::OutputFormat,2,"MPEG_4","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::OutputFormat,3,"RAW_AMR","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::OutputFormat,4,"this$0","Landroid/media/MediaRecorder;")


android::media::MediaRecorder_::AudioSource::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}



static_field<
	android::media::MediaRecorder_::AudioSource::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::AudioSource::J2CPP_FIELD_NAME(0),
	android::media::MediaRecorder_::AudioSource::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::media::MediaRecorder_::AudioSource::DEFAULT;

static_field<
	android::media::MediaRecorder_::AudioSource::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::AudioSource::J2CPP_FIELD_NAME(1),
	android::media::MediaRecorder_::AudioSource::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::media::MediaRecorder_::AudioSource::MIC;

static_field<
	android::media::MediaRecorder_::AudioSource::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::AudioSource::J2CPP_FIELD_NAME(2),
	android::media::MediaRecorder_::AudioSource::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::media::MediaRecorder_::AudioSource::VOICE_UPLINK;

static_field<
	android::media::MediaRecorder_::AudioSource::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::AudioSource::J2CPP_FIELD_NAME(3),
	android::media::MediaRecorder_::AudioSource::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::media::MediaRecorder_::AudioSource::VOICE_DOWNLINK;

static_field<
	android::media::MediaRecorder_::AudioSource::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::AudioSource::J2CPP_FIELD_NAME(4),
	android::media::MediaRecorder_::AudioSource::J2CPP_FIELD_SIGNATURE(4),
	jint
> android::media::MediaRecorder_::AudioSource::VOICE_CALL;

static_field<
	android::media::MediaRecorder_::AudioSource::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::AudioSource::J2CPP_FIELD_NAME(5),
	android::media::MediaRecorder_::AudioSource::J2CPP_FIELD_SIGNATURE(5),
	jint
> android::media::MediaRecorder_::AudioSource::CAMCORDER;

static_field<
	android::media::MediaRecorder_::AudioSource::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::AudioSource::J2CPP_FIELD_NAME(6),
	android::media::MediaRecorder_::AudioSource::J2CPP_FIELD_SIGNATURE(6),
	jint
> android::media::MediaRecorder_::AudioSource::VOICE_RECOGNITION;


J2CPP_DEFINE_CLASS(android::media::MediaRecorder_::AudioSource,"android/media/MediaRecorder$AudioSource")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder_::AudioSource,0,"<init>","(Landroid/media/MediaRecorder;)V")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::AudioSource,0,"DEFAULT","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::AudioSource,1,"MIC","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::AudioSource,2,"VOICE_UPLINK","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::AudioSource,3,"VOICE_DOWNLINK","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::AudioSource,4,"VOICE_CALL","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::AudioSource,5,"CAMCORDER","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::AudioSource,6,"VOICE_RECOGNITION","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::AudioSource,7,"this$0","Landroid/media/MediaRecorder;")


android::media::MediaRecorder_::VideoEncoder::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}



static_field<
	android::media::MediaRecorder_::VideoEncoder::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::VideoEncoder::J2CPP_FIELD_NAME(0),
	android::media::MediaRecorder_::VideoEncoder::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::media::MediaRecorder_::VideoEncoder::DEFAULT;

static_field<
	android::media::MediaRecorder_::VideoEncoder::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::VideoEncoder::J2CPP_FIELD_NAME(1),
	android::media::MediaRecorder_::VideoEncoder::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::media::MediaRecorder_::VideoEncoder::H263;

static_field<
	android::media::MediaRecorder_::VideoEncoder::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::VideoEncoder::J2CPP_FIELD_NAME(2),
	android::media::MediaRecorder_::VideoEncoder::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::media::MediaRecorder_::VideoEncoder::H264;

static_field<
	android::media::MediaRecorder_::VideoEncoder::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::VideoEncoder::J2CPP_FIELD_NAME(3),
	android::media::MediaRecorder_::VideoEncoder::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::media::MediaRecorder_::VideoEncoder::MPEG_4_SP;


J2CPP_DEFINE_CLASS(android::media::MediaRecorder_::VideoEncoder,"android/media/MediaRecorder$VideoEncoder")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder_::VideoEncoder,0,"<init>","(Landroid/media/MediaRecorder;)V")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::VideoEncoder,0,"DEFAULT","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::VideoEncoder,1,"H263","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::VideoEncoder,2,"H264","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::VideoEncoder,3,"MPEG_4_SP","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::VideoEncoder,4,"this$0","Landroid/media/MediaRecorder;")



android::media::MediaRecorder::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::media::MediaRecorder::MediaRecorder()
: object<android::media::MediaRecorder>(
	call_new_object<
		android::media::MediaRecorder::J2CPP_CLASS_NAME,
		android::media::MediaRecorder::J2CPP_METHOD_NAME(0),
		android::media::MediaRecorder::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void android::media::MediaRecorder::setCamera(local_ref< android::hardware::Camera > const &a0)
{
	return call_method<
		android::media::MediaRecorder::J2CPP_CLASS_NAME,
		android::media::MediaRecorder::J2CPP_METHOD_NAME(1),
		android::media::MediaRecorder::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}

void android::media::MediaRecorder::setPreviewDisplay(local_ref< android::view::Surface > const &a0)
{
	return call_method<
		android::media::MediaRecorder::J2CPP_CLASS_NAME,
		android::media::MediaRecorder::J2CPP_METHOD_NAME(2),
		android::media::MediaRecorder::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

void android::media::MediaRecorder::setAudioSource(jint a0)
{
	return call_method<
		android::media::MediaRecorder::J2CPP_CLASS_NAME,
		android::media::MediaRecorder::J2CPP_METHOD_NAME(3),
		android::media::MediaRecorder::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

jint android::media::MediaRecorder::getAudioSourceMax()
{
	return call_static_method<
		android::media::MediaRecorder::J2CPP_CLASS_NAME,
		android::media::MediaRecorder::J2CPP_METHOD_NAME(4),
		android::media::MediaRecorder::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>();
}

void android::media::MediaRecorder::setVideoSource(jint a0)
{
	return call_method<
		android::media::MediaRecorder::J2CPP_CLASS_NAME,
		android::media::MediaRecorder::J2CPP_METHOD_NAME(5),
		android::media::MediaRecorder::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

void android::media::MediaRecorder::setProfile(local_ref< android::media::CamcorderProfile > const &a0)
{
	return call_method<
		android::media::MediaRecorder::J2CPP_CLASS_NAME,
		android::media::MediaRecorder::J2CPP_METHOD_NAME(6),
		android::media::MediaRecorder::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

void android::media::MediaRecorder::setOrientationHint(jint a0)
{
	return call_method<
		android::media::MediaRecorder::J2CPP_CLASS_NAME,
		android::media::MediaRecorder::J2CPP_METHOD_NAME(7),
		android::media::MediaRecorder::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}

void android::media::MediaRecorder::setOutputFormat(jint a0)
{
	return call_method<
		android::media::MediaRecorder::J2CPP_CLASS_NAME,
		android::media::MediaRecorder::J2CPP_METHOD_NAME(8),
		android::media::MediaRecorder::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0);
}

void android::media::MediaRecorder::setVideoSize(jint a0, jint a1)
{
	return call_method<
		android::media::MediaRecorder::J2CPP_CLASS_NAME,
		android::media::MediaRecorder::J2CPP_METHOD_NAME(9),
		android::media::MediaRecorder::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0, a1);
}

void android::media::MediaRecorder::setVideoFrameRate(jint a0)
{
	return call_method<
		android::media::MediaRecorder::J2CPP_CLASS_NAME,
		android::media::MediaRecorder::J2CPP_METHOD_NAME(10),
		android::media::MediaRecorder::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0);
}

void android::media::MediaRecorder::setMaxDuration(jint a0)
{
	return call_method<
		android::media::MediaRecorder::J2CPP_CLASS_NAME,
		android::media::MediaRecorder::J2CPP_METHOD_NAME(11),
		android::media::MediaRecorder::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject(), a0);
}

void android::media::MediaRecorder::setMaxFileSize(jlong a0)
{
	return call_method<
		android::media::MediaRecorder::J2CPP_CLASS_NAME,
		android::media::MediaRecorder::J2CPP_METHOD_NAME(12),
		android::media::MediaRecorder::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject(), a0);
}

void android::media::MediaRecorder::setAudioEncoder(jint a0)
{
	return call_method<
		android::media::MediaRecorder::J2CPP_CLASS_NAME,
		android::media::MediaRecorder::J2CPP_METHOD_NAME(13),
		android::media::MediaRecorder::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(get_jobject(), a0);
}

void android::media::MediaRecorder::setVideoEncoder(jint a0)
{
	return call_method<
		android::media::MediaRecorder::J2CPP_CLASS_NAME,
		android::media::MediaRecorder::J2CPP_METHOD_NAME(14),
		android::media::MediaRecorder::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject(), a0);
}

void android::media::MediaRecorder::setAudioSamplingRate(jint a0)
{
	return call_method<
		android::media::MediaRecorder::J2CPP_CLASS_NAME,
		android::media::MediaRecorder::J2CPP_METHOD_NAME(15),
		android::media::MediaRecorder::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(get_jobject(), a0);
}

void android::media::MediaRecorder::setAudioChannels(jint a0)
{
	return call_method<
		android::media::MediaRecorder::J2CPP_CLASS_NAME,
		android::media::MediaRecorder::J2CPP_METHOD_NAME(16),
		android::media::MediaRecorder::J2CPP_METHOD_SIGNATURE(16), 
		void
	>(get_jobject(), a0);
}

void android::media::MediaRecorder::setAudioEncodingBitRate(jint a0)
{
	return call_method<
		android::media::MediaRecorder::J2CPP_CLASS_NAME,
		android::media::MediaRecorder::J2CPP_METHOD_NAME(17),
		android::media::MediaRecorder::J2CPP_METHOD_SIGNATURE(17), 
		void
	>(get_jobject(), a0);
}

void android::media::MediaRecorder::setVideoEncodingBitRate(jint a0)
{
	return call_method<
		android::media::MediaRecorder::J2CPP_CLASS_NAME,
		android::media::MediaRecorder::J2CPP_METHOD_NAME(18),
		android::media::MediaRecorder::J2CPP_METHOD_SIGNATURE(18), 
		void
	>(get_jobject(), a0);
}

void android::media::MediaRecorder::setOutputFile(local_ref< java::io::FileDescriptor > const &a0)
{
	return call_method<
		android::media::MediaRecorder::J2CPP_CLASS_NAME,
		android::media::MediaRecorder::J2CPP_METHOD_NAME(19),
		android::media::MediaRecorder::J2CPP_METHOD_SIGNATURE(19), 
		void
	>(get_jobject(), a0);
}

void android::media::MediaRecorder::setOutputFile(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::media::MediaRecorder::J2CPP_CLASS_NAME,
		android::media::MediaRecorder::J2CPP_METHOD_NAME(20),
		android::media::MediaRecorder::J2CPP_METHOD_SIGNATURE(20), 
		void
	>(get_jobject(), a0);
}

void android::media::MediaRecorder::prepare()
{
	return call_method<
		android::media::MediaRecorder::J2CPP_CLASS_NAME,
		android::media::MediaRecorder::J2CPP_METHOD_NAME(21),
		android::media::MediaRecorder::J2CPP_METHOD_SIGNATURE(21), 
		void
	>(get_jobject());
}

void android::media::MediaRecorder::start()
{
	return call_method<
		android::media::MediaRecorder::J2CPP_CLASS_NAME,
		android::media::MediaRecorder::J2CPP_METHOD_NAME(22),
		android::media::MediaRecorder::J2CPP_METHOD_SIGNATURE(22), 
		void
	>(get_jobject());
}

void android::media::MediaRecorder::stop()
{
	return call_method<
		android::media::MediaRecorder::J2CPP_CLASS_NAME,
		android::media::MediaRecorder::J2CPP_METHOD_NAME(23),
		android::media::MediaRecorder::J2CPP_METHOD_SIGNATURE(23), 
		void
	>(get_jobject());
}

void android::media::MediaRecorder::reset()
{
	return call_method<
		android::media::MediaRecorder::J2CPP_CLASS_NAME,
		android::media::MediaRecorder::J2CPP_METHOD_NAME(24),
		android::media::MediaRecorder::J2CPP_METHOD_SIGNATURE(24), 
		void
	>(get_jobject());
}

jint android::media::MediaRecorder::getMaxAmplitude()
{
	return call_method<
		android::media::MediaRecorder::J2CPP_CLASS_NAME,
		android::media::MediaRecorder::J2CPP_METHOD_NAME(25),
		android::media::MediaRecorder::J2CPP_METHOD_SIGNATURE(25), 
		jint
	>(get_jobject());
}

void android::media::MediaRecorder::setOnErrorListener(local_ref< android::media::MediaRecorder_::OnErrorListener > const &a0)
{
	return call_method<
		android::media::MediaRecorder::J2CPP_CLASS_NAME,
		android::media::MediaRecorder::J2CPP_METHOD_NAME(26),
		android::media::MediaRecorder::J2CPP_METHOD_SIGNATURE(26), 
		void
	>(get_jobject(), a0);
}

void android::media::MediaRecorder::setOnInfoListener(local_ref< android::media::MediaRecorder_::OnInfoListener > const &a0)
{
	return call_method<
		android::media::MediaRecorder::J2CPP_CLASS_NAME,
		android::media::MediaRecorder::J2CPP_METHOD_NAME(27),
		android::media::MediaRecorder::J2CPP_METHOD_SIGNATURE(27), 
		void
	>(get_jobject(), a0);
}

void android::media::MediaRecorder::release()
{
	return call_method<
		android::media::MediaRecorder::J2CPP_CLASS_NAME,
		android::media::MediaRecorder::J2CPP_METHOD_NAME(28),
		android::media::MediaRecorder::J2CPP_METHOD_SIGNATURE(28), 
		void
	>(get_jobject());
}



static_field<
	android::media::MediaRecorder::J2CPP_CLASS_NAME,
	android::media::MediaRecorder::J2CPP_FIELD_NAME(0),
	android::media::MediaRecorder::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::media::MediaRecorder::MEDIA_RECORDER_ERROR_UNKNOWN;

static_field<
	android::media::MediaRecorder::J2CPP_CLASS_NAME,
	android::media::MediaRecorder::J2CPP_FIELD_NAME(1),
	android::media::MediaRecorder::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::media::MediaRecorder::MEDIA_RECORDER_INFO_UNKNOWN;

static_field<
	android::media::MediaRecorder::J2CPP_CLASS_NAME,
	android::media::MediaRecorder::J2CPP_FIELD_NAME(2),
	android::media::MediaRecorder::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::media::MediaRecorder::MEDIA_RECORDER_INFO_MAX_DURATION_REACHED;

static_field<
	android::media::MediaRecorder::J2CPP_CLASS_NAME,
	android::media::MediaRecorder::J2CPP_FIELD_NAME(3),
	android::media::MediaRecorder::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::media::MediaRecorder::MEDIA_RECORDER_INFO_MAX_FILESIZE_REACHED;


J2CPP_DEFINE_CLASS(android::media::MediaRecorder,"android/media/MediaRecorder")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,1,"setCamera","(Landroid/hardware/Camera;)V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,2,"setPreviewDisplay","(Landroid/view/Surface;)V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,3,"setAudioSource","(I)V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,4,"getAudioSourceMax","()I")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,5,"setVideoSource","(I)V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,6,"setProfile","(Landroid/media/CamcorderProfile;)V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,7,"setOrientationHint","(I)V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,8,"setOutputFormat","(I)V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,9,"setVideoSize","(II)V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,10,"setVideoFrameRate","(I)V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,11,"setMaxDuration","(I)V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,12,"setMaxFileSize","(J)V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,13,"setAudioEncoder","(I)V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,14,"setVideoEncoder","(I)V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,15,"setAudioSamplingRate","(I)V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,16,"setAudioChannels","(I)V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,17,"setAudioEncodingBitRate","(I)V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,18,"setVideoEncodingBitRate","(I)V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,19,"setOutputFile","(Ljava/io/FileDescriptor;)V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,20,"setOutputFile","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,21,"prepare","()V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,22,"start","()V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,23,"stop","()V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,24,"reset","()V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,25,"getMaxAmplitude","()I")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,26,"setOnErrorListener","(Landroid/media/MediaRecorder$OnErrorListener;)V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,27,"setOnInfoListener","(Landroid/media/MediaRecorder$OnInfoListener;)V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,28,"release","()V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,29,"finalize","()V")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder,0,"MEDIA_RECORDER_ERROR_UNKNOWN","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder,1,"MEDIA_RECORDER_INFO_UNKNOWN","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder,2,"MEDIA_RECORDER_INFO_MAX_DURATION_REACHED","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder,3,"MEDIA_RECORDER_INFO_MAX_FILESIZE_REACHED","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_MEDIA_MEDIARECORDER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
