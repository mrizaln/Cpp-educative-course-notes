// Challenge 1: Calculate the Average Marks of a Class

#include <iostream>
using namespace std;

double average (double marks[], int size){
  double average = 0;
  for (int i = 0; i < size; i++) {
    average += marks[i];
  }
  average /= size;
  return average;
}

// main function
int main() {
  // Initialize array
  int size = 8;
  double number [size] = {67, 89, 56, 43, 29, 15, 90,67};
  double result;

  result = average (number,size);
  cout << "average = " << result;

}