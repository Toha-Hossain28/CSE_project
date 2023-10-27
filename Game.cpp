#include "Game.hpp"
#include "TextureManager.hpp"
#include "GameObject.hpp"

//SDL_Texture* Wball;
GameObject* ball1;

Game::Game() {
}

Game::~Game()
{}

void Game::init(const char *title, int xpos, int ypos, int width, int height, bool fullscreen)
{
    int flags = 0;
    if (fullscreen)
    {
        flags = SDL_WINDOW_FULLSCREEN;
    }

    if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
    {
        std::cout << "SDL initialized!!" << std::endl;

        window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
        if (window)
        {
            std::cout << "window created!" << std::endl;
        }
        renderer = SDL_CreateRenderer(window, -1, 0);
        if (renderer)
        {
            SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
            std::cout << "renderer created!" << std::endl;
        }
        isRunning = true;
    }
    else {
        isRunning = false;
    }

    //Wball = TextureManager::LoadTexture("imgs/Colored Pool Balls-w.png", renderer);
    ball1 = new GameObject("imgs/Colored Pool Balls-1.png", renderer);
}

void Game::handleEvent()
{
    SDL_Event event;
    SDL_PollEvent(&event);
    switch (event.type) {
        case SDL_QUIT:
            isRunning = false;
            break;
    }
}

void Game::update()
{
    ball1->update();
}

void Game::render()
{
    SDL_RenderClear(renderer);
    // Stuffs to render
    //SDL_RenderCopy(renderer, Wball, NULL, NULL);
    ball1->render();
    SDL_RenderPresent(renderer);
}

void Game::clean()
{
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
    std::cout << "Flushed!" << std::endl;
}
