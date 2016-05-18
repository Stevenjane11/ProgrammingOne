#include <iostream>
#include "character.h"
#include "manager.h"
#include "setup.h"
#include "sprites.h"
using namespace std;

bool moveUp = false;
bool moveDown = false;
bool moveRight = false;
bool moveLeft = false;

string PlayerDown = "PlayerDown.png";
string PlayerUp = "PlayerUp.png";
string PlayerRight = "PlayerRight.png";
string PlayerLeft = "PlayerLeft.png";
string PlayerTexture;

character::character(setup* startSetupPlayer, float *playerCameraX, float *playerCameraY) {
    startSetup = startSetupPlayer;
    
    //scene1 = sceneLevel1;
    
    PlayerTexture = PlayerDown;
    
    cameraX = playerCameraX;
    cameraY = playerCameraY;
    
    player = new sprites(startSetup->getRender(), "PlayerDown.png", 200, 200, 100, 100, cameraX, cameraY);
    //cameraSprite = new sprites(startSetup->getRender(), NULL, 100, 100, 100, 100, 100, cameraX, cameraY);
    
}

character::~character(void) {
    delete player;
}

void character::update() {
    switch (startSetup->getStandardEvent()->type) {
        case SDL_KEYDOWN:
            
            switch(startSetup->getStandardEvent()->key.keysym.sym) {
                case SDLK_w:
                    moveUp = true;
                    break;
                case SDLK_s:
                    moveDown = true;
                    break;
                case SDLK_d:
                    moveRight = true;
                    break;
                case SDLK_a:
                    moveLeft = true;
                    break;
                default:
                    break;
            }
            
            break;
        case SDL_KEYUP:
            
            switch(startSetup->getStandardEvent()->key.keysym.sym) {
                case SDLK_w:
                    moveUp = false;
                    break;
                case SDLK_s:
                    moveDown = false;
                    break;
                case SDLK_d:
                    moveRight = false;
                    break;
                case SDLK_a:
                    moveLeft = false;
                    break;
                default:
                    break;
            }
        default:
            break;
    }
    
    if(moveUp) {
        player->moveY(*cameraY -= 1);
    }
    if(moveDown) {
        player->moveY(*cameraY += 1);
    }
    if(moveRight) {
        player->moveX(*cameraX += 1);
    }
    if(moveLeft) {
        player->moveX(*cameraX -= 1);
    }
}

void character::draw() {
    player->draw();
}
