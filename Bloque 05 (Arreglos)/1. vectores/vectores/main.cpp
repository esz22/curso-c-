#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    //Escribe un programa que defina un vector de numeros y calcule la suma de sus elementos

    int n;
    int suma=0;

    cout<<"digite el largo del vector"<<endl;
    cin>>n;

    int vector[n];

    for(int i=0;i<n;i++){
        cout<<"Digite el valor "<<i+1<<endl;
        cin>>vector[i];
        suma+=vector[i];
    }
    cout<<"la suma total es: "<<suma<<endl;

    getch();
    return 0;
}
