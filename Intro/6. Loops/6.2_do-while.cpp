// the do-while loop is an exit-controlled loop: the body is executed before its condition

#include <iostream>

using namespace std;

int main() {
  int money = 0;
  int icecream_price = 5;

  cout << "Intial money = " << money << endl;
  cout << "Ice-cream price = " << icecream_price << endl;

  do {
    cout << "Buy an ice-cream" << endl;
    money = money - icecream_price;
    cout << "Remaining money = " << money << endl;
  } while (money >= icecream_price);

  cout << "You can't buy an ice-cream" << endl;

  return 0;
}