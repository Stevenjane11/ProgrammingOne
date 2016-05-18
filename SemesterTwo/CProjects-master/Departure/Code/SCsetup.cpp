#include <iostream>
#include "setup.h"
using namespace std;

setup::setup(bool* quit) {
    window = NULL;
    //Sets window bounds(name, xint, yint, width, height, how window is displayed)
    window = SDL_CreateWindow("RPG", 0, 0, 1000, 1000, SDL_WINDOW_SHOWN);
    //Closes app if window cannot be created
    if(window == NULL) {
        cout << "Error creating window" << endl;
        *quit = true;
    }
    
    render = NULL;
    render = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    
    stdEvent = new SDL_Event();
}

setup::~setup() {
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(render);
    delete stdEvent;
}

SDL_Renderer* setup::getRender() {
    return render;
}

SDL_Event* setup::getStandardEvent() {
    return stdEvent;
}

void setup::start() {
    SDL_PollEvent(stdEvent);
    SDL_RenderClear(render);
}

void setup::end() {
    SDL_RenderPresent(render);
}
