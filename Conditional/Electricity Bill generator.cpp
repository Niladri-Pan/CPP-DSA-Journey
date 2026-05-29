#include <iostream>
using namespace std;

int main(){

    
    float U, Bill = 0;      //Unit Consumed & Bill = 0 bcz in c++ if not mentioned it contains garbage value which will give error sometimes in calc....
    cout << "Enter Units Consumed = ";
    cin >> U;


    int Service_charge;
    Service_charge = 50;

    if(U <= 100){
        Bill = U*1;
    }else if(U <=200){
        Bill = (100*1)+((U - 100)*2);     // (U - 100/200) IS the remaining units
    }else{
        Bill = (100*1) + (100*2) + ((U - 200)*2.5);
    }

    Bill = Bill + Service_charge;
    cout << "Electricity Bill Rs. = " << Bill;



    return 0;
}
