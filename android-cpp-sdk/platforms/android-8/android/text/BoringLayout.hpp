/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.BoringLayout
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_BORINGLAYOUT_HPP_DECL
#define J2CPP_ANDROID_TEXT_BORINGLAYOUT_HPP_DECL


namespace j2cpp { namespace android { namespace text { class Layout; } } }
namespace j2cpp { namespace android { namespace text { namespace Layout_ { class Alignment; } } } }
namespace j2cpp { namespace android { namespace text { namespace TextUtils_ { class EllipsizeCallback; } } } }
namespace j2cpp { namespace android { namespace text { namespace Layout_ { class Directions; } } } }
namespace j2cpp { namespace android { namespace text { namespace TextUtils_ { class TruncateAt; } } } }
namespace j2cpp { namespace android { namespace text { class TextPaint; } } }
namespace j2cpp { namespace android { namespace text { namespace BoringLayout_ { class Metrics; } } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace graphics { class Paint; } } }
namespace j2cpp { namespace android { namespace graphics { class Path; } } }
namespace j2cpp { namespace android { namespace graphics { namespace Paint_ { class FontMetricsInt; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }


#include <android/graphics/Canvas.hpp>
#include <android/graphics/Paint.hpp>
#include <android/graphics/Path.hpp>
#include <android/text/BoringLayout.hpp>
#include <android/text/Layout.hpp>
#include <android/text/TextPaint.hpp>
#include <android/text/TextUtils.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace text {

	class BoringLayout;
	namespace BoringLayout_ {

		class Metrics;
		class Metrics
			: public object<Metrics>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_FIELD(0)

			explicit Metrics(jobject jobj)
			: object<Metrics>(jobj)
			, width(jobj)
			{
			}

			operator local_ref<android::graphics::Paint_::FontMetricsInt>() const;


			Metrics();
			local_ref< java::lang::String > toString();

			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > width;
		}; //class Metrics

	} //namespace BoringLayout_

	class BoringLayout
		: public object<BoringLayout>
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

		typedef BoringLayout_::Metrics Metrics;

		explicit BoringLayout(jobject jobj)
		: object<BoringLayout>(jobj)
		{
		}

		operator local_ref<android::text::Layout>() const;
		operator local_ref<android::text::TextUtils_::EllipsizeCallback>() const;


		BoringLayout(local_ref< java::lang::CharSequence > const&, local_ref< android::text::TextPaint > const&, jint, local_ref< android::text::Layout_::Alignment > const&, jfloat, jfloat, local_ref< android::text::BoringLayout_::Metrics > const&, jboolean);
		BoringLayout(local_ref< java::lang::CharSequence > const&, local_ref< android::text::TextPaint > const&, jint, local_ref< android::text::Layout_::Alignment > const&, jfloat, jfloat, local_ref< android::text::BoringLayout_::Metrics > const&, jboolean, local_ref< android::text::TextUtils_::TruncateAt > const&, jint);
		static local_ref< android::text::BoringLayout > make(local_ref< java::lang::CharSequence >  const&, local_ref< android::text::TextPaint >  const&, jint, local_ref< android::text::Layout_::Alignment >  const&, jfloat, jfloat, local_ref< android::text::BoringLayout_::Metrics >  const&, jboolean);
		static local_ref< android::text::BoringLayout > make(local_ref< java::lang::CharSequence >  const&, local_ref< android::text::TextPaint >  const&, jint, local_ref< android::text::Layout_::Alignment >  const&, jfloat, jfloat, local_ref< android::text::BoringLayout_::Metrics >  const&, jboolean, local_ref< android::text::TextUtils_::TruncateAt >  const&, jint);
		local_ref< android::text::BoringLayout > replaceOrMake(local_ref< java::lang::CharSequence >  const&, local_ref< android::text::TextPaint >  const&, jint, local_ref< android::text::Layout_::Alignment >  const&, jfloat, jfloat, local_ref< android::text::BoringLayout_::Metrics >  const&, jboolean);
		local_ref< android::text::BoringLayout > replaceOrMake(local_ref< java::lang::CharSequence >  const&, local_ref< android::text::TextPaint >  const&, jint, local_ref< android::text::Layout_::Alignment >  const&, jfloat, jfloat, local_ref< android::text::BoringLayout_::Metrics >  const&, jboolean, local_ref< android::text::TextUtils_::TruncateAt >  const&, jint);
		static local_ref< android::text::BoringLayout_::Metrics > isBoring(local_ref< java::lang::CharSequence >  const&, local_ref< android::text::TextPaint >  const&);
		static local_ref< android::text::BoringLayout_::Metrics > isBoring(local_ref< java::lang::CharSequence >  const&, local_ref< android::text::TextPaint >  const&, local_ref< android::text::BoringLayout_::Metrics >  const&);
		jint getHeight();
		jint getLineCount();
		jint getLineTop(jint);
		jint getLineDescent(jint);
		jint getLineStart(jint);
		jint getParagraphDirection(jint);
		jboolean getLineContainsTab(jint);
		jfloat getLineMax(jint);
		local_ref< android::text::Layout_::Directions > getLineDirections(jint);
		jint getTopPadding();
		jint getBottomPadding();
		jint getEllipsisCount(jint);
		jint getEllipsisStart(jint);
		jint getEllipsizedWidth();
		void draw(local_ref< android::graphics::Canvas >  const&, local_ref< android::graphics::Path >  const&, local_ref< android::graphics::Paint >  const&, jint);
		void ellipsized(jint, jint);
	}; //class BoringLayout

} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_BORINGLAYOUT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_BORINGLAYOUT_HPP_IMPL
#define J2CPP_ANDROID_TEXT_BORINGLAYOUT_HPP_IMPL

