#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // break - terminate the loop
    // continue - skip the current iteration of the loop

    vector<string> colors = { "Blue", "Red", "Green", "White", "Black"};
    // string targetColor= "Red";
    // bool found = false;

    // for (size_t i =0; i < colors.size(); i++){
    //     cout << i << " " << colors[i] << endl;
    //     if (colors[i] == targetColor){
    //         found = true;
    //         break;
    //     }
    // }
    // cout << targetColor << (found ? " found" : " not found!") << endl;
    // output:
    // 0 Blue
    // 1 Red
    // Red found

    int paintCost = 10;
    vector<string> colorOrder = {"Blue", "Red", "Blue", "Green", "White", "Black"};
    vector<int> quantityOrder = {6, 15, 9, 5, 3, 5};
    int budget = 200;

    for (size_t i =0; i < colorOrder.size(); i++){
        string color = colorOrder[i];
        int quantity = quantityOrder[i];
        int cost = paintCost * quantity;
        cout << "Order#" << i << ": " << color << " x" << quantity << endl;
        if(budget == 0){
            cout << "Out of budget, cancel remaining orders \n\n";
            break;
        }
        if(cost > budget){
            cout << "Skip order, no remaining budget \n\n" << endl;
            continue;
        }
        budget -= cost;
        cout << "-$" << cost << " Remaining Budget: $" << budget << "\n\n";
    }
}