#include <iostream>

using namespace std;
// Base Class
class Pokemon {
      public:
       void setWidth(int w) {
            width = w;
            }
    
      void setHeights(int h) {
           height=h;
      }
     protected:
      int width;
      int height;
 };
 
 //Derived class
 class Starters: public Pokemon{
       public:
       int getArea() {
           return (width*height);
         }
 };

