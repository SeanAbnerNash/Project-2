#include "Player.h"



Player::Player()
{
	m_xRotation = 0;
	m_yRotation = 0;
	m_zRotation = 0;
}


Player::~Player()
{
}

void Player::rotateView(vec3 t_rotation)
{
	m_xRotation += t_rotation.x;
	m_yRotation += t_rotation.y;
	m_zRotation += t_rotation.z;
}

mat4 Player::getLeftView()
{
	return m_viewLeft;
}

mat4 Player::getRightView()
{
	return m_viewRight;
}

vec3 Player::getRotation()
{
	return vec3(m_xRotation, m_yRotation, m_zRotation);
}
