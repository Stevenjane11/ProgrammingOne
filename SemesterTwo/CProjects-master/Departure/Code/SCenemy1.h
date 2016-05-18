#pragma once

#ifndef enemy1_h
#define enemy1_h

#endif /* enemy1_h */

#include <iostream>
#include "SDL2/SDL.h"
#include "sprites.h"
#include "setup.h"

class enemy1 {
public:
    enemy1(setup* startSetup, int x, int y, float *cameraX, float *cameraY);
    ~enemy1(void);
    
    void draw();
private:
    sprites* tpEnemy;
};
