#include <iostream>
#include <SDL2_image/SDL_image.h>
#include "sprites.h"
#include "character.h"
using namespace std;

sprites::sprites(SDL_Renderer* newRender, string filePath, int x, int y, int w, int h, float *playerCameraX, float *playerCameraY) {
    render = newRender;
    cameraX = playerCameraX;
    cameraY = playerCameraY;
    
    image = IMG_LoadTexture(render, filePath.c_str());
    if(image == NULL) {
        cout << "Could not load " << filePath << endl;
    }
    rectangle.x = x;
    rectangle.y = y;
    rectangle.w = w;
    rectangle.h = h;
    
    Camera.x = rectangle.x + *cameraX;
    Camera.y = rectangle.y + *cameraY;
    Camera.w = rectangle.w;
    Camera.h = rectangle.h;
}

sprites::~sprites() {
    SDL_DestroyTexture(image);
}

void sprites::draw() {
    Camera.x = rectangle.x - (*cameraX - 400);
    Camera.y = rectangle.y - (*cameraY - 400);

    SDL_RenderCopy(render, image, NULL, &Camera);
    
    //SDL_RenderCopy(render, collisionIMG, NULL, &collisionBox.getCollisionBox());
}

void sprites::moveX(int x) {
    rectangle.x = x;
}

void sprites::moveY(int y) {
    rectangle.y = y;
}

void sprites::moveXY(int x, int y) {
    rectangle.x = x;
    rectangle.y = y;
}

int sprites::getX() {
    return rectangle.x;
}

int sprites::getY() {
    return rectangle.y;
}
