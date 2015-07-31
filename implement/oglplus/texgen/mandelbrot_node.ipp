/**
 *  @file oglplus/texgen/mandelbrot_node.ipp
 *
 *  @author Matus Chochlik
 *
 *  Copyright 2010-2015 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

#include <oglplus/config/basic.hpp>
#include <sstream>
#include <cassert>

namespace oglplus {
namespace texgen {

OGLPLUS_LIB_FUNC
MandelbrotOutputSlot::
MandelbrotOutputSlot(Node& parent)
 : _coord(parent, "Coord")
 , _offset(parent, "Offset", Vec3f(-0.75f,-0.5f,0))
 , _scale(parent, "Scale", Vec3f(2,2,1))
{ }

OGLPLUS_LIB_FUNC
const char*
MandelbrotOutputSlot::
TypeName(void)
{
	return "Mandelbrot";
}

OGLPLUS_LIB_FUNC
SlotDataType
MandelbrotOutputSlot::
ValueType(void)
{
	return SlotDataType::FloatVec2;
}

OGLPLUS_LIB_FUNC
String
MandelbrotOutputSlot::
Definitions(unsigned version)
{
	std::stringstream result;
	result << _coord.Definitions(version);
	result << _offset.Definitions(version);
	result << _scale.Definitions(version);

	result << "vec2 ";
	AppendId(result);
	result << "(vec3 o)\n";
	result << "{\n";
	result << "	vec2 z = vec2(0.0, 0.0);\n";
	result << "	vec3 k = " << _coord.Expression(version) << "(o);\n";
	result << "	k += " << _offset.Expression(version) << "(o);\n";
	result << "	k *= " << _scale.Expression(version) << "(o);\n";
	result << "	vec2 c = k.xy;\n";
	result << "	int i = 0;\n";
	result << "	const int max = 128;\n"; // TODO variable max?
	result << "	while((i < max) && (distance(z, c) < 2.0))\n";
	result << "	{\n";
	result << "		z = vec2(\n";
	result << "			z.x * z.x - z.y * z.y + c.x,\n";
	result << "			2.0 * z.x * z.y + c.y\n";
	result << "		);\n";
	result << "		++i;\n";
	result << "	}\n";
	result << "	return vec2(\n";
	result << "		float(i)/float(max),\n";
	result << "		distance(z, c)*0.5\n";
	result << "	);\n";
	result << "}\n";
	return String(result.str());
}

OGLPLUS_LIB_FUNC
MandelbrotNode::
MandelbrotNode(void)
 : _output(*this)
{ }

OGLPLUS_LIB_FUNC
std::size_t
MandelbrotNode::
InputCount(void)
{
	return 3;
}

OGLPLUS_LIB_FUNC
InputSlot&
MandelbrotNode::
Input(std::size_t i)
{
	assert(i < InputCount());
	if(i == 0) return _output._coord;
	if(i == 1) return _output._offset;
	return _output._scale;
}

OGLPLUS_LIB_FUNC
std::size_t
MandelbrotNode::
OutputCount(void)
{
	return 1;
}

OGLPLUS_LIB_FUNC
OutputSlot&
MandelbrotNode::
Output(std::size_t i)
{
	assert(i < OutputCount());
	return _output;
}

} // namespace texgen
} // namespace oglplus

