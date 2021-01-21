/*ejercicio 4: rellenar un arreglo con n numeros, posteriormente utilizando punteros determinar el menor elemento del arreglo*/
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n, *dir_numeros,menor;

    cout<<"digite el tamano del arreglo"<<endl;
    cin>>n;

    int numeros[n];


    for(int i=0;i<n;i++){
        cout<<"digite un numero: "<<endl;
        cin>>numeros[i];
    }
    dir_numeros=numeros;
    menor=*dir_numeros;

    for(int i=0;i<n;i++){
        if(*dir_numeros<menor){
            menor=*dir_numeros;
        }
        dir_numeros++;
    }
    cout<<"el numero menor en el arreglo es: "<<menor<<endl;


    getch();
    return 0;
}
