#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a Number to check:-";
    cin >> n;

    if(n%2==0 && n%5==0){
        cout << "It's Divisible by 2 & 5";
    }else{
        cout << "It's not divisble by either";
    }
    return 0;

}