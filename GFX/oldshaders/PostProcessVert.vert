#version 110

varying vec4 tcoords;
varying float iminBlur;
varying float imaxBlur;

uniform float minBlur;
uniform float maxBlur;

void main(void)
{
	iminBlur = minBlur; imaxBlur = maxBlur;
	vec4 vertex = gl_Vertex;
	
	vertex*=vec4(2.0,2.0,1.0,1.0);
	vertex+=vec4(-1.0,-1.0,0.0,0.0);
	vertex.z = 0.0;
	
	tcoords = gl_Vertex;
	gl_Position = vertex;
}
