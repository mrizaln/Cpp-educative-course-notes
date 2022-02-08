// In this file, we must include the header file. The include command should already be familiar to you.
// We use it all the time to include libraries like iostream or vector. We can include header files in the same way!

// Since we’re implementing all the methods of our Circle class in Circle.h, we must mention the name
// of the class along with the scope resolution operator (::). Let’s do this now:

#include "Circle.h"

Circle::Circle(){
    radius = 0;
    pi = 3.142;
}

Circle::Circle(double r){
    radius = r;
    pi = 3.142;
}

double Circle::area(){
    return pi * radius * radius;
}

double Circle::perimeter(){
    return 2 * pi * radius;
}
