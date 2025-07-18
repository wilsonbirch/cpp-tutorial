#include <iostream>
#include <vector>
#include <string>


using namespace std;

int main() {
    // FOR EACH loop is a range based FOR loop
    // limitations: cannot edit individual items in the vector, as we loop through the items, unlike forLoops

    vector<int> grades = {87, 85, 98, 100, 77, 94};
    // for (int grade : grades){
    //     cout << grade << " ";
    // }
    // cout << endl; // 87 85 98 100 77 94

    string myName = "Wilson";
    // for (char letter : myName){
    //     cout << letter << " ";
    // }
    // cout << endl; // W i l s o n 

    vector<string> languages = {"English", "Spanish", "French"};
    for (string language : languages){
        cout << language << " ";
    }
    cout << endl;
}