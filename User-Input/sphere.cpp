//  volume of sphere
#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int r; // radius 
    cout << "Enter radius = ";
    cin >> r;


    float V;
    V = (4*3.14*pow(r,3))/3;

    cout << " volume of sphere = " << V << endl;

    return 0;
}