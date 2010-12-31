/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.nio.ShortBuffer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_SHORTBUFFER_HPP_DECL
#define J2CPP_JAVA_NIO_SHORTBUFFER_HPP_DECL


namespace j2cpp { namespace java { namespace nio { class ByteOrder; } } }
namespace j2cpp { namespace java { namespace nio { class Buffer; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Comparable; } } }


#include <java/lang/Comparable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/nio/Buffer.hpp>
#include <java/nio/ByteOrder.hpp>


namespace j2cpp {

namespace java { namespace nio {

	class ShortBuffer;
	class ShortBuffer
		: public object<ShortBuffer>
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

		explicit ShortBuffer(jobject jobj)
		: object<ShortBuffer>(jobj)
		{
		}

		operator local_ref<java::nio::Buffer>() const;
		operator local_ref<java::lang::Comparable>() const;


		static local_ref< java::nio::ShortBuffer > allocate(jint);
		static local_ref< java::nio::ShortBuffer > wrap(local_ref< array<jshort,1> >  const&);
		static local_ref< java::nio::ShortBuffer > wrap(local_ref< array<jshort,1> >  const&, jint, jint);
		local_ref< array<jshort,1> > array_();
		jint arrayOffset();
		local_ref< java::nio::ShortBuffer > asReadOnlyBuffer();
		local_ref< java::nio::ShortBuffer > compact();
		jint compareTo(local_ref< java::nio::ShortBuffer >  const&);
		local_ref< java::nio::ShortBuffer > duplicate();
		jboolean equals(local_ref< java::lang::Object >  const&);
		jshort get();
		local_ref< java::nio::ShortBuffer > get(local_ref< array<jshort,1> >  const&);
		local_ref< java::nio::ShortBuffer > get(local_ref< array<jshort,1> >  const&, jint, jint);
		jshort get(jint);
		jboolean hasArray();
		jint hashCode();
		jboolean isDirect();
		local_ref< java::nio::ByteOrder > order();
		local_ref< java::nio::ShortBuffer > put(jshort);
		local_ref< java::nio::ShortBuffer > put(local_ref< array<jshort,1> >  const&);
		local_ref< java::nio::ShortBuffer > put(local_ref< array<jshort,1> >  const&, jint, jint);
		local_ref< java::nio::ShortBuffer > put(local_ref< java::nio::ShortBuffer >  const&);
		local_ref< java::nio::ShortBuffer > put(jint, jshort);
		local_ref< java::nio::ShortBuffer > slice();
		local_ref< java::lang::String > toString();
		jint compareTo(local_ref< java::lang::Object >  const&);
	}; //class ShortBuffer

} //namespace nio
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_SHORTBUFFER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_SHORTBUFFER_HPP_IMPL
#define J2CPP_JAVA_NIO_SHORTBUFFER_HPP_IMPL

namespace j2cpp {



java::nio::ShortBuffer::operator local_ref<java::nio::Buffer>() const
{
	return local_ref<java::nio::Buffer>(get_jobject());
}

java::nio::ShortBuffer::operator local_ref<java::lang::Comparable>() const
{
	return local_ref<java::lang::Comparable>(get_jobject());
}


local_ref< java::nio::ShortBuffer > java::nio::ShortBuffer::allocate(jint a0)
{
	return call_static_method<
		java::nio::ShortBuffer::J2CPP_CLASS_NAME,
		java::nio::ShortBuffer::J2CPP_METHOD_NAME(1),
		java::nio::ShortBuffer::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::nio::ShortBuffer > >
	(a0);
}

local_ref< java::nio::ShortBuffer > java::nio::ShortBuffer::wrap(local_ref< array<jshort,1> > const &a0)
{
	return call_static_method<
		java::nio::ShortBuffer::J2CPP_CLASS_NAME,
		java::nio::ShortBuffer::J2CPP_METHOD_NAME(2),
		java::nio::ShortBuffer::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::nio::ShortBuffer > >
	(a0);
}

local_ref< java::nio::ShortBuffer > java::nio::ShortBuffer::wrap(local_ref< array<jshort,1> > const &a0, jint a1, jint a2)
{
	return call_static_method<
		java::nio::ShortBuffer::J2CPP_CLASS_NAME,
		java::nio::ShortBuffer::J2CPP_METHOD_NAME(3),
		java::nio::ShortBuffer::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::nio::ShortBuffer > >
	(a0, a1, a2);
}

local_ref< array<jshort,1> > java::nio::ShortBuffer::array_()
{
	return call_method<
		java::nio::ShortBuffer::J2CPP_CLASS_NAME,
		java::nio::ShortBuffer::J2CPP_METHOD_NAME(4),
		java::nio::ShortBuffer::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< array<jshort,1> > >
	(get_jobject());
}

jint java::nio::ShortBuffer::arrayOffset()
{
	return call_method<
		java::nio::ShortBuffer::J2CPP_CLASS_NAME,
		java::nio::ShortBuffer::J2CPP_METHOD_NAME(5),
		java::nio::ShortBuffer::J2CPP_METHOD_SIGNATURE(5), 
		jint >
	(get_jobject());
}

local_ref< java::nio::ShortBuffer > java::nio::ShortBuffer::asReadOnlyBuffer()
{
	return call_method<
		java::nio::ShortBuffer::J2CPP_CLASS_NAME,
		java::nio::ShortBuffer::J2CPP_METHOD_NAME(6),
		java::nio::ShortBuffer::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::nio::ShortBuffer > >
	(get_jobject());
}

local_ref< java::nio::ShortBuffer > java::nio::ShortBuffer::compact()
{
	return call_method<
		java::nio::ShortBuffer::J2CPP_CLASS_NAME,
		java::nio::ShortBuffer::J2CPP_METHOD_NAME(7),
		java::nio::ShortBuffer::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::nio::ShortBuffer > >
	(get_jobject());
}

jint java::nio::ShortBuffer::compareTo(local_ref< java::nio::ShortBuffer > const &a0)
{
	return call_method<
		java::nio::ShortBuffer::J2CPP_CLASS_NAME,
		java::nio::ShortBuffer::J2CPP_METHOD_NAME(8),
		java::nio::ShortBuffer::J2CPP_METHOD_SIGNATURE(8), 
		jint >
	(get_jobject(), a0);
}

local_ref< java::nio::ShortBuffer > java::nio::ShortBuffer::duplicate()
{
	return call_method<
		java::nio::ShortBuffer::J2CPP_CLASS_NAME,
		java::nio::ShortBuffer::J2CPP_METHOD_NAME(9),
		java::nio::ShortBuffer::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::nio::ShortBuffer > >
	(get_jobject());
}

jboolean java::nio::ShortBuffer::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::nio::ShortBuffer::J2CPP_CLASS_NAME,
		java::nio::ShortBuffer::J2CPP_METHOD_NAME(10),
		java::nio::ShortBuffer::J2CPP_METHOD_SIGNATURE(10), 
		jboolean >
	(get_jobject(), a0);
}

jshort java::nio::ShortBuffer::get()
{
	return call_method<
		java::nio::ShortBuffer::J2CPP_CLASS_NAME,
		java::nio::ShortBuffer::J2CPP_METHOD_NAME(11),
		java::nio::ShortBuffer::J2CPP_METHOD_SIGNATURE(11), 
		jshort >
	(get_jobject());
}

local_ref< java::nio::ShortBuffer > java::nio::ShortBuffer::get(local_ref< array<jshort,1> > const &a0)
{
	return call_method<
		java::nio::ShortBuffer::J2CPP_CLASS_NAME,
		java::nio::ShortBuffer::J2CPP_METHOD_NAME(12),
		java::nio::ShortBuffer::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::nio::ShortBuffer > >
	(get_jobject(), a0);
}

local_ref< java::nio::ShortBuffer > java::nio::ShortBuffer::get(local_ref< array<jshort,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::nio::ShortBuffer::J2CPP_CLASS_NAME,
		java::nio::ShortBuffer::J2CPP_METHOD_NAME(13),
		java::nio::ShortBuffer::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::nio::ShortBuffer > >
	(get_jobject(), a0, a1, a2);
}

jshort java::nio::ShortBuffer::get(jint a0)
{
	return call_method<
		java::nio::ShortBuffer::J2CPP_CLASS_NAME,
		java::nio::ShortBuffer::J2CPP_METHOD_NAME(14),
		java::nio::ShortBuffer::J2CPP_METHOD_SIGNATURE(14), 
		jshort >
	(get_jobject(), a0);
}

jboolean java::nio::ShortBuffer::hasArray()
{
	return call_method<
		java::nio::ShortBuffer::J2CPP_CLASS_NAME,
		java::nio::ShortBuffer::J2CPP_METHOD_NAME(15),
		java::nio::ShortBuffer::J2CPP_METHOD_SIGNATURE(15), 
		jboolean >
	(get_jobject());
}

jint java::nio::ShortBuffer::hashCode()
{
	return call_method<
		java::nio::ShortBuffer::J2CPP_CLASS_NAME,
		java::nio::ShortBuffer::J2CPP_METHOD_NAME(16),
		java::nio::ShortBuffer::J2CPP_METHOD_SIGNATURE(16), 
		jint >
	(get_jobject());
}

jboolean java::nio::ShortBuffer::isDirect()
{
	return call_method<
		java::nio::ShortBuffer::J2CPP_CLASS_NAME,
		java::nio::ShortBuffer::J2CPP_METHOD_NAME(17),
		java::nio::ShortBuffer::J2CPP_METHOD_SIGNATURE(17), 
		jboolean >
	(get_jobject());
}

local_ref< java::nio::ByteOrder > java::nio::ShortBuffer::order()
{
	return call_method<
		java::nio::ShortBuffer::J2CPP_CLASS_NAME,
		java::nio::ShortBuffer::J2CPP_METHOD_NAME(18),
		java::nio::ShortBuffer::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< java::nio::ByteOrder > >
	(get_jobject());
}

local_ref< java::nio::ShortBuffer > java::nio::ShortBuffer::put(jshort a0)
{
	return call_method<
		java::nio::ShortBuffer::J2CPP_CLASS_NAME,
		java::nio::ShortBuffer::J2CPP_METHOD_NAME(19),
		java::nio::ShortBuffer::J2CPP_METHOD_SIGNATURE(19), 
		local_ref< java::nio::ShortBuffer > >
	(get_jobject(), a0);
}

local_ref< java::nio::ShortBuffer > java::nio::ShortBuffer::put(local_ref< array<jshort,1> > const &a0)
{
	return call_method<
		java::nio::ShortBuffer::J2CPP_CLASS_NAME,
		java::nio::ShortBuffer::J2CPP_METHOD_NAME(20),
		java::nio::ShortBuffer::J2CPP_METHOD_SIGNATURE(20), 
		local_ref< java::nio::ShortBuffer > >
	(get_jobject(), a0);
}

local_ref< java::nio::ShortBuffer > java::nio::ShortBuffer::put(local_ref< array<jshort,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::nio::ShortBuffer::J2CPP_CLASS_NAME,
		java::nio::ShortBuffer::J2CPP_METHOD_NAME(21),
		java::nio::ShortBuffer::J2CPP_METHOD_SIGNATURE(21), 
		local_ref< java::nio::ShortBuffer > >
	(get_jobject(), a0, a1, a2);
}

local_ref< java::nio::ShortBuffer > java::nio::ShortBuffer::put(local_ref< java::nio::ShortBuffer > const &a0)
{
	return call_method<
		java::nio::ShortBuffer::J2CPP_CLASS_NAME,
		java::nio::ShortBuffer::J2CPP_METHOD_NAME(22),
		java::nio::ShortBuffer::J2CPP_METHOD_SIGNATURE(22), 
		local_ref< java::nio::ShortBuffer > >
	(get_jobject(), a0);
}

local_ref< java::nio::ShortBuffer > java::nio::ShortBuffer::put(jint a0, jshort a1)
{
	return call_method<
		java::nio::ShortBuffer::J2CPP_CLASS_NAME,
		java::nio::ShortBuffer::J2CPP_METHOD_NAME(23),
		java::nio::ShortBuffer::J2CPP_METHOD_SIGNATURE(23), 
		local_ref< java::nio::ShortBuffer > >
	(get_jobject(), a0, a1);
}

local_ref< java::nio::ShortBuffer > java::nio::ShortBuffer::slice()
{
	return call_method<
		java::nio::ShortBuffer::J2CPP_CLASS_NAME,
		java::nio::ShortBuffer::J2CPP_METHOD_NAME(24),
		java::nio::ShortBuffer::J2CPP_METHOD_SIGNATURE(24), 
		local_ref< java::nio::ShortBuffer > >
	(get_jobject());
}

local_ref< java::lang::String > java::nio::ShortBuffer::toString()
{
	return call_method<
		java::nio::ShortBuffer::J2CPP_CLASS_NAME,
		java::nio::ShortBuffer::J2CPP_METHOD_NAME(25),
		java::nio::ShortBuffer::J2CPP_METHOD_SIGNATURE(25), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jint java::nio::ShortBuffer::compareTo(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::nio::ShortBuffer::J2CPP_CLASS_NAME,
		java::nio::ShortBuffer::J2CPP_METHOD_NAME(26),
		java::nio::ShortBuffer::J2CPP_METHOD_SIGNATURE(26), 
		jint >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::nio::ShortBuffer,"java/nio/ShortBuffer")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,1,"allocate","(I)Ljava/nio/ShortBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,2,"wrap","([S)Ljava/nio/ShortBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,3,"wrap","([SII)Ljava/nio/ShortBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,4,"array","()[S")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,5,"arrayOffset","()I")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,6,"asReadOnlyBuffer","()Ljava/nio/ShortBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,7,"compact","()Ljava/nio/ShortBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,8,"compareTo","(Ljava/nio/ShortBuffer;)I")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,9,"duplicate","()Ljava/nio/ShortBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,10,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,11,"get","()S")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,12,"get","([S)Ljava/nio/ShortBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,13,"get","([SII)Ljava/nio/ShortBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,14,"get","(I)S")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,15,"hasArray","()Z")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,16,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,17,"isDirect","()Z")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,18,"order","()Ljava/nio/ByteOrder;")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,19,"put","(S)Ljava/nio/ShortBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,20,"put","([S)Ljava/nio/ShortBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,21,"put","([SII)Ljava/nio/ShortBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,22,"put","(Ljava/nio/ShortBuffer;)Ljava/nio/ShortBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,23,"put","(IS)Ljava/nio/ShortBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,24,"slice","()Ljava/nio/ShortBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,25,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,26,"compareTo","(Ljava/lang/Object;)I")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_SHORTBUFFER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
