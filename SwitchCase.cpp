#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // a switch statement creates a jump/look-up table for comparing a single value
    // instead of going through an if/else ladder, a switch statement maps a value to a case
    // unlike in java we cannot compare std::string with switch case statements

    // HP & MP
    string items[] = {"red potion", "green potion", "blue potion", "hamburger", "super red potion" };
    int item = 4;

    switch(item){
        case 4:
            cout << "Attack strength increased" << endl;

        case 3:
        case 0:
            cout << "Recovered 50 HP" << endl;
            break;

        case 1:
            cout << "Cured poison status" << endl;
            break;
        
        case 2:
            cout << "Recovered 20MP" << endl;
            break;
        
        default:
            cout << "Nothing happened" << endl;
            break;

    }
}