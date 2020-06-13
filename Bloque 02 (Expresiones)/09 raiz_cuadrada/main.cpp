#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    //Realice un programa que calcule el valor que toma la siguiente funcion para valores dadis de x e y;

    float x, y, f=0;


    cout<<"Digite el valor de x: "<<endl;
    cin >>x;
    cout<<"Digite el valor de y: "<<endl;
    cin >>y;


    f=(sqrt(x))/(pow(y,2)-1);
    cout.precision(2);
    cout << "El valor de la funcion f es: " <<f<< endl;
    return 0;
}
