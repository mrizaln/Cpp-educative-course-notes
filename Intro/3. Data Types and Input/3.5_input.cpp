// takes input from keyboard on console and store it in a variable

// syntax:      cin >> variable_name

// cin      takes input from the keyboard, send it to the extraction operator
// >>       extraction operator, take from cin and store send to variable

#include <iostream>

using namespace std;

int main() {
  // Declares variable
  float number;
  // Displays text
  cout << "Please enter your number:" << endl;
  // Waits for the user input
  cin >> number;
  // Displays entered number
  cout << "You have entered: " << number;
}