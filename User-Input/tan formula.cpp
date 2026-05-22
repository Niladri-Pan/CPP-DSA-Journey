#include <iostream>
#include <cmath>
using namespace std;

int main (){

    int A;
    int B;

    cout << "Enter A = ";
    cin >> A;

    cout << "Enter B = ";
    cin >> B;

    float Ar;
    float Br;

    Ar = (22.0 / (7.0 * 180)) * A;
    Br = (22.0 / (7.0 * 180)) * B;

    float result;

    result = (tan(Ar) - tan(Br)) / (1 + tan(Ar) * tan(Br));

    cout << "Tan(A-B) = " << result << endl;

    return 0;

}