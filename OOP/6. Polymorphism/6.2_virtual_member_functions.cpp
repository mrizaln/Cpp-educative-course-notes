// Virtual means existing in appearance but not in reality.

// A virtual function is a member function which is declared within the base class and is overridden by the
// derived class. When you refer to a derived class object using a pointer or a reference to the base class,
// you can call a virtual function for that object and execute the derived class’s version of the function.

// Virtual functions ensure that the correct function is called for an object, regardless of the type of
// reference (or pointer) used for the function call. They are mainly used to achieve Runtime polymorphism.
// Functions are declared with a virtual keyword in a base class. The function resolution call is done at run-time.

#include <iostream>
using namespace std;

class Shape{
    public:
    virtual float getArea(){}
};

class Rectangle : public Shape{
    float width;
    float height;

    public:
    Rectangle(float width, float height){
        this->width = width;
        this->height = height;
    }
    float getArea(){
        return width * height;
    }
};

class Circle : public Shape{
    float radius;

    public:
    Circle(float radius){
        this->radius = radius;
    }
    float getArea(){
        return 3.14159f * radius * radius;
    }
};

int main(){
    Rectangle r(2, 6);
    Shape* shape = &r;

    cout << "Calling Rectangle getArea function: " << r.getArea() << endl;
    cout << "Calling Rectangle from shape pointer: " << (*shape).getArea() << endl << endl;

    Circle c(5);
    shape = &c;

    cout << "Calling Circle getArea function: " << c.getArea() << endl;
    cout << "Calling Circle from shape pointer: " << (*shape).getArea() << endl;
}