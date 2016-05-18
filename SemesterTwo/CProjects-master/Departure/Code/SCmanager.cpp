#include <iostream>
#include <string>
#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include "manager.h"
#include "setup.h"
#include "sprites.h"
#include "character.h"
#include "scene.h"
#include "enemy1.h"
using namespace std;

manager::manager(void) {
    quit = false;
    
    screenWidth = 1000;
    screenHeight = 1000;
    
    cameraX = 100;
    cameraY = 100;
    
    startSetup = new setup(&quit);
    
    player = new character(startSetup, &cameraX, &cameraY);
    
    scene1 = new scene(startSetup, screenWidth, screenHeight, &cameraX, &cameraY);
}

manager::~manager(void) {
    delete startSetup;
    delete player;
}

void manager::gameManager(void) {
    //Keeps updating window if application is open
    while(!quit && startSetup->getStandardEvent()->type != SDL_QUIT) {
        
        startSetup->start();
        
        scene1->draw();
        
        player->draw();
        player->update();
        
        startSetup->end();
    }
}
