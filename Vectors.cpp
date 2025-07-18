#include <iostream>
#include <vector>

using namespace std;

int main() {
    // vector - dynamic array, it can be resized. There is no need to declare the size, elements can be added and removed
    // std::vector<int> tickets; // array of integers named tickets
    // std::vector<std::string> strTickets; // array of strings named strTickets

    vector<int> tickets;  // when created, a vector of size 0 exists, this would not be null as it might be in a different language
    vector<string> strTickets;

    // tickets.size(); // output: 0
    // tickets.empty(); // output: 1 (true)

    // adding elements to vector:
    tickets.push_back(1000); // tickets[0] output: 1000
    tickets.push_back(2005); // tickets[1] output: 2005
    tickets.push_back(1500); // tickets[2] output: 1500

    vector<int> ticketsArr = {1100, 2010, 1510}; // can be initialized with the "=" or as a constructor

    // access vector elements at different positions
    // ticketsArr[0]; // output: 1100
    // ticketsArr[1]; // output: 2010
    // ticketsArr[2]; // output: 1510
    // ticketsArr[ticketsArr.size() -1]; // output: 1510
    // ticketsArr.back(); // output: 1510
    // ticketsArr.front(); // output: 1100
    // ticketsArr.insert(ticketsArr.begin(), 5000); // output: {5000 1100 2010 1510 }
    // ticketsArr.insert(ticketsArr.end(), 5000); // output: {1100 2010 1510 5000 }

    // access each element in a vector:
    // cout << '{';
    // for(int ticket : ticketsArr){
    //     cout << ticket << ' ';
    // }
    // cout << '}' << endl; // output: {1100 2010 1510 }

    // remove vector elements:
    // ticketsArr.pop_back() // ouput: {1100 2010 }
    // ticketsArr.erase(ticketsArr.begin()) // ouput: {2010 1510 }
    // ticketsArr.erase(ticketsArr.begin(), ticketsArr.begin()+2) // ouput: {1510 }
    // ticketsArr.erase(ticketsArr.begin(), ticketsArr.end()) // ouput: { } // clears entire array
    // ticketsArr.clear() // ouput: { } 


    vector<string> languages{"English", "Spanish", "French"}; 
    // languages[0][5] // output: s // the 5th character in the string at index 0 of the vector

    cout << '{';
    for(string language : languages){
        cout << language << ' ';
    }
    cout << '}' << endl; // output: {English Spanish French }



    


}