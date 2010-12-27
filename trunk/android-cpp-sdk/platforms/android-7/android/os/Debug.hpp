/*================================================================================
  code generated by: java2cpp
  class: android.os.Debug
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_DEBUG_HPP_DECL
#define J2CPP_ANDROID_OS_DEBUG_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { namespace Debug_ { class MemoryInfo; } } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }


#include <android/os/Debug.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace os {

	class Debug;
	namespace Debug_ {

		class InstructionCount;
		class InstructionCount
			: public cpp_object<InstructionCount>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)
			J2CPP_DECLARE_METHOD(4)

			explicit InstructionCount(jobject jobj)
			: cpp_object<InstructionCount>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			InstructionCount();
			cpp_boolean resetAndStart();
			cpp_boolean collect();
			cpp_int globalTotal();
			cpp_int globalMethodInvocations();
		}; //class InstructionCount

		class MemoryInfo;
		class MemoryInfo
			: public cpp_object<MemoryInfo>
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

			explicit MemoryInfo(jobject jobj)
			: cpp_object<MemoryInfo>(jobj)
, dalvikPss(jobj)
, dalvikPrivateDirty(jobj)
, dalvikSharedDirty(jobj)
, nativePss(jobj)
, nativePrivateDirty(jobj)
, nativeSharedDirty(jobj)
, otherPss(jobj)
, otherPrivateDirty(jobj)
, otherSharedDirty(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;
			operator local_ref<android::os::Parcelable>() const;


			MemoryInfo();
			cpp_int getTotalPss();
			cpp_int getTotalPrivateDirty();
			cpp_int getTotalSharedDirty();
			cpp_int describeContents();
			void writeToParcel(local_ref< android::os::Parcel > const&, cpp_int const&);
			void readFromParcel(local_ref< android::os::Parcel > const&);

			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > dalvikPss;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > dalvikPrivateDirty;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > dalvikSharedDirty;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > nativePss;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_int > nativePrivateDirty;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_int > nativeSharedDirty;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), cpp_int > otherPss;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), cpp_int > otherPrivateDirty;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), cpp_int > otherSharedDirty;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), local_ref< android::os::Parcelable_::Creator > > CREATOR;
		}; //class MemoryInfo

	} //namespace Debug_

	class Debug
		: public cpp_object<Debug>
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
		J2CPP_DECLARE_METHOD(40)
		J2CPP_DECLARE_METHOD(41)
		J2CPP_DECLARE_METHOD(42)
		J2CPP_DECLARE_METHOD(43)
		J2CPP_DECLARE_METHOD(44)
		J2CPP_DECLARE_METHOD(45)
		J2CPP_DECLARE_METHOD(46)
		J2CPP_DECLARE_METHOD(47)
		J2CPP_DECLARE_METHOD(48)
		J2CPP_DECLARE_METHOD(49)
		J2CPP_DECLARE_METHOD(50)
		J2CPP_DECLARE_METHOD(51)
		J2CPP_DECLARE_METHOD(52)
		J2CPP_DECLARE_METHOD(53)
		J2CPP_DECLARE_METHOD(54)
		J2CPP_DECLARE_METHOD(55)
		J2CPP_DECLARE_METHOD(56)
		J2CPP_DECLARE_METHOD(57)
		J2CPP_DECLARE_METHOD(58)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		typedef Debug_::InstructionCount InstructionCount;
		typedef Debug_::MemoryInfo MemoryInfo;

		explicit Debug(jobject jobj)
		: cpp_object<Debug>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static void waitForDebugger();
		static cpp_boolean waitingForDebugger();
		static cpp_boolean isDebuggerConnected();
		static void changeDebugPort(cpp_int const&);
		static void startNativeTracing();
		static void stopNativeTracing();
		static void enableEmulatorTraceOutput();
		static void startMethodTracing();
		static void startMethodTracing(local_ref< java::lang::String > const&);
		static void startMethodTracing(local_ref< java::lang::String > const&, cpp_int const&);
		static void startMethodTracing(local_ref< java::lang::String > const&, cpp_int const&, cpp_int const&);
		static void stopMethodTracing();
		static cpp_long threadCpuTimeNanos();
		static void startAllocCounting();
		static void stopAllocCounting();
		static cpp_int getGlobalAllocCount();
		static cpp_int getGlobalAllocSize();
		static cpp_int getGlobalFreedCount();
		static cpp_int getGlobalFreedSize();
		static cpp_int getGlobalExternalAllocCount();
		static cpp_int getGlobalExternalAllocSize();
		static cpp_int getGlobalExternalFreedCount();
		static cpp_int getGlobalExternalFreedSize();
		static cpp_int getGlobalGcInvocationCount();
		static cpp_int getThreadAllocCount();
		static cpp_int getThreadAllocSize();
		static cpp_int getThreadExternalAllocCount();
		static cpp_int getThreadExternalAllocSize();
		static cpp_int getThreadGcInvocationCount();
		static void resetGlobalAllocCount();
		static void resetGlobalAllocSize();
		static void resetGlobalFreedCount();
		static void resetGlobalFreedSize();
		static void resetGlobalExternalAllocCount();
		static void resetGlobalExternalAllocSize();
		static void resetGlobalExternalFreedCount();
		static void resetGlobalExternalFreedSize();
		static void resetGlobalGcInvocationCount();
		static void resetThreadAllocCount();
		static void resetThreadAllocSize();
		static void resetThreadExternalAllocCount();
		static void resetThreadExternalAllocSize();
		static void resetThreadGcInvocationCount();
		static void resetAllCounts();
		static cpp_long getNativeHeapSize();
		static cpp_long getNativeHeapAllocatedSize();
		static cpp_long getNativeHeapFreeSize();
		static void getMemoryInfo(local_ref< android::os::Debug_::MemoryInfo > const&);
		static cpp_int setAllocationLimit(cpp_int const&);
		static cpp_int setGlobalAllocationLimit(cpp_int const&);
		static void printLoadedClasses(cpp_int const&);
		static cpp_int getLoadedClassCount();
		static void dumpHprofData(local_ref< java::lang::String > const&);
		static cpp_int getBinderSentTransactions();
		static cpp_int getBinderReceivedTransactions();
		static cpp_int getBinderLocalObjectCount();
		static cpp_int getBinderProxyObjectCount();
		static cpp_int getBinderDeathObjectCount();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > TRACE_COUNT_ALLOCS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > SHOW_FULL_DETAIL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > SHOW_CLASSLOADER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > SHOW_INITIALIZED;
	}; //class Debug

} //namespace os
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_DEBUG_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_DEBUG_HPP_IMPL
#define J2CPP_ANDROID_OS_DEBUG_HPP_IMPL

namespace j2cpp {




android::os::Debug_::InstructionCount::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


android::os::Debug_::InstructionCount::InstructionCount()
: cpp_object<android::os::Debug_::InstructionCount>(
	environment::get().get_jenv()->NewObject(
		get_class<android::os::Debug_::InstructionCount::J2CPP_CLASS_NAME>(),
		get_method_id<android::os::Debug_::InstructionCount::J2CPP_CLASS_NAME, android::os::Debug_::InstructionCount::J2CPP_METHOD_NAME(0), android::os::Debug_::InstructionCount::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}


cpp_boolean android::os::Debug_::InstructionCount::resetAndStart()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_boolean android::os::Debug_::InstructionCount::collect()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_int android::os::Debug_::InstructionCount::globalTotal()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_int android::os::Debug_::InstructionCount::globalMethodInvocations()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::os::Debug_::InstructionCount,"android/os/Debug$InstructionCount")
J2CPP_DEFINE_METHOD(android::os::Debug_::InstructionCount,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::os::Debug_::InstructionCount,1,"resetAndStart","()Z")
J2CPP_DEFINE_METHOD(android::os::Debug_::InstructionCount,2,"collect","()Z")
J2CPP_DEFINE_METHOD(android::os::Debug_::InstructionCount,3,"globalTotal","()I")
J2CPP_DEFINE_METHOD(android::os::Debug_::InstructionCount,4,"globalMethodInvocations","()I")


android::os::Debug_::MemoryInfo::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

android::os::Debug_::MemoryInfo::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jtype());
}


android::os::Debug_::MemoryInfo::MemoryInfo()
: cpp_object<android::os::Debug_::MemoryInfo>(
	environment::get().get_jenv()->NewObject(
		get_class<android::os::Debug_::MemoryInfo::J2CPP_CLASS_NAME>(),
		get_method_id<android::os::Debug_::MemoryInfo::J2CPP_CLASS_NAME, android::os::Debug_::MemoryInfo::J2CPP_METHOD_NAME(0), android::os::Debug_::MemoryInfo::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
, dalvikPss(get_jtype())
, dalvikPrivateDirty(get_jtype())
, dalvikSharedDirty(get_jtype())
, nativePss(get_jtype())
, nativePrivateDirty(get_jtype())
, nativeSharedDirty(get_jtype())
, otherPss(get_jtype())
, otherPrivateDirty(get_jtype())
, otherSharedDirty(get_jtype())
{
}


cpp_int android::os::Debug_::MemoryInfo::getTotalPss()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_int android::os::Debug_::MemoryInfo::getTotalPrivateDirty()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_int android::os::Debug_::MemoryInfo::getTotalSharedDirty()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_int android::os::Debug_::MemoryInfo::describeContents()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

void android::os::Debug_::MemoryInfo::writeToParcel(local_ref< android::os::Parcel > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::os::Debug_::MemoryInfo::readFromParcel(local_ref< android::os::Parcel > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}



static_field<
	android::os::Debug_::MemoryInfo::J2CPP_CLASS_NAME,
	android::os::Debug_::MemoryInfo::J2CPP_FIELD_NAME(9),
	android::os::Debug_::MemoryInfo::J2CPP_FIELD_SIGNATURE(9),
	local_ref< android::os::Parcelable_::Creator >
> android::os::Debug_::MemoryInfo::CREATOR;


J2CPP_DEFINE_CLASS(android::os::Debug_::MemoryInfo,"android/os/Debug$MemoryInfo")
J2CPP_DEFINE_METHOD(android::os::Debug_::MemoryInfo,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::os::Debug_::MemoryInfo,1,"getTotalPss","()I")
J2CPP_DEFINE_METHOD(android::os::Debug_::MemoryInfo,2,"getTotalPrivateDirty","()I")
J2CPP_DEFINE_METHOD(android::os::Debug_::MemoryInfo,3,"getTotalSharedDirty","()I")
J2CPP_DEFINE_METHOD(android::os::Debug_::MemoryInfo,4,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::os::Debug_::MemoryInfo,5,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::os::Debug_::MemoryInfo,6,"readFromParcel","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::os::Debug_::MemoryInfo,7,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::os::Debug_::MemoryInfo,0,"dalvikPss","I")
J2CPP_DEFINE_FIELD(android::os::Debug_::MemoryInfo,1,"dalvikPrivateDirty","I")
J2CPP_DEFINE_FIELD(android::os::Debug_::MemoryInfo,2,"dalvikSharedDirty","I")
J2CPP_DEFINE_FIELD(android::os::Debug_::MemoryInfo,3,"nativePss","I")
J2CPP_DEFINE_FIELD(android::os::Debug_::MemoryInfo,4,"nativePrivateDirty","I")
J2CPP_DEFINE_FIELD(android::os::Debug_::MemoryInfo,5,"nativeSharedDirty","I")
J2CPP_DEFINE_FIELD(android::os::Debug_::MemoryInfo,6,"otherPss","I")
J2CPP_DEFINE_FIELD(android::os::Debug_::MemoryInfo,7,"otherPrivateDirty","I")
J2CPP_DEFINE_FIELD(android::os::Debug_::MemoryInfo,8,"otherSharedDirty","I")
J2CPP_DEFINE_FIELD(android::os::Debug_::MemoryInfo,9,"CREATOR","Landroid/os/Parcelable$Creator;")



android::os::Debug::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


void android::os::Debug::waitForDebugger()
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>()
		)
	);
}

cpp_boolean android::os::Debug::waitingForDebugger()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>()
		)
	);
}

cpp_boolean android::os::Debug::isDebuggerConnected()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>()
		)
	);
}

void android::os::Debug::changeDebugPort(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>(),
			a0.get_jtype()
		)
	);
}

void android::os::Debug::startNativeTracing()
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), true>()
		)
	);
}

void android::os::Debug::stopNativeTracing()
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), true>()
		)
	);
}

void android::os::Debug::enableEmulatorTraceOutput()
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), true>()
		)
	);
}

void android::os::Debug::startMethodTracing()
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), true>()
		)
	);
}

void android::os::Debug::startMethodTracing(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), true>(),
			a0.get_jtype()
		)
	);
}

void android::os::Debug::startMethodTracing(local_ref< java::lang::String > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::os::Debug::startMethodTracing(local_ref< java::lang::String > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::os::Debug::stopMethodTracing()
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), true>()
		)
	);
}

cpp_long android::os::Debug::threadCpuTimeNanos()
{
	return cpp_long(
		environment::get().get_jenv()->CallStaticLongMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), true>()
		)
	);
}

void android::os::Debug::startAllocCounting()
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), true>()
		)
	);
}

void android::os::Debug::stopAllocCounting()
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), true>()
		)
	);
}

cpp_int android::os::Debug::getGlobalAllocCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), true>()
		)
	);
}

cpp_int android::os::Debug::getGlobalAllocSize()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), true>()
		)
	);
}

cpp_int android::os::Debug::getGlobalFreedCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), true>()
		)
	);
}

cpp_int android::os::Debug::getGlobalFreedSize()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), true>()
		)
	);
}

cpp_int android::os::Debug::getGlobalExternalAllocCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), true>()
		)
	);
}

cpp_int android::os::Debug::getGlobalExternalAllocSize()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), true>()
		)
	);
}

cpp_int android::os::Debug::getGlobalExternalFreedCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), true>()
		)
	);
}

cpp_int android::os::Debug::getGlobalExternalFreedSize()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), true>()
		)
	);
}

cpp_int android::os::Debug::getGlobalGcInvocationCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), true>()
		)
	);
}

cpp_int android::os::Debug::getThreadAllocCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), true>()
		)
	);
}

cpp_int android::os::Debug::getThreadAllocSize()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), true>()
		)
	);
}

cpp_int android::os::Debug::getThreadExternalAllocCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), true>()
		)
	);
}

cpp_int android::os::Debug::getThreadExternalAllocSize()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), true>()
		)
	);
}

cpp_int android::os::Debug::getThreadGcInvocationCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), true>()
		)
	);
}

void android::os::Debug::resetGlobalAllocCount()
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), true>()
		)
	);
}

void android::os::Debug::resetGlobalAllocSize()
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), true>()
		)
	);
}

void android::os::Debug::resetGlobalFreedCount()
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), true>()
		)
	);
}

void android::os::Debug::resetGlobalFreedSize()
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), true>()
		)
	);
}

void android::os::Debug::resetGlobalExternalAllocCount()
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(34), J2CPP_METHOD_SIGNATURE(34), true>()
		)
	);
}

void android::os::Debug::resetGlobalExternalAllocSize()
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(35), J2CPP_METHOD_SIGNATURE(35), true>()
		)
	);
}

void android::os::Debug::resetGlobalExternalFreedCount()
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(36), J2CPP_METHOD_SIGNATURE(36), true>()
		)
	);
}

void android::os::Debug::resetGlobalExternalFreedSize()
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(37), J2CPP_METHOD_SIGNATURE(37), true>()
		)
	);
}

void android::os::Debug::resetGlobalGcInvocationCount()
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(38), J2CPP_METHOD_SIGNATURE(38), true>()
		)
	);
}

void android::os::Debug::resetThreadAllocCount()
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(39), J2CPP_METHOD_SIGNATURE(39), true>()
		)
	);
}

void android::os::Debug::resetThreadAllocSize()
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(40), J2CPP_METHOD_SIGNATURE(40), true>()
		)
	);
}

void android::os::Debug::resetThreadExternalAllocCount()
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(41), J2CPP_METHOD_SIGNATURE(41), true>()
		)
	);
}

void android::os::Debug::resetThreadExternalAllocSize()
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(42), J2CPP_METHOD_SIGNATURE(42), true>()
		)
	);
}

void android::os::Debug::resetThreadGcInvocationCount()
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(43), J2CPP_METHOD_SIGNATURE(43), true>()
		)
	);
}

void android::os::Debug::resetAllCounts()
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(44), J2CPP_METHOD_SIGNATURE(44), true>()
		)
	);
}

cpp_long android::os::Debug::getNativeHeapSize()
{
	return cpp_long(
		environment::get().get_jenv()->CallStaticLongMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(45), J2CPP_METHOD_SIGNATURE(45), true>()
		)
	);
}

cpp_long android::os::Debug::getNativeHeapAllocatedSize()
{
	return cpp_long(
		environment::get().get_jenv()->CallStaticLongMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(46), J2CPP_METHOD_SIGNATURE(46), true>()
		)
	);
}

cpp_long android::os::Debug::getNativeHeapFreeSize()
{
	return cpp_long(
		environment::get().get_jenv()->CallStaticLongMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(47), J2CPP_METHOD_SIGNATURE(47), true>()
		)
	);
}

void android::os::Debug::getMemoryInfo(local_ref< android::os::Debug_::MemoryInfo > const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(48), J2CPP_METHOD_SIGNATURE(48), true>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::os::Debug::setAllocationLimit(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(49), J2CPP_METHOD_SIGNATURE(49), true>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::os::Debug::setGlobalAllocationLimit(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(50), J2CPP_METHOD_SIGNATURE(50), true>(),
			a0.get_jtype()
		)
	);
}

void android::os::Debug::printLoadedClasses(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(51), J2CPP_METHOD_SIGNATURE(51), true>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::os::Debug::getLoadedClassCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(52), J2CPP_METHOD_SIGNATURE(52), true>()
		)
	);
}

void android::os::Debug::dumpHprofData(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(53), J2CPP_METHOD_SIGNATURE(53), true>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::os::Debug::getBinderSentTransactions()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(54), J2CPP_METHOD_SIGNATURE(54), true>()
		)
	);
}

cpp_int android::os::Debug::getBinderReceivedTransactions()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(55), J2CPP_METHOD_SIGNATURE(55), true>()
		)
	);
}

cpp_int android::os::Debug::getBinderLocalObjectCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(56), J2CPP_METHOD_SIGNATURE(56), true>()
		)
	);
}

cpp_int android::os::Debug::getBinderProxyObjectCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(57), J2CPP_METHOD_SIGNATURE(57), true>()
		)
	);
}

cpp_int android::os::Debug::getBinderDeathObjectCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(58), J2CPP_METHOD_SIGNATURE(58), true>()
		)
	);
}


static_field<
	android::os::Debug::J2CPP_CLASS_NAME,
	android::os::Debug::J2CPP_FIELD_NAME(0),
	android::os::Debug::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::os::Debug::TRACE_COUNT_ALLOCS;

static_field<
	android::os::Debug::J2CPP_CLASS_NAME,
	android::os::Debug::J2CPP_FIELD_NAME(1),
	android::os::Debug::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::os::Debug::SHOW_FULL_DETAIL;

static_field<
	android::os::Debug::J2CPP_CLASS_NAME,
	android::os::Debug::J2CPP_FIELD_NAME(2),
	android::os::Debug::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::os::Debug::SHOW_CLASSLOADER;

static_field<
	android::os::Debug::J2CPP_CLASS_NAME,
	android::os::Debug::J2CPP_FIELD_NAME(3),
	android::os::Debug::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> android::os::Debug::SHOW_INITIALIZED;


J2CPP_DEFINE_CLASS(android::os::Debug,"android/os/Debug")
J2CPP_DEFINE_METHOD(android::os::Debug,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,1,"waitForDebugger","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,2,"waitingForDebugger","()Z")
J2CPP_DEFINE_METHOD(android::os::Debug,3,"isDebuggerConnected","()Z")
J2CPP_DEFINE_METHOD(android::os::Debug,4,"changeDebugPort","(I)V")
J2CPP_DEFINE_METHOD(android::os::Debug,5,"startNativeTracing","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,6,"stopNativeTracing","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,7,"enableEmulatorTraceOutput","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,8,"startMethodTracing","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,9,"startMethodTracing","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::os::Debug,10,"startMethodTracing","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::os::Debug,11,"startMethodTracing","(Ljava/lang/String;II)V")
J2CPP_DEFINE_METHOD(android::os::Debug,12,"stopMethodTracing","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,13,"threadCpuTimeNanos","()J")
J2CPP_DEFINE_METHOD(android::os::Debug,14,"startAllocCounting","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,15,"stopAllocCounting","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,16,"getGlobalAllocCount","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,17,"getGlobalAllocSize","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,18,"getGlobalFreedCount","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,19,"getGlobalFreedSize","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,20,"getGlobalExternalAllocCount","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,21,"getGlobalExternalAllocSize","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,22,"getGlobalExternalFreedCount","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,23,"getGlobalExternalFreedSize","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,24,"getGlobalGcInvocationCount","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,25,"getThreadAllocCount","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,26,"getThreadAllocSize","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,27,"getThreadExternalAllocCount","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,28,"getThreadExternalAllocSize","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,29,"getThreadGcInvocationCount","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,30,"resetGlobalAllocCount","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,31,"resetGlobalAllocSize","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,32,"resetGlobalFreedCount","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,33,"resetGlobalFreedSize","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,34,"resetGlobalExternalAllocCount","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,35,"resetGlobalExternalAllocSize","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,36,"resetGlobalExternalFreedCount","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,37,"resetGlobalExternalFreedSize","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,38,"resetGlobalGcInvocationCount","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,39,"resetThreadAllocCount","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,40,"resetThreadAllocSize","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,41,"resetThreadExternalAllocCount","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,42,"resetThreadExternalAllocSize","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,43,"resetThreadGcInvocationCount","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,44,"resetAllCounts","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,45,"getNativeHeapSize","()J")
J2CPP_DEFINE_METHOD(android::os::Debug,46,"getNativeHeapAllocatedSize","()J")
J2CPP_DEFINE_METHOD(android::os::Debug,47,"getNativeHeapFreeSize","()J")
J2CPP_DEFINE_METHOD(android::os::Debug,48,"getMemoryInfo","(Landroid/os/Debug$MemoryInfo;)V")
J2CPP_DEFINE_METHOD(android::os::Debug,49,"setAllocationLimit","(I)I")
J2CPP_DEFINE_METHOD(android::os::Debug,50,"setGlobalAllocationLimit","(I)I")
J2CPP_DEFINE_METHOD(android::os::Debug,51,"printLoadedClasses","(I)V")
J2CPP_DEFINE_METHOD(android::os::Debug,52,"getLoadedClassCount","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,53,"dumpHprofData","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::os::Debug,54,"getBinderSentTransactions","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,55,"getBinderReceivedTransactions","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,56,"getBinderLocalObjectCount","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,57,"getBinderProxyObjectCount","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,58,"getBinderDeathObjectCount","()I")
J2CPP_DEFINE_FIELD(android::os::Debug,0,"TRACE_COUNT_ALLOCS","I")
J2CPP_DEFINE_FIELD(android::os::Debug,1,"SHOW_FULL_DETAIL","I")
J2CPP_DEFINE_FIELD(android::os::Debug,2,"SHOW_CLASSLOADER","I")
J2CPP_DEFINE_FIELD(android::os::Debug,3,"SHOW_INITIALIZED","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_DEBUG_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
