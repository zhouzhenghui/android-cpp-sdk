/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.VideoView
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_VIDEOVIEW_HPP_DECL
#define J2CPP_ANDROID_WIDGET_VIDEOVIEW_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace media { namespace MediaPlayer_ { class OnErrorListener; } } } }
namespace j2cpp { namespace android { namespace media { namespace MediaPlayer_ { class OnCompletionListener; } } } }
namespace j2cpp { namespace android { namespace media { namespace MediaPlayer_ { class OnPreparedListener; } } } }
namespace j2cpp { namespace android { namespace net { class Uri; } } }
namespace j2cpp { namespace android { namespace view { class KeyEvent; } } }
namespace j2cpp { namespace android { namespace view { class MotionEvent; } } }
namespace j2cpp { namespace android { namespace view { class SurfaceView; } } }
namespace j2cpp { namespace android { namespace widget { class MediaController; } } }
namespace j2cpp { namespace android { namespace widget { namespace MediaController_ { class MediaPlayerControl; } } } }


#include <android/content/Context.hpp>
#include <android/media/MediaPlayer.hpp>
#include <android/net/Uri.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/KeyEvent.hpp>
#include <android/view/MotionEvent.hpp>
#include <android/view/SurfaceView.hpp>
#include <android/widget/MediaController.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class VideoView;
	class VideoView
		: public object<VideoView>
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

		explicit VideoView(jobject jobj)
		: object<VideoView>(jobj)
		{
		}

		operator local_ref<android::view::SurfaceView>() const;
		operator local_ref<android::widget::MediaController_::MediaPlayerControl>() const;


		VideoView(local_ref< android::content::Context > const&);
		VideoView(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		VideoView(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&, jint);
		jint resolveAdjustedSize(jint, jint);
		void setVideoPath(local_ref< java::lang::String >  const&);
		void setVideoURI(local_ref< android::net::Uri >  const&);
		void stopPlayback();
		void setMediaController(local_ref< android::widget::MediaController >  const&);
		void setOnPreparedListener(local_ref< android::media::MediaPlayer_::OnPreparedListener >  const&);
		void setOnCompletionListener(local_ref< android::media::MediaPlayer_::OnCompletionListener >  const&);
		void setOnErrorListener(local_ref< android::media::MediaPlayer_::OnErrorListener >  const&);
		jboolean onTouchEvent(local_ref< android::view::MotionEvent >  const&);
		jboolean onTrackballEvent(local_ref< android::view::MotionEvent >  const&);
		jboolean onKeyDown(jint, local_ref< android::view::KeyEvent >  const&);
		void start();
		void pause();
		void suspend();
		void resume();
		jint getDuration();
		jint getCurrentPosition();
		void seekTo(jint);
		jboolean isPlaying();
		jint getBufferPercentage();
		jboolean canPause();
		jboolean canSeekBackward();
		jboolean canSeekForward();
	}; //class VideoView

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_VIDEOVIEW_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_VIDEOVIEW_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_VIDEOVIEW_HPP_IMPL

namespace j2cpp {



android::widget::VideoView::operator local_ref<android::view::SurfaceView>() const
{
	return local_ref<android::view::SurfaceView>(get_jobject());
}

android::widget::VideoView::operator local_ref<android::widget::MediaController_::MediaPlayerControl>() const
{
	return local_ref<android::widget::MediaController_::MediaPlayerControl>(get_jobject());
}


android::widget::VideoView::VideoView(local_ref< android::content::Context > const &a0)
: object<android::widget::VideoView>(
	call_new_object<
		android::widget::VideoView::J2CPP_CLASS_NAME,
		android::widget::VideoView::J2CPP_METHOD_NAME(0),
		android::widget::VideoView::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



android::widget::VideoView::VideoView(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::widget::VideoView>(
	call_new_object<
		android::widget::VideoView::J2CPP_CLASS_NAME,
		android::widget::VideoView::J2CPP_METHOD_NAME(1),
		android::widget::VideoView::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1)
)
{
}



android::widget::VideoView::VideoView(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, jint a2)
: object<android::widget::VideoView>(
	call_new_object<
		android::widget::VideoView::J2CPP_CLASS_NAME,
		android::widget::VideoView::J2CPP_METHOD_NAME(2),
		android::widget::VideoView::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1, a2)
)
{
}



jint android::widget::VideoView::resolveAdjustedSize(jint a0, jint a1)
{
	return call_method<
		android::widget::VideoView::J2CPP_CLASS_NAME,
		android::widget::VideoView::J2CPP_METHOD_NAME(4),
		android::widget::VideoView::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject(), a0, a1);
}

void android::widget::VideoView::setVideoPath(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::widget::VideoView::J2CPP_CLASS_NAME,
		android::widget::VideoView::J2CPP_METHOD_NAME(5),
		android::widget::VideoView::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0);
}

