#pragma once
#include "GameState.h"
#include <SDL_mixer.h>
#include "SDL_ttf.h"

class MenuState : public GameState
{
public:
	// ��� ���� ���� ���� �Լ��� ���� �Դϴ�.
	virtual void update();
	virtual void render();
	virtual bool onEnter();
	virtual bool onExit();
	virtual std::string getStateID() const { return s_menuID; }

	static MenuState* Instance()
	{
		if (s_pInstance == 0) {
			s_pInstance = new MenuState();
		}
		return s_pInstance;
	}

private:
	static const std::string s_menuID;
	static void s_menuToPlay(); // ���۹�ư�� �������� �����մϴ�.
	static void s_exitFromMenu(); // ������ ��ư�� �������� �����մϴ�.

	Mix_Music* Startbgm; // ������� ������ִ� ��������Դϴ�.
	

	MenuState() {};
	static MenuState* s_pInstance;
};