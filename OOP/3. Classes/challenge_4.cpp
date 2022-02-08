// calculate distance between points

#include <iostream>
using namespace std;

#include <iostream>
#include <cmath>
using namespace std;

class Point {

  // Private fields
  private:
  int x;
  int y;

  public:

  // Default Constructor
  Point() {
    x = 0;
    y = 0;
  }

  // Parameterized Constructor
  Point(int x, int y) { 
    this -> x = x;
    this -> y = y;
  }


  double distance() {
    return sqrt(x*x + y*y);
  }

  double distance(int x2, int y2) {
    x -= x2; y -= y2;
    return sqrt(x*x + y*y);
  }

};