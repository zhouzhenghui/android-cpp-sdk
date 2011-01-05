/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.text.Bidi
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_BIDI_HPP_DECL
#define J2CPP_JAVA_TEXT_BIDI_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace text { class AttributedCharacterIterator; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/text/AttributedCharacterIterator.hpp>


namespace j2cpp {

namespace java { namespace text {

	class Bidi;
	class Bidi
		: public object<Bidi>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		explicit Bidi(jobject jobj)
		: object<Bidi>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		Bidi(local_ref< java::text::AttributedCharacterIterator > const&);
		Bidi(local_ref< array<jchar,1> > const&, jint, local_ref< array<jbyte,1> > const&, jint, jint, jint);
		Bidi(local_ref< java::lang::String > const&, jint);
		jboolean baseIsLeftToRight();
		local_ref< java::text::Bidi > createLineBidi(jint, jint);
		jint getBaseLevel();
		jint getLength();
		jint getLevelAt(jint);
		jint getRunCount();
		jint getRunLevel(jint);
		jint getRunLimit(jint);
		jint getRunStart(jint);
		jboolean isLeftToRight();
		jboolean isMixed();
		jboolean isRightToLeft();
		static void reorderVisually(local_ref< array<jbyte,1> >  const&, jint, local_ref< array< local_ref< java::lang::Object >, 1> >  const&, jint, jint);
		static jboolean requiresBidi(local_ref< array<jchar,1> >  const&, jint, jint);
		local_ref< java::lang::String > toString();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > DIRECTION_DEFAULT_LEFT_TO_RIGHT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > DIRECTION_DEFAULT_RIGHT_TO_LEFT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > DIRECTION_LEFT_TO_RIGHT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > DIRECTION_RIGHT_TO_LEFT;
	}; //class Bidi

} //namespace text
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_BIDI_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_BIDI_HPP_IMPL
#define J2CPP_JAVA_TEXT_BIDI_HPP_IMPL

namespace j2cpp {



java::text::Bidi::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::text::Bidi::Bidi(local_ref< java::text::AttributedCharacterIterator > const &a0)
: object<java::text::Bidi>(
	call_new_object<
		java::text::Bidi::J2CPP_CLASS_NAME,
		java::text::Bidi::J2CPP_METHOD_NAME(0),
		java::text::Bidi::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



java::text::Bidi::Bidi(local_ref< array<jchar,1> > const &a0, jint a1, local_ref< array<jbyte,1> > const &a2, jint a3, jint a4, jint a5)
: object<java::text::Bidi>(
	call_new_object<
		java::text::Bidi::J2CPP_CLASS_NAME,
		java::text::Bidi::J2CPP_METHOD_NAME(1),
		java::text::Bidi::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1, a2, a3, a4, a5)
)
{
}



java::text::Bidi::Bidi(local_ref< java::lang::String > const &a0, jint a1)
: object<java::text::Bidi>(
	call_new_object<
		java::text::Bidi::J2CPP_CLASS_NAME,
		java::text::Bidi::J2CPP_METHOD_NAME(2),
		java::text::Bidi::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1)
)
{
}


jboolean java::text::Bidi::baseIsLeftToRight()
{
	return call_method<
		java::text::Bidi::J2CPP_CLASS_NAME,
		java::text::Bidi::J2CPP_METHOD_NAME(3),
		java::text::Bidi::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject());
}

local_ref< java::text::Bidi > java::text::Bidi::createLineBidi(jint a0, jint a1)
{
	return call_method<
		java::text::Bidi::J2CPP_CLASS_NAME,
		java::text::Bidi::J2CPP_METHOD_NAME(4),
		java::text::Bidi::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::text::Bidi >
	>(get_jobject(), a0, a1);
}

jint java::text::Bidi::getBaseLevel()
{
	return call_method<
		java::text::Bidi::J2CPP_CLASS_NAME,
		java::text::Bidi::J2CPP_METHOD_NAME(5),
		java::text::Bidi::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject());
}

