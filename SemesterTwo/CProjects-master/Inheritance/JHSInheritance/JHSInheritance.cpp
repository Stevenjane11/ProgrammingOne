#include <iostream>
using namespace std;

class Donuts {
      public:
             void getDozens(int d) {
                  dozens = d;
                  }
             void getDonutsPerDozen(int yum) {
                  donuts = yum;
                  }
      protected:
                int dozens;
                int donuts;
};
                  
class Purchase: public Donuts {
      public:
             int getAmount() {
                 return(dozens * donuts);
                 }
};

int main(){
    Purchase item;
    
    int dozens;
    int donuts;
    
    cout << "How many donuts per dozen?: ";
    cin >> donuts;
    cout << "How many dozens?: ";
    cin >> dozens;
    
    item.getDonutsPerDozen(donuts);
    item.getDozens(dozens);
    
    return 0;
}
