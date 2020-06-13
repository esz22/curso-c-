#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    //Realice un programa que lea un valor entero y determine si se trata de un numero par o impar

    int numero;

    cout<<"Digite el valor del numero"<<endl;
    cin>>numero;

    if(numero==0){
        cout<<"el numero es 0"<<endl;
    }
    else if(numero%2==0){
        cout << "el numero es par" << endl;
    }

    else{
        cout << "el numero es impar" << endl;
    }

    return 0;
}
