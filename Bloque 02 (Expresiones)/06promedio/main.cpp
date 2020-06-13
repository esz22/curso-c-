#include <iostream>

using namespace std;

int main()
{
    //Escriba un programa que lea la nota final de 4 alumnos y calcule la nota final media de los cuatro alumnos


    float a,b,c,d, promedio=0;

    cout<<"Digite la nota del primer alumno"<<endl;
    cin >>a;
    cout<<"Digite la nota del segundo alumno"<<endl;
    cin >>b;
    cout<<"Digite la nota del tercer alumno"<<endl;
    cin >>c;
    cout<<"Digite la nota del cuarto alumno"<<endl;
    cin >>d;

    promedio=(a+b+c+d)/4;
    cout << "\nEl promedio es: " <<promedio<< endl;
    return 0;
}
