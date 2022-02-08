// In the last lesson, we have seen that Vehicle class attributes are shared by the other two classes(Car and Ship).
    // We can consider the Vehicle class as a base class as it has common attributes.
    // Car and Ship are considered as derived classes as they’re inheriting properties from vehicle class.

// Modes of Inheritance#
    // There are three modes of class inheritance: public, private and protected. The basic syntax for inheritance is given below:

        //    class derivedClassName : modeOfInheritance baseClassName

    // We use the keyword public to implement public inheritance.
    // Now, the class Car has access to the public members of a base class vehicle and the protected data is inherited as protected data, and the private data is not inherited, but it can be accessed directly by the public member functions of the class.

#include <iostream>
using namespace std;

class Vehicle{
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
        cout << "Manufacturer: " << Make << '\n'
             << "Color: " << Color << '\n'
             << "Year: " << Year << '\n'
             << "Model: " << Model << endl;
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
        print_details();
        cout << "Trunk size: " << trunk_size << endl;
    }
};

class Ship: public Vehicle{
    int Number_of_Anchors;

    public:
    Ship(){
        Number_of_Anchors = 0;
    }

    Ship(string mk, string col, int yr, string mdl, int na)
    :Vehicle(mk, col, yr, mdl){
        Number_of_Anchors = na;
    }

    void ship_details(){
        print_details();
        cout << "Number of Anchors: " << Number_of_Anchors << endl;
    }
};

int main(){
    Car car("Chevrolet", "Black", 2010, "Camaro", "9.1 cubic feet");
    car.car_details();
    
    cout << endl;
    
    Ship ship("Harland and Wolff, Belfast", "Black and whilte", 1912, "RMS Titanic", 3);
    ship.ship_details();
}