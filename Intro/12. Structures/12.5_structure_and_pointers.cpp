/*  basic syntax:
                        struct structure_name *ptr;

    accessing structure member through a structure pointer:
        1. indirection and dot operator
            syntax:     (*StructurePointer).StructureMember;

        2. arrow operator
            syntax:     StructurePointer -> StructureMember;
*/

#include <iostream>
using namespace std;

// Student structure
struct Student {
    string name;
    int roll_number;
    int marks;
};

// main function
int main() {
    // Declare structure variable
    struct Student s1, s2;
    // Declare structure pointer
    struct Student *ptrs1, *ptrs2;
    // Store address of structure variable in structure pointer
    ptrs1 = &s1;
    ptrs2 = &s2;
    
    // Set value of name
    ptrs1->name = "John";
    // Set value of roll_number
    ptrs1->roll_number = 1;
    // Set value of marks
    ptrs1->marks = 50;

    // Print value of structure member
    cout << "s1 Information:" << endl;
    cout << "Name = " << ptrs1->name << endl;
    cout << "Roll Number = " << ptrs1->roll_number << endl;
    cout << "Marks = " << ptrs1->marks << endl;

    // Set value of name
    (*ptrs2). name = "Johnny";
    // Set value of roll_number
    (*ptrs2).roll_number = 2;
    // Set value of marks
    (*ptrs2).marks = 70;

    // Print value of structure member
    cout << "s1 Information:" << endl;
    cout << "Name = " << (*ptrs2).name << endl;
    cout << "Roll Number = " << (*ptrs2).roll_number << endl;
    cout << "Marks = " << (*ptrs2).marks << endl;             

    return 0;
}