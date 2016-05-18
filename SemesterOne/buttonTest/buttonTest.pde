//Tanner Jones

void setup(){
  size(900,900);
  background(255);
}

void draw(){
  button("Test",10,10,90,100);
  button("Test",100,300,90,100);
  button("Test",300,300,100,50);
}

void button(String bText,int x,int y,int w,int h){
  fill(195);
  noStroke();
  rect(x+5,y+5,x+w+5,y+h+5,20);
  fill(255,0,0);
  strokeWeight(5);
  rect(x,y,x+w,y+h,20);
  fill(0);
  textSize(25);
  text(bText,(x+w)/2+x,(y+h)/2+y);
}
