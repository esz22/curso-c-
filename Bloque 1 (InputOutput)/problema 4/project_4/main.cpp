#include <iostream>

using namespace std;

int main()
{
    /*escribe un programa que lea de la entrada estandar el precio de un producto
    y mueste en la salida estandar el precio del producto al aplicarle el iva*/
    float precio,iva;

    cout <<"ingrese el precio del producto" <<endl;
    cin >>precio;
    iva=precio*0.16;
    precio=precio+iva;
    cout <<"el precio total es: "<<precio<<endl;

    return 0;
}
