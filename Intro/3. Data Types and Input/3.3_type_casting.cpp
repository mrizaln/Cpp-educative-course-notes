// Type-casting is a way to convert the value of one data type to another data type
// Type-casting has two types:
//     Implicit casting     the compiler automatically convert the data type
//                              int somth = 19231.1214   (storing float to int create int)
//     Explicit casting     manually
//                              syntax: (data_type) variable;

// Data can lose from type casting

// the order of type casting without losing data:
//     short int  =>  int  =>  unsigned int  =>  long int  =>  unsigned long int  =>  float  =>  double  =>  long double

#include <iostream>
using namespace std;

int main() {
    // Initializes a variable of char data type
    char character = 'A';
    // Declares a variable of int type
    int ASCII;
    // Converts char data type into int explicitly
    ASCII = (int) character;
    // Prints value of variable
    cout << "ASCII value = " << ASCII << endl;

}