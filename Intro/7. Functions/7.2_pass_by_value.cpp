// default passing method

#include <iostream>

using namespace std;
// function definition
void passValue(int number) {
  // Multiply the number by 10
  number = number * 10;
  cout << "Value of number inside the function = " << number << endl;
}

int main() {
  // Initialize variable
  int number = 10;
  cout << "Value of number before function call = " << number << endl;
  // Call function
  passValue(number);
  cout << "Value of number after function call = " << number << endl;

  return 0;
}