#include <iostream>

using namespace std;

int main() {

  int inner, outer;

  for (outer = 6; outer <= 8; outer++) {
    cout << "Table of " << outer << " is:" << endl;
    for (inner = 1; inner <= 5; inner++) {
      cout << outer << " * " << inner << " = " << (outer * inner) << endl;
    }
  }
  return 0;
}

// it is the same for the while and do-while loop