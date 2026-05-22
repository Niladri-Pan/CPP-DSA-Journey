#include <iostream>
using namespace std;

int main (){

    int a;
    int b;
    int s;
    int h;

    cout << "Enter Apothem Length = ";
    cin >> a;

    cout << "Enter Base Length = ";
    cin >> b;

    cout << "Enter Slant Height = ";
    cin >> s;

    cout << "Enter Height = ";
    cin >> h;

    float BA;
    float SA;
    float V;

    BA = (5.0/2) * a * b;

    SA = ((5.0/2) * a * b) + ((5.0/2) * b * s);

    V = (5.0/6) * a * b * h;

    cout << "Base Area = " << BA << endl;

    cout << "Surface Area = " << SA << endl;

    cout << "Volume = " << V << endl;

    return 0;

}