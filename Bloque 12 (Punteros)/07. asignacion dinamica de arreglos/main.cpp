#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;


void pedirNotas();
void mostrarNotas();
int numcalif, *calif;

int main()
{
    pedirNotas();
    mostrarNotas();

    delete[] calif;


    getch();
    return 0;
}

void pedirNotas(){
    cout<<"digite el numero de calificaciones: "<<endl;
    cin>>numcalif;
    calif=new int[numcalif];

    for(int i=0;i<numcalif;i++){
        cout<<"ingrese una nota: "<<endl;
        cin>>calif[i];
    }
}
void mostrarNotas(){
    cout<<"\nmostrando notas del usuario: "<<endl;
    for(int i=0;i<numcalif;i++){
        cout<<calif[i]<<endl;
    }
}
