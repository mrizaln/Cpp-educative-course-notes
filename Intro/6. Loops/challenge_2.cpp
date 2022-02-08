// Challenge 2: Find out if the Given Number is Prime

#include <iostream>
using namespace std;

int main() {
    bool isPrime = true;
    long int number;
    cout << "Please input a number :"; cin >> number;

    if (number <= 1) { isPrime = false; }

    for (int n = 2; n < number; n++) {
        if (number % n == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) { cout << "prime"; }
    else { cout << "not prime"; }

    cout << endl;
    return 0;
}