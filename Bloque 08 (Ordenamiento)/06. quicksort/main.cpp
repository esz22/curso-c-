#include <iostream>
#include <conio.h>

using namespace std;


void intercambio(float &x, float &y);
void quickSort(float a[],int primero, int ultimo);


int main()
{
    int n;
    cout<<"Digite el tamano del arreglo: "<<endl;
    cin>>n;
    float numeros[n];

    for(int i=0;i<n;i++){
        cout<<"Digite el numero en la posision "<<i<<": "<<endl;
        cin>>numeros[i];
    }

    quickSort(numeros,0,n-1);

    cout<<endl;
    for(int i =0;i<n;i++){
        cout<<numeros[i]<<endl;
    }

    getch();
    return 0;
}


void intercambio(float &x, float &y){
    float aux;
    aux=x;
    x=y;
    y=aux;
}

void quickSort(float a[],int primero, int ultimo){
    int i,j,central;
    float pivote;
    central=(primero+ultimo)/2;
    pivote=a[central];
    i=primero;
    j=ultimo;

    do{
        while(a[i]<pivote){
          i++;
        }
        while(a[j]>pivote){
          j--;
        }
        if(i<=j){
            intercambio(a[i],a[j]);
            i++;
            j--;
        }
    }while(i<=j);

    if(primero<j){
        quickSort(a,primero,j);//ordenar sublista izquierda
    }
    if(i<ultimo){
        quickSort(a,i,ultimo);//ordenar sublista derecha
    }
}
