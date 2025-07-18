#include <iostream>
#include <vector>

using namespace std;

int factorialNonRecursion(int n) {
    int result = 1;
    while(n > 1){
        result *= n;
        n -=1;
    }
    return result;
}

// functions that use recursion need a base case or will run forever if certain conditions are met
int factorial(int n) {
    if (n <= 0) {
        return 1;
    }

    return n* factorial(n-1); // factorial(5) -> 5 * factorial(4) -> 5*4* factorial(3) etc.
}

int main() {

    cout << "-5 factorial = " << factorial(-5) << endl; // -5 factorial = 1
    cout << "3 factorial = " << factorial(3) << endl; // 3 factorial = 6
    cout << "5 factorial = " << factorial(5) << endl; // 5 factorial = 120
    cout << "10 factorial = " << factorial(10) << endl; // 10 factorial = 3628800


}