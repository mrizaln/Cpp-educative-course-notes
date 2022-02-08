/* Arrays and Pointer Arithmetic

Arrays can be represented using pointer arithmetic. We discovered that an array variable
itself is a pointer to the zeroth index of the array. Hence, for an array named arr, *arr is equivalent to arr[0].

*(arr + 1) corresponds to arr[1].
*/

#include <iostream>
using namespace std;

int main() {
    int *arr = new int[10];
    
    for(int i = 0; i < 10 ; i++){
        arr[i] = i;
    }
    
    cout << "arr[0]: " << *arr << endl;
    cout << "arr[3]: " << *(arr + 3) << endl;

    // Pointers also support ++, --, += and -= operators.

    int *p = new int(10);
    cout << p << endl; // The address p points to
    p++;
    cout << p << endl; // The pointer has jumped 4 bytes ahead to a new address
    p--;
    cout << p << endl; // The pointer jumps back to the original address
    p += 1;
    cout << p << endl; // Works the same way as p++
    p -= 1;
    cout << p << endl; // Works the same way as p--

    // Two pointers can be subtracted with the result being an integer (potentially a long integer).
    // Pointers addition is not possible.

    int *q;
    cout << "p: " << p << endl;
    cout << "q: " << q << endl;
    cout << "p - q: " << p - q; 
}