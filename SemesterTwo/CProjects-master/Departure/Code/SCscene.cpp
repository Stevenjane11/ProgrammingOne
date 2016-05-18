#include <iostream>
#include <SDL2/SDL.h>
#include "scene.h"

scene::scene(setup* startSetup, int screenWidth, int screenHeight, float *cameraX, float *cameraY) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            background[i][j] = new sprites(startSetup->getRender(), "dirtfloor.bmp", screenWidth * i, screenHeight * j, screenWidth, screenHeight, cameraX, cameraY);
        }
    }
    
    tpEnemy = new enemy1(startSetup, 300, 300, cameraX, cameraY);
}

scene::~scene(void) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            delete background[i][j];
        }
    }
}

void scene::draw() {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            background[i][j]->draw();
        }
    }
    
    tpEnemy->draw();
}
