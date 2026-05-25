#include <iostream>
using namespace std;

int main (){
    int a;
    int b;

    cout << "Enter = ";
    cin >> a;

    cout << "Enter = ";
    cin >> b;

    if(a < b){
        cout << "A is smaller than B";
    }else if(b < a){
        cout << "B is smaller than A";
    }else{

        cout << "Both are Equal";

    }
    return 0;

}