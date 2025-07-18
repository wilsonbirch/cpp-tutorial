#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> courses = {"Chemistry", "Physics", "Calculus"};
    vector<string>* coursesPtr = &courses;

    // arrow operator (* ). = ->
    // (*coursesPtr).push_back("French");
    coursesPtr->push_back("French");
    
    for (size_t i = 0; i < courses.size(); i++) {
        cout << courses[i] << " ";
    }
    cout << endl;

    for (size_t i = 0; i < coursesPtr->size(); i++) {
        cout << (*coursesPtr)[i] << " ";
    }
}