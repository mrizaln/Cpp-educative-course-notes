// Challenge 1: Set the Odd Elements in a Dynamic Array to -1

#include <iostream>
using namespace std;

void set_odd(int *arr , int size){
    for (int i = 0; i < size; i++){
        if (arr[i] % 2 != 0){
           arr[i] = -1;
        }
    }
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// main function
int main() {
    // Initialize size of an array
    int size = 5;
    // Declare dynamic array
    int * arr = new int[size];
    // Initialize array
    for (int i = 0; i < size; i++) {
        arr[i] = i;
    }
    // Call printArray function 
    printArray(arr, size);
    // Call set_odd function
    set_odd(arr, size);
    // Call printArray function
    printArray(arr, size);
    return 0;
}