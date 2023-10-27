#ifndef GAME_HPP_INCLUDED
#define GAME_HPP_INCLUDED

#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include<iostream>

using namespace std;

class Game {

public:
    Game();
    ~Game();

    void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
    void handleEvent();
    void update();
    void render();
    void clean();

    bool running() { return isRunning;}



private:
    bool isRunning=false;
    SDL_Window *window;
    SDL_Renderer *renderer;
};


#endif // GAME_HPP_INCLUDED