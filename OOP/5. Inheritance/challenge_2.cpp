// Challenge 2: Implement an Animal Class

#include <iostream>
using namespace std;

class Animal{
    string Name;
    string Sound;

    public:
    Animal(){
        Name = "";
        Sound = "";
    }

    Animal(string Name, string Sound){
        this->Name = Name;
        this->Sound = Sound;
    }

    void Animal_Details(){
        cout << "Animal Name: " << Name << '\n'
             << "Animal Sound: " << Sound << endl;
    }
};

class Dog : public Animal{
    string family;

    public:
    Dog(){
        family = "";
    }

    Dog(string Name, string Sound, string family)
    : Animal(Name, Sound){
        this->family = family;
    }

    void Dog_detail(){
        Animal_Details();
        cout << "Dog's Family: " << family << endl;
    }
};

class Sheep : public Animal{
    string color;

    public:
    Sheep(){
        color = "";
    }

    Sheep(string Name, string Sound, string color)
    : Animal(Name, Sound){
        this->color = color;
    }

    void Sheep_detail(){
        Animal_Details();
        cout << "Sheep Color: " << color << endl;
    }
};

int main(){
    Dog d("Pongo", "woof", "Carnivores");
    d.Dog_detail();
    cout << endl;
    Sheep s("Billy", "baaa", "White");
    s.Sheep_detail();
}