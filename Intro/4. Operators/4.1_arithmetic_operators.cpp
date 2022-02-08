// Arithmetic operators:
    // +    addition
    // -    subtraction
    // *    multiplication
    // /    divide
    // %    modulo              


#include <iostream>
using namespace std;

int main() {
    cout << "using variables of int data type to do operations";
    int operand1 = 50;
    int operand2 = 26;

    cout << "Values of operands are:" << endl;
    cout << "operand1 = " << operand1 << " , operand2 = " << operand2 << endl;

    cout << "Addition = " << operand1 + operand2 << endl;
    cout << "Subtraction = " << operand1 - operand2 << endl;
    cout << "Multiplication = " << operand1 * operand2 << endl;
    cout << "Division = " << operand1 / operand2 << endl;
    cout << "Modulus = " << operand1 % operand2 << endl << endl;

    cout << "using variables of float data type to do operations";
    float operand3 = 50.0;
    float operand4 = 26.0;
    cout << "Values of operands are:" << endl;
    cout << "operand1 = " << operand3 << " , operand2 = " << operand4 << endl;

    cout << "Addition = " << operand3 + operand4 << endl;
    cout << "Subtraction = " << operand3 - operand4 << endl;
    cout << "Multiplication = " << operand3 * operand4 << endl;
    cout << "Division = " << operand3 / operand4 << endl;
    // modulus ??? tidak bisa untuk float
    return 0;
}