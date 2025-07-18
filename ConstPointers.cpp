#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int savings = 10000;
    const int savings2 = 50000;

    int* const savingsPtr = & savings;

    // these 2 are the same
    const int* savingsPtr2 = &savings2;
    int const* savingsPtr3 = &savings2;

    const int* savingsPtr4 = &savings2;

    cout << savings << endl;
    cout << savings2 << endl;

}