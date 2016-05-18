//Tanner Jones

void setup(){
  
  background(255,0,255);
  size(displayWidth,displayHeight);
  frameRate(6000);
}

void draw(){
  
  //background(random(255),random(255),random(255));
  fill(random(255),0,random(255));
  ellipse(mouseX,mouseY,random(250),random(250));
}
