// write a student class with 
// private member variables: name (string type)
//                           mark1 & mark2 (float type)
// member functions : Get_Marks(int marknumber); a function which should return mark1 if marknumber equals 1 and mark2 otherwise.
//                    calc_total(); sum the marks
// two constructors: default
//                   parameterized

#include <iostream>
using namespace std;

class Student{
  private:
        string name;
        float mark1, mark2;
  public:
         Student() {
           name = "";
           mark1 = 0;
           mark2 = 0;
         }
         Student(string na, float ma1,float ma2){ 
           name = na;
           mark1 = ma1;
           mark2 = ma2;
         }
         int GetMarks(int marknumber){
           if (marknumber == 1){ return mark1; }
           else { return mark2; }
         }
         float calc_total(){
           return mark1 + mark2;
         }
};

int main(){
    Student mea("Mea", 65, 78);
    cout << "A student marks" << " marks:" << endl;
    cout << "mark 1: " << mea.GetMarks(1) << endl;
    cout << "mark 2: " << mea.GetMarks(2) << endl;
    cout << "total marks: " << mea.calc_total() << endl;
}