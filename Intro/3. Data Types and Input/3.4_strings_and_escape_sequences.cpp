// String is plain text that represents alphanumeric data
// A string comprises one or more characters 
// A character can be a letter, number, or space.

// An escape sequence comprises two or more characters that are used to modify the format of the output
//     \n      new line
//     \r      current line
//     \t      tab (8 space)
//     \b      backspace
//     \"      double quote
//     \'      single quote
//     \\      backslash


#include <iostream>
using namespace std;

int main() {
    // Initialize a string variable
    string text = "Hey12345\n";
    cout << text;

    string teuing = "Hello\tworld!\nMaiuna ready to start the day!";
    cout << teuing;
}