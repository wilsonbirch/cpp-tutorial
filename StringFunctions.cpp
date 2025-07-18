#include <iostream>
#include <string>

using namespace std;

int main() {
    // string lowerInputUsername;
    // cout << "Enter your username: ";
    // cin >> lowerInputUsername;
    // for(size_t i = 0; i < lowerInputUsername.size(); i++){
    //     lowerInputUsername[i] = tolower(lowerInputUsername[i]);
    // }

    // cout << lowerInputUsername << endl;

    // string higherInputUsername;
    // cout << "Enter your username: ";
    // cin >> higherInputUsername;
    // for(size_t i = 0; i < higherInputUsername.size(); i++){
    //     higherInputUsername[i] = toupper(higherInputUsername[i]);
    // }

    // cout << higherInputUsername << endl;

    string password;
    int digitCount =0;
    int upperCount =0;
    int lowerCount =0;
    bool hasNonAlnum = false;
    cout << "Enter a password (at least 3 digits, 3 lower, 3 upper):";
    cin >> password;

    for (size_t i = 0; i < password.size(); i++){
        char c = password[i];
        digitCount += isdigit(c) != 0;
        lowerCount += islower(c) != 0;
        upperCount += isupper(c) != 0;
        if(isalnum(c) == 0){ // check for valid # or letter
            hasNonAlnum = true;
            break;
        }
    }

    cout << digitCount << endl;
    cout << lowerCount << endl;
    cout << upperCount << endl;
    if(hasNonAlnum){
        cout << "Invalid character included" << endl;

    } else if(digitCount<3 || lowerCount<3 || upperCount<3){
        cout << "Invalid password, must have at least 3 digits, 3 lower, 3 upper" << endl;
    }

}