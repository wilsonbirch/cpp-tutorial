#include <iostream>
#include <vector>
#include <string>

using namespace std;

int multiply(int a, int b) {
    return a*b;
}

int multiply(int a, int b, int c){
    return a*b*c;
}

int multiply(int numbers[], int n) {
    int result = 1;
    for (int i =0; i <n; i++){
        result *=numbers[i];
    }
    return result;
}

double multiply(double a, double b){
    return a*b;
}

string multiply (char c, int n) { 
    string result = "";
    for (int i = 0; i < n; i++){
        result +=c;
    }
    return result;
}

// Functions Overloading or polymorphic Function (poly = many, morph = forms)
// No two functions may have the exact same signature (same # & type of inputs)
int main() {
    int numbers[] = {1,2,3,4,5};
    cout << "5*3 = " << multiply(5,3) << endl; // 5*3 = 15
    cout << "5*3*(-10) = " << multiply(5,3, -10) << endl; // 5*3*(-10) = -150
    cout << "1*2*3*4*5 = " << multiply(numbers, 5) << endl; // 1*2*3*4*5 = 120
    cout << "5.5*5.5 = " << multiply(5.5, 5.5) << endl; // 5.5*5.5 = 30.25
    cout << "'$'*3 = " << multiply('$',3) << endl; // '$'*3 = $$$
    cout << "3*'$' = " << multiply(3, '$') << endl; // 3*'$' = 108 CPP will look for a function that is the best candidate for the inputs, $ converted to ascii int value
}