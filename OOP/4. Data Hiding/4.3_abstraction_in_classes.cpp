// Abstraction is the second component of data hiding in OOP.
// It is an extension of encapsulation and further simplifies the structure of programs.

// Abstraction focuses on revealing only the relevant parts of the application while keeping the inner implementation hidden.

#include <iostream>
using namespace std;

class Circle{
  double radius;
  double pi;
  
  public:
  Circle (){
    radius = 0;
    pi = 3.142;
  }
  Circle(double r){
    radius = r;
    pi = 3.142;
  }
  
  double area(){
    return pi * radius * radius;
  }
  
  double perimeter(){
    return 2 * pi * radius;
  }
};

int main() {
  Circle c(5);
  cout << "Area: " << c.area() << endl;
  cout << "Perimeter: " << c.perimeter() << endl;
}