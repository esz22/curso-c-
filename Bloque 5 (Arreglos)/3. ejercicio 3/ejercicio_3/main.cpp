#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Escribe un programa que lea de la entrada estandar un vector de numeros y muestre en la
    //salida estandar los numeros del vector con sus indices asociados
    int n;

    cout<<"digite el largo del vector: "<<endl;
    cin>>n;

    int array[n];

    for(int i=0;i<n;i++){
        cout<<"Digite el valor de la pocicion: "<<i+1<<endl;
        cin>>array[i];
    }
    for(int i=0;i<n;i++){
        cout<<i<<" -> "<<array[i]<<endl;
    }

    getch();
    return 0;
}
