#version 460 core
layout (location = 0) in vec3 in_Position; 
layout (location = 1) in vec3 in_Normal; 
layout (location = 2) in vec2 in_TexCoord; 

layout (location = 0) out vec2 out_TexCoord; 
layout (location = 1) out flat vec3 out_CameraPos; 

layout(std140, binding = 0) uniform block1
{
	mat4 u_ViewProjection;
	vec3 u_CameraPos;
};

void main()
{
    gl_Position = u_ViewProjection * vec4(in_Position, 1.0);
	out_TexCoord = in_TexCoord;
	out_CameraPos = u_CameraPos;
}