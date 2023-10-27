#pragma once
#ifndef TEXTUREMANAGER_HPP_INCLUDED
#define TEXTUREMANAGER_HPP_INCLUDED

#include"SDL2/SDL.h"
#include<SDL2/SDL_image.h>
#include<iostream>


class TextureManager
{

public:
    static SDL_Texture* LoadTexture(const char* filename, SDL_Renderer* renderer);


private:
    /* data */

};



#endif // TEXTUREMANAGER_HPP_INCLUDED