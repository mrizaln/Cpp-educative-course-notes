// Challenge 1: Calculate the Power of a Number Recursively

#include <iostream>
using namespace std;

int power (int base , int exponent ) {
    if (exponent == 1){
        return base;
    } else {
        return base * power(base, exponent - 1);
    }
}

// main function
int main() {
    int base = 2, exponent = 15;
    int result;
    result = power(base, exponent);
    cout << base << " raised to power " << exponent << " = " << result;
    return 0;
}