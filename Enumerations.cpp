#include <iostream>
#include <vector>
#include <string>

using namespace std;

// enumerations (enum) is a special type that represents a group of named integers values

enum Snack {
    CHOCOLATE,   //0
    COOKIES,     //1
    GUMMY_BEARS, //2
    CHIPS        //3
};

enum VendingMachineSnacks {
    VENDING_CHOCOLATE = 413,  
    VENDING_COOKIES = 414,     
    VENDING_GUMMY_BEARS = 600, 
    VENDING_CHIPS = 601        
};

int main() {
    Snack currentItem = CHOCOLATE;

    cout << "CurrentItem: " << currentItem << endl; // CurrentItem: 0

    // Snack currentItem = CHOCOLATE + 1; // cannot do this, converts to an int which can not be assigned to a snack

    Snack currentItemNew = (Snack) (CHOCOLATE + COOKIES); // shouldn't really be doing this but it is an option

    cout << "CurrentItemNew: " << currentItemNew << endl; // CurrentItemNew: 1
    
    VendingMachineSnacks currentVendingSnack = VendingMachineSnacks::VENDING_COOKIES;
    cout << "CurrentVendingSnack: " << currentVendingSnack << endl; // CurrentVendingSnack: 0

    vector<VendingMachineSnacks> items;
    int numberEnterd = CHOCOLATE;
    for (int i = 0; i < 3; i++){
        
    }


}