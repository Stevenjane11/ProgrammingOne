//Tanner Jones

void setup(){
  size(400,400);
  background(222,184,135);
  frameRate(2);
}

void draw(){
  background(222,184,135);
  strokeWeight(3);
  fill(255);
  ellipse(width/2,height/2,random(200,400),random(200,400));
  fill(0);
  line(int(random(150,250)),240,int(random(150,250)),240);
  line(width/2,int(random(100,240)),width/2,int(random(200,240)));
  ellipse(width/2-50,height/2-50,int(random(15,25)),int(random(15,25)));
  ellipse(width/2+50,height/2-50,int(random(15,25)),int(random(15,25)));
}
