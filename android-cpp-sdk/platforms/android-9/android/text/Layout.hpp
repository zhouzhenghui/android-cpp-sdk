/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.Layout
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_LAYOUT_HPP_DECL
#define J2CPP_ANDROID_TEXT_LAYOUT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Enum; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace text { namespace Layout_ { class Directions; } } } }
namespace j2cpp { namespace android { namespace text { class TextPaint; } } }
namespace j2cpp { namespace android { namespace text { namespace Layout_ { class Alignment; } } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace graphics { class Path; } } }
namespace j2cpp { namespace android { namespace graphics { class Paint; } } }
namespace j2cpp { namespace android { namespace graphics { class Rect; } } }


#include <android/graphics/Canvas.hpp>
#include <android/graphics/Paint.hpp>
#include <android/graphics/Path.hpp>
#include <android/graphics/Rect.hpp>
#include <android/text/Layout.hpp>
#include <android/text/TextPaint.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace text {

	class Layout;
	namespace Layout_ {

		class Directions;
		class Directions
			: public object<Directions>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit Directions(jobject jobj)
			: object<Directions>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


		}; //class Directions

		class Alignment;
		class Alignment
			: public object<Alignment>
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

			explicit Alignment(jobject jobj)
			: object<Alignment>(jobj)
			{
			}

			operator local_ref<java::lang::Enum>() const;


			static local_ref< array< local_ref< android::text::Layout_::Alignment >, 1> > values();
			static local_ref< android::text::Layout_::Alignment > valueOf(local_ref< java::lang::String >  const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::text::Layout_::Alignment > > ALIGN_CENTER;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::text::Layout_::Alignment > > ALIGN_NORMAL;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< android::text::Layout_::Alignment > > ALIGN_OPPOSITE;
		}; //class Alignment

	} //namespace Layout_

	class Layout
		: public object<Layout>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		typedef Layout_::Directions Directions;
		typedef Layout_::Alignment Alignment;

		explicit Layout(jobject jobj)
		: object<Layout>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static jfloat getDesiredWidth(local_ref< java::lang::CharSequence >  const&, local_ref< android::text::TextPaint >  const&);
		static jfloat getDesiredWidth(local_ref< java::lang::CharSequence >  const&, jint, jint, local_ref< android::text::TextPaint >  const&);
		void draw(local_ref< android::graphics::Canvas >  const&);
		void draw(local_ref< android::graphics::Canvas >  const&, local_ref< android::graphics::Path >  const&, local_ref< android::graphics::Paint >  const&, jint);
		local_ref< java::lang::CharSequence > getText();
		local_ref< android::text::TextPaint > getPaint();
		jint getWidth();
		jint getEllipsizedWidth();
		void increaseWidthTo(jint);
		jint getHeight();
		local_ref< android::text::Layout_::Alignment > getAlignment();
		jfloat getSpacingMultiplier();
		jfloat getSpacingAdd();
		jint getLineCount();
		jint getLineBounds(jint, local_ref< android::graphics::Rect >  const&);
		jint getLineTop(jint);
		jint getLineDescent(jint);
		jint getLineStart(jint);
		jint getParagraphDirection(jint);
		jboolean getLineContainsTab(jint);
		local_ref< android::text::Layout_::Directions > getLineDirections(jint);
		jint getTopPadding();
		jint getBottomPadding();
		jfloat getPrimaryHorizontal(jint);
		jfloat getSecondaryHorizontal(jint);
		jfloat getLineLeft(jint);
		jfloat getLineRight(jint);
		jfloat getLineMax(jint);
		jfloat getLineWidth(jint);
		jint getLineForVertical(jint);
		jint getLineForOffset(jint);
		jint getOffsetForHorizontal(jint, jfloat);
		jint getLineEnd(jint);
		jint getLineVisibleEnd(jint);
		jint getLineBottom(jint);
		jint getLineBaseline(jint);
		jint getLineAscent(jint);
		jint getOffsetToLeftOf(jint);
		jint getOffsetToRightOf(jint);
		void getCursorPath(jint, local_ref< android::graphics::Path >  const&, local_ref< java::lang::CharSequence >  const&);
		void getSelectionPath(jint, jint, local_ref< android::graphics::Path >  const&);
		local_ref< android::text::Layout_::Alignment > getParagraphAlignment(jint);
		jint getParagraphLeft(jint);
		jint getParagraphRight(jint);
		jint getEllipsisStart(jint);
		jint getEllipsisCount(jint);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > DIR_LEFT_TO_RIGHT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > DIR_RIGHT_TO_LEFT;
	}; //class Layout

} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_LAYOUT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_LAYOUT_HPP_IMPL
#define J2CPP_ANDROID_TEXT_LAYOUT_HPP_IMPL

