#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //hacer un menu que considere las siguientes opciones:
    //caso1: cubo de un numero
    //caso2: numero par o impar
    //caso3: salir


    int opcion,numero;


    cout << "\t Bienvenido al menu" << endl;
    cout << "1. cubo de un numero" << endl;
    cout << "2. numero par o impar" << endl;
    cout << "3. salir" << endl;
    cin>>opcion;

    switch(opcion){
        case 1:
            cout<<"Digite un numero: ";
            cin>>numero;
            numero=pow(numero,3);
            cout<<"el cubo es: "<<numero<<endl;break;
        case 2:
            cout<<"Digite un numero: ";
            cin>>numero;
            if(numero%2==0){
                cout<<"numero par"<<endl;
            }
            else{
                cout<<"numero impar: "<<endl;break;
            }
        case 3:
            break;
        default:
            break;

    }
    return 0;
}