namespace j2cpp {




android::text::BoringLayout_::Metrics::operator local_ref<android::graphics::Paint_::FontMetricsInt>() const
{
	return local_ref<android::graphics::Paint_::FontMetricsInt>(get_jobject());
}


android::text::BoringLayout_::Metrics::Metrics()
: object<android::text::BoringLayout_::Metrics>(
	call_new_object<
		android::text::BoringLayout_::Metrics::J2CPP_CLASS_NAME,
		android::text::BoringLayout_::Metrics::J2CPP_METHOD_NAME(0),
		android::text::BoringLayout_::Metrics::J2CPP_METHOD_SIGNATURE(0)>
	()
)
, width(get_jobject())
{
}


local_ref< java::lang::String > android::text::BoringLayout_::Metrics::toString()
{
	return call_method<
		android::text::BoringLayout_::Metrics::J2CPP_CLASS_NAME,
		android::text::BoringLayout_::Metrics::J2CPP_METHOD_NAME(1),
		android::text::BoringLayout_::Metrics::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String > >
	(get_jobject());
}



J2CPP_DEFINE_CLASS(android::text::BoringLayout_::Metrics,"android/text/BoringLayout$Metrics")
J2CPP_DEFINE_METHOD(android::text::BoringLayout_::Metrics,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::BoringLayout_::Metrics,1,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::text::BoringLayout_::Metrics,0,"width","I")



android::text::BoringLayout::operator local_ref<android::text::Layout>() const
{
	return local_ref<android::text::Layout>(get_jobject());
}

android::text::BoringLayout::operator local_ref<android::text::TextUtils_::EllipsizeCallback>() const
{
	return local_ref<android::text::TextUtils_::EllipsizeCallback>(get_jobject());
}


android::text::BoringLayout::BoringLayout(local_ref< java::lang::CharSequence > const &a0, local_ref< android::text::TextPaint > const &a1, jint a2, local_ref< android::text::Layout_::Alignment > const &a3, jfloat a4, jfloat a5, local_ref< android::text::BoringLayout_::Metrics > const &a6, jboolean a7)
: object<android::text::BoringLayout>(
	call_new_object<
		android::text::BoringLayout::J2CPP_CLASS_NAME,
		android::text::BoringLayout::J2CPP_METHOD_NAME(0),
		android::text::BoringLayout::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1, a2, a3, a4, a5, a6, a7)
)
{
}



android::text::BoringLayout::BoringLayout(local_ref< java::lang::CharSequence > const &a0, local_ref< android::text::TextPaint > const &a1, jint a2, local_ref< android::text::Layout_::Alignment > const &a3, jfloat a4, jfloat a5, local_ref< android::text::BoringLayout_::Metrics > const &a6, jboolean a7, local_ref< android::text::TextUtils_::TruncateAt > const &a8, jint a9)
: object<android::text::BoringLayout>(
	call_new_object<
		android::text::BoringLayout::J2CPP_CLASS_NAME,
		android::text::BoringLayout::J2CPP_METHOD_NAME(1),
		android::text::BoringLayout::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9)
)
{
}


