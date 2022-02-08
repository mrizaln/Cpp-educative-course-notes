// The local variable can only be accessed within the block in which it is declared.
// Global variables can be accessed from the point they are declared to the end of the program.
// They are declared at the very start of the program before defining any function.

#include <iostream>

using namespace std;
int global = 3;

void function () {
  int function_local = 10;
  cout << "global = " << global << endl;
}
int main() {
  int main_local = 20;
  cout << "global = " << global << endl;
  function();
  return 0;
}