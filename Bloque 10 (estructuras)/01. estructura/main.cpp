#include <iostream>
#include <conio.h>

using namespace std;

struct Persona{
    string nombre;
    int edad;
};

int main()
{
    struct Persona persona1, persona2, persona3;


    persona1.nombre="Enrique";
    persona2.nombre="Juan";

    persona1.edad=22;
    persona2.edad=20;

    cout<<"ingrese el nombre de la tercer persona: "<<endl;
    getline(cin,persona3.nombre);
    cout<<"ingrese la edad de la tercer persona: "<<endl;
    cin>>persona3.edad;

    cout<<"Nombre1: "<<persona1.nombre<<endl;
    cout<<"Edad1: "<<persona1.edad<<endl;
    cout<<"Nombre2: "<<persona2.nombre<<endl;
    cout<<"Edad2: "<<persona2.edad<<endl;
    cout<<"Nombre3: "<<persona3.nombre<<endl;
    cout<<"Edad3: "<<persona3.edad<<endl;

    getch();
    return 0;
}
