#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>

using namespace std;

/*
    A set is a collections of unique elements (no duplicates)
    Order -> by insertion, or by sorted
    in C++:
        A set is sorted order, whereas other languages may not be sorted.
        And unordered set is not or ordered by insertion, nor sorted.
    A vector is ordered by insertion (not sorted).
*/

template <typename T>
void print(const T& container){
    for (auto it = container.begin(); it != container.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    vector<char> charVec{'C', 'A', 'B'};
    set<char> charSet {'C', 'A', 'B'};
    unordered_set<char> charSet2 {'C', 'A', 'B'};

    print(charVec);     // C A B, ordered by insertion
    print(charSet);     // A B C, sorted 
    print(charSet2);    // B A C, not ordered by insertion or sorted

    set<string> emailList {"banana@gmail.com", "orange@gmail.com", "banana@yahoo.com"};
    emailList.insert("orange@gmail.com");
    emailList.insert("apple@gmail.com");

    print(emailList);  // apple@gmail.com banana@gmail.com banana@yahoo.com orange@gmail.com, cannot insert duplicates

    emailList.erase("banana@gmail.com");
    print(emailList);   // apple@gmail.com banana@yahoo.com orange@gmail.com

    cout << emailList.size() << endl;   // 3
    cout << emailList.count("orange@gmail.com") << endl;    // 1 
    cout << emailList.count("melon@gmail.com") << endl;     // 0

    multiset<string> multiSetEmailList {"banana@gmail.com", "orange@gmail.com", "banana@yahoo.com", "orange@gmail.com"};
    print(multiSetEmailList);

}