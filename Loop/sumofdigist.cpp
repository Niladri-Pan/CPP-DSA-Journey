#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter any Number";
    cin >> n;

    int s = 0; //sum of digits are stored

    while(n>0){

        int r = n%10; //extract last digit
        s = s+r;   // add to sum
        n = n/10;   //remove the last digit

    }
    cout << "Sum of its Digits = " << s;  //outside loop

    return 0;
}