#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    //Escriba un programa que lea de la salida estandar los dos catetos de un triangulo y escriba en la salida estandar su hipotenisa


    float cateto1,cateto2,hipotenusa=0;


    cout<<"Digite el valor del primer cateto"<<endl;
    cin>>cateto1;
    cout<<"Digite el valor del segundo cateto"<<endl;
    cin>>cateto2;

    hipotenusa=sqrt(pow(cateto1,2)+pow(cateto2,2));

    cout << "La hipotenusa es: "<<hipotenusa << endl;
    return 0;
}
