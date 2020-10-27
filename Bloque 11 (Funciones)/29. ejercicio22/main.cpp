/*Escribe una funcion escribeNumeros(int ini,int fin) que devuelva en la salida estandar los numeros del ini al fin .
Escriba una version que escriba los numeros en orden ascendente.
escribeNumeros(ini,fin)= ini                                 ,si ini=fin
                         escribeNumeros(ini,fin-1)           ,si fin>ini
*/
#include <iostream>
#include <conio.h>

using namespace std;

int escribeNumeros(int,int);

int main()
{
    int ini;
    int fin;

    cout<<"Digite un inicio: "<<endl;
    cin>>ini;
    cout<<"Digite un final: "<<endl;
    cin>>fin;


    for(int i=ini;i<=fin;i++){
        cout<<escribeNumeros(i,fin)<<", ";
    }


    getch();
    return 0;
}
int escribeNumeros(int ini,int fin){
    if(ini==fin){
        return ini;
    }
    else{
        return escribeNumeros(ini,fin-1);
    }
}
