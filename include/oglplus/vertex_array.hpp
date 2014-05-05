/**
 *  @file oglplus/vertex_array.hpp
 *  @brief VertexArray wrappers
 *
 *  @author Matus Chochlik
 *
 *  Copyright 2010-2014 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

#pragma once
#ifndef OGLPLUS_VERTEX_ARRAY_1107121519_HPP
#define OGLPLUS_VERTEX_ARRAY_1107121519_HPP

#include <oglplus/config.hpp>
#include <oglplus/glfunc.hpp>
#include <oglplus/error.hpp>
#include <oglplus/object.hpp>
#include <cassert>

namespace oglplus {

/// Class wrapping vertex array construction/destruction functions
/** @note Do not use this class directly, use VertexArray instead.
 *
 *  @glsymbols
 *  @glfunref{GenVertexArrays}
 *  @glfunref{DeleteVertexArrays}
 *  @glfunref{IsVertexArray}
 */
template <>
class GenDelOps<tag::VertexArray>
{
protected:
	static void Gen(GLsizei count, GLuint* names)
	{
		assert(names != nullptr);
		OGLPLUS_GLFUNC(GenVertexArrays)(count, names);
		OGLPLUS_CHECK(OGLPLUS_ERROR_INFO(GenVertexArrays));
	}

	static void Delete(GLsizei count, GLuint* names)
	{
		assert(names != nullptr);
		OGLPLUS_GLFUNC(DeleteVertexArrays)(count, names);
		OGLPLUS_VERIFY(OGLPLUS_ERROR_INFO(DeleteVertexArrays));
	}

	static GLboolean IsA(GLuint name)
	{
		assert(name != 0);
		GLboolean result = OGLPLUS_GLFUNC(IsVertexArray)(name);
		OGLPLUS_VERIFY(OGLPLUS_ERROR_INFO(IsVertexArray));
		return result;
	}
};

/// Vertex array binding operations
template <>
class BindingOps<tag::VertexArray>
{
protected:
	static GLuint _binding(void)
	{
		GLint name = 0;
		OGLPLUS_GLFUNC(GetIntegerv)(GL_VERTEX_ARRAY_BINDING, &name);
		OGLPLUS_VERIFY(OGLPLUS_ERROR_INFO(GetIntegerv));
		return name;
	}
public:
	/// Returns the currently bound VertexArray
	/**
	 *  @glsymbols
	 *  @glfunref{GetIntegerv}
	 */
	static VertexArrayName Binding(void)
	{
		return VertexArrayName(_binding());
	}

	/// Binds the specified @p vertex_array object
	/**
	 *  @glsymbols
	 *  @glfunref{BindVertexArray}
	 */
	static void Bind(VertexArrayName vertex_array)
	{
		OGLPLUS_GLFUNC(BindVertexArray)(GetGLName(vertex_array));
		OGLPLUS_VERIFY(OGLPLUS_OBJECT_ERROR_INFO(
			BindVertexArray,
			VertexArray,
			nullptr,
			GetGLName(vertex_array)
		));
	}
};

/// Common vertex array operations
/** @note Do not use this class directly, use VertexArray
 *  or NoVertexArray instead.
 */
template <>
class CommonOps<tag::VertexArray>
 : public VertexArrayName
 , public BindingOps<tag::VertexArray>
{
protected:
	CommonOps(void){ }
public:
	using BindingOps<tag::VertexArray>::Bind;

	/// Binds this vertex array object
	/**
	 *  @glsymbols
	 *  @glfunref{BindVertexArray}
	 */
	void Bind(void) const
	{
		Bind(*this);
	}
};


/// VertexArray operations with explicit selector
typedef ObjectOps<tag::ExplicitSel, tag::VertexArray>
	VertexArrayOps;

/// An @ref oglplus_object encapsulating vertex array zero functionality
/**
 *  @ingroup oglplus_objects
 */
typedef ObjectZero<ObjZeroOps<tag::ExplicitSel, tag::VertexArray>>
	NoVertexArray;

/// An @ref oglplus_object encapsulating vertex array object functionality
/**
 *  @ingroup oglplus_objects
 */
typedef Object<VertexArrayOps> VertexArray;

} // namespace oglplus

#endif // include guard
