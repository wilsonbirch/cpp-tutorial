#include <iostream> // also includes <string>

using namespace std;

// Strings
int main() {

    string myName = "Wilson";
    string myName2("Wilson"); // constructor
    string myName3; // this stores an empty string: ""
    // cout << myName << endl; // output: Wilson
    // cout << myName2 << endl; // output: Wilson
    // cout << myName3 << endl; // output: ""
    // cout << myName.length() << endl; // output: 6

    // We can check if a string is empty a few different ways:
    //cout << (myName.length() ==0) << endl; // output: 0, false because the string is not empty
    //cout << (myName.empty()) << endl; // output: 0, false because the string is not empty

    // To get the last character in a string:
    //cout << myName[myName.length()-1] << endl; // output: n
    // or
    //cout << myName.back() << endl; // output: n

    // To get the first character in a string:
    //cout << myName.front() << endl;  // output: W

    // Strings in C++ are mutable, This does not create another string, but it edits the current one, unique to C++
    string newName = "Wilson";

    // methods for adding to the end of a string:
    //newName[1]= '@';
    //newName += "C++"; // output: W@lsonC++
    //newName.push_back("C++"); // output: W@lsonC++
    // newName.append(5,'*'); // output: Wilson*****
    // 

    //methods for inserting at a certain string index:
    // newName.insert(3, "AAAA"); // output: WilAAAAson
    // cout << newName << endl; 

    //methods for deleting a certain character from a string:
    // newName.pop_back(); // output: Wilso
    // newName.erase(1,3); // output: Won

    // set string to const if you do not want it to change
    const string cantEditName = "Wilson";

    cout << newName << endl; 

}