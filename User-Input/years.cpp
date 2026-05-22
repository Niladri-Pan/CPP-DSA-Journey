#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int total_days;
    cout << "Enter the Number of days = ";
    cin >> total_days;

    float years;
    int months;
    int days;

    years = total_days/365;
    days = total_days%365; // this means dividing the total days with 365 to get years and now multiply with 365 to get the actual days, and now minus it from days you inputed to get the remainng days
    months = days/30;  //remaing days divided by 30 to get months and now multiplied with 2 to get the days and now minus from the previous days left
    days = days%30 ; 


    cout << "Years = " << years << endl;
    cout << "Months = " << months << endl;
    cout << "Remaining Days = " << days << endl;
    return 0;

}