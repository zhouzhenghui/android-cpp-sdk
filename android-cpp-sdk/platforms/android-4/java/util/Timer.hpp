/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.Timer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_TIMER_HPP_DECL
#define J2CPP_JAVA_UTIL_TIMER_HPP_DECL


namespace j2cpp { namespace java { namespace util { class TimerTask; } } }
namespace j2cpp { namespace java { namespace util { class Date; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Date.hpp>
#include <java/util/TimerTask.hpp>


namespace j2cpp {

namespace java { namespace util {

	class Timer;
	class Timer
		: public object<Timer>
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

		explicit Timer(jobject jobj)
		: object<Timer>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		Timer(jboolean);
		Timer();
		Timer(local_ref< java::lang::String > const&, jboolean);
		Timer(local_ref< java::lang::String > const&);
		void cancel();
		jint purge();
		void schedule(local_ref< java::util::TimerTask >  const&, local_ref< java::util::Date >  const&);
		void schedule(local_ref< java::util::TimerTask >  const&, jlong);
		void schedule(local_ref< java::util::TimerTask >  const&, jlong, jlong);
		void schedule(local_ref< java::util::TimerTask >  const&, local_ref< java::util::Date >  const&, jlong);
		void scheduleAtFixedRate(local_ref< java::util::TimerTask >  const&, jlong, jlong);
		void scheduleAtFixedRate(local_ref< java::util::TimerTask >  const&, local_ref< java::util::Date >  const&, jlong);
	}; //class Timer

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_TIMER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_TIMER_HPP_IMPL
#define J2CPP_JAVA_UTIL_TIMER_HPP_IMPL

namespace j2cpp {



java::util::Timer::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::util::Timer::Timer(jboolean a0)
: object<java::util::Timer>(
	call_new_object<
		java::util::Timer::J2CPP_CLASS_NAME,
		java::util::Timer::J2CPP_METHOD_NAME(0),
		java::util::Timer::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



java::util::Timer::Timer()
: object<java::util::Timer>(
	call_new_object<
		java::util::Timer::J2CPP_CLASS_NAME,
		java::util::Timer::J2CPP_METHOD_NAME(1),
		java::util::Timer::J2CPP_METHOD_SIGNATURE(1)>
	()
)
{
}



java::util::Timer::Timer(local_ref< java::lang::String > const &a0, jboolean a1)
: object<java::util::Timer>(
	call_new_object<
		java::util::Timer::J2CPP_CLASS_NAME,
		java::util::Timer::J2CPP_METHOD_NAME(2),
		java::util::Timer::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1)
)
{
}



java::util::Timer::Timer(local_ref< java::lang::String > const &a0)
: object<java::util::Timer>(
	call_new_object<
		java::util::Timer::J2CPP_CLASS_NAME,
		java::util::Timer::J2CPP_METHOD_NAME(3),
		java::util::Timer::J2CPP_METHOD_SIGNATURE(3)>
	(a0)
)
{
}


void java::util::Timer::cancel()
{
	return call_method<
		java::util::Timer::J2CPP_CLASS_NAME,
		java::util::Timer::J2CPP_METHOD_NAME(4),
		java::util::Timer::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject());
}

jint java::util::Timer::purge()
{
	return call_method<
		java::util::Timer::J2CPP_CLASS_NAME,
		java::util::Timer::J2CPP_METHOD_NAME(5),
		java::util::Timer::J2CPP_METHOD_SIGNATURE(5), 
		jint >
	(get_jobject());
}

void java::util::Timer::schedule(local_ref< java::util::TimerTask > const &a0, local_ref< java::util::Date > const &a1)
{
	return call_method<
		java::util::Timer::J2CPP_CLASS_NAME,
		java::util::Timer::J2CPP_METHOD_NAME(6),
		java::util::Timer::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0, a1);
}

void java::util::Timer::schedule(local_ref< java::util::TimerTask > const &a0, jlong a1)
{
	return call_method<
		java::util::Timer::J2CPP_CLASS_NAME,
		java::util::Timer::J2CPP_METHOD_NAME(7),
		java::util::Timer::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0, a1);
}

void java::util::Timer::schedule(local_ref< java::util::TimerTask > const &a0, jlong a1, jlong a2)
{
	return call_method<
		java::util::Timer::J2CPP_CLASS_NAME,
		java::util::Timer::J2CPP_METHOD_NAME(8),
		java::util::Timer::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0, a1, a2);
}

void java::util::Timer::schedule(local_ref< java::util::TimerTask > const &a0, local_ref< java::util::Date > const &a1, jlong a2)
{
	return call_method<
		java::util::Timer::J2CPP_CLASS_NAME,
		java::util::Timer::J2CPP_METHOD_NAME(9),
		java::util::Timer::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject(), a0, a1, a2);
}

void java::util::Timer::scheduleAtFixedRate(local_ref< java::util::TimerTask > const &a0, jlong a1, jlong a2)
{
	return call_method<
		java::util::Timer::J2CPP_CLASS_NAME,
		java::util::Timer::J2CPP_METHOD_NAME(10),
		java::util::Timer::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject(), a0, a1, a2);
}

void java::util::Timer::scheduleAtFixedRate(local_ref< java::util::TimerTask > const &a0, local_ref< java::util::Date > const &a1, jlong a2)
{
	return call_method<
		java::util::Timer::J2CPP_CLASS_NAME,
		java::util::Timer::J2CPP_METHOD_NAME(11),
		java::util::Timer::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(java::util::Timer,"java/util/Timer")
J2CPP_DEFINE_METHOD(java::util::Timer,0,"<init>","(Z)V")
J2CPP_DEFINE_METHOD(java::util::Timer,1,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::Timer,2,"<init>","(Ljava/lang/String;Z)V")
J2CPP_DEFINE_METHOD(java::util::Timer,3,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::Timer,4,"cancel","()V")
J2CPP_DEFINE_METHOD(java::util::Timer,5,"purge","()I")
J2CPP_DEFINE_METHOD(java::util::Timer,6,"schedule","(Ljava/util/TimerTask;Ljava/util/Date;)V")
J2CPP_DEFINE_METHOD(java::util::Timer,7,"schedule","(Ljava/util/TimerTask;J)V")
J2CPP_DEFINE_METHOD(java::util::Timer,8,"schedule","(Ljava/util/TimerTask;JJ)V")
J2CPP_DEFINE_METHOD(java::util::Timer,9,"schedule","(Ljava/util/TimerTask;Ljava/util/Date;J)V")
J2CPP_DEFINE_METHOD(java::util::Timer,10,"scheduleAtFixedRate","(Ljava/util/TimerTask;JJ)V")
J2CPP_DEFINE_METHOD(java::util::Timer,11,"scheduleAtFixedRate","(Ljava/util/TimerTask;Ljava/util/Date;J)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_TIMER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
