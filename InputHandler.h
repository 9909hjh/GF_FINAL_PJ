#pragma once
#include "SDL.h"
#include "Vector2D.h"
#include "vector"

enum mouse_buttons {
    LEFT = 0,
    MIDDLE = 1,
    RIGHT = 2
};

class InputHandler {
public:
    InputHandler();
    ~InputHandler() {}
    static InputHandler* Instance() {
        if (s_pInstance == 0) {
            s_pInstance = new InputHandler();
        }
        return s_pInstance;
    }
    bool isKeyDown(SDL_Scancode key);
    void update();
    void clean() {}

    // Ű�Է� �� ���� �Լ�
    void onMouseMove(SDL_Event event);
    void onMouseButtonDown(SDL_Event event);
    void onMouseButtonUp(SDL_Event event);
    void onKeyDown();
    void onKeyUP();

    // ���콺 �������� ���� �Լ�
    bool getMouseButtonState(int buttonNumber);
    Vector2D* getMousePosition(); // ���콺 �κ�

private:

    static InputHandler* s_pInstance;
    const Uint8* m_keystates;

    std::vector<bool> m_mouseButtonStates;
    Vector2D* m_mousePosition; // ���콺 �κ�
};
typedef InputHandler TheInputHandler;