/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.net.LocalSocketAddress
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_LOCALSOCKETADDRESS_HPP_DECL
#define J2CPP_ANDROID_NET_LOCALSOCKETADDRESS_HPP_DECL


namespace j2cpp { namespace android { namespace net { namespace LocalSocketAddress_ { class Namespace; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Enum; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Comparable; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <android/net/LocalSocketAddress.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace net {

	class LocalSocketAddress;
	namespace LocalSocketAddress_ {

		class Namespace;
		class Namespace
			: public object<Namespace>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)

			explicit Namespace(jobject jobj)
			: object<Namespace>(jobj)
			{
			}

			operator local_ref<java::lang::Enum>() const;
			operator local_ref<java::lang::Object>() const;
			operator local_ref<java::lang::Comparable>() const;
			operator local_ref<java::io::Serializable>() const;


			static local_ref< array< local_ref< android::net::LocalSocketAddress_::Namespace >, 1> > values();
			static local_ref< android::net::LocalSocketAddress_::Namespace > valueOf(local_ref< java::lang::String >  const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::net::LocalSocketAddress_::Namespace > > ABSTRACT;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::net::LocalSocketAddress_::Namespace > > FILESYSTEM;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< android::net::LocalSocketAddress_::Namespace > > RESERVED;
		}; //class Namespace

	} //namespace LocalSocketAddress_

	class LocalSocketAddress
		: public object<LocalSocketAddress>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		typedef LocalSocketAddress_::Namespace Namespace;