void android::widget::VideoView::setVideoURI(local_ref< android::net::Uri > const &a0)
{
	return call_method<
		android::widget::VideoView::J2CPP_CLASS_NAME,
		android::widget::VideoView::J2CPP_METHOD_NAME(6),
		android::widget::VideoView::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0);
}

void android::widget::VideoView::stopPlayback()
{
	return call_method<
		android::widget::VideoView::J2CPP_CLASS_NAME,
		android::widget::VideoView::J2CPP_METHOD_NAME(7),
		android::widget::VideoView::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject());
}

void android::widget::VideoView::setMediaController(local_ref< android::widget::MediaController > const &a0)
{
	return call_method<
		android::widget::VideoView::J2CPP_CLASS_NAME,
		android::widget::VideoView::J2CPP_METHOD_NAME(8),
		android::widget::VideoView::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0);
}

void android::widget::VideoView::setOnPreparedListener(local_ref< android::media::MediaPlayer_::OnPreparedListener > const &a0)
{
	return call_method<
		android::widget::VideoView::J2CPP_CLASS_NAME,
		android::widget::VideoView::J2CPP_METHOD_NAME(9),
		android::widget::VideoView::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject(), a0);
}

void android::widget::VideoView::setOnCompletionListener(local_ref< android::media::MediaPlayer_::OnCompletionListener > const &a0)
{
	return call_method<
		android::widget::VideoView::J2CPP_CLASS_NAME,
		android::widget::VideoView::J2CPP_METHOD_NAME(10),
		android::widget::VideoView::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject(), a0);
}

void android::widget::VideoView::setOnErrorListener(local_ref< android::media::MediaPlayer_::OnErrorListener > const &a0)
{
	return call_method<
		android::widget::VideoView::J2CPP_CLASS_NAME,
		android::widget::VideoView::J2CPP_METHOD_NAME(11),
		android::widget::VideoView::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject(), a0);
}

jboolean android::widget::VideoView::onTouchEvent(local_ref< android::view::MotionEvent > const &a0)
{
	return call_method<
		android::widget::VideoView::J2CPP_CLASS_NAME,
		android::widget::VideoView::J2CPP_METHOD_NAME(12),
		android::widget::VideoView::J2CPP_METHOD_SIGNATURE(12), 
		jboolean >
	(get_jobject(), a0);
}

jboolean android::widget::VideoView::onTrackballEvent(local_ref< android::view::MotionEvent > const &a0)
{
	return call_method<
		android::widget::VideoView::J2CPP_CLASS_NAME,
		android::widget::VideoView::J2CPP_METHOD_NAME(13),
		android::widget::VideoView::J2CPP_METHOD_SIGNATURE(13), 
		jboolean >
	(get_jobject(), a0);
}

jboolean android::widget::VideoView::onKeyDown(jint a0, local_ref< android::view::KeyEvent > const &a1)
{
	return call_method<
		android::widget::VideoView::J2CPP_CLASS_NAME,
		android::widget::VideoView::J2CPP_METHOD_NAME(14),
		android::widget::VideoView::J2CPP_METHOD_SIGNATURE(14), 
		jboolean >
	(get_jobject(), a0, a1);
}

void android::widget::VideoView::start()
{
	return call_method<
		android::widget::VideoView::J2CPP_CLASS_NAME,
		android::widget::VideoView::J2CPP_METHOD_NAME(15),
		android::widget::VideoView::J2CPP_METHOD_SIGNATURE(15), 
		void >
	(get_jobject());
}

void android::widget::VideoView::pause()
{
	return call_method<
		android::widget::VideoView::J2CPP_CLASS_NAME,
		android::widget::VideoView::J2CPP_METHOD_NAME(16),
		android::widget::VideoView::J2CPP_METHOD_SIGNATURE(16), 
		void >
	(get_jobject());
}

void android::widget::VideoView::suspend()
{
	return call_method<
		android::widget::VideoView::J2CPP_CLASS_NAME,
		android::widget::VideoView::J2CPP_METHOD_NAME(17),
		android::widget::VideoView::J2CPP_METHOD_SIGNATURE(17), 
		void >
	(get_jobject());
}

void android::widget::VideoView::resume()
{
	return call_method<
		android::widget::VideoView::J2CPP_CLASS_NAME,
		android::widget::VideoView::J2CPP_METHOD_NAME(18),
		android::widget::VideoView::J2CPP_METHOD_SIGNATURE(18), 
		void >
	(get_jobject());
}

jint android::widget::VideoView::getDuration()
{
	return call_method<
		android::widget::VideoView::J2CPP_CLASS_NAME,
		android::widget::VideoView::J2CPP_METHOD_NAME(19),
		android::widget::VideoView::J2CPP_METHOD_SIGNATURE(19), 
		jint >
	(get_jobject());
}

