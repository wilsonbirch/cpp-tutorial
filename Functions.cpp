#include <iostream>
#include <vector>
#include <string>

using namespace std;

void greetPassByValue(string city); // function signature allows for the main function to appear above the rest, but still be able to call other functions in the file
void greetPassByRef(const string& city);
int multiply(int a, int b); // int return type will only ever return an integer, even if you try to output 30.5 -> output: 30
string multiplyStr(char c, int repetitions);

int main() {
    string result = multiplyStr('A',5);
    cout << result << endl;
}

string multiplyStr(char c, int repetitions){
    string result ="";
    for (int i =0; i<repetitions; i++){
        result +=c;
    }
    return result;
}

int multiply(int a, int b){
    return a*b;
}

void greetPassByValue(string city) { // void denotes nothing will be returned. when using "string city", we are creating a copy this is called a pass by value 
    cout << "Hello " << city << endl;
}

void greetPassByRef(const string& city) { // void denotes nothing will be returned. when using "string& city", we are directly assigning to that value, more memory efficient
    cout << "Hello " << city << endl;
}