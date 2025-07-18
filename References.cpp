#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // int savings = 10000;
    // int* savingsPtr = &savings;
    // *savingsPtr += 2000;

    // int& savingsRef = savings; // rSavings, refSavings, savings_ref, savingsRef
    // savingsRef += savings;

    // cout << savings << endl;
    // cout << *savingsPtr << endl;
    // cout << savingsRef << endl;

    // - ---------------------------------------------------------
    // vector<string> courses = {"Chemistry", "Physics", "Calculus"};
    // vector<string>* coursesPtr = &courses;
    // vector<string>& coursesRef = courses;


    // coursesPtr->push_back("French");
    // coursesRef.push_back("Biology");

    //     for (size_t i = 0; i < courses.size(); i++) {
    //     cout << courses[i] << " ";
    // }
    // cout << endl;

    // for (size_t i = 0; i < coursesPtr->size(); i++) {
    //     cout << (*coursesPtr)[i] << " ";
    // }
    // cout << endl;
    
    // for (size_t i = 0; i < coursesRef.size(); i++) {
    //     cout << coursesRef[i] << " ";
    // }
    // cout << endl;

    //  When to use? It is expensive to make copies of variables as C++ wants to do, using the reference does not create a duplicate
    vector<string> courses = {"Chemistry", "Physics", "Calculus"};
    for (size_t i=0; i < courses.size(); i++){
        cout << courses[i] << " ";
    }
    cout <<  endl;

    for (const string& course : courses) {
        cout << course << " ";
    }
    cout << endl;
}