jint java::text::Bidi::getLength()
{
	return call_method<
		java::text::Bidi::J2CPP_CLASS_NAME,
		java::text::Bidi::J2CPP_METHOD_NAME(6),
		java::text::Bidi::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject());
}

jint java::text::Bidi::getLevelAt(jint a0)
{
	return call_method<
		java::text::Bidi::J2CPP_CLASS_NAME,
		java::text::Bidi::J2CPP_METHOD_NAME(7),
		java::text::Bidi::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(get_jobject(), a0);
}

jint java::text::Bidi::getRunCount()
{
	return call_method<
		java::text::Bidi::J2CPP_CLASS_NAME,
		java::text::Bidi::J2CPP_METHOD_NAME(8),
		java::text::Bidi::J2CPP_METHOD_SIGNATURE(8), 
		jint
	>(get_jobject());
}

jint java::text::Bidi::getRunLevel(jint a0)
{
	return call_method<
		java::text::Bidi::J2CPP_CLASS_NAME,
		java::text::Bidi::J2CPP_METHOD_NAME(9),
		java::text::Bidi::J2CPP_METHOD_SIGNATURE(9), 
		jint
	>(get_jobject(), a0);
}

jint java::text::Bidi::getRunLimit(jint a0)
{
	return call_method<
		java::text::Bidi::J2CPP_CLASS_NAME,
		java::text::Bidi::J2CPP_METHOD_NAME(10),
		java::text::Bidi::J2CPP_METHOD_SIGNATURE(10), 
		jint
	>(get_jobject(), a0);
}

jint java::text::Bidi::getRunStart(jint a0)
{
	return call_method<
		java::text::Bidi::J2CPP_CLASS_NAME,
		java::text::Bidi::J2CPP_METHOD_NAME(11),
		java::text::Bidi::J2CPP_METHOD_SIGNATURE(11), 
		jint
	>(get_jobject(), a0);
}

jboolean java::text::Bidi::isLeftToRight()
{
	return call_method<
		java::text::Bidi::J2CPP_CLASS_NAME,
		java::text::Bidi::J2CPP_METHOD_NAME(12),
		java::text::Bidi::J2CPP_METHOD_SIGNATURE(12), 
		jboolean
	>(get_jobject());
}

jboolean java::text::Bidi::isMixed()
{
	return call_method<
		java::text::Bidi::J2CPP_CLASS_NAME,
		java::text::Bidi::J2CPP_METHOD_NAME(13),
		java::text::Bidi::J2CPP_METHOD_SIGNATURE(13), 
		jboolean
	>(get_jobject());
}

jboolean java::text::Bidi::isRightToLeft()
{
	return call_method<
		java::text::Bidi::J2CPP_CLASS_NAME,
		java::text::Bidi::J2CPP_METHOD_NAME(14),
		java::text::Bidi::J2CPP_METHOD_SIGNATURE(14), 
		jboolean
	>(get_jobject());
}

void java::text::Bidi::reorderVisually(local_ref< array<jbyte,1> > const &a0, jint a1, local_ref< array< local_ref< java::lang::Object >, 1> > const &a2, jint a3, jint a4)
{
	return call_static_method<
		java::text::Bidi::J2CPP_CLASS_NAME,
		java::text::Bidi::J2CPP_METHOD_NAME(15),
		java::text::Bidi::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(a0, a1, a2, a3, a4);
}

jboolean java::text::Bidi::requiresBidi(local_ref< array<jchar,1> > const &a0, jint a1, jint a2)
{
	return call_static_method<
		java::text::Bidi::J2CPP_CLASS_NAME,
		java::text::Bidi::J2CPP_METHOD_NAME(16),
		java::text::Bidi::J2CPP_METHOD_SIGNATURE(16), 
		jboolean
	>(a0, a1, a2);
}

local_ref< java::lang::String > java::text::Bidi::toString()
{
	return call_method<
		java::text::Bidi::J2CPP_CLASS_NAME,
		java::text::Bidi::J2CPP_METHOD_NAME(17),
		java::text::Bidi::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< java::lang::String >
	>(get_jobject());
}


