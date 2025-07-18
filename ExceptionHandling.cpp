#include <iostream>
#include <vector>
#include <string>

using namespace std;

void getRoomSlot(const vector<int>& roomSlots, int index){
    int numPeople = roomSlots.at(index);
    cout << "Room " << index << " has " << roomSlots[index] << endl;
}

void setRoomSlot(vector<int>& roomSlots, int index, int numPeople){
    getRoomSlot(roomSlots, index);
    if (roomSlots[index != 0]){
        throw "setRoomSlot - Room is already booked";

    }
    roomSlots[index] = numPeople;
}

int main() {
    vector<int> roomSlots = {0, 20, 25, 0, 0};

    try{
        setRoomSlot(roomSlots, 20, 15);
    }
    catch(const char* errorMessage){
        cerr << errorMessage << endl;
    }
    catch(out_of_range e) {     // will output more descriptive cpp error: vector::_M_range_check: __n (which is 20) >= this->size() (which is 5)
        cerr << e.what() << endl;
    }
    catch(...){
        cerr << "Exception caught" << endl;
    }

    cout << "DONE~!" << endl;
}