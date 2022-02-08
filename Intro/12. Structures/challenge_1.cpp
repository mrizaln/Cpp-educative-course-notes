// Challenge 1: Subtract Two Complex Numbers

#include <iostream>
using namespace std;

// Structure to store complex number
struct complex_number {
    double real;
    double imaginary;
};

// Function subtract
complex_number subtract(struct complex_number c1, struct complex_number c2) {
    struct complex_number c;
    c.real = c1.real - c2.real;
    c.imaginary = c1.imaginary - c2.imaginary;
    return c;
}

// Function print_complex
void print_complex(struct complex_number c) {
    cout << c.real << " + ";
    cout << c.imaginary << " i ";
    cout << endl;
}

// Function main
int main() {
    struct complex_number c1, c2, c;

    c1 = { -12.3, -67.4 };
    c2 = { 34, 89 };

    cout << "First complex number = " ;
    print_complex(c1);

    cout << "Second complex number = " ;
    print_complex(c2);
 
    c = subtract(c1, c2);
 
    cout << "First complex number - Second complex number = " ;
    print_complex(c);

}