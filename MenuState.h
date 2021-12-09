#pragma once
#include "GameState.h"
#include <SDL_mixer.h>
#include "SDL_ttf.h"

class MenuState : public GameState
{
public:
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
	static void s_menuToPlay();
	static void s_exitFromMenu();

	Mix_Music* Startbgm;
	TTF_Font* font32;
	SDL_Color color = { 0, 0, 0 };

	MenuState() {};
	static MenuState* s_pInstance;
};