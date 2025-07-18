#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename T, typename U>
bool vectorSearch(const vector<T>& vec, U value) {
    bool found = false;
    for(size_t i =0; i<vec.size(); i++){
        if (vec[i] == value){
            found = true;
            break;
        } 
        continue;
    }
    return found;
}

template <typename T, typename U>
int vectorCount(const vector<T>& vec, U value) {
    int foundCount = 0;
    for(size_t i =0; i<vec.size(); i++){
        foundCount += vec[i] == value;
    }
    return foundCount;
}



int main() {
    vector<string> cities = {"New York", "London", "Paris", "Rome", "Madrid", "Madrid"};
    vector<int> numbers = {1,2,3,4,5,1,10,19,35,1};

    cout << "London found in cities vector: " << vectorSearch(cities, "London") << endl; //true
    cout << "Lisbon found in cities vector: " << vectorSearch(cities, "Lisbon") << endl; //false

    cout << "#1 found in numbers vector: " << vectorSearch(numbers, 1) << endl; //true
    cout << "#20 found in numbers vector: " << vectorSearch(numbers, 20) << endl; //false

    cout << "London found in cities vector this many times: " << vectorCount(cities, "London") << endl; // London found in cities vector this many times: 1
    cout << "Lisbon found in cities vector this many times: " << vectorCount(cities, "Lisbon") << endl; // Lisbon found in cities vector this many times: 0
    cout << "Madrid found in cities vector this many times: " << vectorCount(cities, "Madrid") << endl; // Madrid found in cities vector this many times: 2

    cout << "1 found in numbers vector this many times: " << vectorCount(numbers, 1.0f) << endl; // 1 found in numbers vector this many times: 3
    cout << "35 found in numbers vector this many times: " << vectorCount(numbers, 35) << endl; // 35 found in numbers vector this many times: 1
    cout << "11 found in numbers vector this many times: " << vectorCount(numbers, 11) << endl; // 11 found in numbers vector this many times: 0


}