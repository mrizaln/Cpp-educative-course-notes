// Challenge 2: Find the Second Minimum in an Array

#include <iostream>
using namespace std;

int secondMinimum(int arr[], int size) {
    int secondmin = 214748364;  
    int min = secondmin;

    for (int i = 0; i < size; i++){
        if (arr[i] < min){
            secondmin = min;
            min = arr[i];
        } else if (arr[i] < secondmin){
            secondmin = arr[i];
        }
    }
    return secondmin;
}
