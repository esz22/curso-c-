#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n;
    cout<<"Digite el tamano del arreglo: "<<endl;
    cin>>n;
    int numeros[n];
    int aux;

    for(int i=0;i<n;i++){
        cout<<"Digite el numero en la posision "<<i<<": "<<endl;
        cin>>numeros[i];
    }

    for(int i=0;i<n;i++){
        if(numeros[i]>numeros[i+1]){
            aux=numeros[i];
            numeros[i]=numeros[i+1];
            numeros[i+1]=aux;
            i=-1;
        }
    }
    cout<<endl;
    for(int i =0;i<n;i++){
        cout<<numeros[i]<<endl;
    }


    getch();
    return 0;
}
