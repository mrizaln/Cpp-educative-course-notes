#include <iostream>
using namespace std;

class Circle{
    private:
        int radius;

    public:
    Circle(){
        radius = 0;
    }
    Circle(int r){
        radius = r;
    }
    void print_area(){
        cout << (3.14 * radius * radius) << endl;
    }
};

int main(){
    Circle circle(2);
    circle.print_area();
}