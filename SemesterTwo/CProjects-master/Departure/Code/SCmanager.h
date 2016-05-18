#pragma once

#ifndef manager_h
#define manager_h

#endif /* manager_h */

#include <SDL2/SDL.h>
#include "setup.h"
#include "sprites.h"
#include "character.h"
#include "scene.h"
#include "enemy1.h"

class manager {
public:
    manager(void);
    ~manager(void);
    
    void gameManager();
private:
    character *player;
    
    bool quit;
    
    setup* startSetup;
    
    scene* scene1;
    
    int screenWidth;
    int screenHeight;
    
    float cameraX;
    float cameraY;
    
    bool moveUp;
    bool moveDown;
    bool moveRight;
    bool moveLeft;
};