namespace j2cpp {




android::text::Layout_::Directions::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}



J2CPP_DEFINE_CLASS(android::text::Layout_::Directions,"android/text/Layout$Directions")
J2CPP_DEFINE_METHOD(android::text::Layout_::Directions,0,"<init>","()V")


android::text::Layout_::Alignment::operator local_ref<java::lang::Enum>() const
{
	return local_ref<java::lang::Enum>(get_jobject());
}

local_ref< array< local_ref< android::text::Layout_::Alignment >, 1> > android::text::Layout_::Alignment::values()
{
	return call_static_method<
		android::text::Layout_::Alignment::J2CPP_CLASS_NAME,
		android::text::Layout_::Alignment::J2CPP_METHOD_NAME(0),
		android::text::Layout_::Alignment::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< array< local_ref< android::text::Layout_::Alignment >, 1> > >
	();
}

local_ref< android::text::Layout_::Alignment > android::text::Layout_::Alignment::valueOf(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::text::Layout_::Alignment::J2CPP_CLASS_NAME,
		android::text::Layout_::Alignment::J2CPP_METHOD_NAME(1),
		android::text::Layout_::Alignment::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::text::Layout_::Alignment > >
	(a0);
}




static_field<
	android::text::Layout_::Alignment::J2CPP_CLASS_NAME,
	android::text::Layout_::Alignment::J2CPP_FIELD_NAME(0),
	android::text::Layout_::Alignment::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::text::Layout_::Alignment >
> android::text::Layout_::Alignment::ALIGN_CENTER;

static_field<
	android::text::Layout_::Alignment::J2CPP_CLASS_NAME,
	android::text::Layout_::Alignment::J2CPP_FIELD_NAME(1),
	android::text::Layout_::Alignment::J2CPP_FIELD_SIGNATURE(1),
	local_ref< android::text::Layout_::Alignment >
> android::text::Layout_::Alignment::ALIGN_NORMAL;

static_field<
	android::text::Layout_::Alignment::J2CPP_CLASS_NAME,
	android::text::Layout_::Alignment::J2CPP_FIELD_NAME(2),
	android::text::Layout_::Alignment::J2CPP_FIELD_SIGNATURE(2),
	local_ref< android::text::Layout_::Alignment >
> android::text::Layout_::Alignment::ALIGN_OPPOSITE;


J2CPP_DEFINE_CLASS(android::text::Layout_::Alignment,"android/text/Layout$Alignment")
J2CPP_DEFINE_METHOD(android::text::Layout_::Alignment,0,"values","()[android.text.Layout.Alignment")
J2CPP_DEFINE_METHOD(android::text::Layout_::Alignment,1,"valueOf","(Ljava/lang/String;)Landroid/text/Layout$Alignment;")
J2CPP_DEFINE_METHOD(android::text::Layout_::Alignment,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::text::Layout_::Alignment,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::text::Layout_::Alignment,0,"ALIGN_CENTER","Landroid/text/Layout$Alignment;")
J2CPP_DEFINE_FIELD(android::text::Layout_::Alignment,1,"ALIGN_NORMAL","Landroid/text/Layout$Alignment;")
J2CPP_DEFINE_FIELD(android::text::Layout_::Alignment,2,"ALIGN_OPPOSITE","Landroid/text/Layout$Alignment;")
J2CPP_DEFINE_FIELD(android::text::Layout_::Alignment,3,"$VALUES","[android.text.Layout.Alignment")



android::text::Layout::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


jfloat android::text::Layout::getDesiredWidth(local_ref< java::lang::CharSequence > const &a0, local_ref< android::text::TextPaint > const &a1)
{
	return call_static_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(1),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(1), 
		jfloat >
	(a0, a1);
}

