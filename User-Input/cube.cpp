//volume of a cube

#include <iostream>
using namespace std;

int main(){
    int L,W,H;
    cout << "Enter the measurements = ";
    cin >> L >> W >> H;

    float V = (L*W*H);
    
    cout << "Volume of the cube is = " << V << endl;

    return 0;

    
}