// The for loop is a count controlled loop since the program knows in advance 
// the number of times the loop body should be executed.

#include <iostream>

using namespace std;

int main() {
  int icecream;

  for (icecream = 5; icecream > 0; icecream--) {
    cout << "Number of free icecream = " << icecream << endl;
    cout << "Buy an icecream" << endl;
  }

  return 0;
}