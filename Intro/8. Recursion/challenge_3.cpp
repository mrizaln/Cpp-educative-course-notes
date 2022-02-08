// Challenge 3: Calculate the nth Fibonacci Number Using Recursion

#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
  int n = 4;
  int result;
  result = fibonacci(4);

  cout << n << "th Fibonacci number = " << result;
  return 0;
}