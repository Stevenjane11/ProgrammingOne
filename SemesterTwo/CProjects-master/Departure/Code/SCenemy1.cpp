#include "enemy1.h"

enemy1::enemy1(setup* startSetup, int x, int y, float *cameraX, float *cameraY) {
    tpEnemy = new sprites(startSetup->getRender(), "TeePeeEnemy.png", x, y, 200, 200, cameraX, cameraY);

}

enemy1::~enemy1() {
    delete tpEnemy;
}

void enemy1::draw() {
    tpEnemy->draw();
}

