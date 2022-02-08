// make a Rectangle class with length and height data member in float, also two member funtions (perimeter and area). all public


#include <iostream>
using namespace std;

class Rectangle {

  public:

  float length;
  float height;

  Rectangle(float l, float h){
    length = l;
    height = h;
  }

  float perimeter() {
    return 2 * (length + height);
  }

  float area() {
    return length * height;
  }
};

int main(){
    Rectangle adsf(213.24, 32.1);
    cout << "Perimeter: " << adsf.perimeter() << endl;
    cout << "Area     : " << adsf.area() << endl;
}