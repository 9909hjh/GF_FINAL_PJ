#pragma once
#include "GameObject.h"
#include "SDL.h"
#include "Vector2D.h"

class SDLGameObject : public GameObject {
public:
	SDLGameObject(const LoaderParams* pParams);
	virtual void drawFrame(); // drawFrame()�Լ� �߰�.
	virtual void draw(); //
	virtual void update();
	virtual void clean() {};

	Vector2D GetPos() const { return m_position; }
	int GetWidth() const { return m_width; }
	int GetHeight() const { return m_height; }

	virtual ~SDLGameObject() {}

protected:
	Vector2D m_position;

	Vector2D m_velocity;
	Vector2D m_acceleration;

	SDL_RendererFlip flip;

	int m_width;
	int m_height;
	int m_rotationAngle; // ȸ���� ���� �߰�
	int m_currentRow;
	int m_currentFrame;

	std::string m_textureID;
};