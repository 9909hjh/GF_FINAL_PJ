#include "YTrap.h"

YTrap::YTrap(const LoaderParams* pParams) : SDLGameObject(pParams) {}

void YTrap::draw()
{
	SDLGameObject::drawFrame();
}

void YTrap::update()
{
	if (m_position.getY() <= 200)
	{
		m_velocity.setY(10);
	}
	else if (m_position.getY() >= 300)
		m_velocity.setY(-10);

	m_rotationAngle += cloudAngspeed;

	SDLGameObject::update();
}

void YTrap::clean() {}