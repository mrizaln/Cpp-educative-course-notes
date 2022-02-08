// The compound assignment operator is used to perform an operation and then 
// assign the result to the operand on the left-hand side

    // +=   add then assign
    // -=   subtract then assign
    // *=   multiply then assign
    // /=   divide then assign
    // %=   modulo then assign

#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int operand1 = 50;
    int operand2 = 26;
    cout << "Before using compound assignment operator:" << endl;
    cout << "operand1 = " << operand1 << endl;
    cout << "operand2 = " << operand2 << endl;
    operand1 += operand2;
    cout << "After using compound assignment operator:" << endl;
    cout << "operand1 += operand2 = " << operand1 << endl;
    
    return 0;
}