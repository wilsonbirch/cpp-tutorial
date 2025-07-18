#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // static memory - stack (allocated at compile time)
    // compile time is when your program is converted from c++ to machine code.
    // dynamic memory - heap (allocated at run time), needs to be cleaned up
    // heap is larger than stack and should be used for when you

    int capacity;
    cout << "How many tickets do you want to buy? ";
    cin >> capacity;

    int* lotteryTickets = new int[capacity];

    for (int i =0; i < capacity; i++){
        cout << "Enter a lottery number: ";
        cin >> lotteryTickets[i];
    }

    for (int j = 0; j < capacity; j++){
        cout << lotteryTickets[j] << " ";
    }
    cout << endl;

    delete[] lotteryTickets;
    lotteryTickets = nullptr;

}