// In inheritance, we have IS-A relationship between classes e.g a car is a vehicle and a ship is a vehicle.
// Let’s take the example of Vehicle here.

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
             << "Model: " << Model << '\n';
    }
};

class Car{
    string Make;
    string Color;
    int Year;
    string Model;
    string trunk_size;


    public:
    Car(){
        Make = "";
        Color = "";
        Year = 0;
        Model = "";
        trunk_size = "";
    }

    Car(string mk, string col, int yr, string mdl, string ts){
        Make = mk;
        Color = col;
        Year = yr;
        Model = mdl;
        trunk_size = ts;
    }

    void print_details(){
        cout << "Manufacturer: " << Make << '\n'
            << "Color: " << Color << '\n'
            << "Year: " << Year << '\n'
            << "Model: " << Model << '\n'
            << "Trunk size: " << trunk_size << '\n';
    }
};

class Ship{
    string Make;
    string Color;
    int Year;
    string Model;
    int Number_of_Anchors;
  

    public:
    Ship(){
        Make = "";
        Color = "";
        Year = 0;
        Model = "";
        Number_of_Anchors = 0;
    }
  
    Ship(string mk, string col, int yr, string mdl, int na){
        Make = mk;
        Color = col;
        Year = yr;
        Model = mdl;
        Number_of_Anchors = na;
    }

    void print_details(){
        cout << "Manufacturer: " << Make << '\n'
             << "Color: " << Color << '\n'
             << "Year: " << Year << '\n'
             << "Model: " << Model << '\n'
             << "Number of Anchors: " << Number_of_Anchors << '\n';
    }
};

int main(){
    Vehicle v("Ford Australia", "Yellow", 2008, "Falcon");
    v.print_details();
    cout << '\n';

    Car car("Chevrolet", "Black", 2010, "Camaro", "9.1 cubic feet");
    car.print_details();
    cout << '\n';

    Ship ship("Harland and Wolff, Belfast", "Black and whilte", 1912, "RMS Titanic", 3);
    ship.print_details();
    
    return 0;
}