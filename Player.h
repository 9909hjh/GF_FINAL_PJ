#pragma once
#include "SDLGameObject.h"

class Player : public SDLGameObject
{
public:
	Player(const LoaderParams* pParams);
	virtual void draw();
	virtual void update();
	virtual void clean();
	void handleInput();
	void checkColl();


private:
	bool isGround = true; //���� �ִ��� �Ǻ�
	bool isJump = false; //������ �������� �Ǻ�
	float verticalVel;
	int JumpForce = 20; // ���� ����.
};