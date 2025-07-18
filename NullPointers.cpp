#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int a=10, b = 15, c=20;

    cout << "a:" << a << endl; // a:10
    cout << "b:" << b << endl; // b:15
    cout << "c:" << c << endl; // c:20

    int *aPtr = &a, *bPtr = &b, *cPtr = &c;

    cout << "aPtr:" << aPtr << "*aPtr:" << *aPtr << endl; // aPtr:0x5ffeb4*aPtr:10
    cout << "bPtr:" << bPtr << "*bPtr:" << *bPtr << endl; // bPtr:0x5ffeb0*bPtr:15
    cout << "cPtr:" << cPtr << "*cPtr:" << *cPtr << endl; // cPtr:0x5ffeac*cPtr:20

    int *dPtr, *ePtr;
    dPtr = ePtr = nullptr; //C++ 11, NULL, 0
}
