// When we say polymorphism in programming that means something which exhibits many forms or behaviors.
// So far, we have learned that we can add new data and functions to a class through inheritance.
// But what about if we want our derived class to inherit a method from the base class and have a different
// implementation for it? That is when polymorphism comes in, a fundamental concept in OOP paradigm.

#include <iostream>
using namespace std;

class Shape{
    public:
    float getArea(){}
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
    Rectangle r(2, 6);      // creating Rectangle object
    Shape* shape = &r;      // referencing Shape class to Rectangle object

    cout << "Calling Rectangle getArea function: " << r.getArea() << endl;
    cout << "Calling Rectangle from shape pointer: " << shape->getArea() << endl << endl;

    Circle c(5);        // creating Circle object
    shape = &c;

    cout << "Calling Circle getArea function: " << c.getArea() << endl;
    cout << "Calling Circle from shape pointer: " << shape->getArea() << endl << endl;

}


// Polymorphism only works with a pointer and reference types, so we have created a Shape pointer, and pointed 
// to the derived class objects. But due to multiple existences of the same functions in classes, it will get
// confused between which class getArea() function it’s calling. The derived classes function has a different
// implementation but the same name and that’s why we are not getting the expected output.

//=============[ Overriding ]==============
// In object-oriented programming when we allow a subclass or child class to provide a specific
// implementation of a method that is already provided by one of its superclasses or parent classes
// is known as Function Overriding.

// Advantages of the Method Overriding
    // 1. The derived classes can give its own specific implementation to inherited methods without modifying the parent class methods.

    // 2. If a child class needs to use the parent class method, it can use it, and the other classes that want to have different
    //    implementation can use the overriding feature to make changes.

// Key Features of Overriding
    // 1. Overriding needs inheritance and there should be at least one derived class.

    // 2. Derived class/es must have the same declaration, i.e., name, same parameters and same return type of the function as of the base class.

    // 3. The function in derived class/es must have different implementation from each other.

    // 4. The method in the base class must need to be overridden in the derived class.
