/*Hacer un arreglo de estructuras llamada atleta para N atletas que contenga los siguientes campos
nombre, pais, numero de medallas y devuelva los datos (nombre, pais) del atleta que ha ganado el mayor numero de medallas
*/

#include <iostream>
#include <stdlib.h>
#include <cstdio>

using namespace std;

struct atleta{
    string nombre;
    string pais;
    int medallas;
};

int main()
{
    int n;
    int may=-1;
    int pos;

    cout<<"Digite el numero de atletas: "<<endl;
    cin>>n;

    struct atleta ats[n];

    for(int i=0;i<n;i++){
        fflush(stdin);
        cout<<"Nombre del atleta "<<i+1<<": "<<endl;
        getline(cin,ats[i].nombre);
        cout<<"Pais del atleta "<<i+1<<": "<<endl;
        getline(cin,ats[i].pais);
        cout<<"Medallas obtenidas del atleta "<<i+1<<": "<<endl;
        cin>>ats[i].medallas;

        if(ats[i].medallas>may){
            may=ats[i].medallas;
            pos=i;
        }
    }
    cout<<"\nDatos del atleta con mas medallas:"<<endl;
    cout<<"Nombre: "<<ats[pos].nombre<<endl;
    cout<<"Pais: "<<ats[pos].pais<<endl;
    cout<<"Numero de medallas: "<<ats[pos].medallas<<endl;

    system("pause");
    return 0;
}
