/*Realiza una funcion que tome como parametros un vector y su tamaño y cambie el signo de los elementos del vector
*/

#include <iostream>
#include <conio.h>

using namespace std;

void pedirDatos(int vec[],int nn);
void cambioSigno(int vec[],int nn);
void imprimirArreglo(int vec[], int nn);

int main()
{
    int n;
    cout<<"Digite el tamano del arreglo: "<<endl;
    cin>>n;
    int arreglo[n];

    pedirDatos(arreglo,n);
    cambioSigno(arreglo,n);
    imprimirArreglo(arreglo,n);

    getch();
    return 0;
}

void pedirDatos(int vec[],int nn){
    for(int i=0;i<nn;i++){
        cout<<"Digite el numero en la posicion "<<i+1<<": ";
        cin>>vec[i];
    }
}
void cambioSigno(int vec[],int nn){
    for(int i=0;i<nn;i++){
        vec[i]*=-1;
    }
}
void imprimirArreglo(int vec[], int nn){
    cout<<"\n";
    for(int i=0;i<nn;i++){
        cout<<"El numero en la posicion "<<i+1<<": "<<vec[i]<<endl;
    }
}
