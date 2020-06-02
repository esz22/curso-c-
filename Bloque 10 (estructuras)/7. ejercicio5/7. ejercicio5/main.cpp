/*Hacer 2 estructuras una llamada promedio que tendra los siguientes campos: nota1, nota2, nota3.
y otro llamada alumno que tendra los siguientes campos: nombre, sexo, edad; hacer que la estructura promedio este
anidada en la estructura alunmo, luego pedir todos los datos para un alumno, luego calcular su promedio
y por ultimo imprimir todos sus datos incluidos el promedio
*/
#include <iostream>
#include <conio.h>
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
    int promedio=0;
    struct alumno al;

    fflush(stdin);
    cout<<"ingrese su nombre: "<<endl;
    getline(cin,al.nombre);
    cout<<"ingrese su sexo: "<<endl;
    cin>>al.sexo;
    cout<<"ingrese su edad: "<<endl;
    cin>>al.edad;
    cout<<"ingrese su primer nota: "<<endl;
    cin>>al.notas.nota1;
    cout<<"ingrese su segunda nota: "<<endl;
    cin>>al.notas.nota2;
    cout<<"ingrese su tercer nota: "<<endl;
    cin>>al.notas.nota3;

    promedio=(al.notas.nota1+al.notas.nota2+al.notas.nota3)/3;

    cout<<"\nnombre: "<<al.nombre<<endl;
    cout<<"sexo: "<<al.sexo<<endl;
    cout<<"edad: "<<al.edad<<endl;
    cout<<"promedio: "<<promedio<<endl;

    getch();
    return 0;
}
