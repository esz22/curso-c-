/*Realiza una funcion que tome como parametros un vector de enteros y su tamaño
e imprima un vector con los elementos impares del vector
*/

#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

void pedirDatos(int vec[],int nn);
void imprimirImpares(int vec[],int nn,vector<int>&v1);

int main()
{
    int n;
    cout<<"Digite el tamano del arreglo: "<<endl;
    cin>>n;
    int arreglo[n];
    vector<int>impares;

    pedirDatos(arreglo,n);
    imprimirImpares(arreglo,n,impares);


    system("pause");
    return 0;
}
void pedirDatos(int vec[],int nn){
    for(int i=0;i<nn;i++){
        cout<<"Digite el numero en la posicion "<<i+1<<": ";
        cin>>vec[i];
    }
}
void imprimirImpares(int vec[],int nn,vector<int>&v1){
    for(int i=0;i<nn;i++){
        if(vec[i]%2!=0){
            v1.push_back(vec[i]);
        }
    }
    cout<<"\nImprimiendo elementos impares del arreglo: "<<endl;
    for(int i=0;i<v1.size();i++){
        cout<<v1.at(i)<<endl;;
    }

}
