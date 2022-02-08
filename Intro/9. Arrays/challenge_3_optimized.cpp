// Challenge 3: Sort Elements of an Array in a Descending Order

#include <iostream>
using namespace std;

void print_array(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void sort_elements(int arr[], int size) {
  int step = 0;
  // Outer loop
  for (int i = 0; i < size; i++) {
    // Inner loop
    for (int j = i + 1; j < size; j++) {
      // If condition
      if (arr[i] < arr[j]) {
        // Swap elements
        // Store the value at index j in temp
        int temp = arr[j];
        // Store the value at index i at index j
        arr[j] = arr[i];
        // Store the value of temp at index i
        arr[i] = temp;
      }
      cout << (step += 1) << "\t";
      print_array(arr, size);
    }
  }
}

// main function
int main() {
  int size = 40;
//   int arr[size] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
  int arr[size] = {10, 67, 98, 31, 214, 12, 21, 2213, 4, 23, 123, 32, 2, 3, 2, 35, 67, 233, 5, 63,
                  1, 2, 3, 53, 67, 234, 23, 532, 76, 685, 54, 432, 65, 253, 412, 265, 36, 352, 25, 7564};
  
  cout << "Array before sorting: " << endl;
  print_array(arr, size);
  sort_elements(arr, size);
  cout << "Array after sorting: " << endl;
  print_array(arr, size);

  return 0;
}