jfloat android::text::Layout::getDesiredWidth(local_ref< java::lang::CharSequence > const &a0, jint a1, jint a2, local_ref< android::text::TextPaint > const &a3)
{
	return call_static_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(2),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(2), 
		jfloat >
	(a0, a1, a2, a3);
}

void android::text::Layout::draw(local_ref< android::graphics::Canvas > const &a0)
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(3),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0);
}

void android::text::Layout::draw(local_ref< android::graphics::Canvas > const &a0, local_ref< android::graphics::Path > const &a1, local_ref< android::graphics::Paint > const &a2, jint a3)
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(4),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}

local_ref< java::lang::CharSequence > android::text::Layout::getText()
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(5),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::CharSequence > >
	(get_jobject());
}

local_ref< android::text::TextPaint > android::text::Layout::getPaint()
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(6),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< android::text::TextPaint > >
	(get_jobject());
}

jint android::text::Layout::getWidth()
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(7),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(7), 
		jint >
	(get_jobject());
}

jint android::text::Layout::getEllipsizedWidth()
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(8),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(8), 
		jint >
	(get_jobject());
}

void android::text::Layout::increaseWidthTo(jint a0)
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(9),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject(), a0);
}

jint android::text::Layout::getHeight()
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(10),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(10), 
		jint >
	(get_jobject());
}

local_ref< android::text::Layout_::Alignment > android::text::Layout::getAlignment()
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(11),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< android::text::Layout_::Alignment > >
	(get_jobject());
}

jfloat android::text::Layout::getSpacingMultiplier()
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(12),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(12), 
		jfloat >
	(get_jobject());
}

jfloat android::text::Layout::getSpacingAdd()
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(13),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(13), 
		jfloat >
	(get_jobject());
}

jint android::text::Layout::getLineCount()
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(14),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(14), 
		jint >
	(get_jobject());
}

jint android::text::Layout::getLineBounds(jint a0, local_ref< android::graphics::Rect > const &a1)
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(15),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(15), 
		jint >
	(get_jobject(), a0, a1);
}

jint android::text::Layout::getLineTop(jint a0)
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(16),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(16), 
		jint >
	(get_jobject(), a0);
}

jint android::text::Layout::getLineDescent(jint a0)
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(17),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(17), 
		jint >
	(get_jobject(), a0);
}

jint android::text::Layout::getLineStart(jint a0)
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(18),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(18), 
		jint >
	(get_jobject(), a0);
}

jint android::text::Layout::getParagraphDirection(jint a0)
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(19),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(19), 
		jint >
	(get_jobject(), a0);
}

jboolean android::text::Layout::getLineContainsTab(jint a0)
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(20),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(20), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< android::text::Layout_::Directions > android::text::Layout::getLineDirections(jint a0)
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(21),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(21), 
		local_ref< android::text::Layout_::Directions > >
	(get_jobject(), a0);
}

jint android::text::Layout::getTopPadding()
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(22),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(22), 
		jint >
	(get_jobject());
}

jint android::text::Layout::getBottomPadding()
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(23),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(23), 
		jint >
	(get_jobject());
}

jfloat android::text::Layout::getPrimaryHorizontal(jint a0)
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(24),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(24), 
		jfloat >
	(get_jobject(), a0);
}

jfloat android::text::Layout::getSecondaryHorizontal(jint a0)
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(25),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(25), 
		jfloat >
	(get_jobject(), a0);
}

jfloat android::text::Layout::getLineLeft(jint a0)
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(26),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(26), 
		jfloat >
	(get_jobject(), a0);
}

jfloat android::text::Layout::getLineRight(jint a0)
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(27),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(27), 
		jfloat >
	(get_jobject(), a0);
}

jfloat android::text::Layout::getLineMax(jint a0)
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(28),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(28), 
		jfloat >
	(get_jobject(), a0);
}

jfloat android::text::Layout::getLineWidth(jint a0)
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(29),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(29), 
		jfloat >
	(get_jobject(), a0);
}

jint android::text::Layout::getLineForVertical(jint a0)
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(30),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(30), 
		jint >
	(get_jobject(), a0);
}

jint android::text::Layout::getLineForOffset(jint a0)
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(31),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(31), 
		jint >
	(get_jobject(), a0);
}

jint android::text::Layout::getOffsetForHorizontal(jint a0, jfloat a1)
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(32),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(32), 
		jint >
	(get_jobject(), a0, a1);
}

