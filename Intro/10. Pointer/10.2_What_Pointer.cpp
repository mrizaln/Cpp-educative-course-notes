/* In C++, a pointer is a variable that stores the address of another variable.

Pointer declareation:       DataType *Identifier;
Pointer initialization:     ptrVariable = &Variable;
*/

#include <iostream>

using namespace std;

int main() {
  // Declares a variable Alice
  int Alice = 5;
  // Declares a pointer variable John that can point to int value
  int *John;
  // Stores the address of Alice in John
  John = &Alice;
  // Prints value of Alice
  cout << "Value of Alice = " << Alice << endl;
  // Prints value (address of Alice) of John 
  cout << "Value of John = " << John << endl;

  return 0;
}