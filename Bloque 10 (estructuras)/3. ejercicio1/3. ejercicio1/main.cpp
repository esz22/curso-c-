//hacer una estructura llamada corredor en la cual se tendran los siguientes campos:
//nombre, edad, sexo, club, pedir datos al usuario para un corredor y asi una categoria de competicion
//-juvenil <=18 años
//-señor <=40 años
//-veterano >40 años
//posteriormente imprimir todos los datos del corredor, incluida su categoria de competicion

#include <iostream>
#include <conio.h>
#include <cstdio>

using namespace std;

struct corredor{
    string nombre;
    int edad;
    string sexo;
    string club;
};

int main()
{
    struct corredor c1;
    string categoria;

    cout<<"Nombre: "<<endl;
    getline(cin,c1.nombre);
    cout<<"Edad: "<<endl;
    cin>>c1.edad;
    fflush(stdin);
    cout<<"Sexo: "<<endl;
    getline(cin,c1.sexo);
    cout<<"Club: "<<endl;
    getline(cin,c1.club);

    if(c1.edad<=18){
        categoria="juvenil";
    }
    else if(c1.edad<=40){
        categoria="senor";
    }
    else{
        categoria="veterano";
    }

    cout<<"Nombre: "<<c1.nombre<<endl;
    cout<<"Edad: "<<c1.edad<<endl;
    cout<<"Sexo: "<<c1.sexo<<endl;
    cout<<"Club: "<<c1.club<<endl;
    cout<<"Categoria: "<<categoria<<endl;


    getch();
    return 0;
}
