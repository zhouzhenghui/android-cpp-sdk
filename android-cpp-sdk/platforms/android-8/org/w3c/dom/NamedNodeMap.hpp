/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.w3c.dom.NamedNodeMap
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_NAMEDNODEMAP_HPP_DECL
#define J2CPP_ORG_W3C_DOM_NAMEDNODEMAP_HPP_DECL


namespace j2cpp { namespace org { namespace w3c { namespace dom { class Node; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/w3c/dom/Node.hpp>


namespace j2cpp {

namespace org { namespace w3c { namespace dom {

	class NamedNodeMap;
	class NamedNodeMap
		: public object<NamedNodeMap>
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

		explicit NamedNodeMap(jobject jobj)
		: object<NamedNodeMap>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< org::w3c::dom::Node > getNamedItem(local_ref< java::lang::String >  const&);
		local_ref< org::w3c::dom::Node > setNamedItem(local_ref< org::w3c::dom::Node >  const&);
		local_ref< org::w3c::dom::Node > removeNamedItem(local_ref< java::lang::String >  const&);
		local_ref< org::w3c::dom::Node > item(jint);
		jint getLength();
		local_ref< org::w3c::dom::Node > getNamedItemNS(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		local_ref< org::w3c::dom::Node > setNamedItemNS(local_ref< org::w3c::dom::Node >  const&);
		local_ref< org::w3c::dom::Node > removeNamedItemNS(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
	}; //class NamedNodeMap

} //namespace dom
} //namespace w3c
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_NAMEDNODEMAP_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_NAMEDNODEMAP_HPP_IMPL
#define J2CPP_ORG_W3C_DOM_NAMEDNODEMAP_HPP_IMPL

namespace j2cpp {



org::w3c::dom::NamedNodeMap::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< org::w3c::dom::Node > org::w3c::dom::NamedNodeMap::getNamedItem(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::w3c::dom::NamedNodeMap::J2CPP_CLASS_NAME,
		org::w3c::dom::NamedNodeMap::J2CPP_METHOD_NAME(0),
		org::w3c::dom::NamedNodeMap::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< org::w3c::dom::Node > >
	(get_jobject(), a0);
}

local_ref< org::w3c::dom::Node > org::w3c::dom::NamedNodeMap::setNamedItem(local_ref< org::w3c::dom::Node > const &a0)
{
	return call_method<
		org::w3c::dom::NamedNodeMap::J2CPP_CLASS_NAME,
		org::w3c::dom::NamedNodeMap::J2CPP_METHOD_NAME(1),
		org::w3c::dom::NamedNodeMap::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< org::w3c::dom::Node > >
	(get_jobject(), a0);
}

local_ref< org::w3c::dom::Node > org::w3c::dom::NamedNodeMap::removeNamedItem(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::w3c::dom::NamedNodeMap::J2CPP_CLASS_NAME,
		org::w3c::dom::NamedNodeMap::J2CPP_METHOD_NAME(2),
		org::w3c::dom::NamedNodeMap::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< org::w3c::dom::Node > >
	(get_jobject(), a0);
}

local_ref< org::w3c::dom::Node > org::w3c::dom::NamedNodeMap::item(jint a0)
{
	return call_method<
		org::w3c::dom::NamedNodeMap::J2CPP_CLASS_NAME,
		org::w3c::dom::NamedNodeMap::J2CPP_METHOD_NAME(3),
		org::w3c::dom::NamedNodeMap::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< org::w3c::dom::Node > >
	(get_jobject(), a0);
}

jint org::w3c::dom::NamedNodeMap::getLength()
{
	return call_method<
		org::w3c::dom::NamedNodeMap::J2CPP_CLASS_NAME,
		org::w3c::dom::NamedNodeMap::J2CPP_METHOD_NAME(4),
		org::w3c::dom::NamedNodeMap::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject());
}

local_ref< org::w3c::dom::Node > org::w3c::dom::NamedNodeMap::getNamedItemNS(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::w3c::dom::NamedNodeMap::J2CPP_CLASS_NAME,
		org::w3c::dom::NamedNodeMap::J2CPP_METHOD_NAME(5),
		org::w3c::dom::NamedNodeMap::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< org::w3c::dom::Node > >
	(get_jobject(), a0, a1);
}

local_ref< org::w3c::dom::Node > org::w3c::dom::NamedNodeMap::setNamedItemNS(local_ref< org::w3c::dom::Node > const &a0)
{
	return call_method<
		org::w3c::dom::NamedNodeMap::J2CPP_CLASS_NAME,
		org::w3c::dom::NamedNodeMap::J2CPP_METHOD_NAME(6),
		org::w3c::dom::NamedNodeMap::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< org::w3c::dom::Node > >
	(get_jobject(), a0);
}

local_ref< org::w3c::dom::Node > org::w3c::dom::NamedNodeMap::removeNamedItemNS(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::w3c::dom::NamedNodeMap::J2CPP_CLASS_NAME,
		org::w3c::dom::NamedNodeMap::J2CPP_METHOD_NAME(7),
		org::w3c::dom::NamedNodeMap::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< org::w3c::dom::Node > >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(org::w3c::dom::NamedNodeMap,"org/w3c/dom/NamedNodeMap")
J2CPP_DEFINE_METHOD(org::w3c::dom::NamedNodeMap,0,"getNamedItem","(Ljava/lang/String;)Lorg/w3c/dom/Node;")
J2CPP_DEFINE_METHOD(org::w3c::dom::NamedNodeMap,1,"setNamedItem","(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;")
J2CPP_DEFINE_METHOD(org::w3c::dom::NamedNodeMap,2,"removeNamedItem","(Ljava/lang/String;)Lorg/w3c/dom/Node;")
J2CPP_DEFINE_METHOD(org::w3c::dom::NamedNodeMap,3,"item","(I)Lorg/w3c/dom/Node;")
J2CPP_DEFINE_METHOD(org::w3c::dom::NamedNodeMap,4,"getLength","()I")
J2CPP_DEFINE_METHOD(org::w3c::dom::NamedNodeMap,5,"getNamedItemNS","(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Node;")
J2CPP_DEFINE_METHOD(org::w3c::dom::NamedNodeMap,6,"setNamedItemNS","(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;")
J2CPP_DEFINE_METHOD(org::w3c::dom::NamedNodeMap,7,"removeNamedItemNS","(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Node;")

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_NAMEDNODEMAP_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
