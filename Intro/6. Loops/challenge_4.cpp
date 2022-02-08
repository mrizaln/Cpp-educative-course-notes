// Challenge 4: Find Out if the Given Number is a Palindrome

#include <iostream>
using namespace std;

int main () {
    int result = 0, remainder, number;
    cout << "Please input a number: "; cin >> number;
    int temp = number;
    
    while (temp != 0) {
        remainder = temp % 10;
        temp /= 10;
        result = 10 * result + remainder;
    }

    cout << number;
    if (number == result) { cout << " is a palindrome" << endl;}
    else { cout << " is not a palindrome" << endl;}

    return 0;
}