local_ref< android::text::BoringLayout > android::text::BoringLayout::make(local_ref< java::lang::CharSequence > const &a0, local_ref< android::text::TextPaint > const &a1, jint a2, local_ref< android::text::Layout_::Alignment > const &a3, jfloat a4, jfloat a5, local_ref< android::text::BoringLayout_::Metrics > const &a6, jboolean a7)
{
	return call_static_method<
		android::text::BoringLayout::J2CPP_CLASS_NAME,
		android::text::BoringLayout::J2CPP_METHOD_NAME(2),
		android::text::BoringLayout::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::text::BoringLayout > >
	(a0, a1, a2, a3, a4, a5, a6, a7);
}

local_ref< android::text::BoringLayout > android::text::BoringLayout::make(local_ref< java::lang::CharSequence > const &a0, local_ref< android::text::TextPaint > const &a1, jint a2, local_ref< android::text::Layout_::Alignment > const &a3, jfloat a4, jfloat a5, local_ref< android::text::BoringLayout_::Metrics > const &a6, jboolean a7, local_ref< android::text::TextUtils_::TruncateAt > const &a8, jint a9)
{
	return call_static_method<
		android::text::BoringLayout::J2CPP_CLASS_NAME,
		android::text::BoringLayout::J2CPP_METHOD_NAME(3),
		android::text::BoringLayout::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::text::BoringLayout > >
	(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
}

local_ref< android::text::BoringLayout > android::text::BoringLayout::replaceOrMake(local_ref< java::lang::CharSequence > const &a0, local_ref< android::text::TextPaint > const &a1, jint a2, local_ref< android::text::Layout_::Alignment > const &a3, jfloat a4, jfloat a5, local_ref< android::text::BoringLayout_::Metrics > const &a6, jboolean a7)
{
	return call_method<
		android::text::BoringLayout::J2CPP_CLASS_NAME,
		android::text::BoringLayout::J2CPP_METHOD_NAME(4),
		android::text::BoringLayout::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< android::text::BoringLayout > >
	(get_jobject(), a0, a1, a2, a3, a4, a5, a6, a7);
}

local_ref< android::text::BoringLayout > android::text::BoringLayout::replaceOrMake(local_ref< java::lang::CharSequence > const &a0, local_ref< android::text::TextPaint > const &a1, jint a2, local_ref< android::text::Layout_::Alignment > const &a3, jfloat a4, jfloat a5, local_ref< android::text::BoringLayout_::Metrics > const &a6, jboolean a7, local_ref< android::text::TextUtils_::TruncateAt > const &a8, jint a9)
{
	return call_method<
		android::text::BoringLayout::J2CPP_CLASS_NAME,
		android::text::BoringLayout::J2CPP_METHOD_NAME(5),
		android::text::BoringLayout::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< android::text::BoringLayout > >
	(get_jobject(), a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
}

local_ref< android::text::BoringLayout_::Metrics > android::text::BoringLayout::isBoring(local_ref< java::lang::CharSequence > const &a0, local_ref< android::text::TextPaint > const &a1)
{
	return call_static_method<
		android::text::BoringLayout::J2CPP_CLASS_NAME,
		android::text::BoringLayout::J2CPP_METHOD_NAME(6),
		android::text::BoringLayout::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< android::text::BoringLayout_::Metrics > >
	(a0, a1);
}

local_ref< android::text::BoringLayout_::Metrics > android::text::BoringLayout::isBoring(local_ref< java::lang::CharSequence > const &a0, local_ref< android::text::TextPaint > const &a1, local_ref< android::text::BoringLayout_::Metrics > const &a2)
{
	return call_static_method<
		android::text::BoringLayout::J2CPP_CLASS_NAME,
		android::text::BoringLayout::J2CPP_METHOD_NAME(7),
		android::text::BoringLayout::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< android::text::BoringLayout_::Metrics > >
	(a0, a1, a2);
}

jint android::text::BoringLayout::getHeight()
{
	return call_method<
		android::text::BoringLayout::J2CPP_CLASS_NAME,
		android::text::BoringLayout::J2CPP_METHOD_NAME(8),
		android::text::BoringLayout::J2CPP_METHOD_SIGNATURE(8), 
		jint >
	(get_jobject());
}

jint android::text::BoringLayout::getLineCount()
{
	return call_method<
		android::text::BoringLayout::J2CPP_CLASS_NAME,
		android::text::BoringLayout::J2CPP_METHOD_NAME(9),
		android::text::BoringLayout::J2CPP_METHOD_SIGNATURE(9), 
		jint >
	(get_jobject());
}

jint android::text::BoringLayout::getLineTop(jint a0)
{
	return call_method<
		android::text::BoringLayout::J2CPP_CLASS_NAME,
		android::text::BoringLayout::J2CPP_METHOD_NAME(10),
		android::text::BoringLayout::J2CPP_METHOD_SIGNATURE(10), 
		jint >
	(get_jobject(), a0);
}

jint android::text::BoringLayout::getLineDescent(jint a0)
{
	return call_method<
		android::text::BoringLayout::J2CPP_CLASS_NAME,
		android::text::BoringLayout::J2CPP_METHOD_NAME(11),
		android::text::BoringLayout::J2CPP_METHOD_SIGNATURE(11), 
		jint >
	(get_jobject(), a0);
}

jint android::text::BoringLayout::getLineStart(jint a0)
{
	return call_method<
		android::text::BoringLayout::J2CPP_CLASS_NAME,
		android::text::BoringLayout::J2CPP_METHOD_NAME(12),
		android::text::BoringLayout::J2CPP_METHOD_SIGNATURE(12), 
		jint >
	(get_jobject(), a0);
}

jint android::text::BoringLayout::getParagraphDirection(jint a0)
{
	return call_method<
		android::text::BoringLayout::J2CPP_CLASS_NAME,
		android::text::BoringLayout::J2CPP_METHOD_NAME(13),
		android::text::BoringLayout::J2CPP_METHOD_SIGNATURE(13), 
		jint >
	(get_jobject(), a0);
}

jboolean android::text::BoringLayout::getLineContainsTab(jint a0)
{
	return call_method<
		android::text::BoringLayout::J2CPP_CLASS_NAME,
		android::text::BoringLayout::J2CPP_METHOD_NAME(14),
		android::text::BoringLayout::J2CPP_METHOD_SIGNATURE(14), 
		jboolean >
	(get_jobject(), a0);
}

jfloat android::text::BoringLayout::getLineMax(jint a0)
{
	return call_method<
		android::text::BoringLayout::J2CPP_CLASS_NAME,
		android::text::BoringLayout::J2CPP_METHOD_NAME(15),
		android::text::BoringLayout::J2CPP_METHOD_SIGNATURE(15), 
		jfloat >
	(get_jobject(), a0);
}

local_ref< android::text::Layout_::Directions > android::text::BoringLayout::getLineDirections(jint a0)
{
	return call_method<
		android::text::BoringLayout::J2CPP_CLASS_NAME,
		android::text::BoringLayout::J2CPP_METHOD_NAME(16),
		android::text::BoringLayout::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< android::text::Layout_::Directions > >
	(get_jobject(), a0);
}

jint android::text::BoringLayout::getTopPadding()
{
	return call_method<
		android::text::BoringLayout::J2CPP_CLASS_NAME,
		android::text::BoringLayout::J2CPP_METHOD_NAME(17),
		android::text::BoringLayout::J2CPP_METHOD_SIGNATURE(17), 
		jint >
	(get_jobject());
}

jint android::text::BoringLayout::getBottomPadding()
{
	return call_method<
		android::text::BoringLayout::J2CPP_CLASS_NAME,
		android::text::BoringLayout::J2CPP_METHOD_NAME(18),
		android::text::BoringLayout::J2CPP_METHOD_SIGNATURE(18), 
		jint >
	(get_jobject());
}

jint android::text::BoringLayout::getEllipsisCount(jint a0)
{
	return call_method<
		android::text::BoringLayout::J2CPP_CLASS_NAME,
		android::text::BoringLayout::J2CPP_METHOD_NAME(19),
		android::text::BoringLayout::J2CPP_METHOD_SIGNATURE(19), 
		jint >
	(get_jobject(), a0);
}

jint android::text::BoringLayout::getEllipsisStart(jint a0)
{
	return call_method<
		android::text::BoringLayout::J2CPP_CLASS_NAME,
		android::text::BoringLayout::J2CPP_METHOD_NAME(20),
		android::text::BoringLayout::J2CPP_METHOD_SIGNATURE(20), 
		jint >
	(get_jobject(), a0);
}

jint android::text::BoringLayout::getEllipsizedWidth()
{
	return call_method<
		android::text::BoringLayout::J2CPP_CLASS_NAME,
		android::text::BoringLayout::J2CPP_METHOD_NAME(21),
		android::text::BoringLayout::J2CPP_METHOD_SIGNATURE(21), 
		jint >
	(get_jobject());
}

void android::text::BoringLayout::draw(local_ref< android::graphics::Canvas > const &a0, local_ref< android::graphics::Path > const &a1, local_ref< android::graphics::Paint > const &a2, jint a3)
{
	return call_method<
		android::text::BoringLayout::J2CPP_CLASS_NAME,
		android::text::BoringLayout::J2CPP_METHOD_NAME(22),
		android::text::BoringLayout::J2CPP_METHOD_SIGNATURE(22), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}

void android::text::BoringLayout::ellipsized(jint a0, jint a1)
{
	return call_method<
		android::text::BoringLayout::J2CPP_CLASS_NAME,
		android::text::BoringLayout::J2CPP_METHOD_NAME(23),
		android::text::BoringLayout::J2CPP_METHOD_SIGNATURE(23), 
		void >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(android::text::BoringLayout,"android/text/BoringLayout")
J2CPP_DEFINE_METHOD(android::text::BoringLayout,0,"<init>","(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFLandroid/text/BoringLayout$Metrics;Z)V")
J2CPP_DEFINE_METHOD(android::text::BoringLayout,1,"<init>","(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFLandroid/text/BoringLayout$Metrics;ZLandroid/text/TextUtils$TruncateAt;I)V")
J2CPP_DEFINE_METHOD(android::text::BoringLayout,2,"make","(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFLandroid/text/BoringLayout$Metrics;Z)Landroid/text/BoringLayout;")
J2CPP_DEFINE_METHOD(android::text::BoringLayout,3,"make","(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFLandroid/text/BoringLayout$Metrics;ZLandroid/text/TextUtils$TruncateAt;I)Landroid/text/BoringLayout;")
J2CPP_DEFINE_METHOD(android::text::BoringLayout,4,"replaceOrMake","(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFLandroid/text/BoringLayout$Metrics;Z)Landroid/text/BoringLayout;")
J2CPP_DEFINE_METHOD(android::text::BoringLayout,5,"replaceOrMake","(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFLandroid/text/BoringLayout$Metrics;ZLandroid/text/TextUtils$TruncateAt;I)Landroid/text/BoringLayout;")
J2CPP_DEFINE_METHOD(android::text::BoringLayout,6,"isBoring","(Ljava/lang/CharSequence;Landroid/text/TextPaint;)Landroid/text/BoringLayout$Metrics;")
J2CPP_DEFINE_METHOD(android::text::BoringLayout,7,"isBoring","(Ljava/lang/CharSequence;Landroid/text/TextPaint;Landroid/text/BoringLayout$Metrics;)Landroid/text/BoringLayout$Metrics;")
J2CPP_DEFINE_METHOD(android::text::BoringLayout,8,"getHeight","()I")
J2CPP_DEFINE_METHOD(android::text::BoringLayout,9,"getLineCount","()I")
J2CPP_DEFINE_METHOD(android::text::BoringLayout,10,"getLineTop","(I)I")
J2CPP_DEFINE_METHOD(android::text::BoringLayout,11,"getLineDescent","(I)I")
J2CPP_DEFINE_METHOD(android::text::BoringLayout,12,"getLineStart","(I)I")
J2CPP_DEFINE_METHOD(android::text::BoringLayout,13,"getParagraphDirection","(I)I")
J2CPP_DEFINE_METHOD(android::text::BoringLayout,14,"getLineContainsTab","(I)Z")
J2CPP_DEFINE_METHOD(android::text::BoringLayout,15,"getLineMax","(I)F")
J2CPP_DEFINE_METHOD(android::text::BoringLayout,16,"getLineDirections","(I)Landroid/text/Layout$Directions;")
J2CPP_DEFINE_METHOD(android::text::BoringLayout,17,"getTopPadding","()I")
J2CPP_DEFINE_METHOD(android::text::BoringLayout,18,"getBottomPadding","()I")
J2CPP_DEFINE_METHOD(android::text::BoringLayout,19,"getEllipsisCount","(I)I")
J2CPP_DEFINE_METHOD(android::text::BoringLayout,20,"getEllipsisStart","(I)I")
J2CPP_DEFINE_METHOD(android::text::BoringLayout,21,"getEllipsizedWidth","()I")
J2CPP_DEFINE_METHOD(android::text::BoringLayout,22,"draw","(Landroid/graphics/Canvas;Landroid/graphics/Path;Landroid/graphics/Paint;I)V")
J2CPP_DEFINE_METHOD(android::text::BoringLayout,23,"ellipsized","(II)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_BORINGLAYOUT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
