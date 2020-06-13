#include <iostream>

using namespace std;

int main()
{
    //escribe la siguiente expresión como expresión en C++ : a/b+1
    float a,b,resultado=0;

    cout <<"Digite el valor de a"<<endl;
    cin >>a;
    cout <<"Digite el valor de b"<<endl;
    cin >>b;

    resultado=(a/b)+1;
    cout.precision(2);   //para redondear a dos digitos la imoresion.
    cout <<"\nEl resultado es: "<<resultado<<endl;

    return 0;
}
