#include <iostream>
using namespace std;

int main (){
    float a,b,c,h;  //h is taken as a st line inside the triangle
    float area, perimeter;

    cout << "Enter the three Sides of Triangle = ";
    cin >> a >> b >> c;

    cout << "Enter the height =";
    cin >> h;

    area = (h*b/2);
    perimeter = (a+b+c);

    cout << "Area of the triangle is = " << area << endl;
    cout << "Perimeter of the triangle is =" << perimeter << endl;
    return 0;

}