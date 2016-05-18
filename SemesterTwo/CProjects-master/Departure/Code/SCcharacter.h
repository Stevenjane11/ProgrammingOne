
#pragma once

#ifndef player_h
#define player_h


#endif /* player_h */

#include <iostream>
#include <string>
#include <SDL2/SDL.h>
#include "sprites.h"
#include "setup.h"
#include "scene.h"
using namespace std;

class character {
public:
    character(setup* startSetup, float *cameraX, float *cameraY);
    ~character(void);
    
    void update();
    void draw();
private:
    setup* startSetup;
    
    sprites* player;
    
    scene* scene1;
    
    float *cameraX;
    float *cameraY;
    
    bool moveUp;
    bool moveDown;
    bool moveRight;
    bool moveLeft;
};
