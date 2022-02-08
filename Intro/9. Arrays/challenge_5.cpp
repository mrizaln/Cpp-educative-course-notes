// Challenge 5: Multiply Two Matrices

#include <iostream>
using namespace std;

void multiplication(int arr1[][2], int row1, int col1, int arr2[][2], int row2, int col2 , int result[][2]) {
    if (col1 == row2){
        for (int i = 0; i < row1; i++){
            for (int j = 0; j < col2; j++){
                for (int k = 0; k < col1; k++){
                    result[i][j] += arr1[i][k] * arr2[k][j];
                }
                
            }
        }
    }

    else {
        for (int i = 0; i < row1; i++){
            for (int j = 0; j < col2; j++){
                result[i][j] = -1;
            }
        }
    }
}

void print_array(int arr[3][2], int row, int column) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

int main() {
  int arr1[3][2] = {{1,2},{3,4},{5,6}};
  int arr2[2][2] = {{10,20},{30,40}};
  int result[3][2] = {{0,0},{0,0},{0,0}};
  multiplication(arr1,3,2,arr2,2,2,result);
  print_array(result,3,2);
  return 0;
}