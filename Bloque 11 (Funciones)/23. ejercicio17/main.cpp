/*Realiza la suma de 2 numeros complejos
*/
#include <iostream>
#include <conio.h>

using namespace std;

struct complejo{
    float real;
    float imaginaria;
}z1,z2;

void PedirDatos();
complejo suma(complejo,complejo);
void muestra(complejo);

int main()
{
    PedirDatos();
    complejo x=suma(z1,z2);
    muestra(x);

    getch();
    return 0;
}
void PedirDatos(){
    cout<<"Digite los datos para el primer numero complejo"<<endl;
    cout<<"\nParte real: ";
    cin>>z1.real;
    cout<<"\nParte imaginaria: ";
    cin>>z1.imaginaria;

    cout<<"\nDigite los datos para el segundo numero complejo"<<endl;
    cout<<"\nParte real: ";
    cin>>z2.real;
    cout<<"\nParte imaginaria: ";
    cin>>z2.imaginaria;

}
complejo suma(complejo z1,complejo z2){
    complejo z3;
    z3.real=z1.real+z2.real;
    z3.imaginaria=z1.imaginaria+z2.imaginaria;
    return z3;
}
void muestra(complejo x){
    cout<<"\nEl resultado de la suma es: "<<x.real<<" , "<<x.imaginaria<<"i"<<endl;
}
