// Whenever we have to check the value of a single variable against an extensive number of choices,
// it is better to use the switch statement.

// The switch statement evaluates the given expression and then compares its value with each case label.
// If the value of a case label equals the value of the expression, the statement(s) specific to that case is executed.

//  Switch expression and case label only accept variables of int or char data types.


////// The syntax

    // expression = value;

    // switch (expression) {
    //     case value:
    //     ## code body;
    //     break;

    //     case value2:
    //     ## code body;
    //     break;

    //     default:
    //     ## code body;
    //     break;
    // }

        // Note:    If we don’t add a break statement to a case, the code specific to all the proceeding cases is also executed.
        //          The default case is optional in the switch statement. It can be used anywhere in the switch statement.

// Example

#include <iostream>

using namespace std;

int main() {
    char grade = 'B';

    switch (grade) {
        case 'A':
            cout << "Exceptional performance!";
            break;

        case 'B':
            cout << "Well done!";
            break;

        case 'C':
            cout << "Good!";
            break;

        case 'D':
            cout << "You need to do more hardwork!";
            break;

        case 'F':
            cout << "Fail!";
            break;

        default:
            cout << "Invalid input";
    }
    cout << endl;
    // return 0;

// Example of ranges used in switch statement

  int money = 12;
  switch (money) {
    // first case
  case 20 ... 100:
    cout << "You can gift a watch" << endl;
    break; 
    // compares value of case label from 10 to 19 with the value of money
  case 10 ... 19:
    cout << "You can gift a comic book " << endl;
    break;
    // compares value of case label from 9 to 5 with the value of money
  case 5 ... 9:
    cout << "You can gift a chocolate " << endl;
    break;
    // default case
  default:
    cout << "You can gift a pen " << endl;
  }
  return 0;
}