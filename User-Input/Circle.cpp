#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int r1;  //outer radius
    cout << "Outer radii = ";
    cin >> r1;

    int r2;  //inner radius
    cout << "Inner radii = ";
    cin >> r2;

    int A;
    int C;


    cout << "Area of Circle = " << (A = 3.14*(r1*r1 - r2*r2)) << endl;
    cout << "Circumference = " << (C = 2* 3.14*r1) << endl; 
}