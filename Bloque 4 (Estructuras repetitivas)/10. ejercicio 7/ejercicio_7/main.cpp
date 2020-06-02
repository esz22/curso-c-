#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    //Escriba un programa que calcule el valor de 1+2+3+...n

    int n,suma=0;


    cout<<"Digite el valor de n:";
    cin >>n;

    for(int i =1;i<=n;i++){
        suma+=i;
    }

    cout << "El valor de la suma es: "<<suma << endl;


    system("pause");
    return 0;
}
