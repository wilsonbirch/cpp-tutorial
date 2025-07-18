#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int studentGrades[5] = {94, 89, 85, 96, 93};
    // cout << studentGrades << " " // output: 0x5ffeb0
    // cout << studentGrades[0] << endl; // output: 94
    // cout << &(studentGrades[0]) << endl; // output: 0x5ffeb0

    int* studentGradesPtr = studentGrades;
    // cout << studentGradesPtr << endl; // output: 0x5ffeb0
    // cout << *studentGradesPtr << endl; // output: 94

    // cout << studentGrades[2] << endl; // output: 85
    // cout << *(studentGradesPtr + 2) << endl; // output: 85
    // cout << 2[studentGrades] << endl; // output: 85
    // cout << *(2 + studentGradesPtr) << endl; // output: 85

    // for (int i = 0; i<5; i++){
    //     cout << i << ": " << studentGrades[i] << " " << i[studentGrades] << " " << *(studentGradesPtr + i) << " " << *(i + studentGradesPtr) << endl;
    // }

    // studentGradesPtr++; // studentGradesPtr += 1
    // cout << *studentGradesPtr << endl; // output: 89
    // studentGradesPtr--; // studentGradesPtr -= 1
    // cout << *studentGradesPtr << endl; // output: 94
    
    for (int i = 0; i<5; i++){
        cout << i << ": " << studentGradesPtr << " " << *studentGradesPtr << endl;
        studentGradesPtr++;
    }
    // output:
    //  0: 0x5ffeb0 94
    //  1: 0x5ffeb4 89
    //  2: 0x5ffeb8 85
    //  3: 0x5ffebc 96
    //  4: 0x5ffec0 93
}