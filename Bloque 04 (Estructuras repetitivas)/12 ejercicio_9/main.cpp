#include <iostream>

using namespace std;

int main()
{
    //escriba un programa que calcule el valor de: 1*2*3*...*n (factorial de un numero)

    int numero,factorial=1;


    cout<<"Digite un numero: "<<endl;
    cin>>numero;

    for(int i=1;i<=numero;i++){
        factorial*=i;
    }

    cout << "El factorial del numero "<<numero<<"es: "<<factorial << endl;
    return 0;
}
