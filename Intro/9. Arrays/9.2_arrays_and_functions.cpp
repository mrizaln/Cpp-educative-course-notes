/* To pass an array to a function, the syntax is 

    ReturnType FunctionName (int ArrayName[]){
        // FunctionBody
    }
    int main(){
        // FunctionBody
        FunctionName( ArrayName )
    }
*/

// Arrays are passed by reference

#include <iostream>
using namespace std;

// print the values of an array
void print_array(int number[], int size) {
  for (int i = 0; i < size; i++) {
    cout << number[i] << " ";
  }
  cout << endl;
}

// modify_array function
void modify_array(int number[], int size) {
  for (int i = 0; i < size; i++) {
    // If value less tha 50 set it to -1
    if (number[i] < 50)
      number[i] = -1;
  }
  cout << "Values of array inside the function:" << endl;
  print_array(number,size);
}

// main function
int main() {
  int size = 8;
  int number[size] = {67, 89, 56, 43, 29, 15, 90, 67};

  cout << "Values of array before function call:" << endl;
  print_array(number,size);
  modify_array(number, size);
  cout << "Values of array after function call:" << endl;
  print_array(number,size);

}