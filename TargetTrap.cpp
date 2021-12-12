#include "TargetTrap.h"
#include "InputHandler.h"

TargetTrap::TargetTrap(const LoaderParams* pParams) : SDLGameObject(pParams) {}

void TargetTrap::draw()
{
	SDLGameObject::drawFrame();
}

void TargetTrap::update()
{
	PlayerTarget();

	m_rotationAngle += cloudAngspeed;

	SDLGameObject::update();
}

void TargetTrap::clean() {}

void TargetTrap::PlayerTarget()
{
	
	if (SDL_GetTicks() > 5000) // �����̸� ���ؼ� ���콺�� ���󰡴� ������ �ð��� �ΰ� ���󰡰� �߽��ϴ�.
	{
		Vector2D* vec = TheInputHandler::Instance()->getMousePosition();

		m_velocity = (*vec - m_position) / 100;
	}

}