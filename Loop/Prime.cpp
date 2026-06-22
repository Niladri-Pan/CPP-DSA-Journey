#include <iostream>
using namespace std;

int main(){
    int n;
    bool isPrime = true; //at first the number is considered as prime  && mmoreover its an variable


    cout << "Enter the Number = "; //accept number from user
    cin >> n;

    if(n <= 1){                        // 1 is not a prime number...
        cout << "Not a Prime Number";
    }else{
        for(int i = 2;i<n; i++){

        if(n%i == 0){              //if its divisible, then its not prime
            bool isPrime = false;
            break;

        }
        
    }
    if(isPrime){
        cout << "Prime Number";
    }else{
        cout << "Not Prime";
    }

    }
    return 0;

    

}