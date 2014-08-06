//  File doc/quickbook/eglplus/quickref/enums/renderable_type_bit.hpp
//
//  Automatically generated file, DO NOT modify manually.
//  Edit the source 'source/enums/eglplus/renderable_type_bit.txt'
//  or the 'source/enums/make_enum.py' script instead.
//
//  Copyright 2010-2014 Matus Chochlik.
//  Distributed under the Boost Software License, Version 1.0.
//  See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt
//
//[oglplus_enums_renderable_type_bit
namespace eglplus {

enum class RenderableTypeBit : EGLenum
{
	OpenGL     = EGL_OPENGL_BIT,
	OpenGL_ES  = EGL_OPENGL_ES_BIT,
	OpenGL_ES2 = EGL_OPENGL_ES2_BIT,
	OpenGL_ES3 = EGL_OPENGL_ES3_BIT,
	OpenVG     = EGL_OPENVG_BIT
};

#if !__OGLPLUS_NO_ENUM_VALUE_RANGES
template <>
__Range<RenderableTypeBit> __EnumValueRange<RenderableTypeBit>(void);
#endif

#if !__OGLPLUS_NO_ENUM_VALUE_NAMES
__StrCRef __EnumValueName(RenderableTypeBit);
#endif

} // namespace eglplus
//]
