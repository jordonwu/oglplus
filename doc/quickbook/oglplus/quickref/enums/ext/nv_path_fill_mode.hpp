//  File doc/quickbook/oglplus/quickref/enums/ext/nv_path_fill_mode.hpp
//
//  Automatically generated file, DO NOT modify manually.
//  Edit the source 'source/enums/oglplus/ext/nv_path_fill_mode.txt'
//  or the 'source/enums/make_enum.py' script instead.
//
//  Copyright 2010-2014 Matus Chochlik.
//  Distributed under the Boost Software License, Version 1.0.
//  See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt
//
//[oglplus_enums_ext_nv_path_fill_mode
namespace oglplus {

enum class PathNVFillMode : GLenum
{
	Invert    = GL_INVERT,
	CountUp   = GL_COUNT_UP_NV,
	CountDown = GL_COUNT_DOWN_NV,
	FillMode  = GL_PATH_FILL_MODE_NV
};

#if !__OGLPLUS_NO_ENUM_VALUE_RANGES
template <>
__Range<PathNVFillMode> __EnumValueRange<PathNVFillMode>(void);
#endif

#if !__OGLPLUS_NO_ENUM_VALUE_NAMES
__StrCRef __EnumValueName(PathNVFillMode);
#endif

} // namespace oglplus
//]
