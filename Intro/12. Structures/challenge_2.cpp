// Challenge 2: Calculate Overall Percentage of Student's Marks

#include <iostream>
using namespace std;

// Structure to store Student information
struct Student {
    string name;
    double marks[4];
};

// Function to calculate percentage
double calculate_percentage(struct Student s) {
    double percentage = 0;
    for (int i = 0; i < 4; i++ ){ percentage += s.marks[i]; }
    percentage /= 4;
    return percentage;
}

// print_Student function
void print_Student(struct Student s) {
    cout << "Name of student = " << s.name << endl;
    cout << "Student marks:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "Student marks in subject" << i + 1 << "=" << s.marks[i] << endl;
    }
}

int main() {
    struct Student s;
    double result;

    s = {"John",{30.5, 49.7, 22.3, 32.9}};

    result = calculate_percentage(s);

    print_Student(s);

    cout << "percentage = " << result << "%";
    return 0;
}