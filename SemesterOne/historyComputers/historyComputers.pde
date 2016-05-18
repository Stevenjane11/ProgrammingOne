//Tanner Jones

void setup(){
  size(900,400);
  background(100);
}

void draw(){
  fill(255);
  textSize(30);
  text("Historic Computer Systems",250,50);
  stroke(0);
  strokeWeight(3);
  line(75,210,825,210);
  histEvent("Test",45,100,90,100);
  /*histEvent("Test",100,300,90,100);
  histEvent("Test",300,300,100,50);*/
}

void histEvent(String bText,int x,int y,int w,int h){
  
  fill(0);
  textSize(25);
  text(bText,x,y);
  stroke(0);
  strokeWeight(1);
  line(x+25,y+10,x+30,210);
}