static_field<
	java::text::Bidi::J2CPP_CLASS_NAME,
	java::text::Bidi::J2CPP_FIELD_NAME(0),
	java::text::Bidi::J2CPP_FIELD_SIGNATURE(0),
	jint
> java::text::Bidi::DIRECTION_DEFAULT_LEFT_TO_RIGHT;

static_field<
	java::text::Bidi::J2CPP_CLASS_NAME,
	java::text::Bidi::J2CPP_FIELD_NAME(1),
	java::text::Bidi::J2CPP_FIELD_SIGNATURE(1),
	jint
> java::text::Bidi::DIRECTION_DEFAULT_RIGHT_TO_LEFT;

static_field<
	java::text::Bidi::J2CPP_CLASS_NAME,
	java::text::Bidi::J2CPP_FIELD_NAME(2),
	java::text::Bidi::J2CPP_FIELD_SIGNATURE(2),
	jint
> java::text::Bidi::DIRECTION_LEFT_TO_RIGHT;

static_field<
	java::text::Bidi::J2CPP_CLASS_NAME,
	java::text::Bidi::J2CPP_FIELD_NAME(3),
	java::text::Bidi::J2CPP_FIELD_SIGNATURE(3),
	jint
> java::text::Bidi::DIRECTION_RIGHT_TO_LEFT;


J2CPP_DEFINE_CLASS(java::text::Bidi,"java/text/Bidi")
J2CPP_DEFINE_METHOD(java::text::Bidi,0,"<init>","(Ljava/text/AttributedCharacterIterator;)V")
J2CPP_DEFINE_METHOD(java::text::Bidi,1,"<init>","([CI[BIII)V")
J2CPP_DEFINE_METHOD(java::text::Bidi,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(java::text::Bidi,3,"baseIsLeftToRight","()Z")
J2CPP_DEFINE_METHOD(java::text::Bidi,4,"createLineBidi","(II)Ljava/text/Bidi;")
J2CPP_DEFINE_METHOD(java::text::Bidi,5,"getBaseLevel","()I")
J2CPP_DEFINE_METHOD(java::text::Bidi,6,"getLength","()I")
J2CPP_DEFINE_METHOD(java::text::Bidi,7,"getLevelAt","(I)I")
J2CPP_DEFINE_METHOD(java::text::Bidi,8,"getRunCount","()I")
J2CPP_DEFINE_METHOD(java::text::Bidi,9,"getRunLevel","(I)I")
J2CPP_DEFINE_METHOD(java::text::Bidi,10,"getRunLimit","(I)I")
J2CPP_DEFINE_METHOD(java::text::Bidi,11,"getRunStart","(I)I")
J2CPP_DEFINE_METHOD(java::text::Bidi,12,"isLeftToRight","()Z")
J2CPP_DEFINE_METHOD(java::text::Bidi,13,"isMixed","()Z")
J2CPP_DEFINE_METHOD(java::text::Bidi,14,"isRightToLeft","()Z")
J2CPP_DEFINE_METHOD(java::text::Bidi,15,"reorderVisually","([BI[java.lang.ObjectII)V")
J2CPP_DEFINE_METHOD(java::text::Bidi,16,"requiresBidi","([CII)Z")
J2CPP_DEFINE_METHOD(java::text::Bidi,17,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_FIELD(java::text::Bidi,0,"DIRECTION_DEFAULT_LEFT_TO_RIGHT","I")
J2CPP_DEFINE_FIELD(java::text::Bidi,1,"DIRECTION_DEFAULT_RIGHT_TO_LEFT","I")
J2CPP_DEFINE_FIELD(java::text::Bidi,2,"DIRECTION_LEFT_TO_RIGHT","I")
J2CPP_DEFINE_FIELD(java::text::Bidi,3,"DIRECTION_RIGHT_TO_LEFT","I")

} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_BIDI_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
