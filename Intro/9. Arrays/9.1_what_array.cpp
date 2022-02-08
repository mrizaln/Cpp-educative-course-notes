/* An array is a sequential collection of values of the same data type under the same name. 

    syntax:
        DataType ArrayName [RowSize][ColumnSize];

Basic terms#
    Element#
        The array element is a value stored in an array. Elements in an array are stored at neighboring
        memory locations.
    
    Index#
        An array index identifies the position of an element in an array. It starts from 0 and increments
        by one for each element added in an array.
    
    Size#
        The size of an array is the total number of elements stored in an array.
*/

#include <iostream>

using namespace std;

int main() {
  int size = 5;
  //Initialize array
  int Roll_Number[] = {100, 101, 102, 103, 104};

  cout << "Values of array before updation: " << endl;
  // Print values of array
  for (int i = 0; i < size; i++) {
    // Accesss elements of array at index i
    cout << Roll_Number[i] << "  ";
  }
  cout << endl;

  // Update values of array element at index 3 and 4
  Roll_Number[3] = 22222;
  Roll_Number[4] = 33333;
  cout << "Values of array after updation: " << endl;
  // Print updated values of  array
  for (int i = 0; i < size; i++) {
    // Access elements of array at index i
    cout << Roll_Number[i] << "  ";
  }
  cout << endl;
}