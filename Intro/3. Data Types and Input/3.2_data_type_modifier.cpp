// The maximum value that can be stored in a variable of type int is 2147483647
// What if we want to store a value greater than 2147483647?

/*
#include <iostream>
using namespace std;

int main() {
    // Initialize variable
    int number = 2147483649;          // will output -2147483647
    // Display variable value
    cout << number; 
}
*/

// If we run the code given above, it does not give us the expected output 
// The above code should print 2147483649, but it is printing -2147483647 in output.

// Data type modifier comes to help

// =================================================================================================
// C++ supports the following data type modifiers:
//     long         double length
//     short        half length
//     unsigned     store positive values only          can be used on int or char data type
//     signed       store both positive and negative


#include <iostream>
using namespace std;

int main() {
    int integer = 2147483649;
    cout << "number in int type     : " << integer << endl;
    long int long_integer = 2147483649;
    cout << "number in long int     : " << long_integer << endl;

    integer = 32768;
    cout << "number in int type     : " << integer << endl;
    short int short_integer = 32768;
    cout << "number in short int    : " << short_integer << endl;

    integer = -10;
    cout << "number in int type     : " << integer << endl;
    unsigned int unsigned_int = -10;
    cout << "number in unsigned int : " << unsigned_int << endl;
}