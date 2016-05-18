//Tanner Jones
//The IDE

//Declaring Global Vaiables
int xspeed, yspeed;
int xpos, ypos, wdth, ht;
void setup(){
  
  size(displayWidth, displayHeight);
  background(0);
  xspeed = 0;
  yspeed = 10;
  wdth = 20;
  ht = 20;
  noStroke();
  xpos = width/2;
  ypos = height/2;
  frameRate(60);
  
}

void draw(){
  
  //uncomment to show colors
  //background(255);
  fill(255);
  ellipse(xpos/2,ypos,wdth,ht);
  ellipse(xpos,ypos,wdth,ht);
  xpos += xspeed;
  ypos += yspeed;
  if (xpos >= width-wdth/2 || xpos<= wdth/2){
    xspeed *= -1;
  }
  if(ypos >= height-ht/2 || ypos <= ht/2){
    yspeed *= -1;
  }
  
}
