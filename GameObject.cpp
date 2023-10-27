#include "Game.hpp"
#include "GameObject.hpp"
#include "TextureManager.hpp"

GameObject::GameObject(const char* texture, SDL_Renderer* ren)
{
    renderer = ren;
    objTexture = TextureManager::LoadTexture(texture, renderer);
}
/*
GameObject::~GameObject()
{

}*/

void GameObject::update()
{
    xpos = 100;
    ypos = 100;

    srcRect.x = 0;
    srcRect.y = 0;
    srcRect.h = 108;
    srcRect.w = 106;
    

    desRect.x = xpos;
    desRect.y = ypos;
    desRect.h = 108/2;
    desRect.w = 106/2;
    
}

void GameObject::render()
{
    SDL_RenderCopy(renderer, objTexture, &srcRect, &desRect);
}

