#include <iostream>
#include <string>

using namespace std;

int main() {

    // and &&, or ||, not !

    // and
    // if onne false, all are false
    // cout << true and false << endl; => false
    // cout << true and true << endl; => true

    // or
    // if one true, returns true
    // cout << true and false << endl; => true
    // cout << true and true << endl; => true
    // cout << false and false << endl; => false

    // not (confusing lol)
    // if !true => false; !false => true

    bool keyUp = false;
    bool keyDown = false;
    bool keyLeft = false;
    bool keyRight = false;

    if(keyUp){
        cout << "Player moves up" << endl;
    }
    if(keyDown){
        cout << "Player moves down" << endl;
    }
    if(keyLeft){
        cout << "Player moves left" << endl;
    }
    if(keyRight){
        cout << "Player moves right" << endl;
    }

    // comparison <, <=, >, >=, ==, !=

    int grade = 98;

    // if(80 <= grade && grade <= 100){
    //      cout << "A" << endl;
    // }
    // etc..

    // ternary operators
    char letterGrade;
    letterGrade = (grade >= 65) ? 'P' : 'F';

    string name;
    int age = 21;
    char sex = 'M';
    // user input
    cout << "Enter your name" << endl;
    cin >> name;
    cout << "Enter your age" << endl;
    cin >> age;
    cout << "Enter your sex" << endl;
    cin >> sex;

    cout << name << endl;
    cout << age << endl;
    cout << sex << endl;


}