/*paso de parametros de tipo vector
parametros de la funcion:
void nombreDeLaFuncion(tipo nombreArreglo[], int tamañoArreglo)
llamada a la funcion
nombreDeLaFuncion(nombreArreglo,TamañoArreglo)
*/
//cuadrados de los elementos de un vector

#include <iostream>
#include <stdlib.h>

using namespace std;

void cuadrado(int vec[],int tam);
void imprimir(int vec[],int tam);

int main()
{
    const int tam=5;
    int vec[tam]={1,2,3,4,5};

    cuadrado(vec,tam);
    imprimir(vec,tam);

    system("pause");
    return 0;
}
void cuadrado(int vec[],int tam){
    for(int i=0;i<tam;i++){
        vec[i]*=vec[i];
    }
}
void imprimir(int vec[],int tam){
    for(int i=0;i<tam;i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}
