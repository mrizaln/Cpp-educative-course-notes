#include <iostream>
using namespace std;

bool isPrime(int n){
    bool prime = true;
    if (n <= 1){
        prime = false;
    } else {
        for (int i = 2; i <= n / 2; i++){
            if (n % i == 0){
                prime = false;
                break;
            }
        }
    }
    if (prime == true){
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    return prime;
}

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++){
        cout << arr[i] << endl;
    }
}

int main(){
    int count = 0;
    int primes[50];
    for (int i = 0; i < 100; i++){
        if (isPrime(i)){
            primes[count] = i;
            count++;
        }
    }
    print_array(primes, count);
}