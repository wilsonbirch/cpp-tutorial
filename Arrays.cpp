#include <iostream>
using namespace std;

// Arrays
int main() {

    // int tipOptions[3];
    // tipOptions[0] = 12;
    // tipOptions[1] = 15;
    // tipOptions[2] = 18;
    
    // int tipOptions[3] = {12,15,18};
    // 12
    // 15
    // 18

    // int tipOptions[3] = {true,15,18};
    // 1
    // 15
    // 18

    // int tipOptions[3] = {'W',15,18};
    // 87 ascii value
    // 15
    // 18

    // string languages[3] = {"English", "Spanish", "Italian"};
    // cout << languages[0] << endl;
    // cout << languages[1] << endl;
    // cout << languages[2] << endl;
    // English
    // Spanish
    // Italian

    // string languages[3] = {"English", "Spanish", "Italian"};
    // cout << languages[0] << endl;
    // languages[0] = "French";
    // cout << languages[0] << endl;
    // English
    // French

    // Arrays are not dynamic, the size of an array is FIXED
    // There is no method to check the size of an array if needed:

    // const int tipOptions[] = {12,15,18};
    // cout << sizeof(tipOptions) << endl;
    // cout << sizeof(tipOptions[0]) << endl;
    // cout << sizeof(tipOptions) / sizeof(tipOptions[0]) << endl;
    // 12 total bytes
    // 4  number of bytes for one int
    // 3  length of an array

    // output memory addresses
    // const int tipOptions[] = {12,15,18};
    // cout << tipOptions << endl;
    // 0x5ffe94
    // cout << tipOptions +1 << endl;
    // 0x5ffe98
    // cout << tipOptions +2 << endl;
    // 0x5ffe9c

    // target address = starting address + index*size
    // index*size can be referred to as the offset, this is why first element in an array is 0.

}