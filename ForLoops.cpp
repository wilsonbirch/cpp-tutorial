#include <iostream>
#include <vector>

using namespace std;

int main() {
    // for (int i=0; i<10; i++){
    //     cout << i << " ";
    // }
    // cout << endl; // output: 0 1 2 3 4 5 6 7 8 9

    // for (int i=0; i<10; ++i){
    //     cout << i << " ";
    // }
    // cout << endl; // output: 0 1 2 3 4 5 6 7 8 9

    // for (int i=0; i<10; i+=2){
    //     cout << i << " ";
    // }
    // cout << endl; // output: 0 2 4 6 8

    // for (int i=0; i<=10; i++){
    //     cout << i << " ";
    // }
    // cout << endl; // output: 0 1 2 3 4 5 6 7 8 9 10

    // for (int i=9; i>=0; i--){
    //     cout << i << " ";
    // }
    // cout << endl; // output: 9 8 7 6 5 4 3 2 1 0

    // factorial calculation
    int factorial = 1;
    int n =3;

    // for (int i=1; i<=n; i++){
    //     factorial *= i;
    // }
    // cout << n << "! = " << factorial << endl; // output:3! = 6

    // user input factorial
    // cout << "Enter a number:";
    // cin >> n;

    // for (int i=1; i<=n; i++){
    //     factorial *= i;
    // }
    // cout << n << "! = " << factorial << endl;

    vector<int> grades = {87, 85, 98, 100, 77, 94};

    cout << "BEFORE" << endl;
    for (size_t i=0; i< grades.size(); i++){
        cout << grades[i] << " ";
    }
    cout << endl; // output: 87 85 98 100 77 94

    for (size_t i=0; i < grades.size(); i++){
         grades[i] += 5;
         if(grades[i] > 100){
            grades[i] = 100;
         }
    }

    cout << "AFTER" << endl;
    for (size_t i=0; i< grades.size(); i++){
        cout << grades[i] << " ";
    }
    cout << endl; // output: 92 90 100 100 82 99


}