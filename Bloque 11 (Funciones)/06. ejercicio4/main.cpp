/*Escriba un programa en c++ que devuelva la parte fraccionaria de cualquier numero introducido por el usuario.
por ejemplo si se introduce el numero 256.879, deberia desplegarse el numero 879
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

float frac(float x);

int main()
{
    float n;
    cout<<"Digite un numero; "<<endl;
    cin>>n;

    cout<<"\La parte fraccionaria del numero es: "<<frac(n)<<endl;
    system("pause");
    return 0;
}
float frac(float x){
    int aux=x;
    return x-aux;
}
