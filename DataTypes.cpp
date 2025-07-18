#include <iostream>

using namespace std;

int main() {
    // numbers - int,float,double
    // int
    20;500;-100;0;
    // float (7 decimal precision)
    1.5f; 9.99f; 3.14f;
    // double (15 decimal precision)
    1.5; 9.99; 3.14;
    // logical - bool
    // bool
    true;false;
    // character - char
    // char, any character within single quotes
    'a';'B';'$';

    // declaring variables
    //  always camelCase
    int myAge = 30;

    float price = 24.99f;

    double newPrice = 24.99;

    char dollar = '$' ;

    const double pi = 3.1415926;

    // not recommended to use auto for setting variables, compiler will just select what works
    auto var = 12345;

    // check variable type
    // typeid(variable).name() will return first letter of type for given variable
    // typeid(newPrice).name() output => d

    // type conversion
    // any non-zero number when set to a bool will return true (1)
    bool hungry = 0; // cout << hungry <<endl; => 0
    bool hungryB = 1234; // cout << hungry <<endl; => 1

    // any true bool will return a value of 1 if converted to an int  
    int hungryIf = false; // cout << hungry <<endl; => 0
    int hungryIt = true; // cout << hungry <<endl; => 1

    // char to int/int to char, ASCII conversion
    char intToChar = 66; // B
    int charToInt = 'A'; // 65

    // char to bool
    bool eh = 'A';

    // declare variables with no value
    int newVar;
    bool newBool;

    newVar=1234;
    newBool=false;

    // declare multiple variables on one line
    // int x,y,z;
    // x=y=z=30;
    // ||
    //int x,y,z=30; // will only set z to 30
    // ||
    //int a=25,b=7,c=3;

    // math
    // cout << 5/2 << endl; => 2, both 5 and 2 are int so an int will be returned

    // float z = 5/2 => 2.5 now we will expect a float

    //  type conversions will apply for math involving char (ASCII) values

    // modulus returns remainder, can only be used with integers
    // cout << 10 % 2 << endl; 

    // include <math.h> /* pow */
    // cout << pow(2,3) << endl; => 8

    int x =10;

    x+=5;

    x-=5;

    x++;

    x--; // can be in front or behind, if placing the ++ || -- in front, increment/decrement first and then returning it.

    ++++x; //is valid will add 2. post increment makes a copy, updates it and returns the copy, pre increment modifys and returns

}