// Area of pentagon
#include <iostream>
using namespace std;

int main (){
    int s; // side
    int a; //apothem length

    cout << "Enter Side = ";
    cin >> s;

    cout << "Enter length = ";
    cin >> a;

    float A;
    A = ((5*s*a)/2);

    cout << "Area of pentagon = " << A << endl;

    return 0;
}