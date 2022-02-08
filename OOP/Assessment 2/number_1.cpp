#include <iostream>
#include <string>
using namespace std;

class Average {
   public: 
   int num1;
   int num2;
   int num3;

   Average(int n1,int n2,int n3) {
     num1 = n1;
     num2 = n2;
     num3 = n3;
   }
  
   void print_average() { 
     int avg = (num1 + num2 + num3)/3;
     cout << avg << endl;
   }
};