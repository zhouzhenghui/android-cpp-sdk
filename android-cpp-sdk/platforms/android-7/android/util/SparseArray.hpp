/*================================================================================
  code generated by: java2cpp
  class: android.util.SparseArray
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_SPARSEARRAY_HPP_DECL
#define J2CPP_ANDROID_UTIL_SPARSEARRAY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace util {

	class SparseArray;
	class SparseArray
		: public cpp_object<SparseArray>
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

		explicit SparseArray(jobject jobj)
		: cpp_object<SparseArray>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		SparseArray();
		SparseArray(cpp_int const&);
		local_ref< java::lang::Object > get(cpp_int const&);
		local_ref< java::lang::Object > get(cpp_int const&, local_ref< java::lang::Object > const&);
		void deleteThe(cpp_int const&);
		void remove(cpp_int const&);
		void put(cpp_int const&, local_ref< java::lang::Object > const&);
		cpp_int size();
		cpp_int keyAt(cpp_int const&);
		local_ref< java::lang::Object > valueAt(cpp_int const&);
		void setValueAt(cpp_int const&, local_ref< java::lang::Object > const&);
		cpp_int indexOfKey(cpp_int const&);
		cpp_int indexOfValue(local_ref< java::lang::Object > const&);
		void clear();
		void append(cpp_int const&, local_ref< java::lang::Object > const&);
	}; //class SparseArray

} //namespace util
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_SPARSEARRAY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_SPARSEARRAY_HPP_IMPL
#define J2CPP_ANDROID_UTIL_SPARSEARRAY_HPP_IMPL

namespace j2cpp {



android::util::SparseArray::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


android::util::SparseArray::SparseArray()
: cpp_object<android::util::SparseArray>(
	environment::get().get_jenv()->NewObject(
		get_class<android::util::SparseArray::J2CPP_CLASS_NAME>(),
		get_method_id<android::util::SparseArray::J2CPP_CLASS_NAME, android::util::SparseArray::J2CPP_METHOD_NAME(0), android::util::SparseArray::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}



android::util::SparseArray::SparseArray(cpp_int const &a0)
: cpp_object<android::util::SparseArray>(
	environment::get().get_jenv()->NewObject(
		get_class<android::util::SparseArray::J2CPP_CLASS_NAME>(),
		get_method_id<android::util::SparseArray::J2CPP_CLASS_NAME, android::util::SparseArray::J2CPP_METHOD_NAME(1), android::util::SparseArray::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype()
	)
)
{
}


local_ref< java::lang::Object > android::util::SparseArray::get(cpp_int const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > android::util::SparseArray::get(cpp_int const &a0, local_ref< java::lang::Object > const &a1)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::util::SparseArray::deleteThe(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

void android::util::SparseArray::remove(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

void android::util::SparseArray::put(cpp_int const &a0, local_ref< java::lang::Object > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int android::util::SparseArray::size()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

cpp_int android::util::SparseArray::keyAt(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > android::util::SparseArray::valueAt(cpp_int const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

void android::util::SparseArray::setValueAt(cpp_int const &a0, local_ref< java::lang::Object > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int android::util::SparseArray::indexOfKey(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::util::SparseArray::indexOfValue(local_ref< java::lang::Object > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

void android::util::SparseArray::clear()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

void android::util::SparseArray::append(cpp_int const &a0, local_ref< java::lang::Object > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::util::SparseArray,"android/util/SparseArray")
J2CPP_DEFINE_METHOD(android::util::SparseArray,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::util::SparseArray,1,"<init>","(I)V")
J2CPP_DEFINE_METHOD(android::util::SparseArray,2,"get","(I)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::util::SparseArray,3,"get","(ILjava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::util::SparseArray,4,"delete","(I)V")
J2CPP_DEFINE_METHOD(android::util::SparseArray,5,"remove","(I)V")
J2CPP_DEFINE_METHOD(android::util::SparseArray,6,"put","(ILjava/lang/Object;)V")
J2CPP_DEFINE_METHOD(android::util::SparseArray,7,"size","()I")
J2CPP_DEFINE_METHOD(android::util::SparseArray,8,"keyAt","(I)I")
J2CPP_DEFINE_METHOD(android::util::SparseArray,9,"valueAt","(I)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::util::SparseArray,10,"setValueAt","(ILjava/lang/Object;)V")
J2CPP_DEFINE_METHOD(android::util::SparseArray,11,"indexOfKey","(I)I")
J2CPP_DEFINE_METHOD(android::util::SparseArray,12,"indexOfValue","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(android::util::SparseArray,13,"clear","()V")
J2CPP_DEFINE_METHOD(android::util::SparseArray,14,"append","(ILjava/lang/Object;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_SPARSEARRAY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
