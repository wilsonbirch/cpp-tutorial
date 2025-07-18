#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //  Math + - * / ++ --
    //  CMath man, max, abs, floor, ceil, round, pow, sqrt
    //  Other CMath log, sin, cos, tan, etc

    int x = 20;
    int y = 100;
    cout << min(x,y) << endl;
    cout << max(x,y) << endl;

    int grades[] = {75, 99, 92, 85, 97};
    for (int i = 0; i < 5; i++) {
        grades[i] = min(grades[i] + 5, 100);
    }

    int wilsonAge = 18;
    int wilsonDadAge = 50;

    int ageDifference = abs(wilsonAge - wilsonDadAge);
    cout << ageDifference << endl; //   32

    float a = 12.34;
    float b = 16.47;
    cout << floor(a+b) << endl; //  28  
    cout << ceil(a+b) << endl;  //  29
    cout << round(a+b) << endl; //  29

    // randomIndex = floor(random()*size())
    cout << pow(2,5) << endl; // 32

    int c = 3;
    int d = 4;
    int e = pow(c,2) + pow(d,2); // e^2 = c^2 + d^2
    cout << e << endl; //25

    cout << sqrt(25) << endl;       // 5
    cout << pow(25, 0.5) << endl;   // 5 
    
    float point1[] = {10,25};
    float point2[] = {12,30};

    float distance = sqrt(pow((point1[0] - point2[0]), 2) + pow(point1[1] - point2[1], 2));
    cout << distance << endl; // 5.38516
    
    if(distance <= 6){
        cout << "enemy attacks player" << endl;
    }

}