/*
 *  Copyright 2014 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

//[oglplus_context_Rasterization1
namespace oglplus {
namespace context {

class Rasterization
{
public:
	static void FrontFace(__FaceOrientation orientation); /*<
	Sets the polygon facing mode.
	See [glfunc FrontFace].
	>*/

	static void CullFace(__Face mode); /*<
	Sets the face culling mode.
	See [glfunc CullFace].
	>*/

#if GL_VERSION_3_0
	static void PolygonMode(__Face face, __PolygonMode mode); /*<
	Sets the polygon rasterization mode.
	See [glfunc PolygonMode].
	>*/

	static void PolygonMode(__PolygonMode mode); /*<
	Sets the polygon rasterization mode.
	See [glfunc PolygonMode].
	>*/

	static __PolygonMode PolygonMode(void); /*<
	Returns the face culling mode.
	See [glfunc Get], [glconst POLYGON_MODE].
	>*/
#endif

	static void PolygonOffset(GLfloat factor, GLfloat units); /*<
	Sets the polygon depth offset.
	See [glfunc PolygonOffset].
	>*/

	static GLfloat PolygonOffsetFactor(void); /*<
	Returns the current polygon offset factor.
	See [glfunc Get], [glconst POLYGON_OFFSET_FACTOR].
	>*/
	static GLfloat PolygonOffsetUnits(void); /*<
	Returns the current polygon offset units.
	See [glfunc Get], [glconst POLYGON_OFFSET_UNITS].
	>*/

	static void LineWidth(GLfloat width); /*<
	Sets the line current width.
	See [glfunc LineWidth].
	>*/

	static GLfloat LineWidth(void); /*<
	Returns the line width.
	See [glfunc Get], [glconst LINE_WIDTH].
	>*/

#if GL_VERSION_3_0
	static void PointSize(GLfloat size); /*<
	Sets the point size.
	See [glfunc PointSize].
	>*/

	static GLfloat PointSize(void); /*<
	Returns the current point size.
	See [glfunc Get], [glconst POINT_SIZE].
	>*/

	static void PointFadeThresholdSize(GLfloat size); /*<
	Sets the point fade threshold size.
	See [glfunc PointParameter], [glconst POINT_FADE_THRESHOLD_SIZE].
	>*/

	static GLfloat PointFadeThresholdSize(void); /*<
	Returns the current point fade threshold size.
	See [glfunc Get], [glconst POINT_FADE_THRESHOLD_SIZE].
	>*/
#endif
//]
//[oglplus_context_Rasterization2
#if GL_VERSION_3_2 || GL_ARB_provoking_vertex
	static void ProvokingVertex(__ProvokeMode mode); /*<
	Sets the provoking vertex selection mode for flatshading.
	See [glfunc ProvokingVertex].
	>*/

	static __ProvokeMode ProvokingVertex(void); /*<
	Returns the provoking vertex selection mode for flatshading.
	See [glfunc Get], [glconst PROVOKING_VERTEX].
	>*/
#endif

	static GLint SampleBuffers(void); /*<
	Returns the number of sample buffers.
	See [glfunc Get], [glconst SAMPLE_BUFFERS].
	>*/

	static GLint Samples(void); /*<
	Returns the number of multisampling samples.
	See [glfunc Get], [glconst SAMPLES].
	>*/

#if GL_VERSION_4_0
	static void MinSampleShading(GLfloat value); /*<
	Sets the multisampling minimal sample shading value.
	See [glfunc MinSampleShading].
	>*/

	static GLfloat MinSampleShading(void); /*<
	Returns the minimal sample shading value.
	See [glfunc Get], [glconst MIN_SAMPLE_SHADING_VALUE].
	>*/
#endif
};

} // namespace context
} // namespace oglplus
//]
