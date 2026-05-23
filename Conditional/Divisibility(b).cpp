#include <iostream>
using namespace std;

int main (){
    int n;
    cout << "Enter number = ";
    cin >> n;

    if(n%2 == 0 && n%5 != 0){
        cout << "Divisible by 2";
    }else{
        cout << "not divisible";
    }
    return 0;
}