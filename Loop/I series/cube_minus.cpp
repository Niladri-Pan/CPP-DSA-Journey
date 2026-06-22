#include <iostream>
using namespace std;  //using names from the standard library... so that I don't have to write std:: everytime
//std is a namespace — think of it as a folder that holds all of C++'s built-in tools like cout, cin, endl, string, etc. 
//The using namespace std; line just saves you from typing std:: before every one of them.

int main (){
    for(int n = 1; n<=5; n++){
        cout << (n*n*n)-1 <<" ";
    }
    return 0;

}