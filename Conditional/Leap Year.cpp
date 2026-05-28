#include <iostream>
using namespace std;

int main (){
    int year;
    cout << "Enter To check its a Leap year or not = ";
    cin >> year;

    if(year%4==0 || year%100 != 0 || year % 400 == 0){
        cout << "It's a Leap Year";
    }else{
        cout << "This is not a leap year";
    }

    return 0;


}


//Rule of Leap year finding
// its divisible by 4 and 400 not by 100