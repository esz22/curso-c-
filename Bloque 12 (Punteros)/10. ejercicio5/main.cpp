/*ejercicio 5: pedir al usuario n numeros, almacenarlos en un arreglo dinamico
posteriormente ordenar los numeros en orden ascendente y mostrarlos en pantalla.
nota. utilizar cualquier metodo de ordenamiento*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void pedir_numeros();
void swapp(int *,int *);
void burbuja(int *, int);
void imprimir(int *,int);

int nNum,*numeros;

int main()
{
    pedir_numeros();
    burbuja(numeros,nNum);
    imprimir(numeros,nNum);

    system("pause");
    return 0;
}

void pedir_numeros(){
    cout<<"Digite el numero de elementos: "<<endl;
    cin>>nNum;

    numeros=new int[nNum];

    for(int i=0;i<nNum;i++){
        cout<<"\ningrese el numero "<<i+1<<": ";
        cin>>numeros[i];
    }
}
void swapp(int *n1, int *n2){
    int aux=*n1;
    *n1=*n2;
    *n2=aux;
}
void burbuja(int *pos, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(*(pos+i)>*(pos+i+1)){
                swapp(pos+i,pos+i+1);
            }
        }
    }
}
void imprimir(int *pos, int n){
    cout<<"\n El arreglo ordenado en forma ascendente:"<<endl;
    for(int i=0;i<n;i++){
        cout<<*(pos+i)<<", ";
    }
    cout<<endl;
}
