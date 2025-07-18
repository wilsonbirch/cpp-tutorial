#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

// Iterators are containers tha function like pointers.
// basically generalized wrappers for pointers

// OutputIterator - can write (mutable)
// InputIterator - can read
//      ForwardIterator - can only move forward ++
//          BidirectionalIterator - can move forward ++ and backward --
//              RandomAccessIterator - can jump to a point with + or - number

//  vector/deque - RandomAccess
//  forward_list (singly linked list) - Forward
//  list (doubly linked list) - Bidirectional
//  set/map - Bidirectional

template <typename T>
void print(const T& container){
    auto it = container.begin();
    while (it != container.end()){
        cout << *it << " ";
        it++;
    }
    cout << endl;
}

int main() {
    vector<int> numbers {5, 10, 15, 20, 23};

    cout << *numbers.begin() + 2 << endl; // 7

    auto start = numbers.begin();
    start += 2;
    cout << *start << endl; // 15

    auto end = numbers.end(); //.end() refers to the element 1 past the final element in a vector
    cout << *end << endl; // -1414812757
    cout << *(end-1) << endl; // use end -1 to get the last element: 23

    numbers.insert(numbers.begin(),100);
    auto it = numbers.begin();
    while (it != numbers.end()){
        cout << *it << " ";
        it++;
    }
    cout << endl; // 100 5 10 15 20 23

    numbers.insert(numbers.begin(),101);
    print(numbers); // 101 100 5 10 15 20 23

    // sets in C++ are sorted by default
    set<int> numberSet { 5, 10, 65, 24, 17};
    numberSet.insert(100);
    print(numberSet); // 5 10 17 24 65 100

}