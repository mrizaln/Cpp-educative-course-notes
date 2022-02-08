// In pass by reference, when we call a function, we pass the address of the actual parameters 
// to the formal parameters in the function.
// Any changes made in the formal parameters inside the function affect the values of actual
// parameters in the main function.

#include <iostream>
using namespace std;

// function definition
void passReference(int &number) {
  // Multiply the number by 10
  number = number * 10;
  cout << "Value of number inside the function = " << number << endl;
}

int main() {
  // Initialize variable
  int number = 10;
  cout << "Value of number before function call = " << number << endl;
  // Call function
  passReference(number);
  cout << "Value of number after function call = " << number << endl;

  return 0;
}