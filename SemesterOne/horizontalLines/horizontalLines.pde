//Tanner Jones  

void setup(){
  size(200,200);
}

void draw(){
  forHoriz();
}

void forHoriz(){
  for(int i=0;i<=height;i+=20){
    line(0,i,width,i);
  }
}


void whileHoriz(){
  int i=0;
  while(i<=height){
    line(0,i,width,i);
    i+=20;
  }
}
