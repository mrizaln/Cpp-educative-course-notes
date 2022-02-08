// A destructor is the opposite of a constructor. It is called when the object of a class is no longer in use. 
// The object is destroyed and the memory it occupied is now free for future use.

// A class destructor can be created in a similar way to the constructor, except that the destructor is preceded by the ~ keyword.

//A small degree of garbage collection can be easily achieved through smart pointers.
// A smart pointer, the shared_ptr in particular, keeps a reference count for the object it points.
// When the counter comes down to 0, the object is deleted.

#include <iostream>
#include <string>
using namespace std;

class Collector {
  int * list;
  int size;
  int capacity;

  public:
  // Default constructor
  Collector(){
    // We must define the default values for the data members
    list = nullptr;
    size = 0;
    capacity = 0;
  }
  
  // Parameterized constructor
  Collector(int cap){
    // The arguments are used as values
    capacity = cap;
    size = 0;
    list = new int[capacity];
  }

  bool append(int v){
    if (size < capacity) {
      list [ size++ ] = v;
      return true;
    }
    return false;
  }

  // A simple print function
  void dump(){ 
    for(int i = 0 ; i < size ; i++) {
      cout << list[i] << " ";
    }
    cout << endl;
  }
  
  ~Collector(){
    cout << "Deleting the object " << endl;
    if (capacity > 0)
      delete[] list; 
  }
};

int main(){  
  Collector c(10); 
  for (int i = 0 ; i < 15 ; i++){
    cout << c.append(i) << endl;
  }
}
  