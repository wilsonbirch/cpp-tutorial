#include <iostream>
#include <utility>
#include <string>
#include <cmath>

using namespace std;

int getDistance(const pair<int, int>& p1, const pair<int,int>&p2){
    auto[x1,y1] = p1;
    auto[x2,y2] = p2;

    return sqrt(pow(x2 - x1, 2) + pow(y2 -y1, 2));
}

int main() {
    // Pairs are used to group 2 elements together
    // The 2 elements can be of different types

    pair<string, int> student("Wilson", 18);
    cout << student.first << " " << student.second << endl; //  Wilson 18

    pair<string, int> newStudent;
    newStudent = make_pair<string, int>("Wilson", 18);
    cout << newStudent.first << " " << newStudent.second << endl; //  Wilson 18

    pair<string, int> newStudent2;
    newStudent2 = {"Wilson", 18};   // packing
    auto[name,age] = newStudent2;   // unpacking
    cout << name << " " << age << endl; //  Wilson 18

    pair<int, int> p1(10, 15);
    pair<int, int> p2(13, 19);
    cout << getDistance(p1,p2) << endl; //  5

}