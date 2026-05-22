// Area of Sector Fomula(circle)
#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int theta; // length of any base


    cout << "Enter angle = ";
    cin >> theta;

    
    int r;
    r = 8;


    float A;  
    A = (3.14*r*r*theta)/360;

    cout << "Area of sector = " << A << endl;

    return 0;
}