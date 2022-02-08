/* The Structure is a user-defined data type that is used to store variables or arrays 
   of different data types under a single name.

   defining structure:        struct struct_name {
                                 datatype member1;
                                 datatype member2;
                                 ...
                                 datatype member(n);
                              }; // <=== this semicolon is needed


   declaring structure:       struct_name variable_name;

   declaring structure variable in the structure definition:
                              struct struct_name {
                                 datatype member1;
                                 datatype member2;
                                 ...
                                 datatype member(n);
                              } variable1, variable2, variable3; 
*/

#include <iostream>
using namespace std;

struct Student {
   string name;
   int roll_number;
   int marks;
} s1, s2, s3;

int main() {
   Student s4, s5, s6;
   return 0;
}