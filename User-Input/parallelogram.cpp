// Area of Parallelogram
#include <iostream>
using namespace std;

int main (){
    int b; // length of any base
    int h; // height

    cout << "Enter base = ";
    cin >> b;

    cout << "Enter height = ";
    cin >> h;

    float A;  
    A = (b*h);

    cout << "Area of Parallelogram = " << A << endl;

    return 0;
}