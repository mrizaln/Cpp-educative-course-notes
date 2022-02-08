// Challenge 2: Delete an Element at a Specific Index

#include <iostream>
using namespace std;

void delete_element(int * & arr, int size, int index) {
    int *temp_arr = new int[size - 1];
    for (int i = 0, j = 0; i < size; i++){
        if (i == index){ continue; }
        temp_arr[j] = arr[i];
        j++;
    }
    delete[] arr;
    arr = temp_arr;
}

void printArray(int * arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// main function
int main() {
    // Initialize variables
    int size = 5;
    int index = 3;
    // Initialize dynamic array
    int * arr = new int[size];
    // Fill elements in an array
    for (int i = 0; i < size; i++) {
        arr[i] = i;
    }
    // Call printArray function
    printArray(arr, size);
    // Call delete_element function
    delete_element(arr, size, index);
    // Call printArray function
    printArray(arr, size - 1);

    return 0;
}