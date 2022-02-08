// Logical operators are either used to combine two or more boolean operands or 
// to negate the result of the original boolean operand
    // &&  AND
    // ||  OR
    // !   NOT

// A bitwise operator performs bit by bit processing on the operands
// Bitwise operators operate on binary numbers
    // &    bitwise AND         1 & 0 = 0   1 & 1 = 1
    // |            OR          1 | 0 = 1   1 | 1 = 1
    // ^            XOR         1 ^ 0 = 1   1 ^ 1 = 0
    // ~    complement (NOT)       ~1 = 0      ~0 = 1
    // >>   shift bit right          4 >> 2 = 1 
    // <<             left           1 << 2 = 4


#include <iostream>
using namespace std;

int main() {
  
  bool operand1 = 2 > 3;
  bool operand2 = true;
  cout << "Logical Operator";

  cout << "operand1 = " << operand1 << " , operand2 = " << operand2 << endl;
  cout << "operand1 && operand2 = " << (operand1 && operand2) << endl;
  cout << "operand1 || operand2 = " << (operand1 || operand2) << endl;
  cout << "!operand1 = " << (!operand1) << endl;
  cout << "!operand2 = " << (!operand2) << endl;

  int operand3 = 3;     // 11b
  int operand4 = 2;     // 110b
  cout << "\nBitwise Operator";

  cout << "operand1 = " << operand3 << " , operand2 = " << operand4 << endl;
  cout << "operand1 & operand2 = " << (operand3 & operand4) << endl;                // 11b & 10b = 10b ----> 2
  cout << "operand1 | operand2 = " << (operand3 | operand4) << endl;                // 11b & 10b = 11b ----> 3
  cout << "operand1 ^ operand2 = " << (operand3 ^ operand4) << endl;                // 11b & 10b = 01b ----> 1
  
  cout << "operand1 left shift by operand2 = " << (operand3 << operand4) << endl;   // 11b ----> 1100b ----> 12
  cout << "operand1 complement = " << ~operand3 << endl;

  return 0;
}