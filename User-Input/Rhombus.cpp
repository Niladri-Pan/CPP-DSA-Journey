// Area of Rhombus
#include <iostream>
using namespace std;

int main (){
    int d1; // d = diagonal
    int d2;

    cout << "Enter diagoanl side1 = ";
    cin >> d1;

    cout << "Enter diagonal side2 = ";
    cin >> d2;

    float A;
    A = (d1*d2)/2;

    cout << "Area of Rhombus = " << A << endl;

    return 0;
}