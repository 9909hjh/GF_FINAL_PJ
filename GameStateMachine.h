#pragma once
#include "GameState.h"
#include <vector>

class GameStateMachine
{
public:
    void changeState(GameState* pState); // ���¸� �ٲ��ִ� ������ �մϴ�.
    void popState();
    void update();
    void render();
    GameState* m_currentState; // ���� ���¸� äũ
    GameState* m_prevState; // ���� ���¸� äũ
};