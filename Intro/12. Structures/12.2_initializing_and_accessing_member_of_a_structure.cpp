/* basic syntax:
        structure_name . member_variable = value;

    initializing members in one line
        structure_variable = {member1_value, member2_value, ..., member(n)_value};
*/

#include <iostream>
using namespace std;

struct Student {
    string name;
    int roll_number;
    int marks;
};

int main() {
    struct Student s1, s2, s3;

    s1.name = "John";
    s1.roll_number = 1;
    s1.marks = 50;

    cout << "s1 Information:" << endl;
    cout << "Name = " << s1.name << endl;
    cout << "Roll Number = " << s1.roll_number << endl;
    cout << "Marks = " << s1.marks << endl;

    s2 = {"Alice", 2, 43};

    cout << "s2 Information:" << endl;
    cout << "Name = " << s2.name << endl;
    cout << "Roll Number = " << s2.roll_number << endl;
    cout << "Marks = " << s2.marks << endl;

    return 0;
}