#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int a[]={3,4,2,1,5};
    int dato;
    bool ban = false;

    dato=4;
    int i=0;
    //busqueda secuencial
    while(ban==0 && i<5){
        if(a[i]==dato){
            ban=true;
        }
        i++;
    }
    if(ban){
        cout<<"El numero a sido encontrado en la posicion: "<<i-1<<endl;
    }
    else{
        cout<<"El numero no existe en el arreglo"<<endl;
    }



    system("pause");
    return 0;
}
