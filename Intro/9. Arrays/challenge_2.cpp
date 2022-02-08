// Challenge 2: Left Rotate Array

#include <iostream>
using namespace std;

void left_rotate(int arr[], int size) {
  int temp = arr[0];
  for (int i = 1; i < size; i++){
    arr[i-1] = arr[i];
  }
  arr[size-1] = temp;
}

void print_array(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

// main function
int main() {
  int size = 5;
  int arr[size] = {1, 2, 3, 4, 5 };
  
  cout << "Array before left rotation" << endl;
  print_array(arr, size);
  left_rotate(arr, size);
  cout << "Array after left rotation: " << endl;
  print_array(arr, size);

  return 0;
}