jint android::text::Layout::getLineEnd(jint a0)
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(33),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(33), 
		jint >
	(get_jobject(), a0);
}

jint android::text::Layout::getLineVisibleEnd(jint a0)
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(34),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(34), 
		jint >
	(get_jobject(), a0);
}

jint android::text::Layout::getLineBottom(jint a0)
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(35),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(35), 
		jint >
	(get_jobject(), a0);
}

jint android::text::Layout::getLineBaseline(jint a0)
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(36),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(36), 
		jint >
	(get_jobject(), a0);
}

jint android::text::Layout::getLineAscent(jint a0)
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(37),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(37), 
		jint >
	(get_jobject(), a0);
}

jint android::text::Layout::getOffsetToLeftOf(jint a0)
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(38),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(38), 
		jint >
	(get_jobject(), a0);
}

jint android::text::Layout::getOffsetToRightOf(jint a0)
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(39),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(39), 
		jint >
	(get_jobject(), a0);
}

void android::text::Layout::getCursorPath(jint a0, local_ref< android::graphics::Path > const &a1, local_ref< java::lang::CharSequence > const &a2)
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(40),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(40), 
		void >
	(get_jobject(), a0, a1, a2);
}

void android::text::Layout::getSelectionPath(jint a0, jint a1, local_ref< android::graphics::Path > const &a2)
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(41),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(41), 
		void >
	(get_jobject(), a0, a1, a2);
}

local_ref< android::text::Layout_::Alignment > android::text::Layout::getParagraphAlignment(jint a0)
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(42),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(42), 
		local_ref< android::text::Layout_::Alignment > >
	(get_jobject(), a0);
}

jint android::text::Layout::getParagraphLeft(jint a0)
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(43),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(43), 
		jint >
	(get_jobject(), a0);
}

jint android::text::Layout::getParagraphRight(jint a0)
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(44),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(44), 
		jint >
	(get_jobject(), a0);
}


jint android::text::Layout::getEllipsisStart(jint a0)
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(46),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(46), 
		jint >
	(get_jobject(), a0);
}

jint android::text::Layout::getEllipsisCount(jint a0)
{
	return call_method<
		android::text::Layout::J2CPP_CLASS_NAME,
		android::text::Layout::J2CPP_METHOD_NAME(47),
		android::text::Layout::J2CPP_METHOD_SIGNATURE(47), 
		jint >
	(get_jobject(), a0);
}


static_field<
	android::text::Layout::J2CPP_CLASS_NAME,
	android::text::Layout::J2CPP_FIELD_NAME(0),
	android::text::Layout::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::text::Layout::DIR_LEFT_TO_RIGHT;

static_field<
	android::text::Layout::J2CPP_CLASS_NAME,
	android::text::Layout::J2CPP_FIELD_NAME(1),
	android::text::Layout::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::text::Layout::DIR_RIGHT_TO_LEFT;


