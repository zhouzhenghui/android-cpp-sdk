/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.text.RuleBasedCollator
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_RULEBASEDCOLLATOR_HPP_DECL
#define J2CPP_JAVA_TEXT_RULEBASEDCOLLATOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Comparator; } } }
namespace j2cpp { namespace java { namespace text { class Collator; } } }
namespace j2cpp { namespace java { namespace text { class CollationKey; } } }
namespace j2cpp { namespace java { namespace text { class CharacterIterator; } } }
namespace j2cpp { namespace java { namespace text { class CollationElementIterator; } } }


#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/text/CharacterIterator.hpp>
#include <java/text/CollationElementIterator.hpp>
#include <java/text/CollationKey.hpp>
#include <java/text/Collator.hpp>
#include <java/util/Comparator.hpp>


namespace j2cpp {

namespace java { namespace text {

	class RuleBasedCollator;
	class RuleBasedCollator
		: public object<RuleBasedCollator>
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

		explicit RuleBasedCollator(jobject jobj)
		: object<RuleBasedCollator>(jobj)
		{
		}

		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::util::Comparator>() const;
		operator local_ref<java::text::Collator>() const;


		RuleBasedCollator(local_ref< java::lang::String > const&);
		local_ref< java::text::CollationElementIterator > getCollationElementIterator(local_ref< java::text::CharacterIterator >  const&);
		local_ref< java::text::CollationElementIterator > getCollationElementIterator(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getRules();
		local_ref< java::lang::Object > clone();
		jint compare(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		local_ref< java::text::CollationKey > getCollationKey(local_ref< java::lang::String >  const&);
		jint hashCode();
		jboolean equals(local_ref< java::lang::Object >  const&);
	}; //class RuleBasedCollator

} //namespace text
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_RULEBASEDCOLLATOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_RULEBASEDCOLLATOR_HPP_IMPL
#define J2CPP_JAVA_TEXT_RULEBASEDCOLLATOR_HPP_IMPL

namespace j2cpp {



java::text::RuleBasedCollator::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

java::text::RuleBasedCollator::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::text::RuleBasedCollator::operator local_ref<java::util::Comparator>() const
{
	return local_ref<java::util::Comparator>(get_jobject());
}

java::text::RuleBasedCollator::operator local_ref<java::text::Collator>() const
{
	return local_ref<java::text::Collator>(get_jobject());
}


java::text::RuleBasedCollator::RuleBasedCollator(local_ref< java::lang::String > const &a0)
: object<java::text::RuleBasedCollator>(
	call_new_object<
		java::text::RuleBasedCollator::J2CPP_CLASS_NAME,
		java::text::RuleBasedCollator::J2CPP_METHOD_NAME(0),
		java::text::RuleBasedCollator::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


local_ref< java::text::CollationElementIterator > java::text::RuleBasedCollator::getCollationElementIterator(local_ref< java::text::CharacterIterator > const &a0)
{
	return call_method<
		java::text::RuleBasedCollator::J2CPP_CLASS_NAME,
		java::text::RuleBasedCollator::J2CPP_METHOD_NAME(1),
		java::text::RuleBasedCollator::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::text::CollationElementIterator >
	>(get_jobject(), a0);
}

local_ref< java::text::CollationElementIterator > java::text::RuleBasedCollator::getCollationElementIterator(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::text::RuleBasedCollator::J2CPP_CLASS_NAME,
		java::text::RuleBasedCollator::J2CPP_METHOD_NAME(2),
		java::text::RuleBasedCollator::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::text::CollationElementIterator >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > java::text::RuleBasedCollator::getRules()
{
	return call_method<
		java::text::RuleBasedCollator::J2CPP_CLASS_NAME,
		java::text::RuleBasedCollator::J2CPP_METHOD_NAME(3),
		java::text::RuleBasedCollator::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::Object > java::text::RuleBasedCollator::clone()
{
	return call_method<
		java::text::RuleBasedCollator::J2CPP_CLASS_NAME,
		java::text::RuleBasedCollator::J2CPP_METHOD_NAME(4),
		java::text::RuleBasedCollator::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

jint java::text::RuleBasedCollator::compare(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		java::text::RuleBasedCollator::J2CPP_CLASS_NAME,
		java::text::RuleBasedCollator::J2CPP_METHOD_NAME(5),
		java::text::RuleBasedCollator::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject(), a0, a1);
}

local_ref< java::text::CollationKey > java::text::RuleBasedCollator::getCollationKey(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::text::RuleBasedCollator::J2CPP_CLASS_NAME,
		java::text::RuleBasedCollator::J2CPP_METHOD_NAME(6),
		java::text::RuleBasedCollator::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::text::CollationKey >
	>(get_jobject(), a0);
}

jint java::text::RuleBasedCollator::hashCode()
{
	return call_method<
		java::text::RuleBasedCollator::J2CPP_CLASS_NAME,
		java::text::RuleBasedCollator::J2CPP_METHOD_NAME(7),
		java::text::RuleBasedCollator::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(get_jobject());
}

jboolean java::text::RuleBasedCollator::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::text::RuleBasedCollator::J2CPP_CLASS_NAME,
		java::text::RuleBasedCollator::J2CPP_METHOD_NAME(8),
		java::text::RuleBasedCollator::J2CPP_METHOD_SIGNATURE(8), 
		jboolean
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::text::RuleBasedCollator,"java/text/RuleBasedCollator")
J2CPP_DEFINE_METHOD(java::text::RuleBasedCollator,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::text::RuleBasedCollator,1,"getCollationElementIterator","(Ljava/text/CharacterIterator;)Ljava/text/CollationElementIterator;")
J2CPP_DEFINE_METHOD(java::text::RuleBasedCollator,2,"getCollationElementIterator","(Ljava/lang/String;)Ljava/text/CollationElementIterator;")
J2CPP_DEFINE_METHOD(java::text::RuleBasedCollator,3,"getRules","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::text::RuleBasedCollator,4,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::text::RuleBasedCollator,5,"compare","(Ljava/lang/String;Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(java::text::RuleBasedCollator,6,"getCollationKey","(Ljava/lang/String;)Ljava/text/CollationKey;")
J2CPP_DEFINE_METHOD(java::text::RuleBasedCollator,7,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::text::RuleBasedCollator,8,"equals","(Ljava/lang/Object;)Z")

} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_RULEBASEDCOLLATOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
