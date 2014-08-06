//  File doc/quickbook/eglplus/quickref/enums/transparent_type.hpp
//
//  Automatically generated file, DO NOT modify manually.
//  Edit the source 'source/enums/eglplus/transparent_type.txt'
//  or the 'source/enums/make_enum.py' script instead.
//
//  Copyright 2010-2014 Matus Chochlik.
//  Distributed under the Boost Software License, Version 1.0.
//  See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt
//
//[oglplus_enums_transparent_type
namespace eglplus {

enum class TransparentType : EGLenum
{
	None           = EGL_NONE,
	TransparentRGB = EGL_TRANSPARENT_RGB
};

#if !__OGLPLUS_NO_ENUM_VALUE_RANGES
template <>
__Range<TransparentType> __EnumValueRange<TransparentType>(void);
#endif

#if !__OGLPLUS_NO_ENUM_VALUE_NAMES
__StrCRef __EnumValueName(TransparentType);
#endif

} // namespace eglplus
//]
