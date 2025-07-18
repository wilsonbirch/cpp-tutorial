#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // a pointer to a pointer, is simply a pointer that points to another memory location

    // int savings = 50000;
    // int* savingsPtr = &savings;
    // int** savingsPtrPtr = &savingsPtr;

    // cout << "savings: " << &savings << " " << savings << endl; // output: savings: 0x5ffecc 50000
    // cout << "savingsPtr: " << &savingsPtr << " " << savingsPtr << " " << *savingsPtr << endl; // output: savingsPtr: 0x5ffec0 0x5ffecc 50000
    // cout << "savingsPtrPtr: " << &savingsPtrPtr << " " << savingsPtrPtr << " " << *savingsPtrPtr << " " << **savingsPtrPtr << endl; // output: savingsPtrPtr: 0x5ffeb8 0x5ffec0 0x5ffecc 50000

    int rowCount;
    int columnCount;

    cout << "Enter 2 numbers for rowCount and columnCount: ";
    cin >> rowCount >> columnCount;

    int** table = new int*[rowCount];
    for(int i = 0; i < rowCount; i++){
        table[i] = new int[columnCount];
    }

    for (int i = 0; i < rowCount; i++){ // r
        for (int j = 0; j < columnCount; j++){ // c
            table[i][j] = 0;
        }
    }

    for (int i = 0; i < rowCount; i++){ // r
        for (int j = 0; j < columnCount; j++){ // c
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i=0; i < rowCount; i++){
        delete[] table[i];
        table[i] = nullptr;
    }

    delete[] table;
    table = nullptr;
}