#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // useful for tasks that do not require updating or reading every value in a vector

    vector<string> cities = {"New York", "London", "Paris", "Tokyo", "Ottawa"};
    string targetCity = "Paris";
    bool found = false;

    size_t i = 0;
    // while (++i < cities.size()){ // must be pre-increment if i is incremented here
    //     cout << i << ": " << cities[i] << endl;
    // }
    // or
    // while (i < cities.size()){ // must be pre-increment if i is incremented here
    //     cout << i << ": " << cities[i] << endl;
    //     i++;
    // }

    while (found == false){ // must be pre-increment if i is incremented here
        cout << i << ": " << cities[i] << endl;
        if(cities[i] == targetCity){
            found = true;
        }
        i++;
    }
    cout << "targetCity: " << targetCity << " FOUND!" << endl;
}