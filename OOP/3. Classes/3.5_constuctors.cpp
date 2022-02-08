//===========================[ Constructors ]===========================
    // As the name suggests, the constructor is used to construct the object of a class. 
    // It is a special member function that outlines the steps that are performed when 
    // an instance of a class is created in the program.

    //    A constructor’s name must be exactly the same as the name of its class.

    // The constructor is a special function because it does not have a return type. 
    // We do not even need to write void as the return type. It is a good practice to 
    // declare/define it as the first member function.

//-----------------------[ Default Constructor ]-----------------------
    // define the default values for the data members of the class

//---------------------[ Parameterized Constructor ]--------------------------
    // pass arguments to constructor and set them as values of the data members

#include <iostream>
#include <string>
using namespace std;

class Date {
  int day;
  int month;
  int year;

  public:
  // Default constructor
  Date(){
    // We must define the default values for day, month, and year
    day = 0;
    month = 0;
    year = 0;
  }
  
  // Parameterized constructor
  Date(int d, int m, int y){
    // The arguments are used as values
    day = d;
    month = m;
    year = y;
  }

  // A simple print function
  void printDate(){ 
    cout << "Date: " << day << "/" << month << "/" << year << endl;
  }
};

int main(){
  // Call the Date constructor to create its object;
  
  Date d(1, 8, 2018); // Object created with specified values!
  d.printDate();
}
  
//----------------------[ <this> Pointer ]------------------------
    // The   this   pointer points to the class itself
    // We use the pointer when we have an argument which has the same name as a data member. 
    //   this->memberName   specifies that we are accessing the   memberName   variable of the particular class.

#include <iostream>
#include <string>
using namespace std;

class Date {
  int day;
  int month;
  int year;

  public:
  // Default constructor
  Date(){
    // We must define the default values for day, month, and year
    day = 0;
    month = 0;
    year = 0;
  }
  
  // Parameterized constructor
  Date(int day, int month, int year){
    // Using this pointer
    this->day = day;
    this->month = month;
    this->year = year;
  }

  // A simple print function
  void printDate(){ 
    cout << "Date: " << day << "/" << month << "/" << year << endl;
  }
};

int main(){
  // Call the Date constructor to create its object;
  
  Date d(1, 8, 2018); // Object created with specified values!
  d.printDate();
}
  
