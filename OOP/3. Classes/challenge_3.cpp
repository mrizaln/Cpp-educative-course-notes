// implement a calculator class

#include <iostream>
using namespace std;

class calculator{
  float num1, num2;

  public:
  calculator() {
    num1 = 0;
    num2 = 0;
  }

  int add(float n1, float n2){
    return n1 + n2;
  }

  float subtract(float n1, float n2){
    return n2 - n1;
  }

  float multiply(float n1, float n2){
    return n1 * n2;
  }

  float divide(float n1, float n2){
    return n2 / n1;
  }
};