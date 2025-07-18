#include <iostream>
#include <string>
#include <map> // includes multimap
#include <unordered_map>

/*
    A map is a collection of key-value pairs: K -> V
        Keys must be unique but values may not be
        ex. dictionary: words are unique but definitions may be the same

    Order -> by insertion, or by sorted
    In C++:
        Similar to a set, a map is in sorted order
        if this is not important use unordered_map
*/

using namespace std;

int main() {
    map<string, float> fruits;
    fruits["apple"] = 1.10;
    fruits["apple"] = 5.55;
    fruits.at("apple") = 5.56; // .at() only works if key already exists
    fruits.insert(make_pair("banana", 1.5)); // insert will not update existing pair, it will add a new one to the map
    fruits.insert({"orange", 7.5});

    // three ways to loop through a map:
    // for(pair<string, float> fruit : fruits){
    //     cout << fruit.first << " " << fruit.second << endl;
    // }

    // for (map<string, float>::iterator it = fruits.begin(); it != fruits.end(); it++){
    //     cout << it->first << " " << it->second << endl;
    // }

    // for (auto [fruit, price] : fruits){
    //     cout << fruit << " " << price << endl;
    // }

    map<string, float> newFruits {
        {"orange", 2},
        {"pear", 3},
        {"banana", 2.15},
        {"apple", 20.24},
    };

    for (auto [fruit, price] : newFruits){
        cout << fruit << " " << price << endl;
    }
    // sorted order
    // apple 20.24
    // banana 2.15
    // orange 2
    // pear 3

    unordered_map<string, float> unorderedFruits {
        {"orange", 2},
        {"pear", 3},
        {"banana", 2.15},
        {"apple", 20.24},
    };

    for (auto [fruit, price] : unorderedFruits){
        cout << fruit << " " << price << endl;
    }
    // unordered_map
    // banana 2.15
    // apple 20.24
    // pear 3
    // orange 2

    
    multimap<string, float> multimapFruits {
        {"orange", 2},
        {"pear", 3},
        {"banana", 2.15},
        {"apple", 20.24},
    };

    multimapFruits.insert({"lemon", 1.99});

    for (auto [fruit, price] : multimapFruits){
        cout << fruit << " " << price << endl;
    };
    // multimap
    // apple 20.24
    // banana 2.15
    // lemon 1.99
    // orange 2
    // pear 3

    multimapFruits.erase("apple");

    for (auto [fruit, price] : multimapFruits){
        cout << fruit << " " << price << endl;
    };
    // banana 2.15
    // lemon 1.99
    // orange 2
    // pear 3

    multimapFruits.clear() // removes all entries

}