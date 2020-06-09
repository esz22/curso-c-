/*Escriba una funcion llamada al_cuadrado() que calcule el cuadrado del valor que se le transmite
y despliegue el resultado. la funcion debera ser capaz de elevar al cuadrado numeros flotantes
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

float al_cuadrado(float x);

int main()
{
    float x;

    cout<<"digite un numero: "<<endl;
    cin>>x;

    cout<<"\nel cuadrado del numero es: "<<al_cuadrado(x)<<endl;

    system("pause");
    return 0;
}

float al_cuadrado(float x){
    return x*x;
}
