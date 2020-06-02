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


    for (int i=0;i<n;i++){
        aux=numeros[i];
        int pos=i;
        for(int j=i;j<n;j++){
            if(numeros[j+1]<aux && j+1!=n){
                aux=numeros[j+1];
                pos=j+1;
            }
        }
        numeros[pos]=numeros[i];
        numeros[i]=aux;
    }


    cout<<endl;
    for(int i =0;i<n;i++){
        cout<<numeros[i]<<endl;
    }



    getch();
    return 0;
}
