// When our goal is to hide the unnecessary details from the users, we can divide the code into different files.
// This is where header files come into play.

#ifndef CIRCLE_H
#define CIRCLE_H

// A Circle class.
class Circle{
    double radius;
    double pi;
    
    public:
    Circle ();
    Circle(double r);  
    double area();  
    double perimeter();
};
#endif

// The second step is to move all the implementation to a separate file. Let’s call this
    // Circle.cpp