jint android::widget::VideoView::getCurrentPosition()
{
	return call_method<
		android::widget::VideoView::J2CPP_CLASS_NAME,
		android::widget::VideoView::J2CPP_METHOD_NAME(20),
		android::widget::VideoView::J2CPP_METHOD_SIGNATURE(20), 
		jint >
	(get_jobject());
}

void android::widget::VideoView::seekTo(jint a0)
{
	return call_method<
		android::widget::VideoView::J2CPP_CLASS_NAME,
		android::widget::VideoView::J2CPP_METHOD_NAME(21),
		android::widget::VideoView::J2CPP_METHOD_SIGNATURE(21), 
		void >
	(get_jobject(), a0);
}

jboolean android::widget::VideoView::isPlaying()
{
	return call_method<
		android::widget::VideoView::J2CPP_CLASS_NAME,
		android::widget::VideoView::J2CPP_METHOD_NAME(22),
		android::widget::VideoView::J2CPP_METHOD_SIGNATURE(22), 
		jboolean >
	(get_jobject());
}

jint android::widget::VideoView::getBufferPercentage()
{
	return call_method<
		android::widget::VideoView::J2CPP_CLASS_NAME,
		android::widget::VideoView::J2CPP_METHOD_NAME(23),
		android::widget::VideoView::J2CPP_METHOD_SIGNATURE(23), 
		jint >
	(get_jobject());
}

jboolean android::widget::VideoView::canPause()
{
	return call_method<
		android::widget::VideoView::J2CPP_CLASS_NAME,
		android::widget::VideoView::J2CPP_METHOD_NAME(24),
		android::widget::VideoView::J2CPP_METHOD_SIGNATURE(24), 
		jboolean >
	(get_jobject());
}

jboolean android::widget::VideoView::canSeekBackward()
{
	return call_method<
		android::widget::VideoView::J2CPP_CLASS_NAME,
		android::widget::VideoView::J2CPP_METHOD_NAME(25),
		android::widget::VideoView::J2CPP_METHOD_SIGNATURE(25), 
		jboolean >
	(get_jobject());
}

jboolean android::widget::VideoView::canSeekForward()
{
	return call_method<
		android::widget::VideoView::J2CPP_CLASS_NAME,
		android::widget::VideoView::J2CPP_METHOD_NAME(26),
		android::widget::VideoView::J2CPP_METHOD_SIGNATURE(26), 
		jboolean >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::widget::VideoView,"android/widget/VideoView")
J2CPP_DEFINE_METHOD(android::widget::VideoView,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::VideoView,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::VideoView,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::widget::VideoView,3,"onMeasure","(II)V")
J2CPP_DEFINE_METHOD(android::widget::VideoView,4,"resolveAdjustedSize","(II)I")
J2CPP_DEFINE_METHOD(android::widget::VideoView,5,"setVideoPath","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::widget::VideoView,6,"setVideoURI","(Landroid/net/Uri;)V")
J2CPP_DEFINE_METHOD(android::widget::VideoView,7,"stopPlayback","()V")
J2CPP_DEFINE_METHOD(android::widget::VideoView,8,"setMediaController","(Landroid/widget/MediaController;)V")
J2CPP_DEFINE_METHOD(android::widget::VideoView,9,"setOnPreparedListener","(Landroid/media/MediaPlayer$OnPreparedListener;)V")
J2CPP_DEFINE_METHOD(android::widget::VideoView,10,"setOnCompletionListener","(Landroid/media/MediaPlayer$OnCompletionListener;)V")
J2CPP_DEFINE_METHOD(android::widget::VideoView,11,"setOnErrorListener","(Landroid/media/MediaPlayer$OnErrorListener;)V")
J2CPP_DEFINE_METHOD(android::widget::VideoView,12,"onTouchEvent","(Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::VideoView,13,"onTrackballEvent","(Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::VideoView,14,"onKeyDown","(ILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::VideoView,15,"start","()V")
J2CPP_DEFINE_METHOD(android::widget::VideoView,16,"pause","()V")
J2CPP_DEFINE_METHOD(android::widget::VideoView,17,"suspend","()V")
J2CPP_DEFINE_METHOD(android::widget::VideoView,18,"resume","()V")
J2CPP_DEFINE_METHOD(android::widget::VideoView,19,"getDuration","()I")
J2CPP_DEFINE_METHOD(android::widget::VideoView,20,"getCurrentPosition","()I")
J2CPP_DEFINE_METHOD(android::widget::VideoView,21,"seekTo","(I)V")
J2CPP_DEFINE_METHOD(android::widget::VideoView,22,"isPlaying","()Z")
J2CPP_DEFINE_METHOD(android::widget::VideoView,23,"getBufferPercentage","()I")
J2CPP_DEFINE_METHOD(android::widget::VideoView,24,"canPause","()Z")
J2CPP_DEFINE_METHOD(android::widget::VideoView,25,"canSeekBackward","()Z")
J2CPP_DEFINE_METHOD(android::widget::VideoView,26,"canSeekForward","()Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_VIDEOVIEW_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
