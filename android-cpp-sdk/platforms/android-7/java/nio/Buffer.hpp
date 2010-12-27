/*================================================================================
  code generated by: java2cpp
  class: java.nio.Buffer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_BUFFER_HPP_DECL
#define J2CPP_JAVA_NIO_BUFFER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace nio {

	class Buffer;
	class Buffer
		: public cpp_object<Buffer>
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

		explicit Buffer(jobject jobj)
		: cpp_object<Buffer>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		cpp_int capacity();
		local_ref< java::nio::Buffer > clear();
		local_ref< java::nio::Buffer > flip();
		cpp_boolean hasRemaining();
		cpp_boolean isReadOnly();
		cpp_int limit();
		local_ref< java::nio::Buffer > limit(cpp_int const&);
		local_ref< java::nio::Buffer > mark();
		cpp_int position();
		local_ref< java::nio::Buffer > position(cpp_int const&);
		cpp_int remaining();
		local_ref< java::nio::Buffer > reset();
		local_ref< java::nio::Buffer > rewind();
	}; //class Buffer

} //namespace nio
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_BUFFER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_BUFFER_HPP_IMPL
#define J2CPP_JAVA_NIO_BUFFER_HPP_IMPL

namespace j2cpp {



java::nio::Buffer::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


cpp_int java::nio::Buffer::capacity()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::nio::Buffer > java::nio::Buffer::clear()
{
	return local_ref< java::nio::Buffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::nio::Buffer > java::nio::Buffer::flip()
{
	return local_ref< java::nio::Buffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_boolean java::nio::Buffer::hasRemaining()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_boolean java::nio::Buffer::isReadOnly()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_int java::nio::Buffer::limit()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< java::nio::Buffer > java::nio::Buffer::limit(cpp_int const &a0)
{
	return local_ref< java::nio::Buffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::nio::Buffer > java::nio::Buffer::mark()
{
	return local_ref< java::nio::Buffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

cpp_int java::nio::Buffer::position()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

local_ref< java::nio::Buffer > java::nio::Buffer::position(cpp_int const &a0)
{
	return local_ref< java::nio::Buffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::nio::Buffer::remaining()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

local_ref< java::nio::Buffer > java::nio::Buffer::reset()
{
	return local_ref< java::nio::Buffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

local_ref< java::nio::Buffer > java::nio::Buffer::rewind()
{
	return local_ref< java::nio::Buffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::nio::Buffer,"java/nio/Buffer")
J2CPP_DEFINE_METHOD(java::nio::Buffer,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::nio::Buffer,1,"capacity","()I")
J2CPP_DEFINE_METHOD(java::nio::Buffer,2,"clear","()Ljava/nio/Buffer;")
J2CPP_DEFINE_METHOD(java::nio::Buffer,3,"flip","()Ljava/nio/Buffer;")
J2CPP_DEFINE_METHOD(java::nio::Buffer,4,"hasRemaining","()Z")
J2CPP_DEFINE_METHOD(java::nio::Buffer,5,"isReadOnly","()Z")
J2CPP_DEFINE_METHOD(java::nio::Buffer,6,"limit","()I")
J2CPP_DEFINE_METHOD(java::nio::Buffer,7,"limit","(I)Ljava/nio/Buffer;")
J2CPP_DEFINE_METHOD(java::nio::Buffer,8,"mark","()Ljava/nio/Buffer;")
J2CPP_DEFINE_METHOD(java::nio::Buffer,9,"position","()I")
J2CPP_DEFINE_METHOD(java::nio::Buffer,10,"position","(I)Ljava/nio/Buffer;")
J2CPP_DEFINE_METHOD(java::nio::Buffer,11,"remaining","()I")
J2CPP_DEFINE_METHOD(java::nio::Buffer,12,"reset","()Ljava/nio/Buffer;")
J2CPP_DEFINE_METHOD(java::nio::Buffer,13,"rewind","()Ljava/nio/Buffer;")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_BUFFER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
