#include <iostream>
using namespace std;

int main (){
    int a;
    int b;

    cout << "Enter = ";
    cin >> a;

    cout << "Enter = ";
    cin >> b;

    if(a>b){
        cout << "A is greater than B";
    }else if(a < b){
        cout << "B is greater than A";
    }else{

        cout << "Both are Equal";

    }
    return 0;

}