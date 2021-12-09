#pragma once
#include "GameState.h"
#include <SDL_mixer.h>
#include <vector>

class GameObject;

class GameOverState : public GameState
{
public:
	virtual void update();
	virtual void render();
	virtual bool onEnter();
	virtual bool onExit();
	virtual std::string getStateID() const { return s_gameOverID; }

	static GameOverState* Instance()
	{
		if (s_pInstance == 0) {
			s_pInstance = new GameOverState();
		}
		return s_pInstance;
	}

private:
	static const std::string s_gameOverID;
	static void s_gameOverToMain();
	static void s_restartPlay();

	Mix_Music* overbgm;

	GameOverState() {};
	static GameOverState* s_pInstance;
};