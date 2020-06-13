/*Defina una estructura que sirva para representar a una persona. La estructura debe contener dos campos: el nombre
 de la persona y un valor de tipo logico de discapacidad. Realice un programa que dado un vector
 de personas rellene dos nuevos vectores: uno que contenga las personas que no tienen discapacidad y otro que contenga
 las personas con discapacidad
*/

#include <iostream>
#include <stdlib.h>
#include <cstdio>
#include <vector>

using namespace std;

struct persona{
    string nombre;
    bool discapacidad;
};

int main()
{
    vector <struct persona> sanos;
    vector <struct persona> disc;
    int n;

    cout<<"Digite el numero de pacientes: "<<endl;
    cin>>n;

    struct persona paciente[n];

    for(int i=0;i<n;i++){
        fflush(stdin);
        cout<<"\nNombre del paciente "<<i+1<<": "<<endl;
        getline(cin,paciente[i].nombre);
        cout<<"Tiene discapacidad? 0-1"<<endl;
        cin>>paciente[i].discapacidad;
        if(paciente[i].discapacidad){
            disc.push_back(paciente[i]);
        }
        else{
            sanos.push_back(paciente[i]);
        }
    }

    cout<<"\nLista de personas sin discapacidad:"<<endl;
    for(int i=0;i<sanos.size();i++){
        cout<<sanos.at(i).nombre<<endl;
    }
    cout<<"\nLista de personas con discapacidad: "<<endl;
    for(int i=0;i<disc.size();i++){
        cout<<disc.at(i).nombre<<endl;
    }


    system("pause");
    return 0;
}
