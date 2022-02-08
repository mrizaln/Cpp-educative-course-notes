// When a derived class inherits from a base class, it may choose to change some of the inherited functionality.
// This is called function overriding, since the derived class is overriding the functionality of the base class.

#include <iostream>
using namespace std;

class Employee{
    protected:
        string name;
        int ID;
        int reportsTo;
    
    public:
        Employee(string name, int ID, int boss) : name(name), ID(ID), reportsTo(boss) { }
        string getName() { return name; }
        int getID() { return ID; }
        int getBoss() { return reportsTo; }
        void display() {
            cout << ID << " " << name << " reports to " << reportsTo << endl;
        }
        void display(string salutation){
            cout << salutation << " ";
            display();
        }
};

class Manager : public Employee{
    protected:
        string teamName;
    
    public:
        Manager(string name, int ID, int boss, string teamName) : Employee(name, ID, boss), teamName(teamName) { }
        void display(){
            Employee::display();
            cout << "   Heads the team " << teamName << endl;
        }
};


int main(){
    Employee worker("John Smith", 10, 2);
    Manager ceo("Jack Hobss", 0, 0, "Eats R Us");
    Manager cto("ELizabets Shaw", 2, 0, "IT");
    worker.display("Mr");
    ceo.display();
    cto.display();
    // ceo.display("Mr");       <-- won't work: Overriding a function in a derived class hides all the overloads of the same function from the base class.
    return 0;
}