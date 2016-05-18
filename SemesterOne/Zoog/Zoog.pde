//Tanner Jones

void setup(){
  size(200,200);
}

void draw(){
  background(255);
  
  //Set Center Mode
  rectMode(CENTER);
  
  //Draw Zoog's Body
  stroke(0);
  fill(150);
  rect(100,100,20,100);
  
  //Draw Zoog's Head
  stroke(0);
  fill(255);
  ellipse(100,70,60,60);
  
  //Draw Zoog's Eyes
  fill(0);
  ellipse(81,70,16,32);
  ellipse(119,70,16,32);
  
  //Draw Zoog's Legs
  stroke(0);
  line(90,150,80,160);
  line(110,150,120,160);
}
