/*================================================================================
  code generated by: java2cpp
  class: android.accounts.AuthenticatorDescription
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_ACCOUNTS_AUTHENTICATORDESCRIPTION_HPP_DECL
#define J2CPP_ANDROID_ACCOUNTS_AUTHENTICATORDESCRIPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }


#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace accounts {

	class AuthenticatorDescription;
	class AuthenticatorDescription
		: public cpp_object<AuthenticatorDescription>
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

		explicit AuthenticatorDescription(jobject jobj)
		: cpp_object<AuthenticatorDescription>(jobj)
, type(jobj)
, labelId(jobj)
, iconId(jobj)
, smallIconId(jobj)
, accountPreferencesId(jobj)
, packageName(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::os::Parcelable>() const;


		AuthenticatorDescription(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, cpp_int const&, cpp_int const&, cpp_int const&, cpp_int const&);
		static local_ref< android::accounts::AuthenticatorDescription > newKey(local_ref< java::lang::String > const&);
		cpp_int describeContents();
		cpp_int hashCode();
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		local_ref< java::lang::String > toString();
		void writeToParcel(local_ref< android::os::Parcel > const&, cpp_int const&);

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > type;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > labelId;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > iconId;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > smallIconId;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_int > accountPreferencesId;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< java::lang::String > > packageName;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class AuthenticatorDescription

} //namespace accounts
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_ACCOUNTS_AUTHENTICATORDESCRIPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_ACCOUNTS_AUTHENTICATORDESCRIPTION_HPP_IMPL
#define J2CPP_ANDROID_ACCOUNTS_AUTHENTICATORDESCRIPTION_HPP_IMPL

namespace j2cpp {



android::accounts::AuthenticatorDescription::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

android::accounts::AuthenticatorDescription::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jtype());
}


android::accounts::AuthenticatorDescription::AuthenticatorDescription(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, cpp_int const &a2, cpp_int const &a3, cpp_int const &a4, cpp_int const &a5)
: cpp_object<android::accounts::AuthenticatorDescription>(
	environment::get().get_jenv()->NewObject(
		get_class<android::accounts::AuthenticatorDescription::J2CPP_CLASS_NAME>(),
		get_method_id<android::accounts::AuthenticatorDescription::J2CPP_CLASS_NAME, android::accounts::AuthenticatorDescription::J2CPP_METHOD_NAME(0), android::accounts::AuthenticatorDescription::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype()
	)
)
, type(get_jtype())
, labelId(get_jtype())
, iconId(get_jtype())
, smallIconId(get_jtype())
, accountPreferencesId(get_jtype())
, packageName(get_jtype())
{
}


local_ref< android::accounts::AuthenticatorDescription > android::accounts::AuthenticatorDescription::newKey(local_ref< java::lang::String > const &a0)
{
	return local_ref< android::accounts::AuthenticatorDescription >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::accounts::AuthenticatorDescription::describeContents()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_int android::accounts::AuthenticatorDescription::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_boolean android::accounts::AuthenticatorDescription::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::accounts::AuthenticatorDescription::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

void android::accounts::AuthenticatorDescription::writeToParcel(local_ref< android::os::Parcel > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}



static_field<
	android::accounts::AuthenticatorDescription::J2CPP_CLASS_NAME,
	android::accounts::AuthenticatorDescription::J2CPP_FIELD_NAME(6),
	android::accounts::AuthenticatorDescription::J2CPP_FIELD_SIGNATURE(6),
	local_ref< android::os::Parcelable_::Creator >
> android::accounts::AuthenticatorDescription::CREATOR;


J2CPP_DEFINE_CLASS(android::accounts::AuthenticatorDescription,"android/accounts/AuthenticatorDescription")
J2CPP_DEFINE_METHOD(android::accounts::AuthenticatorDescription,0,"<init>","(Ljava/lang/String;Ljava/lang/String;IIII)V")
J2CPP_DEFINE_METHOD(android::accounts::AuthenticatorDescription,1,"newKey","(Ljava/lang/String;)Landroid/accounts/AuthenticatorDescription;")
J2CPP_DEFINE_METHOD(android::accounts::AuthenticatorDescription,2,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::accounts::AuthenticatorDescription,3,"hashCode","()I")
J2CPP_DEFINE_METHOD(android::accounts::AuthenticatorDescription,4,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(android::accounts::AuthenticatorDescription,5,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::accounts::AuthenticatorDescription,6,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::accounts::AuthenticatorDescription,7,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::accounts::AuthenticatorDescription,0,"type","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::accounts::AuthenticatorDescription,1,"labelId","I")
J2CPP_DEFINE_FIELD(android::accounts::AuthenticatorDescription,2,"iconId","I")
J2CPP_DEFINE_FIELD(android::accounts::AuthenticatorDescription,3,"smallIconId","I")
J2CPP_DEFINE_FIELD(android::accounts::AuthenticatorDescription,4,"accountPreferencesId","I")
J2CPP_DEFINE_FIELD(android::accounts::AuthenticatorDescription,5,"packageName","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::accounts::AuthenticatorDescription,6,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_ACCOUNTS_AUTHENTICATORDESCRIPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
