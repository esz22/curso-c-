/*
utilizar 2 estructuras del problema 5, pero ahora pedir los datos para N alumnos, y calcular cual de todos tiene el mejor promedio
*/
#include <iostream>
#include <stdlib.h>
#include <cstdio>

using namespace std;


struct calificaciones{
    float nota1;
    float nota2;
    float nota3;
};
struct alumno{
    string nombre;
    char sexo;
    int edad;
    struct calificaciones notas;
};

int main()
{
    int n;
    int mejor=-999999;
    int pos;

    cout<<"Digite el numero de alumnos: "<<endl;
    cin>>n;

    struct alumno al[n];

    for(int i=0;i<n;i++){
        int promedio;
        fflush(stdin);
        cout<<"\ningrese el nombre del alumno "<<i+1<<": "<<endl;
        getline(cin,al[i].nombre);
        cout<<"ingrese el sexo del alumno "<<i+1<<": "<<endl;
        cin>>al[i].sexo;
        cout<<"ingrese la edad del alumno "<<i+1<<": "<<endl;
        cin>>al[i].edad;
        cout<<"ingrese la primer nota del alumno "<<i+1<<": "<<endl;
        cin>>al[i].notas.nota1;
        cout<<"ingrese la segunda nota del alumno "<<i+1<<": "<<endl;
        cin>>al[i].notas.nota2;
        cout<<"ingrese la tercer nota del alumno "<<i+1<<": "<<endl;
        cin>>al[i].notas.nota3;

        promedio=(al[i].notas.nota1+al[i].notas.nota2+al[i].notas.nota3)/3;
        if(promedio>mejor){
            mejor=promedio;
            pos=i;
        }
    }

    cout<<"\nDatos del alumno con mejor promedio:"<<endl;
    cout<<"nombre: "<<al[pos].nombre<<endl;
    cout<<"sexo: "<<al[pos].sexo<<endl;
    cout<<"edad: "<<al[pos].edad<<endl;
    cout<<"promedio: "<<mejor<<endl;

    system("pause");
    return 0;
}
