// When we make an instance of the Derived class without parameters it will first call the default constructor
// of the Base class and then the Derived class. In the same way, when we call the parameterized constructor
// of the derived class, it will first call the parameterized constructor of the Base class and then Derived class.

#include <iostream>
using namespace std;

// Base class
class Base {
    public:
    Base(){
        cout << "Base class default constructor!" << endl;
    }
    // parameterized
    Base(float i){
        cout << "Base class parameterized consturctor!" << endl;
    }
    // destructor
    ~Base(){
        cout << "Base class destructor!" << endl;
    }
};

// Derived class
class Derived : public Base {
    public:
    Derived(){
        cout << "Derived class default constructor!" << endl;
    }
    // parameterized
    Derived(float num) : Base(num){
        cout << "Derived class parameterized constructor!" << endl;
    }
    // destructor
    ~Derived(){
        cout << "Derived class destructor!" << endl;
    }
};

int main(){
    Derived obj;
    cout << endl;
    Derived obj1(10.2);
    cout << endl;
}