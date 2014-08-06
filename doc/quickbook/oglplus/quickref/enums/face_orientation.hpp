//  File doc/quickbook/oglplus/quickref/enums/face_orientation.hpp
//
//  Automatically generated file, DO NOT modify manually.
//  Edit the source 'source/enums/oglplus/face_orientation.txt'
//  or the 'source/enums/make_enum.py' script instead.
//
//  Copyright 2010-2014 Matus Chochlik.
//  Distributed under the Boost Software License, Version 1.0.
//  See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt
//
//[oglplus_enums_face_orientation
namespace oglplus {

enum class FaceOrientation : GLenum
{
	CW  = GL_CW,
	CCW = GL_CCW
};

#if !__OGLPLUS_NO_ENUM_VALUE_RANGES
template <>
__Range<FaceOrientation> __EnumValueRange<FaceOrientation>(void);
#endif

#if !__OGLPLUS_NO_ENUM_VALUE_NAMES
__StrCRef __EnumValueName(FaceOrientation);
#endif

} // namespace oglplus
//]
