#include <iostream>
#include <vector>

using namespace std;

// recursion example
template <typename T, typename U>
bool vectorSearch(const vector<T>& vec, U element, int index = 0){
    if(index == vec.size()){
        return false; // early exist
    }
    return vec[index] == element || vectorSearch(vec, element, index +1);
}

// recursion imroved example
template <typename T, typename U>
bool vectorSearchR(const vector<T>& vec, U element, int index = 0){
    if(index == vec.size()){
        return false; // early exist
    }
    if (vec[index] == element){
        return true;
    } 
    return vectorSearch(vec, element, index +1);
}

int main() {
    vector<string> cities = {"New York", "Ottawa", "Toronto", "Paris", "Rome"};
    vector<int> numbers = {1,5,15,19,23};

   cout << "Ottawa in cities vector: " <<  vectorSearchR(cities, "Ottawa") << endl;
   cout << "Toronto in cities vector: " <<  vectorSearchR(cities, "Toronto") << endl;
   cout << "Madrid in cities vector: " <<  vectorSearchR(cities, "Madrid") << endl;




}