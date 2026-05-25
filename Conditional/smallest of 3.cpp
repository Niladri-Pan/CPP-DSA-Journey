#include <iostream>
using namespace std;

int main (){
    int a;
    int b;
    int c;

    cout << "A = ";
    cin >> a;

    cout << "B = ";
    cin >> b;

    cout << "C =  ";
    cin >> c;

    if(a < b && a < c){   // less than b & c
        cout << "A is smallest";

    }else if(b < a && b < c){    // less than a & c
        cout << "B is smallest";

    }else{
        cout << "C is the smallest";
    }

    return 0;

}