#include <iostream>
#include <stdlib.h>

using namespace std;

struct persona{
    string nombre;
    int edad;
}p1;

void pedirDatos();
void mostrarDatos(persona);

int main()
{
    //struct persona p1;
    pedirDatos();
    mostrarDatos(p1);

    system("pause");
    return 0;
}
void pedirDatos(){
    cout<<"Digite su nombre: "<<endl;
    getline(cin,p1.nombre);
    cout<<"Digite su edad: "<<endl;
    cin>>p1.edad;
}
void mostrarDatos(persona p){
    cout<<"\nNombre: "<<p.nombre<<endl;
    cout<<"Edad: "<<p.edad<<endl;
}
