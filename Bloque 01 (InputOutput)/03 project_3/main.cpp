#include <iostream>

using namespace std;

int main()
{
    /*escribe un programa que lea de la entrada estandar dos numeros y muestre
    en la salida estandar su suma, resta, mitliplicacion y division*/

    int numero1, numero2;
    int suma=0;
    int resta=0;
    double multiplicacion;
    float division;



    cout<<"ingrese el primer numero"<<endl;
    cin>>numero1;
    cout<<"ingrese el segundo numero"<<endl;
    cin >>numero2;

    suma=numero1+numero2;
    resta=numero1-numero2;
    multiplicacion=numero1*numero2;
    division=numero1/numero2;

    cout<<"la suma de los numeros es: "<<suma<<endl;
    cout<<"la resta de los numeros es: "<<resta<<endl;
    cout<< "la multiplicacion de los numeros es: "<<multiplicacion<<endl;
    cout<<"la division de los numeros es: "<<division<<endl;
    return 0;
}
