#include "Game.hpp"
#include "Game.cpp"
#include "TextureManager.hpp"
#include "TextureManager.cpp"
#include "GameObject.hpp"
#include "GameObject.cpp"

Game *game = nullptr;

int main(int argc, char * argv[]){
    game = new Game();

    game->init("test1", SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,800,640,false);

    while(game->running()) {

    game->handleEvent();
    game->update();
    game->render();

    }

    game->clean();
    return 0;
}
