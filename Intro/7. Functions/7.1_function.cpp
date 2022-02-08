#include <iostream>

using namespace std;

// Function declaration
int make_juice(int water, int fruit);

int main() {
  // Initialize variables apple and water
  int apples = 5;
  int water_glass = 3;
  // Declares a variable juice_glass
  int juice_glass;
  // Calls function make_juice and save its output in juice_glass
  juice_glass = make_juice(water_glass, apples);
  // Prints value of juice_glass
  cout << "Number of juice glass = " << juice_glass;

  return 0;
}
 
// Function definition
int make_juice(int water = 1, int fruit = 3) {
  // Define new  variable juice of int type
  int juice;
  // Adds water in apple and save output in juice
  juice = water + fruit;
  // Prints text on the screen  
  cout << "Your juice is ready" << endl;
  // Returns juice value in output 
  return juice;

}