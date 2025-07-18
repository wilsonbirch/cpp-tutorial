#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // static memory - stack memory (allocated at build/compile time)
    // dynamic memory - heap memory/free store (allocated at run time), needs to be cleaned up
    // heap memory is larger than stack, and is used when you don't know how much memory you need ahead of time

    int savings; //created on the stack
    savings = 10000;
    cout << &savings << " " << savings << endl; // output: 0x5ffecc 10000

    int* savingsPtr = new int(50000); //created on the head with new keywords
    cout << &savingsPtr << endl; // output: 0x5ffec0
    cout << savingsPtr << " " << *savingsPtr << endl; // output: 0x1b5ec0 50000

    delete savingsPtr; // deletes value at this memory address
    savingsPtr = new int(75000); 
    cout << &savingsPtr << endl; // output: 0x5ffec0
    cout << savingsPtr << " " << *savingsPtr << endl; // output: 0x1b5ec0 75000 // same memory address as the previously created savingsPtr, 
                                                      // if not then this would be created at a new address and the old one would be inaccessbile causing a memory leak

    // if a pointer is deleted, and not resused, this would be considered a dangling pointer
    // after deleting assign dangling pointers to nullptr;
}