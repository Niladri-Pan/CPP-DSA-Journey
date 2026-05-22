// Area of Equilateral Triangle
#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int s; // length of side
    cout << "Enter Side = ";
    cin >> s;


    float A;
    A = ((s*s)*sqrt(3))/4;

    cout << "Area of Equilateral Triangle = " << A << endl;

    return 0;
}