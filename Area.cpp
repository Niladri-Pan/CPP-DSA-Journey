#include <iostream>
#include <cmath> //sqrt() comes from the math library.
using namespace std;


int main (){
    int L;
    cout << "Enter Length:- ";
    cin >> L;
    int W;
    cout << "Enter width:- ";
    cin >> W;
    int A;
    int P;
    float D;

    cout << "Area = " << (A = L*W) << endl;
    cout << "Perimeter = " << (P = 2*(L+W)) << endl;
    cout << "Diagonal = " << (D = sqrt((L * L) + (W * W)));
    return 0;
}