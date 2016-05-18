//Tanner Jones

int x, y;

void setup() {
  size(400, 400);
  frameRate(10);
  x=100;
  y=100;
  strokeWeight(2);
  stroke(0);
}

void draw() {
  fill(255);
  keyPressed();
}

void mouseClicked() {
  saveFrame("Sketch-######.png");
}


void moveRight(int rep) {
  for (int i=0; i<rep*10; i++) {
    point(x+i, y);
  }
  x=x+(10*rep);
}

void moveLeft(int rep) {
  for (int i=0; i<rep*10; i++) {
    point(x-i, y);
  }
  x=x-(10*rep);
}

void moveDown(int rep) {
  for (int i=0; i<rep*10; i++) {
    point(x, y+i);
  }
  y=y+(10*rep);
}

void moveUp(int rep) {
  for (int i=0; i<rep*10; i++) {
    point(x, y-i);
  }
  y=y-(10*rep);
}

/*void drawName() {
 moveDown(5);
 moveRight(10);
 moveLeft(5);
 moveDown(15);
 moveRight(7);
 moveRight(10);
 moveUp(7);
 moveLeft(10);
 moveUp(8);
 moveRight(10);
 moveRight(7);
 moveRight(10);
 moveLeft(5);
 moveDown(15);
 moveLeft(8);
 }
 */
void keyPressed() {
  println(keyCode);
  if (key == CODED) {
    if (keyCode == RIGHT) {
      if (x>=width) {
        x=width;
      }
      moveRight(1);
    } else if (keyCode == UP) {
      if (y<=1) {
        y=100;
      }
      moveUp(1);
    } else if (keyCode == LEFT) {
      if (x<=0) {
        x=1;
      }
      moveLeft(1);
    } else if (keyCode == DOWN) {
      if (y>=height) {
        y=height;
      }
      moveDown(1);
    }
  }
}