		explicit LocalSocketAddress(jobject jobj)
		: object<LocalSocketAddress>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		LocalSocketAddress(local_ref< java::lang::String > const&, local_ref< android::net::LocalSocketAddress_::Namespace > const&);
		LocalSocketAddress(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getName();
		local_ref< android::net::LocalSocketAddress_::Namespace > getNamespace();
	}; //class LocalSocketAddress

} //namespace net
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_LOCALSOCKETADDRESS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_LOCALSOCKETADDRESS_HPP_IMPL
#define J2CPP_ANDROID_NET_LOCALSOCKETADDRESS_HPP_IMPL

namespace j2cpp {




android::net::LocalSocketAddress_::Namespace::operator local_ref<java::lang::Enum>() const
{
	return local_ref<java::lang::Enum>(get_jobject());
}

android::net::LocalSocketAddress_::Namespace::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::net::LocalSocketAddress_::Namespace::operator local_ref<java::lang::Comparable>() const
{
	return local_ref<java::lang::Comparable>(get_jobject());
}

android::net::LocalSocketAddress_::Namespace::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

local_ref< array< local_ref< android::net::LocalSocketAddress_::Namespace >, 1> > android::net::LocalSocketAddress_::Namespace::values()
{
	return call_static_method<
		android::net::LocalSocketAddress_::Namespace::J2CPP_CLASS_NAME,
		android::net::LocalSocketAddress_::Namespace::J2CPP_METHOD_NAME(0),
		android::net::LocalSocketAddress_::Namespace::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< array< local_ref< android::net::LocalSocketAddress_::Namespace >, 1> >
	>();
}

local_ref< android::net::LocalSocketAddress_::Namespace > android::net::LocalSocketAddress_::Namespace::valueOf(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::net::LocalSocketAddress_::Namespace::J2CPP_CLASS_NAME,
		android::net::LocalSocketAddress_::Namespace::J2CPP_METHOD_NAME(1),
		android::net::LocalSocketAddress_::Namespace::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::net::LocalSocketAddress_::Namespace >
	>(a0);
}




static_field<
	android::net::LocalSocketAddress_::Namespace::J2CPP_CLASS_NAME,
	android::net::LocalSocketAddress_::Namespace::J2CPP_FIELD_NAME(0),
	android::net::LocalSocketAddress_::Namespace::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::net::LocalSocketAddress_::Namespace >
> android::net::LocalSocketAddress_::Namespace::ABSTRACT;

static_field<
	android::net::LocalSocketAddress_::Namespace::J2CPP_CLASS_NAME,
	android::net::LocalSocketAddress_::Namespace::J2CPP_FIELD_NAME(1),
	android::net::LocalSocketAddress_::Namespace::J2CPP_FIELD_SIGNATURE(1),
	local_ref< android::net::LocalSocketAddress_::Namespace >
> android::net::LocalSocketAddress_::Namespace::FILESYSTEM;

static_field<
	android::net::LocalSocketAddress_::Namespace::J2CPP_CLASS_NAME,
	android::net::LocalSocketAddress_::Namespace::J2CPP_FIELD_NAME(2),
	android::net::LocalSocketAddress_::Namespace::J2CPP_FIELD_SIGNATURE(2),
	local_ref< android::net::LocalSocketAddress_::Namespace >
> android::net::LocalSocketAddress_::Namespace::RESERVED;


J2CPP_DEFINE_CLASS(android::net::LocalSocketAddress_::Namespace,"android/net/LocalSocketAddress$Namespace")
J2CPP_DEFINE_METHOD(android::net::LocalSocketAddress_::Namespace,0,"values","()[android.net.LocalSocketAddress.Namespace")
J2CPP_DEFINE_METHOD(android::net::LocalSocketAddress_::Namespace,1,"valueOf","(Ljava/lang/String;)Landroid/net/LocalSocketAddress$Namespace;")
J2CPP_DEFINE_METHOD(android::net::LocalSocketAddress_::Namespace,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::net::LocalSocketAddress_::Namespace,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::net::LocalSocketAddress_::Namespace,0,"ABSTRACT","Landroid/net/LocalSocketAddress$Namespace;")
J2CPP_DEFINE_FIELD(android::net::LocalSocketAddress_::Namespace,1,"FILESYSTEM","Landroid/net/LocalSocketAddress$Namespace;")
J2CPP_DEFINE_FIELD(android::net::LocalSocketAddress_::Namespace,2,"RESERVED","Landroid/net/LocalSocketAddress$Namespace;")
J2CPP_DEFINE_FIELD(android::net::LocalSocketAddress_::Namespace,3,"$VALUES","[android.net.LocalSocketAddress.Namespace")



android::net::LocalSocketAddress::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::net::LocalSocketAddress::LocalSocketAddress(local_ref< java::lang::String > const &a0, local_ref< android::net::LocalSocketAddress_::Namespace > const &a1)
: object<android::net::LocalSocketAddress>(
	call_new_object<
		android::net::LocalSocketAddress::J2CPP_CLASS_NAME,
		android::net::LocalSocketAddress::J2CPP_METHOD_NAME(0),
		android::net::LocalSocketAddress::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}



android::net::LocalSocketAddress::LocalSocketAddress(local_ref< java::lang::String > const &a0)
: object<android::net::LocalSocketAddress>(
	call_new_object<
		android::net::LocalSocketAddress::J2CPP_CLASS_NAME,
		android::net::LocalSocketAddress::J2CPP_METHOD_NAME(1),
		android::net::LocalSocketAddress::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


local_ref< java::lang::String > android::net::LocalSocketAddress::getName()
{
	return call_method<
		android::net::LocalSocketAddress::J2CPP_CLASS_NAME,
		android::net::LocalSocketAddress::J2CPP_METHOD_NAME(2),
		android::net::LocalSocketAddress::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< android::net::LocalSocketAddress_::Namespace > android::net::LocalSocketAddress::getNamespace()
{
	return call_method<
		android::net::LocalSocketAddress::J2CPP_CLASS_NAME,
		android::net::LocalSocketAddress::J2CPP_METHOD_NAME(3),
		android::net::LocalSocketAddress::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::net::LocalSocketAddress_::Namespace >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::net::LocalSocketAddress,"android/net/LocalSocketAddress")
J2CPP_DEFINE_METHOD(android::net::LocalSocketAddress,0,"<init>","(Ljava/lang/String;Landroid/net/LocalSocketAddress$Namespace;)V")
J2CPP_DEFINE_METHOD(android::net::LocalSocketAddress,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::net::LocalSocketAddress,2,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::net::LocalSocketAddress,3,"getNamespace","()Landroid/net/LocalSocketAddress$Namespace;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_LOCALSOCKETADDRESS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION