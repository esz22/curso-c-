#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    //escriba un programa que defina un vector de numeros y muestre en la salida estandar
    //el vector en orden inverso - del ultimo al primer elemento

    int n;

    cout<<"digite el largo del vector: "<<endl;
    cin>>n;

    int array[n];

    for(int i=0;i<n;i++){
        cout<<"Digite el valor de la pocicion: "<<i+1<<endl;
        cin>>array[i];
    }
    for(int i=n-1;i>=0;i--){
        cout<<array[i]<<endl;
    }




    system("pause");
    return 0;
}
