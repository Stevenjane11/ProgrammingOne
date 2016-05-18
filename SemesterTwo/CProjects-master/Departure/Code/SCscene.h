#pragma once

#ifndef scene_h
#define scene_h

#endif /* scene_h */

#include <iostream>
#include <SDL2/SDL.h>
#include "sprites.h"
#include "setup.h"
#include "enemy1.h"
using namespace std;

class scene {
public:
    scene(setup* startSetup, int screenWidth, int screenHeight, float *cameraX, float *cameraY);
    ~scene(void);
    
    void draw();
private:
    sprites* background[3][3];
    
    enemy1* tpEnemy;
};
