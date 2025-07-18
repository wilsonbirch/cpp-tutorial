#include <iostream>
#include <vector>
#include <string>

using namespace std;

// if this were a vector of integers, would be more efficient to just denote it as int, or double or float or bool etc.
void printVector(const vector<int> vec) {
    for (const int item : vec){
        cout << item << " ";
    }
    cout << endl;
}

// const should be read when values only being read, not needed in any other way
int main() {
    vector<string> cities = {"New York", "Paris", "London"};
    vector<string> fruits = {"Apple", "Banana", "Lemon", "Orange"};
    printVector(cities);

}