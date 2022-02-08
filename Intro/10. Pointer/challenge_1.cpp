// Challenge 1: Calculate the Area of the Rectangle Using Pointer

#include <iostream>
using namespace std;

// area function
void area(double * length, double * width, double * result) {
    *result = *length * *width;

}

// main function
int main() {
    double length = 8.9, width = 2.1;
    double result = 0;

    cout << "Before calling function area:" << endl;
    cout << "result = " << result << endl;

    area( & length, & width, & result);

    cout << "After calling function area:" << endl;
    cout << "result = " << result << endl;
    return 0;
}