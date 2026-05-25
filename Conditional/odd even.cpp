#include <iostream>
using namespace std;

int main (){
    int chk;  // check odd or even
    cout << "Enter a Number";
    cin >> chk;

    if(chk%2 == 0){
        cout << "Its an Even Number";
    }else{
        cout << "Its an Odd";
    }
    return 0;
}