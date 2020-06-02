#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    // escriba un programa que calcule el valor de 1!+2!+3!+...+n! (suma de factoriales)

    int n,suma=0,fac=1;

    cout<<"Digite el numero de elementos a sumar: "<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){
        fac*=i;
        suma+=fac;
    }
    cout<<"la suma de los factores es: "<<suma<<endl;

    getch();
    return 0;
}
