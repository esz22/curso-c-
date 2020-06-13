#include <iostream>

using namespace std;



int main()
{
    // Escriba un fragmento de programa que intercambie lo valores de dos variables
    int a,b,aux;

    cout<<"Digite el valor de a: "<<endl;
    cin >>a;
    cout<<"Digite el valor de b: "<<endl;
    cin >>b;

    aux=b;
    b=a;
    a=aux;

    cout << "El intercambio es: " << endl;
    cout <<"a= " <<a<<endl;
    cout <<"b= " <<b<<endl;
    return 0;
}
