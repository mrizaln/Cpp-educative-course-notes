// Challenge 3: Implement a Father Class

#include <iostream>
using namespace std;

class Father{
    string eye_color;
    string hair_color;

    public:
    Father(){
        eye_color = "";
        hair_color = "";
    }
    Father(string eye_color, string hair_color){
        this->eye_color = eye_color;
        this->hair_color = hair_color;
    }
    void Father_traits(){
        cout << "Eye color: " << eye_color << '\n'
             << "Hair color: " << hair_color << endl;
    }
};

class Daughter :public Father{
    string name;

    public:
    Daughter(){
        name = "";
    }
    Daughter(string name, string eye_color, string hair_color)
    : Father(eye_color, hair_color){
        this->name = name;
    }
    void Daughter_traits(){
        Father_traits();
        cout << name << " has long hair!" << endl;
    }
};

class Son : public Father{
    string name;

    public:
    Son(){
        name = "";
    }
    Son(string name, string eye_color, string hair_color)
    : Father(eye_color, hair_color){
        this->name = name;
    }
    void Son_traits(){
        Father_traits();
        cout << name << " has beard!" << endl;
    }
};

int main(){
    Daughter d("Rapunzel", "Green", "Golden");
    d.Daughter_traits();
    cout << endl;
    Son s("Ralph", "Brown", "Black");
    s.Son_traits();
}