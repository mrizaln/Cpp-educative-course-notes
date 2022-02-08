// Challenge 3: Design a Calculator

#include <iostream>
using namespace std;

double test(double number1, char operate, double number2) {
  double result;
  switch (operate) {
    case '+': result = number1 + number2; break;
    case '-': result = number1 - number2; break;
    case '*': result = number1 * number2; break;
    case '/': result = number1 / number2; break;
    default: result = -1;
  }
  return result;
}

int main() {
  double number1 = 7;
  char operate = '+';
  double number2 = 8;
  double result;
  cout << number1 << operate << number2 << " = ";

  result = test(number1, operate, number2);
  cout << result;
  return 0;
}