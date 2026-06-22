#include <iostream>
using namespace std;

int main (){
    int factorial = 1;   //Initial Value

    for(int i = 1; i<= 5; i++){    //set range for factorial 5
        factorial = factorial*i;

        cout << "Factorial = " <<  factorial;

        
    }
    return 0;
}