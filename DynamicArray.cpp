#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // vector is a DYNAMIC ARRAY
    // dynamic array = an array that resizes when capacity is full
    // capacity is full when size == capacity
    // "resize" by creating a new array with double the capactiy
    // copy all values over to the new array, then destroy previous array

    // vector class has these three data members
    int size = 0;
    int capacity = 4;
    int* data = new int[capacity]; // dynamically allocated array

    int numOfItems;
    cout << "num of elements to add: ";
    cin >> numOfItems;

    for (int i=0; i < numOfItems; i++){
        if(size == capacity){
            cout << "capacity full, doubling capacity from: " << capacity << endl;
            capacity *=2;
            cout << "capacity is now " << capacity << endl;

            int* newData = new int[capacity];

            for (int j=0; j<size;j++){
                newData[j] = data[j];
            }

            delete[] data;
            data = newData;
            newData = nullptr;
        }
        cout << "Enter a value: ";
        cin >> data[size]; // add to end of the array (vector.push_back())
        size++;
    }

    for(int i=0; i <size; i++){
        cout << data[i] << " ";

    }
    cout << endl;

    delete[] data;
    data=nullptr;
}