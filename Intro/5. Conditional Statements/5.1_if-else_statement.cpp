#include <iostream>

using namespace std;

int main() {
    int money = 6;

    if (money >= 20) {
        cout << "You can gift a watch" << endl << endl;
    }

    else if (money >= 10) {
        cout << "You can gift a comic book" << endl << endl;
    }

    else if (money >= 5) {
        cout << "You can gift a chocolate" << endl << endl;
    }

    else {
        cout << "You can gift a pen" << endl << endl;
    }

    return 0;
}
