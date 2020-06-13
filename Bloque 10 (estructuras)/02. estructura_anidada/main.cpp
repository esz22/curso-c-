#include <iostream>
#include <stdlib.h>
#include <cstdio>

using namespace std;

struct info_direccion{
    string direccion;
    string ciudad;
    string provincia;
};

struct empleado{
    string nombre;
    struct info_direccion direccion_empleado;
    double salario;
};

int main()
{
    struct empleado empleados[2];
    for(int i=0;i<2;i++){
        fflush(stdin); //vaciar el buffer
        cout<<"Digite su nombre: "<<endl;
        getline(cin,empleados[i].nombre);
        cout<<"Digite su direccion: "<<endl;
        getline(cin,empleados[i].direccion_empleado.direccion);
        cout<<"Digite su ciudad: "<<endl;
        getline(cin,empleados[i].direccion_empleado.ciudad);
        cout<<"Digite su provincia: "<<endl;
        getline(cin,empleados[i].direccion_empleado.provincia);
        cout<<"Digite su salario: "<<endl;
        cin>>empleados[i].salario;
        cout<<endl;
    }

    for(int i=0;i<2;i++){
        cout<<"Nombre: "<<empleados[i].nombre<<endl;
        cout<<"direccion: "<<empleados[i].direccion_empleado.direccion<<endl;
        cout<<"ciudad: "<<empleados[i].direccion_empleado.ciudad<<endl;
        cout<<"provincia: "<<empleados[i].direccion_empleado.provincia<<endl;
        cout<<"salario: "<<empleados[i].salario<<endl;
        cout<<endl;
    }

    system("pause");
    return 0;
}
