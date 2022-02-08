// find then number of pairs of number from an array with its quotient equal to 'n'
// note, the remainder of the pair when divided is 0


#include <iostream>
using namespace std;

int findQuotient(int arr[], int size, int n) 
{
  int count = 0, rem, quot;
  for (int i = 0; i < size; i++){
    for (int j = 0; j < size; j++){
      if (i != j){
        rem = arr[j] % arr[i];
        quot = arr[j] / arr[i];
        if (quot == n && rem == 0){
          count += 1;
        }
      }
    }
  }
  return count;
}

// print the values of an array
void print_array(int number[], int size) {
  for (int i = 0; i < size; i++) {
    cout << number[i] << " ";
  }
  cout << endl;
}

int main(){
  int arr[] = {1,2,3,4,5,6,7,8,9,10};
  cout << findQuotient(arr, 10, 2);
}