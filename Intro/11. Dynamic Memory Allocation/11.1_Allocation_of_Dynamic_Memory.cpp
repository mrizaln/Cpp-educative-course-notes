/* The unary operator new allocates memory in bytes during the run time from the free store. 

syntax:     new DataType;
*/

#include <iostream>
using namespace std;

int main() {
  // Declare pointer ptr
  int * ptr = nullptr;
  // Store the starting address of dynamically reserved 4 bytes in ptr
  ptr = new int;
  // Store 100 in dynamic space
  *ptr = 100;
  // Print value pointed by ptr
  cout << *ptr;
  return 0;
}