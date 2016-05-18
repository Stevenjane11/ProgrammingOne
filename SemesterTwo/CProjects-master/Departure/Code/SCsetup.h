#pragma once

#ifndef setup_h
#define setup_h


#endif /* setup_h */

#include <SDL2/SDL.h>

class setup {
public:
    setup(bool* quit);
    ~setup(void);
    
    SDL_Renderer* getRender();
    SDL_Event* getStandardEvent();
    
    void start();
    void end();
private:
    SDL_Window* window;
    SDL_Renderer* render;
    SDL_Event* stdEvent;
};
