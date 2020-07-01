/*Realice una funcion que tome como parametros un vector y su tamaño y dega si el lvector esta ordenado crecientemente,
sugerencia: compruebe que para todas las posiciones del vector, salvo para la 0, el elemento del vector es mayor
o igual que el elemento que le precede en el vector
*/

#include <iostream>
#include <stdlib.h>

bool comprovador(int nums[],int n);

using namespace std;

int main()
{
    int n;
    cout<<"digite el tamano del arreglo: "<<endl;
    cin>>n;

    int arreglo[n];
    bool ordenado;

    for(int i=0;i<n;i++){
        cout<<"elemento de la pocicion: "<<i+1<<endl;
        cin>>arreglo[i];
    }

    ordenado=comprovador(arreglo,n);

    if(ordenado){
        cout<<"\nel arreglo esta ordenado crecientemente"<<endl;
    }
    else{
        cout<<"\nel arreglo no esta ordenado crecientemente"<<endl;
    }

    system("pause");
    return 0;
}
bool comprovador(int nums[],int n){
    bool orden=true;
    for(int i=0;i<n-1;i++){
        if(nums[i+1]<nums[i]){
            orden=false;
            break;
        }
    }
    return orden;
}
