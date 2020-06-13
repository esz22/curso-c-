/*Realizar un programa que lea un arreglo de estructuras los datos de N empleados
de la empresa y que imprima los datos del empleado con mayor y menor salario.
*/

#include <iostream>
#include <conio.h>
#include <cstdio>

using namespace std;

struct empleado{
    string nombre;
    float salario;
};

int main()
{
    int n;
    float mayor=-9999;
    float menor=9999;
    int posmay;
    int posmen;

    cout<<"Digite el numero de empleados: "<<endl;
    cin>>n;

    struct empleado e1[n];


    for(int i=0;i<n;i++){
        fflush(stdin);
        cout<<"\nNombre del empleado "<<i+1<<": "<<endl;
        getline(cin,e1[i].nombre);
        cout<<"Salario del empleado "<<i+1<<": "<<endl;
        cin>>e1[i].salario;

        if(e1[i].salario>mayor){
            mayor=e1[i].salario;
            posmay=i;
        }
        if(e1[i].salario<menor){
            menor=e1[i].salario;
            posmen=i;
        }
    }

    cout<<"\nDatos del empleado con mayor salario:"<<endl;
    cout<<"Nombre: "<<e1[posmay].nombre<<endl;
    cout<<"Salario: "<<e1[posmay].salario<<endl;

    cout<<"\nDatos del empleado con menor salario:"<<endl;
    cout<<"Nombre: "<<e1[posmen].nombre<<endl;
    cout<<"Salario: "<<e1[posmen].salario<<endl;

    getch();
    return 0;
}
