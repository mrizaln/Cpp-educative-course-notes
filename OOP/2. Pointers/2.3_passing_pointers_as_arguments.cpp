#include <iostream>
using namespace std;

void square(int *a){ // the function takes a pointer and replaces the value with its square
    if(a != NULL){
        *a = (*a) * (*a);
    }
}

void doubleValues(int arr[], int size){
// a function which doubles the values of all the elements in an array
    for (int i = 0; i < size; i++){ 
        arr[i] = arr[i] * 2;
    }
}

int main() {
    int *p = new int(5);
    cout << "The value of p before the function call: " << *p << endl;
    square(p);
    cout << "The value of p after the function call: " << *p << endl;

    //==================================================================
    const int size = 10;
    int arr[size];
    
    cout << "Original Values: ";
    for (int i = 0; i < size; i++){
        arr[i] = i;
        cout << arr[i] << ", ";
    }
    cout << endl;
    
    doubleValues(arr, size);
    
    cout << "Doubled Values: ";
    for (int i = 0; i < size; i++){
        cout << arr[i] << ", "; // the original array has been changed
    }
}