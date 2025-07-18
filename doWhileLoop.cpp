#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // doWhile loops executes code first and then checks the condition, this will ensure at least one iteration

    string guessWord = "Wilson";
    string inputWord;
    int guessTurn = 1;

    do{
        cout << "Guess #" << guessTurn++ << ":" << endl;
        getline(cin, inputWord);
    } while (inputWord != guessWord && !inputWord.empty());

    if(inputWord.empty()){
        cout << "Quit Game!" << endl;
    }
    else {
        cout << "Correct guess: " << inputWord << endl;
    }


}