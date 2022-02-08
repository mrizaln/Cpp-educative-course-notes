// the basic syntax for declaring a variable is      variable_datatype variable_name = variable_value;
//                                  constant is      const constant_datatype constant_name = constant_value;

#include <iostream>

using namespace std;

int main() {
    int number = 100;
    cout << "your 1st number is: " << number << endl;
    
    const int number2 = 324;                                   // declaring a constant
    cout << "your 2nd number is: " << number2 << endl;

    number = 234;
    cout << "1st number changed, the value is " << number; 
    cout << " now" << endl;

    int number3 = number + number2;
    cout << "1st + 2nd number is: " << number3 << endl;
}