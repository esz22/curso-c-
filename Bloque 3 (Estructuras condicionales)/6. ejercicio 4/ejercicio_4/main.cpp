#include <iostream>

using namespace std;

int main()
{
    //Comprobar si un numero digitado por el usuario es positivo o negativo

    int numero;

    cout << "Digite un numero" << endl;
    cin >>numero;

    if(numero ==0){
        cout<<"el numero es 0"<<endl;
    }
    else if(numero<0){
        cout<<"el numero es negativo"<<endl;
    }
    else{
        cout<<"el numero es positivo"<<endl;
    }
    return 0;
}
