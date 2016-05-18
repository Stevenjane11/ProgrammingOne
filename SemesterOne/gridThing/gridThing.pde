//Tanner Jones

void setup(){
  size(1000,1000);
  
}

void draw(){
  background(150);
  grid();
  noLoop();line(0,100,width,100);
}

void grid(){
  for(int i=0;i<=width;i+=100){
    line(0,i,width,i); //Horizontal Lines
    line(i,0,i,height); //Vertical Lines
    text(i,5,i);
    text(i,i,10);
  }
}
