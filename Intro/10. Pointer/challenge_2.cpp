// Challenge 2: Calculate the Sum and Absolute Difference

#include <iostream>
using namespace std;

void sum_difference (int * value1, int * value2) {
    int temp; 
    temp = *value1 + *value2;
    *value2 = *value1 - *value2;
    *value1 = temp;
    if (*value2 < 0){*value2 *= -1;}
}

int main() {
    int value1 = 5;
    int value2 = 4;

    cout << "Values before calling function:" << endl;
    cout << value1 << endl;
    cout << value2 << endl;

    sum_difference( & value1, & value2);

    cout << "Values after calling function:" << endl;
    cout << value1 << endl;
    cout << value2 << endl;

    return 0;
}