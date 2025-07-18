#include <iostream>
#include <utility>
#include <string>
#include <vector>


using namespace std;
typedef pair<string,int> Student; // could also be student_t
//  or
using Student = pair<string,int>;

typedef vector<pair<string,int>> StudentList;
//  or
using StudentList = vector<pair<string,int>>;

int main() {
    Student s1("Wilson", 21);
    cout << s1.first << " " << s1.second << endl; // Wilson 21

    StudentList students;
    students.push_back(s1);
    cout << students[0].first << endl;
}