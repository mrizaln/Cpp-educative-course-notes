// Challenge 3: Display Day of The Week

// In this challenge, you are given a weekday number. 
// Your task is to display the corresponding day name to the console using the switch statement.

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Please input a number of weekday: "; cin >> number;

    switch (number) {
    case 1: cout << "Monday"; break;
    case 2: cout << "Tuesday"; break;
    case 3: cout << "Wednesday"; break;
    case 4: cout << "Thursday"; break;
    case 5: cout << "Friday"; break;
    case 6: cout << "Saturday"; break;
    case 7: cout << "Sunday"; break;
    default: cout << "Invalid input";
    }
    cout << endl; return 0;
}
