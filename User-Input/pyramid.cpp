#include <iostream>
using namespace std;

int main (){

    int b;
    int s;
    int h;

    cout << "Enter Base Length = ";
    cin >> b;

    cout << "Enter Slant Height = ";
    cin >> s;

    cout << "Enter Height = ";
    cin >> h;

    float BA;
    float SA;
    float V;

    BA = b*b;

    SA = (2*b*s) + (b*b);

    V = (b*b*h)/3.0;

    cout << "Base Area = " << BA << endl;

    cout << "Surface Area = " << SA << endl;

    cout << "Volume = " << V << endl;

    return 0;

}