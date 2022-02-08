// Challenge 2: Check If the Given Character is An Alphabet

// In this challenge, you are given a character. 
// Your task is to find whether the given character is 
// an upper-case alphabet, a lower-case alphabet, or a non-alphabetic character.

#include <iostream>
using namespace std;

int main() {
    char character;
    cout << "Please input a single character: "; cin >> character; cout << endl;

    switch (character) {
    case 'a' ... 'z':
        cout << "lower-case alphabet"; break;
    case 'A' ... 'Z':
        cout << "upper-case alphabet"; break;
    default:
        cout << "not an alphabet";
    }
    cout << endl; return 0;
}