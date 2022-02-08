// C++ supports the following datatypes:

//     Primitive or fundamental data types
//     Derived data types
//     User-defined data types

    // Primitive or fundamental data types#
    //     Integer          int         4 bytes     -2^31 to 2^31-1
    //     Floating-point   float       4 bytes     -2^31 to 2^31-1             7  digits after decimal point
    //     Double           double      8 bytes     -2^63 to 2^63-1             15 digits after decimal point
    //     Void             void        none        entity without value
    //     Character        char        1 byte      -2^7 to 2^7-1 of unicode
    //     Boolean          bool        1 byte      true or false, 1 or 0

    // Derived data types#
    // Data types that are derived from primitive data types are known as derived data types. These are:
    //     Function
    //     Arrays
    //     Pointers
    //     Reference

    // User-defined data types#
    // Data types that are defined by the user are known as user-defined data types. These are:
    //     Structure
    //     Union
    //     Enum
    //     Class
    //     Typedef


// integer, float, and double
#include <iostream>

using namespace std;

int main() {
    // Create variable of different types
    int integer_number = 10;
    float float_number = 10.5;
    /* Stores scientific value. The number after "e" 
    represents the power of 10*/
    float float_scientific = 97e4;
    double double_number = 10.5;

    char sebuah_huruf = 'E';                            // char value always written in single quotation mark
    bool nyala_kah = true;


    // Prints value of variables
    cout << "int = " << integer_number << endl;
    cout << "float = " << float_number << endl;
    cout << "float_scientific = " << float_scientific << endl;
    cout << "double = " << double_number << endl << endl;

    cout << "huruf = " << sebuah_huruf << endl;
    cout << "boolean = " << nyala_kah << endl;
}