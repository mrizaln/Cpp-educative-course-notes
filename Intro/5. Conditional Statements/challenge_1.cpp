// Challenge 1: Find the Person with The Highest Salary

#include <iostream>
using namespace std;

int main() {
    float salary1, salary2;
    
    cout << "Input the salary of two person" << endl;
    cout << "person1: "; cin >> salary1; cout;
    cout << "person2: "; cin >> salary2; cout << endl;

    cout << "The person with the highest salary is: ";
    (salary1 > salary2) ? cout << "person1" : cout << "person2!";
    cout << endl << endl;

    return 0;
}