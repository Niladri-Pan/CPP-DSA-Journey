//Perfect Square

#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int a;
    cout << "Enter a Number =";
    cin >> a;

    int n;
    n = sqrt(a);

    if(n*n == a){
        cout << "Its an perfect square";
    }else{
        cout << "its not";
    }
    return 0;


}