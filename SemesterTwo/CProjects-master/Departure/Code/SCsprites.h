#pragma once

#ifndef sprites_h
#define sprites_h


#endif /* sprites_h */

#include <iostream>
#include <string>
#include <SDL2/SDL.h>
using namespace std;

class sprites {
public:
    sprites(SDL_Renderer* newRender, string filePath, int x, int y, int w, int h, float *cameraX, float *cameraY);
    ~sprites(void);
    
    void draw();
    
    void moveX(int x);
    void moveY(int y);
    void moveXY(int x, int y);
    int getX();
    int getY();
    
    void spriteChange(string filePath);
    int getSprite();
private:
    SDL_Texture* image;
    SDL_Rect rectangle;
    
    SDL_Texture* collisionIMG;
    
    SDL_Rect Camera;
    
    SDL_Renderer* render;
    
    float *cameraX;
    float *cameraY;
};
