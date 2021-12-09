#include "XTrap.h"

XTrap::XTrap(const LoaderParams* pParams) : SDLGameObject(pParams) {}

void XTrap::draw()
{
	SDLGameObject::drawFrame();
}

void XTrap::update()
{
	if (m_position.getX() <= 400)
	{
		m_velocity.setX(10);
	}
	else if (m_position.getX() >= 600)
		m_velocity.setX(-10);

	m_rotationAngle += cloudAngspeed;

	SDLGameObject::update();
}

void XTrap::clean() {}