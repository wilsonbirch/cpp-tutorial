#include <iostream>
#include <vector>
#include <string>

using namespace std;

// scope refers to the area where a function or variable is visible and accessible to other code
// function scope: accesible only within the function
// block scope = local scope, accessible only within the block or inner blocks (if/else, for, while)
// file scope = global scope, accessible within entire file

int g_playerHealth = 500;
const MAX_PLAYER_HEALTH = 500;

void takeDamage(int damage){
    playerHealth -= damage;
    if(playerHealth < 0){
        playerHealth = 0;
    }
}

void recover (int health) {
    playerHealth += health;
    if(playerHealth > MAX_PLAYER_HEALTH){
        playerHealth = MAX_PLAYER_HEALTH;
    }
}

int main() {
    takeDamage(200);
    cout << "Player Health: " << playerHealth << endl;
    recover(300);
    cout << "Player Health: " << playerHealth << endl;
}