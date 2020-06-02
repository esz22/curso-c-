#include <iostream>

using namespace std;

int main()
{
    //hacer un programa que simule un cajero automatico con un saldo inicial de 1000 dolares

    float saldo=1000, extra, retiro;
    int opc;

    cout << "\t bienvenido al cajero" << endl;
    cout << "1. ingresar dinero a tu cuenta" << endl;
    cout << "2. retirar dinero de la cuenta" << endl;
    cout << "3. salir" << endl;
    cin>>opc;


    switch(opc){
        case 1:
            cout<<"Digite la cantidad de dinero a ingresar: ";
            cin>>extra;
            saldo+=extra;
            cout<<"Dinero en cuenta: "<<saldo<<endl;break;
        case 2:
            cout<<"Digite la cantidad de dinero a retirar: ";
            cin>>retiro;
            if(retiro>saldo){
                cout<<"no tienes tanto dinero"<<endl;
            }
            else{
                saldo-=retiro;
                cout<<"Dinero en cuenta: "<<saldo<<endl;break;
            }
        case 3:
            break;
        default:
            break;

    }
    return 0;
}
