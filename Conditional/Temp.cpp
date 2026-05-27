#include <iostream>
using namespace std;

int main (){
    int temp;

    cout << "Enter Temperature = ";
    cin >> temp;

    if(temp <= 0){
        cout << "Very Cold";
    }else if(temp > 0 && temp <= 10){
        cout << "Cold";
    }else if(temp > 10 && temp <= 20){
        cout << "cool out";
    }else if(temp > 20 && temp <= 30){
        cout << "Warm";
    }else if(temp > 30){
        cout << "Hot";
    }
    return 0;


}