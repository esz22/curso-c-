#include <iostream>

using namespace std;

int main()
{
    //Escribe la siguiente expresion como expreciones en C++: a+(b/(c-d))


    float a,b,c,d, resultado=0;

    cout << "Digite el valor de a: " << endl;
    cin >>a;
    cout << "Digite el valor de b: " << endl;
    cin >>b;
    cout << "Digite el valor de c: " << endl;
    cin >>c;
    cout << "Digite el valor de d: " << endl;
    cin >>d;

    resultado=a+(b/(c-d));

    cout.precision(2);
    cout <<"\nEl resultado es: "<<resultado<<endl;


    return 0;
}
