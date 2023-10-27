#pragma once
#ifndef GAMEOBJECT_HPP_INCLUDED
#define GAMEOBJECT_HPP_INCLUDED

#include "Game.hpp"
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "TextureManager.hpp"

class GameObject{

public:
    GameObject(const char* texturesheet, SDL_Renderer* ren);
    ~GameObject();

    void update();
    void render();

private:

    int xpos;
    int ypos;

    SDL_Texture* objTexture;
    SDL_Rect srcRect;
    SDL_Rect desRect;
    SDL_Renderer* renderer;

};
#endif // GAMEOBJECT_HPP_INCLUDED