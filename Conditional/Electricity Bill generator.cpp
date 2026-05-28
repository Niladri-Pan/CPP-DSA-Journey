#include <iostream>
using namespace std;

int main(){

    
    int U;
    cout << "Enter Units Consumed = ";
    cin >> U;
    float Bill;




    if(U >= 100){
        cout <<"Bill = " , Bill = U*40;
    }else if(U >= 200){
        cout << "Bill", Bill = U*50;
    }else if(U > 300){
        cout << "Bill = " , Bill = U*60;
    }
    return 0;
}