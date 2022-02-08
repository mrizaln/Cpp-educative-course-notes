// the while loopis an entry-controlled loop: the condition is evaluated before its body

#include <iostream>

using namespace std;

int main() {
  int money = 20;
  int icecream_price = 5;

  cout << "Intial money = " << money << endl;
  cout << "Ice-cream price = " << icecream_price << endl;

 while (money >= icecream_price){
    cout << "Buy an ice-cream" << endl;
    money = money - icecream_price;
    cout << "Remaining money = " << money << endl;
  }

  cout << "You can't buy an ice-cream" << endl;

  return 0;
}