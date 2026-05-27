// Special Digit

#include <iostream>
using namespace std;

int main (){
    int sp;
    cout << "Enter a Number";
    cin >> sp;

    int first;
    first = sp / 10;

    int second;
    second = sp % 10;

    int sum;
    sum = first + second;
    cout << "Sum = " << sum << endl;

    int product;
    product = first * second;
    cout << "Product = " << product << endl;

    int special;
    special = sum + product;
    

    if(special == sp){
        cout << "Its a Special Digit Number";
    }else{
        cout << "Its not";
    }
    return 0;
    


}







//Pseudo code
//START

// Input number

// Find first digit
// first = number / 10

// Find second digit
// second = number % 10

// Find sum
// sum = first + second

// Find product
// product = first * second

// Find final value
// result = sum + product

// IF result == number
//     Print Special Two Digit Number

// ELSE
//     Print Not a Special Two Digit Number

// END