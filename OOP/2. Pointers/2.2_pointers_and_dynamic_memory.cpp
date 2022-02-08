/* Heap: The Dynamic Memory Store#

In the first lesson, we learned about the static portion of memory in C++ known as the stack.
The counterpart for this is the dynamic section of memory known as the heap. This is a vast 
space of memory which is not being managed by the CPU.

We can specify the amount of space we want, and a random portion of the heap will be reserved 
for us. While the heap does allow us to use as much space as we want, the look-up operation is 
slower compared to a stack. However, a variable in dynamic memory (heap) can have a “global” 
scope instead of just being a local variable for a function.
*/

#include <iostream>
using namespace std;

int main() {
  int *p = new int;   // dynamic memory reserved for an integer 
  *p = 10;   // the object is assigned the value of 10
  cout << "The value of the object p points to: " << *p << endl;
  
  int *q = p;   // both pointers point to the same object
  cout << "The value of the object q points to: " << *q << endl;
  
  double *arr = new double[500]; // an array of size 500 has been created in the heap
  arr[0] = 50;
  cout << "arr[0]: " << arr[0] << endl;
  
  // delete pointers and free up space
  delete p, q;
  delete[] arr;
  cout << "p now points to a random value and should not be accesed: " << *p << endl;
  p = new int(5); // The pointer can now be re-used to point to something else
  cout << "The value of the object p points to: " << *p << endl;
}