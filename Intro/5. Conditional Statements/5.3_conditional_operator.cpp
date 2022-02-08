//// The syntax
    // variable = (condition) ? statement1 : statement2;

            // the above syntax is the same as below

    // if (condition) {
    //     variable = statement1;
    // }
    // else {
    //     variable = statement2;
    // }

// The conditional operator operates on three operands. Therefore, it is known as the ternary operator.

#include <iostream>

using namespace std;

int main() {
    int money = 9;

    string result = (money >= 20) ? "You can gift a watch" : "You can gift a pen";
    cout << result << endl;
    
    (money > 20) ? cout << "I am greater than 20" : cout << "I am less than 20";

    return 0;
}