#include <iostream>

using namespace std;

int main() {
  int icecream;

  for (icecream = 5; icecream > 0; icecream--) {
    cout << "Number of free ice-creams = " << icecream << endl;
    if (icecream == 2) {
      cout << "Sorry! We ran out of ice-cream" << endl;
      continue;
    }
    cout << "Buy an icecream" << endl;
  }

  return 0;
}