/*
 *  Copyright 2014 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

//[oglplus_enums_functions
namespace oglplus {

#if !__OGLPLUS_NO_ENUM_VALUE_RANGES
template <typename Enumeration>
__Range<Enumeration> EnumValueRange(void); /*<
Returns a __Range of values in a OGLplus enum value.
This template function is overloaded for the enumerated types defined by
OGLplus and returns a __Range which allows to traverse all values of
a particular [^Enumeration] type.
The result of this function is influenced by the __OGLPLUS_NO_ENUM_VALUE_RANGES
preprocessor-symbol. If it is set to a nonzero value then [^EnumValueRange<Enum>()]
returns an empty range.
>*/
#endif

#if! __OGLPLUS_NO_ENUM_VALUE_NAMES
template <typename Enumeration>
__StrCRef EnumValueName(Enumeration enum_value); /*<
Returns the name of the GL enumerated value for an OGLplus enum value.
This function is overloaded for the enumerated types defined by OGLplus
and returns the GL constant name (without the "GL_" prefix) as managed
const string reference.
The result of this function is influenced by the __OGLPLUS_NO_ENUM_VALUE_NAMES
preprocessor-symbol. If it is set to a nonzero value then
[^EnumValueName(enum_value)] returns an empty string.
>*/
#endif

} // namespace oglplus
//]

