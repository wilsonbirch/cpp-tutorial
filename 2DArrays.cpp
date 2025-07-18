#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // nested arrays (Arrays containing arrays)
    // 2D arrays = Matrix

    // string currencies[5][3] = {
    //     {"USA", "USD", "DOLLAR"},
    //     {"CANADA", "CAD", "DOLLAR"},
    //     {"UK", "GBP", "POUND"},
    //     {"SPAIN", "EUR", "EURO"},
    //     {"FRANCE", "EUR", "EURO"},
    // };

    // for (int i =0; i<5; i++){
    //     // cout << currencies[i][0] << " " << currencies[i][1] << " " << currencies[i][2] << endl;
    //     for (int j = 0; j<3; j++){
    //         cout << currencies[i][j] << " ";
    //     }
    // }
    // cout << endl;
    // output: USA USD DOLLAR CANADA CAD DOLLAR UK GBP POUND SPAIN EUR EURO FRANCE EUR EURO

    // char tictactoe[3][3] = {
    //     {' ', 'X', ' '}, 
    //     {'O', 'X', 'O'}, 
    //     {' ', ' ', 'X'}
    // };

    // for (int i =0; i<3; i++){
    // // cout << currencies[i][0] << " " << currencies[i][1] << " " << currencies[i][2] << endl;
    //     for (int j = 0; j<3; j++){
    //         cout << tictactoe[i][j];
    //     };
    //     cout << endl;
    // } // output:
      //  X 
      // OXO
      //   X

    vector<vector<string>> studentClasses = {
        {"Chemistry", "Algebra", "English"},
        {"French"},
        {"Chemistry", "Physics"},
        {"English", "Economics", "Statistics"}
    };

    studentClasses[2].push_back("Geography");

    for (size_t i=0; i<studentClasses.size(); i++){
        for (size_t j=0; j<studentClasses[i].size(); j++){
            cout << studentClasses[i][j] << " ";
        }
        cout << endl;
    }
}