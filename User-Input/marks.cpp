//Marks Calculator

#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int physics; 
    cout << "Enter Physics Marks = ";
    cin >> physics;

    int chemistry;
    cout << "Enter Chemistry Marks = ";
    cin >> chemistry;

    int biology;
    cout << "Enter Biology =" ;
    cin >> biology;

    int total;
    int avg;

    cout << "Total marks = " << (total = physics + chemistry + biology) << endl;
    cout << "Avg marks = " << (avg = total/3) << endl;
    return 0;
}