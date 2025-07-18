#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename T>
void Swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void printVector(const vector<T>& vec) {
    for(size_t i =0; i<vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;
}

template <typename T, typename U>
size_t totalSize(const vector<T> vec1, const vector<U> vec2){
    return vec1.size() + vec2.size();
}

// Functions Templates, define functions for different types without having to rewrite the same code
int main() {
    int a = 5;
    int b = 10;
    cout << "a:" << a << " b:" << b << endl; // a:5 b:10
    Swap<int>(a,b); // marking the type here is optional, it will work without this
    cout << "a:" << a << " b:" << b << endl; // a:10 b:5

    string s1 = "apple";
    string s2 = "orange";

    cout << "s1:" << s1 << " s2: " << s2 << endl; // s1:apple s2: orange
    Swap<string>(s1,s2);
    cout << "s1:" << s1 << " s2: " << s2 << endl; // s1:orange s2: apple

    vector<string> cities = {"New York", "London", "Paris"};
    vector<int> numbers = {1,3,5,7,9};
    printVector(cities); // New York London Paris
    printVector(numbers); // 1 3 5 7 9

    cout << "total size: " << totalSize(cities, numbers) << endl; // total size: 8
    cout << "total size: " << totalSize(numbers, cities) << endl; // total size: 8



}