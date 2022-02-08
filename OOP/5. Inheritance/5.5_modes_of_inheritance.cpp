#include <iostream>
using namespace std;

class Vehicle{
  
    string Make;
    string Color;
    int Year;
  
    protected:
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
    }
};

//==========[ private Mode of Inheritance ]==========
    // By using private inheritance, the private data members and member functions of the base class are inaccessible
    // in the derived class and in main. Protected and Public members of the base class are accessible to the derived
    // class but not in main and become private members of the derived class.
        // Note: any classes inheriting from the above-derived class remain unaware (that is, do not have access) of the base class.
class Car : private Vehicle{
    string trunk_size;

    public:
    Car(){
        trunk_size = "";
    }
    Car(string mk, string col, int yr, string mdl, string ts)
    : Vehicle(mk, col, yr, mdl){
        trunk_size = ts;
    }

    void car_details(){
        print_details();
        cout << "Trunk size: " << trunk_size << endl;
        cout << "Model: " << Model << endl;  // Model is protected and 
        // is accessible in derived class
    }
};

//==========[ protected Mode of Inheritance ]==========
    // By using protected inheritance, the private members of the base class are inaccessible
    // in the derived class and in main. Protected and Public members of the base class are accessible to the derived
    // class but not in main and become protected members of the derived class.
class Car_1 : protected Vehicle{
    string trunk_size;

    public:
    Car_1(){
        trunk_size = "";
    }
    Car_1(string mk, string col, int yr, string mdl, string ts)
    : Vehicle(mk, col, yr, mdl){
        trunk_size = ts;
    }

    void car_details(){
        print_details();
        cout << "Trunk size: " << trunk_size << endl;
        cout << "Model: " << Model << endl;  // Model is protected and 
        // is accessible in derived class
    }
};

//==========[ public Mode of Inheritance ]==========
    // By using public inheritance, the private members of the base class are inaccessible
    // in the derived class and in main. Protected members of the base class are accessible to the derived class but not in main.
    // Public members of the base class are accessible to the derived class and in main.
class Car_2 : public Vehicle{
    string trunk_size;

    public:
    Car_2(){
        trunk_size = "";
    }
    Car_2(string mk, string col, int yr, string mdl, string ts)
    : Vehicle(mk, col, yr, mdl){
        trunk_size = ts;
    }

    void car_details(){
        print_details();
        cout << "Trunk size: " << trunk_size << endl;
        cout << "Model: " << Model << endl;  // Model is protected and
        // is accessible in derived class
    }
};


int main(){
    // ======[ private inheritance ]======
    Car car("Chevrolet", "Black", 2010, "Camaro", "9.1 cubic feet");
    // car.Year = 2000;     // this will give error as Year is private
    // car.Model = "Accord";   // this will give error as Model is protected
    car.car_details();
    //car.print_details();   // public functions of base class are inaccessible in main
    cout << endl;

    // ======[ protected inheritance ]======
    Car_1 car_1("Chevrolet", "Black", 2010, "Camaro", "9.1 cubic feet");
    // car.Year = 2000;     // this will give error as Year is private
    // car.Model = "Accord";   // this will give error as Model is protected
    car_1.car_details();
    //car.print_details();   // public functions of base class are inaccessible in main
    cout << endl;

    // ======[ public inheritance ]======
    Car_2 car_2("Chevrolet", "Black", 2010, "Camaro", "9.1 cubic feet");
    // car.Year = 2000;     // this will give error as Year is private
    //car.Model = "Accord";   // this will give error as Model is protected
    car_2.car_details();
    car_2.print_details();   // public functions of base class are accessible in main
}