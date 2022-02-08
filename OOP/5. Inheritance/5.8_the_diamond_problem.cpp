// The diamond problem occurs when a derived class inherits the same member from multiple
// parent classes. This causes ambiguity for the compiler.

//        [A]
//       /   \
//     [B]   [C]
//       \   /
//        [D]

#include <iostream>
using namespace std;

class A{
    protected:
    int ID;

    public:
    A() : ID(0) {}
};

class B : public A{
    public:
    int length;
};

class C : public A{
    public:
    int radius;
};

class D : public B, public C{
    public:
    // int getID() { return ID; }  // error: ambiguous reference. both parent B and C has ID as its data member
    // solution
    int getID() { return B::ID; }    // explicitly tells compiler to which ID to use
    // int getID() { return C::ID; }
};

int main_1(){
    D d;
    cout << d.getID();
    return 0;
}

// Other solution: using virtual inheritance
    // With virtual inheritance, only one instance of the base class A is inherited into the derived class DD.
class BB : virtual public A{
    public:
    int length;
};

class CC : virtual public A{
    public:
    int radius;
};

class DD : public BB, public CC{
    public:
    int getID(){ return ID; }
};

int main_2(){
    DD d;
    cout << d.getID();
    return 0;
}


int main(){
    main_1();
    main_2();
}
