// Challenge 2: Count the Digits in a Number Using Recursion

#include <iostream>
using namespace std;

int count_digits(int number) {
  if (number == 0){
    return 0;
  } else {
    return 1 + count_digits(number/10);
  }
}

// main function
int main() {
  long int number = 862523;
  int result;
  result = count_digits(number);

  cout << "Number of digits = " << result;
  return 0;
}