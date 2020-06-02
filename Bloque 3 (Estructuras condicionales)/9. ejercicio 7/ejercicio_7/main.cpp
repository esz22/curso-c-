#include <iostream>

using namespace std;

int main()
{
    //escriba un programa que solicite una edad (un enteri) e indique en la salida estandar si la edad intoducida esta en el rango 18-25


    int edad;

    cout <<"Digita tu edad"<<endl;
    cin >>edad;

    if(edad>=18 && edad <=25){
        cout << "Tu edad esta dentro del rango" << endl;
    }
    else{
        cout << "Edad fuera de rango" << endl;
    }
    return 0;
}
