//  File doc/quickbook/oglplus/quickref/enums/patch_parameter.hpp
//
//  Automatically generated file, DO NOT modify manually.
//  Edit the source 'source/enums/oglplus/patch_parameter.txt'
//  or the 'source/enums/make_enum.py' script instead.
//
//  Copyright 2010-2014 Matus Chochlik.
//  Distributed under the Boost Software License, Version 1.0.
//  See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt
//
//[oglplus_enums_patch_parameter
namespace oglplus {

enum class PatchParameter : GLenum
{
	PatchVertices          = GL_PATCH_VERTICES,
	PatchDefaultOuterLevel = GL_PATCH_DEFAULT_OUTER_LEVEL,
	PatchDefaultInnerLevel = GL_PATCH_DEFAULT_INNER_LEVEL
};

#if !__OGLPLUS_NO_ENUM_VALUE_RANGES
template <>
__Range<PatchParameter> __EnumValueRange<PatchParameter>(void);
#endif

#if !__OGLPLUS_NO_ENUM_VALUE_NAMES
__StrCRef __EnumValueName(PatchParameter);
#endif

} // namespace oglplus
//]
