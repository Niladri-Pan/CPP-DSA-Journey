#include <iostream>
using namespace std;

int main() {

    int age;

    cout << "Enter Age = ";
    cin >> age;

    char marital_status;

    cout << "Enter Marital Status (M/U) = ";
    cin >> marital_status;

    char sex;

    cout << "Enter Sex (M/F) = ";
    cin >> sex;

    if(age >= 30 && sex == 'M' && marital_status == 'U') {

        cout << "Insured";

    } else if(marital_status == 'M') {

        cout << "Insured";

    } else if(age >= 25 && sex == 'F' && marital_status == 'U') {

        cout << "Insured";

    } else {

        cout << "Not Insured";

    }

    return 0;
}