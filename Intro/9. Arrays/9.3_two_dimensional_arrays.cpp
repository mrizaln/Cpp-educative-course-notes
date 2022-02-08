/* A two-dimensional array is an array of arrays.
   Two-dimensional arrays represent a matrix. 

   syntax:
        DataType ArrayName [RowSize][ColumnSize];

When initializing a 2-D array, specifying the first dimension is optional. The compiler 
will infer the number of rows from the statement. In the above program, 
changing Student[3][3] to Student[][3] is fine, but either Student[][] or Student[3][] isn’t valid.
*/

#include <iostream>

using namespace std;

int main() {
// Initialize row and column index 
  int row = 3 , column = 3;
// Initialize static 2D array
  int Student[row][column] = {{100, 134, 234}, {34, 189, 221}, {109, 139, 56}};

  //Print static 2D Array 
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
    // Access element at row index i and column index j
       cout << Student[i][j] << " ";
  }
  cout << endl;
  }

}