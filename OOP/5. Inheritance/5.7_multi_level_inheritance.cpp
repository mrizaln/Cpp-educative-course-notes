// If we want to inherit data members and member functions of the base class which is already inherited from
// another class, the concept of multilevel inheritance comes in. This contains a more hierarchical approach.

        // class parent
        // class child : public parent
        // class grandChild : public child

#include <iostream>
#include <string>
using namespace std;

class Vehicle {
    protected:
    string Make;
    string Color;
    int Year;
    string Model;

    public:
    Vehicle(){
        Make = "";
        Color = "";
        Year = 0;
        Model = "";
    }

    Vehicle(string mk, string col, int yr, string mdl){
        Make = mk;
        Color = col;
        Year = yr;
        Model = mdl;
    }

    void print_details(){
        cout << "Manufacturer: " << Make << endl;
        cout << "Color: " << Color << endl;
        cout << "Year: " << Year << endl;
        cout << "Model: " << Model << endl;
    }
};

class Car: public Vehicle{
    string trunk_size;

    public:
    Car(){
        trunk_size = "";
    }

    Car(string mk, string col, int yr, string mdl, string ts)
        :Vehicle(mk, col, yr, mdl){
            trunk_size = ts;
        }

    void car_details(){
        cout << "Trunk size: " << trunk_size << endl;
    }
};

class Honda: public Car{
    int top_speed;

    public:
    Honda(){
        top_speed = 0;
    }

    Honda(string mk, string col, int yr, string mdl, string na, int ts)
        :Car(mk, col, yr, mdl, na){
            top_speed = ts;
        }

    void Honda_details(){
        print_details();
        car_details();
        cout << "Top speed of the car: " << top_speed << endl;
    }
};

int main_Honda(){
    Honda car("Honda", "Black", 2006, "Accord", "14.7 cubic feet", 260);
    car.Honda_details();
    return 0;
}

// In case of multi-level inheritance, a derived class’ members are looked up in the in the immediate parent class
// and upwards until the ultimate base class until the member is found. Consider the following example:
    // Note that this is all happening at compile time. The function calls init() and update() in main() are bound
    // to appropriate function definitions at compile time.
class A {
    public:
    void init() {
    cout << "Class A initialized!" << endl;
    }
    void update() {
    cout << "Class A updated!" << endl;
    }
};

class B : public A {
    public:
    void update() {
    cout << "Class B updated!" << endl;
    }
};

class C : public B { };

int main_lookup() {
    // your code goes here
    C c;
    c.init();
    c.update();
    c.A::update();    // <--- scope resolution can access base member function
    return 0;
}


int main(){
    main_Honda();
    cout << endl;
    main_lookup();
}