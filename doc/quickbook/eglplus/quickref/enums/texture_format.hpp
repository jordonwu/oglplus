//  File doc/quickbook/eglplus/quickref/enums/texture_format.hpp
//
//  Automatically generated file, DO NOT modify manually.
//  Edit the source 'source/enums/eglplus/texture_format.txt'
//  or the 'source/enums/make_enum.py' script instead.
//
//  Copyright 2010-2014 Matus Chochlik.
//  Distributed under the Boost Software License, Version 1.0.
//  See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt
//
//[oglplus_enums_texture_format
namespace eglplus {

enum class TextureFormat : EGLenum
{
	RGB       = EGL_TEXTURE_RGB,
	RGBA      = EGL_TEXTURE_RGBA,
	NoTexture = EGL_NO_TEXTURE
};

#if !__OGLPLUS_NO_ENUM_VALUE_RANGES
template <>
__Range<TextureFormat> __EnumValueRange<TextureFormat>(void);
#endif

#if !__OGLPLUS_NO_ENUM_VALUE_NAMES
__StrCRef __EnumValueName(TextureFormat);
#endif

} // namespace eglplus
//]
