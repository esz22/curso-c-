#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    //Desarrolle un programa que lea de la entrada estandar un vector de enteros y determine el mayor elemento del vector
    int n;
    int may;

    cout<<"Digite el tamano del vector"<<endl;
    cin>>n;


    int vec[n];
    for(int i =0;i<n;i++){
        cout<<"Digite el valor de la posicion: "<<i+1<<endl;
        cin>>vec[i];
        if(i==0){
            may=vec[i];
        }
        if(vec[i]>may){
            may=vec[i];
        }
    }

    cout<<"el valor mayor es: "<<may<<endl;

    system("pause");
    return 0;
}
