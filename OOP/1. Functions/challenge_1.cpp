// Challenge 1: Sum of All Odd Integers in an Array

#include <iostream>
using namespace std;

int sumAllOdds(int arr[], int size) {
  int sum = 0;  
    for (int i = 0; i < size; i++){
      if (arr[i] % 2 == 1){ sum += arr[i]; }
    }
  return sum;
}

int main(){
    int size = 5;
    int arr[size] = {2, 4, 7, 5, 9};

    int sum = sumAllOdds(arr, size);

    cout << sum << endl;
    return 0;
}