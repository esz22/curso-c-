#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Escribe un programa que defina un vector de numeros y calcule si existe algun numero en el vector cuyo valor equivale a la suma del resto de numeros del vector
    int numeros[5]={1,2,3,4,10};
    int suma=0,mayor;


    for(int i=0;i<5;i++){
        suma+=numeros[i];
        if(numeros[i]<mayor){
            mayor=numeros[i];
        }
    }
    if(mayor==suma-mayor){
        cout<<"el numero "<<mayor<<"Equivale a la suma de los demas"<<endl;
    }
    else{
        cout<<"No existe ningun numero que sea igual a la suma de los demas"<<endl;
    }


    getch();
    return 0;
}
