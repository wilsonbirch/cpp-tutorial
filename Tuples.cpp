#include <iostream>
#include <string>
#include <tuple>

using namespace std;
/*
    Tuples are used to group any number of elements together
    The elements can be of different types
    Not the same as a python tuple, which is more like a const array
*/

int main() {
    tuple<string, string, int> student("Wilson", "Thermodynamics", 98); // name, course, grade

    // cout << student << endl; // can't do this
    // cout << student[0] << endl; // can't do this

    cout << get<0>(student) << endl; // Wilson
    cout << get<1>(student) << endl; // Thermodynamics
    cout << get<2>(student) << endl; // 98

    tuple<string, string, int> newStudent;
    newStudent = make_tuple("Wilson", "Thermodynamics", 94);
    cout << get<0>(newStudent) << endl; // Wilson
    cout << get<1>(newStudent) << endl; // Thermodynamics
    cout << get<2>(newStudent) << endl; // 94

    get<2>(newStudent) = 91;
    cout << get<0>(newStudent) << endl; // Wilson
    cout << get<1>(newStudent) << endl; // Thermodynamics
    cout << get<2>(newStudent) << endl; // 91

    auto[name,course,grade]=newStudent;
    cout << name << endl; // Wilson
    cout << course << endl; // Thermodynamics
    cout << grade << endl; // 91

    string newName;
    string newCourse;
    int newGrade;
    tie(std::ignore, newCourse, newGrade) = newStudent;
    cout << newName << endl; // 
    cout << newCourse << endl; // Thermodynamics
    cout << newGrade << endl; // 91

    cout << get<int>(newStudent) << endl; // 91, to get a single type, it must appear only once within a tuple
}