// rounding number to the nearest 10
// also rotate the number clockwise

#include <iostream>
using namespace std;

void passReference(int *n1, int *n2, int *n3)
{
   int rem;
   int arr[3] = {*n1, *n2, *n3};
   for (int i = 0; i < 3; i++){
      rem = arr[i] % 10;
      if (rem > 5){
         arr[i] = arr[i] + 10 - rem;
      } else {
         arr[i] = arr[i] - rem;
      }
      cout << arr[i] << endl;
   }
   *n1 = arr[2];
   *n2 = arr[0];
   *n3 = arr[1];
}

int main(){
    int n1 = 23432, n2 = 324329, n3 = 4307236;
    passReference(&n1, &n2, &n3);
    cout << n1 << ", " << n2 << ", " << n3;
}