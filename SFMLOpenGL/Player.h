#pragma once

#include <GL/glew.h>
#include <GL/wglew.h>


#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

using namespace std;
using namespace glm;

class Player
{
public:
	Player();
	~Player();
	void rotateView(vec3 t_rotation);
	mat4 getLeftView();
	mat4 getRightView();
	vec3 getRotation();

private:
	float m_xRotation;
	float m_yRotation;
	float m_zRotation;


	mat4 m_viewLeft  = lookAt(
			vec3(1.0f, -4.0f, 7.0f),	// Camera (x,y,z), in World Space
			vec3(0.0f, -4.0f, 0.0f),		// Camera looking at origin
			vec3(0.0f, -1.0f, 0.0f)		// 0.0f, 1.0f, 0.0f Look Down and 0.0f, -1.0f, 0.0f Look Up
		);

	mat4 m_viewRight = lookAt(
		vec3(-1.0f, -4.0f, 7.0f),	// Camera (x,y,z), in World Space
		vec3(0.0f, -4.0f, 0.0f),		// Camera looking at origin
		vec3(0.0f, -1.0f, 0.0f)		// 0.0f, 1.0f, 0.0f Look Down and 0.0f, -1.0f, 0.0f Look Up
	);
};

