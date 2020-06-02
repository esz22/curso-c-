#include <iostream>
#include <conio.h>

using namespace std;

void intercambio(float &x, float &y){
    float aux;
    aux=x;
    x=y;
    y=aux;
}

void ordenacionShell(float a[],int n){
    int salto,i,j,k;
    int salto=n/2;

    while(salto>=1){
        for(i=salto;i<n;i++){
            j=i-salto;
            while(j>=0){
                k=j+salto;
                if(a[j]<a[k]){ //par de elementos estan ordenados
                    j=-1;
                }
                else{//par de elementos estan desordenados
                    intercambio(a[j],a[k]);
                    j-=salto;
                }
            }
        }
    }
    salto=salto/2;

}

int main()
{
    int n;
    cout<<"Digite el tamano del arreglo: "<<endl;
    cin>>n;
    float numeros[n];
    int aux;

    for(int i=0;i<n;i++){
        cout<<"Digite el numero en la posision "<<i<<": "<<endl;
        cin>>numeros[i];
    }

    ordenacionShell(numeros,n);

    cout<<endl;
    for(int i =0;i<n;i++){
        cout<<numeros[i]<<endl;
    }

    getch();
    return 0;
}
