#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter any Number = ";
    cin >> n;

    int s = 0; //storing initial value
    int t = n; //storing n value in t and then modifying n

    while (n>0){
        int r = n%10; 
        s = s*10+r; // reversed number logic
        n=n/10;
    }
    if(s==t){
        cout << "Its a Palindrome";
    }else{
        cout << "Its not a Palindrome";
    }
    return 0;
    
}