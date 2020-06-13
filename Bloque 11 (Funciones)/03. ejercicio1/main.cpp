/*Escriba una funcion llamada mult() que acepte dos numeros en punto flotante
como parametros, multiplique estos dos numeros y despliegue el resultado
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void mult(float x, float y);

float n1;
float n2;

int main()
{
    pedirDatos();
    mult(n1,n2);

    system("pause");
    return 0;
}

void pedirDatos(){
    cout<<"Digite 2 numeros: ";
    cin>>n1>>n2;
}
void mult(float x,float y){
    float multip=x*y;

    cout<<"La multiplicacion es: "<<multip<<endl;
}
