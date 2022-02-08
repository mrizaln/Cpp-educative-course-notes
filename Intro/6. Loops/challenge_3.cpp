// Challenge 3: Convert Decimal Number to Binary 

#include <iostream>
using namespace std;

int main() {
    int decimal, remainder;
    int binary = 0, product = 1;

    cout << "Please input a decimal to convert it to binary: "; cin >> decimal;

    while (decimal != 0) {
        remainder = decimal % 2;
        decimal /= 2;
        binary += remainder * product;
        product *= 10;
    }
    cout << "Binary :" << binary << endl;

    return 0;
}