J2CPP_DEFINE_CLASS(android::text::Layout,"android/text/Layout")
J2CPP_DEFINE_METHOD(android::text::Layout,0,"<init>","(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FF)V")
J2CPP_DEFINE_METHOD(android::text::Layout,1,"getDesiredWidth","(Ljava/lang/CharSequence;Landroid/text/TextPaint;)F")
J2CPP_DEFINE_METHOD(android::text::Layout,2,"getDesiredWidth","(Ljava/lang/CharSequence;IILandroid/text/TextPaint;)F")
J2CPP_DEFINE_METHOD(android::text::Layout,3,"draw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::text::Layout,4,"draw","(Landroid/graphics/Canvas;Landroid/graphics/Path;Landroid/graphics/Paint;I)V")
J2CPP_DEFINE_METHOD(android::text::Layout,5,"getText","()Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::text::Layout,6,"getPaint","()Landroid/text/TextPaint;")
J2CPP_DEFINE_METHOD(android::text::Layout,7,"getWidth","()I")
J2CPP_DEFINE_METHOD(android::text::Layout,8,"getEllipsizedWidth","()I")
J2CPP_DEFINE_METHOD(android::text::Layout,9,"increaseWidthTo","(I)V")
J2CPP_DEFINE_METHOD(android::text::Layout,10,"getHeight","()I")
J2CPP_DEFINE_METHOD(android::text::Layout,11,"getAlignment","()Landroid/text/Layout$Alignment;")
J2CPP_DEFINE_METHOD(android::text::Layout,12,"getSpacingMultiplier","()F")
J2CPP_DEFINE_METHOD(android::text::Layout,13,"getSpacingAdd","()F")
J2CPP_DEFINE_METHOD(android::text::Layout,14,"getLineCount","()I")
J2CPP_DEFINE_METHOD(android::text::Layout,15,"getLineBounds","(ILandroid/graphics/Rect;)I")
J2CPP_DEFINE_METHOD(android::text::Layout,16,"getLineTop","(I)I")
J2CPP_DEFINE_METHOD(android::text::Layout,17,"getLineDescent","(I)I")
J2CPP_DEFINE_METHOD(android::text::Layout,18,"getLineStart","(I)I")
J2CPP_DEFINE_METHOD(android::text::Layout,19,"getParagraphDirection","(I)I")
J2CPP_DEFINE_METHOD(android::text::Layout,20,"getLineContainsTab","(I)Z")
J2CPP_DEFINE_METHOD(android::text::Layout,21,"getLineDirections","(I)Landroid/text/Layout$Directions;")
J2CPP_DEFINE_METHOD(android::text::Layout,22,"getTopPadding","()I")
J2CPP_DEFINE_METHOD(android::text::Layout,23,"getBottomPadding","()I")
J2CPP_DEFINE_METHOD(android::text::Layout,24,"getPrimaryHorizontal","(I)F")
J2CPP_DEFINE_METHOD(android::text::Layout,25,"getSecondaryHorizontal","(I)F")
J2CPP_DEFINE_METHOD(android::text::Layout,26,"getLineLeft","(I)F")
J2CPP_DEFINE_METHOD(android::text::Layout,27,"getLineRight","(I)F")
J2CPP_DEFINE_METHOD(android::text::Layout,28,"getLineMax","(I)F")
J2CPP_DEFINE_METHOD(android::text::Layout,29,"getLineWidth","(I)F")
J2CPP_DEFINE_METHOD(android::text::Layout,30,"getLineForVertical","(I)I")
J2CPP_DEFINE_METHOD(android::text::Layout,31,"getLineForOffset","(I)I")
J2CPP_DEFINE_METHOD(android::text::Layout,32,"getOffsetForHorizontal","(IF)I")
J2CPP_DEFINE_METHOD(android::text::Layout,33,"getLineEnd","(I)I")
J2CPP_DEFINE_METHOD(android::text::Layout,34,"getLineVisibleEnd","(I)I")
J2CPP_DEFINE_METHOD(android::text::Layout,35,"getLineBottom","(I)I")
J2CPP_DEFINE_METHOD(android::text::Layout,36,"getLineBaseline","(I)I")
J2CPP_DEFINE_METHOD(android::text::Layout,37,"getLineAscent","(I)I")
J2CPP_DEFINE_METHOD(android::text::Layout,38,"getOffsetToLeftOf","(I)I")
J2CPP_DEFINE_METHOD(android::text::Layout,39,"getOffsetToRightOf","(I)I")
J2CPP_DEFINE_METHOD(android::text::Layout,40,"getCursorPath","(ILandroid/graphics/Path;Ljava/lang/CharSequence;)V")
J2CPP_DEFINE_METHOD(android::text::Layout,41,"getSelectionPath","(IILandroid/graphics/Path;)V")
J2CPP_DEFINE_METHOD(android::text::Layout,42,"getParagraphAlignment","(I)Landroid/text/Layout$Alignment;")
J2CPP_DEFINE_METHOD(android::text::Layout,43,"getParagraphLeft","(I)I")
J2CPP_DEFINE_METHOD(android::text::Layout,44,"getParagraphRight","(I)I")
J2CPP_DEFINE_METHOD(android::text::Layout,45,"isSpanned","()Z")
J2CPP_DEFINE_METHOD(android::text::Layout,46,"getEllipsisStart","(I)I")
J2CPP_DEFINE_METHOD(android::text::Layout,47,"getEllipsisCount","(I)I")
J2CPP_DEFINE_FIELD(android::text::Layout,0,"DIR_LEFT_TO_RIGHT","I")
J2CPP_DEFINE_FIELD(android::text::Layout,1,"DIR_RIGHT_TO_LEFT","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_LAYOUT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
