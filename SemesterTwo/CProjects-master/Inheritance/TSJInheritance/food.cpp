#include <iostream>

using namespace std;

class Food{
  public:
  void setType(int t){
    type = t;
  }
  protected:
  int type
};

class Vegetation: public Food{
  public:
  int getType(){
    return Vegetation;
  }
};

class Animal: public Food{
  public:
  int getType(){
    return Animal;
  }
}

int main(void){
  Food Food;
  cout << "Is your food vegetation? (Y/N)"
  cin >> curType;
  if(curType = y){
    Food.setType(0);
  }
  else{
    Food.setType(1);
  }
  if(type = 0){
    cout << "Your food is " "Vegetation."
  }
  else{
    cout << "Your food is an " "Animal Product."
  }
}
