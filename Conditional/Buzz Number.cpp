// Buzz Number

#include <iostream>
using namespace std;

int main(){
    int buzz;
    cout << "Enter Number = ";
    cin >> buzz;

    if(buzz % 10 == 7 || buzz % 7 == 0){
        cout << "Its a Buzz Number";
    }else {
        cout << "Its not a Buzz Number";
    }
    return 0;

}