/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.accounts.AbstractAccountAuthenticator
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_ACCOUNTS_ABSTRACTACCOUNTAUTHENTICATOR_HPP_DECL
#define J2CPP_ANDROID_ACCOUNTS_ABSTRACTACCOUNTAUTHENTICATOR_HPP_DECL


namespace j2cpp { namespace android { namespace os { class IBinder; } } }
namespace j2cpp { namespace android { namespace os { class Bundle; } } }
namespace j2cpp { namespace android { namespace accounts { class AccountAuthenticatorResponse; } } }
namespace j2cpp { namespace android { namespace accounts { class Account; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/accounts/Account.hpp>
#include <android/accounts/AccountAuthenticatorResponse.hpp>
#include <android/content/Context.hpp>
#include <android/os/Bundle.hpp>
#include <android/os/IBinder.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace accounts {

	class AbstractAccountAuthenticator;
	class AbstractAccountAuthenticator
		: public object<AbstractAccountAuthenticator>
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

		explicit AbstractAccountAuthenticator(jobject jobj)
		: object<AbstractAccountAuthenticator>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		AbstractAccountAuthenticator(local_ref< android::content::Context > const&);
		local_ref< android::os::IBinder > getIBinder();
		local_ref< android::os::Bundle > editProperties(local_ref< android::accounts::AccountAuthenticatorResponse >  const&, local_ref< java::lang::String >  const&);
		local_ref< android::os::Bundle > addAccount(local_ref< android::accounts::AccountAuthenticatorResponse >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&, local_ref< android::os::Bundle >  const&);
		local_ref< android::os::Bundle > confirmCredentials(local_ref< android::accounts::AccountAuthenticatorResponse >  const&, local_ref< android::accounts::Account >  const&, local_ref< android::os::Bundle >  const&);
		local_ref< android::os::Bundle > getAuthToken(local_ref< android::accounts::AccountAuthenticatorResponse >  const&, local_ref< android::accounts::Account >  const&, local_ref< java::lang::String >  const&, local_ref< android::os::Bundle >  const&);
		local_ref< java::lang::String > getAuthTokenLabel(local_ref< java::lang::String >  const&);
		local_ref< android::os::Bundle > updateCredentials(local_ref< android::accounts::AccountAuthenticatorResponse >  const&, local_ref< android::accounts::Account >  const&, local_ref< java::lang::String >  const&, local_ref< android::os::Bundle >  const&);
		local_ref< android::os::Bundle > hasFeatures(local_ref< android::accounts::AccountAuthenticatorResponse >  const&, local_ref< android::accounts::Account >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&);
		local_ref< android::os::Bundle > getAccountRemovalAllowed(local_ref< android::accounts::AccountAuthenticatorResponse >  const&, local_ref< android::accounts::Account >  const&);
	}; //class AbstractAccountAuthenticator

} //namespace accounts
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_ACCOUNTS_ABSTRACTACCOUNTAUTHENTICATOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_ACCOUNTS_ABSTRACTACCOUNTAUTHENTICATOR_HPP_IMPL
#define J2CPP_ANDROID_ACCOUNTS_ABSTRACTACCOUNTAUTHENTICATOR_HPP_IMPL

namespace j2cpp {



android::accounts::AbstractAccountAuthenticator::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::accounts::AbstractAccountAuthenticator::AbstractAccountAuthenticator(local_ref< android::content::Context > const &a0)
: object<android::accounts::AbstractAccountAuthenticator>(
	call_new_object<
		android::accounts::AbstractAccountAuthenticator::J2CPP_CLASS_NAME,
		android::accounts::AbstractAccountAuthenticator::J2CPP_METHOD_NAME(0),
		android::accounts::AbstractAccountAuthenticator::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


local_ref< android::os::IBinder > android::accounts::AbstractAccountAuthenticator::getIBinder()
{
	return call_method<
		android::accounts::AbstractAccountAuthenticator::J2CPP_CLASS_NAME,
		android::accounts::AbstractAccountAuthenticator::J2CPP_METHOD_NAME(1),
		android::accounts::AbstractAccountAuthenticator::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::os::IBinder >
	>(get_jobject());
}

local_ref< android::os::Bundle > android::accounts::AbstractAccountAuthenticator::editProperties(local_ref< android::accounts::AccountAuthenticatorResponse > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::accounts::AbstractAccountAuthenticator::J2CPP_CLASS_NAME,
		android::accounts::AbstractAccountAuthenticator::J2CPP_METHOD_NAME(2),
		android::accounts::AbstractAccountAuthenticator::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::os::Bundle >
	>(get_jobject(), a0, a1);
}

local_ref< android::os::Bundle > android::accounts::AbstractAccountAuthenticator::addAccount(local_ref< android::accounts::AccountAuthenticatorResponse > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2, local_ref< array< local_ref< java::lang::String >, 1> > const &a3, local_ref< android::os::Bundle > const &a4)
{
	return call_method<
		android::accounts::AbstractAccountAuthenticator::J2CPP_CLASS_NAME,
		android::accounts::AbstractAccountAuthenticator::J2CPP_METHOD_NAME(3),
		android::accounts::AbstractAccountAuthenticator::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::os::Bundle >
	>(get_jobject(), a0, a1, a2, a3, a4);
}

local_ref< android::os::Bundle > android::accounts::AbstractAccountAuthenticator::confirmCredentials(local_ref< android::accounts::AccountAuthenticatorResponse > const &a0, local_ref< android::accounts::Account > const &a1, local_ref< android::os::Bundle > const &a2)
{
	return call_method<
		android::accounts::AbstractAccountAuthenticator::J2CPP_CLASS_NAME,
		android::accounts::AbstractAccountAuthenticator::J2CPP_METHOD_NAME(4),
		android::accounts::AbstractAccountAuthenticator::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< android::os::Bundle >
	>(get_jobject(), a0, a1, a2);
}

local_ref< android::os::Bundle > android::accounts::AbstractAccountAuthenticator::getAuthToken(local_ref< android::accounts::AccountAuthenticatorResponse > const &a0, local_ref< android::accounts::Account > const &a1, local_ref< java::lang::String > const &a2, local_ref< android::os::Bundle > const &a3)
{
	return call_method<
		android::accounts::AbstractAccountAuthenticator::J2CPP_CLASS_NAME,
		android::accounts::AbstractAccountAuthenticator::J2CPP_METHOD_NAME(5),
		android::accounts::AbstractAccountAuthenticator::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< android::os::Bundle >
	>(get_jobject(), a0, a1, a2, a3);
}

local_ref< java::lang::String > android::accounts::AbstractAccountAuthenticator::getAuthTokenLabel(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::accounts::AbstractAccountAuthenticator::J2CPP_CLASS_NAME,
		android::accounts::AbstractAccountAuthenticator::J2CPP_METHOD_NAME(6),
		android::accounts::AbstractAccountAuthenticator::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< android::os::Bundle > android::accounts::AbstractAccountAuthenticator::updateCredentials(local_ref< android::accounts::AccountAuthenticatorResponse > const &a0, local_ref< android::accounts::Account > const &a1, local_ref< java::lang::String > const &a2, local_ref< android::os::Bundle > const &a3)
{
	return call_method<
		android::accounts::AbstractAccountAuthenticator::J2CPP_CLASS_NAME,
		android::accounts::AbstractAccountAuthenticator::J2CPP_METHOD_NAME(7),
		android::accounts::AbstractAccountAuthenticator::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< android::os::Bundle >
	>(get_jobject(), a0, a1, a2, a3);
}

local_ref< android::os::Bundle > android::accounts::AbstractAccountAuthenticator::hasFeatures(local_ref< android::accounts::AccountAuthenticatorResponse > const &a0, local_ref< android::accounts::Account > const &a1, local_ref< array< local_ref< java::lang::String >, 1> > const &a2)
{
	return call_method<
		android::accounts::AbstractAccountAuthenticator::J2CPP_CLASS_NAME,
		android::accounts::AbstractAccountAuthenticator::J2CPP_METHOD_NAME(8),
		android::accounts::AbstractAccountAuthenticator::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< android::os::Bundle >
	>(get_jobject(), a0, a1, a2);
}

local_ref< android::os::Bundle > android::accounts::AbstractAccountAuthenticator::getAccountRemovalAllowed(local_ref< android::accounts::AccountAuthenticatorResponse > const &a0, local_ref< android::accounts::Account > const &a1)
{
	return call_method<
		android::accounts::AbstractAccountAuthenticator::J2CPP_CLASS_NAME,
		android::accounts::AbstractAccountAuthenticator::J2CPP_METHOD_NAME(9),
		android::accounts::AbstractAccountAuthenticator::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< android::os::Bundle >
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(android::accounts::AbstractAccountAuthenticator,"android/accounts/AbstractAccountAuthenticator")
J2CPP_DEFINE_METHOD(android::accounts::AbstractAccountAuthenticator,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::accounts::AbstractAccountAuthenticator,1,"getIBinder","()Landroid/os/IBinder;")
J2CPP_DEFINE_METHOD(android::accounts::AbstractAccountAuthenticator,2,"editProperties","(Landroid/accounts/AccountAuthenticatorResponse;Ljava/lang/String;)Landroid/os/Bundle;")
J2CPP_DEFINE_METHOD(android::accounts::AbstractAccountAuthenticator,3,"addAccount","(Landroid/accounts/AccountAuthenticatorResponse;Ljava/lang/String;Ljava/lang/String;[java.lang.StringLandroid/os/Bundle;)Landroid/os/Bundle;")
J2CPP_DEFINE_METHOD(android::accounts::AbstractAccountAuthenticator,4,"confirmCredentials","(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;Landroid/os/Bundle;)Landroid/os/Bundle;")
J2CPP_DEFINE_METHOD(android::accounts::AbstractAccountAuthenticator,5,"getAuthToken","(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;")
J2CPP_DEFINE_METHOD(android::accounts::AbstractAccountAuthenticator,6,"getAuthTokenLabel","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::accounts::AbstractAccountAuthenticator,7,"updateCredentials","(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;")
J2CPP_DEFINE_METHOD(android::accounts::AbstractAccountAuthenticator,8,"hasFeatures","(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;[java.lang.String)Landroid/os/Bundle;")
J2CPP_DEFINE_METHOD(android::accounts::AbstractAccountAuthenticator,9,"getAccountRemovalAllowed","(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;)Landroid/os/Bundle;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_ACCOUNTS_ABSTRACTACCOUNTAUTHENTICATOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
