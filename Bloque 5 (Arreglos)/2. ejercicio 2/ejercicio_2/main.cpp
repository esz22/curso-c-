#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    //escribe un programa que defina un vector de numeros y calcule la multiplicacion acumulada de sus elementos
    int n;
    int mult=1;

    cout<<"digite el largo del vector: "<<endl;
    cin>>n;

    int array[n];

    for(int i=0;i<n;i++){
        cout<<"Digite el valor de la pocicion: "<<i+1<<endl;
        cin>>array[i];
        mult*=array[i];
    }

    cout<<"\nLa multiplicacion acumulada es: "<<mult<<endl;

    system("pause");
    return 0;
}
